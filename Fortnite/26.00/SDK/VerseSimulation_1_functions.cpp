#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// VerseClass VerseSimulation.$SolarisSignatureFunctionOuter
// (None)

class UClass* U_SolarisSignatureFunctionOuter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("$SolarisSignatureFunctionOuter");

	return Clss;
}


// $SolarisSignatureFunctionOuter VerseSimulation.Default__$SolarisSignatureFunctionOuter
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class U_SolarisSignatureFunctionOuter* U_SolarisSignatureFunctionOuter::GetDefaultObj()
{
	static class U_SolarisSignatureFunctionOuter* Default = nullptr;

	if (!Default)
		Default = static_cast<U_SolarisSignatureFunctionOuter*>(U_SolarisSignatureFunctionOuter::StaticClass()->DefaultObject);

	return Default;
}


// VerseClass VerseSimulation.Simulation
// (None)

class UClass* USimulation::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Simulation");

	return Clss;
}


// Simulation VerseSimulation.Default__Simulation
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USimulation* USimulation::GetDefaultObj()
{
	static class USimulation* Default = nullptr;

	if (!Default)
		Default = static_cast<USimulation*>(USimulation::StaticClass()->DefaultObject);

	return Default;
}


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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Simulation", "Sleep_L_Nfloat_R");

	Params::USimulation_Sleep_L_Nfloat_R_Params Parms{};

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Simulation", "_L_2fVerse_2eorg_2fSimulation_N_RGetSimulationElapsedTime");

	Params::USimulation__L_2fVerse_2eorg_2fSimulation_N_RGetSimulationElapsedTime_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseSimulation.Simulation._L_2fVerse_2eorg_2fSimulation_N_RGetSession
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class USimulation_session*         RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class USimulation_session* USimulation::_L_2fVerse_2eorg_2fSimulation_N_RGetSession(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Simulation", "_L_2fVerse_2eorg_2fSimulation_N_RGetSession");

	Params::USimulation__L_2fVerse_2eorg_2fSimulation_N_RGetSession_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseSimulation.Simulation._L_2fVerse_2eorg_2fSimulation_N_RGetPlayerComponentByIndex_L_Nint_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int64                              __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

FOptionalProperty_ USimulation::_L_2fVerse_2eorg_2fSimulation_N_RGetPlayerComponentByIndex_L_Nint_R(int64 __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Simulation", "_L_2fVerse_2eorg_2fSimulation_N_RGetPlayerComponentByIndex_L_Nint_R");

	Params::USimulation__L_2fVerse_2eorg_2fSimulation_N_RGetPlayerComponentByIndex_L_Nint_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseSimulation.Simulation._L_2fVerse_2eorg_2fSimulation_N_RGetOrCreateComponentOfTypeForPlayer_L_Nint_M_NType_20where_20Type_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lint_Many_R          __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

FOptionalProperty_ USimulation::_L_2fVerse_2eorg_2fSimulation_N_RGetOrCreateComponentOfTypeForPlayer_L_Nint_M_NType_20where_20Type_R(const struct FTuple_Lint_Many_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Simulation", "_L_2fVerse_2eorg_2fSimulation_N_RGetOrCreateComponentOfTypeForPlayer_L_Nint_M_NType_20where_20Type_R");

	Params::USimulation__L_2fVerse_2eorg_2fSimulation_N_RGetOrCreateComponentOfTypeForPlayer_L_Nint_M_NType_20where_20Type_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseSimulation.Simulation._L_2fVerse_2eorg_2fSimulation_N_RGetOrCreateComponentOfTypeForPlayer_L_Nplayer__component_M_NType_20where_20Type_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lplayer__component_Many_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

FOptionalProperty_ USimulation::_L_2fVerse_2eorg_2fSimulation_N_RGetOrCreateComponentOfTypeForPlayer_L_Nplayer__component_M_NType_20where_20Type_R(const struct FTuple_Lplayer__component_Many_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Simulation", "_L_2fVerse_2eorg_2fSimulation_N_RGetOrCreateComponentOfTypeForPlayer_L_Nplayer__component_M_NType_20where_20Type_R");

	Params::USimulation__L_2fVerse_2eorg_2fSimulation_N_RGetOrCreateComponentOfTypeForPlayer_L_Nplayer__component_M_NType_20where_20Type_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseSimulation.Simulation._L_2fVerse_2eorg_2fSimulation_N_RGetComponentOfTypeForPlayer_L_Nplayer__component_M_NType_20where_20Type_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lplayer__component_Many_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

FOptionalProperty_ USimulation::_L_2fVerse_2eorg_2fSimulation_N_RGetComponentOfTypeForPlayer_L_Nplayer__component_M_NType_20where_20Type_R(const struct FTuple_Lplayer__component_Many_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Simulation", "_L_2fVerse_2eorg_2fSimulation_N_RGetComponentOfTypeForPlayer_L_Nplayer__component_M_NType_20where_20Type_R");

	Params::USimulation__L_2fVerse_2eorg_2fSimulation_N_RGetComponentOfTypeForPlayer_L_Nplayer__component_M_NType_20where_20Type_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseSimulation.Simulation._L_2fVerse_2eorg_2fSimulation_N_RGetComponentOfTypeForPlayer_L_Nint_M_NType_20where_20Type_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lint_Many_R          __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

FOptionalProperty_ USimulation::_L_2fVerse_2eorg_2fSimulation_N_RGetComponentOfTypeForPlayer_L_Nint_M_NType_20where_20Type_R(const struct FTuple_Lint_Many_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Simulation", "_L_2fVerse_2eorg_2fSimulation_N_RGetComponentOfTypeForPlayer_L_Nint_M_NType_20where_20Type_R");

	Params::USimulation__L_2fVerse_2eorg_2fSimulation_N_RGetComponentOfTypeForPlayer_L_Nint_M_NType_20where_20Type_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseSimulation.Simulation.$InitCDO
// (None)
// Parameters:

void USimulation::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Simulation", "$InitCDO");

	Params::USimulation__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseSimulation.Simulation_agent
// (None)

class UClass* USimulation_agent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Simulation_agent");

	return Clss;
}


// Simulation_agent VerseSimulation.Default__Simulation_agent
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USimulation_agent* USimulation_agent::GetDefaultObj()
{
	static class USimulation_agent* Default = nullptr;

	if (!Default)
		Default = static_cast<USimulation_agent*>(USimulation_agent::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseSimulation.Simulation_agent.$InitInstance
// (None)
// Parameters:

void USimulation_agent::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Simulation_agent", "$InitInstance");

	Params::USimulation_agent__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseSimulation.Simulation_agent.$Block
// (None)
// Parameters:

void USimulation_agent::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Simulation_agent", "$Block");

	Params::USimulation_agent__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseSimulation.Simulation_agent.$InitCDO
// (None)
// Parameters:

void USimulation_agent::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Simulation_agent", "$InitCDO");

	Params::USimulation_agent__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseSimulation.Simulation_player
// (None)

class UClass* USimulation_player::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Simulation_player");

	return Clss;
}


// Simulation_player VerseSimulation.Default__Simulation_player
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USimulation_player* USimulation_player::GetDefaultObj()
{
	static class USimulation_player* Default = nullptr;

	if (!Default)
		Default = static_cast<USimulation_player*>(USimulation_player::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseSimulation.Simulation_player._L_2fVerse_2eorg_2fSimulation_2fplayer_N_RIsActive
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionalProperty_ USimulation_player::_L_2fVerse_2eorg_2fSimulation_2fplayer_N_RIsActive(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Simulation_player", "_L_2fVerse_2eorg_2fSimulation_2fplayer_N_RIsActive");

	Params::USimulation_player__L_2fVerse_2eorg_2fSimulation_2fplayer_N_RIsActive_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseSimulation.Simulation_player.$InitInstance
// (None)
// Parameters:

void USimulation_player::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Simulation_player", "$InitInstance");

	Params::USimulation_player__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseSimulation.Simulation_player.$Block
// (None)
// Parameters:

void USimulation_player::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Simulation_player", "$Block");

	Params::USimulation_player__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseSimulation.Simulation_player.$InitCDO
// (None)
// Parameters:

void USimulation_player::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Simulation_player", "$InitCDO");

	Params::USimulation_player__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseSimulation.Simulation_player_array_helper
// (None)

class UClass* USimulation_player_array_helper::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Simulation_player_array_helper");

	return Clss;
}


// Simulation_player_array_helper VerseSimulation.Default__Simulation_player_array_helper
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USimulation_player_array_helper* USimulation_player_array_helper::GetDefaultObj()
{
	static class USimulation_player_array_helper* Default = nullptr;

	if (!Default)
		Default = static_cast<USimulation_player_array_helper*>(USimulation_player_array_helper::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseSimulation.Simulation_player_array_helper._L_2fVerse_2eorg_2fSimulation_2fplayer__array__helper_N_RTestFunc_L_Nint_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int64                              __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 USimulation_player_array_helper::_L_2fVerse_2eorg_2fSimulation_2fplayer__array__helper_N_RTestFunc_L_Nint_R(int64 __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Simulation_player_array_helper", "_L_2fVerse_2eorg_2fSimulation_2fplayer__array__helper_N_RTestFunc_L_Nint_R");

	Params::USimulation_player_array_helper__L_2fVerse_2eorg_2fSimulation_2fplayer__array__helper_N_RTestFunc_L_Nint_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseSimulation.Simulation_player_array_helper.$InitCDO
// (None)
// Parameters:

void USimulation_player_array_helper::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Simulation_player_array_helper", "$InitCDO");

	Params::USimulation_player_array_helper__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseSimulation.Simulation_player_component
// (None)

class UClass* USimulation_player_component::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Simulation_player_component");

	return Clss;
}


// Simulation_player_component VerseSimulation.Default__Simulation_player_component
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USimulation_player_component* USimulation_player_component::GetDefaultObj()
{
	static class USimulation_player_component* Default = nullptr;

	if (!Default)
		Default = static_cast<USimulation_player_component*>(USimulation_player_component::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseSimulation.Simulation_player_component._L_2fVerse_2eorg_2fSimulation_2fplayer__component_N_RGetHandle
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class USimulation_player*          RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class USimulation_player* USimulation_player_component::_L_2fVerse_2eorg_2fSimulation_2fplayer__component_N_RGetHandle(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Simulation_player_component", "_L_2fVerse_2eorg_2fSimulation_2fplayer__component_N_RGetHandle");

	Params::USimulation_player_component__L_2fVerse_2eorg_2fSimulation_2fplayer__component_N_RGetHandle_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseSimulation.Simulation_player_component.$InitInstance
// (None)
// Parameters:

void USimulation_player_component::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Simulation_player_component", "$InitInstance");

	Params::USimulation_player_component__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseSimulation.Simulation_player_component.$Block
// (None)
// Parameters:

void USimulation_player_component::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Simulation_player_component", "$Block");

	Params::USimulation_player_component__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseSimulation.Simulation_player_component.$InitCDO
// (None)
// Parameters:

void USimulation_player_component::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Simulation_player_component", "$InitCDO");

	Params::USimulation_player_component__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseSimulation.Simulation_player_multicast_delegate
// (None)

class UClass* USimulation_player_multicast_delegate::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Simulation_player_multicast_delegate");

	return Clss;
}


// Simulation_player_multicast_delegate VerseSimulation.Default__Simulation_player_multicast_delegate
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USimulation_player_multicast_delegate* USimulation_player_multicast_delegate::GetDefaultObj()
{
	static class USimulation_player_multicast_delegate* Default = nullptr;

	if (!Default)
		Default = static_cast<USimulation_player_multicast_delegate*>(USimulation_player_multicast_delegate::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseSimulation.Simulation_player_multicast_delegate.$InitInstance
// (None)
// Parameters:

void USimulation_player_multicast_delegate::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Simulation_player_multicast_delegate", "$InitInstance");

	Params::USimulation_player_multicast_delegate__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseSimulation.Simulation_player_multicast_delegate.$Block
// (None)
// Parameters:

void USimulation_player_multicast_delegate::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Simulation_player_multicast_delegate", "$Block");

	Params::USimulation_player_multicast_delegate__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseSimulation.Simulation_player_multicast_delegate.$InitCDO
// (None)
// Parameters:

void USimulation_player_multicast_delegate::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Simulation_player_multicast_delegate", "$InitCDO");

	Params::USimulation_player_multicast_delegate__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseSimulation.Simulation_session
// (None)

class UClass* USimulation_session::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Simulation_session");

	return Clss;
}


// Simulation_session VerseSimulation.Default__Simulation_session
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USimulation_session* USimulation_session::GetDefaultObj()
{
	static class USimulation_session* Default = nullptr;

	if (!Default)
		Default = static_cast<USimulation_session*>(USimulation_session::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseSimulation.Simulation_session.$InitInstance
// (None)
// Parameters:

void USimulation_session::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Simulation_session", "$InitInstance");

	Params::USimulation_session__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseSimulation.Simulation_session.$Block
// (None)
// Parameters:

void USimulation_session::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Simulation_session", "$Block");

	Params::USimulation_session__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseSimulation.Simulation_session.$InitCDO
// (None)
// Parameters:

void USimulation_session::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Simulation_session", "$InitCDO");

	Params::USimulation_session__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseSimulation.Simulation_team
// (None)

class UClass* USimulation_team::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Simulation_team");

	return Clss;
}


// Simulation_team VerseSimulation.Default__Simulation_team
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USimulation_team* USimulation_team::GetDefaultObj()
{
	static class USimulation_team* Default = nullptr;

	if (!Default)
		Default = static_cast<USimulation_team*>(USimulation_team::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseSimulation.Simulation_team.$InitInstance
// (None)
// Parameters:

void USimulation_team::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Simulation_team", "$InitInstance");

	Params::USimulation_team__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseSimulation.Simulation_team.$Block
// (None)
// Parameters:

void USimulation_team::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Simulation_team", "$Block");

	Params::USimulation_team__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseSimulation.Simulation_team.$InitCDO
// (None)
// Parameters:

void USimulation_team::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Simulation_team", "$InitCDO");

	Params::USimulation_team__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseSimulation.task_Simulation$Sleep_L_Nfloat_R
// (None)

class UClass* UTask_Simulation_Sleep_L_Nfloat_R::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_Simulation$Sleep_L_Nfloat_R");

	return Clss;
}


// task_Simulation$Sleep_L_Nfloat_R VerseSimulation.Default__task_Simulation$Sleep_L_Nfloat_R
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_Simulation_Sleep_L_Nfloat_R* UTask_Simulation_Sleep_L_Nfloat_R::GetDefaultObj()
{
	static class UTask_Simulation_Sleep_L_Nfloat_R* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_Simulation_Sleep_L_Nfloat_R*>(UTask_Simulation_Sleep_L_Nfloat_R::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseSimulation.task_Simulation$Sleep_L_Nfloat_R.Update
// (Native, Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_Simulation_Sleep_L_Nfloat_R::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_Simulation$Sleep_L_Nfloat_R", "Update");

	Params::UTask_Simulation_Sleep_L_Nfloat_R_Update_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


