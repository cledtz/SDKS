#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function VerseRestricted.Restricted._L_2fVerse_2eorg_2fRestricted_N_Rsticky__event_L_Nt_20where_20t_R
// (Final, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UClass*                      __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// class UClass*                      RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UClass* URestricted::_L_2fVerse_2eorg_2fRestricted_N_Rsticky__event_L_Nt_20where_20t_R(class UClass* __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("Restricted", "_L_2fVerse_2eorg_2fRestricted_N_Rsticky__event_L_Nt_20where_20t_R");

	Params::URestricted__L_2fVerse_2eorg_2fRestricted_N_Rsticky__event_L_Nt_20where_20t_R_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseRestricted.Restricted._L_2fVerse_2eorg_2fRestricted_N_Rsticky__event
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UClass*                      RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_0                                                        (HasGetValueTypeHash)

class UClass* URestricted::_L_2fVerse_2eorg_2fRestricted_N_Rsticky__event(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, FVerseFunctionProperty_ _Callee_0)
{
	static auto Func = Class->GetFunction("Restricted", "_L_2fVerse_2eorg_2fRestricted_N_Rsticky__event");

	Params::URestricted__L_2fVerse_2eorg_2fRestricted_N_Rsticky__event_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._Callee_0 = _Callee_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseRestricted.Restricted.$InitCDO
// ()
// Parameters:

void URestricted::_InitCDO()
{
	static auto Func = Class->GetFunction("Restricted", "$InitCDO");

	Params::URestricted__InitCDO_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseRestricted.Restricted_sticky_event._L_2fVerse_2eorg_2fVerse_2fsignalable_2fsignalable_Lpayload_R_N_RSignal_L_Npayload_R
// (Native, Public, BlueprintCallable)
// Parameters:
// FVerseDynamicProperty_             __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void URestricted_sticky_event::_L_2fVerse_2eorg_2fVerse_2fsignalable_2fsignalable_Lpayload_R_N_RSignal_L_Npayload_R(FVerseDynamicProperty_ __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("Restricted_sticky_event", "_L_2fVerse_2eorg_2fVerse_2fsignalable_2fsignalable_Lpayload_R_N_RSignal_L_Npayload_R");

	Params::URestricted_sticky_event__L_2fVerse_2eorg_2fVerse_2fsignalable_2fsignalable_Lpayload_R_N_RSignal_L_Npayload_R_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VerseRestricted.Restricted_sticky_event._L_2fVerse_2eorg_2fRestricted_2fsticky__event_2fsticky__event_Lt_R_N_RIsSignaled
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionProperty_                   RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionProperty_ URestricted_sticky_event::_L_2fVerse_2eorg_2fRestricted_2fsticky__event_2fsticky__event_Lt_R_N_RIsSignaled(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("Restricted_sticky_event", "_L_2fVerse_2eorg_2fRestricted_2fsticky__event_2fsticky__event_Lt_R_N_RIsSignaled");

	Params::URestricted_sticky_event__L_2fVerse_2eorg_2fRestricted_2fsticky__event_2fsticky__event_Lt_R_N_RIsSignaled_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VerseRestricted.Restricted_sticky_event._L_2fVerse_2eorg_2fRestricted_2fsticky__event_2fsticky__event_Lt_R_N_RGetAwaitCount
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 URestricted_sticky_event::_L_2fVerse_2eorg_2fRestricted_2fsticky__event_2fsticky__event_Lt_R_N_RGetAwaitCount(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("Restricted_sticky_event", "_L_2fVerse_2eorg_2fRestricted_2fsticky__event_2fsticky__event_Lt_R_N_RGetAwaitCount");

	Params::URestricted_sticky_event__L_2fVerse_2eorg_2fRestricted_2fsticky__event_2fsticky__event_Lt_R_N_RGetAwaitCount_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VerseRestricted.Restricted_sticky_event._L_2fVerse_2eorg_2fRestricted_2fsticky__event_2fsticky__event_Lt_R_N_RClearSignal
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void URestricted_sticky_event::_L_2fVerse_2eorg_2fRestricted_2fsticky__event_2fsticky__event_Lt_R_N_RClearSignal(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("Restricted_sticky_event", "_L_2fVerse_2eorg_2fRestricted_2fsticky__event_2fsticky__event_Lt_R_N_RClearSignal");

	Params::URestricted_sticky_event__L_2fVerse_2eorg_2fRestricted_2fsticky__event_2fsticky__event_Lt_R_N_RClearSignal_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VerseRestricted.Restricted_sticky_event.Await
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* URestricted_sticky_event::Await(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("Restricted_sticky_event", "Await");

	Params::URestricted_sticky_event_Await_Params Parms;

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseRestricted.Restricted_sticky_event.$InitInstance
// ()
// Parameters:

void URestricted_sticky_event::_InitInstance()
{
	static auto Func = Class->GetFunction("Restricted_sticky_event", "$InitInstance");

	Params::URestricted_sticky_event__InitInstance_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseRestricted.Restricted_sticky_event.$Block
// ()
// Parameters:

void URestricted_sticky_event::_Block()
{
	static auto Func = Class->GetFunction("Restricted_sticky_event", "$Block");

	Params::URestricted_sticky_event__Block_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseRestricted.Restricted_sticky_event.$InitCDO
// ()
// Parameters:

void URestricted_sticky_event::_InitCDO()
{
	static auto Func = Class->GetFunction("Restricted_sticky_event", "$InitCDO");

	Params::URestricted_sticky_event__InitCDO_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseRestricted.task_Restricted_sticky_event$Await.Update
// (Native, Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_Restricted_sticky_event_Await::Update()
{
	static auto Func = Class->GetFunction("task_Restricted_sticky_event$Await", "Update");

	Params::UTask_Restricted_sticky_event_Await_Update_Params Parms;


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
