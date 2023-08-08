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


// Function DA_Glider_Item.DA_Glider_Item_C.IsOnGround
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bOnGround                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPawn*                       CallFunc_GetInstigator_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFalling_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDA_Glider_Item_C::IsOnGround(bool* bOnGround, class UPawn* CallFunc_GetInstigator_ReturnValue, class UFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsFalling_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static auto Func = Class->GetFunction("DA_Glider_Item_C", "IsOnGround");

	Params::UDA_Glider_Item_C_IsOnGround_Params Parms;

	Parms.CallFunc_GetInstigator_ReturnValue = CallFunc_GetInstigator_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsFalling_ReturnValue = CallFunc_IsFalling_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bOnGround != nullptr)
		*bOnGround = Parms.bOnGround;

}


// Function DA_Glider_Item.DA_Glider_Item_C.RaiseUsageError
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer       FailedReason                                                     (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UPawn*                       CallFunc_GetInstigator_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDA_Glider_Item_C::RaiseUsageError(struct FGameplayTagContainer& FailedReason, class UPawn* CallFunc_GetInstigator_ReturnValue, class UFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess)
{
	static auto Func = Class->GetFunction("DA_Glider_Item_C", "RaiseUsageError");

	Params::UDA_Glider_Item_C_RaiseUsageError_Params Parms;

	Parms.FailedReason = FailedReason;
	Parms.CallFunc_GetInstigator_ReturnValue = CallFunc_GetInstigator_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DA_Glider_Item.DA_Glider_Item_C.BPPressTrigger
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortDecoHelper*             FortDecoHelper                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UDA_Glider_Item_C::BPPressTrigger(class UFortDecoHelper* FortDecoHelper)
{
	static auto Func = Class->GetFunction("DA_Glider_Item_C", "BPPressTrigger");

	Params::UDA_Glider_Item_C_BPPressTrigger_Params Parms;

	Parms.FortDecoHelper = FortDecoHelper;

	UObject::ProcessEvent(Func, &Parms);

}


// Function DA_Glider_Item.DA_Glider_Item_C.ExecuteUbergraph_DA_Glider_Item
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortDecoHelper*             K2Node_Event_FortDecoHelper                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UDA_Glider_Item_C::ExecuteUbergraph_DA_Glider_Item(int32 EntryPoint, class UFortDecoHelper* K2Node_Event_FortDecoHelper)
{
	static auto Func = Class->GetFunction("DA_Glider_Item_C", "ExecuteUbergraph_DA_Glider_Item");

	Params::UDA_Glider_Item_C_ExecuteUbergraph_DA_Glider_Item_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_FortDecoHelper = K2Node_Event_FortDecoHelper;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
