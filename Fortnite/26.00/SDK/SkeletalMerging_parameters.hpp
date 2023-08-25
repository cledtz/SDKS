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

// 0x20 (0x20 - 0x0)
// Function SkeletalMerging.SkeletalMergingLibrary.MergeSkeletons
struct USkeletalMergingLibrary_MergeSkeletons_Params
{
public:
	struct FSkeletonMergeParams                  Params;                                            // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class USkeleton*                             ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function SkeletalMerging.SkeletalMergingLibrary.MergeMeshes
struct USkeletalMergingLibrary_MergeMeshes_Params
{
public:
	struct FSkeletalMeshMergeParams              Params;                                            // 0x0(0x40)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class USkeletalMesh*                         ReturnValue;                                       // 0x40(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


