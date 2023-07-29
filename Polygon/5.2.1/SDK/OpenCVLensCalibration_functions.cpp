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


// Function OpenCVLensCalibration.OpenCVLensCalibrator.FeedRenderTarget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UTextureRenderTarget2D*      TextureRenderTarget                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOpenCVLensCalibrator::FeedRenderTarget(class UTextureRenderTarget2D* TextureRenderTarget)
{
	static auto Func = Class->GetFunction("OpenCVLensCalibrator", "FeedRenderTarget");

	Params::UOpenCVLensCalibrator_FeedRenderTarget_Params Parms;

	Parms.TextureRenderTarget = TextureRenderTarget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OpenCVLensCalibration.OpenCVLensCalibrator.FeedImage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      FilePath                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOpenCVLensCalibrator::FeedImage(const class FString& FilePath)
{
	static auto Func = Class->GetFunction("OpenCVLensCalibrator", "FeedImage");

	Params::UOpenCVLensCalibrator_FeedImage_Params Parms;

	Parms.FilePath = FilePath;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OpenCVLensCalibration.OpenCVLensCalibrator.CreateCalibrator
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              BoardWidth                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              BoardHeight                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              SquareSize                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUseFisheyeModel                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UOpenCVLensCalibrator*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UOpenCVLensCalibrator* UOpenCVLensCalibrator::CreateCalibrator(int32 BoardWidth, int32 BoardHeight, float SquareSize, bool bUseFisheyeModel)
{
	static auto Func = Class->GetFunction("OpenCVLensCalibrator", "CreateCalibrator");

	Params::UOpenCVLensCalibrator_CreateCalibrator_Params Parms;

	Parms.BoardWidth = BoardWidth;
	Parms.BoardHeight = BoardHeight;
	Parms.SquareSize = SquareSize;
	Parms.bUseFisheyeModel = bUseFisheyeModel;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function OpenCVLensCalibration.OpenCVLensCalibrator.CalculateLensParameters
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FOpenCVLensDistortionParametersLensDistortionParameters                                         (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// float                              MarginOfError                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FOpenCVCameraViewInfo       CameraViewInfo                                                   (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOpenCVLensCalibrator::CalculateLensParameters(struct FOpenCVLensDistortionParameters* LensDistortionParameters, float* MarginOfError, struct FOpenCVCameraViewInfo* CameraViewInfo)
{
	static auto Func = Class->GetFunction("OpenCVLensCalibrator", "CalculateLensParameters");

	Params::UOpenCVLensCalibrator_CalculateLensParameters_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (LensDistortionParameters != nullptr)
		*LensDistortionParameters = Parms.LensDistortionParameters;

	if (MarginOfError != nullptr)
		*MarginOfError = Parms.MarginOfError;

	if (CameraViewInfo != nullptr)
		*CameraViewInfo = Parms.CameraViewInfo;

	return Parms.ReturnValue;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
