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


// Function SR_Valet.SR_Valet_C.CanApplyHolster
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class FName                        HolsterId                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool USR_Valet_C::CanApplyHolster(class FName& HolsterId)
{
	static auto Func = Class->GetFunction("SR_Valet_C", "CanApplyHolster");

	Params::USR_Valet_C_CanApplyHolster_Params Parms;

	Parms.HolsterId = HolsterId;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function SR_Valet.SR_Valet_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void USR_Valet_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("SR_Valet_C", "ReceiveBeginPlay");

	Params::USR_Valet_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function SR_Valet.SR_Valet_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void USR_Valet_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static auto Func = Class->GetFunction("SR_Valet_C", "ReceiveEndPlay");

	Params::USR_Valet_C_ReceiveEndPlay_Params Parms;

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SR_Valet.SR_Valet_C.On Source Played
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStreamingRadioPlayerComponent*Component                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FAthenaRadioStation         AffectedSource                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void USR_Valet_C::On_Source_Played(class UStreamingRadioPlayerComponent* Component, const struct FAthenaRadioStation& AffectedSource)
{
	static auto Func = Class->GetFunction("SR_Valet_C", "On Source Played");

	Params::USR_Valet_C_On_Source_Played_Params Parms;

	Parms.Component = Component;
	Parms.AffectedSource = AffectedSource;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SR_Valet.SR_Valet_C.On Source Stopped
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStreamingRadioPlayerComponent*Component                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FAthenaRadioStation         AffectedSource                                                   (BlueprintVisible, BlueprintReadOnly, Parm)

void USR_Valet_C::On_Source_Stopped(class UStreamingRadioPlayerComponent* Component, const struct FAthenaRadioStation& AffectedSource)
{
	static auto Func = Class->GetFunction("SR_Valet_C", "On Source Stopped");

	Params::USR_Valet_C_On_Source_Stopped_Params Parms;

	Parms.Component = Component;
	Parms.AffectedSource = AffectedSource;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SR_Valet.SR_Valet_C.ExecuteUbergraph_SR_Valet
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMusicEventSubsystem*        CallFunc_GetGameInstanceSubsystem_ReturnValue                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortAudioAnalysisSubsystem* CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortAudioAnalysisSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_1                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStreamingRadioPlayerComponent*K2Node_CustomEvent_Component_1                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FAthenaRadioStation         K2Node_CustomEvent_AffectedSource_1                              ()
// class UStreamingRadioPlayerComponent*K2Node_CustomEvent_Component                                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FAthenaRadioStation         K2Node_CustomEvent_AffectedSource                                ()
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMusicEventSubsystem*        CallFunc_GetGameInstanceSubsystem_ReturnValue_1                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMusicEventSubsystem*        CallFunc_GetGameInstanceSubsystem_ReturnValue_2                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void USR_Valet_C::ExecuteUbergraph_SR_Valet(int32 EntryPoint, class UMusicEventSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue, class UFortAudioAnalysisSubsystem* CallFunc_GetWorldSubsystem_ReturnValue, class UFortAudioAnalysisSubsystem* CallFunc_GetWorldSubsystem_ReturnValue_1, enum class EEndPlayReason K2Node_Event_EndPlayReason, class UStreamingRadioPlayerComponent* K2Node_CustomEvent_Component_1, const struct FAthenaRadioStation& K2Node_CustomEvent_AffectedSource_1, class UStreamingRadioPlayerComponent* K2Node_CustomEvent_Component, const struct FAthenaRadioStation& K2Node_CustomEvent_AffectedSource, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool CallFunc_IsValid_ReturnValue, class UMusicEventSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_1, class UMusicEventSubsystem* CallFunc_GetGameInstanceSubsystem_ReturnValue_2)
{
	static auto Func = Class->GetFunction("SR_Valet_C", "ExecuteUbergraph_SR_Valet");

	Params::USR_Valet_C_ExecuteUbergraph_SR_Valet_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue = CallFunc_GetGameInstanceSubsystem_ReturnValue;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue_1 = CallFunc_GetWorldSubsystem_ReturnValue_1;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;
	Parms.K2Node_CustomEvent_Component_1 = K2Node_CustomEvent_Component_1;
	Parms.K2Node_CustomEvent_AffectedSource_1 = K2Node_CustomEvent_AffectedSource_1;
	Parms.K2Node_CustomEvent_Component = K2Node_CustomEvent_Component;
	Parms.K2Node_CustomEvent_AffectedSource = K2Node_CustomEvent_AffectedSource;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_1 = CallFunc_GetGameInstanceSubsystem_ReturnValue_1;
	Parms.CallFunc_GetGameInstanceSubsystem_ReturnValue_2 = CallFunc_GetGameInstanceSubsystem_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
