#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xF0 (0x118 - 0x28)
// Class MediaFrameworkUtilities.MediaBundle
class UMediaBundle : public UObject
{
public:
	class UMediaSource*                          MediaSource;                                       // 0x28(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoClear, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLoopMediaSource;                                  // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bReopenSourceOnError;                              // 0x31(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_EA4[0x6];                                      // Fixing Size After Last Property 
	class UMediaPlayer*                          MediaPlayer;                                       // 0x38(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMediaTexture*                         MediaTexture;                                      // 0x40(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInterface*                    Material;                                          // 0x48(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FOpenCVLensDistortionParameters       LensParameters;                                    // 0x50(0x48)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	struct FOpenCVCameraViewInfo                 UndistortedCameraViewInfo;                         // 0x98(0xC)(Edit, EditConst, NoDestructor, Protected, NativeAccessSpecifierProtected)
	uint8                                        Pad_EAA[0x4];                                      // Fixing Size After Last Property 
	struct FOpenCVLensDistortionParameters       CurrentLensParameters;                             // 0xA8(0x48)(Transient, NonTransactional, NoDestructor, Protected, NativeAccessSpecifierProtected)
	class UTextureRenderTarget2D*                LensDisplacementMap;                               // 0xF0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        ReferenceCount;                                    // 0xF8(0x4)(Edit, ZeroConstructor, Transient, DisableEditOnInstance, EditConst, DuplicateTransient, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_EAE[0x1C];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UMediaBundle* GetDefaultObj();

	void OnMediaOpenOpened(const class FString& DeviceUrl);
	void OnMediaOpenFailed(const class FString& DeviceUrl);
	void OnMediaClosed();
	struct FOpenCVCameraViewInfo GetUndistortedCameraViewInfo();
	class UMediaTexture* GetMediaTexture();
	class UMediaSource* GetMediaSource();
	class UMediaPlayer* GetMediaPlayer();
	class UMaterialInterface* GetMaterial();
	class UTextureRenderTarget2D* GetLensDisplacementTexture();
};

// 0x40 (0x2D0 - 0x290)
// Class MediaFrameworkUtilities.MediaBundleActorBase
class UMediaBundleActorBase : public UActor
{
public:
	class UTextureRenderTarget2D*                GarbageMatteMask;                                  // 0x290(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMediaBundle*                          MediaBundle;                                       // 0x298(0x8)(Edit, ZeroConstructor, NoClear, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bAutoPlay;                                         // 0x2A0(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bPlayWhileEditing;                                 // 0x2A1(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F01[0x6];                                      // Fixing Size After Last Property 
	class UPrimitiveComponent*                   PrimitiveCmp;                                      // 0x2A8(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMediaSoundComponent*                  MediaSoundCmp;                                     // 0x2B0(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoClear, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMaterialInstanceDynamic*              Material;                                          // 0x2B8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        PrimitiveMaterialIndex;                            // 0x2C0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F03[0xC];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UMediaBundleActorBase* GetDefaultObj();

	void SetComponent(class UPrimitiveComponent* InPrimitive, class UMediaSoundComponent* InMediaSound);
	bool RequestOpenMediaSource();
	void RequestCloseMediaSource();
	class UMediaBundle* GetMediaBundle();
};

// 0x30 (0x60 - 0x30)
// Class MediaFrameworkUtilities.MediaBundleTimeSynchronizationSource
class UMediaBundleTimeSynchronizationSource : public UTimeSynchronizationSource
{
public:
	class UMediaBundle*                          MediaBundle;                                       // 0x30(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F0B[0x28];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UMediaBundleTimeSynchronizationSource* GetDefaultObj();

};

// 0x38 (0x68 - 0x30)
// Class MediaFrameworkUtilities.MediaPlayerTimeSynchronizationSource
class UMediaPlayerTimeSynchronizationSource : public UTimeSynchronizationSource
{
public:
	class UMediaSource*                          MediaSource;                                       // 0x30(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMediaTexture*                         MediaTexture;                                      // 0x38(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F0D[0x28];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UMediaPlayerTimeSynchronizationSource* GetDefaultObj();

};

