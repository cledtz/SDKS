#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF8 (0x198 - 0xA0)
// Class HealthShieldRegenRuntime.FortHealthShieldRegenComponent
class UFortHealthShieldRegenComponent : public UActorComponent
{
public:
	uint8                                        Pad_4416[0xF8];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortHealthShieldRegenComponent* GetDefaultObj();

	void ClearHealthShieldRegen_ShieldListenerDelegates(class UGameplayAbility* OwningAbility);
	void ClearHealthShieldRegen_HealthListenerDelegates(class UGameplayAbility* OwningAbility);
	void AssignHealthShieldRegen_ShieldListenerDelegates(class UGameplayAbility* OwningAbility, const struct FFortHealthShieldRegen_ShieldDelegateContainer& Delegates);
	void AssignHealthShieldRegen_HealthListenerDelegates(class UGameplayAbility* OwningAbility, const struct FFortHealthShieldRegen_HealthDelegateContainer& Delegates);
	bool AllowHealthShieldRegen();
};

}


