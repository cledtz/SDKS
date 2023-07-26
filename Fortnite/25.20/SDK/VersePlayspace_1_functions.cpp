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


// Function VersePlayspace.Playspace_playspace_component._L_2fUnrealEngine_2ecom_2fPlayspace_2fplayspace__component_N_RsetQueueUserForRespawnWhenAdded_L_Nlogic_R
// (Native, Public, BlueprintCallable)
// Parameters:
// uint8                              __verse_0xB2CDDD72_Argument                                      (Parm, NoDestructor, HasGetValueTypeHash)

void UPlayspace_playspace_component::_L_2fUnrealEngine_2ecom_2fPlayspace_2fplayspace__component_N_RsetQueueUserForRespawnWhenAdded_L_Nlogic_R(uint8 __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("Playspace_playspace_component", "_L_2fUnrealEngine_2ecom_2fPlayspace_2fplayspace__component_N_RsetQueueUserForRespawnWhenAdded_L_Nlogic_R");

	Params::UPlayspace_playspace_component__L_2fUnrealEngine_2ecom_2fPlayspace_2fplayspace__component_N_RsetQueueUserForRespawnWhenAdded_L_Nlogic_R_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VersePlayspace.Playspace_playspace_component._L_2fUnrealEngine_2ecom_2fPlayspace_2fplayspace__component_N_RgetPlayers_L_NPlayerType_R
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// enum class EPlayspace_PlayerType   __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class USimulation_player_component*>RetVal                                                           (Parm, OutParm, ReturnParm, ContainsInstancedReference)

TArray<class USimulation_player_component*> UPlayspace_playspace_component::_L_2fUnrealEngine_2ecom_2fPlayspace_2fplayspace__component_N_RgetPlayers_L_NPlayerType_R(enum class EPlayspace_PlayerType __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("Playspace_playspace_component", "_L_2fUnrealEngine_2ecom_2fPlayspace_2fplayspace__component_N_RgetPlayers_L_NPlayerType_R");

	Params::UPlayspace_playspace_component__L_2fUnrealEngine_2ecom_2fPlayspace_2fplayspace__component_N_RgetPlayers_L_NPlayerType_R_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VersePlayspace.Playspace_playspace_component._L_2fUnrealEngine_2ecom_2fPlayspace_2fplayspace__component_N_RgetPlayerCount_L_NPlayerType_R
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// enum class EPlayspace_PlayerType   __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UPlayspace_playspace_component::_L_2fUnrealEngine_2ecom_2fPlayspace_2fplayspace__component_N_RgetPlayerCount_L_NPlayerType_R(enum class EPlayspace_PlayerType __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("Playspace_playspace_component", "_L_2fUnrealEngine_2ecom_2fPlayspace_2fplayspace__component_N_RgetPlayerCount_L_NPlayerType_R");

	Params::UPlayspace_playspace_component__L_2fUnrealEngine_2ecom_2fPlayspace_2fplayspace__component_N_RgetPlayerCount_L_NPlayerType_R_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

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
	static auto Func = Class->GetFunction("Playspace_playspace_component", "__WaitForSetupComplete");

	Params::UPlayspace_playspace_component___WaitForSetupComplete_Params Parms;

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
	static auto Func = Class->GetFunction("Playspace_playspace_component", "__WaitForPlayerRemoved");

	Params::UPlayspace_playspace_component___WaitForPlayerRemoved_Params Parms;

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
	static auto Func = Class->GetFunction("Playspace_playspace_component", "__WaitForPlayerAdded");

	Params::UPlayspace_playspace_component___WaitForPlayerAdded_Params Parms;

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
	static auto Func = Class->GetFunction("Playspace_playspace_component", "__WaitForMatchEnd");

	Params::UPlayspace_playspace_component___WaitForMatchEnd_Params Parms;

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
	static auto Func = Class->GetFunction("Playspace_playspace_component", "__WaitForMatchBegin");

	Params::UPlayspace_playspace_component___WaitForMatchBegin_Params Parms;

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
	static auto Func = Class->GetFunction("Playspace_playspace_component", "_L_2fUnrealEngine_2ecom_2fPlayspace_2fplayspace__component_N_RSetPlayerComponentClass_L_NComponentType_20where_20ComponentType_R");

	Params::UPlayspace_playspace_component__L_2fUnrealEngine_2ecom_2fPlayspace_2fplayspace__component_N_RSetPlayerComponentClass_L_NComponentType_20where_20ComponentType_R_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VersePlayspace.Playspace_playspace_component.$InitInstance
// ()
// Parameters:

void UPlayspace_playspace_component::_InitInstance()
{
	static auto Func = Class->GetFunction("Playspace_playspace_component", "$InitInstance");

	Params::UPlayspace_playspace_component__InitInstance_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VersePlayspace.Playspace_playspace_component.$Block
// ()
// Parameters:

void UPlayspace_playspace_component::_Block()
{
	static auto Func = Class->GetFunction("Playspace_playspace_component", "$Block");

	Params::UPlayspace_playspace_component__Block_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VersePlayspace.Playspace_playspace_component.$InitCDO
// ()
// Parameters:

void UPlayspace_playspace_component::_InitCDO()
{
	static auto Func = Class->GetFunction("Playspace_playspace_component", "$InitCDO");

	Params::UPlayspace_playspace_component__InitCDO_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VersePlayspace.task_Playspace_playspace_component$__WaitForMatchBegin.Update
// (Native, Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_Playspace_playspace_component___WaitForMatchBegin::Update()
{
	static auto Func = Class->GetFunction("task_Playspace_playspace_component$__WaitForMatchBegin", "Update");

	Params::UTask_Playspace_playspace_component___WaitForMatchBegin_Update_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VersePlayspace.task_Playspace_playspace_component$__WaitForMatchEnd.Update
// (Native, Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_Playspace_playspace_component___WaitForMatchEnd::Update()
{
	static auto Func = Class->GetFunction("task_Playspace_playspace_component$__WaitForMatchEnd", "Update");

	Params::UTask_Playspace_playspace_component___WaitForMatchEnd_Update_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VersePlayspace.task_Playspace_playspace_component$__WaitForPlayerAdded.Update
// (Native, Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_Playspace_playspace_component___WaitForPlayerAdded::Update()
{
	static auto Func = Class->GetFunction("task_Playspace_playspace_component$__WaitForPlayerAdded", "Update");

	Params::UTask_Playspace_playspace_component___WaitForPlayerAdded_Update_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VersePlayspace.task_Playspace_playspace_component$__WaitForPlayerRemoved.Update
// (Native, Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_Playspace_playspace_component___WaitForPlayerRemoved::Update()
{
	static auto Func = Class->GetFunction("task_Playspace_playspace_component$__WaitForPlayerRemoved", "Update");

	Params::UTask_Playspace_playspace_component___WaitForPlayerRemoved_Update_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VersePlayspace.task_Playspace_playspace_component$__WaitForSetupComplete.Update
// (Native, Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_Playspace_playspace_component___WaitForSetupComplete::Update()
{
	static auto Func = Class->GetFunction("task_Playspace_playspace_component$__WaitForSetupComplete", "Update");

	Params::UTask_Playspace_playspace_component___WaitForSetupComplete_Update_Params Parms;


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
