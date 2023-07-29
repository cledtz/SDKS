#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function MediaIOCore.MediaOutput.Validate
// (Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      OutFailureReason                                                 (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMediaOutput::Validate(class FString* OutFailureReason)
{
	static auto Func = Class->GetFunction("MediaOutput", "Validate");

	Params::UMediaOutput_Validate_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (OutFailureReason != nullptr)
		*OutFailureReason = Parms.OutFailureReason;

	return Parms.ReturnValue;

}


// Function MediaIOCore.MediaOutput.CreateMediaCapture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMediaCapture*               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMediaCapture* UMediaOutput::CreateMediaCapture()
{
	static auto Func = Class->GetFunction("MediaOutput", "CreateMediaCapture");

	Params::UMediaOutput_CreateMediaCapture_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MediaIOCore.MediaCapture.UpdateTextureRenderTarget2D
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTextureRenderTarget2D*      RenderTarget                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMediaCapture::UpdateTextureRenderTarget2D(class UTextureRenderTarget2D* RenderTarget)
{
	static auto Func = Class->GetFunction("MediaCapture", "UpdateTextureRenderTarget2D");

	Params::UMediaCapture_UpdateTextureRenderTarget2D_Params Parms;

	Parms.RenderTarget = RenderTarget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MediaIOCore.MediaCapture.StopCapture
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bAllowPendingFrameToBeProcess                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMediaCapture::StopCapture(bool bAllowPendingFrameToBeProcess)
{
	static auto Func = Class->GetFunction("MediaCapture", "StopCapture");

	Params::UMediaCapture_StopCapture_Params Parms;

	Parms.bAllowPendingFrameToBeProcess = bAllowPendingFrameToBeProcess;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MediaIOCore.MediaCapture.SetMediaOutput
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMediaOutput*                InMediaOutput                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMediaCapture::SetMediaOutput(class UMediaOutput* InMediaOutput)
{
	static auto Func = Class->GetFunction("MediaCapture", "SetMediaOutput");

	Params::UMediaCapture_SetMediaOutput_Params Parms;

	Parms.InMediaOutput = InMediaOutput;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MediaIOCore.MediaCapture.GetState
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EMediaCaptureState      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EMediaCaptureState UMediaCapture::GetState()
{
	static auto Func = Class->GetFunction("MediaCapture", "GetState");

	Params::UMediaCapture_GetState_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MediaIOCore.MediaCapture.GetDesiredSize
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FIntPoint                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FIntPoint UMediaCapture::GetDesiredSize()
{
	static auto Func = Class->GetFunction("MediaCapture", "GetDesiredSize");

	Params::UMediaCapture_GetDesiredSize_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MediaIOCore.MediaCapture.GetDesiredPixelFormat
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EPixelFormat            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EPixelFormat UMediaCapture::GetDesiredPixelFormat()
{
	static auto Func = Class->GetFunction("MediaCapture", "GetDesiredPixelFormat");

	Params::UMediaCapture_GetDesiredPixelFormat_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MediaIOCore.MediaCapture.CaptureTextureRenderTarget2D
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTextureRenderTarget2D*      RenderTarget                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMediaCaptureOptions        CaptureOptions                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMediaCapture::CaptureTextureRenderTarget2D(class UTextureRenderTarget2D* RenderTarget, const struct FMediaCaptureOptions& CaptureOptions)
{
	static auto Func = Class->GetFunction("MediaCapture", "CaptureTextureRenderTarget2D");

	Params::UMediaCapture_CaptureTextureRenderTarget2D_Params Parms;

	Parms.RenderTarget = RenderTarget;
	Parms.CaptureOptions = CaptureOptions;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MediaIOCore.MediaCapture.CaptureActiveSceneViewport
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMediaCaptureOptions        CaptureOptions                                                   (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMediaCapture::CaptureActiveSceneViewport(const struct FMediaCaptureOptions& CaptureOptions)
{
	static auto Func = Class->GetFunction("MediaCapture", "CaptureActiveSceneViewport");

	Params::UMediaCapture_CaptureActiveSceneViewport_Params Parms;

	Parms.CaptureOptions = CaptureOptions;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
