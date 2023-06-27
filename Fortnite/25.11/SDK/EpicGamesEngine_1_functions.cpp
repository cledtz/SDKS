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


// Function EpicGamesEngine.EpicGames_Input_verse_ue_input_component.WaitForAction_L_Nverse__ue__input__component_M_N_Kchar_M_Ninput__event_R
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_Lverse__ue__input__component_M_Kchar_Minput__event_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UEpicGames_Input_verse_ue_input_component::WaitForAction_L_Nverse__ue__input__component_M_N_Kchar_M_Ninput__event_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_Lverse__ue__input__component_M_Kchar_Minput__event_R& __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("EpicGames_Input_verse_ue_input_component", "WaitForAction_L_Nverse__ue__input__component_M_N_Kchar_M_Ninput__event_R");

	Params::UEpicGames_Input_verse_ue_input_component_WaitForAction_L_Nverse__ue__input__component_M_N_Kchar_M_Ninput__event_R_Params Parms;

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EpicGamesEngine.EpicGames_Input_verse_ue_input_component._L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RRemoveAxisBinding_L_N_Kchar_R
// (Native, Public, BlueprintCallable)
// Parameters:
// FVerseStringProperty_              __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UEpicGames_Input_verse_ue_input_component::_L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RRemoveAxisBinding_L_N_Kchar_R(FVerseStringProperty_ __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("EpicGames_Input_verse_ue_input_component", "_L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RRemoveAxisBinding_L_N_Kchar_R");

	Params::UEpicGames_Input_verse_ue_input_component__L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RRemoveAxisBinding_L_N_Kchar_R_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EpicGamesEngine.EpicGames_Input_verse_ue_input_component._L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RRemoveActionMappingAndBinding_L_N_Kchar_M_Ninput__event_R
// (Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_L_Kchar_Minput__event_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_0                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_1                                                        (HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_3                                                        (HasGetValueTypeHash)
// struct FTuple_L_Kchar_Minput__event_R_ExprResult_4                                                    (HasGetValueTypeHash)

