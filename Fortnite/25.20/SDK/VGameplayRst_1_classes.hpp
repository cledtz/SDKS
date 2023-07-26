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
// VerseClass VGameplayRst.$SolarisSignatureFunctionOuter
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
// VerseClass VGameplayRst.task_VGameplayRst_Components_dynamic_activation_component$WaitForTransitionBegin
class UTask_VGameplayRst_Components_dynamic_activation_component_WaitForTransitionBegin : public UConcurrency_task
{
public:
	class UVGameplayRst_Components_dynamic_activation_component* _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x158(0x1)(Parm, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_VGameplayRst_Components_dynamic_activation_component$WaitForTransitionBegin");
		return Clss;
	}

	int64 Update();
};

// 0x9 (0x159 - 0x150)
// VerseClass VGameplayRst.task_VGameplayRst_Components_dynamic_activation_component$WaitForTransitionComplete
class UTask_VGameplayRst_Components_dynamic_activation_component_WaitForTransitionComplete : public UConcurrency_task
{
public:
	class UVGameplayRst_Components_dynamic_activation_component* _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x158(0x1)(Parm, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_VGameplayRst_Components_dynamic_activation_component$WaitForTransitionComplete");
		return Clss;
	}

	int64 Update();
};

// 0x28 (0x178 - 0x150)
// VerseClass VGameplayRst.task_VGameplayRst_Messaging_debug_command_component$__WaitForCommand_L_N_Kchar_R
class UTask_VGameplayRst_Messaging_debug_command_component___WaitForCommand_L_N_Kchar_R : public UConcurrency_task
{
public:
	class UVGameplayRst_Messaging_debug_command_component* _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FVerseStringProperty_                        __verse_0xB2CDDD72_Argument;                       // 0x158(0x10)(Parm, HasGetValueTypeHash)
	FVerseStringProperty_                        _RetVal;                                           // 0x168(0x10)(Parm, OutParm, ReturnParm, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_VGameplayRst_Messaging_debug_command_component$__WaitForCommand_L_N_Kchar_R");
		return Clss;
	}

	int64 Update();
};

// 0x18 (0x168 - 0x150)
// VerseClass VGameplayRst.task_VGameplayRst_Physics_collision_component$WaitBeginOverlap
class UTask_VGameplayRst_Physics_collision_component_WaitBeginOverlap : public UConcurrency_task
{
public:
	class UVGameplayRst_Physics_collision_component* _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x158(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_7D51[0x7];                                     // Fixing Size After Last Property..
	class UVGameplayRst_Physics_overlap_result*  _RetVal;                                           // 0x160(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_VGameplayRst_Physics_collision_component$WaitBeginOverlap");
		return Clss;
	}

	int64 Update();
};

// 0x18 (0x168 - 0x150)
// VerseClass VGameplayRst.task_VGameplayRst_Physics_collision_component$WaitEndOverlap
class UTask_VGameplayRst_Physics_collision_component_WaitEndOverlap : public UConcurrency_task
{
public:
	class UVGameplayRst_Physics_collision_component* _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x158(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_7D52[0x7];                                     // Fixing Size After Last Property..
	class UVGameplayRst_Physics_overlap_result*  _RetVal;                                           // 0x160(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_VGameplayRst_Physics_collision_component$WaitEndOverlap");
		return Clss;
	}

	int64 Update();
};

// 0x50 (0x1A0 - 0x150)
// VerseClass VGameplayRst.task_VGameplayRst_Physics_collision_component$WaitHit
class UTask_VGameplayRst_Physics_collision_component_WaitHit : public UConcurrency_task
{
public:
	class UVGameplayRst_Physics_collision_component* _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x158(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_7D53[0x7];                                     // Fixing Size After Last Property..
	struct FVGameplayRst_Physics_hit_result      _RetVal;                                           // 0x160(0x40)(Parm, OutParm, ReturnParm, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_VGameplayRst_Physics_collision_component$WaitHit");
		return Clss;
	}

	int64 Update();
};

// 0x20 (0x170 - 0x150)
// VerseClass VGameplayRst.task_VGameplayRst_Physics_physics_trace$WaitPhysicsTrace
class UTask_VGameplayRst_Physics_physics_trace_WaitPhysicsTrace : public UConcurrency_task
{
public:
	class UVGameplayRst_Physics_physics_trace*   _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x158(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_7D54[0x7];                                     // Fixing Size After Last Property..
	TArray<struct FVGameplayRst_Physics_hit_result> _RetVal;                                           // 0x160(0x10)(Parm, OutParm, ReturnParm, ContainsInstancedReference)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_VGameplayRst_Physics_physics_trace$WaitPhysicsTrace");
		return Clss;
	}

	int64 Update();
};

