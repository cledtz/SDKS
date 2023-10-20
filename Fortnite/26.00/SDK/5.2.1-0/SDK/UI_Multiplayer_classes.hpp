#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x2D0 - 0x280)
// WidgetBlueprintGeneratedClass UI_Multiplayer.UI_Multiplayer_C
class UUI_Multiplayer_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UHorizontalBox*                        HorizontalBox_Header;                              // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Button_C*                          UI_Button_CreateServer;                            // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Button_C*                          UI_Button_Quickmatch;                              // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Button_C*                          UI_Button_ServerList;                              // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_CreateServer_C*                    UI_CreateServer;                                   // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_QuickMatchWidget_C*                UI_QuickMatchWidget_Valley;                        // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_ServerList_C*                      UI_ServerList;                                     // 0x2B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWidgetSwitcher*                       WidgetSwitcher;                                    // 0x2C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPG_BeaconClient*                      OnlineBeacon;                                      // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_Multiplayer_C* GetDefaultObj();

	void DirectConnectToServer(const class FString& IP, int32 Port, int32 L_Port, const class FString& L_IP, class UBP_PG_PlayerController_Menu_C* L_PlayerController, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, class UBP_PG_PlayerController_Menu_C* K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu, bool K2Node_DynamicCast_bSuccess, const class FString& CallFunc_Conv_IntToString_ReturnValue, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue_2, class UBP_PG_PlayerState_Menu_C* K2Node_DynamicCast_AsBP_PG_Player_State_Menu, bool K2Node_DynamicCast_bSuccess_1, class UBP_PG_GameInstance_C* CallFunc_GetGameInstance_MyGameIntance, class UPlayFabJsonObject* CallFunc_GetPlayerCombinedInfo_ReturnValue);
	void BndEvt__UI_Button_Quickmatch_K2Node_ComponentBoundEvent_3_OnClick__DelegateSignature(class UUI_Button_C* Button);
	void BndEvt__UI_Button_ServerList_K2Node_ComponentBoundEvent_4_OnClick__DelegateSignature(class UUI_Button_C* Button);
	void BndEvt__UI_Button_CreateServer_K2Node_ComponentBoundEvent_5_OnClick__DelegateSignature(class UUI_Button_C* Button);
	void OnClick_Event(class UUI_Button_C* Button);
	void Construct();
	void ExecuteUbergraph_UI_Multiplayer(int32 EntryPoint, bool Temp_bool_IsClosed_Variable, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Has_Been_Initd_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue, TArray<class UWidget*>& CallFunc_GetAllChildren_ReturnValue_1, class UWidget* CallFunc_Array_Get_Item, class UWidget* CallFunc_Array_Get_Item_1, class UUI_Button_C* K2Node_DynamicCast_AsUI_Button, bool K2Node_DynamicCast_bSuccess, class UUI_Button_C* K2Node_DynamicCast_AsUI_Button_1, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UUI_Button_C* K2Node_ComponentBoundEvent_Button_2, class UUI_Button_C* K2Node_ComponentBoundEvent_Button_1, class UUI_Button_C* K2Node_ComponentBoundEvent_Button, class UUI_Button_C* K2Node_CustomEvent_Button);
};

}


