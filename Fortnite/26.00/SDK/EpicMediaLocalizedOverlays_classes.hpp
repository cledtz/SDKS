#pragma once

// Dumped with Dumper-7!


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
	uint8                                        Pad_1EAC[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UEpicMediaDownloadLocalizedOverlays* GetDefaultObj();

};

}


