#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class OpenCVHelper.OpenCVBlueprintFunctionLibrary
class UOpenCVBlueprintFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UOpenCVBlueprintFunctionLibrary* GetDefaultObj();

	int32 OpenCVChessboardDetectCorners(class UTextureRenderTarget2D* InRenderTarget, const struct FIntPoint& InPatternSize, bool bDebugDrawCorners, class UTexture2D** OutDebugTexture, TArray<struct FVector2D>* OutDetectedCorners);
	int32 OpenCVArucoDetectMarkers(class UTextureRenderTarget2D* InRenderTarget, enum class EOpenCVArucoDictionary InDictionary, enum class EOpenCVArucoDictionarySize InDictionarySize, bool bDebugDrawMarkers, bool bEstimatePose, float InMarkerLengthInMeters, struct FOpenCVLensDistortionParametersBase& InLensDistortionParameters, class UTexture2D** OutDebugTexture, TArray<struct FOpenCVArucoDetectedMarker>* OutDetectedMarkers);
};

}


