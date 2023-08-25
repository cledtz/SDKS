#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9 (0x1A01 - 0x19F8)
// WidgetBlueprintGeneratedClass WBP_UIKit_Button_Quiet.WBP_UIKit_Button_Quiet_C
class UWBP_UIKit_Button_Quiet_C : public UWBP_UIKit_ButtonCTA_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x19F8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         IsDarkBackground;                                  // 0x1A00(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_UIKit_Button_Quiet_C* GetDefaultObj();

	void HideBackground(enum class ECommonInputType InputType, bool K2Node_SwitchEnum_CmpSuccess);
	void BP_OnPressed();
	void BP_OnReleased();
	void BP_OnInputMethodChanged(enum class ECommonInputType CurrentInputType);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_WBP_UIKit_Button_Quiet(int32 EntryPoint, bool CallFunc_IsPromptHoldable_Holdable, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, enum class ECommonInputType K2Node_Event_CurrentInputType, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, class UCommonInputSubsystem* CallFunc_GetContext_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UMaterialInstance* CallFunc_SelectMaterialInstance_ReturnValue, bool K2Node_Event_IsDesignTime, bool CallFunc_IsPromptHoldable_Holdable_1);
};

}


