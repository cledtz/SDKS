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

// 0x8 (0x8 - 0x0)
// Function VolumetricRegion.VolumetricRegionNativeComponent.RefreshTrackedActors
struct UVolumetricRegionNativeComponent_RefreshTrackedActors_Params
{
public:
	class UPlayspaceComponent_SpatialActorTracker* InPlaySpaceComponent_SpatialActorTracker;          // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
