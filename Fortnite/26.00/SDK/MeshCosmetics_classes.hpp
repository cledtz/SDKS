#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x58 - 0x58)
// Class MeshCosmetics.MeshCosmeticsStep_CompileCustomizableObjects
class UMeshCosmeticsStep_CompileCustomizableObjects : public UFortCosmeticStep
{
public:

	static class UClass* StaticClass();
	static class UMeshCosmeticsStep_CompileCustomizableObjects* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class MeshCosmetics.MeshCosmeticsAdditionalData_SpecifyMaterialOnlyParams
class UMeshCosmeticsAdditionalData_SpecifyMaterialOnlyParams : public UFortCosmeticItemAdditionalData
{
public:
	TArray<class FName>                          MaterialOnlyParameterNames;                        // 0x28(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMeshCosmeticsAdditionalData_SpecifyMaterialOnlyParams* GetDefaultObj();

};

// 0x0 (0x58 - 0x58)
// Class MeshCosmetics.MeshCosmeticsStep_HandleGeneratedMesh
class UMeshCosmeticsStep_HandleGeneratedMesh : public UFortCosmeticStep
{
public:

	static class UClass* StaticClass();
	static class UMeshCosmeticsStep_HandleGeneratedMesh* GetDefaultObj();

};

// 0x0 (0x58 - 0x58)
// Class MeshCosmetics.MeshCosmeticsStep_PlaceComponent
class UMeshCosmeticsStep_PlaceComponent : public UFortCosmeticStep
{
public:

	static class UClass* StaticClass();
	static class UMeshCosmeticsStep_PlaceComponent* GetDefaultObj();

};

// 0x28 (0x798 - 0x770)
// Class MeshCosmetics.MeshCosmeticsApparelItemDefinition
class UMeshCosmeticsApparelItemDefinition : public UFortApparelItemDefinition
{
public:
	struct FCosmeticSlotSelector                 SlotValidWithin;                                   // 0x770(0x2)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_15F0[0x6];                                     // Fixing Size After Last Property 
	struct FApparelCustomizableItemReference     Parameter;                                         // 0x778(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UMeshCosmeticsApparelItemDefinition* GetDefaultObj();

};

// 0x10 (0x80 - 0x70)
// Class MeshCosmetics.FortCustomizableObjectParameterVariant
class UFortCustomizableObjectParameterVariant : public UFortCosmeticVariantBackedByArray
{
public:
	TArray<struct FCustomizableObjectParamsVariantDef> ParameterOptions;                                  // 0x70(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UFortCustomizableObjectParameterVariant* GetDefaultObj();

	void ApplyVariants(class UActor* Actor, struct FFortAthenaLoadout& Loadout);
};

// 0x238 (0x2A8 - 0x70)
// Class MeshCosmetics.FortCustomizableObjectSprayVariant
class UFortCustomizableObjectSprayVariant : public UFortCosmeticVariant
{
public:
	struct FGameplayTag                          ActiveSelectionTag;                                // 0x70(0x4)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_15FD[0x4];                                     // Fixing Size After Last Property 
	class FString                                EnabledParamName;                                  // 0x78(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                ProjectorParamName;                                // 0x88(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                TextureParamName;                                  // 0x98(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                SaturationParamName;                               // 0xA8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                WearParamName;                                     // 0xB8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                ScaleParamName;                                    // 0xC8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTagQuery                     TagQueryForShouldOverrideCODefaultsWithFixedLocationParameters; // 0xD8(0x48)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FCustomizableObjectSprayVariantFixedProperties FixedSprayLocation;                                // 0x120(0x68)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FCustomizableObjectSprayVariantSelectablePayload DefaultSprayCustomization;                         // 0x188(0x98)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FCustomizableObjectSprayVariantPayloadClamps SprayNumericConstraints;                           // 0x220(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	float                                        TextureBaseScale;                                  // 0x250(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1602[0x4];                                     // Fixing Size After Last Property 
	struct FCustomizableObjectSprayVariantSlotImageProperties SpraySlotImageProperties;                          // 0x258(0x40)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_1603[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortCustomizableObjectSprayVariant* GetDefaultObj();

};

// 0x0 (0x58 - 0x58)
// Class MeshCosmetics.MeshCosmeticsStep_ComponentRemoval
class UMeshCosmeticsStep_ComponentRemoval : public UFortCosmeticStep
{
public:

	static class UClass* StaticClass();
	static class UMeshCosmeticsStep_ComponentRemoval* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class MeshCosmetics.MeshCosmeticsOption_ApplyAssembledMeshSchema
class UMeshCosmeticsOption_ApplyAssembledMeshSchema : public UFortCosmeticFlowOption
{
public:

	static class UClass* StaticClass();
	static class UMeshCosmeticsOption_ApplyAssembledMeshSchema* GetDefaultObj();

};

// 0x0 (0x30 - 0x30)
// Class MeshCosmetics.MeshCosmeticsOption_ApplyCustomizableObject
class UMeshCosmeticsOption_ApplyCustomizableObject : public UFortCosmeticFlowOption
{
public:

