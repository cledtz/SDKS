#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x610 - 0x5C0)
// Class STW_LagerRuntime.FortQuestLivingWorldVolume
class UFortQuestLivingWorldVolume : public UFortAthenaLivingWorldVolume
{
public:
	struct FGameplayTagContainer                 NoPlayerNeedsQuestFilterTags;                      // 0x5C0(0x20)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 PlayerNeedsQuestFilterTags;                        // 0x5E0(0x20)(Edit, Protected, NativeAccessSpecifierProtected)
	class UFortQuestItemDefinition*              RequiredQuest;                                     // 0x600(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_47C8[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortQuestLivingWorldVolume* GetDefaultObj();

	void HandlePIEQuestsUpdated();
};

}


