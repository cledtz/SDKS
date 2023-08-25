#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x1 - 0x0)
// Function HeistBasesGameplayRuntime.FortGameStateComponent_HeistDisplayCaseItemManager.IsDataReady
struct UFortGameStateComponent_HeistDisplayCaseItemManager_IsDataReady_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function HeistBasesGameplayRuntime.FortGameStateComponent_HeistDisplayCaseItemManager.HandlePlaylistDataReady
struct UFortGameStateComponent_HeistDisplayCaseItemManager_HandlePlaylistDataReady_Params
{
public:
	class UFortGameStateAthena*                  GameState;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortPlaylist*                         Playlist;                                          // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 PlaylistContextTags;                               // 0x10(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function HeistBasesGameplayRuntime.FortGameStateComponent_HeistDisplayCaseItemManager.GetDisplayCaseItem
struct UFortGameStateComponent_HeistDisplayCaseItemManager_GetDisplayCaseItem_Params
{
public:
	struct FGameplayTag                          DisplayCaseGroupTag;                               // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A3E[0x4];                                     // Fixing Size After Last Property 
	class UFortWorldItemDefinition*              ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function HeistBasesGameplayRuntime.FortHeistDisplayCase.OnServerNotifyStartDisplayCaseLongUse
struct UFortHeistDisplayCase_OnServerNotifyStartDisplayCaseLongUse_Params
{
public:
	class UFortPlayerPawn*                       InteractingPawn;                                   // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function HeistBasesGameplayRuntime.FortHeistDisplayCase.OnServerNotifyEndDisplayCaseLongUse
struct UFortHeistDisplayCase_OnServerNotifyEndDisplayCaseLongUse_Params
{
public:
	class UFortPlayerPawn*                       InteractingPawn;                                   // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}


