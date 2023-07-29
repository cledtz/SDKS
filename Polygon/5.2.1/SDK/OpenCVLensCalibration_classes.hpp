#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x90 - 0x28)
// Class OpenCVLensCalibration.OpenCVLensCalibrator
class UOpenCVLensCalibrator : public UObject
{
public:
	struct FVector2D                             MinimumCornerCoordinates;                          // 0x28(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             MaximumCornerCoordinates;                          // 0x38(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1122[0x48];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("OpenCVLensCalibrator");
		return Clss;
	}

	bool FeedRenderTarget(class UTextureRenderTarget2D* TextureRenderTarget);
	bool FeedImage(const class FString& FilePath);
	class UOpenCVLensCalibrator* CreateCalibrator(int32 BoardWidth, int32 BoardHeight, float SquareSize, bool bUseFisheyeModel);
	bool CalculateLensParameters(struct FOpenCVLensDistortionParameters* LensDistortionParameters, float* MarginOfError, struct FOpenCVCameraViewInfo* CameraViewInfo);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
