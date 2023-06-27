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
// Function ComputeFramework.ComputeGraphComponent.QueueExecute
struct UComputeGraphComponent_QueueExecute_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ComputeFramework.ComputeGraphComponent.DestroyDataProviders
struct UComputeGraphComponent_DestroyDataProviders_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function ComputeFramework.ComputeGraphComponent.CreateDataProviders
struct UComputeGraphComponent_CreateDataProviders_Params
{
public:
	int32                                        InBindingIndex;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1E6B[0x4];                                     // Fixing Size After Last Property..
	class UObject*                               InBindingObject;                                   // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
