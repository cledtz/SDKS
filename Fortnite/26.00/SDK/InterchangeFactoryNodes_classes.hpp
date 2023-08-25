#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x170 - 0x140)
// Class InterchangeFactoryNodes.InterchangeAnimationTrackSetFactoryNode
class UInterchangeAnimationTrackSetFactoryNode : public UInterchangeFactoryBaseNode
{
public:
	uint8                                        Pad_5276[0x30];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInterchangeAnimationTrackSetFactoryNode* GetDefaultObj();

	bool SetCustomFrameRate(float& AttributeValue);
	bool RemoveCustomAnimationTrackUid(const class FString& AnimationTrackUid);
	class UClass* GetObjectClass();
	bool GetCustomFrameRate(float* AttributeValue);
	void GetCustomAnimationTrackUids(TArray<class FString>* OutAnimationTrackUids);
	int32 GetCustomAnimationTrackUidCount();
	void GetCustomAnimationTrackUid(int32 Index, class FString* OutAnimationTrackUid);
	bool AddCustomAnimationTrackUid(const class FString& AnimationTrackUid);
};

// 0x30 (0x170 - 0x140)
// Class InterchangeFactoryNodes.InterchangeActorFactoryNode
class UInterchangeActorFactoryNode : public UInterchangeFactoryBaseNode
{
public:
	uint8                                        Pad_529D[0x30];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInterchangeActorFactoryNode* GetDefaultObj();

	bool SetCustomMobility(uint8& AttributeValue, bool bAddApplyDelegate);
	bool SetCustomGlobalTransform(struct FTransform& AttributeValue, bool bAddApplyDelegate);
	bool SetCustomActorClassName(const class FString& AttributeValue);
	bool GetCustomMobility(uint8* AttributeValue);
	bool GetCustomGlobalTransform(struct FTransform* AttributeValue);
	bool GetCustomActorClassName(class FString* AttributeValue);
};

// 0x40 (0x1B0 - 0x170)
// Class InterchangeFactoryNodes.InterchangePhysicalCameraFactoryNode
class UInterchangePhysicalCameraFactoryNode : public UInterchangeActorFactoryNode
{
public:
	uint8                                        Pad_52CF[0x40];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInterchangePhysicalCameraFactoryNode* GetDefaultObj();

	bool SetCustomSensorWidth(float& AttributeValue, bool bAddApplyDelegate);
	bool SetCustomSensorHeight(float& AttributeValue, bool bAddApplyDelegate);
	bool SetCustomFocusMethod(enum class ECameraFocusMethod& AttributeValue, bool bAddApplyDelegate);
	bool SetCustomFocalLength(float& AttributeValue, bool bAddApplyDelegate);
	bool GetCustomSensorWidth(float* AttributeValue);
	bool GetCustomSensorHeight(float* AttributeValue);
	bool GetCustomFocusMethod(enum class ECameraFocusMethod* AttributeValue);
	bool GetCustomFocalLength(float* AttributeValue);
};

// 0x60 (0x1D0 - 0x170)
// Class InterchangeFactoryNodes.InterchangeStandardCameraFactoryNode
class UInterchangeStandardCameraFactoryNode : public UInterchangeActorFactoryNode
{
public:
	uint8                                        Pad_532C[0x60];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInterchangeStandardCameraFactoryNode* GetDefaultObj();

	bool SetCustomWidth(float& AttributeValue, bool bAddApplyDelegate);
	bool SetCustomProjectionMode(enum class ECameraProjectionMode& AttributeValue, bool bAddApplyDelegate);
	bool SetCustomNearClipPlane(float& AttributeValue, bool bAddApplyDelegate);
	bool SetCustomFieldOfView(float& AttributeValue, bool bAddApplyDelegate);
	bool SetCustomFarClipPlane(float& AttributeValue, bool bAddApplyDelegate);
	bool SetCustomAspectRatio(float& AttributeValue, bool bAddApplyDelegate);
	bool GetCustomWidth(float* AttributeValue);
	bool GetCustomProjectionMode(enum class ECameraProjectionMode* AttributeValue);
	bool GetCustomNearClipPlane(float* AttributeValue);
	bool GetCustomFieldOfView(float* AttributeValue);
	bool GetCustomFarClipPlane(float* AttributeValue);
	bool GetCustomAspectRatio(float* AttributeValue);
};

// 0x40 (0x1B0 - 0x170)
// Class InterchangeFactoryNodes.InterchangeBaseLightFactoryNode
class UInterchangeBaseLightFactoryNode : public UInterchangeActorFactoryNode
{
public:
	uint8                                        Pad_5365[0x40];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInterchangeBaseLightFactoryNode* GetDefaultObj();

	bool SetCustomUseTemperature(bool AttributeValue, bool bAddApplyDelegate);
	bool SetCustomTemperature(float AttributeValue, bool bAddApplyDelegate);
	bool SetCustomLightColor(struct FColor& AttributeValue, bool bAddApplyDelegate);
	bool SetCustomIntensity(float AttributeValue, bool bAddApplyDelegate);
	bool GetCustomUseTemperature(bool* AttributeValue);
	bool GetCustomTemperature(float* AttributeValue);
	bool GetCustomLightColor(struct FColor* AttributeValue);
	bool GetCustomIntensity(float* AttributeValue);
};

// 0x0 (0x1B0 - 0x1B0)
// Class InterchangeFactoryNodes.InterchangeDirectionalLightFactoryNode
class UInterchangeDirectionalLightFactoryNode : public UInterchangeBaseLightFactoryNode
{
public:

	static class UClass* StaticClass();
	static class UInterchangeDirectionalLightFactoryNode* GetDefaultObj();

};

// 0x30 (0x1E0 - 0x1B0)
// Class InterchangeFactoryNodes.InterchangeLightFactoryNode
class UInterchangeLightFactoryNode : public UInterchangeBaseLightFactoryNode
{
public:
	uint8                                        Pad_538A[0x30];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInterchangeLightFactoryNode* GetDefaultObj();

	bool SetCustomIntensityUnits(enum class ELightUnits AttributeValue, bool bAddApplyDelegate);
	bool SetCustomIESTexture(const class FString& AttributeValue);
	bool SetCustomAttenuationRadius(float AttributeValue, bool bAddApplyDelegate);
	bool GetCustomIntensityUnits(enum class ELightUnits* AttributeValue);
	bool GetCustomIESTexture(class FString* AttributeValue);
	bool GetCustomAttenuationRadius(float* AttributeValue);
};

