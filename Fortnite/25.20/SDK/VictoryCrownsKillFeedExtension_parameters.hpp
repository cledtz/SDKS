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

// 0x4A (0x4A - 0x0)
// Function VictoryCrownsKillFeedExtension.VictoryCrownsKillFeedExtension_C.CheckForOverrideVictimStyle
struct UVictoryCrownsKillFeedExtension_C_CheckForOverrideVictimStyle_Params
{
public:
	class AFortPlayerStateAthena*                VictimPlayerStateAthena;                           // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                VictimStyle;                                       // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A2CF[0x7];                                     // Fixing Size After Last Property..
	class AFortGameStateAthena*                  CallFunc_GetGameStateAthena_ReturnValue;           // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A2D0[0x7];                                     // Fixing Size After Last Property..
	class UFortGameStateComponent_VictoryCrowns* CallFunc_GetComponentByClass_ReturnValue;          // 0x40(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsCrownBearer_ReturnValue;                // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4A (0x4A - 0x0)
// Function VictoryCrownsKillFeedExtension.VictoryCrownsKillFeedExtension_C.CheckForOverrideKillerStyle
struct UVictoryCrownsKillFeedExtension_C_CheckForOverrideKillerStyle_Params
{
public:
	class AFortPlayerStateAthena*                KillerPlayerStateAthena;                           // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                KillerStyle;                                       // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class FString                                ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A2D1[0x7];                                     // Fixing Size After Last Property..
	class AFortGameStateAthena*                  CallFunc_GetGameStateAthena_ReturnValue;           // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A2D2[0x7];                                     // Fixing Size After Last Property..
	class UFortGameStateComponent_VictoryCrowns* CallFunc_GetComponentByClass_ReturnValue;          // 0x40(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsCrownBearer_ReturnValue;                // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
