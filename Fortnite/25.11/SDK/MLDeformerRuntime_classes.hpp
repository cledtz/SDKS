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

// 0x20 (0x100 - 0xE0)
// Class MLDeformerRuntime.FortMLDeformerComponent
class UFortMLDeformerComponent : public UMLDeformerComponent
{
public:
	class UMLDeformerAsset*                      RequestedMLDeformerAsset;                          // 0xE0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMeshDeformer*                         RequestedMeshDeformerAsset;                        // 0xE8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_82CD[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortMLDeformerComponent");
		return Clss;
	}

};

// 0x8 (0x528 - 0x520)
// Class MLDeformerRuntime.MLDeformerGameFeatureData
class UMLDeformerGameFeatureData : public UFortGameFeatureData
{
public:
	bool                                         bDisableWhenOwnerIsNotViewTarget;                  // 0x520(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldRampUpWeightWhenEnabled;                    // 0x521(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_82CE[0x2];                                     // Fixing Size After Last Property..
	float                                        WeightIncreasePerSecond;                           // 0x524(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MLDeformerGameFeatureData");
		return Clss;
	}

};

// 0x10 (0x38 - 0x28)
// Class MLDeformerRuntime.GameFeatureAction_LoadPrimaryDataAssets
class UGameFeatureAction_LoadPrimaryDataAssets : public UGameFeatureAction
{
public:
	TArray<class FName>                          AdditionalPrimaryAssetTypesToLoad;                 // 0x28(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameFeatureAction_LoadPrimaryDataAssets");
		return Clss;
	}

};

// 0xF0 (0x120 - 0x30)
// Class MLDeformerRuntime.MLDeformerAssetMapping
class UMLDeformerAssetMapping : public UPrimaryDataAsset
{
public:
	TMap<TSoftObjectPtr<class UAthenaCharacterItemDefinition>, TSoftObjectPtr<class UMLDeformerAsset>> CharacterItemDefinitionToMLDeformerAssetMap;       // 0x30(0x50)(Edit, UObjectWrapper, NativeAccessSpecifierPublic)
	TMap<TSoftObjectPtr<class UCustomCharacterPart>, TSoftObjectPtr<class UMLDeformerAsset>> CharacterPartToMLDeformerAssetMap;                 // 0x80(0x50)(Edit, UObjectWrapper, NativeAccessSpecifierPublic)
	TMap<TSoftObjectPtr<class UMLDeformerAsset>, TSoftObjectPtr<class UMeshDeformer>> MLDeformerToMeshDeformerAssetMap;                  // 0xD0(0x50)(Edit, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MLDeformerAssetMapping");
		return Clss;
	}

};

// 0x28 (0xC8 - 0xA0)
// Class MLDeformerRuntime.MLDeformerComponentManager
class UMLDeformerComponentManager : public UActorComponent
{
public:
	uint8                                        Pad_82CF[0x28];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MLDeformerComponentManager");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
