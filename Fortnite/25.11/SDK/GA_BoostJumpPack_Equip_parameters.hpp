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

// 0x39 (0x39 - 0x0)
// Function GA_BoostJumpPack_Equip.GA_BoostJumpPack_Equip_C.GetGadgetItem
struct UGA_BoostJumpPack_Equip_C_GetGadgetItem_Params
{
public:
	class AFortPlayerPawn*                       Pawn;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                             ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42CA[0x3];                                     // Fixing Size After Last Property..
	struct FGuid                                 CallFunc_GetInventoryGUID_ReturnValue;             // 0x14(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42CB[0x4];                                     // Fixing Size After Last Property..
	class AFortPlayerControllerZone*             CallFunc_GetPlayerController_AsFort_Player_Controller_Zone; // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortItem*                             CallFunc_BP_GetInventoryItemWithGuid_ReturnValue;  // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x29 (0x29 - 0x0)
// Function GA_BoostJumpPack_Equip.GA_BoostJumpPack_Equip_C.GetPlayerController
struct UGA_BoostJumpPack_Equip_C_GetPlayerController_Params
{
public:
	class AFortPlayerPawn*                       Pawn;                                              // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerControllerZone*             AsFort_Player_Controller_Zone;                     // 0x8(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42CC[0x7];                                     // Fixing Size After Last Property..
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerControllerZone*             K2Node_DynamicCast_AsFort_Player_Controller_Zone;  // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function GA_BoostJumpPack_Equip.GA_BoostJumpPack_Equip_C.IsAuthority
struct UGA_BoostJumpPack_Equip_C_IsAuthority_Params
{
public:
	bool                                         bAuthority;                                        // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAuthority_ReturnValue;                 // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC0 (0xC0 - 0x0)
// Function GA_BoostJumpPack_Equip.GA_BoostJumpPack_Equip_C.K2_CanActivateAbility
struct UGA_BoostJumpPack_Equip_C_K2_CanActivateAbility_Params
{
public:
	struct FGameplayAbilityActorInfo             ActorInfo;                                         // 0x0(0x48)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference)
	struct FGameplayAbilitySpecHandle            Handle;                                            // 0x48(0x4)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42CD[0x4];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 RelevantTags;                                      // 0x50(0x20)(Parm, OutParm)
	bool                                         ReturnValue;                                       // 0x70(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_42CE[0x7];                                     // Fixing Size After Last Property..
	class AFortPlayerPawn*                       LocalPlayerPawn;                                   // 0x78(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 ErrorReasonGamepad;                                // 0x80(0x20)(Edit, BlueprintVisible)
	struct FGameplayTagContainer                 ErrorReason;                                       // 0xA0(0x20)(Edit, BlueprintVisible)
};

// 0x0 (0x0 - 0x0)
// Function GA_BoostJumpPack_Equip.GA_BoostJumpPack_Equip_C.K2_ActivateAbility
struct UGA_BoostJumpPack_Equip_C_K2_ActivateAbility_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function GA_BoostJumpPack_Equip.GA_BoostJumpPack_Equip_C.ExecuteUbergraph_GA_BoostJumpPack_Equip
struct UGA_BoostJumpPack_Equip_C_ExecuteUbergraph_GA_BoostJumpPack_Equip_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
