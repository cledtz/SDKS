#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// VerseClass VerseCreature.$SolarisSignatureFunctionOuter
class U_SolarisSignatureFunctionOuter : public UObject
{
public:

	static class UClass* StaticClass();
	static class U_SolarisSignatureFunctionOuter* GetDefaultObj();

};

// 0x10 (0x150 - 0x140)
// VerseClass VerseCreature.task_VerseCreature_creature_component$MaintainFocus_L_Nagent_R
class UTask_VerseCreature_creature_component_MaintainFocus_L_Nagent_R : public UConcurrency_task
{
public:
	class UVerseCreature_creature_component*     _Self;                                             // 0x140(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USimulation_agent*                     __verse_0xB2CDDD72_Argument;                       // 0x148(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UTask_VerseCreature_creature_component_MaintainFocus_L_Nagent_R* GetDefaultObj();

	int64 Update();
};

// 0x20 (0x160 - 0x140)
// VerseClass VerseCreature.task_VerseCreature_creature_component$MaintainFocus_L_Nvector3_R
class UTask_VerseCreature_creature_component_MaintainFocus_L_Nvector3_R : public UConcurrency_task
{
public:
	class UVerseCreature_creature_component*     _Self;                                             // 0x140(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FSpatialMath_vector3                  __verse_0xB2CDDD72_Argument;                       // 0x148(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UTask_VerseCreature_creature_component_MaintainFocus_L_Nvector3_R* GetDefaultObj();

	int64 Update();
};

// 0xA (0x14A - 0x140)
// VerseClass VerseCreature.task_VerseCreature_creature_component$MoveInRangeToAttack
class UTask_VerseCreature_creature_component_MoveInRangeToAttack : public UConcurrency_task
{
public:
	class UVerseCreature_creature_component*     _Self;                                             // 0x140(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x148(0x1)(Parm, HasGetValueTypeHash)
	enum class EVerseAIBase_action_result        _RetVal;                                           // 0x149(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UTask_VerseCreature_creature_component_MoveInRangeToAttack* GetDefaultObj();

	int64 Update();
};

// 0x29 (0x169 - 0x140)
// VerseClass VerseCreature.task_VerseCreature_creature_component$NavigateTo_L_Nnavigation__target_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R
class UTask_VerseCreature_creature_component_NavigateTo_L_Nnavigation__target_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R : public UConcurrency_task
{
public:
	class UVerseCreature_creature_component*     _Self;                                             // 0x140(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_Lnavigation__target_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R __verse_0xB2CDDD72_Argument;                       // 0x148(0x1A)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_5FC2[0x6];                                     // Fixing Size After Last Property 
	enum class EAI_navigation_result             _RetVal;                                           // 0x168(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UTask_VerseCreature_creature_component_NavigateTo_L_Nnavigation__target_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R* GetDefaultObj();

	int64 Update();
};

// 0xA (0x14A - 0x140)
// VerseClass VerseCreature.task_VerseCreature_creature_component$RoamAround
class UTask_VerseCreature_creature_component_RoamAround : public UConcurrency_task
{
public:
	class UVerseCreature_creature_component*     _Self;                                             // 0x140(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x148(0x1)(Parm, HasGetValueTypeHash)
	enum class EAI_navigation_result             _RetVal;                                           // 0x149(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UTask_VerseCreature_creature_component_RoamAround* GetDefaultObj();

	int64 Update();
};

// 0x18 (0x158 - 0x140)
// VerseClass VerseCreature.task_VerseCreature_creature_component$Wait_L_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R
class UTask_VerseCreature_creature_component_Wait_L_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R : public UConcurrency_task
{
public:
	class UVerseCreature_creature_component*     _Self;                                             // 0x140(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FOptionalProperty_                           __verse_0xB2CDDD72_Argument;                       // 0x148(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UTask_VerseCreature_creature_component_Wait_L_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R* GetDefaultObj();

	int64 Update();
};

// 0x80 (0x130 - 0xB0)
// VerseClass VerseCreature.VerseCreature_creature_component
class UVerseCreature_creature_component : public UAIActionsComponent
{
public:
	FVerseFunctionProperty_                      __verse_0xA9D01BCC_RoamAround;                     // 0xB0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x514829C1_MoveInRangeToAttack;            // 0xC0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x1EAD0FC6_MaintainFocus_L_Nvector3_R;     // 0xD0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x0A187AEF_MaintainFocus_L_Nagent_R;       // 0xE0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x122D082A__L_2fFortnite_2ecom_2fAI_2fnavigatable_N_RGetCurrentDestination; // 0xF0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x1B82C516_NavigateTo_L_Nnavigation__target_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R; // 0x100(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xD5205DFA__L_2fFortnite_2ecom_2fAI_2fnavigatable_N_RStopNavigation; // 0x110(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x0413F356_Wait_L_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R; // 0x120(0x10)(InstancedReference, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UVerseCreature_creature_component* GetDefaultObj();

	class UConcurrency_task* Wait_L_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, FOptionalProperty_ __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fAI_2fnavigatable_N_RStopNavigation(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* RoamAround(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* NavigateTo_L_Nnavigation__target_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_Lnavigation__target_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* MoveInRangeToAttack(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* MaintainFocus_L_Nagent_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, class USimulation_agent* __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* MaintainFocus_L_Nvector3_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FSpatialMath_vector3& __verse_0xB2CDDD72_Argument);
	FOptionalProperty_ _L_2fFortnite_2ecom_2fAI_2fnavigatable_N_RGetCurrentDestination(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x28 (0xC8 - 0xA0)
// VerseClass VerseCreature.VerseCreature_creature_perception_component
class UVerseCreature_creature_perception_component : public UCreaturePerceptionComponentBase
{
public:
	FVerseFunctionProperty_                      __verse_0xBE0E0DB9__L_2fFortnite_2ecom_2fAI_2ffort__threat__perception__interface_N_RGetThreatsInfo; // 0xA0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x62C24FB7__L_2fFortnite_2ecom_2fAI_2ffort__threat__perception__interface_N_RGetThreatInfo_L_Nagent_R; // 0xB0(0x10)(InstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_5FEC[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UVerseCreature_creature_perception_component* GetDefaultObj();

	FOptionalProperty_ _L_2fFortnite_2ecom_2fAI_2ffort__threat__perception__interface_N_RGetThreatsInfo(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	FOptionalProperty_ _L_2fFortnite_2ecom_2fAI_2ffort__threat__perception__interface_N_RGetThreatInfo_L_Nagent_R(class USimulation_agent* __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

}


