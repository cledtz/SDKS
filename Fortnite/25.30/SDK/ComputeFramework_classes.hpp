#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class ComputeFramework.ComputeDataInterface
class UComputeDataInterface : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ComputeDataInterface");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class ComputeFramework.ComputeDataProvider
class UComputeDataProvider : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ComputeDataProvider");
		return Clss;
	}

};

// 0x70 (0x98 - 0x28)
// Class ComputeFramework.ComputeKernelSource
class UComputeKernelSource : public UObject
{
public:
	class FString                                EntryPoint;                                        // 0x28(0x10)(Edit, ZeroConstructor, EditConst, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FIntVector                            GroupSize;                                         // 0x38(0xC)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5346[0x4];                                     // Fixing Size After Last Property
	struct FComputeKernelPermutationSet          PermutationSet;                                    // 0x48(0x10)(Edit, EditConst, NativeAccessSpecifierPublic)
	struct FComputeKernelDefinitionSet           DefinitionsSet;                                    // 0x58(0x10)(Edit, EditConst, NativeAccessSpecifierPublic)
	TArray<class UComputeSource*>                AdditionalSources;                                 // 0x68(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FShaderFunctionDefinition>     ExternalInputs;                                    // 0x78(0x10)(Edit, EditFixedSize, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FShaderFunctionDefinition>     ExternalOutputs;                                   // 0x88(0x10)(Edit, EditFixedSize, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ComputeKernelSource");
		return Clss;
	}

};

// 0x10 (0x38 - 0x28)
// Class ComputeFramework.ComputeSource
class UComputeSource : public UObject
{
public:
	TArray<class UComputeSource*>                AdditionalSources;                                 // 0x28(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ComputeSource");
		return Clss;
	}

};

// 0x68 (0x90 - 0x28)
// Class ComputeFramework.ComputeGraph
class UComputeGraph : public UObject
{
public:
	TArray<class UComputeKernel*>                KernelInvocations;                                 // 0x28(0x10)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<class UComputeDataInterface*>         DataInterfaces;                                    // 0x38(0x10)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<struct FComputeGraphEdge>             GraphEdges;                                        // 0x48(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<TSubclassOf<class UObject>>           Bindings;                                          // 0x58(0x10)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<int32>                                DataInterfaceToBinding;                            // 0x68(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_5347[0x18];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ComputeGraph");
		return Clss;
	}

};

// 0x20 (0xC0 - 0xA0)
// Class ComputeFramework.ComputeGraphComponent
class UComputeGraphComponent : public UActorComponent
{
public:
	class UComputeGraph*                         ComputeGraph;                                      // 0xA0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FComputeGraphInstance                 ComputeGraphInstance;                              // 0xA8(0x18)(NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ComputeGraphComponent");
		return Clss;
	}

	void QueueExecute();
	void DestroyDataProviders();
	void CreateDataProviders(int32 InBindingIndex, class UObject* InBindingObject);
};

// 0x10 (0x38 - 0x28)
// Class ComputeFramework.ComputeKernel
class UComputeKernel : public UObject
{
public:
	class UComputeKernelSource*                  KernelSource;                                      // 0x28(0x8)(Edit, ZeroConstructor, NoDestructor, AssetRegistrySearchable, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        KernelFlags;                                       // 0x30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_534C[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ComputeKernel");
		return Clss;
	}

};

// 0x10 (0xA8 - 0x98)
// Class ComputeFramework.ComputeKernelFromText
class UComputeKernelFromText : public UComputeKernelSource
{
public:
	struct FFilePath                             SourceFile;                                        // 0x98(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ComputeKernelFromText");
		return Clss;
	}

};

// 0x10 (0x48 - 0x38)
// Class ComputeFramework.ComputeSourceFromText
class UComputeSourceFromText : public UComputeSource
{
public:
	struct FFilePath                             SourceFile;                                        // 0x38(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ComputeSourceFromText");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
