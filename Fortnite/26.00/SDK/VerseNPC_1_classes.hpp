#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// VerseClass VerseNPC.$SolarisSignatureFunctionOuter
class U_SolarisSignatureFunctionOuter : public UObject
{
public:

	static class UClass* StaticClass();
	static class U_SolarisSignatureFunctionOuter* GetDefaultObj();

};

// 0x31 (0x171 - 0x140)
// VerseClass VerseNPC.task_VerseNPC_npc_component$AttackObstacle_L_Nfort__obstacle__info_R
class UTask_VerseNPC_npc_component_AttackObstacle_L_Nfort__obstacle__info_R : public UConcurrency_task
{
public:
	class UVerseNPC_npc_component*               _Self;                                             // 0x140(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVerseAIBase_fort_obstacle_info       __verse_0xB2CDDD72_Argument;                       // 0x148(0x28)(Parm, NoDestructor)
	enum class EVerseAIBase_action_result        _RetVal;                                           // 0x170(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UTask_VerseNPC_npc_component_AttackObstacle_L_Nfort__obstacle__info_R* GetDefaultObj();

	int64 Update();
};

// 0x41 (0x181 - 0x140)
// VerseClass VerseNPC.task_VerseNPC_npc_component$AttackThreat_L_Nfort__threat__info_R
class UTask_VerseNPC_npc_component_AttackThreat_L_Nfort__threat__info_R : public UConcurrency_task
{
public:
	class UVerseNPC_npc_component*               _Self;                                             // 0x140(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FAI_fort_threat_info                  __verse_0xB2CDDD72_Argument;                       // 0x148(0x38)(Parm, NoDestructor)
	enum class EVerseAIBase_action_result        _RetVal;                                           // 0x180(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UTask_VerseNPC_npc_component_AttackThreat_L_Nfort__threat__info_R* GetDefaultObj();

	int64 Update();
};

// 0xA (0x14A - 0x140)
// VerseClass VerseNPC.task_VerseNPC_npc_component$Crouch
class UTask_VerseNPC_npc_component_Crouch : public UConcurrency_task
{
public:
	class UVerseNPC_npc_component*               _Self;                                             // 0x140(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x148(0x1)(Parm, HasGetValueTypeHash)
	enum class EVerseAIBase_fallible_action_result _RetVal;                                           // 0x149(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UTask_VerseNPC_npc_component_Crouch* GetDefaultObj();

	int64 Update();
};

// 0xA (0x14A - 0x140)
// VerseClass VerseNPC.task_VerseNPC_npc_component$Jump
class UTask_VerseNPC_npc_component_Jump : public UConcurrency_task
{
public:
	class UVerseNPC_npc_component*               _Self;                                             // 0x140(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x148(0x1)(Parm, HasGetValueTypeHash)
	enum class EVerseAIBase_action_result        _RetVal;                                           // 0x149(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UTask_VerseNPC_npc_component_Jump* GetDefaultObj();

	int64 Update();
};

// 0x31 (0x171 - 0x140)
// VerseClass VerseNPC.task_VerseNPC_npc_component$LootObject_L_Nfort__loot__info_R
class UTask_VerseNPC_npc_component_LootObject_L_Nfort__loot__info_R : public UConcurrency_task
{
public:
	class UVerseNPC_npc_component*               _Self;                                             // 0x140(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVerseAIBase_fort_loot_info           __verse_0xB2CDDD72_Argument;                       // 0x148(0x28)(Parm, NoDestructor)
	enum class EVerseAIBase_action_result        _RetVal;                                           // 0x170(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UTask_VerseNPC_npc_component_LootObject_L_Nfort__loot__info_R* GetDefaultObj();

	int64 Update();
};

// 0x10 (0x150 - 0x140)
// VerseClass VerseNPC.task_VerseNPC_npc_component$MaintainFocus_L_Nagent_R
class UTask_VerseNPC_npc_component_MaintainFocus_L_Nagent_R : public UConcurrency_task
{
public:
	class UVerseNPC_npc_component*               _Self;                                             // 0x140(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USimulation_agent*                     __verse_0xB2CDDD72_Argument;                       // 0x148(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UTask_VerseNPC_npc_component_MaintainFocus_L_Nagent_R* GetDefaultObj();

	int64 Update();
};

