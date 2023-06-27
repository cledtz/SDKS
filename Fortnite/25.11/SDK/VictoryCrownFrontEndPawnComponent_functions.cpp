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


// Function VictoryCrownFrontEndPawnComponent.VictoryCrownFrontEndPawnComponent_C.UpdateForGCNL
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShouldApplyFX                                                    (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      CallFunc_MakeGameplayCueParameters_ReturnValue                   (ContainsInstancedReference)

void UVictoryCrownFrontEndPawnComponent_C::UpdateForGCNL(bool ShouldApplyFX, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue)
{
	static auto Func = Class->GetFunction("VictoryCrownFrontEndPawnComponent_C", "UpdateForGCNL");

	Params::UVictoryCrownFrontEndPawnComponent_C_UpdateForGCNL_Params Parms;

	Parms.ShouldApplyFX = ShouldApplyFX;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_MakeGameplayCueParameters_ReturnValue = CallFunc_MakeGameplayCueParameters_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VictoryCrownFrontEndPawnComponent.VictoryCrownFrontEndPawnComponent_C.OnStatChanged_80A6FD2F402F11C0D0A207ACE25F03A6
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FName                        StatName                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              StatValue                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVictoryCrownFrontEndPawnComponent_C::OnStatChanged_80A6FD2F402F11C0D0A207ACE25F03A6(class FName StatName, int32 StatValue)
{
	static auto Func = Class->GetFunction("VictoryCrownFrontEndPawnComponent_C", "OnStatChanged_80A6FD2F402F11C0D0A207ACE25F03A6");

	Params::UVictoryCrownFrontEndPawnComponent_C_OnStatChanged_80A6FD2F402F11C0D0A207ACE25F03A6_Params Parms;

	Parms.StatName = StatName;
	Parms.StatValue = StatValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VictoryCrownFrontEndPawnComponent.VictoryCrownFrontEndPawnComponent_C.PlaylistChanged
// (Event, Protected, BlueprintEvent)
// Parameters:

void UVictoryCrownFrontEndPawnComponent_C::PlaylistChanged()
{
	static auto Func = Class->GetFunction("VictoryCrownFrontEndPawnComponent_C", "PlaylistChanged");

	Params::UVictoryCrownFrontEndPawnComponent_C_PlaylistChanged_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VictoryCrownFrontEndPawnComponent.VictoryCrownFrontEndPawnComponent_C.ReceiveEndPlay
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EEndPlayReason          EndPlayReason                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVictoryCrownFrontEndPawnComponent_C::ReceiveEndPlay(enum class EEndPlayReason EndPlayReason)
{
	static auto Func = Class->GetFunction("VictoryCrownFrontEndPawnComponent_C", "ReceiveEndPlay");

	Params::UVictoryCrownFrontEndPawnComponent_C_ReceiveEndPlay_Params Parms;

	Parms.EndPlayReason = EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VictoryCrownFrontEndPawnComponent.VictoryCrownFrontEndPawnComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UVictoryCrownFrontEndPawnComponent_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("VictoryCrownFrontEndPawnComponent_C", "ReceiveBeginPlay");

	Params::UVictoryCrownFrontEndPawnComponent_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VictoryCrownFrontEndPawnComponent.VictoryCrownFrontEndPawnComponent_C.ExecuteUbergraph_VictoryCrownFrontEndPawnComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        K2Node_CustomEvent_StatName                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_StatValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        Temp_name_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_GetOwner_ReturnValue_1                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AFortTeamMemberPedestal*     K2Node_DynamicCast_AsFort_Team_Member_Pedestal                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class APlayerPawn_Athena_C*        K2Node_DynamicCast_AsPlayer_Pawn_Athena                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_CosmeticAdaptiveStatWatcher*CallFunc_WatchCosmeticStat_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EEndPlayReason          K2Node_Event_EndPlayReason                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVictoryCrownFrontEndPawnComponent_C::ExecuteUbergraph_VictoryCrownFrontEndPawnComponent(int32 EntryPoint, class FName K2Node_CustomEvent_StatName, int32 K2Node_CustomEvent_StatValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Variable, class FName Temp_name_Variable, bool CallFunc_Greater_IntInt_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class AFortTeamMemberPedestal* K2Node_DynamicCast_AsFort_Team_Member_Pedestal, bool K2Node_DynamicCast_bSuccess, class APlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena, bool K2Node_DynamicCast_bSuccess_1, class UFortAsyncAction_CosmeticAdaptiveStatWatcher* CallFunc_WatchCosmeticStat_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason)
{
	static auto Func = Class->GetFunction("VictoryCrownFrontEndPawnComponent_C", "ExecuteUbergraph_VictoryCrownFrontEndPawnComponent");

	Params::UVictoryCrownFrontEndPawnComponent_C_ExecuteUbergraph_VictoryCrownFrontEndPawnComponent_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CustomEvent_StatName = K2Node_CustomEvent_StatName;
	Parms.K2Node_CustomEvent_StatValue = K2Node_CustomEvent_StatValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_name_Variable = Temp_name_Variable;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue_1 = CallFunc_GetOwner_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsFort_Team_Member_Pedestal = K2Node_DynamicCast_AsFort_Team_Member_Pedestal;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_DynamicCast_AsPlayer_Pawn_Athena = K2Node_DynamicCast_AsPlayer_Pawn_Athena;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_WatchCosmeticStat_ReturnValue = CallFunc_WatchCosmeticStat_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_EndPlayReason = K2Node_Event_EndPlayReason;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
