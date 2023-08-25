#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x2A0 (0x2C8 - 0x28)
// Class CustomizableObject.CustomizableInstancePrivateData
class UCustomizableInstancePrivateData : public UObject
{
public:
	TArray<struct FGeneratedMaterial>            GeneratedMaterials;                                // 0x28(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<struct FGeneratedTexture>             GeneratedTextures;                                 // 0x38(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_1472[0x60];                                    // Fixing Size After Last Property 
	TMap<class FString, TWeakObjectPtr<class UTexture2D>> TextureReuseCache;                                 // 0xA8(0x50)(Transient, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        Pad_1474[0x88];                                    // Fixing Size After Last Property 
	TArray<struct FCustomizableInstanceComponentData> ComponentsData;                                    // 0x180(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<class UMaterialInterface*>            ReferencedMaterials;                               // 0x190(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        Pad_1475[0x60];                                    // Fixing Size After Last Property 
	TArray<class UPhysicsAsset*>                 ClothingPhysicsAssets;                             // 0x200(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class UAnimInstance>>     GatheredAnimBPs;                                   // 0x210(0x10)(Edit, EditFixedSize, ZeroConstructor, Transient, EditConst, UObjectWrapper, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 AnimBPGameplayTags;                                // 0x220(0x20)(Edit, EditFixedSize, Transient, EditConst, NativeAccessSpecifierPublic)
	TMap<TSubclassOf<class UAnimInstance>, struct FAnimBpGeneratedPhysicsAssets> AnimBpPhysicsAssets;                               // 0x240(0x50)(Edit, EditFixedSize, Transient, EditConst, NativeAccessSpecifierPublic)
	uint8                                        Pad_1477[0x38];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UCustomizableInstancePrivateData* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class CustomizableObject.CustomizableObjectExtension
class UCustomizableObjectExtension : public UObject
{
public:

	static class UClass* StaticClass();
	static class UCustomizableObjectExtension* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class CustomizableObject.CustomizableInstanceLODManagementBase
class UCustomizableInstanceLODManagementBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UCustomizableInstanceLODManagementBase* GetDefaultObj();

};

// 0x58 (0x80 - 0x28)
// Class CustomizableObject.CustomizableInstanceLODManagement
class UCustomizableInstanceLODManagement : public UCustomizableInstanceLODManagementBase
{
public:
	uint8                                        Pad_147F[0x58];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UCustomizableInstanceLODManagement* GetDefaultObj();

};

// 0xA0 (0xC8 - 0x28)
// Class CustomizableObject.MutableMaskOutCache
class UMutableMaskOutCache : public UObject
{
public:
	TMap<class FString, class FString>           Materials;                                         // 0x28(0x50)(NativeAccessSpecifierPublic)
	TMap<class FString, struct FMaskOutTexture>  Textures;                                          // 0x78(0x50)(NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UMutableMaskOutCache* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class CustomizableObject.CustomizableObjectBulk
class UCustomizableObjectBulk : public UObject
{
public:
	TArray<class FString>                        BulkDataFileNames;                                 // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UCustomizableObjectBulk* GetDefaultObj();

};

// 0x408 (0x430 - 0x28)
// Class CustomizableObject.CustomizableObject
class UCustomizableObject : public UObject
{
public:
	TArray<struct FMutableRefSkeletalMeshData>   ReferenceSkeletalMeshesData;                       // 0x28(0x10)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UMaterialInterface>> ReferencedMaterials;                               // 0x38(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<class FName>                          ReferencedMaterialSlotNames;                       // 0x48(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class USkeleton>>      ReferencedSkeletons;                               // 0x58(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UTexture>>       ReferencedPassThroughTextures;                     // 0x68(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	struct FMutableLODSettings                   LODSettings;                                       // 0x78(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	TArray<struct FMutableModelImageProperties>  ImageProperties;                                   // 0x88(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	TArray<struct FMorphTargetInfo>              ContributingMorphTargetsInfo;                      // 0x98(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<struct FMorphTargetVertexData>        MorphTargetReconstructionData;                     // 0xA8(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<struct FCustomizableObjectClothConfigData> ClothSharedConfigsData;                            // 0xB8(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<struct FCustomizableObjectClothingAssetData> ContributingClothingAssetsData;                    // 0xC8(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<struct FCustomizableObjectMeshToMeshVertData> ClothMeshToMeshVertData;                           // 0xD8(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	TArray<struct FMutableSkinWeightProfileInfo> SkinWeightProfilesInfo;                            // 0xE8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCustomizableObjectExtensionData> AlwaysLoadedExtensionData;                         // 0xF8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FCustomizableObjectStreamedExtensionData> StreamedExtensionData;                             // 0x108(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        NumMeshComponentsInRoot;                           // 0x118(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1533[0x14];                                    // Fixing Size After Last Property 
	TArray<struct FMutableModelParameterProperties> ParameterProperties;                               // 0x130(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1534[0x50];                                    // Fixing Size After Last Property 
	TMap<class FString, struct FParameterUIData> ParameterUIDataMap;                                // 0x190(0x50)(NativeAccessSpecifierPublic)
	TArray<class FName>                          LowPriorityTextures;                               // 0x1E0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<class FString, struct FParameterUIData> StateUIDataMap;                                    // 0x1F0(0x50)(NativeAccessSpecifierPublic)
	TMap<class FString, TSoftObjectPtr<class UPhysicsAsset>> PhysicsAssetsMap;                                  // 0x240(0x50)(UObjectWrapper, NativeAccessSpecifierPublic)
	TMap<class FString, TSoftClassPtr<class UAnimInstance>> AnimBPAssetsMap;                                   // 0x290(0x50)(UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FAnimBpOverridePhysicsAssetsInfo> AnimBpOverridePhysiscAssetsInfo;                   // 0x2E0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMutableRefSocket>             SocketArray;                                       // 0x2F0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMutableMaskOutCache>   MaskOutCache;                                      // 0x300(0x20)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<uint64, struct FMutableStreamableBlock> HashToStreamableBlock;                             // 0x320(0x50)(NativeAccessSpecifierPublic)
	TArray<class FString>                        CustomizableObjectClassTags;                       // 0x370(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        PopulationClassTags;                               // 0x380(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<class FString, struct FParameterTags>   CustomizableObjectParametersTags;                  // 0x390(0x50)(NativeAccessSpecifierPublic)
	TArray<class FName>                          BoneNames;                                         // 0x3E0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1539[0x10];                                    // Fixing Size After Last Property 
	class UMutableMaskOutCache*                  MaskOutCache_HardRef;                              // 0x400(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FGuid                                 CompilationGuid;                                   // 0x408(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCustomizableObjectBulk*               BulkData;                                          // 0x418(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_153B[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UCustomizableObject* GetDefaultObj();

