#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// VerseClass VersePlayspace.$SolarisSignatureFunctionOuter
// (None)

class UClass* U_SolarisSignatureFunctionOuter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("$SolarisSignatureFunctionOuter");

	return Clss;
}


// $SolarisSignatureFunctionOuter VersePlayspace.Default__$SolarisSignatureFunctionOuter
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class U_SolarisSignatureFunctionOuter* U_SolarisSignatureFunctionOuter::GetDefaultObj()
{
	static class U_SolarisSignatureFunctionOuter* Default = nullptr;

	if (!Default)
		Default = static_cast<U_SolarisSignatureFunctionOuter*>(U_SolarisSignatureFunctionOuter::StaticClass()->DefaultObject);

	return Default;
}


// VerseClass VersePlayspace.Playspace_playspace_component
// (None)

class UClass* UPlayspace_playspace_component::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Playspace_playspace_component");

	return Clss;
}


// Playspace_playspace_component VersePlayspace.Default__Playspace_playspace_component
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPlayspace_playspace_component* UPlayspace_playspace_component::GetDefaultObj()
{
	static class UPlayspace_playspace_component* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayspace_playspace_component*>(UPlayspace_playspace_component::StaticClass()->DefaultObject);

	return Default;
}


// Function VersePlayspace.Playspace_playspace_component._L_2fUnrealEngine_2ecom_2fPlayspace_2fplayspace__component_N_RsetQueueUserForRespawnWhenAdded_L_Nlogic_R
// (Native, Public, BlueprintCallable)
// Parameters:
// uint8                              __verse_0xB2CDDD72_Argument                                      (Parm, NoDestructor, HasGetValueTypeHash)

