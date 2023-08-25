#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// VerseClass VerseAIBase.$SolarisSignatureFunctionOuter
class U_SolarisSignatureFunctionOuter : public UObject
{
public:

	static class UClass* StaticClass();
	static class U_SolarisSignatureFunctionOuter* GetDefaultObj();

};

// 0x31 (0x171 - 0x140)
// VerseClass VerseAIBase.task_VerseAIBase_fort_character_actions_interface$AttackObstacle_L_Nfort__obstacle__info_R
class UTask_VerseAIBase_fort_character_actions_interface_AttackObstacle_L_Nfort__obstacle__info_R : public UConcurrency_task
{
public:
	class UVerseAIBase_fort_character_actions_interface* _Self;                                             // 0x140(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVerseAIBase_fort_obstacle_info       __verse_0xB2CDDD72_Argument;                       // 0x148(0x28)(Parm, NoDestructor)
	enum class EVerseAIBase_action_result        _RetVal;                                           // 0x170(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UTask_VerseAIBase_fort_character_actions_interface_AttackObstacle_L_Nfort__obstacle__info_R* GetDefaultObj();

	int64 Update();
};

// 0x41 (0x181 - 0x140)
// VerseClass VerseAIBase.task_VerseAIBase_fort_character_actions_interface$AttackThreat_L_Nfort__threat__info_R
class UTask_VerseAIBase_fort_character_actions_interface_AttackThreat_L_Nfort__threat__info_R : public UConcurrency_task
{
public:
	class UVerseAIBase_fort_character_actions_interface* _Self;                                             // 0x140(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FAI_fort_threat_info                  __verse_0xB2CDDD72_Argument;                       // 0x148(0x38)(Parm, NoDestructor)
	enum class EVerseAIBase_action_result        _RetVal;                                           // 0x180(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UTask_VerseAIBase_fort_character_actions_interface_AttackThreat_L_Nfort__threat__info_R* GetDefaultObj();

	int64 Update();
};

// 0x31 (0x171 - 0x140)
// VerseClass VerseAIBase.task_VerseAIBase_fort_character_actions_interface$LootObject_L_Nfort__loot__info_R
class UTask_VerseAIBase_fort_character_actions_interface_LootObject_L_Nfort__loot__info_R : public UConcurrency_task
{
public:
	class UVerseAIBase_fort_character_actions_interface* _Self;                                             // 0x140(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVerseAIBase_fort_loot_info           __verse_0xB2CDDD72_Argument;                       // 0x148(0x28)(Parm, NoDestructor)
	enum class EVerseAIBase_action_result        _RetVal;                                           // 0x170(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UTask_VerseAIBase_fort_character_actions_interface_LootObject_L_Nfort__loot__info_R* GetDefaultObj();

	int64 Update();
};

// 0xA (0x14A - 0x140)
// VerseClass VerseAIBase.task_VerseAIBase_fort_character_actions_interface$PlayRandomEmote
class UTask_VerseAIBase_fort_character_actions_interface_PlayRandomEmote : public UConcurrency_task
{
public:
	class UVerseAIBase_fort_character_actions_interface* _Self;                                             // 0x140(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x148(0x1)(Parm, HasGetValueTypeHash)
	enum class EVerseAIBase_action_result        _RetVal;                                           // 0x149(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UTask_VerseAIBase_fort_character_actions_interface_PlayRandomEmote* GetDefaultObj();

	int64 Update();
};

// 0x11 (0x151 - 0x140)
// VerseClass VerseAIBase.task_VerseAIBase_fort_character_actions_interface$Revive_L_Nagent_R
class UTask_VerseAIBase_fort_character_actions_interface_Revive_L_Nagent_R : public UConcurrency_task
{
public:
	class UVerseAIBase_fort_character_actions_interface* _Self;                                             // 0x140(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USimulation_agent*                     __verse_0xB2CDDD72_Argument;                       // 0x148(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EVerseAIBase_fallible_action_result _RetVal;                                           // 0x150(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UTask_VerseAIBase_fort_character_actions_interface_Revive_L_Nagent_R* GetDefaultObj();

	int64 Update();
};

