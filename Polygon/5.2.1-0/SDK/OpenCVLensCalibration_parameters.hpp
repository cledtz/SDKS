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

// 0x10 (0x10 - 0x0)
// Function OpenCVLensCalibration.OpenCVLensCalibrator.FeedRenderTarget
struct UOpenCVLensCalibrator_FeedRenderTarget_Params
{
public:
	class UTextureRenderTarget2D*                TextureRenderTarget;                               // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F44[0x7];                                      // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function OpenCVLensCalibration.OpenCVLensCalibrator.FeedImage
struct UOpenCVLensCalibrator_FeedImage_Params
{
public:
	class FString                                FilePath;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F49[0x7];                                      // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function OpenCVLensCalibration.OpenCVLensCalibrator.CreateCalibrator
struct UOpenCVLensCalibrator_CreateCalibrator_Params
{
public:
	int32                                        BoardWidth;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BoardHeight;                                       // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SquareSize;                                        // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseFisheyeModel;                                  // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F50[0x3];                                      // Fixing Size After Last Property 
	class UOpenCVLensCalibrator*                 ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function OpenCVLensCalibration.OpenCVLensCalibrator.CalculateLensParameters
struct UOpenCVLensCalibrator_CalculateLensParameters_Params
{
public:
	struct FOpenCVLensDistortionParameters       LensDistortionParameters;                          // 0x0(0x48)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	float                                        MarginOfError;                                     // 0x48(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FOpenCVCameraViewInfo                 CameraViewInfo;                                    // 0x4C(0xC)(Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x58(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F59[0x7];                                      // Fixing Size Of Struct
};

}
}


