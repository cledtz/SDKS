#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x2C0 - 0x290)
// Class ElectraDataChannelRuntime.ElectraDataChannelPlayer
class UElectraDataChannelPlayer : public UActor
{
public:
	FMulticastInlineDelegateProperty_            OnTerminalError;                                   // 0x290(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F98[0x20];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UElectraDataChannelPlayer* GetDefaultObj();

	void UseTimeFromMediaPlayer(class UMediaPlayer* InMediaPlayer);
	void PlayFromStateStreamServer(const class FString& InStatePlaylistURL);
	void PlayFromMediaPlayer(class UMediaPlayer* InMediaPlayer);
	void PlayFromFile(const class FString& InFilename);
	void EndPlayback();
};

// 0x38 (0x2C8 - 0x290)
// Class ElectraDataChannelRuntime.ElectraDataChannelRecorder
class UElectraDataChannelRecorder : public UActor
{
public:
	uint8                                        Pad_3F9D[0x38];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UElectraDataChannelRecorder* GetDefaultObj();

	void UseTimeFromMediaPlayer(class UMediaPlayer* InMediaPlayer);
	void StartRecording();
	void RecordToFile(const class FString& InFilename);
	void EndRecording();
};

// 0x78 (0x308 - 0x290)
// Class ElectraDataChannelRuntime.ElectraDataChannelTarget
class UElectraDataChannelTarget : public UActor
{
public:
	uint8                                        Pad_3FA6[0x78];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UElectraDataChannelTarget* GetDefaultObj();

	void SetTargetAlias(const class FString& InAlias);
	class FString GetTargetAlias();
};

}


