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

// 0x0 (0x28 - 0x28)
// Class OptimusCore.OptimusComponentBindingProvider
class UOptimusComponentBindingProvider : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptimusComponentBindingProvider");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class OptimusCore.OptimusComputeKernelProvider
class UOptimusComputeKernelProvider : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptimusComputeKernelProvider");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class OptimusCore.OptimusDataInterfaceProvider
class UOptimusDataInterfaceProvider : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptimusDataInterfaceProvider");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class OptimusCore.OptimusExecutionDomainProvider
class UOptimusExecutionDomainProvider : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptimusExecutionDomainProvider");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class OptimusCore.OptimusGeneratedClassDefiner
class UOptimusGeneratedClassDefiner : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptimusGeneratedClassDefiner");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class OptimusCore.OptimusNodeAdderPinProvider
class UOptimusNodeAdderPinProvider : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptimusNodeAdderPinProvider");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class OptimusCore.OptimusNodeFunctionLibraryOwner
class UOptimusNodeFunctionLibraryOwner : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptimusNodeFunctionLibraryOwner");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class OptimusCore.OptimusNodeGraphCollectionOwner
class UOptimusNodeGraphCollectionOwner : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptimusNodeGraphCollectionOwner");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class OptimusCore.OptimusNodePinRouter
class UOptimusNodePinRouter : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptimusNodePinRouter");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class OptimusCore.OptimusParameterBindingProvider
class UOptimusParameterBindingProvider : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptimusParameterBindingProvider");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class OptimusCore.OptimusPathResolver
class UOptimusPathResolver : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptimusPathResolver");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class OptimusCore.OptimusShaderTextProvider
class UOptimusShaderTextProvider : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptimusShaderTextProvider");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class OptimusCore.OptimusValueProvider
class UOptimusValueProvider : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptimusValueProvider");
		return Clss;
	}

};

// 0x10 (0xA8 - 0x98)
// Class OptimusCore.OptimusKernelSource
class UOptimusKernelSource : public UComputeKernelSource
{
public:
	class FString                                Source;                                            // 0x98(0x10)(ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptimusKernelSource");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class OptimusCore.OptimusComponentSource
class UOptimusComponentSource : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptimusComponentSource");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class OptimusCore.OptimusSceneComponentSource
class UOptimusSceneComponentSource : public UOptimusComponentSource
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptimusSceneComponentSource");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class OptimusCore.OptimusSkinnedMeshComponentSource
class UOptimusSkinnedMeshComponentSource : public UOptimusComponentSource
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptimusSkinnedMeshComponentSource");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class OptimusCore.OptimusSkeletalMeshComponentSource
class UOptimusSkeletalMeshComponentSource : public UOptimusSkinnedMeshComponentSource
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptimusSkeletalMeshComponentSource");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class OptimusCore.OptimusComputeDataInterface
class UOptimusComputeDataInterface : public UComputeDataInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptimusComputeDataInterface");
		return Clss;
	}

};

// 0x10 (0x38 - 0x28)
// Class OptimusCore.OptimusAnimAttributeDataInterface
class UOptimusAnimAttributeDataInterface : public UOptimusComputeDataInterface
{
public:
	struct FOptimusAnimAttributeArray            AttributeArray;                                    // 0x28(0x10)(Edit, BlueprintReadOnly, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptimusAnimAttributeDataInterface");
		return Clss;
	}

};

// 0x20 (0x48 - 0x28)
// Class OptimusCore.OptimusAnimAttributeDataProvider
class UOptimusAnimAttributeDataProvider : public UComputeDataProvider
{
public:
	class USkeletalMeshComponent*                SkeletalMesh;                                      // 0x28(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_81E7[0x18];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptimusAnimAttributeDataProvider");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class OptimusCore.OptimusClothDataInterface
class UOptimusClothDataInterface : public UOptimusComputeDataInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptimusClothDataInterface");
		return Clss;
	}

};

// 0x8 (0x30 - 0x28)
// Class OptimusCore.OptimusClothDataProvider
class UOptimusClothDataProvider : public UComputeDataProvider
{
public:
	class USkinnedMeshComponent*                 SkinnedMesh;                                       // 0x28(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptimusClothDataProvider");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class OptimusCore.OptimusConnectivityDataInterface
class UOptimusConnectivityDataInterface : public UOptimusComputeDataInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptimusConnectivityDataInterface");
		return Clss;
	}

};

