#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x40 - 0x40)
// Class VerseFortniteGameplayAbilities.FortAnimNotify_UEFNGameplayTag
class UFortAnimNotify_UEFNGameplayTag : public UFortAnimNotify_GameplayTag
{
public:

	static class UClass* StaticClass();
	static class UFortAnimNotify_UEFNGameplayTag* GetDefaultObj();

};

// 0x10 (0xB38 - 0xB28)
// Class VerseFortniteGameplayAbilities.FortGameplayAbility_PlayAnim
class UFortGameplayAbility_PlayAnim : public UFortGameplayAbility
{
public:
	class UAnimMontage*                          MontageToPlay;                                     // 0xB28(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PlayRate;                                          // 0xB30(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E18[0x4];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortGameplayAbility_PlayAnim* GetDefaultObj();

	void OnInterrupted();
	void OnCompleted();
	void OnCancelled();
	void OnBlendOut();
};

// 0x18 (0xB50 - 0xB38)
// Class VerseFortniteGameplayAbilities.FortGameplayAbility_PlayAnimAndApplyEffect
class UFortGameplayAbility_PlayAnimAndApplyEffect : public UFortGameplayAbility_PlayAnim
{
public:
	bool                                         bWaitForAnimNotify;                                // 0xB38(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E1B[0x7];                                      // Fixing Size After Last Property 
	TSubclassOf<class UGameplayEffect>           EffectToApply;                                     // 0xB40(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTargetingPreset*                      TargetingPreset;                                   // 0xB48(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortGameplayAbility_PlayAnimAndApplyEffect* GetDefaultObj();

};

// 0x8 (0x90 - 0x88)
// Class VerseFortniteGameplayAbilities.VerseFortniteAbilityComponentBase
class UVerseFortniteAbilityComponentBase : public UEntityActorComponent
{
public:
	uint8                                        Pad_E1D[0x8];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UVerseFortniteAbilityComponentBase* GetDefaultObj();

};

}

