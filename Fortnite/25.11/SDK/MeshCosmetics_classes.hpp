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

// 0x0 (0x58 - 0x58)
// Class MeshCosmetics.MeshCosmeticsStep_CompileCustomizableObjects
class UMeshCosmeticsStep_CompileCustomizableObjects : public UFortCosmeticStep
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MeshCosmeticsStep_CompileCustomizableObjects");
		return Clss;
	}

};

// 0x28 (0x800 - 0x7D8)
// Class MeshCosmetics.MeshCosmeticsApparelItemDefinition
class UMeshCosmeticsApparelItemDefinition : public UFortApparelItemDefinition
{
public:
	struct FCosmeticSlotSelector                 SlotValidWithin;                                   // 0x7D8(0x2)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8275[0x6];                                     // Fixing Size After Last Property..
	struct FApparelCustomizableItemReference     Parameter;                                         // 0x7E0(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MeshCosmeticsApparelItemDefinition");
		return Clss;
	}

};

// 0x10 (0x88 - 0x78)
// Class MeshCosmetics.FortCustomizableObjectParameterVariant
class UFortCustomizableObjectParameterVariant : public UFortCosmeticVariantBackedByArray
{
public:
	TArray<struct FCustomizableObjectParamsVariantDef> ParameterOptions;                                  // 0x78(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCustomizableObjectParameterVariant");
		return Clss;
	}

	void ApplyVariants(class AActor* Actor, struct FFortAthenaLoadout& Loadout);
};

// 0x1F0 (0x268 - 0x78)
// Class MeshCosmetics.FortCustomizableObjectSprayVariant
class UFortCustomizableObjectSprayVariant : public UFortCosmeticVariant
{
public:
	struct FGameplayTag                          ActiveSelectionTag;                                // 0x78(0x4)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8276[0x4];                                     // Fixing Size After Last Property..
	class FString                                EnabledParamName;                                  // 0x80(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                ProjectorParamName;                                // 0x90(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                TextureParamName;                                  // 0xA0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                SaturationParamName;                               // 0xB0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                WearParamName;                                     // 0xC0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGameplayTagQuery                     TagQueryForShouldOverrideCODefaultsWithFixedLocationParameters; // 0xD0(0x48)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FCustomizableObjectSprayVariantFixedProperties FixedSprayLocation;                                // 0x118(0x68)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FCustomizableObjectSprayVariantSelectablePayload DefaultSprayCustomization;                         // 0x180(0xA8)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	struct FCustomizableObjectSprayVariantPayloadClamps SprayNumericConstraints;                           // 0x228(0x30)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_8277[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCustomizableObjectSprayVariant");
		return Clss;
	}

};

// 0x0 (0x58 - 0x58)
// Class MeshCosmetics.MeshCosmeticsStep_ComponentRemoval
class UMeshCosmeticsStep_ComponentRemoval : public UFortCosmeticStep
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MeshCosmeticsStep_ComponentRemoval");
		return Clss;
	}

};

// 0x0 (0x30 - 0x30)
// Class MeshCosmetics.MeshCosmeticsOption_ApplyCustomizableObject
class UMeshCosmeticsOption_ApplyCustomizableObject : public UFortCosmeticFlowOption
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MeshCosmeticsOption_ApplyCustomizableObject");
		return Clss;
	}

};

// 0x0 (0x58 - 0x58)
// Class MeshCosmetics.MeshCosmeticsStep_RemoveCustomizableSkeletalComponents
class UMeshCosmeticsStep_RemoveCustomizableSkeletalComponents : public UFortCosmeticStep
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MeshCosmeticsStep_RemoveCustomizableSkeletalComponents");
		return Clss;
	}

};

// 0x0 (0x58 - 0x58)
// Class MeshCosmetics.MeshCosmeticsVariance_ApplyParameters
class UMeshCosmeticsVariance_ApplyParameters : public UFortCosmeticStep
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MeshCosmeticsVariance_ApplyParameters");
		return Clss;
	}

};

// 0x0 (0x58 - 0x58)
// Class MeshCosmetics.MeshCosmeticsVariance_CompileObjects
class UMeshCosmeticsVariance_CompileObjects : public UFortCosmeticStep
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MeshCosmeticsVariance_CompileObjects");
		return Clss;
	}

};

