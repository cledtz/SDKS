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

enum class EpicGames_Input_input_event : uint8
{
	Pressed                        = 0,
	Released                       = 1,
	EpicGames_Input_input_MAX      = 2,
};

enum class EpicGames_Input_verse_key : uint8
{
	Gamepad_FaceButton_Top         = 0,
	Gamepad_FaceButton_Bottom      = 1,
	Gamepad_FaceButton_Left        = 2,
	Gamepad_FaceButton_Right       = 3,
	Gamepad_LeftShoulder           = 4,
	Gamepad_RightShoulder          = 5,
	Gamepad_LeftTrigger            = 6,
	Gamepad_RightTrigger           = 7,
	Gamepad_DPad_Up                = 8,
	Gamepad_DPad_Down              = 9,
	Gamepad_DPad_Left              = 10,
	Gamepad_DPad_Right             = 11,
	Gamepad_LeftX                  = 12,
	Gamepad_LeftY                  = 13,
	Gamepad_RightX                 = 14,
	Gamepad_RightY                 = 15,
	Gamepad_LeftTriggerAxis        = 16,
	Gamepad_RightTriggerAxis       = 17,
	Mouse_X                        = 18,
	Mouse_Y                        = 19,
	Mouse_WheelAxis                = 20,
	Mouse_LeftButton               = 21,
	Mouse_RightButton              = 22,
	Mouse_MiddleButton             = 23,
	Mouse_ThumbButton              = 24,
	Mouse_ThumbButton2             = 25,
	Mouse_ScrollUp                 = 26,
	Mouse_ScrollDown               = 27,
	Keyboard_Up                    = 28,
	Keyboard_Down                  = 29,
	Keyboard_Left                  = 30,
	Keyboard_Right                 = 31,
	Keyboard_Enter                 = 32,
	Keyboard_Multiply              = 33,
	Keyboard_Divide                = 34,
	Keyboard_Add                   = 35,
	Keyboard_Subtract              = 36,
	Keyboard_Decimal               = 37,
	Keyboard_SpaceBar              = 38,
	Keyboard_LeftShift             = 39,
	Keyboard_RightShift            = 40,
	Keyboard_LeftControl           = 41,
	Keyboard_RightControl          = 42,
	Keyboard_LeftAlt               = 43,
	Keyboard_RightAlt              = 44,
	NumPad_Zero                    = 45,
	NumPad_One                     = 46,
	NumPad_Two                     = 47,
	NumPad_Three                   = 48,
	NumPad_Four                    = 49,
	NumPad_Five                    = 50,
	NumPad_Six                     = 51,
	NumPad_Seven                   = 52,
	NumPad_Eight                   = 53,
	NumPad_Nine                    = 54,
	E                              = 55,
	I                              = 56,
	J                              = 57,
	K                              = 58,
	L                              = 59,
	Z                              = 60,
	TAB                            = 61,
	Zero                           = 62,
	One                            = 63,
	Two                            = 64,
	Three                          = 65,
	Four                           = 66,
	Five                           = 67,
	Six                            = 68,
	Seven                          = 69,
	Eight                          = 70,
	Nine                           = 71,
	EpicGames_Input_verse_MAX      = 72,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x58 - 0x0)
