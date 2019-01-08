// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CoopGame/Public/Challenges/SExplosiveBarrel.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSExplosiveBarrel() {}
// Cross Module References
	COOPGAME_API UClass* Z_Construct_UClass_ASExplosiveBarrel_NoRegister();
	COOPGAME_API UClass* Z_Construct_UClass_ASExplosiveBarrel();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CoopGame();
	COOPGAME_API UFunction* Z_Construct_UFunction_ASExplosiveBarrel_OnHealthChanged();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDamageType_NoRegister();
	COOPGAME_API UClass* Z_Construct_UClass_USHealthComponent_NoRegister();
	COOPGAME_API UFunction* Z_Construct_UFunction_ASExplosiveBarrel_OnRep_Exploded();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UParticleSystem_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_URadialForceComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void ASExplosiveBarrel::StaticRegisterNativesASExplosiveBarrel()
	{
		UClass* Class = ASExplosiveBarrel::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnHealthChanged", &ASExplosiveBarrel::execOnHealthChanged },
			{ "OnRep_Exploded", &ASExplosiveBarrel::execOnRep_Exploded },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASExplosiveBarrel_OnHealthChanged_Statics
	{
		struct SExplosiveBarrel_eventOnHealthChanged_Parms
		{
			USHealthComponent* OwningHealthComp;
			float Health;
			float HealthDelta;
			const UDamageType* DamageType;
			AController* InstigatedBy;
			AActor* DamageCauser;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageCauser;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InstigatedBy;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DamageType_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DamageType;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HealthDelta;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Health;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OwningHealthComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OwningHealthComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASExplosiveBarrel_OnHealthChanged_Statics::NewProp_DamageCauser = { UE4CodeGen_Private::EPropertyClass::Object, "DamageCauser", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SExplosiveBarrel_eventOnHealthChanged_Parms, DamageCauser), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASExplosiveBarrel_OnHealthChanged_Statics::NewProp_InstigatedBy = { UE4CodeGen_Private::EPropertyClass::Object, "InstigatedBy", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SExplosiveBarrel_eventOnHealthChanged_Parms, InstigatedBy), Z_Construct_UClass_AController_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASExplosiveBarrel_OnHealthChanged_Statics::NewProp_DamageType_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASExplosiveBarrel_OnHealthChanged_Statics::NewProp_DamageType = { UE4CodeGen_Private::EPropertyClass::Object, "DamageType", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000082, 1, nullptr, STRUCT_OFFSET(SExplosiveBarrel_eventOnHealthChanged_Parms, DamageType), Z_Construct_UClass_UDamageType_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASExplosiveBarrel_OnHealthChanged_Statics::NewProp_DamageType_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ASExplosiveBarrel_OnHealthChanged_Statics::NewProp_DamageType_MetaData)) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASExplosiveBarrel_OnHealthChanged_Statics::NewProp_HealthDelta = { UE4CodeGen_Private::EPropertyClass::Float, "HealthDelta", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SExplosiveBarrel_eventOnHealthChanged_Parms, HealthDelta), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_ASExplosiveBarrel_OnHealthChanged_Statics::NewProp_Health = { UE4CodeGen_Private::EPropertyClass::Float, "Health", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000000080, 1, nullptr, STRUCT_OFFSET(SExplosiveBarrel_eventOnHealthChanged_Parms, Health), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASExplosiveBarrel_OnHealthChanged_Statics::NewProp_OwningHealthComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASExplosiveBarrel_OnHealthChanged_Statics::NewProp_OwningHealthComp = { UE4CodeGen_Private::EPropertyClass::Object, "OwningHealthComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0010000000080080, 1, nullptr, STRUCT_OFFSET(SExplosiveBarrel_eventOnHealthChanged_Parms, OwningHealthComp), Z_Construct_UClass_USHealthComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_ASExplosiveBarrel_OnHealthChanged_Statics::NewProp_OwningHealthComp_MetaData, ARRAY_COUNT(Z_Construct_UFunction_ASExplosiveBarrel_OnHealthChanged_Statics::NewProp_OwningHealthComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASExplosiveBarrel_OnHealthChanged_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASExplosiveBarrel_OnHealthChanged_Statics::NewProp_DamageCauser,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASExplosiveBarrel_OnHealthChanged_Statics::NewProp_InstigatedBy,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASExplosiveBarrel_OnHealthChanged_Statics::NewProp_DamageType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASExplosiveBarrel_OnHealthChanged_Statics::NewProp_HealthDelta,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASExplosiveBarrel_OnHealthChanged_Statics::NewProp_Health,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASExplosiveBarrel_OnHealthChanged_Statics::NewProp_OwningHealthComp,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASExplosiveBarrel_OnHealthChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Challenges/SExplosiveBarrel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASExplosiveBarrel_OnHealthChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASExplosiveBarrel, "OnHealthChanged", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, sizeof(SExplosiveBarrel_eventOnHealthChanged_Parms), Z_Construct_UFunction_ASExplosiveBarrel_OnHealthChanged_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UFunction_ASExplosiveBarrel_OnHealthChanged_Statics::PropPointers), 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASExplosiveBarrel_OnHealthChanged_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASExplosiveBarrel_OnHealthChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASExplosiveBarrel_OnHealthChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASExplosiveBarrel_OnHealthChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASExplosiveBarrel_OnRep_Exploded_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASExplosiveBarrel_OnRep_Exploded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Challenges/SExplosiveBarrel.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASExplosiveBarrel_OnRep_Exploded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASExplosiveBarrel, "OnRep_Exploded", RF_Public|RF_Transient|RF_MarkAsNative, nullptr, (EFunctionFlags)0x00080401, 0, nullptr, 0, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASExplosiveBarrel_OnRep_Exploded_Statics::Function_MetaDataParams, ARRAY_COUNT(Z_Construct_UFunction_ASExplosiveBarrel_OnRep_Exploded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASExplosiveBarrel_OnRep_Exploded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASExplosiveBarrel_OnRep_Exploded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASExplosiveBarrel_NoRegister()
	{
		return ASExplosiveBarrel::StaticClass();
	}
	struct Z_Construct_UClass_ASExplosiveBarrel_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplodedMaterial_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExplodedMaterial;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionEffect_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ExplosionEffect;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionImpulse_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExplosionImpulse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bExploded_MetaData[];
#endif
		static void NewProp_bExploded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bExploded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RadialForceComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_RadialForceComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HealthComp;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASExplosiveBarrel_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CoopGame,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASExplosiveBarrel_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASExplosiveBarrel_OnHealthChanged, "OnHealthChanged" }, // 3184562310
		{ &Z_Construct_UFunction_ASExplosiveBarrel_OnRep_Exploded, "OnRep_Exploded" }, // 2186218655
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASExplosiveBarrel_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Challenges/SExplosiveBarrel.h" },
		{ "ModuleRelativePath", "Public/Challenges/SExplosiveBarrel.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_ExplodedMaterial_MetaData[] = {
		{ "Category", "FX" },
		{ "ModuleRelativePath", "Public/Challenges/SExplosiveBarrel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_ExplodedMaterial = { UE4CodeGen_Private::EPropertyClass::Object, "ExplodedMaterial", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(ASExplosiveBarrel, ExplodedMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_ExplodedMaterial_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_ExplodedMaterial_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_ExplosionEffect_MetaData[] = {
		{ "Category", "FX" },
		{ "ModuleRelativePath", "Public/Challenges/SExplosiveBarrel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_ExplosionEffect = { UE4CodeGen_Private::EPropertyClass::Object, "ExplosionEffect", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(ASExplosiveBarrel, ExplosionEffect), Z_Construct_UClass_UParticleSystem_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_ExplosionEffect_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_ExplosionEffect_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_ExplosionImpulse_MetaData[] = {
		{ "Category", "FX" },
		{ "ModuleRelativePath", "Public/Challenges/SExplosiveBarrel.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_ExplosionImpulse = { UE4CodeGen_Private::EPropertyClass::Float, "ExplosionImpulse", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080000010001, 1, nullptr, STRUCT_OFFSET(ASExplosiveBarrel, ExplosionImpulse), METADATA_PARAMS(Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_ExplosionImpulse_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_ExplosionImpulse_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_bExploded_MetaData[] = {
		{ "ModuleRelativePath", "Public/Challenges/SExplosiveBarrel.h" },
	};
#endif
	void Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_bExploded_SetBit(void* Obj)
	{
		((ASExplosiveBarrel*)Obj)->bExploded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_bExploded = { UE4CodeGen_Private::EPropertyClass::Bool, "bExploded", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x0020080100000020, 1, "OnRep_Exploded", sizeof(bool), UE4CodeGen_Private::ENativeBool::Native, sizeof(ASExplosiveBarrel), &Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_bExploded_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_bExploded_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_bExploded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_RadialForceComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Challenges/SExplosiveBarrel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_RadialForceComp = { UE4CodeGen_Private::EPropertyClass::Object, "RadialForceComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000a0009, 1, nullptr, STRUCT_OFFSET(ASExplosiveBarrel, RadialForceComp), Z_Construct_UClass_URadialForceComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_RadialForceComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_RadialForceComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_MeshComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Challenges/SExplosiveBarrel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_MeshComp = { UE4CodeGen_Private::EPropertyClass::Object, "MeshComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000a0009, 1, nullptr, STRUCT_OFFSET(ASExplosiveBarrel, MeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_MeshComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_MeshComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_HealthComp_MetaData[] = {
		{ "Category", "Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Challenges/SExplosiveBarrel.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_HealthComp = { UE4CodeGen_Private::EPropertyClass::Object, "HealthComp", RF_Public|RF_Transient|RF_MarkAsNative, (EPropertyFlags)0x00200800000a0009, 1, nullptr, STRUCT_OFFSET(ASExplosiveBarrel, HealthComp), Z_Construct_UClass_USHealthComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_HealthComp_MetaData, ARRAY_COUNT(Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_HealthComp_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASExplosiveBarrel_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_ExplodedMaterial,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_ExplosionEffect,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_ExplosionImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_bExploded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_RadialForceComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_MeshComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASExplosiveBarrel_Statics::NewProp_HealthComp,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASExplosiveBarrel_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASExplosiveBarrel>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASExplosiveBarrel_Statics::ClassParams = {
		&ASExplosiveBarrel::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009000A0u,
		FuncInfo, ARRAY_COUNT(FuncInfo),
		Z_Construct_UClass_ASExplosiveBarrel_Statics::PropPointers, ARRAY_COUNT(Z_Construct_UClass_ASExplosiveBarrel_Statics::PropPointers),
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_ASExplosiveBarrel_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_ASExplosiveBarrel_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASExplosiveBarrel()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASExplosiveBarrel_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASExplosiveBarrel, 953400378);
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASExplosiveBarrel(Z_Construct_UClass_ASExplosiveBarrel, &ASExplosiveBarrel::StaticClass, TEXT("/Script/CoopGame"), TEXT("ASExplosiveBarrel"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASExplosiveBarrel);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
