#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x2B0 - 0x280)
// WidgetBlueprintGeneratedClass UI_Game_NotifyPossibilityUnlockModule.UI_Game_NotifyPossibilityUnlockModule_C
class UUI_Game_NotifyPossibilityUnlockModule_C : public UUserWidget
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x280(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      Display;                                           // 0x288(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_ModuleName;                              // 0x290(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            TextBlock_WeaponName;                              // 0x298(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class FString                                ModuleName;                                        // 0x2A0(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UUI_Game_NotifyPossibilityUnlockModule_C* GetDefaultObj();

	void Construct();
	void ExecuteUbergraph_UI_Game_NotifyPossibilityUnlockModule(int32 EntryPoint, class FText CallFunc_Conv_StringToText_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UPlayerState* CallFunc_GetPlayerState_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationReverse_ReturnValue, class UPG_PlayerState_Game* K2Node_DynamicCast_AsPG_Player_State_Game, bool K2Node_DynamicCast_bSuccess);
};

}


