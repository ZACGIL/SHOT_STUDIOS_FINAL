// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "AIPatrolController.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAIPatrolController() {}
// Cross Module References
	SHOT_STUDIOS_MASTER_API UClass* Z_Construct_UClass_AAIPatrolController_NoRegister();
	SHOT_STUDIOS_MASTER_API UClass* Z_Construct_UClass_AAIPatrolController();
	AIMODULE_API UClass* Z_Construct_UClass_AAIController();
	UPackage* Z_Construct_UPackage__Script_SHOT_STUDIOS_MASTER();
// End Cross Module References
	void AAIPatrolController::StaticRegisterNativesAAIPatrolController()
	{
	}
	UClass* Z_Construct_UClass_AAIPatrolController_NoRegister()
	{
		return AAIPatrolController::StaticClass();
	}
	UClass* Z_Construct_UClass_AAIPatrolController()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_AAIController,
				(UObject* (*)())Z_Construct_UPackage__Script_SHOT_STUDIOS_MASTER,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "HideCategories", "Collision Rendering Utilities|Transformation" },
				{ "IncludePath", "AIPatrolController.h" },
				{ "ModuleRelativePath", "AIPatrolController.h" },
			};
#endif
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerKey_MetaData[] = {
				{ "Category", "AI" },
				{ "ModuleRelativePath", "AIPatrolController.h" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_PlayerKey = { UE4CodeGen_Private::EPropertyClass::Name, "PlayerKey", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, STRUCT_OFFSET(AAIPatrolController, PlayerKey), METADATA_PARAMS(NewProp_PlayerKey_MetaData, ARRAY_COUNT(NewProp_PlayerKey_MetaData)) };
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LocationToGoKey_MetaData[] = {
				{ "Category", "AI" },
				{ "ModuleRelativePath", "AIPatrolController.h" },
				{ "ToolTip", "Blackboard Keys" },
			};
#endif
			static const UE4CodeGen_Private::FNamePropertyParams NewProp_LocationToGoKey = { UE4CodeGen_Private::EPropertyClass::Name, "LocationToGoKey", RF_Public|RF_Transient|RF_MarkAsNative, 0x0010000000010001, 1, nullptr, STRUCT_OFFSET(AAIPatrolController, LocationToGoKey), METADATA_PARAMS(NewProp_LocationToGoKey_MetaData, ARRAY_COUNT(NewProp_LocationToGoKey_MetaData)) };
			static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[] = {
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_PlayerKey,
				(const UE4CodeGen_Private::FPropertyParamsBase*)&NewProp_LocationToGoKey,
			};
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<AAIPatrolController>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&AAIPatrolController::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00900280u,
				nullptr, 0,
				PropPointers, ARRAY_COUNT(PropPointers),
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AAIPatrolController, 450316603);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AAIPatrolController(Z_Construct_UClass_AAIPatrolController, &AAIPatrolController::StaticClass, TEXT("/Script/SHOT_STUDIOS_MASTER"), TEXT("AAIPatrolController"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AAIPatrolController);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
