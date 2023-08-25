#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BP_SkydiveSoundLibraryComponent.BP_SkydiveSoundLibraryComponent_C
// (None)

class UClass* UBP_SkydiveSoundLibraryComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BP_SkydiveSoundLibraryComponent_C");

	return Clss;
}


// BP_SkydiveSoundLibraryComponent_C BP_SkydiveSoundLibraryComponent.Default__BP_SkydiveSoundLibraryComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBP_SkydiveSoundLibraryComponent_C* UBP_SkydiveSoundLibraryComponent_C::GetDefaultObj()
{
	static class UBP_SkydiveSoundLibraryComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBP_SkydiveSoundLibraryComponent_C*>(UBP_SkydiveSoundLibraryComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BP_SkydiveSoundLibraryComponent.BP_SkydiveSoundLibraryComponent_C.OnEventPlayed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                InEventName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class UAudioParameterControllerInterface>CallFunc_SetTriggerParameter_self_CastInput                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class UAudioParameterControllerInterface>CallFunc_SetTriggerParameter_self_CastInput_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class UAudioParameterControllerInterface>CallFunc_SetTriggerParameter_self_CastInput_2                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SkydiveSoundLibraryComponent_C::OnEventPlayed(const struct FGameplayTag& InEventName, int32 Temp_int_Variable, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue, class UAudioComponent* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, TScriptInterface<class UAudioParameterControllerInterface> CallFunc_SetTriggerParameter_self_CastInput, int32 CallFunc_Array_Length_ReturnValue_1, class UAudioComponent* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue_1, TScriptInterface<class UAudioParameterControllerInterface> CallFunc_SetTriggerParameter_self_CastInput_1, int32 CallFunc_Array_Length_ReturnValue_2, class UAudioComponent* CallFunc_Array_Get_Item_2, bool CallFunc_Less_IntInt_ReturnValue_2, TScriptInterface<class UAudioParameterControllerInterface> CallFunc_SetTriggerParameter_self_CastInput_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkydiveSoundLibraryComponent_C", "OnEventPlayed");

	Params::UBP_SkydiveSoundLibraryComponent_C_OnEventPlayed_Params Parms{};

	Parms.InEventName = InEventName;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess = GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_SetTriggerParameter_self_CastInput = CallFunc_SetTriggerParameter_self_CastInput;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_SetTriggerParameter_self_CastInput_1 = CallFunc_SetTriggerParameter_self_CastInput_1;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_SetTriggerParameter_self_CastInput_2 = CallFunc_SetTriggerParameter_self_CastInput_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SkydiveSoundLibraryComponent.BP_SkydiveSoundLibraryComponent_C.OnSoundPlayed
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                InEventName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             InComponent                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SkydiveSoundLibraryComponent_C::OnSoundPlayed(const struct FGameplayTag& InEventName, class UAudioComponent* InComponent, int32 CallFunc_Array_Add_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkydiveSoundLibraryComponent_C", "OnSoundPlayed");

	Params::UBP_SkydiveSoundLibraryComponent_C_OnSoundPlayed_Params Parms{};

	Parms.InEventName = InEventName;
	Parms.InComponent = InComponent;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SkydiveSoundLibraryComponent.BP_SkydiveSoundLibraryComponent_C.OnSoundStopped
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                InEventName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             InComponent                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               bStopped                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             Temp_object_Variable                                             (ConstParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class UAudioParameterControllerInterface>CallFunc_SetTriggerParameter_self_CastInput                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_RemoveItem_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SkydiveSoundLibraryComponent_C::OnSoundStopped(const struct FGameplayTag& InEventName, class UAudioComponent* InComponent, bool* bStopped, class UAudioComponent* Temp_object_Variable, bool GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess, TScriptInterface<class UAudioParameterControllerInterface> CallFunc_SetTriggerParameter_self_CastInput, bool CallFunc_Array_RemoveItem_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkydiveSoundLibraryComponent_C", "OnSoundStopped");

	Params::UBP_SkydiveSoundLibraryComponent_C_OnSoundStopped_Params Parms{};

	Parms.InEventName = InEventName;
	Parms.InComponent = InComponent;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess = GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;
	Parms.CallFunc_SetTriggerParameter_self_CastInput = CallFunc_SetTriggerParameter_self_CastInput;
	Parms.CallFunc_Array_RemoveItem_ReturnValue = CallFunc_Array_RemoveItem_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bStopped != nullptr)
		*bStopped = Parms.bStopped;

}


// Function BP_SkydiveSoundLibraryComponent.BP_SkydiveSoundLibraryComponent_C.ReceiveBeginPlay
// (Event, Public, BlueprintEvent)
// Parameters:

void UBP_SkydiveSoundLibraryComponent_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkydiveSoundLibraryComponent_C", "ReceiveBeginPlay");

	Params::UBP_SkydiveSoundLibraryComponent_C_ReceiveBeginPlay_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function BP_SkydiveSoundLibraryComponent.BP_SkydiveSoundLibraryComponent_C.ExecuteUbergraph_BP_SkydiveSoundLibraryComponent
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USoundLibraryContext*        CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortSoundLibraryContext*    K2Node_DynamicCast_AsFort_Sound_Library_Context                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBP_SkydiveSoundLibraryComponent_C::ExecuteUbergraph_BP_SkydiveSoundLibraryComponent(int32 EntryPoint, class USoundLibraryContext* CallFunc_GetContext_ReturnValue, class UFortSoundLibraryContext* K2Node_DynamicCast_AsFort_Sound_Library_Context, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BP_SkydiveSoundLibraryComponent_C", "ExecuteUbergraph_BP_SkydiveSoundLibraryComponent");

	Params::UBP_SkydiveSoundLibraryComponent_C_ExecuteUbergraph_BP_SkydiveSoundLibraryComponent_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Sound_Library_Context = K2Node_DynamicCast_AsFort_Sound_Library_Context;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}

}