// 0x18 (0x40 - 0x28)
// Class OptimusCore.OptimusConnectivityDataProvider
class UOptimusConnectivityDataProvider : public UComputeDataProvider
{
public:
	class USkinnedMeshComponent*                 SkinnedMesh;                                       // 0x28(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_81E8[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptimusConnectivityDataProvider");
		return Clss;
	}

};

// 0x18 (0x40 - 0x28)
// Class OptimusCore.OptimusDebugDrawDataInterface
class UOptimusDebugDrawDataInterface : public UOptimusComputeDataInterface
{
public:
	struct FOptimusDebugDrawParameters           DebugDrawParameters;                               // 0x28(0x14)(Edit, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_81E9[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptimusDebugDrawDataInterface");
		return Clss;
	}

};

// 0x20 (0x48 - 0x28)
// Class OptimusCore.OptimusDebugDrawDataProvider
class UOptimusDebugDrawDataProvider : public UComputeDataProvider
{
public:
	class UPrimitiveComponent*                   PrimitiveComponent;                                // 0x28(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FOptimusDebugDrawParameters           DebugDrawParameters;                               // 0x30(0x14)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_81EA[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptimusDebugDrawDataProvider");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class OptimusCore.OptimusDuplicateVerticesDataInterface
class UOptimusDuplicateVerticesDataInterface : public UOptimusComputeDataInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptimusDuplicateVerticesDataInterface");
		return Clss;
	}

};

// 0x8 (0x30 - 0x28)
// Class OptimusCore.OptimusDuplicateVerticesDataProvider
class UOptimusDuplicateVerticesDataProvider : public UComputeDataProvider
{
public:
	class USkinnedMeshComponent*                 SkinnedMesh;                                       // 0x28(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptimusDuplicateVerticesDataProvider");
		return Clss;
	}

};

// 0x18 (0x40 - 0x28)
// Class OptimusCore.OptimusGraphDataInterface
class UOptimusGraphDataInterface : public UComputeDataInterface
{
public:
	TArray<struct FOptimusGraphVariableDescription> Variables;                                         // 0x28(0x10)(BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPrivate)
	int32                                        ParameterBufferSize;                               // 0x38(0x4)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_81EB[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptimusGraphDataInterface");
		return Clss;
	}

};

// 0x28 (0x50 - 0x28)
// Class OptimusCore.OptimusGraphDataProvider
class UOptimusGraphDataProvider : public UComputeDataProvider
{
public:
	class UMeshComponent*                        MeshComponent;                                     // 0x28(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UOptimusDeformerInstance*              DeformerInstance;                                  // 0x30(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FOptimusGraphVariableDescription> Variables;                                         // 0x38(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_81EC[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptimusGraphDataProvider");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class OptimusCore.OptimusHalfEdgeDataInterface
class UOptimusHalfEdgeDataInterface : public UOptimusComputeDataInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptimusHalfEdgeDataInterface");
		return Clss;
	}

};

// 0x28 (0x50 - 0x28)
// Class OptimusCore.OptimusHalfEdgeDataProvider
class UOptimusHalfEdgeDataProvider : public UComputeDataProvider
{
public:
	class USkinnedMeshComponent*                 SkinnedMesh;                                       // 0x28(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_81ED[0x20];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptimusHalfEdgeDataProvider");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class OptimusCore.OptimusMorphTargetDataInterface
class UOptimusMorphTargetDataInterface : public UOptimusComputeDataInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptimusMorphTargetDataInterface");
		return Clss;
	}

};

// 0x8 (0x30 - 0x28)
// Class OptimusCore.OptimusMorphTargetDataProvider
class UOptimusMorphTargetDataProvider : public UComputeDataProvider
{
public:
	class USkinnedMeshComponent*                 SkinnedMesh;                                       // 0x28(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptimusMorphTargetDataProvider");
		return Clss;
	}

};

// 0x50 (0x78 - 0x28)
// Class OptimusCore.OptimusRawBufferDataInterface
class UOptimusRawBufferDataInterface : public UOptimusComputeDataInterface
{
public:
	struct FShaderValueTypeHandle                ValueType;                                         // 0x28(0x8)(BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FOptimusDataDomain                    DataDomain;                                        // 0x30(0x40)(BlueprintReadOnly, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UOptimusComponentSourceBinding> ComponentSourceBinding;                            // 0x70(0x8)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptimusRawBufferDataInterface");
		return Clss;
	}

};

// 0x0 (0x78 - 0x78)
// Class OptimusCore.OptimusTransientBufferDataInterface
class UOptimusTransientBufferDataInterface : public UOptimusRawBufferDataInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptimusTransientBufferDataInterface");
		return Clss;
	}

};

