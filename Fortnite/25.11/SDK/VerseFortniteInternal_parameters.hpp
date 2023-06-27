#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x18 - 0x0)
// Function VerseFortniteInternal.FortControllerStateHandlerComponent.NotifyOfStateChange
struct UFortControllerStateHandlerComponent_NotifyOfStateChange_Params
{
public:
	class FString                                State;                                             // 0x0(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Active;                                            // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3878[0x7];                                     // Fixing Size Of Struct..
};

// 0x0 (0x0 - 0x0)
// Function VerseFortniteInternal.FortBuildingSettingsComponentBase.OnRep_Settings
struct UFortBuildingSettingsComponentBase_OnRep_Settings_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function VerseFortniteInternal.FortPlayspaceComponentHelper.HandlePlayerPawnPossessed
struct UFortPlayspaceComponentHelper_HandlePlayerPawnPossessed_Params
{
public:
	class APawn*                                 Pawn;                                              // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function VerseFortniteInternal.FortPlayspaceComponentHelper.HandlePlayerDied
struct UFortPlayspaceComponentHelper_HandlePlayerDied_Params
{
public:
	class AFortPlayerPawnAthena*                 FortPlayerPawnAthena;                              // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
