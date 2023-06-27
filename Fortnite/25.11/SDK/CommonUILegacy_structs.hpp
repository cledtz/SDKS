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

enum class EOperation : uint8
{
	Intro                          = 0,
	Outro                          = 1,
	Push                           = 2,
	Pop                            = 3,
	Invalid                        = 4,
	EOperation_MAX                 = 5,
};

enum class ECommonPlatformType : uint8
{
	PC                             = 0,
	Mac                            = 1,
	PS4                            = 2,
	XBox                           = 3,
	IOS                            = 4,
	Android                        = 5,
	Switch                         = 6,
	XSX                            = 7,
	PS5                            = 8,
	Count                          = 9,
	ECommonPlatformType_MAX        = 10,
};

enum class ECommonGamepadType : uint8
{
	XboxOneController              = 0,
	PS4Controller                  = 1,
	SwitchController               = 2,
	GenericController              = 3,
	XboxSeriesXController          = 4,
	PS5Controller                  = 5,
	Count                          = 6,
	ECommonGamepadType_MAX         = 7,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x28 - 0x0)
// ScriptStruct CommonUILegacy.Operation
struct FOperation
{
public:
	enum class EOperation                        Operation;                                         // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2741[0x7];                                     // Fixing Size After Last Property..
	class UCommonActivatablePanelLegacy*         Panel;                                             // 0x8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIntroPanel;                                       // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bActivatePanel;                                    // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOutroPanelBelow;                                  // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2742[0x15];                                    // Fixing Size Of Struct..
};

// 0x5F0 (0x950 - 0x360)
// ScriptStruct CommonUILegacy.CommonInputActionData
struct FCommonInputActionData : public FCommonInputActionDataBase
{
public:
	TMap<enum class ECommonGamepadType, struct FCommonInputTypeInfo> GamepadInputTypeInfoOverrides;                     // 0x360(0x50)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FCommonInputTypeInfo                  GamepadInputTypeInfos[0x6];                        // 0x3B0(0x5A0)(Deprecated, Protected, NativeAccessSpecifierProtected)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
