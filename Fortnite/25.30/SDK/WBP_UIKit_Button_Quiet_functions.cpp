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


// Function WBP_UIKit_Button_Quiet.WBP_UIKit_Button_Quiet_C.HideBackground
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        InputType                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UIKit_Button_Quiet_C::HideBackground(enum class ECommonInputType InputType, bool K2Node_SwitchEnum_CmpSuccess)
{
	static auto Func = Class->GetFunction("WBP_UIKit_Button_Quiet_C", "HideBackground");

	Params::UWBP_UIKit_Button_Quiet_C_HideBackground_Params Parms;

	Parms.InputType = InputType;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_UIKit_Button_Quiet.WBP_UIKit_Button_Quiet_C.BP_OnPressed
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_UIKit_Button_Quiet_C::BP_OnPressed()
{
	static auto Func = Class->GetFunction("WBP_UIKit_Button_Quiet_C", "BP_OnPressed");

	Params::UWBP_UIKit_Button_Quiet_C_BP_OnPressed_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_UIKit_Button_Quiet.WBP_UIKit_Button_Quiet_C.BP_OnReleased
// (Event, Protected, BlueprintEvent)
// Parameters:

void UWBP_UIKit_Button_Quiet_C::BP_OnReleased()
{
	static auto Func = Class->GetFunction("WBP_UIKit_Button_Quiet_C", "BP_OnReleased");

	Params::UWBP_UIKit_Button_Quiet_C_BP_OnReleased_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_UIKit_Button_Quiet.WBP_UIKit_Button_Quiet_C.BP_OnInputMethodChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class ECommonInputType        CurrentInputType                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UIKit_Button_Quiet_C::BP_OnInputMethodChanged(enum class ECommonInputType CurrentInputType)
{
	static auto Func = Class->GetFunction("WBP_UIKit_Button_Quiet_C", "BP_OnInputMethodChanged");

	Params::UWBP_UIKit_Button_Quiet_C_BP_OnInputMethodChanged_Params Parms;

	Parms.CurrentInputType = CurrentInputType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_UIKit_Button_Quiet.WBP_UIKit_Button_Quiet_C.PreConstruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// bool                               IsDesignTime                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UIKit_Button_Quiet_C::PreConstruct(bool IsDesignTime)
{
	static auto Func = Class->GetFunction("WBP_UIKit_Button_Quiet_C", "PreConstruct");

	Params::UWBP_UIKit_Button_Quiet_C_PreConstruct_Params Parms;

	Parms.IsDesignTime = IsDesignTime;

	UObject::ProcessEvent(Func, &Parms);

}


// Function WBP_UIKit_Button_Quiet.WBP_UIKit_Button_Quiet_C.ExecuteUbergraph_WBP_UIKit_Button_Quiet
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPromptHoldable_Holdable                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationForward_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimationReverse_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        K2Node_Event_CurrentInputType                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UCommonInputSubsystem*       CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class ECommonInputType        CallFunc_GetCurrentInputType_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstance*           CallFunc_SelectMaterialInstance_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_IsDesignTime                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsPromptHoldable_Holdable_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UWBP_UIKit_Button_Quiet_C::ExecuteUbergraph_WBP_UIKit_Button_Quiet(int32 EntryPoint, bool CallFunc_IsPromptHoldable_Holdable, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, enum class ECommonInputType K2Node_Event_CurrentInputType, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, class UCommonInputSubsystem* CallFunc_GetContext_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UMaterialInstance* CallFunc_SelectMaterialInstance_ReturnValue, bool K2Node_Event_IsDesignTime, bool CallFunc_IsPromptHoldable_Holdable_1)
{
	static auto Func = Class->GetFunction("WBP_UIKit_Button_Quiet_C", "ExecuteUbergraph_WBP_UIKit_Button_Quiet");

	Params::UWBP_UIKit_Button_Quiet_C_ExecuteUbergraph_WBP_UIKit_Button_Quiet_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_IsPromptHoldable_Holdable = CallFunc_IsPromptHoldable_Holdable;
	Parms.CallFunc_PlayAnimationForward_ReturnValue = CallFunc_PlayAnimationForward_ReturnValue;
	Parms.CallFunc_PlayAnimationReverse_ReturnValue = CallFunc_PlayAnimationReverse_ReturnValue;
	Parms.K2Node_Event_CurrentInputType = K2Node_Event_CurrentInputType;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_GetCurrentInputType_ReturnValue = CallFunc_GetCurrentInputType_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SelectMaterialInstance_ReturnValue = CallFunc_SelectMaterialInstance_ReturnValue;
	Parms.K2Node_Event_IsDesignTime = K2Node_Event_IsDesignTime;
	Parms.CallFunc_IsPromptHoldable_Holdable_1 = CallFunc_IsPromptHoldable_Holdable_1;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
