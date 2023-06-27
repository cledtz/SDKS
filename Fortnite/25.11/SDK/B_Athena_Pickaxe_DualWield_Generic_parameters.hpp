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

// 0x31 (0x31 - 0x0)
// Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Binding Time of Day Control
struct AB_Athena_Pickaxe_DualWield_Generic_C_Binding_Time_of_Day_Control_Params
{
public:
	bool                                         F_;                                                // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_989F[0x7];                                     // Fixing Size After Last Property..
	FInterfaceProperty_                          CallFunc_GetContextualTimeOfDayManager_ReturnValue; // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x18(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EFortDayPhase                     CallFunc_GetCurrentDayPhase_ReturnValue;           // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortDayPhase                     CallFunc_GetPreviousDayPhase_ReturnValue;          // 0x25(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98A0[0x2];                                     // Fixing Size After Last Property..
	class UObject*                               CallFunc_Conv_InterfaceToObject_ReturnValue;       // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.SetWpnRarity
struct AB_Athena_Pickaxe_DualWield_Generic_C_SetWpnRarity_Params
{
public:
};

// 0xE9 (0xE9 - 0x0)
// Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Unbind Dual Melee Swing Events
struct AB_Athena_Pickaxe_DualWield_Generic_C_Unbind_Dual_Melee_Swing_Events_Params
{
public:
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0xC(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x18(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x24(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x30(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x3C(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0x48(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_7;            // 0x54(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_GetInstigator_ReturnValue;                // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_8;            // 0x68(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98A1[0x4];                                     // Fixing Size After Last Property..
	class APlayerPawn_Generic_C*                 K2Node_DynamicCast_AsPlayer_Pawn_Generic;          // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98A2[0x3];                                     // Fixing Size After Last Property..
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_9;            // 0x84(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_10;           // 0x90(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_11;           // 0x9C(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_12;           // 0xA8(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_13;           // 0xB4(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_14;           // 0xC0(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_15;           // 0xCC(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_GetInstigator_ReturnValue_1;              // 0xD8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerPawn_Athena_C*                  K2Node_DynamicCast_AsPlayer_Pawn_Athena;           // 0xE0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xF1 (0xF1 - 0x0)
// Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Bind Dual Melee Swing Events
struct AB_Athena_Pickaxe_DualWield_Generic_C_Bind_Dual_Melee_Swing_Events_Params
{
public:
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x0(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0xC(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x18(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x24(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x30(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_5;            // 0x3C(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_6;            // 0x48(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_7;            // 0x54(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_8;            // 0x60(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98A3[0x4];                                     // Fixing Size After Last Property..
	class APawn*                                 CallFunc_GetInstigator_ReturnValue;                // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_9;            // 0x78(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98A4[0x4];                                     // Fixing Size After Last Property..
	class APlayerPawn_Generic_C*                 K2Node_DynamicCast_AsPlayer_Pawn_Generic;          // 0x88(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98A5[0x3];                                     // Fixing Size After Last Property..
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_10;           // 0x94(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_11;           // 0xA0(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_12;           // 0xAC(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_13;           // 0xB8(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_14;           // 0xC4(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_15;           // 0xD0(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98A6[0x4];                                     // Fixing Size After Last Property..
	class APawn*                                 CallFunc_GetInstigator_ReturnValue_1;              // 0xE0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerPawn_Athena_C*                  K2Node_DynamicCast_AsPlayer_Pawn_Athena;           // 0xE8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x5 (0x5 - 0x0)
// Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Set Active Alteration Idle Particles
struct AB_Athena_Pickaxe_DualWield_Generic_C_Set_Active_Alteration_Idle_Particles_Params
{
public:
	bool                                         Active;                                            // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Reset;                                             // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.UserConstructionScript
struct AB_Athena_Pickaxe_DualWield_Generic_C_UserConstructionScript_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.OnStatChanged_9F72D14C4573F491E38302B51F08A0B8
struct AB_Athena_Pickaxe_DualWield_Generic_C_OnStatChanged_9F72D14C4573F491E38302B51F08A0B8_Params
{
public:
	class FName                                  StatName;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        StatValue;                                         // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.OnLoaded_F1C7B8E24518F4F2DE2C8DBABB95E06D
struct AB_Athena_Pickaxe_DualWield_Generic_C_OnLoaded_F1C7B8E24518F4F2DE2C8DBABB95E06D_Params
{
public:
	class UObject*                               Loaded;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.OnPlayWeaponFireFX
struct AB_Athena_Pickaxe_DualWield_Generic_C_OnPlayWeaponFireFX_Params
{
public:
	bool                                         bPersistentFire;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bSecondaryFire;                                    // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.PlayRClickImpacts
struct AB_Athena_Pickaxe_DualWield_Generic_C_PlayRClickImpacts_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.OnEquippedWeaponDestory
struct AB_Athena_Pickaxe_DualWield_Generic_C_OnEquippedWeaponDestory_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.OnWeaponAttached
struct AB_Athena_Pickaxe_DualWield_Generic_C_OnWeaponAttached_Params
{
public:
};

// 0x718 (0x718 - 0x0)
// Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.OnInitCosmeticAlterations
struct AB_Athena_Pickaxe_DualWield_Generic_C_OnInitCosmeticAlterations_Params
{
public:
	struct FFortCosmeticModification             CosmeticMod;                                       // 0x0(0x718)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x2 (0x2 - 0x0)
// Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.OnWeaponVisibilityChanged
struct AB_Athena_Pickaxe_DualWield_Generic_C_OnWeaponVisibilityChanged_Params
{
public:
	bool                                         bVisible;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bSetForLocalControllerOnly;                        // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.OnWeaponDetached
struct AB_Athena_Pickaxe_DualWield_Generic_C_OnWeaponDetached_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.OnInitWeaponCosmetics
struct AB_Athena_Pickaxe_DualWield_Generic_C_OnInitWeaponCosmetics_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Swing Left End
struct AB_Athena_Pickaxe_DualWield_Generic_C_Swing_Left_End_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Swing Right End
struct AB_Athena_Pickaxe_DualWield_Generic_C_Swing_Right_End_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.OnInstigatorSet
struct AB_Athena_Pickaxe_DualWield_Generic_C_OnInstigatorSet_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.K2_OnUnEquip
struct AB_Athena_Pickaxe_DualWield_Generic_C_K2_OnUnEquip_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.SwingRight_Common
struct AB_Athena_Pickaxe_DualWield_Generic_C_SwingRight_Common_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.SwingLeft_Common
struct AB_Athena_Pickaxe_DualWield_Generic_C_SwingLeft_Common_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Swing Left
struct AB_Athena_Pickaxe_DualWield_Generic_C_Swing_Left_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Swing Right
struct AB_Athena_Pickaxe_DualWield_Generic_C_Swing_Right_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Swing Left 2
struct AB_Athena_Pickaxe_DualWield_Generic_C_Swing_Left_2_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Swing Right 2
struct AB_Athena_Pickaxe_DualWield_Generic_C_Swing_Right_2_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Anim Trails Notify
struct AB_Athena_Pickaxe_DualWield_Generic_C_Anim_Trails_Notify_Params
{
public:
	bool                                         bActive;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Anim Trails Disable
struct AB_Athena_Pickaxe_DualWield_Generic_C_Anim_Trails_Disable_Params
{
public:
};

// 0xF0 (0xF0 - 0x0)
// Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.OnPlayImpactFX
struct AB_Athena_Pickaxe_DualWield_Generic_C_OnPlayImpactFX_Params
{
public:
	struct FHitResult                            HitResult;                                         // 0x0(0xE0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	enum class EPhysicalSurface                  ImpactPhysicalSurface;                             // 0xE0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98A7[0x7];                                     // Fixing Size After Last Property..
	class UFXSystemComponent*                    SpawnedPSC;                                        // 0xE8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x3 (0x3 - 0x0)
// Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.TODCheck
struct AB_Athena_Pickaxe_DualWield_Generic_C_TODCheck_Params
{
public:
	enum class EFortDayPhase                     CurrentDayPhase;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortDayPhase                     PreviousDayPhase;                                  // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bAtCreation;                                       // 0x2(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.HandleKillWatch
struct AB_Athena_Pickaxe_DualWield_Generic_C_HandleKillWatch_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.UpdateBasedOnKills
struct AB_Athena_Pickaxe_DualWield_Generic_C_UpdateBasedOnKills_Params
{
public:
	int32                                        Watched_Kills;                                     // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.Vehicle Passenger
struct AB_Athena_Pickaxe_DualWield_Generic_C_Vehicle_Passenger_Params
{
public:
	class AFortPlayerPawn*                       FortPlayerPawn;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                NewVehicle;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                OldVehicle;                                        // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x15EC (0x15EC - 0x0)
// Function B_Athena_Pickaxe_DualWield_Generic.B_Athena_Pickaxe_DualWield_Generic_C.ExecuteUbergraph_B_Athena_Pickaxe_DualWield_Generic
struct AB_Athena_Pickaxe_DualWield_Generic_C_ExecuteUbergraph_B_Athena_Pickaxe_DualWield_Generic_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_GetPI_ReturnValue;                        // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;  // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x28(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_StatName;                       // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_StatValue;                      // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_GetPI_ReturnValue_1;                      // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_MultiplyMultiply_FloatFloat_ReturnValue_1; // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  Temp_name_Variable;                                // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98A8[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               Temp_object_Variable;                              // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               K2Node_CustomEvent_Loaded;                         // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UParticleSystem*                       K2Node_DynamicCast_AsParticle_System;              // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98A9[0x2];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Variable_1;                               // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_2;                               // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x84(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bPersistentFire;                      // 0x85(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bSecondaryFire;                       // 0x86(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue_1;          // 0x87(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DoesSocketExist_ReturnValue;              // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x89(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98AA[0x6];                                     // Fixing Size After Last Property..
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x90(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetSocketLocation_ReturnValue;            // 0xF0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAtLocation_ReturnValue;       // 0x108(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_3;                               // 0x110(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_4;                               // 0x114(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_GetInstigator_ReturnValue;                // 0x118(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                             K2Node_DynamicCast_AsFort_Pawn;                    // 0x120(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98AB[0x7];                                     // Fixing Size After Last Property..
	struct FFortCosmeticModification             K2Node_Event_CosmeticMod;                          // 0x130(0x718)()
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAttached_ReturnValue;         // 0x848(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x850(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsAssetNull_ReturnValue;                  // 0x858(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bVisible;                             // 0x859(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bSetForLocalControllerOnly;           // 0x85A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x85B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98AC[0x4];                                     // Fixing Size After Last Property..
	class UFortWeaponItemDefinition*             CallFunc_GetWeaponData_ReturnValue;                // 0x860(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TSoftObjectPtr<class UTexture2D>             CallFunc_GetSmallPreviewImage_ReturnValue;         // 0x868(0x28)(UObjectWrapper, HasGetValueTypeHash)
	class UTexture2D*                            CallFunc_GetOrLoadSynchronously_ReturnValue;       // 0x890(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_5;                               // 0x898(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_6;                               // 0x89C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_7;                               // 0x8A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x8A4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98AD[0x3];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Variable_8;                               // 0x8A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98AE[0x4];                                     // Fixing Size After Last Property..
	class APawn*                                 CallFunc_GetInstigator_ReturnValue_1;              // 0x8B0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                             K2Node_DynamicCast_AsFort_Pawn_1;                  // 0x8B8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x8C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98AF[0x7];                                     // Fixing Size After Last Property..
	class AFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x8C8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_3;                     // 0x8D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x8D1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98B0[0x2];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Variable_9;                               // 0x8D4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFXSystemComponent*                    CallFunc_GetAnimTrailsPSC_ReturnValue;             // 0x8D8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UFXSystemComponent*                    CallFunc_GetAnimTrailsOffhandPSC_ReturnValue;      // 0x8E0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_10;                              // 0x8E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DoesSocketExist_ReturnValue_1;            // 0x8EC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98B1[0x3];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_GetSocketLocation_ReturnValue_1;          // 0x8F0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAtLocation_ReturnValue_1;     // 0x908(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_11;                              // 0x910(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_K2_AttachToComponent_ReturnValue;         // 0x914(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98B2[0x3];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Variable_12;                              // 0x918(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98B3[0x4];                                     // Fixing Size After Last Property..
	class UFXSystemComponent*                    CallFunc_GetIdleVFXComponent_ReturnValue;          // 0x920(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UFXSystemComponent*                    CallFunc_GetIdleOffhandVFXComponent_ReturnValue;   // 0x928(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UFXSystemComponent*                    CallFunc_GetSwingOffhandVFXComponent_ReturnValue;  // 0x930(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x938(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98B4[0x7];                                     // Fixing Size After Last Property..
	class UFXSystemComponent*                    CallFunc_GetSwingOffhandVFXComponent_ReturnValue_1; // 0x940(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_5;                    // 0x948(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98B5[0x7];                                     // Fixing Size After Last Property..
	class UFXSystemComponent*                    CallFunc_GetSwingVFXComponent_ReturnValue;         // 0x950(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_6;                    // 0x958(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98B6[0x7];                                     // Fixing Size After Last Property..
	class UFXSystemComponent*                    CallFunc_GetSwingVFXComponent_ReturnValue_1;       // 0x960(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_7;                    // 0x968(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortDualWieldSwingState          CallFunc_GetCurrentSwingState_ReturnValue;         // 0x969(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x96A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bActive;                        // 0x96B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetUseAnimTrailsPSC_ReturnValue;          // 0x96C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98B7[0x3];                                     // Fixing Size After Last Property..
	class FName                                  CallFunc_GetAnimTrailsSecondSocketName_ReturnValue; // 0x970(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetAnimTrailsFirstSocketName_ReturnValue; // 0x974(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetAnimTrailsWidth_ReturnValue;           // 0x978(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetUseAnimTrailsOffhandPSC_ReturnValue;   // 0x97C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98B8[0x3];                                     // Fixing Size After Last Property..
	class UFXSystemComponent*                    CallFunc_GetAnimTrailsOffhandPSC_ReturnValue_1;    // 0x980(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              K2Node_DynamicCast_AsCascade_Particle_System_Component; // 0x988(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_4;                     // 0x990(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_8;                    // 0x991(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98B9[0x2];                                     // Fixing Size After Last Property..
	class FName                                  CallFunc_GetAnimTrailsOffhandSecondSocketName_ReturnValue; // 0x994(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_GetAnimTrailsOffhandFirstSocketName_ReturnValue; // 0x998(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetAnimTrailsOffhandWidth_ReturnValue;    // 0x99C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_13;                              // 0x9A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetUseAnimTrailsOffhandPSC_ReturnValue_1; // 0x9A4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98BA[0x3];                                     // Fixing Size After Last Property..
	class UFXSystemComponent*                    CallFunc_GetAnimTrailsOffhandPSC_ReturnValue_2;    // 0x9A8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_9;                    // 0x9B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98BB[0x7];                                     // Fixing Size After Last Property..
	class UParticleSystemComponent*              K2Node_DynamicCast_AsCascade_Particle_System_Component_1; // 0x9B8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_5;                     // 0x9C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetUseAnimTrailsPSC_ReturnValue_1;        // 0x9C1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98BC[0x2];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Variable_14;                              // 0x9C4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_15;                              // 0x9C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_16;                              // 0x9CC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_17;                              // 0x9D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_18;                              // 0x9D4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFXSystemComponent*                    CallFunc_GetAnimTrailVFXComponent_ReturnValue;     // 0x9D8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UFXSystemComponent*                    CallFunc_GetAnimTrailVFXComponent_ReturnValue_1;   // 0x9E0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              K2Node_DynamicCast_AsCascade_Particle_System_Component_2; // 0x9E8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_6;                     // 0x9F0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_10;                   // 0x9F1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98BD[0x6];                                     // Fixing Size After Last Property..
	class UParticleSystemComponent*              K2Node_DynamicCast_AsCascade_Particle_System_Component_3; // 0x9F8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_7;                     // 0xA00(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_11;                   // 0xA01(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortDualWieldSwingState          CallFunc_GetCurrentSwingState_ReturnValue_1;       // 0xA02(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0xA03(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortDualWieldSwingState          CallFunc_GetCurrentSwingState_ReturnValue_2;       // 0xA04(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_2;                    // 0xA05(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98BE[0x2];                                     // Fixing Size After Last Property..
	struct FHitResult                            K2Node_Event_HitResult;                            // 0xA08(0xE0)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	enum class EPhysicalSurface                  K2Node_Event_ImpactPhysicalSurface;                // 0xAE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98BF[0x7];                                     // Fixing Size After Last Property..
	class UFXSystemComponent*                    K2Node_Event_SpawnedPSC;                           // 0xAF0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_12;                   // 0xAF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BreakHitResult_bBlockingHit;              // 0xAF9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BreakHitResult_bInitialOverlap;           // 0xAFA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98C0[0x1];                                     // Fixing Size After Last Property..
	float                                        CallFunc_BreakHitResult_Time;                      // 0xAFC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakHitResult_Distance;                  // 0xB00(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98C1[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_BreakHitResult_Location;                  // 0xB08(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_ImpactPoint;               // 0xB20(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_Normal;                    // 0xB38(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_ImpactNormal;              // 0xB50(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                     CallFunc_BreakHitResult_PhysMat;                   // 0xB68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BreakHitResult_HitActor;                  // 0xB70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   CallFunc_BreakHitResult_HitComponent;              // 0xB78(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_BreakHitResult_HitBoneName;               // 0xB80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_BreakHitResult_BoneName;                  // 0xB84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_HitItem;                   // 0xB88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_ElementIndex;              // 0xB8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_FaceIndex;                 // 0xB90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98C2[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_BreakHitResult_TraceStart;                // 0xB98(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_TraceEnd;                  // 0xBB0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_MakeRotFromX_ReturnValue;                 // 0xBC8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	enum class EFortDayPhase                     K2Node_CustomEvent_CurrentDayPhase;                // 0xBE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortDayPhase                     K2Node_CustomEvent_PreviousDayPhase;               // 0xBE1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bAtCreation;                    // 0xBE2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98C3[0x5];                                     // Fixing Size After Last Property..
	struct FRotator                              CallFunc_InverseTransformRotation_ReturnValue;     // 0xBE8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0xC00(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98C4[0x3];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Variable_19;                              // 0xC04(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_20;                              // 0xC08(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_CustomEvent_Watched_Kills;                  // 0xC0C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn_1;           // 0xC10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_8;                     // 0xC18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98C5[0x7];                                     // Fixing Size After Last Property..
	class UFortAsyncAction_CosmeticAdaptiveStatWatcher* CallFunc_WatchCosmeticStat_ReturnValue;            // 0xC20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_13;                   // 0xC28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98C6[0x3];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Variable_21;                              // 0xC2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_22;                              // 0xC30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_23;                              // 0xC34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_24;                              // 0xC38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue_2;          // 0xC3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98C7[0x3];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Variable_25;                              // 0xC40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsCosmeticObjectDisplayedInFrontendContext_ReturnValue; // 0xC44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98C8[0x3];                                     // Fixing Size After Last Property..
	struct FRotator                              K2Node_Select_Default;                             // 0xC48(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue_1;     // 0xC60(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_ComposeRotators_ReturnValue;              // 0xCC0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                              CallFunc_TransformRotation_ReturnValue;            // 0xCD8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FHitResult                            CallFunc_K2_SetWorldRotation_SweepHitResult;       // 0xCF0(0xE0)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_IsSingleWielding_ReturnValue;             // 0xDD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsSingleWielding_ReturnValue_1;           // 0xDD1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDualWielding_ReturnValue;               // 0xDD2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98C9[0x1];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Variable_26;                              // 0xDD4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFXSystemComponent*                    CallFunc_GetIdleOffhandVFXComponent_ReturnValue_1; // 0xDD8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsCosmeticObjectDisplayedInFrontendContext_ReturnValue_1; // 0xDE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_14;                   // 0xDE1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98CA[0x6];                                     // Fixing Size After Last Property..
	class UNiagaraComponent*                     K2Node_DynamicCast_AsNiagara_Particle_System_Component; // 0xDE8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_9;                     // 0xDF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98CB[0x3];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Variable_27;                              // 0xDF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFXSystemComponent*                    CallFunc_GetIdleVFXComponent_ReturnValue_1;        // 0xDF8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UFXSystemComponent*                    CallFunc_GetIdleOffhandVFXComponent_ReturnValue_2; // 0xE00(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_15;                   // 0xE08(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_16;                   // 0xE09(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98CC[0x6];                                     // Fixing Size After Last Property..
	class UNiagaraComponent*                     K2Node_DynamicCast_AsNiagara_Particle_System_Component_1; // 0xE10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_10;                    // 0xE18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98CD[0x7];                                     // Fixing Size After Last Property..
	class UFXSystemComponent*                    CallFunc_GetIdleVFXComponent_ReturnValue_2;        // 0xE20(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FInterfaceProperty_                          CallFunc_GetContextualTimeOfDayManager_ReturnValue; // 0xE28(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	enum class EFortDayPhase                     CallFunc_GetPreviousDayPhase_ReturnValue;          // 0xE38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortDayPhase                     CallFunc_GetCurrentDayPhase_ReturnValue;           // 0xE39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_17;                   // 0xE3A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98CE[0x1];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Variable_28;                              // 0xE3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_29;                              // 0xE40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_30;                              // 0xE44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_31;                              // 0xE48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_32;                              // 0xE4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       K2Node_CustomEvent_FortPlayerPawn;                 // 0xE50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_CustomEvent_NewVehicle;                     // 0xE58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_CustomEvent_OldVehicle;                     // 0xE60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDrivingVehicle_ReturnValue;             // 0xE68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsPassengerInVehicle_ReturnValue;         // 0xE69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98CF[0x6];                                     // Fixing Size After Last Property..
	class UFXSystemComponent*                    CallFunc_GetIdleVFXComponent_ReturnValue_3;        // 0xE70(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0xE78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98D0[0x7];                                     // Fixing Size After Last Property..
	class UFXSystemComponent*                    CallFunc_GetIdleOffhandVFXComponent_ReturnValue_3; // 0xE80(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0xE88(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_33;                              // 0xE94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_34;                              // 0xE98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_35;                              // 0xE9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0xEA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98D1[0x3];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Variable_36;                              // 0xEA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_GetInstigator_ReturnValue_2;              // 0xEA8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EPhysicalSurface                  Temp_byte_Variable;                                // 0xEB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98D2[0x7];                                     // Fixing Size After Last Property..
	class AFortPawn*                             K2Node_DynamicCast_AsFort_Pawn_2;                  // 0xEB8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_11;                    // 0xEC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98D3[0x3];                                     // Fixing Size After Last Property..
	int32                                        K2Node_Select_Default_1;                           // 0xEC4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UAnimInstance*                         CallFunc_GetAnimInstance_ReturnValue;              // 0xEC8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAnimMontage*                          CallFunc_GetCurrentActiveMontage_ReturnValue;      // 0xED0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98D4[0x8];                                     // Fixing Size After Last Property..
	struct FTransform                            CallFunc_GetSocketTransform_ReturnValue;           // 0xEE0(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Montage_GetCurrentSection_ReturnValue;    // 0xF40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98D5[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_BreakTransform_Location;                  // 0xF48(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation;                  // 0xF60(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale;                     // 0xF78(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetSectionIndex_ReturnValue;              // 0xF90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98D6[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_BreakVector_X;                            // 0xF98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Y;                            // 0xFA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Z;                            // 0xFA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CallFunc_GetSocketTransform_ReturnValue_1;         // 0xFB0(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x1010(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakTransform_Location_1;                // 0x1018(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation_1;                // 0x1030(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale_1;                   // 0x1048(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x1060(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_X_1;                          // 0x1068(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Y_1;                          // 0x1070(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Z_1;                          // 0x1078(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_2;      // 0x1080(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetSocketLocation_ReturnValue_2;          // 0x1088(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetSocketLocation_ReturnValue_3;          // 0x10A0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAttached_ReturnValue_1;       // 0x10B8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0x10C0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_Conv_VectorToRotator_ReturnValue;         // 0x10D8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	double                                       CallFunc_VSize_ReturnValue;                        // 0x10F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_K2_SetWorldRotation_SweepHitResult_1;     // 0x10F8(0xE0)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_3;      // 0x11D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue_1;        // 0x11E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue_2;        // 0x11E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x11F0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue_3;        // 0x1208(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue_4;        // 0x1210(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue_1;                 // 0x1218(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue_2;                 // 0x1230(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DoesSocketExist_ReturnValue_2;            // 0x1248(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DoesSocketExist_ReturnValue_3;            // 0x1249(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x124A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98D7[0x5];                                     // Fixing Size After Last Property..
	class APawn*                                 CallFunc_GetInstigator_ReturnValue_3;              // 0x1250(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerPawn_Generic_Parent_C*          K2Node_DynamicCast_AsPlayer_Pawn_Generic_Parent;   // 0x1258(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_12;                    // 0x1260(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x1261(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98D8[0xE];                                     // Fixing Size After Last Property..
	struct FTransform                            CallFunc_GetSocketTransform_ReturnValue_2;         // 0x1270(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakTransform_Location_2;                // 0x12D0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation_2;                // 0x12E8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale_2;                   // 0x1300(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        K2Node_Select_Default_2;                           // 0x1318(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98D9[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_BreakVector_X_2;                          // 0x1320(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Y_2;                          // 0x1328(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Z_2;                          // 0x1330(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue_1;           // 0x1338(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CallFunc_GetSocketTransform_ReturnValue_3;         // 0x1340(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue_5;        // 0x13A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakTransform_Location_3;                // 0x13A8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation_3;                // 0x13C0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale_3;                   // 0x13D8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_4;      // 0x13F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_X_3;                          // 0x13F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Y_3;                          // 0x1400(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Z_3;                          // 0x1408(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetSocketLocation_ReturnValue_4;          // 0x1410(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetSocketLocation_ReturnValue_5;          // 0x1428(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              CallFunc_SpawnEmitterAttached_ReturnValue_2;       // 0x1440(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue_1;      // 0x1448(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_Conv_VectorToRotator_ReturnValue_1;       // 0x1460(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	double                                       CallFunc_VSize_ReturnValue_1;                      // 0x1478(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_K2_SetWorldRotation_SweepHitResult_2;     // 0x1480(0xE0)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_5;      // 0x1560(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue_6;        // 0x1568(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue_7;        // 0x1570(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue_3;                 // 0x1578(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue_8;        // 0x1590(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue_9;        // 0x1598(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue_4;                 // 0x15A0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue_5;                 // 0x15B8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DoesSocketExist_ReturnValue_4;            // 0x15D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DoesSocketExist_ReturnValue_5;            // 0x15D1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x15D2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_98DA[0x1];                                     // Fixing Size After Last Property..
	float                                        CallFunc_SetFloatParameter_Param_ImplicitCast;     // 0x15D4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetFloatParameter_Param_ImplicitCast_1;   // 0x15D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetFloatParameter_Param_ImplicitCast_2;   // 0x15DC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetFloatParameter_Param_ImplicitCast_3;   // 0x15E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetFloatParameter_Param_ImplicitCast_4;   // 0x15E4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetFloatParameter_Param_ImplicitCast_5;   // 0x15E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
