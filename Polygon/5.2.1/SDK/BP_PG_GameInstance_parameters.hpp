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

// 0x0 (0x0 - 0x0)
// Function BP_PG_GameInstance.BP_PG_GameInstance_C.ReceiveInit
struct UBP_PG_GameInstance_C_ReceiveInit_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function BP_PG_GameInstance.BP_PG_GameInstance_C.ExecuteUbergraph_BP_PG_GameInstance
struct UBP_PG_GameInstance_C_ExecuteUbergraph_BP_PG_GameInstance_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
