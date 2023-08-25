#pragma once

// Dumped with Dumper-7!


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
struct ULevelInstanceGameplayVolume_SetWantsLevelLoaded_Params
{
public:
	bool                                         bInWantsLevelLoaded;                               // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.SetReadyForInstantiation
struct ULevelInstanceGameplayVolume_SetReadyForInstantiation_Params
{
public:
	bool                                         bReady;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.SetLevelInstanceName
struct ULevelInstanceGameplayVolume_SetLevelInstanceName_Params
{
public:
	class FString                                InName;                                            // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.SetLevelInstanceContentCollection
struct ULevelInstanceGameplayVolume_SetLevelInstanceContentCollection_Params
{
public:
	TSoftObjectPtr<class UFortCreativeActorCollection> ContentCollection;                                 // 0x0(0x20)(Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.SetLevelInstanceActorGuid
struct ULevelInstanceGameplayVolume_SetLevelInstanceActorGuid_Params
{
public:
	struct FGuid                                 InLevelInstanceActorGuid;                          // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.SetEditMode
struct ULevelInstanceGameplayVolume_SetEditMode_Params
{
public:
	bool                                         bInEditMode;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.RemoveActorWhenEndPlay
struct ULevelInstanceGameplayVolume_RemoveActorWhenEndPlay_Params
{
public:
	class UActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEndPlayReason                    EndPlayReason;                                     // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4036[0x7];                                     // Fixing Size Of Struct
};

// 0x60 (0x60 - 0x0)
// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.RemoveActorWhenDied
struct ULevelInstanceGameplayVolume_RemoveActorWhenDied_Params
{
public:
	class UActor*                                DamagedActor;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damage;                                            // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4040[0x4];                                     // Fixing Size After Last Property 
	class UController*                           InstigatedBy;                                      // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                DamageCauser;                                      // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitLocation;                                       // 0x20(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   FHitComponent;                                     // 0x38(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneName;                                          // 0x40(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4042[0x4];                                     // Fixing Size After Last Property 
	struct FVector                               Momentum;                                          // 0x48(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.OnVolumeChanged
struct ULevelInstanceGameplayVolume_OnVolumeChanged_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.OnRep_IsDisabled
struct ULevelInstanceGameplayVolume_OnRep_IsDisabled_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.OnRep_InstanceLoaded
struct ULevelInstanceGameplayVolume_OnRep_InstanceLoaded_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.OnRep_EditMode
struct ULevelInstanceGameplayVolume_OnRep_EditMode_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.OnMinigameStateChanged
struct ULevelInstanceGameplayVolume_OnMinigameStateChanged_Params
{
public:
	class UFortMinigame*                         Minigame;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EFortMinigameState                MinigameState;                                     // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_404D[0x7];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.LevelInstanceSizeChanged
struct ULevelInstanceGameplayVolume_LevelInstanceSizeChanged_Params
{
public:
	class UActor*                                InstigatorActor;                                   // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.LevelInstanceNameChanged
struct ULevelInstanceGameplayVolume_LevelInstanceNameChanged_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.LevelInstanceContentCollectionChanged
struct ULevelInstanceGameplayVolume_LevelInstanceContentCollectionChanged_Params
{
public:
	class UActor*                                InstigatorActor;                                   // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UFortCreativeActorCollection> ContentCollection;                                 // 0x8(0x20)(Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.LevelInstanceContentChanged
struct ULevelInstanceGameplayVolume_LevelInstanceContentChanged_Params
{
public:
	class UActor*                                InstigatorActor;                                   // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.LevelInstanceBeingDestroyed
struct ULevelInstanceGameplayVolume_LevelInstanceBeingDestroyed_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.IsPreviewActor
struct ULevelInstanceGameplayVolume_IsPreviewActor_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.IsInEditMode
struct ULevelInstanceGameplayVolume_IsInEditMode_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.IsDisabled
struct ULevelInstanceGameplayVolume_IsDisabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.InstantiateFromLevelInstanceSaveActor
struct ULevelInstanceGameplayVolume_InstantiateFromLevelInstanceSaveActor_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.HandleActorHealthChanged
struct ULevelInstanceGameplayVolume_HandleActorHealthChanged_Params
{
public:
	class UActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NewHealth;                                         // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4061[0x4];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.GetLevelInstanceName
struct ULevelInstanceGameplayVolume_GetLevelInstanceName_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.CreateLevelInstanceSaveActor
struct ULevelInstanceGameplayVolume_CreateLevelInstanceSaveActor_Params
{
public:
	class UFortLevelInstanceSaveActor*           ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function CRDLevelInstanceRuntime.LevelInstanceGameplayVolume.CheckForOverlappingVolumes
struct ULevelInstanceGameplayVolume_CheckForOverlappingVolumes_Params
{
public:
};

}
}


