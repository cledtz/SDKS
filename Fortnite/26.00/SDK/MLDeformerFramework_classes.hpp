#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x30 - 0x28)
// Class MLDeformerFramework.MLDeformerAsset
class UMLDeformerAsset : public UObject
{
public:
	class UMLDeformerModel*                      Model;                                             // 0x28(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMLDeformerAsset* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MLDeformerFramework.MLDeformerVizSettings
class UMLDeformerVizSettings : public UObject
{
public:

	static class UClass* StaticClass();
	static class UMLDeformerVizSettings* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MLDeformerFramework.MLDeformerGeomCacheVizSettings
class UMLDeformerGeomCacheVizSettings : public UMLDeformerVizSettings
{
public:

	static class UClass* StaticClass();
	static class UMLDeformerGeomCacheVizSettings* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class MLDeformerFramework.MLDeformerMorphModelVizSettings
class UMLDeformerMorphModelVizSettings : public UMLDeformerGeomCacheVizSettings
{
public:
	float                                        MorphTargetDeltaThreshold;                         // 0x28(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        MorphTargetNumber;                                 // 0x2C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bDrawMorphTargets;                                 // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4570[0x7];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UMLDeformerMorphModelVizSettings* GetDefaultObj();

};

// 0x48 (0xE8 - 0xA0)
// Class MLDeformerFramework.MLDeformerComponent
class UMLDeformerComponent : public UActorComponent
{
public:
	uint8                                        Pad_457E[0x30];                                    // Fixing Size After Last Property 
	class UMLDeformerAsset*                      DeformerAsset;                                     // 0xD0(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Weight;                                            // 0xD8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        QualityLevel;                                      // 0xDC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMLDeformerModelInstance*              ModelInstance;                                     // 0xE0(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UMLDeformerComponent* GetDefaultObj();

	void UpdateSkeletalMeshComponent();
	void SetWeight(float NormalizedWeightValue);
	void SetQualityLevel(int32 InQualityLevel);
	void SetDeformerAsset(class UMLDeformerAsset* InDeformerAsset);
	float GetWeight();
	class USkeletalMeshComponent* GetSkeletalMeshComponent();
	int32 GetQualityLevel();
	class UMLDeformerAsset* GetDeformerAsset();
	class USkeletalMeshComponent* FindSkeletalMeshComponent(class UMLDeformerAsset* Asset);
};

// 0x0 (0x28 - 0x28)
// Class MLDeformerFramework.MLDeformerComponentSource
class UMLDeformerComponentSource : public UOptimusComponentSource
{
public:

	static class UClass* StaticClass();
	static class UMLDeformerComponentSource* GetDefaultObj();

};

// 0xC8 (0xF0 - 0x28)
// Class MLDeformerFramework.MLDeformerModel
class UMLDeformerModel : public UObject
{
public:
	uint8                                        Pad_4589[0xA0];                                    // Fixing Size After Last Property 
	int32                                        NumBaseMeshVerts;                                  // 0xC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        NumTargetMeshVerts;                                // 0xCC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMLDeformerInputInfo*                  InputInfo;                                         // 0xD0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<int32>                                VertexMap;                                         // 0xD8(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	class USkeletalMesh*                         SkeletalMesh;                                      // 0xE8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMLDeformerModel* GetDefaultObj();

};

// 0x0 (0xF0 - 0xF0)
// Class MLDeformerFramework.MLDeformerGeomCacheModel
class UMLDeformerGeomCacheModel : public UMLDeformerModel
{
public:

	static class UClass* StaticClass();
	static class UMLDeformerGeomCacheModel* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MLDeformerFramework.MLDeformerGraphDebugDataInterface
class UMLDeformerGraphDebugDataInterface : public UOptimusComputeDataInterface
{
public:

	static class UClass* StaticClass();
	static class UMLDeformerGraphDebugDataInterface* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class MLDeformerFramework.MLDeformerGraphDebugDataProvider
class UMLDeformerGraphDebugDataProvider : public UComputeDataProvider
{
public:
	class UMLDeformerComponent*                  DeformerComponent;                                 // 0x28(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMLDeformerAsset*                      DeformerAsset;                                     // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMLDeformerGraphDebugDataProvider* GetDefaultObj();

};

// 0x40 (0x68 - 0x28)
// Class MLDeformerFramework.MLDeformerInputInfo
class UMLDeformerInputInfo : public UObject
{
public:
	struct FSoftObjectPath                       SkeletalMesh;                                      // 0x28(0x18)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class FName>                          BoneNames;                                         // 0x40(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class FName>                          CurveNames;                                        // 0x50(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	int32                                        NumBaseMeshVertices;                               // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        NumTargetMeshVertices;                             // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UMLDeformerInputInfo* GetDefaultObj();

};

// 0x68 (0x90 - 0x28)
// Class MLDeformerFramework.MLDeformerModelInstance
class UMLDeformerModelInstance : public UObject
{
public:
	uint8                                        Pad_4595[0x10];                                    // Fixing Size After Last Property 
	class UMLDeformerModel*                      Model;                                             // 0x38(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4598[0x50];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UMLDeformerModelInstance* GetDefaultObj();

};

// 0x98 (0x188 - 0xF0)
// Class MLDeformerFramework.MLDeformerMorphModel
class UMLDeformerMorphModel : public UMLDeformerGeomCacheModel
{
public:
	uint8                                        Pad_45AB[0x10];                                    // Fixing Size After Last Property 
	TArray<struct FVector3f>                     MorphTargetDeltas;                                 // 0x100(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	int32                                        NumMorphTargets;                                   // 0x110(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_45AE[0x4];                                     // Fixing Size After Last Property 
	uint64                                       CompressedMorphDataSizeInBytes;                    // 0x118(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint64                                       UncompressedMorphDataSizeInBytes;                  // 0x120(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<int32>                                MorphTargetErrorOrder;                             // 0x128(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<float>                                MorphTargetErrors;                                 // 0x138(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<float>                                MaxMorphWeights;                                   // 0x148(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FMLDeformerMorphModelQualityLevel> QualityLevels;                                     // 0x158(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	bool                                         bIncludeNormals;                                   // 0x168(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_45B0[0x3];                                     // Fixing Size After Last Property 
	float                                        MorphDeltaZeroThreshold;                           // 0x16C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MorphCompressionLevel;                             // 0x170(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EMLDeformerMaskChannel            MaskChannel;                                       // 0x174(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bInvertMaskChannel;                                // 0x175(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_45B2[0x12];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UMLDeformerMorphModel* GetDefaultObj();

	void SetMorphTargetsMaxWeights(TArray<float>& MaxWeights);
	void SetMorphTargetsErrorOrder(TArray<int32>& MorphTargetOrder, TArray<float>& ErrorValues);
	void SetMorphTargetDeltas(TArray<struct FVector3f>& Deltas);
	void SetMorphTargetDeltaFloats(TArray<float>& Deltas);
};

// 0x0 (0x68 - 0x68)
// Class MLDeformerFramework.MLDeformerMorphModelInputInfo
class UMLDeformerMorphModelInputInfo : public UMLDeformerInputInfo
{
public:

	static class UClass* StaticClass();
	static class UMLDeformerMorphModelInputInfo* GetDefaultObj();

};

// 0x20 (0xB0 - 0x90)
// Class MLDeformerFramework.MLDeformerMorphModelInstance
class UMLDeformerMorphModelInstance : public UMLDeformerModelInstance
{
public:
	uint8                                        Pad_45BB[0x20];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UMLDeformerMorphModelInstance* GetDefaultObj();

};

}


