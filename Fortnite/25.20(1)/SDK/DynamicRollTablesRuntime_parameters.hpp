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

// 0x28 (0x28 - 0x0)
// Function DynamicRollTablesRuntime.FortControllerComponent_DynamicRollPlayerComponent.AuthorityRollChoices
struct UFortControllerComponent_DynamicRollPlayerComponent_AuthorityRollChoices_Params
{
public:
	int32                                        NumChoices;                                        // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7DE5[0x4];                                     // Fixing Size After Last Property..
	TArray<class UFortItemDefinition*>           IgnoreItems;                                       // 0x8(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FFortDynamicRollResult>        ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function DynamicRollTablesRuntime.FortGamestateComponent_DynamicRollTableManager.HandlePlaylistDataReady
struct UFortGamestateComponent_DynamicRollTableManager_HandlePlaylistDataReady_Params
{
public:
	class UFortGameStateAthena*                  GameState;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortPlaylist*                         Playlist;                                          // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 PlaylistContextTags;                               // 0x10(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
