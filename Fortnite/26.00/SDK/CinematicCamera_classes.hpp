#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x30 (0x2C0 - 0x290)
// Class CinematicCamera.CameraRig_Crane
class UCameraRig_Crane : public UActor
{
public:
	float                                        CranePitch;                                        // 0x290(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CraneYaw;                                          // 0x294(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CraneArmLength;                                    // 0x298(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLockMountPitch;                                   // 0x29C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLockMountYaw;                                     // 0x29D(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_97D[0x2];                                      // Fixing Size After Last Property 
	class USceneComponent*                       TransformComponent;                                // 0x2A0(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USceneComponent*                       CraneYawControl;                                   // 0x2A8(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USceneComponent*                       CranePitchControl;                                 // 0x2B0(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USceneComponent*                       CraneCameraMount;                                  // 0x2B8(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UCameraRig_Crane* GetDefaultObj();

};

// 0x20 (0x2B0 - 0x290)
// Class CinematicCamera.CameraRig_Rail
class UCameraRig_Rail : public UActor
{
public:
	float                                        CurrentPositionOnRail;                             // 0x290(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLockOrientationToRail;                            // 0x294(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_983[0x3];                                      // Fixing Size After Last Property 
	class USceneComponent*                       TransformComponent;                                // 0x298(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USplineComponent*                      RailSplineComponent;                               // 0x2A0(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USceneComponent*                       RailCameraMount;                                   // 0x2A8(0x8)(Edit, ExportObject, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UCameraRig_Rail* GetDefaultObj();

	class USplineComponent* GetRailSplineComponent();
};

// 0x70 (0xA10 - 0x9A0)
// Class CinematicCamera.CineCameraActor
class UCineCameraActor : public UCameraActor
{
public:
	struct FCameraLookatTrackingSettings         LookatTrackingSettings;                            // 0x9A0(0x60)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	uint8                                        Pad_98B[0x10];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UCineCameraActor* GetDefaultObj();

	class UCineCameraComponent* GetCineCameraComponent();
};

// 0x108 (0xB38 - 0xA30)
// Class CinematicCamera.CineCameraComponent
class UCineCameraComponent : public UCameraComponent
{
public:
	struct FCameraFilmbackSettings               FilmbackSettings;                                  // 0xA30(0xC)(Deprecated, NoDestructor, NativeAccessSpecifierPublic)
	struct FCameraFilmbackSettings               Filmback;                                          // 0xA3C(0xC)(Edit, BlueprintVisible, Interp, NoDestructor, NativeAccessSpecifierPublic)
	struct FCameraLensSettings                   LensSettings;                                      // 0xA48(0x1C)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_9D2[0x4];                                      // Fixing Size After Last Property 
	struct FCameraFocusSettings                  FocusSettings;                                     // 0xA68(0x58)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FPlateCropSettings                    CropSettings;                                      // 0xAC0(0x4)(Edit, BlueprintVisible, NoDestructor, NativeAccessSpecifierPublic)
	float                                        CurrentFocalLength;                                // 0xAC4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentAperture;                                   // 0xAC8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CurrentFocusDistance;                              // 0xACC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverride_CustomNearClippingPlane : 1;             // Mask: 0x1, PropSize: 0x10xAD0(0x1)(Edit, BlueprintVisible, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_43 : 7;                                     // Fixing Bit-Field Size 
	uint8                                        Pad_9D4[0x3];                                      // Fixing Size After Last Property 
	float                                        CustomNearClippingPlane;                           // 0xAD4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, Interp, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_9D5[0x8];                                      // Fixing Size After Last Property 
	TArray<struct FNamedFilmbackPreset>          FilmbackPresets;                                   // 0xAE0(0x10)(ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	TArray<struct FNamedLensPreset>              LensPresets;                                       // 0xAF0(0x10)(ZeroConstructor, Config, Protected, NativeAccessSpecifierProtected)
	class FString                                DefaultFilmbackPresetName;                         // 0xB00(0x10)(ZeroConstructor, Config, Deprecated, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                DefaultFilmbackPreset;                             // 0xB10(0x10)(ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FString                                DefaultLensPresetName;                             // 0xB20(0x10)(ZeroConstructor, Config, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DefaultLensFocalLength;                            // 0xB30(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        DefaultLensFStop;                                  // 0xB34(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UCineCameraComponent* GetDefaultObj();

	void SetLensSettings(struct FCameraLensSettings& NewLensSettings);
	void SetLensPresetByName(const class FString& InPresetName);
	void SetFocusSettings(struct FCameraFocusSettings& NewFocusSettings);
	void SetFilmbackPresetByName(const class FString& InPresetName);
	void SetFilmback(struct FCameraFilmbackSettings& NewFilmback);
	void SetCustomNearClippingPlane(float NewCustomNearClippingPlane);
	void SetCurrentFocalLength(float InFocalLength);
	void SetCurrentAperture(float NewCurrentAperture);
	void SetCropSettings(struct FPlateCropSettings& NewCropSettings);
	void SetCropPresetByName(const class FString& InPresetName);
	float GetVerticalFieldOfView();
	TArray<struct FNamedLensPreset> GetLensPresetsCopy();
	class FString GetLensPresetName();
	float GetHorizontalFieldOfView();
	TArray<struct FNamedFilmbackPreset> GetFilmbackPresetsCopy();
	class FString GetFilmbackPresetName();
	class FString GetDefaultFilmbackPresetName();
	class FString GetCropPresetName();
};

// 0x78 (0xA8 - 0x30)
// Class CinematicCamera.CineCameraSettings
class UCineCameraSettings : public UDeveloperSettings
{
public:
	class FString                                DefaultLensPresetName;                             // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefaultLensFocalLength;                            // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefaultLensFStop;                                  // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNamedLensPreset>              LensPresets;                                       // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	class FString                                DefaultFilmbackPreset;                             // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNamedFilmbackPreset>          FilmbackPresets;                                   // 0x68(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	class FString                                DefaultCropPresetName;                             // 0x78(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNamedPlateCropPreset>         CropPresets;                                       // 0x88(0x10)(Edit, BlueprintVisible, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	uint8                                        Pad_A24[0x10];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UCineCameraSettings* GetDefaultObj();

	void SetLensPresets(TArray<struct FNamedLensPreset>& InLensPresets);
	void SetFilmbackPresets(TArray<struct FNamedFilmbackPreset>& InFilmbackPresets);
	void SetDefaultLensPresetName(const class FString& InDefaultLensPresetName);
	void SetDefaultLensFStop(float InDefaultLensFStop);
	void SetDefaultLensFocalLength(float InDefaultLensFocalLength);
	void SetDefaultFilmbackPreset(const class FString& InDefaultFilmbackPreset);
	void SetDefaultCropPresetName(const class FString& InDefaultCropPresetName);
	void SetCropPresets(TArray<struct FNamedPlateCropPreset>& InCropPresets);
	TArray<class FString> GetLensPresetNames();
	bool GetLensPresetByName(const class FString& PresetName, struct FCameraLensSettings* LensSettings);
	TArray<class FString> GetFilmbackPresetNames();
	bool GetFilmbackPresetByName(const class FString& PresetName, struct FCameraFilmbackSettings* FilmbackSettings);
	TArray<class FString> GetCropPresetNames();
	bool GetCropPresetByName(const class FString& PresetName, struct FPlateCropSettings* CropSettings);
	class UCineCameraSettings* GetCineCameraSettings();
};

}


