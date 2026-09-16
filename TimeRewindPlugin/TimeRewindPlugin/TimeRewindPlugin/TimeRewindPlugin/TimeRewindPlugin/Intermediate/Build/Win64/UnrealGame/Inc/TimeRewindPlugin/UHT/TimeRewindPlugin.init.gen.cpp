// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTimeRewindPlugin_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_TimeRewindPlugin;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_TimeRewindPlugin()
	{
		if (!Z_Registration_Info_UPackage__Script_TimeRewindPlugin.OuterSingleton)
		{
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/TimeRewindPlugin",
			nullptr,
			0,
			PKG_CompiledIn | 0x00000000,
			0xD12EE13F,
			0xE013DA01,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_TimeRewindPlugin.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_TimeRewindPlugin.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_TimeRewindPlugin(Z_Construct_UPackage__Script_TimeRewindPlugin, TEXT("/Script/TimeRewindPlugin"), Z_Registration_Info_UPackage__Script_TimeRewindPlugin, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xD12EE13F, 0xE013DA01));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