// 0x0 (0x58 - 0x58)
// Class MeshCosmetics.MeshCosmeticsVariance_ManageComponents
class UMeshCosmeticsVariance_ManageComponents : public UFortCosmeticStep
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MeshCosmeticsVariance_ManageComponents");
		return Clss;
	}

};

// 0x0 (0x58 - 0x58)
// Class MeshCosmetics.MeshCosmeticsVariance_ProcessVariantAssets
class UMeshCosmeticsVariance_ProcessVariantAssets : public UFortCosmeticStep
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MeshCosmeticsVariance_ProcessVariantAssets");
		return Clss;
	}

};

// 0x0 (0x58 - 0x58)
// Class MeshCosmetics.MeshCosmeticsStep_ChooseParameters
class UMeshCosmeticsStep_ChooseParameters : public UFortCosmeticStep
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MeshCosmeticsStep_ChooseParameters");
		return Clss;
	}

};

// 0x0 (0x58 - 0x58)
// Class MeshCosmetics.MeshCosmeticsStep_CommitChosenParams
class UMeshCosmeticsStep_CommitChosenParams : public UFortCosmeticStep
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MeshCosmeticsStep_CommitChosenParams");
		return Clss;
	}

};

// 0x0 (0x58 - 0x58)
// Class MeshCosmetics.MeshCosmeticsStep_HandleGeneratedMesh
class UMeshCosmeticsStep_HandleGeneratedMesh : public UFortCosmeticStep
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MeshCosmeticsStep_HandleGeneratedMesh");
		return Clss;
	}

};

// 0x0 (0x58 - 0x58)
// Class MeshCosmetics.MeshCosmeticsStep_PlaceComponent
class UMeshCosmeticsStep_PlaceComponent : public UFortCosmeticStep
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MeshCosmeticsStep_PlaceComponent");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class MeshCosmetics.GameFeatureAction_MeshCosmeticsCompileSchemaDepenencies
class UGameFeatureAction_MeshCosmeticsCompileSchemaDepenencies : public UGameFeatureAction
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameFeatureAction_MeshCosmeticsCompileSchemaDepenencies");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class MeshCosmetics.MeshCosmeticTagInterface
class UMeshCosmeticTagInterface : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MeshCosmeticTagInterface");
		return Clss;
	}

	void OnPostCustomizationAnimGameplayTags_BP(struct FGameplayTagContainer& GameplayTags);
};

// 0x0 (0x28 - 0x28)
// Class MeshCosmetics.FortCustomizableInstanceLODManagement
class UFortCustomizableInstanceLODManagement : public UCustomizableInstanceLODManagementBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCustomizableInstanceLODManagement");
		return Clss;
	}

};

// 0xA0 (0x448 - 0x3A8)
// Class MeshCosmetics.MeshCosmeticsLayoutSchema
class UMeshCosmeticsLayoutSchema : public UFortApparelLayoutItemDefinition
{
public:
	TMap<struct FCosmeticSlotSelector, struct FCosmeticsLayoutSlot> SlotDataConfig;                                    // 0x3A8(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, NativeAccessSpecifierProtected)
	TMap<struct FCosmeticSlotSelector, TSoftObjectPtr<class UCustomizableObject>> SlottedCustomizableObjects;                        // 0x3F8(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MeshCosmeticsLayoutSchema");
		return Clss;
	}

};

// 0x28 (0x50 - 0x28)
// Class MeshCosmetics.MeshCosmeticsAppliedSchemaData
class UMeshCosmeticsAppliedSchemaData : public UFortCosmeticItemAdditionalData
{
public:
	TSoftObjectPtr<class UMeshCosmeticsLayoutSchema> SchemaAsset;                                       // 0x28(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MeshCosmeticsAppliedSchemaData");
		return Clss;
	}

};

// 0x10 (0x38 - 0x28)
// Class MeshCosmetics.MeshCosmeticsSupportedSchemaData
class UMeshCosmeticsSupportedSchemaData : public UFortCosmeticItemAdditionalData
{
public:
	TArray<TSoftObjectPtr<class UMeshCosmeticsLayoutSchema>> SupportedSchemas;                                  // 0x28(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MeshCosmeticsSupportedSchemaData");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
