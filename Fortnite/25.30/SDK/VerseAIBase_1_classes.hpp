#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

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

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("$SolarisSignatureFunctionOuter");
		return Clss;
	}

};

// 0x9 (0x159 - 0x150)
// VerseClass VerseAIBase.task_VerseAIBase_ai_behavior$OnBegin
class UTask_VerseAIBase_ai_behavior_OnBegin : public UConcurrency_task
{
public:
	class UVerseAIBase_ai_behavior*              _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x158(0x1)(Parm, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_VerseAIBase_ai_behavior$OnBegin");
		return Clss;
	}

	int64 Update();
};

// 0x31 (0x181 - 0x150)
// VerseClass VerseAIBase.task_VerseAIBase_fort_character_actions_interface$AttackObstacle_L_Nfort__obstacle__info_R
class UTask_VerseAIBase_fort_character_actions_interface_AttackObstacle_L_Nfort__obstacle__info_R : public UConcurrency_task
{
public:
	class UVerseAIBase_fort_character_actions_interface* _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVerseAIBase_fort_obstacle_info       __verse_0xB2CDDD72_Argument;                       // 0x158(0x28)(Parm, NoDestructor)
	enum class EVerseAIBase_action_result        _RetVal;                                           // 0x180(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_VerseAIBase_fort_character_actions_interface$AttackObstacle_L_Nfort__obstacle__info_R");
		return Clss;
	}

	int64 Update();
};

// 0x41 (0x191 - 0x150)
// VerseClass VerseAIBase.task_VerseAIBase_fort_character_actions_interface$AttackThreat_L_Nfort__threat__info_R
class UTask_VerseAIBase_fort_character_actions_interface_AttackThreat_L_Nfort__threat__info_R : public UConcurrency_task
{
public:
	class UVerseAIBase_fort_character_actions_interface* _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVerseAIBase_fort_threat_info         __verse_0xB2CDDD72_Argument;                       // 0x158(0x38)(Parm, NoDestructor)
	enum class EVerseAIBase_action_result        _RetVal;                                           // 0x190(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_VerseAIBase_fort_character_actions_interface$AttackThreat_L_Nfort__threat__info_R");
		return Clss;
	}

	int64 Update();
};

// 0x31 (0x181 - 0x150)
// VerseClass VerseAIBase.task_VerseAIBase_fort_character_actions_interface$LootObject_L_Nfort__loot__info_R
class UTask_VerseAIBase_fort_character_actions_interface_LootObject_L_Nfort__loot__info_R : public UConcurrency_task
{
public:
	class UVerseAIBase_fort_character_actions_interface* _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVerseAIBase_fort_loot_info           __verse_0xB2CDDD72_Argument;                       // 0x158(0x28)(Parm, NoDestructor)
	enum class EVerseAIBase_action_result        _RetVal;                                           // 0x180(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_VerseAIBase_fort_character_actions_interface$LootObject_L_Nfort__loot__info_R");
		return Clss;
	}

	int64 Update();
};

// 0xA (0x15A - 0x150)
// VerseClass VerseAIBase.task_VerseAIBase_fort_character_actions_interface$PlayRandomEmote
class UTask_VerseAIBase_fort_character_actions_interface_PlayRandomEmote : public UConcurrency_task
{
public:
	class UVerseAIBase_fort_character_actions_interface* _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x158(0x1)(Parm, HasGetValueTypeHash)
	enum class EVerseAIBase_action_result        _RetVal;                                           // 0x159(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_VerseAIBase_fort_character_actions_interface$PlayRandomEmote");
		return Clss;
	}

	int64 Update();
};

// 0x11 (0x161 - 0x150)
// VerseClass VerseAIBase.task_VerseAIBase_fort_character_actions_interface$Revive_L_Nagent_R
class UTask_VerseAIBase_fort_character_actions_interface_Revive_L_Nagent_R : public UConcurrency_task
{
public:
	class UVerseAIBase_fort_character_actions_interface* _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USimulation_agent*                     __verse_0xB2CDDD72_Argument;                       // 0x158(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EVerseAIBase_fallible_action_result _RetVal;                                           // 0x160(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_VerseAIBase_fort_character_actions_interface$Revive_L_Nagent_R");
		return Clss;
	}

	int64 Update();
};

// 0xA (0x15A - 0x150)
// VerseClass VerseAIBase.task_VerseAIBase_fort_character_movement_interface$Crouch
class UTask_VerseAIBase_fort_character_movement_interface_Crouch : public UConcurrency_task
{
public:
	class UVerseAIBase_fort_character_movement_interface* _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x158(0x1)(Parm, HasGetValueTypeHash)
	enum class EVerseAIBase_fallible_action_result _RetVal;                                           // 0x159(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_VerseAIBase_fort_character_movement_interface$Crouch");
		return Clss;
	}

	int64 Update();
};

