#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x338 - 0x310)
// BlueprintGeneratedClass BP_Item_Gear_Watch_02.BP_Item_Gear_Watch_02_C
class UBP_Item_Gear_Watch_02_C : public UItem_Watch_General
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x310(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetComponent*                      Widget_Functional;                                 // 0x318(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	int32                                        KillsCounter;                                      // 0x320(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SavedKills;                                        // 0x324(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_Item_Gear_Watch_02_Display_C*      DisplayWidget;                                     // 0x328(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UPlayFabJsonObject*                    AsInventoryItem;                                   // 0x330(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_Item_Gear_Watch_02_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void EnableFunctional();
	void SaveKillsProgress();
	void OnAddedGameScore_Event(TArray<struct FScoreInfoBlueprint>& ScoreInfos);
	void SaveWatchProgress_Success(const struct FClientExecuteCloudScriptResult& Result, class UObject* CustomData);
	void SaveWatchProgress_Failure(const struct FPlayFabError& Error, class UObject* CustomData);
	void ExecuteUbergraph_BP_Item_Gear_Watch_02(int32 EntryPoint, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, class UActor* CallFunc_GetOwner_ReturnValue, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_1, class UPG_PlayerState_Base* K2Node_DynamicCast_AsPG_Player_State_Base, bool K2Node_DynamicCast_bSuccess, class UPG_PlayerState_Game* K2Node_DynamicCast_AsPG_Player_State_Game, bool K2Node_DynamicCast_bSuccess_1, class UPlayFabJsonObject* CallFunc_GetPlayerCombinedInfo_ReturnValue, TArray<class UPlayFabJsonObject*>& CallFunc_GetObjectArrayField_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, class UPlayFabJsonObject* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const class FString& CallFunc_GetStringField_ReturnValue, bool CallFunc_EqualEqual_StrStr_ReturnValue, int32 Temp_int_Loop_Counter_Variable, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class UPawn* CallFunc_GetPlayerPawn_ReturnValue, class UPG_Game_Character* K2Node_DynamicCast_AsPG_Game_Character, bool K2Node_DynamicCast_bSuccess_2, int32 Temp_int_Array_Index_Variable_1, bool Temp_bool_True_if_break_was_hit_Variable_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, TArray<struct FScoreInfoBlueprint>& K2Node_CustomEvent_ScoreInfos, const struct FScoreInfoBlueprint& CallFunc_Array_Get_Item_1, class FText CallFunc_Conv_IntToText_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UPlayFabJsonObject* CallFunc_GetObjectField_ReturnValue, float CallFunc_GetNumberField_ReturnValue, float CallFunc_GetNumberField_ReturnValue_1, int32 CallFunc_FTrunc_ReturnValue, class FText CallFunc_Conv_DoubleToText_ReturnValue, class UUserWidget* CallFunc_GetWidget_ReturnValue, class UUI_Item_Gear_Watch_02_Display_C* K2Node_DynamicCast_AsUI_Item_Gear_Watch_02_Display, bool K2Node_DynamicCast_bSuccess_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_2, int32 Temp_int_Variable, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FClientExecuteCloudScriptResult& K2Node_CustomEvent_result, class UObject* K2Node_CustomEvent_customData_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, const struct FPlayFabError& K2Node_CustomEvent_error, class UObject* K2Node_CustomEvent_customData, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_1, double CallFunc_FTrunc_A_ImplicitCast, double CallFunc_Conv_DoubleToText_Value_ImplicitCast);
};

}


