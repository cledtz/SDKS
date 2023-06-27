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

// 0x20 (0x20 - 0x0)
// Function NearestNeighborModel.NearestNeighborNetworkLayer.AddParameter
struct UNearestNeighborNetworkLayer_AddParameter_Params
{
public:
	TArray<float>                                Values;                                            // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<int32>                                Shape;                                             // 0x10(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function NearestNeighborModel.NearestNeighborOptimizedNetwork.Empty
struct UNearestNeighborOptimizedNetwork_Empty_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function NearestNeighborModel.NearestNeighborOptimizedNetwork.AddLayer
struct UNearestNeighborOptimizedNetwork_AddLayer_Params
{
public:
	int32                                        LayerType;                                         // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_81CD[0x4];                                     // Fixing Size After Last Property..
	class UNearestNeighborNetworkLayer*          ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function NearestNeighborModel.NearestNeighborOptimizedNetworkLoader.LoadOptimizedNetwork
struct UNearestNeighborOptimizedNetworkLoader_LoadOptimizedNetwork_Params
{
public:
	class FString                                OnnxPath;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_81CF[0x7];                                     // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// Function NearestNeighborModel.NearestNeighborOptimizedNetworkLoader.GetOptimizedNetwork
struct UNearestNeighborOptimizedNetworkLoader_GetOptimizedNetwork_Params
{
public:
	class UNearestNeighborOptimizedNetwork*      ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function NearestNeighborModel.NearestNeighborModel.VertexMean
struct UNearestNeighborModel_VertexMean_Params
{
public:
	int32                                        PartId;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_81D1[0x4];                                     // Fixing Size After Last Property..
	TArray<float>                                ReturnValue;                                       // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function NearestNeighborModel.NearestNeighborModel.SetVertexMean
struct UNearestNeighborModel_SetVertexMean_Params
{
public:
	int32                                        PartId;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_81D2[0x4];                                     // Fixing Size After Last Property..
	TArray<float>                                VertexMean;                                        // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function NearestNeighborModel.NearestNeighborModel.SetPCABasis
struct UNearestNeighborModel_SetPCABasis_Params
{
public:
	int32                                        PartId;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_81D3[0x4];                                     // Fixing Size After Last Property..
	TArray<float>                                PCABasis;                                          // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function NearestNeighborModel.NearestNeighborModel.SetNumNeighbors
struct UNearestNeighborModel_SetNumNeighbors_Params
{
public:
	int32                                        PartId;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InNumNeighbors;                                    // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function NearestNeighborModel.NearestNeighborModel.SetNeighborOffsets
struct UNearestNeighborModel_SetNeighborOffsets_Params
{
public:
	int32                                        PartId;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_81D4[0x4];                                     // Fixing Size After Last Property..
	TArray<float>                                NeighborOffsets;                                   // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function NearestNeighborModel.NearestNeighborModel.SetNeighborCoeffs
struct UNearestNeighborModel_SetNeighborCoeffs_Params
{
public:
	int32                                        PartId;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_81D5[0x4];                                     // Fixing Size After Last Property..
	TArray<float>                                NeighborCoeffs;                                    // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function NearestNeighborModel.NearestNeighborModel.PCABasis
struct UNearestNeighborModel_PCABasis_Params
{
public:
	int32                                        PartId;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_81D6[0x4];                                     // Fixing Size After Last Property..
	TArray<float>                                ReturnValue;                                       // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function NearestNeighborModel.NearestNeighborModel.NeighborOffsets
struct UNearestNeighborModel_NeighborOffsets_Params
{
public:
	int32                                        PartId;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_81D7[0x4];                                     // Fixing Size After Last Property..
	TArray<float>                                ReturnValue;                                       // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function NearestNeighborModel.NearestNeighborModel.NeighborCoeffs
struct UNearestNeighborModel_NeighborCoeffs_Params
{
public:
	int32                                        PartId;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_81D8[0x4];                                     // Fixing Size After Last Property..
	TArray<float>                                ReturnValue;                                       // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function NearestNeighborModel.NearestNeighborModel.GetPCACoeffStart
struct UNearestNeighborModel_GetPCACoeffStart_Params
{
public:
	int32                                        PartId;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function NearestNeighborModel.NearestNeighborModel.GetPCACoeffNum
struct UNearestNeighborModel_GetPCACoeffNum_Params
{
public:
	int32                                        PartId;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function NearestNeighborModel.NearestNeighborModel.GetPartNumVerts
struct UNearestNeighborModel_GetPartNumVerts_Params
{
public:
	int32                                        PartId;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function NearestNeighborModel.NearestNeighborModel.GetNumParts
struct UNearestNeighborModel_GetNumParts_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function NearestNeighborModel.NearestNeighborModel.GetNumNeighbors
struct UNearestNeighborModel_GetNumNeighbors_Params
{
public:
	int32                                        PartId;                                            // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function NearestNeighborModel.NearestNeighborModel.ClipInputs
struct UNearestNeighborModel_ClipInputs_Params
{
public:
	TArray<float>                                Input;                                             // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<float>                                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function NearestNeighborModel.NearestNeighborModelInstance.Eval
struct UNearestNeighborModelInstance_Eval_Params
{
public:
	TArray<float>                                InputData;                                         // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<float>                                ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
