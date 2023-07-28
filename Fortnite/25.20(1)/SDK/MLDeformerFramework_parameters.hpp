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
// Function MLDeformerFramework.MLDeformerComponent.UpdateSkeletalMeshComponent
struct UMLDeformerComponent_UpdateSkeletalMeshComponent_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function MLDeformerFramework.MLDeformerComponent.SetWeight
struct UMLDeformerComponent_SetWeight_Params
{
public:
	float                                        NormalizedWeightValue;                             // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function MLDeformerFramework.MLDeformerComponent.SetQualityLevel
struct UMLDeformerComponent_SetQualityLevel_Params
{
public:
	int32                                        InQualityLevel;                                    // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MLDeformerFramework.MLDeformerComponent.SetDeformerAsset
struct UMLDeformerComponent_SetDeformerAsset_Params
{
public:
	class UMLDeformerAsset*                      InDeformerAsset;                                   // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function MLDeformerFramework.MLDeformerComponent.GetWeight
struct UMLDeformerComponent_GetWeight_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MLDeformerFramework.MLDeformerComponent.GetSkeletalMeshComponent
struct UMLDeformerComponent_GetSkeletalMeshComponent_Params
{
public:
	class USkeletalMeshComponent*                ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function MLDeformerFramework.MLDeformerComponent.GetQualityLevel
struct UMLDeformerComponent_GetQualityLevel_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MLDeformerFramework.MLDeformerComponent.GetDeformerAsset
struct UMLDeformerComponent_GetDeformerAsset_Params
{
public:
	class UMLDeformerAsset*                      ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MLDeformerFramework.MLDeformerComponent.FindSkeletalMeshComponent
struct UMLDeformerComponent_FindSkeletalMeshComponent_Params
{
public:
	class UMLDeformerAsset*                      Asset;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USkeletalMeshComponent*                ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MLDeformerFramework.MLDeformerMorphModel.SetMorphTargetsMaxWeights
struct UMLDeformerMorphModel_SetMorphTargetsMaxWeights_Params
{
public:
	TArray<float>                                MaxWeights;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function MLDeformerFramework.MLDeformerMorphModel.SetMorphTargetsErrorOrder
struct UMLDeformerMorphModel_SetMorphTargetsErrorOrder_Params
{
public:
	TArray<int32>                                MorphTargetOrder;                                  // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<float>                                ErrorValues;                                       // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MLDeformerFramework.MLDeformerMorphModel.SetMorphTargetDeltas
struct UMLDeformerMorphModel_SetMorphTargetDeltas_Params
{
public:
	TArray<struct FVector3f>                     Deltas;                                            // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MLDeformerFramework.MLDeformerMorphModel.SetMorphTargetDeltaFloats
struct UMLDeformerMorphModel_SetMorphTargetDeltaFloats_Params
{
public:
	TArray<float>                                Deltas;                                            // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
