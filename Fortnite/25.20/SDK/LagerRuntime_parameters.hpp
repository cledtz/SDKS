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

// 0x20 (0x20 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler.RemoveClosestPointProvidersToPoint
struct AFortAthenaLivingWorldPointProvidersEnabler_RemoveClosestPointProvidersToPoint_Params
{
public:
	struct FVector                               Point;                                             // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaximumDistance;                                   // 0x18(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PointsToDisable;                                   // 0x1C(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler.OnCurrentPlaylistLoaded
struct AFortAthenaLivingWorldPointProvidersEnabler_OnCurrentPlaylistLoaded_Params
{
public:
	class FName                                  PlaylistName;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7B0B[0x4];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 PlaylistContextTags;                               // 0x8(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// DelegateFunction LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler.OnCompletedEvaluation__DelegateSignature
struct AFortAthenaLivingWorldPointProvidersEnabler_OnCompletedEvaluation__DelegateSignature_Params
{
public:
	TArray<FInterfaceProperty_>                  EnabledPointProviders;                             // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler.HasCompletedEvaluation
struct AFortAthenaLivingWorldPointProvidersEnabler_HasCompletedEvaluation_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler.GetEnablerTags
struct AFortAthenaLivingWorldPointProvidersEnabler_GetEnablerTags_Params
{
public:
	struct FGameplayTagContainer                 ReturnValue;                                       // 0x0(0x20)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler.GetEnabledLinkedPointProviders
struct AFortAthenaLivingWorldPointProvidersEnabler_GetEnabledLinkedPointProviders_Params
{
public:
	TArray<FInterfaceProperty_>                  ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler.EvaluateAndEnablePointProviders
struct AFortAthenaLivingWorldPointProvidersEnabler_EvaluateAndEnablePointProviders_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldPointProvidersEnabler.DoesStartEnabled
struct AFortAthenaLivingWorldPointProvidersEnabler_DoesStartEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function LagerRuntime.FortAthenaLinearEncounterAnalyticComponent.OnStageCompleted
struct UFortAthenaLinearEncounterAnalyticComponent_OnStageCompleted_Params
{
public:
	TArray<class AFortPickup*>                   SpawnedRewards;                                    // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function LagerRuntime.FortAthenaLinearEncounterAnalyticComponent.OnEncounterStart
struct UFortAthenaLinearEncounterAnalyticComponent_OnEncounterStart_Params
{
public:
	class UFortAthenaLivingWorldEncounterInstance* InAttackerEncounter;                               // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortAthenaLivingWorldEncounterInstance* InDefenderEncounter;                               // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function LagerRuntime.FortAthenaLinearEncounterAnalyticComponent.OnEncounterEnd
struct UFortAthenaLinearEncounterAnalyticComponent_OnEncounterEnd_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function LagerRuntime.FortAthenaLinearEncounterAnalyticComponent.OnDefenderSpawned
struct UFortAthenaLinearEncounterAnalyticComponent_OnDefenderSpawned_Params
{
public:
	class AActor*                                SpawnedDefender;                                   // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function LagerRuntime.FortAthenaLinearEncounterAnalyticComponent.OnDefenderDied
struct UFortAthenaLinearEncounterAnalyticComponent_OnDefenderDied_Params
{
public:
	class AActor*                                DamagedActor;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damage;                                            // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7B0D[0x4];                                     // Fixing Size After Last Property..
	class AController*                           InstigatedBy;                                      // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                DamageCauser;                                      // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitLocation;                                       // 0x20(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   FHitComponent;                                     // 0x38(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneName;                                          // 0x40(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7B0E[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               Momentum;                                          // 0x48(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function LagerRuntime.FortAthenaLinearEncounterAnalyticComponent.OnDefenderDidDamage
struct UFortAthenaLinearEncounterAnalyticComponent_OnDefenderDidDamage_Params
{
public:
	class AActor*                                DamagedActor;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damage;                                            // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7B0F[0x4];                                     // Fixing Size After Last Property..
	class AController*                           InstigatedBy;                                      // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                DamageCauser;                                      // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitLocation;                                       // 0x20(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   FHitComponent;                                     // 0x38(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneName;                                          // 0x40(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7B10[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               Momentum;                                          // 0x48(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function LagerRuntime.FortAthenaLinearEncounterAnalyticComponent.OnDefenderDamaged
struct UFortAthenaLinearEncounterAnalyticComponent_OnDefenderDamaged_Params
{
public:
	class AActor*                                DamagedActor;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damage;                                            // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7B11[0x4];                                     // Fixing Size After Last Property..
	class AController*                           InstigatedBy;                                      // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                DamageCauser;                                      // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitLocation;                                       // 0x20(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   FHitComponent;                                     // 0x38(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneName;                                          // 0x40(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7B12[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               Momentum;                                          // 0x48(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function LagerRuntime.FortAthenaLinearEncounterAnalyticComponent.OnAttackerSpawned
struct UFortAthenaLinearEncounterAnalyticComponent_OnAttackerSpawned_Params
{
public:
	class AActor*                                SpawnedAttacker;                                   // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldEncounterInstance.StartEncounterStage
struct UFortAthenaLivingWorldEncounterInstance_StartEncounterStage_Params
{
public:
	int32                                        StageIndex;                                        // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldEncounterInstance.ResumeEncounter
struct UFortAthenaLivingWorldEncounterInstance_ResumeEncounter_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldEncounterInstance.Reset
struct UFortAthenaLivingWorldEncounterInstance_Reset_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldEncounterInstance.RequestEventGeneration
struct UFortAthenaLivingWorldEncounterInstance_RequestEventGeneration_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldEncounterInstance.RemoveAllowedPointProvider
struct UFortAthenaLivingWorldEncounterInstance_RemoveAllowedPointProvider_Params
{
public:
	FInterfaceProperty_                          PointProvider;                                     // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldEncounterInstance.PauseEncounter
struct UFortAthenaLivingWorldEncounterInstance_PauseEncounter_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldEncounterInstance.OwnsActor
struct UFortAthenaLivingWorldEncounterInstance_OwnsActor_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7B17[0x7];                                     // Fixing Size Of Struct..
};

// 0x60 (0x60 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldEncounterInstance.OnEncounterActorDied
struct UFortAthenaLivingWorldEncounterInstance_OnEncounterActorDied_Params
{
public:
	class AActor*                                DamagedActor;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Damage;                                            // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7B18[0x4];                                     // Fixing Size After Last Property..
	class AController*                           InstigatedBy;                                      // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AActor*                                DamageCauser;                                      // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               HitLocation;                                       // 0x20(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   FHitComponent;                                     // 0x38(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BoneName;                                          // 0x40(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7B19[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               Momentum;                                          // 0x48(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// DelegateFunction LagerRuntime.FortAthenaLivingWorldEncounterInstance.OnActorSpawned__DelegateSignature
struct UFortAthenaLivingWorldEncounterInstance_OnActorSpawned__DelegateSignature_Params
{
public:
	class AActor*                                SpawnedActor;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// DelegateFunction LagerRuntime.FortAthenaLivingWorldEncounterInstance.OnActorDied__DelegateSignature
struct UFortAthenaLivingWorldEncounterInstance_OnActorDied__DelegateSignature_Params
{
public:
	class AActor*                                DiedActor;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// DelegateFunction LagerRuntime.FortAthenaLivingWorldEncounterInstance.OnActorDestroyed__DelegateSignature
struct UFortAthenaLivingWorldEncounterInstance_OnActorDestroyed__DelegateSignature_Params
{
public:
	class AActor*                                DestroyedActor;                                    // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldEncounterInstance.HasReachedMaxSpawnedCount
struct UFortAthenaLivingWorldEncounterInstance_HasReachedMaxSpawnedCount_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldEncounterInstance.GetTotalActorCount
struct UFortAthenaLivingWorldEncounterInstance_GetTotalActorCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldEncounterInstance.GetAliveSpawnedActorCount
struct UFortAthenaLivingWorldEncounterInstance_GetAliveSpawnedActorCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldEncounterInstance.AdvanceEncounterStage
struct UFortAthenaLivingWorldEncounterInstance_AdvanceEncounterStage_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldEncounterInstance.AddAllowedPointProvider
struct UFortAthenaLivingWorldEncounterInstance_AddAllowedPointProvider_Params
{
public:
	FInterfaceProperty_                          PointProvider;                                     // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldManager.UnregisterDensityReservoir
struct UFortAthenaLivingWorldManager_UnregisterDensityReservoir_Params
{
public:
	class AActor*                                ActorDensityReservoir;                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldManager.TrySpawnEvent
struct UFortAthenaLivingWorldManager_TrySpawnEvent_Params
{
public:
	struct FDataTableRowHandle                   EventEntry;                                        // 0x0(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            SpawnLocation;                                     // 0x10(0x60)(ConstParm, Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnRequestFinished;                                 // 0x70(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RequestID;                                         // 0x7C(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x80(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7B20[0xF];                                     // Fixing Size Of Struct..
};

// 0x48 (0x48 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldManager.StartEncounter
struct UFortAthenaLivingWorldManager_StartEncounter_Params
{
public:
	TSoftObjectPtr<class UFortAthenaLivingWorldEncounter> EncounterType;                                     // 0x0(0x28)(ConstParm, Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<FInterfaceProperty_>                  EncounterPointProviders;                           // 0x28(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, UObjectWrapper, NativeAccessSpecifierPublic)
	class AActor*                                ActorDensityReservoir;                             // 0x38(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortAthenaLivingWorldEncounterInstance* ReturnValue;                                       // 0x40(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldManager.ResetEncounter
struct UFortAthenaLivingWorldManager_ResetEncounter_Params
{
public:
	class UFortAthenaLivingWorldEncounterInstance* EncounterInstance;                                 // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldManager.RequestEventGeneration
struct UFortAthenaLivingWorldManager_RequestEventGeneration_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldManager.RegisterTagDensityReservoir
struct UFortAthenaLivingWorldManager_RegisterTagDensityReservoir_Params
{
public:
	class AActor*                                ActorDensityReservoir;                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFortAthenaLivingWorldEventTagDensityRegistration> TagsDensity;                                       // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldManager.RegisterDensityReservoir
struct UFortAthenaLivingWorldManager_RegisterDensityReservoir_Params
{
public:
	class AActor*                                ActorDensityReservoir;                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Density;                                           // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Range;                                             // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldManager.QueryEventBudget
struct UFortAthenaLivingWorldManager_QueryEventBudget_Params
{
public:
	struct FDataTableRowHandle                   EventEntry;                                        // 0x0(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	class AActor*                                SpawnLocation;                                     // 0x10(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x18(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7B21[0x4];                                     // Fixing Size Of Struct..
};

// 0x20 (0x20 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldManager.OnWorldFinishedInitialization
struct UFortAthenaLivingWorldManager_OnWorldFinishedInitialization_Params
{
public:
	struct FGameplayTagContainer                 ContextTags;                                       // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldManager.OnUnmanagedDensityReservoirActorDestroy
struct UFortAthenaLivingWorldManager_OnUnmanagedDensityReservoirActorDestroy_Params
{
public:
	class AActor*                                DestroyedActor;                                    // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldManager.OnSpawnedActorDestroy
struct UFortAthenaLivingWorldManager_OnSpawnedActorDestroy_Params
{
public:
	class AActor*                                DestroyedActor;                                    // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldManager.OnRep_DebugDensityMinimapIndicator
struct UFortAthenaLivingWorldManager_OnRep_DebugDensityMinimapIndicator_Params
{
public:
	class UFortAthenaLivingWorldDebugDensityMiniMapIndicator* OldMapIndicator;                                   // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldManager.OnRep_ActorClassToPreloadOnClient
struct UFortAthenaLivingWorldManager_OnRep_ActorClassToPreloadOnClient_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldManager.OnPatrolPathAdded
struct UFortAthenaLivingWorldManager_OnPatrolPathAdded_Params
{
public:
	class AFortAthenaPatrolPath*                 PatrolPath;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldManager.OnDebugSpawnEventSpawned
struct UFortAthenaLivingWorldManager_OnDebugSpawnEventSpawned_Params
{
public:
	TArray<class AActor*>                        SpawnedActors;                                     // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bSuccess;                                          // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7B22[0x7];                                     // Fixing Size Of Struct..
};

// 0x28 (0x28 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldManager.OnCurrentPlaylistLoaded
struct UFortAthenaLivingWorldManager_OnCurrentPlaylistLoaded_Params
{
public:
	class FName                                  PlaylistName;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7B23[0x4];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 PlaylistContextTags;                               // 0x8(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldManager.OnActorSpawned
struct UFortAthenaLivingWorldManager_OnActorSpawned_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RequestID;                                         // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7B24[0x4];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldManager.LWMTAM
struct UFortAthenaLivingWorldManager_LWMTAM_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldManager.LWMF
struct UFortAthenaLivingWorldManager_LWMF_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerUnregisterPointProvider
struct UFortAthenaLivingWorldManager_LivingWorldManagerUnregisterPointProvider_Params
{
public:
	class AActor*                                PointProvider;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerToggleVerboseLogging
struct UFortAthenaLivingWorldManager_LivingWorldManagerToggleVerboseLogging_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerToggleGenerateEvents
struct UFortAthenaLivingWorldManager_LivingWorldManagerToggleGenerateEvents_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerToggleDensityDisplay
struct UFortAthenaLivingWorldManager_LivingWorldManagerToggleDensityDisplay_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerToggleActorMinimap
struct UFortAthenaLivingWorldManager_LivingWorldManagerToggleActorMinimap_Params
{
public:
	class FString                                Name;                                              // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerSwitchDensityDisplay
struct UFortAthenaLivingWorldManager_LivingWorldManagerSwitchDensityDisplay_Params
{
public:
	int32                                        DensityMapIndex;                                   // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerSetEventGenerationEnabled
struct UFortAthenaLivingWorldManager_LivingWorldManagerSetEventGenerationEnabled_Params
{
public:
	bool                                         bInGenerateEvents;                                 // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerRegisterPointProvider
struct UFortAthenaLivingWorldManager_LivingWorldManagerRegisterPointProvider_Params
{
public:
	class AActor*                                PointProvider;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerProviderDebugActor
struct UFortAthenaLivingWorldManager_LivingWorldManagerProviderDebugActor_Params
{
public:
	int32                                        ProviderIndex;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerGenerateEvents
struct UFortAthenaLivingWorldManager_LivingWorldManagerGenerateEvents_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerFlush
struct UFortAthenaLivingWorldManager_LivingWorldManagerFlush_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerDumpSpawnCount
struct UFortAthenaLivingWorldManager_LivingWorldManagerDumpSpawnCount_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerDumpPrefabLevelBounds
struct UFortAthenaLivingWorldManager_LivingWorldManagerDumpPrefabLevelBounds_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerDumpEventInstances
struct UFortAthenaLivingWorldManager_LivingWorldManagerDumpEventInstances_Params
{
public:
};

// 0x38 (0x38 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldManager.LivingWorldManagerDebugEvent
struct UFortAthenaLivingWorldManager_LivingWorldManagerDebugEvent_Params
{
public:
	class FString                                EventName;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DebugIndex;                                        // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7B25[0x4];                                     // Fixing Size After Last Property..
	class FString                                RuntimeSpawnDataName;                              // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                EncounterName;                                     // 0x28(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldManager.IsEncounterCategoryActive
struct UFortAthenaLivingWorldManager_IsEncounterCategoryActive_Params
{
public:
	TSoftObjectPtr<class UFortAthenaLivingWorldEncounter> EncounterType;                                     // 0x0(0x28)(ConstParm, Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x28(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7B26[0x7];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldManager.GetOwningEncounter
struct UFortAthenaLivingWorldManager_GetOwningEncounter_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortAthenaLivingWorldEncounterInstance* ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldManager.GetLivingWorldManager
struct UFortAthenaLivingWorldManager_GetLivingWorldManager_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortAthenaLivingWorldManager*         ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldManager.EndEncounter
struct UFortAthenaLivingWorldManager_EndEncounter_Params
{
public:
	class UFortAthenaLivingWorldEncounterInstance* EncounterInstance;                                 // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldManager.CancelSpawnRequest
struct UFortAthenaLivingWorldManager_CancelSpawnRequest_Params
{
public:
	int32                                        RequestID;                                         // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldManager.BuildDataRegistryResolverScope_Implementation
struct UFortAthenaLivingWorldManager_BuildDataRegistryResolverScope_Implementation_Params
{
public:
	TArray<class FName>                          InOutResolverScopes;                               // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        InOutPriority;                                     // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x14(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7B27[0x3];                                     // Fixing Size Of Struct..
};

// 0x28 (0x28 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldNavigationInvokerComponent.OnCurrentPlaylistLoaded
struct UFortAthenaLivingWorldNavigationInvokerComponent_OnCurrentPlaylistLoaded_Params
{
public:
	class FName                                  PlaylistName;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7B2D[0x4];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 PlaylistContextTags;                               // 0x8(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldPointProviderInterface.GetPointProviderMaxRadius
struct UFortAthenaLivingWorldPointProviderInterface_GetPointProviderMaxRadius_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldPointProviderInterface.GetPointProviderLocation
struct UFortAthenaLivingWorldPointProviderInterface_GetPointProviderLocation_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldPointProviderInterface.GetFiltersTags
struct UFortAthenaLivingWorldPointProviderInterface_GetFiltersTags_Params
{
public:
	struct FGameplayTagContainer                 FilterTags;                                        // 0x0(0x20)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldPointProviderInterface.EnablePointProvider
struct UFortAthenaLivingWorldPointProviderInterface_EnablePointProvider_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldPointProviderInterface.DisablePointProvider
struct UFortAthenaLivingWorldPointProviderInterface_DisablePointProvider_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldPrefab.RemoveFoliageInsideLevelBound
struct AFortAthenaLivingWorldPrefab_RemoveFoliageInsideLevelBound_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldPrefab.OnRep_ShouldLevelBeVisible
struct AFortAthenaLivingWorldPrefab_OnRep_ShouldLevelBeVisible_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// DelegateFunction LagerRuntime.FortAthenaLivingWorldPrefab.OnBuildingInLevelBoundsDestroyed__DelegateSignature
struct AFortAthenaLivingWorldPrefab_OnBuildingInLevelBoundsDestroyed__DelegateSignature_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// DelegateFunction LagerRuntime.FortAthenaLivingWorldPrefab.OnAllActorSpawnedDelegate__DelegateSignature
struct AFortAthenaLivingWorldPrefab_OnAllActorSpawnedDelegate__DelegateSignature_Params
{
public:
	TArray<class AActor*>                        SpawnedActors;                                     // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// DelegateFunction LagerRuntime.FortAthenaLivingWorldPrefab.OnAllActorSpawned__DelegateSignature
struct AFortAthenaLivingWorldPrefab_OnAllActorSpawned__DelegateSignature_Params
{
public:
	TArray<class AActor*>                        SpawnedActors;                                     // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldPrefab.MakeLevelVisible
struct AFortAthenaLivingWorldPrefab_MakeLevelVisible_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldPrefab.GetOwningLivingWorldPrefab
struct AFortAthenaLivingWorldPrefab_GetOwningLivingWorldPrefab_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AFortAthenaLivingWorldPrefab*          ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldPrefab.GetLevelBounds
struct AFortAthenaLivingWorldPrefab_GetLevelBounds_Params
{
public:
	struct FBox                                  ReturnValue;                                       // 0x0(0x38)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldPrefab.DestroyBuildingsInLevelBounds
struct AFortAthenaLivingWorldPrefab_DestroyBuildingsInLevelBounds_Params
{
public:
	FDelegateProperty_                           FinishedDelegate;                                  // 0x0(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldPrefab.CallWhenAllActorHaveSpawned
struct AFortAthenaLivingWorldPrefab_CallWhenAllActorHaveSpawned_Params
{
public:
	FDelegateProperty_                           DelegateToCall;                                    // 0x0(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldPrefab.AllowSpawnerToSpawn
struct AFortAthenaLivingWorldPrefab_AllowSpawnerToSpawn_Params
{
public:
};

// 0xD0 (0xD0 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldPrefabActorSpawner.OnSnapCompleted
struct AFortAthenaLivingWorldPrefabActorSpawner_OnSnapCompleted_Params
{
public:
	class UFortSnapOnSurfaceComponent*           Component;                                         // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7B34[0x8];                                     // Fixing Size After Last Property..
	struct FTransform                            OldTransform;                                      // 0x10(0x60)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            NewTransfom;                                       // 0x70(0x60)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// DelegateFunction LagerRuntime.FortAthenaLivingWorldPrefabActorSpawner.OnActorSpawnedDelegate__DelegateSignature
struct AFortAthenaLivingWorldPrefabActorSpawner_OnActorSpawnedDelegate__DelegateSignature_Params
{
public:
	class AActor*                                SpawnedActor;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// DelegateFunction LagerRuntime.FortAthenaLivingWorldPrefabActorSpawner.OnActorSpawned__DelegateSignature
struct AFortAthenaLivingWorldPrefabActorSpawner_OnActorSpawned__DelegateSignature_Params
{
public:
	class AActor*                                SpawnedActor;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldPrefabActorSpawner.GetSpawnedActor
struct AFortAthenaLivingWorldPrefabActorSpawner_GetSpawnedActor_Params
{
public:
	class AActor*                                ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldPrefabActorSpawner.CallWhenActorSpawned
struct AFortAthenaLivingWorldPrefabActorSpawner_CallWhenActorSpawned_Params
{
public:
	FDelegateProperty_                           DelegateToCall;                                    // 0x0(0xC)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldSpawnActionBlueprint.K2_OnAllActorSpawned
struct UFortAthenaLivingWorldSpawnActionBlueprint_K2_OnAllActorSpawned_Params
{
public:
	TArray<class AActor*>                        SpawnedActor;                                      // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	FInterfaceProperty_                          SourcePointProvider;                               // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldStaticPointProvider.OnCurrentPlaylistLoaded
struct AFortAthenaLivingWorldStaticPointProvider_OnCurrentPlaylistLoaded_Params
{
public:
	class FName                                  PlaylistName;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7B35[0x4];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 PlaylistContextTags;                               // 0x8(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// DelegateFunction LagerRuntime.FortAthenaLivingWorldStaticPointProvider.OnActorSpawned__DelegateSignature
struct AFortAthenaLivingWorldStaticPointProvider_OnActorSpawned__DelegateSignature_Params
{
public:
	class AActor*                                SpawnedActor;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldStaticPointProvider.EnablePointProvider
struct AFortAthenaLivingWorldStaticPointProvider_EnablePointProvider_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldStaticPointProvider.DisablePointProvider
struct AFortAthenaLivingWorldStaticPointProvider_DisablePointProvider_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldVolume.SetSpawnRotation
struct AFortAthenaLivingWorldVolume_SetSpawnRotation_Params
{
public:
	struct FRotator                              Rotation;                                          // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldVolume.SetFiltersTags
struct AFortAthenaLivingWorldVolume_SetFiltersTags_Params
{
public:
	struct FGameplayTagContainer                 TagContainer;                                      // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldVolume.SetEQSQueryConfigParam
struct AFortAthenaLivingWorldVolume_SetEQSQueryConfigParam_Params
{
public:
	class FName                                  ParameterName;                                     // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldVolume.SetEQSQuery
struct AFortAthenaLivingWorldVolume_SetEQSQuery_Params
{
public:
	class UEnvQuery*                             Query;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldVolume.RunEQS
struct AFortAthenaLivingWorldVolume_RunEQS_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldVolume.ResetSpawnRotation
struct AFortAthenaLivingWorldVolume_ResetSpawnRotation_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldVolume.OnWorldFinishedInitialization
struct AFortAthenaLivingWorldVolume_OnWorldFinishedInitialization_Params
{
public:
	struct FGameplayTagContainer                 ContextTags;                                       // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// DelegateFunction LagerRuntime.FortAthenaLivingWorldVolume.OnPointProviderRegistered__DelegateSignature
struct AFortAthenaLivingWorldVolume_OnPointProviderRegistered__DelegateSignature_Params
{
public:
	class AFortAthenaLivingWorldVolume*          PointProviderVolume;                               // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldVolume.OnCurrentPlaylistLoaded
struct AFortAthenaLivingWorldVolume_OnCurrentPlaylistLoaded_Params
{
public:
	class FName                                  PlaylistName;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7B3A[0x4];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 PlaylistContextTags;                               // 0x8(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// DelegateFunction LagerRuntime.FortAthenaLivingWorldVolume.OnActorSpawnedResult__DelegateSignature
struct AFortAthenaLivingWorldVolume_OnActorSpawnedResult__DelegateSignature_Params
{
public:
	class AActor*                                SpawnedActor;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bResult;                                           // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7B3B[0x7];                                     // Fixing Size Of Struct..
};

// 0x1 (0x1 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldVolume.IsPointProviderEnabled
struct AFortAthenaLivingWorldVolume_IsPointProviderEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldVolume.EnablePointProvider
struct AFortAthenaLivingWorldVolume_EnablePointProvider_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldVolume.DoesStartEnabled
struct AFortAthenaLivingWorldVolume_DoesStartEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldVolume.DisablePointProvider
struct AFortAthenaLivingWorldVolume_DisablePointProvider_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldWardComponent.SetWardRadius
struct UFortAthenaLivingWorldWardComponent_SetWardRadius_Params
{
public:
	float                                        Radius;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldWardComponent.OnWorldFinishedInitialization
struct UFortAthenaLivingWorldWardComponent_OnWorldFinishedInitialization_Params
{
public:
	struct FGameplayTagContainer                 ContextTags;                                       // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function LagerRuntime.FortAthenaLivingWorldWardComponent.OnCurrentPlaylistLoaded
struct UFortAthenaLivingWorldWardComponent_OnCurrentPlaylistLoaded_Params
{
public:
	class FName                                  PlaylistName;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7B40[0x4];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 PlaylistContextTags;                               // 0x8(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function LagerRuntime.FortAthenaPatrolPathPointProvider.OnCurrentPlaylistLoaded
struct AFortAthenaPatrolPathPointProvider_OnCurrentPlaylistLoaded_Params
{
public:
	class FName                                  PlaylistName;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7B42[0x4];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 PlaylistContextTags;                               // 0x8(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// DelegateFunction LagerRuntime.FortAthenaPatrolPathPointProvider.OnActorSpawnedResult__DelegateSignature
struct AFortAthenaPatrolPathPointProvider_OnActorSpawnedResult__DelegateSignature_Params
{
public:
	class AActor*                                SpawnedActor;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bResult;                                           // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7B43[0x7];                                     // Fixing Size Of Struct..
};

// 0x0 (0x0 - 0x0)
// Function LagerRuntime.FortAthenaPatrolPathPointProvider.EnablePointProvider
struct AFortAthenaPatrolPathPointProvider_EnablePointProvider_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function LagerRuntime.FortAthenaPatrolPathPointProvider.DisablePointProvider
struct AFortAthenaPatrolPathPointProvider_DisablePointProvider_Params
{
public:
};

// 0x28 (0x28 - 0x0)
// Function LagerRuntime.FortAthenaPointAroundPlayerProvider.OnCurrentPlaylistLoaded
struct AFortAthenaPointAroundPlayerProvider_OnCurrentPlaylistLoaded_Params
{
public:
	class FName                                  PlaylistName;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7B47[0x4];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 PlaylistContextTags;                               // 0x8(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// DelegateFunction LagerRuntime.FortAthenaPointAroundPlayerProvider.OnActorSpawnedResult__DelegateSignature
struct AFortAthenaPointAroundPlayerProvider_OnActorSpawnedResult__DelegateSignature_Params
{
public:
	class AActor*                                SpawnedActor;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bResult;                                           // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7B48[0x7];                                     // Fixing Size Of Struct..
};

// 0x0 (0x0 - 0x0)
// Function LagerRuntime.FortAthenaPointAroundPlayerProvider.EnablePointProvider
struct AFortAthenaPointAroundPlayerProvider_EnablePointProvider_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function LagerRuntime.FortAthenaPointAroundPlayerProvider.DisablePointProvider
struct AFortAthenaPointAroundPlayerProvider_DisablePointProvider_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function LagerRuntime.FortCheatManager_LivingWorldManager.LWMTE
struct UFortCheatManager_LivingWorldManager_LWMTE_Params
{
public:
	class FString                                EventDataName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function LagerRuntime.FortCheatManager_LivingWorldManager.LWMSE
struct UFortCheatManager_LivingWorldManager_LWMSE_Params
{
public:
	class FString                                EventDataName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SpawnerDataNames;                                  // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function LagerRuntime.FortCheatManager_LivingWorldManager.LWMS
struct UFortCheatManager_LivingWorldManager_LWMS_Params
{
public:
	class FString                                EventDataName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function LagerRuntime.FortCheatManager_LivingWorldManager.LivingWorldManagerTriggerEvent
struct UFortCheatManager_LivingWorldManager_LivingWorldManagerTriggerEvent_Params
{
public:
	class FString                                EventDataName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function LagerRuntime.FortCheatManager_LivingWorldManager.LivingWorldManagerTeleportToSpawnPosition
struct UFortCheatManager_LivingWorldManager_LivingWorldManagerTeleportToSpawnPosition_Params
{
public:
	class FString                                EventDataName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function LagerRuntime.FortCheatManager_LivingWorldManager.LivingWorldManagerTeleportTo
struct UFortCheatManager_LivingWorldManager_LivingWorldManagerTeleportTo_Params
{
public:
	class FString                                EventDataName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function LagerRuntime.FortCheatManager_LivingWorldManager.LivingWorldManagerSpawnEventAtLocation
struct UFortCheatManager_LivingWorldManager_LivingWorldManagerSpawnEventAtLocation_Params
{
public:
	class FString                                EventDataName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0x10(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Rotation;                                          // 0x28(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	class FString                                SpawnerDataNames;                                  // 0x40(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function LagerRuntime.FortCheatManager_LivingWorldManager.LivingWorldManagerSpawnEvent
struct UFortCheatManager_LivingWorldManager_LivingWorldManagerSpawnEvent_Params
{
public:
	class FString                                EventDataName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SpawnerDataNames;                                  // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function LagerRuntime.FortCheatManager_LivingWorldManager.LivingWorldManagerSpawnAtLocation
struct UFortCheatManager_LivingWorldManager_LivingWorldManagerSpawnAtLocation_Params
{
public:
	class FString                                EventDataName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0x10(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Rotation;                                          // 0x28(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function LagerRuntime.FortCheatManager_LivingWorldManager.LivingWorldManagerSpawn
struct UFortCheatManager_LivingWorldManager_LivingWorldManagerSpawn_Params
{
public:
	class FString                                EventDataName;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function LagerRuntime.FortCheatManager_LivingWorldManager.LivingWorldManagerGDTNextDensityGrid
struct UFortCheatManager_LivingWorldManager_LivingWorldManagerGDTNextDensityGrid_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function LagerRuntime.FortCheatManager_LivingWorldManager.LivingWorldManagerDisplaySpawnPoints
struct UFortCheatManager_LivingWorldManager_LivingWorldManagerDisplaySpawnPoints_Params
{
public:
	float                                        MaxDisplayDistance;                                // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
