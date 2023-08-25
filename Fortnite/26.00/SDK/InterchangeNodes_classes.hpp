#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x90 - 0x60)
// Class InterchangeNodes.InterchangeAnimationTrackSetNode
class UInterchangeAnimationTrackSetNode : public UInterchangeBaseNode
{
public:
	uint8                                        Pad_51DD[0x30];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInterchangeAnimationTrackSetNode* GetDefaultObj();

	bool SetCustomFrameRate(float& AttributeValue);
	bool RemoveCustomAnimationTrackUid(const class FString& AnimationTrackUid);
	bool GetCustomFrameRate(float* AttributeValue);
	void GetCustomAnimationTrackUids(TArray<class FString>* OutAnimationTrackUids);
	int32 GetCustomAnimationTrackUidCount();
	void GetCustomAnimationTrackUid(int32 Index, class FString* OutAnimationTrackUid);
	bool AddCustomAnimationTrackUid(const class FString& AnimationTrackUid);
};

// 0x10 (0x70 - 0x60)
// Class InterchangeNodes.InterchangeAnimationTrackBaseNode
class UInterchangeAnimationTrackBaseNode : public UInterchangeBaseNode
{
public:
	uint8                                        Pad_51FC[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInterchangeAnimationTrackBaseNode* GetDefaultObj();

	bool SetCustomCompletionMode(int32& AttributeValue);
	bool GetCustomCompletionMode(int32* AttributeValue);
};

// 0x40 (0xB0 - 0x70)
// Class InterchangeNodes.InterchangeAnimationTrackSetInstanceNode
class UInterchangeAnimationTrackSetInstanceNode : public UInterchangeAnimationTrackBaseNode
{
public:
	uint8                                        Pad_523F[0x40];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInterchangeAnimationTrackSetInstanceNode* GetDefaultObj();

	bool SetCustomTrackSetDependencyUid(const class FString& AttributeValue);
	bool SetCustomTimeScale(float& AttributeValue);
	bool SetCustomStartFrame(int32& AttributeValue);
	bool SetCustomDuration(int32& AttributeValue);
	bool GetCustomTrackSetDependencyUid(class FString* AttributeValue);
	bool GetCustomTimeScale(float* AttributeValue);
	bool GetCustomStartFrame(int32* AttributeValue);
	bool GetCustomDuration(int32* AttributeValue);
};

// 0x50 (0xC0 - 0x70)
// Class InterchangeNodes.InterchangeAnimationTrackNode
class UInterchangeAnimationTrackNode : public UInterchangeAnimationTrackBaseNode
{
public:
	uint8                                        Pad_5266[0x50];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInterchangeAnimationTrackNode* GetDefaultObj();

	bool SetCustomTargetedProperty(int32& TargetedProperty);
	bool SetCustomFrameCount(int32& AttributeValue);
	bool SetCustomAnimationPayloadKey(const class FString& InUniqueId, enum class EInterchangeAnimationPayLoadType& InType);
	bool SetCustomActorDependencyUid(const class FString& DependencyUid);
	bool GetCustomTargetedProperty(int32* TargetedProperty);
	bool GetCustomFrameCount(int32* AttributeValue);
	bool GetCustomAnimationPayloadKey(struct FInterchangeAnimationPayLoadKey* AnimationPayLoadKey);
	bool GetCustomActorDependencyUid(class FString* DependencyUid);
};

// 0x10 (0xD0 - 0xC0)
// Class InterchangeNodes.InterchangeTransformAnimationTrackNode
class UInterchangeTransformAnimationTrackNode : public UInterchangeAnimationTrackNode
{
public:
	uint8                                        Pad_5278[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInterchangeTransformAnimationTrackNode* GetDefaultObj();

	bool SetCustomUsedChannels(int32& AttributeValue);
	bool GetCustomUsedChannels(int32* AttributeValue);
};

// 0x220 (0x290 - 0x70)
// Class InterchangeNodes.InterchangeSkeletalAnimationTrackNode
class UInterchangeSkeletalAnimationTrackNode : public UInterchangeAnimationTrackBaseNode
{
public:
	uint8                                        Pad_52E5[0x220];                                   // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInterchangeSkeletalAnimationTrackNode* GetDefaultObj();

