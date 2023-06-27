#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function VerseSimulation.Simulation.Sleep_L_Nfloat_R
// (Final, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* USimulation::Sleep_L_Nfloat_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, double __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("Simulation", "Sleep_L_Nfloat_R");

	Params::USimulation_Sleep_L_Nfloat_R_Params Parms;

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseSimulation.Simulation._L_2fVerse_2eorg_2fSimulation_N_RGetSimulationElapsedTime
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// double                             RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double USimulation::_L_2fVerse_2eorg_2fSimulation_N_RGetSimulationElapsedTime(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("Simulation", "_L_2fVerse_2eorg_2fSimulation_N_RGetSimulationElapsedTime");

	Params::USimulation__L_2fVerse_2eorg_2fSimulation_N_RGetSimulationElapsedTime_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VerseSimulation.Simulation._L_2fVerse_2eorg_2fSimulation_N_RGetPlayerComponentByIndex_L_Nint_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int64                              __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FOptionProperty_                   RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

FOptionProperty_ USimulation::_L_2fVerse_2eorg_2fSimulation_N_RGetPlayerComponentByIndex_L_Nint_R(int64 __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("Simulation", "_L_2fVerse_2eorg_2fSimulation_N_RGetPlayerComponentByIndex_L_Nint_R");

	Params::USimulation__L_2fVerse_2eorg_2fSimulation_N_RGetPlayerComponentByIndex_L_Nint_R_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VerseSimulation.Simulation._L_2fVerse_2eorg_2fSimulation_N_RGetOrCreateComponentOfTypeForPlayer_L_Nplayer__component_M_Ntype_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lplayer__component_Many_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionProperty_                   RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

FOptionProperty_ USimulation::_L_2fVerse_2eorg_2fSimulation_N_RGetOrCreateComponentOfTypeForPlayer_L_Nplayer__component_M_Ntype_R(const struct FTuple_Lplayer__component_Many_R& __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("Simulation", "_L_2fVerse_2eorg_2fSimulation_N_RGetOrCreateComponentOfTypeForPlayer_L_Nplayer__component_M_Ntype_R");

	Params::USimulation__L_2fVerse_2eorg_2fSimulation_N_RGetOrCreateComponentOfTypeForPlayer_L_Nplayer__component_M_Ntype_R_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VerseSimulation.Simulation._L_2fVerse_2eorg_2fSimulation_N_RGetOrCreateComponentOfTypeForPlayer_L_Nint_M_Ntype_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lint_Many_R          __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionProperty_                   RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

FOptionProperty_ USimulation::_L_2fVerse_2eorg_2fSimulation_N_RGetOrCreateComponentOfTypeForPlayer_L_Nint_M_Ntype_R(const struct FTuple_Lint_Many_R& __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("Simulation", "_L_2fVerse_2eorg_2fSimulation_N_RGetOrCreateComponentOfTypeForPlayer_L_Nint_M_Ntype_R");

	Params::USimulation__L_2fVerse_2eorg_2fSimulation_N_RGetOrCreateComponentOfTypeForPlayer_L_Nint_M_Ntype_R_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VerseSimulation.Simulation._L_2fVerse_2eorg_2fSimulation_N_RGetComponentOfTypeForPlayer_L_Nplayer__component_M_Ntype_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lplayer__component_Many_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionProperty_                   RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

FOptionProperty_ USimulation::_L_2fVerse_2eorg_2fSimulation_N_RGetComponentOfTypeForPlayer_L_Nplayer__component_M_Ntype_R(const struct FTuple_Lplayer__component_Many_R& __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("Simulation", "_L_2fVerse_2eorg_2fSimulation_N_RGetComponentOfTypeForPlayer_L_Nplayer__component_M_Ntype_R");

	Params::USimulation__L_2fVerse_2eorg_2fSimulation_N_RGetComponentOfTypeForPlayer_L_Nplayer__component_M_Ntype_R_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VerseSimulation.Simulation._L_2fVerse_2eorg_2fSimulation_N_RGetComponentOfTypeForPlayer_L_Nint_M_Ntype_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lint_Many_R          __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionProperty_                   RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

FOptionProperty_ USimulation::_L_2fVerse_2eorg_2fSimulation_N_RGetComponentOfTypeForPlayer_L_Nint_M_Ntype_R(const struct FTuple_Lint_Many_R& __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("Simulation", "_L_2fVerse_2eorg_2fSimulation_N_RGetComponentOfTypeForPlayer_L_Nint_M_Ntype_R");

	Params::USimulation__L_2fVerse_2eorg_2fSimulation_N_RGetComponentOfTypeForPlayer_L_Nint_M_Ntype_R_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VerseSimulation.Simulation.$InitCDO
// ()
// Parameters:

void USimulation::_InitCDO()
{
	static auto Func = Class->GetFunction("Simulation", "$InitCDO");

	Params::USimulation__InitCDO_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseSimulation.Simulation_agent.$InitInstance
// ()
// Parameters:

void USimulation_agent::_InitInstance()
{
	static auto Func = Class->GetFunction("Simulation_agent", "$InitInstance");

	Params::USimulation_agent__InitInstance_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseSimulation.Simulation_agent.$Block
// ()
// Parameters:

void USimulation_agent::_Block()
{
	static auto Func = Class->GetFunction("Simulation_agent", "$Block");

	Params::USimulation_agent__Block_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseSimulation.Simulation_agent.$InitCDO
// ()
// Parameters:

void USimulation_agent::_InitCDO()
{
	static auto Func = Class->GetFunction("Simulation_agent", "$InitCDO");

	Params::USimulation_agent__InitCDO_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseSimulation.Simulation_player.$InitInstance
// ()
// Parameters:

void USimulation_player::_InitInstance()
{
	static auto Func = Class->GetFunction("Simulation_player", "$InitInstance");

	Params::USimulation_player__InitInstance_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseSimulation.Simulation_player.$Block
// ()
// Parameters:

void USimulation_player::_Block()
{
	static auto Func = Class->GetFunction("Simulation_player", "$Block");

	Params::USimulation_player__Block_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseSimulation.Simulation_player.$InitCDO
// ()
// Parameters:

void USimulation_player::_InitCDO()
{
	static auto Func = Class->GetFunction("Simulation_player", "$InitCDO");

	Params::USimulation_player__InitCDO_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseSimulation.Simulation_player_array_helper._L_2fVerse_2eorg_2fSimulation_2fplayer__array__helper_N_RTestFunc_L_Nint_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int64                              __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 USimulation_player_array_helper::_L_2fVerse_2eorg_2fSimulation_2fplayer__array__helper_N_RTestFunc_L_Nint_R(int64 __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("Simulation_player_array_helper", "_L_2fVerse_2eorg_2fSimulation_2fplayer__array__helper_N_RTestFunc_L_Nint_R");

	Params::USimulation_player_array_helper__L_2fVerse_2eorg_2fSimulation_2fplayer__array__helper_N_RTestFunc_L_Nint_R_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VerseSimulation.Simulation_player_array_helper.$InitCDO
// ()
// Parameters:

void USimulation_player_array_helper::_InitCDO()
{
	static auto Func = Class->GetFunction("Simulation_player_array_helper", "$InitCDO");

	Params::USimulation_player_array_helper__InitCDO_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseSimulation.Simulation_player_component._L_2fVerse_2eorg_2fSimulation_2fplayer__component_N_RGetHandle
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class USimulation_player*          RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class USimulation_player* USimulation_player_component::_L_2fVerse_2eorg_2fSimulation_2fplayer__component_N_RGetHandle(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("Simulation_player_component", "_L_2fVerse_2eorg_2fSimulation_2fplayer__component_N_RGetHandle");

	Params::USimulation_player_component__L_2fVerse_2eorg_2fSimulation_2fplayer__component_N_RGetHandle_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VerseSimulation.Simulation_player_component.$InitInstance
// ()
// Parameters:

void USimulation_player_component::_InitInstance()
{
	static auto Func = Class->GetFunction("Simulation_player_component", "$InitInstance");

	Params::USimulation_player_component__InitInstance_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseSimulation.Simulation_player_component.$Block
// ()
// Parameters:

void USimulation_player_component::_Block()
{
	static auto Func = Class->GetFunction("Simulation_player_component", "$Block");

	Params::USimulation_player_component__Block_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseSimulation.Simulation_player_component.$InitCDO
// ()
// Parameters:

void USimulation_player_component::_InitCDO()
{
	static auto Func = Class->GetFunction("Simulation_player_component", "$InitCDO");

	Params::USimulation_player_component__InitCDO_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseSimulation.Simulation_player_multicast_delegate.$InitInstance
// ()
// Parameters:

void USimulation_player_multicast_delegate::_InitInstance()
{
	static auto Func = Class->GetFunction("Simulation_player_multicast_delegate", "$InitInstance");

	Params::USimulation_player_multicast_delegate__InitInstance_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseSimulation.Simulation_player_multicast_delegate.$Block
// ()
// Parameters:

void USimulation_player_multicast_delegate::_Block()
{
	static auto Func = Class->GetFunction("Simulation_player_multicast_delegate", "$Block");

	Params::USimulation_player_multicast_delegate__Block_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseSimulation.Simulation_player_multicast_delegate.$InitCDO
// ()
// Parameters:

void USimulation_player_multicast_delegate::_InitCDO()
{
	static auto Func = Class->GetFunction("Simulation_player_multicast_delegate", "$InitCDO");

	Params::USimulation_player_multicast_delegate__InitCDO_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseSimulation.Simulation_team.$InitInstance
// ()
// Parameters:

void USimulation_team::_InitInstance()
{
	static auto Func = Class->GetFunction("Simulation_team", "$InitInstance");

	Params::USimulation_team__InitInstance_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseSimulation.Simulation_team.$Block
// ()
// Parameters:

void USimulation_team::_Block()
{
	static auto Func = Class->GetFunction("Simulation_team", "$Block");

	Params::USimulation_team__Block_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseSimulation.Simulation_team.$InitCDO
// ()
// Parameters:

void USimulation_team::_InitCDO()
{
	static auto Func = Class->GetFunction("Simulation_team", "$InitCDO");

	Params::USimulation_team__InitCDO_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseSimulation.task_Simulation$Sleep_L_Nfloat_R.Update
// (Native, Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_Simulation_Sleep_L_Nfloat_R::Update()
{
	static auto Func = Class->GetFunction("task_Simulation$Sleep_L_Nfloat_R", "Update");

	Params::UTask_Simulation_Sleep_L_Nfloat_R_Update_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