// 0xA (0x14A - 0x140)
// VerseClass VerseAIBase.task_VerseAIBase_fort_character_movement_interface$Crouch
class UTask_VerseAIBase_fort_character_movement_interface_Crouch : public UConcurrency_task
{
public:
	class UVerseAIBase_fort_character_movement_interface* _Self;                                             // 0x140(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x148(0x1)(Parm, HasGetValueTypeHash)
	enum class EVerseAIBase_fallible_action_result _RetVal;                                           // 0x149(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UTask_VerseAIBase_fort_character_movement_interface_Crouch* GetDefaultObj();

	int64 Update();
};

// 0xA (0x14A - 0x140)
// VerseClass VerseAIBase.task_VerseAIBase_fort_character_movement_interface$Jump
class UTask_VerseAIBase_fort_character_movement_interface_Jump : public UConcurrency_task
{
public:
	class UVerseAIBase_fort_character_movement_interface* _Self;                                             // 0x140(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x148(0x1)(Parm, HasGetValueTypeHash)
	enum class EVerseAIBase_action_result        _RetVal;                                           // 0x149(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UTask_VerseAIBase_fort_character_movement_interface_Jump* GetDefaultObj();

	int64 Update();
};

// 0xA (0x14A - 0x140)
// VerseClass VerseAIBase.task_VerseAIBase_fort_character_movement_interface$Slide
class UTask_VerseAIBase_fort_character_movement_interface_Slide : public UConcurrency_task
{
public:
	class UVerseAIBase_fort_character_movement_interface* _Self;                                             // 0x140(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x148(0x1)(Parm, HasGetValueTypeHash)
	enum class EVerseAIBase_action_result        _RetVal;                                           // 0x149(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UTask_VerseAIBase_fort_character_movement_interface_Slide* GetDefaultObj();

	int64 Update();
};

// 0xA (0x14A - 0x140)
// VerseClass VerseAIBase.task_VerseAIBase_fort_character_movement_interface$Sprint
class UTask_VerseAIBase_fort_character_movement_interface_Sprint : public UConcurrency_task
{
public:
	class UVerseAIBase_fort_character_movement_interface* _Self;                                             // 0x140(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x148(0x1)(Parm, HasGetValueTypeHash)
	enum class EVerseAIBase_action_result        _RetVal;                                           // 0x149(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UTask_VerseAIBase_fort_character_movement_interface_Sprint* GetDefaultObj();

	int64 Update();
};

// 0xA (0x14A - 0x140)
// VerseClass VerseAIBase.task_VerseAIBase_fort_character_movement_interface$TacticalSprint
class UTask_VerseAIBase_fort_character_movement_interface_TacticalSprint : public UConcurrency_task
{
public:
	class UVerseAIBase_fort_character_movement_interface* _Self;                                             // 0x140(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x148(0x1)(Parm, HasGetValueTypeHash)
	enum class EVerseAIBase_action_result        _RetVal;                                           // 0x149(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UTask_VerseAIBase_fort_character_movement_interface_TacticalSprint* GetDefaultObj();

	int64 Update();
};

// 0xA (0x14A - 0x140)
// VerseClass VerseAIBase.task_VerseAIBase_fort_character_movement_interface$Walk
class UTask_VerseAIBase_fort_character_movement_interface_Walk : public UConcurrency_task
{
public:
	class UVerseAIBase_fort_character_movement_interface* _Self;                                             // 0x140(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x148(0x1)(Parm, HasGetValueTypeHash)
	enum class EVerseAIBase_action_result        _RetVal;                                           // 0x149(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UTask_VerseAIBase_fort_character_movement_interface_Walk* GetDefaultObj();

	int64 Update();
};

// 0xA (0x14A - 0x140)
// VerseClass VerseAIBase.task_VerseAIBase_fort_navigatable$MoveInRangeToAttack
class UTask_VerseAIBase_fort_navigatable_MoveInRangeToAttack : public UConcurrency_task
{
public:
	class UVerseAIBase_fort_navigatable*         _Self;                                             // 0x140(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x148(0x1)(Parm, HasGetValueTypeHash)
	enum class EVerseAIBase_action_result        _RetVal;                                           // 0x149(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UTask_VerseAIBase_fort_navigatable_MoveInRangeToAttack* GetDefaultObj();

