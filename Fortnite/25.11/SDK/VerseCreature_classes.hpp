#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

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

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("$SolarisSignatureFunctionOuter");
		return Clss;
	}

};

// 0x20 (0x170 - 0x150)
// VerseClass VerseCreature.task_VerseCreature_creature_component$LookAt_L_Nvector3_R
class UTask_VerseCreature_creature_component_LookAt_L_Nvector3_R : public UConcurrency_task
{
public:
	class UVerseCreature_creature_component*     _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FSpatialMath_vector3                  __verse_0xB2CDDD72_Argument;                       // 0x158(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_VerseCreature_creature_component$LookAt_L_Nvector3_R");
		return Clss;
	}

	int64 Update();
};

// 0xA (0x15A - 0x150)
// VerseClass VerseCreature.task_VerseCreature_creature_component$MoveInRangeToAttack
class UTask_VerseCreature_creature_component_MoveInRangeToAttack : public UConcurrency_task
{
public:
	class UVerseCreature_creature_component*     _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x158(0x1)(Parm, HasGetValueTypeHash)
	enum class EVerseAIBase_action_result        _RetVal;                                           // 0x159(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_VerseCreature_creature_component$MoveInRangeToAttack");
		return Clss;
	}

	int64 Update();
};

// 0x29 (0x179 - 0x150)
// VerseClass VerseCreature.task_VerseCreature_creature_component$NavigateTo_L_Nnavigation__target_M_Nfloat_M_Nlogic_R
class UTask_VerseCreature_creature_component_NavigateTo_L_Nnavigation__target_M_Nfloat_M_Nlogic_R : public UConcurrency_task
{
public:
	class UVerseCreature_creature_component*     _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_Lnavigation__target_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R __verse_0xB2CDDD72_Argument;                       // 0x158(0x1A)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_16AB[0x6];                                     // Fixing Size After Last Property..
	enum class EAI_navigation_result             _RetVal;                                           // 0x178(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_VerseCreature_creature_component$NavigateTo_L_Nnavigation__target_M_Nfloat_M_Nlogic_R");
		return Clss;
	}

	int64 Update();
};

// 0xA (0x15A - 0x150)
// VerseClass VerseCreature.task_VerseCreature_creature_component$RoamAround
class UTask_VerseCreature_creature_component_RoamAround : public UConcurrency_task
{
public:
	class UVerseCreature_creature_component*     _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x158(0x1)(Parm, HasGetValueTypeHash)
	enum class EAI_navigation_result             _RetVal;                                           // 0x159(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_VerseCreature_creature_component$RoamAround");
		return Clss;
	}

	int64 Update();
};

// 0x18 (0x168 - 0x150)
// VerseClass VerseCreature.task_VerseCreature_creature_component$Wait_L_Nfloat_R
class UTask_VerseCreature_creature_component_Wait_L_Nfloat_R : public UConcurrency_task
{
public:
	class UVerseCreature_creature_component*     _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0xB2CDDD72_Argument;                       // 0x158(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_VerseCreature_creature_component$Wait_L_Nfloat_R");
		return Clss;
	}

	int64 Update();
};

// 0x70 (0x128 - 0xB8)
// VerseClass VerseCreature.VerseCreature_creature_component
class UVerseCreature_creature_component : public UAIActionsComponent
{
public:
	FVerseFunctionProperty_                      __verse_0xA9D01BCC_RoamAround;                     // 0xB8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x514829C1_MoveInRangeToAttack;            // 0xC8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xC907A4E0_LookAt_L_Nvector3_R;            // 0xD8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x122D082A__L_2fFortnite_2ecom_2fAI_2fnavigatable_N_RGetCurrentDestination; // 0xE8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x1EBBDB13_NavigateTo_L_Nnavigation__target_M_Nfloat_M_Nlogic_R; // 0xF8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xD5205DFA__L_2fFortnite_2ecom_2fAI_2fnavigatable_N_RStopNavigation; // 0x108(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x2AAE88FF_Wait_L_Nfloat_R;                // 0x118(0x10)(InstancedReference, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseCreature_creature_component");
		return Clss;
	}

	class UConcurrency_task* Wait_L_Nfloat_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, FOptionProperty_ __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fAI_2fnavigatable_N_RStopNavigation(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* RoamAround(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* NavigateTo_L_Nnavigation__target_M_Nfloat_M_Nlogic_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_Lnavigation__target_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* MoveInRangeToAttack(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* LookAt_L_Nvector3_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FSpatialMath_vector3& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fFortnite_2ecom_2fAI_2fnavigatable_N_RGetCurrentDestination(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x28 (0xD0 - 0xA8)
// VerseClass VerseCreature.VerseCreature_creature_perception_component
class UVerseCreature_creature_perception_component : public UCreaturePerceptionComponentBase
{
public:
	FVerseFunctionProperty_                      __verse_0x77D2ED1E__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__threat__perception__interface_N_RGetThreatsInfo; // 0xA8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x09501A7F__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__threat__perception__interface_N_RGetThreatInfo_L_Nagent_R; // 0xB8(0x10)(InstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_16B1[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VerseCreature_creature_perception_component");
		return Clss;
	}

	FOptionProperty_ _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__threat__perception__interface_N_RGetThreatsInfo(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__threat__perception__interface_N_RGetThreatInfo_L_Nagent_R(class USimulation_agent* __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
