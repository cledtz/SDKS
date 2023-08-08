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


// Function VerseNative.Concurrency._L_2fVerse_2eorg_2fConcurrency_N_Rtask_L_Nt_20where_20t_R
// (Final, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UClass*                      __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// class UClass*                      RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UClass* UConcurrency::_L_2fVerse_2eorg_2fConcurrency_N_Rtask_L_Nt_20where_20t_R(class UClass* __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("Concurrency", "_L_2fVerse_2eorg_2fConcurrency_N_Rtask_L_Nt_20where_20t_R");

	Params::UConcurrency__L_2fVerse_2eorg_2fConcurrency_N_Rtask_L_Nt_20where_20t_R_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseNative.Concurrency._L_2fVerse_2eorg_2fConcurrency_N_Rawaitable_L_Npayload_20where_20payload_R
// (Final, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UClass*                      __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// class UClass*                      RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UClass* UConcurrency::_L_2fVerse_2eorg_2fConcurrency_N_Rawaitable_L_Npayload_20where_20payload_R(class UClass* __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("Concurrency", "_L_2fVerse_2eorg_2fConcurrency_N_Rawaitable_L_Npayload_20where_20payload_R");

	Params::UConcurrency__L_2fVerse_2eorg_2fConcurrency_N_Rawaitable_L_Npayload_20where_20payload_R_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseNative.Concurrency._L_2fVerse_2eorg_2fConcurrency_N_Rawaitable
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UClass*                      RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_0                                                        (HasGetValueTypeHash)

class UClass* UConcurrency::_L_2fVerse_2eorg_2fConcurrency_N_Rawaitable(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, FVerseFunctionProperty_ _Callee_0)
{
	static auto Func = Class->GetFunction("Concurrency", "_L_2fVerse_2eorg_2fConcurrency_N_Rawaitable");

