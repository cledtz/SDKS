#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ELandscapeTexturePatchSourceMode : uint8
{
	None                           = 0,
	InternalTexture                = 1,
	TextureBackedRenderTarget      = 2,
	TextureAsset                   = 3,
	ELandscapeTexturePatchSourceMode_MAX = 4,
};

enum class ELandscapeTexturePatchBlendMode : uint8
{
	AlphaBlend                     = 0,
	Additive                       = 1,
	Min                            = 2,
	Max                            = 3,
};

enum class ELandscapeTexturePatchFalloffMode : uint8
{
	Circle                         = 0,
	RoundedRectangle               = 1,
	ELandscapeTexturePatchFalloffMode_MAX = 2,
};

enum class ELandscapeTextureHeightPatchEncoding : uint8
{
	ZeroToOne                      = 0,
	WorldUnits                     = 1,
	NativePackedHeight             = 2,
	ELandscapeTextureHeightPatchEncoding_MAX = 3,
};

enum class ELandscapeTextureHeightPatchZeroHeightMeaning : uint8
{
	PatchZ                         = 0,
	LandscapeZ                     = 1,
	WorldZero                      = 2,
	ELandscapeTextureHeightPatchZeroHeightMeaning_MAX = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xC0 - 0xB8)
// ScriptStruct LandscapePatch.LandscapePatchComponentInstanceData
struct FLandscapePatchComponentInstanceData : public FSceneComponentInstanceData
{
public:
	int32                                        IndexInManager;                                    // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_870D[0x4];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LandscapePatch.LandscapeTexturePatchEncodingSettings
struct FLandscapeTexturePatchEncodingSettings
{
public:
	double                                       ZeroInEncoding;                                    // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       WorldSpaceEncodingScale;                           // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct LandscapePatch.LandscapeHeightPatchConvertToNativeParams
struct FLandscapeHeightPatchConvertToNativeParams
{
public:
	float                                        ZeroInEncoding;                                    // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HeightScale;                                       // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HeightOffset;                                      // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
