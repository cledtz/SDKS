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

// 0x10 (0x90 - 0x80)
// Class EpicMediaLocalizedOverlays.EpicMediaDownloadLocalizedOverlays
class UEpicMediaDownloadLocalizedOverlays : public ULocalizedOverlays
{
public:
	class UMediaPlayer*                          MediaPlayer;                                       // 0x80(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3876[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EpicMediaDownloadLocalizedOverlays");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
