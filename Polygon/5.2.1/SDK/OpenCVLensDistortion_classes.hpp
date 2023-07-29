#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

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

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OpenCVLensDistortionBlueprintLibrary");
		return Clss;
	}

	bool NotEqual_CompareLensDistortionModels(struct FOpenCVLensDistortionParameters& A, struct FOpenCVLensDistortionParameters& B);
	bool EqualEqual_CompareLensDistortionModels(struct FOpenCVLensDistortionParameters& A, struct FOpenCVLensDistortionParameters& B);
	void DrawDisplacementMapToRenderTarget(class UObject* WorldContextObject, class UTextureRenderTarget2D* OutputRenderTarget, class UTexture2D* PreComputedUndistortDisplacementMap);
	class UTexture2D* CreateUndistortUVDisplacementMap(struct FOpenCVLensDistortionParameters& LensParameters, struct FIntPoint& ImageSize, float CroppingFactor, struct FOpenCVCameraViewInfo* CameraViewInfo);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