	int64 Update();
};

// 0xA (0x14A - 0x140)
// VerseClass VerseAIBase.task_VerseAIBase_fort_navigatable$RoamAround
class UTask_VerseAIBase_fort_navigatable_RoamAround : public UConcurrency_task
{
public:
	class UVerseAIBase_fort_navigatable*         _Self;                                             // 0x140(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x148(0x1)(Parm, HasGetValueTypeHash)
	enum class EAI_navigation_result             _RetVal;                                           // 0x149(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UTask_VerseAIBase_fort_navigatable_RoamAround* GetDefaultObj();

	int64 Update();
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseAIBase.VerseAIBase
class UVerseAIBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UVerseAIBase* GetDefaultObj();

	FOptionalProperty_ _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_N_Roperator_U_2eGetFortWeaponActions_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument);
	FOptionalProperty_ _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_N_Roperator_U_2eGetFortTargetSelection_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument);
	FOptionalProperty_ _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_N_Roperator_U_2eGetFortObstaclePerception_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument);
	FOptionalProperty_ _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_N_Roperator_U_2eGetFortNavigatable_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument);
	FOptionalProperty_ _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_N_Roperator_U_2eGetFortLootPerception_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument);
	FOptionalProperty_ _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_N_Roperator_U_2eGetFortInventory_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument);
	FOptionalProperty_ _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_N_Roperator_U_2eGetFortCreatureActions_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument);
	FOptionalProperty_ _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_N_Roperator_U_2eGetFortCharacterMovement_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument);
	FOptionalProperty_ _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_N_Roperator_U_2eGetFortCharacterActions_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_N_RMakeNavigationTarget_L_Nfort__loot__info_R(const struct FVerseAIBase_fort_loot_info& __verse_0xB2CDDD72_Argument, uint64 InstancingGraph, class UAI_navigation_target* __verse_0xB482F2DD_CurrentlyInstantiatedObject);
	struct FVerseAIBase_fort_obstacle_info VerseAIBase_fort_obstacle_info_OverrideFactory(TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap);
	struct FVerseAIBase_fort_obstacle_info VerseAIBase_fort_obstacle_info_Factory();
	struct FVerseAIBase_fort_loot_info VerseAIBase_fort_loot_info_OverrideFactory(TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap);
	struct FVerseAIBase_fort_loot_info VerseAIBase_fort_loot_info_Factory();
	struct FVerseAIBase_fort_weapon_descriptor VerseAIBase_fort_weapon_descriptor_OverrideFactory(TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap, FVerseStringProperty_ _ExprResultStack_0, FOptionalProperty_ _ExprResult_1, FVerseStringProperty_ _ExprResultStack_2, FOptionalProperty_ _ExprResult_3, FVerseStringProperty_ _ExprResultStack_4, FOptionalProperty_ _ExprResult_5, FVerseStringProperty_ _ExprResultStack_6, FOptionalProperty_ _ExprResult_7, FVerseStringProperty_ _ExprResultStack_8, FOptionalProperty_ _ExprResult_9, FVerseStringProperty_ _ExprResultStack_10, FOptionalProperty_ _ExprResult_11);
	struct FVerseAIBase_fort_weapon_descriptor VerseAIBase_fort_weapon_descriptor_Factory();
	struct FVerseAIBase_fort_item_descriptor VerseAIBase_fort_item_descriptor_OverrideFactory(TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap);
	struct FVerseAIBase_fort_item_descriptor VerseAIBase_fort_item_descriptor_Factory();
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseAIBase.VerseAIBase_fort_character_actions_interface
class UVerseAIBase_fort_character_actions_interface : public UObject
{
public:

	static class UClass* StaticClass();
	static class UVerseAIBase_fort_character_actions_interface* GetDefaultObj();

	class UConcurrency_task* Revive_L_Nagent_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, class USimulation_agent* __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* PlayRandomEmote(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* LootObject_L_Nfort__loot__info_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FVerseAIBase_fort_loot_info& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* AttackThreat_L_Nfort__threat__info_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FAI_fort_threat_info& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* AttackObstacle_L_Nfort__obstacle__info_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FVerseAIBase_fort_obstacle_info& __verse_0xB2CDDD72_Argument);
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseAIBase.VerseAIBase_fort_character_movement_interface
class UVerseAIBase_fort_character_movement_interface : public UObject
{
public:

