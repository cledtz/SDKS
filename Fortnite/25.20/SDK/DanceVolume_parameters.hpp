#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x0 - 0x0)
// Function DanceVolume.DanceSynchronizerComponent.StopOwnerEmoteAudio
struct UDanceSynchronizerComponent_StopOwnerEmoteAudio_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function DanceVolume.DanceSynchronizerComponent.SetTempo
struct UDanceSynchronizerComponent_SetTempo_Params
{
public:
	float                                        NewTempo;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function DanceVolume.DanceSynchronizerComponent.SetDanceBeatInfo
struct UDanceSynchronizerComponent_SetDanceBeatInfo_Params
{
public:
	struct FDanceBeatInfo                        NewDanceBeatInfo;                                  // 0x0(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function DanceVolume.DanceSynchronizerComponent.SetBeatSyncMode
struct UDanceSynchronizerComponent_SetBeatSyncMode_Params
{
public:
	enum class EDanceBeatSyncMode                NewMode;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function DanceVolume.DanceSynchronizerComponent.OnRep_SyncMode
struct UDanceSynchronizerComponent_OnRep_SyncMode_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function DanceVolume.DanceSynchronizerComponent.IsTempoSyncEnabled
struct UDanceSynchronizerComponent_IsTempoSyncEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function DanceVolume.DanceSynchronizerComponent.GetOwnerSkeletalMeshComponent
struct UDanceSynchronizerComponent_GetOwnerSkeletalMeshComponent_Params
{
public:
	class USkeletalMeshComponent*                ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function DanceVolume.DanceSynchronizerComponent.GetOwnerFortPlayerPawn
struct UDanceSynchronizerComponent_GetOwnerFortPlayerPawn_Params
{
public:
	class AFortPlayerPawn*                       ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function DanceVolume.DanceSynchronizerComponent.CalculateDanceMontagePlayRate
struct UDanceSynchronizerComponent_CalculateDanceMontagePlayRate_Params
{
public:
	float                                        CurrentTempo;                                      // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3FF4[0x4];                                     // Fixing Size After Last Property..
	class UAnimMontage*                          Montage;                                           // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDanceBeatInfo                        DanceBeatInfo;                                     // 0x10(0x8)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x18(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3FF5[0x4];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function DanceVolume.DanceVolumeLibrary.GetLastEmoteExecuted
struct UDanceVolumeLibrary_GetLastEmoteExecuted_Params
{
public:
	class AController*                           Controller;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortItemDefinition*                   ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function DanceVolume.DanceVolumeLibrary.ForceStopMontage
struct UDanceVolumeLibrary_ForceStopMontage_Params
{
public:
	class AFortPawn*                             FortPawn;                                          // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
