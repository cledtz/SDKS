#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0xD8 - 0xA0)
// Class DanceVolume.DanceSynchronizerComponent
class UDanceSynchronizerComponent : public UActorComponent
{
public:
	uint8                                        bShouldHalfOrDoubleTimeDances : 1;                 // Mask: 0x1, PropSize: 0x10xA0(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_1EA : 7;                                    // Fixing Bit-Field Size 
	uint8                                        Pad_3392[0x3];                                     // Fixing Size After Last Property 
	struct FDanceBeatInfo                        BeatInfo;                                          // 0xA4(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, Net, NoDestructor, Protected, ExposeOnSpawn, NativeAccessSpecifierProtected)
	enum class EDanceBeatSyncMode                SyncMode;                                          // 0xAC(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, RepNotify, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3393[0x3];                                     // Fixing Size After Last Property 
	float                                        Tempo;                                             // 0xB0(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, ExposeOnSpawn, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3394[0x4];                                     // Fixing Size After Last Property 
	class UFortPlayerPawn*                       OwnerPlayerPawn;                                   // 0xB8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USkeletalMeshComponent*                OwnerMeshComponent;                                // 0xC0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USkeletalMeshComponent*                LeaderMeshComponent;                               // 0xC8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3395[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UDanceSynchronizerComponent* GetDefaultObj();

	void StopOwnerEmoteAudio();
	void SetTempo(float NewTempo);
	void SetDanceBeatInfo(struct FDanceBeatInfo& NewDanceBeatInfo);
	void SetBeatSyncMode(enum class EDanceBeatSyncMode NewMode);
	void OnRep_SyncMode();
	bool IsTempoSyncEnabled();
	class USkeletalMeshComponent* GetOwnerSkeletalMeshComponent();
	class UFortPlayerPawn* GetOwnerFortPlayerPawn();
	float CalculateDanceMontagePlayRate(float CurrentTempo, class UAnimMontage* Montage, struct FDanceBeatInfo& DanceBeatInfo);
};

// 0x0 (0x28 - 0x28)
// Class DanceVolume.DanceVolumeLibrary
class UDanceVolumeLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UDanceVolumeLibrary* GetDefaultObj();

	class UFortItemDefinition* GetLastEmoteExecuted(class UController* Controller);
	void ForceStopMontage(class UFortPawn* FortPawn);
};

}


