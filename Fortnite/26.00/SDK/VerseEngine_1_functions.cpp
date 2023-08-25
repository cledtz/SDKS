#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// VerseClass VerseEngine.$SolarisSignatureFunctionOuter
// (None)

class UClass* U_SolarisSignatureFunctionOuter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("$SolarisSignatureFunctionOuter");

	return Clss;
}


// $SolarisSignatureFunctionOuter VerseEngine.Default__$SolarisSignatureFunctionOuter
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class U_SolarisSignatureFunctionOuter* U_SolarisSignatureFunctionOuter::GetDefaultObj()
{
	static class U_SolarisSignatureFunctionOuter* Default = nullptr;

	if (!Default)
		Default = static_cast<U_SolarisSignatureFunctionOuter*>(U_SolarisSignatureFunctionOuter::StaticClass()->DefaultObject);

	return Default;
}


// VerseClass VerseEngine.task_VerseEngine_subscribable_event$Await
// (None)

class UClass* UTask_VerseEngine_subscribable_event_Await::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_VerseEngine_subscribable_event$Await");

	return Clss;
}


// task_VerseEngine_subscribable_event$Await VerseEngine.Default__task_VerseEngine_subscribable_event$Await
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_VerseEngine_subscribable_event_Await* UTask_VerseEngine_subscribable_event_Await::GetDefaultObj()
{
	static class UTask_VerseEngine_subscribable_event_Await* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_VerseEngine_subscribable_event_Await*>(UTask_VerseEngine_subscribable_event_Await::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseEngine.task_VerseEngine_subscribable_event$Await.Update
// (Native, Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_VerseEngine_subscribable_event_Await::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_VerseEngine_subscribable_event$Await", "Update");

	Params::UTask_VerseEngine_subscribable_event_Await_Update_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// VerseClass VerseEngine.VerseEngine
// (None)

class UClass* UVerseEngine::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseEngine");

	return Clss;
}


// VerseEngine VerseEngine.Default__VerseEngine
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVerseEngine* UVerseEngine::GetDefaultObj()
{
	static class UVerseEngine* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseEngine*>(UVerseEngine::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseEngine.VerseEngine._L_2fVerse_2eorg_2fVerseEngine_N_Rsubscribable__event_L_Nt_20where_20t_R
// (Final, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UClass*                      __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// class UClass*                      RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UClass* UVerseEngine::_L_2fVerse_2eorg_2fVerseEngine_N_Rsubscribable__event_L_Nt_20where_20t_R(class UClass* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseEngine", "_L_2fVerse_2eorg_2fVerseEngine_N_Rsubscribable__event_L_Nt_20where_20t_R");

	Params::UVerseEngine__L_2fVerse_2eorg_2fVerseEngine_N_Rsubscribable__event_L_Nt_20where_20t_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseEngine.VerseEngine._L_2fVerse_2eorg_2fVerseEngine_N_Rsubscribable__event
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UClass*                      RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_0                                                        (HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_1                                                        (HasGetValueTypeHash)

class UClass* UVerseEngine::_L_2fVerse_2eorg_2fVerseEngine_N_Rsubscribable__event(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, FVerseFunctionProperty_ _Callee_0, FVerseFunctionProperty_ _Callee_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseEngine", "_L_2fVerse_2eorg_2fVerseEngine_N_Rsubscribable__event");

	Params::UVerseEngine__L_2fVerse_2eorg_2fVerseEngine_N_Rsubscribable__event_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._Callee_0 = _Callee_0;
	Parms._Callee_1 = _Callee_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseEngine.VerseEngine._L_2fVerse_2eorg_2fVerseEngine_N_Rmulticast__delegate_L_Nt_20where_20t_R
// (Final, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UClass*                      __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// class UClass*                      RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UClass* UVerseEngine::_L_2fVerse_2eorg_2fVerseEngine_N_Rmulticast__delegate_L_Nt_20where_20t_R(class UClass* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseEngine", "_L_2fVerse_2eorg_2fVerseEngine_N_Rmulticast__delegate_L_Nt_20where_20t_R");

	Params::UVerseEngine__L_2fVerse_2eorg_2fVerseEngine_N_Rmulticast__delegate_L_Nt_20where_20t_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseEngine.VerseEngine._L_2fVerse_2eorg_2fVerseEngine_N_Rmulticast__delegate
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UClass*                      RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_0                                                        (HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_1                                                        (HasGetValueTypeHash)

class UClass* UVerseEngine::_L_2fVerse_2eorg_2fVerseEngine_N_Rmulticast__delegate(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, FVerseFunctionProperty_ _Callee_0, FVerseFunctionProperty_ _Callee_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseEngine", "_L_2fVerse_2eorg_2fVerseEngine_N_Rmulticast__delegate");

	Params::UVerseEngine__L_2fVerse_2eorg_2fVerseEngine_N_Rmulticast__delegate_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._Callee_0 = _Callee_0;
	Parms._Callee_1 = _Callee_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseEngine.VerseEngine.$InitCDO
// (None)
// Parameters:

void UVerseEngine::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseEngine", "$InitCDO");

	Params::UVerseEngine__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseEngine.VerseEngine_Entity_entity
// (None)

class UClass* UVerseEngine_Entity_entity::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseEngine_Entity_entity");

	return Clss;
}


// VerseEngine_Entity_entity VerseEngine.Default__VerseEngine_Entity_entity
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVerseEngine_Entity_entity* UVerseEngine_Entity_entity::GetDefaultObj()
{
	static class UVerseEngine_Entity_entity* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseEngine_Entity_entity*>(UVerseEngine_Entity_entity::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseEngine.VerseEngine_Entity_entity._L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RRemoveComponent_L_Ncomponent_R
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UEntityComponent*            __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint8                              RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

uint8 UVerseEngine_Entity_entity::_L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RRemoveComponent_L_Ncomponent_R(class UEntityComponent* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseEngine_Entity_entity", "_L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RRemoveComponent_L_Ncomponent_R");

	Params::UVerseEngine_Entity_entity__L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RRemoveComponent_L_Ncomponent_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseEngine.VerseEngine_Entity_entity._L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RIsEqual_L_Nentity_R
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UVerseEngine_Entity_entity*  __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint8                              RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

uint8 UVerseEngine_Entity_entity::_L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RIsEqual_L_Nentity_R(class UVerseEngine_Entity_entity* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseEngine_Entity_entity", "_L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RIsEqual_L_Nentity_R");

	Params::UVerseEngine_Entity_entity__L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RIsEqual_L_Nentity_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseEngine.VerseEngine_Entity_entity._L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RHasComponents_L_N_Ksubtype_Lcomponent_R_R
// (Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// TArray<class UClass*>              __verse_0xB2CDDD72_Argument                                      (Parm, ContainsInstancedReference)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_0                                                    (NoDestructor, HasGetValueTypeHash)
// int64                              _ForIndex_1                                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              _ForLength_2                                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      __verse_0xF655308E_ComponentClass_4                              (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_3                                               (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_4                                               (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_5                                                        (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_6                                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_7                                                    (NoDestructor, HasGetValueTypeHash)
// int64                              _ForIndex_8                                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              _ForLength_9                                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      __verse_0xF655308E_ComponentClass_12                             (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_10                                              (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_11                                              (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_12                                                       (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_13                                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

FOptionalProperty_ UVerseEngine_Entity_entity::_L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RHasComponents_L_N_Ksubtype_Lcomponent_R_R(const TArray<class UClass*>& __verse_0xB2CDDD72_Argument, uint8 _ExprResult_0, int64 _ForIndex_1, int64 _ForLength_2, class UClass* __verse_0xF655308E_ComponentClass_4, FOptionalProperty_ _ExprResultStack_3, FOptionalProperty_ _ExprResultStack_4, FVerseFunctionProperty_ _Callee_5, FOptionalProperty_ _ExprResultStack_6, uint8 _ExprResult_7, int64 _ForIndex_8, int64 _ForLength_9, class UClass* __verse_0xF655308E_ComponentClass_12, FOptionalProperty_ _ExprResultStack_10, FOptionalProperty_ _ExprResultStack_11, FVerseFunctionProperty_ _Callee_12, FOptionalProperty_ _ExprResultStack_13)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseEngine_Entity_entity", "_L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RHasComponents_L_N_Ksubtype_Lcomponent_R_R");

	Params::UVerseEngine_Entity_entity__L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RHasComponents_L_N_Ksubtype_Lcomponent_R_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._ExprResult_0 = _ExprResult_0;
	Parms._ForIndex_1 = _ForIndex_1;
	Parms._ForLength_2 = _ForLength_2;
	Parms.__verse_0xF655308E_ComponentClass_4 = __verse_0xF655308E_ComponentClass_4;
	Parms._ExprResultStack_3 = _ExprResultStack_3;
	Parms._ExprResultStack_4 = _ExprResultStack_4;
	Parms._Callee_5 = _Callee_5;
	Parms._ExprResultStack_6 = _ExprResultStack_6;
	Parms._ExprResult_7 = _ExprResult_7;
	Parms._ForIndex_8 = _ForIndex_8;
	Parms._ForLength_9 = _ForLength_9;
	Parms.__verse_0xF655308E_ComponentClass_12 = __verse_0xF655308E_ComponentClass_12;
	Parms._ExprResultStack_10 = _ExprResultStack_10;
	Parms._ExprResultStack_11 = _ExprResultStack_11;
	Parms._Callee_12 = _Callee_12;
	Parms._ExprResultStack_13 = _ExprResultStack_13;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseEngine.VerseEngine_Entity_entity._L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RGetOrCreateComponentOfType_L_NComponentType_20where_20ComponentType_R
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UClass*                      __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

FOptionalProperty_ UVerseEngine_Entity_entity::_L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RGetOrCreateComponentOfType_L_NComponentType_20where_20ComponentType_R(class UClass* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseEngine_Entity_entity", "_L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RGetOrCreateComponentOfType_L_NComponentType_20where_20ComponentType_R");

	Params::UVerseEngine_Entity_entity__L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RGetOrCreateComponentOfType_L_NComponentType_20where_20ComponentType_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseEngine.VerseEngine_Entity_entity._L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RGetName
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FVerseStringProperty_              RetVal                                                           (Parm, OutParm, ReturnParm, HasGetValueTypeHash)

FVerseStringProperty_ UVerseEngine_Entity_entity::_L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RGetName(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseEngine_Entity_entity", "_L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RGetName");

	Params::UVerseEngine_Entity_entity__L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RGetName_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseEngine.VerseEngine_Entity_entity._L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RGetFullname
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FVerseStringProperty_              RetVal                                                           (Parm, OutParm, ReturnParm, HasGetValueTypeHash)

FVerseStringProperty_ UVerseEngine_Entity_entity::_L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RGetFullname(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseEngine_Entity_entity", "_L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RGetFullname");

	Params::UVerseEngine_Entity_entity__L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RGetFullname_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseEngine.VerseEngine_Entity_entity._L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RGetComponentOfType_L_NComponentType_20where_20ComponentType_R
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UClass*                      __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

FOptionalProperty_ UVerseEngine_Entity_entity::_L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RGetComponentOfType_L_NComponentType_20where_20ComponentType_R(class UClass* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseEngine_Entity_entity", "_L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RGetComponentOfType_L_NComponentType_20where_20ComponentType_R");

	Params::UVerseEngine_Entity_entity__L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RGetComponentOfType_L_NComponentType_20where_20ComponentType_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseEngine.VerseEngine_Entity_entity._L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RGetAllComponentsOfType_L_NComponentType_20where_20ComponentType_R
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UClass*                      __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// TArray<class UEntityComponent*>    RetVal                                                           (Parm, OutParm, ReturnParm, ContainsInstancedReference)

TArray<class UEntityComponent*> UVerseEngine_Entity_entity::_L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RGetAllComponentsOfType_L_NComponentType_20where_20ComponentType_R(class UClass* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseEngine_Entity_entity", "_L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RGetAllComponentsOfType_L_NComponentType_20where_20ComponentType_R");

	Params::UVerseEngine_Entity_entity__L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RGetAllComponentsOfType_L_NComponentType_20where_20ComponentType_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseEngine.VerseEngine_Entity_entity._L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_REnsureComponents_L_N_Ksubtype_Lcomponent_R_R
// (Public, HasDefaults, BlueprintCallable)
// Parameters:
// TArray<class UClass*>              __verse_0xB2CDDD72_Argument                                      (Parm, ContainsInstancedReference)
// int64                              _ForIndex_0                                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              _ForLength_1                                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      __verse_0xF655308E_ComponentClass_4                              (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 _InvokeSureResultDummy_2                                         (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_3                                                        (HasGetValueTypeHash)
// int64                              _ForIndex_4                                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              _ForLength_5                                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      __verse_0xF655308E_ComponentClass_10                             (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 _InvokeSureResultDummy_6                                         (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_7                                                        (HasGetValueTypeHash)

void UVerseEngine_Entity_entity::_L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_REnsureComponents_L_N_Ksubtype_Lcomponent_R_R(const TArray<class UClass*>& __verse_0xB2CDDD72_Argument, int64 _ForIndex_0, int64 _ForLength_1, class UClass* __verse_0xF655308E_ComponentClass_4, FOptionalProperty_ _InvokeSureResultDummy_2, FVerseFunctionProperty_ _Callee_3, int64 _ForIndex_4, int64 _ForLength_5, class UClass* __verse_0xF655308E_ComponentClass_10, FOptionalProperty_ _InvokeSureResultDummy_6, FVerseFunctionProperty_ _Callee_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseEngine_Entity_entity", "_L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_REnsureComponents_L_N_Ksubtype_Lcomponent_R_R");

	Params::UVerseEngine_Entity_entity__L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_REnsureComponents_L_N_Ksubtype_Lcomponent_R_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._ForIndex_0 = _ForIndex_0;
	Parms._ForLength_1 = _ForLength_1;
	Parms.__verse_0xF655308E_ComponentClass_4 = __verse_0xF655308E_ComponentClass_4;
	Parms._InvokeSureResultDummy_2 = _InvokeSureResultDummy_2;
	Parms._Callee_3 = _Callee_3;
	Parms._ForIndex_4 = _ForIndex_4;
	Parms._ForLength_5 = _ForLength_5;
	Parms.__verse_0xF655308E_ComponentClass_10 = __verse_0xF655308E_ComponentClass_10;
	Parms._InvokeSureResultDummy_6 = _InvokeSureResultDummy_6;
	Parms._Callee_7 = _Callee_7;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseEngine.VerseEngine_Entity_entity._L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RDestroy
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// uint8                              RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

uint8 UVerseEngine_Entity_entity::_L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RDestroy(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseEngine_Entity_entity", "_L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RDestroy");

	Params::UVerseEngine_Entity_entity__L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RDestroy_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseEngine.VerseEngine_Entity_entity._L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RAddComponent_L_NComponentType_20where_20ComponentType_R
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UClass*                      __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

FOptionalProperty_ UVerseEngine_Entity_entity::_L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RAddComponent_L_NComponentType_20where_20ComponentType_R(class UClass* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseEngine_Entity_entity", "_L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RAddComponent_L_NComponentType_20where_20ComponentType_R");

	Params::UVerseEngine_Entity_entity__L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fentity_N_RAddComponent_L_NComponentType_20where_20ComponentType_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseEngine.VerseEngine_Entity_entity.$InitInstance
// (None)
// Parameters:

void UVerseEngine_Entity_entity::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseEngine_Entity_entity", "$InitInstance");

	Params::UVerseEngine_Entity_entity__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseEngine.VerseEngine_Entity_entity.$Block
// (None)
// Parameters:

void UVerseEngine_Entity_entity::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseEngine_Entity_entity", "$Block");

	Params::UVerseEngine_Entity_entity__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseEngine.VerseEngine_Entity_entity.$InitCDO
// (None)
// Parameters:

void UVerseEngine_Entity_entity::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseEngine_Entity_entity", "$InitCDO");

	Params::UVerseEngine_Entity_entity__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseEngine.VerseEngine_Entity_EntityHelpers
// (None)

class UClass* UVerseEngine_Entity_EntityHelpers::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseEngine_Entity_EntityHelpers");

	return Clss;
}


// VerseEngine_Entity_EntityHelpers VerseEngine.Default__VerseEngine_Entity_EntityHelpers
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVerseEngine_Entity_EntityHelpers* UVerseEngine_Entity_EntityHelpers::GetDefaultObj()
{
	static class UVerseEngine_Entity_EntityHelpers* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseEngine_Entity_EntityHelpers*>(UVerseEngine_Entity_EntityHelpers::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseEngine.VerseEngine_Entity_EntityHelpers._L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fEntityHelpers_N_RGetEntityFromComponent_L_Ncomponent_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UEntityComponent*            __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

FOptionalProperty_ UVerseEngine_Entity_EntityHelpers::_L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fEntityHelpers_N_RGetEntityFromComponent_L_Ncomponent_R(class UEntityComponent* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseEngine_Entity_EntityHelpers", "_L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fEntityHelpers_N_RGetEntityFromComponent_L_Ncomponent_R");

	Params::UVerseEngine_Entity_EntityHelpers__L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fEntityHelpers_N_RGetEntityFromComponent_L_Ncomponent_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseEngine.VerseEngine_Entity_EntityHelpers._L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fEntityHelpers_N_RGetComponentOfTypeC_L_Ncomponent_M_NType_20where_20Type_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lcomponent_Many_R    __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

FOptionalProperty_ UVerseEngine_Entity_EntityHelpers::_L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fEntityHelpers_N_RGetComponentOfTypeC_L_Ncomponent_M_NType_20where_20Type_R(const struct FTuple_Lcomponent_Many_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseEngine_Entity_EntityHelpers", "_L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fEntityHelpers_N_RGetComponentOfTypeC_L_Ncomponent_M_NType_20where_20Type_R");

	Params::UVerseEngine_Entity_EntityHelpers__L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fEntityHelpers_N_RGetComponentOfTypeC_L_Ncomponent_M_NType_20where_20Type_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseEngine.VerseEngine_Entity_EntityHelpers._L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fEntityHelpers_N_RDestroyObject_L_Ncomponent_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UEntityComponent*            __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint8                              RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

uint8 UVerseEngine_Entity_EntityHelpers::_L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fEntityHelpers_N_RDestroyObject_L_Ncomponent_R(class UEntityComponent* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseEngine_Entity_EntityHelpers", "_L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fEntityHelpers_N_RDestroyObject_L_Ncomponent_R");

	Params::UVerseEngine_Entity_EntityHelpers__L_2fVerse_2eorg_2fVerseEngine_2fEntity_2fEntityHelpers_N_RDestroyObject_L_Ncomponent_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseEngine.VerseEngine_Entity_EntityHelpers.$InitCDO
// (None)
// Parameters:

void UVerseEngine_Entity_EntityHelpers::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseEngine_Entity_EntityHelpers", "$InitCDO");

	Params::UVerseEngine_Entity_EntityHelpers__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseEngine.VerseEngine_multicast_delegate_base
// (None)

class UClass* UVerseEngine_multicast_delegate_base::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseEngine_multicast_delegate_base");

	return Clss;
}


// VerseEngine_multicast_delegate_base VerseEngine.Default__VerseEngine_multicast_delegate_base
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVerseEngine_multicast_delegate_base* UVerseEngine_multicast_delegate_base::GetDefaultObj()
{
	static class UVerseEngine_multicast_delegate_base* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseEngine_multicast_delegate_base*>(UVerseEngine_multicast_delegate_base::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseEngine.VerseEngine_multicast_delegate_base.$InitInstance
// (None)
// Parameters:

void UVerseEngine_multicast_delegate_base::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseEngine_multicast_delegate_base", "$InitInstance");

	Params::UVerseEngine_multicast_delegate_base__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseEngine.VerseEngine_multicast_delegate_base.$Block
// (None)
// Parameters:

void UVerseEngine_multicast_delegate_base::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseEngine_multicast_delegate_base", "$Block");

	Params::UVerseEngine_multicast_delegate_base__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseEngine.VerseEngine_multicast_delegate_base.$InitCDO
// (None)
// Parameters:

void UVerseEngine_multicast_delegate_base::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseEngine_multicast_delegate_base", "$InitCDO");

	Params::UVerseEngine_multicast_delegate_base__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseEngine.VerseEngine_multicast_delegate
// (None)

class UClass* UVerseEngine_multicast_delegate::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseEngine_multicast_delegate");

	return Clss;
}


// VerseEngine_multicast_delegate VerseEngine.Default__VerseEngine_multicast_delegate
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVerseEngine_multicast_delegate* UVerseEngine_multicast_delegate::GetDefaultObj()
{
	static class UVerseEngine_multicast_delegate* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseEngine_multicast_delegate*>(UVerseEngine_multicast_delegate::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseEngine.VerseEngine_multicast_delegate._L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FVerseFunctionProperty_            __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UObject*                     RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UObject* UVerseEngine_multicast_delegate::_L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R(FVerseFunctionProperty_ __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseEngine_multicast_delegate", "_L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R");

	Params::UVerseEngine_multicast_delegate__L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseEngine.VerseEngine_multicast_delegate._L_2fVerse_2eorg_2fVerseEngine_2fmulticast__delegate_2fmulticast__delegate_Lt_R_N_REmpty
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UVerseEngine_multicast_delegate::_L_2fVerse_2eorg_2fVerseEngine_2fmulticast__delegate_2fmulticast__delegate_Lt_R_N_REmpty(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseEngine_multicast_delegate", "_L_2fVerse_2eorg_2fVerseEngine_2fmulticast__delegate_2fmulticast__delegate_Lt_R_N_REmpty");

	Params::UVerseEngine_multicast_delegate__L_2fVerse_2eorg_2fVerseEngine_2fmulticast__delegate_2fmulticast__delegate_Lt_R_N_REmpty_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseEngine.VerseEngine_multicast_delegate._L_2fVerse_2eorg_2fVerseEngine_2fmulticast__delegate_2fmulticast__delegate_Lt_R_N_RBroadcast_L_Nt_R
// (Native, Public, BlueprintCallable)
// Parameters:
// FVerseDynamicProperty_             __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UVerseEngine_multicast_delegate::_L_2fVerse_2eorg_2fVerseEngine_2fmulticast__delegate_2fmulticast__delegate_Lt_R_N_RBroadcast_L_Nt_R(FVerseDynamicProperty_ __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseEngine_multicast_delegate", "_L_2fVerse_2eorg_2fVerseEngine_2fmulticast__delegate_2fmulticast__delegate_Lt_R_N_RBroadcast_L_Nt_R");

	Params::UVerseEngine_multicast_delegate__L_2fVerse_2eorg_2fVerseEngine_2fmulticast__delegate_2fmulticast__delegate_Lt_R_N_RBroadcast_L_Nt_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseEngine.VerseEngine_multicast_delegate.$InitInstance
// (None)
// Parameters:

void UVerseEngine_multicast_delegate::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseEngine_multicast_delegate", "$InitInstance");

	Params::UVerseEngine_multicast_delegate__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseEngine.VerseEngine_multicast_delegate.$Block
// (None)
// Parameters:

void UVerseEngine_multicast_delegate::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseEngine_multicast_delegate", "$Block");

	Params::UVerseEngine_multicast_delegate__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseEngine.VerseEngine_multicast_delegate.$InitCDO
// (None)
// Parameters:

void UVerseEngine_multicast_delegate::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseEngine_multicast_delegate", "$InitCDO");

	Params::UVerseEngine_multicast_delegate__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseEngine.VerseEngine_multicast_delegate_subscription
// (None)

class UClass* UVerseEngine_multicast_delegate_subscription::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseEngine_multicast_delegate_subscription");

	return Clss;
}


// VerseEngine_multicast_delegate_subscription VerseEngine.Default__VerseEngine_multicast_delegate_subscription
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVerseEngine_multicast_delegate_subscription* UVerseEngine_multicast_delegate_subscription::GetDefaultObj()
{
	static class UVerseEngine_multicast_delegate_subscription* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseEngine_multicast_delegate_subscription*>(UVerseEngine_multicast_delegate_subscription::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseEngine.VerseEngine_multicast_delegate_subscription._L_2fVerse_2eorg_2fVerse_2fcancelable_N_RCancel
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UVerseEngine_multicast_delegate_subscription::_L_2fVerse_2eorg_2fVerse_2fcancelable_N_RCancel(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseEngine_multicast_delegate_subscription", "_L_2fVerse_2eorg_2fVerse_2fcancelable_N_RCancel");

	Params::UVerseEngine_multicast_delegate_subscription__L_2fVerse_2eorg_2fVerse_2fcancelable_N_RCancel_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseEngine.VerseEngine_multicast_delegate_subscription.$InitInstance
// (None)
// Parameters:

void UVerseEngine_multicast_delegate_subscription::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseEngine_multicast_delegate_subscription", "$InitInstance");

	Params::UVerseEngine_multicast_delegate_subscription__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseEngine.VerseEngine_multicast_delegate_subscription.$Block
// (None)
// Parameters:

void UVerseEngine_multicast_delegate_subscription::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseEngine_multicast_delegate_subscription", "$Block");

	Params::UVerseEngine_multicast_delegate_subscription__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseEngine.VerseEngine_multicast_delegate_subscription.$InitCDO
// (None)
// Parameters:

void UVerseEngine_multicast_delegate_subscription::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseEngine_multicast_delegate_subscription", "$InitCDO");

	Params::UVerseEngine_multicast_delegate_subscription__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseEngine.VerseEngine_subscribable_event
// (None)

class UClass* UVerseEngine_subscribable_event::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseEngine_subscribable_event");

	return Clss;
}


// VerseEngine_subscribable_event VerseEngine.Default__VerseEngine_subscribable_event
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVerseEngine_subscribable_event* UVerseEngine_subscribable_event::GetDefaultObj()
{
	static class UVerseEngine_subscribable_event* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseEngine_subscribable_event*>(UVerseEngine_subscribable_event::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseEngine.VerseEngine_subscribable_event.Await
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UVerseEngine_subscribable_event::Await(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseEngine_subscribable_event", "Await");

	Params::UVerseEngine_subscribable_event_Await_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseEngine.VerseEngine_subscribable_event.$InitInstance
// (None)
// Parameters:

void UVerseEngine_subscribable_event::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseEngine_subscribable_event", "$InitInstance");

	Params::UVerseEngine_subscribable_event__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseEngine.VerseEngine_subscribable_event.$Block
// (None)
// Parameters:

void UVerseEngine_subscribable_event::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseEngine_subscribable_event", "$Block");

	Params::UVerseEngine_subscribable_event__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseEngine.VerseEngine_subscribable_event.$InitCDO
// (None)
// Parameters:

void UVerseEngine_subscribable_event::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseEngine_subscribable_event", "$InitCDO");

	Params::UVerseEngine_subscribable_event__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}

}