// 0x20 (0x160 - 0x140)
// VerseClass VerseNPC.task_VerseNPC_npc_component$MaintainFocus_L_Nvector3_R
class UTask_VerseNPC_npc_component_MaintainFocus_L_Nvector3_R : public UConcurrency_task
{
public:
	class UVerseNPC_npc_component*               _Self;                                             // 0x140(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FSpatialMath_vector3                  __verse_0xB2CDDD72_Argument;                       // 0x148(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UTask_VerseNPC_npc_component_MaintainFocus_L_Nvector3_R* GetDefaultObj();

	int64 Update();
};

// 0xA (0x14A - 0x140)
// VerseClass VerseNPC.task_VerseNPC_npc_component$MoveInRangeToAttack
class UTask_VerseNPC_npc_component_MoveInRangeToAttack : public UConcurrency_task
{
public:
	class UVerseNPC_npc_component*               _Self;                                             // 0x140(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x148(0x1)(Parm, HasGetValueTypeHash)
	enum class EVerseAIBase_action_result        _RetVal;                                           // 0x149(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UTask_VerseNPC_npc_component_MoveInRangeToAttack* GetDefaultObj();

	int64 Update();
};

// 0x29 (0x169 - 0x140)
// VerseClass VerseNPC.task_VerseNPC_npc_component$NavigateTo_L_Nnavigation__target_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R
class UTask_VerseNPC_npc_component_NavigateTo_L_Nnavigation__target_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R : public UConcurrency_task
{
public:
	class UVerseNPC_npc_component*               _Self;                                             // 0x140(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_Lnavigation__target_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R __verse_0xB2CDDD72_Argument;                       // 0x148(0x1A)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_5FEF[0x6];                                     // Fixing Size After Last Property 
	enum class EAI_navigation_result             _RetVal;                                           // 0x168(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UTask_VerseNPC_npc_component_NavigateTo_L_Nnavigation__target_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R* GetDefaultObj();

	int64 Update();
};

// 0xA (0x14A - 0x140)
// VerseClass VerseNPC.task_VerseNPC_npc_component$PlayRandomEmote
class UTask_VerseNPC_npc_component_PlayRandomEmote : public UConcurrency_task
{
public:
	class UVerseNPC_npc_component*               _Self;                                             // 0x140(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x148(0x1)(Parm, HasGetValueTypeHash)
	enum class EVerseAIBase_action_result        _RetVal;                                           // 0x149(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UTask_VerseNPC_npc_component_PlayRandomEmote* GetDefaultObj();

	int64 Update();
};

// 0x11 (0x151 - 0x140)
// VerseClass VerseNPC.task_VerseNPC_npc_component$Revive_L_Nagent_R
class UTask_VerseNPC_npc_component_Revive_L_Nagent_R : public UConcurrency_task
{
public:
	class UVerseNPC_npc_component*               _Self;                                             // 0x140(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USimulation_agent*                     __verse_0xB2CDDD72_Argument;                       // 0x148(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EVerseAIBase_fallible_action_result _RetVal;                                           // 0x150(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UTask_VerseNPC_npc_component_Revive_L_Nagent_R* GetDefaultObj();

	int64 Update();
};

// 0xA (0x14A - 0x140)
// VerseClass VerseNPC.task_VerseNPC_npc_component$RoamAround
class UTask_VerseNPC_npc_component_RoamAround : public UConcurrency_task
{
public:
	class UVerseNPC_npc_component*               _Self;                                             // 0x140(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x148(0x1)(Parm, HasGetValueTypeHash)
	enum class EAI_navigation_result             _RetVal;                                           // 0x149(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UTask_VerseNPC_npc_component_RoamAround* GetDefaultObj();

	int64 Update();
};

// 0xA (0x14A - 0x140)
// VerseClass VerseNPC.task_VerseNPC_npc_component$Slide
class UTask_VerseNPC_npc_component_Slide : public UConcurrency_task
{
public:
	class UVerseNPC_npc_component*               _Self;                                             // 0x140(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x148(0x1)(Parm, HasGetValueTypeHash)
	enum class EVerseAIBase_action_result        _RetVal;                                           // 0x149(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UTask_VerseNPC_npc_component_Slide* GetDefaultObj();

	int64 Update();
};

// 0xA (0x14A - 0x140)
// VerseClass VerseNPC.task_VerseNPC_npc_component$Sprint
class UTask_VerseNPC_npc_component_Sprint : public UConcurrency_task
{
public:
	class UVerseNPC_npc_component*               _Self;                                             // 0x140(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x148(0x1)(Parm, HasGetValueTypeHash)
	enum class EVerseAIBase_action_result        _RetVal;                                           // 0x149(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UTask_VerseNPC_npc_component_Sprint* GetDefaultObj();

