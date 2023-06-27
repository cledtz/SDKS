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

// 0x0 (0x28 - 0x28)
// Class AudioLinkEngine.AudioLinkBlueprintInterface
class UAudioLinkBlueprintInterface : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AudioLinkBlueprintInterface");
		return Clss;
	}

	void StopLink();
	void SetLinkSound(class USoundBase* NewSound);
	void PlayLink(float StartTime);
	bool IsLinkPlaying();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
