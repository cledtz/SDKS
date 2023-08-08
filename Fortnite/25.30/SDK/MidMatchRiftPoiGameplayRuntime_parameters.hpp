#pragma once

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

// 0x18 (0x18 - 0x0)
// Function MidMatchRiftPoiGameplayRuntime.MidmatchRiftPoiCheatManager.SpawnMidmatchPoiNearestLocation
struct UMidmatchRiftPoiCheatManager_SpawnMidmatchPoiNearestLocation_Params
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function MidMatchRiftPoiGameplayRuntime.MidmatchRiftPoiCheatManager.SpawnMidmatchPoiFurthestLocation
struct UMidmatchRiftPoiCheatManager_SpawnMidmatchPoiFurthestLocation_Params
{
public:
	struct FVector                               Location;                                          // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function MidMatchRiftPoiGameplayRuntime.MidmatchRiftPoiCheatManager.MidmatchRiftPoiSpawnNearestToPawnLocation
struct UMidmatchRiftPoiCheatManager_MidmatchRiftPoiSpawnNearestToPawnLocation_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function MidMatchRiftPoiGameplayRuntime.MidmatchRiftPoiCheatManager.MidmatchRiftPoiSpawnFurthestFromPawnLocation
struct UMidmatchRiftPoiCheatManager_MidmatchRiftPoiSpawnFurthestFromPawnLocation_Params
{
public:
};

// 0xC0 (0xC0 - 0x0)
// Function MidMatchRiftPoiGameplayRuntime.MidMatchRiftPoiManagerActor.SetDynamicLandBrush
struct UMidMatchRiftPoiManagerActor_SetDynamicLandBrush_Params
{
public:
	struct FSlateBrush                           LandIcon;                                          // 0x0(0xC0)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function MidMatchRiftPoiGameplayRuntime.MidmatchRiftPoiSpawnIndicator.TeleportVehicleActor
struct UMidmatchRiftPoiSpawnIndicator_TeleportVehicleActor_Params
{
public:
	class UActor*                                VehicleActor;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TeleportLocation;                                  // 0x8(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function MidMatchRiftPoiGameplayRuntime.MidmatchRiftPoiSpawnIndicator.IsActorInDataLayerInstance
struct UMidmatchRiftPoiSpawnIndicator_IsActorInDataLayerInstance_Params
{
public:
	class UActor*                                Actor;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UDataLayerInstance*                    DataLayerInstance;                                 // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4F45[0x7];                                     // Fixing Size Of Struct
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