	bool SetCustomSkeletonNodeUid(const class FString& AttributeValue);
	bool SetCustomAnimationStopTime(double& StopTime);
	bool SetCustomAnimationStartTime(double& StartTime);
	bool SetCustomAnimationSampleRate(double& SampleRate);
	bool SetAnimationPayloadKeyForSceneNodeUid(const class FString& SceneNodeUid, const class FString& InUniqueId, enum class EInterchangeAnimationPayLoadType& InType);
	bool SetAnimationPayloadKeyForMorphTargetNodeUid(const class FString& MorphTargetNodeUid, const class FString& InUniqueId, enum class EInterchangeAnimationPayLoadType& InType);
	void GetSceneNodeAnimationPayloadKeys(TMap<class FString, class FString>* OutSceneNodeAnimationPayloadKeyUids, TMap<class FString, uint8>* OutSceneNodeAnimationPayloadKeyTypes);
	void GetMorphTargetNodeAnimationPayloadKeys(TMap<class FString, class FString>* OutMorphTargetNodeAnimationPayloadKeyUids, TMap<class FString, uint8>* OutMorphTargetNodeAnimationPayloadKeyTypes);
	bool GetCustomSkeletonNodeUid(class FString* AttributeValue);
	bool GetCustomAnimationStopTime(double* StopTime);
	bool GetCustomAnimationStartTime(double* StartTime);
	bool GetCustomAnimationSampleRate(double* SampleRate);
};

// 0x40 (0xA0 - 0x60)
// Class InterchangeNodes.InterchangePhysicalCameraNode
class UInterchangePhysicalCameraNode : public UInterchangeBaseNode
{
public:
	uint8                                        Pad_5316[0x40];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInterchangePhysicalCameraNode* GetDefaultObj();

	bool SetCustomSensorWidth(float& AttributeValue);
	bool SetCustomSensorHeight(float& AttributeValue);
	bool SetCustomFocalLength(float& AttributeValue);
	bool SetCustomEnableDepthOfField(bool& AttributeValue);
	bool GetCustomSensorWidth(float* AttributeValue);
	bool GetCustomSensorHeight(float* AttributeValue);
	bool GetCustomFocalLength(float* AttributeValue);
	bool GetCustomEnableDepthOfField(bool* AttributeValue);
};

// 0x60 (0xC0 - 0x60)
// Class InterchangeNodes.InterchangeStandardCameraNode
class UInterchangeStandardCameraNode : public UInterchangeBaseNode
{
public:
	uint8                                        Pad_536B[0x60];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInterchangeStandardCameraNode* GetDefaultObj();

	bool SetCustomWidth(float& AttributeValue);
	bool SetCustomProjectionMode(enum class EInterchangeCameraProjectionType& AttributeValue);
	bool SetCustomNearClipPlane(float& AttributeValue);
	bool SetCustomFieldOfView(float& AttributeValue);
	bool SetCustomFarClipPlane(float& AttributeValue);
	bool SetCustomAspectRatio(float& AttributeValue);
	bool GetCustomWidth(float* AttributeValue);
	bool GetCustomProjectionMode(enum class EInterchangeCameraProjectionType* AttributeValue);
	bool GetCustomNearClipPlane(float* AttributeValue);
	bool GetCustomFieldOfView(float* AttributeValue);
	bool GetCustomFarClipPlane(float* AttributeValue);
	bool GetCustomAspectRatio(float* AttributeValue);
};

// 0x40 (0xA0 - 0x60)
// Class InterchangeNodes.InterchangeBaseLightNode
class UInterchangeBaseLightNode : public UInterchangeBaseNode
{
public:
	uint8                                        Pad_539C[0x40];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInterchangeBaseLightNode* GetDefaultObj();