// 0x20 (0x200 - 0x1E0)
// Class InterchangeFactoryNodes.InterchangeRectLightFactoryNode
class UInterchangeRectLightFactoryNode : public UInterchangeLightFactoryNode
{
public:
	uint8                                        Pad_5397[0x20];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInterchangeRectLightFactoryNode* GetDefaultObj();

	bool SetCustomSourceWidth(float AttributeValue, bool bAddApplyDelegate);
	bool SetCustomSourceHeight(float AttributeValue, bool bAddApplyDelegate);
	bool GetCustomSourceWidth(float* AttributeValue);
	bool GetCustomSourceHeight(float* AttributeValue);
};

// 0x20 (0x200 - 0x1E0)
// Class InterchangeFactoryNodes.InterchangePointLightFactoryNode
class UInterchangePointLightFactoryNode : public UInterchangeLightFactoryNode
{
public:
	uint8                                        Pad_53A5[0x20];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInterchangePointLightFactoryNode* GetDefaultObj();

	bool SetCustomUseInverseSquaredFalloff(bool AttributeValue, bool bAddApplyDelegate);
	bool SetCustomLightFalloffExponent(float AttributeValue, bool bAddApplyDelegate);
	bool GetCustomUseInverseSquaredFalloff(bool* AttributeValue);
	bool GetCustomLightFalloffExponent(float* AttributeValue);
};

// 0x20 (0x220 - 0x200)
// Class InterchangeFactoryNodes.InterchangeSpotLightFactoryNode
class UInterchangeSpotLightFactoryNode : public UInterchangePointLightFactoryNode
{
public:
	uint8                                        Pad_53B1[0x20];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInterchangeSpotLightFactoryNode* GetDefaultObj();

	bool SetCustomOuterConeAngle(float AttributeValue, bool bAddApplyDelegate);
	bool SetCustomInnerConeAngle(float AttributeValue, bool bAddApplyDelegate);
	bool GetCustomOuterConeAngle(float* AttributeValue);
	bool GetCustomInnerConeAngle(float* AttributeValue);
};

// 0x30 (0x170 - 0x140)
// Class InterchangeFactoryNodes.InterchangePhysicsAssetFactoryNode
class UInterchangePhysicsAssetFactoryNode : public UInterchangeFactoryBaseNode
{
public:
	uint8                                        Pad_53B9[0x30];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInterchangePhysicsAssetFactoryNode* GetDefaultObj();

	bool SetCustomSkeletalMeshUid(const class FString& AttributeValue);
	void InitializePhysicsAssetNode(const class FString& UniqueID, const class FString& DisplayLabel, const class FString& InAssetClass);
	class UClass* GetObjectClass();
	bool GetCustomSkeletalMeshUid(class FString* AttributeValue);
};

// 0x20 (0x160 - 0x140)
// Class InterchangeFactoryNodes.InterchangeSceneVariantSetsFactoryNode
class UInterchangeSceneVariantSetsFactoryNode : public UInterchangeFactoryBaseNode
{
public:
	uint8                                        Pad_53C5[0x20];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInterchangeSceneVariantSetsFactoryNode* GetDefaultObj();

	bool RemoveCustomVariantSetUid(const class FString& VariantUid);
	class UClass* GetObjectClass();
	void GetCustomVariantSetUids(TArray<class FString>* OutVariantUids);
	int32 GetCustomVariantSetUidCount();
	void GetCustomVariantSetUid(int32 Index, class FString* OutVariantUid);
	bool AddCustomVariantSetUid(const class FString& VariantUid);
};

// 0x50 (0x190 - 0x140)
// Class InterchangeFactoryNodes.InterchangeSkeletonFactoryNode
class UInterchangeSkeletonFactoryNode : public UInterchangeFactoryBaseNode
{
public:
	uint8                                        Pad_53D5[0x50];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInterchangeSkeletonFactoryNode* GetDefaultObj();

	bool SetCustomUseTimeZeroForBindPose(bool& AttributeValue);
	bool SetCustomSkeletalMeshFactoryNodeUid(const class FString& AttributeValue);
	bool SetCustomRootJointUid(const class FString& AttributeValue);
	void InitializeSkeletonNode(const class FString& UniqueID, const class FString& DisplayLabel, const class FString& InAssetClass);
	class UClass* GetObjectClass();
	bool GetCustomUseTimeZeroForBindPose(bool* AttributeValue);
	bool GetCustomSkeletalMeshFactoryNodeUid(class FString* AttributeValue);
	bool GetCustomRootJointUid(class FString* AttributeValue);
};

// 0x290 (0x3D0 - 0x140)
// Class InterchangeFactoryNodes.InterchangeTextureFactoryNode
class UInterchangeTextureFactoryNode : public UInterchangeFactoryBaseNode
{
public:
	uint8                                        Pad_550B[0x290];                                   // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInterchangeTextureFactoryNode* GetDefaultObj();