// 0x8 (0x80 - 0x78)
// Class OptimusCore.OptimusPersistentBufferDataInterface
class UOptimusPersistentBufferDataInterface : public UOptimusRawBufferDataInterface
{
public:
	class FName                                  ResourceName;                                      // 0x78(0x4)(BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_81EE[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptimusPersistentBufferDataInterface");
		return Clss;
	}

};

// 0x58 (0x80 - 0x28)
// Class OptimusCore.OptimusRawBufferDataProvider
class UOptimusRawBufferDataProvider : public UComputeDataProvider
{
public:
	TWeakObjectPtr<class UActorComponent>        Component;                                         // 0x28(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UOptimusComponentSource> ComponentSource;                                   // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FOptimusDataDomain                    DataDomain;                                        // 0x38(0x40)(NativeAccessSpecifierPublic)
	int32                                        ElementStride;                                     // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RawStride;                                         // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptimusRawBufferDataProvider");
		return Clss;
	}

};

// 0x0 (0x80 - 0x80)
// Class OptimusCore.OptimusTransientBufferDataProvider
class UOptimusTransientBufferDataProvider : public UOptimusRawBufferDataProvider
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptimusTransientBufferDataProvider");
		return Clss;
	}

};

// 0x18 (0x98 - 0x80)
// Class OptimusCore.OptimusPersistentBufferDataProvider
class UOptimusPersistentBufferDataProvider : public UOptimusRawBufferDataProvider
{
public:
	uint8                                        Pad_81EF[0x18];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptimusPersistentBufferDataProvider");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class OptimusCore.OptimusSceneDataInterface
class UOptimusSceneDataInterface : public UOptimusComputeDataInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptimusSceneDataInterface");
		return Clss;
	}

};

// 0x8 (0x30 - 0x28)
// Class OptimusCore.OptimusSceneDataProvider
class UOptimusSceneDataProvider : public UComputeDataProvider
{
public:
	class USceneComponent*                       SceneComponent;                                    // 0x28(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptimusSceneDataProvider");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class OptimusCore.OptimusSkeletonDataInterface
class UOptimusSkeletonDataInterface : public UOptimusComputeDataInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptimusSkeletonDataInterface");
		return Clss;
	}

};

// 0x8 (0x30 - 0x28)
// Class OptimusCore.OptimusSkeletonDataProvider
class UOptimusSkeletonDataProvider : public UComputeDataProvider
{
public:
	class USkinnedMeshComponent*                 SkinnedMesh;                                       // 0x28(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptimusSkeletonDataProvider");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class OptimusCore.OptimusSkinnedMeshDataInterface
class UOptimusSkinnedMeshDataInterface : public UOptimusComputeDataInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptimusSkinnedMeshDataInterface");
		return Clss;
	}

};

// 0x8 (0x30 - 0x28)
// Class OptimusCore.OptimusSkinnedMeshDataProvider
class UOptimusSkinnedMeshDataProvider : public UComputeDataProvider
{
public:
	class USkinnedMeshComponent*                 SkinnedMesh;                                       // 0x28(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptimusSkinnedMeshDataProvider");
		return Clss;
	}

};

// 0x8 (0x30 - 0x28)
// Class OptimusCore.OptimusSkinnedMeshExecDataInterface
class UOptimusSkinnedMeshExecDataInterface : public UOptimusComputeDataInterface
{
public:
	enum class EOptimusSkinnedMeshExecDomain     Domain;                                            // 0x28(0x1)(Edit, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_81F0[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptimusSkinnedMeshExecDataInterface");
		return Clss;
	}

};

// 0x10 (0x38 - 0x28)
// Class OptimusCore.OptimusSkinnedMeshExecDataProvider
class UOptimusSkinnedMeshExecDataProvider : public UComputeDataProvider
{
public:
	class USkinnedMeshComponent*                 SkinnedMesh;                                       // 0x28(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EOptimusSkinnedMeshExecDomain     Domain;                                            // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_81F1[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptimusSkinnedMeshExecDataProvider");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class OptimusCore.OptimusSkinnedMeshWriteDataInterface
class UOptimusSkinnedMeshWriteDataInterface : public UOptimusComputeDataInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptimusSkinnedMeshWriteDataInterface");
		return Clss;
	}

};

// 0x10 (0x38 - 0x28)
// Class OptimusCore.OptimusSkinnedMeshWriteDataProvider
class UOptimusSkinnedMeshWriteDataProvider : public UComputeDataProvider
{
public:
	class USkinnedMeshComponent*                 SkinnedMesh;                                       // 0x28(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_81F2[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptimusSkinnedMeshWriteDataProvider");
		return Clss;
	}

};

