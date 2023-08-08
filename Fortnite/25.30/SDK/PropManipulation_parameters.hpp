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
// Function PropManipulation.PropManipulationNativeComponent.SetControlledObjectsVisibilityAndCollision
struct UPropManipulationNativeComponent_SetControlledObjectsVisibilityAndCollision_Params
{
public:
	TArray<class UBuildingSMActor*>              InObjectsOfControl;                                // 0x0(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         InNewVisibility;                                   // 0x10(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4D84[0x7];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function PropManipulation.PropManipulationNativeComponent.RefreshTrackedActors
struct UPropManipulationNativeComponent_RefreshTrackedActors_Params
{
public:
	class UPlayspaceComponent_SpatialActorTracker* InPlaySpaceComponent_SpatialActorTracker;          // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
