#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function LandscapeWaterInfo.LandscapeWaterInfo_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ALandscapeWaterInfo_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("LandscapeWaterInfo_C", "ReceiveBeginPlay");

	Params::ALandscapeWaterInfo_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function LandscapeWaterInfo.LandscapeWaterInfo_C.Set Flood Water Level
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ALandscapeWaterInfo_C::Set_Flood_Water_Level()
{
	static auto Func = Class->GetFunction("LandscapeWaterInfo_C", "Set Flood Water Level");

	Params::ALandscapeWaterInfo_C_Set_Flood_Water_Level_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function LandscapeWaterInfo.LandscapeWaterInfo_C.ExecuteUbergraph_LandscapeWaterInfo
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UWaterSubsystem*             CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetOceanFloodHeight_InFloodHeight_ImplicitCast          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ALandscapeWaterInfo_C::ExecuteUbergraph_LandscapeWaterInfo(int32 EntryPoint, class UWaterSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, float CallFunc_SetOceanFloodHeight_InFloodHeight_ImplicitCast)
{
	static auto Func = Class->GetFunction("LandscapeWaterInfo_C", "ExecuteUbergraph_LandscapeWaterInfo");

	Params::ALandscapeWaterInfo_C_ExecuteUbergraph_LandscapeWaterInfo_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_SetOceanFloodHeight_InFloodHeight_ImplicitCast = CallFunc_SetOceanFloodHeight_InFloodHeight_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
