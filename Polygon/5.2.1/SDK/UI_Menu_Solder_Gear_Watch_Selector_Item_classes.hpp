#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x76 (0x2F6 - 0x280)
// WidgetBlueprintGeneratedClass UI_Menu_Solder_Gear_Watch_Selector_Item.UI_Menu_Solder_Gear_Watch_Selector_Item_C
class UUI_Menu_Solder_Gear_Watch_Selector_Item_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Lock;                                              // 0x288(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UBorder*                               Border_Rare;                                       // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UButton*                               Button;                                            // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Background;                                  // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Rare_Glow_01;                                // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_Rare_Glow_02;                                // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_SelectedBackground;                          // 0x2B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOpenIcon*                             OpenIcon_Equipped;                                 // 0x2C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_IsLock;                                    // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UScrollBox*                            ScrollBox_Name;                                    // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox;                                           // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_Name;                                    // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_Menu_Solder_Gear_Watch_Selector_Item_Entry_C* Entry;                                             // 0x2E8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	float                                        Delta_Time;                                        // 0x2F0(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsUnlocked;                                        // 0x2F4(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsEquipped;                                        // 0x2F5(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_Menu_Solder_Gear_Watch_Selector_Item_C");
		return Clss;
	}

	void SetIsEquipped(bool IsEquip, enum class ESlateVisibility Temp_byte_Variable, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable_1, enum class ESlateVisibility Temp_byte_Variable_2, bool CallFunc_IsValid_ReturnValue, enum class ESlateVisibility K2Node_Select_Default, class UUI_Menu_Solder_Gear_Watch_Selector_C* CallFunc_FindParentWidgetOfType_ReturnValue, class UObject* CallFunc_GetItemAt_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, class UBP_Menu_Solder_Gear_Watch_Selector_Item_Entry_C* K2Node_DynamicCast_AsBP_Menu_Solder_Gear_Watch_Selector_Item_Entry, bool K2Node_DynamicCast_bSuccess, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, enum class ESlateVisibility Temp_byte_Variable_3, bool CallFunc_BooleanAND_ReturnValue_1, bool Temp_bool_Variable_1, enum class ESlateVisibility K2Node_Select_Default_1);
	void SetIsUnlock(bool IsUnlock, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool CallFunc_NotEqual_BoolBool_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility K2Node_Select_Default);
	void SetRare(enum class EItemRareType Rare, enum class EItemRareType Temp_byte_Variable, const struct FLinearColor& CallFunc_GetRareColor_NewParam, float Temp_real_Variable, float Temp_real_Variable_1, float Temp_real_Variable_2, float Temp_real_Variable_3, float Temp_real_Variable_4, float Temp_real_Variable_5, float Temp_real_Variable_6, float K2Node_Select_Default);
	void ParseWatchInfo(class UClass* L_WatchClass, class UPlayFabJsonObject* CallFunc_GetObjectField_ReturnValue, bool CallFunc_GetBoolField_ReturnValue, class UPlayFabJsonObject* CallFunc_GetObjectField_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasField_ReturnValue, bool CallFunc_HasField_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, class UClass* K2Node_ClassDynamicCast_AsItem_Watch_General, bool K2Node_ClassDynamicCast_bSuccess);
	void Reset();
	void OnPlayFabResponse_4DB661204543D431890A0D90AFBB3B1D(const struct FPlayFabBaseModel& Response, class UObject* CustomData, bool Successful);
	void BP_OnItemExpansionChanged(bool bIsExpanded);
	void BP_OnItemSelectionChanged(bool bIsSelected);
	void OnListItemObjectSet(class UObject* ListItemObject);
	void BP_OnEntryReleased();
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void BndEvt__UI_Menu_Solder_Gear_Watch_Selector_Item_Button_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void EquipWatch_Success(const struct FClientExecuteCloudScriptResult& Result, class UObject* CustomData);
	void EquipWatch_Failure(const struct FPlayFabError& Error, class UObject* CustomData);
	void BndEvt__UI_Menu_Solder_Gear_Watch_Selector_Item_Button_K2Node_ComponentBoundEvent_1_OnButtonHoverEvent__DelegateSignature();
	void BndEvt__UI_Menu_Solder_Gear_Watch_Selector_Item_Button_K2Node_ComponentBoundEvent_2_OnButtonHoverEvent__DelegateSignature();
	void ExecuteUbergraph_UI_Menu_Solder_Gear_Watch_Selector_Item(int32 EntryPoint, float CallFunc_GetScrollOffsetOfEnd_ReturnValue, float CallFunc_GetScrollOffsetOfEnd_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, double Temp_real_Variable, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue, float CallFunc_GetScrollOffset_ReturnValue, double CallFunc_FInterpTo_Constant_ReturnValue, class UUI_Menu_Solder_Gear_Watch_Selector_C* CallFunc_FindParentWidgetOfType_ReturnValue, class UUI_Menu_Solder_Gear_Watch_Selector_C* Temp_wildcard_Variable, bool CallFunc_IsValid_ReturnValue, double Temp_real_Variable_1, class UUI_Menu_Solder_Gear_Watch_Selector_C* Temp_wildcard_Variable_1, class UUI_Menu_Solder_Gear_Watch_Selector_C* CallFunc_FindParentWidgetOfType_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, float CallFunc_GetScrollOffset_ReturnValue_1, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, class UUI_Menu_Solder_Gear_Watch_Selector_C* CallFunc_FindParentWidgetOfType_ReturnValue_2, class UUI_Menu_Solder_Gear_Watch_Selector_C* Temp_wildcard_Variable_2, bool Temp_bool_Variable, double K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue_2, class UUI_Menu_Solder_Gear_Watch_Selector_C* CallFunc_FindParentWidgetOfType_ReturnValue_3, class UUI_Menu_Solder_Gear_Watch_Selector_C* Temp_wildcard_Variable_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsValid_ReturnValue_3, bool K2Node_Event_bIsExpanded, bool K2Node_Event_bIsSelected, class UObject* K2Node_Event_ListItemObject, class UBP_Menu_Solder_Gear_Watch_Selector_Item_Entry_C* K2Node_DynamicCast_AsBP_Menu_Solder_Gear_Watch_Selector_Item_Entry, bool K2Node_DynamicCast_bSuccess, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime, bool CallFunc_Not_PreBool_ReturnValue, class UPlayFabJsonObject* CallFunc_ConstructJsonObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UPlayFabJsonObject* K2Node_LowEntry_LocalVariable_Value__Object, const struct FClientExecuteCloudScriptRequest& K2Node_MakeStruct_ClientExecuteCloudScriptRequest, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UPlayFabClientAPI* CallFunc_ExecuteCloudScript_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, bool CallFunc_IsValid_ReturnValue_5, const class FString& CallFunc_GetStringField_ReturnValue, const struct FClientExecuteCloudScriptResult& K2Node_CustomEvent_result, class UObject* K2Node_CustomEvent_customData_1, const struct FPlayFabError& K2Node_CustomEvent_error, class UObject* K2Node_CustomEvent_customData, bool CallFunc_GetBoolField_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue_1, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, TArray<enum class EModifiedData>& K2Node_MakeArray_Array, class UBP_PG_PlayerController_Menu_C* K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu, bool K2Node_DynamicCast_bSuccess_1, class UPlayerState* CallFunc_GetPlayerState_ReturnValue, class UPG_PlayerState_Menu* K2Node_DynamicCast_AsPG_Player_State_Menu, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_HasField_ReturnValue, class UPlayFabJsonObject* CallFunc_ConstructJsonObject_ReturnValue_1, class UUI_Menu_Soldier_Gear_C* CallFunc_FindParentWidgetOfType_ReturnValue_4, class UPlayFabJsonObject* CallFunc_GetObjectField_ReturnValue, const struct FPlayFabBaseModel& Temp_struct_Variable, class UObject* Temp_object_Variable, bool CallFunc_IsValid_ReturnValue_6, class UPlayFabJsonObject* CallFunc_GetObjectField_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_Variable_1, const struct FPlayFabBaseModel& K2Node_CustomEvent_response, class UObject* K2Node_CustomEvent_customData_2, bool K2Node_CustomEvent_successful, bool CallFunc_IsValid_ReturnValue_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool Temp_bool_IsClosed_Variable, double CallFunc_FInterpTo_Constant_DeltaTime_ImplicitCast, double K2Node_Select_Option_0_ImplicitCast, double CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast, double CallFunc_Greater_DoubleDouble_A_ImplicitCast, double CallFunc_FInterpTo_Constant_Current_ImplicitCast, float CallFunc_SetScrollOffset_NewScrollOffset_ImplicitCast, double CallFunc_NotEqual_DoubleDouble_A_ImplicitCast);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