// 0xA (0x15A - 0x150)
// VerseClass VerseAIBase.task_VerseAIBase_fort_character_movement_interface$Jump
class UTask_VerseAIBase_fort_character_movement_interface_Jump : public UConcurrency_task
{
public:
	class UVerseAIBase_fort_character_movement_interface* _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x158(0x1)(Parm, HasGetValueTypeHash)
	enum class EVerseAIBase_action_result        _RetVal;                                           // 0x159(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_VerseAIBase_fort_character_movement_interface$Jump");
		return Clss;
	}

	int64 Update();
};

// 0xA (0x15A - 0x150)
// VerseClass VerseAIBase.task_VerseAIBase_fort_character_movement_interface$Slide
class UTask_VerseAIBase_fort_character_movement_interface_Slide : public UConcurrency_task
{
public:
	class UVerseAIBase_fort_character_movement_interface* _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x158(0x1)(Parm, HasGetValueTypeHash)
	enum class EVerseAIBase_action_result        _RetVal;                                           // 0x159(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_VerseAIBase_fort_character_movement_interface$Slide");
		return Clss;
	}

	int64 Update();
};

// 0xA (0x15A - 0x150)
// VerseClass VerseAIBase.task_VerseAIBase_fort_character_movement_interface$Sprint
class UTask_VerseAIBase_fort_character_movement_interface_Sprint : public UConcurrency_task
{
public:
	class UVerseAIBase_fort_character_movement_interface* _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x158(0x1)(Parm, HasGetValueTypeHash)
	enum class EVerseAIBase_action_result        _RetVal;                                           // 0x159(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_VerseAIBase_fort_character_movement_interface$Sprint");
		return Clss;
	}

	int64 Update();
};

// 0xA (0x15A - 0x150)
// VerseClass VerseAIBase.task_VerseAIBase_fort_character_movement_interface$TacticalSprint
class UTask_VerseAIBase_fort_character_movement_interface_TacticalSprint : public UConcurrency_task
{
public:
	class UVerseAIBase_fort_character_movement_interface* _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x158(0x1)(Parm, HasGetValueTypeHash)
	enum class EVerseAIBase_action_result        _RetVal;                                           // 0x159(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_VerseAIBase_fort_character_movement_interface$TacticalSprint");
		return Clss;
	}

	int64 Update();
};

// 0xA (0x15A - 0x150)
// VerseClass VerseAIBase.task_VerseAIBase_fort_character_movement_interface$Walk
class UTask_VerseAIBase_fort_character_movement_interface_Walk : public UConcurrency_task
{
public:
	class UVerseAIBase_fort_character_movement_interface* _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x158(0x1)(Parm, HasGetValueTypeHash)
	enum class EVerseAIBase_action_result        _RetVal;                                           // 0x159(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_VerseAIBase_fort_character_movement_interface$Walk");
		return Clss;
	}

	int64 Update();
};

// 0xA (0x15A - 0x150)
// VerseClass VerseAIBase.task_VerseAIBase_fort_navigatable$MoveInRangeToAttack
class UTask_VerseAIBase_fort_navigatable_MoveInRangeToAttack : public UConcurrency_task
{
public:
	class UVerseAIBase_fort_navigatable*         _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x158(0x1)(Parm, HasGetValueTypeHash)
	enum class EVerseAIBase_action_result        _RetVal;                                           // 0x159(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_VerseAIBase_fort_navigatable$MoveInRangeToAttack");
		return Clss;
	}

	int64 Update();
};