	bool SetCustomVirtualTextureStreaming(bool& AttributeValue, bool bAddApplyDelegate);
	bool SetCustomTranslatedTextureNodeUid(const class FString& AttributeValue);
	bool SetCustomSRGB(bool& AttributeValue, bool bAddApplyDelegate);
	bool SetCustomPreferCompressedSourceData(bool& AttributeValue);
	bool SetCustomPowerOfTwoMode(uint8& AttributeValue, bool bAddApplyDelegate);
	bool SetCustomPaddingColor(struct FColor& AttributeValue, bool bAddApplyDelegate);
	bool SetCustomMipLoadOptions(uint8& AttributeValue, bool bAddApplyDelegate);
	bool SetCustomMipGenSettings(uint8& AttributeValue, bool bAddApplyDelegate);
	bool SetCustomMaxTextureSize(int32& AttributeValue, bool bAddApplyDelegate);
	bool SetCustomLossyCompressionAmount(uint8& AttributeValue, bool bAddApplyDelegate);
	bool SetCustomLODGroup(uint8& AttributeValue, bool bAddApplyDelegate);
	bool SetCustomLODBias(int32& AttributeValue, bool bAddApplyDelegate);
	bool SetCustomFilter(uint8& AttributeValue, bool bAddApplyDelegate);
	bool SetCustomDownscaleOptions(uint8& AttributeValue, bool bAddApplyDelegate);
	bool SetCustomDownscale(float& AttributeValue, bool bAddApplyDelegate);
	bool SetCustomDeferCompression(bool& AttributeValue, bool bAddApplyDelegate);
	bool SetCustomCompressionSettings(uint8& AttributeValue, bool bAddApplyDelegate);
	bool SetCustomCompressionQuality(uint8& AttributeValue, bool bAddApplyDelegate);
	bool SetCustomCompressionNoAlpha(bool& AttributeValue, bool bAddApplyDelegate);
	bool SetCustomCompositeTextureMode(uint8& AttributeValue, bool bAddApplyDelegate);
	bool SetCustomCompositePower(float& AttributeValue, bool bAddApplyDelegate);
	bool SetCustomChromaKeyThreshold(float& AttributeValue, bool bAddApplyDelegate);
	bool SetCustomChromaKeyColor(struct FColor& AttributeValue, bool bAddApplyDelegate);
	bool SetCustombUseLegacyGamma(bool& AttributeValue, bool bAddApplyDelegate);
	bool SetCustombPreserveBorder(bool& AttributeValue, bool bAddApplyDelegate);
	bool SetCustombFlipGreenChannel(bool& AttributeValue, bool bAddApplyDelegate);
	bool SetCustombDoScaleMipsForAlphaCoverage(bool& AttributeValue, bool bAddApplyDelegate);
	bool SetCustombChromaKeyTexture(bool& AttributeValue, bool bAddApplyDelegate);
	bool SetCustomAlphaCoverageThresholds(struct FVector4& AttributeValue, bool bAddApplyDelegate);
	bool SetCustomAllowNonPowerOfTwo(bool& AttributeValue);
	bool SetCustomAdjustVibrance(float& AttributeValue, bool bAddApplyDelegate);
	bool SetCustomAdjustSaturation(float& AttributeValue, bool bAddApplyDelegate);
	bool SetCustomAdjustRGBCurve(float& AttributeValue, bool bAddApplyDelegate);
	bool SetCustomAdjustMinAlpha(float& AttributeValue, bool bAddApplyDelegate);
	bool SetCustomAdjustMaxAlpha(float& AttributeValue, bool bAddApplyDelegate);
	bool SetCustomAdjustHue(float& AttributeValue, bool bAddApplyDelegate);
	bool SetCustomAdjustBrightnessCurve(float& AttributeValue, bool bAddApplyDelegate);
	bool SetCustomAdjustBrightness(float& AttributeValue, bool bAddApplyDelegate);
	void InitializeTextureNode(const class FString& UniqueID, const class FString& DisplayLabel, const class FString& InAssetName);
	class UClass* GetObjectClass();
	bool GetCustomVirtualTextureStreaming(bool* AttributeValue);
	bool GetCustomTranslatedTextureNodeUid(class FString* AttributeValue);
	bool GetCustomSRGB(bool* AttributeValue);
	bool GetCustomPreferCompressedSourceData(bool* AttributeValue);
	bool GetCustomPowerOfTwoMode(uint8* AttributeValue);
	bool GetCustomPaddingColor(struct FColor* AttributeValue);
	bool GetCustomMipLoadOptions(uint8* AttributeValue);
	bool GetCustomMipGenSettings(uint8* AttributeValue);
	bool GetCustomMaxTextureSize(int32* AttributeValue);
	bool GetCustomLossyCompressionAmount(uint8* AttributeValue);
	bool GetCustomLODGroup(uint8* AttributeValue);
	bool GetCustomLODBias(int32* AttributeValue);
	bool GetCustomFilter(uint8* AttributeValue);
	bool GetCustomDownscaleOptions(uint8* AttributeValue);
	bool GetCustomDownscale(float* AttributeValue);
	bool GetCustomDeferCompression(bool* AttributeValue);
	bool GetCustomCompressionSettings(uint8* AttributeValue);
	bool GetCustomCompressionQuality(uint8* AttributeValue);
	bool GetCustomCompressionNoAlpha(bool* AttributeValue);
	bool GetCustomCompositeTextureMode(uint8* AttributeValue);
	bool GetCustomCompositePower(float* AttributeValue);
	bool GetCustomChromaKeyThreshold(float* AttributeValue);
	bool GetCustomChromaKeyColor(struct FColor* AttributeValue);
	bool GetCustombUseLegacyGamma(bool* AttributeValue);
	bool GetCustombPreserveBorder(bool* AttributeValue);
	bool GetCustombFlipGreenChannel(bool* AttributeValue);
	bool GetCustombDoScaleMipsForAlphaCoverage(bool* AttributeValue);
	bool GetCustombChromaKeyTexture(bool* AttributeValue);
	bool GetCustomAlphaCoverageThresholds(struct FVector4* AttributeValue);
	bool GetCustomAllowNonPowerOfTwo(bool* AttributeValue);
	bool GetCustomAdjustVibrance(float* AttributeValue);
	bool GetCustomAdjustSaturation(float* AttributeValue);
	bool GetCustomAdjustRGBCurve(float* AttributeValue);
	bool GetCustomAdjustMinAlpha(float* AttributeValue);
	bool GetCustomAdjustMaxAlpha(float* AttributeValue);
	bool GetCustomAdjustHue(float* AttributeValue);
	bool GetCustomAdjustBrightnessCurve(float* AttributeValue);
	bool GetCustomAdjustBrightness(float* AttributeValue);
};

// 0x30 (0x400 - 0x3D0)
// Class InterchangeFactoryNodes.InterchangeTexture2DArrayFactoryNode
class UInterchangeTexture2DArrayFactoryNode : public UInterchangeTextureFactoryNode
{
public:
	uint8                                        Pad_5526[0x30];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInterchangeTexture2DArrayFactoryNode* GetDefaultObj();

	bool SetCustomAddressZ(uint8 AttributeValue, bool bAddApplyDelegate);
	bool GetCustomAddressZ(uint8* AttributeValue);
	bool GetCustomAddressY(uint8* AttributeValue);
	bool GetCustomAddressX(uint8* AttributeValue);
};

// 0x98 (0x468 - 0x3D0)
// Class InterchangeFactoryNodes.InterchangeTexture2DFactoryNode
class UInterchangeTexture2DFactoryNode : public UInterchangeTextureFactoryNode
{
public:
	uint8                                        Pad_5546[0x98];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInterchangeTexture2DFactoryNode* GetDefaultObj();

