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

// 0x48 (0xC08 - 0xBC0)
// Class CRD_CinematicSequence.CinematicSequenceDeviceBase
class UCinematicSequenceDeviceBase : public UBuildingProp
{
public:
	uint8                                        Pad_8031[0x20];                                    // Fixing Size After Last Property..
	class ULevelSequence*                        Sequence;                                          // 0xBE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ULevelSequenceActor*                   LevelSequenceActor;                                // 0xBE8(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortPlayerController*                 InstigatingController;                             // 0xBF0(0x8)(BlueprintVisible, Net, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        InstigatingTeam;                                   // 0xBF8(0x1)(BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8032[0x3];                                     // Fixing Size After Last Property..
	uint8                                        bLoopPlayback : 1;                                 // Mask: 0x1, PropSize: 0x10xBFC(0x1)(Edit, BlueprintVisible, SaveGame, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bRestoreState : 1;                                 // Mask: 0x2, PropSize: 0x10xBFC(0x1)(Edit, BlueprintVisible, SaveGame, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bAutoPlay : 1;                                     // Mask: 0x4, PropSize: 0x10xBFC(0x1)(Edit, BlueprintVisible, SaveGame, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_430 : 5;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_8033[0x3];                                     // Fixing Size After Last Property..
	enum class EFortMinigameState                AutoPlayMinigameState;                             // 0xC00(0x1)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ECinematicSequenceVisibility      Visibility;                                        // 0xC01(0x1)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bLevelSequenceActorAlwaysRelevant;                 // 0xC02(0x1)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8034[0x5];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CinematicSequenceDeviceBase");
		return Clss;
	}

	void Stop();
	void Play();
	void Pause();
	void HandleSequencePlayerCreated(class ULevelSequencePlayer* Player);
	class UMovieSceneSequencePlayer* GetSequencePlayer();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