// 0xA (0x15A - 0x150)
// VerseClass VerseAIBase.task_VerseAIBase_fort_navigatable$RoamAround
class UTask_VerseAIBase_fort_navigatable_RoamAround : public UConcurrency_task
{
public:
	class UVerseAIBase_fort_navigatable*         _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x158(0x1)(Parm, HasGetValueTypeHash)
	enum class EAI_navigation_result             _RetVal;                                           // 0x159(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_VerseAIBase_fort_navigatable$RoamAround");
		return Clss;
	}

	int64 Update();
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseAIBase.VerseAIBase
class UVerseAIBase : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseAIBase");
		return Clss;
	}

	FOptionProperty_ _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_N_Roperator_U_2eGetFortWeaponActions_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_N_Roperator_U_2eGetFortThreatPerception_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_N_Roperator_U_2eGetFortTargetSelection_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_N_Roperator_U_2eGetFortObstaclePerception_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_N_Roperator_U_2eGetFortNavigatable_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_N_Roperator_U_2eGetFortLootPerception_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_N_Roperator_U_2eGetFortInventory_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_N_Roperator_U_2eGetFortCreatureActions_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_N_Roperator_U_2eGetFortCharacterMovement_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_N_Roperator_U_2eGetFortCharacterActions_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_N_RMakeNavigationTarget_L_Nfort__loot__info_R(const struct FVerseAIBase_fort_loot_info& __verse_0xB2CDDD72_Argument, uint64 InstancingGraph, class UAI_navigation_target* __verse_0xB482F2DD_CurrentlyInstantiatedObject);
	void _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_N_RMakeNavigationTarget_L_Nfort__threat__info_R(const struct FVerseAIBase_fort_threat_info& __verse_0xB2CDDD72_Argument, uint64 InstancingGraph, class UAI_navigation_target* __verse_0xB482F2DD_CurrentlyInstantiatedObject);
	struct FSpatialMath_vector3 _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_N_RGetThreatLocation_L_Nfort__threat__info_R(const struct FVerseAIBase_fort_threat_info& __verse_0xB2CDDD72_Argument);
	struct FVerseAIBase_fort_threat_info VerseAIBase_fort_threat_info_OverrideFactory(TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap);
	struct FVerseAIBase_fort_threat_info VerseAIBase_fort_threat_info_Factory();
	struct FVerseAIBase_fort_obstacle_info VerseAIBase_fort_obstacle_info_OverrideFactory(TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap);
	struct FVerseAIBase_fort_obstacle_info VerseAIBase_fort_obstacle_info_Factory();
	struct FVerseAIBase_fort_loot_info VerseAIBase_fort_loot_info_OverrideFactory(TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap);
	struct FVerseAIBase_fort_loot_info VerseAIBase_fort_loot_info_Factory();
	struct FVerseAIBase_fort_weapon_descriptor VerseAIBase_fort_weapon_descriptor_OverrideFactory(TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap, FVerseStringProperty_ _ExprResultStack_0, FOptionProperty_ _ExprResult_1, FVerseStringProperty_ _ExprResultStack_2, FOptionProperty_ _ExprResult_3, FVerseStringProperty_ _ExprResultStack_4, FOptionProperty_ _ExprResult_5);
	struct FVerseAIBase_fort_weapon_descriptor VerseAIBase_fort_weapon_descriptor_Factory();
	struct FVerseAIBase_fort_item_descriptor VerseAIBase_fort_item_descriptor_OverrideFactory(TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap);
	struct FVerseAIBase_fort_item_descriptor VerseAIBase_fort_item_descriptor_Factory();
	void _InitCDO();
};

