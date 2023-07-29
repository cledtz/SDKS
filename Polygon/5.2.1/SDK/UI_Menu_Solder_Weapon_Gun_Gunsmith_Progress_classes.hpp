#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x2A8 - 0x280)
// WidgetBlueprintGeneratedClass UI_Menu_Solder_Weapon_Gun_Gunsmith_Progress.UI_Menu_Solder_Weapon_Gun_Gunsmith_Progress_C
class UUI_Menu_Solder_Weapon_Gun_Gunsmith_Progress_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               Button_Back;                                       // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_TreeContainer;                             // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_SoftLoadingScreen_C*               UI_SoftLoadingScreen;                              // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Menu_Solder_Weapon_Gun_Gunsmith_C* UI_Menu_Soldier_Weapon_Gun_Gunsmith;               // 0x2A0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_Menu_Solder_Weapon_Gun_Gunsmith_Progress_C");
		return Clss;
	}

	void Reset(bool CallFunc_RemoveChildAt_ReturnValue);
	void OnUpdateGunData(class UPlayFabJsonObject* L_ProgressDataContainer_CustomData, class UClass* L_GunClass, bool CallFunc_RemoveChildAt_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsItem_Gun_General, bool K2Node_ClassDynamicCast_bSuccess, class UClass* CallFunc_LoadClassAsset_Blocking_ReturnValue, class UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UClass* K2Node_ClassDynamicCast_AsUser_Widget, bool K2Node_ClassDynamicCast_bSuccess_1, class UUserWidget* CallFunc_Create_ReturnValue, class UUI_Menu_Solder_Weapon_Gun_Gunsmith_Progress_TreeContainer_C* K2Node_DynamicCast_AsUI_Menu_Solder_Weapon_Gun_Gunsmith_Progress_Tree_Container, bool K2Node_DynamicCast_bSuccess, class UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void OnUpdatePlayerCombinedInfo_Event(TArray<enum class EModifiedData>& ModifiedData, const class FString& CustomString);
	void Tick(const struct FGeometry& MyGeometry, float InDeltaTime);
	void BndEvt__UI_Menu_Solder_Weapon_Gun_Gunsmith_Progress_Button_Back_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void ExecuteUbergraph_UI_Menu_Solder_Weapon_Gun_Gunsmith_Progress(int32 EntryPoint, class UUI_Menu_Solder_Weapon_Gun_Gunsmith_C* CallFunc_FindParentWidgetOfType_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_IsClosed_Variable, bool K2Node_Event_IsDesignTime, TArray<enum class EModifiedData>& K2Node_CustomEvent_ModifiedData, const class FString& K2Node_CustomEvent_CustomString, bool Temp_bool_Has_Been_Initd_Variable, class UWidget* CallFunc_GetChildAt_ReturnValue, class UUI_Menu_Solder_Weapon_Gun_Gunsmith_Progress_TreeContainer_C* K2Node_DynamicCast_AsUI_Menu_Solder_Weapon_Gun_Gunsmith_Progress_Tree_Container, bool K2Node_DynamicCast_bSuccess, bool CallFunc_WithEditor_ReturnValue, class UWidget* CallFunc_GetChildAt_ReturnValue_1, class UPanelWidget* K2Node_DynamicCast_AsPanel_Widget, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class UWidget* CallFunc_Array_Get_Item, class UUI_Menu_Solder_Weapon_Gun_Gunsmith_Progress_Entry_C* K2Node_DynamicCast_AsUI_Menu_Solder_Weapon_Gun_Gunsmith_Progress_Entry, bool K2Node_DynamicCast_bSuccess_2, const struct FGeometry& K2Node_Event_MyGeometry, float K2Node_Event_InDeltaTime);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