// 0x30 (0xD0 - 0xA0)
// VerseClass VGameplayRst.VGameplayRst_Audio_audio_component
class UVGameplayRst_Audio_audio_component : public UAudioComponentBase
{
public:
	FVerseFunctionProperty_                      __verse_0xEF592EC2__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fAudio_2faudio__component_N_RSetSound_L_Nsound_R; // 0xA0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x75A5E42C__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fAudio_2faudio__component_N_RBeginSound; // 0xB0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xE11C57C9__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fAudio_2faudio__component_N_REndSound; // 0xC0(0x10)(InstancedReference, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VGameplayRst_Audio_audio_component");
		return Clss;
	}

	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fAudio_2faudio__component_N_RSetSound_L_Nsound_R(class UAssets_sound* __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fAudio_2faudio__component_N_REndSound(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fAudio_2faudio__component_N_RBeginSound(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x78 (0x130 - 0xB8)
// VerseClass VGameplayRst.VGameplayRst_Components_dynamic_activation_component
class UVGameplayRst_Components_dynamic_activation_component : public UEntityDynamicActivationComponent
{
public:
	FVerseFunctionProperty_                      __verse_0x4937B575__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fdynamic__activation__component_N_RBeginTransition_L_Nfloat_M_Nactivation__state_R; // 0xB8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xA8ECA743__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fdynamic__activation__component_N_RReset; // 0xC8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x89BFC23D__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fdynamic__activation__component_N_RLinkComponent_L_Ncomponent_R; // 0xD8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x94E8F45B__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fdynamic__activation__component_N_RUnlinkComponent_L_Ncomponent_R; // 0xE8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xA7099383_WaitForTransitionBegin;         // 0xF8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x25AD5386_WaitForTransitionComplete;      // 0x108(0x10)(InstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_7D58[0x18];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VGameplayRst_Components_dynamic_activation_component");
		return Clss;
	}

	class UConcurrency_task* WaitForTransitionComplete(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* WaitForTransitionBegin(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fdynamic__activation__component_N_RUnlinkComponent_L_Ncomponent_R(class UEntityComponent* __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fdynamic__activation__component_N_RReset(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fdynamic__activation__component_N_RLinkComponent_L_Ncomponent_R(class UEntityComponent* __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fdynamic__activation__component_N_RBeginTransition_L_Nfloat_M_Nactivation__state_R(const struct FTuple_Lfloat_Mactivation__state_R& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x150 (0x208 - 0xB8)
// VerseClass VGameplayRst.VGameplayRst_Components_script_component
class UVGameplayRst_Components_script_component : public UEntityScriptComponent
{
public:
	uint8                                        Pad_7D5B[0x10];                                    // Fixing Size After Last Property..
	FVerseFunctionProperty_                      __verse_0xBD826DFC__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_RAddToCreateComponentList_L_N_Ksubtype_Lcomponent_R_R; // 0xC8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xB26B8B89__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_RAddToRequiredComponentList_L_N_Ksubtype_Lcomponent_R_R; // 0xD8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xE7468F17__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_RSetTickEnabled_L_Nlogic_R; // 0xE8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xF5BA8380__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_ROnTick_L_Nfloat_R; // 0xF8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x4D76F3C9__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_ROnCreate; // 0x108(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xC228BDAF__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_ROnPostCreate; // 0x118(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xDDE93D9A__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_ROnBegin; // 0x128(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xA8B3A9DD__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_ROnEnd; // 0x138(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x954F85AD__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_RSetEnabled_L_Nlogic_R; // 0x148(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xDA461B6A__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_RIsEnabled; // 0x158(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x13F91166__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_RIsOwner_L_Nentity_R; // 0x168(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x91324C7B__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_ROnEnabledChanged_L_Nlogic_R; // 0x178(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xFD55EDAC__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_RGetComponentOfType_L_NcomponentType_20where_20componentType_R; // 0x188(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x2341E8B3__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_RGetAllComponentsOfType_L_NcomponentType_20where_20componentType_R; // 0x198(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x838E0A92__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_RGetName; // 0x1A8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xB3665BF6__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_RGetFullname; // 0x1B8(0x10)(InstancedReference, HasGetValueTypeHash)
	uint8                                        __verse_0xFAA77A2E_AllowMultiple : 1;              // Mask: 0x1, PropSize: 0x10x1C8(0x1)(InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7D5C[0x3F];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VGameplayRst_Components_script_component");
		return Clss;
	}

	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_RSetTickEnabled_L_Nlogic_R(uint8 __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_RSetEnabled_L_Nlogic_R(uint8 __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_ROnTick_L_Nfloat_R(double __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_ROnPostCreate(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_ROnEnd(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_ROnEnabledChanged_L_Nlogic_R(uint8 __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_ROnCreate(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_ROnBegin(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	uint8 _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_RIsOwner_L_Nentity_R(class UVerseEngine_Entity_entity* __verse_0xB2CDDD72_Argument);
	uint8 _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_RIsEnabled(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	FVerseStringProperty_ _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_RGetName(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	FVerseStringProperty_ _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_RGetFullname(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_RGetComponentOfType_L_NcomponentType_20where_20componentType_R(class UClass* __verse_0xB2CDDD72_Argument);
	TArray<class UEntityComponent*> _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_RGetAllComponentsOfType_L_NcomponentType_20where_20componentType_R(class UClass* __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_RAddToRequiredComponentList_L_N_Ksubtype_Lcomponent_R_R(const TArray<class UClass*>& __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_RAddToCreateComponentList_L_N_Ksubtype_Lcomponent_R_R(const TArray<class UClass*>& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO(uint8 _ExprResult_0);
};

// 0x0 (0x228 - 0x228)
// VerseClass VGameplayRst.VGameplayRst_Datastore_datastore_component
class UVGameplayRst_Datastore_datastore_component : public UDatastoreComponentBase
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VGameplayRst_Datastore_datastore_component");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass VGameplayRst.VGameplayRst_Datastore_DatastoreComponent
class UVGameplayRst_Datastore_DatastoreComponent : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VGameplayRst_Datastore_DatastoreComponent");
		return Clss;
	}

	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fDatastore_2fDatastoreComponent_N_RSetDatastoreValueInt_L_Nplayer__component_M_N_Kchar_M_Nint_R(const struct FTuple_Lplayer__component_M_Kchar_Mint_R& __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fDatastore_2fDatastoreComponent_N_RSetDatastoreValue_L_Nplayer__component_M_N_Kchar_M_N_Kchar_R(const struct FTuple_Lplayer__component_M_Kchar_M_Kchar_R& __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fDatastore_2fDatastoreComponent_N_RClearAllDatastoreValues_L_Nplayer__component_R(class USimulation_player_component* __verse_0xB2CDDD72_Argument);
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass VGameplayRst.VGameplayRst_EntityUtil
class UVGameplayRst_EntityUtil : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VGameplayRst_EntityUtil");
		return Clss;
	}

	int64 _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fEntityUtil_N_RSpawnEntityFromAsset_L_N_Kchar_M_Ntransform_M_N_Kchar_R(const struct FTuple_L_Kchar_Mtransform_M_Kchar_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fEntityUtil_N_RSpawnEntity_L_Nvector3_M_N_Kchar_R(const struct FTuple_Lvector3_M_Kchar_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fEntityUtil_N_RSpawnEntity_L_Nvector3_M_Nvector3_M_Nvector3_M_N_Kchar_R(const struct FTuple_Lvector3_Mvector3_Mvector3_M_Kchar_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fEntityUtil_N_RSpawnEntity_L_Ntransform_M_N_Kchar_R(const struct FTuple_Ltransform_M_Kchar_R& __verse_0xB2CDDD72_Argument);
	int64 _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fEntityUtil_N_RSpawnEmptyEntity_L_Ntransform_M_N_Kchar_R(const struct FTuple_Ltransform_M_Kchar_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fEntityUtil_N_RGetComponentOfTypeFromComponentForEntity_L_Ncomponent_M_Nint_M_NType_20where_20Type_R(const struct FTuple_Lcomponent_Mint_Many_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fEntityUtil_N_RGetComponentOfTypeFromComponent_L_Ncomponent_M_NType_20where_20Type_R(const struct FTuple_Lcomponent_Many_R& __verse_0xB2CDDD72_Argument);
	class UEntityComponent* _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fEntityUtil_N_RCreateAndAddComponent_L_Nint_M_NComponentType_20where_20ComponentType_R(const struct FTuple_Lint_Mcomponent_R& __verse_0xB2CDDD72_Argument);
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass VGameplayRst.VGameplayRst_GameObjects
class UVGameplayRst_GameObjects : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VGameplayRst_GameObjects");
		return Clss;
	}

	FOptionProperty_ _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateWorldAnchor_L_Nvector3_R(const struct FSpatialMath_vector3& __verse_0xB2CDDD72_Argument, FOptionProperty_ __verse_0x11C2BB4E_OptionResult_1, FVerseFunctionProperty_ _Callee_0, const struct FTuple_Lvector3_M_Kchar_R& _ExprResult_1, FVerseStringProperty_ _ExprResult_2, class UVGameplayRst_GameObjects_world_anchor* __verse_0x95D09D0E_Result_2, FOptionProperty_ _ExprResultStack_3, class UVGameplayRst_GameObjects_world_anchor* __verse_0x00000000__3, enum class EVerseTrue _InvokeSureResultDummy_4, FVerseFunctionProperty_ _Callee_5);
	FOptionProperty_ _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateWorldAnchor_L_Ntag_R(class UTags_tag* __verse_0xB2CDDD72_Argument, FOptionProperty_ __verse_0x00000000__1, class UEntityComponent* __verse_0x44719314_FoundComponent_3, FOptionProperty_ _ExprResultStack_0, FVerseFunctionProperty_ _Callee_1, class UVerseEngine_Entity_entity* __verse_0x5F5E89D8_ValidEntity_3, FOptionProperty_ _ExprResultStack_2, FVerseFunctionProperty_ _Callee_3, FOptionProperty_ __verse_0xB24E940D_OptionComponent_3, class UVerseEngine_Entity_entity* __verse_0x00000000__4, FVerseFunctionProperty_ _Callee_4, class UVGameplayRst_Transform_position_component* __verse_0xA82B0967_Position_5, FOptionProperty_ _FallibleType_5, FOptionProperty_ _ExprResultStack_6, class UVGameplayRst_GameObjects_world_anchor* __verse_0x95D09D0E_Result_6, uint64 _InstancingGraph_7, uint8 _ExprResult_8, FOptionProperty_ _ExprResultStack_9);
	FOptionProperty_ _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateWorldAnchor_L_Nentity_R(class UVerseEngine_Entity_entity* __verse_0xB2CDDD72_Argument, FOptionProperty_ __verse_0x00000000__1, FOptionProperty_ __verse_0x68BB659B_OptionEntity_2, class UVerseEngine_Entity_entity* __verse_0x00000000__3, FVerseFunctionProperty_ _Callee_0, class UVGameplayRst_Transform_position_component* __verse_0xA82B0967_Position_4, FOptionProperty_ _FallibleType_1, FOptionProperty_ _ExprResultStack_2, class UVGameplayRst_GameObjects_world_anchor* _ExprResult_3, uint64 _InstancingGraph_4, uint8 _ExprResult_5, FOptionProperty_ _ExprResultStack_6);
	FOptionProperty_ _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateWorldAnchor_L_Nvector3_M_N_Kchar_R(const struct FTuple_Lvector3_M_Kchar_R& __verse_0xB2CDDD72_Argument, FOptionProperty_ __verse_0x00000000__1, FOptionProperty_ __verse_0x68BB659B_OptionEntity_2, FVerseFunctionProperty_ _Callee_0, const struct FTuple_Lvector3_M_Kchar_R& _ExprResult_1, class UVerseEngine_Entity_entity* __verse_0x5F5E89D8_ValidEntity_3, FOptionProperty_ _ExprResultStack_2, FOptionProperty_ __verse_0x11C2BB4E_OptionResult_4, FVerseFunctionProperty_ _Callee_3, class UVGameplayRst_GameObjects_world_anchor* __verse_0x95D09D0E_Result_5, FOptionProperty_ _ExprResultStack_4, class UVGameplayRst_GameObjects_world_anchor* __verse_0x00000000__6, enum class EVerseTrue _InvokeSureResultDummy_5, FVerseFunctionProperty_ _Callee_6, uint8 _ExprResult_7, FOptionProperty_ _ExprResultStack_8);
	FOptionProperty_ _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_N_Ksubtype_Lcomponent_R_M_Nvector3_M_Nrotation_M_Nvector3_M_N_Kchar_M_Nmesh_M_Nmaterial_R(const struct FTuple_L_Ksubtype_Lcomponent_R_Mvector3_Mrotation_Mvector3_M_Kchar_Mmesh_Mmaterial_R& __verse_0xB2CDDD72_Argument, FOptionProperty_ __verse_0x2BD82FE8_MaybeModel_1, FVerseFunctionProperty_ _Callee_0, const struct FTuple_L_Ksubtype_Lcomponent_R_Mtransform_M_Kchar_Mmesh_R& _ExprResult_1, const struct FSpatialMath_transform& _ExprResult_2, TMap<FVerseStringProperty_, uint8> _ExprResultStack_3, FVerseStringProperty_ _ExprResult_4, FVerseStringProperty_ _ExprResult_5, FVerseStringProperty_ _ExprResult_6, class UVGameplayRst_GameObjects_model* __verse_0x986678F9_Model_2, FOptionProperty_ _ExprResultStack_7, class UVGameplayRst_Geometry_fixed_mesh_component* __verse_0x00000000__3, enum class EVerseTrue _InvokeSureResultDummy_8, FVerseFunctionProperty_ _Callee_9);
	FOptionProperty_ _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_Nvector3_M_Nrotation_M_Nvector3_M_N_Kchar_M_Nmesh_M_Nmaterial_R(const struct FTuple_Lvector3_Mrotation_Mvector3_M_Kchar_Mmesh_Mmaterial_R& __verse_0xB2CDDD72_Argument, FOptionProperty_ __verse_0x2BD82FE8_MaybeModel_1, FVerseFunctionProperty_ _Callee_0, const struct FTuple_Ltransform_M_Kchar_Mmesh_R& _ExprResult_1, const struct FSpatialMath_transform& _ExprResult_2, TMap<FVerseStringProperty_, uint8> _ExprResultStack_3, FVerseStringProperty_ _ExprResult_4, FVerseStringProperty_ _ExprResult_5, FVerseStringProperty_ _ExprResult_6, class UVGameplayRst_GameObjects_model* __verse_0x986678F9_Model_2, FOptionProperty_ _ExprResultStack_7, class UVGameplayRst_Geometry_fixed_mesh_component* __verse_0x00000000__3, enum class EVerseTrue _InvokeSureResultDummy_8, FVerseFunctionProperty_ _Callee_9);
	FOptionProperty_ _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_Nvector3_M_Nrotation_M_N_Kchar_M_Nmesh_M_Nmaterial_R(const struct FTuple_Lvector3_Mrotation_M_Kchar_Mmesh_Mmaterial_R& __verse_0xB2CDDD72_Argument, FOptionProperty_ __verse_0x2BD82FE8_MaybeModel_1, FVerseFunctionProperty_ _Callee_0, const struct FTuple_Ltransform_M_Kchar_Mmesh_R& _ExprResult_1, const struct FSpatialMath_transform& _ExprResult_2, TMap<FVerseStringProperty_, uint8> _ExprResultStack_3, FVerseStringProperty_ _ExprResult_4, FVerseStringProperty_ _ExprResult_5, FVerseStringProperty_ _ExprResult_6, const struct FSpatialMath_vector3& _ExprResult_7, TMap<FVerseStringProperty_, uint8> _ExprResultStack_8, FVerseStringProperty_ _ExprResult_9, FVerseStringProperty_ _ExprResult_10, FVerseStringProperty_ _ExprResult_11, class UVGameplayRst_GameObjects_model* __verse_0x986678F9_Model_2, FOptionProperty_ _ExprResultStack_12, class UVGameplayRst_Geometry_fixed_mesh_component* __verse_0x00000000__3, enum class EVerseTrue _InvokeSureResultDummy_13, FVerseFunctionProperty_ _Callee_14);
	FOptionProperty_ _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_Nvector3_M_N_Kchar_M_Nmesh_M_Nmaterial_R(const struct FTuple_Lvector3_M_Kchar_Mmesh_Mmaterial_R& __verse_0xB2CDDD72_Argument, FOptionProperty_ __verse_0x2BD82FE8_MaybeModel_1, FVerseFunctionProperty_ _Callee_0, const struct FTuple_Ltransform_M_Kchar_Mmesh_R& _ExprResult_1, const struct FSpatialMath_transform& _ExprResult_2, TMap<FVerseStringProperty_, uint8> _ExprResultStack_3, FVerseStringProperty_ _ExprResult_4, FVerseStringProperty_ _ExprResult_5, FVerseStringProperty_ _ExprResult_6, const struct FVerseRotation& _ExprResultStack_7, FVerseFunctionProperty_ _Callee_8, const struct FTuple_L_R& _ExprResult_9, const struct FSpatialMath_vector3& _ExprResult_10, TMap<FVerseStringProperty_, uint8> _ExprResultStack_11, FVerseStringProperty_ _ExprResult_12, FVerseStringProperty_ _ExprResult_13, FVerseStringProperty_ _ExprResult_14, class UVGameplayRst_GameObjects_model* __verse_0x986678F9_Model_2, FOptionProperty_ _ExprResultStack_15, class UVGameplayRst_Geometry_fixed_mesh_component* __verse_0x00000000__3, enum class EVerseTrue _InvokeSureResultDummy_16, FVerseFunctionProperty_ _Callee_17);
	FOptionProperty_ _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_N_Ksubtype_Lcomponent_R_M_Ntransform_M_N_Kchar_M_Nmesh_M_Nmaterial_R(const struct FTuple_L_Ksubtype_Lcomponent_R_Mtransform_M_Kchar_Mmesh_Mmaterial_R& __verse_0xB2CDDD72_Argument, FOptionProperty_ __verse_0x2BD82FE8_MaybeModel_1, FVerseFunctionProperty_ _Callee_0, const struct FTuple_L_Ksubtype_Lcomponent_R_Mtransform_M_Kchar_Mmesh_R& _ExprResult_1, class UVGameplayRst_GameObjects_model* __verse_0x986678F9_Model_2, FOptionProperty_ _ExprResultStack_2, class UVGameplayRst_Geometry_fixed_mesh_component* __verse_0x00000000__3, enum class EVerseTrue _InvokeSureResultDummy_3, FVerseFunctionProperty_ _Callee_4);
	FOptionProperty_ _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_Ntransform_M_N_Kchar_M_Nmesh_M_Nmaterial_R(const struct FTuple_Ltransform_M_Kchar_Mmesh_Mmaterial_R& __verse_0xB2CDDD72_Argument, FOptionProperty_ __verse_0x2BD82FE8_MaybeModel_1, FVerseFunctionProperty_ _Callee_0, const struct FTuple_Ltransform_M_Kchar_Mmesh_R& _ExprResult_1, class UVGameplayRst_GameObjects_model* __verse_0x986678F9_Model_2, FOptionProperty_ _ExprResultStack_2, class UVGameplayRst_Geometry_fixed_mesh_component* __verse_0x00000000__3, enum class EVerseTrue _InvokeSureResultDummy_3, FVerseFunctionProperty_ _Callee_4);
	FOptionProperty_ _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_N_Ksubtype_Lcomponent_R_M_Ntransform_M_N_Kchar_M_Nmesh_R(const struct FTuple_L_Ksubtype_Lcomponent_R_Mtransform_M_Kchar_Mmesh_R& __verse_0xB2CDDD72_Argument, FOptionProperty_ __verse_0x00000000__1, FOptionProperty_ __verse_0x6BB06783_MaybeObj_2, FVerseFunctionProperty_ _Callee_0, const struct FTuple_Ltransform_M_Kchar_R& _ExprResult_1, class UVerseEngine_Entity_entity* __verse_0x4F5E77FF_Obj_3, FOptionProperty_ _ExprResultStack_2, FOptionProperty_ __verse_0x2BD82FE8_MaybeModel_4, FVerseFunctionProperty_ _Callee_3, const struct FTuple_Lentity_M_Ksubtype_Lcomponent_R_R& _ExprResult_4, class UVGameplayRst_GameObjects_model* __verse_0x986678F9_Model_5, FOptionProperty_ _ExprResultStack_5, class UVGameplayRst_Geometry_fixed_mesh_component* __verse_0x00000000__6, enum class EVerseTrue _InvokeSureResultDummy_6, FVerseFunctionProperty_ _Callee_7, class UVGameplayRst_Geometry_fixed_mesh_component* __verse_0x00000000__7, enum class EVerseTrue _InvokeSureResultDummy_8, FVerseFunctionProperty_ _Callee_9, class UVGameplayRst_Physics_collision_component* __verse_0x00000000__8, enum class EVerseTrue _InvokeSureResultDummy_10, FVerseFunctionProperty_ _Callee_11, FVerseStringProperty_ _ExprResult_12, uint8 _ExprResult_13, FOptionProperty_ _ExprResultStack_14);
	FOptionProperty_ _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_Ntransform_M_N_Kchar_M_Nmesh_R(const struct FTuple_Ltransform_M_Kchar_Mmesh_R& __verse_0xB2CDDD72_Argument, FOptionProperty_ __verse_0x00000000__1, FOptionProperty_ __verse_0x6BB06783_MaybeObj_2, FVerseFunctionProperty_ _Callee_0, const struct FTuple_Ltransform_M_Kchar_R& _ExprResult_1, class UVerseEngine_Entity_entity* __verse_0x4F5E77FF_Obj_3, FOptionProperty_ _ExprResultStack_2, FOptionProperty_ __verse_0x2BD82FE8_MaybeModel_4, FVerseFunctionProperty_ _Callee_3, class UVGameplayRst_GameObjects_model* __verse_0x986678F9_Model_5, FOptionProperty_ _ExprResultStack_4, class UVGameplayRst_Geometry_fixed_mesh_component* __verse_0x00000000__6, enum class EVerseTrue _InvokeSureResultDummy_5, FVerseFunctionProperty_ _Callee_6, class UVGameplayRst_Geometry_fixed_mesh_component* __verse_0x00000000__7, enum class EVerseTrue _InvokeSureResultDummy_7, FVerseFunctionProperty_ _Callee_8, class UVGameplayRst_Physics_collision_component* __verse_0x00000000__8, enum class EVerseTrue _InvokeSureResultDummy_9, FVerseFunctionProperty_ _Callee_10, FVerseStringProperty_ _ExprResult_11, uint8 _ExprResult_12, FOptionProperty_ _ExprResultStack_13);
	FOptionProperty_ _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_Nentity_M_N_Ksubtype_Lcomponent_R_R(const struct FTuple_Lentity_M_Ksubtype_Lcomponent_R_R& __verse_0xB2CDDD72_Argument, FOptionProperty_ __verse_0x00000000__1, const TArray<class UClass*>& __verse_0x36974CE7_ComponentClassesToAdd_2, const TArray<class UClass*>& _ExprResult_0, class UVerseEngine_Entity_entity* __verse_0x00000000__3, enum class EVerseTrue _InvokeSureResultDummy_1, FVerseFunctionProperty_ _Callee_2, class UVGameplayRst_Geometry_fixed_mesh_component* __verse_0x71AD33A7_Mesh_4, FOptionProperty_ _FallibleType_3, FOptionProperty_ _ExprResultStack_4, FOptionProperty_ _ExprResult_5, class UVerseEngine_Entity_entity* __verse_0x00000000__5, FVerseFunctionProperty_ _Callee_6, class UVGameplayRst_Geometry_fixed_mesh_component* __verse_0x00000000__6, enum class EVerseTrue _InvokeSureResultDummy_7, FVerseFunctionProperty_ _Callee_8, const struct FTuple_Llogic_Mlogic_R& _ExprResult_9, class UVGameplayRst_Physics_collision_component* __verse_0x802C815C_Collision_4, FOptionProperty_ _FallibleType_10, FOptionProperty_ _ExprResultStack_11, FOptionProperty_ _ExprResult_12, class UVerseEngine_Entity_entity* __verse_0x00000000__7, FVerseFunctionProperty_ _Callee_13, class UVGameplayRst_Transform_position_component* __verse_0xA82B0967_Position_4, FOptionProperty_ _FallibleType_14, FOptionProperty_ _ExprResultStack_15, FOptionProperty_ _ExprResult_16, class UVerseEngine_Entity_entity* __verse_0x00000000__8, FVerseFunctionProperty_ _Callee_17, class UVGameplayRst_Transform_rotation_component* __verse_0x78C70FF3_Rotation_4, FOptionProperty_ _FallibleType_18, FOptionProperty_ _ExprResultStack_19, FOptionProperty_ _ExprResult_20, class UVerseEngine_Entity_entity* __verse_0x00000000__9, FVerseFunctionProperty_ _Callee_21, class UVGameplayRst_Transform_scale_component* __verse_0xA376805D_Scale_4, FOptionProperty_ _FallibleType_22, FOptionProperty_ _ExprResultStack_23, FOptionProperty_ _ExprResult_24, class UVerseEngine_Entity_entity* __verse_0x00000000__10, FVerseFunctionProperty_ _Callee_25, class UVGameplayRst_GameObjects_model* __verse_0x95D09D0E_Result_11, uint64 _InstancingGraph_26, uint8 _ExprResult_27, FOptionProperty_ _ExprResultStack_28);
	FOptionProperty_ _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_Ntag_R(class UTags_tag* __verse_0xB2CDDD72_Argument, FOptionProperty_ __verse_0x00000000__1, class UEntityComponent* __verse_0x44719314_FoundComponent_3, FOptionProperty_ _ExprResultStack_0, FVerseFunctionProperty_ _Callee_1, class UVerseEngine_Entity_entity* __verse_0xECA943DB_Entity_3, FOptionProperty_ _ExprResultStack_2, FVerseFunctionProperty_ _Callee_3, FVerseFunctionProperty_ _Callee_4, uint8 _ExprResult_5, FOptionProperty_ _ExprResultStack_6);
	FOptionProperty_ _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_Nentity_R(class UVerseEngine_Entity_entity* __verse_0xB2CDDD72_Argument, const TArray<class UClass*>& __verse_0xDFAF13A0_ComponentClassToAdd_1, const TArray<enum class EVerseFalse>& __verse_0xFFC68BC5_Array_2, const TArray<class UClass*>& _ForResult_0, int64 _ForIndex_1, int64 _ForLength_2, enum class EVerseFalse __verse_0xFB88B569_Item_4, uint8 _ExprResult_3, FVerseFunctionProperty_ _Callee_4, const struct FTuple_Lentity_M_Ksubtype_Lcomponent_R_R& _ExprResult_5);
	FOptionProperty_ _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateImmutableModel_L_Nentity_R(class UVerseEngine_Entity_entity* __verse_0xB2CDDD72_Argument, const TArray<class UClass*>& __verse_0xDFAF13A0_ComponentClassToAdd_1, const TArray<enum class EVerseFalse>& __verse_0xFFC68BC5_Array_2, const TArray<class UClass*>& _ForResult_0, int64 _ForIndex_1, int64 _ForLength_2, enum class EVerseFalse __verse_0xFB88B569_Item_4, uint8 _ExprResult_3, FVerseFunctionProperty_ _Callee_4, const struct FTuple_Lentity_M_Ksubtype_Lcomponent_R_R& _ExprResult_5);
	FOptionProperty_ _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateImmutableModel_L_Ntag_R(class UTags_tag* __verse_0xB2CDDD72_Argument, FOptionProperty_ __verse_0x00000000__1, class UEntityComponent* __verse_0x44719314_FoundComponent_3, FOptionProperty_ _ExprResultStack_0, FVerseFunctionProperty_ _Callee_1, class UVerseEngine_Entity_entity* __verse_0xECA943DB_Entity_3, FOptionProperty_ _ExprResultStack_2, FVerseFunctionProperty_ _Callee_3, FVerseFunctionProperty_ _Callee_4, uint8 _ExprResult_5, FOptionProperty_ _ExprResultStack_6);
	FOptionProperty_ _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateImmutableModel_L_Nentity_M_N_Ksubtype_Lcomponent_R_R(const struct FTuple_Lentity_M_Ksubtype_Lcomponent_R_R& __verse_0xB2CDDD72_Argument, FOptionProperty_ __verse_0x00000000__1, const TArray<class UClass*>& __verse_0x36974CE7_ComponentClassesToAdd_2, const TArray<class UClass*>& _ExprResult_0, class UVerseEngine_Entity_entity* __verse_0x00000000__3, enum class EVerseTrue _InvokeSureResultDummy_1, FVerseFunctionProperty_ _Callee_2, class UVGameplayRst_Geometry_fixed_mesh_component* __verse_0x71AD33A7_Mesh_4, FOptionProperty_ _FallibleType_3, FOptionProperty_ _ExprResultStack_4, FOptionProperty_ _ExprResult_5, class UVerseEngine_Entity_entity* __verse_0x00000000__5, FVerseFunctionProperty_ _Callee_6, class UVGameplayRst_Geometry_fixed_mesh_component* __verse_0x00000000__6, enum class EVerseTrue _InvokeSureResultDummy_7, FVerseFunctionProperty_ _Callee_8, const struct FTuple_Llogic_Mlogic_R& _ExprResult_9, class UVGameplayRst_Physics_collision_component* __verse_0x802C815C_Collision_4, FOptionProperty_ _FallibleType_10, FOptionProperty_ _ExprResultStack_11, FOptionProperty_ _ExprResult_12, class UVerseEngine_Entity_entity* __verse_0x00000000__7, FVerseFunctionProperty_ _Callee_13, class UVGameplayRst_Transform_position_component* __verse_0xA82B0967_Position_4, FOptionProperty_ _FallibleType_14, FOptionProperty_ _ExprResultStack_15, FOptionProperty_ _ExprResult_16, class UVerseEngine_Entity_entity* __verse_0x00000000__8, FVerseFunctionProperty_ _Callee_17, class UVGameplayRst_Transform_rotation_component* __verse_0x78C70FF3_Rotation_4, FOptionProperty_ _FallibleType_18, FOptionProperty_ _ExprResultStack_19, FOptionProperty_ _ExprResult_20, class UVerseEngine_Entity_entity* __verse_0x00000000__9, FVerseFunctionProperty_ _Callee_21, class UVGameplayRst_Transform_scale_component* __verse_0xA376805D_Scale_4, FOptionProperty_ _FallibleType_22, FOptionProperty_ _ExprResultStack_23, FOptionProperty_ _ExprResult_24, class UVerseEngine_Entity_entity* __verse_0x00000000__10, FVerseFunctionProperty_ _Callee_25, class UVGameplayRst_GameObjects_immutable_model* __verse_0x95D09D0E_Result_11, uint64 _InstancingGraph_26, uint8 _ExprResult_27, FOptionProperty_ _ExprResultStack_28);
	void _InitCDO();
};

// 0xB0 (0xD8 - 0x28)
// VerseClass VGameplayRst.VGameplayRst_GameObjects_immutable_model
class UVGameplayRst_GameObjects_immutable_model : public UObject
{
public:
	class UVerseEngine_Entity_entity*            __verse_0xC79F2B5D_InternalObject;                 // 0x28(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVGameplayRst_Physics_collision_component* __verse_0x42159B8D_CollisionComp;                  // 0x30(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVGameplayRst_Geometry_fixed_mesh_component* __verse_0xA6788863_MeshComp;                       // 0x38(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVGameplayRst_Transform_position_component* __verse_0x325D2C22_PositionComp;                   // 0x40(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVGameplayRst_Transform_rotation_component* __verse_0xF3C6D2D3_RotationComp;                   // 0x48(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVGameplayRst_Transform_scale_component* __verse_0x1A7B631A_ScaleComp;                      // 0x50(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x97F9CCE7__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fimmutable__model_N_RGetTransform; // 0x58(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x4FA4A983__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fimmutable__model_N_RIsVisible; // 0x68(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x428E927A__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fpositionable_N_RGetPosition; // 0x78(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x7EE108BD__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RForwardVector; // 0x88(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xCCE08903__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RRightVector; // 0x98(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x8C1086E6__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RRotation; // 0xA8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x80D34CB6__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RUpVector; // 0xB8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x257E0AE6__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fscalable_N_RGetScale; // 0xC8(0x10)(InstancedReference, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VGameplayRst_GameObjects_immutable_model");
		return Clss;
	}

	struct FSpatialMath_vector3 _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RUpVector(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, class UVGameplayRst_Transform_rotation_component* __verse_0x00000000__1, FVerseFunctionProperty_ _Callee_0, const struct FTuple_L_R& _ExprResult_1);
	struct FVerseRotation _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RRotation(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, class UVGameplayRst_Transform_rotation_component* __verse_0x00000000__1, FVerseFunctionProperty_ _Callee_0, const struct FTuple_L_R& _ExprResult_1);
	struct FSpatialMath_vector3 _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RRightVector(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, class UVGameplayRst_Transform_rotation_component* __verse_0x00000000__1, FVerseFunctionProperty_ _Callee_0, const struct FTuple_L_R& _ExprResult_1);
	uint8 _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fimmutable__model_N_RIsVisible(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, class UVGameplayRst_Geometry_fixed_mesh_component* __verse_0x00000000__1, FVerseFunctionProperty_ _Callee_0, const struct FTuple_L_R& _ExprResult_1);
	struct FSpatialMath_transform _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fimmutable__model_N_RGetTransform(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, TMap<FVerseStringProperty_, uint8> _ExprResultStack_0, FVerseStringProperty_ _ExprResult_1, FVerseStringProperty_ _ExprResult_2, FVerseStringProperty_ _ExprResult_3, const struct FSpatialMath_vector3& _ExprResult_4, class UVGameplayRst_Transform_position_component* __verse_0x00000000__1, FVerseFunctionProperty_ _Callee_5, const struct FTuple_L_R& _ExprResult_6, const struct FVerseRotation& _ExprResult_7, class UVGameplayRst_Transform_rotation_component* __verse_0x00000000__2, FVerseFunctionProperty_ _Callee_8, const struct FTuple_L_R& _ExprResult_9, const struct FSpatialMath_vector3& _ExprResult_10, class UVGameplayRst_Transform_scale_component* __verse_0x00000000__3, FVerseFunctionProperty_ _Callee_11, const struct FTuple_L_R& _ExprResult_12);
	struct FSpatialMath_vector3 _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fscalable_N_RGetScale(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, class UVGameplayRst_Transform_scale_component* __verse_0x00000000__1, FVerseFunctionProperty_ _Callee_0, const struct FTuple_L_R& _ExprResult_1);
	struct FSpatialMath_vector3 _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fpositionable_N_RGetPosition(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, class UVGameplayRst_Transform_position_component* __verse_0x00000000__1, FVerseFunctionProperty_ _Callee_0, const struct FTuple_L_R& _ExprResult_1);
	struct FSpatialMath_vector3 _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RForwardVector(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, class UVGameplayRst_Transform_rotation_component* __verse_0x00000000__1, FVerseFunctionProperty_ _Callee_0, const struct FTuple_L_R& _ExprResult_1);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x160 (0x188 - 0x28)
// VerseClass VGameplayRst.VGameplayRst_GameObjects_model
class UVGameplayRst_GameObjects_model : public UObject
{
public:
	class UVerseEngine_Entity_entity*            __verse_0xC79F2B5D_InternalObject;                 // 0x28(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVGameplayRst_Physics_collision_component* __verse_0x42159B8D_CollisionComp;                  // 0x30(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVGameplayRst_Geometry_fixed_mesh_component* __verse_0xA6788863_MeshComp;                       // 0x38(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVGameplayRst_Transform_position_component* __verse_0x325D2C22_PositionComp;                   // 0x40(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVGameplayRst_Transform_rotation_component* __verse_0xF3C6D2D3_RotationComp;                   // 0x48(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVGameplayRst_Transform_scale_component* __verse_0x1A7B631A_ScaleComp;                      // 0x50(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xCDC7855D__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fmodel_N_RDestroy; // 0x58(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x0A80CBE6__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fmodel_N_RDisableCollision; // 0x68(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xE722450D__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fmodel_N_REnableCollision; // 0x78(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x2908AAFC__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fmodel_N_RGetTransform; // 0x88(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x57C12B8D__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fmodel_N_RHide; // 0x98(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xC65D0B3E__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fmodel_N_RIsVisible; // 0xA8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xC06F4D27__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fmodel_N_RSetTransform_L_Ntransform_R; // 0xB8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x591B080D__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fmodel_N_RShow; // 0xC8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xB07DDA0C__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__positionable_N_RSetPosition_L_Nvector3_R; // 0xD8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x28ABF5BD__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RApplyAdditionalRotation_L_Nrotation_R; // 0xE8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x7803819A__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RSetForwardVectorFromXY_L_Nvector3_M_Nvector3_R; // 0xF8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x5EFC99D0__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RSetRotation_L_Nrotation_R; // 0x108(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x42C9456C__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__scalable_N_RSetScale_L_Nvector3_R; // 0x118(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x428E927A__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fpositionable_N_RGetPosition; // 0x128(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x7EE108BD__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RForwardVector; // 0x138(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xCCE08903__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RRightVector; // 0x148(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x8C1086E6__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RRotation; // 0x158(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x80D34CB6__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RUpVector; // 0x168(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x257E0AE6__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fscalable_N_RGetScale; // 0x178(0x10)(InstancedReference, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VGameplayRst_GameObjects_model");
		return Clss;
	}

	struct FSpatialMath_vector3 _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RUpVector(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, class UVGameplayRst_Transform_rotation_component* __verse_0x00000000__1, FVerseFunctionProperty_ _Callee_0, const struct FTuple_L_R& _ExprResult_1);
	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fmodel_N_RShow(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, class UVGameplayRst_Geometry_fixed_mesh_component* __verse_0x00000000__2, enum class EVerseTrue _InvokeSureResultDummy_0, FVerseFunctionProperty_ _Callee_1, class UVGameplayRst_Physics_collision_component* __verse_0x00000000__3, enum class EVerseTrue _InvokeSureResultDummy_2, FVerseFunctionProperty_ _Callee_3);
	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fmodel_N_RSetTransform_L_Ntransform_R(const struct FSpatialMath_transform& __verse_0xB2CDDD72_Argument, class UVGameplayRst_Transform_position_component* __verse_0x00000000__2, enum class EVerseTrue _InvokeSureResultDummy_0, FVerseFunctionProperty_ _Callee_1, class UVGameplayRst_Transform_rotation_component* __verse_0x00000000__3, enum class EVerseTrue _InvokeSureResultDummy_2, FVerseFunctionProperty_ _Callee_3, class UVGameplayRst_Transform_scale_component* __verse_0x00000000__4, enum class EVerseTrue _InvokeSureResultDummy_4, FVerseFunctionProperty_ _Callee_5);
	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__scalable_N_RSetScale_L_Nvector3_R(const struct FSpatialMath_vector3& __verse_0xB2CDDD72_Argument, class UVGameplayRst_Transform_scale_component* __verse_0x00000000__1, enum class EVerseTrue _InvokeSureResultDummy_0, FVerseFunctionProperty_ _Callee_1);
	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RSetRotation_L_Nrotation_R(const struct FVerseRotation& __verse_0xB2CDDD72_Argument, class UVGameplayRst_Transform_rotation_component* __verse_0x00000000__1, enum class EVerseTrue _InvokeSureResultDummy_0, FVerseFunctionProperty_ _Callee_1);
	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__positionable_N_RSetPosition_L_Nvector3_R(const struct FSpatialMath_vector3& __verse_0xB2CDDD72_Argument, class UVGameplayRst_Transform_position_component* __verse_0x00000000__1, enum class EVerseTrue _InvokeSureResultDummy_0, FVerseFunctionProperty_ _Callee_1);
	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RSetForwardVectorFromXY_L_Nvector3_M_Nvector3_R(const struct FTuple_Lvector3_Mvector3_R& __verse_0xB2CDDD72_Argument, class UVGameplayRst_Transform_rotation_component* __verse_0x00000000__1, enum class EVerseTrue _InvokeSureResultDummy_0, FVerseFunctionProperty_ _Callee_1, const struct FTuple_Lvector3_Mvector3_R& _ExprResult_2);
	struct FVerseRotation _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RRotation(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, class UVGameplayRst_Transform_rotation_component* __verse_0x00000000__1, FVerseFunctionProperty_ _Callee_0, const struct FTuple_L_R& _ExprResult_1);
	struct FSpatialMath_vector3 _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RRightVector(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, class UVGameplayRst_Transform_rotation_component* __verse_0x00000000__1, FVerseFunctionProperty_ _Callee_0, const struct FTuple_L_R& _ExprResult_1);
	uint8 _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fmodel_N_RIsVisible(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, class UVGameplayRst_Geometry_fixed_mesh_component* __verse_0x00000000__1, FVerseFunctionProperty_ _Callee_0, const struct FTuple_L_R& _ExprResult_1);
	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fmodel_N_RHide(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, class UVGameplayRst_Geometry_fixed_mesh_component* __verse_0x00000000__2, enum class EVerseTrue _InvokeSureResultDummy_0, FVerseFunctionProperty_ _Callee_1, class UVGameplayRst_Physics_collision_component* __verse_0x00000000__3, enum class EVerseTrue _InvokeSureResultDummy_2, FVerseFunctionProperty_ _Callee_3);
	struct FSpatialMath_transform _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fmodel_N_RGetTransform(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, TMap<FVerseStringProperty_, uint8> _ExprResultStack_0, FVerseStringProperty_ _ExprResult_1, FVerseStringProperty_ _ExprResult_2, FVerseStringProperty_ _ExprResult_3, const struct FSpatialMath_vector3& _ExprResult_4, class UVGameplayRst_Transform_position_component* __verse_0x00000000__1, FVerseFunctionProperty_ _Callee_5, const struct FTuple_L_R& _ExprResult_6, const struct FVerseRotation& _ExprResult_7, class UVGameplayRst_Transform_rotation_component* __verse_0x00000000__2, FVerseFunctionProperty_ _Callee_8, const struct FTuple_L_R& _ExprResult_9, const struct FSpatialMath_vector3& _ExprResult_10, class UVGameplayRst_Transform_scale_component* __verse_0x00000000__3, FVerseFunctionProperty_ _Callee_11, const struct FTuple_L_R& _ExprResult_12);
	struct FSpatialMath_vector3 _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fscalable_N_RGetScale(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, class UVGameplayRst_Transform_scale_component* __verse_0x00000000__1, FVerseFunctionProperty_ _Callee_0, const struct FTuple_L_R& _ExprResult_1);
	struct FSpatialMath_vector3 _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fpositionable_N_RGetPosition(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, class UVGameplayRst_Transform_position_component* __verse_0x00000000__1, FVerseFunctionProperty_ _Callee_0, const struct FTuple_L_R& _ExprResult_1);
	struct FSpatialMath_vector3 _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RForwardVector(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, class UVGameplayRst_Transform_rotation_component* __verse_0x00000000__1, FVerseFunctionProperty_ _Callee_0, const struct FTuple_L_R& _ExprResult_1);
	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fmodel_N_REnableCollision(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, class UVGameplayRst_Physics_collision_component* __verse_0x00000000__1, enum class EVerseTrue _InvokeSureResultDummy_0, FVerseFunctionProperty_ _Callee_1);
	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fmodel_N_RDisableCollision(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, class UVGameplayRst_Physics_collision_component* __verse_0x00000000__1, enum class EVerseTrue _InvokeSureResultDummy_0, FVerseFunctionProperty_ _Callee_1);
	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fmodel_N_RDestroy(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, class UVerseEngine_Entity_entity* __verse_0x00000000__2, uint8 _InvokeSureResultDummy_0, FVerseFunctionProperty_ _Callee_1, const struct FTuple_L_R& _ExprResult_2);
	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RApplyAdditionalRotation_L_Nrotation_R(const struct FVerseRotation& __verse_0xB2CDDD72_Argument, class UVGameplayRst_Transform_rotation_component* __verse_0x00000000__1, enum class EVerseTrue _InvokeSureResultDummy_0, FVerseFunctionProperty_ _Callee_1);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass VGameplayRst.VGameplayRst_GameObjects_model_interface
class UVGameplayRst_GameObjects_model_interface : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VGameplayRst_GameObjects_model_interface");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// VerseClass VGameplayRst.VGameplayRst_GameObjects_mutable_model_interface
class UVGameplayRst_GameObjects_mutable_model_interface : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VGameplayRst_GameObjects_mutable_model_interface");
		return Clss;
	}

};

// 0x50 (0x78 - 0x28)
// VerseClass VGameplayRst.VGameplayRst_GameObjects_world_anchor
class UVGameplayRst_GameObjects_world_anchor : public UObject
{
public:
	class UVerseEngine_Entity_entity*            __verse_0xC79F2B5D_InternalObject;                 // 0x28(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVGameplayRst_Transform_position_component* __verse_0x325D2C22_PositionComp;                   // 0x30(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xFEB528BB__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fworld__anchor_N_RDestroy; // 0x38(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x687786B2__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fworld__anchor_N_RGetComponent; // 0x48(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xB07DDA0C__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__positionable_N_RSetPosition_L_Nvector3_R; // 0x58(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x428E927A__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fpositionable_N_RGetPosition; // 0x68(0x10)(InstancedReference, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VGameplayRst_GameObjects_world_anchor");
		return Clss;
	}

	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__positionable_N_RSetPosition_L_Nvector3_R(const struct FSpatialMath_vector3& __verse_0xB2CDDD72_Argument, class UVGameplayRst_Transform_position_component* __verse_0x00000000__1, enum class EVerseTrue _InvokeSureResultDummy_0, FVerseFunctionProperty_ _Callee_1);
	struct FSpatialMath_vector3 _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fpositionable_N_RGetPosition(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, class UVGameplayRst_Transform_position_component* __verse_0x00000000__1, FVerseFunctionProperty_ _Callee_0, const struct FTuple_L_R& _ExprResult_1);
	class UEntityComponent* _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fworld__anchor_N_RGetComponent(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fworld__anchor_N_RDestroy(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, class UVerseEngine_Entity_entity* __verse_0x00000000__2, uint8 _InvokeSureResultDummy_0, FVerseFunctionProperty_ _Callee_1, const struct FTuple_L_R& _ExprResult_2);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x88 (0x130 - 0xA8)
// VerseClass VGameplayRst.VGameplayRst_Geometry_fixed_mesh_component
class UVGameplayRst_Geometry_fixed_mesh_component : public UEntityActorStaticMeshRenderComponent
{
public:
	FVerseFunctionProperty_                      __verse_0x40FCA0FC__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2ffixed__mesh__component_N_RSetMesh_L_Nmesh_R; // 0xA8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xF968EB58__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2ffixed__mesh__component_N_RSetDefaultMesh_L_Ndefault__mesh__type_R; // 0xB8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xA10AB724__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2ffixed__mesh__component_N_RSetEnableCollision_L_Ncollision__type_R; // 0xC8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xB663E558__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2ffixed__mesh__component_N_RSetAsRootComponent_L_Nlogic_M_Nlogic_R; // 0xD8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x886B5BB6__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2ffixed__mesh__component_N_RSetMaterial_L_Nmaterial_R; // 0xE8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x57E77982__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2ffixed__mesh__component_N_RSetMaterialAtIndex_L_Nmaterial_M_Nint_R; // 0xF8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x38B3A8C2__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2ffixed__mesh__component_N_RSetVisibility_L_Nlogic_R; // 0x108(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x197826E0__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2ffixed__mesh__component_N_RIsVisible; // 0x118(0x10)(InstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_7DB7[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VGameplayRst_Geometry_fixed_mesh_component");
		return Clss;
	}

	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2ffixed__mesh__component_N_RSetVisibility_L_Nlogic_R(uint8 __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2ffixed__mesh__component_N_RSetMesh_L_Nmesh_R(class UAssets_mesh* __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2ffixed__mesh__component_N_RSetMaterialAtIndex_L_Nmaterial_M_Nint_R(const struct FTuple_Lmaterial_Mint_R& __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2ffixed__mesh__component_N_RSetMaterial_L_Nmaterial_R(class UAssets_material* __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2ffixed__mesh__component_N_RSetEnableCollision_L_Ncollision__type_R(enum class EVGameplayRst_Geometry_collision_type __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2ffixed__mesh__component_N_RSetDefaultMesh_L_Ndefault__mesh__type_R(enum class EVGameplayRst_Geometry_default_mesh_type __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2ffixed__mesh__component_N_RSetAsRootComponent_L_Nlogic_M_Nlogic_R(const struct FTuple_Llogic_Mlogic_R& __verse_0xB2CDDD72_Argument);
	uint8 _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2ffixed__mesh__component_N_RIsVisible(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0xD0 (0x150 - 0x80)
// VerseClass VGameplayRst.VGameplayRst_Geometry_skeletal_mesh_component
class UVGameplayRst_Geometry_skeletal_mesh_component : public UEntityActorSkeletalMeshRenderComponent
{
public:
	FVerseFunctionProperty_                      __verse_0x0154FAD3__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RSetSkeletalMesh_L_Nskeletal__mesh_R; // 0x80(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x624B6074__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RSetAnimationMode_L_Ndefault__animation__mode__type_R; // 0x90(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x67C80806__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RSetAnimationInstance_L_Nanimation__instance_R; // 0xA0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x3A850C11__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RSetAnimationBlueprint_L_Nanimation__blueprint_R; // 0xB0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x509E414C__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RSetAnimation_L_Nanimation_R; // 0xC0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xA861381D__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RBeginAnimation_L_Nlogic_R; // 0xD0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xFF409226__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_REndAnimation; // 0xE0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x1F4491E0__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RIsPlayingAnimation; // 0xF0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xC4F7273A__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RSetMaterial_L_Nmaterial_R; // 0x100(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x5D473AF9__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RSetAnimationPosition__FIXME_L_Nfloat_M_Nlogic_R; // 0x110(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x14D65B9D__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RGetAnimationPosition__FIXME; // 0x120(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x2B88CE7C__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RSetAnimationPlayRate__FIXME_L_Nfloat_R; // 0x130(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xF39F2233__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RGetAnimationPlayRate__FIXME; // 0x140(0x10)(InstancedReference, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VGameplayRst_Geometry_skeletal_mesh_component");
		return Clss;
	}

	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RSetSkeletalMesh_L_Nskeletal__mesh_R(class UAssets_skeletal_mesh* __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RSetMaterial_L_Nmaterial_R(class UAssets_material* __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RSetAnimationPosition__FIXME_L_Nfloat_M_Nlogic_R(const struct FTuple_Lfloat_Mlogic_R& __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RSetAnimationPlayRate__FIXME_L_Nfloat_R(double __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RSetAnimationMode_L_Ndefault__animation__mode__type_R(enum class EVGameplayRst_Geometry_default_animation_mode_type __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RSetAnimationInstance_L_Nanimation__instance_R(class UAssets_animation_instance* __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RSetAnimationBlueprint_L_Nanimation__blueprint_R(class UAssets_animation_blueprint* __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RSetAnimation_L_Nanimation_R(class UAssets_animation* __verse_0xB2CDDD72_Argument);
	uint8 _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RIsPlayingAnimation(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	double _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RGetAnimationPosition__FIXME(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	double _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RGetAnimationPlayRate__FIXME(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_REndAnimation(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RBeginAnimation_L_Nlogic_R(uint8 __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x20 (0x158 - 0x138)
// VerseClass VGameplayRst.VGameplayRst_LevelStreaming_level_streaming_component
class UVGameplayRst_LevelStreaming_level_streaming_component : public UVerseLevelStreamingComponentBase
{
public:
	FVerseFunctionProperty_                      __verse_0x24551F7B__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLevelStreaming_2flevel__streaming__component_N_RRequestLoadLevel_L_Nlevel_M_Ntime__span_M_N_Kchar_R; // 0x138(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x85D1DD78__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLevelStreaming_2flevel__streaming__component_N_RRequestUnloadLevel_L_Ntime__span_M_N_Kchar_R; // 0x148(0x10)(InstancedReference, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VGameplayRst_LevelStreaming_level_streaming_component");
		return Clss;
	}

	FOptionProperty_ _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLevelStreaming_2flevel__streaming__component_N_RRequestUnloadLevel_L_Ntime__span_M_N_Kchar_R(const struct FTuple_Ltime__span_M_Kchar_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLevelStreaming_2flevel__streaming__component_N_RRequestLoadLevel_L_Nlevel_M_Ntime__span_M_N_Kchar_R(const struct FTuple_Llevel_Mtime__span_M_Kchar_R& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0xA0 (0x138 - 0x98)
// VerseClass VGameplayRst.VGameplayRst_Lights_point_light_component
class UVGameplayRst_Lights_point_light_component : public UPointLightComponentBase
{
public:
	FVerseFunctionProperty_                      __verse_0xC2DFF28C__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fpoint__light__component_N_RSetIntensity_L_Nfloat_R; // 0x98(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x5875F432__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fpoint__light__component_N_RSetColor_L_Ncolor_R; // 0xA8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xA473109D__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fpoint__light__component_N_RSetSourceRadius_L_Nfloat_R; // 0xB8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xEB27FC48__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fpoint__light__component_N_RSetSourceLength_L_Nfloat_R; // 0xC8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xDC0B306E__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fpoint__light__component_N_RSetAttenuationRadius_L_Nfloat_R; // 0xD8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x569246B7__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fpoint__light__component_N_RGetIntensity; // 0xE8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xB7E7C898__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fpoint__light__component_N_RGetColor; // 0xF8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x97195CF4__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fpoint__light__component_N_RGetSourceRadius; // 0x108(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x2F5ADAF1__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fpoint__light__component_N_RGetSourceLength; // 0x118(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xF0F4ACC3__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fpoint__light__component_N_RGetAttenuationRadius; // 0x128(0x10)(InstancedReference, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VGameplayRst_Lights_point_light_component");
		return Clss;
	}

	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fpoint__light__component_N_RSetSourceRadius_L_Nfloat_R(double __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fpoint__light__component_N_RSetSourceLength_L_Nfloat_R(double __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fpoint__light__component_N_RSetIntensity_L_Nfloat_R(double __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fpoint__light__component_N_RSetColor_L_Ncolor_R(const struct FColors_color& __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fpoint__light__component_N_RSetAttenuationRadius_L_Nfloat_R(double __verse_0xB2CDDD72_Argument);
	double _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fpoint__light__component_N_RGetSourceRadius(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	double _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fpoint__light__component_N_RGetSourceLength(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	double _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fpoint__light__component_N_RGetIntensity(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	struct FColors_color _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fpoint__light__component_N_RGetColor(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	double _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fpoint__light__component_N_RGetAttenuationRadius(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0xE0 (0x178 - 0x98)
// VerseClass VGameplayRst.VGameplayRst_Lights_spot_light_component
class UVGameplayRst_Lights_spot_light_component : public USpotLightComponentBase
{
public:
	FVerseFunctionProperty_                      __verse_0x585E640E__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RSetIntensity_L_Nfloat_R; // 0x98(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x99C6DCAD__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RSetColor_L_Ncolor_R; // 0xA8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xE1238129__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RSetSourceRadius_L_Nfloat_R; // 0xB8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xAE776DFC__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RSetSourceLength_L_Nfloat_R; // 0xC8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x94410908__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RSetInnerConeAngle_L_Nfloat_R; // 0xD8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xD8B9F7FD__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RSetOuterConeAngle_L_Nfloat_R; // 0xE8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x2FE7E4B1__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RSetAttenuationRadius_L_Nfloat_R; // 0xF8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xE792FB75__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RGetIntensity; // 0x108(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xA0AA2100__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RGetColor; // 0x118(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x5B272EF6__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RGetSourceRadius; // 0x128(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xE364A8F3__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RGetSourceLength; // 0x138(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x238C15DD__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RGetInnerConeAngle; // 0x148(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xE2ABA0D8__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RGetOuterConeAngle; // 0x158(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xA51DA8F7__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RGetAttenuationRadius; // 0x168(0x10)(InstancedReference, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VGameplayRst_Lights_spot_light_component");
		return Clss;
	}

	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RSetSourceRadius_L_Nfloat_R(double __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RSetSourceLength_L_Nfloat_R(double __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RSetOuterConeAngle_L_Nfloat_R(double __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RSetIntensity_L_Nfloat_R(double __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RSetInnerConeAngle_L_Nfloat_R(double __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RSetColor_L_Ncolor_R(const struct FColors_color& __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RSetAttenuationRadius_L_Nfloat_R(double __verse_0xB2CDDD72_Argument);
	double _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RGetSourceRadius(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	double _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RGetSourceLength(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	double _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RGetOuterConeAngle(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	double _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RGetIntensity(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	double _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RGetInnerConeAngle(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	struct FColors_color _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RGetColor(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	double _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RGetAttenuationRadius(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x78 (0xD8 - 0x60)
// VerseClass VGameplayRst.VGameplayRst_Messaging_debug_command_component
class UVGameplayRst_Messaging_debug_command_component : public UEntityComponent
{
public:
	FVerseFunctionProperty_                      __verse_0xEAC1FE47___WaitForCommand_L_N_Kchar_R;   // 0x60(0x10)(InstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_7DC7[0x68];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VGameplayRst_Messaging_debug_command_component");
		return Clss;
	}

	class UConcurrency_task* __WaitForCommand_L_N_Kchar_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, FVerseStringProperty_ __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass VGameplayRst.VGameplayRst_Physics
class UVGameplayRst_Physics : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VGameplayRst_Physics");
		return Clss;
	}

	struct FVGameplayRst_Physics_hit_result VGameplayRst_Physics_hit_result_OverrideFactory(TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap);
	struct FVGameplayRst_Physics_hit_result VGameplayRst_Physics_hit_result_Factory();
	void _InitCDO();
};

// 0x1C8 (0x2C8 - 0x100)
// VerseClass VGameplayRst.VGameplayRst_Physics_collision_component
class UVGameplayRst_Physics_collision_component : public UEntityActorCollisionComponent
{
public:
	uint8                                        Pad_7DCC[0x10];                                    // Fixing Size After Last Property..
	FVerseFunctionProperty_                      __verse_0xBF5D5FE0__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetEnabled_L_Nlogic_R; // 0x110(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xF3C8B026__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RGetEnabled; // 0x120(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xE0DC0F6A_WaitHit;                        // 0x130(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x0947A18A_WaitBeginOverlap;               // 0x140(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xCE395CCB_WaitEndOverlap;                 // 0x150(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x0827BC0B__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetGravityEnabled_L_Nlogic_R; // 0x160(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x28E213E8__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RGetGravityEnabled; // 0x170(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x2A797DC5__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetSendHitEventsOnCollide_L_Nlogic_R; // 0x180(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x13CD6AFE__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RGetSendHitEventsOnCollide; // 0x190(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xEB2A1711__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetSendOverlapEvents_L_Nlogic_R; // 0x1A0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xC235A7DC__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RGetSendOverlapEvents; // 0x1B0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x17D70886__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetCollisionProfileName_L_N_Kchar_R; // 0x1C0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x9DBF5EB1__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RGetCollisionProfileName; // 0x1D0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x2FED42F9__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetMovable_L_Nlogic_R; // 0x1E0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x2853B2CC__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RGetMovable; // 0x1F0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xC88974C5__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetUseContinuousCollisionDetection_L_Nlogic_R; // 0x200(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x9F2CCF47__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RGetUseContinuousCollisionDetection; // 0x210(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x887CEBC1__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetDegreeOfFreedomContraint_L_Ndof__movement__mode_R; // 0x220(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x1D508CCE__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetCustomDegreeOfFreedomConstrain_L_Nvector3_R; // 0x230(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x6F09B370__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetMeshCollisionShapeMode; // 0x240(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xE88F3296__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetMeshCollisionShapeMode_L_Nmesh_R; // 0x250(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x96B209DF__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetBoxCollisionShapeMode_L_Nvector3_R; // 0x260(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x27174323__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetCapsuleCollisionShapeMode_L_Nfloat_M_Nfloat_R; // 0x270(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x70545323__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetSphereCollisionShapeMode_L_Nfloat_R; // 0x280(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x5223C7B1__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RGetCollisionShapeMode; // 0x290(0x10)(InstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_7DCD[0x28];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VGameplayRst_Physics_collision_component");
		return Clss;
	}

	class UConcurrency_task* WaitHit(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* WaitEndOverlap(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* WaitBeginOverlap(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetUseContinuousCollisionDetection_L_Nlogic_R(uint8 __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetSphereCollisionShapeMode_L_Nfloat_R(double __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetSendOverlapEvents_L_Nlogic_R(uint8 __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetSendHitEventsOnCollide_L_Nlogic_R(uint8 __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetMovable_L_Nlogic_R(uint8 __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetMeshCollisionShapeMode(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetMeshCollisionShapeMode_L_Nmesh_R(class UAssets_mesh* __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetGravityEnabled_L_Nlogic_R(uint8 __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetEnabled_L_Nlogic_R(uint8 __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetDegreeOfFreedomContraint_L_Ndof__movement__mode_R(enum class EVGameplayRst_Physics_dof_movement_mode __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetCustomDegreeOfFreedomConstrain_L_Nvector3_R(const struct FSpatialMath_vector3& __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetCollisionProfileName_L_N_Kchar_R(FVerseStringProperty_ __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetCapsuleCollisionShapeMode_L_Nfloat_M_Nfloat_R(const struct FTuple_Lfloat_Mfloat_R& __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetBoxCollisionShapeMode_L_Nvector3_R(const struct FSpatialMath_vector3& __verse_0xB2CDDD72_Argument);
	uint8 _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RGetUseContinuousCollisionDetection(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	uint8 _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RGetSendOverlapEvents(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	uint8 _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RGetSendHitEventsOnCollide(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	uint8 _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RGetMovable(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	uint8 _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RGetGravityEnabled(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	uint8 _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RGetEnabled(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	enum class EVGameplayRst_Physics_collision_shape_mode _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RGetCollisionShapeMode(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	FVerseStringProperty_ _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RGetCollisionProfileName(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x48 (0x70 - 0x28)
// VerseClass VGameplayRst.VGameplayRst_Physics_overlap_result
class UVGameplayRst_Physics_overlap_result : public UObject
{
public:
	int64                                        __verse_0x592C3A0F_OtherEntityID;                  // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVGameplayRst_Physics_collision_component* __verse_0x15DAA648_OtherComponent;                 // 0x30(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	uint8                                        __verse_0xCDE15551_FromSweep : 1;                  // Mask: 0x1, PropSize: 0x10x38(0x1)(InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_436 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_7DCE[0x7];                                     // Fixing Size After Last Property..
	struct FSpatialMath_vector3                  __verse_0x02291CB0_SweepHitNormal;                 // 0x40(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FSpatialMath_vector3                  __verse_0xF4E2A3DA_SweepHitLocation;               // 0x58(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VGameplayRst_Physics_overlap_result");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0xE8 (0x110 - 0x28)
// VerseClass VGameplayRst.VGameplayRst_Physics_physics_trace
class UVGameplayRst_Physics_physics_trace : public UObject
{
public:
	FVerseFunctionProperty_                      __verse_0xC7EB7B66_WaitPhysicsTrace;               // 0x28(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x3E793B2A__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fphysics__trace_N_RInitPhysicsTrace_L_Ncomponent_M_Nphysics__trace__category_M_Nphysics__trace__type_M_Nphysics__trace__shape_M_Nphysics__trace__channel_M_Nvector3_M_Nvector3_M_Nlogic_M_Nvector3_M_Nfloat_M_N_Kchar_R; // 0x38(0x10)(InstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_7DD0[0xC8];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VGameplayRst_Physics_physics_trace");
		return Clss;
	}

	class UConcurrency_task* WaitPhysicsTrace(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fphysics__trace_N_RInitPhysicsTrace_L_Ncomponent_M_Nphysics__trace__category_M_Nphysics__trace__type_M_Nphysics__trace__shape_M_Nphysics__trace__channel_M_Nvector3_M_Nvector3_M_Nlogic_M_Nvector3_M_Nfloat_M_N_Kchar_R(const struct FTuple_Lcomponent_Mphysics__trace__category_Mphysics__trace__type_Mphysics__trace__shape_Mphysics__trace__channel_Mvector3_Mvector3_Mlogic_Mvector3_Mfloat_M_Kchar_R& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass VGameplayRst.VGameplayRst_Transform_mutable_positionable
class UVGameplayRst_Transform_mutable_positionable : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VGameplayRst_Transform_mutable_positionable");
		return Clss;
	}

	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__positionable_N_RSetPosition_L_Nvector3_R(const struct FSpatialMath_vector3& __verse_0xB2CDDD72_Argument);
};

// 0x0 (0x28 - 0x28)
// VerseClass VGameplayRst.VGameplayRst_Transform_mutable_rotatable
class UVGameplayRst_Transform_mutable_rotatable : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VGameplayRst_Transform_mutable_rotatable");
		return Clss;
	}

	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RSetRotation_L_Nrotation_R(const struct FVerseRotation& __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RSetForwardVectorFromXY_L_Nvector3_M_Nvector3_R(const struct FTuple_Lvector3_Mvector3_R& __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RApplyAdditionalRotation_L_Nrotation_R(const struct FVerseRotation& __verse_0xB2CDDD72_Argument);
};

// 0x0 (0x28 - 0x28)
// VerseClass VGameplayRst.VGameplayRst_Transform_mutable_scalable
class UVGameplayRst_Transform_mutable_scalable : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VGameplayRst_Transform_mutable_scalable");
		return Clss;
	}

	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__scalable_N_RSetScale_L_Nvector3_R(const struct FSpatialMath_vector3& __verse_0xB2CDDD72_Argument);
};

// 0x50 (0xD8 - 0x88)
// VerseClass VGameplayRst.VGameplayRst_Transform_position_component
class UVGameplayRst_Transform_position_component : public UEntityActorPositionComponent
{
public:
	FVerseFunctionProperty_                      __verse_0x76BA8E33__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fposition__component_N_RAddToPosition_L_Nvector3_R; // 0x88(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xB07DDA0C__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__positionable_N_RSetPosition_L_Nvector3_R; // 0x98(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x428E927A__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fpositionable_N_RGetPosition; // 0xA8(0x10)(InstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_7DD2[0x20];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VGameplayRst_Transform_position_component");
		return Clss;
	}

	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__positionable_N_RSetPosition_L_Nvector3_R(const struct FSpatialMath_vector3& __verse_0xB2CDDD72_Argument);
	struct FSpatialMath_vector3 _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fpositionable_N_RGetPosition(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fposition__component_N_RAddToPosition_L_Nvector3_R(const struct FSpatialMath_vector3& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass VGameplayRst.VGameplayRst_Transform_positionable
class UVGameplayRst_Transform_positionable : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VGameplayRst_Transform_positionable");
		return Clss;
	}

	struct FSpatialMath_vector3 _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fpositionable_N_RGetPosition(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
};

// 0x0 (0x28 - 0x28)
// VerseClass VGameplayRst.VGameplayRst_Transform_rotatable
class UVGameplayRst_Transform_rotatable : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VGameplayRst_Transform_rotatable");
		return Clss;
	}

	struct FSpatialMath_vector3 _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RUpVector(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	struct FVerseRotation _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RRotation(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	struct FSpatialMath_vector3 _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RRightVector(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	struct FSpatialMath_vector3 _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RForwardVector(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
};

// 0xA0 (0x130 - 0x90)
// VerseClass VGameplayRst.VGameplayRst_Transform_rotation_component
class UVGameplayRst_Transform_rotation_component : public UEntityActorRotationComponent
{
public:
	FVerseFunctionProperty_                      __verse_0x5EFC99D0__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RSetRotation_L_Nrotation_R; // 0x90(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x28ABF5BD__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RApplyAdditionalRotation_L_Nrotation_R; // 0xA0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x7803819A__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RSetForwardVectorFromXY_L_Nvector3_M_Nvector3_R; // 0xB0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x8C1086E6__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RRotation; // 0xC0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x7EE108BD__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RForwardVector; // 0xD0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x80D34CB6__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RUpVector; // 0xE0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xCCE08903__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RRightVector; // 0xF0(0x10)(InstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_7DDF[0x30];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VGameplayRst_Transform_rotation_component");
		return Clss;
	}

	struct FSpatialMath_vector3 _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RUpVector(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, FVerseFunctionProperty_ _Callee_0, const struct FTuple_Lrotation_Mtuple_L_R_Mtuple_L_R_R& _ExprResult_1, const struct FVerseRotation& _ExprResultStack_2, FVerseFunctionProperty_ _Callee_3, const struct FTuple_L_R& _ExprResult_4, const struct FTuple_L_R& _ExprResult_5, const struct FTuple_L_R& _ExprResult_6);
	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RSetRotation_L_Nrotation_R(const struct FVerseRotation& __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RSetForwardVectorFromXY_L_Nvector3_M_Nvector3_R(const struct FTuple_Lvector3_Mvector3_R& __verse_0xB2CDDD72_Argument);
	struct FVerseRotation _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RRotation(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	struct FSpatialMath_vector3 _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RRightVector(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, FVerseFunctionProperty_ _Callee_0, const struct FTuple_Lrotation_Mtuple_L_R_Mtuple_L_R_R& _ExprResult_1, const struct FVerseRotation& _ExprResultStack_2, FVerseFunctionProperty_ _Callee_3, const struct FTuple_L_R& _ExprResult_4, const struct FTuple_L_R& _ExprResult_5, const struct FTuple_L_R& _ExprResult_6);
	struct FSpatialMath_vector3 _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RForwardVector(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, FVerseFunctionProperty_ _Callee_0, const struct FTuple_Lrotation_Mtuple_L_R_Mtuple_L_R_R& _ExprResult_1, const struct FVerseRotation& _ExprResultStack_2, FVerseFunctionProperty_ _Callee_3, const struct FTuple_L_R& _ExprResult_4, const struct FTuple_L_R& _ExprResult_5, const struct FTuple_L_R& _ExprResult_6);
	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RApplyAdditionalRotation_L_Nrotation_R(const struct FVerseRotation& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass VGameplayRst.VGameplayRst_Transform_scalable
class UVGameplayRst_Transform_scalable : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VGameplayRst_Transform_scalable");
		return Clss;
	}

	struct FSpatialMath_vector3 _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fscalable_N_RGetScale(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
};

// 0x50 (0xD8 - 0x88)
// VerseClass VGameplayRst.VGameplayRst_Transform_scale_component
class UVGameplayRst_Transform_scale_component : public UEntityActorScaleComponent
{
public:
	FVerseFunctionProperty_                      __verse_0xD330A66A__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fscale__component_N_RAddToScale_L_Nvector3_R; // 0x88(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x42C9456C__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__scalable_N_RSetScale_L_Nvector3_R; // 0x98(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x257E0AE6__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fscalable_N_RGetScale; // 0xA8(0x10)(InstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_7DE2[0x20];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VGameplayRst_Transform_scale_component");
		return Clss;
	}

	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__scalable_N_RSetScale_L_Nvector3_R(const struct FSpatialMath_vector3& __verse_0xB2CDDD72_Argument);
	struct FSpatialMath_vector3 _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fscalable_N_RGetScale(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fscale__component_N_RAddToScale_L_Nvector3_R(const struct FSpatialMath_vector3& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x30 (0xD0 - 0xA0)
// VerseClass VGameplayRst.VGameplayRst_VFX_particle_system_component
class UVGameplayRst_VFX_particle_system_component : public UParticleSystemComponentBase
{
public:
	FVerseFunctionProperty_                      __verse_0x33E057BE__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fVFX_2fparticle__system__component_N_RSetParticleSystem_L_Nparticle__system_R; // 0xA0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x4BD9B24E__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fVFX_2fparticle__system__component_N_RActivate; // 0xB0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x37CA235E__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fVFX_2fparticle__system__component_N_RDeactivate; // 0xC0(0x10)(InstancedReference, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VGameplayRst_VFX_particle_system_component");
		return Clss;
	}

	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fVFX_2fparticle__system__component_N_RSetParticleSystem_L_Nparticle__system_R(class UAssets_particle_system* __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fVFX_2fparticle__system__component_N_RDeactivate(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fVGameplayRst_2fVFX_2fparticle__system__component_N_RActivate(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
