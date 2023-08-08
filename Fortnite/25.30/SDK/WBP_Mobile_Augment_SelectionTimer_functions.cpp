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


// Function WBP_Mobile_Augment_SelectionTimer.WBP_Mobile_Augment_SelectionTimer_C.BP_OnHUDElementVisibilityChanged
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer       HiddenElementTagContainer                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// bool                               bForceCollapse                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Mobile_Augment_SelectionTimer_C::BP_OnHUDElementVisibilityChanged(struct FGameplayTagContainer& HiddenElementTagContainer, bool bForceCollapse)
{
	static auto Func = Class->GetFunction("WBP_Mobile_Augment_SelectionTimer_C", "BP_OnHUDElementVisibilityChanged");

	Params::UWBP_Mobile_Augment_SelectionTimer_C_BP_OnHUDElementVisibilityChanged_Params Parms;

	Parms.HiddenElementTagContainer = HiddenElementTagContainer;
	Parms.bForceCollapse = bForceCollapse;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_Mobile_Augment_SelectionTimer.WBP_Mobile_Augment_SelectionTimer_C.ExecuteUbergraph_WBP_Mobile_Augment_SelectionTimer
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_MakeLiteralGameplayTagContainer_ReturnValue             ()
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_Event_HiddenElementTagContainer                           (ConstParm)
// bool                               K2Node_Event_bForceCollapse                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyTags_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESlateVisibility        K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_Mobile_Augment_SelectionTimer_C::ExecuteUbergraph_WBP_Mobile_Augment_SelectionTimer(int32 EntryPoint, const struct FGameplayTagContainer& CallFunc_MakeLiteralGameplayTagContainer_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, const struct FGameplayTagContainer& K2Node_Event_HiddenElementTagContainer, bool K2Node_Event_bForceCollapse, bool CallFunc_HasAnyTags_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, enum class ESlateVisibility K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("WBP_Mobile_Augment_SelectionTimer_C", "ExecuteUbergraph_WBP_Mobile_Augment_SelectionTimer");

	Params::UWBP_Mobile_Augment_SelectionTimer_C_ExecuteUbergraph_WBP_Mobile_Augment_SelectionTimer_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_MakeLiteralGameplayTagContainer_ReturnValue = CallFunc_MakeLiteralGameplayTagContainer_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Event_HiddenElementTagContainer = K2Node_Event_HiddenElementTagContainer;
	Parms.K2Node_Event_bForceCollapse = K2Node_Event_bForceCollapse;
	Parms.CallFunc_HasAnyTags_ReturnValue = CallFunc_HasAnyTags_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
