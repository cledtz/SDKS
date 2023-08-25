#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xA8 (0x148 - 0xA0)
// Class FortOvershieldHelpers.FortOvershieldHelperComponent
class UFortOvershieldHelperComponent : public UActorComponent
{
public:
	uint8                                        Pad_4910[0xA8];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortOvershieldHelperComponent* GetDefaultObj();

	void ClearOvershieldListenerDelegates(class UGameplayAbility* OwningAbility);
	void AssignOvershieldListenerDelegates(class UGameplayAbility* OwningAbility, const struct FFortOvershieldDelegateContainer& Delegates);
};

}


