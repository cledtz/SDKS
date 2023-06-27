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

// 0x28 (0x50 - 0x28)
// Class MediaMovieStreamer.MediaMovieAssets
class UMediaMovieAssets : public UObject
{
public:
	class UMediaPlayer*                          MediaPlayer;                                       // 0x28(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMediaSoundComponent*                  MediaSoundComponent;                               // 0x30(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMediaSource*                          MediaSource;                                       // 0x38(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMediaTexture*                         MediaTexture;                                      // 0x40(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_17E6[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MediaMovieAssets");
		return Clss;
	}

	void OnMediaEnd();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
