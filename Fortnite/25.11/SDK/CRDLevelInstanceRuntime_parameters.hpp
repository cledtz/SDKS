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

// 0x1 (0x1 - 0x0)
// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.SetWantsLevelLoaded
struct ALevelInstanceGameplayVolume_SetWantsLevelLoaded_Params
{
public:
	bool                                         bInWantsLevelLoaded;                               // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.SetReadyForInstantiation
struct ALevelInstanceGameplayVolume_SetReadyForInstantiation_Params
{
public:
	bool                                         bReady;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.SetLevelInstanceName
struct ALevelInstanceGameplayVolume_SetLevelInstanceName_Params
{
public:
	class FString                                InName;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.SetLevelInstanceContentCollection
struct ALevelInstanceGameplayVolume_SetLevelInstanceContentCollection_Params
{
public:
	TSoftObjectPtr<class UFortCreativeActorCollection> ContentCollection;                                 // 0x0(0x28)(Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.SetLevelInstanceActorGuid
struct ALevelInstanceGameplayVolume_SetLevelInstanceActorGuid_Params
{
public:
	struct FGuid                                 InLevelInstanceActorGuid;                          // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.SetEditMode
struct ALevelInstanceGameplayVolume_SetEditMode_Params
{
public:
	bool                                         bInEditMode;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.RemoveActorWhenEndPlay
struct ALevelInstanceGameplayVolume_RemoveActorWhenEndPlay_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEndPlayReason                    EndPlayReason;                                     // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_421E[0x7];                                     // Fixing Size Of Struct..
};

// 0x60 (0x60 - 0x0)
// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.RemoveActorWhenDied
struct ALevelInstanceGameplayVolume_RemoveActorWhenDied_Params
{
public:
	class AActor*                                DamagedActor;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damage;                                            // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_421F[0x4];                                     // Fixing Size After Last Property..
	class AController*                           InstigatedBy;                                      // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                DamageCauser;                                      // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitLocation;                                       // 0x20(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   FHitComponent;                                     // 0x38(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneName;                                          // 0x40(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4220[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               Momentum;                                          // 0x48(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.OnVolumeChanged
struct ALevelInstanceGameplayVolume_OnVolumeChanged_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.OnRep_IsDisabled
struct ALevelInstanceGameplayVolume_OnRep_IsDisabled_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.OnRep_InstanceLoaded
struct ALevelInstanceGameplayVolume_OnRep_InstanceLoaded_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.OnRep_EditMode
struct ALevelInstanceGameplayVolume_OnRep_EditMode_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.OnMinigameStateChanged
struct ALevelInstanceGameplayVolume_OnMinigameStateChanged_Params
{
public:
	class AFortMinigame*                         Minigame;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortMinigameState                MinigameState;                                     // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4221[0x7];                                     // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.LevelInstanceSizeChanged
struct ALevelInstanceGameplayVolume_LevelInstanceSizeChanged_Params
{
public:
	class AActor*                                InstigatorActor;                                   // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.LevelInstanceNameChanged
struct ALevelInstanceGameplayVolume_LevelInstanceNameChanged_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.LevelInstanceContentCollectionChanged
struct ALevelInstanceGameplayVolume_LevelInstanceContentCollectionChanged_Params
{
public:
	class AActor*                                InstigatorActor;                                   // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortCreativeActorCollection> ContentCollection;                                 // 0x8(0x28)(Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.LevelInstanceContentChanged
struct ALevelInstanceGameplayVolume_LevelInstanceContentChanged_Params
{
public:
	class AActor*                                InstigatorActor;                                   // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.LevelInstanceBeingDestroyed
struct ALevelInstanceGameplayVolume_LevelInstanceBeingDestroyed_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.IsPreviewActor
struct ALevelInstanceGameplayVolume_IsPreviewActor_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.IsInEditMode
struct ALevelInstanceGameplayVolume_IsInEditMode_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.IsDisabled
struct ALevelInstanceGameplayVolume_IsDisabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.InstantiateFromLevelInstanceSaveActor
struct ALevelInstanceGameplayVolume_InstantiateFromLevelInstanceSaveActor_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.HandleActorHealthChanged
struct ALevelInstanceGameplayVolume_HandleActorHealthChanged_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NewHealth;                                         // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4222[0x4];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.GetLevelInstanceName
struct ALevelInstanceGameplayVolume_GetLevelInstanceName_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.CreateLevelInstanceSaveActor
struct ALevelInstanceGameplayVolume_CreateLevelInstanceSaveActor_Params
{
public:
	class AFortLevelInstanceSaveActor*           ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.CheckForOverlappingVolumes
struct ALevelInstanceGameplayVolume_CheckForOverlappingVolumes_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
