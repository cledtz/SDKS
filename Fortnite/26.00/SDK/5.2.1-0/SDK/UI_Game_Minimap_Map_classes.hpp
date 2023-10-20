#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x118 (0x398 - 0x280)
// WidgetBlueprintGeneratedClass UI_Game_Minimap_Map.UI_Game_Minimap_Map_C
class UUI_Game_Minimap_Map_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Map;                                               // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              MapOverlay;                                        // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Mat;                                               // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         Draw;                                              // 0x2A0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_31CB[0x7];                                     // Fixing Size After Last Property 
	double                                       Zoom;                                              // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class UObject*                               UI_PlayerIcon;                                     // 0x2B0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FMapInfo                              MapInfo;                                           // 0x2B8(0xE0)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UUI_Game_Minimap_Map_C* GetDefaultObj();

	void ConvertCharacterPositionToMap(double* X, double* Y, class UCharacter* CallFunc_GetPlayerCharacter_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const class FString& CallFunc_Conv_DoubleToString_ReturnValue, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, bool K2Node_SwitchString_CmpSuccess, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, double CallFunc_Subtract_DoubleDouble_ReturnValue, double CallFunc_Subtract_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Conv_DoubleToString_InDouble_ImplicitCast);
	void AddOtherPlayerIcon(class UPawn* PlayerCharacter, class UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUI_Game_Minimap_OtherPlayerIcon_C* CallFunc_Create_ReturnValue, class UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue);
	void AddOtherIcon(class UActor* Owner, class UUI_Game_Minimap_OtherIcon_C* CallFunc_Create_ReturnValue, class UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue);
	void OnLoaded_136039F0430841AA8E176F891F8DB5F6(class UObject* Loaded);
	void Construct();
	void SetMapPosition();
	void ExecuteUbergraph_UI_Game_Minimap_Map(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, int32 Temp_int_Array_Index_Variable, int32 Temp_int_Array_Index_Variable_1, bool Temp_bool_True_if_break_was_hit_Variable, bool CallFunc_Not_PreBool_ReturnValue, int32 Temp_int_Loop_Counter_Variable_2, int32 CallFunc_Add_IntInt_ReturnValue_2, int32 Temp_int_Array_Index_Variable_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, TArray<class FName>& CallFunc_GetDataTableRowNames_OutRowNames, const class FString& CallFunc_GetCurrentLevelName_ReturnValue, class FName CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, const struct FMapInfo& CallFunc_GetDataTableRowFromName_OutRow, bool CallFunc_GetDataTableRowFromName_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UObject* Temp_object_Variable, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, double CallFunc_ConvertCharacterPositionToMap_X, double CallFunc_ConvertCharacterPositionToMap_Y, class UCharacter* CallFunc_GetPlayerCharacter_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, float CallFunc_BreakRotator_Roll, float CallFunc_BreakRotator_Pitch, float CallFunc_BreakRotator_Yaw, class UCharacter* CallFunc_GetPlayerCharacter_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue, bool CallFunc_IsValid_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, class UGameStateBase* CallFunc_GetGameState_ReturnValue, class UObject* K2Node_CustomEvent_Loaded, class UBP_PG_GameState_Game_C* K2Node_DynamicCast_AsBP_PG_Game_State_Game, bool K2Node_DynamicCast_bSuccess_1, class UControlPoint* CallFunc_Array_Get_Item_1, class UTeamBase* CallFunc_Array_Get_Item_2, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_Array_Length_ReturnValue_1, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_2, class UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UUI_Game_Minimap_TeamBase_C* CallFunc_Create_ReturnValue, class UPlayerController* CallFunc_GetOwningPlayer_ReturnValue_1, class UUI_Game_Minimap_ControlPoint_C* CallFunc_Create_ReturnValue_1, class UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue, class UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue_1, bool CallFunc_EqualEqual_StrStr_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast, double CallFunc_Add_DoubleDouble_B_ImplicitCast, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1, float CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_2, double CallFunc_Add_DoubleDouble_A_ImplicitCast, float CallFunc_SetRenderTransformAngle_Angle_ImplicitCast);
};

}


