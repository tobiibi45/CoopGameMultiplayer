// Fill out your copyright notice in the Description page of Project Settings.

#include "Challenges/SExplosiveBarrel.h"
#include "CoopGame.h"
#include "Components/SHealthComponent.h"
#include "Components/StaticMeshComponent.h"
#include "PhysicsEngine/RadialForceComponent.h"
#include "Particles/ParticleSystem.h"
#include "Kismet/GameplayStatics.h"
#include "Net/UnrealNetwork.h"

// Sets default values
ASExplosiveBarrel::ASExplosiveBarrel()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("MeshComp"));
	MeshComp->SetSimulatePhysics(true);
	//Allows radial collison to affect all physics bodies;
	MeshComp->SetCollisionObjectType(ECC_PhysicsBody);
	RootComponent = MeshComp;

	HealthComp = CreateDefaultSubobject<USHealthComponent>(TEXT("HealthComp"));
	//Bind our ON health changed function to the HealthComp
	HealthComp->OnHealthChanged.AddDynamic(this, &ASExplosiveBarrel::OnHealthChanged);

	RadialForceComp = CreateDefaultSubobject<URadialForceComponent>(TEXT("RadialForceComp"));
	RadialForceComp->SetupAttachment(MeshComp);
	RadialForceComp->Radius = EXPLOSION_BARRELL_EXPLOSION_RADIUS;
	RadialForceComp->bImpulseVelChange = true; //More consistent application of the velocity
	RadialForceComp->bAutoActivate = false; //Prevents the barrel from ticking and only uses FireImpulse once. In other words, only explodes once
	RadialForceComp->bIgnoreOwningActor = true; //Ignores itself.. Only Apply force to other physics bodies;

	ExplosionImpulse = EXPLOSION_BARRELL_FORCE;

	bExploded = false;

	SetReplicates(true);
	SetReplicateMovement(true);
}

void ASExplosiveBarrel::OnHealthChanged(USHealthComponent* OwningHealthComp, float Health, float HealthDelta, 
const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser)
{
	if (bExploded)
	{
		return;
	}

	if (Health < EXPLOSION_BARRELL_HEALTH)
	{
		bExploded = true;
		OnRep_Exploded();

		//Boost the barrel upwards to simulate it exploding
		FVector BoostIntensity = FVector::UpVector * ExplosionImpulse;
		MeshComp->AddImpulse(BoostIntensity, NAME_None, true);

		//Damage or Apply force to any physics body within range
		RadialForceComp->FireImpulse();
	}
}

void ASExplosiveBarrel::OnRep_Exploded()
{
	//Play Particle effect
	UGameplayStatics::SpawnEmitterAtLocation(GetWorld(), ExplosionEffect, GetActorLocation());

	//Change Original Material of Barrel to exploded material
	MeshComp->SetMaterial(0, ExplodedMaterial);
}

void ASExplosiveBarrel::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(ASExplosiveBarrel, bExploded);
}
