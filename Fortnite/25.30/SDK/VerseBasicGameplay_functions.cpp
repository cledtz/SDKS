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


// Function VerseBasicGameplay.task_VerseBasicGameplay_PlayerManager_basic_player_manager_impl$BeginWaitingForEvents.Update
// (Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents::Update()
{
	static auto Func = Class->GetFunction("task_VerseBasicGameplay_PlayerManager_basic_player_manager_impl$BeginWaitingForEvents", "Update");

	Params::UTask_VerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents_Update_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseBasicGameplay.VerseBasicGameplay_PlayerManager._L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_N_RGetPlayerManagerForLocation_L_Nvector3_R
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FSpatialMath_vector3        __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// FOptionProperty_                   RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionProperty_                   __verse_0x00000000__1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FOptionProperty_                   __verse_0xE3700E84_MaybeEntity_2                                 (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_0                                                        (HasGetValueTypeHash)
// struct FTuple_Lvector3_M_Kchar_R   _ExprResult_1                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_2                                                    (HasGetValueTypeHash)
// class UVerseEngine_Entity_entity*  __verse_0x5F5E89D8_ValidEntity_3                                 (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionProperty_                   _ExprResultStack_3                                               (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UVGameplayRst_Transform_position_component*__verse_0x0A5C85D0_PosComp_3                                     (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionProperty_                   _FallibleType_4                                                  (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionProperty_                   _ExprResultStack_5                                               (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionProperty_                   _ExprResult_6                                                    (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UVerseEngine_Entity_entity*  __verse_0x00000000__4                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_7                                                        (HasGetValueTypeHash)
// class UPlayspace_playspace_component*__verse_0x9F23064A_ThePlayspaceComp_3                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionProperty_                   _FallibleType_8                                                  (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionProperty_                   _ExprResultStack_9                                               (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionProperty_                   _ExprResult_10                                                   (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
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
// FOptionProperty_                   _ExprResultStack_20                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionProperty_ UVerseBasicGameplay_PlayerManager::_L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_N_RGetPlayerManagerForLocation_L_Nvector3_R(const struct FSpatialMath_vector3& __verse_0xB2CDDD72_Argument, FOptionProperty_ __verse_0x00000000__1, FOptionProperty_ __verse_0xE3700E84_MaybeEntity_2, FVerseFunctionProperty_ _Callee_0, const struct FTuple_Lvector3_M_Kchar_R& _ExprResult_1, FVerseStringProperty_ _ExprResult_2, class UVerseEngine_Entity_entity* __verse_0x5F5E89D8_ValidEntity_3, FOptionProperty_ _ExprResultStack_3, class UVGameplayRst_Transform_position_component* __verse_0x0A5C85D0_PosComp_3, FOptionProperty_ _FallibleType_4, FOptionProperty_ _ExprResultStack_5, FOptionProperty_ _ExprResult_6, class UVerseEngine_Entity_entity* __verse_0x00000000__4, FVerseFunctionProperty_ _Callee_7, class UPlayspace_playspace_component* __verse_0x9F23064A_ThePlayspaceComp_3, FOptionProperty_ _FallibleType_8, FOptionProperty_ _ExprResultStack_9, FOptionProperty_ _ExprResult_10, class UVerseEngine_Entity_entity* __verse_0x00000000__5, FVerseFunctionProperty_ _Callee_11, class UVGameplayRst_Transform_position_component* __verse_0x00000000__7, enum class EVerseTrue _InvokeSureResultDummy_12, FVerseFunctionProperty_ _Callee_13, class UVerseBasicGameplay_PlayerManager_basic_player_manager_impl* __verse_0xD8BFBA84_BasicPlayerManager_6, uint64 _InstancingGraph_14, class UVerseBasicGameplay_PlayerManager_basic_player_manager_impl* __verse_0x00000000__8, class UConcurrency_task* _AsyncTask_15, FVerseFunctionProperty_ _AsyncTaskClass_16, const struct FTuple_L_R& _ExprResult_17, int64 _AsyncResult_18, uint8 _ExprResult_19, FOptionProperty_ _ExprResultStack_20)
{
	static auto Func = Class->GetFunction("VerseBasicGameplay_PlayerManager", "_L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_N_RGetPlayerManagerForLocation_L_Nvector3_R");

	Params::UVerseBasicGameplay_PlayerManager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_N_RGetPlayerManagerForLocation_L_Nvector3_R_Params Parms;

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

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseBasicGameplay.VerseBasicGameplay_PlayerManager.$InitCDO
// ()
// Parameters:

void UVerseBasicGameplay_PlayerManager::_InitCDO()
{
	static auto Func = Class->GetFunction("VerseBasicGameplay_PlayerManager", "$InitCDO");

	Params::UVerseBasicGameplay_PlayerManager__InitCDO_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

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

TArray<class USimulation_player*> UVerseBasicGameplay_PlayerManager_basic_player_manager::_L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayers(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, const TArray<class USimulation_player*>& _ForResult_0, const TArray<class USimulation_player_component*>& _ForIterable_1, class UPlayspace_playspace_component* __verse_0x00000000__3, FVerseFunctionProperty_ _Callee_2, int64 _ForIndex_3, int64 _ForLength_4, class USimulation_player_component* __verse_0x1AA69DA0_PlayerComp_4, class USimulation_player* _ExprResult_5, class USimulation_player_component* __verse_0x00000000__7, FVerseFunctionProperty_ _Callee_6, const struct FTuple_L_R& _ExprResult_7)
{
	static auto Func = Class->GetFunction("VerseBasicGameplay_PlayerManager_basic_player_manager", "_L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayers");

	Params::UVerseBasicGameplay_PlayerManager_basic_player_manager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayers_Params Parms;

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

int64 UVerseBasicGameplay_PlayerManager_basic_player_manager::_L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayerCount(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, class UPlayspace_playspace_component* __verse_0x00000000__1, FVerseFunctionProperty_ _Callee_0)
{
	static auto Func = Class->GetFunction("VerseBasicGameplay_PlayerManager_basic_player_manager", "_L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayerCount");

	Params::UVerseBasicGameplay_PlayerManager_basic_player_manager__L_2fUnrealEngine_2ecom_2fTemporary_2fVerseBasicGameplay_2fPlayerManager_2fbasic__player__manager_N_RGetPlayerCount_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms.__verse_0x00000000__1 = __verse_0x00000000__1;
	Parms._Callee_0 = _Callee_0;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseBasicGameplay.VerseBasicGameplay_PlayerManager_basic_player_manager.$InitInstance
// ()
// Parameters:

void UVerseBasicGameplay_PlayerManager_basic_player_manager::_InitInstance()
{
	static auto Func = Class->GetFunction("VerseBasicGameplay_PlayerManager_basic_player_manager", "$InitInstance");

	Params::UVerseBasicGameplay_PlayerManager_basic_player_manager__InitInstance_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseBasicGameplay.VerseBasicGameplay_PlayerManager_basic_player_manager.$Block
// ()
// Parameters:

void UVerseBasicGameplay_PlayerManager_basic_player_manager::_Block()
{
	static auto Func = Class->GetFunction("VerseBasicGameplay_PlayerManager_basic_player_manager", "$Block");

	Params::UVerseBasicGameplay_PlayerManager_basic_player_manager__Block_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseBasicGameplay.VerseBasicGameplay_PlayerManager_basic_player_manager.$InitCDO
// ()
// Parameters:

void UVerseBasicGameplay_PlayerManager_basic_player_manager::_InitCDO()
{
	static auto Func = Class->GetFunction("VerseBasicGameplay_PlayerManager_basic_player_manager", "$InitCDO");

	Params::UVerseBasicGameplay_PlayerManager_basic_player_manager__InitCDO_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

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
	static auto Func = Class->GetFunction("VerseBasicGameplay_PlayerManager_basic_player_manager_impl", "BeginWaitingForEvents");

	Params::UVerseBasicGameplay_PlayerManager_basic_player_manager_impl_BeginWaitingForEvents_Params Parms;

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseBasicGameplay.VerseBasicGameplay_PlayerManager_basic_player_manager_impl.$InitInstance
// ()
// Parameters:

void UVerseBasicGameplay_PlayerManager_basic_player_manager_impl::_InitInstance()
{
	static auto Func = Class->GetFunction("VerseBasicGameplay_PlayerManager_basic_player_manager_impl", "$InitInstance");

	Params::UVerseBasicGameplay_PlayerManager_basic_player_manager_impl__InitInstance_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseBasicGameplay.VerseBasicGameplay_PlayerManager_basic_player_manager_impl.$Block
// ()
// Parameters:

void UVerseBasicGameplay_PlayerManager_basic_player_manager_impl::_Block()
{
	static auto Func = Class->GetFunction("VerseBasicGameplay_PlayerManager_basic_player_manager_impl", "$Block");

	Params::UVerseBasicGameplay_PlayerManager_basic_player_manager_impl__Block_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseBasicGameplay.VerseBasicGameplay_PlayerManager_basic_player_manager_impl.$InitCDO
// (HasDefaults)
// Parameters:
// class USimulation_player_multicast_delegate*_ExprResult_0                                                    (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint64                             _InstancingGraph_1                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USimulation_player_multicast_delegate*_ExprResult_2                                                    (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint64                             _InstancingGraph_3                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVerseBasicGameplay_PlayerManager_basic_player_manager_impl::_InitCDO(class USimulation_player_multicast_delegate* _ExprResult_0, uint64 _InstancingGraph_1, class USimulation_player_multicast_delegate* _ExprResult_2, uint64 _InstancingGraph_3)
{
	static auto Func = Class->GetFunction("VerseBasicGameplay_PlayerManager_basic_player_manager_impl", "$InitCDO");

	Params::UVerseBasicGameplay_PlayerManager_basic_player_manager_impl__InitCDO_Params Parms;

	Parms._ExprResult_0 = _ExprResult_0;
	Parms._InstancingGraph_1 = _InstancingGraph_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._InstancingGraph_3 = _InstancingGraph_3;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
