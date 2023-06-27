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

// 0x10 (0x298 - 0x288)
// Class StreamingRadio.StreamingRadioManagerNative
class AStreamingRadioManagerNative : public AActor
{
public:
	class UFortStreamMediaSource*                StreamMediaSource;                                 // 0x288(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMediaPlayer*                          MediaPlayer;                                       // 0x290(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("StreamingRadioManagerNative");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif