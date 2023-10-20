#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xC8 - 0xC0)
// BlueprintGeneratedClass BP_FOVManagerComponent_Game.BP_FOVManagerComponent_Game_C
class UBP_FOVManagerComponent_Game_C : public UFOVManagerComponent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xC0(0x8)(ZeroConstructor, Transient, DuplicateTransient)

	static class UClass* StaticClass();
	static class UBP_FOVManagerComponent_Game_C* GetDefaultObj();

	void ReceiveBeginPlay();
	void OnPossessedPawnChanged_Event(class UPawn* OldPawn, class UPawn* NewPawn);
	void OnAiming_Event(class UItem_Module_Optic* OpticItem);
	void ExecuteUbergraph_BP_FOVManagerComponent_Game(int32 EntryPoint, class UItem_Module_Optic* K2Node_CustomEvent_OpticItem, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UTask_FOVManagerComponent_AimingInterpolation_C* CallFunc_CreateAction_ReturnValue, class UPlayerController* CallFunc_GetPlayerController_ReturnValue, class UPawn* K2Node_CustomEvent_OldPawn, class UPawn* K2Node_CustomEvent_NewPawn, bool CallFunc_IsLocalPlayerController_ReturnValue, class UPG_Game_Character* K2Node_DynamicCast_AsPG_Game_Character, bool K2Node_DynamicCast_bSuccess, class UPlayerController* CallFunc_GetPlayerController_ReturnValue_1);
};

}


