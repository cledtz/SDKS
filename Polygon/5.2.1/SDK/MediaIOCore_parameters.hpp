#pragma once

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

// 0x18 (0x18 - 0x0)
// Function MediaIOCore.MediaOutput.Validate
struct UMediaOutput_Validate_Params
{
public:
	class FString                                OutFailureReason;                                  // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6E2[0x7];                                      // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function MediaIOCore.MediaOutput.CreateMediaCapture
struct UMediaOutput_CreateMediaCapture_Params
{
public:
	class UMediaCapture*                         ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MediaIOCore.MediaCapture.UpdateTextureRenderTarget2D
struct UMediaCapture_UpdateTextureRenderTarget2D_Params
{
public:
	class UTextureRenderTarget2D*                RenderTarget;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6E7[0x7];                                      // Fixing Size Of Struct
};

// 0x1 (0x1 - 0x0)
// Function MediaIOCore.MediaCapture.StopCapture
struct UMediaCapture_StopCapture_Params
{
public:
	bool                                         bAllowPendingFrameToBeProcess;                     // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MediaIOCore.MediaCapture.SetMediaOutput
struct UMediaCapture_SetMediaOutput_Params
{
public:
	class UMediaOutput*                          InMediaOutput;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MediaIOCore.MediaCapture.GetState
struct UMediaCapture_GetState_Params
{
public:
	enum class EMediaCaptureState                ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MediaIOCore.MediaCapture.GetDesiredSize
struct UMediaCapture_GetDesiredSize_Params
{
public:
	struct FIntPoint                             ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MediaIOCore.MediaCapture.GetDesiredPixelFormat
struct UMediaCapture_GetDesiredPixelFormat_Params
{
public:
	enum class EPixelFormat                      ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function MediaIOCore.MediaCapture.CaptureTextureRenderTarget2D
struct UMediaCapture_CaptureTextureRenderTarget2D_Params
{
public:
	class UTextureRenderTarget2D*                RenderTarget;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMediaCaptureOptions                  CaptureOptions;                                    // 0x8(0x1C)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x24(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6EC[0x3];                                      // Fixing Size Of Struct
};

// 0x20 (0x20 - 0x0)
// Function MediaIOCore.MediaCapture.CaptureActiveSceneViewport
struct UMediaCapture_CaptureActiveSceneViewport_Params
{
public:
	struct FMediaCaptureOptions                  CaptureOptions;                                    // 0x0(0x1C)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1C(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6EE[0x3];                                      // Fixing Size Of Struct
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
