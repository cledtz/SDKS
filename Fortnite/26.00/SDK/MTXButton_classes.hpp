#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x1518 - 0x14D0)
// WidgetBlueprintGeneratedClass MTXButton.MTXButton_C
class UMTXButton_C : public UFortMTXButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x14D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Hover_Mobile;                                      // 0x14D8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Hover_Grow;                                        // 0x14E0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Hover_Bounce;                                      // 0x14E8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Hover;                                             // 0x14F0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                               AmountColor;                                       // 0x14F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                ButtonBacking;                                     // 0x1500(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Vbucks;                                      // 0x1508(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              VariableSize;                                      // 0x1510(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UMTXButton_C* GetDefaultObj();

	class UWidgetAnimation* GetHoverAnimation(bool Temp_bool_Variable, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, bool CallFunc_IsMobileGame_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UWidgetAnimation* K2Node_Select_Default);
	void Construct();
	void BP_OnHovered();
	void BP_OnUnhovered();
	void BP_OnPressed();
	void BP_OnReleased();
	void ExecuteUbergraph_MTXButton(int32 EntryPoint, double Temp_real_Variable, bool Temp_bool_Variable, double Temp_real_Variable_1, double Temp_real_Variable_2, double Temp_real_Variable_3, bool CallFunc_IsMobileGame_ReturnValue, class UFortRuntimeOptions* CallFunc_GetRuntimeOptions_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsMobileGame_ReturnValue_1, const struct FLinearColor& CallFunc_SelectColor_ReturnValue, double K2Node_Select_Default, class UMaterialInstance* CallFunc_SelectMaterialInstance_ReturnValue, bool Temp_bool_Variable_1, class UWidgetAnimation* CallFunc_GetHoverAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, double K2Node_Select_Default_1, class UWidgetAnimation* CallFunc_GetHoverAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, bool CallFunc_IsUsingTouch_ReturnValue, bool CallFunc_IsUsingTouch_ReturnValue_1, bool CallFunc_IsUsingTouch_ReturnValue_2, bool CallFunc_IsUsingTouch_ReturnValue_3, float CallFunc_SetMinDesiredWidth_InMinDesiredWidth_ImplicitCast, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast);
};

}


