// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "TimeActorManagementSubsystem.h"

#ifdef TIMEREWINDPLUGIN_TimeActorManagementSubsystem_generated_h
#error "TimeActorManagementSubsystem.generated.h already included, missing '#pragma once' in TimeActorManagementSubsystem.h"
#endif
#define TIMEREWINDPLUGIN_TimeActorManagementSubsystem_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;

// ********** Begin Class UTimeActorManagementSubsystem ********************************************
#define FID_test_TimeRewindPlugin_TimeRewindPlugin_HostProject_Plugins_TimeRewindPlugin_Source_TimeRewindPlugin_Public_TimeActorManagementSubsystem_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execUnRegisterActor); \
	DECLARE_FUNCTION(execRegisterActor); \
	DECLARE_FUNCTION(execStopRewinding); \
	DECLARE_FUNCTION(execStartRewinding);


struct Z_Construct_UClass_UTimeActorManagementSubsystem_Statics;
TIMEREWINDPLUGIN_API UClass* Z_Construct_UClass_UTimeActorManagementSubsystem_NoRegister();

#define FID_test_TimeRewindPlugin_TimeRewindPlugin_HostProject_Plugins_TimeRewindPlugin_Source_TimeRewindPlugin_Public_TimeActorManagementSubsystem_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUTimeActorManagementSubsystem(); \
	friend struct ::Z_Construct_UClass_UTimeActorManagementSubsystem_Statics; \
	static UClass* GetPrivateStaticClass(); \
	friend TIMEREWINDPLUGIN_API UClass* ::Z_Construct_UClass_UTimeActorManagementSubsystem_NoRegister(); \
public: \
	DECLARE_CLASS2(UTimeActorManagementSubsystem, UWorldSubsystem, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/TimeRewindPlugin"), Z_Construct_UClass_UTimeActorManagementSubsystem_NoRegister) \
	DECLARE_SERIALIZER(UTimeActorManagementSubsystem)


#define FID_test_TimeRewindPlugin_TimeRewindPlugin_HostProject_Plugins_TimeRewindPlugin_Source_TimeRewindPlugin_Public_TimeActorManagementSubsystem_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UTimeActorManagementSubsystem(); \
	/** Deleted move- and copy-constructors, should never be used */ \
	UTimeActorManagementSubsystem(UTimeActorManagementSubsystem&&) = delete; \
	UTimeActorManagementSubsystem(const UTimeActorManagementSubsystem&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UTimeActorManagementSubsystem); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UTimeActorManagementSubsystem); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UTimeActorManagementSubsystem) \
	NO_API virtual ~UTimeActorManagementSubsystem();


#define FID_test_TimeRewindPlugin_TimeRewindPlugin_HostProject_Plugins_TimeRewindPlugin_Source_TimeRewindPlugin_Public_TimeActorManagementSubsystem_h_12_PROLOG
#define FID_test_TimeRewindPlugin_TimeRewindPlugin_HostProject_Plugins_TimeRewindPlugin_Source_TimeRewindPlugin_Public_TimeActorManagementSubsystem_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_test_TimeRewindPlugin_TimeRewindPlugin_HostProject_Plugins_TimeRewindPlugin_Source_TimeRewindPlugin_Public_TimeActorManagementSubsystem_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_test_TimeRewindPlugin_TimeRewindPlugin_HostProject_Plugins_TimeRewindPlugin_Source_TimeRewindPlugin_Public_TimeActorManagementSubsystem_h_15_INCLASS_NO_PURE_DECLS \
	FID_test_TimeRewindPlugin_TimeRewindPlugin_HostProject_Plugins_TimeRewindPlugin_Source_TimeRewindPlugin_Public_TimeActorManagementSubsystem_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UTimeActorManagementSubsystem;

// ********** End Class UTimeActorManagementSubsystem **********************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_test_TimeRewindPlugin_TimeRewindPlugin_HostProject_Plugins_TimeRewindPlugin_Source_TimeRewindPlugin_Public_TimeActorManagementSubsystem_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
