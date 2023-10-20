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

// 0x20 (0x20 - 0x0)
// Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementProgress
struct UAchievementBlueprintLibrary_GetCachedAchievementProgress_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayerController*                     PlayerController;                                  // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  AchievementId;                                     // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFoundID;                                          // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7DA[0x3];                                      // Fixing Size After Last Property 
	float                                        Progress;                                          // 0x1C(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function OnlineSubsystemUtils.AchievementBlueprintLibrary.GetCachedAchievementDescription
struct UAchievementBlueprintLibrary_GetCachedAchievementDescription_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayerController*                     PlayerController;                                  // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  AchievementId;                                     // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bFoundID;                                          // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7E5[0x7];                                      // Fixing Size After Last Property 
	class FText                                  Title;                                             // 0x20(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
	class FText                                  LockedDescription;                                 // 0x38(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
	class FText                                  UnlockedDescription;                               // 0x50(0x18)(Parm, OutParm, NativeAccessSpecifierPublic)
	bool                                         bHidden;                                           // 0x68(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7E7[0x7];                                      // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievements
struct UAchievementQueryCallbackProxy_CacheAchievements_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayerController*                     PlayerController;                                  // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAchievementQueryCallbackProxy*        ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function OnlineSubsystemUtils.AchievementQueryCallbackProxy.CacheAchievementDescriptions
struct UAchievementQueryCallbackProxy_CacheAchievementDescriptions_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayerController*                     PlayerController;                                  // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAchievementQueryCallbackProxy*        ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function OnlineSubsystemUtils.AchievementWriteCallbackProxy.WriteAchievementProgress
struct UAchievementWriteCallbackProxy_WriteAchievementProgress_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayerController*                     PlayerController;                                  // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  AchievementName;                                   // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Progress;                                          // 0x18(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UserTag;                                           // 0x1C(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAchievementWriteCallbackProxy*        ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function OnlineSubsystemUtils.ConnectionCallbackProxy.ConnectToService
struct UConnectionCallbackProxy_ConnectToService_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayerController*                     PlayerController;                                  // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UConnectionCallbackProxy*              ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function OnlineSubsystemUtils.CreateSessionCallbackProxy.CreateSession
struct UCreateSessionCallbackProxy_CreateSession_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayerController*                     PlayerController;                                  // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PublicConnections;                                 // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseLAN;                                           // 0x14(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_822[0x3];                                      // Fixing Size After Last Property 
	class UCreateSessionCallbackProxy*           ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function OnlineSubsystemUtils.DestroySessionCallbackProxy.DestroySession
struct UDestroySessionCallbackProxy_DestroySession_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayerController*                     PlayerController;                                  // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDestroySessionCallbackProxy*          ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function OnlineSubsystemUtils.EndMatchCallbackProxy.EndMatch
struct UEndMatchCallbackProxy_EndMatch_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayerController*                     PlayerController;                                  // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TScriptInterface<class UTurnBasedMatchInterface> MatchActor;                                        // 0x10(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MatchID;                                           // 0x20(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMPMatchOutcome                   LocalPlayerOutcome;                                // 0x30(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMPMatchOutcome                   OtherPlayersOutcome;                               // 0x31(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_83D[0x6];                                      // Fixing Size After Last Property 
	class UEndMatchCallbackProxy*                ReturnValue;                                       // 0x38(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function OnlineSubsystemUtils.EndTurnCallbackProxy.EndTurn
