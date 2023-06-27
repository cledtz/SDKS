#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ECommonInputType : uint8
{
	MouseAndKeyboard               = 0,
	Gamepad                        = 1,
	Touch                          = 2,
	Count                          = 3,
	ECommonInputType_MAX           = 4,
};

enum class ECommonInputMode : uint8
{
	Menu                           = 0,
	Game                           = 1,
	All                            = 2,
	MAX                            = 3,
};

enum class ECommonInputEventFlowBehavior : uint8
{
	BlockIfActive                  = 0,
	BlockIfHandled                 = 1,
	NeverBlock                     = 2,
	ECommonInputEventFlowBehavior_MAX = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0xE0 (0xE0 - 0x0)
// ScriptStruct CommonInput.CommonInputKeyBrushConfiguration
struct FCommonInputKeyBrushConfiguration
{
public:
	struct FKey                                  Key;                                               // 0x0(0x18)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2271[0x8];                                     // Fixing Size After Last Property..
	struct FSlateBrush                           KeyBrush;                                          // 0x20(0xC0)(Edit, NativeAccessSpecifierPublic)
};

// 0xD0 (0xD0 - 0x0)
// ScriptStruct CommonInput.CommonInputKeySetBrushConfiguration
struct FCommonInputKeySetBrushConfiguration
{
public:
	TArray<struct FKey>                          Keys;                                              // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FSlateBrush                           KeyBrush;                                          // 0x10(0xC0)(Edit, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct CommonInput.InputDeviceIdentifierPair
struct FInputDeviceIdentifierPair
{
public:
	class FName                                  InputDeviceName;                                   // 0x0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2272[0x4];                                     // Fixing Size After Last Property..
	class FString                                HardwareDeviceIdentifier;                          // 0x8(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct CommonInput.InputHoldData
struct FInputHoldData
{
public:
	float                                        HoldTime;                                          // 0x0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HoldRollbackTime;                                  // 0x4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct CommonInput.CommonInputPlatformBaseData
struct FCommonInputPlatformBaseData
{
public:
	uint8                                        Pad_2273[0x8];                                     // Fixing Size After Last Property..
	enum class ECommonInputType                  DefaultInputType;                                  // 0x8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bSupportsMouseAndKeyboard;                         // 0x9(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bSupportsGamepad;                                  // 0xA(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2274[0x1];                                     // Fixing Size After Last Property..
	class FName                                  DefaultGamepadName;                                // 0xC(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bCanChangeGamepadType;                             // 0x10(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bSupportsTouch;                                    // 0x11(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2275[0x6];                                     // Fixing Size After Last Property..
	TArray<TSoftClassPtr<class UCommonInputBaseControllerData>> ControllerData;                                    // 0x18(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	TArray<TSubclassOf<class UCommonInputBaseControllerData>> ControllerDataClasses;                             // 0x28(0x10)(ZeroConstructor, Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
