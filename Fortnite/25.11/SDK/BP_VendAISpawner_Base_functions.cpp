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


// Function BP_VendAISpawner_Base.BP_VendAISpawner_Base_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void ABP_VendAISpawner_Base_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("BP_VendAISpawner_Base_C", "ReceiveBeginPlay");

	Params::ABP_VendAISpawner_Base_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_VendAISpawner_Base.BP_VendAISpawner_Base_C.ExecuteUbergraph_BP_VendAISpawner_Base
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 Temp_delegate_Variable                                           (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetTransform_ReturnValue                                (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortGameStateAthena*        CallFunc_GetGameStateAthenaFromContext_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortAthenaLivingWorldManager*CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_TrySpawnEvent_RequestId                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_TrySpawnEvent_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ABP_VendAISpawner_Base_C::ExecuteUbergraph_BP_VendAISpawner_Base(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ Temp_delegate_Variable, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AFortGameStateAthena* CallFunc_GetGameStateAthenaFromContext_ReturnValue, class UFortAthenaLivingWorldManager* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_TrySpawnEvent_RequestId, bool CallFunc_TrySpawnEvent_ReturnValue, float CallFunc_Delay_Duration_ImplicitCast)
{
	static auto Func = Class->GetFunction("BP_VendAISpawner_Base_C", "ExecuteUbergraph_BP_VendAISpawner_Base");

	Params::ABP_VendAISpawner_Base_C_ExecuteUbergraph_BP_VendAISpawner_Base_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_delegate_Variable = Temp_delegate_Variable;
	Parms.CallFunc_GetTransform_ReturnValue = CallFunc_GetTransform_ReturnValue;
	Parms.CallFunc_GetGameStateAthenaFromContext_ReturnValue = CallFunc_GetGameStateAthenaFromContext_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_TrySpawnEvent_RequestId = CallFunc_TrySpawnEvent_RequestId;
	Parms.CallFunc_TrySpawnEvent_ReturnValue = CallFunc_TrySpawnEvent_ReturnValue;
	Parms.CallFunc_Delay_Duration_ImplicitCast = CallFunc_Delay_Duration_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
