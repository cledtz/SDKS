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

// 0x38 (0x38 - 0x0)
// Function OpenCVHelper.OpenCVBlueprintFunctionLibrary.OpenCVChessboardDetectCorners
struct UOpenCVBlueprintFunctionLibrary_OpenCVChessboardDetectCorners_Params
{
public:
	class UTextureRenderTarget2D*                InRenderTarget;                                    // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FIntPoint                             InPatternSize;                                     // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDebugDrawCorners;                                 // 0x10(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FD7[0x7];                                      // Fixing Size After Last Property 
	class UTexture2D*                            OutDebugTexture;                                   // 0x18(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVector2D>                     OutDetectedCorners;                                // 0x20(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x30(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FD9[0x4];                                      // Fixing Size Of Struct
};

// 0x78 (0x78 - 0x0)
// Function OpenCVHelper.OpenCVBlueprintFunctionLibrary.OpenCVArucoDetectMarkers
struct UOpenCVBlueprintFunctionLibrary_OpenCVArucoDetectMarkers_Params
{
public:
	class UTextureRenderTarget2D*                InRenderTarget;                                    // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EOpenCVArucoDictionary            InDictionary;                                      // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EOpenCVArucoDictionarySize        InDictionarySize;                                  // 0x9(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDebugDrawMarkers;                                 // 0xA(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEstimatePose;                                     // 0xB(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InMarkerLengthInMeters;                            // 0xC(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FOpenCVLensDistortionParametersBase   InLensDistortionParameters;                        // 0x10(0x48)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class UTexture2D*                            OutDebugTexture;                                   // 0x58(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FOpenCVArucoDetectedMarker>    OutDetectedMarkers;                                // 0x60(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x70(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_FF9[0x4];                                      // Fixing Size Of Struct
};

}
}