// 0xE8 (0x110 - 0x28)
// Class OptimusCore.OptimusNode
class UOptimusNode : public UObject
{
public:
	uint8                                        Pad_81F4[0x8];                                     // Fixing Size After Last Property..
	class FText                                  DisplayName;                                       // 0x30(0x18)(NonTransactional, NativeAccessSpecifierPrivate)
	struct FVector2D                             GraphPosition;                                     // 0x48(0x10)(ZeroConstructor, IsPlainOldData, NonTransactional, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UOptimusNodePin*>               Pins;                                              // 0x58(0x10)(ZeroConstructor, NonTransactional, UObjectWrapper, NativeAccessSpecifierPrivate)
	TSet<class FName>                            ExpandedPins;                                      // 0x68(0x50)(NonTransactional, NativeAccessSpecifierPrivate)
	enum class EOptimusDiagnosticLevel           DiagnosticLevel;                                   // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_81F5[0x57];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptimusNode");
		return Clss;
	}

	bool SetGraphPosition(struct FVector2D& InPosition);
	class FName GetNodeName();
	class FName GetNodeCategory();
	struct FVector2D GetGraphPosition();
	class FText GetDisplayName();
};

// 0x18 (0x128 - 0x110)
// Class OptimusCore.OptimusNode_DataInterface
class UOptimusNode_DataInterface : public UOptimusNode
{
public:
	uint8                                        Pad_81F6[0x8];                                     // Fixing Size After Last Property..
	TSubclassOf<class UObject>                   DataInterfaceClass;                                // 0x118(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UOptimusComputeDataInterface*          DataInterfaceData;                                 // 0x120(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoDestructor, Protected, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptimusNode_DataInterface");
		return Clss;
	}

};

// 0x0 (0x128 - 0x128)
// Class OptimusCore.OptimusNode_AnimAttributeDataInterface
class UOptimusNode_AnimAttributeDataInterface : public UOptimusNode_DataInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptimusNode_AnimAttributeDataInterface");
		return Clss;
	}

};

// 0x10 (0x120 - 0x110)
// Class OptimusCore.OptimusNode_ComponentSource
class UOptimusNode_ComponentSource : public UOptimusNode
{
public:
	uint8                                        Pad_81F7[0x8];                                     // Fixing Size After Last Property..
	class UOptimusComponentSourceBinding*        Binding;                                           // 0x118(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptimusNode_ComponentSource");
		return Clss;
	}

};

// 0x8 (0x118 - 0x110)
// Class OptimusCore.OptimusNode_ComputeKernelBase
class UOptimusNode_ComputeKernelBase : public UOptimusNode
{
public:
	uint8                                        Pad_81F8[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptimusNode_ComputeKernelBase");
		return Clss;
	}

};

// 0x48 (0x248 - 0x200)
// Class OptimusCore.OptimusNode_ComputeKernelFunctionGeneratorClass
class UOptimusNode_ComputeKernelFunctionGeneratorClass : public UClass
{
public:
	class FName                                  Category;                                          // 0x200(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  KernelName;                                        // 0x204(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FOptimusExecutionDomain               ExecutionDomain;                                   // 0x208(0x4)(NoDestructor, NativeAccessSpecifierPublic)
	struct FIntVector                            GroupSize;                                         // 0x20C(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FOptimusParameterBinding>      InputBindings;                                     // 0x218(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FOptimusParameterBinding>      OutputBindings;                                    // 0x228(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                ShaderSource;                                      // 0x238(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptimusNode_ComputeKernelFunctionGeneratorClass");
		return Clss;
	}

};

// 0x0 (0x118 - 0x118)
// Class OptimusCore.OptimusNode_ComputeKernelFunction
class UOptimusNode_ComputeKernelFunction : public UOptimusNode_ComputeKernelBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptimusNode_ComputeKernelFunction");
		return Clss;
	}

};

// 0x10 (0x210 - 0x200)
// Class OptimusCore.OptimusNode_ConstantValueGeneratorClass
class UOptimusNode_ConstantValueGeneratorClass : public UClass
{
public:
	struct FOptimusDataTypeRef                   DataType;                                          // 0x200(0xC)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_81F9[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptimusNode_ConstantValueGeneratorClass");
		return Clss;
	}

};