// 0x50 (0xE8 - 0x98)
// VerseClass VerseAIBase.VerseAIBase_ai_behavior
class UVerseAIBase_ai_behavior : public UAIBehaviorScript
{
public:
	uint8                                        Pad_673C[0x10];                                    // Fixing Size After Last Property
	FVerseFunctionProperty_                      __verse_0x1F792AAA_OnBegin;                        // 0xA8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xBB3A9AC0__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2fai__behavior_N_ROnEnd; // 0xB8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x0C06B9E8__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2fai__behavior_N_RGetAgent; // 0xC8(0x10)(InstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_673D[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseAIBase_ai_behavior");
		return Clss;
	}

	void _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2fai__behavior_N_ROnEnd(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* OnBegin(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2fai__behavior_N_RGetAgent(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseAIBase.VerseAIBase_fort_character_actions_interface
class UVerseAIBase_fort_character_actions_interface : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseAIBase_fort_character_actions_interface");
		return Clss;
	}

	class UConcurrency_task* Revive_L_Nagent_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, class USimulation_agent* __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* PlayRandomEmote(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* LootObject_L_Nfort__loot__info_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FVerseAIBase_fort_loot_info& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* AttackThreat_L_Nfort__threat__info_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FVerseAIBase_fort_threat_info& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* AttackObstacle_L_Nfort__obstacle__info_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FVerseAIBase_fort_obstacle_info& __verse_0xB2CDDD72_Argument);
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseAIBase.VerseAIBase_fort_character_movement_interface
class UVerseAIBase_fort_character_movement_interface : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseAIBase_fort_character_movement_interface");
		return Clss;
	}

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

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseAIBase_fort_creature_actions_interface");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// VerseClass VerseAIBase.VerseAIBase_fort_inventory_interface
class UVerseAIBase_fort_inventory_interface : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseAIBase_fort_inventory_interface");
		return Clss;
	}

	void _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RUnregisterUseSuggestedWeaponCallback_L_Nint_R(int64 __verse_0xB2CDDD72_Argument);
	int64 _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RRegisterUseSuggestedWeaponCallback_L_Nfort__item__descriptor_Tlogic_R(FVerseFunctionProperty_ __verse_0xB2CDDD72_Argument);
	uint8 _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RIsWeaponEquipped_L_Nfort__item__descriptor_R(const struct FVerseAIBase_fort_item_descriptor& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RGetWeaponDescriptor_L_Nfort__item__descriptor_R(const struct FVerseAIBase_fort_item_descriptor& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RGetCurrentWeapon(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	TArray<struct FVerseAIBase_fort_item_descriptor> _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RGetAllItems(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_REquipWeapon_L_Nfort__item__descriptor_R(const struct FVerseAIBase_fort_item_descriptor& __verse_0xB2CDDD72_Argument);
	uint8 _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RDropItem_L_Nfort__item__descriptor_R(const struct FVerseAIBase_fort_item_descriptor& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RAddItemToInventory_L_Nfort__inventory__item__asset_M_Nint_R(const struct FTuple_Lfort__inventory__item__asset_Mint_R& __verse_0xB2CDDD72_Argument);
};

// 0x0 (0xD8 - 0xD8)
// VerseClass VerseAIBase.VerseAIBase_fort_inventory_item_asset
class UVerseAIBase_fort_inventory_item_asset : public UAssets_asset
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseAIBase_fort_inventory_item_asset");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseAIBase.VerseAIBase_fort_item_interface
class UVerseAIBase_fort_item_interface : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseAIBase_fort_item_interface");
		return Clss;
	}

	uint8 _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__item__interface_N_RHasTag_L_Nfort__item__descriptor_M_Nfort__item__tag_R(const struct FTuple_Lfort__item__descriptor_Mfort__item__tag_R& __verse_0xB2CDDD72_Argument);
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseAIBase.VerseAIBase_fort_item_tag
class UVerseAIBase_fort_item_tag : public UTags_tag
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseAIBase_fort_item_tag");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseAIBase.VerseAIBase_fort_loot_perception_interface
class UVerseAIBase_fort_loot_perception_interface : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseAIBase_fort_loot_perception_interface");
		return Clss;
	}

	FOptionProperty_ _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__loot__perception__interface_N_RGetBestObjectToLoot(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	class UObject* _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__loot__perception__interface_N_RBestObjectTolootChangedEvent(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseAIBase.VerseAIBase_fort_navigatable
class UVerseAIBase_fort_navigatable : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseAIBase_fort_navigatable");
		return Clss;
	}

	class UConcurrency_task* RoamAround(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* MoveInRangeToAttack(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseAIBase.VerseAIBase_fort_obstacle_perception_interface
class UVerseAIBase_fort_obstacle_perception_interface : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseAIBase_fort_obstacle_perception_interface");
		return Clss;
	}

	class UObject* _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__obstacle__perception__interface_N_RObstacleChangedEvent(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__obstacle__perception__interface_N_RGetObstacleInfo(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseAIBase.VerseAIBase_fort_resource_tag
class UVerseAIBase_fort_resource_tag : public UVerseAIBase_fort_item_tag
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseAIBase_fort_resource_tag");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseAIBase.VerseAIBase_fort_metal_tag
class UVerseAIBase_fort_metal_tag : public UVerseAIBase_fort_resource_tag
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseAIBase_fort_metal_tag");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseAIBase.VerseAIBase_fort_stone_tag
class UVerseAIBase_fort_stone_tag : public UVerseAIBase_fort_resource_tag
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseAIBase_fort_stone_tag");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseAIBase.VerseAIBase_fort_target_selection_interface
class UVerseAIBase_fort_target_selection_interface : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseAIBase_fort_target_selection_interface");
		return Clss;
	}

	FOptionProperty_ _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__target__selection__interface_N_RGetCurrentThreatInfo(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	class UObject* _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__target__selection__interface_N_RCurrentThreatStatusChangedEvent(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	class UObject* _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__target__selection__interface_N_RCurrentThreatChangedEvent(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseAIBase.VerseAIBase_fort_threat_perception_interface
class UVerseAIBase_fort_threat_perception_interface : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseAIBase_fort_threat_perception_interface");
		return Clss;
	}

	FOptionProperty_ _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__threat__perception__interface_N_RGetThreatsInfo(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__threat__perception__interface_N_RGetThreatInfo_L_Nagent_R(class USimulation_agent* __verse_0xB2CDDD72_Argument);
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseAIBase.VerseAIBase_fort_weapon_actions_interface
class UVerseAIBase_fort_weapon_actions_interface : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseAIBase_fort_weapon_actions_interface");
		return Clss;
	}

	uint8 _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__weapon__actions__interface_N_RReload(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	uint8 _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__weapon__actions__interface_N_RMeleeAttack(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	uint8 _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__weapon__actions__interface_N_RFire(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseAIBase.VerseAIBase_fort_weapon_tag
class UVerseAIBase_fort_weapon_tag : public UVerseAIBase_fort_item_tag
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseAIBase_fort_weapon_tag");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseAIBase.VerseAIBase_fort_melee_weapon_tag
class UVerseAIBase_fort_melee_weapon_tag : public UVerseAIBase_fort_weapon_tag
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseAIBase_fort_melee_weapon_tag");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseAIBase.VerseAIBase_fort_pickaxe_tag
class UVerseAIBase_fort_pickaxe_tag : public UVerseAIBase_fort_melee_weapon_tag
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseAIBase_fort_pickaxe_tag");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseAIBase.VerseAIBase_fort_range_weapon_tag
class UVerseAIBase_fort_range_weapon_tag : public UVerseAIBase_fort_weapon_tag
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseAIBase_fort_range_weapon_tag");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseAIBase.VerseAIBase_fort_biplane_gun_tag
class UVerseAIBase_fort_biplane_gun_tag : public UVerseAIBase_fort_range_weapon_tag
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseAIBase_fort_biplane_gun_tag");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseAIBase.VerseAIBase_fort_bow_tag
class UVerseAIBase_fort_bow_tag : public UVerseAIBase_fort_range_weapon_tag
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseAIBase_fort_bow_tag");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseAIBase.VerseAIBase_fort_grenade_launcher_tag
class UVerseAIBase_fort_grenade_launcher_tag : public UVerseAIBase_fort_range_weapon_tag
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseAIBase_fort_grenade_launcher_tag");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseAIBase.VerseAIBase_fort_LMG_tag
class UVerseAIBase_fort_LMG_tag : public UVerseAIBase_fort_range_weapon_tag
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseAIBase_fort_LMG_tag");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseAIBase.VerseAIBase_fort_mini_gun_tag
class UVerseAIBase_fort_mini_gun_tag : public UVerseAIBase_fort_range_weapon_tag
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseAIBase_fort_mini_gun_tag");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseAIBase.VerseAIBase_fort_pistol_tag
class UVerseAIBase_fort_pistol_tag : public UVerseAIBase_fort_range_weapon_tag
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseAIBase_fort_pistol_tag");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseAIBase.VerseAIBase_fort_rifle_tag
class UVerseAIBase_fort_rifle_tag : public UVerseAIBase_fort_range_weapon_tag
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseAIBase_fort_rifle_tag");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseAIBase.VerseAIBase_fort_rocket_launcher_tag
class UVerseAIBase_fort_rocket_launcher_tag : public UVerseAIBase_fort_range_weapon_tag
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseAIBase_fort_rocket_launcher_tag");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseAIBase.VerseAIBase_fort_shotgun_tag
class UVerseAIBase_fort_shotgun_tag : public UVerseAIBase_fort_range_weapon_tag
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseAIBase_fort_shotgun_tag");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseAIBase.VerseAIBase_fort_SMG_tag
class UVerseAIBase_fort_SMG_tag : public UVerseAIBase_fort_range_weapon_tag
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseAIBase_fort_SMG_tag");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseAIBase.VerseAIBase_fort_sniper_tag
class UVerseAIBase_fort_sniper_tag : public UVerseAIBase_fort_range_weapon_tag
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseAIBase_fort_sniper_tag");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseAIBase.VerseAIBase_fort_wood_tag
class UVerseAIBase_fort_wood_tag : public UVerseAIBase_fort_resource_tag
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseAIBase_fort_wood_tag");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseAIBase.VerseAIBase_FortCreatureActionsModule
class UVerseAIBase_FortCreatureActionsModule : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseAIBase_FortCreatureActionsModule");
		return Clss;
	}

	class UGame_Abilities_gameplay_ability_asset* _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2fFortCreatureActionsModule_N_RGetGameplayAbility_L_N_Kchar_R(FVerseStringProperty_ __verse_0xB2CDDD72_Argument, FVerseDynamicProperty_ _ExprResultStack_0, FVerseFunctionProperty_ _Callee_1, const struct FTuple_Lgameplay__ability__asset_M_Kchar_R& _ExprResult_2);
	void _InitCDO();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