	void SetSourceBlocks(TMap<int32, class FString>& InSourceBlocks);
	void SetSourceBlockByCoordinates(int32 X, int32 Y, const class FString& InSourceFile);
	void SetSourceBlock(int32 BlockIndex, const class FString& InSourceFile);
	bool SetCustomAddressY(enum class ETextureAddress AttributeValue, bool bAddApplyDelegate);
	bool SetCustomAddressX(enum class ETextureAddress AttributeValue, bool bAddApplyDelegate);
	TMap<int32, class FString> GetSourceBlocks();
	bool GetSourceBlockByCoordinates(int32 X, int32 Y, class FString* OutSourceFile);
	bool GetSourceBlock(int32 BlockIndex, class FString* OutSourceFile);
	bool GetCustomAddressY(enum class ETextureAddress* AttributeValue);
	bool GetCustomAddressX(enum class ETextureAddress* AttributeValue);
};

// 0x0 (0x3D0 - 0x3D0)
// Class InterchangeFactoryNodes.InterchangeTextureCubeArrayFactoryNode
class UInterchangeTextureCubeArrayFactoryNode : public UInterchangeTextureFactoryNode
{
public:

	static class UClass* StaticClass();
	static class UInterchangeTextureCubeArrayFactoryNode* GetDefaultObj();

};

// 0x0 (0x3D0 - 0x3D0)
// Class InterchangeFactoryNodes.InterchangeTextureCubeFactoryNode
class UInterchangeTextureCubeFactoryNode : public UInterchangeTextureFactoryNode
{
public:

	static class UClass* StaticClass();
	static class UInterchangeTextureCubeFactoryNode* GetDefaultObj();

};

// 0x20 (0x488 - 0x468)
// Class InterchangeFactoryNodes.InterchangeTextureLightProfileFactoryNode
class UInterchangeTextureLightProfileFactoryNode : public UInterchangeTexture2DFactoryNode
{
public:
	uint8                                        Pad_556A[0x20];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInterchangeTextureLightProfileFactoryNode* GetDefaultObj();

	bool SetCustomTextureMultiplier(float AttributeValue, bool bAddApplyDelegate);
	bool SetCustomBrightness(float AttributeValue, bool bAddApplyDelegate);
	bool GetCustomTextureMultiplier(float* AttributeValue);
	bool GetCustomBrightness(float* AttributeValue);
};

// 0x0 (0x3D0 - 0x3D0)
// Class InterchangeFactoryNodes.InterchangeVolumeTextureFactoryNode
class UInterchangeVolumeTextureFactoryNode : public UInterchangeTextureFactoryNode
{
public:

	static class UClass* StaticClass();
	static class UInterchangeVolumeTextureFactoryNode* GetDefaultObj();

};

// 0x340 (0x480 - 0x140)
// Class InterchangeFactoryNodes.InterchangeAnimSequenceFactoryNode
class UInterchangeAnimSequenceFactoryNode : public UInterchangeFactoryBaseNode
{
public:
	uint8                                        Pad_55D9[0x340];                                   // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInterchangeAnimSequenceFactoryNode* GetDefaultObj();

	bool SetCustomSkeletonSoftObjectPath(struct FSoftObjectPath& AttributeValue);
	bool SetCustomSkeletonFactoryNodeUid(const class FString& AttributeValue);
	bool SetCustomRemoveCurveRedundantKeys(bool& AttributeValue);
	bool SetCustomMaterialDriveParameterOnCustomAttribute(bool& AttributeValue);
	bool SetCustomImportBoneTracksSampleRate(double& AttributeValue);
	bool SetCustomImportBoneTracksRangeStop(double& AttributeValue);
	bool SetCustomImportBoneTracksRangeStart(double& AttributeValue);
	bool SetCustomImportBoneTracks(bool& AttributeValue);
	bool SetCustomImportAttributeCurves(bool& AttributeValue);
	bool SetCustomDoNotImportCurveWithZero(bool& AttributeValue);
	bool SetCustomDeleteExistingNonCurveCustomAttributes(bool& AttributeValue);
	bool SetCustomDeleteExistingMorphTargetCurves(bool& AttributeValue);
	bool SetCustomDeleteExistingCustomAttributeCurves(bool& AttributeValue);
	bool SetCustomAddCurveMetadataToSkeleton(bool& AttributeValue);
	void SetAnimationPayloadKeysForSceneNodeUids(TMap<class FString, class FString>& SceneNodeAnimationPayloadKeyUids, TMap<class FString, uint8>& SceneNodeAnimationPayloadKeyTypes);
	void SetAnimationPayloadKeysForMorphTargetNodeUids(TMap<class FString, class FString>& MorphTargetAnimationPayloadKeyUids, TMap<class FString, uint8>& MorphTargetAnimationPayloadKeyTypes);
	bool SetAnimatedMaterialCurveSuffixe(const class FString& MaterialCurveSuffixe);
	bool SetAnimatedAttributeStepCurveName(const class FString& AttributeStepCurveName);
	bool SetAnimatedAttributeCurveName(const class FString& AttributeCurveName);
	bool RemoveAnimatedMaterialCurveSuffixe(const class FString& MaterialCurveSuffixe);
	bool RemoveAnimatedAttributeStepCurveName(const class FString& AttributeStepCurveName);
	bool RemoveAnimatedAttributeCurveName(const class FString& AttributeCurveName);
	void InitializeAnimSequenceNode(const class FString& UniqueID, const class FString& DisplayLabel);
	void GetSceneNodeAnimationPayloadKeys(TMap<class FString, struct FInterchangeAnimationPayLoadKey>* OutSceneNodeAnimationPayloadKeys);
	class UClass* GetObjectClass();
	void GetMorphTargetNodeAnimationPayloadKeys(TMap<class FString, struct FInterchangeAnimationPayLoadKey>* OutMorphTargetNodeAnimationPayloads);
	bool GetCustomSkeletonSoftObjectPath(struct FSoftObjectPath* AttributeValue);
	bool GetCustomSkeletonFactoryNodeUid(class FString* AttributeValue);
	bool GetCustomRemoveCurveRedundantKeys(bool* AttributeValue);
	bool GetCustomMaterialDriveParameterOnCustomAttribute(bool* AttributeValue);
	bool GetCustomImportBoneTracksSampleRate(double* AttributeValue);
	bool GetCustomImportBoneTracksRangeStop(double* AttributeValue);
	bool GetCustomImportBoneTracksRangeStart(double* AttributeValue);
	bool GetCustomImportBoneTracks(bool* AttributeValue);
	bool GetCustomImportAttributeCurves(bool* AttributeValue);
	bool GetCustomDoNotImportCurveWithZero(bool* AttributeValue);
	bool GetCustomDeleteExistingNonCurveCustomAttributes(bool* AttributeValue);
	bool GetCustomDeleteExistingMorphTargetCurves(bool* AttributeValue);
	bool GetCustomDeleteExistingCustomAttributeCurves(bool* AttributeValue);
	bool GetCustomAddCurveMetadataToSkeleton(bool* AttributeValue);
	int32 GetAnimatedMaterialCurveSuffixesCount();
	void GetAnimatedMaterialCurveSuffixes(TArray<class FString>* OutMaterialCurveSuffixes);
	void GetAnimatedMaterialCurveSuffixe(int32 Index, class FString* OutMaterialCurveSuffixe);
	int32 GetAnimatedAttributeStepCurveNamesCount();
	void GetAnimatedAttributeStepCurveNames(TArray<class FString>* OutAttributeStepCurveNames);
	void GetAnimatedAttributeStepCurveName(int32 Index, class FString* OutAttributeStepCurveName);
	int32 GetAnimatedAttributeCurveNamesCount();
	void GetAnimatedAttributeCurveNames(TArray<class FString>* OutAttributeCurveNames);
	void GetAnimatedAttributeCurveName(int32 Index, class FString* OutAttributeCurveName);
};

