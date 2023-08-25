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

// 0x4 (0x4 - 0x0)
// Function ChaosCaching.ChaosCacheManager.TriggerComponentByCache
struct UChaosCacheManager_TriggerComponentByCache_Params
{
public:
	class FName                                  InCacheName;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChaosCaching.ChaosCacheManager.TriggerComponent
struct UChaosCacheManager_TriggerComponent_Params
{
public:
	class UPrimitiveComponent*                   InComponent;                                       // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function ChaosCaching.ChaosCacheManager.TriggerAll
struct UChaosCacheManager_TriggerAll_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function ChaosCaching.ChaosCacheManager.SetStartTime
struct UChaosCacheManager_SetStartTime_Params
{
public:
	float                                        InStartTime;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ChaosCaching.ChaosCacheManager.SetCacheCollection
struct UChaosCacheManager_SetCacheCollection_Params
{
public:
	class UChaosCacheCollection*                 InCacheCollection;                                 // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ChaosCaching.ChaosCacheManager.ResetSingleTransform
struct UChaosCacheManager_ResetSingleTransform_Params
{
public:
	int32                                        InIndex;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function ChaosCaching.ChaosCacheManager.ResetAllComponentTransforms
struct UChaosCacheManager_ResetAllComponentTransforms_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function ChaosCaching.ChaosCacheManager.EnablePlaybackByCache
struct UChaosCacheManager_EnablePlaybackByCache_Params
{
public:
	class FName                                  InCacheName;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnable;                                           // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5139[0x3];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function ChaosCaching.ChaosCacheManager.EnablePlayback
struct UChaosCacheManager_EnablePlayback_Params
{
public:
	int32                                        Index;                                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnable;                                           // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5142[0x3];                                     // Fixing Size Of Struct
};

}
}


