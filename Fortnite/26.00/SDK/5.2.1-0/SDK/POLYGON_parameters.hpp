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

// 0x50 (0x50 - 0x0)
// Function POLYGON.TraceProjectile.UpdateVelocity
struct UTraceProjectile_UpdateVelocity_Params
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PreviousVelocity;                                  // 0x18(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DeltaTime;                                         // 0x30(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DC4[0x4];                                     // Fixing Size After Last Property 
	struct FVector                               ReturnValue;                                       // 0x38(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function POLYGON.TraceProjectile.SpawnWithExactVelocity
struct UTraceProjectile_SpawnWithExactVelocity_Params
{
public:
	TSubclassOf<class UTraceProjectile>          bulletClass;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UItem_Gun_General*                     Gun;                                               // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SpawnLocation;                                     // 0x10(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               StartVelocity;                                     // 0x28(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        RandomSeed;                                        // 0x40(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DD2[0x7];                                     // Fixing Size Of Struct
};

// 0x48 (0x48 - 0x0)
// Function POLYGON.TraceProjectile.Spawn
struct UTraceProjectile_Spawn_Params
{
public:
	TSubclassOf<class UTraceProjectile>          bulletClass;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UItem_Gun_General*                     Gun;                                               // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SpawnLocation;                                     // 0x10(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               StartVelocity;                                     // 0x28(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        RandomSeed;                                        // 0x40(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DDA[0x7];                                     // Fixing Size Of Struct
};

