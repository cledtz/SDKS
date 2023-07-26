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

// 0xF8 (0xF8 - 0x0)
// Function GCN_BurtCharging_Player_Latent.GCN_BurtCharging_Player_Latent_C.OnExecute
struct AGCN_BurtCharging_Player_Latent_C_OnExecute_Params
{
public:
	class AActor*                                MyTarget;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xD0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	bool                                         ReturnValue;                                       // 0xD8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A177[0x7];                                     // Fixing Size After Last Property..
	class AFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn;             // 0xE0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A178[0x7];                                     // Fixing Size After Last Property..
	class AFortPlayerController*                 CallFunc_GetFortPlayerControllerFromActor_ReturnValue; // 0xF0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function GCN_BurtCharging_Player_Latent.GCN_BurtCharging_Player_Latent_C.ExecuteBoostLogic
struct AGCN_BurtCharging_Player_Latent_C_ExecuteBoostLogic_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GCN_BurtCharging_Player_Latent.GCN_BurtCharging_Player_Latent_C.BoostEndEvent
struct AGCN_BurtCharging_Player_Latent_C_BoostEndEvent_Params
{
public:
};

// 0x38 (0x38 - 0x0)
// Function GCN_BurtCharging_Player_Latent.GCN_BurtCharging_Player_Latent_C.ExecuteUbergraph_GCN_BurtCharging_Player_Latent
struct AGCN_BurtCharging_Player_Latent_C_ExecuteUbergraph_GCN_BurtCharging_Player_Latent_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x10(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A179[0x7];                                     // Fixing Size After Last Property..
	FInterfaceProperty_                          CallFunc_AddGenericCameraLensEffect_ReturnValue;   // 0x20(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UFXSystemComponent*                    CallFunc_GetPrimaryParticleComponent_ReturnValue;  // 0x30(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
