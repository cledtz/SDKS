#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0xD8 - 0xA8)
// BlueprintGeneratedClass Task_Menu_GeneralMenuScreen_SetActivePage.Task_Menu_GeneralMenuScreen_SetActivePage_C
class UTask_Menu_GeneralMenuScreen_SetActivePage_C : public UAction
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xA8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UUI_Menu_GeneralMenuScreen_C*          UI_Menu_General_Menu_Screen;                       // 0xB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        ActiveIndex;                                       // 0xB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_2C5[0x4];                                      // Fixing Size After Last Property 
	class UUI_Button_Line_C*                     Button;                                            // 0xC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            OnSucceed;                                         // 0xC8(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)

	static class UClass* StaticClass();
	static class UTask_Menu_GeneralMenuScreen_SetActivePage_C* GetDefaultObj();

	void ReceiveActivate();
	void OnDark_Event();
	void SwitchPage();
	void ExecuteUbergraph_Task_Menu_GeneralMenuScreen_SetActivePage(int32 EntryPoint, class UTask_Menu_CameraTransition_C* CallFunc_CreateAction_ReturnValue, bool Temp_bool_Variable, class FName Temp_name_Variable, class FName Temp_name_Variable_1, class UTask_Menu_CameraTransition_C* CallFunc_CreateAction_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class FName Temp_name_Variable_2, class FName Temp_name_Variable_3, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, bool Temp_bool_Variable_1, class UUI_CameraTransitions_DarkenScreen_C* CallFunc_Create_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue_1, class FName Temp_name_Variable_4, class FName K2Node_Select_Default, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_2, class UBP_PG_PlayerController_Menu_C* K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu, bool K2Node_DynamicCast_bSuccess, class UBP_PG_PlayerController_Menu_C* K2Node_DynamicCast_AsBP_PG_Player_Controller_Menu_1, bool K2Node_DynamicCast_bSuccess_1, class UActor* CallFunc_GetViewTarget_ReturnValue, TArray<class UUI_Menu_Solder_Gear_Watch_Selector_C*>& CallFunc_GetAllWidgetsOfClass_FoundWidgets, bool CallFunc_Array_Contains_ReturnValue, class UUI_Menu_Solder_Gear_Watch_Selector_C* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Array_Contains_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, class FName Temp_name_Variable_5, class FName K2Node_Select_Default_1, class UWidget* CallFunc_GetActiveWidget_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue);
	void OnSucceed__DelegateSignature();
};

}


