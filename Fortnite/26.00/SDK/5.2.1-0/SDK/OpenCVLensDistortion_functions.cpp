#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class OpenCVLensDistortion.OpenCVLensDistortionBlueprintLibrary
// (None)

class UClass* UOpenCVLensDistortionBlueprintLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OpenCVLensDistortionBlueprintLibrary");

	return Clss;
}


// OpenCVLensDistortionBlueprintLibrary OpenCVLensDistortion.Default__OpenCVLensDistortionBlueprintLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UOpenCVLensDistortionBlueprintLibrary* UOpenCVLensDistortionBlueprintLibrary::GetDefaultObj()
{
	static class UOpenCVLensDistortionBlueprintLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UOpenCVLensDistortionBlueprintLibrary*>(UOpenCVLensDistortionBlueprintLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function OpenCVLensDistortion.OpenCVLensDistortionBlueprintLibrary.NotEqual_CompareLensDistortionModels
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FOpenCVLensDistortionParametersA                                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOpenCVLensDistortionParametersB                                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOpenCVLensDistortionBlueprintLibrary::NotEqual_CompareLensDistortionModels(struct FOpenCVLensDistortionParameters& A, struct FOpenCVLensDistortionParameters& B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OpenCVLensDistortionBlueprintLibrary", "NotEqual_CompareLensDistortionModels");

	Params::UOpenCVLensDistortionBlueprintLibrary_NotEqual_CompareLensDistortionModels_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OpenCVLensDistortion.OpenCVLensDistortionBlueprintLibrary.EqualEqual_CompareLensDistortionModels
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FOpenCVLensDistortionParametersA                                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FOpenCVLensDistortionParametersB                                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UOpenCVLensDistortionBlueprintLibrary::EqualEqual_CompareLensDistortionModels(struct FOpenCVLensDistortionParameters& A, struct FOpenCVLensDistortionParameters& B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OpenCVLensDistortionBlueprintLibrary", "EqualEqual_CompareLensDistortionModels");

	Params::UOpenCVLensDistortionBlueprintLibrary_EqualEqual_CompareLensDistortionModels_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function OpenCVLensDistortion.OpenCVLensDistortionBlueprintLibrary.DrawDisplacementMapToRenderTarget
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTextureRenderTarget2D*      OutputRenderTarget                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture2D*                  PreComputedUndistortDisplacementMap                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UOpenCVLensDistortionBlueprintLibrary::DrawDisplacementMapToRenderTarget(class UObject* WorldContextObject, class UTextureRenderTarget2D* OutputRenderTarget, class UTexture2D* PreComputedUndistortDisplacementMap)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OpenCVLensDistortionBlueprintLibrary", "DrawDisplacementMapToRenderTarget");

	Params::UOpenCVLensDistortionBlueprintLibrary_DrawDisplacementMapToRenderTarget_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.OutputRenderTarget = OutputRenderTarget;
	Parms.PreComputedUndistortDisplacementMap = PreComputedUndistortDisplacementMap;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function OpenCVLensDistortion.OpenCVLensDistortionBlueprintLibrary.CreateUndistortUVDisplacementMap
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FOpenCVLensDistortionParametersLensParameters                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// struct FIntPoint                   ImageSize                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              CroppingFactor                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FOpenCVCameraViewInfo       CameraViewInfo                                                   (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// class UTexture2D*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTexture2D* UOpenCVLensDistortionBlueprintLibrary::CreateUndistortUVDisplacementMap(struct FOpenCVLensDistortionParameters& LensParameters, struct FIntPoint& ImageSize, float CroppingFactor, struct FOpenCVCameraViewInfo* CameraViewInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OpenCVLensDistortionBlueprintLibrary", "CreateUndistortUVDisplacementMap");

	Params::UOpenCVLensDistortionBlueprintLibrary_CreateUndistortUVDisplacementMap_Params Parms{};

	Parms.LensParameters = LensParameters;
	Parms.ImageSize = ImageSize;
	Parms.CroppingFactor = CroppingFactor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (CameraViewInfo != nullptr)
		*CameraViewInfo = Parms.CameraViewInfo;

	return Parms.ReturnValue;

}

}


