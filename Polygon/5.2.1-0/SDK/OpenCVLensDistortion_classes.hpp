#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class OpenCVLensDistortion.OpenCVLensDistortionBlueprintLibrary
class UOpenCVLensDistortionBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UOpenCVLensDistortionBlueprintLibrary* GetDefaultObj();

	bool NotEqual_CompareLensDistortionModels(struct FOpenCVLensDistortionParameters& A, struct FOpenCVLensDistortionParameters& B);
	bool EqualEqual_CompareLensDistortionModels(struct FOpenCVLensDistortionParameters& A, struct FOpenCVLensDistortionParameters& B);
	void DrawDisplacementMapToRenderTarget(class UObject* WorldContextObject, class UTextureRenderTarget2D* OutputRenderTarget, class UTexture2D* PreComputedUndistortDisplacementMap);
	class UTexture2D* CreateUndistortUVDisplacementMap(struct FOpenCVLensDistortionParameters& LensParameters, struct FIntPoint& ImageSize, float CroppingFactor, struct FOpenCVCameraViewInfo* CameraViewInfo);
};

}


