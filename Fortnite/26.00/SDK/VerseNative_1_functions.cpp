#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// VerseClass VerseNative.$SolarisSignatureFunctionOuter
// (None)

class UClass* U_SolarisSignatureFunctionOuter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("$SolarisSignatureFunctionOuter");

	return Clss;
}


// $SolarisSignatureFunctionOuter VerseNative.Default__$SolarisSignatureFunctionOuter
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class U_SolarisSignatureFunctionOuter* U_SolarisSignatureFunctionOuter::GetDefaultObj()
{
	static class U_SolarisSignatureFunctionOuter* Default = nullptr;

	if (!Default)
		Default = static_cast<U_SolarisSignatureFunctionOuter*>(U_SolarisSignatureFunctionOuter::StaticClass()->DefaultObject);

	return Default;
}


// VerseClass VerseNative.Concurrency
// (None)

class UClass* UConcurrency::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Concurrency");

	return Clss;
}


// Concurrency VerseNative.Default__Concurrency
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UConcurrency* UConcurrency::GetDefaultObj()
{
	static class UConcurrency* Default = nullptr;

	if (!Default)
		Default = static_cast<UConcurrency*>(UConcurrency::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseNative.Concurrency._L_2fVerse_2eorg_2fConcurrency_N_Rtask_L_Nt_20where_20t_R
// (Final, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UClass*                      __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// class UClass*                      RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UClass* UConcurrency::_L_2fVerse_2eorg_2fConcurrency_N_Rtask_L_Nt_20where_20t_R(class UClass* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Concurrency", "_L_2fVerse_2eorg_2fConcurrency_N_Rtask_L_Nt_20where_20t_R");

	Params::UConcurrency__L_2fVerse_2eorg_2fConcurrency_N_Rtask_L_Nt_20where_20t_R_Params Parms{};

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Concurrency", "_L_2fVerse_2eorg_2fConcurrency_N_Rawaitable_L_Npayload_20where_20payload_R");

	Params::UConcurrency__L_2fVerse_2eorg_2fConcurrency_N_Rawaitable_L_Npayload_20where_20payload_R_Params Parms{};

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
// FVerseFunctionProperty_            _Callee_1                                                        (HasGetValueTypeHash)

class UClass* UConcurrency::_L_2fVerse_2eorg_2fConcurrency_N_Rawaitable(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, FVerseFunctionProperty_ _Callee_0, FVerseFunctionProperty_ _Callee_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Concurrency", "_L_2fVerse_2eorg_2fConcurrency_N_Rawaitable");

	Params::UConcurrency__L_2fVerse_2eorg_2fConcurrency_N_Rawaitable_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._Callee_0 = _Callee_0;
	Parms._Callee_1 = _Callee_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseNative.Concurrency.$InitCDO
// (None)
// Parameters:

void UConcurrency::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Concurrency", "$InitCDO");

	Params::UConcurrency__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseNative.Concurrency_awaitable
// (None)

class UClass* UConcurrency_awaitable::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Concurrency_awaitable");

	return Clss;
}


// Concurrency_awaitable VerseNative.Default__Concurrency_awaitable
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UConcurrency_awaitable* UConcurrency_awaitable::GetDefaultObj()
{
	static class UConcurrency_awaitable* Default = nullptr;

	if (!Default)
		Default = static_cast<UConcurrency_awaitable*>(UConcurrency_awaitable::StaticClass()->DefaultObject);

	return Default;
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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Concurrency_awaitable", "Await");

	Params::UConcurrency_awaitable_Await_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass VerseNative.Concurrency_mind
// (None)

class UClass* UConcurrency_mind::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Concurrency_mind");

	return Clss;
}


// Concurrency_mind VerseNative.Default__Concurrency_mind
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UConcurrency_mind* UConcurrency_mind::GetDefaultObj()
{
	static class UConcurrency_mind* Default = nullptr;

	if (!Default)
		Default = static_cast<UConcurrency_mind*>(UConcurrency_mind::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseNative.Concurrency_mind._L_2fVerse_2eorg_2fConcurrency_2fmind_N_RGetNumActive
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UConcurrency_mind::_L_2fVerse_2eorg_2fConcurrency_2fmind_N_RGetNumActive(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Concurrency_mind", "_L_2fVerse_2eorg_2fConcurrency_2fmind_N_RGetNumActive");

	Params::UConcurrency_mind__L_2fVerse_2eorg_2fConcurrency_2fmind_N_RGetNumActive_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseNative.Concurrency_mind._L_2fVerse_2eorg_2fConcurrency_2fmind_N_RCancelAll
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UConcurrency_mind::_L_2fVerse_2eorg_2fConcurrency_2fmind_N_RCancelAll(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Concurrency_mind", "_L_2fVerse_2eorg_2fConcurrency_2fmind_N_RCancelAll");

	Params::UConcurrency_mind__L_2fVerse_2eorg_2fConcurrency_2fmind_N_RCancelAll_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseNative.Concurrency_mind.$InitInstance
// (None)
// Parameters:

void UConcurrency_mind::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Concurrency_mind", "$InitInstance");

	Params::UConcurrency_mind__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseNative.Concurrency_mind.$Block
// (None)
// Parameters:

void UConcurrency_mind::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Concurrency_mind", "$Block");

	Params::UConcurrency_mind__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseNative.Concurrency_mind.$InitCDO
// (None)
// Parameters:

void UConcurrency_mind::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Concurrency_mind", "$InitCDO");

	Params::UConcurrency_mind__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseNative.Concurrency_task
// (None)

class UClass* UConcurrency_task::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Concurrency_task");

	return Clss;
}


// Concurrency_task VerseNative.Default__Concurrency_task
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UConcurrency_task* UConcurrency_task::GetDefaultObj()
{
	static class UConcurrency_task* Default = nullptr;

	if (!Default)
		Default = static_cast<UConcurrency_task*>(UConcurrency_task::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseNative.Concurrency_task._L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RUnsettled
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionalProperty_ UConcurrency_task::_L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RUnsettled(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Concurrency_task", "_L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RUnsettled");

	Params::UConcurrency_task__L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RUnsettled_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseNative.Concurrency_task._L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RUninterrupted
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionalProperty_ UConcurrency_task::_L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RUninterrupted(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Concurrency_task", "_L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RUninterrupted");

	Params::UConcurrency_task__L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RUninterrupted_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseNative.Concurrency_task._L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RSettled
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionalProperty_ UConcurrency_task::_L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RSettled(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Concurrency_task", "_L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RSettled");

	Params::UConcurrency_task__L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RSettled_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseNative.Concurrency_task._L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RInterrupted
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionalProperty_ UConcurrency_task::_L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RInterrupted(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Concurrency_task", "_L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RInterrupted");

	Params::UConcurrency_task__L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RInterrupted_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseNative.Concurrency_task._L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RCompleted
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionalProperty_ UConcurrency_task::_L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RCompleted(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Concurrency_task", "_L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RCompleted");

	Params::UConcurrency_task__L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RCompleted_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseNative.Concurrency_task._L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RCanceling
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionalProperty_ UConcurrency_task::_L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RCanceling(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Concurrency_task", "_L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RCanceling");

	Params::UConcurrency_task__L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RCanceling_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseNative.Concurrency_task._L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RCanceled
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionalProperty_ UConcurrency_task::_L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RCanceled(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Concurrency_task", "_L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RCanceled");

	Params::UConcurrency_task__L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RCanceled_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseNative.Concurrency_task._L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RCancel
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UConcurrency_task::_L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RCancel(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Concurrency_task", "_L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RCancel");

	Params::UConcurrency_task__L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RCancel_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Concurrency_task", "Await");

	Params::UConcurrency_task_Await_Params Parms{};

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
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionalProperty_ UConcurrency_task::_L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RActive(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Concurrency_task", "_L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RActive");

	Params::UConcurrency_task__L_2fVerse_2eorg_2fConcurrency_2ftask_2ftask_Lt_R_N_RActive_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseNative.Concurrency_task.$InitInstance
// (None)
// Parameters:

void UConcurrency_task::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Concurrency_task", "$InitInstance");

	Params::UConcurrency_task__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseNative.Concurrency_task.$Block
// (None)
// Parameters:

void UConcurrency_task::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Concurrency_task", "$Block");

	Params::UConcurrency_task__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseNative.Concurrency_task.$InitCDO
// (None)
// Parameters:

void UConcurrency_task::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Concurrency_task", "$InitCDO");

	Params::UConcurrency_task__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseNative.Native
// (None)

class UClass* UNative::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Native");

	return Clss;
}


// Native VerseNative.Default__Native
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UNative* UNative::GetDefaultObj()
{
	static class UNative* Default = nullptr;

	if (!Default)
		Default = static_cast<UNative*>(UNative::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseNative.Native.$InitCDO
// (None)
// Parameters:

void UNative::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Native", "$InitCDO");

	Params::UNative__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseNative.task_Concurrency_awaitable$Await
// (None)

class UClass* UTask_Concurrency_awaitable_Await::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_Concurrency_awaitable$Await");

	return Clss;
}


// task_Concurrency_awaitable$Await VerseNative.Default__task_Concurrency_awaitable$Await
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_Concurrency_awaitable_Await* UTask_Concurrency_awaitable_Await::GetDefaultObj()
{
	static class UTask_Concurrency_awaitable_Await* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_Concurrency_awaitable_Await*>(UTask_Concurrency_awaitable_Await::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseNative.task_Concurrency_awaitable$Await.Update
// (Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_Concurrency_awaitable_Await::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_Concurrency_awaitable$Await", "Update");

	Params::UTask_Concurrency_awaitable_Await_Update_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass VerseNative.task_Concurrency_task$Await
// (None)

class UClass* UTask_Concurrency_task_Await::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_Concurrency_task$Await");

	return Clss;
}


// task_Concurrency_task$Await VerseNative.Default__task_Concurrency_task$Await
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_Concurrency_task_Await* UTask_Concurrency_task_Await::GetDefaultObj()
{
	static class UTask_Concurrency_task_Await* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_Concurrency_task_Await*>(UTask_Concurrency_task_Await::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseNative.task_Concurrency_task$Await.Update
// (Native, Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_Concurrency_task_Await::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_Concurrency_task$Await", "Update");

	Params::UTask_Concurrency_task_Await_Update_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


