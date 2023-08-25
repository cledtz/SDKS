#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x108 - 0xE8)
// Class MLDeformerRuntime.FortMLDeformerComponent
class UFortMLDeformerComponent : public UMLDeformerComponent
{
public:
	class UMLDeformerAsset*                      RequestedMLDeformerAsset;                          // 0xE8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMeshDeformer*                         RequestedMeshDeformerAsset;                        // 0xF0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2DEE[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortMLDeformerComponent* GetDefaultObj();

};

// 0x8 (0x4A0 - 0x498)
// Class MLDeformerRuntime.MLDeformerGameFeatureData
class UMLDeformerGameFeatureData : public UFortGameFeatureData
{
public:
	bool                                         bDisableWhenOwnerIsNotViewTarget;                  // 0x498(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShouldRampUpWeightWhenEnabled;                    // 0x499(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2DF1[0x2];                                     // Fixing Size After Last Property 
	float                                        WeightIncreasePerSecond;                           // 0x49C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMLDeformerGameFeatureData* GetDefaultObj();

};

// 0xF0 (0x120 - 0x30)
// Class MLDeformerRuntime.MLDeformerAssetMapping
class UMLDeformerAssetMapping : public UPrimaryDataAsset
{
public:
	TMap<TSoftObjectPtr<class UAthenaCharacterItemDefinition>, TSoftObjectPtr<class UMLDeformerAsset>> CharacterItemDefinitionToMLDeformerAssetMap;       // 0x30(0x50)(Edit, UObjectWrapper, NativeAccessSpecifierPublic)
	TMap<TSoftObjectPtr<class UCustomCharacterPart>, TSoftObjectPtr<class UMLDeformerAsset>> CharacterPartToMLDeformerAssetMap;                 // 0x80(0x50)(Edit, UObjectWrapper, NativeAccessSpecifierPublic)
	TMap<TSoftObjectPtr<class UMLDeformerAsset>, TSoftObjectPtr<class UMeshDeformer>> MLDeformerToMeshDeformerAssetMap;                  // 0xD0(0x50)(Edit, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMLDeformerAssetMapping* GetDefaultObj();

};

// 0x28 (0xC8 - 0xA0)
// Class MLDeformerRuntime.MLDeformerComponentManager
class UMLDeformerComponentManager : public UActorComponent
{
public:
	uint8                                        Pad_2DF6[0x28];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UMLDeformerComponentManager* GetDefaultObj();

};

}