// VerseStruct EpicGamesEngine.tuple_L_Kchar_M_Kchar_M_Kverse__key_M_Qfloat_M_Q_Lfloat_Tvoid_R_R
struct FTuple_L_Kchar_M_Kchar_M_Kverse__key_M_Qfloat_M_Q_Lfloat_Tvoid_R_R
{
public:
	FVerseStringProperty_                        __verse_0x18E3F084_Elem0;                          // 0x0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseStringProperty_                        __verse_0x7D844C3C_Elem1;                          // 0x10(0x10)(InstancedReference, HasGetValueTypeHash)
	TArray<enum class EpicGames_Input_verse_key> __verse_0x932BF92E_Elem2;                          // 0x20(0x10)(InstancedReference, ContainsInstancedReference)
	FOptionProperty_                             __verse_0xF64C4596_Elem3;                          // 0x30(0x10)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x4F74920B_Elem4;                          // 0x40(0x18)(InstancedReference, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// VerseStruct EpicGamesEngine.tuple_L_Kchar_M_Kchar_M_Kverse__key_M_Qfloat_R
struct FTuple_L_Kchar_M_Kchar_M_Kverse__key_M_Qfloat_R
{
public:
	FVerseStringProperty_                        __verse_0x18E3F084_Elem0;                          // 0x0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseStringProperty_                        __verse_0x7D844C3C_Elem1;                          // 0x10(0x10)(InstancedReference, HasGetValueTypeHash)
	TArray<enum class EpicGames_Input_verse_key> __verse_0x932BF92E_Elem2;                          // 0x20(0x10)(InstancedReference, ContainsInstancedReference)
	FOptionProperty_                             __verse_0xF64C4596_Elem3;                          // 0x30(0x10)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x48 (0x48 - 0x0)
// VerseStruct EpicGamesEngine.tuple_L_Kchar_M_Kchar_M_Kverse__key_Minput__event_Mtuple_L_R_Tvoid_R
struct FTuple_L_Kchar_M_Kchar_M_Kverse__key_Minput__event_Mtuple_L_R_Tvoid_R
{
public:
	FVerseStringProperty_                        __verse_0x18E3F084_Elem0;                          // 0x0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseStringProperty_                        __verse_0x7D844C3C_Elem1;                          // 0x10(0x10)(InstancedReference, HasGetValueTypeHash)
	TArray<enum class EpicGames_Input_verse_key> __verse_0x932BF92E_Elem2;                          // 0x20(0x10)(InstancedReference, ContainsInstancedReference)
	enum class EpicGames_Input_input_event       __verse_0xF64C4596_Elem3;                          // 0x30(0x1)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8855[0x7];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      __verse_0x4F74920B_Elem4;                          // 0x38(0x10)(InstancedReference, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// VerseStruct EpicGamesEngine.tuple_L_Kchar_M_Kchar_M_Kverse__key_R
struct FTuple_L_Kchar_M_Kchar_M_Kverse__key_R
{
public:
	FVerseStringProperty_                        __verse_0x18E3F084_Elem0;                          // 0x0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseStringProperty_                        __verse_0x7D844C3C_Elem1;                          // 0x10(0x10)(InstancedReference, HasGetValueTypeHash)
	TArray<enum class EpicGames_Input_verse_key> __verse_0x932BF92E_Elem2;                          // 0x20(0x10)(InstancedReference, ContainsInstancedReference)
};

// 0x28 (0x28 - 0x0)
// VerseStruct EpicGamesEngine.tuple_L_Kchar_M_Q_Lfloat_Tvoid_R_R
struct FTuple_L_Kchar_M_Q_Lfloat_Tvoid_R_R
{
public:
	FVerseStringProperty_                        __verse_0x18E3F084_Elem0;                          // 0x0(0x10)(InstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x7D844C3C_Elem1;                          // 0x10(0x18)(InstancedReference, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// VerseStruct EpicGamesEngine.tuple_L_Kchar_Minput__event_Mtuple_L_R_Tvoid_R
struct FTuple_L_Kchar_Minput__event_Mtuple_L_R_Tvoid_R
{
public:
	FVerseStringProperty_                        __verse_0x18E3F084_Elem0;                          // 0x0(0x10)(InstancedReference, HasGetValueTypeHash)
	enum class EpicGames_Input_input_event       __verse_0x7D844C3C_Elem1;                          // 0x10(0x1)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8856[0x7];                                     // Fixing Size After Last Property..
	FVerseFunctionProperty_                      __verse_0x932BF92E_Elem2;                          // 0x18(0x10)(InstancedReference, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// VerseStruct EpicGamesEngine.tuple_L_Kchar_Minput__event_R
struct FTuple_L_Kchar_Minput__event_R
{
public:
	FVerseStringProperty_                        __verse_0x18E3F084_Elem0;                          // 0x0(0x10)(InstancedReference, HasGetValueTypeHash)
	enum class EpicGames_Input_input_event       __verse_0x7D844C3C_Elem1;                          // 0x10(0x1)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// VerseStruct EpicGamesEngine.tuple_L_R
struct FTuple_L_R
{
public:
	uint8                                        _StructPaddingDummy;                               // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// VerseStruct EpicGamesEngine.tuple_Lverse__ue__input__component_M_Kchar_Minput__event_R
struct FTuple_Lverse__ue__input__component_M_Kchar_Minput__event_R
{
public:
	class UEpicGames_Input_verse_ue_input_component* __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseStringProperty_                        __verse_0x7D844C3C_Elem1;                          // 0x8(0x10)(InstancedReference, HasGetValueTypeHash)
	enum class EpicGames_Input_input_event       __verse_0x932BF92E_Elem2;                          // 0x18(0x1)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
