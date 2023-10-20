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
// Function MediaFrameworkUtilities.MediaBundle.OnMediaOpenOpened
struct UMediaBundle_OnMediaOpenOpened_Params
{
public:
	class FString                                DeviceUrl;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MediaFrameworkUtilities.MediaBundle.OnMediaOpenFailed
struct UMediaBundle_OnMediaOpenFailed_Params
{
public:
	class FString                                DeviceUrl;                                         // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function MediaFrameworkUtilities.MediaBundle.OnMediaClosed
struct UMediaBundle_OnMediaClosed_Params
{
public:
};

// 0xC (0xC - 0x0)
// Function MediaFrameworkUtilities.MediaBundle.GetUndistortedCameraViewInfo
struct UMediaBundle_GetUndistortedCameraViewInfo_Params
{
public:
	struct FOpenCVCameraViewInfo                 ReturnValue;                                       // 0x0(0xC)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MediaFrameworkUtilities.MediaBundle.GetMediaTexture
struct UMediaBundle_GetMediaTexture_Params
{
public:
	class UMediaTexture*                         ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MediaFrameworkUtilities.MediaBundle.GetMediaSource
struct UMediaBundle_GetMediaSource_Params
{
public:
	class UMediaSource*                          ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MediaFrameworkUtilities.MediaBundle.GetMediaPlayer
struct UMediaBundle_GetMediaPlayer_Params
{
public:
	class UMediaPlayer*                          ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MediaFrameworkUtilities.MediaBundle.GetMaterial
struct UMediaBundle_GetMaterial_Params
{
public:
	class UMaterialInterface*                    ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MediaFrameworkUtilities.MediaBundle.GetLensDisplacementTexture
struct UMediaBundle_GetLensDisplacementTexture_Params
{
public:
	class UTextureRenderTarget2D*                ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MediaFrameworkUtilities.MediaBundleActorBase.SetComponent
struct UMediaBundleActorBase_SetComponent_Params
{
public:
	class UPrimitiveComponent*                   InPrimitive;                                       // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMediaSoundComponent*                  InMediaSound;                                      // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MediaFrameworkUtilities.MediaBundleActorBase.RequestOpenMediaSource
struct UMediaBundleActorBase_RequestOpenMediaSource_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function MediaFrameworkUtilities.MediaBundleActorBase.RequestCloseMediaSource
struct UMediaBundleActorBase_RequestCloseMediaSource_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function MediaFrameworkUtilities.MediaBundleActorBase.GetMediaBundle
struct UMediaBundleActorBase_GetMediaBundle_Params
{
public:
	class UMediaBundle*                          ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MediaFrameworkUtilities.MediaProfileBlueprintLibrary.SetMediaProfile
struct UMediaProfileBlueprintLibrary_SetMediaProfile_Params
{
public:
	class UMediaProfile*                         MediaProfile;                                      // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MediaFrameworkUtilities.MediaProfileBlueprintLibrary.GetMediaProfile
struct UMediaProfileBlueprintLibrary_GetMediaProfile_Params
{
public:
	class UMediaProfile*                         ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MediaFrameworkUtilities.MediaProfileBlueprintLibrary.GetAllMediaSourceProxy
struct UMediaProfileBlueprintLibrary_GetAllMediaSourceProxy_Params
{
public:
	TArray<class UProxyMediaSource*>             ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MediaFrameworkUtilities.MediaProfileBlueprintLibrary.GetAllMediaOutputProxy
struct UMediaProfileBlueprintLibrary_GetAllMediaOutputProxy_Params
{
public:
	TArray<class UProxyMediaOutput*>             ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MediaFrameworkUtilities.ProxyMediaOutput.IsProxyValid
struct UProxyMediaOutput_IsProxyValid_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MediaFrameworkUtilities.ProxyMediaSource.IsProxyValid
struct UProxyMediaSource_IsProxyValid_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


