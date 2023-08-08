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

// 0x30 (0x30 - 0x0)
// Function StormCaller.StormCallerComponent.UpdatePoiSavedOptions
struct UStormCallerComponent_UpdatePoiSavedOptions_Params
{
public:
	TArray<class FString>                        InOutPoiSavedOptionKeys;                           // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<class FText>                          InOutPoiSavedOptionNames;                          // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	class UPlaylistUserOptions*                  UserOptions;                                       // 0x20(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          GameplayTagForPOI;                                 // 0x28(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_44DB[0x4];                                     // Fixing Size Of Struct
};

// 0x0 (0x0 - 0x0)
// Function StormCaller.StormCallerComponent.SpawnInitialSafeZone
struct UStormCallerComponent_SpawnInitialSafeZone_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function StormCaller.StormCallerComponent.GetSafeZoneLocationBlockList
struct UStormCallerComponent_GetSafeZoneLocationBlockList_Params
{
public:
	TArray<struct FVector4>                      ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function StormCaller.StormCallerComponent.GetRandomPoiVolume
struct UStormCallerComponent_GetRandomPoiVolume_Params
{
public:
	class UFortPoiVolume*                        ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function StormCaller.StormCallerComponent.GetPoiVolumeFromOptionIndex
struct UStormCallerComponent_GetPoiVolumeFromOptionIndex_Params
{
public:
	int32                                        OptionIndex;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_44EA[0x4];                                     // Fixing Size After Last Property
	class UFortPoiVolume*                        ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function StormCaller.StormCallerComponent.ApplySavedPoiOptions
struct UStormCallerComponent_ApplySavedPoiOptions_Params
{
public:
	TArray<class FString>                        PoiSavedOptionKeys;                                // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<class FText>                          PoiSavedOptionName;                                // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	class UFortActorOptionsComponent*            ToyOptionsComponent;                               // 0x20(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function StormCaller.StormCallerComponent.ApplyPOINamesToDataRegistry
struct UStormCallerComponent_ApplyPOINamesToDataRegistry_Params
{
public:
	class UPlaylistUserOptions*                  UserOptions;                                       // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          GameplayTagForPOI;                                 // 0x8(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4505[0x4];                                     // Fixing Size After Last Property
	class FText                                  MapCenterText;                                     // 0x10(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  RandomText;                                        // 0x28(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class FText                                  BeaconText;                                        // 0x40(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
