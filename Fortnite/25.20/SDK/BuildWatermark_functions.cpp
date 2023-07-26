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


// Function BuildWatermark.BuildWatermark_C.Construct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBuildWatermark_C::Construct()
{
	static auto Func = Class->GetFunction("BuildWatermark_C", "Construct");

	Params::UBuildWatermark_C_Construct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BuildWatermark.BuildWatermark_C.HandlePartyJoined
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBuildWatermark_C::HandlePartyJoined()
{
	static auto Func = Class->GetFunction("BuildWatermark_C", "HandlePartyJoined");

	Params::UBuildWatermark_C_HandlePartyJoined_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BuildWatermark.BuildWatermark_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void UBuildWatermark_C::Destruct()
{
	static auto Func = Class->GetFunction("BuildWatermark_C", "Destruct");

	Params::UBuildWatermark_C_Destruct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BuildWatermark.BuildWatermark_C.HandlePlayerStateChanged
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortTeamMemberInfo         PlayerInfo                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)

void UBuildWatermark_C::HandlePlayerStateChanged(struct FFortTeamMemberInfo& PlayerInfo)
{
	static auto Func = Class->GetFunction("BuildWatermark_C", "HandlePlayerStateChanged");

	Params::UBuildWatermark_C_HandlePlayerStateChanged_Params Parms;

	Parms.PlayerInfo = PlayerInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BuildWatermark.BuildWatermark_C.ExecuteUbergraph_BuildWatermark
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPartyContext*           CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FFortTeamMemberInfo         K2Node_CustomEvent_PlayerInfo                                    (ConstParm, HasGetValueTypeHash)

void UBuildWatermark_C::ExecuteUbergraph_BuildWatermark(int32 EntryPoint, class UFortPartyContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FFortTeamMemberInfo& K2Node_CustomEvent_PlayerInfo)
{
	static auto Func = Class->GetFunction("BuildWatermark_C", "ExecuteUbergraph_BuildWatermark");

	Params::UBuildWatermark_C_ExecuteUbergraph_BuildWatermark_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.K2Node_CustomEvent_PlayerInfo = K2Node_CustomEvent_PlayerInfo;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
