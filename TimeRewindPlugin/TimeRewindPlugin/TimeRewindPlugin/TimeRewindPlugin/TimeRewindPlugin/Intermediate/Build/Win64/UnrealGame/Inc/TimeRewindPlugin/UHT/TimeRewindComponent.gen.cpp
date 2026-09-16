// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "TimeRewindComponent.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
void EmptyLinkFunctionForGeneratedCodeTimeRewindComponent() {}

// ********** Begin Cross Module References ********************************************************
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
TIMEREWINDPLUGIN_API UClass* Z_Construct_UClass_UTimeRewindComponent();
TIMEREWINDPLUGIN_API UClass* Z_Construct_UClass_UTimeRewindComponent_NoRegister();
UPackage* Z_Construct_UPackage__Script_TimeRewindPlugin();
// ********** End Cross Module References **********************************************************

// ********** Begin Class UTimeRewindComponent Function EndRewinding *******************************
struct Z_Construct_UFunction_UTimeRewindComponent_EndRewinding_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TimeRewindComponent" },
		{ "ModuleRelativePath", "Public/TimeRewindComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function EndRewinding constinit property declarations **************************
// ********** End Function EndRewinding constinit property declarations ****************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimeRewindComponent_EndRewinding_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTimeRewindComponent, nullptr, "EndRewinding", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeRewindComponent_EndRewinding_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTimeRewindComponent_EndRewinding_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTimeRewindComponent_EndRewinding()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimeRewindComponent_EndRewinding_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTimeRewindComponent::execEndRewinding)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EndRewinding();
	P_NATIVE_END;
}
// ********** End Class UTimeRewindComponent Function EndRewinding *********************************

// ********** Begin Class UTimeRewindComponent Function StartRewinding *****************************
struct Z_Construct_UFunction_UTimeRewindComponent_StartRewinding_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "TimeRewindComponent" },
		{ "ModuleRelativePath", "Public/TimeRewindComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Function StartRewinding constinit property declarations ************************
// ********** End Function StartRewinding constinit property declarations **************************
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UTimeRewindComponent_StartRewinding_Statics::FuncParams = { { (UObject*(*)())Z_Construct_UClass_UTimeRewindComponent, nullptr, "StartRewinding", 	nullptr, 
	0, 
0,
RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UTimeRewindComponent_StartRewinding_Statics::Function_MetaDataParams), Z_Construct_UFunction_UTimeRewindComponent_StartRewinding_Statics::Function_MetaDataParams)},  };
UFunction* Z_Construct_UFunction_UTimeRewindComponent_StartRewinding()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UTimeRewindComponent_StartRewinding_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UTimeRewindComponent::execStartRewinding)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartRewinding();
	P_NATIVE_END;
}
// ********** End Class UTimeRewindComponent Function StartRewinding *******************************

// ********** Begin Class UTimeRewindComponent *****************************************************
FClassRegistrationInfo Z_Registration_Info_UClass_UTimeRewindComponent;
UClass* UTimeRewindComponent::GetPrivateStaticClass()
{
	using TClass = UTimeRewindComponent;
	if (!Z_Registration_Info_UClass_UTimeRewindComponent.InnerSingleton)
	{
		GetPrivateStaticClassBody(
			TClass::StaticPackage(),
			TEXT("TimeRewindComponent"),
			Z_Registration_Info_UClass_UTimeRewindComponent.InnerSingleton,
			StaticRegisterNativesUTimeRewindComponent,
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
	return Z_Registration_Info_UClass_UTimeRewindComponent.InnerSingleton;
}
UClass* Z_Construct_UClass_UTimeRewindComponent_NoRegister()
{
	return UTimeRewindComponent::GetPrivateStaticClass();
}
struct Z_Construct_UClass_UTimeRewindComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "TimeRewindComponent.h" },
		{ "ModuleRelativePath", "Public/TimeRewindComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[] = {
		{ "Category", "TimeRewindComponent" },
		{ "ModuleRelativePath", "Public/TimeRewindComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanRewind_MetaData[] = {
		{ "Category", "TimeRewindComponent" },
		{ "ModuleRelativePath", "Public/TimeRewindComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsRewinding_MetaData[] = {
		{ "Category", "TimeRewindComponent" },
		{ "ModuleRelativePath", "Public/TimeRewindComponent.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimeLineLenght_MetaData[] = {
		{ "Category", "TimeRewindComponent" },
		{ "ModuleRelativePath", "Public/TimeRewindComponent.h" },
	};
#endif // WITH_METADATA

// ********** Begin Class UTimeRewindComponent constinit property declarations *********************
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
	static void NewProp_bCanRewind_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanRewind;
	static void NewProp_bIsRewinding_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRewinding;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeLineLenght;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UTimeRewindComponent constinit property declarations ***********************
	static constexpr UE::CodeGen::FClassNativeFunction Funcs[] = {
		{ .NameUTF8 = UTF8TEXT("EndRewinding"), .Pointer = &UTimeRewindComponent::execEndRewinding },
		{ .NameUTF8 = UTF8TEXT("StartRewinding"), .Pointer = &UTimeRewindComponent::execStartRewinding },
	};
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UTimeRewindComponent_EndRewinding, "EndRewinding" }, // 3129467155
		{ &Z_Construct_UFunction_UTimeRewindComponent_StartRewinding, "StartRewinding" }, // 2668045862
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTimeRewindComponent>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct Z_Construct_UClass_UTimeRewindComponent_Statics

// ********** Begin Class UTimeRewindComponent Property Definitions ********************************
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UTimeRewindComponent_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTimeRewindComponent, Owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Owner_MetaData), NewProp_Owner_MetaData) };
void Z_Construct_UClass_UTimeRewindComponent_Statics::NewProp_bCanRewind_SetBit(void* Obj)
{
	((UTimeRewindComponent*)Obj)->bCanRewind = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTimeRewindComponent_Statics::NewProp_bCanRewind = { "bCanRewind", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTimeRewindComponent), &Z_Construct_UClass_UTimeRewindComponent_Statics::NewProp_bCanRewind_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanRewind_MetaData), NewProp_bCanRewind_MetaData) };
