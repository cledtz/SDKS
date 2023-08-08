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

// 0x7C8 (0x7C8 - 0x0)
// Function AOE_Commando_KeepOutExplosion.AOE_Commando_KeepOutExplosion_C.OnRep_Radius
struct UAOE_Commando_KeepOutExplosion_C_OnRep_Radius_Params
{
public:
	struct FSoundAttenuationSettings             CallFunc_BP_GetAttenuationSettingsToApply_OutAttenuationSettings; // 0x0(0x3D0)()
	bool                                         CallFunc_BP_GetAttenuationSettingsToApply_ReturnValue; // 0x3D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_87DF[0x7];                                     // Fixing Size After Last Property
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x3D8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSoundAttenuationSettings             K2Node_MakeStruct_SoundAttenuationSettings;        // 0x3F0(0x3D0)()
	float                                        CallFunc_SetFloatParameter_Param_ImplicitCast;     // 0x7C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_MakeStruct_FalloffDistance_ImplicitCast;    // 0x7C4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function AOE_Commando_KeepOutExplosion.AOE_Commando_KeepOutExplosion_C.Send_Info
struct UAOE_Commando_KeepOutExplosion_C_Send_Info_Params
{
public:
	double                                       Radius;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function AOE_Commando_KeepOutExplosion.AOE_Commando_KeepOutExplosion_C.ReceiveDestroyed
struct UAOE_Commando_KeepOutExplosion_C_ReceiveDestroyed_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AOE_Commando_KeepOutExplosion.AOE_Commando_KeepOutExplosion_C.ReceiveBeginPlay
struct UAOE_Commando_KeepOutExplosion_C_ReceiveBeginPlay_Params
{
public:
};

// 0x14 (0x14 - 0x0)
// Function AOE_Commando_KeepOutExplosion.AOE_Commando_KeepOutExplosion_C.ExecuteUbergraph_AOE_Commando_KeepOutExplosion
struct UAOE_Commando_KeepOutExplosion_C_ExecuteUbergraph_AOE_Commando_KeepOutExplosion_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_87E2[0x4];                                     // Fixing Size After Last Property
	double                                       K2Node_CustomEvent_Radius;                         // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetSphereRadius_InSphereRadius_ImplicitCast; // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
