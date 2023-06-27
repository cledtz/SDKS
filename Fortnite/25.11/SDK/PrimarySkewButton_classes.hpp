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

// 0x50 (0x1510 - 0x14C0)
// WidgetBlueprintGeneratedClass PrimarySkewButton.PrimarySkewButton_C
class UPrimarySkewButton_C : public UCommonButtonLegacy
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x14C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Pressed;                                           // 0x14C8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Hover;                                             // 0x14D0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UCommonTextBlock*                      CenterButtonTextWidget;                            // 0x14D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_ButtonTop;                                   // 0x14E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Shadow;                                      // 0x14E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         ToUpper;                                           // 0x14F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         XL;                                                // 0x14F1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_99EF[0x6];                                     // Fixing Size After Last Property..
	class FText                                  ButtonNameText;                                    // 0x14F8(0x18)(Edit, BlueprintVisible)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PrimarySkewButton_C");
		return Clss;
	}

	struct FEventReply OnMouseButtonUp(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, double Temp_real_Variable, bool Temp_bool_Variable, const struct FEventReply& CallFunc_Unhandled_ReturnValue, float CallFunc_PauseAnimation_ReturnValue, float CallFunc_GetStartTime_ReturnValue, float CallFunc_PauseAnimation_ReturnValue_1, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_GetEndTime_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast, double CallFunc_Add_DoubleDouble_B_ImplicitCast, double CallFunc_LessEqual_DoubleDouble_B_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float CallFunc_PlayAnimation_StartAtTime_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, float CallFunc_PlayAnimation_StartAtTime_ImplicitCast_1);
	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, double Temp_real_Variable, bool Temp_bool_Variable, const struct FEventReply& CallFunc_Unhandled_ReturnValue, float CallFunc_PauseAnimation_ReturnValue, float CallFunc_GetStartTime_ReturnValue, float CallFunc_PauseAnimation_ReturnValue_1, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, float CallFunc_GetEndTime_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, double K2Node_Select_Default, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast, double CallFunc_Add_DoubleDouble_B_ImplicitCast, double CallFunc_LessEqual_DoubleDouble_B_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float CallFunc_PlayAnimation_StartAtTime_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, float CallFunc_PlayAnimation_StartAtTime_ImplicitCast_1);
	void Construct();
	void BP_OnHovered();
	void BP_OnUnhovered();
	void BP_OnClicked();
	void BndEvt__CommonActionWidgetAction_K2Node_ComponentBoundEvent_0_OnInputMethodChanged__DelegateSignature(bool bUsingGamepad);
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_PrimarySkewButton(int32 EntryPoint, bool K2Node_Event_IsDesignTime, bool Temp_bool_Variable, bool Temp_bool_Variable_1, bool Temp_bool_Variable_2, double Temp_real_Variable, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo, const struct FSlateFontInfo& K2Node_MakeStruct_SlateFontInfo_1, bool Temp_bool_Variable_3, const struct FSlateFontInfo& K2Node_Select_Default, float CallFunc_GetStartTime_ReturnValue, float CallFunc_GetEndTime_ReturnValue, float CallFunc_GetStartTime_ReturnValue_1, float CallFunc_GetEndTime_ReturnValue_1, float CallFunc_PauseAnimation_ReturnValue, float CallFunc_PauseAnimation_ReturnValue_1, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue, float CallFunc_PauseAnimation_ReturnValue_2, double K2Node_Select_Default_1, bool CallFunc_LessEqual_DoubleDouble_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, float CallFunc_PauseAnimation_ReturnValue_3, double CallFunc_Add_DoubleDouble_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, bool K2Node_ComponentBoundEvent_bUsingGamepad, class FText CallFunc_TextToUpper_ReturnValue, double Temp_real_Variable_1, class FText K2Node_Select_Default_2, double K2Node_Select_Default_3, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_4, double CallFunc_Add_DoubleDouble_B_ImplicitCast, double CallFunc_LessEqual_DoubleDouble_B_ImplicitCast, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast, double CallFunc_Add_DoubleDouble_B_ImplicitCast_1, double CallFunc_LessEqual_DoubleDouble_B_ImplicitCast_1, double CallFunc_Subtract_DoubleDouble_A_ImplicitCast_1, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float CallFunc_PlayAnimation_StartAtTime_ImplicitCast, double CallFunc_Subtract_DoubleDouble_B_ImplicitCast_1, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_1, float CallFunc_PlayAnimation_StartAtTime_ImplicitCast_1, double CallFunc_Add_DoubleDouble_A_ImplicitCast_1, float CallFunc_PlayAnimation_StartAtTime_ImplicitCast_2, float CallFunc_PlayAnimation_StartAtTime_ImplicitCast_3);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
