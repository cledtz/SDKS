#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x298 - 0x280)
// WidgetBlueprintGeneratedClass UI_Game_SpawnScreen_Player_ToolTip.UI_Game_SpawnScreen_Player_ToolTip_C
class UUI_Game_SpawnScreen_Player_ToolTip_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UTextBlock*                            TextBlock_Text;                                    // 0x288(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UPawn*                                 Character;                                         // 0x290(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_Game_SpawnScreen_Player_ToolTip_C* GetDefaultObj();

	void Construct();
	void ExecuteUbergraph_UI_Game_SpawnScreen_Player_ToolTip(int32 EntryPoint, const class FString& CallFunc_GetPlayerName_ReturnValue, class FText CallFunc_Conv_StringToText_ReturnValue, bool CallFunc_IsValid_ReturnValue);
};

}