// 0x20 (0x160 - 0x140)
// Class InterchangeFactoryNodes.InterchangeCommonPipelineDataFactoryNode
class UInterchangeCommonPipelineDataFactoryNode : public UInterchangeFactoryBaseNode
{
public:
	uint8                                        Pad_55FB[0x20];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInterchangeCommonPipelineDataFactoryNode* GetDefaultObj();

	bool SetCustomGlobalOffsetTransform(class UInterchangeBaseNodeContainer* NodeContainer, struct FTransform& AttributeValue);
	bool SetBakeMeshes(class UInterchangeBaseNodeContainer* NodeContainer, bool& AttributeValue);
	bool GetCustomGlobalOffsetTransform(struct FTransform* AttributeValue);
	bool GetBakeMeshes(bool* AttributeValue);
};

// 0x0 (0x140 - 0x140)
// Class InterchangeFactoryNodes.InterchangeBaseMaterialFactoryNode
class UInterchangeBaseMaterialFactoryNode : public UInterchangeFactoryBaseNode
{
public:

	static class UClass* StaticClass();
	static class UInterchangeBaseMaterialFactoryNode* GetDefaultObj();

};

// 0x70 (0x1B0 - 0x140)
// Class InterchangeFactoryNodes.InterchangeMaterialFactoryNode
class UInterchangeMaterialFactoryNode : public UInterchangeBaseMaterialFactoryNode
{
public:
	uint8                                        Pad_56F6[0x70];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInterchangeMaterialFactoryNode* GetDefaultObj();

