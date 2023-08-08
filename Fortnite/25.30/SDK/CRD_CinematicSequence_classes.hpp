#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x48 (0xC18 - 0xBD0)
// Class CRD_CinematicSequence.CinematicSequenceDeviceBase
class UCinematicSequenceDeviceBase : public UBuildingProp
{
public:
	uint8                                        Pad_4993[0x20];                                    // Fixing Size After Last Property
	class ULevelSequence*                        Sequence;                                          // 0xBF0(0x8)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ULevelSequenceActor*                   LevelSequenceActor;                                // 0xBF8(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UFortPlayerController*                 InstigatingController;                             // 0xC00(0x8)(BlueprintVisible, Net, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        InstigatingTeam;                                   // 0xC08(0x1)(BlueprintVisible, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4997[0x3];                                     // Fixing Size After Last Property
	uint8                                        bLoopPlayback : 1;                                 // Mask: 0x1, PropSize: 0x10xC0C(0x1)(Edit, BlueprintVisible, SaveGame, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bRestoreState : 1;                                 // Mask: 0x2, PropSize: 0x10xC0C(0x1)(Edit, BlueprintVisible, SaveGame, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bAutoPlay : 1;                                     // Mask: 0x4, PropSize: 0x10xC0C(0x1)(Edit, BlueprintVisible, SaveGame, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_2DD : 5;                                    // Fixing Bit-Field Size
	uint8                                        Pad_499B[0x3];                                     // Fixing Size After Last Property
	enum class EFortMinigameState                AutoPlayMinigameState;                             // 0xC10(0x1)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ECinematicSequenceVisibility      Visibility;                                        // 0xC11(0x1)(Edit, BlueprintVisible, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bLevelSequenceActorAlwaysRelevant;                 // 0xC12(0x1)(Edit, ZeroConstructor, SaveGame, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_499D[0x5];                                     // Fixing Size Of Struct

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