struct UEndTurnCallbackProxy_EndTurn_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayerController*                     PlayerController;                                  // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MatchID;                                           // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TScriptInterface<class UTurnBasedMatchInterface> TurnBasedMatchInterface;                           // 0x20(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UEndTurnCallbackProxy*                 ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x130 (0x130 - 0x0)
// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetServerName
struct UFindSessionsCallbackProxy_GetServerName_Params
{
public:
	struct FBlueprintSessionResult               Result;                                            // 0x0(0x120)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x120(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x128 (0x128 - 0x0)
// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetPingInMs
struct UFindSessionsCallbackProxy_GetPingInMs_Params
{
public:
	struct FBlueprintSessionResult               Result;                                            // 0x0(0x120)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x120(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_85B[0x4];                                      // Fixing Size Of Struct
};

// 0x128 (0x128 - 0x0)
// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetMaxPlayers
struct UFindSessionsCallbackProxy_GetMaxPlayers_Params
{
public:
	struct FBlueprintSessionResult               Result;                                            // 0x0(0x120)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x120(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_860[0x4];                                      // Fixing Size Of Struct
};

// 0x128 (0x128 - 0x0)
// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.GetCurrentPlayers
struct UFindSessionsCallbackProxy_GetCurrentPlayers_Params
{
public:
	struct FBlueprintSessionResult               Result;                                            // 0x0(0x120)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x120(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_867[0x4];                                      // Fixing Size Of Struct
};

// 0x20 (0x20 - 0x0)
// Function OnlineSubsystemUtils.FindSessionsCallbackProxy.FindSessions
struct UFindSessionsCallbackProxy_FindSessions_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayerController*                     PlayerController;                                  // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxResults;                                        // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseLAN;                                           // 0x14(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_874[0x3];                                      // Fixing Size After Last Property 
	class UFindSessionsCallbackProxy*            ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function OnlineSubsystemUtils.FindTurnBasedMatchCallbackProxy.FindTurnBasedMatch
struct UFindTurnBasedMatchCallbackProxy_FindTurnBasedMatch_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayerController*                     PlayerController;                                  // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TScriptInterface<class UTurnBasedMatchInterface> MatchActor;                                        // 0x10(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinPlayers;                                        // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxPlayers;                                        // 0x24(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PlayerGroup;                                       // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ShowExistingMatches;                               // 0x2C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_87C[0x3];                                      // Fixing Size After Last Property 
	class UFindTurnBasedMatchCallbackProxy*      ReturnValue;                                       // 0x30(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseUnprocessedPurchases
struct UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchaseUnprocessedPurchases_Params
{
public:
	class UPlayerController*                     PlayerController;                                  // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInAppPurchaseCallbackProxy2*          ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchaseQueryOwned
struct UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchaseQueryOwned_Params
{
public:
	class UPlayerController*                     PlayerController;                                  // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInAppPurchaseCallbackProxy2*          ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function OnlineSubsystemUtils.InAppPurchaseCallbackProxy2.CreateProxyObjectForInAppPurchase
struct UInAppPurchaseCallbackProxy2_CreateProxyObjectForInAppPurchase_Params
{
public:
	class UPlayerController*                     PlayerController;                                  // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FInAppPurchaseProductRequest2         ProductRequest;                                    // 0x8(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UInAppPurchaseCallbackProxy2*          ReturnValue;                                       // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function OnlineSubsystemUtils.InAppPurchaseQueryCallbackProxy2.CreateProxyObjectForInAppPurchaseQuery
struct UInAppPurchaseQueryCallbackProxy2_CreateProxyObjectForInAppPurchaseQuery_Params
{
public:
	class UPlayerController*                     PlayerController;                                  // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        ProductIdentifiers;                                // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	class UInAppPurchaseQueryCallbackProxy2*     ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function OnlineSubsystemUtils.InAppPurchaseRestoreCallbackProxy2.CreateProxyObjectForInAppPurchaseRestore
struct UInAppPurchaseRestoreCallbackProxy2_CreateProxyObjectForInAppPurchaseRestore_Params
{
public:
	TArray<struct FInAppPurchaseProductRequest2> ConsumableProductFlags;                            // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	class UPlayerController*                     PlayerController;                                  // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UInAppPurchaseRestoreCallbackProxy2*   ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x138 (0x138 - 0x0)
// Function OnlineSubsystemUtils.JoinSessionCallbackProxy.JoinSession
struct UJoinSessionCallbackProxy_JoinSession_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayerController*                     PlayerController;                                  // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBlueprintSessionResult               SearchResult;                                      // 0x10(0x120)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UJoinSessionCallbackProxy*             ReturnValue;                                       // 0x130(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function OnlineSubsystemUtils.LeaderboardBlueprintLibrary.WriteLeaderboardInteger
struct ULeaderboardBlueprintLibrary_WriteLeaderboardInteger_Params
{
public:
	class UPlayerController*                     PlayerController;                                  // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  StatName;                                          // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        StatValue;                                         // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x14(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8BC[0x3];                                      // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function OnlineSubsystemUtils.LeaderboardFlushCallbackProxy.CreateProxyObjectForFlush
struct ULeaderboardFlushCallbackProxy_CreateProxyObjectForFlush_Params
{
public:
	class UPlayerController*                     PlayerController;                                  // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SessionName;                                       // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULeaderboardFlushCallbackProxy*        ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function OnlineSubsystemUtils.LeaderboardQueryCallbackProxy.CreateProxyObjectForIntQuery
struct ULeaderboardQueryCallbackProxy_CreateProxyObjectForIntQuery_Params
{
public:
	class UPlayerController*                     PlayerController;                                  // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  StatName;                                          // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULeaderboardQueryCallbackProxy*        ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function OnlineSubsystemUtils.LogoutCallbackProxy.Logout
struct ULogoutCallbackProxy_Logout_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayerController*                     PlayerController;                                  // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ULogoutCallbackProxy*                  ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function OnlineSubsystemUtils.OnlineBeaconClient.ClientOnConnected
struct UOnlineBeaconClient_ClientOnConnected_Params
{
public:
};

// 0x68 (0x68 - 0x0)
// Function OnlineSubsystemUtils.PartyBeaconClient.ServerUpdateReservationRequest
struct UPartyBeaconClient_ServerUpdateReservationRequest_Params
{
public:
	class FString                                SessionId;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPartyReservation                     ReservationUpdate;                                 // 0x10(0x58)(ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function OnlineSubsystemUtils.PartyBeaconClient.ServerReservationRequest
struct UPartyBeaconClient_ServerReservationRequest_Params
{
public:
	class FString                                SessionId;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPartyReservation                     Reservation;                                       // 0x10(0x58)(ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function OnlineSubsystemUtils.PartyBeaconClient.ServerRemoveMemberFromReservationRequest
struct UPartyBeaconClient_ServerRemoveMemberFromReservationRequest_Params
{
public:
	class FString                                SessionId;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPartyReservation                     ReservationUpdate;                                 // 0x10(0x58)(ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function OnlineSubsystemUtils.PartyBeaconClient.ServerCancelReservationRequest
struct UPartyBeaconClient_ServerCancelReservationRequest_Params
{
public:
	struct FUniqueNetIdRepl                      PartyLeader;                                       // 0x0(0x30)(ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function OnlineSubsystemUtils.PartyBeaconClient.ServerAddOrUpdateReservationRequest
struct UPartyBeaconClient_ServerAddOrUpdateReservationRequest_Params
{
public:
	class FString                                SessionId;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FPartyReservation                     Reservation;                                       // 0x10(0x58)(ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationUpdates
struct UPartyBeaconClient_ClientSendReservationUpdates_Params
{
public:
	int32                                        NumRemainingReservations;                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function OnlineSubsystemUtils.PartyBeaconClient.ClientSendReservationFull
struct UPartyBeaconClient_ClientSendReservationFull_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function OnlineSubsystemUtils.PartyBeaconClient.ClientReservationResponse
struct UPartyBeaconClient_ClientReservationResponse_Params
{
public:
	enum class EPartyReservationResult           ReservationResponse;                               // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function OnlineSubsystemUtils.PartyBeaconClient.ClientCancelReservationResponse
struct UPartyBeaconClient_ClientCancelReservationResponse_Params
{
public:
	enum class EPartyReservationResult           ReservationResponse;                               // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function OnlineSubsystemUtils.QuitMatchCallbackProxy.QuitMatch
struct UQuitMatchCallbackProxy_QuitMatch_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayerController*                     PlayerController;                                  // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MatchID;                                           // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMPMatchOutcome                   Outcome;                                           // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_943[0x3];                                      // Fixing Size After Last Property 
	int32                                        TurnTimeoutInSeconds;                              // 0x24(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UQuitMatchCallbackProxy*               ReturnValue;                                       // 0x28(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function OnlineSubsystemUtils.ShowLoginUICallbackProxy.ShowExternalLoginUI
struct UShowLoginUICallbackProxy_ShowExternalLoginUI_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayerController*                     InPlayerController;                                // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UShowLoginUICallbackProxy*             ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerReservationRequest
struct USpectatorBeaconClient_ServerReservationRequest_Params
{
public:
	class FString                                SessionId;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSpectatorReservation                 Reservation;                                       // 0x10(0x88)(ConstParm, Parm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function OnlineSubsystemUtils.SpectatorBeaconClient.ServerCancelReservationRequest
struct USpectatorBeaconClient_ServerCancelReservationRequest_Params
{
public:
	struct FUniqueNetIdRepl                      Spectator;                                         // 0x0(0x30)(ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationUpdates
struct USpectatorBeaconClient_ClientSendReservationUpdates_Params
{
public:
	int32                                        NumRemainingReservations;                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientSendReservationFull
struct USpectatorBeaconClient_ClientSendReservationFull_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientReservationResponse
struct USpectatorBeaconClient_ClientReservationResponse_Params
{
public:
	enum class ESpectatorReservationResult       ReservationResponse;                               // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function OnlineSubsystemUtils.SpectatorBeaconClient.ClientCancelReservationResponse
struct USpectatorBeaconClient_ClientCancelReservationResponse_Params
{
public:
	enum class ESpectatorReservationResult       ReservationResponse;                               // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function OnlineSubsystemUtils.TestBeaconClient.ServerPong
struct UTestBeaconClient_ServerPong_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function OnlineSubsystemUtils.TestBeaconClient.ClientPing
struct UTestBeaconClient_ClientPing_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.RegisterTurnBasedMatchInterfaceObject
struct UTurnBasedBlueprintLibrary_RegisterTurnBasedMatchInterfaceObject_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayerController*                     PlayerController;                                  // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               Object;                                            // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetPlayerDisplayName
struct UTurnBasedBlueprintLibrary_GetPlayerDisplayName_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayerController*                     PlayerController;                                  // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MatchID;                                           // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PlayerIndex;                                       // 0x20(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_991[0x4];                                      // Fixing Size After Last Property 
	class FString                                PlayerDisplayName;                                 // 0x28(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetMyPlayerIndex
struct UTurnBasedBlueprintLibrary_GetMyPlayerIndex_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayerController*                     PlayerController;                                  // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MatchID;                                           // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PlayerIndex;                                       // 0x20(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_998[0x4];                                      // Fixing Size Of Struct
};

// 0x28 (0x28 - 0x0)
// Function OnlineSubsystemUtils.TurnBasedBlueprintLibrary.GetIsMyTurn
struct UTurnBasedBlueprintLibrary_GetIsMyTurn_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayerController*                     PlayerController;                                  // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MatchID;                                           // 0x10(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsMyTurn;                                         // 0x20(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_99F[0x7];                                      // Fixing Size Of Struct
};

// 0x1 (0x1 - 0x0)
// Function OnlineSubsystemUtils.VoipListenerSynthComponent.IsIdling
struct UVoipListenerSynthComponent_IsIdling_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


