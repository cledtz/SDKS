#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class AudioLinkEngine.AudioLinkBlueprintInterface
class UAudioLinkBlueprintInterface : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UAudioLinkBlueprintInterface* GetDefaultObj();

	void StopLink();
	void SetLinkSound(class USoundBase* NewSound);
	void PlayLink(float StartTime);
	bool IsLinkPlaying();
};

}


