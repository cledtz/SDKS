#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x9 (0x1AA1 - 0x1A98)
// WidgetBlueprintGeneratedClass WBP_UIKit_Button_Quiet.WBP_UIKit_Button_Quiet_C
class UWBP_UIKit_Button_Quiet_C : public UWBP_UIKit_ButtonCTA_Base_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1A98(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         IsDarkBackground;                                  // 0x1AA0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WBP_UIKit_Button_Quiet_C");
		return Clss;
	}

	void HideBackground(enum class ECommonInputType InputType, bool K2Node_SwitchEnum_CmpSuccess);
	void BP_OnPressed();
	void BP_OnReleased();
	void BP_OnInputMethodChanged(enum class ECommonInputType CurrentInputType);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_WBP_UIKit_Button_Quiet(int32 EntryPoint, bool CallFunc_IsPromptHoldable_Holdable, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, enum class ECommonInputType K2Node_Event_CurrentInputType, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, class UCommonInputSubsystem* CallFunc_GetContext_ReturnValue, enum class ECommonInputType CallFunc_GetCurrentInputType_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UMaterialInstance* CallFunc_SelectMaterialInstance_ReturnValue, bool K2Node_Event_IsDesignTime, bool CallFunc_IsPromptHoldable_Holdable_1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