	bool SetCustomUseTemperature(bool AttributeValue);
	bool SetCustomTemperature(float AttributeValue);
	bool SetCustomLightColor(struct FLinearColor& AttributeValue);
	bool SetCustomIntensity(float AttributeValue);
	bool GetCustomUseTemperature(bool* AttributeValue);
	bool GetCustomTemperature(float* AttributeValue);
	bool GetCustomLightColor(struct FLinearColor* AttributeValue);
	bool GetCustomIntensity(float* AttributeValue);
};

// 0x30 (0xD0 - 0xA0)
// Class InterchangeNodes.InterchangeLightNode
class UInterchangeLightNode : public UInterchangeBaseLightNode
{
public:
	uint8                                        Pad_53CD[0x30];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInterchangeLightNode* GetDefaultObj();

	bool SetCustomIntensityUnits(enum class EInterchangeLightUnits& AttributeValue);
	bool SetCustomIESTexture(const class FString& AttributeValue);
	bool SetCustomAttenuationRadius(float AttributeValue);
	bool GetCustomIntensityUnits(enum class EInterchangeLightUnits* AttributeValue);
	bool GetCustomIESTexture(class FString* AttributeValue);
	bool GetCustomAttenuationRadius(float* AttributeValue);
};

// 0x20 (0xF0 - 0xD0)
// Class InterchangeNodes.InterchangePointLightNode
class UInterchangePointLightNode : public UInterchangeLightNode
{
public:
	uint8                                        Pad_53E6[0x20];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInterchangePointLightNode* GetDefaultObj();

	bool SetCustomUseInverseSquaredFalloff(bool AttributeValue);
	bool SetCustomLightFalloffExponent(float AttributeValue);
	bool GetCustomUseInverseSquaredFalloff(bool* AttributeValue);
	bool GetCustomLightFalloffExponent(float* AttributeValue);
};

// 0x20 (0x110 - 0xF0)
// Class InterchangeNodes.InterchangeSpotLightNode
class UInterchangeSpotLightNode : public UInterchangePointLightNode
{
public:
	uint8                                        Pad_53F8[0x20];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInterchangeSpotLightNode* GetDefaultObj();

	bool SetCustomOuterConeAngle(float AttributeValue);
	bool SetCustomInnerConeAngle(float AttributeValue);
	bool GetCustomOuterConeAngle(float* AttributeValue);
	bool GetCustomInnerConeAngle(float* AttributeValue);
};

// 0x20 (0xF0 - 0xD0)
// Class InterchangeNodes.InterchangeRectLightNode
class UInterchangeRectLightNode : public UInterchangeLightNode
{
public:
	uint8                                        Pad_5407[0x20];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInterchangeRectLightNode* GetDefaultObj();

	bool SetCustomSourceWidth(float AttributeValue);
	bool SetCustomSourceHeight(float AttributeValue);
	bool GetCustomSourceWidth(float* AttributeValue);
	bool GetCustomSourceHeight(float* AttributeValue);
};

// 0x0 (0xA0 - 0xA0)
// Class InterchangeNodes.InterchangeDirectionalLightNode
class UInterchangeDirectionalLightNode : public UInterchangeBaseLightNode
{
public:

	static class UClass* StaticClass();
	static class UInterchangeDirectionalLightNode* GetDefaultObj();

};

// 0x30 (0x90 - 0x60)
// Class InterchangeNodes.InterchangeTextureNode
class UInterchangeTextureNode : public UInterchangeBaseNode
{
public:
	uint8                                        Pad_5433[0x30];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInterchangeTextureNode* GetDefaultObj();

