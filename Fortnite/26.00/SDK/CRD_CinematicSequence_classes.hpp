#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0xC00 - 0xBB8)
// Class CRD_CinematicSequence.CinematicSequenceDeviceBase
class UCinematicSequenceDeviceBase : public UBuildingProp
{
public:
	uint8                                        Pad_3F43[0x20];                                    // Fixing Size After Last Property 
	class ULevelSequence*                        Sequence;                                          // 0xBD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ULevelSequenceActor*                   LevelSequenceActor;                                // 0xBE0(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortPlayerController*                 InstigatingController;                             // 0xBE8(0x8)(BlueprintVisible, Net, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        InstigatingTeam;                                   // 0xBF0(0x1)(BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3F46[0x3];                                     // Fixing Size After Last Property 
	uint8                                        bLoopPlayback : 1;                                 // Mask: 0x1, PropSize: 0x10xBF4(0x1)(Edit, BlueprintVisible, SaveGame, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bRestoreState : 1;                                 // Mask: 0x2, PropSize: 0x10xBF4(0x1)(Edit, BlueprintVisible, SaveGame, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bAutoPlay : 1;                                     // Mask: 0x4, PropSize: 0x10xBF4(0x1)(Edit, BlueprintVisible, SaveGame, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_256 : 5;                                    // Fixing Bit-Field Size 
	uint8                                        Pad_3F48[0x3];                                     // Fixing Size After Last Property 
	enum class EFortMinigameState                AutoPlayMinigameState;                             // 0xBF8(0x1)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ECinematicSequenceVisibility      Visibility;                                        // 0xBF9(0x1)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bLevelSequenceActorAlwaysRelevant;                 // 0xBFA(0x1)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3F4B[0x1];                                     // Fixing Size After Last Property 
	float                                        PlayRate;                                          // 0xBFC(0x4)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UCinematicSequenceDeviceBase* GetDefaultObj();

	void Stop();
	void SetSequence(class ULevelSequence* Sequence);
	void SetPlayRate(float PlayRate);
	void SetPlaybackTime(float Time);
	void SetPlaybackFrame(int32 Frame);
	void Play();
	void Pause();
	void HandleSequencePlayerCreated(class ULevelSequencePlayer* Player);
	void GoToEndAndStop();
	class UMovieSceneSequencePlayer* GetSequencePlayer();
	float GetPlayRate();
	float GetPlaybackTime();
	int32 GetPlaybackFrame();
};

}


