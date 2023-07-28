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

// 0x20 (0x20 - 0x0)
// Function M_MED_Patches_Axe_AnimBP.M_MED_Patches_Axe_AnimBP_C.AnimGraph
struct UM_MED_Patches_Axe_AnimBP_C_AnimGraph_Params
{
public:
	struct FPoseLink                             InPose;                                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             AnimGraph;                                         // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x4 (0x4 - 0x0)
// Function M_MED_Patches_Axe_AnimBP.M_MED_Patches_Axe_AnimBP_C.BlueprintUpdateAnimation
struct UM_MED_Patches_Axe_AnimBP_C_BlueprintUpdateAnimation_Params
{
public:
	float                                        DeltaTimeX;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC78 (0xC78 - 0x0)
// Function M_MED_Patches_Axe_AnimBP.M_MED_Patches_Axe_AnimBP_C.ExecuteUbergraph_M_MED_Patches_Axe_AnimBP
struct UM_MED_Patches_Axe_AnimBP_C_ExecuteUbergraph_M_MED_Patches_Axe_AnimBP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9E7C[0x4];                                     // Fixing Size After Last Property..
	struct FRBANParamsStruct                     Temp_struct_Variable;                              // 0x8(0xB40)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_DeltaTimeX;                           // 0xB48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9E7D[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0xB50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Gravity_Override_State_Function_GravityOverride; // 0xB58(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Gravity_Override_State_Function_CurrentStateOut; // 0xB70(0x10)(ZeroConstructor, HasGetValueTypeHash)
	struct FGravityOverrideSettingStruct         CallFunc_Gravity_Override_State_Function_GravityOverrideSettingsOut; // 0xB80(0x64)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9E7E[0x4];                                     // Fixing Size After Last Property..
	struct FRBANSettingStruct                    CallFunc_Gravity_Override_State_Function_RBAN_SettingsOut; // 0xBE8(0x90)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
