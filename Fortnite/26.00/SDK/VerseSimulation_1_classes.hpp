#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// VerseClass VerseSimulation.$SolarisSignatureFunctionOuter
class U_SolarisSignatureFunctionOuter : public UObject
{
public:

	static class UClass* StaticClass();
	static class U_SolarisSignatureFunctionOuter* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// VerseClass VerseSimulation.Simulation
class USimulation : public UObject
{
public:

	static class UClass* StaticClass();
	static class USimulation* GetDefaultObj();

	class UConcurrency_task* Sleep_L_Nfloat_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, double __verse_0xB2CDDD72_Argument);
	double _L_2fVerse_2eorg_2fSimulation_N_RGetSimulationElapsedTime(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	class USimulation_session* _L_2fVerse_2eorg_2fSimulation_N_RGetSession(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	FOptionalProperty_ _L_2fVerse_2eorg_2fSimulation_N_RGetPlayerComponentByIndex_L_Nint_R(int64 __verse_0xB2CDDD72_Argument);
	FOptionalProperty_ _L_2fVerse_2eorg_2fSimulation_N_RGetOrCreateComponentOfTypeForPlayer_L_Nint_M_NType_20where_20Type_R(const struct FTuple_Lint_Many_R& __verse_0xB2CDDD72_Argument);
	FOptionalProperty_ _L_2fVerse_2eorg_2fSimulation_N_RGetOrCreateComponentOfTypeForPlayer_L_Nplayer__component_M_NType_20where_20Type_R(const struct FTuple_Lplayer__component_Many_R& __verse_0xB2CDDD72_Argument);
	FOptionalProperty_ _L_2fVerse_2eorg_2fSimulation_N_RGetComponentOfTypeForPlayer_L_Nplayer__component_M_NType_20where_20Type_R(const struct FTuple_Lplayer__component_Many_R& __verse_0xB2CDDD72_Argument);
	FOptionalProperty_ _L_2fVerse_2eorg_2fSimulation_N_RGetComponentOfTypeForPlayer_L_Nint_M_NType_20where_20Type_R(const struct FTuple_Lint_Many_R& __verse_0xB2CDDD72_Argument);
	void _InitCDO();
};

// 0x0 (0x30 - 0x30)
// VerseClass VerseSimulation.Simulation_agent
class USimulation_agent : public UVerseAgent
{
public:

	static class UClass* StaticClass();
	static class USimulation_agent* GetDefaultObj();

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x18 (0x48 - 0x30)
// VerseClass VerseSimulation.Simulation_player
class USimulation_player : public USimulation_agent
{
public:
	FVerseFunctionProperty_                      __verse_0xE07837A2__L_2fVerse_2eorg_2fSimulation_2fplayer_N_RIsActive; // 0x30(0x10)(InstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_5E35[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class USimulation_player* GetDefaultObj();

	FOptionalProperty_ _L_2fVerse_2eorg_2fSimulation_2fplayer_N_RIsActive(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseSimulation.Simulation_player_array_helper
class USimulation_player_array_helper : public UObject
{
public:

	static class UClass* StaticClass();
	static class USimulation_player_array_helper* GetDefaultObj();

	int64 _L_2fVerse_2eorg_2fSimulation_2fplayer__array__helper_N_RTestFunc_L_Nint_R(int64 __verse_0xB2CDDD72_Argument);
	void _InitCDO();
};

// 0x10 (0xE0 - 0xD0)
// VerseClass VerseSimulation.Simulation_player_component
class USimulation_player_component : public UEntityActorPlayerComponent
{
public:
	FVerseFunctionProperty_                      __verse_0x2959FF1C__L_2fVerse_2eorg_2fSimulation_2fplayer__component_N_RGetHandle; // 0xD0(0x10)(InstancedReference, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class USimulation_player_component* GetDefaultObj();

	class USimulation_player* _L_2fVerse_2eorg_2fSimulation_2fplayer__component_N_RGetHandle(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x98 - 0x98)
// VerseClass VerseSimulation.Simulation_player_multicast_delegate
class USimulation_player_multicast_delegate : public UVerseEngine_multicast_delegate
{
public:

	static class UClass* StaticClass();
	static class USimulation_player_multicast_delegate* GetDefaultObj();

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseSimulation.Simulation_session
class USimulation_session : public UObject
{
public:

	static class UClass* StaticClass();
	static class USimulation_session* GetDefaultObj();

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseSimulation.Simulation_team
class USimulation_team : public UVerseTeam
{
public:

	static class UClass* StaticClass();
	static class USimulation_team* GetDefaultObj();

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x8 (0x148 - 0x140)
// VerseClass VerseSimulation.task_Simulation$Sleep_L_Nfloat_R
class UTask_Simulation_Sleep_L_Nfloat_R : public UConcurrency_task
{
public:
	double                                       __verse_0xB2CDDD72_Argument;                       // 0x140(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UTask_Simulation_Sleep_L_Nfloat_R* GetDefaultObj();

	int64 Update();
};

}


