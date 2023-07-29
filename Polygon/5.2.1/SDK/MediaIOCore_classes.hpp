#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x30 - 0x28)
// Class MediaIOCore.MediaOutput
class UMediaOutput : public UObject
{
public:
	int32                                        NumberOfTextureBuffers;                            // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6E4[0x4];                                      // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MediaOutput");
		return Clss;
	}

	bool Validate(class FString* OutFailureReason);
	class UMediaCapture* CreateMediaCapture();
};

// 0x1C0 (0x1E8 - 0x28)
// Class MediaIOCore.MediaCapture
class UMediaCapture : public UObject
{
public:
	FMulticastInlineDelegateProperty_            OnStateChanged;                                    // 0x28(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_6EF[0x18];                                     // Fixing Size After Last Property
	class UMediaOutput*                          MediaOutput;                                       // 0x50(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_6F0[0x190];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MediaCapture");
		return Clss;
	}

	bool UpdateTextureRenderTarget2D(class UTextureRenderTarget2D* RenderTarget);
	void StopCapture(bool bAllowPendingFrameToBeProcess);
	void SetMediaOutput(class UMediaOutput* InMediaOutput);
	enum class EMediaCaptureState GetState();
	struct FIntPoint GetDesiredSize();
	enum class EPixelFormat GetDesiredPixelFormat();
	bool CaptureTextureRenderTarget2D(class UTextureRenderTarget2D* RenderTarget, const struct FMediaCaptureOptions& CaptureOptions);
	bool CaptureActiveSceneViewport(const struct FMediaCaptureOptions& CaptureOptions);
};

// 0x68 (0x250 - 0x1E8)
// Class MediaIOCore.FileMediaCapture
class UFileMediaCapture : public UMediaCapture
{
public:
	uint8                                        Pad_6F2[0x68];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FileMediaCapture");
		return Clss;
	}

};

// 0xA0 (0xD0 - 0x30)
// Class MediaIOCore.FileMediaOutput
class UFileMediaOutput : public UMediaOutput
{
public:
	struct FImageWriteOptions                    WriteOptions;                                      // 0x30(0x60)(Edit, BlueprintVisible, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FDirectoryPath                        FilePath;                                          // 0x90(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                BaseFileName;                                      // 0xA0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideDesiredSize;                              // 0xB0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6F3[0x3];                                      // Fixing Size After Last Property
	struct FIntPoint                             DesiredSize;                                       // 0xB4(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverridePixelFormat;                              // 0xBC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6F5[0x3];                                      // Fixing Size After Last Property
	enum class EFileMediaOutputPixelFormat       DesiredPixelFormat;                                // 0xC0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInvertAlpha;                                      // 0xC4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6F8[0xB];                                      // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FileMediaOutput");
		return Clss;
	}

};

// 0x78 (0xA8 - 0x30)
// Class MediaIOCore.MediaIOCoreSubsystem
class UMediaIOCoreSubsystem : public UEngineSubsystem
{
public:
	uint8                                        Pad_6F9[0x78];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MediaIOCoreSubsystem");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
