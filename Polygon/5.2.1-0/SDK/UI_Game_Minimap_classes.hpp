#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0x2F8 - 0x280)
// WidgetBlueprintGeneratedClass UI_Game_Minimap.UI_Game_Minimap_C
class UUI_Game_Minimap_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               Border_Background_Red;                             // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UHorizontalBox*                        HorizontalBox_ControlPoints;                       // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Lines;                                             // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                LinesRainbow;                                      // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          ProgressBar_CaptureProcessMyTeam;                  // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          ProgressBar_CaptureProcessOpponentTeam;            // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_Map;                                       // 0x2B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_CapturePointsMyTeam;                     // 0x2C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_CapturePointsOpponentTeam;               // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_GameTimer;                               // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_GameTimer_CA_01;                         // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_GameTimer_CA_02;                         // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_Game_Minimap_Map_C*                UI_Map;                                            // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PG_PlayerState_Game_C*             PlayerState;                                       // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_Game_Minimap_C* GetDefaultObj();

	void CreateControlPointMarkers(enum class EControlPoint L_NextControlPoint, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_Add_ByteByte_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue_1, class UBP_PG_GameState_Game_C* CallFunc_GetGameStateBP_MyGameState, class UBP_PG_GameState_Game_C* CallFunc_GetGameStateBP_MyGameState_1, int32 CallFunc_Array_LastIndex_ReturnValue, class UControlPoint* CallFunc_Array_Get_Item, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, const struct FSlateChildSize& K2Node_MakeStruct_SlateChildSize, bool CallFunc_BooleanAND_ReturnValue, class UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUI_ControlPointMarker_C* CallFunc_Create_ReturnValue, class UHorizontalBoxSlot* CallFunc_AddChildToHorizontalBox_ReturnValue);
	void PreConstruct(bool IsDesignTime);
	void OnGameTimer_Event();
	void OnChangeTotalScore_Event();
	void OnSetTeam_Event();
	void Construct();
	void ExecuteUbergraph_UI_Game_Minimap(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool Temp_bool_Variable_1, class UBP_PG_GameState_Game_C* CallFunc_GetGameStateBP_MyGameState, bool Temp_bool_IsClosed_Variable, int32 CallFunc_GetGameTimer_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, int32 CallFunc_Divide_IntInt_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue, const class FString& CallFunc_Conv_IntToString_ReturnValue_1, const class FString& CallFunc_Concat_StrStr_ReturnValue, const class FString& CallFunc_Concat_StrStr_ReturnValue_1, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue_1, bool Temp_bool_Has_Been_Initd_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool K2Node_Event_IsDesignTime, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue_1, bool Temp_bool_Variable_2, class UBP_PG_GameState_Game_C* CallFunc_GetGameStateBP_MyGameState_1, const class FString& K2Node_Select_Default, class FText CallFunc_Conv_StringToText_ReturnValue, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, class UBP_PG_PlayerState_Game_C* K2Node_DynamicCast_AsBP_PG_Player_State_Game, bool K2Node_DynamicCast_bSuccess, bool CallFunc_NotEqual_ByteByte_ReturnValue, bool CallFunc_NotEqual_ByteByte_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool Temp_bool_Variable_3, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, const class FString& K2Node_Select_Default_1, class FText CallFunc_Conv_StringToText_ReturnValue_1, const struct FFormatArgumentData& K2Node_MakeStruct_FormatArgumentData_1, TArray<struct FFormatArgumentData>& K2Node_MakeArray_Array, class FText CallFunc_Format_ReturnValue, class UBP_PG_GameState_Game_C* CallFunc_GetGameStateBP_MyGameState_2, int32 CallFunc_GetMaxScoreForWin_ReturnValue, class UBP_PG_GameState_Game_C* CallFunc_GetGameStateBP_MyGameState_3, double CallFunc_Conv_IntToDouble_ReturnValue, int32 CallFunc_GetMaxScoreForWin_ReturnValue_1, class UBP_PG_GameState_Game_C* CallFunc_GetGameStateBP_MyGameState_4, double CallFunc_Conv_IntToDouble_ReturnValue_1, class UBP_PG_GameState_Game_C* CallFunc_GetGameStateBP_MyGameState_5, class UBP_PG_GameState_Game_C* CallFunc_GetGameStateBP_MyGameState_6, int32 CallFunc_GetScoreAlphaTeam_ReturnValue, int32 CallFunc_GetScoreBravoTeam_ReturnValue, int32 CallFunc_GetScoreAlphaTeam_ReturnValue_1, int32 CallFunc_GetScoreBravoTeam_ReturnValue_1, int32 K2Node_Select_Default_2, int32 K2Node_Select_Default_3, double CallFunc_Conv_IntToDouble_ReturnValue_2, double CallFunc_Conv_IntToDouble_ReturnValue_3, double CallFunc_Divide_DoubleDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_1, class FText CallFunc_Conv_IntToText_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue_1, float CallFunc_SetPercent_InPercent_ImplicitCast, float CallFunc_SetPercent_InPercent_ImplicitCast_1);
};

}