// 0x10 (0x120 - 0x110)
// Class OptimusCore.OptimusNode_ConstantValue
class UOptimusNode_ConstantValue : public UOptimusNode
{
public:
	uint8                                        Pad_81FA[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptimusNode_ConstantValue");
		return Clss;
	}

};

// 0xC8 (0x1E0 - 0x118)
// Class OptimusCore.OptimusNode_CustomComputeKernel
class UOptimusNode_CustomComputeKernel : public UOptimusNode_ComputeKernelBase
{
public:
	uint8                                        Pad_81FB[0x20];                                    // Fixing Size After Last Property..
	class FName                                  Category;                                          // 0x138(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FOptimusValidatedName                 KernelName;                                        // 0x13C(0x4)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FOptimusExecutionDomain               ExecutionDomain;                                   // 0x140(0x4)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FIntVector                            GroupSize;                                         // 0x144(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FOptimus_ShaderBinding>        Parameters;                                        // 0x150(0x10)(ZeroConstructor, Deprecated, NativeAccessSpecifierPublic)
	TArray<struct FOptimusParameterBinding>      InputBindings;                                     // 0x160(0x10)(ZeroConstructor, Deprecated, NativeAccessSpecifierPublic)
	TArray<struct FOptimusParameterBinding>      OutputBindings;                                    // 0x170(0x10)(ZeroConstructor, Deprecated, NativeAccessSpecifierPublic)
	struct FOptimusParameterBindingArray         InputBindingArray;                                 // 0x180(0x10)(Edit, NativeAccessSpecifierPublic)
	struct FOptimusParameterBindingArray         OutputBindingArray;                                // 0x190(0x10)(Edit, NativeAccessSpecifierPublic)
	TArray<struct FOptimusSecondaryInputBindingsGroup> SecondaryInputBindingGroups;                       // 0x1A0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UComputeSource*>                AdditionalSources;                                 // 0x1B0(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	struct FOptimusShaderText                    ShaderSource;                                      // 0x1C0(0x20)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptimusNode_CustomComputeKernel");
		return Clss;
	}

};

// 0x10 (0x120 - 0x110)
// Class OptimusCore.OptimusNode_FunctionReference
class UOptimusNode_FunctionReference : public UOptimusNode
{
public:
	uint8                                        Pad_81FC[0x8];                                     // Fixing Size After Last Property..
	class UOptimusFunctionNodeGraph*             FunctionGraph;                                     // 0x118(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptimusNode_FunctionReference");
		return Clss;
	}

};

// 0x70 (0x180 - 0x110)
// Class OptimusCore.OptimusNode_ResourceAccessorBase
class UOptimusNode_ResourceAccessorBase : public UOptimusNode
{
public:
	uint8                                        Pad_81FD[0x10];                                    // Fixing Size After Last Property..
	TWeakObjectPtr<class UOptimusResourceDescription> ResourceDesc;                                      // 0x120(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EOptimusBufferWriteType           WriteType;                                         // 0x128(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_81FE[0x7];                                     // Fixing Size After Last Property..
	struct FOptimusNode_ResourceAccessorBase_DuplicationInfo DuplicationInfo;                                   // 0x130(0x50)(DuplicateTransient, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptimusNode_ResourceAccessorBase");
		return Clss;
	}

};

// 0x0 (0x180 - 0x180)
// Class OptimusCore.OptimusNode_GetResource
class UOptimusNode_GetResource : public UOptimusNode_ResourceAccessorBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptimusNode_GetResource");
		return Clss;
	}

};

// 0x30 (0x140 - 0x110)
// Class OptimusCore.OptimusNode_GetVariable
class UOptimusNode_GetVariable : public UOptimusNode
{
public:
	uint8                                        Pad_81FF[0x8];                                     // Fixing Size After Last Property..
	TWeakObjectPtr<class UOptimusVariableDescription> VariableDesc;                                      // 0x118(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FOptimusNode_GetVariable_DuplicationInfo DuplicationInfo;                                   // 0x120(0x20)(DuplicateTransient, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptimusNode_GetVariable");
		return Clss;
	}

};

// 0x18 (0x128 - 0x110)
// Class OptimusCore.OptimusNode_GraphTerminal
class UOptimusNode_GraphTerminal : public UOptimusNode
{
public:
	uint8                                        Pad_8200[0x8];                                     // Fixing Size After Last Property..
	enum class EOptimusTerminalType              TerminalType;                                      // 0x118(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UOptimusNodeSubGraph>   OwningGraph;                                       // 0x11C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8201[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptimusNode_GraphTerminal");
		return Clss;
	}

};

