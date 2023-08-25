#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x538 (0x920 - 0x3E8)
// WidgetBlueprintGeneratedClass WBP_UIKit_Dialog_Base.WBP_UIKit_Dialog_Base_C
class UWBP_UIKit_Dialog_Base_C : public UUIKitDialogBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x3E8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Anim_OnDeactivate_Base;                            // 0x3F0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Anim_OnActivate_Base;                              // 0x3F8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UHorizontalBox*                        ButtonsContainer;                                  // 0x400(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGridPanel*                            Content;                                           // 0x408(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              ContentSize;                                       // 0x410(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image;                                             // 0x418(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Background;                                  // 0x420(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_BottomBar;                                   // 0x428(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGridPanel*                            Main;                                              // 0x430(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonRichTextBlock*                  RichText_Body;                                     // 0x438(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UGridPanel*                            Root;                                              // 0x440(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_UIKit_Scrim_C*                    Scrim;                                             // 0x448(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                            Slot_Content;                                      // 0x450(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNamedSlot*                            Slot_Main;                                         // 0x458(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_Title;                                        // 0x460(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UWBP_UIKit_ButtonCTA_Base_C*>   ButtonWidgets;                                     // 0x468(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)
	class UCommonButtonGroupBase*                ButtonGroup;                                       // 0x478(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FS_UI_DialogStyle                     DialogStyle;                                       // 0x480(0x478)(Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_9502[0x8];                                     // Fixing Size After Last Property 
	FMulticastInlineDelegateProperty_            DialogButtonClickedDispatcher;                     // 0x900(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	int32                                        StartFocusButton;                                  // 0x910(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ImageMatchTextureSize;                             // 0x914(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9503[0x3];                                     // Fixing Size After Last Property 
	class UDataTable*                            DefaultInputActionDataTable;                       // 0x918(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_UIKit_Dialog_Base_C* GetDefaultObj();

	void SetButtonFocus(int32& Focus_Index, int32 Last_Index, int32 CallFunc_Clamp_ReturnValue);
	void SetActionButton(class UWBP_UIKit_ButtonCTA_Base_C*& Button, class UUIKitDialogButtonViewModel* Button_Data, class UWBP_UIKit_ButtonCTA_Base_C* ButtonReference, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, bool CallFunc_IsAssetNull_ReturnValue, class UDataTable* K2Node_DynamicCast_AsData_Table, bool K2Node_DynamicCast_bSuccess, class UCommonInputSubsystem* CallFunc_GetLocalPlayerSubsystem_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool Temp_bool_Variable, class UDataTable* K2Node_Select_Default, const struct FDataTableRowHandle& K2Node_MakeStruct_DataTableRowHandle, int32 CallFunc_Array_Add_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue);
	void UpdateDialogStyle(struct FS_UI_DialogStyle& S_UI_DialogStyle, const struct FMargin& K2Node_MakeStruct_Margin, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Less_IntInt_ReturnValue, class UWBP_UIKit_ButtonCTA_Base_C* CallFunc_Array_Get_Item, class UHorizontalBoxSlot* K2Node_DynamicCast_AsHorizontal_Box_Slot, bool K2Node_DynamicCast_bSuccess, bool CallFunc_Greater_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float K2Node_MakeStruct_Left_ImplicitCast, float CallFunc_SetLineHeightPercentage_InLineHeightPercentage_ImplicitCast);
	void SetDialogImage(class UTexture2D* Texture, bool CallFunc_IsValid_ReturnValue);
	void SetDialogButtons(TArray<class UUIKitDialogButtonViewModel*>& Action_Buttons, int32 CallFunc_Array_Length_ReturnValue, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, class UUIKitDialogButtonViewModel* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UWBP_UIKit_Button_Loud_C* CallFunc_Create_ReturnValue, class UWBP_UIKit_Button_Regular_C* CallFunc_Create_ReturnValue_1, uint8 CallFunc_MakeLiteralByte_ReturnValue, int32 CallFunc_Array_LastIndex_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_LessEqual_IntInt_ReturnValue);
	void DeactivateDialog(class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
	void ActivateDialog(class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue);
	void ClearButtonWidgets();
	void SetSizeBox(struct FS_UI_SizeBox& S_UI_SizeBox, float CallFunc_SetWidthOverride_InWidthOverride_ImplicitCast, float CallFunc_SetHeightOverride_InHeightOverride_ImplicitCast, float CallFunc_SetMinDesiredWidth_InMinDesiredWidth_ImplicitCast, float CallFunc_SetMinDesiredHeight_InMinDesiredHeight_ImplicitCast, float CallFunc_SetMaxDesiredWidth_InMaxDesiredWidth_ImplicitCast, float CallFunc_SetMaxDesiredHeight_InMaxDesiredHeight_ImplicitCast, float CallFunc_SetMinAspectRatio_InMinAspectRatio_ImplicitCast, float CallFunc_SetMaxAspectRatio_InMaxAspectRatio_ImplicitCast);
	void SetDialogText(class FText Text);
	void SetDialogTitle(class FText Title);
	void SetDialogStyleFromDT(class FName Style_ID, const struct FS_UI_DialogStyle& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue);
	void SetDialogStyle(const struct FS_UI_DialogStyle& Style);
	void SetDialogData(class UUIKitDialogViewModel* Data, int32 CallFunc_Array_LastIndex_ReturnValue);
	void SetGridNudge(class UWidget* Widget, const struct FVector2D& Nudge, class UGridSlot* K2Node_DynamicCast_AsGrid_Slot, bool K2Node_DynamicCast_bSuccess);
	void SetGridPadding(class UWidget* Widget, const struct FMargin& Padding, class UGridSlot* K2Node_DynamicCast_AsGrid_Slot, bool K2Node_DynamicCast_bSuccess);
	void SetGridLayer(class UWidget* Widget, int32 Layer, class UGridSlot* K2Node_DynamicCast_AsGrid_Slot, bool K2Node_DynamicCast_bSuccess);
	void SetGridAlignment(class UWidget* Widget, enum class EHorizontalAlignment Horizontal, enum class EVerticalAlignment Vertical, class UGridSlot* K2Node_DynamicCast_AsGrid_Slot, bool K2Node_DynamicCast_bSuccess);
	void SetGridColumnAndRow(class UWidget* Widget, int32 Row, int32 Row_Span, int32 Column, int32 Column_Span, class UGridSlot* K2Node_DynamicCast_AsGrid_Slot, bool K2Node_DynamicCast_bSuccess);
	void SetPlacement(class UWidget* Widget, const struct FS_UI_Placement& Placement);
	void PreConstruct(bool IsDesignTime);
	void OnDialogButtonClicked(class UCommonButtonBase* AssociatedButton, int32 ButtonIndex);
	void BP_OnActivated();
	void BP_OnDeactivated();
	void ExecuteUbergraph_WBP_UIKit_Dialog_Base(int32 EntryPoint, class UCommonButtonGroupBase* CallFunc_SpawnObject_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool K2Node_Event_IsDesignTime, class UCommonButtonBase* K2Node_CustomEvent_AssociatedButton, int32 K2Node_CustomEvent_ButtonIndex);
	void DialogButtonClickedDispatcher__DelegateSignature(int32 ButtonIndex);
};

}


