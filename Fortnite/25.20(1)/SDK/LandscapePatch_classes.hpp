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

// 0x80 (0x320 - 0x2A0)
// Class LandscapePatch.LandscapePatchComponent
class ULandscapePatchComponent : public USceneComponent
{
public:
	TSoftObjectPtr<class ULandscape>             Landscape;                                         // 0x2A0(0x28)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSoftObjectPtr<class ULandscapePatchManager> PatchManager;                                      // 0x2C8(0x28)(Edit, AdvancedDisplay, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bIsEnabled;                                        // 0x2F0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_86F2[0x2];                                     // Fixing Size After Last Property..
	bool                                         bPropertiesCopiedIndicator;                        // 0x2F3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_86F3[0x4];                                     // Fixing Size After Last Property..
	TSoftObjectPtr<class ULandscapePatchManager> PreviousPatchManager;                              // 0x2F8(0x28)(UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LandscapePatchComponent");
		return Clss;
	}

	void SetPatchManager(class ULandscapePatchManager* NewPatchManager);
	void SetLandscape(class ULandscape* NewLandscape);
	void SetIsEnabled(bool bEnabledIn);
	void RequestLandscapeUpdate(bool bInUserTriggeredUpdate);
	void MoveToTop();
	bool IsEnabled();
	class ULandscapePatchManager* GetPatchManager();
	struct FTransform GetLandscapeHeightmapCoordsToWorld();
};

// 0x10 (0x330 - 0x320)
// Class LandscapePatch.LandscapeCircleHeightPatch
class ULandscapeCircleHeightPatch : public ULandscapePatchComponent
{
public:
	float                                        Radius;                                            // 0x320(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        Falloff;                                           // 0x324(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bEditVisibility;                                   // 0x328(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bExclusiveRadius;                                  // 0x329(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_86F4[0x6];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LandscapeCircleHeightPatch");
		return Clss;
	}

};

// 0x70 (0x300 - 0x290)
// Class LandscapePatch.LandscapePatchManager
class ULandscapePatchManager : public ULandscapeBlueprintBrushBase
{
public:
	TArray<TSoftObjectPtr<class ULandscapePatchComponent>> PatchComponents;                                   // 0x290(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	struct FTransform                            HeightmapCoordsToWorld;                            // 0x2A0(0x60)(IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LandscapePatchManager");
		return Clss;
	}

};

// 0x28 (0x50 - 0x28)
// Class LandscapePatch.LandscapeTextureBackedRenderTargetBase
class ULandscapeTextureBackedRenderTargetBase : public UObject
{
public:
	class UTextureRenderTarget2D*                PostLoadRT;                                        // 0x28(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            InternalTexture;                                   // 0x30(0x8)(Edit, ZeroConstructor, EditConst, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextureRenderTarget2D*                RenderTarget;                                      // 0x38(0x8)(Edit, ZeroConstructor, Transient, EditConst, DuplicateTransient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        SizeX;                                             // 0x40(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        SizeY;                                             // 0x44(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bUseInternalTextureOnly;                           // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_86F5[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LandscapeTextureBackedRenderTargetBase");
		return Clss;
	}

};

// 0x8 (0x58 - 0x50)
// Class LandscapePatch.LandscapeWeightTextureBackedRenderTarget
class ULandscapeWeightTextureBackedRenderTarget : public ULandscapeTextureBackedRenderTargetBase
{
public:
	bool                                         bUseAlphaChannel;                                  // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_86F6[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LandscapeWeightTextureBackedRenderTarget");
		return Clss;
	}

};

// 0x10 (0x60 - 0x50)
// Class LandscapePatch.LandscapeHeightTextureBackedRenderTarget
class ULandscapeHeightTextureBackedRenderTarget : public ULandscapeTextureBackedRenderTargetBase
{
public:
	struct FLandscapeHeightPatchConvertToNativeParams ConversionParams;                                  // 0x50(0xC)(NoDestructor, NativeAccessSpecifierPublic)
	enum class ETextureRenderTargetFormat        RenderTargetFormat;                                // 0x5C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_86F7[0x3];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LandscapeHeightTextureBackedRenderTarget");
		return Clss;
	}

};

// 0x30 (0x58 - 0x28)
// Class LandscapePatch.LandscapeWeightPatchTextureInfo
class ULandscapeWeightPatchTextureInfo : public UObject
{
public:
	class FName                                  WeightmapLayerName;                                // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bEditVisibilityLayer;                              // 0x2C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_86F8[0x3];                                     // Fixing Size After Last Property..
	class UTexture*                              TextureAsset;                                      // 0x30(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class ULandscapeWeightTextureBackedRenderTarget* InternalData;                                      // 0x38(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoDestructor, AdvancedDisplay, Protected, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ELandscapeTexturePatchSourceMode  SourceMode;                                        // 0x40(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ELandscapeTexturePatchSourceMode  DetailPanelSourceMode;                             // 0x41(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bUseAlphaChannel;                                  // 0x42(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bOverrideBlendMode;                                // 0x43(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ELandscapeTexturePatchBlendMode   OverrideBlendMode;                                 // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_86F9[0x3];                                     // Fixing Size After Last Property..
	TWeakObjectPtr<class ULandscapeTexturePatch> OwningPatch;                                       // 0x48(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_86FA[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LandscapeWeightPatchTextureInfo");
		return Clss;
	}

};