	bool SetCustomTwoSided(bool& AttributeValue, bool bAddApplyDelegate);
	bool SetCustomTranslucencyLightingMode(enum class ETranslucencyLightingMode& AttributeValue, bool bAddApplyDelegate);
	bool SetCustomShadingModel(enum class EMaterialShadingModel& AttributeValue, bool bAddApplyDelegate);
	bool SetCustomScreenSpaceReflections(bool& AttributeValue);
	bool SetCustomRefractionMethod(enum class ERefractionMode& AttributeValue, bool bAddApplyDelegate);
	bool SetCustomOpacityMaskClipValue(float& AttributeValue, bool bAddApplyDelegate);
	bool SetCustomBlendMode(enum class EBlendMode& AttributeValue, bool bAddApplyDelegate);
	bool GetTransmissionColorConnection(class FString* ExpressionNodeUid, class FString* OutputName);
	bool GetTangentConnection(class FString* ExpressionNodeUid, class FString* OutputName);
	bool GetSubsurfaceConnection(class FString* ExpressionNodeUid, class FString* OutputName);
	bool GetSpecularConnection(class FString* ExpressionNodeUid, class FString* OutputName);
	bool GetRoughnessConnection(class FString* ExpressionNodeUid, class FString* OutputName);
	bool GetRefractionConnection(class FString* ExpressionNodeUid, class FString* OutputName);
	bool GetOpacityConnection(class FString* ExpressionNodeUid, class FString* OutputName);
	bool GetOcclusionConnection(class FString* ExpressionNodeUid, class FString* OutputName);
	class UClass* GetObjectClass();
	bool GetNormalConnection(class FString* ExpressionNodeUid, class FString* OutputName);
	bool GetMetallicConnection(class FString* ExpressionNodeUid, class FString* OutputName);
	bool GetFuzzColorConnection(class FString* ExpressionNodeUid, class FString* OutputName);
	bool GetEmissiveColorConnection(class FString* ExpressionNodeUid, class FString* OutputName);
	bool GetCustomTwoSided(bool* AttributeValue);
	bool GetCustomTranslucencyLightingMode(enum class ETranslucencyLightingMode* AttributeValue);
	bool GetCustomShadingModel(enum class EMaterialShadingModel* AttributeValue);
	bool GetCustomScreenSpaceReflections(bool* AttributeValue);
	bool GetCustomRefractionMethod(enum class ERefractionMode* AttributeValue);
	bool GetCustomOpacityMaskClipValue(float* AttributeValue);
	bool GetCustomBlendMode(enum class EBlendMode* AttributeValue);
	bool GetClothConnection(class FString* ExpressionNodeUid, class FString* OutputName);
	bool GetClearCoatRoughnessConnection(class FString* ExpressionNodeUid, class FString* OutputName);
	bool GetClearCoatNormalConnection(class FString* ExpressionNodeUid, class FString* OutputName);
	bool GetClearCoatConnection(class FString* ExpressionNodeUid, class FString* OutputName);
	bool GetBaseColorConnection(class FString* ExpressionNodeUid, class FString* OutputName);
	bool GetAnisotropyConnection(class FString* ExpressionNodeUid, class FString* OutputName);
	bool ConnectToTransmissionColor(const class FString& AttributeValue);
	bool ConnectToTangent(const class FString& ExpressionNodeUid);
	bool ConnectToSubsurface(const class FString& ExpressionNodeUid);
	bool ConnectToSpecular(const class FString& ExpressionNodeUid);
	bool ConnectToRoughness(const class FString& ExpressionNodeUid);
	bool ConnectToRefraction(const class FString& AttributeValue);
	bool ConnectToOpacity(const class FString& AttributeValue);
	bool ConnectToOcclusion(const class FString& AttributeValue);
	bool ConnectToNormal(const class FString& ExpressionNodeUid);
	bool ConnectToMetallic(const class FString& AttributeValue);
	bool ConnectToFuzzColor(const class FString& AttributeValue);
	bool ConnectToEmissiveColor(const class FString& ExpressionNodeUid);
	bool ConnectToCloth(const class FString& AttributeValue);
	bool ConnectToClearCoatRoughness(const class FString& AttributeValue);
	bool ConnectToClearCoatNormal(const class FString& AttributeValue);
	bool ConnectToClearCoat(const class FString& AttributeValue);
	bool ConnectToBaseColor(const class FString& AttributeValue);
	bool ConnectToAnisotropy(const class FString& ExpressionNodeUid);
	bool ConnectOutputToTransmissionColor(const class FString& ExpressionNodeUid, const class FString& OutputName);
	bool ConnectOutputToTangent(const class FString& ExpressionNodeUid, const class FString& OutputName);
	bool ConnectOutputToSubsurface(const class FString& ExpressionNodeUid, const class FString& OutputName);
	bool ConnectOutputToSpecular(const class FString& ExpressionNodeUid, const class FString& OutputName);
	bool ConnectOutputToRoughness(const class FString& ExpressionNodeUid, const class FString& OutputName);
	bool ConnectOutputToRefraction(const class FString& ExpressionNodeUid, const class FString& OutputName);
	bool ConnectOutputToOpacity(const class FString& ExpressionNodeUid, const class FString& OutputName);
	bool ConnectOutputToOcclusion(const class FString& ExpressionNodeUid, const class FString& OutputName);
	bool ConnectOutputToNormal(const class FString& ExpressionNodeUid, const class FString& OutputName);
	bool ConnectOutputToMetallic(const class FString& ExpressionNodeUid, const class FString& OutputName);
	bool ConnectOutputToFuzzColor(const class FString& ExpressionNodeUid, const class FString& OutputName);
	bool ConnectOutputToEmissiveColor(const class FString& ExpressionNodeUid, const class FString& OutputName);
	bool ConnectOutputToCloth(const class FString& ExpressionNodeUid, const class FString& OutputName);
	bool ConnectOutputToClearCoatRoughness(const class FString& ExpressionNodeUid, const class FString& OutputName);
	bool ConnectOutputToClearCoatNormal(const class FString& ExpressionNodeUid, const class FString& OutputName);
	bool ConnectOutputToClearCoat(const class FString& ExpressionNodeUid, const class FString& OutputName);
	bool ConnectOutputToBaseColor(const class FString& ExpressionNodeUid, const class FString& OutputName);
	bool ConnectOutputToAnisotropy(const class FString& ExpressionNodeUid, const class FString& OutputName);
};

// 0x10 (0x150 - 0x140)
// Class InterchangeFactoryNodes.InterchangeMaterialExpressionFactoryNode
class UInterchangeMaterialExpressionFactoryNode : public UInterchangeFactoryBaseNode
{
public:
	uint8                                        Pad_5702[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInterchangeMaterialExpressionFactoryNode* GetDefaultObj();

	bool SetCustomExpressionClassName(const class FString& AttributeValue);
	bool GetCustomExpressionClassName(class FString* AttributeValue);
};

// 0x20 (0x160 - 0x140)
// Class InterchangeFactoryNodes.InterchangeMaterialInstanceFactoryNode
class UInterchangeMaterialInstanceFactoryNode : public UInterchangeBaseMaterialFactoryNode
{
public:
	uint8                                        Pad_5710[0x20];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInterchangeMaterialInstanceFactoryNode* GetDefaultObj();

	bool SetCustomParent(const class FString& AttributeValue);
	bool SetCustomInstanceClassName(const class FString& AttributeValue);
	bool GetCustomParent(class FString* AttributeValue);
	bool GetCustomInstanceClassName(class FString* AttributeValue);
};

// 0x10 (0x160 - 0x150)
// Class InterchangeFactoryNodes.InterchangeMaterialFunctionCallExpressionFactoryNode
class UInterchangeMaterialFunctionCallExpressionFactoryNode : public UInterchangeMaterialExpressionFactoryNode
{
public:
	uint8                                        Pad_5719[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInterchangeMaterialFunctionCallExpressionFactoryNode* GetDefaultObj();

	bool SetCustomMaterialFunctionDependency(const class FString& AttributeValue);
	bool GetCustomMaterialFunctionDependency(class FString* AttributeValue);
};

// 0x0 (0x140 - 0x140)
// Class InterchangeFactoryNodes.InterchangeMaterialFunctionFactoryNode
class UInterchangeMaterialFunctionFactoryNode : public UInterchangeBaseMaterialFactoryNode
{
public:

	static class UClass* StaticClass();
	static class UInterchangeMaterialFunctionFactoryNode* GetDefaultObj();

	class UClass* GetObjectClass();
	bool GetInputConnection(const class FString& InputName, class FString* ExpressionNodeUid, class FString* OutputName);
};

// 0x98 (0x208 - 0x170)
// Class InterchangeFactoryNodes.InterchangeMeshActorFactoryNode
class UInterchangeMeshActorFactoryNode : public UInterchangeActorFactoryNode
{
public:
	uint8                                        Pad_572F[0x98];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInterchangeMeshActorFactoryNode* GetDefaultObj();

