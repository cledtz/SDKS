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

// 0x9 (0x9 - 0x0)
// Function VerseFortniteGameplayAbilities.Game_Abilities_ability_component._L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__component_N_RRemoveAbility_L_Ngameplay__ability__asset_R
struct UGame_Abilities_ability_component__L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__component_N_RRemoveAbility_L_Ngameplay__ability__asset_R_Params
{
public:
	class UGame_Abilities_gameplay_ability_asset* __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EGame_Abilities_remove_ability_result RetVal;                                            // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function VerseFortniteGameplayAbilities.Game_Abilities_ability_component._L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__component_N_RApplyGameplayEffect_L_Ngameplay__effect__asset_M_Nfloat_R
struct UGame_Abilities_ability_component__L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__component_N_RApplyGameplayEffect_L_Ngameplay__effect__asset_M_Nfloat_R_Params
{
public:
	struct FTuple_Lgameplay__effect__asset_Mfloat_R __verse_0xB2CDDD72_Argument;                       // 0x0(0x10)(Parm, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function VerseFortniteGameplayAbilities.Game_Abilities_ability_component._L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__component_N_RAddAbility_L_Ngameplay__ability__asset_R
struct UGame_Abilities_ability_component__L_2fFortnite_2ecom_2fGame_2fAbilities_2fability__component_N_RAddAbility_L_Ngameplay__ability__asset_R_Params
{
public:
	class UGame_Abilities_gameplay_ability_asset* __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EGame_Abilities_add_ability_result RetVal;                                            // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x45 (0x45 - 0x0)
// Function VerseFortniteGameplayAbilities.Game_Abilities_ability_component.ActivateAbility_L_Ngameplay__ability__asset_M_N_QTarget_N_Qagent_20_3d_20_2e_2e_2e_R
struct UGame_Abilities_ability_component_ActivateAbility_L_Ngameplay__ability__asset_M_N_QTarget_N_Qagent_20_3d_20_2e_2e_2e_R_Params
{
public:
	class UConcurrency_task*                     __verse_0xC1E81372_CallingTask;                    // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int64                                        __verse_0xA3A00DDB_CallerResumeState;              // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        __verse_0x2AC0E4D8_CallerCancelState;              // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTuple_Lgameplay__ability__asset_M_QTarget_N_Qagent_20_3d_20_2e_2e_2e_R __verse_0xB2CDDD72_Argument;                       // 0x18(0x18)(Parm, HasGetValueTypeHash)
	class UConcurrency_task*                     RetVal;                                            // 0x30(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_0;                                     // 0x38(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x00000000__1;                             // 0x40(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _ExprResult_1 : 1;                                 // Mask: 0x1, PropSize: 0x10x42(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_47F : 7;                                    // Fixing Bit-Field Size..
	FOptionProperty_                             _ExprResultStack_2;                                // 0x43(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function VerseFortniteGameplayAbilities.Game_Abilities_ability_component.$InitInstance
struct UGame_Abilities_ability_component__InitInstance_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VerseFortniteGameplayAbilities.Game_Abilities_ability_component.$Block
struct UGame_Abilities_ability_component__Block_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VerseFortniteGameplayAbilities.Game_Abilities_ability_component.$InitCDO
struct UGame_Abilities_ability_component__InitCDO_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function VerseFortniteGameplayAbilities.Game_Abilities_AbilityComponent._L_2fFortnite_2ecom_2fGame_2fAbilities_2fAbilityComponent_N_RGetAbilityComponentForPlayer_L_Nplayer__component_R
struct UGame_Abilities_AbilityComponent__L_2fFortnite_2ecom_2fGame_2fAbilities_2fAbilityComponent_N_RGetAbilityComponentForPlayer_L_Nplayer__component_R_Params
{
public:
	class USimulation_player_component*          __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             RetVal;                                            // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function VerseFortniteGameplayAbilities.Game_Abilities_AbilityComponent._L_2fFortnite_2ecom_2fGame_2fAbilities_2fAbilityComponent_N_RGetAbilityComponentForCharacter_L_Nfort__character_R
struct UGame_Abilities_AbilityComponent__L_2fFortnite_2ecom_2fGame_2fAbilities_2fAbilityComponent_N_RGetAbilityComponentForCharacter_L_Nfort__character_R_Params
{
public:
	class UObject*                               __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             RetVal;                                            // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function VerseFortniteGameplayAbilities.Game_Abilities_AbilityComponent.$InitCDO
struct UGame_Abilities_AbilityComponent__InitCDO_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VerseFortniteGameplayAbilities.Game_Abilities_gameplay_ability_asset.$InitInstance
struct UGame_Abilities_gameplay_ability_asset__InitInstance_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VerseFortniteGameplayAbilities.Game_Abilities_gameplay_ability_asset.$Block
struct UGame_Abilities_gameplay_ability_asset__Block_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VerseFortniteGameplayAbilities.Game_Abilities_gameplay_ability_asset.$InitCDO
struct UGame_Abilities_gameplay_ability_asset__InitCDO_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VerseFortniteGameplayAbilities.Game_Abilities_gameplay_effect_asset.$InitInstance
struct UGame_Abilities_gameplay_effect_asset__InitInstance_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VerseFortniteGameplayAbilities.Game_Abilities_gameplay_effect_asset.$Block
struct UGame_Abilities_gameplay_effect_asset__Block_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VerseFortniteGameplayAbilities.Game_Abilities_gameplay_effect_asset.$InitCDO
struct UGame_Abilities_gameplay_effect_asset__InitCDO_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function VerseFortniteGameplayAbilities.task_Game_Abilities_ability_component$ActivateAbility_L_Ngameplay__ability__asset_M_N_QTarget_N_Qagent_20_3d_20_2e_2e_2e_R.Update
struct UTask_Game_Abilities_ability_component_ActivateAbility_L_Ngameplay__ability__asset_M_N_QTarget_N_Qagent_20_3d_20_2e_2e_2e_R_Update_Params
{
public:
	int64                                        RetVal;                                            // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