void Z_Construct_UClass_UTimeRewindComponent_Statics::NewProp_bIsRewinding_SetBit(void* Obj)
{
	((UTimeRewindComponent*)Obj)->bIsRewinding = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UTimeRewindComponent_Statics::NewProp_bIsRewinding = { "bIsRewinding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UTimeRewindComponent), &Z_Construct_UClass_UTimeRewindComponent_Statics::NewProp_bIsRewinding_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsRewinding_MetaData), NewProp_bIsRewinding_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UTimeRewindComponent_Statics::NewProp_TimeLineLenght = { "TimeLineLenght", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UTimeRewindComponent, TimeLineLenght), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimeLineLenght_MetaData), NewProp_TimeLineLenght_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UTimeRewindComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimeRewindComponent_Statics::NewProp_Owner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimeRewindComponent_Statics::NewProp_bCanRewind,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimeRewindComponent_Statics::NewProp_bIsRewinding,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UTimeRewindComponent_Statics::NewProp_TimeLineLenght,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTimeRewindComponent_Statics::PropPointers) < 2048);
// ********** End Class UTimeRewindComponent Property Definitions **********************************
UObject* (*const Z_Construct_UClass_UTimeRewindComponent_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_TimeRewindPlugin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTimeRewindComponent_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTimeRewindComponent_Statics::ClassParams = {
	&UTimeRewindComponent::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UTimeRewindComponent_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UTimeRewindComponent_Statics::PropPointers),
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTimeRewindComponent_Statics::Class_MetaDataParams), Z_Construct_UClass_UTimeRewindComponent_Statics::Class_MetaDataParams)
};
void UTimeRewindComponent::StaticRegisterNativesUTimeRewindComponent()
{
	UClass* Class = UTimeRewindComponent::StaticClass();
	FNativeFunctionRegistrar::RegisterFunctions(Class, MakeConstArrayView(Z_Construct_UClass_UTimeRewindComponent_Statics::Funcs));
}
UClass* Z_Construct_UClass_UTimeRewindComponent()
{
	if (!Z_Registration_Info_UClass_UTimeRewindComponent.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTimeRewindComponent.OuterSingleton, Z_Construct_UClass_UTimeRewindComponent_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTimeRewindComponent.OuterSingleton;
}
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UTimeRewindComponent);
UTimeRewindComponent::~UTimeRewindComponent() {}
// ********** End Class UTimeRewindComponent *******************************************************

// ********** Begin Registration *******************************************************************
struct Z_CompiledInDeferFile_FID_test_TimeRewindPlugin_TimeRewindPlugin_TimeRewindPlugin_TimeRewindPlugin_TimeRewindPlugin_HostProject_Plugins_TimeRewindPlugin_Source_TimeRewindPlugin_Public_TimeRewindComponent_h__Script_TimeRewindPlugin_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTimeRewindComponent, UTimeRewindComponent::StaticClass, TEXT("UTimeRewindComponent"), &Z_Registration_Info_UClass_UTimeRewindComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTimeRewindComponent), 345858441U) },
	};
}; // Z_CompiledInDeferFile_FID_test_TimeRewindPlugin_TimeRewindPlugin_TimeRewindPlugin_TimeRewindPlugin_TimeRewindPlugin_HostProject_Plugins_TimeRewindPlugin_Source_TimeRewindPlugin_Public_TimeRewindComponent_h__Script_TimeRewindPlugin_Statics 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_test_TimeRewindPlugin_TimeRewindPlugin_TimeRewindPlugin_TimeRewindPlugin_TimeRewindPlugin_HostProject_Plugins_TimeRewindPlugin_Source_TimeRewindPlugin_Public_TimeRewindComponent_h__Script_TimeRewindPlugin_529147829{
	TEXT("/Script/TimeRewindPlugin"),
	Z_CompiledInDeferFile_FID_test_TimeRewindPlugin_TimeRewindPlugin_TimeRewindPlugin_TimeRewindPlugin_TimeRewindPlugin_HostProject_Plugins_TimeRewindPlugin_Source_TimeRewindPlugin_Public_TimeRewindComponent_h__Script_TimeRewindPlugin_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_test_TimeRewindPlugin_TimeRewindPlugin_TimeRewindPlugin_TimeRewindPlugin_TimeRewindPlugin_HostProject_Plugins_TimeRewindPlugin_Source_TimeRewindPlugin_Public_TimeRewindComponent_h__Script_TimeRewindPlugin_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0,
};
// ********** End Registration *********************************************************************

PRAGMA_ENABLE_DEPRECATION_WARNINGS
