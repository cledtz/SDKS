#pragma once

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

// 0x10 (0x10 - 0x0)
// Function HomerUI.FortHomerComponent.HandlePawnEmoteStopped
struct UFortHomerComponent_HandlePawnEmoteStopped_Params
{
public:
	class UFortItemDefinition*                   MontageItemDef;                                    // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UFortPawn*                             PawnEmoting;                                       // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function HomerUI.FortHomerComponent.HandleLocalPlayerEliminatedPlayer
struct UFortHomerComponent_HandleLocalPlayerEliminatedPlayer_Params
{
public:
	class UFortPlayerStateAthena*                Player;                                            // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
