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

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
