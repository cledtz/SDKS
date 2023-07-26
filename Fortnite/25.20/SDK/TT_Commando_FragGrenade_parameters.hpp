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

// 0x19 (0x19 - 0x0)
// Function TT_Commando_FragGrenade.TT_Commando_FragGrenade_C.GetApplicationTag
struct UTT_Commando_FragGrenade_C_GetApplicationTag_Params
{
public:
	class UGameplayAbility*                      AbilityInstance;                                   // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          OutTag;                                            // 0x8(0x4)(Parm, OutParm, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_97C3[0x3];                                     // Fixing Size After Last Property..
	class UGA_Commando_FragGrenade_WithTrajectory_C* K2Node_DynamicCast_AsGA_Commando_Frag_Grenade_with_Trajectory; // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD8 (0xD8 - 0x0)
// Function TT_Commando_FragGrenade.TT_Commando_FragGrenade_C.GetTextForTokenFromAbilityInstanceInternal
struct UTT_Commando_FragGrenade_C_GetTextForTokenFromAbilityInstanceInternal_Params
{
public:
	class UGameplayAbility*                      AbilityInstance;                                   // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Tag;                                               // 0x8(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_97C4[0x4];                                     // Fixing Size After Last Property..
	class UFortTooltipContext*                   Context;                                           // 0x10(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          Token;                                             // 0x18(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_97C5[0x4];                                     // Fixing Size After Last Property..
	class FText                                  OutText;                                           // 0x20(0x18)(Parm, OutParm)
	bool                                         ReturnValue;                                       // 0x38(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;   // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_97C6[0x6];                                     // Fixing Size After Last Property..
	class UGA_Commando_FragGrenade_WithTrajectory_C* K2Node_DynamicCast_AsGA_Commando_Frag_Grenade_with_Trajectory; // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_97C7[0x6];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFormatArgumentData                   K2Node_MakeStruct_FormatArgumentData;              // 0x60(0x50)(HasGetValueTypeHash)
	TArray<struct FFormatArgumentData>           K2Node_MakeArray_Array;                            // 0xB0(0x10)(ReferenceParm)
	class FText                                  CallFunc_Format_ReturnValue;                       // 0xC0(0x18)()
};

// 0x19 (0x19 - 0x0)
// Function TT_Commando_FragGrenade.TT_Commando_FragGrenade_C.InitializeAbilityInstanceInternal
struct UTT_Commando_FragGrenade_C_InitializeAbilityInstanceInternal_Params
{
public:
	class UGameplayAbility*                      AbilityInstance;                                   // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortTooltipContext*                   Context;                                           // 0x8(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UGA_Commando_FragGrenade_WithTrajectory_C* K2Node_DynamicCast_AsGA_Commando_Frag_Grenade_with_Trajectory; // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
