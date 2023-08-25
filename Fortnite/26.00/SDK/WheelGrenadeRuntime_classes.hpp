#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x330 - 0x318)
// Class WheelGrenadeRuntime.WheelGrenadeWheel
class UWheelGrenadeWheel : public UAttachableWheel
{
public:
	uint8                                        Pad_22E4[0x8];                                     // Fixing Size After Last Property 
	float                                        MaxHealth;                                         // 0x320(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Config, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_22E5[0x4];                                     // Fixing Size After Last Property 
	class UFortAbilitySystemComponent*           AbilitySystemComponent;                            // 0x328(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UWheelGrenadeWheel* GetDefaultObj();

	void HandleOutOfHealth(float InDamage, struct FGameplayTagContainer& InTags, struct FGameplayEffectContextHandle& InEffectContext, class UController* InEventInstigator, class UActor* InDamageCauser);
	void HandleDamaged(float Damage, struct FGameplayTagContainer& InTags, struct FGameplayEffectContextHandle& EffectContext, class UController* EventInstigator, class UActor* DamageCauser);
	float GetMaxHealth();
	float GetHealth();
};

}