	int64 Update();
};

// 0xA (0x14A - 0x140)
// VerseClass VerseNPC.task_VerseNPC_npc_component$TacticalSprint
class UTask_VerseNPC_npc_component_TacticalSprint : public UConcurrency_task
{
public:
	class UVerseNPC_npc_component*               _Self;                                             // 0x140(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x148(0x1)(Parm, HasGetValueTypeHash)
	enum class EVerseAIBase_action_result        _RetVal;                                           // 0x149(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UTask_VerseNPC_npc_component_TacticalSprint* GetDefaultObj();

	int64 Update();
};

// 0x18 (0x158 - 0x140)
// VerseClass VerseNPC.task_VerseNPC_npc_component$Wait_L_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R
class UTask_VerseNPC_npc_component_Wait_L_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R : public UConcurrency_task
{
public:
	class UVerseNPC_npc_component*               _Self;                                             // 0x140(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FOptionalProperty_                           __verse_0xB2CDDD72_Argument;                       // 0x148(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UTask_VerseNPC_npc_component_Wait_L_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R* GetDefaultObj();

	int64 Update();
};

// 0xA (0x14A - 0x140)
// VerseClass VerseNPC.task_VerseNPC_npc_component$Walk
class UTask_VerseNPC_npc_component_Walk : public UConcurrency_task
{
public:
	class UVerseNPC_npc_component*               _Self;                                             // 0x140(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x148(0x1)(Parm, HasGetValueTypeHash)
	enum class EVerseAIBase_action_result        _RetVal;                                           // 0x149(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UTask_VerseNPC_npc_component_Walk* GetDefaultObj();

	int64 Update();
};

// 0xC8 (0x160 - 0x98)
// VerseClass VerseNPC.VerseNPC_inventory_component
class UVerseNPC_inventory_component : public UInventoryComponentBase
{
public:
	FVerseFunctionProperty_                      __verse_0x55D5AF48__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RAddItemToInventory_L_Nfort__inventory__item__asset_M_Nint_R; // 0x98(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x7388F5F7__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RGetAllItems; // 0xA8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x011710B3__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RDropItem_L_Nfort__item__descriptor_R; // 0xB8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x5EDD40A0__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RGetCurrentWeapon; // 0xC8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xCAF8BDA2__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_REquipWeapon_L_Nfort__item__descriptor_R; // 0xD8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x7247ECB0__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RIsWeaponEquipped_L_Nfort__item__descriptor_R; // 0xE8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x353458B7__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RGetWeaponDescriptor_L_Nfort__item__descriptor_R; // 0xF8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x677C715F__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RRegisterUseSuggestedWeaponCallback_L_Nfort__item__descriptor_Tlogic_R; // 0x108(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x52D1687A__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RUnregisterUseSuggestedWeaponCallback_L_Nint_R; // 0x118(0x10)(InstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_6006[0x38];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UVerseNPC_inventory_component* GetDefaultObj();