// 0x0 (0x180 - 0x180)
// Class OptimusCore.OptimusNode_Resource
class UOptimusNode_Resource : public UOptimusNode_ResourceAccessorBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptimusNode_Resource");
		return Clss;
	}

};

// 0x0 (0x180 - 0x180)
// Class OptimusCore.OptimusNode_SetResource
class UOptimusNode_SetResource : public UOptimusNode_ResourceAccessorBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptimusNode_SetResource");
		return Clss;
	}

};

// 0x10 (0x120 - 0x110)
// Class OptimusCore.OptimusNode_SubGraphReference
class UOptimusNode_SubGraphReference : public UOptimusNode
{
public:
	uint8                                        Pad_8202[0x8];                                     // Fixing Size After Last Property..
	class UOptimusNodeSubGraph*                  SubGraph;                                          // 0x118(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptimusNode_SubGraphReference");
		return Clss;
	}

};

// 0xB8 (0xE0 - 0x28)
// Class OptimusCore.OptimusActionStack
class UOptimusActionStack : public UObject
{
public:
	int32                                        TransactedActionIndex;                             // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8203[0xB4];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptimusActionStack");
		return Clss;
	}

};

// 0x28 (0x50 - 0x28)
// Class OptimusCore.OptimusComponentSourceBinding
class UOptimusComponentSourceBinding : public UObject
{
public:
	class FName                                  BindingName;                                       // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8204[0x4];                                     // Fixing Size After Last Property..
	TSubclassOf<class UOptimusComponentSource>   ComponentType;                                     // 0x30(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          ComponentTags;                                     // 0x38(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bIsPrimaryBinding;                                 // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8205[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptimusComponentSourceBinding");
		return Clss;
	}

};

// 0x10 (0xA0 - 0x90)
// Class OptimusCore.OptimusComputeGraph
class UOptimusComputeGraph : public UComputeGraph
{
public:
	TArray<TWeakObjectPtr<class UOptimusNode>>   KernelToNode;                                      // 0x90(0x10)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptimusComputeGraph");
		return Clss;
	}

};

// 0x10 (0x38 - 0x28)
// Class OptimusCore.OptimusComponentSourceBindingContainer
class UOptimusComponentSourceBindingContainer : public UObject
{
public:
	TArray<class UOptimusComponentSourceBinding*> Bindings;                                          // 0x28(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptimusComponentSourceBindingContainer");
		return Clss;
	}

};

// 0x10 (0x38 - 0x28)
// Class OptimusCore.OptimusVariableContainer
class UOptimusVariableContainer : public UObject
{
public:
	TArray<class UOptimusVariableDescription*>   Descriptions;                                      // 0x28(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptimusVariableContainer");
		return Clss;
	}

};

// 0x10 (0x38 - 0x28)
// Class OptimusCore.OptimusResourceContainer
class UOptimusResourceContainer : public UObject
{
public:
	TArray<class UOptimusResourceDescription*>   Descriptions;                                      // 0x28(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptimusResourceContainer");
		return Clss;
	}

};

// 0xF8 (0x120 - 0x28)
// Class OptimusCore.OptimusDeformer
class UOptimusDeformer : public UMeshDeformer
{
public:
	uint8                                        Pad_8206[0x20];                                    // Fixing Size After Last Property..
	class USkeletalMesh*                         Mesh;                                              // 0x48(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FOptimusComputeGraphInfo>      ComputeGraphs;                                     // 0x50(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UOptimusActionStack*                   ActionStack;                                       // 0x60(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UOptimusNodeGraph*>             Graphs;                                            // 0x68(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	class UOptimusComponentSourceBindingContainer* Bindings;                                          // 0x78(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UOptimusVariableContainer*             Variables;                                         // 0x80(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UOptimusResourceContainer*             Resources;                                         // 0x88(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8207[0x90];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptimusDeformer");
		return Clss;
	}

	TArray<class UOptimusVariableDescription*> GetVariables();
	TArray<class UOptimusResourceDescription*> GetResources();
	TArray<class UOptimusComponentSourceBinding*> GetComponentBindings();
};

// 0x18 (0x40 - 0x28)
// Class OptimusCore.OptimusDeformerInstanceSettings
class UOptimusDeformerInstanceSettings : public UMeshDeformerInstanceSettings
{
public:
	TWeakObjectPtr<class UOptimusDeformer>       Deformer;                                          // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FOptimusDeformerInstanceComponentBinding> Bindings;                                          // 0x30(0x10)(Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptimusDeformerInstanceSettings");
		return Clss;
	}

};

