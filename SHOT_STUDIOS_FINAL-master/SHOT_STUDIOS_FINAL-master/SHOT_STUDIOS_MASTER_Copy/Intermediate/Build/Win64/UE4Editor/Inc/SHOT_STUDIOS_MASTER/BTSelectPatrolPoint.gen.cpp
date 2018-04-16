// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "GeneratedCppIncludes.h"
#include "BTSelectPatrolPoint.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBTSelectPatrolPoint() {}
// Cross Module References
	SHOT_STUDIOS_MASTER_API UClass* Z_Construct_UClass_UBTSelectPatrolPoint_NoRegister();
	SHOT_STUDIOS_MASTER_API UClass* Z_Construct_UClass_UBTSelectPatrolPoint();
	AIMODULE_API UClass* Z_Construct_UClass_UBTTaskNode();
	UPackage* Z_Construct_UPackage__Script_SHOT_STUDIOS_MASTER();
// End Cross Module References
	void UBTSelectPatrolPoint::StaticRegisterNativesUBTSelectPatrolPoint()
	{
	}
	UClass* Z_Construct_UClass_UBTSelectPatrolPoint_NoRegister()
	{
		return UBTSelectPatrolPoint::StaticClass();
	}
	UClass* Z_Construct_UClass_UBTSelectPatrolPoint()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			static UObject* (*const DependentSingletons[])() = {
				(UObject* (*)())Z_Construct_UClass_UBTTaskNode,
				(UObject* (*)())Z_Construct_UPackage__Script_SHOT_STUDIOS_MASTER,
			};
#if WITH_METADATA
			static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
				{ "IncludePath", "BTSelectPatrolPoint.h" },
				{ "ModuleRelativePath", "BTSelectPatrolPoint.h" },
			};
#endif
			static const FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
				TCppClassTypeTraits<UBTSelectPatrolPoint>::IsAbstract,
			};
			static const UE4CodeGen_Private::FClassParams ClassParams = {
				&UBTSelectPatrolPoint::StaticClass,
				DependentSingletons, ARRAY_COUNT(DependentSingletons),
				0x00100080u,
				nullptr, 0,
				nullptr, 0,
				nullptr,
				&StaticCppClassTypeInfo,
				nullptr, 0,
				METADATA_PARAMS(Class_MetaDataParams, ARRAY_COUNT(Class_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUClass(OuterClass, ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBTSelectPatrolPoint, 4247251265);
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBTSelectPatrolPoint(Z_Construct_UClass_UBTSelectPatrolPoint, &UBTSelectPatrolPoint::StaticClass, TEXT("/Script/SHOT_STUDIOS_MASTER"), TEXT("UBTSelectPatrolPoint"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBTSelectPatrolPoint);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