	bool SetSlotMaterialDependencyUid(const class FString& SlotName, const class FString& MaterialDependencyUid);
	bool SetCustomGeometricTransform(struct FTransform& AttributeValue);
	bool SetCustomAnimationAssetUidToPlay(const class FString& AttributeValue);
	bool RemoveSlotMaterialDependencyUid(const class FString& SlotName);
	bool GetSlotMaterialDependencyUid(const class FString& SlotName, class FString* OutMaterialDependency);
	void GetSlotMaterialDependencies(TMap<class FString, class FString>* OutMaterialDependencies);
	bool GetCustomGeometricTransform(struct FTransform* AttributeValue);
	bool GetCustomAnimationAssetUidToPlay(class FString* AttributeValue);
};

// 0x170 (0x2B0 - 0x140)
// Class InterchangeFactoryNodes.InterchangeMeshFactoryNode
class UInterchangeMeshFactoryNode : public UInterchangeFactoryBaseNode
{
public:
	uint8                                        Pad_5767[0x170];                                   // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInterchangeMeshFactoryNode* GetDefaultObj();

	bool SetSlotMaterialDependencyUid(const class FString& SlotName, const class FString& MaterialDependencyUid);
	bool SetCustomVertexColorReplace(bool& AttributeValue);
	bool SetCustomVertexColorOverride(struct FColor& AttributeValue);
	bool SetCustomVertexColorIgnore(bool& AttributeValue);
	bool SetCustomUseMikkTSpace(bool& AttributeValue, bool bAddApplyDelegate);
	bool SetCustomUseHighPrecisionTangentBasis(bool& AttributeValue, bool bAddApplyDelegate);
	bool SetCustomUseFullPrecisionUVs(bool& AttributeValue, bool bAddApplyDelegate);
	bool SetCustomUseBackwardsCompatibleF16TruncUVs(bool& AttributeValue, bool bAddApplyDelegate);
	bool SetCustomRemoveDegenerates(bool& AttributeValue, bool bAddApplyDelegate);
	bool SetCustomRecomputeTangents(bool& AttributeValue, bool bAddApplyDelegate);
	bool SetCustomRecomputeNormals(bool& AttributeValue, bool bAddApplyDelegate);
	bool SetCustomLODGroup(class FName& AttributeValue, bool bAddApplyDelegate);
	bool SetCustomComputeWeightedNormals(bool& AttributeValue, bool bAddApplyDelegate);
	bool RemoveSlotMaterialDependencyUid(const class FString& SlotName);
	bool RemoveLodDataUniqueId(const class FString& LodDataUniqueId);
	bool GetSlotMaterialDependencyUid(const class FString& SlotName, class FString* OutMaterialDependency);
	void GetSlotMaterialDependencies(TMap<class FString, class FString>* OutMaterialDependencies);
	void GetLodDataUniqueIds(TArray<class FString>* OutLodDataUniqueIds);
	int32 GetLodDataCount();
	bool GetCustomVertexColorReplace(bool* AttributeValue);
	bool GetCustomVertexColorOverride(struct FColor* AttributeValue);
	bool GetCustomVertexColorIgnore(bool* AttributeValue);
	bool GetCustomUseMikkTSpace(bool* AttributeValue);
	bool GetCustomUseHighPrecisionTangentBasis(bool* AttributeValue);
	bool GetCustomUseFullPrecisionUVs(bool* AttributeValue);
	bool GetCustomUseBackwardsCompatibleF16TruncUVs(bool* AttributeValue);
	bool GetCustomRemoveDegenerates(bool* AttributeValue);
	bool GetCustomRecomputeTangents(bool* AttributeValue);
	bool GetCustomRecomputeNormals(bool* AttributeValue);
	bool GetCustomLODGroup(class FName* AttributeValue);
	bool GetCustomComputeWeightedNormals(bool* AttributeValue);
	bool AddLodDataUniqueId(const class FString& LodDataUniqueId);
};

// 0x0 (0x140 - 0x140)
// Class InterchangeFactoryNodes.InterchangeSceneImportAssetFactoryNode
class UInterchangeSceneImportAssetFactoryNode : public UInterchangeFactoryBaseNode
{
public:

	static class UClass* StaticClass();
	static class UInterchangeSceneImportAssetFactoryNode* GetDefaultObj();

};

// 0xC8 (0x378 - 0x2B0)
// Class InterchangeFactoryNodes.InterchangeSkeletalMeshFactoryNode
class UInterchangeSkeletalMeshFactoryNode : public UInterchangeMeshFactoryNode
{
public:
	uint8                                        Pad_57A5[0xC8];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInterchangeSkeletalMeshFactoryNode* GetDefaultObj();

	bool SetCustomUseHighPrecisionSkinWeights(bool& AttributeValue, bool bAddApplyDelegate);
	bool SetCustomThresholdUV(float& AttributeValue, bool bAddApplyDelegate);
	bool SetCustomThresholdTangentNormal(float& AttributeValue, bool bAddApplyDelegate);
	bool SetCustomThresholdPosition(float& AttributeValue, bool bAddApplyDelegate);
	bool SetCustomSkeletonSoftObjectPath(struct FSoftObjectPath& AttributeValue);
	bool SetCustomPhysicAssetSoftObjectPath(struct FSoftObjectPath& AttributeValue);
	bool SetCustomMorphThresholdPosition(float& AttributeValue, bool bAddApplyDelegate);
	bool SetCustomImportMorphTarget(bool& AttributeValue);
	bool SetCustomImportContentType(enum class EInterchangeSkeletalMeshContentType& AttributeValue);
	bool SetCustomCreatePhysicsAsset(bool& AttributeValue);
	bool SetCustomBoneInfluenceLimit(int32& AttributeValue, bool bAddApplyDelegate);
	void InitializeSkeletalMeshNode(const class FString& UniqueID, const class FString& DisplayLabel, const class FString& InAssetClass);
	class UClass* GetObjectClass();
	bool GetCustomUseHighPrecisionSkinWeights(bool* AttributeValue);
	bool GetCustomThresholdUV(float* AttributeValue);
	bool GetCustomThresholdTangentNormal(float* AttributeValue);
	bool GetCustomThresholdPosition(float* AttributeValue);
	bool GetCustomSkeletonSoftObjectPath(struct FSoftObjectPath* AttributeValue);
	bool GetCustomPhysicAssetSoftObjectPath(struct FSoftObjectPath* AttributeValue);
	bool GetCustomMorphThresholdPosition(float* AttributeValue);
	bool GetCustomImportMorphTarget(bool* AttributeValue);
	bool GetCustomImportContentType(enum class EInterchangeSkeletalMeshContentType* AttributeValue);
	bool GetCustomCreatePhysicsAsset(bool* AttributeValue);
	bool GetCustomBoneInfluenceLimit(int32* AttributeValue);
};

// 0x30 (0x170 - 0x140)
// Class InterchangeFactoryNodes.InterchangeSkeletalMeshLodDataNode
class UInterchangeSkeletalMeshLodDataNode : public UInterchangeFactoryBaseNode
{
public:
	uint8                                        Pad_57B3[0x30];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInterchangeSkeletalMeshLodDataNode* GetDefaultObj();

