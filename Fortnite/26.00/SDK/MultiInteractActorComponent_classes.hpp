#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x21 (0x179 - 0x158)
// BlueprintGeneratedClass MultiInteractActorComponent.MultiInteractActorComponent_C
class UMultiInteractActorComponent_C : public UFortActorComponent_MultiInteract
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x158(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                          RemoveInteractPlayerTag;                           // 0x160(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          AddInteractPlayerTag;                              // 0x164(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          LoopingMultiInteractTag;                           // 0x168(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_67F3[0x4];                                     // Fixing Size After Last Property 
	double                                       RequiredDuration;                                  // 0x170(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         GCNLApplied;                                       // 0x178(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UMultiInteractActorComponent_C* GetDefaultObj();

	void AddGCNL(class UActor* Owner, int32 CallFunc_GetInteractingActorCount_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue, class UActor* CallFunc_GetOwner_ReturnValue, float CallFunc_MakeGameplayCueParameters_RawMagnitude_ImplicitCast);
	void RemoveGCNL(class UActor* Owner, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UActor* CallFunc_GetOwner_ReturnValue);
	void ExecuteGCNFromTag(class UFortPlayerPawn*& PlayerPawn, struct FGameplayTag& InteractTag, int32 PreviousInteractPlayerCount, int32 CallFunc_GetInteractingActorCount_ReturnValue, bool CallFunc_IsValid_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class UActor* CallFunc_GetOwner_ReturnValue, float CallFunc_GetInteractionDuration_ReturnValue, double CallFunc_SafeDivide_ReturnValue, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue, float CallFunc_MakeGameplayCueParameters_RawMagnitude_ImplicitCast, double CallFunc_SafeDivide_A_ImplicitCast, float CallFunc_MakeGameplayCueParameters_NormalizedMagnitude_ImplicitCast);
	void SetRequiredDuration(double NewRequiredDuration);
	void UpdateForPlayerJustJoinedInteraction(class UFortPlayerStateAthena* JoinedPlayer);
	void UpdateForPlayerJustLeftInteraction(class UFortPlayerStateAthena* LeftPlayer);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_MultiInteractActorComponent(int32 EntryPoint, int32 CallFunc_GetInteractingActorCount_ReturnValue, class UFortPlayerStateAthena* K2Node_Event_JoinedPlayer, int32 CallFunc_Subtract_IntInt_ReturnValue, class UFortPlayerPawn* CallFunc_GetPlayerPawnOrVehicleDriver_ReturnValue, class UFortPlayerStateAthena* K2Node_Event_LeftPlayer, class UFortPlayerPawn* CallFunc_GetPlayerPawnOrVehicleDriver_ReturnValue_1, bool CallFunc_IsLocallyControlled_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, int32 CallFunc_GetInteractingActorCount_ReturnValue_1, bool CallFunc_EqualEqual_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2);
};

}


