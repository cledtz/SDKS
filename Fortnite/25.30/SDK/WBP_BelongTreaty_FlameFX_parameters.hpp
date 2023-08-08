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
// Function WBP_BelongTreaty_FlameFX.WBP_BelongTreaty_FlameFX_C.HideFlame
struct UWBP_BelongTreaty_FlameFX_C_HideFlame_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function WBP_BelongTreaty_FlameFX.WBP_BelongTreaty_FlameFX_C.ShowFlame
struct UWBP_BelongTreaty_FlameFX_C_ShowFlame_Params
{
public:
	class UUMGSequencePlayer*                    CallFunc_PlayAnimation_ReturnValue;                // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function WBP_BelongTreaty_FlameFX.WBP_BelongTreaty_FlameFX_C.PreConstruct
struct UWBP_BelongTreaty_FlameFX_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function WBP_BelongTreaty_FlameFX.WBP_BelongTreaty_FlameFX_C.Construct
struct UWBP_BelongTreaty_FlameFX_C_Construct_Params
{
public:
};

// 0x28 (0x28 - 0x0)
// Function WBP_BelongTreaty_FlameFX.WBP_BelongTreaty_FlameFX_C.ExecuteUbergraph_WBP_BelongTreaty_FlameFX
struct UWBP_BelongTreaty_FlameFX_C_ExecuteUbergraph_WBP_BelongTreaty_FlameFX_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_71C6[0x3];                                     // Fixing Size After Last Property
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetScalarParameterValue_Value_ImplicitCast; // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetScalarParameterValue_Value_ImplicitCast_1; // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
