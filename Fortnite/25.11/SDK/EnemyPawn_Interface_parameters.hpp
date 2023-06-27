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

// 0x0 (0x0 - 0x0)
// Function EnemyPawn_Interface.EnemyPawn_Interface_C.TriggerDeathFX
struct UEnemyPawn_Interface_C_TriggerDeathFX_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function EnemyPawn_Interface.EnemyPawn_Interface_C.Orphaned
struct UEnemyPawn_Interface_C_Orphaned_Params
{
public:
	bool                                         IsOrphaned;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8E8A[0x7];                                     // Fixing Size After Last Property..
	class AFortPawn*                             AttachedPawn;                                      // 0x8(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
