// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project_Tether_PT/Project_Tether_PTGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProject_Tether_PTGameMode() {}
// Cross Module References
	PROJECT_TETHER_PT_API UClass* Z_Construct_UClass_AProject_Tether_PTGameMode_NoRegister();
	PROJECT_TETHER_PT_API UClass* Z_Construct_UClass_AProject_Tether_PTGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Project_Tether_PT();
// End Cross Module References
	void AProject_Tether_PTGameMode::StaticRegisterNativesAProject_Tether_PTGameMode()
	{
	}
	UClass* Z_Construct_UClass_AProject_Tether_PTGameMode_NoRegister()
	{
		return AProject_Tether_PTGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AProject_Tether_PTGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AProject_Tether_PTGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Project_Tether_PT,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AProject_Tether_PTGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "Project_Tether_PTGameMode.h" },
		{ "ModuleRelativePath", "Project_Tether_PTGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AProject_Tether_PTGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProject_Tether_PTGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AProject_Tether_PTGameMode_Statics::ClassParams = {
		&AProject_Tether_PTGameMode::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x008802A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AProject_Tether_PTGameMode_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AProject_Tether_PTGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AProject_Tether_PTGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AProject_Tether_PTGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AProject_Tether_PTGameMode, 3922704049);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AProject_Tether_PTGameMode(Z_Construct_UClass_AProject_Tether_PTGameMode, &AProject_Tether_PTGameMode::StaticClass, TEXT("/Script/Project_Tether_PT"), TEXT("AProject_Tether_PTGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AProject_Tether_PTGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