	void SetPayLoadKey(const class FString& PayloadKey);
	bool SetCustomSRGB(bool& AttributeValue);
	bool SetCustomFilter(enum class EInterchangeTextureFilterMode& AttributeValue);
	bool SetCustombFlipGreenChannel(bool& AttributeValue);
	bool GetCustomSRGB(bool* AttributeValue);
	bool GetCustomFilter(enum class EInterchangeTextureFilterMode* AttributeValue);
	bool GetCustombFlipGreenChannel(bool* AttributeValue);
};

// 0x0 (0x90 - 0x90)
// Class InterchangeNodes.InterchangeTexture2DArrayNode
class UInterchangeTexture2DArrayNode : public UInterchangeTextureNode
{
public:

	static class UClass* StaticClass();
	static class UInterchangeTexture2DArrayNode* GetDefaultObj();

};

// 0x0 (0x90 - 0x90)
// Class InterchangeNodes.InterchangeTextureCubeArrayNode
class UInterchangeTextureCubeArrayNode : public UInterchangeTextureNode
{
public:

	static class UClass* StaticClass();
	static class UInterchangeTextureCubeArrayNode* GetDefaultObj();

};

// 0x0 (0x90 - 0x90)
// Class InterchangeNodes.InterchangeTextureCubeNode
class UInterchangeTextureCubeNode : public UInterchangeTextureNode
{
public:

	static class UClass* StaticClass();
	static class UInterchangeTextureCubeNode* GetDefaultObj();

};

// 0x0 (0x90 - 0x90)
// Class InterchangeNodes.InterchangeTextureLightProfileNode
class UInterchangeTextureLightProfileNode : public UInterchangeTextureNode
{
public:

	static class UClass* StaticClass();
	static class UInterchangeTextureLightProfileNode* GetDefaultObj();

};

// 0x40 (0xA0 - 0x60)
// Class InterchangeNodes.InterchangeVariantSetNode
class UInterchangeVariantSetNode : public UInterchangeBaseNode
{
public:
	uint8                                        Pad_546B[0x40];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInterchangeVariantSetNode* GetDefaultObj();

	bool SetCustomVariantsPayloadKey(const class FString& PayloadKey);
	bool SetCustomDisplayText(const class FString& AttributeValue);
	bool RemoveCustomDependencyUid(const class FString& DependencyUid);
	bool GetCustomVariantsPayloadKey(class FString* PayloadKey);
	bool GetCustomDisplayText(class FString* AttributeValue);
	void GetCustomDependencyUids(TArray<class FString>* OutDependencyUids);
	int32 GetCustomDependencyUidCount();
	void GetCustomDependencyUid(int32 Index, class FString* OutDependencyUid);
	bool AddCustomDependencyUid(const class FString& DependencyUid);
};

// 0x20 (0x80 - 0x60)
// Class InterchangeNodes.InterchangeSceneVariantSetsNode
class UInterchangeSceneVariantSetsNode : public UInterchangeBaseNode
{
public:
	uint8                                        Pad_547B[0x20];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInterchangeSceneVariantSetsNode* GetDefaultObj();

	bool RemoveCustomVariantSetUid(const class FString& VariantUid);
	void GetCustomVariantSetUids(TArray<class FString>* OutVariantUids);
	int32 GetCustomVariantSetUidCount();
	void GetCustomVariantSetUid(int32 Index, class FString* OutVariantUid);
	bool AddCustomVariantSetUid(const class FString& VariantUid);
};

// 0x0 (0x90 - 0x90)
// Class InterchangeNodes.InterchangeVolumeTextureNode
class UInterchangeVolumeTextureNode : public UInterchangeTextureNode
{
public:

	static class UClass* StaticClass();
	static class UInterchangeVolumeTextureNode* GetDefaultObj();

};

// 0x10 (0x70 - 0x60)
// Class InterchangeNodes.InterchangeMaterialInstanceNode
class UInterchangeMaterialInstanceNode : public UInterchangeBaseNode
{
public:
	uint8                                        Pad_54BB[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInterchangeMaterialInstanceNode* GetDefaultObj();

	bool SetCustomParent(const class FString& AttributeValue);
	bool GetVectorParameterValue(const class FString& ParameterName, struct FLinearColor* AttributeValue);
	bool GetTextureParameterValue(const class FString& ParameterName, class FString* AttributeValue);
	bool GetStaticSwitchParameterValue(const class FString& ParameterName, bool* AttributeValue);
	bool GetScalarParameterValue(const class FString& ParameterName, float* AttributeValue);
	bool GetCustomParent(class FString* AttributeValue);
	bool AddVectorParameterValue(const class FString& ParameterName, struct FLinearColor& AttributeValue);
	bool AddTextureParameterValue(const class FString& ParameterName, const class FString& AttributeValue);
	bool AddStaticSwitchParameterValue(const class FString& ParameterName, bool AttributeValue);
	bool AddScalarParameterValue(const class FString& ParameterName, float AttributeValue);
};

// 0x188 (0x1E8 - 0x60)
// Class InterchangeNodes.InterchangeMeshNode
class UInterchangeMeshNode : public UInterchangeBaseNode
{
public:
	uint8                                        Pad_552E[0x188];                                   // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInterchangeMeshNode* GetDefaultObj();

	bool SetSlotMaterialDependencyUid(const class FString& SlotName, const class FString& MaterialDependencyUid);
	bool SetSkinnedMesh(bool bIsSkinnedMesh);
	bool SetSkeletonDependencyUid(const class FString& DependencyUid);
	bool SetSceneInstanceUid(const class FString& DependencyUid);
	void SetPayLoadKey(const class FString& PayloadKey, enum class EInterchangeMeshPayLoadType& PayloadType);
	bool SetMorphTargetName(const class FString& MorphTargetName);
	bool SetMorphTargetDependencyUid(const class FString& DependencyUid);
	bool SetMorphTarget(bool bIsMorphTarget);
	bool SetCustomVertexCount(int32& AttributeValue);
	bool SetCustomUVCount(int32& AttributeValue);
	bool SetCustomPolygonCount(int32& AttributeValue);
	bool SetCustomHasVertexTangent(bool& AttributeValue);
	bool SetCustomHasVertexNormal(bool& AttributeValue);
	bool SetCustomHasVertexColor(bool& AttributeValue);
	bool SetCustomHasVertexBinormal(bool& AttributeValue);
	bool SetCustomHasSmoothGroup(bool& AttributeValue);
	bool SetCustomBoundingBox(struct FBox& AttributeValue);
	bool RemoveSlotMaterialDependencyUid(const class FString& SlotName);
	bool RemoveSkeletonDependencyUid(const class FString& DependencyUid);
	bool RemoveSceneInstanceUid(const class FString& DependencyUid);
	bool RemoveMorphTargetDependencyUid(const class FString& DependencyUid);
	bool IsSkinnedMesh();
	bool IsMorphTarget();
	bool GetSlotMaterialDependencyUid(const class FString& SlotName, class FString* OutMaterialDependency);
	void GetSlotMaterialDependencies(TMap<class FString, class FString>* OutMaterialDependencies);
	void GetSkeletonDependency(int32 Index, class FString* OutDependency);
	void GetSkeletonDependencies(TArray<class FString>* OutDependencies);
	int32 GetSkeletonDependeciesCount();
	int32 GetSceneInstanceUidsCount();
	void GetSceneInstanceUids(TArray<class FString>* OutDependencies);
	void GetSceneInstanceUid(int32 Index, class FString* OutDependency);
	bool GetMorphTargetName(class FString* OutMorphTargetName);
	void GetMorphTargetDependency(int32 Index, class FString* OutDependency);
	void GetMorphTargetDependencies(TArray<class FString>* OutDependencies);
	int32 GetMorphTargetDependeciesCount();
	bool GetCustomVertexCount(int32* AttributeValue);
	bool GetCustomUVCount(int32* AttributeValue);
	bool GetCustomPolygonCount(int32* AttributeValue);
	bool GetCustomHasVertexTangent(bool* AttributeValue);
	bool GetCustomHasVertexNormal(bool* AttributeValue);
	bool GetCustomHasVertexColor(bool* AttributeValue);
	bool GetCustomHasVertexBinormal(bool* AttributeValue);
	bool GetCustomHasSmoothGroup(bool* AttributeValue);
	bool GetCustomBoundingBox(struct FBox* AttributeValue);
};

// 0x2C0 (0x320 - 0x60)
// Class InterchangeNodes.InterchangeSceneNode
class UInterchangeSceneNode : public UInterchangeBaseNode
{
public:
	uint8                                        Pad_55A2[0x2C0];                                   // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInterchangeSceneNode* GetDefaultObj();