	Params::UConcurrency__L_2fVerse_2eorg_2fConcurrency_N_Rawaitable_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._Callee_0 = _Callee_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseNative.Concurrency.$InitCDO
// ()
// Parameters:

void UConcurrency::_InitCDO()
{
	static auto Func = Class->GetFunction("Concurrency", "$InitCDO");

	Params::UConcurrency__InitCDO_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseNative.Concurrency_awaitable.Await
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UConcurrency_awaitable::Await(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("Concurrency_awaitable", "Await");

	Params::UConcurrency_awaitable_Await_Params Parms;

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseNative.Concurrency_mind._L_2fVerse_2eorg_2fConcurrency_2fmind_N_RGetNumActive
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UConcurrency_mind::_L_2fVerse_2eorg_2fConcurrency_2fmind_N_RGetNumActive(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("Concurrency_mind", "_L_2fVerse_2eorg_2fConcurrency_2fmind_N_RGetNumActive");

	Params::UConcurrency_mind__L_2fVerse_2eorg_2fConcurrency_2fmind_N_RGetNumActive_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VerseNative.Concurrency_mind._L_2fVerse_2eorg_2fConcurrency_2fmind_N_RCancelAll
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UConcurrency_mind::_L_2fVerse_2eorg_2fConcurrency_2fmind_N_RCancelAll(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("Concurrency_mind", "_L_2fVerse_2eorg_2fConcurrency_2fmind_N_RCancelAll");

	Params::UConcurrency_mind__L_2fVerse_2eorg_2fConcurrency_2fmind_N_RCancelAll_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VerseNative.Concurrency_mind.$InitInstance
// ()
// Parameters:

void UConcurrency_mind::_InitInstance()
{
	static auto Func = Class->GetFunction("Concurrency_mind", "$InitInstance");

	Params::UConcurrency_mind__InitInstance_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseNative.Concurrency_mind.$Block
// ()
// Parameters:

void UConcurrency_mind::_Block()
{
	static auto Func = Class->GetFunction("Concurrency_mind", "$Block");

	Params::UConcurrency_mind__Block_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseNative.Concurrency_mind.$InitCDO
// ()
// Parameters:

void UConcurrency_mind::_InitCDO()
{
	static auto Func = Class->GetFunction("Concurrency_mind", "$InitCDO");

	Params::UConcurrency_mind__InitCDO_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseNative.Concurrency_task._L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RUnsettled
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionProperty_                   RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionProperty_ UConcurrency_task::_L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RUnsettled(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("Concurrency_task", "_L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RUnsettled");

	Params::UConcurrency_task__L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RUnsettled_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VerseNative.Concurrency_task._L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RUninterrupted
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionProperty_                   RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionProperty_ UConcurrency_task::_L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RUninterrupted(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("Concurrency_task", "_L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RUninterrupted");

	Params::UConcurrency_task__L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RUninterrupted_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VerseNative.Concurrency_task._L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RSettled
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionProperty_                   RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionProperty_ UConcurrency_task::_L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RSettled(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("Concurrency_task", "_L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RSettled");

	Params::UConcurrency_task__L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RSettled_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VerseNative.Concurrency_task._L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RInterrupted
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionProperty_                   RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionProperty_ UConcurrency_task::_L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RInterrupted(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("Concurrency_task", "_L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RInterrupted");

	Params::UConcurrency_task__L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RInterrupted_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VerseNative.Concurrency_task._L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RCompleted
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionProperty_                   RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionProperty_ UConcurrency_task::_L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RCompleted(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("Concurrency_task", "_L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RCompleted");

	Params::UConcurrency_task__L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RCompleted_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VerseNative.Concurrency_task._L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RCanceling
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionProperty_                   RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionProperty_ UConcurrency_task::_L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RCanceling(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("Concurrency_task", "_L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RCanceling");

	Params::UConcurrency_task__L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RCanceling_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VerseNative.Concurrency_task._L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RCanceled
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionProperty_                   RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionProperty_ UConcurrency_task::_L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RCanceled(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("Concurrency_task", "_L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RCanceled");

	Params::UConcurrency_task__L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RCanceled_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VerseNative.Concurrency_task._L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RCancel
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UConcurrency_task::_L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RCancel(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("Concurrency_task", "_L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RCancel");

	Params::UConcurrency_task__L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RCancel_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VerseNative.Concurrency_task.Await
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UConcurrency_task::Await(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("Concurrency_task", "Await");

	Params::UConcurrency_task_Await_Params Parms;

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseNative.Concurrency_task._L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RActive
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionProperty_                   RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionProperty_ UConcurrency_task::_L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RActive(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("Concurrency_task", "_L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RActive");

	Params::UConcurrency_task__L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RActive_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VerseNative.Concurrency_task.$InitInstance
// ()
// Parameters:

void UConcurrency_task::_InitInstance()
{
	static auto Func = Class->GetFunction("Concurrency_task", "$InitInstance");

	Params::UConcurrency_task__InitInstance_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseNative.Concurrency_task.$Block
// ()
// Parameters:

void UConcurrency_task::_Block()
{
	static auto Func = Class->GetFunction("Concurrency_task", "$Block");

	Params::UConcurrency_task__Block_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseNative.Concurrency_task.$InitCDO
// ()
// Parameters:

void UConcurrency_task::_InitCDO()
{
	static auto Func = Class->GetFunction("Concurrency_task", "$InitCDO");

	Params::UConcurrency_task__InitCDO_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseNative.Native.$InitCDO
// ()
// Parameters:

void UNative::_InitCDO()
{
	static auto Func = Class->GetFunction("Native", "$InitCDO");

	Params::UNative__InitCDO_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseNative.task_Concurrency_awaitable$Await.Update
// (Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_Concurrency_awaitable_Await::Update()
{
	static auto Func = Class->GetFunction("task_Concurrency_awaitable$Await", "Update");

	Params::UTask_Concurrency_awaitable_Await_Update_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseNative.task_Concurrency_task$Await.Update
// (Native, Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_Concurrency_task_Await::Update()
{
	static auto Func = Class->GetFunction("task_Concurrency_task$Await", "Update");

	Params::UTask_Concurrency_task_Await_Update_Params Parms;


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
