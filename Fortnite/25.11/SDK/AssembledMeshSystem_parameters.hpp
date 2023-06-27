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

// 0x18 (0x18 - 0x0)
// Function AssembledMeshSystem.AssembledMeshCoordinatorComponent.OnPlayerStatePawnSet
struct UAssembledMeshCoordinatorComponent_OnPlayerStatePawnSet_Params
{
public:
	class APlayerState*                          Player;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APawn*                                 NewPawn;                                           // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class APawn*                                 OldPawn;                                           // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function AssembledMeshSystem.AssembledMeshUserComponent.OnRep_MeshParts
struct UAssembledMeshUserComponent_OnRep_MeshParts_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function AssembledMeshSystem.AssembledMeshUserComponent.GetAttachToComponent
struct UAssembledMeshUserComponent_GetAttachToComponent_Params
{
public:
	class USkeletalMeshComponent*                ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AssembledMeshSystem.AssembledMeshUserComponent.CustomizationCompleted
struct UAssembledMeshUserComponent_CustomizationCompleted_Params
{
public:
	int32                                        PartIndex;                                         // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
