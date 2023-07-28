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
// Function VictoryCrownsRuntime.FortVictoryCrownViewModel.HandleOnHasWonRoyalRoyale
struct UFortVictoryCrownViewModel_HandleOnHasWonRoyalRoyale_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VictoryCrownsRuntime.FortVictoryCrownViewModel.HandleOnHasWonCrownInMatch
struct UFortVictoryCrownViewModel_HandleOnHasWonCrownInMatch_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.OnRep_WonRoyalRoyale
struct UFortControllerComponent_VictoryCrowns_OnRep_WonRoyalRoyale_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.OnRep_WonCrownInMatch
struct UFortControllerComponent_VictoryCrowns_OnRep_WonCrownInMatch_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.OnRep_VictoryCrownAccountData
struct UFortControllerComponent_VictoryCrowns_OnRep_VictoryCrownAccountData_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.OnAthenaProfileInitialized
struct UFortControllerComponent_VictoryCrowns_OnAthenaProfileInitialized_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.IsCrownInPlayerInventory
struct UFortControllerComponent_VictoryCrowns_IsCrownInPlayerInventory_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.HasWonRoyalRoyale
struct UFortControllerComponent_VictoryCrowns_HasWonRoyalRoyale_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.HasWonCrownInMatch
struct UFortControllerComponent_VictoryCrowns_HasWonCrownInMatch_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.HandlePawnChanged
struct UFortControllerComponent_VictoryCrowns_HandlePawnChanged_Params
{
public:
	class UPawn*                                 OldPawn;                                           // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPawn*                                 NewPawn;                                           // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.HandleExitAircraft
struct UFortControllerComponent_VictoryCrowns_HandleExitAircraft_Params
{
public:
	class UController*                           ExitingController;                                 // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.HandleEnterAircraft
struct UFortControllerComponent_VictoryCrowns_HandleEnterAircraft_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.GetVictoryCrownsBestowedCount
struct UFortControllerComponent_VictoryCrowns_GetVictoryCrownsBestowedCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.GetRoyalRoyaleAchievedCount
struct UFortControllerComponent_VictoryCrowns_GetRoyalRoyaleAchievedCount_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.GetCrownInPlayerInventory
struct UFortControllerComponent_VictoryCrowns_GetCrownInPlayerInventory_Params
{
public:
	class UFortWorldItem*                        ReturnValue;                                       // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.DebugForceSetRoyalRoyaleAchievedCount
struct UFortControllerComponent_VictoryCrowns_DebugForceSetRoyalRoyaleAchievedCount_Params
{
public:
	int32                                        NewRoyalRoyaleCount;                               // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.CacheAccountItemData
struct UFortControllerComponent_VictoryCrowns_CacheAccountItemData_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.AuthoritySquadHasSeenCrownItem
struct UFortControllerComponent_VictoryCrowns_AuthoritySquadHasSeenCrownItem_Params
{
public:
	class UFortItem*                             CrownItem;                                         // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDropped;                                          // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8503[0x6];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.AuthorityHasSquadHeldCrownItem
struct UFortControllerComponent_VictoryCrowns_AuthorityHasSquadHeldCrownItem_Params
{
public:
	class UFortItem*                             CrownItem;                                         // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8504[0x7];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.AuthorityHasSquadDroppedCrownItem
struct UFortControllerComponent_VictoryCrowns_AuthorityHasSquadDroppedCrownItem_Params
{
public:
	class UFortItem*                             CrownItem;                                         // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8505[0x7];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.AuthorityHasHeldCrownItem
struct UFortControllerComponent_VictoryCrowns_AuthorityHasHeldCrownItem_Params
{
public:
	class UFortItem*                             CrownItem;                                         // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8506[0x7];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function VictoryCrownsRuntime.FortControllerComponent_VictoryCrowns.AuthorityHasDroppedCrownItem
struct UFortControllerComponent_VictoryCrowns_AuthorityHasDroppedCrownItem_Params
{
public:
	class UFortItem*                             CrownItem;                                         // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8507[0x7];                                     // Fixing Size Of Struct..
};

// 0x0 (0x0 - 0x0)
// Function VictoryCrownsRuntime.FortGameStateComponent_VictoryCrowns.OnRep_CrownBearerPlayerStates
struct UFortGameStateComponent_VictoryCrowns_OnRep_CrownBearerPlayerStates_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function VictoryCrownsRuntime.FortGameStateComponent_VictoryCrowns.IsCrownBearer
struct UFortGameStateComponent_VictoryCrowns_IsCrownBearer_Params
{
public:
	class UFortPlayerStateAthena*                FortPSA;                                           // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_850C[0x7];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function VictoryCrownsRuntime.FortGameStateComponent_VictoryCrowns.HandleCrownStatusChanged
struct UFortGameStateComponent_VictoryCrowns_HandleCrownStatusChanged_Params
{
public:
	class UFortPlayerControllerAthena*           FortPlayerControllerAthena;                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortItem*                             CrownItem;                                         // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function VictoryCrownsRuntime.FortGameStateComponent_VictoryCrowns.ClientKillFeedMessage
struct UFortGameStateComponent_VictoryCrowns_ClientKillFeedMessage_Params
{
public:
	class UFortPlayerStateAthena*                FortPSA;                                           // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAdded;                                            // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_850D[0x7];                                     // Fixing Size Of Struct..
};

// 0x0 (0x0 - 0x0)
// Function VictoryCrownsRuntime.FortPawnComponent_VictoryCrownsFrontEnd.PlaylistChanged
struct UFortPawnComponent_VictoryCrownsFrontEnd_PlaylistChanged_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function VictoryCrownsRuntime.FortPlayerStateComponent_VictoryCrowns.GetWonRoyalRoyale
struct UFortPlayerStateComponent_VictoryCrowns_GetWonRoyalRoyale_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
