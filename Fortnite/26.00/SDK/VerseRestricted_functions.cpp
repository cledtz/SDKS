#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// VerseClass VerseRestricted.$SolarisSignatureFunctionOuter
// (None)

class UClass* U_SolarisSignatureFunctionOuter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("$SolarisSignatureFunctionOuter");

	return Clss;
}


// $SolarisSignatureFunctionOuter VerseRestricted.Default__$SolarisSignatureFunctionOuter
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class U_SolarisSignatureFunctionOuter* U_SolarisSignatureFunctionOuter::GetDefaultObj()
{
	static class U_SolarisSignatureFunctionOuter* Default = nullptr;

	if (!Default)
		Default = static_cast<U_SolarisSignatureFunctionOuter*>(U_SolarisSignatureFunctionOuter::StaticClass()->DefaultObject);

	return Default;
}


// VerseClass VerseRestricted.Restricted
// (None)

class UClass* URestricted::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Restricted");

	return Clss;
}


// Restricted VerseRestricted.Default__Restricted
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URestricted* URestricted::GetDefaultObj()
{
	static class URestricted* Default = nullptr;

	if (!Default)
		Default = static_cast<URestricted*>(URestricted::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseRestricted.Restricted._L_2fVerse_2eorg_2fRestricted_N_Rsticky__event_L_Nt_20where_20t_R
// (Final, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UClass*                      __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// class UClass*                      RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UClass* URestricted::_L_2fVerse_2eorg_2fRestricted_N_Rsticky__event_L_Nt_20where_20t_R(class UClass* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Restricted", "_L_2fVerse_2eorg_2fRestricted_N_Rsticky__event_L_Nt_20where_20t_R");

	Params::URestricted__L_2fVerse_2eorg_2fRestricted_N_Rsticky__event_L_Nt_20where_20t_R_Params Parms{};

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
// FVerseFunctionProperty_            _Callee_1                                                        (HasGetValueTypeHash)

class UClass* URestricted::_L_2fVerse_2eorg_2fRestricted_N_Rsticky__event(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, FVerseFunctionProperty_ _Callee_0, FVerseFunctionProperty_ _Callee_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Restricted", "_L_2fVerse_2eorg_2fRestricted_N_Rsticky__event");

	Params::URestricted__L_2fVerse_2eorg_2fRestricted_N_Rsticky__event_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._Callee_0 = _Callee_0;
	Parms._Callee_1 = _Callee_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseRestricted.Restricted.$InitCDO
// (None)
// Parameters:

void URestricted::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Restricted", "$InitCDO");

	Params::URestricted__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseRestricted.Restricted_sticky_event
// (None)

class UClass* URestricted_sticky_event::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Restricted_sticky_event");

	return Clss;
}


// Restricted_sticky_event VerseRestricted.Default__Restricted_sticky_event
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class URestricted_sticky_event* URestricted_sticky_event::GetDefaultObj()
{
	static class URestricted_sticky_event* Default = nullptr;

	if (!Default)
		Default = static_cast<URestricted_sticky_event*>(URestricted_sticky_event::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseRestricted.Restricted_sticky_event._L_2fVerse_2eorg_2fVerse_2fsignalable_2fsignalable_Lpayload_R_N_RSignal_L_Npayload_R
// (Native, Public, BlueprintCallable)
// Parameters:
// FVerseDynamicProperty_             __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void URestricted_sticky_event::_L_2fVerse_2eorg_2fVerse_2fsignalable_2fsignalable_Lpayload_R_N_RSignal_L_Npayload_R(FVerseDynamicProperty_ __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Restricted_sticky_event", "_L_2fVerse_2eorg_2fVerse_2fsignalable_2fsignalable_Lpayload_R_N_RSignal_L_Npayload_R");

	Params::URestricted_sticky_event__L_2fVerse_2eorg_2fVerse_2fsignalable_2fsignalable_Lpayload_R_N_RSignal_L_Npayload_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseRestricted.Restricted_sticky_event._L_2fVerse_2eorg_2fRestricted_2fsticky__event_2fsticky__event_Lt_R_N_RIsSignaled
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionalProperty_ URestricted_sticky_event::_L_2fVerse_2eorg_2fRestricted_2fsticky__event_2fsticky__event_Lt_R_N_RIsSignaled(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Restricted_sticky_event", "_L_2fVerse_2eorg_2fRestricted_2fsticky__event_2fsticky__event_Lt_R_N_RIsSignaled");

	Params::URestricted_sticky_event__L_2fVerse_2eorg_2fRestricted_2fsticky__event_2fsticky__event_Lt_R_N_RIsSignaled_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseRestricted.Restricted_sticky_event._L_2fVerse_2eorg_2fRestricted_2fsticky__event_2fsticky__event_Lt_R_N_RGetAwaitCount
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 URestricted_sticky_event::_L_2fVerse_2eorg_2fRestricted_2fsticky__event_2fsticky__event_Lt_R_N_RGetAwaitCount(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Restricted_sticky_event", "_L_2fVerse_2eorg_2fRestricted_2fsticky__event_2fsticky__event_Lt_R_N_RGetAwaitCount");

	Params::URestricted_sticky_event__L_2fVerse_2eorg_2fRestricted_2fsticky__event_2fsticky__event_Lt_R_N_RGetAwaitCount_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseRestricted.Restricted_sticky_event._L_2fVerse_2eorg_2fRestricted_2fsticky__event_2fsticky__event_Lt_R_N_RClearSignal
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void URestricted_sticky_event::_L_2fVerse_2eorg_2fRestricted_2fsticky__event_2fsticky__event_Lt_R_N_RClearSignal(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Restricted_sticky_event", "_L_2fVerse_2eorg_2fRestricted_2fsticky__event_2fsticky__event_Lt_R_N_RClearSignal");

	Params::URestricted_sticky_event__L_2fVerse_2eorg_2fRestricted_2fsticky__event_2fsticky__event_Lt_R_N_RClearSignal_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Restricted_sticky_event", "Await");

	Params::URestricted_sticky_event_Await_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseRestricted.Restricted_sticky_event.$InitInstance
// (None)
// Parameters:

void URestricted_sticky_event::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Restricted_sticky_event", "$InitInstance");

	Params::URestricted_sticky_event__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseRestricted.Restricted_sticky_event.$Block
// (None)
// Parameters:

void URestricted_sticky_event::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Restricted_sticky_event", "$Block");

	Params::URestricted_sticky_event__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseRestricted.Restricted_sticky_event.$InitCDO
// (None)
// Parameters:

void URestricted_sticky_event::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Restricted_sticky_event", "$InitCDO");

	Params::URestricted_sticky_event__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseRestricted.task_Restricted_sticky_event$Await
// (None)

class UClass* UTask_Restricted_sticky_event_Await::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_Restricted_sticky_event$Await");

	return Clss;
}


// task_Restricted_sticky_event$Await VerseRestricted.Default__task_Restricted_sticky_event$Await
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_Restricted_sticky_event_Await* UTask_Restricted_sticky_event_Await::GetDefaultObj()
{
	static class UTask_Restricted_sticky_event_Await* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_Restricted_sticky_event_Await*>(UTask_Restricted_sticky_event_Await::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseRestricted.task_Restricted_sticky_event$Await.Update
// (Native, Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_Restricted_sticky_event_Await::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_Restricted_sticky_event$Await", "Update");

	Params::UTask_Restricted_sticky_event_Await_Update_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


