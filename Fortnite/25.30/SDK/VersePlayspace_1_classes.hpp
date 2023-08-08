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
// VerseClass VersePlayspace.$SolarisSignatureFunctionOuter
class U_SolarisSignatureFunctionOuter : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("$SolarisSignatureFunctionOuter");
		return Clss;
	}

};

// 0xE0 (0x140 - 0x60)
// VerseClass VersePlayspace.Playspace_playspace_component
class UPlayspace_playspace_component : public UEntityComponent
{
public:
	FVerseFunctionProperty_                      __verse_0xC8D21C45__L_2fUnrealEngine_2ecom_2fPlayspace_2fplayspace__component_N_RgetPlayers_L_NPlayerType_R; // 0x60(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x68A1B3A5__L_2fUnrealEngine_2ecom_2fPlayspace_2fplayspace__component_N_RgetPlayerCount_L_NPlayerType_R; // 0x70(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x112880C6___WaitForSetupComplete;         // 0x80(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x579A67A4___WaitForMatchBegin;            // 0x90(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xB30FF5AF___WaitForMatchEnd;              // 0xA0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xF324C2B5___WaitForPlayerAdded;           // 0xB0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x74B0F4F3___WaitForPlayerRemoved;         // 0xC0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x4908ACA9__L_2fUnrealEngine_2ecom_2fPlayspace_2fplayspace__component_N_RsetQueueUserForRespawnWhenAdded_L_Nlogic_R; // 0xD0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xC9B0AC4A__L_2fUnrealEngine_2ecom_2fPlayspace_2fplayspace__component_N_RSetPlayerComponentClass_L_NComponentType_20where_20ComponentType_R; // 0xE0(0x10)(InstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_62E8[0x50];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("Playspace_playspace_component");
		return Clss;
	}

	void _L_2fUnrealEngine_2ecom_2fPlayspace_2fplayspace__component_N_RsetQueueUserForRespawnWhenAdded_L_Nlogic_R(uint8 __verse_0xB2CDDD72_Argument);
	TArray<class USimulation_player_component*> _L_2fUnrealEngine_2ecom_2fPlayspace_2fplayspace__component_N_RgetPlayers_L_NPlayerType_R(enum class EPlayspace_PlayerType __verse_0xB2CDDD72_Argument);
	int64 _L_2fUnrealEngine_2ecom_2fPlayspace_2fplayspace__component_N_RgetPlayerCount_L_NPlayerType_R(enum class EPlayspace_PlayerType __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* __WaitForSetupComplete(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* __WaitForPlayerRemoved(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* __WaitForPlayerAdded(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* __WaitForMatchEnd(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	class UConcurrency_task* __WaitForMatchBegin(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fPlayspace_2fplayspace__component_N_RSetPlayerComponentClass_L_NComponentType_20where_20ComponentType_R(class UClass* __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x9 (0x159 - 0x150)
// VerseClass VersePlayspace.task_Playspace_playspace_component$__WaitForMatchBegin
class UTask_Playspace_playspace_component___WaitForMatchBegin : public UConcurrency_task
{
public:
	class UPlayspace_playspace_component*        _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x158(0x1)(Parm, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_Playspace_playspace_component$__WaitForMatchBegin");
		return Clss;
	}

	int64 Update();
};

// 0x9 (0x159 - 0x150)
// VerseClass VersePlayspace.task_Playspace_playspace_component$__WaitForMatchEnd
class UTask_Playspace_playspace_component___WaitForMatchEnd : public UConcurrency_task
{
public:
	class UPlayspace_playspace_component*        _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x158(0x1)(Parm, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_Playspace_playspace_component$__WaitForMatchEnd");
		return Clss;
	}

	int64 Update();
};

// 0x18 (0x168 - 0x150)
// VerseClass VersePlayspace.task_Playspace_playspace_component$__WaitForPlayerAdded
class UTask_Playspace_playspace_component___WaitForPlayerAdded : public UConcurrency_task
{
public:
	class UPlayspace_playspace_component*        _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x158(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_62F3[0x7];                                     // Fixing Size After Last Property
	class USimulation_player_component*          _RetVal;                                           // 0x160(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_Playspace_playspace_component$__WaitForPlayerAdded");
		return Clss;
	}

	int64 Update();
};

// 0x18 (0x168 - 0x150)
// VerseClass VersePlayspace.task_Playspace_playspace_component$__WaitForPlayerRemoved
class UTask_Playspace_playspace_component___WaitForPlayerRemoved : public UConcurrency_task
{
public:
	class UPlayspace_playspace_component*        _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x158(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_62F6[0x7];                                     // Fixing Size After Last Property
	class USimulation_player_component*          _RetVal;                                           // 0x160(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_Playspace_playspace_component$__WaitForPlayerRemoved");
		return Clss;
	}

	int64 Update();
};

// 0x9 (0x159 - 0x150)
// VerseClass VersePlayspace.task_Playspace_playspace_component$__WaitForSetupComplete
class UTask_Playspace_playspace_component___WaitForSetupComplete : public UConcurrency_task
{
public:
	class UPlayspace_playspace_component*        _Self;                                             // 0x150(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x158(0x1)(Parm, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("task_Playspace_playspace_component$__WaitForSetupComplete");
		return Clss;
	}

	int64 Update();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