// 0x48 (0x48 - 0x0)
// Function POLYGON.TraceProjectile.OnTrajectoryUpdateReceived
struct UTraceProjectile_OnTrajectoryUpdateReceived_Params
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               OldVelocity;                                       // 0x18(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               NewVelocity;                                       // 0x30(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function POLYGON.TraceProjectile.OnTrace
struct UTraceProjectile_OnTrace_Params
{
public:
	struct FVector                               StartLocation;                                     // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               EndLocation;                                       // 0x18(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x128 (0x128 - 0x0)
// Function POLYGON.TraceProjectile.OnImpact
struct UTraceProjectile_OnImpact_Params
{
public:
	bool                                         Ricochet;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         PassedThrough;                                     // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DEE[0x6];                                     // Fixing Size After Last Property 
	struct FVector                               ExitVelocity;                                      // 0x8(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Impulse;                                           // 0x20(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PenetrationDepth;                                  // 0x38(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DF2[0x4];                                     // Fixing Size After Last Property 
	struct FHitResult                            HitResult;                                         // 0x40(0xE8)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function POLYGON.TraceProjectile.OnDeactivated
struct UTraceProjectile_OnDeactivated_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function POLYGON.TraceProjectile.Deactivate
struct UTraceProjectile_Deactivate_Params
{
public:
};

// 0xF0 (0xF0 - 0x0)
// Function POLYGON.TraceProjectile.CollisionFilter
struct UTraceProjectile_CollisionFilter_Params
{
public:
	struct FHitResult                            HitResult;                                         // 0x0(0xE8)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xE8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1DF6[0x7];                                     // Fixing Size Of Struct
};

// 0x20 (0x20 - 0x0)
// Function POLYGON.ChatSystemComponent.SentMessage_Multicast
struct UChatSystemComponent_SentMessage_Multicast_Params
{
public:
	struct FGameChatMessage                      Message;                                           // 0x0(0x20)(Parm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function POLYGON.ChatSystemComponent.SendMessage_Server
struct UChatSystemComponent_SendMessage_Server_Params
{
public:
	struct FGameChatMessage                      Message;                                           // 0x0(0x20)(Parm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function POLYGON.ClientBackendComponent.SetPlayerId
struct UClientBackendComponent_SetPlayerId_Params
{
public:
	class FString                                NewPlayerMasterId;                                 // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function POLYGON.ClientBackendComponent.SetPlayerCombinedInfo
struct UClientBackendComponent_SetPlayerCombinedInfo_Params
{
public:
	class UPlayFabJsonObject*                    NewPlayerCombinedInfo;                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<enum class EModifiedData>             ModifiedData;                                      // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                CustomDelegateString;                              // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function POLYGON.ClientBackendComponent.SerPlayerExperiments
struct UClientBackendComponent_SerPlayerExperiments_Params
{
public:
	class UPlayFabJsonObject*                    Experiments;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function POLYGON.ClientBackendComponent.IsClientLoggedIn
struct UClientBackendComponent_IsClientLoggedIn_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function POLYGON.ClientBackendComponent.GiveVipLocal
struct UClientBackendComponent_GiveVipLocal_Params
{
public:
	class FString                                ID;                                                // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function POLYGON.ClientBackendComponent.GetPlayerExperiments
struct UClientBackendComponent_GetPlayerExperiments_Params
{
public:
	class UPlayFabJsonObject*                    ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function POLYGON.ClientBackendComponent.GetPlayerCombinedInfo
struct UClientBackendComponent_GetPlayerCombinedInfo_Params
{
public:
	class UPlayFabJsonObject*                    ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function POLYGON.ClientGameInstance.SetServerTime
struct UClientGameInstance_SetServerTime_Params
{
public:
	struct FDateTime                             ServerTime;                                        // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function POLYGON.ClientGameInstance.SetPlayerId
struct UClientGameInstance_SetPlayerId_Params
{
public:
	class FString                                NewPlayerMasterId;                                 // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function POLYGON.ClientGameInstance.SetPlayerCombinedInfo
struct UClientGameInstance_SetPlayerCombinedInfo_Params
{
public:
	class UPlayFabJsonObject*                    NewPlayerCombinedInfo;                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function POLYGON.ClientGameInstance.HandleNetworkFailure
struct UClientGameInstance_HandleNetworkFailure_Params
{
public:
	class UWorld*                                World;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNetDriver*                            NetDriver;                                         // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENetworkFailure                   FailureType;                                       // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E94[0x7];                                     // Fixing Size After Last Property 
	class FString                                ErrorString;                                       // 0x18(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function POLYGON.ClientGameInstance.GetServerTime
struct UClientGameInstance_GetServerTime_Params
{
public:
	struct FDateTime                             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function POLYGON.ClientGameInstance.GetPlayerMasterId
struct UClientGameInstance_GetPlayerMasterId_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function POLYGON.ClientGameInstance.GetPlayerCombinedInfo
struct UClientGameInstance_GetPlayerCombinedInfo_Params
{
public:
	class UPlayFabJsonObject*                    ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function POLYGON.ControlPoint.OnRep_IsCapture
struct UControlPoint_OnRep_IsCapture_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function POLYGON.ControlPoint.OnRep_CapturePointsBravoTeam
struct UControlPoint_OnRep_CapturePointsBravoTeam_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function POLYGON.ControlPoint.OnRep_CapturePointsAlphaTeam
struct UControlPoint_OnRep_CapturePointsAlphaTeam_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function POLYGON.ControlPoint.OnRep_CapturedTeam
struct UControlPoint_OnRep_CapturedTeam_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function POLYGON.ControlPoint.GetControlPointNameAsString
struct UControlPoint_GetControlPointNameAsString_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function POLYGON.ControlPoint.GetControlPointNameAsOneLetter
struct UControlPoint_GetControlPointNameAsOneLetter_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function POLYGON.ControlPoint.ContainsCharacter
struct UControlPoint_ContainsCharacter_Params
{
public:
	class UCharacter*                            Character;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EC2[0x7];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function POLYGON.DataManagerLibrary.GetDataTableReferences
struct UDataManagerLibrary_GetDataTableReferences_Params
{
public:
	class UDataContainerAsset*                   ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function POLYGON.EOSPartyId.ToString
struct UEOSPartyId_ToString_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function POLYGON.EOSPartyMemberId.ToString
struct UEOSPartyMemberId_ToString_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function POLYGON.EOSSubsystemAvanced.StartLogin
struct UEOSSubsystemAvanced_StartLogin_Params
{
public:
	FDelegateProperty_                           OnLoginComplete;                                   // 0x0(0x10)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function POLYGON.EOSSubsystemAvanced.StartCreateParty
struct UEOSSubsystemAvanced_StartCreateParty_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PartyTypeId;                                       // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnDone;                                            // 0xC(0x10)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1EFB[0x4];                                     // Fixing Size Of Struct
};

// 0x20 (0x20 - 0x0)
// Function POLYGON.EOSSubsystemAvanced.GetPartyMembers
struct UEOSSubsystemAvanced_GetPartyMembers_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UEOSPartyId*                           PartyId;                                           // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UEOSPartyMemberId*>             ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function POLYGON.EOSSubsystemAvanced.GetJoinedParties
struct UEOSSubsystemAvanced_GetJoinedParties_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UEOSPartyId*>                   ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function POLYGON.EventManagerComponent.OnAmmoBoxAction
struct UEventManagerComponent_OnAmmoBoxAction_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function POLYGON.EventManagerComponent.AmmoBoxAction
struct UEventManagerComponent_AmmoBoxAction_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function POLYGON.FOVManagerComponent.SetMeshFOV
struct UFOVManagerComponent_SetMeshFOV_Params
{
public:
	float                                        NewMeshFOV;                                        // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function POLYGON.FOVManagerComponent.SetDefaultCameraFOV
struct UFOVManagerComponent_SetDefaultCameraFOV_Params
{
public:
	float                                        NewDefaultCameraFOV;                               // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function POLYGON.FOVManagerComponent.SetCameraFOV
struct UFOVManagerComponent_SetCameraFOV_Params
{
public:
	float                                        NewCameraFOV;                                      // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function POLYGON.FOVManagerComponent.HardResetMeshFOV
struct UFOVManagerComponent_HardResetMeshFOV_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function POLYGON.FOVManagerComponent.HardResetCameraFOV
struct UFOVManagerComponent_HardResetCameraFOV_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function POLYGON.FOVManagerInterface.SetCorrectiveFovMaterial
struct UFOVManagerInterface_SetCorrectiveFovMaterial_Params
{
public:
	bool                                         UseFovMaterial;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function POLYGON.GunModulesInfo.FindModule
struct UGunModulesInfo_FindModule_Params
{
public:
	TArray<struct FGunModuleInfo>                Array;                                             // 0x0(0x10)(Parm, ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TSubclassOf<class UItem_Module_General>      ModuleClass;                                       // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGunModuleInfo                        ReturnValue;                                       // 0x18(0x40)(Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function POLYGON.HealthStatsComponent.OnRep_HealthProtection
struct UHealthStatsComponent_OnRep_HealthProtection_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function POLYGON.HealthStatsComponent.OnRep_Health
struct UHealthStatsComponent_OnRep_Health_Params
{
public:
	uint8                                        PreviousHealth;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function POLYGON.HealthStatsComponent.KillSelf_server
struct UHealthStatsComponent_KillSelf_server_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function POLYGON.HealthStatsComponent.GetStamina
struct UHealthStatsComponent_GetStamina_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function POLYGON.HealthStatsComponent.GetHealthProtection
struct UHealthStatsComponent_GetHealthProtection_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function POLYGON.HealthStatsComponent.GetHealth
struct UHealthStatsComponent_GetHealth_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function POLYGON.InspectManagerComponent.SetPivotOffset
struct UInspectManagerComponent_SetPivotOffset_Params
{
public:
	struct FVector2D                             Offset;                                            // 0x0(0x10)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function POLYGON.InspectManagerComponent.ResetRotation
struct UInspectManagerComponent_ResetRotation_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function POLYGON.InspectManagerComponent.OnClicked
struct UInspectManagerComponent_OnClicked_Params
{
public:
	class UPrimitiveComponent*                   TouchedComponent;                                  // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FKey                                  ButtonPressed;                                     // 0x8(0x18)(Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function POLYGON.InspectManagerComponent.EnableInspect
struct UInspectManagerComponent_EnableInspect_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function POLYGON.InspectManagerComponent.DisableInspect
struct UInspectManagerComponent_DisableInspect_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function POLYGON.InteractInterface.StopInteract
struct UInteractInterface_StopInteract_Params
{
public:
	class UPG_Game_Character*                    Character;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function POLYGON.InteractInterface.StartInteract
struct UInteractInterface_StartInteract_Params
{
public:
	class UPG_Game_Character*                    Character;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function POLYGON.InteractInterface.SetPlayerLooks
struct UInteractInterface_SetPlayerLooks_Params
{
public:
	class UPG_Game_Character*                    Character;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsLooks;                                          // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F61[0x7];                                     // Fixing Size Of Struct
};

// 0x20 (0x20 - 0x0)
// Function POLYGON.InventoryComponent_Base.UpdatePlayerCombinedInfo
struct UInventoryComponent_Base_UpdatePlayerCombinedInfo_Params
{
public:
	TArray<enum class EModifiedData>             ModifiedData;                                      // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                CustomDelegateString;                              // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function POLYGON.InventoryComponent_Base.OnRep_SecondaryGun
struct UInventoryComponent_Base_OnRep_SecondaryGun_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function POLYGON.InventoryComponent_Base.OnRep_PrimaryGun
struct UInventoryComponent_Base_OnRep_PrimaryGun_Params
{
public:
};

// 0x30 (0x30 - 0x0)
// Function POLYGON.InventoryComponent_Game.SetGunModules
struct UInventoryComponent_Game_SetGunModules_Params
{
public:
	class FString                                GunInstanceId;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        ItemsInstanceId;                                   // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<class FString>                        ReturnValue;                                       // 0x20(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function POLYGON.InventoryComponent_Game.RequestSetGunModules_server
struct UInventoryComponent_Game_RequestSetGunModules_server_Params
{
public:
	class FString                                GunInstanceId;                                     // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        ItemsInstanceId;                                   // 0x10(0x10)(ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function POLYGON.InventoryComponent_Game.RequestEquipItems_server
struct UInventoryComponent_Game_RequestEquipItems_server_Params
{
public:
	TArray<class FString>                        ItemsInstanceId;                                   // 0x0(0x10)(ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function POLYGON.InventoryComponent_Game.OnRep_GrenadesNumber
struct UInventoryComponent_Game_OnRep_GrenadesNumber_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function POLYGON.InventoryComponent_Game.OnRep_CurrentGun
struct UInventoryComponent_Game_OnRep_CurrentGun_Params
{
public:
	class UItem_Gun_General*                     PreviousGun;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function POLYGON.InventoryComponent_Game.EquipItems
struct UInventoryComponent_Game_EquipItems_Params
{
public:
	TArray<class FString>                        ItemsInstanceId;                                   // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<class FString>                        ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function POLYGON.InventoryComponent_Game.AddGrenate_server
struct UInventoryComponent_Game_AddGrenate_server_Params
{
public:
	uint8                                        Number;                                            // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function POLYGON.Item_Grenade_General.OnRep_ReplicatedPosition
struct UItem_Grenade_General_OnRep_ReplicatedPosition_Params
{
public:
};

// 0x118 (0x118 - 0x0)
// Function POLYGON.Item_Grenade_General.OnMeshHit
struct UItem_Grenade_General_OnMeshHit_Params
{
public:
	class UPrimitiveComponent*                   HitComponent;                                      // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                OtherActor;                                        // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   OtherComp;                                         // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               NormalImpulse;                                     // 0x18(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FHitResult                            Hit;                                               // 0x30(0xE8)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function POLYGON.Item_Grenade_General.OnGrenadeThrow
struct UItem_Grenade_General_OnGrenadeThrow_Params
{
public:
};

// 0x30 (0x30 - 0x0)
// Function POLYGON.Item_Grenade_General.NotifyThrow_server
struct UItem_Grenade_General_NotifyThrow_server_Params
{
public:
	struct FVector_NetQuantize                   StartPosition;                                     // 0x0(0x18)(ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantize                   Impulse;                                           // 0x18(0x18)(ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function POLYGON.Item_Gun_General.UpdatePlayerCombinedInfo
struct UItem_Gun_General_UpdatePlayerCombinedInfo_Params
{
public:
	TArray<enum class EModifiedData>             ModifiedData;                                      // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                CustomDelegateString;                              // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function POLYGON.Item_Gun_General.UpdateAmmoCount_server
struct UItem_Gun_General_UpdateAmmoCount_server_Params
{
public:
	uint8                                        CurrentNumberAmmo;                                 // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function POLYGON.Item_Gun_General.SetGunModules
struct UItem_Gun_General_SetGunModules_Params
{
public:
	class UPlayFabJsonObject*                    Modules;                                           // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function POLYGON.Item_Gun_General.RequestReload_server
struct UItem_Gun_General_RequestReload_server_Params
{
public:
	uint8                                        CurrentNumberAmmo;                                 // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function POLYGON.Item_Gun_General.OnSetPlayerState
struct UItem_Gun_General_OnSetPlayerState_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function POLYGON.Item_Gun_General.OnRep_ReloadCaller
struct UItem_Gun_General_OnRep_ReloadCaller_Params
{
public:
	uint8                                        PreviousValue;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function POLYGON.Item_Gun_General.OnRep_GunShot
struct UItem_Gun_General_OnRep_GunShot_Params
{
public:
	struct FGunShot                              PreviousShot;                                      // 0x0(0x20)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function POLYGON.Item_Gun_General.OnRep_GunHitOfShortShot
struct UItem_Gun_General_OnRep_GunHitOfShortShot_Params
{
public:
	struct FVector_NetQuantize                   PreviousValue;                                     // 0x0(0x18)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function POLYGON.Item_Gun_General.OnRep_CurrentStockAmmo
struct UItem_Gun_General_OnRep_CurrentStockAmmo_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function POLYGON.Item_Gun_General.OnRep_CurrentGunModuleClasses
struct UItem_Gun_General_OnRep_CurrentGunModuleClasses_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function POLYGON.Item_Gun_General.OnRep_CallHardReset
struct UItem_Gun_General_OnRep_CallHardReset_Params
{
public:
	uint8                                        PreviousValue;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function POLYGON.Item_Gun_General.NotifyServerTraceHit
struct UItem_Gun_General_NotifyServerTraceHit_Params
{
public:
	struct FGunHitOnCharacter                    HitOnCharacter;                                    // 0x0(0x28)(ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function POLYGON.Item_Gun_General.NotifyServerOfShot
struct UItem_Gun_General_NotifyServerOfShot_Params
{
public:
	struct FGunShot                              GunShot;                                           // 0x0(0x20)(ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function POLYGON.Item_Gun_General.NotifyServerHitWithEnergy
struct UItem_Gun_General_NotifyServerHitWithEnergy_Params
{
public:
	struct FGunHitOnCharacter                    HitOnCharacter;                                    // 0x0(0x28)(ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Energy;                                            // 0x28(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FD2[0x7];                                     // Fixing Size Of Struct
};

// 0x28 (0x28 - 0x0)
// Function POLYGON.Item_Gun_General.NotifyServerHit
struct UItem_Gun_General_NotifyServerHit_Params
{
public:
	struct FGunHitOnCharacter                    HitOnCharacter;                                    // 0x0(0x28)(ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function POLYGON.Item_Gun_General.NotifyGrantedProgressDataContainer_client
struct UItem_Gun_General_NotifyGrantedProgressDataContainer_client_Params
{
public:
	class FString                                ItemInstanceId;                                    // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function POLYGON.Item_Gun_General.GetItemReference
struct UItem_Gun_General_GetItemReference_Params
{
public:
	class UPlayFabJsonObject*                    ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function POLYGON.Item_Gun_General.GetForwardShot
struct UItem_Gun_General_GetForwardShot_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function POLYGON.Item_Gun_General.GetCurrentStockAmmo
struct UItem_Gun_General_GetCurrentStockAmmo_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function POLYGON.Item_Gun_General.CockBolt_server
struct UItem_Gun_General_CockBolt_server_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function POLYGON.Item_Gun_General.CockBolt_multicast
struct UItem_Gun_General_CockBolt_multicast_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function POLYGON.Item_Gun_General.AddStockAmmo_server
struct UItem_Gun_General_AddStockAmmo_server_Params
{
public:
	int8                                         AddAmmo;                                           // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function POLYGON.Item_Module_Flashlight.SetFlashlightEnable_server
struct UItem_Module_Flashlight_SetFlashlightEnable_server_Params
{
public:
	bool                                         IsEnable;                                          // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2 (0x2 - 0x0)
// Function POLYGON.Item_Module_Flashlight.SetFlashlightEnable
struct UItem_Module_Flashlight_SetFlashlightEnable_Params
{
public:
	bool                                         IsEnable;                                          // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCallOnServer;                                     // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function POLYGON.Item_Module_Flashlight.OnSetCurrentGun
struct UItem_Module_Flashlight_OnSetCurrentGun_Params
{
public:
	class UItem_Gun_General*                     PreviousGun;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function POLYGON.Item_Module_Flashlight.OnRep_IsEnable
struct UItem_Module_Flashlight_OnRep_IsEnable_Params
{
public:
	bool                                         OldState;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function POLYGON.Item_Module_Flashlight.OnChangeEnableState
struct UItem_Module_Flashlight_OnChangeEnableState_Params
{
public:
	bool                                         bPlaySound;                                        // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function POLYGON.Item_Module_Optic.ToggleAiming
struct UItem_Module_Optic_ToggleAiming_Params
{
public:
	bool                                         IsAiming;                                          // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function POLYGON.PG_FunctionLibraryKit.ParseOption
struct UPG_FunctionLibraryKit_ParseOption_Params
{
public:
	class FString                                Options;                                           // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Key;                                               // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Separator;                                         // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x30(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function POLYGON.PG_FunctionLibraryKit.GetRegionEnum
struct UPG_FunctionLibraryKit_GetRegionEnum_Params
{
public:
	class FString                                RegionName;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAzureRegion                      ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2059[0x7];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function POLYGON.PG_FunctionLibraryKit.GetRateScale
struct UPG_FunctionLibraryKit_GetRateScale_Params
{
public:
	class UAnimSequenceBase*                     AnimationSequenceBase;                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2062[0x4];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function POLYGON.PG_FunctionLibraryKit.GetProjectVersion
struct UPG_FunctionLibraryKit_GetProjectVersion_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function POLYGON.PG_FunctionLibraryKit.GetBuildNumber
struct UPG_FunctionLibraryKit_GetBuildNumber_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function POLYGON.PG_FunctionLibraryKit.ExitGame
struct UPG_FunctionLibraryKit_ExitGame_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function POLYGON.PG_GameInstance.GetServerGameInstance
struct UPG_GameInstance_GetServerGameInstance_Params
{
public:
	class UServerGameInstance*                   ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function POLYGON.PG_GameInstance.GetClientGameInstance
struct UPG_GameInstance_GetClientGameInstance_Params
{
public:
	class UClientGameInstance*                   ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function POLYGON.PG_GameMode_Game.LoginPlayer
struct UPG_GameMode_Game_LoginPlayer_Params
{
public:
	class UPG_PlayerController_Game*             PlayerController;                                  // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayerMasterId;                                    // 0x8(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function POLYGON.PG_GameState_Game.SetCanMovePlayers
struct UPG_GameState_Game_SetCanMovePlayers_Params
{
public:
	bool                                         NewMoveState;                                      // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function POLYGON.PG_GameState_Game.OnRep_WinningTeam
struct UPG_GameState_Game_OnRep_WinningTeam_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function POLYGON.PG_GameState_Game.OnRep_TeamBravo
struct UPG_GameState_Game_OnRep_TeamBravo_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function POLYGON.PG_GameState_Game.OnRep_TeamAlpha
struct UPG_GameState_Game_OnRep_TeamAlpha_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function POLYGON.PG_GameState_Game.OnRep_ServerFps
struct UPG_GameState_Game_OnRep_ServerFps_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function POLYGON.PG_GameState_Game.OnRep_ScoreBravoTeam
struct UPG_GameState_Game_OnRep_ScoreBravoTeam_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function POLYGON.PG_GameState_Game.OnRep_ScoreAlphaTeam
struct UPG_GameState_Game_OnRep_ScoreAlphaTeam_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function POLYGON.PG_GameState_Game.OnRep_Players
struct UPG_GameState_Game_OnRep_Players_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function POLYGON.PG_GameState_Game.OnRep_GameTimer
struct UPG_GameState_Game_OnRep_GameTimer_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function POLYGON.PG_GameState_Game.OnRep_GameState
struct UPG_GameState_Game_OnRep_GameState_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function POLYGON.PG_GameState_Game.OnRep_CanMovePlayers
struct UPG_GameState_Game_OnRep_CanMovePlayers_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function POLYGON.PG_GameState_Game.NotifyPlayerWasKicked
struct UPG_GameState_Game_NotifyPlayerWasKicked_Params
{
public:
	class FString                                badGuyName;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNameWasOptimized;                                 // 0x10(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_208A[0x7];                                     // Fixing Size Of Struct
};

// 0x4 (0x4 - 0x0)
// Function POLYGON.PG_GameState_Game.GetScoreBravoTeam
struct UPG_GameState_Game_GetScoreBravoTeam_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function POLYGON.PG_GameState_Game.GetScoreAlphaTeam
struct UPG_GameState_Game_GetScoreAlphaTeam_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function POLYGON.PG_GameState_Game.GetMaxScoreForWin
struct UPG_GameState_Game_GetMaxScoreForWin_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function POLYGON.PG_GameState_Game.GetGameTimer
struct UPG_GameState_Game_GetGameTimer_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function POLYGON.PG_Game_Character.StopInteractWithObject_server
struct UPG_Game_Character_StopInteractWithObject_server_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function POLYGON.PG_Game_Character.StopInteractWithObject
struct UPG_Game_Character_StopInteractWithObject_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function POLYGON.PG_Game_Character.StartShooting
struct UPG_Game_Character_StartShooting_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function POLYGON.PG_Game_Character.StartInteractWithObject_server
struct UPG_Game_Character_StartInteractWithObject_server_Params
{
public:
	class UActor*                                InteractActor;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function POLYGON.PG_Game_Character.StartInteractWithObject
struct UPG_Game_Character_StartInteractWithObject_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function POLYGON.PG_Game_Character.SetNeutralizationVignetteImpact
struct UPG_Game_Character_SetNeutralizationVignetteImpact_Params
{
public:
	float                                        NewNeutralizationVignetteImpact;                   // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function POLYGON.PG_Game_Character.SetIsSprinting_server
struct UPG_Game_Character_SetIsSprinting_server_Params
{
public:
	bool                                         NewState;                                          // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function POLYGON.PG_Game_Character.Respawn_client
struct UPG_Game_Character_Respawn_client_Params
{
public:
	struct FVector_NetQuantize                   NewLocation;                                       // 0x0(0x18)(ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector_NetQuantizeNormal             NewRotator;                                        // 0x18(0x18)(ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function POLYGON.PG_Game_Character.Respawn
struct UPG_Game_Character_Respawn_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function POLYGON.PG_Game_Character.PlayerLooks
struct UPG_Game_Character_PlayerLooks_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function POLYGON.PG_Game_Character.OnRep_RespawnCounter
struct UPG_Game_Character_OnRep_RespawnCounter_Params
{
public:
	uint8                                        PreviousValue;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function POLYGON.PG_Game_Character.OnRep_PlayerAction
struct UPG_Game_Character_OnRep_PlayerAction_Params
{
public:
	enum class EPlayerAction                     PreviousAction;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function POLYGON.PG_Game_Character.NotifyDeathWithImpulse_multicast
struct UPG_Game_Character_NotifyDeathWithImpulse_multicast_Params
{
public:
	class UPG_PlayerState_Game*                  Killer;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPlayerDeathType                  DeathType;                                         // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20A8[0x7];                                     // Fixing Size After Last Property 
	struct FVector_NetQuantize                   Impulse;                                           // 0x10(0x18)(ConstParm, Parm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BoneIndex;                                         // 0x28(0x1)(ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20AA[0x7];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function POLYGON.PG_Game_Character.NotifyDeath_multicast
struct UPG_Game_Character_NotifyDeath_multicast_Params
{
public:
	class UPG_PlayerState_Game*                  Killer;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPlayerDeathType                  DeathType;                                         // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20AE[0x7];                                     // Fixing Size Of Struct
};

// 0x1 (0x1 - 0x0)
// Function POLYGON.PG_Game_Character.LeanBody_server
struct UPG_Game_Character_LeanBody_server_Params
{
public:
	int8                                         LeanBodyAlpha;                                     // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function POLYGON.PG_Game_Character.HitAtProtectedCharacter
struct UPG_Game_Character_HitAtProtectedCharacter_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function POLYGON.PG_Game_Character.GetTeam
struct UPG_Game_Character_GetTeam_Params
{
public:
	enum class ETeam                             ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function POLYGON.PG_Game_Character.GetPlayerAction
struct UPG_Game_Character_GetPlayerAction_Params
{
public:
	enum class EPlayerAction                     ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function POLYGON.PG_Game_Character.GetNeutralizationVignetteImpact
struct UPG_Game_Character_GetNeutralizationVignetteImpact_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function POLYGON.PG_Game_Character.GetIsSprinting
struct UPG_Game_Character_GetIsSprinting_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function POLYGON.PG_Game_Character.GetActiveCamera
struct UPG_Game_Character_GetActiveCamera_Params
{
public:
	class UCameraComponent*                      ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function POLYGON.PG_Game_Character.EventTakeDamage
struct UPG_Game_Character_EventTakeDamage_Params
{
public:
	struct FVector                               Origin;                                            // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function POLYGON.PG_Game_Character.DeathEvent
struct UPG_Game_Character_DeathEvent_Params
{
public:
	class UPG_PlayerState_Game*                  Killer;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPlayerDeathType                  DeathType;                                         // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20C2[0x7];                                     // Fixing Size Of Struct
};

// 0x0 (0x0 - 0x0)
// Function POLYGON.PG_Game_Character.ChangeIsAlive
struct UPG_Game_Character_ChangeIsAlive_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function POLYGON.PG_Game_Character.CameraNeutralizationEffectEvent
struct UPG_Game_Character_CameraNeutralizationEffectEvent_Params
{
public:
	float                                        Damage;                                            // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function POLYGON.PG_Game_Character.ActionWhenTakeDamage_client
struct UPG_Game_Character_ActionWhenTakeDamage_client_Params
{
public:
	class UActor*                                DamageCauser;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function POLYGON.PG_Game_Character.ActionWhenGunHit_client
struct UPG_Game_Character_ActionWhenGunHit_client_Params
{
public:
	class UPG_Game_Character*                    CharacterInstigator;                               // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        HitBoneIndex;                                      // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20C9[0x7];                                     // Fixing Size Of Struct
};

// 0x1 (0x1 - 0x0)
// Function POLYGON.PG_BeaconClient.SendNumberInQueue_client
struct UPG_BeaconClient_SendNumberInQueue_client_Params
{
public:
	uint8                                        Number;                                            // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function POLYGON.PG_BeaconClient.ResponseReserveSlot_client
struct UPG_BeaconClient_ResponseReserveSlot_client_Params
{
public:
	uint8                                        Payload;                                           // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function POLYGON.PG_BeaconClient.RequestReserveSlot_server
struct UPG_BeaconClient_RequestReserveSlot_server_Params
{
public:
	TArray<struct FUniqueNetIdRepl>              UnequeIds;                                         // 0x0(0x10)(ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         IsUsedMatchmaker;                                  // 0x10(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2100[0x7];                                     // Fixing Size Of Struct
};

// 0x38 (0x38 - 0x0)
// Function POLYGON.PG_BeaconClient.RequestReserveSlot
struct UPG_BeaconClient_RequestReserveSlot_Params
{
public:
	TArray<struct FUniqueNetIdRepl>              UnequeIds;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         IsUsedMatchmaker;                                  // 0x10(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2108[0x3];                                     // Fixing Size After Last Property 
	FDelegateProperty_                           OnResponseReserveSlot;                             // 0x14(0x10)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnPutInQueue;                                      // 0x24(0x10)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2109[0x4];                                     // Fixing Size Of Struct
};

// 0x0 (0x0 - 0x0)
// Function POLYGON.PG_BeaconClient.LeaveQueue
struct UPG_BeaconClient_LeaveQueue_Params
{
public:
};

// 0x28 (0x28 - 0x0)
// Function POLYGON.PG_BeaconClient.ConnectToServer
struct UPG_BeaconClient_ConnectToServer_Params
{
public:
	class FString                                IP;                                                // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BeaconPort;                                        // 0x10(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           OnConnectedStateChange;                            // 0x14(0x10)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x24(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2110[0x3];                                     // Fixing Size Of Struct
};

// 0x30 (0x30 - 0x0)
// Function POLYGON.PG_PlayerController_Base.ShowError
struct UPG_PlayerController_Base_ShowError_Params
{
public:
	class FText                                  ErrorMessage;                                      // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  ErrorDetails;                                      // 0x18(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function POLYGON.PG_PlayerController_Base.IsInvertMouse
struct UPG_PlayerController_Base_IsInvertMouse_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function POLYGON.PG_PlayerController_Base.GetMouseSensitivityValue
struct UPG_PlayerController_Base_GetMouseSensitivityValue_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function POLYGON.PG_PlayerController_Base.GetMouseSensitivityAimingValue
struct UPG_PlayerController_Base_GetMouseSensitivityAimingValue_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function POLYGON.PG_PlayerController_Game.VoteKick
struct UPG_PlayerController_Game_VoteKick_Params
{
public:
	class UPG_PlayerState_Game*                  badGuy;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function POLYGON.PG_PlayerController_Game.StopInteractionEvent
struct UPG_PlayerController_Game_StopInteractionEvent_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function POLYGON.PG_PlayerController_Game.StopInteraction_Client
struct UPG_PlayerController_Game_StopInteraction_Client_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function POLYGON.PG_PlayerController_Game.StartInteractionEvent
struct UPG_PlayerController_Game_StartInteractionEvent_Params
{
public:
	float                                        InteractionTime;                                   // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function POLYGON.PG_PlayerController_Game.StartInteraction_Client
struct UPG_PlayerController_Game_StartInteraction_Client_Params
{
public:
	float                                        InteractionTime;                                   // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function POLYGON.PG_PlayerController_Game.SetVisibleLoadingScreen
struct UPG_PlayerController_Game_SetVisibleLoadingScreen_Params
{
public:
	bool                                         IsVisible;                                         // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function POLYGON.PG_PlayerController_Game.RequestSpawnOnSquadMember_server
struct UPG_PlayerController_Game_RequestSpawnOnSquadMember_server_Params
{
public:
	class UPG_PlayerState_Game*                  SquadMember;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function POLYGON.PG_PlayerController_Game.RequestSpawnOnControlPoint_server
struct UPG_PlayerController_Game_RequestSpawnOnControlPoint_server_Params
{
public:
	enum class EControlPoint                     SpawnToControlPoint;                               // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function POLYGON.PG_PlayerController_Game.RequestSpawnOnBase_server
struct UPG_PlayerController_Game_RequestSpawnOnBase_server_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function POLYGON.PG_PlayerController_Game.OnRep_DeployIsAvailable
struct UPG_PlayerController_Game_OnRep_DeployIsAvailable_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function POLYGON.PG_PlayerController_Game.LoginPlayer_server
struct UPG_PlayerController_Game_LoginPlayer_server_Params
{
public:
	class FString                                PlayerMasterId;                                    // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function POLYGON.PG_PlayerController_Game.DisplayMessageToChatEvent
struct UPG_PlayerController_Game_DisplayMessageToChatEvent_Params
{
public:
	struct FGameChatMessage                      Message;                                           // 0x0(0x20)(Parm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function POLYGON.PG_PlayerState_Base.UpdatePlayerCombinedInfo
struct UPG_PlayerState_Base_UpdatePlayerCombinedInfo_Params
{
public:
	TArray<enum class EModifiedData>             ModifiedData;                                      // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                CustomDelegateString;                              // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function POLYGON.PG_PlayerState_Base.SetPlayerName
struct UPG_PlayerState_Base_SetPlayerName_Params
{
public:
	class FString                                PlayerName;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function POLYGON.PG_PlayerState_Base.GetUniqueNetId
struct UPG_PlayerState_Base_GetUniqueNetId_Params
{
public:
	struct FUniqueNetIdRepl                      ReturnValue;                                       // 0x0(0x30)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function POLYGON.PG_PlayerState_Game.SetTeam
struct UPG_PlayerState_Game_SetTeam_Params
{
public:
	enum class ETeam                             NewTeam;                                           // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function POLYGON.PG_PlayerState_Game.OnRep_VoteKickPlayers
struct UPG_PlayerState_Game_OnRep_VoteKickPlayers_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function POLYGON.PG_PlayerState_Game.OnRep_Team
struct UPG_PlayerState_Game_OnRep_Team_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function POLYGON.PG_PlayerState_Game.OnRep_NumberKills
struct UPG_PlayerState_Game_OnRep_NumberKills_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function POLYGON.PG_PlayerState_Game.OnRep_NumberDeaths
struct UPG_PlayerState_Game_OnRep_NumberDeaths_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function POLYGON.PG_PlayerState_Game.CustomIsInactive
struct UPG_PlayerState_Game_CustomIsInactive_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function POLYGON.PlayerCoreComponent.UpdatePlayerCombinedInfo
struct UPlayerCoreComponent_UpdatePlayerCombinedInfo_Params
{
public:
	TArray<enum class EModifiedData>             ModifiedData;                                      // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                CustomDelegateString;                              // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function POLYGON.PlayerCoreComponent.Reset
struct UPlayerCoreComponent_Reset_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function POLYGON.PlayerCoreComponent.OnRep_TotalProgress
struct UPlayerCoreComponent_OnRep_TotalProgress_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function POLYGON.PlayerCoreComponent.NotifyAddedGameScore_client
struct UPlayerCoreComponent_NotifyAddedGameScore_client_Params
{
public:
	TArray<struct FScoreInfo>                    ScoreInfos;                                        // 0x0(0x10)(ConstParm, Parm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function POLYGON.PlayerCoreComponent.GetNextLevelInfo
struct UPlayerCoreComponent_GetNextLevelInfo_Params
{
public:
	struct FLevelInfo                            ReturnValue;                                       // 0x0(0x48)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function POLYGON.PlayerCoreComponent.GetNextLevelByLevelID
struct UPlayerCoreComponent_GetNextLevelByLevelID_Params
{
public:
	class FName                                  LevelID;                                           // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLevelInfo                            ReturnValue;                                       // 0x8(0x48)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function POLYGON.PlayerCoreComponent.GetLevelByProgress
struct UPlayerCoreComponent_GetLevelByProgress_Params
{
public:
	int32                                        Progress;                                          // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2193[0x4];                                     // Fixing Size After Last Property 
	struct FLevelInfo                            ReturnValue;                                       // 0x8(0x48)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function POLYGON.PlayerCoreComponent.GetCurrentLevelInfo
struct UPlayerCoreComponent_GetCurrentLevelInfo_Params
{
public:
	struct FLevelInfo                            ReturnValue;                                       // 0x0(0x48)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function POLYGON.PlayerCoreComponent.AddCredits
struct UPlayerCoreComponent_AddCredits_Params
{
public:
	int32                                        AddCredits;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function POLYGON.ServerGameInstance.OnGSDKShutdown
struct UServerGameInstance_OnGSDKShutdown_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function POLYGON.ServerGameInstance.OnGSDKServerActive
struct UServerGameInstance_OnGSDKServerActive_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function POLYGON.ServerGameInstance.OnGSDKReadyForPlayers
struct UServerGameInstance_OnGSDKReadyForPlayers_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function POLYGON.ServerGameInstance.OnGSDKHealthCheck
struct UServerGameInstance_OnGSDKHealthCheck_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function POLYGON.SquadComponent.OnRep_Members
struct USquadComponent_OnRep_Members_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function POLYGON.SquadComponent.OnRep_CooldownCounter
struct USquadComponent_OnRep_CooldownCounter_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function POLYGON.SupportBox.OnCoverageEndOverlap
struct USupportBox_OnCoverageEndOverlap_Params
{
public:
	class UPrimitiveComponent*                   OverlappedComponent;                               // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                OtherActor;                                        // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   OtherComp;                                         // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OtherBodyIndex;                                    // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21BC[0x4];                                     // Fixing Size Of Struct
};

// 0x108 (0x108 - 0x0)
// Function POLYGON.SupportBox.OnCoverageBeginOverlap
struct USupportBox_OnCoverageBeginOverlap_Params
{
public:
	class UPrimitiveComponent*                   OverlappedComp;                                    // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                Other;                                             // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   OtherComp;                                         // 0x10(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OtherBodyIndex;                                    // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         FromSweep;                                         // 0x1C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21C6[0x3];                                     // Fixing Size After Last Property 
	struct FHitResult                            SweepResult;                                       // 0x20(0xE8)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function POLYGON.WeaponComponent.ToggleAiming_server
struct UWeaponComponent_ToggleAiming_server_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function POLYGON.WeaponComponent.SetWantsToAiming_server
struct UWeaponComponent_SetWantsToAiming_server_Params
{
public:
	bool                                         NewState;                                          // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function POLYGON.WeaponComponent.SetStrivingGunRecoilAlpha_Pitch
struct UWeaponComponent_SetStrivingGunRecoilAlpha_Pitch_Params
{
public:
	float                                        NewStrivingPitchRecoil;                            // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function POLYGON.WeaponComponent.SetGunRecoilIsActive_Backward
struct UWeaponComponent_SetGunRecoilIsActive_Backward_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function POLYGON.WeaponComponent.SetGunRecoilAlpha_Yaw
struct UWeaponComponent_SetGunRecoilAlpha_Yaw_Params
{
public:
	float                                        NewYawRecoil;                                      // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function POLYGON.WeaponComponent.SetGunRecoilAlpha_Roll
struct UWeaponComponent_SetGunRecoilAlpha_Roll_Params
{
public:
	float                                        NewRollRecoil;                                     // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function POLYGON.WeaponComponent.SelectGunSlot_server
struct UWeaponComponent_SelectGunSlot_server_Params
{
public:
	uint8                                        Slot;                                              // 0x0(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function POLYGON.WeaponComponent.OnSetSecondaryGun
struct UWeaponComponent_OnSetSecondaryGun_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function POLYGON.WeaponComponent.OnSetPrimaryGun
struct UWeaponComponent_OnSetPrimaryGun_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function POLYGON.WeaponComponent.OnSetPlayerState
struct UWeaponComponent_OnSetPlayerState_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function POLYGON.WeaponComponent.OnSetCurrentGun
struct UWeaponComponent_OnSetCurrentGun_Params
{
public:
	class UItem_Gun_General*                     OldCurrentGun;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function POLYGON.WeaponComponent.OnRep_IsAiming
struct UWeaponComponent_OnRep_IsAiming_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function POLYGON.WeaponComponent.NotifyServerThrowGrenade
struct UWeaponComponent_NotifyServerThrowGrenade_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function POLYGON.WeaponComponent.IsWantsToAiming
struct UWeaponComponent_IsWantsToAiming_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function POLYGON.WeaponComponent.IsAiming
struct UWeaponComponent_IsAiming_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function POLYGON.WeaponComponent.GetIsShooting
struct UWeaponComponent_GetIsShooting_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function POLYGON.WeaponComponent.GetGunRecoilAlpha_Yaw
struct UWeaponComponent_GetGunRecoilAlpha_Yaw_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function POLYGON.WeaponComponent.GetGunRecoilAlpha_Roll
struct UWeaponComponent_GetGunRecoilAlpha_Roll_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function POLYGON.WeaponComponent.GetGunRecoilAlpha_Pitch
struct UWeaponComponent_GetGunRecoilAlpha_Pitch_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function POLYGON.WeaponComponent.GetGunRecoilAlpha_Backward
struct UWeaponComponent_GetGunRecoilAlpha_Backward_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function POLYGON.WeaponComponent.GetCurrentGun
struct UWeaponComponent_GetCurrentGun_Params
{
public:
	class UItem_Gun_General*                     ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


