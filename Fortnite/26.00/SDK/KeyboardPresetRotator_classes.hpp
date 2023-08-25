#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0x318 - 0x2D0)
// WidgetBlueprintGeneratedClass KeyboardPresetRotator.KeyboardPresetRotator_C
class UKeyboardPresetRotator_C : public UCommonUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UPanelButton_C*                        ButtonLeft;                                        // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPanelButton_C*                        ButtonRight;                                       // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Description;                                       // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USpacer*                               Spacer_0;                                          // 0x2F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      SubDescription;                                    // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextRotatorWhite_C*                   TextRotator;                                       // 0x300(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int32                                        SelectedIndex;                                     // 0x308(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_60AA[0x4];                                     // Fixing Size After Last Property 
	double                                       Spacer_Width;                                      // 0x310(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UKeyboardPresetRotator_C* GetDefaultObj();

	void Show_Param_Name(bool Show, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility K2Node_Select_Default);
	struct FEventReply OnFocusReceived(const struct FGeometry& MyGeometry, const struct FFocusEvent& InFocusEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue);
	void Update_Options(TArray<class FText>& NewParam);
	void Center_On_Widget(class UFortUINavigationManager* CallFunc_GetUINavigationManager_ReturnValue);
	void Initialize(class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class FText CallFunc_GetKBMPlayerInputPresetDescriptionForSubGame_InputPresetDescription, class FText CallFunc_GetKBMPlayerInputPresetDescriptionForSubGame_InputPresetSubDescription, enum class ESubGame CallFunc_GetSubGame_ReturnValue, TArray<class FString>& CallFunc_GetKBMPlayerInputPresetNamesForSubGame_InputPresetNames, TArray<class FText>& CallFunc_GetKBMPlayerInputPresetNamesForSubGame_InputPresetFriendlyNames);
	void Update_Row_Selector(int32 Currently_Selected);
	void Construct();
	void BndEvt__KeyboardPresetRotator_ButtonRight_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__KeyboardPresetRotator_ButtonLeft_K2Node_ComponentBoundEvent_2_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__KeyboardPresetRotator_TextRotator_K2Node_ComponentBoundEvent_3_OnRotated__DelegateSignature(int32 Value);
	void ExecuteUbergraph_KeyboardPresetRotator(int32 EntryPoint, int32 K2Node_ComponentBoundEvent_Value, class UFortGlobalUIContext* CallFunc_GetContext_ReturnValue, class UCommonButtonLegacy* K2Node_ComponentBoundEvent_Button_1, class FText CallFunc_GetKBMPlayerInputPresetDescriptionForSubGame_InputPresetDescription, class FText CallFunc_GetKBMPlayerInputPresetDescriptionForSubGame_InputPresetSubDescription, class UCommonButtonLegacy* K2Node_ComponentBoundEvent_Button);
};

}


