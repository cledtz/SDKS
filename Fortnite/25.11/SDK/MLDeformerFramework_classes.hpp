#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

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

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MLDeformerAsset");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class MLDeformerFramework.MLDeformerVizSettings
class UMLDeformerVizSettings : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MLDeformerVizSettings");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class MLDeformerFramework.MLDeformerGeomCacheVizSettings
class UMLDeformerGeomCacheVizSettings : public UMLDeformerVizSettings
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MLDeformerGeomCacheVizSettings");
		return Clss;
	}

};

// 0x10 (0x38 - 0x28)
// Class MLDeformerFramework.MLDeformerMorphModelVizSettings
class UMLDeformerMorphModelVizSettings : public UMLDeformerGeomCacheVizSettings
{
public:
	float                                        MorphTargetDeltaThreshold;                         // 0x28(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        MorphTargetNumber;                                 // 0x2C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bDrawMorphTargets;                                 // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_42EB[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MLDeformerMorphModelVizSettings");
		return Clss;
	}

};

// 0x40 (0xE0 - 0xA0)
// Class MLDeformerFramework.MLDeformerComponent
class UMLDeformerComponent : public UActorComponent
{
public:
	uint8                                        Pad_42EC[0x28];                                    // Fixing Size After Last Property..
	class UMLDeformerAsset*                      DeformerAsset;                                     // 0xC8(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Weight;                                            // 0xD0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        QualityLevel;                                      // 0xD4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMLDeformerModelInstance*              ModelInstance;                                     // 0xD8(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MLDeformerComponent");
		return Clss;
	}

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

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MLDeformerComponentSource");
		return Clss;
	}

};

// 0xB0 (0xD8 - 0x28)
// Class MLDeformerFramework.MLDeformerModel
class UMLDeformerModel : public UObject
{
public:
	uint8                                        Pad_42ED[0x88];                                    // Fixing Size After Last Property..
	int32                                        NumBaseMeshVerts;                                  // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        NumTargetMeshVerts;                                // 0xB4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMLDeformerInputInfo*                  InputInfo;                                         // 0xB8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<int32>                                VertexMap;                                         // 0xC0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	class USkeletalMesh*                         SkeletalMesh;                                      // 0xD0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MLDeformerModel");
		return Clss;
	}

};

// 0x0 (0xD8 - 0xD8)
// Class MLDeformerFramework.MLDeformerGeomCacheModel
class UMLDeformerGeomCacheModel : public UMLDeformerModel
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MLDeformerGeomCacheModel");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class MLDeformerFramework.MLDeformerGraphDebugDataInterface
class UMLDeformerGraphDebugDataInterface : public UOptimusComputeDataInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MLDeformerGraphDebugDataInterface");
		return Clss;
	}

};

// 0x10 (0x38 - 0x28)
// Class MLDeformerFramework.MLDeformerGraphDebugDataProvider
class UMLDeformerGraphDebugDataProvider : public UComputeDataProvider
{
public:
	class UMLDeformerComponent*                  DeformerComponent;                                 // 0x28(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMLDeformerAsset*                      DeformerAsset;                                     // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MLDeformerGraphDebugDataProvider");
		return Clss;
	}

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

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MLDeformerInputInfo");
		return Clss;
	}

};

// 0x68 (0x90 - 0x28)
// Class MLDeformerFramework.MLDeformerModelInstance
class UMLDeformerModelInstance : public UObject
{
public:
	uint8                                        Pad_42EE[0x10];                                    // Fixing Size After Last Property..
	class UMLDeformerModel*                      Model;                                             // 0x38(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_42EF[0x50];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MLDeformerModelInstance");
		return Clss;
	}

};

// 0x88 (0x160 - 0xD8)
// Class MLDeformerFramework.MLDeformerMorphModel
class UMLDeformerMorphModel : public UMLDeformerGeomCacheModel
{
public:
	uint8                                        Pad_42F0[0x10];                                    // Fixing Size After Last Property..
	TArray<struct FVector3f>                     MorphTargetDeltas;                                 // 0xE8(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	int32                                        NumMorphTargets;                                   // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_42F1[0x4];                                     // Fixing Size After Last Property..
	uint64                                       CompressedMorphDataSizeInBytes;                    // 0x100(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint64                                       UncompressedMorphDataSizeInBytes;                  // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<int32>                                MorphTargetErrorOrder;                             // 0x110(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<float>                                MorphTargetErrors;                                 // 0x120(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<float>                                MaxMorphWeights;                                   // 0x130(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FMLDeformerMorphModelQualityLevel> QualityLevels;                                     // 0x140(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	bool                                         bIncludeNormals;                                   // 0x150(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_42F2[0x3];                                     // Fixing Size After Last Property..
	float                                        MorphDeltaZeroThreshold;                           // 0x154(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MorphCompressionLevel;                             // 0x158(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EMLDeformerMaskChannel            MaskChannel;                                       // 0x15C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bInvertMaskChannel;                                // 0x15D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_42F3[0x2];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MLDeformerMorphModel");
		return Clss;
	}

	void SetMorphTargetsMaxWeights(TArray<float>& MaxWeights);
	void SetMorphTargetsErrorOrder(TArray<int32>& MorphTargetOrder, TArray<float>& ErrorValues);
	void SetMorphTargetDeltas(TArray<struct FVector3f>& Deltas);
	void SetMorphTargetDeltaFloats(TArray<float>& Deltas);
};

// 0x20 (0xB0 - 0x90)
// Class MLDeformerFramework.MLDeformerMorphModelInstance
class UMLDeformerMorphModelInstance : public UMLDeformerModelInstance
{
public:
	uint8                                        Pad_42F4[0x20];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MLDeformerMorphModelInstance");
		return Clss;
	}

};

// 0x0 (0xD8 - 0xD8)
// Class MLDeformerFramework.MLDeformerTestModel
class UMLDeformerTestModel : public UMLDeformerModel
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MLDeformerTestModel");
		return Clss;
	}

};

// 0x0 (0x90 - 0x90)
// Class MLDeformerFramework.TestModelInstance
class UTestModelInstance : public UMLDeformerModelInstance
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TestModelInstance");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