	void _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RUnregisterUseSuggestedWeaponCallback_L_Nint_R(int64 __verse_0xB2CDDD72_Argument);
	int64 _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RRegisterUseSuggestedWeaponCallback_L_Nfort__item__descriptor_Tlogic_R(FVerseFunctionProperty_ __verse_0xB2CDDD72_Argument);
	uint8 _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RIsWeaponEquipped_L_Nfort__item__descriptor_R(const struct FVerseAIBase_fort_item_descriptor& __verse_0xB2CDDD72_Argument);
	FOptionalProperty_ _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RGetWeaponDescriptor_L_Nfort__item__descriptor_R(const struct FVerseAIBase_fort_item_descriptor& __verse_0xB2CDDD72_Argument);
	FOptionalProperty_ _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RGetCurrentWeapon(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	TArray<struct FVerseAIBase_fort_item_descriptor> _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RGetAllItems(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	FOptionalProperty_ _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_REquipWeapon_L_Nfort__item__descriptor_R(const struct FVerseAIBase_fort_item_descriptor& __verse_0xB2CDDD72_Argument);
	uint8 _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RDropItem_L_Nfort__item__descriptor_R(const struct FVerseAIBase_fort_item_descriptor& __verse_0xB2CDDD72_Argument);
	FOptionalProperty_ _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RAddItemToInventory_L_Nfort__inventory__item__asset_M_Nint_R(const struct FTuple_Lfort__inventory__item__asset_Mint_R& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x30 (0xC0 - 0x90)
// VerseClass VerseNPC.VerseNPC_leash_component
class UVerseNPC_leash_component : public ULeashComponentBase
{
public:
	FVerseFunctionProperty_                      __verse_0xC2A62123__L_2fFortnite_2ecom_2fAI_2ffort__leashable_N_RSetLeashPosition_L_Nvector3_M_Nfloat_M_Nfloat_R; // 0x90(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x57363ACF__L_2fFortnite_2ecom_2fAI_2ffort__leashable_N_RSetLeashAgent_L_Nagent_M_Nfloat_M_Nfloat_R; // 0xA0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x06D72000__L_2fFortnite_2ecom_2fAI_2ffort__leashable_N_RClearLeash; // 0xB0(0x10)(InstancedReference, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UVerseNPC_leash_component* GetDefaultObj();

	void _L_2fFortnite_2ecom_2fAI_2ffort__leashable_N_RSetLeashPosition_L_Nvector3_M_Nfloat_M_Nfloat_R(const struct FTuple_Lvector3_Mfloat_Mfloat_R& __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fAI_2ffort__leashable_N_RSetLeashAgent_L_Nagent_M_Nfloat_M_Nfloat_R(const struct FTuple_Lagent_Mfloat_Mfloat_R& __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fAI_2ffort__leashable_N_RClearLeash(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x170 (0x220 - 0xB0)
// VerseClass VerseNPC.VerseNPC_npc_component
class UVerseNPC_npc_component : public UAIActionsComponent
{
public:
	FVerseFunctionProperty_                      __verse_0xA9D01BCC_RoamAround;                     // 0xB0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x514829C1_MoveInRangeToAttack;            // 0xC0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xE4D0BB73_Crouch;                         // 0xD0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xD59E8F01_Walk;                           // 0xE0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x19F8ABA1_Sprint;                         // 0xF0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xCB7DDA42_TacticalSprint;                 // 0x100(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x91E44EAA_Jump;                           // 0x110(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xD27C8306_Slide;                          // 0x120(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xCE057ADF__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__character__movement__interface_N_RStandUp; // 0x130(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x9765CB04_PlayRandomEmote;                // 0x140(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x75C586C9_Revive_L_Nagent_R;              // 0x150(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x3C8F838B_LootObject_L_Nfort__loot__info_R; // 0x160(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x276F9F03_AttackThreat_L_Nfort__threat__info_R; // 0x170(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x7421E7C0_AttackObstacle_L_Nfort__obstacle__info_R; // 0x180(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x1EAD0FC6_MaintainFocus_L_Nvector3_R;     // 0x190(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x0A187AEF_MaintainFocus_L_Nagent_R;       // 0x1A0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x96D81014__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__weapon__actions__interface_N_RFire; // 0x1B0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x48209BC3__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__weapon__actions__interface_N_RReload; // 0x1C0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x3B37FA9B__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__weapon__actions__interface_N_RMeleeAttack; // 0x1D0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x122D082A__L_2fFortnite_2ecom_2fAI_2fnavigatable_N_RGetCurrentDestination; // 0x1E0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x1B82C516_NavigateTo_L_Nnavigation__target_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R; // 0x1F0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xD5205DFA__L_2fFortnite_2ecom_2fAI_2fnavigatable_N_RStopNavigation; // 0x200(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x0413F356_Wait_L_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R; // 0x210(0x10)(InstancedReference, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UVerseNPC_npc_component* GetDefaultObj();

	class UConcurrency_task* Walk(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* Wait_L_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, FOptionalProperty_ __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* TacticalSprint(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fAI_2fnavigatable_N_RStopNavigation(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	enum class EVerseAIBase_action_result _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__character__movement__interface_N_RStandUp(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* Sprint(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* Slide(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* RoamAround(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* Revive_L_Nagent_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, class USimulation_agent* __verse_0xB2CDDD72_Argument);
	uint8 _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__weapon__actions__interface_N_RReload(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* PlayRandomEmote(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* NavigateTo_L_Nnavigation__target_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_Lnavigation__target_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* MoveInRangeToAttack(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	uint8 _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__weapon__actions__interface_N_RMeleeAttack(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* MaintainFocus_L_Nvector3_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FSpatialMath_vector3& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* MaintainFocus_L_Nagent_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, class USimulation_agent* __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* LootObject_L_Nfort__loot__info_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FVerseAIBase_fort_loot_info& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* Jump(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	FOptionalProperty_ _L_2fFortnite_2ecom_2fAI_2fnavigatable_N_RGetCurrentDestination(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	uint8 _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__weapon__actions__interface_N_RFire(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* Crouch(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* AttackThreat_L_Nfort__threat__info_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FAI_fort_threat_info& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* AttackObstacle_L_Nfort__obstacle__info_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FVerseAIBase_fort_obstacle_info& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0xF8 (0x198 - 0xA0)
// VerseClass VerseNPC.VerseNPC_npc_perception_component
class UVerseNPC_npc_perception_component : public UNPCPerceptionComponentBase
{
public:
	uint8                                        Pad_6075[0x30];                                    // Fixing Size After Last Property 
	FVerseFunctionProperty_                      __verse_0xBE0E0DB9__L_2fFortnite_2ecom_2fAI_2ffort__threat__perception__interface_N_RGetThreatsInfo; // 0xD0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x62C24FB7__L_2fFortnite_2ecom_2fAI_2ffort__threat__perception__interface_N_RGetThreatInfo_L_Nagent_R; // 0xE0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x47C9249E__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__obstacle__perception__interface_N_RGetObstacleInfo; // 0xF0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xE7FD7E10__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__obstacle__perception__interface_N_RObstacleChangedEvent; // 0x100(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x6C1D2881__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__loot__perception__interface_N_RGetBestObjectToLoot; // 0x110(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x075D6F58__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__loot__perception__interface_N_RBestObjectTolootChangedEvent; // 0x120(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xB19B8A20__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__target__selection__interface_N_RGetCurrentThreatInfo; // 0x130(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x1227628E__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__target__selection__interface_N_RCurrentThreatChangedEvent; // 0x140(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xA7CF47A6__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__target__selection__interface_N_RCurrentThreatStatusChangedEvent; // 0x150(0x10)(InstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_6079[0x18];                                    // Fixing Size After Last Property 
	class UVerseEngine_subscribable_event*       __verse_0xB7573589_ObstacleChangedEventInternal;   // 0x178(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerseEngine_subscribable_event*       __verse_0x1F8E9B61_BestObjectToLootChangedEventInternal; // 0x180(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerseEngine_subscribable_event*       __verse_0xE0E8A985_CurrentThreatChangedEventInternal; // 0x188(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerseEngine_subscribable_event*       __verse_0x12343732_CurrentThreatStatusChangedEventInternal; // 0x190(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UVerseNPC_npc_perception_component* GetDefaultObj();

	class UObject* _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__obstacle__perception__interface_N_RObstacleChangedEvent(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	FOptionalProperty_ _L_2fFortnite_2ecom_2fAI_2ffort__threat__perception__interface_N_RGetThreatsInfo(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	FOptionalProperty_ _L_2fFortnite_2ecom_2fAI_2ffort__threat__perception__interface_N_RGetThreatInfo_L_Nagent_R(class USimulation_agent* __verse_0xB2CDDD72_Argument);
	FOptionalProperty_ _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__obstacle__perception__interface_N_RGetObstacleInfo(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	FOptionalProperty_ _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__target__selection__interface_N_RGetCurrentThreatInfo(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	FOptionalProperty_ _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__loot__perception__interface_N_RGetBestObjectToLoot(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	class UObject* _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__target__selection__interface_N_RCurrentThreatStatusChangedEvent(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	class UObject* _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__target__selection__interface_N_RCurrentThreatChangedEvent(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	class UObject* _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__loot__perception__interface_N_RBestObjectTolootChangedEvent(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO(class UVerseEngine_subscribable_event* _ExprResult_0, uint64 _InstancingGraph_1, class UVerseEngine_subscribable_event* _ExprResult_2, uint64 _InstancingGraph_3, class UVerseEngine_subscribable_event* _ExprResult_4, uint64 _InstancingGraph_5, class UVerseEngine_subscribable_event* _ExprResult_6, uint64 _InstancingGraph_7, class UVerseEngine_subscribable_event* _ExprResult_8, uint64 _InstancingGraph_9, class UVerseEngine_subscribable_event* _ExprResult_10, uint64 _InstancingGraph_11, class UVerseEngine_subscribable_event* _ExprResult_12, uint64 _InstancingGraph_13, class UVerseEngine_subscribable_event* _ExprResult_14, uint64 _InstancingGraph_15);
};

}


