#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x100 (0x1A0 - 0xA0)
// Class HealthShieldRegenRuntime.FortHealthShieldRegenComponent
class UFortHealthShieldRegenComponent : public UActorComponent
{
public:
	uint8                                        Pad_1E68[0x100];                                   // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortHealthShieldRegenComponent");
		return Clss;
	}

	void ClearHealthShieldRegen_ShieldListenerDelegates(class UGameplayAbility* OwningAbility);
	void ClearHealthShieldRegen_HealthListenerDelegates(class UGameplayAbility* OwningAbility);
	void AssignHealthShieldRegen_ShieldListenerDelegates(class UGameplayAbility* OwningAbility, const struct FFortHealthShieldRegen_ShieldDelegateContainer& Delegates);
	void AssignHealthShieldRegen_HealthListenerDelegates(class UGameplayAbility* OwningAbility, const struct FFortHealthShieldRegen_HealthDelegateContainer& Delegates);
	bool AllowHealthShieldRegen();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
