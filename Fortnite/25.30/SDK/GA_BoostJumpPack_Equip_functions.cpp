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


// Function GA_BoostJumpPack_Equip.GA_BoostJumpPack_Equip_C.GetGadgetItem
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UFortPlayerPawn*             Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGuid                       CallFunc_GetInventoryGUID_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerControllerZone*   CallFunc_GetPlayerController_AsFort_Player_Controller_Zone       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortItem*                   CallFunc_BP_GetInventoryItemWithGuid_ReturnValue                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UFortItem* UGA_BoostJumpPack_Equip_C::GetGadgetItem(class UFortPlayerPawn* Pawn, bool CallFunc_IsValid_ReturnValue, const struct FGuid& CallFunc_GetInventoryGUID_ReturnValue, class UFortPlayerControllerZone* CallFunc_GetPlayerController_AsFort_Player_Controller_Zone, class UFortItem* CallFunc_BP_GetInventoryItemWithGuid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static auto Func = Class->GetFunction("GA_BoostJumpPack_Equip_C", "GetGadgetItem");

	Params::UGA_BoostJumpPack_Equip_C_GetGadgetItem_Params Parms;

	Parms.Pawn = Pawn;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetInventoryGUID_ReturnValue = CallFunc_GetInventoryGUID_ReturnValue;
	Parms.CallFunc_GetPlayerController_AsFort_Player_Controller_Zone = CallFunc_GetPlayerController_AsFort_Player_Controller_Zone;
	Parms.CallFunc_BP_GetInventoryItemWithGuid_ReturnValue = CallFunc_BP_GetInventoryItemWithGuid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GA_BoostJumpPack_Equip.GA_BoostJumpPack_Equip_C.GetPlayerController
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UFortPlayerPawn*             Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerControllerZone*   AsFort_Player_Controller_Zone                                    (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerControllerZone*   K2Node_DynamicCast_AsFort_Player_Controller_Zone                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_BoostJumpPack_Equip_C::GetPlayerController(class UFortPlayerPawn* Pawn, class UFortPlayerControllerZone** AsFort_Player_Controller_Zone, bool CallFunc_IsValid_ReturnValue, class UController* CallFunc_GetController_ReturnValue, class UFortPlayerControllerZone* K2Node_DynamicCast_AsFort_Player_Controller_Zone, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("GA_BoostJumpPack_Equip_C", "GetPlayerController");

	Params::UGA_BoostJumpPack_Equip_C_GetPlayerController_Params Parms;

	Parms.Pawn = Pawn;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Zone = K2Node_DynamicCast_AsFort_Player_Controller_Zone;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (AsFort_Player_Controller_Zone != nullptr)
		*AsFort_Player_Controller_Zone = Parms.AsFort_Player_Controller_Zone;

}


// Function GA_BoostJumpPack_Equip.GA_BoostJumpPack_Equip_C.IsAuthority
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bAuthority                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_BoostJumpPack_Equip_C::IsAuthority(bool* bAuthority, bool CallFunc_HasAuthority_ReturnValue)
{
	static auto Func = Class->GetFunction("GA_BoostJumpPack_Equip_C", "IsAuthority");

	Params::UGA_BoostJumpPack_Equip_C_IsAuthority_Params Parms;

	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bAuthority != nullptr)
		*bAuthority = Parms.bAuthority;

}


// Function GA_BoostJumpPack_Equip.GA_BoostJumpPack_Equip_C.K2_CanActivateAbility
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// struct FGameplayAbilityActorInfo   ActorInfo                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
// struct FGameplayAbilitySpecHandle  Handle                                                           (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       RelevantTags                                                     (Parm, OutParm)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerPawn*             LocalPlayerPawn                                                  (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       ErrorReasonGamepad                                               (Edit, BlueprintVisible)
// struct FGameplayTagContainer       ErrorReason                                                      (Edit, BlueprintVisible)

bool UGA_BoostJumpPack_Equip_C::K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayAbilitySpecHandle& Handle, struct FGameplayTagContainer* RelevantTags, class UFortPlayerPawn* LocalPlayerPawn, const struct FGameplayTagContainer& ErrorReasonGamepad, const struct FGameplayTagContainer& ErrorReason)
{
	static auto Func = Class->GetFunction("GA_BoostJumpPack_Equip_C", "K2_CanActivateAbility");

	Params::UGA_BoostJumpPack_Equip_C_K2_CanActivateAbility_Params Parms;

	Parms.ActorInfo = ActorInfo;
	Parms.Handle = Handle;
	Parms.LocalPlayerPawn = LocalPlayerPawn;
	Parms.ErrorReasonGamepad = ErrorReasonGamepad;
	Parms.ErrorReason = ErrorReason;

	UObject::ProcessEvent(Func, &Parms);

	if (RelevantTags != nullptr)
		*RelevantTags = Parms.RelevantTags;

	return Parms.ReturnValue;

}


// Function GA_BoostJumpPack_Equip.GA_BoostJumpPack_Equip_C.K2_ActivateAbility
// (Event, Protected, BlueprintEvent)
// Parameters:

void UGA_BoostJumpPack_Equip_C::K2_ActivateAbility()
{
	static auto Func = Class->GetFunction("GA_BoostJumpPack_Equip_C", "K2_ActivateAbility");

	Params::UGA_BoostJumpPack_Equip_C_K2_ActivateAbility_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GA_BoostJumpPack_Equip.GA_BoostJumpPack_Equip_C.ExecuteUbergraph_GA_BoostJumpPack_Equip
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGA_BoostJumpPack_Equip_C::ExecuteUbergraph_GA_BoostJumpPack_Equip(int32 EntryPoint)
{
	static auto Func = Class->GetFunction("GA_BoostJumpPack_Equip_C", "ExecuteUbergraph_GA_BoostJumpPack_Equip");

	Params::UGA_BoostJumpPack_Equip_C_ExecuteUbergraph_GA_BoostJumpPack_Equip_Params Parms;

	Parms.EntryPoint = EntryPoint;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