// 0x80 (0x3A0 - 0x320)
// Class LandscapePatch.LandscapeTexturePatch
class ULandscapeTexturePatch : public ULandscapePatchComponent
{
public:
	int32                                        ResolutionX;                                       // 0x320(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        ResolutionY;                                       // 0x324(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector2D                             UnscaledPatchCoverage;                             // 0x328(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ELandscapeTexturePatchBlendMode   BlendMode;                                         // 0x338(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ELandscapeTexturePatchFalloffMode FalloffMode;                                       // 0x339(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8706[0x2];                                     // Fixing Size After Last Property..
	float                                        Falloff;                                           // 0x33C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ELandscapeTexturePatchSourceMode  HeightSourceMode;                                  // 0x340(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ELandscapeTexturePatchSourceMode  DetailPanelHeightSourceMode;                       // 0x341(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8707[0x6];                                     // Fixing Size After Last Property..
	class ULandscapeHeightTextureBackedRenderTarget* HeightInternalData;                                // 0x348(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoDestructor, Protected, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTexture*                              HeightTextureAsset;                                // 0x350(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bUseTextureAlphaForHeight;                         // 0x358(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ELandscapeTextureHeightPatchEncoding HeightEncoding;                                    // 0x359(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8708[0x6];                                     // Fixing Size After Last Property..
	struct FLandscapeTexturePatchEncodingSettings HeightEncodingSettings;                            // 0x360(0x10)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	enum class ELandscapeTextureHeightPatchZeroHeightMeaning ZeroHeightMeaning;                                 // 0x370(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bApplyComponentZScale;                             // 0x371(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_8709[0x6];                                     // Fixing Size After Last Property..
	TArray<class ULandscapeWeightPatchTextureInfo*> WeightPatches;                                     // 0x378(0x10)(Edit, ExportObject, ZeroConstructor, DisableEditOnTemplate, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	int32                                        NumWeightPatches;                                  // 0x388(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_870A[0x1];                                     // Fixing Size After Last Property..
	bool                                         bBaseResolutionOffLandscape;                       // 0x38D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_870B[0x2];                                     // Fixing Size After Last Property..
	float                                        ResolutionMultiplier;                              // 0x390(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        InitTextureSizeX;                                  // 0x394(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        InitTextureSizeY;                                  // 0x398(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ETextureRenderTargetFormat        HeightRenderTargetFormat;                          // 0x39C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_870C[0x3];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LandscapeTexturePatch");
		return Clss;
	}

	void SnapToLandscape();
	void SetZeroHeightMeaning(enum class ELandscapeTextureHeightPatchZeroHeightMeaning ZeroHeightMeaningIn);
	void SetWeightPatchTextureAsset(class FName& InWeightmapLayerName, class UTexture* TextureIn);
	void SetWeightPatchSourceMode(class FName& InWeightmapLayerName, enum class ELandscapeTexturePatchSourceMode NewMode);
	void SetWeightPatchBlendModeOverride(class FName& InWeightmapLayerName, enum class ELandscapeTexturePatchBlendMode BlendMode);
	void SetUseAlphaChannelForWeightPatch(class FName& InWeightmapLayerName, bool bUseAlphaChannel);
	void SetUseAlphaChannelForHeight(bool bUse);
	void SetUnscaledCoverage(const struct FVector2D& Coverage);
	void SetResolution(const struct FVector2D& ResolutionIn);
	void SetHeightTextureAsset(class UTexture* TextureIn);
	void SetHeightSourceMode(enum class ELandscapeTexturePatchSourceMode NewMode);
	void SetHeightRenderTargetFormat(enum class ETextureRenderTargetFormat Format);
	void SetHeightEncodingSettings(struct FLandscapeTexturePatchEncodingSettings& Settings);
	void SetHeightEncodingMode(enum class ELandscapeTextureHeightPatchEncoding EncodingMode);
	void SetFalloff(float FalloffIn);
	void SetEditVisibilityLayer(class FName& InWeightmapLayerName, bool bEditVisibilityLayer);
	void SetBlendMode(enum class ELandscapeTexturePatchBlendMode BlendModeIn);
	void ResetHeightEncodingMode(enum class ELandscapeTextureHeightPatchEncoding EncodingMode);
	void RemoveWeightPatch(class FName& InWeightmapLayerName);
	void RemoveAllWeightPatches();
	void ReinitializeWeights();
	void ReinitializeHeight();
	enum class ELandscapeTexturePatchSourceMode GetWeightPatchSourceMode(class FName& InWeightmapLayerName);
	class UTextureRenderTarget2D* GetWeightPatchRenderTarget(class FName& InWeightmapLayerName);
	struct FVector2D GetUnscaledCoverage();
	struct FVector2D GetResolution();
	struct FTransform GetPatchToWorldTransform();
	bool GetInitResolutionFromLandscape(float ResolutionMultiplier, struct FVector2D* ResolutionOut);
	enum class ELandscapeTexturePatchSourceMode GetHeightSourceMode();
	class UTextureRenderTarget2D* GetHeightRenderTarget(bool bMarkDirty);
	struct FVector2D GetFullUnscaledWorldSize();
	TArray<class FName> GetAllWeightPatchLayerNames();
	void DisableAllWeightPatches();
	void ClearWeightPatchBlendModeOverride(class FName& InWeightmapLayerName);
	void AddWeightPatch(class FName& InWeightmapLayerName, enum class ELandscapeTexturePatchSourceMode SourceMode, bool bUseAlphaChannel);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
