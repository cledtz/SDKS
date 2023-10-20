#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x458 - 0x448)
// BlueprintGeneratedClass BP_PG_PlayerState_Game.BP_PG_PlayerState_Game_C
class UBP_PG_PlayerState_Game_C : public UPG_PlayerState_Game
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x448(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x450(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_PG_PlayerState_Game_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void OnNotifyPossibilityUnlockModule_Event(const class FString& ModuleName);
	void ExecuteUbergraph_BP_PG_PlayerState_Game(int32 EntryPoint, const class FString& K2Node_CustomEvent_ModuleName, class UUI_Game_NotifyPossibilityUnlockModule_C* CallFunc_Create_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
};

}