void UEpicGames_Input_verse_ue_input_component::_L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RRemoveActionMappingAndBinding_L_N_Kchar_M_Ninput__event_R(const struct FTuple_L_Kchar_Minput__event_R& __verse_0xB2CDDD72_Argument, enum class EVerseTrue _InvokeSureResultDummy_0, FVerseFunctionProperty_ _Callee_1, enum class EVerseTrue _InvokeSureResultDummy_2, FVerseFunctionProperty_ _Callee_3, const struct FTuple_L_Kchar_Minput__event_R& _ExprResult_4)
{
	static auto Func = Class->GetFunction("EpicGames_Input_verse_ue_input_component", "_L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RRemoveActionMappingAndBinding_L_N_Kchar_M_Ninput__event_R");

	Params::UEpicGames_Input_verse_ue_input_component__L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RRemoveActionMappingAndBinding_L_N_Kchar_M_Ninput__event_R_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._InvokeSureResultDummy_0 = _InvokeSureResultDummy_0;
	Parms._Callee_1 = _Callee_1;
	Parms._InvokeSureResultDummy_2 = _InvokeSureResultDummy_2;
	Parms._Callee_3 = _Callee_3;
	Parms._ExprResult_4 = _ExprResult_4;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EpicGamesEngine.EpicGames_Input_verse_ue_input_component._L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RRemoveActionMapping_L_N_Kchar_R
// (Native, Public, BlueprintCallable)
// Parameters:
// FVerseStringProperty_              __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UEpicGames_Input_verse_ue_input_component::_L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RRemoveActionMapping_L_N_Kchar_R(FVerseStringProperty_ __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("EpicGames_Input_verse_ue_input_component", "_L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RRemoveActionMapping_L_N_Kchar_R");

	Params::UEpicGames_Input_verse_ue_input_component__L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RRemoveActionMapping_L_N_Kchar_R_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EpicGamesEngine.EpicGames_Input_verse_ue_input_component._L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RRemoveActionBinding_L_N_Kchar_M_Ninput__event_R
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FTuple_L_Kchar_Minput__event_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UEpicGames_Input_verse_ue_input_component::_L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RRemoveActionBinding_L_N_Kchar_M_Ninput__event_R(const struct FTuple_L_Kchar_Minput__event_R& __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("EpicGames_Input_verse_ue_input_component", "_L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RRemoveActionBinding_L_N_Kchar_M_Ninput__event_R");

	Params::UEpicGames_Input_verse_ue_input_component__L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RRemoveActionBinding_L_N_Kchar_M_Ninput__event_R_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EpicGamesEngine.EpicGames_Input_verse_ue_input_component._L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RGetAxisValue_L_N_Kchar_R
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FVerseStringProperty_              __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// double                             RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double UEpicGames_Input_verse_ue_input_component::_L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RGetAxisValue_L_N_Kchar_R(FVerseStringProperty_ __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("EpicGames_Input_verse_ue_input_component", "_L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RGetAxisValue_L_N_Kchar_R");

	Params::UEpicGames_Input_verse_ue_input_component__L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RGetAxisValue_L_N_Kchar_R_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function EpicGamesEngine.EpicGames_Input_verse_ue_input_component._L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RClearInputMappingsAndBindings
// (Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_0                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_1                                                        (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_2                                                    (HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_4                                                        (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_5                                                    (HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_6                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_7                                                        (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_8                                                    (HasGetValueTypeHash)

void UEpicGames_Input_verse_ue_input_component::_L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RClearInputMappingsAndBindings(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, enum class EVerseTrue _InvokeSureResultDummy_0, FVerseFunctionProperty_ _Callee_1, const struct FTuple_L_R& _ExprResult_2, enum class EVerseTrue _InvokeSureResultDummy_3, FVerseFunctionProperty_ _Callee_4, const struct FTuple_L_R& _ExprResult_5, enum class EVerseTrue _InvokeSureResultDummy_6, FVerseFunctionProperty_ _Callee_7, const struct FTuple_L_R& _ExprResult_8)
{
	static auto Func = Class->GetFunction("EpicGames_Input_verse_ue_input_component", "_L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RClearInputMappingsAndBindings");

	Params::UEpicGames_Input_verse_ue_input_component__L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RClearInputMappingsAndBindings_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._InvokeSureResultDummy_0 = _InvokeSureResultDummy_0;
	Parms._Callee_1 = _Callee_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._InvokeSureResultDummy_3 = _InvokeSureResultDummy_3;
	Parms._Callee_4 = _Callee_4;
	Parms._ExprResult_5 = _ExprResult_5;
	Parms._InvokeSureResultDummy_6 = _InvokeSureResultDummy_6;
	Parms._Callee_7 = _Callee_7;
	Parms._ExprResult_8 = _ExprResult_8;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EpicGamesEngine.EpicGames_Input_verse_ue_input_component._L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RClearInputBindings
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UEpicGames_Input_verse_ue_input_component::_L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RClearInputBindings(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("EpicGames_Input_verse_ue_input_component", "_L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RClearInputBindings");

	Params::UEpicGames_Input_verse_ue_input_component__L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RClearInputBindings_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EpicGamesEngine.EpicGames_Input_verse_ue_input_component._L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RClearAxisMappings
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UEpicGames_Input_verse_ue_input_component::_L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RClearAxisMappings(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("EpicGames_Input_verse_ue_input_component", "_L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RClearAxisMappings");

	Params::UEpicGames_Input_verse_ue_input_component__L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RClearAxisMappings_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EpicGamesEngine.EpicGames_Input_verse_ue_input_component._L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RClearActionMappings
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UEpicGames_Input_verse_ue_input_component::_L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RClearActionMappings(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("EpicGames_Input_verse_ue_input_component", "_L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RClearActionMappings");

	Params::UEpicGames_Input_verse_ue_input_component__L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RClearActionMappings_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EpicGamesEngine.EpicGames_Input_verse_ue_input_component._L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RAddAxisMappingAndBinding_L_N_Kchar_M_N_Kchar_M_N_Kverse__key_M_N_Qfloat_M_N_Q_Lfloat_Tvoid_R_R
// (Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_L_Kchar_M_Kchar_M_Kverse__key_M_Qfloat_M_Q_Lfloat_Tvoid_R_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_0                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_1                                                        (HasGetValueTypeHash)
// struct FTuple_L_Kchar_M_Kchar_M_Kverse__key_M_Qfloat_R_ExprResult_2                                                    (HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_4                                                        (HasGetValueTypeHash)
// struct FTuple_L_Kchar_M_Q_Lfloat_Tvoid_R_R_ExprResult_5                                                    (HasGetValueTypeHash)

void UEpicGames_Input_verse_ue_input_component::_L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RAddAxisMappingAndBinding_L_N_Kchar_M_N_Kchar_M_N_Kverse__key_M_N_Qfloat_M_N_Q_Lfloat_Tvoid_R_R(const struct FTuple_L_Kchar_M_Kchar_M_Kverse__key_M_Qfloat_M_Q_Lfloat_Tvoid_R_R& __verse_0xB2CDDD72_Argument, enum class EVerseTrue _InvokeSureResultDummy_0, FVerseFunctionProperty_ _Callee_1, const struct FTuple_L_Kchar_M_Kchar_M_Kverse__key_M_Qfloat_R& _ExprResult_2, enum class EVerseTrue _InvokeSureResultDummy_3, FVerseFunctionProperty_ _Callee_4, const struct FTuple_L_Kchar_M_Q_Lfloat_Tvoid_R_R& _ExprResult_5)
{
	static auto Func = Class->GetFunction("EpicGames_Input_verse_ue_input_component", "_L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RAddAxisMappingAndBinding_L_N_Kchar_M_N_Kchar_M_N_Kverse__key_M_N_Qfloat_M_N_Q_Lfloat_Tvoid_R_R");

	Params::UEpicGames_Input_verse_ue_input_component__L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RAddAxisMappingAndBinding_L_N_Kchar_M_N_Kchar_M_N_Kverse__key_M_N_Qfloat_M_N_Q_Lfloat_Tvoid_R_R_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._InvokeSureResultDummy_0 = _InvokeSureResultDummy_0;
	Parms._Callee_1 = _Callee_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._InvokeSureResultDummy_3 = _InvokeSureResultDummy_3;
	Parms._Callee_4 = _Callee_4;
	Parms._ExprResult_5 = _ExprResult_5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EpicGamesEngine.EpicGames_Input_verse_ue_input_component._L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RAddAxisMapping_L_N_Kchar_M_N_Kchar_M_N_Kverse__key_M_N_Qfloat_R
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FTuple_L_Kchar_M_Kchar_M_Kverse__key_M_Qfloat_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UEpicGames_Input_verse_ue_input_component::_L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RAddAxisMapping_L_N_Kchar_M_N_Kchar_M_N_Kverse__key_M_N_Qfloat_R(const struct FTuple_L_Kchar_M_Kchar_M_Kverse__key_M_Qfloat_R& __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("EpicGames_Input_verse_ue_input_component", "_L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RAddAxisMapping_L_N_Kchar_M_N_Kchar_M_N_Kverse__key_M_N_Qfloat_R");

	Params::UEpicGames_Input_verse_ue_input_component__L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RAddAxisMapping_L_N_Kchar_M_N_Kchar_M_N_Kverse__key_M_N_Qfloat_R_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EpicGamesEngine.EpicGames_Input_verse_ue_input_component._L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RAddAxisBinding_L_N_Kchar_M_N_Q_Lfloat_Tvoid_R_R
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FTuple_L_Kchar_M_Q_Lfloat_Tvoid_R_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UEpicGames_Input_verse_ue_input_component::_L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RAddAxisBinding_L_N_Kchar_M_N_Q_Lfloat_Tvoid_R_R(const struct FTuple_L_Kchar_M_Q_Lfloat_Tvoid_R_R& __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("EpicGames_Input_verse_ue_input_component", "_L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RAddAxisBinding_L_N_Kchar_M_N_Q_Lfloat_Tvoid_R_R");

	Params::UEpicGames_Input_verse_ue_input_component__L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RAddAxisBinding_L_N_Kchar_M_N_Q_Lfloat_Tvoid_R_R_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EpicGamesEngine.EpicGames_Input_verse_ue_input_component._L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RAddActionMappingAndBinding_L_N_Kchar_M_N_Kchar_M_N_Kverse__key_M_Ninput__event_M_Ntuple_L_R_Tvoid_R
// (Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_L_Kchar_M_Kchar_M_Kverse__key_Minput__event_Mtuple_L_R_Tvoid_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_0                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_1                                                        (HasGetValueTypeHash)
// struct FTuple_L_Kchar_M_Kchar_M_Kverse__key_R_ExprResult_2                                                    (HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_4                                                        (HasGetValueTypeHash)
// struct FTuple_L_Kchar_Minput__event_Mtuple_L_R_Tvoid_R_ExprResult_5                                                    (HasGetValueTypeHash)

void UEpicGames_Input_verse_ue_input_component::_L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RAddActionMappingAndBinding_L_N_Kchar_M_N_Kchar_M_N_Kverse__key_M_Ninput__event_M_Ntuple_L_R_Tvoid_R(const struct FTuple_L_Kchar_M_Kchar_M_Kverse__key_Minput__event_Mtuple_L_R_Tvoid_R& __verse_0xB2CDDD72_Argument, enum class EVerseTrue _InvokeSureResultDummy_0, FVerseFunctionProperty_ _Callee_1, const struct FTuple_L_Kchar_M_Kchar_M_Kverse__key_R& _ExprResult_2, enum class EVerseTrue _InvokeSureResultDummy_3, FVerseFunctionProperty_ _Callee_4, const struct FTuple_L_Kchar_Minput__event_Mtuple_L_R_Tvoid_R& _ExprResult_5)
{
	static auto Func = Class->GetFunction("EpicGames_Input_verse_ue_input_component", "_L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RAddActionMappingAndBinding_L_N_Kchar_M_N_Kchar_M_N_Kverse__key_M_Ninput__event_M_Ntuple_L_R_Tvoid_R");

	Params::UEpicGames_Input_verse_ue_input_component__L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RAddActionMappingAndBinding_L_N_Kchar_M_N_Kchar_M_N_Kverse__key_M_Ninput__event_M_Ntuple_L_R_Tvoid_R_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._InvokeSureResultDummy_0 = _InvokeSureResultDummy_0;
	Parms._Callee_1 = _Callee_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._InvokeSureResultDummy_3 = _InvokeSureResultDummy_3;
	Parms._Callee_4 = _Callee_4;
	Parms._ExprResult_5 = _ExprResult_5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EpicGamesEngine.EpicGames_Input_verse_ue_input_component._L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RAddActionMapping_L_N_Kchar_M_N_Kchar_M_N_Kverse__key_R
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FTuple_L_Kchar_M_Kchar_M_Kverse__key_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UEpicGames_Input_verse_ue_input_component::_L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RAddActionMapping_L_N_Kchar_M_N_Kchar_M_N_Kverse__key_R(const struct FTuple_L_Kchar_M_Kchar_M_Kverse__key_R& __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("EpicGames_Input_verse_ue_input_component", "_L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RAddActionMapping_L_N_Kchar_M_N_Kchar_M_N_Kverse__key_R");

	Params::UEpicGames_Input_verse_ue_input_component__L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RAddActionMapping_L_N_Kchar_M_N_Kchar_M_N_Kverse__key_R_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EpicGamesEngine.EpicGames_Input_verse_ue_input_component._L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RAddActionBinding_L_N_Kchar_M_Ninput__event_M_Ntuple_L_R_Tvoid_R
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FTuple_L_Kchar_Minput__event_Mtuple_L_R_Tvoid_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UEpicGames_Input_verse_ue_input_component::_L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RAddActionBinding_L_N_Kchar_M_Ninput__event_M_Ntuple_L_R_Tvoid_R(const struct FTuple_L_Kchar_Minput__event_Mtuple_L_R_Tvoid_R& __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("EpicGames_Input_verse_ue_input_component", "_L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RAddActionBinding_L_N_Kchar_M_Ninput__event_M_Ntuple_L_R_Tvoid_R");

	Params::UEpicGames_Input_verse_ue_input_component__L_2fUnrealEngine_2ecom_2fEpicGames_2fInput_2fverse__ue__input__component_N_RAddActionBinding_L_N_Kchar_M_Ninput__event_M_Ntuple_L_R_Tvoid_R_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EpicGamesEngine.EpicGames_Input_verse_ue_input_component.$InitInstance
// ()
// Parameters:

void UEpicGames_Input_verse_ue_input_component::_InitInstance()
{
	static auto Func = Class->GetFunction("EpicGames_Input_verse_ue_input_component", "$InitInstance");

	Params::UEpicGames_Input_verse_ue_input_component__InitInstance_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function EpicGamesEngine.EpicGames_Input_verse_ue_input_component.$Block
// ()
// Parameters:

void UEpicGames_Input_verse_ue_input_component::_Block()
{
	static auto Func = Class->GetFunction("EpicGames_Input_verse_ue_input_component", "$Block");

	Params::UEpicGames_Input_verse_ue_input_component__Block_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function EpicGamesEngine.EpicGames_Input_verse_ue_input_component.$InitCDO
// ()
// Parameters:

void UEpicGames_Input_verse_ue_input_component::_InitCDO()
{
	static auto Func = Class->GetFunction("EpicGames_Input_verse_ue_input_component", "$InitCDO");

	Params::UEpicGames_Input_verse_ue_input_component__InitCDO_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function EpicGamesEngine.task_EpicGames_Input_verse_ue_input_component$WaitForAction_L_Nverse__ue__input__component_M_N_Kchar_M_Ninput__event_R.Update
// (Native, Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_EpicGames_Input_verse_ue_input_component_WaitForAction_L_Nverse__ue__input__component_M_N_Kchar_M_Ninput__event_R::Update()
{
	static auto Func = Class->GetFunction("task_EpicGames_Input_verse_ue_input_component$WaitForAction_L_Nverse__ue__input__component_M_N_Kchar_M_Ninput__event_R", "Update");

	Params::UTask_EpicGames_Input_verse_ue_input_component_WaitForAction_L_Nverse__ue__input__component_M_N_Kchar_M_Ninput__event_R_Update_Params Parms;


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
