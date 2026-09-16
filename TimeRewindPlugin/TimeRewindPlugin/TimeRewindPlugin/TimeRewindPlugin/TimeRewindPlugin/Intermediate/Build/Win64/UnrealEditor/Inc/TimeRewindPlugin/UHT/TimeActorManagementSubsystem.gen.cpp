// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TimeActorManagementSubsystem.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeTimeActorManagementSubsystem() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorldSubsystem();
TIMEREWINDPLUGIN_API UClass* Z_Construct_UClass_UTimeActorManagementSubsystem();
TIMEREWINDPLUGIN_API UClass* Z_Construct_UClass_UTimeActorManagementSubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_TimeRewindPlugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UTimeActorManagementSubsystem Function RegisterActor *********************
struct Z_Construct_UFunction_UTimeActorManagementSubsystem_RegisterActor_Statics
{
	struct TimeActorManagementSubsystem_eventRegisterActor_Parms
	{
		AActor* Actor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TimeActorManagementSubsystem" },
		{ "ModuleRelativePath", "Public/TimeActorManagementSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function RegisterActor constinit property declarations *************************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function RegisterActor constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function RegisterActor Property Definitions ************************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTimeActorManagementSubsystem_RegisterActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TimeActorManagementSubsystem_eventRegisterActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimeActorManagementSubsystem_RegisterActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeActorManagementSubsystem_RegisterActor_Statics::NewProp_Actor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeActorManagementSubsystem_RegisterActor_Statics::PropPointers) < 2048);
// ********** End Function RegisterActor Property Definitions **************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimeActorManagementSubsystem_RegisterActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTimeActorManagementSubsystem, nullptr, "RegisterActor", 	Z_Construct_UFunction_UTimeActorManagementSubsystem_RegisterActor_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeActorManagementSubsystem_RegisterActor_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UTimeActorManagementSubsystem_RegisterActor_Statics::TimeActorManagementSubsystem_eventRegisterActor_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeActorManagementSubsystem_RegisterActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTimeActorManagementSubsystem_RegisterActor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTimeActorManagementSubsystem_RegisterActor_Statics::TimeActorManagementSubsystem_eventRegisterActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTimeActorManagementSubsystem_RegisterActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimeActorManagementSubsystem_RegisterActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTimeActorManagementSubsystem::execRegisterActor)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterActor(Z_Param_Actor);
	P_NATIVE_END;
}
// ********** End Class UTimeActorManagementSubsystem Function RegisterActor ***********************

// ********** Begin Class UTimeActorManagementSubsystem Function StartRewinding ********************
struct Z_Construct_UFunction_UTimeActorManagementSubsystem_StartRewinding_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TimeActorManagementSubsystem" },
		{ "ModuleRelativePath", "Public/TimeActorManagementSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function StartRewinding constinit property declarations ************************
// ********** End Function StartRewinding constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimeActorManagementSubsystem_StartRewinding_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTimeActorManagementSubsystem, nullptr, "StartRewinding", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeActorManagementSubsystem_StartRewinding_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTimeActorManagementSubsystem_StartRewinding_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTimeActorManagementSubsystem_StartRewinding()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimeActorManagementSubsystem_StartRewinding_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTimeActorManagementSubsystem::execStartRewinding)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartRewinding();
	P_NATIVE_END;
}
// ********** End Class UTimeActorManagementSubsystem Function StartRewinding **********************

// ********** Begin Class UTimeActorManagementSubsystem Function StopRewinding *********************
struct Z_Construct_UFunction_UTimeActorManagementSubsystem_StopRewinding_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TimeActorManagementSubsystem" },
		{ "ModuleRelativePath", "Public/TimeActorManagementSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function StopRewinding constinit property declarations *************************
// ********** End Function StopRewinding constinit property declarations ***************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimeActorManagementSubsystem_StopRewinding_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTimeActorManagementSubsystem, nullptr, "StopRewinding", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeActorManagementSubsystem_StopRewinding_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTimeActorManagementSubsystem_StopRewinding_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTimeActorManagementSubsystem_StopRewinding()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimeActorManagementSubsystem_StopRewinding_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTimeActorManagementSubsystem::execStopRewinding)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopRewinding();
	P_NATIVE_END;
}
// ********** End Class UTimeActorManagementSubsystem Function StopRewinding ***********************

// ********** Begin Class UTimeActorManagementSubsystem Function UnRegisterActor *******************
struct Z_Construct_UFunction_UTimeActorManagementSubsystem_UnRegisterActor_Statics
{
	struct TimeActorManagementSubsystem_eventUnRegisterActor_Parms
	{
		AActor* Actor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TimeActorManagementSubsystem" },
		{ "ModuleRelativePath", "Public/TimeActorManagementSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function UnRegisterActor constinit property declarations ***********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Actor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Function UnRegisterActor constinit property declarations *************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};

// ********** Begin Function UnRegisterActor Property Definitions **********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UTimeActorManagementSubsystem_UnRegisterActor_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(TimeActorManagementSubsystem_eventUnRegisterActor_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UTimeActorManagementSubsystem_UnRegisterActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UTimeActorManagementSubsystem_UnRegisterActor_Statics::NewProp_Actor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeActorManagementSubsystem_UnRegisterActor_Statics::PropPointers) < 2048);
// ********** End Function UnRegisterActor Property Definitions ************************************
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimeActorManagementSubsystem_UnRegisterActor_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTimeActorManagementSubsystem, nullptr, "UnRegisterActor", 	Z_Construct_UFunction_UTimeActorManagementSubsystem_UnRegisterActor_Statics::PropPointers, 
	UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeActorManagementSubsystem_UnRegisterActor_Statics::PropPointers), 
sizeof(Z_Construct_UFunction_UTimeActorManagementSubsystem_UnRegisterActor_Statics::TimeActorManagementSubsystem_eventUnRegisterActor_Parms),
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeActorManagementSubsystem_UnRegisterActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTimeActorManagementSubsystem_UnRegisterActor_Statics::Function_MetaDataParams)},  };
static_assert(sizeof(Z_Construct_UFunction_UTimeActorManagementSubsystem_UnRegisterActor_Statics::TimeActorManagementSubsystem_eventUnRegisterActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UTimeActorManagementSubsystem_UnRegisterActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimeActorManagementSubsystem_UnRegisterActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTimeActorManagementSubsystem::execUnRegisterActor)
{
	P_GET_OBJECT(AActor,Z_Param_Actor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnRegisterActor(Z_Param_Actor);
	P_NATIVE_END;
}
// ********** End Class UTimeActorManagementSubsystem Function UnRegisterActor *********************

// ********** Begin Class UTimeActorManagementSubsystem ********************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UTimeActorManagementSubsystem;
UClass* UTimeActorManagementSubsystem::GetPrivateStaticClass()
{
	using TClass = UTimeActorManagementSubsystem;
	if (!Z_Registration_Info_UClass_UTimeActorManagementSubsystem.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("TimeActorManagementSubsystem"),
			Z_Registration_Info_UClass_UTimeActorManagementSubsystem.InnerSingleton,
			StaticRegisterNativesUTimeActorManagementSubsystem,
			sizeof(TClass),
			alignof(TClass),
			TClass::StaticClassFlags,
			TClass::StaticClassCastFlags(),
			TClass::StaticConfigName(),
			(UClass::ClassConstructorType)InternalConstructor<TClass>,
			(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
			UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
			&TClass::Super::StaticClass,
			&TClass::WithinClass::StaticClass
		);
	}
	return Z_Registration_Info_UClass_UTimeActorManagementSubsystem.InnerSingleton;
}
UClass* Z_Construct_UClass_UTimeActorManagementSubsystem_NoRegister()
{
	return UTimeActorManagementSubsystem::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UTimeActorManagementSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "TimeActorManagementSubsystem.h" },
		{ "ModuleRelativePath", "Public/TimeActorManagementSubsystem.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UTimeActorManagementSubsystem constinit property declarations ************
// ********** End Class UTimeActorManagementSubsystem constinit property declarations **************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("RegisterActor"), .Pointer = &UTimeActorManagementSubsystem::execRegisterActor },
		{ .NameUTF8 = UTF8TEXT("StartRewinding"), .Pointer = &UTimeActorManagementSubsystem::execStartRewinding },
		{ .NameUTF8 = UTF8TEXT("StopRewinding"), .Pointer = &UTimeActorManagementSubsystem::execStopRewinding },
		{ .NameUTF8 = UTF8TEXT("UnRegisterActor"), .Pointer = &UTimeActorManagementSubsystem::execUnRegisterActor },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTimeActorManagementSubsystem_RegisterActor, "RegisterActor" }, // 2714324778
		{ &Z_Construct_UFunction_UTimeActorManagementSubsystem_StartRewinding, "StartRewinding" }, // 2120471535
		{ &Z_Construct_UFunction_UTimeActorManagementSubsystem_StopRewinding, "StopRewinding" }, // 3959305786
		{ &Z_Construct_UFunction_UTimeActorManagementSubsystem_UnRegisterActor, "UnRegisterActor" }, // 2948345008
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTimeActorManagementSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UTimeActorManagementSubsystem_Statics
UObject* (*const Z_Construct_UClass_UTimeActorManagementSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UWorldSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_TimeRewindPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTimeActorManagementSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTimeActorManagementSubsystem_Statics::ClassParams = {
	&UTimeActorManagementSubsystem::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTimeActorManagementSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_UTimeActorManagementSubsystem_Statics::Class_MetaDataParams)
};
void UTimeActorManagementSubsystem::StaticRegisterNativesUTimeActorManagementSubsystem()
{
	UClass* Class = UTimeActorManagementSubsystem::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UTimeActorManagementSubsystem_Statics::Funcs));
}
UClass* Z_Construct_UClass_UTimeActorManagementSubsystem()
{
	if (!Z_Registration_Info_UClass_UTimeActorManagementSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTimeActorManagementSubsystem.OuterSingleton, Z_Construct_UClass_UTimeActorManagementSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTimeActorManagementSubsystem.OuterSingleton;
}
UTimeActorManagementSubsystem::UTimeActorManagementSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UTimeActorManagementSubsystem);
UTimeActorManagementSubsystem::~UTimeActorManagementSubsystem() {}
// ********** End Class UTimeActorManagementSubsystem **********************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_test_TimeRewindPlugin_TimeRewindPlugin_TimeRewindPlugin_TimeRewindPlugin_TimeRewindPlugin_HostProject_Plugins_TimeRewindPlugin_Source_TimeRewindPlugin_Public_TimeActorManagementSubsystem_h__Script_TimeRewindPlugin_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTimeActorManagementSubsystem, UTimeActorManagementSubsystem::StaticClass, TEXT("UTimeActorManagementSubsystem"), &Z_Registration_Info_UClass_UTimeActorManagementSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTimeActorManagementSubsystem), 3819795461U) },
	};
}; // Z_CompiledInDeferFile_FID_test_TimeRewindPlugin_TimeRewindPlugin_TimeRewindPlugin_TimeRewindPlugin_TimeRewindPlugin_HostProject_Plugins_TimeRewindPlugin_Source_TimeRewindPlugin_Public_TimeActorManagementSubsystem_h__Script_TimeRewindPlugin_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_test_TimeRewindPlugin_TimeRewindPlugin_TimeRewindPlugin_TimeRewindPlugin_TimeRewindPlugin_HostProject_Plugins_TimeRewindPlugin_Source_TimeRewindPlugin_Public_TimeActorManagementSubsystem_h__Script_TimeRewindPlugin_2187331035{
	TEXT("/Script/TimeRewindPlugin"),
	Z_CompiledInDeferFile_FID_test_TimeRewindPlugin_TimeRewindPlugin_TimeRewindPlugin_TimeRewindPlugin_TimeRewindPlugin_HostProject_Plugins_TimeRewindPlugin_Source_TimeRewindPlugin_Public_TimeActorManagementSubsystem_h__Script_TimeRewindPlugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_test_TimeRewindPlugin_TimeRewindPlugin_TimeRewindPlugin_TimeRewindPlugin_TimeRewindPlugin_HostProject_Plugins_TimeRewindPlugin_Source_TimeRewindPlugin_Public_TimeActorManagementSubsystem_h__Script_TimeRewindPlugin_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
