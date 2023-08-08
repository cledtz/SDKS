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

// 0x8 (0x8 - 0x0)
// Function Campfire_Interface.Campfire_Interface_C.GetWoodComponent
struct UCampfire_Interface_C_GetWoodComponent_Params
{
public:
	class UStaticMeshComponent*                  WoodComponent;                                     // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Campfire_Interface.Campfire_Interface_C.IsStoked
struct UCampfire_Interface_C_IsStoked_Params
{
public:
	bool                                         IsStoked;                                          // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function Campfire_Interface.Campfire_Interface_C.GetLocationToSpawnFireVFX
struct UCampfire_Interface_C_GetLocationToSpawnFireVFX_Params
{
public:
	struct FVector                               WorldLocation;                                     // 0x0(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