	bool SetSlotMaterialDependencyUid(const class FString& SlotName, const class FString& MaterialDependencyUid);
	bool SetMorphTargetCurveWeight(const class FString& MorphTargetName, float& Weight);
	bool SetCustomTimeZeroLocalTransform(class UInterchangeBaseNodeContainer* BaseNodeContainer, struct FTransform& AttributeValue, bool bResetCache);
	bool SetCustomLocalTransform(class UInterchangeBaseNodeContainer* BaseNodeContainer, struct FTransform& AttributeValue, bool bResetCache);
	bool SetCustomGeometricTransform(struct FTransform& AttributeValue);
	bool SetCustomBindPoseLocalTransform(class UInterchangeBaseNodeContainer* BaseNodeContainer, struct FTransform& AttributeValue, bool bResetCache);
	bool SetCustomAssetInstanceUid(const class FString& AttributeValue);
	bool SetCustomAnimationAssetUidToPlay(const class FString& AttributeValue);
	bool RemoveSpecializedType(const class FString& SpecializedType);
	bool RemoveSlotMaterialDependencyUid(const class FString& SlotName);
	bool IsSpecializedTypeContains(const class FString& SpecializedType);
	void GetSpecializedTypes(TArray<class FString>* OutSpecializedTypes);
	int32 GetSpecializedTypeCount();
	void GetSpecializedType(int32 Index, class FString* OutSpecializedType);
	bool GetSlotMaterialDependencyUid(const class FString& SlotName, class FString* OutMaterialDependency);
	void GetSlotMaterialDependencies(TMap<class FString, class FString>* OutMaterialDependencies);
	void GetMorphTargetCurveWeights(TMap<class FString, float>* OutMorphTargetCurveWeights);
	bool GetCustomTimeZeroLocalTransform(struct FTransform* AttributeValue);
	bool GetCustomTimeZeroGlobalTransform(class UInterchangeBaseNodeContainer* BaseNodeContainer, struct FTransform& GlobalOffsetTransform, struct FTransform* AttributeValue, bool bForceRecache);
	bool GetCustomLocalTransform(struct FTransform* AttributeValue);
	bool GetCustomGlobalTransform(class UInterchangeBaseNodeContainer* BaseNodeContainer, struct FTransform& GlobalOffsetTransform, struct FTransform* AttributeValue, bool bForceRecache);
	bool GetCustomGeometricTransform(struct FTransform* AttributeValue);
	bool GetCustomBindPoseLocalTransform(struct FTransform* AttributeValue);
	bool GetCustomBindPoseGlobalTransform(class UInterchangeBaseNodeContainer* BaseNodeContainer, struct FTransform& GlobalOffsetTransform, struct FTransform* AttributeValue, bool bForceRecache);
	bool GetCustomAssetInstanceUid(class FString* AttributeValue);
	bool GetCustomAnimationAssetUidToPlay(class FString* AttributeValue);
	bool AddSpecializedType(const class FString& SpecializedType);
};

// 0x0 (0x28 - 0x28)
// Class InterchangeNodes.InterchangeShaderPortsAPI
class UInterchangeShaderPortsAPI : public UObject
{
public:

	static class UClass* StaticClass();
	static class UInterchangeShaderPortsAPI* GetDefaultObj();

