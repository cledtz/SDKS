#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EInterchangeAnimationPayLoadType : uint8
{
	NONE                           = 0,
	CURVE                          = 1,
	MORPHTARGETCURVE               = 2,
	STEPCURVE                      = 3,
	BAKED                          = 4,
	MORPHTARGETCURVEWEIGHTINSTANCE = 5,
	EInterchangeAnimationPayLoadType_MAX = 6,
};

enum class EInterchangeAnimatedProperty : uint8
{
	None                           = 0,
	Visibility                     = 1,
	MAX                            = 2,
};

enum class EInterchangeCameraProjectionType : uint8
{
	Perspective                    = 0,
	Orthographic                   = 1,
	EInterchangeCameraProjectionType_MAX = 2,
};

enum class EInterchangeLightUnits : uint8
{
	Unitless                       = 0,
	Candelas                       = 1,
	Lumens                         = 2,
	EV                             = 3,
	EInterchangeLightUnits_MAX     = 4,
};

enum class EInterchangeTextureWrapMode : uint8
{
	Wrap                           = 0,
	Clamp                          = 1,
	Mirror                         = 2,
	EInterchangeTextureWrapMode_MAX = 3,
};

enum class EInterchangeTextureFilterMode : uint8
{
	Nearest                        = 0,
	Bilinear                       = 1,
	Trilinear                      = 2,
	Default                        = 3,
	EInterchangeTextureFilterMode_MAX = 4,
};

enum class EInterchangeMeshPayLoadType : uint8
{
	NONE                           = 0,
	STATIC                         = 1,
	SKELETAL                       = 2,
	MORPHTARGET                    = 3,
	EInterchangeMeshPayLoadType_MAX = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// ScriptStruct InterchangeNodes.InterchangeAnimationPayLoadKey
struct FInterchangeAnimationPayLoadKey
{
public:
	class FString                                UniqueID;                                          // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInterchangeAnimationPayLoadType  Type;                                              // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5642[0x7];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// ScriptStruct InterchangeNodes.InterchangeMeshPayLoadKey
struct FInterchangeMeshPayLoadKey
{
public:
	class FString                                UniqueID;                                          // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EInterchangeMeshPayLoadType       Type;                                              // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_5645[0x7];                                     // Fixing Size Of Struct
};

}


