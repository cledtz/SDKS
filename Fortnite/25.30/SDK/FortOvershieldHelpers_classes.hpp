#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB0 (0x150 - 0xA0)
// Class FortOvershieldHelpers.FortOvershieldHelperComponent
class UFortOvershieldHelperComponent : public UActorComponent
{
public:
	uint8                                        Pad_5830[0xB0];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortOvershieldHelperComponent");
		return Clss;
	}

	void ClearOvershieldListenerDelegates(class UGameplayAbility* OwningAbility);
	void AssignOvershieldListenerDelegates(class UGameplayAbility* OwningAbility, const struct FFortOvershieldDelegateContainer& Delegates);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
