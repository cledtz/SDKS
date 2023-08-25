#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_Frontend_ShopBG.BP_Frontend_ShopBG_C
// (Actor)

class UClass* UBP_Frontend_ShopBG_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_Frontend_ShopBG_C");

	return Clss;
}


// BP_Frontend_ShopBG_C BP_Frontend_ShopBG.Default__BP_Frontend_ShopBG_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_Frontend_ShopBG_C* UBP_Frontend_ShopBG_C::GetDefaultObj()
{
	static class UBP_Frontend_ShopBG_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_Frontend_ShopBG_C*>(UBP_Frontend_ShopBG_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.SetDynamicBG
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UTexture*                    InTexture                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBP_Frontend_ShopBG_C::SetDynamicBG(class UTexture* InTexture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_ShopBG_C", "SetDynamicBG");

	Params::UBP_Frontend_ShopBG_C_SetDynamicBG_Params Parms{};

	Parms.InTexture = InTexture;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.EnableDynamicShopBG
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_Frontend_ShopBG_C::EnableDynamicShopBG()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_ShopBG_C", "EnableDynamicShopBG");

	Params::UBP_Frontend_ShopBG_C_EnableDynamicShopBG_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void UBP_Frontend_ShopBG_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_ShopBG_C", "ReceiveBeginPlay");

	Params::UBP_Frontend_ShopBG_C_ReceiveBeginPlay_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.SetDynamicEnvironmentEvent
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class FString                      InPresetEnvName                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)

void UBP_Frontend_ShopBG_C::SetDynamicEnvironmentEvent(const class FString& InPresetEnvName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_ShopBG_C", "SetDynamicEnvironmentEvent");

	Params::UBP_Frontend_ShopBG_C_SetDynamicEnvironmentEvent_Params Parms{};

	Parms.InPresetEnvName = InPresetEnvName;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.DebugShopBG
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_Frontend_ShopBG_C::DebugShopBG()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_ShopBG_C", "DebugShopBG");

	Params::UBP_Frontend_ShopBG_C_DebugShopBG_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.HandleRequestHide
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_Frontend_ShopBG_C::HandleRequestHide()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_ShopBG_C", "HandleRequestHide");

	Params::UBP_Frontend_ShopBG_C_HandleRequestHide_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.HandleItemShopEntered
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_Frontend_ShopBG_C::HandleItemShopEntered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_ShopBG_C", "HandleItemShopEntered");

	Params::UBP_Frontend_ShopBG_C_HandleItemShopEntered_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.HandleStoreEntered
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_Frontend_ShopBG_C::HandleStoreEntered()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_ShopBG_C", "HandleStoreEntered");

	Params::UBP_Frontend_ShopBG_C_HandleStoreEntered_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.ResetDonut
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UBP_Frontend_ShopBG_C::ResetDonut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_ShopBG_C", "ResetDonut");

	Params::UBP_Frontend_ShopBG_C_ResetDonut_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_Frontend_ShopBG.BP_Frontend_ShopBG_C.ExecuteUbergraph_BP_Frontend_ShopBG
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FString                      K2Node_CustomEvent_InPresetEnvName                               (ZeroConstructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UCMSLobbyDirector_C*> CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// class UCMSLobbyDirector_C*         CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UActor*>              CallFunc_GetAllActorsWithTag_OutActors                           (ReferenceParm)
// class UActor*                      CallFunc_Array_Get_Item_1                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_1             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture*                    K2Node_CustomEvent_InTexture                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchString_CmpSuccess_2                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetHasDonutShopSequenceBeenSeen_ReturnValue             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue_2             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetHasDonutShopSequenceBeenSeen_ReturnValue_1           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_Frontend_ShopBG_C::ExecuteUbergraph_BP_Frontend_ShopBG(int32 EntryPoint, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, const class FString& K2Node_CustomEvent_InPresetEnvName, bool K2Node_SwitchString_CmpSuccess, TArray<class UCMSLobbyDirector_C*>& CallFunc_GetAllActorsOfClass_OutActors, class UCMSLobbyDirector_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool K2Node_SwitchString_CmpSuccess_1, TArray<class UActor*>& CallFunc_GetAllActorsWithTag_OutActors, class UActor* CallFunc_Array_Get_Item_1, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue_1, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_1, class UTexture* K2Node_CustomEvent_InTexture, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool K2Node_SwitchString_CmpSuccess_2, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_GetHasDonutShopSequenceBeenSeen_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_IsValid_ReturnValue_8, bool CallFunc_GetHasDonutShopSequenceBeenSeen_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_Frontend_ShopBG_C", "ExecuteUbergraph_BP_Frontend_ShopBG");

	Params::UBP_Frontend_ShopBG_C_ExecuteUbergraph_BP_Frontend_ShopBG_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;
	Parms.K2Node_CustomEvent_InPresetEnvName = K2Node_CustomEvent_InPresetEnvName;
	Parms.K2Node_SwitchString_CmpSuccess = K2Node_SwitchString_CmpSuccess;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.K2Node_SwitchString_CmpSuccess_1 = K2Node_SwitchString_CmpSuccess_1;
	Parms.CallFunc_GetAllActorsWithTag_OutActors = CallFunc_GetAllActorsWithTag_OutActors;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Greater_IntInt_ReturnValue_1 = CallFunc_Greater_IntInt_ReturnValue_1;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_1 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_1;
	Parms.K2Node_CustomEvent_InTexture = K2Node_CustomEvent_InTexture;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_SwitchString_CmpSuccess_2 = K2Node_SwitchString_CmpSuccess_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_GetHasDonutShopSequenceBeenSeen_ReturnValue = CallFunc_GetHasDonutShopSequenceBeenSeen_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue_2 = CallFunc_CreateDynamicMaterialInstance_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.CallFunc_GetHasDonutShopSequenceBeenSeen_ReturnValue_1 = CallFunc_GetHasDonutShopSequenceBeenSeen_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}

}


