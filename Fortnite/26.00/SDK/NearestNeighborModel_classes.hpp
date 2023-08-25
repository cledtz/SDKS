#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x38 - 0x38)
// Class NearestNeighborModel.NearestNeighborModelVizSettings
class UNearestNeighborModelVizSettings : public UMLDeformerMorphModelVizSettings
{
public:

	static class UClass* StaticClass();
	static class UNearestNeighborModelVizSettings* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class NearestNeighborModel.NearestNeighborNetworkLayer
class UNearestNeighborNetworkLayer : public UObject
{
public:
	int32                                        NumInputs;                                         // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumOutputs;                                        // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNearestNeighborNetworkParameter> Parameters;                                        // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNearestNeighborNetworkLayer* GetDefaultObj();

	void AddParameter(TArray<float>& Values, TArray<int32>& Shape);
};

// 0x0 (0x40 - 0x40)
// Class NearestNeighborModel.NearestNeighborNetworkLayer_Gemm_Prelu
class UNearestNeighborNetworkLayer_Gemm_Prelu : public UNearestNeighborNetworkLayer
{
public:

	static class UClass* StaticClass();
	static class UNearestNeighborNetworkLayer_Gemm_Prelu* GetDefaultObj();

};

// 0x0 (0x40 - 0x40)
// Class NearestNeighborModel.NearestNeighborNetworkLayer_Gemm
class UNearestNeighborNetworkLayer_Gemm : public UNearestNeighborNetworkLayer
{
public:

	static class UClass* StaticClass();
	static class UNearestNeighborNetworkLayer_Gemm* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class NearestNeighborModel.NearestNeighborOptimizedNetwork
class UNearestNeighborOptimizedNetwork : public UObject
{
public:
	TArray<class UNearestNeighborNetworkLayer*>  Layers;                                            // 0x28(0x10)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UNearestNeighborOptimizedNetwork* GetDefaultObj();

	void Empty();
	class UNearestNeighborNetworkLayer* AddLayer(int32 LayerType);
};

// 0x48 (0x70 - 0x28)
// Class NearestNeighborModel.NearestNeighborOptimizedNetworkInstance
class UNearestNeighborOptimizedNetworkInstance : public UObject
{
public:
	uint8                                        Pad_13B9[0x40];                                    // Fixing Size After Last Property 
	class UNearestNeighborOptimizedNetwork*      Network;                                           // 0x68(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UNearestNeighborOptimizedNetworkInstance* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class NearestNeighborModel.NearestNeighborOptimizedNetworkLoader
class UNearestNeighborOptimizedNetworkLoader : public UObject
{
public:
	uint8                                        Pad_13C2[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UNearestNeighborOptimizedNetworkLoader* GetDefaultObj();

	bool LoadOptimizedNetwork(const class FString& OnnxPath);
	class UNearestNeighborOptimizedNetwork* GetOptimizedNetwork();
};

// 0x60 (0x1E8 - 0x188)
// Class NearestNeighborModel.NearestNeighborModel
class UNearestNeighborModel : public UMLDeformerMorphModel
{
public:
	bool                                         bUseInputMultipliers;                              // 0x188(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_13FF[0x7];                                     // Fixing Size After Last Property 
	TArray<struct FVector3f>                     InputMultipliers;                                  // 0x190(0x10)(Edit, BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<struct FClothPartData>                ClothPartData;                                     // 0x1A0(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<float>                                InputsMin;                                         // 0x1B0(0x10)(BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<float>                                InputsMax;                                         // 0x1C0(0x10)(BlueprintVisible, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	float                                        DecayFactor;                                       // 0x1D0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        NearestNeighborOffsetWeight;                       // 0x1D4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNearestNeighborOptimizedNetwork*      OptimizedNetwork;                                  // 0x1D8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bUseOptimizedNetwork;                              // 0x1E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1400[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UNearestNeighborModel* GetDefaultObj();

	TArray<float> VertexMean(int32 PartId);
	void SetVertexMean(int32 PartId, TArray<float>& VertexMean);
	void SetPCABasis(int32 PartId, TArray<float>& PCABasis);
	void SetNumNeighbors(int32 PartId, int32 InNumNeighbors);
	void SetNeighborOffsets(int32 PartId, TArray<float>& NeighborOffsets);
	void SetNeighborCoeffs(int32 PartId, TArray<float>& NeighborCoeffs);
	TArray<float> PCABasis(int32 PartId);
	TArray<float> NeighborOffsets(int32 PartId);
	TArray<float> NeighborCoeffs(int32 PartId);
	int32 GetPCACoeffStart(int32 PartId);
	int32 GetPCACoeffNum(int32 PartId);
	int32 GetPartNumVerts(int32 PartId);
	int32 GetNumParts();
	int32 GetNumNeighbors(int32 PartId);
	TArray<float> ClipInputs(TArray<float>& Input);
};

// 0x10 (0x78 - 0x68)
// Class NearestNeighborModel.NearestNeighborModelInputInfo
class UNearestNeighborModelInputInfo : public UMLDeformerMorphModelInputInfo
{
public:
	TArray<struct FQuat>                         RefBoneRotations;                                  // 0x68(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UNearestNeighborModelInputInfo* GetDefaultObj();

};

// 0x18 (0xC8 - 0xB0)
// Class NearestNeighborModel.NearestNeighborModelInstance
class UNearestNeighborModelInstance : public UMLDeformerMorphModelInstance
{
public:
	uint8                                        Pad_1410[0x10];                                    // Fixing Size After Last Property 
	class UNearestNeighborOptimizedNetworkInstance* OptimizedNetworkInstance;                          // 0xC0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UNearestNeighborModelInstance* GetDefaultObj();

	TArray<float> Eval(TArray<float>& InputData);
};

// 0x0 (0x28 - 0x28)
// Class NearestNeighborModel.OptimusSkeletonWithQuatsDataInterface
class UOptimusSkeletonWithQuatsDataInterface : public UOptimusComputeDataInterface
{
public:

	static class UClass* StaticClass();
	static class UOptimusSkeletonWithQuatsDataInterface* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class NearestNeighborModel.OptimusSkeletonWithQuatsDataProvider
class UOptimusSkeletonWithQuatsDataProvider : public UComputeDataProvider
{
public:
	class USkinnedMeshComponent*                 SkinnedMesh;                                       // 0x28(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UOptimusSkeletonWithQuatsDataProvider* GetDefaultObj();

};

}


