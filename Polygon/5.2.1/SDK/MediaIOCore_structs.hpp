#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EFileMediaOutputPixelFormat : uint8
{
	B8G8R8A8                       = 0,
	FloatRGBA                      = 1,
	EFileMediaOutputPixelFormat_MAX = 2,
};

enum class EMediaCaptureState : uint8
{
	Error                          = 0,
	Capturing                      = 1,
	Preparing                      = 2,
	StopRequested                  = 3,
	Stopped                        = 4,
	EMediaCaptureState_MAX         = 5,
};

enum class EMediaCaptureResourceType : uint8
{
	Texture                        = 0,
	Buffer                         = 1,
	EMediaCaptureResourceType_MAX  = 2,
};

enum class EMediaCaptureCroppingType : uint8
{
	None                           = 0,
	Center                         = 1,
	TopLeft                        = 2,
	Custom                         = 3,
	EMediaCaptureCroppingType_MAX  = 4,
};

enum class EMediaCaptureOverrunAction : uint8
{
	Flush                          = 0,
	Skip                           = 1,
	EMediaCaptureOverrunAction_MAX = 2,
};

enum class EMediaCapturePhase : uint8
{
	BeforePostProcessing           = 0,
	AfterMotionBlur                = 1,
	AfterToneMap                   = 2,
	AfterFXAA                      = 3,
	EndFrame                       = 4,
	EMediaCapturePhase_MAX         = 5,
};

enum class EMediaIOTransportType : uint8
{
	SingleLink                     = 0,
	DualLink                       = 1,
	QuadLink                       = 2,
	HDMI                           = 3,
	EMediaIOTransportType_MAX      = 4,
};

enum class EMediaIOQuadLinkTransportType : uint8
{
	SquareDivision                 = 0,
	TwoSampleInterleave            = 1,
	EMediaIOQuadLinkTransportType_MAX = 2,
};

enum class EMediaIOStandardType : uint8
{
	Progressive                    = 0,
	Interlaced                     = 1,
	ProgressiveSegmentedFrame      = 2,
	EMediaIOStandardType_MAX       = 3,
};

enum class EMediaIOTimecodeFormat : uint8
{
	None                           = 0,
	LTC                            = 1,
	VITC                           = 2,
	EMediaIOTimecodeFormat_MAX     = 3,
};

enum class EMediaIOAutoDetectableTimecodeFormat : uint8
{
	None                           = 0,
	LTC                            = 1,
	VITC                           = 2,
	Auto                           = 255,
	EMediaIOAutoDetectableTimecodeFormat_MAX = 256,
};

enum class EMediaIOInputType : uint8
{
	Fill                           = 0,
	FillAndKey                     = 1,
	EMediaIOInputType_MAX          = 2,
};

enum class EMediaIOOutputType : uint8
{
	Fill                           = 0,
	FillAndKey                     = 1,
	EMediaIOOutputType_MAX         = 2,
};

enum class EMediaIOReferenceType : uint8
{
	FreeRun                        = 0,
	External                       = 1,
	Input                          = 2,
	EMediaIOReferenceType_MAX      = 3,
};

enum class EMediaCaptureSourceType : uint8
{
	RENDER_TARGET                  = 0,
	SCENE_VIEWPORT                 = 1,
	RHI_RESOURCE                   = 2,
	EMediaCaptureSourceType_MAX    = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x1C (0x1C - 0x0)
// ScriptStruct MediaIOCore.MediaCaptureOptions
struct FMediaCaptureOptions
{
public:
	bool                                         bAutoRestartOnSourceSizeChange;                    // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMediaCaptureOverrunAction        OverrunAction;                                     // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMediaCaptureCroppingType         Crop;                                              // 0x2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6FC[0x1];                                      // Fixing Size After Last Property
	struct FIntPoint                             CustomCapturePoint;                                // 0x4(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bResizeSourceBuffer;                               // 0xC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSkipFrameWhenRunningExpensiveTasks;               // 0xD(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bConvertToDesiredPixelFormat;                      // 0xE(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bForceAlphaToOneOnConversion;                      // 0xF(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bApplyLinearToSRGBConversion;                      // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutostopOnCapture;                                // 0x11(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_6FF[0x2];                                      // Fixing Size After Last Property
	int32                                        NumberOfFramesToCapture;                           // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMediaCapturePhase                CapturePhase;                                      // 0x18(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_700[0x3];                                      // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// ScriptStruct MediaIOCore.MediaIOAutoDetectableTimecodeFormat_Backup
struct FMediaIOAutoDetectableTimecodeFormat_Backup
{
public:
	enum class EMediaIOTimecodeFormat            TimecodeFormat;                                    // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoDetect;                                       // 0x4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_703[0x3];                                      // Fixing Size Of Struct
};

// 0xC (0xC - 0x0)
// ScriptStruct MediaIOCore.MediaIODevice
struct FMediaIODevice
{
public:
	class FName                                  DeviceName;                                        // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DeviceIdentifier;                                  // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct MediaIOCore.MediaIOConnection
struct FMediaIOConnection
{
public:
	struct FMediaIODevice                        Device;                                            // 0x0(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	class FName                                  Protocol;                                          // 0xC(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMediaIOTransportType             TransportType;                                     // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMediaIOQuadLinkTransportType     QuadTransportType;                                 // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PortIdentifier;                                    // 0x1C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct MediaIOCore.MediaIOMode
struct FMediaIOMode
{
public:
	struct FFrameRate                            FrameRate;                                         // 0x0(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FIntPoint                             Resolution;                                        // 0x8(0x8)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMediaIOStandardType              Standard;                                          // 0x10(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DeviceModeIdentifier;                              // 0x14(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3C (0x3C - 0x0)
// ScriptStruct MediaIOCore.MediaIOConfiguration
struct FMediaIOConfiguration
{
public:
	bool                                         bIsInput;                                          // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_708[0x3];                                      // Fixing Size After Last Property
	struct FMediaIOConnection                    MediaConnection;                                   // 0x4(0x20)(Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FMediaIOMode                          MediaMode;                                         // 0x24(0x18)(Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x44 (0x44 - 0x0)
// ScriptStruct MediaIOCore.MediaIOInputConfiguration
struct FMediaIOInputConfiguration
{
public:
	struct FMediaIOConfiguration                 MediaConfiguration;                                // 0x0(0x3C)(Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	enum class EMediaIOInputType                 InputType;                                         // 0x3C(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        KeyPortIdentifier;                                 // 0x40(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4C (0x4C - 0x0)
// ScriptStruct MediaIOCore.MediaIOOutputConfiguration
struct FMediaIOOutputConfiguration
{
public:
	struct FMediaIOConfiguration                 MediaConfiguration;                                // 0x0(0x3C)(Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	enum class EMediaIOOutputType                OutputType;                                        // 0x3C(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        KeyPortIdentifier;                                 // 0x40(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMediaIOReferenceType             OutputReference;                                   // 0x44(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReferencePortIdentifier;                           // 0x48(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct MediaIOCore.MediaIOVideoTimecodeConfiguration
struct FMediaIOVideoTimecodeConfiguration
{
public:
	struct FMediaIOConfiguration                 MediaConfiguration;                                // 0x0(0x3C)(Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	enum class EMediaIOAutoDetectableTimecodeFormat TimecodeFormat;                                    // 0x3C(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_70F[0x3];                                      // Fixing Size Of Struct
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