	static class UClass* StaticClass();
	static class UMeshCosmeticsOption_ApplyCustomizableObject* GetDefaultObj();

};

// 0x0 (0x58 - 0x58)
// Class MeshCosmetics.MeshCosmeticsStep_RemoveCustomizableSkeletalComponents
class UMeshCosmeticsStep_RemoveCustomizableSkeletalComponents : public UFortCosmeticStep
{
public:

	static class UClass* StaticClass();
	static class UMeshCosmeticsStep_RemoveCustomizableSkeletalComponents* GetDefaultObj();

};

// 0x0 (0x58 - 0x58)
// Class MeshCosmetics.MeshCosmeticsVariance_ApplyParameters
class UMeshCosmeticsVariance_ApplyParameters : public UFortCosmeticStep
{
public:

	static class UClass* StaticClass();
	static class UMeshCosmeticsVariance_ApplyParameters* GetDefaultObj();

};

// 0x0 (0x58 - 0x58)
// Class MeshCosmetics.MeshCosmeticsVariance_CompileObjects
class UMeshCosmeticsVariance_CompileObjects : public UFortCosmeticStep
{
public:

	static class UClass* StaticClass();
	static class UMeshCosmeticsVariance_CompileObjects* GetDefaultObj();

};

// 0x0 (0x58 - 0x58)
// Class MeshCosmetics.MeshCosmeticsVariance_ManageComponents
class UMeshCosmeticsVariance_ManageComponents : public UFortCosmeticStep
{
public:

	static class UClass* StaticClass();
	static class UMeshCosmeticsVariance_ManageComponents* GetDefaultObj();

};

// 0x0 (0x58 - 0x58)
// Class MeshCosmetics.MeshCosmeticsVariance_ProcessVariantAssets
class UMeshCosmeticsVariance_ProcessVariantAssets : public UFortCosmeticStep
{
public:

	static class UClass* StaticClass();
	static class UMeshCosmeticsVariance_ProcessVariantAssets* GetDefaultObj();

};

// 0x0 (0x58 - 0x58)
// Class MeshCosmetics.MeshCosmeticsStep_ChooseParameters
class UMeshCosmeticsStep_ChooseParameters : public UFortCosmeticStep
{
public:

	static class UClass* StaticClass();
	static class UMeshCosmeticsStep_ChooseParameters* GetDefaultObj();

};

// 0x0 (0x58 - 0x58)
// Class MeshCosmetics.MeshCosmeticsStep_CommitChosenParams
class UMeshCosmeticsStep_CommitChosenParams : public UFortCosmeticStep
{
public:

	static class UClass* StaticClass();
	static class UMeshCosmeticsStep_CommitChosenParams* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshCosmetics.GameFeatureAction_MeshCosmeticsCompileSchemaDepenencies
class UGameFeatureAction_MeshCosmeticsCompileSchemaDepenencies : public UGameFeatureAction
{
public:

	static class UClass* StaticClass();
	static class UGameFeatureAction_MeshCosmeticsCompileSchemaDepenencies* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MeshCosmetics.MeshCosmeticTagInterface
class UMeshCosmeticTagInterface : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UMeshCosmeticTagInterface* GetDefaultObj();

	void OnPostCustomizationAnimGameplayTags_BP(struct FGameplayTagContainer& GameplayTags);
};

// 0x0 (0x28 - 0x28)
// Class MeshCosmetics.FortCustomizableInstanceLODManagement
class UFortCustomizableInstanceLODManagement : public UCustomizableInstanceLODManagementBase
{
public:

	static class UClass* StaticClass();
	static class UFortCustomizableInstanceLODManagement* GetDefaultObj();

};

// 0xA0 (0x418 - 0x378)
// Class MeshCosmetics.MeshCosmeticsLayoutSchema
class UMeshCosmeticsLayoutSchema : public UFortApparelLayoutItemDefinition
{
public:
	TMap<struct FCosmeticSlotSelector, struct FCosmeticsLayoutSlot> SlotDataConfig;                                    // 0x378(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	TMap<struct FCosmeticSlotSelector, TSoftObjectPtr<class UCustomizableObject>> SlottedCustomizableObjects;                        // 0x3C8(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UMeshCosmeticsLayoutSchema* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class MeshCosmetics.MeshCosmeticsAppliedSchemaData
class UMeshCosmeticsAppliedSchemaData : public UFortCosmeticItemAdditionalData
{
public:
	TSoftObjectPtr<class UMeshCosmeticsLayoutSchema> SchemaAsset;                                       // 0x28(0x20)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMeshCosmeticsAppliedSchemaData* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class MeshCosmetics.MeshCosmeticsSupportedSchemaData
class UMeshCosmeticsSupportedSchemaData : public UFortCosmeticItemAdditionalData
{
public:
	TArray<TSoftObjectPtr<class UMeshCosmeticsLayoutSchema>> SupportedSchemas;                                  // 0x28(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMeshCosmeticsSupportedSchemaData* GetDefaultObj();

};

}


