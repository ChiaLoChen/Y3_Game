// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Tutorial2/Public/door.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodedoor() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	TUTORIAL2_API UClass* Z_Construct_UClass_Adoor();
	TUTORIAL2_API UClass* Z_Construct_UClass_Adoor_NoRegister();
	UPackage* Z_Construct_UPackage__Script_Tutorial2();
// End Cross Module References
	void Adoor::StaticRegisterNativesAdoor()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(Adoor);
	UClass* Z_Construct_UClass_Adoor_NoRegister()
	{
		return Adoor::StaticClass();
	}
	struct Z_Construct_UClass_Adoor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_door_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_door;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_movePos_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_movePos;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_originalPos_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_originalPos;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_proxDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_proxDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_isProx_MetaData[];
#endif
		static void NewProp_isProx_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_isProx;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Adoor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Tutorial2,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Adoor_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Adoor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "door.h" },
		{ "ModuleRelativePath", "Public/door.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Adoor_Statics::NewProp_door_MetaData[] = {
		{ "Category", "door" },
		{ "ModuleRelativePath", "Public/door.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Adoor_Statics::NewProp_door = { "door", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Adoor, door), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Adoor_Statics::NewProp_door_MetaData), Z_Construct_UClass_Adoor_Statics::NewProp_door_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Adoor_Statics::NewProp_movePos_MetaData[] = {
		{ "Category", "door" },
		{ "ModuleRelativePath", "Public/door.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Adoor_Statics::NewProp_movePos = { "movePos", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Adoor, movePos), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Adoor_Statics::NewProp_movePos_MetaData), Z_Construct_UClass_Adoor_Statics::NewProp_movePos_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Adoor_Statics::NewProp_originalPos_MetaData[] = {
		{ "Category", "door" },
		{ "ModuleRelativePath", "Public/door.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_Adoor_Statics::NewProp_originalPos = { "originalPos", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Adoor, originalPos), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Adoor_Statics::NewProp_originalPos_MetaData), Z_Construct_UClass_Adoor_Statics::NewProp_originalPos_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Adoor_Statics::NewProp_proxDistance_MetaData[] = {
		{ "Category", "door" },
		{ "ModuleRelativePath", "Public/door.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_Adoor_Statics::NewProp_proxDistance = { "proxDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(Adoor, proxDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Adoor_Statics::NewProp_proxDistance_MetaData), Z_Construct_UClass_Adoor_Statics::NewProp_proxDistance_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Adoor_Statics::NewProp_isProx_MetaData[] = {
		{ "Category", "door" },
		{ "ModuleRelativePath", "Public/door.h" },
	};
#endif
	void Z_Construct_UClass_Adoor_Statics::NewProp_isProx_SetBit(void* Obj)
	{
		((Adoor*)Obj)->isProx = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_Adoor_Statics::NewProp_isProx = { "isProx", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(Adoor), &Z_Construct_UClass_Adoor_Statics::NewProp_isProx_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Adoor_Statics::NewProp_isProx_MetaData), Z_Construct_UClass_Adoor_Statics::NewProp_isProx_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_Adoor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Adoor_Statics::NewProp_door,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Adoor_Statics::NewProp_movePos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Adoor_Statics::NewProp_originalPos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Adoor_Statics::NewProp_proxDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_Adoor_Statics::NewProp_isProx,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_Adoor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Adoor>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_Adoor_Statics::ClassParams = {
		&Adoor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_Adoor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_Adoor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_Adoor_Statics::Class_MetaDataParams), Z_Construct_UClass_Adoor_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_Adoor_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_Adoor()
	{
		if (!Z_Registration_Info_UClass_Adoor.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_Adoor.OuterSingleton, Z_Construct_UClass_Adoor_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_Adoor.OuterSingleton;
	}
	template<> TUTORIAL2_API UClass* StaticClass<Adoor>()
	{
		return Adoor::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(Adoor);
	Adoor::~Adoor() {}
	struct Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_Y3_Game_Tutorial2_Source_Tutorial2_Public_door_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_Y3_Game_Tutorial2_Source_Tutorial2_Public_door_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_Adoor, Adoor::StaticClass, TEXT("Adoor"), &Z_Registration_Info_UClass_Adoor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(Adoor), 2158708648U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_Y3_Game_Tutorial2_Source_Tutorial2_Public_door_h_1397975916(TEXT("/Script/Tutorial2"),
		Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_Y3_Game_Tutorial2_Source_Tutorial2_Public_door_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_User_Documents_GitHub_Y3_Game_Tutorial2_Source_Tutorial2_Public_door_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
