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

// 0x1 (0x1 - 0x0)
// Function BI_SpawnTarget.BI_SpawnTarget_C.SetAsSpawnTarget
struct UBI_SpawnTarget_C_SetAsSpawnTarget_Params
{
public:
	bool                                         IsSpawnTarget;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BI_SpawnTarget.BI_SpawnTarget_C.GetTargetReference
struct UBI_SpawnTarget_C_GetTargetReference_Params
{
public:
	class UActor*                                Reference;                                         // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
