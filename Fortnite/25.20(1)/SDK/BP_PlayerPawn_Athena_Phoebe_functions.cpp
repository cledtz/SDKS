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


// Function BP_PlayerPawn_Athena_Phoebe.BP_PlayerPawn_Athena_Phoebe_C.ComputeCosmeticVariantID
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAthenaAIServicePlayerBots*  CallFunc_GetAIServicePlayerBots_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FetchNextCustomBotCosmeticVariantID_ReturnValue         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerPawn_Athena_Phoebe_C::ComputeCosmeticVariantID(bool CallFunc_Less_IntInt_ReturnValue, class UAthenaAIServicePlayerBots* CallFunc_GetAIServicePlayerBots_ReturnValue, int32 CallFunc_FetchNextCustomBotCosmeticVariantID_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_PlayerPawn_Athena_Phoebe_C", "ComputeCosmeticVariantID");

	Params::UBP_PlayerPawn_Athena_Phoebe_C_ComputeCosmeticVariantID_Params Parms;

	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetAIServicePlayerBots_ReturnValue = CallFunc_GetAIServicePlayerBots_ReturnValue;
	Parms.CallFunc_FetchNextCustomBotCosmeticVariantID_ReturnValue = CallFunc_FetchNextCustomBotCosmeticVariantID_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerPawn_Athena_Phoebe.BP_PlayerPawn_Athena_Phoebe_C.AssignCosmeticVariant
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USkeletalMeshComponent*      CallFunc_GetSkeletalMeshForPartType_ReturnValue                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetCustomPrimitiveDataFloat_Value_ImplicitCast          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerPawn_Athena_Phoebe_C::AssignCosmeticVariant(bool CallFunc_GreaterEqual_IntInt_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_SetCustomPrimitiveDataFloat_Value_ImplicitCast)
{
	static auto Func = Class->GetFunction("BP_PlayerPawn_Athena_Phoebe_C", "AssignCosmeticVariant");

	Params::UBP_PlayerPawn_Athena_Phoebe_C_AssignCosmeticVariant_Params Parms;

	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_GetSkeletalMeshForPartType_ReturnValue = CallFunc_GetSkeletalMeshForPartType_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SetCustomPrimitiveDataFloat_Value_ImplicitCast = CallFunc_SetCustomPrimitiveDataFloat_Value_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerPawn_Athena_Phoebe.BP_PlayerPawn_Athena_Phoebe_C.OnLaunched
// (Event, Public, BlueprintEvent)
// Parameters:
// struct FVector                     LaunchVelocity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bXYOverride                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bZOverride                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerPawn_Athena_Phoebe_C::OnLaunched(const struct FVector& LaunchVelocity, bool bXYOverride, bool bZOverride)
{
	static auto Func = Class->GetFunction("BP_PlayerPawn_Athena_Phoebe_C", "OnLaunched");

	Params::UBP_PlayerPawn_Athena_Phoebe_C_OnLaunched_Params Parms;

	Parms.LaunchVelocity = LaunchVelocity;
	Parms.bXYOverride = bXYOverride;
	Parms.bZOverride = bZOverride;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerPawn_Athena_Phoebe.BP_PlayerPawn_Athena_Phoebe_C.OnCharacterCustomizationCompleted
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortPlayerPawn*             Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerPawn_Athena_Phoebe_C::OnCharacterCustomizationCompleted(class UFortPlayerPawn* Pawn)
{
	static auto Func = Class->GetFunction("BP_PlayerPawn_Athena_Phoebe_C", "OnCharacterCustomizationCompleted");

	Params::UBP_PlayerPawn_Athena_Phoebe_C_OnCharacterCustomizationCompleted_Params Parms;

	Parms.Pawn = Pawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_PlayerPawn_Athena_Phoebe.BP_PlayerPawn_Athena_Phoebe_C.ExecuteUbergraph_BP_PlayerPawn_Athena_Phoebe
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UController*                 CallFunc_GetController_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortAthenaAIBotController*  K2Node_DynamicCast_AsFort_Athena_AIBot_Controller                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Event_LaunchVelocity                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bXYOverride                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bZOverride                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UBlackboardComponent*        CallFunc_GetBlackboard_ReturnValue                               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerPawn*             K2Node_Event_Pawn                                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_PlayerPawn_Athena_Phoebe_C::ExecuteUbergraph_BP_PlayerPawn_Athena_Phoebe(int32 EntryPoint, class UController* CallFunc_GetController_ReturnValue, class UFortAthenaAIBotController* K2Node_DynamicCast_AsFort_Athena_AIBot_Controller, bool K2Node_DynamicCast_bSuccess, const struct FVector& K2Node_Event_LaunchVelocity, bool K2Node_Event_bXYOverride, bool K2Node_Event_bZOverride, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, class UFortPlayerPawn* K2Node_Event_Pawn, bool CallFunc_HasAuthority_ReturnValue)
{
	static auto Func = Class->GetFunction("BP_PlayerPawn_Athena_Phoebe_C", "ExecuteUbergraph_BP_PlayerPawn_Athena_Phoebe");

	Params::UBP_PlayerPawn_Athena_Phoebe_C_ExecuteUbergraph_BP_PlayerPawn_Athena_Phoebe_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetController_ReturnValue = CallFunc_GetController_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Athena_AIBot_Controller = K2Node_DynamicCast_AsFort_Athena_AIBot_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_LaunchVelocity = K2Node_Event_LaunchVelocity;
	Parms.K2Node_Event_bXYOverride = K2Node_Event_bXYOverride;
	Parms.K2Node_Event_bZOverride = K2Node_Event_bZOverride;
	Parms.CallFunc_GetBlackboard_ReturnValue = CallFunc_GetBlackboard_ReturnValue;
	Parms.K2Node_Event_Pawn = K2Node_Event_Pawn;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
