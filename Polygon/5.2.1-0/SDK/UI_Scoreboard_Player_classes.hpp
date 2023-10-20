#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x78 (0x2F8 - 0x280)
// WidgetBlueprintGeneratedClass UI_Scoreboard_Player.UI_Scoreboard_Player_C
class UUI_Scoreboard_Player_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UBorder*                               Border_Illumination;                               // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UBorder*                               Border_MyPlayer;                                   // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_IsPatron;                                    // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_LevelIcon;                                   // 0x2A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_LevelNumber;                             // 0x2A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_PlayerDeath;                             // 0x2B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_PlayerKills;                             // 0x2B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_PlayerName;                              // 0x2C0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_PlayerNumber;                            // 0x2C8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_PlayerPing;                              // 0x2D0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_PlayerScore;                             // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPG_PlayerState_Game*                  Player;                                            // 0x2E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	int32                                        PlayerNumber;                                      // 0x2E8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	uint8                                        Pad_2FBB[0x4];                                     // Fixing Size After Last Property 
	class UUI_Scoreboard_C*                      ParentWidget;                                      // 0x2F0(0x8)(Edit, BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_Scoreboard_Player_C* GetDefaultObj();

	struct FEventReply OnMouseButtonDown(const struct FGeometry& MyGeometry, struct FPointerEvent& MouseEvent, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, class UUI_Scoreboard_Player_Menu_C* CallFunc_Create_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue);
	void SetPlayerNumber(int32 NewNumber, class FText CallFunc_Conv_IntToText_ReturnValue, int32 CallFunc_Percent_IntInt_ReturnValue, bool CallFunc_NotEqual_IntInt_ReturnValue);
	void SortPlayers(class UGridPanel* GridTeam, class UUI_Scoreboard_Player_C* L_PlayerSlot, bool L_IsSorted, class UGridPanel* L_GridTeam);
	void SetPlayerName(bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, bool Temp_bool_Variable_1, const struct FLinearColor& Temp_struct_Variable, const struct FLinearColor& Temp_struct_Variable_1, enum class ESlateVisibility K2Node_Select_Default, const struct FLinearColor& K2Node_Select_Default_1, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const class FString& CallFunc_GetPlayerName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue);
	void SetPlayerDeaths(class FText CallFunc_Conv_ByteToText_ReturnValue);
	void SetKillsOfPlayer(class FText CallFunc_Conv_ByteToText_ReturnValue);
	void SetPlayerGameScore(float CallFunc_GetScore_ReturnValue, int32 CallFunc_Round_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue, double CallFunc_Round_A_ImplicitCast);
	void OnLoaded_35F61F374CADE7A5EBBD56B37A053F44(class UObject* Loaded);
	void Construct();
	void OnChangeNumberKills_Event();
	void OnChangeNumberDeaths_Event();
	void OnPlayerNameChanged_Event();
	void SetPlayerLevel();
	void OnTotalProgress_Event();
	void ExecuteUbergraph_UI_Scoreboard_Player(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UObject* K2Node_CustomEvent_Loaded, class UObject* Temp_object_Variable, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, uint8 CallFunc_GetCompressedPing_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, uint8 CallFunc_Multiply_ByteByte_ReturnValue, class FText CallFunc_Conv_ByteToText_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UPlayerController* CallFunc_GetOwningPlayer_ReturnValue, class UActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, const struct FSlateColor& K2Node_MakeStruct_SlateColor, const struct FLevelInfo& CallFunc_GetCurrentLevelInfo_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, class FText CallFunc_Conv_IntToText_ReturnValue);
};

}


