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

enum class ESprintLoggingVerbosityLevel : uint8
{
	Error                          = 0,
	Warning                        = 1,
	Display                        = 2,
	Log                            = 3,
	Verbose                        = 4,
	VeryVerbose                    = 5,
	ESprintLoggingVerbosityLevel_MAX = 6,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x28 - 0x10)
// ScriptStruct TacticalSprintRuntime.FortMovementMode_TacSprintRuntimeData
struct FFortMovementMode_TacSprintRuntimeData : public FFortMovementMode_BaseExtRuntimeData
{
public:
	uint8                                        Pad_1DCE[0x18];                                    // Fixing Size Of Struct..
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
