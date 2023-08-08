#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function GameFeatures.GameFeatureData.GetPluginName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UGameFeatureData*            GFD                                                              (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      PluginName                                                       (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UGameFeatureData::GetPluginName(class UGameFeatureData* GFD, class FString* PluginName)
{
	static auto Func = Class->GetFunction("GameFeatureData", "GetPluginName");

	Params::UGameFeatureData_GetPluginName_Params Parms;

	Parms.GFD = GFD;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (PluginName != nullptr)
		*PluginName = Parms.PluginName;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