// 0xB8 (0xE0 - 0x28)
// Class OptimusCore.OptimusDeformerInstance
class UOptimusDeformerInstance : public UMeshDeformerInstance
{
public:
	TWeakObjectPtr<class UMeshComponent>         MeshComponent;                                     // 0x28(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TWeakObjectPtr<class UOptimusDeformerInstanceSettings> InstanceSettings;                                  // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FOptimusDeformerInstanceExecInfo> ComputeGraphExecInfos;                             // 0x38(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	class UOptimusVariableContainer*             Variables;                                         // 0x48(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8213[0x90];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptimusDeformerInstance");
		return Clss;
	}

	bool SetVectorVariable(class FName InVariableName, struct FVector& InValue);
	bool SetVector4Variable(class FName InVariableName, struct FVector4& InValue);
	bool SetTransformVariable(class FName InVariableName, struct FTransform& InValue);
	bool SetIntVariable(class FName InVariableName, int32 InValue);
	bool SetFloatVariable(class FName InVariableName, double InValue);
	bool SetBoolVariable(class FName InVariableName, bool InValue);
	TArray<class UOptimusVariableDescription*> GetVariables();
	bool EnqueueTriggerGraph(class FName InTriggerGraphName);
};

// 0x58 (0x80 - 0x28)
// Class OptimusCore.OptimusNodeGraph
class UOptimusNodeGraph : public UObject
{
public:
	uint8                                        Pad_8221[0x8];                                     // Fixing Size After Last Property..
	enum class EOptimusNodeGraphType             GraphType;                                         // 0x30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8222[0x4];                                     // Fixing Size After Last Property..
	TArray<class UOptimusNode*>                  Nodes;                                             // 0x38(0x10)(ZeroConstructor, NonTransactional, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<class UOptimusNodeLink*>              Links;                                             // 0x48(0x10)(ZeroConstructor, NonTransactional, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<class UOptimusNodeGraph*>             Subgraphs;                                         // 0x58(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8223[0x18];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptimusNodeGraph");
		return Clss;
	}

	bool RenameGraph(class UOptimusNodeGraph* InGraph, const class FString& InNewName);
	bool RemoveNodes(TArray<class UOptimusNode*>& InNodes);
	bool RemoveNode(class UOptimusNode* InNode);
	bool RemoveLink(class UOptimusNodePin* InNodeOutputPin, class UOptimusNodePin* InNodeInputPin);
	bool RemoveAllLinks(class UOptimusNodePin* InNodePin);
	bool MoveGraph(class UOptimusNodeGraph* InGraph, int32 InInsertBefore);
	bool IsSubGraphReference(class UOptimusNode* InNode);
	bool IsKernelFunction(class UOptimusNode* InNode);
	bool IsFunctionReference(class UOptimusNode* InNode);
	bool IsFunctionGraph();
	bool IsExecutionGraph();
	bool IsCustomKernel(class UOptimusNode* InNode);
	enum class EOptimusNodeGraphType GetGraphType();
	TArray<class UOptimusNodeGraph*> GetGraphs();
	int32 GetGraphIndex();
	TArray<class UOptimusNode*> ExpandCollapsedNodes(class UOptimusNode* InFunctionNode);
	bool DuplicateNodes(TArray<class UOptimusNode*>& InNodes, struct FVector2D& InPosition);
	class UOptimusNode* DuplicateNode(class UOptimusNode* InNode, struct FVector2D& InPosition);
	class UOptimusNode* ConvertFunctionToCustomKernel(class UOptimusNode* InKernelFunction);
	class UOptimusNode* ConvertCustomKernelToFunction(class UOptimusNode* InCustomKernel);
	class UOptimusNode* CollapseNodesToSubGraph(TArray<class UOptimusNode*>& InNodes);
	class UOptimusNode* CollapseNodesToFunction(TArray<class UOptimusNode*>& InNodes);
	class UOptimusNode* AddVariableGetNode(class UOptimusVariableDescription* InVariableDesc, struct FVector2D& InPosition);
	class UOptimusNode* AddValueNode(const struct FOptimusDataTypeRef& InDataTypeRef, struct FVector2D& InPosition);
	class UOptimusNode* AddResourceSetNode(class UOptimusResourceDescription* InResourceDesc, struct FVector2D& InPosition);
	class UOptimusNode* AddResourceNode(class UOptimusResourceDescription* InResourceDesc, struct FVector2D& InPosition);
	class UOptimusNode* AddResourceGetNode(class UOptimusResourceDescription* InResourceDesc, struct FVector2D& InPosition);
	class UOptimusNode* AddNode(TSubclassOf<class UOptimusNode> InNodeClass, struct FVector2D& InPosition);
	bool AddLink(class UOptimusNodePin* InNodeOutputPin, class UOptimusNodePin* InNodeInputPin);
	class UOptimusNode* AddDataInterfaceNode(TSubclassOf<class UOptimusComputeDataInterface> InDataInterfaceClass, struct FVector2D& InPosition);
	class UOptimusNode* AddComponentBindingGetNode(class UOptimusComponentSourceBinding* InComponentBinding, struct FVector2D& InPosition);
};

