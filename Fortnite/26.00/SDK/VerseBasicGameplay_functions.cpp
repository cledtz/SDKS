#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// VerseClass VerseBasicGameplay.$SolarisSignatureFunctionOuter
// (None)

class UClass* U_SolarisSignatureFunctionOuter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("$SolarisSignatureFunctionOuter");

	return Clss;
}


// $SolarisSignatureFunctionOuter VerseBasicGameplay.Default__$SolarisSignatureFunctionOuter
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class U_SolarisSignatureFunctionOuter* U_SolarisSignatureFunctionOuter::GetDefaultObj()
{
	static class U_SolarisSignatureFunctionOuter* Default = nullptr;

	if (!Default)
		Default = static_cast<U_SolarisSignatureFunctionOuter*>(U_SolarisSignatureFunctionOuter::StaticClass()->DefaultObject);

	return Default;
}


// VerseClass VerseBasicGameplay.task_VerseBasicGameplay_PlayerManager_basic_player_manager_impl$BeginWaitingForEvents
// (None)

class UClass* UTask_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_VerseBasicGameplay_PlayerManager_basic_player_manager_impl$BeginWaitingForEvents");

	return Clss;
}


// task_VerseBasicGameplay_PlayerManager_basic_player_manager_impl$BeginWaitingForEvents VerseBasicGameplay.Default__task_VerseBasicGameplay_PlayerManager_basic_player_manager_impl$BeginWaitingForEvents
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents* UTask_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents::GetDefaultObj()
{
	static class UTask_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents*>(UTask_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseBasicGameplay.task_VerseBasicGameplay_PlayerManager_basic_player_manager_impl$BeginWaitingForEvents.Update
// (Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_VerseBasicGameplay_PlayerManager_basic_player_manager_impl$BeginWaitingForEvents", "Update");

	Params::UTask_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents_Update_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass VerseBasicGameplay.VerseBasicGameplay_PlayerManager
// (None)

class UClass* UVerseBasicGameplay_PlayerManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseBasicGameplay_PlayerManager");

	return Clss;
}


// VerseBasicGameplay_PlayerManager VerseBasicGameplay.Default__VerseBasicGameplay_PlayerManager
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVerseBasicGameplay_PlayerManager* UVerseBasicGameplay_PlayerManager::GetDefaultObj()
{
	static class UVerseBasicGameplay_PlayerManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseBasicGameplay_PlayerManager*>(UVerseBasicGameplay_PlayerManager::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseBasicGameplay.VerseBasicGameplay_PlayerManager._L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_N_RGetPlayerManagerForLocation_L_Nvector3_R
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FSpatialMath_vector3        __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0x00000000__1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0xE3700E84_MaybeEntity_2                                 (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_0                                                        (HasGetValueTypeHash)
// struct FTuple_Lvector3_M_Kchar_R   _ExprResult_1                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_2                                                    (HasGetValueTypeHash)
// class UVerseEngine_Entity_entity*  __verse_0x5F5E89D8_ValidEntity_3                                 (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_3                                               (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UVGameplayRst_Transform_position_component*__verse_0x0A5C85D0_PosComp_3                                     (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 _FallibleType_4                                                  (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_5                                               (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_6                                                    (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UVerseEngine_Entity_entity*  __verse_0x00000000__4                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_7                                                        (HasGetValueTypeHash)
// class UPlayspace_playspace_component*__verse_0x9F23064A_ThePlayspaceComp_3                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 _FallibleType_8                                                  (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_9                                               (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_10                                                   (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UVerseEngine_Entity_entity*  __verse_0x00000000__5                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_11                                                       (HasGetValueTypeHash)
// class UVGameplayRst_Transform_position_component*__verse_0x00000000__7                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_12                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_13                                                       (HasGetValueTypeHash)
// class UVerseBasicGameplay_PlayerManager_basic_player_manager_impl*__verse_0xD8BFBA84_BasicPlayerManager_6                          (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint64                             _InstancingGraph_14                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerseBasicGameplay_PlayerManager_basic_player_manager_impl*__verse_0x00000000__8                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// class UConcurrency_task*           _AsyncTask_15                                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _AsyncTaskClass_16                                               (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_17                                                   (HasGetValueTypeHash)
// int64                              _AsyncResult_18                                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_19                                                   (NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_20                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0x00000000__10                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0xE3700E84_MaybeEntity_11                                (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_21                                                       (HasGetValueTypeHash)
// struct FTuple_Lvector3_M_Kchar_R   _ExprResult_22                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_23                                                   (HasGetValueTypeHash)
// class UVerseEngine_Entity_entity*  __verse_0x5F5E89D8_ValidEntity_12                                (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_24                                              (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UVGameplayRst_Transform_position_component*__verse_0x0A5C85D0_PosComp_12                                    (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 _FallibleType_25                                                 (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_26                                              (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_27                                                   (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UVerseEngine_Entity_entity*  __verse_0x00000000__13                                           (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_28                                                       (HasGetValueTypeHash)
// class UPlayspace_playspace_component*__verse_0x9F23064A_ThePlayspaceComp_12                           (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 _FallibleType_29                                                 (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_30                                              (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_31                                                   (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UVerseEngine_Entity_entity*  __verse_0x00000000__14                                           (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_32                                                       (HasGetValueTypeHash)
// class UVGameplayRst_Transform_position_component*__verse_0x00000000__16                                           (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_33                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_34                                                       (HasGetValueTypeHash)
// class UVerseBasicGameplay_PlayerManager_basic_player_manager_impl*__verse_0xD8BFBA84_BasicPlayerManager_15                         (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint64                             _InstancingGraph_35                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerseBasicGameplay_PlayerManager_basic_player_manager_impl*__verse_0x00000000__17                                           (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// class UConcurrency_task*           _AsyncTask_36                                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _AsyncTaskClass_37                                               (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_38                                                   (HasGetValueTypeHash)
// int64                              _AsyncResult_39                                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_40                                                   (NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_41                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionalProperty_ UVerseBasicGameplay_PlayerManager::_L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_N_RGetPlayerManagerForLocation_L_Nvector3_R(const struct FSpatialMath_vector3& __verse_0xB2CDDD72_Argument, FOptionalProperty_ __verse_0x00000000__1, FOptionalProperty_ __verse_0xE3700E84_MaybeEntity_2, FVerseFunctionProperty_ _Callee_0, const struct FTuple_Lvector3_M_Kchar_R& _ExprResult_1, FVerseStringProperty_ _ExprResult_2, class UVerseEngine_Entity_entity* __verse_0x5F5E89D8_ValidEntity_3, FOptionalProperty_ _ExprResultStack_3, class UVGameplayRst_Transform_position_component* __verse_0x0A5C85D0_PosComp_3, FOptionalProperty_ _FallibleType_4, FOptionalProperty_ _ExprResultStack_5, FOptionalProperty_ _ExprResult_6, class UVerseEngine_Entity_entity* __verse_0x00000000__4, FVerseFunctionProperty_ _Callee_7, class UPlayspace_playspace_component* __verse_0x9F23064A_ThePlayspaceComp_3, FOptionalProperty_ _FallibleType_8, FOptionalProperty_ _ExprResultStack_9, FOptionalProperty_ _ExprResult_10, class UVerseEngine_Entity_entity* __verse_0x00000000__5, FVerseFunctionProperty_ _Callee_11, class UVGameplayRst_Transform_position_component* __verse_0x00000000__7, enum class EVerseTrue _InvokeSureResultDummy_12, FVerseFunctionProperty_ _Callee_13, class UVerseBasicGameplay_PlayerManager_basic_player_manager_impl* __verse_0xD8BFBA84_BasicPlayerManager_6, uint64 _InstancingGraph_14, class UVerseBasicGameplay_PlayerManager_basic_player_manager_impl* __verse_0x00000000__8, class UConcurrency_task* _AsyncTask_15, FVerseFunctionProperty_ _AsyncTaskClass_16, const struct FTuple_L_R& _ExprResult_17, int64 _AsyncResult_18, uint8 _ExprResult_19, FOptionalProperty_ _ExprResultStack_20, FOptionalProperty_ __verse_0x00000000__10, FOptionalProperty_ __verse_0xE3700E84_MaybeEntity_11, FVerseFunctionProperty_ _Callee_21, const struct FTuple_Lvector3_M_Kchar_R& _ExprResult_22, FVerseStringProperty_ _ExprResult_23, class UVerseEngine_Entity_entity* __verse_0x5F5E89D8_ValidEntity_12, FOptionalProperty_ _ExprResultStack_24, class UVGameplayRst_Transform_position_component* __verse_0x0A5C85D0_PosComp_12, FOptionalProperty_ _FallibleType_25, FOptionalProperty_ _ExprResultStack_26, FOptionalProperty_ _ExprResult_27, class UVerseEngine_Entity_entity* __verse_0x00000000__13, FVerseFunctionProperty_ _Callee_28, class UPlayspace_playspace_component* __verse_0x9F23064A_ThePlayspaceComp_12, FOptionalProperty_ _FallibleType_29, FOptionalProperty_ _ExprResultStack_30, FOptionalProperty_ _ExprResult_31, class UVerseEngine_Entity_entity* __verse_0x00000000__14, FVerseFunctionProperty_ _Callee_32, class UVGameplayRst_Transform_position_component* __verse_0x00000000__16, enum class EVerseTrue _InvokeSureResultDummy_33, FVerseFunctionProperty_ _Callee_34, class UVerseBasicGameplay_PlayerManager_basic_player_manager_impl* __verse_0xD8BFBA84_BasicPlayerManager_15, uint64 _InstancingGraph_35, class UVerseBasicGameplay_PlayerManager_basic_player_manager_impl* __verse_0x00000000__17, class UConcurrency_task* _AsyncTask_36, FVerseFunctionProperty_ _AsyncTaskClass_37, const struct FTuple_L_R& _ExprResult_38, int64 _AsyncResult_39, uint8 _ExprResult_40, FOptionalProperty_ _ExprResultStack_41)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseBasicGameplay_PlayerManager", "_L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_N_RGetPlayerManagerForLocation_L_Nvector3_R");

	Params::UVerseBasicGameplay_PlayerManager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_N_RGetPlayerManagerForLocation_L_Nvector3_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms.__verse_0x00000000__1 = __verse_0x00000000__1;
	Parms.__verse_0xE3700E84_MaybeEntity_2 = __verse_0xE3700E84_MaybeEntity_2;
	Parms._Callee_0 = _Callee_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms.__verse_0x5F5E89D8_ValidEntity_3 = __verse_0x5F5E89D8_ValidEntity_3;
	Parms._ExprResultStack_3 = _ExprResultStack_3;
	Parms.__verse_0x0A5C85D0_PosComp_3 = __verse_0x0A5C85D0_PosComp_3;
	Parms._FallibleType_4 = _FallibleType_4;
	Parms._ExprResultStack_5 = _ExprResultStack_5;
	Parms._ExprResult_6 = _ExprResult_6;
	Parms.__verse_0x00000000__4 = __verse_0x00000000__4;
	Parms._Callee_7 = _Callee_7;
	Parms.__verse_0x9F23064A_ThePlayspaceComp_3 = __verse_0x9F23064A_ThePlayspaceComp_3;
	Parms._FallibleType_8 = _FallibleType_8;
	Parms._ExprResultStack_9 = _ExprResultStack_9;
	Parms._ExprResult_10 = _ExprResult_10;
	Parms.__verse_0x00000000__5 = __verse_0x00000000__5;
	Parms._Callee_11 = _Callee_11;
	Parms.__verse_0x00000000__7 = __verse_0x00000000__7;
	Parms._InvokeSureResultDummy_12 = _InvokeSureResultDummy_12;
	Parms._Callee_13 = _Callee_13;
	Parms.__verse_0xD8BFBA84_BasicPlayerManager_6 = __verse_0xD8BFBA84_BasicPlayerManager_6;
	Parms._InstancingGraph_14 = _InstancingGraph_14;
	Parms.__verse_0x00000000__8 = __verse_0x00000000__8;
	Parms._AsyncTask_15 = _AsyncTask_15;
	Parms._AsyncTaskClass_16 = _AsyncTaskClass_16;
	Parms._ExprResult_17 = _ExprResult_17;
	Parms._AsyncResult_18 = _AsyncResult_18;
	Parms._ExprResult_19 = _ExprResult_19;
	Parms._ExprResultStack_20 = _ExprResultStack_20;
	Parms.__verse_0x00000000__10 = __verse_0x00000000__10;
	Parms.__verse_0xE3700E84_MaybeEntity_11 = __verse_0xE3700E84_MaybeEntity_11;
	Parms._Callee_21 = _Callee_21;
	Parms._ExprResult_22 = _ExprResult_22;
	Parms._ExprResult_23 = _ExprResult_23;
	Parms.__verse_0x5F5E89D8_ValidEntity_12 = __verse_0x5F5E89D8_ValidEntity_12;
	Parms._ExprResultStack_24 = _ExprResultStack_24;
	Parms.__verse_0x0A5C85D0_PosComp_12 = __verse_0x0A5C85D0_PosComp_12;
	Parms._FallibleType_25 = _FallibleType_25;
	Parms._ExprResultStack_26 = _ExprResultStack_26;
	Parms._ExprResult_27 = _ExprResult_27;
	Parms.__verse_0x00000000__13 = __verse_0x00000000__13;
	Parms._Callee_28 = _Callee_28;
	Parms.__verse_0x9F23064A_ThePlayspaceComp_12 = __verse_0x9F23064A_ThePlayspaceComp_12;
	Parms._FallibleType_29 = _FallibleType_29;
	Parms._ExprResultStack_30 = _ExprResultStack_30;
	Parms._ExprResult_31 = _ExprResult_31;
	Parms.__verse_0x00000000__14 = __verse_0x00000000__14;
	Parms._Callee_32 = _Callee_32;
	Parms.__verse_0x00000000__16 = __verse_0x00000000__16;
	Parms._InvokeSureResultDummy_33 = _InvokeSureResultDummy_33;
	Parms._Callee_34 = _Callee_34;
	Parms.__verse_0xD8BFBA84_BasicPlayerManager_15 = __verse_0xD8BFBA84_BasicPlayerManager_15;
	Parms._InstancingGraph_35 = _InstancingGraph_35;
	Parms.__verse_0x00000000__17 = __verse_0x00000000__17;
	Parms._AsyncTask_36 = _AsyncTask_36;
	Parms._AsyncTaskClass_37 = _AsyncTaskClass_37;
	Parms._ExprResult_38 = _ExprResult_38;
	Parms._AsyncResult_39 = _AsyncResult_39;
	Parms._ExprResult_40 = _ExprResult_40;
	Parms._ExprResultStack_41 = _ExprResultStack_41;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseBasicGameplay.VerseBasicGameplay_PlayerManager.$InitCDO
// (None)
// Parameters:

void UVerseBasicGameplay_PlayerManager::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseBasicGameplay_PlayerManager", "$InitCDO");

	Params::UVerseBasicGameplay_PlayerManager__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseBasicGameplay.VerseBasicGameplay_PlayerManager_basic_player_manager
// (None)

class UClass* UVerseBasicGameplay_PlayerManager_basic_player_manager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseBasicGameplay_PlayerManager_basic_player_manager");

	return Clss;
}


// VerseBasicGameplay_PlayerManager_basic_player_manager VerseBasicGameplay.Default__VerseBasicGameplay_PlayerManager_basic_player_manager
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVerseBasicGameplay_PlayerManager_basic_player_manager* UVerseBasicGameplay_PlayerManager_basic_player_manager::GetDefaultObj()
{
	static class UVerseBasicGameplay_PlayerManager_basic_player_manager* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseBasicGameplay_PlayerManager_basic_player_manager*>(UVerseBasicGameplay_PlayerManager_basic_player_manager::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseBasicGameplay.VerseBasicGameplay_PlayerManager_basic_player_manager._L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayers
// (Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// TArray<class USimulation_player*>  RetVal                                                           (Parm, OutParm, ReturnParm, ContainsInstancedReference)
// TArray<class USimulation_player*>  _ForResult_0                                                     (ContainsInstancedReference)
// TArray<class USimulation_player_component*>_ForIterable_1                                                   (ContainsInstancedReference)
// class UPlayspace_playspace_component*__verse_0x00000000__3                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_2                                                        (HasGetValueTypeHash)
// int64                              _ForIndex_3                                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              _ForLength_4                                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USimulation_player_component*__verse_0x1AA69DA0_PlayerComp_4                                  (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// class USimulation_player*          _ExprResult_5                                                    (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// class USimulation_player_component*__verse_0x00000000__7                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_6                                                        (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_7                                                    (HasGetValueTypeHash)
// TArray<class USimulation_player*>  _ForResult_8                                                     (ContainsInstancedReference)
// TArray<class USimulation_player_component*>_ForIterable_9                                                   (ContainsInstancedReference)
// class UPlayspace_playspace_component*__verse_0x00000000__10                                           (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_10                                                       (HasGetValueTypeHash)
// int64                              _ForIndex_11                                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              _ForLength_12                                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USimulation_player_component*__verse_0x1AA69DA0_PlayerComp_11                                 (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// class USimulation_player*          _ExprResult_13                                                   (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// class USimulation_player_component*__verse_0x00000000__14                                           (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_14                                                       (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_15                                                   (HasGetValueTypeHash)

TArray<class USimulation_player*> UVerseBasicGameplay_PlayerManager_basic_player_manager::_L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayers(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, const TArray<class USimulation_player*>& _ForResult_0, const TArray<class USimulation_player_component*>& _ForIterable_1, class UPlayspace_playspace_component* __verse_0x00000000__3, FVerseFunctionProperty_ _Callee_2, int64 _ForIndex_3, int64 _ForLength_4, class USimulation_player_component* __verse_0x1AA69DA0_PlayerComp_4, class USimulation_player* _ExprResult_5, class USimulation_player_component* __verse_0x00000000__7, FVerseFunctionProperty_ _Callee_6, const struct FTuple_L_R& _ExprResult_7, const TArray<class USimulation_player*>& _ForResult_8, const TArray<class USimulation_player_component*>& _ForIterable_9, class UPlayspace_playspace_component* __verse_0x00000000__10, FVerseFunctionProperty_ _Callee_10, int64 _ForIndex_11, int64 _ForLength_12, class USimulation_player_component* __verse_0x1AA69DA0_PlayerComp_11, class USimulation_player* _ExprResult_13, class USimulation_player_component* __verse_0x00000000__14, FVerseFunctionProperty_ _Callee_14, const struct FTuple_L_R& _ExprResult_15)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseBasicGameplay_PlayerManager_basic_player_manager", "_L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayers");

	Params::UVerseBasicGameplay_PlayerManager_basic_player_manager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayers_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._ForResult_0 = _ForResult_0;
	Parms._ForIterable_1 = _ForIterable_1;
	Parms.__verse_0x00000000__3 = __verse_0x00000000__3;
	Parms._Callee_2 = _Callee_2;
	Parms._ForIndex_3 = _ForIndex_3;
	Parms._ForLength_4 = _ForLength_4;
	Parms.__verse_0x1AA69DA0_PlayerComp_4 = __verse_0x1AA69DA0_PlayerComp_4;
	Parms._ExprResult_5 = _ExprResult_5;
	Parms.__verse_0x00000000__7 = __verse_0x00000000__7;
	Parms._Callee_6 = _Callee_6;
	Parms._ExprResult_7 = _ExprResult_7;
	Parms._ForResult_8 = _ForResult_8;
	Parms._ForIterable_9 = _ForIterable_9;
	Parms.__verse_0x00000000__10 = __verse_0x00000000__10;
	Parms._Callee_10 = _Callee_10;
	Parms._ForIndex_11 = _ForIndex_11;
	Parms._ForLength_12 = _ForLength_12;
	Parms.__verse_0x1AA69DA0_PlayerComp_11 = __verse_0x1AA69DA0_PlayerComp_11;
	Parms._ExprResult_13 = _ExprResult_13;
	Parms.__verse_0x00000000__14 = __verse_0x00000000__14;
	Parms._Callee_14 = _Callee_14;
	Parms._ExprResult_15 = _ExprResult_15;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseBasicGameplay.VerseBasicGameplay_PlayerManager_basic_player_manager._L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayerCount
// (Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayspace_playspace_component*__verse_0x00000000__1                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_0                                                        (HasGetValueTypeHash)
// class UPlayspace_playspace_component*__verse_0x00000000__2                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_1                                                        (HasGetValueTypeHash)

int64 UVerseBasicGameplay_PlayerManager_basic_player_manager::_L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayerCount(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, class UPlayspace_playspace_component* __verse_0x00000000__1, FVerseFunctionProperty_ _Callee_0, class UPlayspace_playspace_component* __verse_0x00000000__2, FVerseFunctionProperty_ _Callee_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseBasicGameplay_PlayerManager_basic_player_manager", "_L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayerCount");

	Params::UVerseBasicGameplay_PlayerManager_basic_player_manager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayerCount_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms.__verse_0x00000000__1 = __verse_0x00000000__1;
	Parms._Callee_0 = _Callee_0;
	Parms.__verse_0x00000000__2 = __verse_0x00000000__2;
	Parms._Callee_1 = _Callee_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseBasicGameplay.VerseBasicGameplay_PlayerManager_basic_player_manager.$InitInstance
// (None)
// Parameters:

void UVerseBasicGameplay_PlayerManager_basic_player_manager::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseBasicGameplay_PlayerManager_basic_player_manager", "$InitInstance");

	Params::UVerseBasicGameplay_PlayerManager_basic_player_manager__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseBasicGameplay.VerseBasicGameplay_PlayerManager_basic_player_manager.$Block
// (None)
// Parameters:

void UVerseBasicGameplay_PlayerManager_basic_player_manager::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseBasicGameplay_PlayerManager_basic_player_manager", "$Block");

	Params::UVerseBasicGameplay_PlayerManager_basic_player_manager__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseBasicGameplay.VerseBasicGameplay_PlayerManager_basic_player_manager.$InitCDO
// (None)
// Parameters:

void UVerseBasicGameplay_PlayerManager_basic_player_manager::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseBasicGameplay_PlayerManager_basic_player_manager", "$InitCDO");

	Params::UVerseBasicGameplay_PlayerManager_basic_player_manager__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseBasicGameplay.VerseBasicGameplay_PlayerManager_basic_player_manager_impl
// (None)

class UClass* UVerseBasicGameplay_PlayerManager_basic_player_manager_impl::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseBasicGameplay_PlayerManager_basic_player_manager_impl");

	return Clss;
}


// VerseBasicGameplay_PlayerManager_basic_player_manager_impl VerseBasicGameplay.Default__VerseBasicGameplay_PlayerManager_basic_player_manager_impl
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVerseBasicGameplay_PlayerManager_basic_player_manager_impl* UVerseBasicGameplay_PlayerManager_basic_player_manager_impl::GetDefaultObj()
{
	static class UVerseBasicGameplay_PlayerManager_basic_player_manager_impl* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseBasicGameplay_PlayerManager_basic_player_manager_impl*>(UVerseBasicGameplay_PlayerManager_basic_player_manager_impl::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseBasicGameplay.VerseBasicGameplay_PlayerManager_basic_player_manager_impl.BeginWaitingForEvents
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UVerseBasicGameplay_PlayerManager_basic_player_manager_impl::BeginWaitingForEvents(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseBasicGameplay_PlayerManager_basic_player_manager_impl", "BeginWaitingForEvents");

	Params::UVerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseBasicGameplay.VerseBasicGameplay_PlayerManager_basic_player_manager_impl.$InitInstance
// (None)
// Parameters:

void UVerseBasicGameplay_PlayerManager_basic_player_manager_impl::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseBasicGameplay_PlayerManager_basic_player_manager_impl", "$InitInstance");

	Params::UVerseBasicGameplay_PlayerManager_basic_player_manager_impl__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseBasicGameplay.VerseBasicGameplay_PlayerManager_basic_player_manager_impl.$Block
// (None)
// Parameters:

void UVerseBasicGameplay_PlayerManager_basic_player_manager_impl::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseBasicGameplay_PlayerManager_basic_player_manager_impl", "$Block");

	Params::UVerseBasicGameplay_PlayerManager_basic_player_manager_impl__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseBasicGameplay.VerseBasicGameplay_PlayerManager_basic_player_manager_impl.$InitCDO
// (HasDefaults)
// Parameters:
// class USimulation_player_multicast_delegate*_ExprResult_0                                                    (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint64                             _InstancingGraph_1                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USimulation_player_multicast_delegate*_ExprResult_2                                                    (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint64                             _InstancingGraph_3                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USimulation_player_multicast_delegate*_ExprResult_4                                                    (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint64                             _InstancingGraph_5                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USimulation_player_multicast_delegate*_ExprResult_6                                                    (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint64                             _InstancingGraph_7                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVerseBasicGameplay_PlayerManager_basic_player_manager_impl::_InitCDO(class USimulation_player_multicast_delegate* _ExprResult_0, uint64 _InstancingGraph_1, class USimulation_player_multicast_delegate* _ExprResult_2, uint64 _InstancingGraph_3, class USimulation_player_multicast_delegate* _ExprResult_4, uint64 _InstancingGraph_5, class USimulation_player_multicast_delegate* _ExprResult_6, uint64 _InstancingGraph_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseBasicGameplay_PlayerManager_basic_player_manager_impl", "$InitCDO");

	Params::UVerseBasicGameplay_PlayerManager_basic_player_manager_impl__InitCDO_Params Parms{};

	Parms._ExprResult_0 = _ExprResult_0;
	Parms._InstancingGraph_1 = _InstancingGraph_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._InstancingGraph_3 = _InstancingGraph_3;
	Parms._ExprResult_4 = _ExprResult_4;
	Parms._InstancingGraph_5 = _InstancingGraph_5;
	Parms._ExprResult_6 = _ExprResult_6;
	Parms._InstancingGraph_7 = _InstancingGraph_7;

	UObject::ProcessEvent(Func, &Parms);

}

}


