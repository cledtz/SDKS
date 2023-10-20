#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class OpenCVHelper.OpenCVBlueprintFunctionLibrary
// (None)

class UClass* UOpenCVBlueprintFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("OpenCVBlueprintFunctionLibrary");

	return Clss;
}


// OpenCVBlueprintFunctionLibrary OpenCVHelper.Default__OpenCVBlueprintFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UOpenCVBlueprintFunctionLibrary* UOpenCVBlueprintFunctionLibrary::GetDefaultObj()
{
	static class UOpenCVBlueprintFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UOpenCVBlueprintFunctionLibrary*>(UOpenCVBlueprintFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function OpenCVHelper.OpenCVBlueprintFunctionLibrary.OpenCVChessboardDetectCorners
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UTextureRenderTarget2D*      InRenderTarget                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FIntPoint                   InPatternSize                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDebugDrawCorners                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture2D*                  OutDebugTexture                                                  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector2D>           OutDetectedCorners                                               (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UOpenCVBlueprintFunctionLibrary::OpenCVChessboardDetectCorners(class UTextureRenderTarget2D* InRenderTarget, const struct FIntPoint& InPatternSize, bool bDebugDrawCorners, class UTexture2D** OutDebugTexture, TArray<struct FVector2D>* OutDetectedCorners)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OpenCVBlueprintFunctionLibrary", "OpenCVChessboardDetectCorners");

	Params::UOpenCVBlueprintFunctionLibrary_OpenCVChessboardDetectCorners_Params Parms{};

	Parms.InRenderTarget = InRenderTarget;
	Parms.InPatternSize = InPatternSize;
	Parms.bDebugDrawCorners = bDebugDrawCorners;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutDebugTexture != nullptr)
		*OutDebugTexture = Parms.OutDebugTexture;

	if (OutDetectedCorners != nullptr)
		*OutDetectedCorners = Parms.OutDetectedCorners;

	return Parms.ReturnValue;

}


// Function OpenCVHelper.OpenCVBlueprintFunctionLibrary.OpenCVArucoDetectMarkers
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UTextureRenderTarget2D*      InRenderTarget                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EOpenCVArucoDictionary  InDictionary                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EOpenCVArucoDictionarySizeInDictionarySize                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDebugDrawMarkers                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bEstimatePose                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InMarkerLengthInMeters                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FOpenCVLensDistortionParametersBaseInLensDistortionParameters                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// class UTexture2D*                  OutDebugTexture                                                  (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FOpenCVArucoDetectedMarker>OutDetectedMarkers                                               (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UOpenCVBlueprintFunctionLibrary::OpenCVArucoDetectMarkers(class UTextureRenderTarget2D* InRenderTarget, enum class EOpenCVArucoDictionary InDictionary, enum class EOpenCVArucoDictionarySize InDictionarySize, bool bDebugDrawMarkers, bool bEstimatePose, float InMarkerLengthInMeters, struct FOpenCVLensDistortionParametersBase& InLensDistortionParameters, class UTexture2D** OutDebugTexture, TArray<struct FOpenCVArucoDetectedMarker>* OutDetectedMarkers)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("OpenCVBlueprintFunctionLibrary", "OpenCVArucoDetectMarkers");

	Params::UOpenCVBlueprintFunctionLibrary_OpenCVArucoDetectMarkers_Params Parms{};

	Parms.InRenderTarget = InRenderTarget;
	Parms.InDictionary = InDictionary;
	Parms.InDictionarySize = InDictionarySize;
	Parms.bDebugDrawMarkers = bDebugDrawMarkers;
	Parms.bEstimatePose = bEstimatePose;
	Parms.InMarkerLengthInMeters = InMarkerLengthInMeters;
	Parms.InLensDistortionParameters = InLensDistortionParameters;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutDebugTexture != nullptr)
		*OutDebugTexture = Parms.OutDebugTexture;

	if (OutDetectedMarkers != nullptr)
		*OutDetectedMarkers = Parms.OutDetectedMarkers;

	return Parms.ReturnValue;

}

}


