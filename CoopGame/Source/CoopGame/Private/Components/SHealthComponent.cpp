// Fill out your copyright notice in the Description page of Project Settings.

#include "Components/SHealthComponent.h"
#include "CoopGame.h"
#include "Net/UnrealNetwork.h"

static float MaxHealth = 100.0f;

static float MinHealth = DEFAULT_MIN_HEALTH;

// Sets default values for this component's properties
USHealthComponent::USHealthComponent()
{
	DefaultHealth = 100.0f;

	SetIsReplicated(true);
}


// Called when the game starts
void USHealthComponent::BeginPlay()
{
	Super::BeginPlay();

	//Only hook if we are the server
	if (GetOwnerRole() == ROLE_Authority)
	{
		//Subscribed to the actor that this component belongs to
		AActor* MyOwner = GetOwner();
		if (MyOwner)
		{
			MyOwner->OnTakeAnyDamage.AddDynamic(this, &USHealthComponent::HandleTakeDamage);
		}

	}

	Health = DefaultHealth;
}

void USHealthComponent::HandleTakeDamage(AActor*DamagedActor, float Damage, const class UDamageType* DamageType, class AController* InstigatedBy, AActor* DamageCauser)
{

	if (Damage <= 0.0f)
	{
		return;
	}

	Health = FMath::Clamp(Health - Damage, MinHealth, DefaultHealth);

	UE_LOG(LogTemp, Log, TEXT("Health Changed: %s"), *FString::SanitizeFloat(Health));

	OnHealthChanged.Broadcast(this, Health, Damage, DamageType, InstigatedBy, DamageCauser);
}

void  USHealthComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);

	DOREPLIFETIME(USHealthComponent, Health); //Condition is used here so the effects are not played twice
}