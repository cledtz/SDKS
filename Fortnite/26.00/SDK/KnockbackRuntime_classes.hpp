#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x240 (0x578 - 0x338)
// Class KnockbackRuntime.FortAthenaMutator_Knockback
class UFortAthenaMutator_Knockback : public UFortAthenaMutator
{
public:
	bool                                         bStorePlayerKnockbackData;                         // 0x338(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReplicatePlayerKnockbackData;                     // 0x339(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_450A[0x6];                                     // Fixing Size After Last Property 
	FMulticastInlineDelegateProperty_            OnPlayerKnockbackDataChanged;                      // 0x340(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FKnockbackMutatorDataArray            AllPlayersKnockbackData;                           // 0x350(0x120)(Net, NativeAccessSpecifierPublic)
	struct FScalableFloat                        bDisplayKnockbackDamageNumbersAsPercentage;        // 0x470(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        ConvertToKnockbackDamageMultiplier;                // 0x498(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        PercentDamageLowMaxThreshold;                      // 0x4C0(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	struct FScalableFloat                        PercentDamageMediumMaxThreshold;                   // 0x4E8(0x28)(Edit, DisableEditOnInstance, Protected, NativeAccessSpecifierProtected)
	float                                        KnockbackMultiplierInitialValue;                   // 0x510(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_450B[0x64];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortAthenaMutator_Knockback* GetDefaultObj();

	void SetPlayersShouldBreakThroughStructures(bool bActive, class UFortPlayerPawn* PlayerPawn);
	void HandleBlockedCharacterMovement(struct FHitResult* InOutImpact, class UFortPawn* FortPawn);
	float GetPercentDamageMediumMaxThreshold();
	float GetPercentDamageLowMaxThreshold();
	float GetKnockbackMultiplierInitialValue();
	TArray<struct FKnockbackMutatorData> GetAllPlayersKnockbackData();
};

// 0x10 (0xB38 - 0xB28)
// Class KnockbackRuntime.FortGameplayAbility_KnockbackMutator
class UFortGameplayAbility_KnockbackMutator : public UFortGameplayAbility
{
public:
	class UFortAthenaMutator_Knockback*          CachedMutator;                                     // 0xB28(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UFortAthenaMutator_Knockback> MutatorClassToGet;                                 // 0xB30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortGameplayAbility_KnockbackMutator* GetDefaultObj();

	void SaveKnockbackData(struct FKnockbackMutatorData& InKnockbackData);
	class UFortAthenaMutator_Knockback* GetCachedMutator();
};

}