// 0x70 (0x98 - 0x28)
// Class MediaFrameworkUtilities.MediaProfile
class UMediaProfile : public UObject
{
public:
	TArray<class UMediaSource*>                  MediaSources;                                      // 0x28(0x10)(Edit, ExportObject, EditFixedSize, ZeroConstructor, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<class UMediaOutput*>                  MediaOutputs;                                      // 0x38(0x10)(Edit, ExportObject, EditFixedSize, ZeroConstructor, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	bool                                         bOverrideTimecodeProvider;                         // 0x48(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F15[0x7];                                      // Fixing Size After Last Property 
	class UTimecodeProvider*                     TimecodeProvider;                                  // 0x50(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bOverrideCustomTimeStep;                           // 0x58(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F17[0x7];                                      // Fixing Size After Last Property 
	class UEngineCustomTimeStep*                 CustomTimeStep;                                    // 0x60(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_F18[0x8];                                      // Fixing Size After Last Property 
	class UTimecodeProvider*                     AppliedTimecodeProvider;                           // 0x70(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTimecodeProvider*                     PreviousTimecodeProvider;                          // 0x78(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_F1A[0x8];                                      // Fixing Size After Last Property 
	class UEngineCustomTimeStep*                 AppliedCustomTimeStep;                             // 0x88(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UEngineCustomTimeStep*                 PreviousCustomTimeStep;                            // 0x90(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMediaProfile* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MediaFrameworkUtilities.MediaProfileBlueprintLibrary
class UMediaProfileBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMediaProfileBlueprintLibrary* GetDefaultObj();

	void SetMediaProfile(class UMediaProfile* MediaProfile);
	class UMediaProfile* GetMediaProfile();
	TArray<class UProxyMediaSource*> GetAllMediaSourceProxy();
	TArray<class UProxyMediaOutput*> GetAllMediaOutputProxy();
};

// 0x58 (0x80 - 0x28)
// Class MediaFrameworkUtilities.MediaProfileSettings
class UMediaProfileSettings : public UObject
{
public:
	bool                                         bApplyInCommandlet;                                // 0x28(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_F38[0x7];                                      // Fixing Size After Last Property 
	TArray<TSoftObjectPtr<class UProxyMediaSource>> MediaSourceProxy;                                  // 0x30(0x10)(Edit, ZeroConstructor, Config, AdvancedDisplay, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<TSoftObjectPtr<class UProxyMediaOutput>> MediaOutputProxy;                                  // 0x40(0x10)(Edit, ZeroConstructor, Config, AdvancedDisplay, UObjectWrapper, NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class UMediaProfile>          StartupMediaProfile;                               // 0x50(0x30)(Edit, Config, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMediaProfileSettings* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class MediaFrameworkUtilities.MediaProfileEditorSettings
class UMediaProfileEditorSettings : public UObject
{
public:

	static class UClass* StaticClass();
	static class UMediaProfileEditorSettings* GetDefaultObj();

};

// 0x18 (0x48 - 0x30)
// Class MediaFrameworkUtilities.ProxyMediaOutput
class UProxyMediaOutput : public UMediaOutput
{
public:
	class UMediaOutput*                          DynamicProxy;                                      // 0x30(0x8)(ZeroConstructor, Transient, DuplicateTransient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMediaOutput*                          Proxy;                                             // 0x38(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_FAF[0x8];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UProxyMediaOutput* GetDefaultObj();

	bool IsProxyValid();
};

// 0x18 (0x98 - 0x80)
// Class MediaFrameworkUtilities.ProxyMediaSource
class UProxyMediaSource : public UMediaSource
{
public:
	class UMediaSource*                          DynamicProxy;                                      // 0x80(0x8)(ZeroConstructor, Transient, DuplicateTransient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMediaSource*                          Proxy;                                             // 0x88(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_FB4[0x8];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UProxyMediaSource* GetDefaultObj();

	bool IsProxyValid();
};

}


