#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x290 - 0x280)
// WidgetBlueprintGeneratedClass UI_Game_Hotkeys.UI_Game_Hotkeys_C
class UUI_Game_Hotkeys_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                        HorizontalBox;                                     // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_Game_Hotkeys_C* GetDefaultObj();

	void OnSetCurrentGun_Event(class UItem_Gun_General* OldCurrentGun);
	void Construct();
	void OnSetGunModules_Event();
	void ExecuteUbergraph_UI_Game_Hotkeys(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool Temp_bool_IsClosed_Variable, bool Temp_bool_Has_Been_Initd_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, class UItem_Gun_General* K2Node_CustomEvent_OldCurrentGun, class UPG_PlayerState_Game* K2Node_DynamicCast_AsPG_Player_State_Game, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UItem_Module_General* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, class UClass* CallFunc_GetObjectClass_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ClassClass_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue, class FName Temp_name_Variable, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UUI_Game_Hotkey_Entry_C* CallFunc_Create_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue);
};

}