	class FString MakeInputValueKey(const class FString& InputName);
	class FString MakeInputName(const class FString& InputKey);
	class FString MakeInputConnectionKey(const class FString& InputName);
	bool IsAnInput(const class FString& AttributeKey);
	bool HasInput(class UInterchangeBaseNode* InterchangeNode, class FName& InInputName);
	bool GetInputConnection(class UInterchangeBaseNode* InterchangeNode, const class FString& InputName, class FString* OutExpressionUid, class FString* OutputName);
	void GatherInputs(class UInterchangeBaseNode* InterchangeNode, TArray<class FString>* OutInputNames);
	bool ConnectOuputToInputByName(class UInterchangeBaseNode* InterchangeNode, const class FString& InputName, const class FString& ExpressionUid, const class FString& OutputName);
	bool ConnectOuputToInputByIndex(class UInterchangeBaseNode* InterchangeNode, const class FString& InputName, const class FString& ExpressionUid, int32 OutputIndex);
	bool ConnectDefaultOuputToInput(class UInterchangeBaseNode* InterchangeNode, const class FString& InputName, const class FString& ExpressionUid);
};

// 0x10 (0x70 - 0x60)
// Class InterchangeNodes.InterchangeShaderNode
class UInterchangeShaderNode : public UInterchangeBaseNode
{
public:
	uint8                                        Pad_55CF[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInterchangeShaderNode* GetDefaultObj();

	bool SetCustomShaderType(const class FString& AttributeValue);
	bool GetCustomShaderType(class FString* AttributeValue);
};

// 0x10 (0x80 - 0x70)
// Class InterchangeNodes.InterchangeFunctionCallShaderNode
class UInterchangeFunctionCallShaderNode : public UInterchangeShaderNode
{
public:
	uint8                                        Pad_55DC[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInterchangeFunctionCallShaderNode* GetDefaultObj();

	bool SetCustomMaterialFunction(const class FString& AttributeValue);
	bool GetCustomMaterialFunction(class FString* AttributeValue);
};

// 0x50 (0xC0 - 0x70)
// Class InterchangeNodes.InterchangeShaderGraphNode
class UInterchangeShaderGraphNode : public UInterchangeShaderNode
{
public:
	uint8                                        Pad_5618[0x50];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInterchangeShaderGraphNode* GetDefaultObj();

	bool SetCustomTwoSidedTransmission(bool& AttributeValue);
	bool SetCustomTwoSided(bool& AttributeValue);
	bool SetCustomScreenSpaceReflections(bool& AttributeValue);
	bool SetCustomOpacityMaskClipValue(float& AttributeValue, bool bAddApplyDelegate);
	bool SetCustomIsAShaderFunction(bool& AttributeValue);
	bool GetCustomTwoSidedTransmission(bool* AttributeValue);
	bool GetCustomTwoSided(bool* AttributeValue);
	bool GetCustomScreenSpaceReflections(bool* AttributeValue);
	bool GetCustomOpacityMaskClipValue(float* AttributeValue);
	bool GetCustomIsAShaderFunction(bool* AttributeValue);
};

// 0x98 (0x128 - 0x90)
// Class InterchangeNodes.InterchangeTexture2DNode
class UInterchangeTexture2DNode : public UInterchangeTextureNode
{
public:
	uint8                                        Pad_562F[0x98];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInterchangeTexture2DNode* GetDefaultObj();

	bool SetCustomWrapV(enum class EInterchangeTextureWrapMode& AttributeValue);
	bool SetCustomWrapU(enum class EInterchangeTextureWrapMode& AttributeValue);
	TMap<int32, class FString> GetSourceBlocks();
	bool GetCustomWrapV(enum class EInterchangeTextureWrapMode* AttributeValue);
	bool GetCustomWrapU(enum class EInterchangeTextureWrapMode* AttributeValue);
};

// 0x0 (0x128 - 0x128)
// Class InterchangeNodes.InterchangeTextureBlurNode
class UInterchangeTextureBlurNode : public UInterchangeTexture2DNode
{
public:

	static class UClass* StaticClass();
	static class UInterchangeTextureBlurNode* GetDefaultObj();

};

}