void UPlayspace_playspace_component::_L_2fUnrealEngine_2ecom_2fPlayspace_2fplayspace__component_N_RsetQueueUserForRespawnWhenAdded_L_Nlogic_R(uint8 __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Playspace_playspace_component", "_L_2fUnrealEngine_2ecom_2fPlayspace_2fplayspace__component_N_RsetQueueUserForRespawnWhenAdded_L_Nlogic_R");

	Params::UPlayspace_playspace_component__L_2fUnrealEngine_2ecom_2fPlayspace_2fplayspace__component_N_RsetQueueUserForRespawnWhenAdded_L_Nlogic_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VersePlayspace.Playspace_playspace_component._L_2fUnrealEngine_2ecom_2fPlayspace_2fplayspace__component_N_RgetPlayers_L_NPlayerType_R
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// enum class EPlayspace_PlayerType   __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class USimulation_player_component*>RetVal                                                           (Parm, OutParm, ReturnParm, ContainsInstancedReference)

TArray<class USimulation_player_component*> UPlayspace_playspace_component::_L_2fUnrealEngine_2ecom_2fPlayspace_2fplayspace__component_N_RgetPlayers_L_NPlayerType_R(enum class EPlayspace_PlayerType __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Playspace_playspace_component", "_L_2fUnrealEngine_2ecom_2fPlayspace_2fplayspace__component_N_RgetPlayers_L_NPlayerType_R");

	Params::UPlayspace_playspace_component__L_2fUnrealEngine_2ecom_2fPlayspace_2fplayspace__component_N_RgetPlayers_L_NPlayerType_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VersePlayspace.Playspace_playspace_component._L_2fUnrealEngine_2ecom_2fPlayspace_2fplayspace__component_N_RgetPlayerCount_L_NPlayerType_R
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// enum class EPlayspace_PlayerType   __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UPlayspace_playspace_component::_L_2fUnrealEngine_2ecom_2fPlayspace_2fplayspace__component_N_RgetPlayerCount_L_NPlayerType_R(enum class EPlayspace_PlayerType __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Playspace_playspace_component", "_L_2fUnrealEngine_2ecom_2fPlayspace_2fplayspace__component_N_RgetPlayerCount_L_NPlayerType_R");

	Params::UPlayspace_playspace_component__L_2fUnrealEngine_2ecom_2fPlayspace_2fplayspace__component_N_RgetPlayerCount_L_NPlayerType_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VersePlayspace.Playspace_playspace_component.__WaitForSetupComplete
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UPlayspace_playspace_component::__WaitForSetupComplete(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Playspace_playspace_component", "__WaitForSetupComplete");

	Params::UPlayspace_playspace_component___WaitForSetupComplete_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VersePlayspace.Playspace_playspace_component.__WaitForPlayerRemoved
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UPlayspace_playspace_component::__WaitForPlayerRemoved(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Playspace_playspace_component", "__WaitForPlayerRemoved");

	Params::UPlayspace_playspace_component___WaitForPlayerRemoved_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VersePlayspace.Playspace_playspace_component.__WaitForPlayerAdded
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UPlayspace_playspace_component::__WaitForPlayerAdded(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Playspace_playspace_component", "__WaitForPlayerAdded");

	Params::UPlayspace_playspace_component___WaitForPlayerAdded_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VersePlayspace.Playspace_playspace_component.__WaitForMatchEnd
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UPlayspace_playspace_component::__WaitForMatchEnd(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Playspace_playspace_component", "__WaitForMatchEnd");

	Params::UPlayspace_playspace_component___WaitForMatchEnd_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VersePlayspace.Playspace_playspace_component.__WaitForMatchBegin
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UPlayspace_playspace_component::__WaitForMatchBegin(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Playspace_playspace_component", "__WaitForMatchBegin");

	Params::UPlayspace_playspace_component___WaitForMatchBegin_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VersePlayspace.Playspace_playspace_component._L_2fUnrealEngine_2ecom_2fPlayspace_2fplayspace__component_N_RSetPlayerComponentClass_L_NComponentType_20where_20ComponentType_R
// (Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                      __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

void UPlayspace_playspace_component::_L_2fUnrealEngine_2ecom_2fPlayspace_2fplayspace__component_N_RSetPlayerComponentClass_L_NComponentType_20where_20ComponentType_R(class UClass* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Playspace_playspace_component", "_L_2fUnrealEngine_2ecom_2fPlayspace_2fplayspace__component_N_RSetPlayerComponentClass_L_NComponentType_20where_20ComponentType_R");

	Params::UPlayspace_playspace_component__L_2fUnrealEngine_2ecom_2fPlayspace_2fplayspace__component_N_RSetPlayerComponentClass_L_NComponentType_20where_20ComponentType_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VersePlayspace.Playspace_playspace_component.$InitInstance
// (None)
// Parameters:

void UPlayspace_playspace_component::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Playspace_playspace_component", "$InitInstance");

	Params::UPlayspace_playspace_component__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VersePlayspace.Playspace_playspace_component.$Block
// (None)
// Parameters:

void UPlayspace_playspace_component::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Playspace_playspace_component", "$Block");

	Params::UPlayspace_playspace_component__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VersePlayspace.Playspace_playspace_component.$InitCDO
// (None)
// Parameters:

void UPlayspace_playspace_component::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Playspace_playspace_component", "$InitCDO");

	Params::UPlayspace_playspace_component__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VersePlayspace.task_Playspace_playspace_component$__WaitForMatchBegin
// (None)

class UClass* UTask_Playspace_playspace_component___WaitForMatchBegin::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_Playspace_playspace_component$__WaitForMatchBegin");

	return Clss;
}


// task_Playspace_playspace_component$__WaitForMatchBegin VersePlayspace.Default__task_Playspace_playspace_component$__WaitForMatchBegin
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_Playspace_playspace_component___WaitForMatchBegin* UTask_Playspace_playspace_component___WaitForMatchBegin::GetDefaultObj()
{
	static class UTask_Playspace_playspace_component___WaitForMatchBegin* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_Playspace_playspace_component___WaitForMatchBegin*>(UTask_Playspace_playspace_component___WaitForMatchBegin::StaticClass()->DefaultObject);

	return Default;
}


// Function VersePlayspace.task_Playspace_playspace_component$__WaitForMatchBegin.Update
// (Native, Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_Playspace_playspace_component___WaitForMatchBegin::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_Playspace_playspace_component$__WaitForMatchBegin", "Update");

	Params::UTask_Playspace_playspace_component___WaitForMatchBegin_Update_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// VerseClass VersePlayspace.task_Playspace_playspace_component$__WaitForMatchEnd
// (None)

class UClass* UTask_Playspace_playspace_component___WaitForMatchEnd::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_Playspace_playspace_component$__WaitForMatchEnd");

	return Clss;
}


// task_Playspace_playspace_component$__WaitForMatchEnd VersePlayspace.Default__task_Playspace_playspace_component$__WaitForMatchEnd
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_Playspace_playspace_component___WaitForMatchEnd* UTask_Playspace_playspace_component___WaitForMatchEnd::GetDefaultObj()
{
	static class UTask_Playspace_playspace_component___WaitForMatchEnd* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_Playspace_playspace_component___WaitForMatchEnd*>(UTask_Playspace_playspace_component___WaitForMatchEnd::StaticClass()->DefaultObject);

	return Default;
}


// Function VersePlayspace.task_Playspace_playspace_component$__WaitForMatchEnd.Update
// (Native, Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_Playspace_playspace_component___WaitForMatchEnd::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_Playspace_playspace_component$__WaitForMatchEnd", "Update");

	Params::UTask_Playspace_playspace_component___WaitForMatchEnd_Update_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// VerseClass VersePlayspace.task_Playspace_playspace_component$__WaitForPlayerAdded
// (None)

class UClass* UTask_Playspace_playspace_component___WaitForPlayerAdded::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_Playspace_playspace_component$__WaitForPlayerAdded");

	return Clss;
}


// task_Playspace_playspace_component$__WaitForPlayerAdded VersePlayspace.Default__task_Playspace_playspace_component$__WaitForPlayerAdded
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_Playspace_playspace_component___WaitForPlayerAdded* UTask_Playspace_playspace_component___WaitForPlayerAdded::GetDefaultObj()
{
	static class UTask_Playspace_playspace_component___WaitForPlayerAdded* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_Playspace_playspace_component___WaitForPlayerAdded*>(UTask_Playspace_playspace_component___WaitForPlayerAdded::StaticClass()->DefaultObject);

	return Default;
}


// Function VersePlayspace.task_Playspace_playspace_component$__WaitForPlayerAdded.Update
// (Native, Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_Playspace_playspace_component___WaitForPlayerAdded::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_Playspace_playspace_component$__WaitForPlayerAdded", "Update");

	Params::UTask_Playspace_playspace_component___WaitForPlayerAdded_Update_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// VerseClass VersePlayspace.task_Playspace_playspace_component$__WaitForPlayerRemoved
// (None)

class UClass* UTask_Playspace_playspace_component___WaitForPlayerRemoved::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_Playspace_playspace_component$__WaitForPlayerRemoved");

	return Clss;
}


// task_Playspace_playspace_component$__WaitForPlayerRemoved VersePlayspace.Default__task_Playspace_playspace_component$__WaitForPlayerRemoved
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_Playspace_playspace_component___WaitForPlayerRemoved* UTask_Playspace_playspace_component___WaitForPlayerRemoved::GetDefaultObj()
{
	static class UTask_Playspace_playspace_component___WaitForPlayerRemoved* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_Playspace_playspace_component___WaitForPlayerRemoved*>(UTask_Playspace_playspace_component___WaitForPlayerRemoved::StaticClass()->DefaultObject);

	return Default;
}


// Function VersePlayspace.task_Playspace_playspace_component$__WaitForPlayerRemoved.Update
// (Native, Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_Playspace_playspace_component___WaitForPlayerRemoved::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_Playspace_playspace_component$__WaitForPlayerRemoved", "Update");

	Params::UTask_Playspace_playspace_component___WaitForPlayerRemoved_Update_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// VerseClass VersePlayspace.task_Playspace_playspace_component$__WaitForSetupComplete
// (None)

class UClass* UTask_Playspace_playspace_component___WaitForSetupComplete::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_Playspace_playspace_component$__WaitForSetupComplete");

	return Clss;
}


// task_Playspace_playspace_component$__WaitForSetupComplete VersePlayspace.Default__task_Playspace_playspace_component$__WaitForSetupComplete
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_Playspace_playspace_component___WaitForSetupComplete* UTask_Playspace_playspace_component___WaitForSetupComplete::GetDefaultObj()
{
	static class UTask_Playspace_playspace_component___WaitForSetupComplete* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_Playspace_playspace_component___WaitForSetupComplete*>(UTask_Playspace_playspace_component___WaitForSetupComplete::StaticClass()->DefaultObject);

	return Default;
}


// Function VersePlayspace.task_Playspace_playspace_component$__WaitForSetupComplete.Update
// (Native, Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_Playspace_playspace_component___WaitForSetupComplete::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_Playspace_playspace_component$__WaitForSetupComplete", "Update");

	Params::UTask_Playspace_playspace_component___WaitForSetupComplete_Update_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