	bool SetCustomSkeletonUid(const class FString& AttributeValue);
	bool RemoveMeshUid(const class FString& MeshName);
	bool RemoveAllMeshes();
	int32 GetMeshUidsCount();
	void GetMeshUids(TArray<class FString>* OutMeshNames);
	bool GetCustomSkeletonUid(class FString* AttributeValue);
	bool AddMeshUid(const class FString& MeshName);
};

// 0xE8 (0x398 - 0x2B0)
// Class InterchangeFactoryNodes.InterchangeStaticMeshFactoryNode
class UInterchangeStaticMeshFactoryNode : public UInterchangeMeshFactoryNode
{
public:
	uint8                                        Pad_57F5[0xE8];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInterchangeStaticMeshFactoryNode* GetDefaultObj();

	bool SetCustomSupportFaceRemap(bool& AttributeValue, bool bAddApplyDelegate);
	bool SetCustomSrcLightmapIndex(int32& AttributeValue, bool bAddApplyDelegate);
	bool SetCustomMinLightmapResolution(int32& AttributeValue, bool bAddApplyDelegate);
	bool SetCustomMaxLumenMeshCards(int32& AttributeValue, bool bAddApplyDelegate);
	bool SetCustomGenerateLightmapUVs(bool& AttributeValue, bool bAddApplyDelegate);
	bool SetCustomGenerateDistanceFieldAsIfTwoSided(bool& AttributeValue, bool bAddApplyDelegate);
	bool SetCustomDstLightmapIndex(int32& AttributeValue, bool bAddApplyDelegate);
	bool SetCustomDistanceFieldResolutionScale(float& AttributeValue, bool bAddApplyDelegate);
	bool SetCustomDistanceFieldReplacementMesh(struct FSoftObjectPath& AttributeValue, bool bAddApplyDelegate);
	bool SetCustomBuildScale3D(struct FVector& AttributeValue, bool bAddApplyDelegate);
	bool SetCustomBuildReversedIndexBuffer(bool& AttributeValue, bool bAddApplyDelegate);
	bool SetCustomBuildNanite(bool& AttributeValue, bool bAddApplyDelegate);
	bool RemoveSocketUd(const class FString& SocketUid);
	void InitializeStaticMeshNode(const class FString& UniqueID, const class FString& DisplayLabel, const class FString& InAssetClass);
	void GetSocketUids(TArray<class FString>* OutSocketUids);
	int32 GetSocketUidCount();
	class UClass* GetObjectClass();
	bool GetCustomSupportFaceRemap(bool* AttributeValue);
	bool GetCustomSrcLightmapIndex(int32* AttributeValue);
	bool GetCustomMinLightmapResolution(int32* AttributeValue);
	bool GetCustomMaxLumenMeshCards(int32* AttributeValue);
	bool GetCustomGenerateLightmapUVs(bool* AttributeValue);
	bool GetCustomGenerateDistanceFieldAsIfTwoSided(bool* AttributeValue);
	bool GetCustomDstLightmapIndex(int32* AttributeValue);
	bool GetCustomDistanceFieldResolutionScale(float* AttributeValue);
	bool GetCustomDistanceFieldReplacementMesh(struct FSoftObjectPath* AttributeValue);
	bool GetCustomBuildScale3D(struct FVector* AttributeValue);
	bool GetCustomBuildReversedIndexBuffer(bool* AttributeValue);
	bool GetCustomBuildNanite(bool* AttributeValue);
	bool AddSocketUids(TArray<class FString>& InSocketUids);
	bool AddSocketUid(const class FString& SocketUid);
};

// 0xC0 (0x200 - 0x140)
// Class InterchangeFactoryNodes.InterchangeStaticMeshLodDataNode
class UInterchangeStaticMeshLodDataNode : public UInterchangeFactoryBaseNode
{
public:
	uint8                                        Pad_581B[0xC0];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UInterchangeStaticMeshLodDataNode* GetDefaultObj();

	bool SetOneConvexHullPerUCX(bool AttributeValue);
	bool SetImportCollision(bool AttributeValue);
	bool RemoveSphereCollisionMeshUid(const class FString& MeshName);
	bool RemoveMeshUid(const class FString& MeshName);
	bool RemoveConvexCollisionMeshUid(const class FString& MeshName);
	bool RemoveCapsuleCollisionMeshUid(const class FString& MeshName);
	bool RemoveBoxCollisionMeshUid(const class FString& MeshName);
	bool RemoveAllSphereCollisionMeshes();
	bool RemoveAllMeshes();
	bool RemoveAllConvexCollisionMeshes();
	bool RemoveAllCapsuleCollisionMeshes();
	bool RemoveAllBoxCollisionMeshes();
	int32 GetSphereCollisionMeshUidsCount();
	void GetSphereCollisionMeshUids(TArray<class FString>* OutMeshNames);
	bool GetOneConvexHullPerUCX(bool* AttributeValue);
	int32 GetMeshUidsCount();
	void GetMeshUids(TArray<class FString>* OutMeshNames);
	bool GetImportCollision(bool* AttributeValue);
	int32 GetConvexCollisionMeshUidsCount();
	void GetConvexCollisionMeshUids(TArray<class FString>* OutMeshNames);
	int32 GetCapsuleCollisionMeshUidsCount();
	void GetCapsuleCollisionMeshUids(TArray<class FString>* OutMeshNames);
	int32 GetBoxCollisionMeshUidsCount();
	void GetBoxCollisionMeshUids(TArray<class FString>* OutMeshNames);
	bool AddSphereCollisionMeshUid(const class FString& MeshName);
	bool AddMeshUid(const class FString& MeshName);
	bool AddConvexCollisionMeshUid(const class FString& MeshName);
	bool AddCapsuleCollisionMeshUid(const class FString& MeshName);
	bool AddBoxCollisionMeshUid(const class FString& MeshName);
};

}


