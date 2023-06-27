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

enum class EPlayspace_PlayerType : uint8
{
	All                            = 0,
	ActivePlayer                   = 1,
	Spectator                      = 2,
	Playspace_MAX                  = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x1 - 0x0)
// VerseStruct VersePlayspace.tuple_L_R
struct FTuple_L_R
{
public:
	uint8                                        _StructPaddingDummy;                               // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
