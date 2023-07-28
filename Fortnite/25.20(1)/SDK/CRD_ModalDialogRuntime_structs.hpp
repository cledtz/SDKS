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

enum class ECreativeModalBackActionBoundButtonOption : uint8
{
	None                           = 0,
	LastButton                     = 1,
	Button1                        = 2,
	Button2                        = 3,
	Button3                        = 4,
	Button4                        = 5,
	Button5                        = 6,
	Button6                        = 7,
	ECreativeModalBackActionBoundButtonOption_MAX = 8,
};

enum class ECreativeModalDialogTimerOption : uint8
{
	None                           = 0,
	Countdown                      = 1,
	ECreativeModalDialogTimerOption_MAX = 2,
};

enum class ECreativeModalDialogAlignmentOption : uint8
{
	TopLeft                        = 0,
	TopCenter                      = 1,
	TopRight                       = 2,
	MiddleLeft                     = 3,
	Centered                       = 4,
	MiddleRight                    = 5,
	BottomLeft                     = 6,
	BottomCenter                   = 7,
	BottomRight                    = 8,
	CenteredFull                   = 9,
	LeftTall                       = 10,
	CenteredTall                   = 11,
	RightTall                      = 12,
	TopWide                        = 13,
	CenteredWide                   = 14,
	BottomWide                     = 15,
	ECreativeModalDialogAlignmentOption_MAX = 16,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
