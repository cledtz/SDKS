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

// 0x8 (0x8 - 0x0)
// Function EncountersRuntime.EncounterMobManagerComponent.StartMobEncounter
struct UEncounterMobManagerComponent_StartMobEncounter_Params
{
public:
	struct FGameplayTag                          MobIdentifier;                                     // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_42F3[0x3];                                     // Fixing Size Of Struct
};

// 0x4 (0x4 - 0x0)
// Function EncountersRuntime.EncounterMobManagerComponent.ResumeMobEncounter
struct UEncounterMobManagerComponent_ResumeMobEncounter_Params
{
public:
	struct FGameplayTag                          MobIdentifier;                                     // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function EncountersRuntime.EncounterMobManagerComponent.PauseMobEncounter
struct UEncounterMobManagerComponent_PauseMobEncounter_Params
{
public:
	struct FGameplayTag                          MobIdentifier;                                     // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function EncountersRuntime.EncounterMobManagerComponent.OnMobPawnEndPlay
struct UEncounterMobManagerComponent_OnMobPawnEndPlay_Params
{
public:
	class UActor*                                Mob;                                               // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEndPlayReason                    EndPlayReason;                                     // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_42FD[0x7];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function EncountersRuntime.EncounterMobManagerComponent.OnMobActorSpawn
struct UEncounterMobManagerComponent_OnMobActorSpawn_Params
{
public:
	class UActor*                                SpawnedActor;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function EncountersRuntime.EncounterMobManagerComponent.OnMobActorDied
struct UEncounterMobManagerComponent_OnMobActorDied_Params
{
public:
	class UActor*                                DamagedActor;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damage;                                            // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4301[0x4];                                     // Fixing Size After Last Property 
	class UController*                           InstigatedBy;                                      // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                DamageCauser;                                      // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitLocation;                                       // 0x20(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   HitComponent;                                      // 0x38(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneName;                                          // 0x40(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4302[0x4];                                     // Fixing Size After Last Property 
	struct FVector                               Momentum;                                          // 0x48(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// DelegateFunction EncountersRuntime.EncounterMobManagerComponent.OnEncounterStarted__DelegateSignature
struct UEncounterMobManagerComponent_OnEncounterStarted__DelegateSignature_Params
{
public:
	struct FGameplayTag                          MobIdentifier;                                     // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// DelegateFunction EncountersRuntime.EncounterMobManagerComponent.OnEncounterResumed__DelegateSignature
struct UEncounterMobManagerComponent_OnEncounterResumed__DelegateSignature_Params
{
public:
	struct FGameplayTag                          MobIdentifier;                                     // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// DelegateFunction EncountersRuntime.EncounterMobManagerComponent.OnEncounterPaused__DelegateSignature
struct UEncounterMobManagerComponent_OnEncounterPaused__DelegateSignature_Params
{
public:
	struct FGameplayTag                          MobIdentifier;                                     // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// DelegateFunction EncountersRuntime.EncounterMobManagerComponent.OnEncounterEnded__DelegateSignature
struct UEncounterMobManagerComponent_OnEncounterEnded__DelegateSignature_Params
{
public:
	struct FGameplayTag                          MobIdentifier;                                     // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// DelegateFunction EncountersRuntime.EncounterMobManagerComponent.OnEncounterActorSpawned__DelegateSignature
struct UEncounterMobManagerComponent_OnEncounterActorSpawned__DelegateSignature_Params
{
public:
	struct FGameplayTag                          MobIdentifier;                                     // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_430E[0x4];                                     // Fixing Size After Last Property 
	class UActor*                                SpawnedActor;                                      // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// DelegateFunction EncountersRuntime.EncounterMobManagerComponent.OnEncounterActorDead__DelegateSignature
struct UEncounterMobManagerComponent_OnEncounterActorDead__DelegateSignature_Params
{
public:
	struct FGameplayTag                          MobIdentifier;                                     // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_430F[0x4];                                     // Fixing Size After Last Property 
	class UActor*                                DamagedActor;                                      // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                DamageCauser;                                      // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function EncountersRuntime.EncounterMobManagerComponent.EndMobEncounter
struct UEncounterMobManagerComponent_EndMobEncounter_Params
{
public:
	struct FGameplayTag                          MobIdentifier;                                     // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function EncountersRuntime.EncounterMobManagerComponent.EndAndCleanupAllMobEncounters
struct UEncounterMobManagerComponent_EndAndCleanupAllMobEncounters_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function EncountersRuntime.StartLWMEncounterDelegateHandler.OnMobPawnEndPlay
struct UStartLWMEncounterDelegateHandler_OnMobPawnEndPlay_Params
{
public:
	class UActor*                                Mob;                                               // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEndPlayReason                    EndPlayReason;                                     // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4317[0x7];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function EncountersRuntime.StartLWMEncounterDelegateHandler.OnMobActorSpawn
struct UStartLWMEncounterDelegateHandler_OnMobActorSpawn_Params
{
public:
	class UActor*                                SpawnedActor;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function EncountersRuntime.StartLWMEncounterDelegateHandler.OnMobActorDied
struct UStartLWMEncounterDelegateHandler_OnMobActorDied_Params
{
public:
	class UActor*                                DamagedActor;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damage;                                            // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4326[0x4];                                     // Fixing Size After Last Property 
	class UController*                           InstigatedBy;                                      // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                DamageCauser;                                      // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitLocation;                                       // 0x20(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   HitComponent;                                      // 0x38(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneName;                                          // 0x40(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4328[0x4];                                     // Fixing Size After Last Property 
	struct FVector                               Momentum;                                          // 0x48(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function EncountersRuntime.EncounterBlueprintLibrary.GetRelevantMobManagerComponentForActor
struct UEncounterBlueprintLibrary_GetRelevantMobManagerComponentForActor_Params
{
public:
	class UActor*                                Actor;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UEncounterMobManagerComponent*         ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function EncountersRuntime.EncounterGameplayVolume.OnCleanup
struct UEncounterGameplayVolume_OnCleanup_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function EncountersRuntime.EncounterGameplayVolume.IsDoneCleaningUp
struct UEncounterGameplayVolume_IsDoneCleaningUp_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function EncountersRuntime.EncounterManagerComponent.RemoveExplicitContributor
struct UEncounterManagerComponent_RemoveExplicitContributor_Params
{
public:
	class UPlayerController*                     Contributor;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function EncountersRuntime.EncounterManagerComponent.OnStateTreeStatusChanged
struct UEncounterManagerComponent_OnStateTreeStatusChanged_Params
{
public:
	enum class EStateTreeRunStatus               Status;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function EncountersRuntime.EncounterManagerComponent.HandleEncounterSuccess
struct UEncounterManagerComponent_HandleEncounterSuccess_Params
{
public:
	int32                                        RewardIndex;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function EncountersRuntime.EncounterManagerComponent.HandleEncounterFailure
struct UEncounterManagerComponent_HandleEncounterFailure_Params
{
public:
	int32                                        RewardIndex;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function EncountersRuntime.EncounterManagerComponent.GetVariable_TagQuery
struct UEncounterManagerComponent_GetVariable_TagQuery_Params
{
public:
	struct FGameplayTag                          VarName;                                           // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4368[0x4];                                     // Fixing Size After Last Property 
	struct FGameplayTagQuery                     ReturnValue;                                       // 0x8(0x48)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function EncountersRuntime.EncounterManagerComponent.GetVariable_LWMEncounter
struct UEncounterManagerComponent_GetVariable_LWMEncounter_Params
{
public:
	struct FGameplayTag                          VarName;                                           // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_436D[0x4];                                     // Fixing Size After Last Property 
	class UFortAthenaLivingWorldEncounter*       ReturnValue;                                       // 0x8(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function EncountersRuntime.EncounterManagerComponent.GetVariable_ItemDefinition
struct UEncounterManagerComponent_GetVariable_ItemDefinition_Params
{
public:
	struct FGameplayTag                          VarName;                                           // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4378[0x4];                                     // Fixing Size After Last Property 
	class UFortWorldItemDefinition*              ReturnValue;                                       // 0x8(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function EncountersRuntime.EncounterManagerComponent.GetVariable_Int
struct UEncounterManagerComponent_GetVariable_Int_Params
{
public:
	struct FGameplayTag                          VarName;                                           // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function EncountersRuntime.EncounterManagerComponent.GetVariable_GameplayTag
struct UEncounterManagerComponent_GetVariable_GameplayTag_Params
{
public:
	struct FGameplayTag                          VarName;                                           // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function EncountersRuntime.EncounterManagerComponent.GetVariable_Float
struct UEncounterManagerComponent_GetVariable_Float_Params
{
public:
	struct FGameplayTag                          VarName;                                           // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function EncountersRuntime.EncounterManagerComponent.GetVariable_Bool
struct UEncounterManagerComponent_GetVariable_Bool_Params
{
public:
	struct FGameplayTag                          VarName;                                           // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4388[0x3];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function EncountersRuntime.EncounterManagerComponent.AddExplicitContributor
struct UEncounterManagerComponent_AddExplicitContributor_Params
{
public:
	class UPlayerController*                     Contributor;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function EncountersRuntime.LivingWorldEncounterPrefab.OnRep_EncounterDefinition
struct ULivingWorldEncounterPrefab_OnRep_EncounterDefinition_Params
{
public:
};

}
}


