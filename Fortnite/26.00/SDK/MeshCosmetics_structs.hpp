#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// ScriptStruct MeshCosmetics.PartHandleControllers
struct FPartHandleControllers
{
public:
	uint8                                        Pad_163C[0x20];                                    // Fixing Size Of Struct
};

// 0x20 (0x20 - 0x0)
// ScriptStruct MeshCosmetics.ApparelCustomizableItemReference
struct FApparelCustomizableItemReference
{
public:
	class FString                                GroupName;                                         // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ValueName;                                         // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct MeshCosmetics.CustomizableObjectSprayVariantFixedProperties
struct FCustomizableObjectSprayVariantFixedProperties
{
public:
	struct FVector                               Position;                                          // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Direction;                                         // 0x18(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               UpDirection;                                       // 0x30(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               BaseScale;                                         // 0x48(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        BaseRotation;                                      // 0x60(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_163E[0x4];                                     // Fixing Size Of Struct
};

// 0x18 (0x98 - 0x80)
// ScriptStruct MeshCosmetics.CustomizableObjectSprayVariantSelectablePayload
struct FCustomizableObjectSprayVariantSelectablePayload : public FBaseVariantDef
{
public:
	struct FPrimaryAssetId                       TextureSource;                                     // 0x80(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Saturation;                                        // 0x88(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Wear;                                              // 0x8C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Scale;                                             // 0x90(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1640[0x4];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MeshCosmetics.CustomizableObjectSprayVariantMCPPayload
struct FCustomizableObjectSprayVariantMCPPayload
{
public:
	struct FPrimaryAssetId                       TextureAssetID;                                    // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint16                                       CompactSaturation;                                 // 0x8(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint16                                       CompactWear;                                       // 0xA(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint16                                       CompactScale;                                      // 0xC(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1641[0x2];                                     // Fixing Size Of Struct
};

// 0x30 (0x30 - 0x0)
// ScriptStruct MeshCosmetics.CustomizableObjectSprayVariantPayloadClamps
struct FCustomizableObjectSprayVariantPayloadClamps
{
public:
	struct FFloatRange                           Saturation;                                        // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFloatRange                           Wear;                                              // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFloatRange                           Scale;                                             // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct MeshCosmetics.CustomizableObjectSprayVariantSlotImageProperties
struct FCustomizableObjectSprayVariantSlotImageProperties
{
public:
	TSoftObjectPtr<class UTexture2D>             SprayNotAssignedImage;                             // 0x0(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             SprayAssignedImage;                                // 0x20(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct MeshCosmetics.CustomizableObjectParamVariantBase
struct FCustomizableObjectParamVariantBase
{
public:
	TSoftObjectPtr<class UCustomizableObject>    ObjectToModify;                                    // 0x0(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct MeshCosmetics.CustomizableObjectValueBase
struct FCustomizableObjectValueBase
{
public:
	class FString                                ParameterName;                                     // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RangeIndex;                                        // 0x10(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1646[0x4];                                     // Fixing Size Of Struct
};

// 0x18 (0x30 - 0x18)
// ScriptStruct MeshCosmetics.CustomizableObjectIntValue
struct FCustomizableObjectIntValue : public FCustomizableObjectValueBase
{
public:
	int32                                        NumericValue;                                      // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1647[0x4];                                     // Fixing Size After Last Property 
	class FString                                NamedValue;                                        // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x20 - 0x18)
// ScriptStruct MeshCosmetics.CustomizableObjectFloatValue
struct FCustomizableObjectFloatValue : public FCustomizableObjectValueBase
{
public:
	float                                        Value;                                             // 0x18(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_164B[0x4];                                     // Fixing Size Of Struct
};

// 0x8 (0x20 - 0x18)
// ScriptStruct MeshCosmetics.CustomizableObjectBoolValue
struct FCustomizableObjectBoolValue : public FCustomizableObjectValueBase
{
public:
	bool                                         Value;                                             // 0x18(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_164D[0x7];                                     // Fixing Size Of Struct
};

// 0x10 (0x28 - 0x18)
// ScriptStruct MeshCosmetics.CustomizableObjectVectorValue
struct FCustomizableObjectVectorValue : public FCustomizableObjectValueBase
{
public:
	struct FLinearColor                          Value;                                             // 0x18(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x20 - 0x18)
// ScriptStruct MeshCosmetics.CustomizableObjectTextureValue
struct FCustomizableObjectTextureValue : public FCustomizableObjectValueBase
{
public:
	class UTexture2D*                            Value;                                             // 0x18(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x80 - 0x18)
// ScriptStruct MeshCosmetics.CustomizableObjectProjectorValue
struct FCustomizableObjectProjectorValue : public FCustomizableObjectValueBase
{
public:
	struct FVector                               Position;                                          // 0x18(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Direction;                                         // 0x30(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               UpDirection;                                       // 0x48(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Scale;                                             // 0x60(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Angle;                                             // 0x78(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_164E[0x4];                                     // Fixing Size Of Struct
};

// 0x10 (0x28 - 0x18)
// ScriptStruct MeshCosmetics.CustomizableObjectStateValue
struct FCustomizableObjectStateValue : public FCustomizableObjectValueBase
{
public:
	class FString                                NewState;                                          // 0x18(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x30 - 0x20)
// ScriptStruct MeshCosmetics.CustomizableObjectIntParamVariant
struct FCustomizableObjectIntParamVariant : public FCustomizableObjectParamVariantBase
{
public:
	TArray<struct FCustomizableObjectIntValue>   Parameters;                                        // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x30 - 0x20)
// ScriptStruct MeshCosmetics.CustomizableObjectFloatParamVariant
struct FCustomizableObjectFloatParamVariant : public FCustomizableObjectParamVariantBase
{
public:
	TArray<struct FCustomizableObjectFloatValue> Parameters;                                        // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x30 - 0x20)
// ScriptStruct MeshCosmetics.CustomizableObjectBoolParamVariant
struct FCustomizableObjectBoolParamVariant : public FCustomizableObjectParamVariantBase
{
public:
	TArray<struct FCustomizableObjectBoolValue>  Parameters;                                        // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x30 - 0x20)
// ScriptStruct MeshCosmetics.CustomizableObjectVectorParamVariant
struct FCustomizableObjectVectorParamVariant : public FCustomizableObjectParamVariantBase
{
public:
	TArray<struct FCustomizableObjectVectorValue> Parameters;                                        // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x30 - 0x20)
// ScriptStruct MeshCosmetics.CustomizableObjectTextureParamVariant
struct FCustomizableObjectTextureParamVariant : public FCustomizableObjectParamVariantBase
{
public:
	TArray<struct FCustomizableObjectTextureValue> Parameters;                                        // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x30 - 0x20)
// ScriptStruct MeshCosmetics.CustomizableObjectProjectorVariant
struct FCustomizableObjectProjectorVariant : public FCustomizableObjectParamVariantBase
{
public:
	TArray<struct FCustomizableObjectProjectorValue> Parameters;                                        // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct MeshCosmetics.CustomizableObjectMultilayerProjectsVirtualLayer
struct FCustomizableObjectMultilayerProjectsVirtualLayer
{
public:
	bool                                         bModifyEnabled;                                    // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bModifyProjection;                                 // 0x2(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1657[0x5];                                     // Fixing Size After Last Property 
	struct FVector                               Position;                                          // 0x8(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Direction;                                         // 0x20(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               UpDirection;                                       // 0x38(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Scale;                                             // 0x50(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Angle;                                             // 0x68(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bModifyImage;                                      // 0x6C(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1658[0x3];                                     // Fixing Size After Last Property 
	class FString                                Image;                                             // 0x70(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bModifyOpacity;                                    // 0x80(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1659[0x3];                                     // Fixing Size After Last Property 
	float                                        Opacity;                                           // 0x84(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bModifyOrder;                                      // 0x88(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_165B[0x3];                                     // Fixing Size After Last Property 
	int32                                        Order;                                             // 0x8C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct MeshCosmetics.CustomizableObjectMultilayerProjectors
struct FCustomizableObjectMultilayerProjectors
{
public:
	TMap<class FName, struct FCustomizableObjectMultilayerProjectsVirtualLayer> VirtualLayers;                                     // 0x0(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x50 (0x70 - 0x20)
// ScriptStruct MeshCosmetics.CustomizableObjectMultilayerProjectorVariant
struct FCustomizableObjectMultilayerProjectorVariant : public FCustomizableObjectParamVariantBase
{
public:
	TMap<class FName, struct FCustomizableObjectMultilayerProjectors> MultilayerProjectors;                              // 0x20(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x10 (0x30 - 0x20)
// ScriptStruct MeshCosmetics.CustomizableObjectStateVariant
struct FCustomizableObjectStateVariant : public FCustomizableObjectParamVariantBase
{
public:
	TArray<struct FCustomizableObjectStateValue> States;                                            // 0x20(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x80 (0x100 - 0x80)
// ScriptStruct MeshCosmetics.CustomizableObjectParamsVariantDef
struct FCustomizableObjectParamsVariantDef : public FBaseVariantDef
{
public:
	TArray<struct FCustomizableObjectIntParamVariant> IntParams;                                         // 0x80(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCustomizableObjectFloatParamVariant> FloatParams;                                       // 0x90(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCustomizableObjectBoolParamVariant> BoolParams;                                        // 0xA0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCustomizableObjectVectorParamVariant> VectorParams;                                      // 0xB0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCustomizableObjectTextureParamVariant> TextureParams;                                     // 0xC0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCustomizableObjectProjectorVariant> ProjectorParams;                                   // 0xD0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCustomizableObjectMultilayerProjectorVariant> MultilayerProjectorParams;                         // 0xE0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCustomizableObjectStateVariant> StateVariants;                                     // 0xF0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct MeshCosmetics.MeshCosmeticsCustomizationPerSlotData
struct FMeshCosmeticsCustomizationPerSlotData
{
public:
	uint8                                        Pad_1662[0x8];                                     // Fixing Size Of Struct
};

// 0x2A0 (0x2A0 - 0x0)
// ScriptStruct MeshCosmetics.MeshCosmeticsCustomizableObjectEntry
struct FMeshCosmeticsCustomizableObjectEntry
{
public:
	uint8                                        Pad_1663[0x2A0];                                   // Fixing Size Of Struct
};

// 0x20 (0x20 - 0x0)
// ScriptStruct MeshCosmetics.MeshCosmeticsCustomizationCCV2Data
struct FMeshCosmeticsCustomizationCCV2Data
{
public:
	uint8                                        Pad_1664[0x20];                                    // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MeshCosmetics.MeshCosmeticsImageProviderWrapper
struct FMeshCosmeticsImageProviderWrapper
{
public:
	class UDefaultImageProvider*                 ImageProvider;                                     // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1666[0x8];                                     // Fixing Size Of Struct
};

// 0x30 (0x30 - 0x0)
// ScriptStruct MeshCosmetics.PendingCustomizationComponentsList
struct FPendingCustomizationComponentsList
{
public:
	uint8                                        Pad_1667[0x30];                                    // Fixing Size Of Struct
};

// 0x20 (0x20 - 0x0)
// ScriptStruct MeshCosmetics.LoadedAthenaCosmeticAssets
struct FLoadedAthenaCosmeticAssets
{
public:
	uint8                                        Pad_1668[0x20];                                    // Fixing Size Of Struct
};

// 0x58 (0x58 - 0x0)
// ScriptStruct MeshCosmetics.PendingVariantAssetsToLoad
struct FPendingVariantAssetsToLoad
{
public:
	uint8                                        Pad_1669[0x58];                                    // Fixing Size Of Struct
};

// 0x2 (0x2 - 0x0)
// ScriptStruct MeshCosmetics.CosmeticSlotSelector
struct FCosmeticSlotSelector
{
public:
	enum class EFortCustomPartType               LegacyPartType;                                    // 0x0(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAthenaCustomizationCategory      SourceCategory;                                    // 0x1(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct MeshCosmetics.SkeletalComponentData
struct FSkeletalComponentData
{
public:
	class UMeshCosmeticsLayoutSchema*            LayoutSchema;                                      // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCosmeticSlotSelector                 Slot;                                              // 0x8(0x2)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_166D[0x6];                                     // Fixing Size After Last Property 
	class UCustomizableObject*                   CustomizableObject;                                // 0x10(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct MeshCosmetics.CosmeticsLayoutSlot
struct FCosmeticsLayoutSlot
{
public:
	TSoftObjectPtr<class UCustomizableObject>    SlottedObject;                                     // 0x0(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ComponentIndex;                                    // 0x20(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCosmeticSlotSelector                 RequiredCosmeticPart;                              // 0x24(0x2)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1670[0x2];                                     // Fixing Size After Last Property 
	TSoftClassPtr<class UAnimInstance>           ProportionalLayerAnimBP;                           // 0x28(0x20)(Edit, BlueprintVisible, BlueprintReadOnly, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<int32, class FName>                     LinkedAnimGraphTag;                                // 0x48(0x50)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x110 (0x110 - 0x0)
// ScriptStruct MeshCosmetics.MeshCosmeticsPassDataCommon
struct FMeshCosmeticsPassDataCommon
{
public:
	TMap<struct FCosmeticSlotSelector, struct FCosmeticsLayoutSlot> AllSlotDataConfigs;                                // 0x0(0x50)(NativeAccessSpecifierPublic)
	TMap<struct FCosmeticSlotSelector, class UMeshCosmeticsLayoutSchema*> ProvidedSlotsToSchemaData;                         // 0x50(0x50)(UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class UAthenaCosmeticItemDefinition*> MeshCosmeticsItemDefs;                             // 0xA0(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class UObject*>                       KeepLoadedObjects;                                 // 0xB0(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TMap<class UCustomizableSkeletalComponent*, struct FSkeletalComponentData> SkeletalComponentData;                             // 0xC0(0x50)(ContainsInstancedReference, NativeAccessSpecifierPublic)
};

}


