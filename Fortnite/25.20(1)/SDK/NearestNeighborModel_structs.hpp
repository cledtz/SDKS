#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ENearestNeighborNetworkLayerType : uint8
{
	None                           = 0,
	Gemm_Prelu                     = 1,
	Gemm                           = 2,
	ENearestNeighborNetworkLayerType_MAX = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// ScriptStruct NearestNeighborModel.NearestNeighborNetworkParameter
struct FNearestNeighborNetworkParameter
{
public:
	TArray<float>                                Values;                                            // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                Shape;                                             // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct NearestNeighborModel.SkeletonCachePair
struct FSkeletonCachePair
{
public:
	class UAnimSequence*                         Skeletons;                                         // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGeometryCache*                        Cache;                                             // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct NearestNeighborModel.ClothPartEditorData
struct FClothPartEditorData
{
public:
	int32                                        PCACoeffNum;                                       // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_82AB[0x4];                                     // Fixing Size After Last Property..
	class FString                                VertexMapPath;                                     // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MeshIndex;                                         // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_82AC[0x4];                                     // Fixing Size Of Struct..
};

// 0x60 (0x60 - 0x0)
// ScriptStruct NearestNeighborModel.ClothPartData
struct FClothPartData
{
public:
	int32                                        PCACoeffNum;                                       // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       PCACoeffStart;                                     // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       NumVertices;                                       // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       NumNeighbors;                                      // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint32>                               VertexMap;                                         // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                PCABasis;                                          // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                VertexMean;                                        // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                NeighborCoeffs;                                    // 0x40(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                NeighborOffsets;                                   // 0x50(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
