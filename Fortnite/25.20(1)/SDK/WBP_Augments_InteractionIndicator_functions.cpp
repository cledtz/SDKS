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


// Function WBP_Augments_InteractionIndicator.WBP_Augments_InteractionIndicator_C.GetInteractText
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class FText                        InteractText                                                     (Parm, OutParm)
// bool                               Result                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetInteractText_InteractText                            ()
// bool                               CallFunc_GetInteractText_Result                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Augments_InteractionIndicator_C::GetInteractText(class FText* InteractText, bool* Result, class FText CallFunc_GetInteractText_InteractText, bool CallFunc_GetInteractText_Result)
{
	static auto Func = Class->GetFunction("WBP_Augments_InteractionIndicator_C", "GetInteractText");

	Params::UWBP_Augments_InteractionIndicator_C_GetInteractText_Params Parms;

	Parms.CallFunc_GetInteractText_InteractText = CallFunc_GetInteractText_InteractText;
	Parms.CallFunc_GetInteractText_Result = CallFunc_GetInteractText_Result;

	UObject::ProcessEvent(Func, &Parms);

	if (InteractText != nullptr)
		*InteractText = Parms.InteractText;

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function WBP_Augments_InteractionIndicator.WBP_Augments_InteractionIndicator_C.GetShowErrorsUsingDefaultWidget
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UWBP_Augments_InteractionIndicator_C::GetShowErrorsUsingDefaultWidget()
{
	static auto Func = Class->GetFunction("WBP_Augments_InteractionIndicator_C", "GetShowErrorsUsingDefaultWidget");

	Params::UWBP_Augments_InteractionIndicator_C_GetShowErrorsUsingDefaultWidget_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function WBP_Augments_InteractionIndicator.WBP_Augments_InteractionIndicator_C.OnLoaded_2E66591C48A272F0C04BFB94B42C632F
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Augments_InteractionIndicator_C::OnLoaded_2E66591C48A272F0C04BFB94B42C632F(class UObject* Loaded)
{
	static auto Func = Class->GetFunction("WBP_Augments_InteractionIndicator_C", "OnLoaded_2E66591C48A272F0C04BFB94B42C632F");

	Params::UWBP_Augments_InteractionIndicator_C_OnLoaded_2E66591C48A272F0C04BFB94B42C632F_Params Parms;

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Augments_InteractionIndicator.WBP_Augments_InteractionIndicator_C.OnContextInfoUpdated
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortInteractContextInfo*    ContextInfo                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UWBP_Augments_InteractionIndicator_C::OnContextInfoUpdated(class UFortInteractContextInfo* ContextInfo)
{
	static auto Func = Class->GetFunction("WBP_Augments_InteractionIndicator_C", "OnContextInfoUpdated");

	Params::UWBP_Augments_InteractionIndicator_C_OnContextInfoUpdated_Params Parms;

	Parms.ContextInfo = ContextInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Augments_InteractionIndicator.WBP_Augments_InteractionIndicator_C.SetAugmentIcon
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftObjectPtr<class UObject>      Asset                                                            (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UWBP_Augments_InteractionIndicator_C::SetAugmentIcon(TSoftObjectPtr<class UObject> Asset)
{
	static auto Func = Class->GetFunction("WBP_Augments_InteractionIndicator_C", "SetAugmentIcon");

	Params::UWBP_Augments_InteractionIndicator_C_SetAugmentIcon_Params Parms;

	Parms.Asset = Asset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Augments_InteractionIndicator.WBP_Augments_InteractionIndicator_C.ExecuteUbergraph_WBP_Augments_InteractionIndicator
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortInteractContextInfo*    K2Node_Event_ContextInfo                                         (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPickup*                 K2Node_DynamicCast_AsFort_Pickup                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UObject>      K2Node_CustomEvent_Asset                                         (HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Loaded                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortItemDefinition*         CallFunc_GetItemDefinitionBP_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerAugmentItemDefinition*K2Node_DynamicCast_AsFort_Player_Augment_Item_Definition         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortRarity             CallFunc_GetRarity_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_MakeStruct_GameplayEventData                              ()
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetOwningPlayer_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Augments_InteractionIndicator_C::ExecuteUbergraph_WBP_Augments_InteractionIndicator(int32 EntryPoint, class UFortInteractContextInfo* K2Node_Event_ContextInfo, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortPickup* K2Node_DynamicCast_AsFort_Pickup, bool K2Node_DynamicCast_bSuccess, TSoftObjectPtr<class UObject> K2Node_CustomEvent_Asset, class UObject* K2Node_CustomEvent_Loaded, bool CallFunc_IsValid_ReturnValue_1, class UFortItemDefinition* CallFunc_GetItemDefinitionBP_ReturnValue, class UFortPlayerAugmentItemDefinition* K2Node_DynamicCast_AsFort_Player_Augment_Item_Definition, bool K2Node_DynamicCast_bSuccess_1, enum class EFortRarity CallFunc_GetRarity_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, const struct FGameplayEventData& K2Node_MakeStruct_GameplayEventData, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UObject* Temp_object_Variable, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess_2)
{
	static auto Func = Class->GetFunction("WBP_Augments_InteractionIndicator_C", "ExecuteUbergraph_WBP_Augments_InteractionIndicator");

	Params::UWBP_Augments_InteractionIndicator_C_ExecuteUbergraph_WBP_Augments_InteractionIndicator_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_ContextInfo = K2Node_Event_ContextInfo;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Pickup = K2Node_DynamicCast_AsFort_Pickup;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_CustomEvent_Asset = K2Node_CustomEvent_Asset;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetItemDefinitionBP_ReturnValue = CallFunc_GetItemDefinitionBP_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Augment_Item_Definition = K2Node_DynamicCast_AsFort_Player_Augment_Item_Definition;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetRarity_ReturnValue = CallFunc_GetRarity_ReturnValue;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_MakeStruct_GameplayEventData = K2Node_MakeStruct_GameplayEventData;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetOwningPlayer_ReturnValue = CallFunc_GetOwningPlayer_ReturnValue;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
