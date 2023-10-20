#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x288 - 0x280)
// WidgetBlueprintGeneratedClass UI_KillLog.UI_KillLog_C
class UUI_KillLog_C : public UUserWidget
{
public:
	class UVerticalBox*                          VerticalBox_Log;                                   // 0x280(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_KillLog_C* GetDefaultObj();

	void AddEntryToLog(class UPG_PlayerState_Game* Killed, class UPG_PlayerState_Game* Killer, enum class EPlayerDeathType DeathType, class UPG_PlayerState_Game* L_Killer, class UPG_PlayerState_Game* L_Killed, enum class EPlayerDeathType L_DeathType, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, class UBP_PG_PlayerState_Game_C* K2Node_DynamicCast_AsBP_PG_Player_State_Game, bool K2Node_DynamicCast_bSuccess, bool CallFunc_RemoveChildAt_ReturnValue, int32 CallFunc_GetChildrenCount_ReturnValue, class UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, class UUI_KillLog_Entry_C* CallFunc_Create_ReturnValue, class UPanelSlot* CallFunc_AddChild_ReturnValue, class UVerticalBoxSlot* CallFunc_SlotAsVerticalBoxSlot_ReturnValue);
};

}