// 0x30 (0xB0 - 0x80)
// Class OptimusCore.OptimusNodeSubGraph
class UOptimusNodeSubGraph : public UOptimusNodeGraph
{
public:
	TArray<struct FOptimusParameterBinding>      InputBindings;                                     // 0x80(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FOptimusParameterBinding>      OutputBindings;                                    // 0x90(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UOptimusNode_GraphTerminal> EntryNode;                                         // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UOptimusNode_GraphTerminal> ReturnNode;                                        // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptimusNodeSubGraph");
		return Clss;
	}

};

// 0x8 (0xB8 - 0xB0)
// Class OptimusCore.OptimusFunctionNodeGraph
class UOptimusFunctionNodeGraph : public UOptimusNodeSubGraph
{
public:
	class FName                                  Category;                                          // 0xB0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8224[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptimusFunctionNodeGraph");
		return Clss;
	}

};

// 0x10 (0x38 - 0x28)
// Class OptimusCore.OptimusNodeLink
class UOptimusNodeLink : public UObject
{
public:
	class UOptimusNodePin*                       NodeOutputPin;                                     // 0x28(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UOptimusNodePin*                       NodeInputPin;                                      // 0x30(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptimusNodeLink");
		return Clss;
	}

};

// 0x68 (0x90 - 0x28)
// Class OptimusCore.OptimusNodePin
class UOptimusNodePin : public UObject
{
public:
	bool                                         bIsGroupingPin;                                    // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EOptimusNodePinDirection          Direction;                                         // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EOptimusNodePinStorageType        StorageType;                                       // 0x2A(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8225[0x5];                                     // Fixing Size After Last Property..
	struct FOptimusDataDomain                    DataDomain;                                        // 0x30(0x40)(NativeAccessSpecifierPrivate)
	struct FOptimusDataTypeRef                   DataType;                                          // 0x70(0xC)(NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8226[0x4];                                     // Fixing Size After Last Property..
	TArray<class UOptimusNodePin*>               SubPins;                                           // 0x80(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptimusNodePin");
		return Clss;
	}

};

// 0x60 (0x88 - 0x28)
// Class OptimusCore.OptimusResourceDescription
class UOptimusResourceDescription : public UObject
{
public:
	class FName                                  ResourceName;                                      // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FOptimusDataTypeRef                   DataType;                                          // 0x2C(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UOptimusComponentSourceBinding> ComponentBinding;                                  // 0x38(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FOptimusDataDomain                    DataDomain;                                        // 0x40(0x40)(Edit, NativeAccessSpecifierPublic)
	class UOptimusPersistentBufferDataInterface* DataInterface;                                     // 0x80(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptimusResourceDescription");
		return Clss;
	}

};

// 0x18 (0x50 - 0x38)
// Class OptimusCore.OptimusSource
class UOptimusSource : public UComputeSource
{
public:
	uint8                                        Pad_8227[0x8];                                     // Fixing Size After Last Property..
	class FString                                SourceText;                                        // 0x40(0x10)(Edit, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptimusSource");
		return Clss;
	}

};

// 0x10 (0x210 - 0x200)
// Class OptimusCore.OptimusValueContainerGeneratorClass
class UOptimusValueContainerGeneratorClass : public UClass
{
public:
	struct FOptimusDataTypeRef                   DataType;                                          // 0x200(0xC)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_8228[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptimusValueContainerGeneratorClass");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class OptimusCore.OptimusValueContainer
class UOptimusValueContainer : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptimusValueContainer");
		return Clss;
	}

};

// 0x38 (0x60 - 0x28)
// Class OptimusCore.OptimusVariableDescription
class UOptimusVariableDescription : public UObject
{
public:
	struct FGuid                                 Guid;                                              // 0x28(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  VariableName;                                      // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FOptimusDataTypeRef                   DataType;                                          // 0x3C(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	class UOptimusValueContainer*                DefaultValue;                                      // 0x48(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<uint8>                                ValueData;                                         // 0x50(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OptimusVariableDescription");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
