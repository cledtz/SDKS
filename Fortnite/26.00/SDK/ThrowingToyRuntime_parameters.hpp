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
// Function ThrowingToyRuntime.ThrowingToyTrackerComponent.SetRecentThrowingToyItemRemovedReason
struct UThrowingToyTrackerComponent_SetRecentThrowingToyItemRemovedReason_Params
{
public:
	enum class EThrowingToyItemRemovedReason     RemovedReason;                                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ThrowingToyRuntime.ThrowingToyTrackerComponent.GetThrowingToy
struct UThrowingToyTrackerComponent_GetThrowingToy_Params
{
public:
	struct FGuid                                 WorldItemGuid;                                     // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function ThrowingToyRuntime.ThrowingToyTrackerComponent.GetRecentThrowingToyItemRemovedReason
struct UThrowingToyTrackerComponent_GetRecentThrowingToyItemRemovedReason_Params
{
public:
	enum class EThrowingToyItemRemovedReason     ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ThrowingToyRuntime.ThrowingToyTrackerComponent.GetAndReleaseThrowingToy
struct UThrowingToyTrackerComponent_GetAndReleaseThrowingToy_Params
{
public:
	struct FGuid                                 WorldItemGuid;                                     // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ThrowingToyRuntime.ThrowingToyTrackerComponent.AddThrowingToy
struct UThrowingToyTrackerComponent_AddThrowingToy_Params
{
public:
	class UActor*                                ThrowingToyActor;                                  // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 WorldItemGuid;                                     // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