	void UnloadReferenceSkeletalMeshes();
	void UnloadMaskOutCache();
	void LoadReferenceSkeletalMeshesAsync();
	void LoadMaskOutCache();
	bool IsParameterMultidimensional(const class FString& InParameterName);
	bool IsCompiled();
	struct FParameterUIData GetStateUIMetadataFromIndex(int32 StateIndex);
	struct FParameterUIData GetStateUIMetadata(const class FString& StateName);
	class FString GetStateParameterName(const class FString& StateName, int32 ParameterIndex);
	int32 GetStateParameterCount(const class FString& StateName);
	class FString GetStateName(int32 StateIndex);
	int32 GetStateCount();
	void GetProjectorParameterDefaultValue(const class FString& InParameterName, struct FVector3f* OutPos, struct FVector3f* OutDirection, struct FVector3f* OutUp, struct FVector3f* OutScale, float* OutAngle, enum class ECustomizableObjectProjectorType* OutType);
	struct FParameterUIData GetParameterUIMetadataFromIndex(int32 ParamIndex);
	struct FParameterUIData GetParameterUIMetadata(const class FString& ParamName);
	enum class EMutableParameterType GetParameterTypeByName(const class FString& Name);
	enum class EMutableParameterType GetParameterType(int32 ParamIndex);
	class FString GetParameterName(int32 ParamIndex);
	int32 GetParameterDescriptionCount(const class FString& ParamName);
	int32 GetParameterCount();
	int32 GetIntParameterNumOptions(int32 ParamIndex);
	int32 GetIntParameterDefaultValue(const class FString& InParameterName);
	class FString GetIntParameterAvailableOption(int32 ParamIndex, int32 K);
	float GetFloatParameterDefaultValue(const class FString& InParameterName);
	int32 GetComponentCount();
	struct FLinearColor GetColorParameterDefaultValue(const class FString& InParameterName);
	bool GetBoolParameterDefaultValue(const class FString& InParameterName);
	int32 FindParameter(const class FString& Name);
	class UCustomizableObjectInstance* CreateInstance();
};

// 0x0 (0x2A8 - 0x2A8)
// Class CustomizableObject.DGGUI
class UDGGUI : public UUserWidget
{
public:

	static class UClass* StaticClass();
	static class UDGGUI* GetDefaultObj();

