#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// Function LandscapePatch.LandscapePatchComponent.SetPatchManager
struct ULandscapePatchComponent_SetPatchManager_Params
{
public:
	class ALandscapePatchManager*                NewPatchManager;                                   // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function LandscapePatch.LandscapePatchComponent.SetLandscape
struct ULandscapePatchComponent_SetLandscape_Params
{
public:
	class ALandscape*                            NewLandscape;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function LandscapePatch.LandscapePatchComponent.SetIsEnabled
struct ULandscapePatchComponent_SetIsEnabled_Params
{
public:
	bool                                         bEnabledIn;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function LandscapePatch.LandscapePatchComponent.RequestLandscapeUpdate
struct ULandscapePatchComponent_RequestLandscapeUpdate_Params
{
public:
	bool                                         bInUserTriggeredUpdate;                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function LandscapePatch.LandscapePatchComponent.MoveToTop
struct ULandscapePatchComponent_MoveToTop_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function LandscapePatch.LandscapePatchComponent.IsEnabled
struct ULandscapePatchComponent_IsEnabled_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function LandscapePatch.LandscapePatchComponent.GetPatchManager
struct ULandscapePatchComponent_GetPatchManager_Params
{
public:
	class ALandscapePatchManager*                ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function LandscapePatch.LandscapePatchComponent.GetLandscapeHeightmapCoordsToWorld
struct ULandscapePatchComponent_GetLandscapeHeightmapCoordsToWorld_Params
{
public:
	struct FTransform                            ReturnValue;                                       // 0x0(0x60)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function LandscapePatch.LandscapeTexturePatch.SnapToLandscape
struct ULandscapeTexturePatch_SnapToLandscape_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function LandscapePatch.LandscapeTexturePatch.SetZeroHeightMeaning
struct ULandscapeTexturePatch_SetZeroHeightMeaning_Params
{
public:
	enum class ELandscapeTextureHeightPatchZeroHeightMeaning ZeroHeightMeaningIn;                               // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function LandscapePatch.LandscapeTexturePatch.SetWeightPatchTextureAsset
struct ULandscapeTexturePatch_SetWeightPatchTextureAsset_Params
{
public:
	class FName                                  InWeightmapLayerName;                              // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_885C[0x4];                                     // Fixing Size After Last Property..
	class UTexture*                              TextureIn;                                         // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function LandscapePatch.LandscapeTexturePatch.SetWeightPatchSourceMode
struct ULandscapeTexturePatch_SetWeightPatchSourceMode_Params
{
public:
	class FName                                  InWeightmapLayerName;                              // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELandscapeTexturePatchSourceMode  NewMode;                                           // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_885D[0x3];                                     // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// Function LandscapePatch.LandscapeTexturePatch.SetWeightPatchBlendModeOverride
struct ULandscapeTexturePatch_SetWeightPatchBlendModeOverride_Params
{
public:
	class FName                                  InWeightmapLayerName;                              // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELandscapeTexturePatchBlendMode   BlendMode;                                         // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_885E[0x3];                                     // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// Function LandscapePatch.LandscapeTexturePatch.SetUseAlphaChannelForWeightPatch
struct ULandscapeTexturePatch_SetUseAlphaChannelForWeightPatch_Params
{
public:
	class FName                                  InWeightmapLayerName;                              // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseAlphaChannel;                                  // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_885F[0x3];                                     // Fixing Size Of Struct..
};

// 0x1 (0x1 - 0x0)
// Function LandscapePatch.LandscapeTexturePatch.SetUseAlphaChannelForHeight
struct ULandscapeTexturePatch_SetUseAlphaChannelForHeight_Params
{
public:
	bool                                         bUse;                                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function LandscapePatch.LandscapeTexturePatch.SetUnscaledCoverage
struct ULandscapeTexturePatch_SetUnscaledCoverage_Params
{
public:
	struct FVector2D                             Coverage;                                          // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function LandscapePatch.LandscapeTexturePatch.SetResolution
struct ULandscapeTexturePatch_SetResolution_Params
{
public:
	struct FVector2D                             ResolutionIn;                                      // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function LandscapePatch.LandscapeTexturePatch.SetHeightTextureAsset
struct ULandscapeTexturePatch_SetHeightTextureAsset_Params
{
public:
	class UTexture*                              TextureIn;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function LandscapePatch.LandscapeTexturePatch.SetHeightSourceMode
struct ULandscapeTexturePatch_SetHeightSourceMode_Params
{
public:
	enum class ELandscapeTexturePatchSourceMode  NewMode;                                           // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function LandscapePatch.LandscapeTexturePatch.SetHeightRenderTargetFormat
struct ULandscapeTexturePatch_SetHeightRenderTargetFormat_Params
{
public:
	enum class ETextureRenderTargetFormat        Format;                                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function LandscapePatch.LandscapeTexturePatch.SetHeightEncodingSettings
struct ULandscapeTexturePatch_SetHeightEncodingSettings_Params
{
public:
	struct FLandscapeTexturePatchEncodingSettings Settings;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function LandscapePatch.LandscapeTexturePatch.SetHeightEncodingMode
struct ULandscapeTexturePatch_SetHeightEncodingMode_Params
{
public:
	enum class ELandscapeTextureHeightPatchEncoding EncodingMode;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function LandscapePatch.LandscapeTexturePatch.SetFalloff
struct ULandscapeTexturePatch_SetFalloff_Params
{
public:
	float                                        FalloffIn;                                         // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function LandscapePatch.LandscapeTexturePatch.SetEditVisibilityLayer
struct ULandscapeTexturePatch_SetEditVisibilityLayer_Params
{
public:
	class FName                                  InWeightmapLayerName;                              // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEditVisibilityLayer;                              // 0x4(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8860[0x3];                                     // Fixing Size Of Struct..
};

// 0x1 (0x1 - 0x0)
// Function LandscapePatch.LandscapeTexturePatch.SetBlendMode
struct ULandscapeTexturePatch_SetBlendMode_Params
{
public:
	enum class ELandscapeTexturePatchBlendMode   BlendModeIn;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function LandscapePatch.LandscapeTexturePatch.ResetHeightEncodingMode
struct ULandscapeTexturePatch_ResetHeightEncodingMode_Params
{
public:
	enum class ELandscapeTextureHeightPatchEncoding EncodingMode;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function LandscapePatch.LandscapeTexturePatch.RemoveWeightPatch
struct ULandscapeTexturePatch_RemoveWeightPatch_Params
{
public:
	class FName                                  InWeightmapLayerName;                              // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function LandscapePatch.LandscapeTexturePatch.RemoveAllWeightPatches
struct ULandscapeTexturePatch_RemoveAllWeightPatches_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function LandscapePatch.LandscapeTexturePatch.ReinitializeWeights
struct ULandscapeTexturePatch_ReinitializeWeights_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function LandscapePatch.LandscapeTexturePatch.ReinitializeHeight
struct ULandscapeTexturePatch_ReinitializeHeight_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function LandscapePatch.LandscapeTexturePatch.GetWeightPatchSourceMode
struct ULandscapeTexturePatch_GetWeightPatchSourceMode_Params
{
public:
	class FName                                  InWeightmapLayerName;                              // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELandscapeTexturePatchSourceMode  ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8861[0x3];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function LandscapePatch.LandscapeTexturePatch.GetWeightPatchRenderTarget
struct ULandscapeTexturePatch_GetWeightPatchRenderTarget_Params
{
public:
	class FName                                  InWeightmapLayerName;                              // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8862[0x4];                                     // Fixing Size After Last Property..
	class UTextureRenderTarget2D*                ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function LandscapePatch.LandscapeTexturePatch.GetUnscaledCoverage
struct ULandscapeTexturePatch_GetUnscaledCoverage_Params
{
public:
	struct FVector2D                             ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function LandscapePatch.LandscapeTexturePatch.GetResolution
struct ULandscapeTexturePatch_GetResolution_Params
{
public:
	struct FVector2D                             ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function LandscapePatch.LandscapeTexturePatch.GetPatchToWorldTransform
struct ULandscapeTexturePatch_GetPatchToWorldTransform_Params
{
public:
	struct FTransform                            ReturnValue;                                       // 0x0(0x60)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function LandscapePatch.LandscapeTexturePatch.GetInitResolutionFromLandscape
struct ULandscapeTexturePatch_GetInitResolutionFromLandscape_Params
{
public:
	float                                        ResolutionMultiplier;                              // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8863[0x4];                                     // Fixing Size After Last Property..
	struct FVector2D                             ResolutionOut;                                     // 0x8(0x10)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8864[0x7];                                     // Fixing Size Of Struct..
};

// 0x1 (0x1 - 0x0)
// Function LandscapePatch.LandscapeTexturePatch.GetHeightSourceMode
struct ULandscapeTexturePatch_GetHeightSourceMode_Params
{
public:
	enum class ELandscapeTexturePatchSourceMode  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function LandscapePatch.LandscapeTexturePatch.GetHeightRenderTarget
struct ULandscapeTexturePatch_GetHeightRenderTarget_Params
{
public:
	bool                                         bMarkDirty;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8865[0x7];                                     // Fixing Size After Last Property..
	class UTextureRenderTarget2D*                ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function LandscapePatch.LandscapeTexturePatch.GetFullUnscaledWorldSize
struct ULandscapeTexturePatch_GetFullUnscaledWorldSize_Params
{
public:
	struct FVector2D                             ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function LandscapePatch.LandscapeTexturePatch.GetAllWeightPatchLayerNames
struct ULandscapeTexturePatch_GetAllWeightPatchLayerNames_Params
{
public:
	TArray<class FName>                          ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function LandscapePatch.LandscapeTexturePatch.DisableAllWeightPatches
struct ULandscapeTexturePatch_DisableAllWeightPatches_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function LandscapePatch.LandscapeTexturePatch.ClearWeightPatchBlendModeOverride
struct ULandscapeTexturePatch_ClearWeightPatchBlendModeOverride_Params
{
public:
	class FName                                  InWeightmapLayerName;                              // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function LandscapePatch.LandscapeTexturePatch.AddWeightPatch
struct ULandscapeTexturePatch_AddWeightPatch_Params
{
public:
	class FName                                  InWeightmapLayerName;                              // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ELandscapeTexturePatchSourceMode  SourceMode;                                        // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseAlphaChannel;                                  // 0x5(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8866[0x2];                                     // Fixing Size Of Struct..
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
