#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x2B0 - 0x280)
// WidgetBlueprintGeneratedClass UI_SpawnScreen_Squad_Player.UI_SpawnScreen_Squad_Player_C
class UUI_SpawnScreen_Squad_Player_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UButton*                               Button_Select;                                     // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_IsLeader;                                    // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UProgressBar*                          ProgressBar_Health;                                // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_PlayerName;                              // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBP_PG_PlayerState_Game_C*             Player;                                            // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_SpawnScreen_Squad_Player_C* GetDefaultObj();

	void OnPlayerNameChanged_Event();
	void OnChangeHealth_Event();
	void Construct();
	void BndEvt__UI_SpawnScreen_Squad_Player_Button_Select_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
	void Destruct();
	void OnEndPlay_Event(class UActor* Actor, enum class EEndPlayReason EndPlayReason);
	void OnPawnSet_Event(class UPlayerState* Player, class UPawn* NewPawn, class UPawn* OldPawn);
	void ExecuteUbergraph_UI_SpawnScreen_Squad_Player(int32 EntryPoint, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool Temp_bool_True_if_break_was_hit_Variable, int32 Temp_int_Array_Index_Variable, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsValid_ReturnValue, const class FString& CallFunc_GetPlayerName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UPG_Game_Character* K2Node_DynamicCast_AsPG_Game_Character, bool K2Node_DynamicCast_bSuccess, int32 CallFunc_GetHealth_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_GetIsEnabled_ReturnValue, bool CallFunc_NotEqual_BoolBool_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, class UBP_PG_PlayerController_Game_C* K2Node_DynamicCast_AsBP_PG_Player_Controller_Game, bool K2Node_DynamicCast_bSuccess_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, class UUserWidget* CallFunc_Array_Get_Item, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, class UUI_Game_SpawnScreen_Player_SquadMember_C* K2Node_DynamicCast_AsUI_Game_Spawn_Screen_Player_Squad_Member, bool K2Node_DynamicCast_bSuccess_2, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, class UActor* K2Node_CustomEvent_Actor, enum class EEndPlayReason K2Node_CustomEvent_EndPlayReason, class UPlayerState* K2Node_CustomEvent_Player, class UPawn* K2Node_CustomEvent_NewPawn, class UPawn* K2Node_CustomEvent_OldPawn, float CallFunc_SetPercent_InPercent_ImplicitCast);
};

}