	void SetCustomizableSkeletalComponent(class UCustomizableSkeletalComponent* CustomizableSkeletalComponent);
	class UCustomizableSkeletalComponent* GetCustomizableSkeletalComponent();
};

// 0x368 (0x390 - 0x28)
// Class CustomizableObject.CustomizableObjectInstance
class UCustomizableObjectInstance : public UObject
{
public:
	FMulticastInlineDelegateProperty_            BeginUpdateDelegate;                               // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_169D[0x18];                                    // Fixing Size After Last Property 
	FMulticastInlineDelegateProperty_            UpdatedDelegate;                                   // 0x50(0x10)(ZeroConstructor, Transient, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_169E[0x18];                                    // Fixing Size After Last Property 
	FMulticastInlineDelegateProperty_            BeginDestroyDelegate;                              // 0x78(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_16A0[0x68];                                    // Fixing Size After Last Property 
	TArray<class USkeletalMesh*>                 SkeletalMeshes;                                    // 0xF0(0x10)(Edit, ZeroConstructor, Transient, EditConst, UObjectWrapper, NativeAccessSpecifierPublic)
	class FString                                SkeletalMeshStatus;                                // 0x100(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16A1[0x48];                                    // Fixing Size After Last Property 
	struct FCustomizableObjectInstanceDescriptor Descriptor;                                        // 0x158(0x128)(NativeAccessSpecifierPrivate)
	class UCustomizableInstancePrivateData*      PrivateData;                                       // 0x280(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_16A4[0x48];                                    // Fixing Size After Last Property 
	class UCustomizableObject*                   CustomizableObject;                                // 0x2D0(0x8)(ZeroConstructor, Deprecated, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FCustomizableObjectBoolParameterValue> BoolParameters;                                    // 0x2D8(0x10)(ZeroConstructor, Deprecated, NativeAccessSpecifierPrivate)
	TArray<struct FCustomizableObjectIntParameterValue> IntParameters;                                     // 0x2E8(0x10)(ZeroConstructor, Deprecated, NativeAccessSpecifierPrivate)
	TArray<struct FCustomizableObjectFloatParameterValue> FloatParameters;                                   // 0x2F8(0x10)(ZeroConstructor, Deprecated, NativeAccessSpecifierPrivate)
	TArray<struct FCustomizableObjectTextureParameterValue> TextureParameters;                                 // 0x308(0x10)(ZeroConstructor, Deprecated, NativeAccessSpecifierPrivate)
	TArray<struct FCustomizableObjectVectorParameterValue> VectorParameters;                                  // 0x318(0x10)(ZeroConstructor, Deprecated, NativeAccessSpecifierPrivate)
	TArray<struct FCustomizableObjectProjectorParameterValue> ProjectorParameters;                               // 0x328(0x10)(ZeroConstructor, Deprecated, NativeAccessSpecifierPrivate)
	TMap<class FName, struct FMultilayerProjector> MultilayerProjectors;                              // 0x338(0x50)(Deprecated, NativeAccessSpecifierPrivate)
	uint8                                        Pad_16A7[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UCustomizableObjectInstance* GetDefaultObj();

	void UpdateSkeletalMeshAsyncResult(FDelegateProperty_ Callback, bool bIgnoreCloseDist, bool bForceHighPriority);
	void UpdateSkeletalMeshAsync(bool bIgnoreCloseDist, bool bForceHighPriority);
	void SetVectorParameterSelectedOption(const class FString& VectorParamName, struct FLinearColor& VectorValue);
	void SetTextureParameterSelectedOptionT(const class FString& TextureParamName, class UTexture2D* TextureValue, int32 RangeIndex);
	void SetTextureParameterSelectedOption(const class FString& TextureParamName, const class FString& TextureValue, int32 RangeIndex);
	void SetReplacePhysicsAssets(bool bReplaceEnabled);
	void SetRandomValues();
	void SetProjectorValue(const class FString& ProjectorParamName, struct FVector& OutPos, struct FVector& OutDirection, struct FVector& OutUp, struct FVector& OutScale, float OutAngle, int32 RangeIndex);
	void SetObject(class UCustomizableObject* InObject);
	void SetIntParameterSelectedOption(const class FString& ParamName, const class FString& SelectedOptionName, int32 RangeIndex);
	void SetFloatParameterSelectedOption(const class FString& FloatParamName, float FloatValue, int32 RangeIndex);
	void SetCurrentState(const class FString& StateName);
	void SetColorParameterSelectedOption(const class FString& ColorParamName, struct FLinearColor& ColorValue);
	void SetBuildParameterRelevancy(bool Value);
	void SetBuildParameterDecorations(bool Value);
	void SetBoolParameterSelectedOption(const class FString& BoolParamName, bool BoolValue);
	int32 RemoveValueFromProjectorRange(const class FString& ParamName);
	int32 RemoveValueFromIntRange(const class FString& ParamName);
	int32 RemoveValueFromFloatRange(const class FString& ParamName);
	void RemoveMultilayerProjector(class FName& ProjectorParamName);
	void MultilayerProjectorUpdateVirtualLayer(class FName& ProjectorParamName, class FName& ID, struct FMultilayerProjectorVirtualLayer& Layer);
	void MultilayerProjectorUpdateLayer(class FName& ProjectorParamName, int32 Index, struct FMultilayerProjectorLayer& Layer);
	void MultilayerProjectorRemoveVirtualLayer(class FName& ProjectorParamName, class FName& ID);
	void MultilayerProjectorRemoveLayerAt(class FName& ProjectorParamName, int32 Index);
	int32 MultilayerProjectorNumLayers(class FName& ProjectorParamName);
	TArray<class FName> MultilayerProjectorGetVirtualLayers(class FName& ProjectorParamName);
	struct FMultilayerProjectorVirtualLayer MultilayerProjectorGetVirtualLayer(class FName& ProjectorParamName, class FName& ID);
	struct FMultilayerProjectorLayer MultilayerProjectorGetLayer(class FName& ProjectorParamName, int32 Index);
	struct FMultilayerProjectorVirtualLayer MultilayerProjectorFindOrCreateVirtualLayer(class FName& ProjectorParamName, class FName& ID);
	void MultilayerProjectorCreateVirtualLayer(class FName& ProjectorParamName, class FName& ID);
	void MultilayerProjectorCreateLayer(class FName& ProjectorParamName, int32 Index);
	bool IsParamMultidimensional(const class FString& ParamName);
	bool IsParameterRelevant(const class FString& ParamName);
	bool HasAnySkeletalMesh();
	bool HasAnyParameters();
	TArray<struct FCustomizableObjectVectorParameterValue> GetVectorParameters();
	int32 GetTextureValueRange(const class FString& ParamName);
	class FName GetTextureParameterSelectedOption(const class FString& TextureParamName, int32 RangeIndex);
	TArray<struct FCustomizableObjectTextureParameterValue> GetTextureParameters();
	class USkeletalMesh* GetSkeletalMesh(int32 ComponentIndex);
	int32 GetProjectorValueRange(const class FString& ParamName);
	void GetProjectorValue(const class FString& ProjectorParamName, struct FVector* OutPos, struct FVector* OutDirection, struct FVector* OutUp, struct FVector* OutScale, float* OutAngle, enum class ECustomizableObjectProjectorType* OutType, int32 RangeIndex);
	struct FVector GetProjectorUp(const class FString& ParamName, int32 RangeIndex);
	struct FVector GetProjectorScale(const class FString& ParamName, int32 RangeIndex);
	struct FVector GetProjectorPosition(const class FString& ParamName, int32 RangeIndex);
	enum class ECustomizableObjectProjectorType GetProjectorParameterType(const class FString& ParamName, int32 RangeIndex);
	TArray<struct FCustomizableObjectProjectorParameterValue> GetProjectorParameters();
	struct FVector GetProjectorDirection(const class FString& ParamName, int32 RangeIndex);
	float GetProjectorAngle(const class FString& ParamName, int32 RangeIndex);
	class UTexture2D* GetParameterDescription(const class FString& ParamName, int32 DescIndex);
	int32 GetNumComponents();
	int32 GetIntValueRange(const class FString& ParamName);
	class FString GetIntParameterSelectedOption(const class FString& ParamName, int32 RangeIndex);
	TArray<struct FCustomizableObjectIntParameterValue> GetIntParameters();
	int32 GetFloatValueRange(const class FString& ParamName);
	float GetFloatParameterSelectedOption(const class FString& FloatParamName, int32 RangeIndex);
	TArray<struct FCustomizableObjectFloatParameterValue> GetFloatParameters();
	class UCustomizableObject* GetCustomizableObject();
	class FString GetCurrentState();
	struct FLinearColor GetColorParameterSelectedOption(const class FString& ColorParamName);
	bool GetBuildParameterRelevancy();
	bool GetBuildParameterDecorations();
	bool GetBoolParameterSelectedOption(const class FString& BoolParamName);
	TArray<struct FCustomizableObjectBoolParameterValue> GetBoolParameters();
	TSubclassOf<class UAnimInstance> GetAnimBP(int32 ComponentIndex, class FName& Slot);
	struct FGameplayTagContainer GetAnimationGameplayTags();
	void ForEachAnimInstance(int32 ComponentIndex, FDelegateProperty_ Delegate);
	int32 FindVectorParameterNameIndex(const class FString& ParamName);
	int32 FindProjectorParameterNameIndex(const class FString& ParamName);
	int32 FindIntParameterNameIndex(const class FString& ParamName);
	int32 FindFloatParameterNameIndex(const class FString& ParamName);
	int32 FindBoolParameterNameIndex(const class FString& ParamName);
	bool CreateMultiLayerProjector(class FName& ProjectorParamName);
	class UCustomizableObjectInstance* CloneStatic(class UObject* Outer);
	class UCustomizableObjectInstance* Clone();
	int32 AddValueToProjectorRange(const class FString& ParamName);
	int32 AddValueToIntRange(const class FString& ParamName);
	int32 AddValueToFloatRange(const class FString& ParamName);
};

// 0x28 (0x50 - 0x28)
// Class CustomizableObject.MutableTextureMipDataProviderFactory
class UMutableTextureMipDataProviderFactory : public UTextureMipDataProviderFactory
{
public:
	class UCustomizableObjectInstance*           CustomizableObjectInstance;                        // 0x28(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16C7[0x20];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UMutableTextureMipDataProviderFactory* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class CustomizableObject.CustomizableObjectExtensionDataContainer
class UCustomizableObjectExtensionDataContainer : public UObject
{
public:
	struct FCustomizableObjectExtensionData      Data;                                              // 0x28(0x10)(NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UCustomizableObjectExtensionDataContainer* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class CustomizableObject.CustomizableSystemImageProvider
class UCustomizableSystemImageProvider : public UObject
{
public:

	static class UClass* StaticClass();
	static class UCustomizableSystemImageProvider* GetDefaultObj();

};

// 0x130 (0x158 - 0x28)
// Class CustomizableObject.CustomizableObjectSystem
class UCustomizableObjectSystem : public UObject
{
public:
	TArray<struct FPendingReleaseSkeletalMeshInfo> PendingReleaseSkeletalMesh;                        // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	class UDefaultImageProvider*                 DefaultImageProvider;                              // 0x38(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCustomizableInstanceLODManagementBase* DefaultInstanceLODManagement;                      // 0x40(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCustomizableInstanceLODManagementBase* CurrentInstanceLODManagement;                      // 0x48(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UTexture2D*>                    ProtectedCachedTextures;                           // 0x50(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        Pad_16DD[0xF8];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UCustomizableObjectSystem* GetDefaultObj();

	void SetReleaseMutableTexturesImmediately(bool bReleaseTextures);
	int32 GetTotalInstances();
	int32 GetTextureMemoryUsed();
	class FString GetPluginVersion();
	int32 GetNumPendingInstances();
	int32 GetNumInstances();
	class UCustomizableObjectSystem* GetInstance();
	int32 GetAverageBuildTime();
};

// 0x40 (0x2E0 - 0x2A0)
// Class CustomizableObject.CustomizableSkeletalComponent
class UCustomizableSkeletalComponent : public USceneComponent
{
public:
	uint8                                        Pad_16E6[0x4];                                     // Fixing Size After Last Property 
	float                                        SkippedLastRenderTime;                             // 0x2A4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UCustomizableObjectInstance*           CustomizableObjectInstance;                        // 0x2A8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ComponentIndex;                                    // 0x2B0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16E7[0x2C];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UCustomizableSkeletalComponent* GetDefaultObj();

	void UpdateSkeletalMeshAsyncResult(FDelegateProperty_ Callback, bool bIgnoreCloseDist, bool bForceHighPriority);
	void UpdateSkeletalMeshAsync(bool bNeverSkipUpdate);
};

// 0x28 (0x338 - 0x310)
// Class CustomizableObject.CustomizableSkeletalMeshActor
class UCustomizableSkeletalMeshActor : public USkeletalMeshActor
{
public:
	TArray<class UCustomizableSkeletalComponent*> CustomizableSkeletalComponents;                    // 0x310(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<class USkeletalMeshComponent*>        SkeletalMeshComponents;                            // 0x320(0x10)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	class UCustomizableSkeletalComponent*        CustomizableSkeletalComponent;                     // 0x330(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UCustomizableSkeletalMeshActor* GetDefaultObj();

};

// 0x50 (0x78 - 0x28)
// Class CustomizableObject.DefaultImageProvider
class UDefaultImageProvider : public UCustomizableSystemImageProvider
{
public:
	TMap<class FName, class UTexture2D*>         Textures;                                          // 0x28(0x50)(UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UDefaultImageProvider* GetDefaultObj();

};

}


