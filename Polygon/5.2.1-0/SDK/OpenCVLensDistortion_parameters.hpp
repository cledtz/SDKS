#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x98 (0x98 - 0x0)
// Function OpenCVLensDistortion.OpenCVLensDistortionBlueprintLibrary.NotEqual_CompareLensDistortionModels
struct UOpenCVLensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels_Params
{
public:
	struct FOpenCVLensDistortionParameters       A;                                                 // 0x0(0x48)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOpenCVLensDistortionParameters       B;                                                 // 0x48(0x48)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x90(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F8D[0x7];                                      // Fixing Size Of Struct
};

// 0x98 (0x98 - 0x0)
// Function OpenCVLensDistortion.OpenCVLensDistortionBlueprintLibrary.EqualEqual_CompareLensDistortionModels
struct UOpenCVLensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Params
{
public:
	struct FOpenCVLensDistortionParameters       A;                                                 // 0x0(0x48)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FOpenCVLensDistortionParameters       B;                                                 // 0x48(0x48)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x90(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F92[0x7];                                      // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function OpenCVLensDistortion.OpenCVLensDistortionBlueprintLibrary.DrawDisplacementMapToRenderTarget
struct UOpenCVLensDistortionBlueprintLibrary_DrawDisplacementMapToRenderTarget_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextureRenderTarget2D*                OutputRenderTarget;                                // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            PreComputedUndistortDisplacementMap;               // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function OpenCVLensDistortion.OpenCVLensDistortionBlueprintLibrary.CreateUndistortUVDisplacementMap
struct UOpenCVLensDistortionBlueprintLibrary_CreateUndistortUVDisplacementMap_Params
{
public:
	struct FOpenCVLensDistortionParameters       LensParameters;                                    // 0x0(0x48)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FIntPoint                             ImageSize;                                         // 0x48(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CroppingFactor;                                    // 0x50(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FOpenCVCameraViewInfo                 CameraViewInfo;                                    // 0x54(0xC)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	class UTexture2D*                            ReturnValue;                                       // 0x60(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