	static class UClass* StaticClass();
	static class UVerseAIBase_fort_character_movement_interface* GetDefaultObj();

	class UConcurrency_task* Walk(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* TacticalSprint(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	enum class EVerseAIBase_action_result _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__character__movement__interface_N_RStandUp(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* Sprint(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* Slide(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* Jump(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* Crouch(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseAIBase.VerseAIBase_fort_creature_actions_interface
class UVerseAIBase_fort_creature_actions_interface : public UObject
{
public:

	static class UClass* StaticClass();
	static class UVerseAIBase_fort_creature_actions_interface* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// VerseClass VerseAIBase.VerseAIBase_fort_inventory_interface
class UVerseAIBase_fort_inventory_interface : public UObject
{
public:

	static class UClass* StaticClass();
	static class UVerseAIBase_fort_inventory_interface* GetDefaultObj();

	void _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RUnregisterUseSuggestedWeaponCallback_L_Nint_R(int64 __verse_0xB2CDDD72_Argument);
	int64 _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RRegisterUseSuggestedWeaponCallback_L_Nfort__item__descriptor_Tlogic_R(FVerseFunctionProperty_ __verse_0xB2CDDD72_Argument);
	uint8 _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RIsWeaponEquipped_L_Nfort__item__descriptor_R(const struct FVerseAIBase_fort_item_descriptor& __verse_0xB2CDDD72_Argument);
	FOptionalProperty_ _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RGetWeaponDescriptor_L_Nfort__item__descriptor_R(const struct FVerseAIBase_fort_item_descriptor& __verse_0xB2CDDD72_Argument);
	FOptionalProperty_ _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RGetCurrentWeapon(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	TArray<struct FVerseAIBase_fort_item_descriptor> _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RGetAllItems(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	FOptionalProperty_ _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_REquipWeapon_L_Nfort__item__descriptor_R(const struct FVerseAIBase_fort_item_descriptor& __verse_0xB2CDDD72_Argument);
	uint8 _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RDropItem_L_Nfort__item__descriptor_R(const struct FVerseAIBase_fort_item_descriptor& __verse_0xB2CDDD72_Argument);
	FOptionalProperty_ _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RAddItemToInventory_L_Nfort__inventory__item__asset_M_Nint_R(const struct FTuple_Lfort__inventory__item__asset_Mint_R& __verse_0xB2CDDD72_Argument);
};

// 0x0 (0xC8 - 0xC8)
// VerseClass VerseAIBase.VerseAIBase_fort_inventory_item_asset
class UVerseAIBase_fort_inventory_item_asset : public UAssets_asset
{
public:

	static class UClass* StaticClass();
	static class UVerseAIBase_fort_inventory_item_asset* GetDefaultObj();

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseAIBase.VerseAIBase_fort_item_interface
class UVerseAIBase_fort_item_interface : public UObject
{
public:

	static class UClass* StaticClass();
	static class UVerseAIBase_fort_item_interface* GetDefaultObj();

	uint8 _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__item__interface_N_RHasTag_L_Nfort__item__descriptor_M_Nfort__item__tag_R(const struct FTuple_Lfort__item__descriptor_Mfort__item__tag_R& __verse_0xB2CDDD72_Argument);
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseAIBase.VerseAIBase_fort_item_tag
class UVerseAIBase_fort_item_tag : public UTags_tag
{
public:

	static class UClass* StaticClass();
	static class UVerseAIBase_fort_item_tag* GetDefaultObj();

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseAIBase.VerseAIBase_fort_loot_perception_interface
class UVerseAIBase_fort_loot_perception_interface : public UObject
{
public:

	static class UClass* StaticClass();
	static class UVerseAIBase_fort_loot_perception_interface* GetDefaultObj();

	FOptionalProperty_ _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__loot__perception__interface_N_RGetBestObjectToLoot(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	class UObject* _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__loot__perception__interface_N_RBestObjectTolootChangedEvent(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseAIBase.VerseAIBase_fort_navigatable
class UVerseAIBase_fort_navigatable : public UObject
{
public:

	static class UClass* StaticClass();
	static class UVerseAIBase_fort_navigatable* GetDefaultObj();

	class UConcurrency_task* RoamAround(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* MoveInRangeToAttack(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseAIBase.VerseAIBase_fort_obstacle_perception_interface
class UVerseAIBase_fort_obstacle_perception_interface : public UObject
{
public:

	static class UClass* StaticClass();
	static class UVerseAIBase_fort_obstacle_perception_interface* GetDefaultObj();

	class UObject* _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__obstacle__perception__interface_N_RObstacleChangedEvent(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	FOptionalProperty_ _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__obstacle__perception__interface_N_RGetObstacleInfo(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseAIBase.VerseAIBase_fort_resource_tag
class UVerseAIBase_fort_resource_tag : public UVerseAIBase_fort_item_tag
{
public:

	static class UClass* StaticClass();
	static class UVerseAIBase_fort_resource_tag* GetDefaultObj();

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseAIBase.VerseAIBase_fort_metal_tag
class UVerseAIBase_fort_metal_tag : public UVerseAIBase_fort_resource_tag
{
public:

	static class UClass* StaticClass();
	static class UVerseAIBase_fort_metal_tag* GetDefaultObj();

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseAIBase.VerseAIBase_fort_stone_tag
class UVerseAIBase_fort_stone_tag : public UVerseAIBase_fort_resource_tag
{
public:

	static class UClass* StaticClass();
	static class UVerseAIBase_fort_stone_tag* GetDefaultObj();

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseAIBase.VerseAIBase_fort_target_selection_interface
class UVerseAIBase_fort_target_selection_interface : public UObject
{
public:

	static class UClass* StaticClass();
	static class UVerseAIBase_fort_target_selection_interface* GetDefaultObj();

	FOptionalProperty_ _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__target__selection__interface_N_RGetCurrentThreatInfo(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	class UObject* _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__target__selection__interface_N_RCurrentThreatStatusChangedEvent(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	class UObject* _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__target__selection__interface_N_RCurrentThreatChangedEvent(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseAIBase.VerseAIBase_fort_weapon_actions_interface
class UVerseAIBase_fort_weapon_actions_interface : public UObject
{
public:

	static class UClass* StaticClass();
	static class UVerseAIBase_fort_weapon_actions_interface* GetDefaultObj();

	uint8 _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__weapon__actions__interface_N_RReload(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	uint8 _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__weapon__actions__interface_N_RMeleeAttack(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	uint8 _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__weapon__actions__interface_N_RFire(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseAIBase.VerseAIBase_fort_weapon_tag
class UVerseAIBase_fort_weapon_tag : public UVerseAIBase_fort_item_tag
{
public:

	static class UClass* StaticClass();
	static class UVerseAIBase_fort_weapon_tag* GetDefaultObj();

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseAIBase.VerseAIBase_fort_melee_weapon_tag
class UVerseAIBase_fort_melee_weapon_tag : public UVerseAIBase_fort_weapon_tag
{
public:

	static class UClass* StaticClass();
	static class UVerseAIBase_fort_melee_weapon_tag* GetDefaultObj();

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseAIBase.VerseAIBase_fort_pickaxe_tag
class UVerseAIBase_fort_pickaxe_tag : public UVerseAIBase_fort_melee_weapon_tag
{
public:

	static class UClass* StaticClass();
	static class UVerseAIBase_fort_pickaxe_tag* GetDefaultObj();

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseAIBase.VerseAIBase_fort_range_weapon_tag
class UVerseAIBase_fort_range_weapon_tag : public UVerseAIBase_fort_weapon_tag
{
public:

	static class UClass* StaticClass();
	static class UVerseAIBase_fort_range_weapon_tag* GetDefaultObj();

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseAIBase.VerseAIBase_fort_biplane_gun_tag
class UVerseAIBase_fort_biplane_gun_tag : public UVerseAIBase_fort_range_weapon_tag
{
public:

	static class UClass* StaticClass();
	static class UVerseAIBase_fort_biplane_gun_tag* GetDefaultObj();

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseAIBase.VerseAIBase_fort_bow_tag
class UVerseAIBase_fort_bow_tag : public UVerseAIBase_fort_range_weapon_tag
{
public:

	static class UClass* StaticClass();
	static class UVerseAIBase_fort_bow_tag* GetDefaultObj();

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseAIBase.VerseAIBase_fort_grenade_launcher_tag
class UVerseAIBase_fort_grenade_launcher_tag : public UVerseAIBase_fort_range_weapon_tag
{
public:

	static class UClass* StaticClass();
	static class UVerseAIBase_fort_grenade_launcher_tag* GetDefaultObj();

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseAIBase.VerseAIBase_fort_LMG_tag
class UVerseAIBase_fort_LMG_tag : public UVerseAIBase_fort_range_weapon_tag
{
public:

	static class UClass* StaticClass();
	static class UVerseAIBase_fort_LMG_tag* GetDefaultObj();

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseAIBase.VerseAIBase_fort_mini_gun_tag
class UVerseAIBase_fort_mini_gun_tag : public UVerseAIBase_fort_range_weapon_tag
{
public:

	static class UClass* StaticClass();
	static class UVerseAIBase_fort_mini_gun_tag* GetDefaultObj();

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseAIBase.VerseAIBase_fort_pistol_tag
class UVerseAIBase_fort_pistol_tag : public UVerseAIBase_fort_range_weapon_tag
{
public:

	static class UClass* StaticClass();
	static class UVerseAIBase_fort_pistol_tag* GetDefaultObj();

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseAIBase.VerseAIBase_fort_rifle_tag
class UVerseAIBase_fort_rifle_tag : public UVerseAIBase_fort_range_weapon_tag
{
public:

	static class UClass* StaticClass();
	static class UVerseAIBase_fort_rifle_tag* GetDefaultObj();

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseAIBase.VerseAIBase_fort_rocket_launcher_tag
class UVerseAIBase_fort_rocket_launcher_tag : public UVerseAIBase_fort_range_weapon_tag
{
public:

	static class UClass* StaticClass();
	static class UVerseAIBase_fort_rocket_launcher_tag* GetDefaultObj();

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseAIBase.VerseAIBase_fort_shotgun_tag
class UVerseAIBase_fort_shotgun_tag : public UVerseAIBase_fort_range_weapon_tag
{
public:

	static class UClass* StaticClass();
	static class UVerseAIBase_fort_shotgun_tag* GetDefaultObj();

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseAIBase.VerseAIBase_fort_SMG_tag
class UVerseAIBase_fort_SMG_tag : public UVerseAIBase_fort_range_weapon_tag
{
public:

	static class UClass* StaticClass();
	static class UVerseAIBase_fort_SMG_tag* GetDefaultObj();

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseAIBase.VerseAIBase_fort_sniper_tag
class UVerseAIBase_fort_sniper_tag : public UVerseAIBase_fort_range_weapon_tag
{
public:

	static class UClass* StaticClass();
	static class UVerseAIBase_fort_sniper_tag* GetDefaultObj();

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseAIBase.VerseAIBase_fort_wood_tag
class UVerseAIBase_fort_wood_tag : public UVerseAIBase_fort_resource_tag
{
public:

	static class UClass* StaticClass();
	static class UVerseAIBase_fort_wood_tag* GetDefaultObj();

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseAIBase.VerseAIBase_FortCreatureActionsModule
class UVerseAIBase_FortCreatureActionsModule : public UObject
{
public:

	static class UClass* StaticClass();
	static class UVerseAIBase_FortCreatureActionsModule* GetDefaultObj();

	class UGame_Abilities_gameplay_ability_asset* _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2fFortCreatureActionsModule_N_RGetGameplayAbility_L_N_Kchar_R(FVerseStringProperty_ __verse_0xB2CDDD72_Argument, FVerseDynamicProperty_ _ExprResultStack_0, FVerseFunctionProperty_ _Callee_1, const struct FTuple_Lgameplay__ability__asset_M_Kchar_R& _ExprResult_2, FVerseDynamicProperty_ _ExprResultStack_3, FVerseFunctionProperty_ _Callee_4, const struct FTuple_Lgameplay__ability__asset_M_Kchar_R& _ExprResult_5);
	void _InitCDO();
};

}


