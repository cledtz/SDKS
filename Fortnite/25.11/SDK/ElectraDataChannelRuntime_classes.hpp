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

// 0x30 (0x2B8 - 0x288)
// Class ElectraDataChannelRuntime.ElectraDataChannelPlayer
class AElectraDataChannelPlayer : public AActor
{
public:
	FMulticastInlineDelegateProperty_            OnTerminalError;                                   // 0x288(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_8177[0x20];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ElectraDataChannelPlayer");
		return Clss;
	}

	void UseTimeFromMediaPlayer(class UMediaPlayer* InMediaPlayer);
	void PlayFromStateStreamServer(const class FString& InStatePlaylistURL);
	void PlayFromMediaPlayer(class UMediaPlayer* InMediaPlayer);
	void PlayFromFile(const class FString& InFilename);
	void EndPlayback();
};

// 0x38 (0x2C0 - 0x288)
// Class ElectraDataChannelRuntime.ElectraDataChannelRecorder
class AElectraDataChannelRecorder : public AActor
{
public:
	uint8                                        Pad_8178[0x38];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ElectraDataChannelRecorder");
		return Clss;
	}

	void UseTimeFromMediaPlayer(class UMediaPlayer* InMediaPlayer);
	void StartRecording();
	void RecordToFile(const class FString& InFilename);
	void EndRecording();
};

// 0x78 (0x300 - 0x288)
// Class ElectraDataChannelRuntime.ElectraDataChannelTarget
class AElectraDataChannelTarget : public AActor
{
public:
	uint8                                        Pad_8179[0x78];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ElectraDataChannelTarget");
		return Clss;
	}

	void SetTargetAlias(const class FString& InAlias);
	class FString GetTargetAlias();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
