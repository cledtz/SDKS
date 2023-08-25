#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// VerseClass VerseDevices.$SolarisSignatureFunctionOuter
// (None)

class UClass* U_SolarisSignatureFunctionOuter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("$SolarisSignatureFunctionOuter");

	return Clss;
}


// $SolarisSignatureFunctionOuter VerseDevices.Default__$SolarisSignatureFunctionOuter
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class U_SolarisSignatureFunctionOuter* U_SolarisSignatureFunctionOuter::GetDefaultObj()
{
	static class U_SolarisSignatureFunctionOuter* Default = nullptr;

	if (!Default)
		Default = static_cast<U_SolarisSignatureFunctionOuter*>(U_SolarisSignatureFunctionOuter::StaticClass()->DefaultObject);

	return Default;
}


// VerseClass VerseDevices.Devices
// (None)

class UClass* UDevices::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Devices");

	return Clss;
}


// Devices VerseDevices.Default__Devices
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDevices* UDevices::GetDefaultObj()
{
	static class UDevices* Default = nullptr;

	if (!Default)
		Default = static_cast<UDevices*>(UDevices::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseDevices.Devices._L_2fFortnite_2ecom_2fDevices_N_Roperator_U_2eTeleportToInternalImpl_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntransform_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lcreative__movable__object__base_Mtuple_L_R_Mtransform_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// enum class EDevices_teleport_to_resultRetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class EDevices_teleport_to_result UDevices::_L_2fFortnite_2ecom_2fDevices_N_Roperator_U_2eTeleportToInternalImpl_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntransform_R(const struct FTuple_Lcreative__movable__object__base_Mtuple_L_R_Mtransform_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices", "_L_2fFortnite_2ecom_2fDevices_N_Roperator_U_2eTeleportToInternalImpl_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntransform_R");

	Params::UDevices__L_2fFortnite_2ecom_2fDevices_N_Roperator_U_2eTeleportToInternalImpl_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntransform_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseDevices.Devices._L_2fFortnite_2ecom_2fDevices_N_Roperator_U_2eTeleportToInternal_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntransform_R
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_Lcreative__movable__object__base_Mtuple_L_R_Mtransform_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVerseTrue              _ExprResult_0                                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDevices_teleport_to_result__verse_0x95D09D0E_Result_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_1                                                        (HasGetValueTypeHash)
// struct FTuple_Lcreative__movable__object__base_Mtuple_L_R_Mtransform_R_ExprResult_2                                                    (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_3                                                    (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_4                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_5                                                        (HasGetValueTypeHash)
// enum class EVerseTrue              _ExprResult_6                                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDevices_teleport_to_result__verse_0x95D09D0E_Result_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_7                                                        (HasGetValueTypeHash)
// struct FTuple_Lcreative__movable__object__base_Mtuple_L_R_Mtransform_R_ExprResult_8                                                    (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_9                                                    (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_10                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_11                                                       (HasGetValueTypeHash)

FOptionalProperty_ UDevices::_L_2fFortnite_2ecom_2fDevices_N_Roperator_U_2eTeleportToInternal_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntransform_R(const struct FTuple_Lcreative__movable__object__base_Mtuple_L_R_Mtransform_R& __verse_0xB2CDDD72_Argument, enum class EVerseTrue _ExprResult_0, enum class EDevices_teleport_to_result __verse_0x95D09D0E_Result_1, FVerseFunctionProperty_ _Callee_1, const struct FTuple_Lcreative__movable__object__base_Mtuple_L_R_Mtransform_R& _ExprResult_2, const struct FTuple_L_R& _ExprResult_3, FOptionalProperty_ _ExprResultStack_4, FVerseFunctionProperty_ _Callee_5, enum class EVerseTrue _ExprResult_6, enum class EDevices_teleport_to_result __verse_0x95D09D0E_Result_2, FVerseFunctionProperty_ _Callee_7, const struct FTuple_Lcreative__movable__object__base_Mtuple_L_R_Mtransform_R& _ExprResult_8, const struct FTuple_L_R& _ExprResult_9, FOptionalProperty_ _ExprResultStack_10, FVerseFunctionProperty_ _Callee_11)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices", "_L_2fFortnite_2ecom_2fDevices_N_Roperator_U_2eTeleportToInternal_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntransform_R");

	Params::UDevices__L_2fFortnite_2ecom_2fDevices_N_Roperator_U_2eTeleportToInternal_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntransform_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._ExprResult_0 = _ExprResult_0;
	Parms.__verse_0x95D09D0E_Result_1 = __verse_0x95D09D0E_Result_1;
	Parms._Callee_1 = _Callee_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._ExprResult_3 = _ExprResult_3;
	Parms._ExprResultStack_4 = _ExprResultStack_4;
	Parms._Callee_5 = _Callee_5;
	Parms._ExprResult_6 = _ExprResult_6;
	Parms.__verse_0x95D09D0E_Result_2 = __verse_0x95D09D0E_Result_2;
	Parms._Callee_7 = _Callee_7;
	Parms._ExprResult_8 = _ExprResult_8;
	Parms._ExprResult_9 = _ExprResult_9;
	Parms._ExprResultStack_10 = _ExprResultStack_10;
	Parms._Callee_11 = _Callee_11;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseDevices.Devices._L_2fFortnite_2ecom_2fDevices_N_Roperator_U_2eTeleportToInternal_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntuple_Lvector3_Mrotation_R_R
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_Lcreative__movable__object__base_Mtuple_L_R_Mtuple_Lvector3_Mrotation_R_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVerseTrue              _ExprResult_0                                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSpatialMath_transform      __verse_0x61C3007D_Transform_1                                   (NoDestructor)
// FVerseFunctionProperty_            _Callee_1                                                        (HasGetValueTypeHash)
// struct FTuple_Lcreative__movable__object__base_Mtuple_L_R_Mtuple_L_R_R_ExprResult_2                                                    (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_3                                                    (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_4                                                    (HasGetValueTypeHash)
// enum class EDevices_teleport_to_result__verse_0x95D09D0E_Result_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_5                                                        (HasGetValueTypeHash)
// struct FTuple_Lcreative__movable__object__base_Mtuple_L_R_Mtransform_R_ExprResult_6                                                    (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_7                                                    (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_8                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_9                                                        (HasGetValueTypeHash)
// enum class EVerseTrue              _ExprResult_10                                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSpatialMath_transform      __verse_0x61C3007D_Transform_2                                   (NoDestructor)
// FVerseFunctionProperty_            _Callee_11                                                       (HasGetValueTypeHash)
// struct FTuple_Lcreative__movable__object__base_Mtuple_L_R_Mtuple_L_R_R_ExprResult_12                                                   (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_13                                                   (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_14                                                   (HasGetValueTypeHash)
// enum class EDevices_teleport_to_result__verse_0x95D09D0E_Result_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_15                                                       (HasGetValueTypeHash)
// struct FTuple_Lcreative__movable__object__base_Mtuple_L_R_Mtransform_R_ExprResult_16                                                   (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_17                                                   (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_18                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_19                                                       (HasGetValueTypeHash)

FOptionalProperty_ UDevices::_L_2fFortnite_2ecom_2fDevices_N_Roperator_U_2eTeleportToInternal_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntuple_Lvector3_Mrotation_R_R(const struct FTuple_Lcreative__movable__object__base_Mtuple_L_R_Mtuple_Lvector3_Mrotation_R_R& __verse_0xB2CDDD72_Argument, enum class EVerseTrue _ExprResult_0, const struct FSpatialMath_transform& __verse_0x61C3007D_Transform_1, FVerseFunctionProperty_ _Callee_1, const struct FTuple_Lcreative__movable__object__base_Mtuple_L_R_Mtuple_L_R_R& _ExprResult_2, const struct FTuple_L_R& _ExprResult_3, const struct FTuple_L_R& _ExprResult_4, enum class EDevices_teleport_to_result __verse_0x95D09D0E_Result_1, FVerseFunctionProperty_ _Callee_5, const struct FTuple_Lcreative__movable__object__base_Mtuple_L_R_Mtransform_R& _ExprResult_6, const struct FTuple_L_R& _ExprResult_7, FOptionalProperty_ _ExprResultStack_8, FVerseFunctionProperty_ _Callee_9, enum class EVerseTrue _ExprResult_10, const struct FSpatialMath_transform& __verse_0x61C3007D_Transform_2, FVerseFunctionProperty_ _Callee_11, const struct FTuple_Lcreative__movable__object__base_Mtuple_L_R_Mtuple_L_R_R& _ExprResult_12, const struct FTuple_L_R& _ExprResult_13, const struct FTuple_L_R& _ExprResult_14, enum class EDevices_teleport_to_result __verse_0x95D09D0E_Result_2, FVerseFunctionProperty_ _Callee_15, const struct FTuple_Lcreative__movable__object__base_Mtuple_L_R_Mtransform_R& _ExprResult_16, const struct FTuple_L_R& _ExprResult_17, FOptionalProperty_ _ExprResultStack_18, FVerseFunctionProperty_ _Callee_19)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices", "_L_2fFortnite_2ecom_2fDevices_N_Roperator_U_2eTeleportToInternal_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntuple_Lvector3_Mrotation_R_R");

	Params::UDevices__L_2fFortnite_2ecom_2fDevices_N_Roperator_U_2eTeleportToInternal_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntuple_Lvector3_Mrotation_R_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._ExprResult_0 = _ExprResult_0;
	Parms.__verse_0x61C3007D_Transform_1 = __verse_0x61C3007D_Transform_1;
	Parms._Callee_1 = _Callee_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._ExprResult_3 = _ExprResult_3;
	Parms._ExprResult_4 = _ExprResult_4;
	Parms.__verse_0x95D09D0E_Result_1 = __verse_0x95D09D0E_Result_1;
	Parms._Callee_5 = _Callee_5;
	Parms._ExprResult_6 = _ExprResult_6;
	Parms._ExprResult_7 = _ExprResult_7;
	Parms._ExprResultStack_8 = _ExprResultStack_8;
	Parms._Callee_9 = _Callee_9;
	Parms._ExprResult_10 = _ExprResult_10;
	Parms.__verse_0x61C3007D_Transform_2 = __verse_0x61C3007D_Transform_2;
	Parms._Callee_11 = _Callee_11;
	Parms._ExprResult_12 = _ExprResult_12;
	Parms._ExprResult_13 = _ExprResult_13;
	Parms._ExprResult_14 = _ExprResult_14;
	Parms.__verse_0x95D09D0E_Result_2 = __verse_0x95D09D0E_Result_2;
	Parms._Callee_15 = _Callee_15;
	Parms._ExprResult_16 = _ExprResult_16;
	Parms._ExprResult_17 = _ExprResult_17;
	Parms._ExprResultStack_18 = _ExprResultStack_18;
	Parms._Callee_19 = _Callee_19;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseDevices.Devices.operator_U_2eMoveToInternalImpl_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntuple_Ltransform_Mfloat_R_R
// (Final, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_Lcreative__movable__object__base_Mtuple_L_R_Mtuple_Ltransform_Mfloat_R_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UDevices::Operator_U_2eMoveToInternalImpl_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntuple_Ltransform_Mfloat_R_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_Lcreative__movable__object__base_Mtuple_L_R_Mtuple_Ltransform_Mfloat_R_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices", "operator_U_2eMoveToInternalImpl_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntuple_Ltransform_Mfloat_R_R");

	Params::UDevices_Operator_U_2eMoveToInternalImpl_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntuple_Ltransform_Mfloat_R_R_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseDevices.Devices.operator_U_2eMoveToInternal_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntuple_Ltransform_Mfloat_R_R
// (Final, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_Lcreative__movable__object__base_Mtuple_L_R_Mtuple_Ltransform_Mfloat_R_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UDevices::Operator_U_2eMoveToInternal_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntuple_Ltransform_Mfloat_R_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_Lcreative__movable__object__base_Mtuple_L_R_Mtuple_Ltransform_Mfloat_R_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices", "operator_U_2eMoveToInternal_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntuple_Ltransform_Mfloat_R_R");

	Params::UDevices_Operator_U_2eMoveToInternal_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntuple_Ltransform_Mfloat_R_R_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseDevices.Devices.operator_U_2eMoveToInternal_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntuple_Lvector3_Mrotation_Mfloat_R_R
// (Final, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_Lcreative__movable__object__base_Mtuple_L_R_Mtuple_Lvector3_Mrotation_Mfloat_R_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UDevices::Operator_U_2eMoveToInternal_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntuple_Lvector3_Mrotation_Mfloat_R_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_Lcreative__movable__object__base_Mtuple_L_R_Mtuple_Lvector3_Mrotation_Mfloat_R_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices", "operator_U_2eMoveToInternal_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntuple_Lvector3_Mrotation_Mfloat_R_R");

	Params::UDevices_Operator_U_2eMoveToInternal_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntuple_Lvector3_Mrotation_Mfloat_R_R_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseDevices.Devices._L_2fFortnite_2ecom_2fDevices_N_Roperator_U_2eGetTransformInternalImpl_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntuple_L_R_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lcreative__movable__object__base_Mtuple_L_R_Mtuple_L_R_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FSpatialMath_transform      RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor)

struct FSpatialMath_transform UDevices::_L_2fFortnite_2ecom_2fDevices_N_Roperator_U_2eGetTransformInternalImpl_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lcreative__movable__object__base_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices", "_L_2fFortnite_2ecom_2fDevices_N_Roperator_U_2eGetTransformInternalImpl_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntuple_L_R_R");

	Params::UDevices__L_2fFortnite_2ecom_2fDevices_N_Roperator_U_2eGetTransformInternalImpl_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntuple_L_R_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseDevices.Devices._L_2fFortnite_2ecom_2fDevices_N_Roperator_U_2eGetTags_U_L_Ncreative__object__interface_M_Ntuple_L_R_M_Ntuple_L_R_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lcreative__object__interface_Mtuple_L_R_Mtuple_L_R_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UObject*                     RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UObject* UDevices::_L_2fFortnite_2ecom_2fDevices_N_Roperator_U_2eGetTags_U_L_Ncreative__object__interface_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lcreative__object__interface_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices", "_L_2fFortnite_2ecom_2fDevices_N_Roperator_U_2eGetTags_U_L_Ncreative__object__interface_M_Ntuple_L_R_M_Ntuple_L_R_R");

	Params::UDevices__L_2fFortnite_2ecom_2fDevices_N_Roperator_U_2eGetTags_U_L_Ncreative__object__interface_M_Ntuple_L_R_M_Ntuple_L_R_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseDevices.Devices._L_2fFortnite_2ecom_2fDevices_N_Roperator_U_2eGetPlayspace_U_L_Ncreative__object__interface_M_Ntuple_L_R_M_Ntuple_L_R_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lcreative__object__interface_Mtuple_L_R_Mtuple_L_R_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UObject*                     RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UObject* UDevices::_L_2fFortnite_2ecom_2fDevices_N_Roperator_U_2eGetPlayspace_U_L_Ncreative__object__interface_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lcreative__object__interface_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices", "_L_2fFortnite_2ecom_2fDevices_N_Roperator_U_2eGetPlayspace_U_L_Ncreative__object__interface_M_Ntuple_L_R_M_Ntuple_L_R_R");

	Params::UDevices__L_2fFortnite_2ecom_2fDevices_N_Roperator_U_2eGetPlayspace_U_L_Ncreative__object__interface_M_Ntuple_L_R_M_Ntuple_L_R_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseDevices.Devices._L_2fFortnite_2ecom_2fDevices_N_Rdevice__event_L_Nt_20where_20t_R
// (Final, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UClass*                      __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// class UClass*                      RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UClass* UDevices::_L_2fFortnite_2ecom_2fDevices_N_Rdevice__event_L_Nt_20where_20t_R(class UClass* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices", "_L_2fFortnite_2ecom_2fDevices_N_Rdevice__event_L_Nt_20where_20t_R");

	Params::UDevices__L_2fFortnite_2ecom_2fDevices_N_Rdevice__event_L_Nt_20where_20t_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseDevices.Devices._L_2fFortnite_2ecom_2fDevices_N_Rdevice__event
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UClass*                      RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_0                                                        (HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_1                                                        (HasGetValueTypeHash)

class UClass* UDevices::_L_2fFortnite_2ecom_2fDevices_N_Rdevice__event(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, FVerseFunctionProperty_ _Callee_0, FVerseFunctionProperty_ _Callee_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices", "_L_2fFortnite_2ecom_2fDevices_N_Rdevice__event");

	Params::UDevices__L_2fFortnite_2ecom_2fDevices_N_Rdevice__event_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._Callee_0 = _Callee_0;
	Parms._Callee_1 = _Callee_1;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseDevices.Devices._L_2fFortnite_2ecom_2fDevices_N_RToString_L_Nmove__to__internal__result_R
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// enum class EDevices_move_to_internal_result__verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              RetVal                                                           (Parm, OutParm, ReturnParm, HasGetValueTypeHash)
// enum class EDevices_move_to_internal_result__verse_0x00000000__1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             InvokeResultDummy_0                                              (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_1                                               (ZeroConstructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_2                                                    (HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_3                                                    (HasGetValueTypeHash)
// FVerseDynamicProperty_             InvokeResultDummy_4                                              (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_5                                               (ZeroConstructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_6                                                    (HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_7                                                    (HasGetValueTypeHash)
// FVerseDynamicProperty_             InvokeResultDummy_8                                              (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_9                                               (ZeroConstructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_10                                                   (HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_11                                                   (HasGetValueTypeHash)
// FVerseDynamicProperty_             InvokeResultDummy_12                                             (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_13                                              (ZeroConstructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_14                                                   (HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_15                                                   (HasGetValueTypeHash)
// FVerseDynamicProperty_             InvokeResultDummy_16                                             (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_17                                              (ZeroConstructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_18                                                   (HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_19                                                   (HasGetValueTypeHash)
// FVerseDynamicProperty_             InvokeResultDummy_20                                             (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_21                                              (ZeroConstructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_22                                                   (HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_23                                                   (HasGetValueTypeHash)
// enum class EDevices_move_to_internal_result__verse_0x00000000__9                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             InvokeResultDummy_24                                             (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_25                                              (ZeroConstructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_26                                                   (HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_27                                                   (HasGetValueTypeHash)
// FVerseDynamicProperty_             InvokeResultDummy_28                                             (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_29                                              (ZeroConstructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_30                                                   (HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_31                                                   (HasGetValueTypeHash)
// FVerseDynamicProperty_             InvokeResultDummy_32                                             (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_33                                              (ZeroConstructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_34                                                   (HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_35                                                   (HasGetValueTypeHash)
// FVerseDynamicProperty_             InvokeResultDummy_36                                             (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_37                                              (ZeroConstructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_38                                                   (HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_39                                                   (HasGetValueTypeHash)
// FVerseDynamicProperty_             InvokeResultDummy_40                                             (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_41                                              (ZeroConstructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_42                                                   (HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_43                                                   (HasGetValueTypeHash)
// FVerseDynamicProperty_             InvokeResultDummy_44                                             (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_45                                              (ZeroConstructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_46                                                   (HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_47                                                   (HasGetValueTypeHash)

FVerseStringProperty_ UDevices::_L_2fFortnite_2ecom_2fDevices_N_RToString_L_Nmove__to__internal__result_R(enum class EDevices_move_to_internal_result __verse_0xB2CDDD72_Argument, enum class EDevices_move_to_internal_result __verse_0x00000000__1, FVerseDynamicProperty_ InvokeResultDummy_0, FOptionalProperty_ _ExprResultStack_1, FVerseDynamicProperty_ _ExprResult_2, FVerseDynamicProperty_ _ExprResult_3, FVerseDynamicProperty_ InvokeResultDummy_4, FOptionalProperty_ _ExprResultStack_5, FVerseDynamicProperty_ _ExprResult_6, FVerseDynamicProperty_ _ExprResult_7, FVerseDynamicProperty_ InvokeResultDummy_8, FOptionalProperty_ _ExprResultStack_9, FVerseDynamicProperty_ _ExprResult_10, FVerseDynamicProperty_ _ExprResult_11, FVerseDynamicProperty_ InvokeResultDummy_12, FOptionalProperty_ _ExprResultStack_13, FVerseDynamicProperty_ _ExprResult_14, FVerseDynamicProperty_ _ExprResult_15, FVerseDynamicProperty_ InvokeResultDummy_16, FOptionalProperty_ _ExprResultStack_17, FVerseDynamicProperty_ _ExprResult_18, FVerseDynamicProperty_ _ExprResult_19, FVerseDynamicProperty_ InvokeResultDummy_20, FOptionalProperty_ _ExprResultStack_21, FVerseDynamicProperty_ _ExprResult_22, FVerseDynamicProperty_ _ExprResult_23, enum class EDevices_move_to_internal_result __verse_0x00000000__9, FVerseDynamicProperty_ InvokeResultDummy_24, FOptionalProperty_ _ExprResultStack_25, FVerseDynamicProperty_ _ExprResult_26, FVerseDynamicProperty_ _ExprResult_27, FVerseDynamicProperty_ InvokeResultDummy_28, FOptionalProperty_ _ExprResultStack_29, FVerseDynamicProperty_ _ExprResult_30, FVerseDynamicProperty_ _ExprResult_31, FVerseDynamicProperty_ InvokeResultDummy_32, FOptionalProperty_ _ExprResultStack_33, FVerseDynamicProperty_ _ExprResult_34, FVerseDynamicProperty_ _ExprResult_35, FVerseDynamicProperty_ InvokeResultDummy_36, FOptionalProperty_ _ExprResultStack_37, FVerseDynamicProperty_ _ExprResult_38, FVerseDynamicProperty_ _ExprResult_39, FVerseDynamicProperty_ InvokeResultDummy_40, FOptionalProperty_ _ExprResultStack_41, FVerseDynamicProperty_ _ExprResult_42, FVerseDynamicProperty_ _ExprResult_43, FVerseDynamicProperty_ InvokeResultDummy_44, FOptionalProperty_ _ExprResultStack_45, FVerseDynamicProperty_ _ExprResult_46, FVerseDynamicProperty_ _ExprResult_47)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices", "_L_2fFortnite_2ecom_2fDevices_N_RToString_L_Nmove__to__internal__result_R");

	Params::UDevices__L_2fFortnite_2ecom_2fDevices_N_RToString_L_Nmove__to__internal__result_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms.__verse_0x00000000__1 = __verse_0x00000000__1;
	Parms.InvokeResultDummy_0 = InvokeResultDummy_0;
	Parms._ExprResultStack_1 = _ExprResultStack_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._ExprResult_3 = _ExprResult_3;
	Parms.InvokeResultDummy_4 = InvokeResultDummy_4;
	Parms._ExprResultStack_5 = _ExprResultStack_5;
	Parms._ExprResult_6 = _ExprResult_6;
	Parms._ExprResult_7 = _ExprResult_7;
	Parms.InvokeResultDummy_8 = InvokeResultDummy_8;
	Parms._ExprResultStack_9 = _ExprResultStack_9;
	Parms._ExprResult_10 = _ExprResult_10;
	Parms._ExprResult_11 = _ExprResult_11;
	Parms.InvokeResultDummy_12 = InvokeResultDummy_12;
	Parms._ExprResultStack_13 = _ExprResultStack_13;
	Parms._ExprResult_14 = _ExprResult_14;
	Parms._ExprResult_15 = _ExprResult_15;
	Parms.InvokeResultDummy_16 = InvokeResultDummy_16;
	Parms._ExprResultStack_17 = _ExprResultStack_17;
	Parms._ExprResult_18 = _ExprResult_18;
	Parms._ExprResult_19 = _ExprResult_19;
	Parms.InvokeResultDummy_20 = InvokeResultDummy_20;
	Parms._ExprResultStack_21 = _ExprResultStack_21;
	Parms._ExprResult_22 = _ExprResult_22;
	Parms._ExprResult_23 = _ExprResult_23;
	Parms.__verse_0x00000000__9 = __verse_0x00000000__9;
	Parms.InvokeResultDummy_24 = InvokeResultDummy_24;
	Parms._ExprResultStack_25 = _ExprResultStack_25;
	Parms._ExprResult_26 = _ExprResult_26;
	Parms._ExprResult_27 = _ExprResult_27;
	Parms.InvokeResultDummy_28 = InvokeResultDummy_28;
	Parms._ExprResultStack_29 = _ExprResultStack_29;
	Parms._ExprResult_30 = _ExprResult_30;
	Parms._ExprResult_31 = _ExprResult_31;
	Parms.InvokeResultDummy_32 = InvokeResultDummy_32;
	Parms._ExprResultStack_33 = _ExprResultStack_33;
	Parms._ExprResult_34 = _ExprResult_34;
	Parms._ExprResult_35 = _ExprResult_35;
	Parms.InvokeResultDummy_36 = InvokeResultDummy_36;
	Parms._ExprResultStack_37 = _ExprResultStack_37;
	Parms._ExprResult_38 = _ExprResult_38;
	Parms._ExprResult_39 = _ExprResult_39;
	Parms.InvokeResultDummy_40 = InvokeResultDummy_40;
	Parms._ExprResultStack_41 = _ExprResultStack_41;
	Parms._ExprResult_42 = _ExprResult_42;
	Parms._ExprResult_43 = _ExprResult_43;
	Parms.InvokeResultDummy_44 = InvokeResultDummy_44;
	Parms._ExprResultStack_45 = _ExprResultStack_45;
	Parms._ExprResult_46 = _ExprResult_46;
	Parms._ExprResult_47 = _ExprResult_47;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseDevices.Devices._L_2fFortnite_2ecom_2fDevices_N_RSpawnProp_L_Ncreative__prop__asset_M_Ntransform_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lcreative__prop__asset_Mtransform_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FTuple_L_Qcreative__prop_Mspawn__prop__result_RRetVal                                                           (Parm, OutParm, ReturnParm, HasGetValueTypeHash)

struct FTuple_L_Qcreative__prop_Mspawn__prop__result_R UDevices::_L_2fFortnite_2ecom_2fDevices_N_RSpawnProp_L_Ncreative__prop__asset_M_Ntransform_R(const struct FTuple_Lcreative__prop__asset_Mtransform_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices", "_L_2fFortnite_2ecom_2fDevices_N_RSpawnProp_L_Ncreative__prop__asset_M_Ntransform_R");

	Params::UDevices__L_2fFortnite_2ecom_2fDevices_N_RSpawnProp_L_Ncreative__prop__asset_M_Ntransform_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseDevices.Devices._L_2fFortnite_2ecom_2fDevices_N_RSpawnProp_L_Ncreative__prop__asset_M_Nvector3_M_Nrotation_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lcreative__prop__asset_Mvector3_Mrotation_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FTuple_L_Qcreative__prop_Mspawn__prop__result_RRetVal                                                           (Parm, OutParm, ReturnParm, HasGetValueTypeHash)

struct FTuple_L_Qcreative__prop_Mspawn__prop__result_R UDevices::_L_2fFortnite_2ecom_2fDevices_N_RSpawnProp_L_Ncreative__prop__asset_M_Nvector3_M_Nrotation_R(const struct FTuple_Lcreative__prop__asset_Mvector3_Mrotation_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices", "_L_2fFortnite_2ecom_2fDevices_N_RSpawnProp_L_Ncreative__prop__asset_M_Nvector3_M_Nrotation_R");

	Params::UDevices__L_2fFortnite_2ecom_2fDevices_N_RSpawnProp_L_Ncreative__prop__asset_M_Nvector3_M_Nrotation_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseDevices.Devices._L_2fFortnite_2ecom_2fDevices_N_RHandleTeleportToResult_L_Nteleport__to__result_R
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// enum class EDevices_teleport_to_result__verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_0                                                    (NoDestructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             InvokeResultDummy_1                                              (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_2                                               (ZeroConstructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_3                                                    (HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_4                                                    (HasGetValueTypeHash)
// class UDiagnostics_log*            __verse_0x63A8D5FA_DebugLog_3                                    (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint64                             _InstancingGraph_5                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              __verse_0x8BA81554_LogString_3                                   (HasGetValueTypeHash)
// enum class EDevices_teleport_to_result__verse_0x00000000__4                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             InvokeResultDummy_6                                              (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_7                                               (ZeroConstructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_8                                                    (HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_9                                                    (HasGetValueTypeHash)
// FVerseDynamicProperty_             InvokeResultDummy_10                                             (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_11                                              (ZeroConstructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_12                                                   (HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_13                                                   (HasGetValueTypeHash)
// FVerseDynamicProperty_             InvokeResultDummy_14                                             (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_15                                              (ZeroConstructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_16                                                   (HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_17                                                   (HasGetValueTypeHash)
// FVerseDynamicProperty_             InvokeResultDummy_18                                             (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_19                                              (ZeroConstructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_20                                                   (HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_21                                                   (HasGetValueTypeHash)
// class UDiagnostics_log*            __verse_0x00000000__10                                           (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_22                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_23                                                       (HasGetValueTypeHash)
// struct FTuple_L_Kchar_M_QLevel_Nlog__level_R_ExprResult_24                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_25                                                   (HasGetValueTypeHash)
// TArray<FVerseDynamicProperty_>     __verse_0xFFC68BC5_Array_11                                      (ContainsInstancedReference)
// FVerseFunctionProperty_            _Callee_26                                                       (HasGetValueTypeHash)
// TArray<TArray<FVerseDynamicProperty_>>_ExprResult_27                                                   (ContainsInstancedReference)
// TArray<FVerseStringProperty_>      __verse_0xFFC68BC5_Array_12                                      (ContainsInstancedReference)
// struct FTuple_L_Kchar_M_Kchar_R    __verse_0x00000000__13                                           (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_28                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_29                                              (HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_30                                                       (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultDummy_31                                              (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultDummy_32                                              (HasGetValueTypeHash)
// TArray<TArray<FVerseDynamicProperty_>>_ForResult_33                                                    (ContainsInstancedReference)
// int64                              _ForIndex_34                                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              _ForLength_35                                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              __verse_0xFB88B569_Item_15                                       (HasGetValueTypeHash)
// TArray<FVerseDynamicProperty_>     _ExprResult_36                                                   (ContainsInstancedReference)
// FVerseStringProperty_              __verse_0xFFC68BC5_Array_16                                      (HasGetValueTypeHash)
// TArray<FVerseDynamicProperty_>     _ForResult_37                                                    (ContainsInstancedReference)
// int64                              _ForIndex_38                                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              _ForLength_39                                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              __verse_0xFB88B569_Item_18                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_40                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ForResult_41                                                    (HasGetValueTypeHash)
// int64                              _ForIndex_42                                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              _ForLength_43                                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             __verse_0xFB88B569_Item_20                                       (HasGetValueTypeHash)
// uint8                              _ExprResult_44                                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_45                                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             InvokeResultDummy_46                                             (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_47                                              (ZeroConstructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_48                                                   (HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_49                                                   (HasGetValueTypeHash)
// uint8                              _ExprResult_50                                                   (NoDestructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             InvokeResultDummy_51                                             (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_52                                              (ZeroConstructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_53                                                   (HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_54                                                   (HasGetValueTypeHash)
// class UDiagnostics_log*            __verse_0x63A8D5FA_DebugLog_23                                   (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint64                             _InstancingGraph_55                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              __verse_0x8BA81554_LogString_23                                  (HasGetValueTypeHash)
// enum class EDevices_teleport_to_result__verse_0x00000000__24                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             InvokeResultDummy_56                                             (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_57                                              (ZeroConstructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_58                                                   (HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_59                                                   (HasGetValueTypeHash)
// FVerseDynamicProperty_             InvokeResultDummy_60                                             (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_61                                              (ZeroConstructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_62                                                   (HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_63                                                   (HasGetValueTypeHash)
// FVerseDynamicProperty_             InvokeResultDummy_64                                             (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_65                                              (ZeroConstructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_66                                                   (HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_67                                                   (HasGetValueTypeHash)
// FVerseDynamicProperty_             InvokeResultDummy_68                                             (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_69                                              (ZeroConstructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_70                                                   (HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_71                                                   (HasGetValueTypeHash)
// class UDiagnostics_log*            __verse_0x00000000__30                                           (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_72                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_73                                                       (HasGetValueTypeHash)
// struct FTuple_L_Kchar_M_QLevel_Nlog__level_R_ExprResult_74                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_75                                                   (HasGetValueTypeHash)
// TArray<FVerseDynamicProperty_>     __verse_0xFFC68BC5_Array_31                                      (ContainsInstancedReference)
// FVerseFunctionProperty_            _Callee_76                                                       (HasGetValueTypeHash)
// TArray<TArray<FVerseDynamicProperty_>>_ExprResult_77                                                   (ContainsInstancedReference)
// TArray<FVerseStringProperty_>      __verse_0xFFC68BC5_Array_32                                      (ContainsInstancedReference)
// struct FTuple_L_Kchar_M_Kchar_R    __verse_0x00000000__33                                           (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_78                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_79                                              (HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_80                                                       (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultDummy_81                                              (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultDummy_82                                              (HasGetValueTypeHash)
// TArray<TArray<FVerseDynamicProperty_>>_ForResult_83                                                    (ContainsInstancedReference)
// int64                              _ForIndex_84                                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              _ForLength_85                                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              __verse_0xFB88B569_Item_35                                       (HasGetValueTypeHash)
// TArray<FVerseDynamicProperty_>     _ExprResult_86                                                   (ContainsInstancedReference)
// FVerseStringProperty_              __verse_0xFFC68BC5_Array_36                                      (HasGetValueTypeHash)
// TArray<FVerseDynamicProperty_>     _ForResult_87                                                    (ContainsInstancedReference)
// int64                              _ForIndex_88                                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              _ForLength_89                                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              __verse_0xFB88B569_Item_38                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_90                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ForResult_91                                                    (HasGetValueTypeHash)
// int64                              _ForIndex_92                                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              _ForLength_93                                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             __verse_0xFB88B569_Item_40                                       (HasGetValueTypeHash)
// uint8                              _ExprResult_94                                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_95                                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             InvokeResultDummy_96                                             (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_97                                              (ZeroConstructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_98                                                   (HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_99                                                   (HasGetValueTypeHash)

FOptionalProperty_ UDevices::_L_2fFortnite_2ecom_2fDevices_N_RHandleTeleportToResult_L_Nteleport__to__result_R(enum class EDevices_teleport_to_result __verse_0xB2CDDD72_Argument, uint8 _ExprResult_0, FVerseDynamicProperty_ InvokeResultDummy_1, FOptionalProperty_ _ExprResultStack_2, FVerseDynamicProperty_ _ExprResult_3, FVerseDynamicProperty_ _ExprResult_4, class UDiagnostics_log* __verse_0x63A8D5FA_DebugLog_3, uint64 _InstancingGraph_5, FVerseStringProperty_ __verse_0x8BA81554_LogString_3, enum class EDevices_teleport_to_result __verse_0x00000000__4, FVerseDynamicProperty_ InvokeResultDummy_6, FOptionalProperty_ _ExprResultStack_7, FVerseDynamicProperty_ _ExprResult_8, FVerseDynamicProperty_ _ExprResult_9, FVerseDynamicProperty_ InvokeResultDummy_10, FOptionalProperty_ _ExprResultStack_11, FVerseDynamicProperty_ _ExprResult_12, FVerseDynamicProperty_ _ExprResult_13, FVerseDynamicProperty_ InvokeResultDummy_14, FOptionalProperty_ _ExprResultStack_15, FVerseDynamicProperty_ _ExprResult_16, FVerseDynamicProperty_ _ExprResult_17, FVerseDynamicProperty_ InvokeResultDummy_18, FOptionalProperty_ _ExprResultStack_19, FVerseDynamicProperty_ _ExprResult_20, FVerseDynamicProperty_ _ExprResult_21, class UDiagnostics_log* __verse_0x00000000__10, enum class EVerseTrue _InvokeSureResultDummy_22, FVerseFunctionProperty_ _Callee_23, const struct FTuple_L_Kchar_M_QLevel_Nlog__level_R& _ExprResult_24, FVerseStringProperty_ _ExprResult_25, const TArray<FVerseDynamicProperty_>& __verse_0xFFC68BC5_Array_11, FVerseFunctionProperty_ _Callee_26, const TArray<TArray<FVerseDynamicProperty_>>& _ExprResult_27, const TArray<FVerseStringProperty_>& __verse_0xFFC68BC5_Array_12, const struct FTuple_L_Kchar_M_Kchar_R& __verse_0x00000000__13, FVerseStringProperty_ _ExprResult_28, FVerseStringProperty_ _ExprResultStack_29, FVerseFunctionProperty_ _Callee_30, FVerseStringProperty_ _ExprResultDummy_31, FVerseStringProperty_ _ExprResultDummy_32, const TArray<TArray<FVerseDynamicProperty_>>& _ForResult_33, int64 _ForIndex_34, int64 _ForLength_35, FVerseStringProperty_ __verse_0xFB88B569_Item_15, const TArray<FVerseDynamicProperty_>& _ExprResult_36, FVerseStringProperty_ __verse_0xFFC68BC5_Array_16, const TArray<FVerseDynamicProperty_>& _ForResult_37, int64 _ForIndex_38, int64 _ForLength_39, uint8 __verse_0xFB88B569_Item_18, FVerseDynamicProperty_ _ExprResult_40, FVerseStringProperty_ _ForResult_41, int64 _ForIndex_42, int64 _ForLength_43, FVerseDynamicProperty_ __verse_0xFB88B569_Item_20, uint8 _ExprResult_44, FOptionalProperty_ _ExprResult_45, FVerseDynamicProperty_ InvokeResultDummy_46, FOptionalProperty_ _ExprResultStack_47, FVerseDynamicProperty_ _ExprResult_48, FVerseDynamicProperty_ _ExprResult_49, uint8 _ExprResult_50, FVerseDynamicProperty_ InvokeResultDummy_51, FOptionalProperty_ _ExprResultStack_52, FVerseDynamicProperty_ _ExprResult_53, FVerseDynamicProperty_ _ExprResult_54, class UDiagnostics_log* __verse_0x63A8D5FA_DebugLog_23, uint64 _InstancingGraph_55, FVerseStringProperty_ __verse_0x8BA81554_LogString_23, enum class EDevices_teleport_to_result __verse_0x00000000__24, FVerseDynamicProperty_ InvokeResultDummy_56, FOptionalProperty_ _ExprResultStack_57, FVerseDynamicProperty_ _ExprResult_58, FVerseDynamicProperty_ _ExprResult_59, FVerseDynamicProperty_ InvokeResultDummy_60, FOptionalProperty_ _ExprResultStack_61, FVerseDynamicProperty_ _ExprResult_62, FVerseDynamicProperty_ _ExprResult_63, FVerseDynamicProperty_ InvokeResultDummy_64, FOptionalProperty_ _ExprResultStack_65, FVerseDynamicProperty_ _ExprResult_66, FVerseDynamicProperty_ _ExprResult_67, FVerseDynamicProperty_ InvokeResultDummy_68, FOptionalProperty_ _ExprResultStack_69, FVerseDynamicProperty_ _ExprResult_70, FVerseDynamicProperty_ _ExprResult_71, class UDiagnostics_log* __verse_0x00000000__30, enum class EVerseTrue _InvokeSureResultDummy_72, FVerseFunctionProperty_ _Callee_73, const struct FTuple_L_Kchar_M_QLevel_Nlog__level_R& _ExprResult_74, FVerseStringProperty_ _ExprResult_75, const TArray<FVerseDynamicProperty_>& __verse_0xFFC68BC5_Array_31, FVerseFunctionProperty_ _Callee_76, const TArray<TArray<FVerseDynamicProperty_>>& _ExprResult_77, const TArray<FVerseStringProperty_>& __verse_0xFFC68BC5_Array_32, const struct FTuple_L_Kchar_M_Kchar_R& __verse_0x00000000__33, FVerseStringProperty_ _ExprResult_78, FVerseStringProperty_ _ExprResultStack_79, FVerseFunctionProperty_ _Callee_80, FVerseStringProperty_ _ExprResultDummy_81, FVerseStringProperty_ _ExprResultDummy_82, const TArray<TArray<FVerseDynamicProperty_>>& _ForResult_83, int64 _ForIndex_84, int64 _ForLength_85, FVerseStringProperty_ __verse_0xFB88B569_Item_35, const TArray<FVerseDynamicProperty_>& _ExprResult_86, FVerseStringProperty_ __verse_0xFFC68BC5_Array_36, const TArray<FVerseDynamicProperty_>& _ForResult_87, int64 _ForIndex_88, int64 _ForLength_89, uint8 __verse_0xFB88B569_Item_38, FVerseDynamicProperty_ _ExprResult_90, FVerseStringProperty_ _ForResult_91, int64 _ForIndex_92, int64 _ForLength_93, FVerseDynamicProperty_ __verse_0xFB88B569_Item_40, uint8 _ExprResult_94, FOptionalProperty_ _ExprResult_95, FVerseDynamicProperty_ InvokeResultDummy_96, FOptionalProperty_ _ExprResultStack_97, FVerseDynamicProperty_ _ExprResult_98, FVerseDynamicProperty_ _ExprResult_99)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices", "_L_2fFortnite_2ecom_2fDevices_N_RHandleTeleportToResult_L_Nteleport__to__result_R");

	Params::UDevices__L_2fFortnite_2ecom_2fDevices_N_RHandleTeleportToResult_L_Nteleport__to__result_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._ExprResult_0 = _ExprResult_0;
	Parms.InvokeResultDummy_1 = InvokeResultDummy_1;
	Parms._ExprResultStack_2 = _ExprResultStack_2;
	Parms._ExprResult_3 = _ExprResult_3;
	Parms._ExprResult_4 = _ExprResult_4;
	Parms.__verse_0x63A8D5FA_DebugLog_3 = __verse_0x63A8D5FA_DebugLog_3;
	Parms._InstancingGraph_5 = _InstancingGraph_5;
	Parms.__verse_0x8BA81554_LogString_3 = __verse_0x8BA81554_LogString_3;
	Parms.__verse_0x00000000__4 = __verse_0x00000000__4;
	Parms.InvokeResultDummy_6 = InvokeResultDummy_6;
	Parms._ExprResultStack_7 = _ExprResultStack_7;
	Parms._ExprResult_8 = _ExprResult_8;
	Parms._ExprResult_9 = _ExprResult_9;
	Parms.InvokeResultDummy_10 = InvokeResultDummy_10;
	Parms._ExprResultStack_11 = _ExprResultStack_11;
	Parms._ExprResult_12 = _ExprResult_12;
	Parms._ExprResult_13 = _ExprResult_13;
	Parms.InvokeResultDummy_14 = InvokeResultDummy_14;
	Parms._ExprResultStack_15 = _ExprResultStack_15;
	Parms._ExprResult_16 = _ExprResult_16;
	Parms._ExprResult_17 = _ExprResult_17;
	Parms.InvokeResultDummy_18 = InvokeResultDummy_18;
	Parms._ExprResultStack_19 = _ExprResultStack_19;
	Parms._ExprResult_20 = _ExprResult_20;
	Parms._ExprResult_21 = _ExprResult_21;
	Parms.__verse_0x00000000__10 = __verse_0x00000000__10;
	Parms._InvokeSureResultDummy_22 = _InvokeSureResultDummy_22;
	Parms._Callee_23 = _Callee_23;
	Parms._ExprResult_24 = _ExprResult_24;
	Parms._ExprResult_25 = _ExprResult_25;
	Parms.__verse_0xFFC68BC5_Array_11 = __verse_0xFFC68BC5_Array_11;
	Parms._Callee_26 = _Callee_26;
	Parms._ExprResult_27 = _ExprResult_27;
	Parms.__verse_0xFFC68BC5_Array_12 = __verse_0xFFC68BC5_Array_12;
	Parms.__verse_0x00000000__13 = __verse_0x00000000__13;
	Parms._ExprResult_28 = _ExprResult_28;
	Parms._ExprResultStack_29 = _ExprResultStack_29;
	Parms._Callee_30 = _Callee_30;
	Parms._ExprResultDummy_31 = _ExprResultDummy_31;
	Parms._ExprResultDummy_32 = _ExprResultDummy_32;
	Parms._ForResult_33 = _ForResult_33;
	Parms._ForIndex_34 = _ForIndex_34;
	Parms._ForLength_35 = _ForLength_35;
	Parms.__verse_0xFB88B569_Item_15 = __verse_0xFB88B569_Item_15;
	Parms._ExprResult_36 = _ExprResult_36;
	Parms.__verse_0xFFC68BC5_Array_16 = __verse_0xFFC68BC5_Array_16;
	Parms._ForResult_37 = _ForResult_37;
	Parms._ForIndex_38 = _ForIndex_38;
	Parms._ForLength_39 = _ForLength_39;
	Parms.__verse_0xFB88B569_Item_18 = __verse_0xFB88B569_Item_18;
	Parms._ExprResult_40 = _ExprResult_40;
	Parms._ForResult_41 = _ForResult_41;
	Parms._ForIndex_42 = _ForIndex_42;
	Parms._ForLength_43 = _ForLength_43;
	Parms.__verse_0xFB88B569_Item_20 = __verse_0xFB88B569_Item_20;
	Parms._ExprResult_44 = _ExprResult_44;
	Parms._ExprResult_45 = _ExprResult_45;
	Parms.InvokeResultDummy_46 = InvokeResultDummy_46;
	Parms._ExprResultStack_47 = _ExprResultStack_47;
	Parms._ExprResult_48 = _ExprResult_48;
	Parms._ExprResult_49 = _ExprResult_49;
	Parms._ExprResult_50 = _ExprResult_50;
	Parms.InvokeResultDummy_51 = InvokeResultDummy_51;
	Parms._ExprResultStack_52 = _ExprResultStack_52;
	Parms._ExprResult_53 = _ExprResult_53;
	Parms._ExprResult_54 = _ExprResult_54;
	Parms.__verse_0x63A8D5FA_DebugLog_23 = __verse_0x63A8D5FA_DebugLog_23;
	Parms._InstancingGraph_55 = _InstancingGraph_55;
	Parms.__verse_0x8BA81554_LogString_23 = __verse_0x8BA81554_LogString_23;
	Parms.__verse_0x00000000__24 = __verse_0x00000000__24;
	Parms.InvokeResultDummy_56 = InvokeResultDummy_56;
	Parms._ExprResultStack_57 = _ExprResultStack_57;
	Parms._ExprResult_58 = _ExprResult_58;
	Parms._ExprResult_59 = _ExprResult_59;
	Parms.InvokeResultDummy_60 = InvokeResultDummy_60;
	Parms._ExprResultStack_61 = _ExprResultStack_61;
	Parms._ExprResult_62 = _ExprResult_62;
	Parms._ExprResult_63 = _ExprResult_63;
	Parms.InvokeResultDummy_64 = InvokeResultDummy_64;
	Parms._ExprResultStack_65 = _ExprResultStack_65;
	Parms._ExprResult_66 = _ExprResult_66;
	Parms._ExprResult_67 = _ExprResult_67;
	Parms.InvokeResultDummy_68 = InvokeResultDummy_68;
	Parms._ExprResultStack_69 = _ExprResultStack_69;
	Parms._ExprResult_70 = _ExprResult_70;
	Parms._ExprResult_71 = _ExprResult_71;
	Parms.__verse_0x00000000__30 = __verse_0x00000000__30;
	Parms._InvokeSureResultDummy_72 = _InvokeSureResultDummy_72;
	Parms._Callee_73 = _Callee_73;
	Parms._ExprResult_74 = _ExprResult_74;
	Parms._ExprResult_75 = _ExprResult_75;
	Parms.__verse_0xFFC68BC5_Array_31 = __verse_0xFFC68BC5_Array_31;
	Parms._Callee_76 = _Callee_76;
	Parms._ExprResult_77 = _ExprResult_77;
	Parms.__verse_0xFFC68BC5_Array_32 = __verse_0xFFC68BC5_Array_32;
	Parms.__verse_0x00000000__33 = __verse_0x00000000__33;
	Parms._ExprResult_78 = _ExprResult_78;
	Parms._ExprResultStack_79 = _ExprResultStack_79;
	Parms._Callee_80 = _Callee_80;
	Parms._ExprResultDummy_81 = _ExprResultDummy_81;
	Parms._ExprResultDummy_82 = _ExprResultDummy_82;
	Parms._ForResult_83 = _ForResult_83;
	Parms._ForIndex_84 = _ForIndex_84;
	Parms._ForLength_85 = _ForLength_85;
	Parms.__verse_0xFB88B569_Item_35 = __verse_0xFB88B569_Item_35;
	Parms._ExprResult_86 = _ExprResult_86;
	Parms.__verse_0xFFC68BC5_Array_36 = __verse_0xFFC68BC5_Array_36;
	Parms._ForResult_87 = _ForResult_87;
	Parms._ForIndex_88 = _ForIndex_88;
	Parms._ForLength_89 = _ForLength_89;
	Parms.__verse_0xFB88B569_Item_38 = __verse_0xFB88B569_Item_38;
	Parms._ExprResult_90 = _ExprResult_90;
	Parms._ForResult_91 = _ForResult_91;
	Parms._ForIndex_92 = _ForIndex_92;
	Parms._ForLength_93 = _ForLength_93;
	Parms.__verse_0xFB88B569_Item_40 = __verse_0xFB88B569_Item_40;
	Parms._ExprResult_94 = _ExprResult_94;
	Parms._ExprResult_95 = _ExprResult_95;
	Parms.InvokeResultDummy_96 = InvokeResultDummy_96;
	Parms._ExprResultStack_97 = _ExprResultStack_97;
	Parms._ExprResult_98 = _ExprResult_98;
	Parms._ExprResult_99 = _ExprResult_99;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseDevices.Devices._L_2fFortnite_2ecom_2fDevices_N_RHandleMoveToInternalResult_L_Nmove__to__internal__result_R
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// enum class EDevices_move_to_internal_result__verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDevices_move_to_result RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             InvokeResultDummy_0                                              (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_1                                               (ZeroConstructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_2                                                    (HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_3                                                    (HasGetValueTypeHash)
// FVerseDynamicProperty_             InvokeResultDummy_4                                              (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_5                                               (ZeroConstructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_6                                                    (HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_7                                                    (HasGetValueTypeHash)
// class UDiagnostics_log*            __verse_0x63A8D5FA_DebugLog_3                                    (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint64                             _InstancingGraph_8                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDiagnostics_log*            __verse_0x00000000__4                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_9                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_10                                                       (HasGetValueTypeHash)
// struct FTuple_L_Kchar_M_QLevel_Nlog__level_R_ExprResult_11                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_12                                                   (HasGetValueTypeHash)
// TArray<FVerseDynamicProperty_>     __verse_0xFFC68BC5_Array_5                                       (ContainsInstancedReference)
// FVerseFunctionProperty_            _Callee_13                                                       (HasGetValueTypeHash)
// TArray<TArray<FVerseDynamicProperty_>>_ExprResult_14                                                   (ContainsInstancedReference)
// TArray<FVerseStringProperty_>      __verse_0xFFC68BC5_Array_6                                       (ContainsInstancedReference)
// struct FTuple_L_Kchar_M_Kchar_R    __verse_0x00000000__7                                            (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_15                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_16                                              (HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_17                                                       (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultDummy_18                                              (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultDummy_19                                              (HasGetValueTypeHash)
// TArray<TArray<FVerseDynamicProperty_>>_ForResult_20                                                    (ContainsInstancedReference)
// int64                              _ForIndex_21                                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              _ForLength_22                                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              __verse_0xFB88B569_Item_9                                        (HasGetValueTypeHash)
// TArray<FVerseDynamicProperty_>     _ExprResult_23                                                   (ContainsInstancedReference)
// FVerseStringProperty_              __verse_0xFFC68BC5_Array_10                                      (HasGetValueTypeHash)
// TArray<FVerseDynamicProperty_>     _ForResult_24                                                    (ContainsInstancedReference)
// int64                              _ForIndex_25                                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              _ForLength_26                                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              __verse_0xFB88B569_Item_12                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_27                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ForResult_28                                                    (HasGetValueTypeHash)
// int64                              _ForIndex_29                                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              _ForLength_30                                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             __verse_0xFB88B569_Item_14                                       (HasGetValueTypeHash)
// uint8                              _ExprResult_31                                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_32                                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             InvokeResultDummy_33                                             (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_34                                              (ZeroConstructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_35                                                   (HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_36                                                   (HasGetValueTypeHash)
// FVerseDynamicProperty_             InvokeResultDummy_37                                             (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_38                                              (ZeroConstructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_39                                                   (HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_40                                                   (HasGetValueTypeHash)
// class UDiagnostics_log*            __verse_0x63A8D5FA_DebugLog_17                                   (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint64                             _InstancingGraph_41                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDiagnostics_log*            __verse_0x00000000__18                                           (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_42                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_43                                                       (HasGetValueTypeHash)
// struct FTuple_L_Kchar_M_QLevel_Nlog__level_R_ExprResult_44                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_45                                                   (HasGetValueTypeHash)
// TArray<FVerseDynamicProperty_>     __verse_0xFFC68BC5_Array_19                                      (ContainsInstancedReference)
// FVerseFunctionProperty_            _Callee_46                                                       (HasGetValueTypeHash)
// TArray<TArray<FVerseDynamicProperty_>>_ExprResult_47                                                   (ContainsInstancedReference)
// TArray<FVerseStringProperty_>      __verse_0xFFC68BC5_Array_20                                      (ContainsInstancedReference)
// struct FTuple_L_Kchar_M_Kchar_R    __verse_0x00000000__21                                           (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_48                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_49                                              (HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_50                                                       (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultDummy_51                                              (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultDummy_52                                              (HasGetValueTypeHash)
// TArray<TArray<FVerseDynamicProperty_>>_ForResult_53                                                    (ContainsInstancedReference)
// int64                              _ForIndex_54                                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              _ForLength_55                                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              __verse_0xFB88B569_Item_23                                       (HasGetValueTypeHash)
// TArray<FVerseDynamicProperty_>     _ExprResult_56                                                   (ContainsInstancedReference)
// FVerseStringProperty_              __verse_0xFFC68BC5_Array_24                                      (HasGetValueTypeHash)
// TArray<FVerseDynamicProperty_>     _ForResult_57                                                    (ContainsInstancedReference)
// int64                              _ForIndex_58                                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              _ForLength_59                                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              __verse_0xFB88B569_Item_26                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_60                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ForResult_61                                                    (HasGetValueTypeHash)
// int64                              _ForIndex_62                                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              _ForLength_63                                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             __verse_0xFB88B569_Item_28                                       (HasGetValueTypeHash)
// uint8                              _ExprResult_64                                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_65                                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class EDevices_move_to_result UDevices::_L_2fFortnite_2ecom_2fDevices_N_RHandleMoveToInternalResult_L_Nmove__to__internal__result_R(enum class EDevices_move_to_internal_result __verse_0xB2CDDD72_Argument, FVerseDynamicProperty_ InvokeResultDummy_0, FOptionalProperty_ _ExprResultStack_1, FVerseDynamicProperty_ _ExprResult_2, FVerseDynamicProperty_ _ExprResult_3, FVerseDynamicProperty_ InvokeResultDummy_4, FOptionalProperty_ _ExprResultStack_5, FVerseDynamicProperty_ _ExprResult_6, FVerseDynamicProperty_ _ExprResult_7, class UDiagnostics_log* __verse_0x63A8D5FA_DebugLog_3, uint64 _InstancingGraph_8, class UDiagnostics_log* __verse_0x00000000__4, enum class EVerseTrue _InvokeSureResultDummy_9, FVerseFunctionProperty_ _Callee_10, const struct FTuple_L_Kchar_M_QLevel_Nlog__level_R& _ExprResult_11, FVerseStringProperty_ _ExprResult_12, const TArray<FVerseDynamicProperty_>& __verse_0xFFC68BC5_Array_5, FVerseFunctionProperty_ _Callee_13, const TArray<TArray<FVerseDynamicProperty_>>& _ExprResult_14, const TArray<FVerseStringProperty_>& __verse_0xFFC68BC5_Array_6, const struct FTuple_L_Kchar_M_Kchar_R& __verse_0x00000000__7, FVerseStringProperty_ _ExprResult_15, FVerseStringProperty_ _ExprResultStack_16, FVerseFunctionProperty_ _Callee_17, FVerseStringProperty_ _ExprResultDummy_18, FVerseStringProperty_ _ExprResultDummy_19, const TArray<TArray<FVerseDynamicProperty_>>& _ForResult_20, int64 _ForIndex_21, int64 _ForLength_22, FVerseStringProperty_ __verse_0xFB88B569_Item_9, const TArray<FVerseDynamicProperty_>& _ExprResult_23, FVerseStringProperty_ __verse_0xFFC68BC5_Array_10, const TArray<FVerseDynamicProperty_>& _ForResult_24, int64 _ForIndex_25, int64 _ForLength_26, uint8 __verse_0xFB88B569_Item_12, FVerseDynamicProperty_ _ExprResult_27, FVerseStringProperty_ _ForResult_28, int64 _ForIndex_29, int64 _ForLength_30, FVerseDynamicProperty_ __verse_0xFB88B569_Item_14, uint8 _ExprResult_31, FOptionalProperty_ _ExprResult_32, FVerseDynamicProperty_ InvokeResultDummy_33, FOptionalProperty_ _ExprResultStack_34, FVerseDynamicProperty_ _ExprResult_35, FVerseDynamicProperty_ _ExprResult_36, FVerseDynamicProperty_ InvokeResultDummy_37, FOptionalProperty_ _ExprResultStack_38, FVerseDynamicProperty_ _ExprResult_39, FVerseDynamicProperty_ _ExprResult_40, class UDiagnostics_log* __verse_0x63A8D5FA_DebugLog_17, uint64 _InstancingGraph_41, class UDiagnostics_log* __verse_0x00000000__18, enum class EVerseTrue _InvokeSureResultDummy_42, FVerseFunctionProperty_ _Callee_43, const struct FTuple_L_Kchar_M_QLevel_Nlog__level_R& _ExprResult_44, FVerseStringProperty_ _ExprResult_45, const TArray<FVerseDynamicProperty_>& __verse_0xFFC68BC5_Array_19, FVerseFunctionProperty_ _Callee_46, const TArray<TArray<FVerseDynamicProperty_>>& _ExprResult_47, const TArray<FVerseStringProperty_>& __verse_0xFFC68BC5_Array_20, const struct FTuple_L_Kchar_M_Kchar_R& __verse_0x00000000__21, FVerseStringProperty_ _ExprResult_48, FVerseStringProperty_ _ExprResultStack_49, FVerseFunctionProperty_ _Callee_50, FVerseStringProperty_ _ExprResultDummy_51, FVerseStringProperty_ _ExprResultDummy_52, const TArray<TArray<FVerseDynamicProperty_>>& _ForResult_53, int64 _ForIndex_54, int64 _ForLength_55, FVerseStringProperty_ __verse_0xFB88B569_Item_23, const TArray<FVerseDynamicProperty_>& _ExprResult_56, FVerseStringProperty_ __verse_0xFFC68BC5_Array_24, const TArray<FVerseDynamicProperty_>& _ForResult_57, int64 _ForIndex_58, int64 _ForLength_59, uint8 __verse_0xFB88B569_Item_26, FVerseDynamicProperty_ _ExprResult_60, FVerseStringProperty_ _ForResult_61, int64 _ForIndex_62, int64 _ForLength_63, FVerseDynamicProperty_ __verse_0xFB88B569_Item_28, uint8 _ExprResult_64, FOptionalProperty_ _ExprResult_65)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices", "_L_2fFortnite_2ecom_2fDevices_N_RHandleMoveToInternalResult_L_Nmove__to__internal__result_R");

	Params::UDevices__L_2fFortnite_2ecom_2fDevices_N_RHandleMoveToInternalResult_L_Nmove__to__internal__result_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms.InvokeResultDummy_0 = InvokeResultDummy_0;
	Parms._ExprResultStack_1 = _ExprResultStack_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._ExprResult_3 = _ExprResult_3;
	Parms.InvokeResultDummy_4 = InvokeResultDummy_4;
	Parms._ExprResultStack_5 = _ExprResultStack_5;
	Parms._ExprResult_6 = _ExprResult_6;
	Parms._ExprResult_7 = _ExprResult_7;
	Parms.__verse_0x63A8D5FA_DebugLog_3 = __verse_0x63A8D5FA_DebugLog_3;
	Parms._InstancingGraph_8 = _InstancingGraph_8;
	Parms.__verse_0x00000000__4 = __verse_0x00000000__4;
	Parms._InvokeSureResultDummy_9 = _InvokeSureResultDummy_9;
	Parms._Callee_10 = _Callee_10;
	Parms._ExprResult_11 = _ExprResult_11;
	Parms._ExprResult_12 = _ExprResult_12;
	Parms.__verse_0xFFC68BC5_Array_5 = __verse_0xFFC68BC5_Array_5;
	Parms._Callee_13 = _Callee_13;
	Parms._ExprResult_14 = _ExprResult_14;
	Parms.__verse_0xFFC68BC5_Array_6 = __verse_0xFFC68BC5_Array_6;
	Parms.__verse_0x00000000__7 = __verse_0x00000000__7;
	Parms._ExprResult_15 = _ExprResult_15;
	Parms._ExprResultStack_16 = _ExprResultStack_16;
	Parms._Callee_17 = _Callee_17;
	Parms._ExprResultDummy_18 = _ExprResultDummy_18;
	Parms._ExprResultDummy_19 = _ExprResultDummy_19;
	Parms._ForResult_20 = _ForResult_20;
	Parms._ForIndex_21 = _ForIndex_21;
	Parms._ForLength_22 = _ForLength_22;
	Parms.__verse_0xFB88B569_Item_9 = __verse_0xFB88B569_Item_9;
	Parms._ExprResult_23 = _ExprResult_23;
	Parms.__verse_0xFFC68BC5_Array_10 = __verse_0xFFC68BC5_Array_10;
	Parms._ForResult_24 = _ForResult_24;
	Parms._ForIndex_25 = _ForIndex_25;
	Parms._ForLength_26 = _ForLength_26;
	Parms.__verse_0xFB88B569_Item_12 = __verse_0xFB88B569_Item_12;
	Parms._ExprResult_27 = _ExprResult_27;
	Parms._ForResult_28 = _ForResult_28;
	Parms._ForIndex_29 = _ForIndex_29;
	Parms._ForLength_30 = _ForLength_30;
	Parms.__verse_0xFB88B569_Item_14 = __verse_0xFB88B569_Item_14;
	Parms._ExprResult_31 = _ExprResult_31;
	Parms._ExprResult_32 = _ExprResult_32;
	Parms.InvokeResultDummy_33 = InvokeResultDummy_33;
	Parms._ExprResultStack_34 = _ExprResultStack_34;
	Parms._ExprResult_35 = _ExprResult_35;
	Parms._ExprResult_36 = _ExprResult_36;
	Parms.InvokeResultDummy_37 = InvokeResultDummy_37;
	Parms._ExprResultStack_38 = _ExprResultStack_38;
	Parms._ExprResult_39 = _ExprResult_39;
	Parms._ExprResult_40 = _ExprResult_40;
	Parms.__verse_0x63A8D5FA_DebugLog_17 = __verse_0x63A8D5FA_DebugLog_17;
	Parms._InstancingGraph_41 = _InstancingGraph_41;
	Parms.__verse_0x00000000__18 = __verse_0x00000000__18;
	Parms._InvokeSureResultDummy_42 = _InvokeSureResultDummy_42;
	Parms._Callee_43 = _Callee_43;
	Parms._ExprResult_44 = _ExprResult_44;
	Parms._ExprResult_45 = _ExprResult_45;
	Parms.__verse_0xFFC68BC5_Array_19 = __verse_0xFFC68BC5_Array_19;
	Parms._Callee_46 = _Callee_46;
	Parms._ExprResult_47 = _ExprResult_47;
	Parms.__verse_0xFFC68BC5_Array_20 = __verse_0xFFC68BC5_Array_20;
	Parms.__verse_0x00000000__21 = __verse_0x00000000__21;
	Parms._ExprResult_48 = _ExprResult_48;
	Parms._ExprResultStack_49 = _ExprResultStack_49;
	Parms._Callee_50 = _Callee_50;
	Parms._ExprResultDummy_51 = _ExprResultDummy_51;
	Parms._ExprResultDummy_52 = _ExprResultDummy_52;
	Parms._ForResult_53 = _ForResult_53;
	Parms._ForIndex_54 = _ForIndex_54;
	Parms._ForLength_55 = _ForLength_55;
	Parms.__verse_0xFB88B569_Item_23 = __verse_0xFB88B569_Item_23;
	Parms._ExprResult_56 = _ExprResult_56;
	Parms.__verse_0xFFC68BC5_Array_24 = __verse_0xFFC68BC5_Array_24;
	Parms._ForResult_57 = _ForResult_57;
	Parms._ForIndex_58 = _ForIndex_58;
	Parms._ForLength_59 = _ForLength_59;
	Parms.__verse_0xFB88B569_Item_26 = __verse_0xFB88B569_Item_26;
	Parms._ExprResult_60 = _ExprResult_60;
	Parms._ForResult_61 = _ForResult_61;
	Parms._ForIndex_62 = _ForIndex_62;
	Parms._ForLength_63 = _ForLength_63;
	Parms.__verse_0xFB88B569_Item_28 = __verse_0xFB88B569_Item_28;
	Parms._ExprResult_64 = _ExprResult_64;
	Parms._ExprResult_65 = _ExprResult_65;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseDevices.Devices._L_2fFortnite_2ecom_2fDevices_N_RGetCreativeObjectsWithTags_L_Ntag__search__criteria_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UTags_tag_search_criteria*   __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// TArray<class UObject*>             RetVal                                                           (Parm, OutParm, ReturnParm, ContainsInstancedReference)

TArray<class UObject*> UDevices::_L_2fFortnite_2ecom_2fDevices_N_RGetCreativeObjectsWithTags_L_Ntag__search__criteria_R(class UTags_tag_search_criteria* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices", "_L_2fFortnite_2ecom_2fDevices_N_RGetCreativeObjectsWithTags_L_Ntag__search__criteria_R");

	Params::UDevices__L_2fFortnite_2ecom_2fDevices_N_RGetCreativeObjectsWithTags_L_Ntag__search__criteria_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseDevices.Devices._L_2fFortnite_2ecom_2fDevices_N_RGetCreativeObjectsWithTag_L_Ntag_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UTags_tag*                   __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// TArray<class UObject*>             RetVal                                                           (Parm, OutParm, ReturnParm, ContainsInstancedReference)

TArray<class UObject*> UDevices::_L_2fFortnite_2ecom_2fDevices_N_RGetCreativeObjectsWithTag_L_Ntag_R(class UTags_tag* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices", "_L_2fFortnite_2ecom_2fDevices_N_RGetCreativeObjectsWithTag_L_Ntag_R");

	Params::UDevices__L_2fFortnite_2ecom_2fDevices_N_RGetCreativeObjectsWithTag_L_Ntag_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseDevices.Devices.Devices_device_ai_interaction_result$OverrideFactory
// (Static, HasOutParams)
// Parameters:
// struct FDevices_device_ai_interaction_resultRetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor)
// TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap                              (ConstParm, Parm, ContainsInstancedReference)

struct FDevices_device_ai_interaction_result UDevices::Devices_device_ai_interaction_result_OverrideFactory(TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices", "Devices_device_ai_interaction_result$OverrideFactory");

	Params::UDevices_Devices_device_ai_interaction_result_OverrideFactory_Params Parms{};

	Parms.__verse_0xFB48ED96__InitOverrideMap = __verse_0xFB48ED96__InitOverrideMap;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseDevices.Devices.Devices_device_ai_interaction_result$Factory
// (Static, HasOutParams)
// Parameters:
// struct FDevices_device_ai_interaction_resultRetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor)

struct FDevices_device_ai_interaction_result UDevices::Devices_device_ai_interaction_result_Factory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices", "Devices_device_ai_interaction_result$Factory");

	Params::UDevices_Devices_device_ai_interaction_result_Factory_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseDevices.Devices.$InitCDO
// (HasDefaults)
// Parameters:
// class UDevices_creative_prop_asset*_ExprResult_0                                                    (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint64                             _InstancingGraph_1                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDevices_creative_prop_asset*_ExprResult_2                                                    (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint64                             _InstancingGraph_3                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDevices::_InitCDO(class UDevices_creative_prop_asset* _ExprResult_0, uint64 _InstancingGraph_1, class UDevices_creative_prop_asset* _ExprResult_2, uint64 _InstancingGraph_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices", "$InitCDO");

	Params::UDevices__InitCDO_Params Parms{};

	Parms._ExprResult_0 = _ExprResult_0;
	Parms._InstancingGraph_1 = _InstancingGraph_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._InstancingGraph_3 = _InstancingGraph_3;

	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseDevices.Devices_creative_device
// (None)

class UClass* UDevices_creative_device::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Devices_creative_device");

	return Clss;
}


// Devices_creative_device VerseDevices.Default__Devices_creative_device
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDevices_creative_device* UDevices_creative_device::GetDefaultObj()
{
	static class UDevices_creative_device* Default = nullptr;

	if (!Default)
		Default = static_cast<UDevices_creative_device*>(UDevices_creative_device::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseDevices.Devices_creative_device._L_2fFortnite_2ecom_2fDevices_2fcreative__device_N_RTeleportTo_L_Ntransform_R
// (Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FSpatialMath_transform      __verse_0xB2CDDD72_Argument                                      (Parm, NoDestructor)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_0                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_1                                                        (HasGetValueTypeHash)
// struct FTuple_Lcreative__device_Mtuple_L_R_Mtransform_R_ExprResult_2                                                    (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_3                                                    (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_4                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_5                                                        (HasGetValueTypeHash)
// struct FTuple_Lcreative__device_Mtuple_L_R_Mtransform_R_ExprResult_6                                                    (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_7                                                    (HasGetValueTypeHash)

FOptionalProperty_ UDevices_creative_device::_L_2fFortnite_2ecom_2fDevices_2fcreative__device_N_RTeleportTo_L_Ntransform_R(const struct FSpatialMath_transform& __verse_0xB2CDDD72_Argument, FOptionalProperty_ _ExprResultStack_0, FVerseFunctionProperty_ _Callee_1, const struct FTuple_Lcreative__device_Mtuple_L_R_Mtransform_R& _ExprResult_2, const struct FTuple_L_R& _ExprResult_3, FOptionalProperty_ _ExprResultStack_4, FVerseFunctionProperty_ _Callee_5, const struct FTuple_Lcreative__device_Mtuple_L_R_Mtransform_R& _ExprResult_6, const struct FTuple_L_R& _ExprResult_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_creative_device", "_L_2fFortnite_2ecom_2fDevices_2fcreative__device_N_RTeleportTo_L_Ntransform_R");

	Params::UDevices_creative_device__L_2fFortnite_2ecom_2fDevices_2fcreative__device_N_RTeleportTo_L_Ntransform_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._ExprResultStack_0 = _ExprResultStack_0;
	Parms._Callee_1 = _Callee_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._ExprResult_3 = _ExprResult_3;
	Parms._ExprResultStack_4 = _ExprResultStack_4;
	Parms._Callee_5 = _Callee_5;
	Parms._ExprResult_6 = _ExprResult_6;
	Parms._ExprResult_7 = _ExprResult_7;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseDevices.Devices_creative_device._L_2fFortnite_2ecom_2fDevices_2fcreative__device_N_RTeleportTo_L_Nvector3_M_Nrotation_R
// (Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_Lvector3_Mrotation_R __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_0                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_1                                                        (HasGetValueTypeHash)
// struct FTuple_Lcreative__device_Mtuple_L_R_Mtuple_Lvector3_Mrotation_R_R_ExprResult_2                                                    (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_3                                                    (HasGetValueTypeHash)
// struct FTuple_Lvector3_Mrotation_R _ExprResult_4                                                    (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_5                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_6                                                        (HasGetValueTypeHash)
// struct FTuple_Lcreative__device_Mtuple_L_R_Mtuple_Lvector3_Mrotation_R_R_ExprResult_7                                                    (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_8                                                    (HasGetValueTypeHash)
// struct FTuple_Lvector3_Mrotation_R _ExprResult_9                                                    (HasGetValueTypeHash)

FOptionalProperty_ UDevices_creative_device::_L_2fFortnite_2ecom_2fDevices_2fcreative__device_N_RTeleportTo_L_Nvector3_M_Nrotation_R(const struct FTuple_Lvector3_Mrotation_R& __verse_0xB2CDDD72_Argument, FOptionalProperty_ _ExprResultStack_0, FVerseFunctionProperty_ _Callee_1, const struct FTuple_Lcreative__device_Mtuple_L_R_Mtuple_Lvector3_Mrotation_R_R& _ExprResult_2, const struct FTuple_L_R& _ExprResult_3, const struct FTuple_Lvector3_Mrotation_R& _ExprResult_4, FOptionalProperty_ _ExprResultStack_5, FVerseFunctionProperty_ _Callee_6, const struct FTuple_Lcreative__device_Mtuple_L_R_Mtuple_Lvector3_Mrotation_R_R& _ExprResult_7, const struct FTuple_L_R& _ExprResult_8, const struct FTuple_Lvector3_Mrotation_R& _ExprResult_9)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_creative_device", "_L_2fFortnite_2ecom_2fDevices_2fcreative__device_N_RTeleportTo_L_Nvector3_M_Nrotation_R");

	Params::UDevices_creative_device__L_2fFortnite_2ecom_2fDevices_2fcreative__device_N_RTeleportTo_L_Nvector3_M_Nrotation_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._ExprResultStack_0 = _ExprResultStack_0;
	Parms._Callee_1 = _Callee_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._ExprResult_3 = _ExprResult_3;
	Parms._ExprResult_4 = _ExprResult_4;
	Parms._ExprResultStack_5 = _ExprResultStack_5;
	Parms._Callee_6 = _Callee_6;
	Parms._ExprResult_7 = _ExprResult_7;
	Parms._ExprResult_8 = _ExprResult_8;
	Parms._ExprResult_9 = _ExprResult_9;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseDevices.Devices_creative_device._L_2fFortnite_2ecom_2fDevices_2fcreative__device_N_RShow
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UDevices_creative_device::_L_2fFortnite_2ecom_2fDevices_2fcreative__device_N_RShow(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_creative_device", "_L_2fFortnite_2ecom_2fDevices_2fcreative__device_N_RShow");

	Params::UDevices_creative_device__L_2fFortnite_2ecom_2fDevices_2fcreative__device_N_RShow_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseDevices.Devices_creative_device._L_2fFortnite_2ecom_2fDevices_2fcreative__device_N_ROnEnd
// (Public, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UDevices_creative_device::_L_2fFortnite_2ecom_2fDevices_2fcreative__device_N_ROnEnd(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_creative_device", "_L_2fFortnite_2ecom_2fDevices_2fcreative__device_N_ROnEnd");

	Params::UDevices_creative_device__L_2fFortnite_2ecom_2fDevices_2fcreative__device_N_ROnEnd_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_creative_device._L_2fFortnite_2ecom_2fDevices_2fcreative__device_N_ROnBegin__Internal
// (Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           _AsyncTask_0                                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _AsyncTaskClass_1                                                (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_2                                                    (HasGetValueTypeHash)
// int64                              _AsyncResult_3                                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UConcurrency_task*           _AsyncTask_4                                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _AsyncTaskClass_5                                                (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_6                                                    (HasGetValueTypeHash)
// int64                              _AsyncResult_7                                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDevices_creative_device::_L_2fFortnite_2ecom_2fDevices_2fcreative__device_N_ROnBegin__Internal(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, class UConcurrency_task* _AsyncTask_0, FVerseFunctionProperty_ _AsyncTaskClass_1, const struct FTuple_L_R& _ExprResult_2, int64 _AsyncResult_3, class UConcurrency_task* _AsyncTask_4, FVerseFunctionProperty_ _AsyncTaskClass_5, const struct FTuple_L_R& _ExprResult_6, int64 _AsyncResult_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_creative_device", "_L_2fFortnite_2ecom_2fDevices_2fcreative__device_N_ROnBegin__Internal");

	Params::UDevices_creative_device__L_2fFortnite_2ecom_2fDevices_2fcreative__device_N_ROnBegin__Internal_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._AsyncTask_0 = _AsyncTask_0;
	Parms._AsyncTaskClass_1 = _AsyncTaskClass_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._AsyncResult_3 = _AsyncResult_3;
	Parms._AsyncTask_4 = _AsyncTask_4;
	Parms._AsyncTaskClass_5 = _AsyncTaskClass_5;
	Parms._ExprResult_6 = _ExprResult_6;
	Parms._AsyncResult_7 = _AsyncResult_7;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_creative_device.OnBegin
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UDevices_creative_device::OnBegin(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_creative_device", "OnBegin");

	Params::UDevices_creative_device_OnBegin_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseDevices.Devices_creative_device.MoveTo_L_Ntransform_M_Nfloat_R
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_Ltransform_Mfloat_R  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UDevices_creative_device::MoveTo_L_Ntransform_M_Nfloat_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_Ltransform_Mfloat_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_creative_device", "MoveTo_L_Ntransform_M_Nfloat_R");

	Params::UDevices_creative_device_MoveTo_L_Ntransform_M_Nfloat_R_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseDevices.Devices_creative_device.MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_Lvector3_Mrotation_Mfloat_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UDevices_creative_device::MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_Lvector3_Mrotation_Mfloat_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_creative_device", "MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R");

	Params::UDevices_creative_device_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseDevices.Devices_creative_device._L_2fFortnite_2ecom_2fDevices_2fcreative__device_N_RHide
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UDevices_creative_device::_L_2fFortnite_2ecom_2fDevices_2fcreative__device_N_RHide(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_creative_device", "_L_2fFortnite_2ecom_2fDevices_2fcreative__device_N_RHide");

	Params::UDevices_creative_device__L_2fFortnite_2ecom_2fDevices_2fcreative__device_N_RHide_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseDevices.Devices_creative_device._L_2fFortnite_2ecom_2fGame_2fpositional_N_RGetTransform
// (Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FSpatialMath_transform      RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor)
// FVerseFunctionProperty_            _Callee_0                                                        (HasGetValueTypeHash)
// struct FTuple_Lcreative__device_Mtuple_L_R_Mtuple_L_R_R_ExprResult_1                                                    (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_2                                                    (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_3                                                    (HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_4                                                        (HasGetValueTypeHash)
// struct FTuple_Lcreative__device_Mtuple_L_R_Mtuple_L_R_R_ExprResult_5                                                    (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_6                                                    (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_7                                                    (HasGetValueTypeHash)

struct FSpatialMath_transform UDevices_creative_device::_L_2fFortnite_2ecom_2fGame_2fpositional_N_RGetTransform(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, FVerseFunctionProperty_ _Callee_0, const struct FTuple_Lcreative__device_Mtuple_L_R_Mtuple_L_R_R& _ExprResult_1, const struct FTuple_L_R& _ExprResult_2, const struct FTuple_L_R& _ExprResult_3, FVerseFunctionProperty_ _Callee_4, const struct FTuple_Lcreative__device_Mtuple_L_R_Mtuple_L_R_R& _ExprResult_5, const struct FTuple_L_R& _ExprResult_6, const struct FTuple_L_R& _ExprResult_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_creative_device", "_L_2fFortnite_2ecom_2fGame_2fpositional_N_RGetTransform");

	Params::UDevices_creative_device__L_2fFortnite_2ecom_2fGame_2fpositional_N_RGetTransform_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._Callee_0 = _Callee_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._ExprResult_3 = _ExprResult_3;
	Parms._Callee_4 = _Callee_4;
	Parms._ExprResult_5 = _ExprResult_5;
	Parms._ExprResult_6 = _ExprResult_6;
	Parms._ExprResult_7 = _ExprResult_7;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseDevices.Devices_creative_device.$InitInstance
// (None)
// Parameters:

void UDevices_creative_device::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_creative_device", "$InitInstance");

	Params::UDevices_creative_device__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_creative_device.$Block
// (None)
// Parameters:

void UDevices_creative_device::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_creative_device", "$Block");

	Params::UDevices_creative_device__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_creative_device.$InitCDO
// (None)
// Parameters:

void UDevices_creative_device::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_creative_device", "$InitCDO");

	Params::UDevices_creative_device__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseDevices.Devices_creative_device_asset
// (None)

class UClass* UDevices_creative_device_asset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Devices_creative_device_asset");

	return Clss;
}


// Devices_creative_device_asset VerseDevices.Default__Devices_creative_device_asset
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDevices_creative_device_asset* UDevices_creative_device_asset::GetDefaultObj()
{
	static class UDevices_creative_device_asset* Default = nullptr;

	if (!Default)
		Default = static_cast<UDevices_creative_device_asset*>(UDevices_creative_device_asset::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseDevices.Devices_creative_device_asset.$InitInstance
// (None)
// Parameters:

void UDevices_creative_device_asset::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_creative_device_asset", "$InitInstance");

	Params::UDevices_creative_device_asset__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_creative_device_asset.$Block
// (None)
// Parameters:

void UDevices_creative_device_asset::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_creative_device_asset", "$Block");

	Params::UDevices_creative_device_asset__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_creative_device_asset.$InitCDO
// (None)
// Parameters:

void UDevices_creative_device_asset::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_creative_device_asset", "$InitCDO");

	Params::UDevices_creative_device_asset__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseDevices.Devices_creative_object
// (None)

class UClass* UDevices_creative_object::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Devices_creative_object");

	return Clss;
}


// Devices_creative_object VerseDevices.Default__Devices_creative_object
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDevices_creative_object* UDevices_creative_object::GetDefaultObj()
{
	static class UDevices_creative_object* Default = nullptr;

	if (!Default)
		Default = static_cast<UDevices_creative_object*>(UDevices_creative_object::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseDevices.Devices_creative_object._L_2fFortnite_2ecom_2fGame_2fpositional_N_RGetTransform
// (Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FSpatialMath_transform      RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor)
// FVerseFunctionProperty_            _Callee_0                                                        (HasGetValueTypeHash)
// struct FTuple_Lcreative__object_Mtuple_L_R_Mtuple_L_R_R_ExprResult_1                                                    (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_2                                                    (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_3                                                    (HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_4                                                        (HasGetValueTypeHash)
// struct FTuple_Lcreative__object_Mtuple_L_R_Mtuple_L_R_R_ExprResult_5                                                    (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_6                                                    (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_7                                                    (HasGetValueTypeHash)

struct FSpatialMath_transform UDevices_creative_object::_L_2fFortnite_2ecom_2fGame_2fpositional_N_RGetTransform(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, FVerseFunctionProperty_ _Callee_0, const struct FTuple_Lcreative__object_Mtuple_L_R_Mtuple_L_R_R& _ExprResult_1, const struct FTuple_L_R& _ExprResult_2, const struct FTuple_L_R& _ExprResult_3, FVerseFunctionProperty_ _Callee_4, const struct FTuple_Lcreative__object_Mtuple_L_R_Mtuple_L_R_R& _ExprResult_5, const struct FTuple_L_R& _ExprResult_6, const struct FTuple_L_R& _ExprResult_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_creative_object", "_L_2fFortnite_2ecom_2fGame_2fpositional_N_RGetTransform");

	Params::UDevices_creative_object__L_2fFortnite_2ecom_2fGame_2fpositional_N_RGetTransform_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._Callee_0 = _Callee_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._ExprResult_3 = _ExprResult_3;
	Parms._Callee_4 = _Callee_4;
	Parms._ExprResult_5 = _ExprResult_5;
	Parms._ExprResult_6 = _ExprResult_6;
	Parms._ExprResult_7 = _ExprResult_7;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseDevices.Devices_creative_object.$InitInstance
// (None)
// Parameters:

void UDevices_creative_object::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_creative_object", "$InitInstance");

	Params::UDevices_creative_object__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_creative_object.$Block
// (None)
// Parameters:

void UDevices_creative_object::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_creative_object", "$Block");

	Params::UDevices_creative_object__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_creative_object.$InitCDO
// (None)
// Parameters:

void UDevices_creative_object::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_creative_object", "$InitCDO");

	Params::UDevices_creative_object__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseDevices.Devices_creative_device_base
// (None)

class UClass* UDevices_creative_device_base::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Devices_creative_device_base");

	return Clss;
}


// Devices_creative_device_base VerseDevices.Default__Devices_creative_device_base
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDevices_creative_device_base* UDevices_creative_device_base::GetDefaultObj()
{
	static class UDevices_creative_device_base* Default = nullptr;

	if (!Default)
		Default = static_cast<UDevices_creative_device_base*>(UDevices_creative_device_base::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseDevices.Devices_creative_device_base._L_2fFortnite_2ecom_2fDevices_2fcreative__device__base_N_RShow__Internal
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UDevices_creative_device_base::_L_2fFortnite_2ecom_2fDevices_2fcreative__device__base_N_RShow__Internal(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_creative_device_base", "_L_2fFortnite_2ecom_2fDevices_2fcreative__device__base_N_RShow__Internal");

	Params::UDevices_creative_device_base__L_2fFortnite_2ecom_2fDevices_2fcreative__device__base_N_RShow__Internal_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseDevices.Devices_creative_device_base._L_2fFortnite_2ecom_2fDevices_2fcreative__device__base_N_RHide__Internal
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UDevices_creative_device_base::_L_2fFortnite_2ecom_2fDevices_2fcreative__device__base_N_RHide__Internal(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_creative_device_base", "_L_2fFortnite_2ecom_2fDevices_2fcreative__device__base_N_RHide__Internal");

	Params::UDevices_creative_device_base__L_2fFortnite_2ecom_2fDevices_2fcreative__device__base_N_RHide__Internal_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseDevices.Devices_creative_device_base.$InitInstance
// (None)
// Parameters:

void UDevices_creative_device_base::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_creative_device_base", "$InitInstance");

	Params::UDevices_creative_device_base__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_creative_device_base.$Block
// (None)
// Parameters:

void UDevices_creative_device_base::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_creative_device_base", "$Block");

	Params::UDevices_creative_device_base__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_creative_device_base.$InitCDO
// (None)
// Parameters:

void UDevices_creative_device_base::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_creative_device_base", "$InitCDO");

	Params::UDevices_creative_device_base__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseDevices.Devices_creative_object_interface
// (None)

class UClass* UDevices_creative_object_interface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Devices_creative_object_interface");

	return Clss;
}


// Devices_creative_object_interface VerseDevices.Default__Devices_creative_object_interface
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDevices_creative_object_interface* UDevices_creative_object_interface::GetDefaultObj()
{
	static class UDevices_creative_object_interface* Default = nullptr;

	if (!Default)
		Default = static_cast<UDevices_creative_object_interface*>(UDevices_creative_object_interface::StaticClass()->DefaultObject);

	return Default;
}


// VerseClass VerseDevices.Devices_creative_prop
// (None)

class UClass* UDevices_creative_prop::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Devices_creative_prop");

	return Clss;
}


// Devices_creative_prop VerseDevices.Default__Devices_creative_prop
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDevices_creative_prop* UDevices_creative_prop::GetDefaultObj()
{
	static class UDevices_creative_prop* Default = nullptr;

	if (!Default)
		Default = static_cast<UDevices_creative_prop*>(UDevices_creative_prop::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseDevices.Devices_creative_prop._L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Ntransform_R
// (Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FSpatialMath_transform      __verse_0xB2CDDD72_Argument                                      (Parm, NoDestructor)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_0                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_1                                                        (HasGetValueTypeHash)
// struct FTuple_Lcreative__prop_Mtuple_L_R_Mtransform_R_ExprResult_2                                                    (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_3                                                    (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_4                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_5                                                        (HasGetValueTypeHash)
// struct FTuple_Lcreative__prop_Mtuple_L_R_Mtransform_R_ExprResult_6                                                    (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_7                                                    (HasGetValueTypeHash)

FOptionalProperty_ UDevices_creative_prop::_L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Ntransform_R(const struct FSpatialMath_transform& __verse_0xB2CDDD72_Argument, FOptionalProperty_ _ExprResultStack_0, FVerseFunctionProperty_ _Callee_1, const struct FTuple_Lcreative__prop_Mtuple_L_R_Mtransform_R& _ExprResult_2, const struct FTuple_L_R& _ExprResult_3, FOptionalProperty_ _ExprResultStack_4, FVerseFunctionProperty_ _Callee_5, const struct FTuple_Lcreative__prop_Mtuple_L_R_Mtransform_R& _ExprResult_6, const struct FTuple_L_R& _ExprResult_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_creative_prop", "_L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Ntransform_R");

	Params::UDevices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Ntransform_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._ExprResultStack_0 = _ExprResultStack_0;
	Parms._Callee_1 = _Callee_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._ExprResult_3 = _ExprResult_3;
	Parms._ExprResultStack_4 = _ExprResultStack_4;
	Parms._Callee_5 = _Callee_5;
	Parms._ExprResult_6 = _ExprResult_6;
	Parms._ExprResult_7 = _ExprResult_7;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseDevices.Devices_creative_prop._L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R
// (Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_Lvector3_Mrotation_R __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_0                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_1                                                        (HasGetValueTypeHash)
// struct FTuple_Lcreative__prop_Mtuple_L_R_Mtuple_Lvector3_Mrotation_R_R_ExprResult_2                                                    (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_3                                                    (HasGetValueTypeHash)
// struct FTuple_Lvector3_Mrotation_R _ExprResult_4                                                    (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_5                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_6                                                        (HasGetValueTypeHash)
// struct FTuple_Lcreative__prop_Mtuple_L_R_Mtuple_Lvector3_Mrotation_R_R_ExprResult_7                                                    (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_8                                                    (HasGetValueTypeHash)
// struct FTuple_Lvector3_Mrotation_R _ExprResult_9                                                    (HasGetValueTypeHash)

FOptionalProperty_ UDevices_creative_prop::_L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R(const struct FTuple_Lvector3_Mrotation_R& __verse_0xB2CDDD72_Argument, FOptionalProperty_ _ExprResultStack_0, FVerseFunctionProperty_ _Callee_1, const struct FTuple_Lcreative__prop_Mtuple_L_R_Mtuple_Lvector3_Mrotation_R_R& _ExprResult_2, const struct FTuple_L_R& _ExprResult_3, const struct FTuple_Lvector3_Mrotation_R& _ExprResult_4, FOptionalProperty_ _ExprResultStack_5, FVerseFunctionProperty_ _Callee_6, const struct FTuple_Lcreative__prop_Mtuple_L_R_Mtuple_Lvector3_Mrotation_R_R& _ExprResult_7, const struct FTuple_L_R& _ExprResult_8, const struct FTuple_Lvector3_Mrotation_R& _ExprResult_9)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_creative_prop", "_L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R");

	Params::UDevices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RTeleportTo_L_Nvector3_M_Nrotation_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._ExprResultStack_0 = _ExprResultStack_0;
	Parms._Callee_1 = _Callee_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._ExprResult_3 = _ExprResult_3;
	Parms._ExprResult_4 = _ExprResult_4;
	Parms._ExprResultStack_5 = _ExprResultStack_5;
	Parms._Callee_6 = _Callee_6;
	Parms._ExprResult_7 = _ExprResult_7;
	Parms._ExprResult_8 = _ExprResult_8;
	Parms._ExprResult_9 = _ExprResult_9;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseDevices.Devices_creative_prop._L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RShow
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UDevices_creative_prop::_L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RShow(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_creative_prop", "_L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RShow");

	Params::UDevices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RShow_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseDevices.Devices_creative_prop._L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RSetMesh_L_Nmesh_R
// (Native, Public, BlueprintCallable)
// Parameters:
// class UAssets_mesh*                __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

void UDevices_creative_prop::_L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RSetMesh_L_Nmesh_R(class UAssets_mesh* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_creative_prop", "_L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RSetMesh_L_Nmesh_R");

	Params::UDevices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RSetMesh_L_Nmesh_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseDevices.Devices_creative_prop._L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RSetMaterialAtIndex_L_Nmaterial_M_Nint_R
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FTuple_Lmaterial_Mint_R     __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UDevices_creative_prop::_L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RSetMaterialAtIndex_L_Nmaterial_M_Nint_R(const struct FTuple_Lmaterial_Mint_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_creative_prop", "_L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RSetMaterialAtIndex_L_Nmaterial_M_Nint_R");

	Params::UDevices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RSetMaterialAtIndex_L_Nmaterial_M_Nint_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseDevices.Devices_creative_prop._L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RSetMaterial_L_Nmaterial_R
// (Native, Public, BlueprintCallable)
// Parameters:
// class UAssets_material*            __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

void UDevices_creative_prop::_L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RSetMaterial_L_Nmaterial_R(class UAssets_material* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_creative_prop", "_L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RSetMaterial_L_Nmaterial_R");

	Params::UDevices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RSetMaterial_L_Nmaterial_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseDevices.Devices_creative_prop.MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_Lvector3_Mrotation_Mfloat_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UDevices_creative_prop::MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_Lvector3_Mrotation_Mfloat_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_creative_prop", "MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R");

	Params::UDevices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseDevices.Devices_creative_prop.MoveTo_L_Ntransform_M_Nfloat_R
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_Ltransform_Mfloat_R  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UDevices_creative_prop::MoveTo_L_Ntransform_M_Nfloat_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_Ltransform_Mfloat_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_creative_prop", "MoveTo_L_Ntransform_M_Nfloat_R");

	Params::UDevices_creative_prop_MoveTo_L_Ntransform_M_Nfloat_R_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseDevices.Devices_creative_prop._L_2fVerse_2eorg_2fVerse_2finvalidatable_N_RIsValid
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionalProperty_ UDevices_creative_prop::_L_2fVerse_2eorg_2fVerse_2finvalidatable_N_RIsValid(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_creative_prop", "_L_2fVerse_2eorg_2fVerse_2finvalidatable_N_RIsValid");

	Params::UDevices_creative_prop__L_2fVerse_2eorg_2fVerse_2finvalidatable_N_RIsValid_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseDevices.Devices_creative_prop._L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RIsHidden
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// uint8                              RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

uint8 UDevices_creative_prop::_L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RIsHidden(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_creative_prop", "_L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RIsHidden");

	Params::UDevices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RIsHidden_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseDevices.Devices_creative_prop._L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RHide
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UDevices_creative_prop::_L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RHide(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_creative_prop", "_L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RHide");

	Params::UDevices_creative_prop__L_2fFortnite_2ecom_2fDevices_2fcreative__prop_N_RHide_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseDevices.Devices_creative_prop._L_2fVerse_2eorg_2fVerse_2fdisposable_N_RDispose
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UDevices_creative_prop::_L_2fVerse_2eorg_2fVerse_2fdisposable_N_RDispose(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_creative_prop", "_L_2fVerse_2eorg_2fVerse_2fdisposable_N_RDispose");

	Params::UDevices_creative_prop__L_2fVerse_2eorg_2fVerse_2fdisposable_N_RDispose_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseDevices.Devices_creative_prop.$InitInstance
// (None)
// Parameters:

void UDevices_creative_prop::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_creative_prop", "$InitInstance");

	Params::UDevices_creative_prop__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_creative_prop.$Block
// (None)
// Parameters:

void UDevices_creative_prop::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_creative_prop", "$Block");

	Params::UDevices_creative_prop__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_creative_prop.$InitCDO
// (None)
// Parameters:

void UDevices_creative_prop::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_creative_prop", "$InitCDO");

	Params::UDevices_creative_prop__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseDevices.Devices_creative_prop_asset
// (None)

class UClass* UDevices_creative_prop_asset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Devices_creative_prop_asset");

	return Clss;
}


// Devices_creative_prop_asset VerseDevices.Default__Devices_creative_prop_asset
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDevices_creative_prop_asset* UDevices_creative_prop_asset::GetDefaultObj()
{
	static class UDevices_creative_prop_asset* Default = nullptr;

	if (!Default)
		Default = static_cast<UDevices_creative_prop_asset*>(UDevices_creative_prop_asset::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseDevices.Devices_creative_prop_asset.$InitInstance
// (None)
// Parameters:

void UDevices_creative_prop_asset::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_creative_prop_asset", "$InitInstance");

	Params::UDevices_creative_prop_asset__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_creative_prop_asset.$Block
// (None)
// Parameters:

void UDevices_creative_prop_asset::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_creative_prop_asset", "$Block");

	Params::UDevices_creative_prop_asset__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_creative_prop_asset.$InitCDO
// (None)
// Parameters:

void UDevices_creative_prop_asset::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_creative_prop_asset", "$InitCDO");

	Params::UDevices_creative_prop_asset__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseDevices.Devices_creative_prop_debug_log
// (None)

class UClass* UDevices_creative_prop_debug_log::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Devices_creative_prop_debug_log");

	return Clss;
}


// Devices_creative_prop_debug_log VerseDevices.Default__Devices_creative_prop_debug_log
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDevices_creative_prop_debug_log* UDevices_creative_prop_debug_log::GetDefaultObj()
{
	static class UDevices_creative_prop_debug_log* Default = nullptr;

	if (!Default)
		Default = static_cast<UDevices_creative_prop_debug_log*>(UDevices_creative_prop_debug_log::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseDevices.Devices_creative_prop_debug_log.$InitInstance
// (None)
// Parameters:

void UDevices_creative_prop_debug_log::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_creative_prop_debug_log", "$InitInstance");

	Params::UDevices_creative_prop_debug_log__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_creative_prop_debug_log.$Block
// (None)
// Parameters:

void UDevices_creative_prop_debug_log::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_creative_prop_debug_log", "$Block");

	Params::UDevices_creative_prop_debug_log__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_creative_prop_debug_log.$InitCDO
// (None)
// Parameters:

void UDevices_creative_prop_debug_log::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_creative_prop_debug_log", "$InitCDO");

	Params::UDevices_creative_prop_debug_log__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseDevices.Devices_CreativeAnimation
// (None)

class UClass* UDevices_CreativeAnimation::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Devices_CreativeAnimation");

	return Clss;
}


// Devices_CreativeAnimation VerseDevices.Default__Devices_CreativeAnimation
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDevices_CreativeAnimation* UDevices_CreativeAnimation::GetDefaultObj()
{
	static class UDevices_CreativeAnimation* Default = nullptr;

	if (!Default)
		Default = static_cast<UDevices_CreativeAnimation*>(UDevices_CreativeAnimation::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseDevices.Devices_CreativeAnimation._L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_N_Roperator_U_2eGetAnimationController_U_L_Ncreative__prop_M_Ntuple_L_R_M_Ntuple_L_R_R
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_Lcreative__prop_Mtuple_L_R_Mtuple_L_R_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// enum class EVerseFalse             _ExprResult_0                                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_L_Qanimation__controller_Mget__animation__controller__result_R__verse_0x95D09D0E_Result_1                                      (HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_1                                                        (HasGetValueTypeHash)
// class UDiagnostics_log*            __verse_0x63A8D5FA_DebugLog_1                                    (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint64                             _InstancingGraph_2                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             InvokeResultDummy_3                                              (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_4                                               (ZeroConstructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_5                                                    (HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_6                                                    (HasGetValueTypeHash)
// class UDiagnostics_log*            __verse_0x00000000__3                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_7                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_8                                                        (HasGetValueTypeHash)
// struct FTuple_L_Kchar_M_QLevel_Nlog__level_R_ExprResult_9                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_10                                                   (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_11                                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             InvokeResultDummy_12                                             (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_13                                              (ZeroConstructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_14                                                   (HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_15                                                   (HasGetValueTypeHash)
// class UDiagnostics_log*            __verse_0x00000000__5                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_16                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_17                                                       (HasGetValueTypeHash)
// struct FTuple_L_Kchar_M_QLevel_Nlog__level_R_ExprResult_18                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_19                                                   (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_20                                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_21                                              (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// enum class EVerseFalse             _ExprResult_22                                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_L_Qanimation__controller_Mget__animation__controller__result_R__verse_0x95D09D0E_Result_6                                      (HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_23                                                       (HasGetValueTypeHash)
// class UDiagnostics_log*            __verse_0x63A8D5FA_DebugLog_6                                    (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint64                             _InstancingGraph_24                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             InvokeResultDummy_25                                             (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_26                                              (ZeroConstructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_27                                                   (HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_28                                                   (HasGetValueTypeHash)
// class UDiagnostics_log*            __verse_0x00000000__8                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_29                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_30                                                       (HasGetValueTypeHash)
// struct FTuple_L_Kchar_M_QLevel_Nlog__level_R_ExprResult_31                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_32                                                   (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_33                                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             InvokeResultDummy_34                                             (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_35                                              (ZeroConstructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_36                                                   (HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_37                                                   (HasGetValueTypeHash)
// class UDiagnostics_log*            __verse_0x00000000__10                                           (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_38                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_39                                                       (HasGetValueTypeHash)
// struct FTuple_L_Kchar_M_QLevel_Nlog__level_R_ExprResult_40                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_41                                                   (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_42                                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_43                                              (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

FOptionalProperty_ UDevices_CreativeAnimation::_L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_N_Roperator_U_2eGetAnimationController_U_L_Ncreative__prop_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lcreative__prop_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument, enum class EVerseFalse _ExprResult_0, const struct FTuple_L_Qanimation__controller_Mget__animation__controller__result_R& __verse_0x95D09D0E_Result_1, FVerseFunctionProperty_ _Callee_1, class UDiagnostics_log* __verse_0x63A8D5FA_DebugLog_1, uint64 _InstancingGraph_2, FVerseDynamicProperty_ InvokeResultDummy_3, FOptionalProperty_ _ExprResultStack_4, FVerseDynamicProperty_ _ExprResult_5, FVerseDynamicProperty_ _ExprResult_6, class UDiagnostics_log* __verse_0x00000000__3, enum class EVerseTrue _InvokeSureResultDummy_7, FVerseFunctionProperty_ _Callee_8, const struct FTuple_L_Kchar_M_QLevel_Nlog__level_R& _ExprResult_9, FVerseStringProperty_ _ExprResult_10, FOptionalProperty_ _ExprResult_11, FVerseDynamicProperty_ InvokeResultDummy_12, FOptionalProperty_ _ExprResultStack_13, FVerseDynamicProperty_ _ExprResult_14, FVerseDynamicProperty_ _ExprResult_15, class UDiagnostics_log* __verse_0x00000000__5, enum class EVerseTrue _InvokeSureResultDummy_16, FVerseFunctionProperty_ _Callee_17, const struct FTuple_L_Kchar_M_QLevel_Nlog__level_R& _ExprResult_18, FVerseStringProperty_ _ExprResult_19, FOptionalProperty_ _ExprResult_20, FOptionalProperty_ _ExprResultStack_21, enum class EVerseFalse _ExprResult_22, const struct FTuple_L_Qanimation__controller_Mget__animation__controller__result_R& __verse_0x95D09D0E_Result_6, FVerseFunctionProperty_ _Callee_23, class UDiagnostics_log* __verse_0x63A8D5FA_DebugLog_6, uint64 _InstancingGraph_24, FVerseDynamicProperty_ InvokeResultDummy_25, FOptionalProperty_ _ExprResultStack_26, FVerseDynamicProperty_ _ExprResult_27, FVerseDynamicProperty_ _ExprResult_28, class UDiagnostics_log* __verse_0x00000000__8, enum class EVerseTrue _InvokeSureResultDummy_29, FVerseFunctionProperty_ _Callee_30, const struct FTuple_L_Kchar_M_QLevel_Nlog__level_R& _ExprResult_31, FVerseStringProperty_ _ExprResult_32, FOptionalProperty_ _ExprResult_33, FVerseDynamicProperty_ InvokeResultDummy_34, FOptionalProperty_ _ExprResultStack_35, FVerseDynamicProperty_ _ExprResult_36, FVerseDynamicProperty_ _ExprResult_37, class UDiagnostics_log* __verse_0x00000000__10, enum class EVerseTrue _InvokeSureResultDummy_38, FVerseFunctionProperty_ _Callee_39, const struct FTuple_L_Kchar_M_QLevel_Nlog__level_R& _ExprResult_40, FVerseStringProperty_ _ExprResult_41, FOptionalProperty_ _ExprResult_42, FOptionalProperty_ _ExprResultStack_43)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_CreativeAnimation", "_L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_N_Roperator_U_2eGetAnimationController_U_L_Ncreative__prop_M_Ntuple_L_R_M_Ntuple_L_R_R");

	Params::UDevices_CreativeAnimation__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_N_Roperator_U_2eGetAnimationController_U_L_Ncreative__prop_M_Ntuple_L_R_M_Ntuple_L_R_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._ExprResult_0 = _ExprResult_0;
	Parms.__verse_0x95D09D0E_Result_1 = __verse_0x95D09D0E_Result_1;
	Parms._Callee_1 = _Callee_1;
	Parms.__verse_0x63A8D5FA_DebugLog_1 = __verse_0x63A8D5FA_DebugLog_1;
	Parms._InstancingGraph_2 = _InstancingGraph_2;
	Parms.InvokeResultDummy_3 = InvokeResultDummy_3;
	Parms._ExprResultStack_4 = _ExprResultStack_4;
	Parms._ExprResult_5 = _ExprResult_5;
	Parms._ExprResult_6 = _ExprResult_6;
	Parms.__verse_0x00000000__3 = __verse_0x00000000__3;
	Parms._InvokeSureResultDummy_7 = _InvokeSureResultDummy_7;
	Parms._Callee_8 = _Callee_8;
	Parms._ExprResult_9 = _ExprResult_9;
	Parms._ExprResult_10 = _ExprResult_10;
	Parms._ExprResult_11 = _ExprResult_11;
	Parms.InvokeResultDummy_12 = InvokeResultDummy_12;
	Parms._ExprResultStack_13 = _ExprResultStack_13;
	Parms._ExprResult_14 = _ExprResult_14;
	Parms._ExprResult_15 = _ExprResult_15;
	Parms.__verse_0x00000000__5 = __verse_0x00000000__5;
	Parms._InvokeSureResultDummy_16 = _InvokeSureResultDummy_16;
	Parms._Callee_17 = _Callee_17;
	Parms._ExprResult_18 = _ExprResult_18;
	Parms._ExprResult_19 = _ExprResult_19;
	Parms._ExprResult_20 = _ExprResult_20;
	Parms._ExprResultStack_21 = _ExprResultStack_21;
	Parms._ExprResult_22 = _ExprResult_22;
	Parms.__verse_0x95D09D0E_Result_6 = __verse_0x95D09D0E_Result_6;
	Parms._Callee_23 = _Callee_23;
	Parms.__verse_0x63A8D5FA_DebugLog_6 = __verse_0x63A8D5FA_DebugLog_6;
	Parms._InstancingGraph_24 = _InstancingGraph_24;
	Parms.InvokeResultDummy_25 = InvokeResultDummy_25;
	Parms._ExprResultStack_26 = _ExprResultStack_26;
	Parms._ExprResult_27 = _ExprResult_27;
	Parms._ExprResult_28 = _ExprResult_28;
	Parms.__verse_0x00000000__8 = __verse_0x00000000__8;
	Parms._InvokeSureResultDummy_29 = _InvokeSureResultDummy_29;
	Parms._Callee_30 = _Callee_30;
	Parms._ExprResult_31 = _ExprResult_31;
	Parms._ExprResult_32 = _ExprResult_32;
	Parms._ExprResult_33 = _ExprResult_33;
	Parms.InvokeResultDummy_34 = InvokeResultDummy_34;
	Parms._ExprResultStack_35 = _ExprResultStack_35;
	Parms._ExprResult_36 = _ExprResult_36;
	Parms._ExprResult_37 = _ExprResult_37;
	Parms.__verse_0x00000000__10 = __verse_0x00000000__10;
	Parms._InvokeSureResultDummy_38 = _InvokeSureResultDummy_38;
	Parms._Callee_39 = _Callee_39;
	Parms._ExprResult_40 = _ExprResult_40;
	Parms._ExprResult_41 = _ExprResult_41;
	Parms._ExprResult_42 = _ExprResult_42;
	Parms._ExprResultStack_43 = _ExprResultStack_43;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseDevices.Devices_CreativeAnimation._L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_N_RGetAnimationController_L_Ncreative__movable__object__base_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UVerseMovableObjectBase*     __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// struct FTuple_L_Qanimation__controller_Mget__animation__controller__result_RRetVal                                                           (Parm, OutParm, ReturnParm, HasGetValueTypeHash)

struct FTuple_L_Qanimation__controller_Mget__animation__controller__result_R UDevices_CreativeAnimation::_L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_N_RGetAnimationController_L_Ncreative__movable__object__base_R(class UVerseMovableObjectBase* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_CreativeAnimation", "_L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_N_RGetAnimationController_L_Ncreative__movable__object__base_R");

	Params::UDevices_CreativeAnimation__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_N_RGetAnimationController_L_Ncreative__movable__object__base_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseDevices.Devices_CreativeAnimation.Devices_CreativeAnimation_keyframe_delta$OverrideFactory
// (Static, HasOutParams, HasDefaults)
// Parameters:
// struct FDevices_CreativeAnimation_keyframe_deltaRetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor)
// TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap                              (ConstParm, Parm, ContainsInstancedReference)
// FVerseStringProperty_              _ExprResultStack_0                                               (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_1                                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FSpatialMath_vector3        _ExprResult_2                                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_3                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_4                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_5                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_6                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_7                                               (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_8                                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_9                                               (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_10                                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FSpatialMath_vector3        _ExprResult_11                                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_12                                              (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_13                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_14                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_15                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_16                                              (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_17                                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

struct FDevices_CreativeAnimation_keyframe_delta UDevices_CreativeAnimation::Devices_CreativeAnimation_keyframe_delta_OverrideFactory(TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap, FVerseStringProperty_ _ExprResultStack_0, FOptionalProperty_ _ExprResult_1, const struct FSpatialMath_vector3& _ExprResult_2, TMap<FVerseStringProperty_, uint8> _ExprResultStack_3, FVerseStringProperty_ _ExprResult_4, FVerseStringProperty_ _ExprResult_5, FVerseStringProperty_ _ExprResult_6, FVerseStringProperty_ _ExprResultStack_7, FOptionalProperty_ _ExprResult_8, FVerseStringProperty_ _ExprResultStack_9, FOptionalProperty_ _ExprResult_10, const struct FSpatialMath_vector3& _ExprResult_11, TMap<FVerseStringProperty_, uint8> _ExprResultStack_12, FVerseStringProperty_ _ExprResult_13, FVerseStringProperty_ _ExprResult_14, FVerseStringProperty_ _ExprResult_15, FVerseStringProperty_ _ExprResultStack_16, FOptionalProperty_ _ExprResult_17)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_CreativeAnimation", "Devices_CreativeAnimation_keyframe_delta$OverrideFactory");

	Params::UDevices_CreativeAnimation_Devices_CreativeAnimation_keyframe_delta_OverrideFactory_Params Parms{};

	Parms.__verse_0xFB48ED96__InitOverrideMap = __verse_0xFB48ED96__InitOverrideMap;
	Parms._ExprResultStack_0 = _ExprResultStack_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._ExprResultStack_3 = _ExprResultStack_3;
	Parms._ExprResult_4 = _ExprResult_4;
	Parms._ExprResult_5 = _ExprResult_5;
	Parms._ExprResult_6 = _ExprResult_6;
	Parms._ExprResultStack_7 = _ExprResultStack_7;
	Parms._ExprResult_8 = _ExprResult_8;
	Parms._ExprResultStack_9 = _ExprResultStack_9;
	Parms._ExprResult_10 = _ExprResult_10;
	Parms._ExprResult_11 = _ExprResult_11;
	Parms._ExprResultStack_12 = _ExprResultStack_12;
	Parms._ExprResult_13 = _ExprResult_13;
	Parms._ExprResult_14 = _ExprResult_14;
	Parms._ExprResult_15 = _ExprResult_15;
	Parms._ExprResultStack_16 = _ExprResultStack_16;
	Parms._ExprResult_17 = _ExprResult_17;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseDevices.Devices_CreativeAnimation.Devices_CreativeAnimation_keyframe_delta$Factory
// (Static, HasOutParams, HasDefaults)
// Parameters:
// struct FDevices_CreativeAnimation_keyframe_deltaRetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor)
// struct FSpatialMath_vector3        _ExprResult_0                                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_1                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_2                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_3                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_4                                                    (HasGetValueTypeHash)
// struct FSpatialMath_vector3        _ExprResult_5                                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_6                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_7                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_8                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_9                                                    (HasGetValueTypeHash)

struct FDevices_CreativeAnimation_keyframe_delta UDevices_CreativeAnimation::Devices_CreativeAnimation_keyframe_delta_Factory(const struct FSpatialMath_vector3& _ExprResult_0, TMap<FVerseStringProperty_, uint8> _ExprResultStack_1, FVerseStringProperty_ _ExprResult_2, FVerseStringProperty_ _ExprResult_3, FVerseStringProperty_ _ExprResult_4, const struct FSpatialMath_vector3& _ExprResult_5, TMap<FVerseStringProperty_, uint8> _ExprResultStack_6, FVerseStringProperty_ _ExprResult_7, FVerseStringProperty_ _ExprResult_8, FVerseStringProperty_ _ExprResult_9)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_CreativeAnimation", "Devices_CreativeAnimation_keyframe_delta$Factory");

	Params::UDevices_CreativeAnimation_Devices_CreativeAnimation_keyframe_delta_Factory_Params Parms{};

	Parms._ExprResult_0 = _ExprResult_0;
	Parms._ExprResultStack_1 = _ExprResultStack_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._ExprResult_3 = _ExprResult_3;
	Parms._ExprResult_4 = _ExprResult_4;
	Parms._ExprResult_5 = _ExprResult_5;
	Parms._ExprResultStack_6 = _ExprResultStack_6;
	Parms._ExprResult_7 = _ExprResult_7;
	Parms._ExprResult_8 = _ExprResult_8;
	Parms._ExprResult_9 = _ExprResult_9;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseDevices.Devices_CreativeAnimation.Devices_CreativeAnimation_cubic_bezier_parameters$OverrideFactory
// (Static, HasOutParams, HasDefaults)
// Parameters:
// struct FDevices_CreativeAnimation_cubic_bezier_parametersRetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap                              (ConstParm, Parm, ContainsInstancedReference)
// FVerseStringProperty_              _ExprResultStack_0                                               (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_1                                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_2                                               (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_3                                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_4                                               (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_5                                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_6                                               (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_7                                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_8                                               (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_9                                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_10                                              (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_11                                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_12                                              (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_13                                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_14                                              (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_15                                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

struct FDevices_CreativeAnimation_cubic_bezier_parameters UDevices_CreativeAnimation::Devices_CreativeAnimation_cubic_bezier_parameters_OverrideFactory(TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap, FVerseStringProperty_ _ExprResultStack_0, FOptionalProperty_ _ExprResult_1, FVerseStringProperty_ _ExprResultStack_2, FOptionalProperty_ _ExprResult_3, FVerseStringProperty_ _ExprResultStack_4, FOptionalProperty_ _ExprResult_5, FVerseStringProperty_ _ExprResultStack_6, FOptionalProperty_ _ExprResult_7, FVerseStringProperty_ _ExprResultStack_8, FOptionalProperty_ _ExprResult_9, FVerseStringProperty_ _ExprResultStack_10, FOptionalProperty_ _ExprResult_11, FVerseStringProperty_ _ExprResultStack_12, FOptionalProperty_ _ExprResult_13, FVerseStringProperty_ _ExprResultStack_14, FOptionalProperty_ _ExprResult_15)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_CreativeAnimation", "Devices_CreativeAnimation_cubic_bezier_parameters$OverrideFactory");

	Params::UDevices_CreativeAnimation_Devices_CreativeAnimation_cubic_bezier_parameters_OverrideFactory_Params Parms{};

	Parms.__verse_0xFB48ED96__InitOverrideMap = __verse_0xFB48ED96__InitOverrideMap;
	Parms._ExprResultStack_0 = _ExprResultStack_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._ExprResultStack_2 = _ExprResultStack_2;
	Parms._ExprResult_3 = _ExprResult_3;
	Parms._ExprResultStack_4 = _ExprResultStack_4;
	Parms._ExprResult_5 = _ExprResult_5;
	Parms._ExprResultStack_6 = _ExprResultStack_6;
	Parms._ExprResult_7 = _ExprResult_7;
	Parms._ExprResultStack_8 = _ExprResultStack_8;
	Parms._ExprResult_9 = _ExprResult_9;
	Parms._ExprResultStack_10 = _ExprResultStack_10;
	Parms._ExprResult_11 = _ExprResult_11;
	Parms._ExprResultStack_12 = _ExprResultStack_12;
	Parms._ExprResult_13 = _ExprResult_13;
	Parms._ExprResultStack_14 = _ExprResultStack_14;
	Parms._ExprResult_15 = _ExprResult_15;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseDevices.Devices_CreativeAnimation.Devices_CreativeAnimation_cubic_bezier_parameters$Factory
// (Static, HasOutParams)
// Parameters:
// struct FDevices_CreativeAnimation_cubic_bezier_parametersRetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

struct FDevices_CreativeAnimation_cubic_bezier_parameters UDevices_CreativeAnimation::Devices_CreativeAnimation_cubic_bezier_parameters_Factory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_CreativeAnimation", "Devices_CreativeAnimation_cubic_bezier_parameters$Factory");

	Params::UDevices_CreativeAnimation_Devices_CreativeAnimation_cubic_bezier_parameters_Factory_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseDevices.Devices_CreativeAnimation.$InitCDO
// (None)
// Parameters:

void UDevices_CreativeAnimation::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_CreativeAnimation", "$InitCDO");

	Params::UDevices_CreativeAnimation__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseDevices.Devices_CreativeAnimation_animation_controller
// (None)

class UClass* UDevices_CreativeAnimation_animation_controller::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Devices_CreativeAnimation_animation_controller");

	return Clss;
}


// Devices_CreativeAnimation_animation_controller VerseDevices.Default__Devices_CreativeAnimation_animation_controller
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDevices_CreativeAnimation_animation_controller* UDevices_CreativeAnimation_animation_controller::GetDefaultObj()
{
	static class UDevices_CreativeAnimation_animation_controller* Default = nullptr;

	if (!Default)
		Default = static_cast<UDevices_CreativeAnimation_animation_controller*>(UDevices_CreativeAnimation_animation_controller::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseDevices.Devices_CreativeAnimation_animation_controller._L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RToString_L_Nset__animation__result_R
// (Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// enum class EDevices_CreativeAnimation_set_animation_result__verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              RetVal                                                           (Parm, OutParm, ReturnParm, HasGetValueTypeHash)
// enum class EDevices_CreativeAnimation_set_animation_result__verse_0x00000000__1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             InvokeResultDummy_0                                              (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_1                                               (ZeroConstructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_2                                                    (HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_3                                                    (HasGetValueTypeHash)
// FVerseDynamicProperty_             InvokeResultDummy_4                                              (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_5                                               (ZeroConstructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_6                                                    (HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_7                                                    (HasGetValueTypeHash)
// FVerseDynamicProperty_             InvokeResultDummy_8                                              (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_9                                               (ZeroConstructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_10                                                   (HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_11                                                   (HasGetValueTypeHash)
// FVerseDynamicProperty_             InvokeResultDummy_12                                             (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_13                                              (ZeroConstructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_14                                                   (HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_15                                                   (HasGetValueTypeHash)
// FVerseDynamicProperty_             InvokeResultDummy_16                                             (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_17                                              (ZeroConstructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_18                                                   (HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_19                                                   (HasGetValueTypeHash)
// FVerseDynamicProperty_             InvokeResultDummy_20                                             (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_21                                              (ZeroConstructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_22                                                   (HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_23                                                   (HasGetValueTypeHash)
// FVerseDynamicProperty_             InvokeResultDummy_24                                             (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_25                                              (ZeroConstructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_26                                                   (HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_27                                                   (HasGetValueTypeHash)
// FVerseDynamicProperty_             InvokeResultDummy_28                                             (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_29                                              (ZeroConstructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_30                                                   (HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_31                                                   (HasGetValueTypeHash)
// enum class EDevices_CreativeAnimation_set_animation_result__verse_0x00000000__11                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             InvokeResultDummy_32                                             (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_33                                              (ZeroConstructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_34                                                   (HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_35                                                   (HasGetValueTypeHash)
// FVerseDynamicProperty_             InvokeResultDummy_36                                             (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_37                                              (ZeroConstructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_38                                                   (HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_39                                                   (HasGetValueTypeHash)
// FVerseDynamicProperty_             InvokeResultDummy_40                                             (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_41                                              (ZeroConstructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_42                                                   (HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_43                                                   (HasGetValueTypeHash)
// FVerseDynamicProperty_             InvokeResultDummy_44                                             (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_45                                              (ZeroConstructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_46                                                   (HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_47                                                   (HasGetValueTypeHash)
// FVerseDynamicProperty_             InvokeResultDummy_48                                             (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_49                                              (ZeroConstructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_50                                                   (HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_51                                                   (HasGetValueTypeHash)
// FVerseDynamicProperty_             InvokeResultDummy_52                                             (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_53                                              (ZeroConstructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_54                                                   (HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_55                                                   (HasGetValueTypeHash)
// FVerseDynamicProperty_             InvokeResultDummy_56                                             (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_57                                              (ZeroConstructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_58                                                   (HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_59                                                   (HasGetValueTypeHash)
// FVerseDynamicProperty_             InvokeResultDummy_60                                             (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_61                                              (ZeroConstructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_62                                                   (HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_63                                                   (HasGetValueTypeHash)

FVerseStringProperty_ UDevices_CreativeAnimation_animation_controller::_L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RToString_L_Nset__animation__result_R(enum class EDevices_CreativeAnimation_set_animation_result __verse_0xB2CDDD72_Argument, enum class EDevices_CreativeAnimation_set_animation_result __verse_0x00000000__1, FVerseDynamicProperty_ InvokeResultDummy_0, FOptionalProperty_ _ExprResultStack_1, FVerseDynamicProperty_ _ExprResult_2, FVerseDynamicProperty_ _ExprResult_3, FVerseDynamicProperty_ InvokeResultDummy_4, FOptionalProperty_ _ExprResultStack_5, FVerseDynamicProperty_ _ExprResult_6, FVerseDynamicProperty_ _ExprResult_7, FVerseDynamicProperty_ InvokeResultDummy_8, FOptionalProperty_ _ExprResultStack_9, FVerseDynamicProperty_ _ExprResult_10, FVerseDynamicProperty_ _ExprResult_11, FVerseDynamicProperty_ InvokeResultDummy_12, FOptionalProperty_ _ExprResultStack_13, FVerseDynamicProperty_ _ExprResult_14, FVerseDynamicProperty_ _ExprResult_15, FVerseDynamicProperty_ InvokeResultDummy_16, FOptionalProperty_ _ExprResultStack_17, FVerseDynamicProperty_ _ExprResult_18, FVerseDynamicProperty_ _ExprResult_19, FVerseDynamicProperty_ InvokeResultDummy_20, FOptionalProperty_ _ExprResultStack_21, FVerseDynamicProperty_ _ExprResult_22, FVerseDynamicProperty_ _ExprResult_23, FVerseDynamicProperty_ InvokeResultDummy_24, FOptionalProperty_ _ExprResultStack_25, FVerseDynamicProperty_ _ExprResult_26, FVerseDynamicProperty_ _ExprResult_27, FVerseDynamicProperty_ InvokeResultDummy_28, FOptionalProperty_ _ExprResultStack_29, FVerseDynamicProperty_ _ExprResult_30, FVerseDynamicProperty_ _ExprResult_31, enum class EDevices_CreativeAnimation_set_animation_result __verse_0x00000000__11, FVerseDynamicProperty_ InvokeResultDummy_32, FOptionalProperty_ _ExprResultStack_33, FVerseDynamicProperty_ _ExprResult_34, FVerseDynamicProperty_ _ExprResult_35, FVerseDynamicProperty_ InvokeResultDummy_36, FOptionalProperty_ _ExprResultStack_37, FVerseDynamicProperty_ _ExprResult_38, FVerseDynamicProperty_ _ExprResult_39, FVerseDynamicProperty_ InvokeResultDummy_40, FOptionalProperty_ _ExprResultStack_41, FVerseDynamicProperty_ _ExprResult_42, FVerseDynamicProperty_ _ExprResult_43, FVerseDynamicProperty_ InvokeResultDummy_44, FOptionalProperty_ _ExprResultStack_45, FVerseDynamicProperty_ _ExprResult_46, FVerseDynamicProperty_ _ExprResult_47, FVerseDynamicProperty_ InvokeResultDummy_48, FOptionalProperty_ _ExprResultStack_49, FVerseDynamicProperty_ _ExprResult_50, FVerseDynamicProperty_ _ExprResult_51, FVerseDynamicProperty_ InvokeResultDummy_52, FOptionalProperty_ _ExprResultStack_53, FVerseDynamicProperty_ _ExprResult_54, FVerseDynamicProperty_ _ExprResult_55, FVerseDynamicProperty_ InvokeResultDummy_56, FOptionalProperty_ _ExprResultStack_57, FVerseDynamicProperty_ _ExprResult_58, FVerseDynamicProperty_ _ExprResult_59, FVerseDynamicProperty_ InvokeResultDummy_60, FOptionalProperty_ _ExprResultStack_61, FVerseDynamicProperty_ _ExprResult_62, FVerseDynamicProperty_ _ExprResult_63)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_CreativeAnimation_animation_controller", "_L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RToString_L_Nset__animation__result_R");

	Params::UDevices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RToString_L_Nset__animation__result_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms.__verse_0x00000000__1 = __verse_0x00000000__1;
	Parms.InvokeResultDummy_0 = InvokeResultDummy_0;
	Parms._ExprResultStack_1 = _ExprResultStack_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._ExprResult_3 = _ExprResult_3;
	Parms.InvokeResultDummy_4 = InvokeResultDummy_4;
	Parms._ExprResultStack_5 = _ExprResultStack_5;
	Parms._ExprResult_6 = _ExprResult_6;
	Parms._ExprResult_7 = _ExprResult_7;
	Parms.InvokeResultDummy_8 = InvokeResultDummy_8;
	Parms._ExprResultStack_9 = _ExprResultStack_9;
	Parms._ExprResult_10 = _ExprResult_10;
	Parms._ExprResult_11 = _ExprResult_11;
	Parms.InvokeResultDummy_12 = InvokeResultDummy_12;
	Parms._ExprResultStack_13 = _ExprResultStack_13;
	Parms._ExprResult_14 = _ExprResult_14;
	Parms._ExprResult_15 = _ExprResult_15;
	Parms.InvokeResultDummy_16 = InvokeResultDummy_16;
	Parms._ExprResultStack_17 = _ExprResultStack_17;
	Parms._ExprResult_18 = _ExprResult_18;
	Parms._ExprResult_19 = _ExprResult_19;
	Parms.InvokeResultDummy_20 = InvokeResultDummy_20;
	Parms._ExprResultStack_21 = _ExprResultStack_21;
	Parms._ExprResult_22 = _ExprResult_22;
	Parms._ExprResult_23 = _ExprResult_23;
	Parms.InvokeResultDummy_24 = InvokeResultDummy_24;
	Parms._ExprResultStack_25 = _ExprResultStack_25;
	Parms._ExprResult_26 = _ExprResult_26;
	Parms._ExprResult_27 = _ExprResult_27;
	Parms.InvokeResultDummy_28 = InvokeResultDummy_28;
	Parms._ExprResultStack_29 = _ExprResultStack_29;
	Parms._ExprResult_30 = _ExprResult_30;
	Parms._ExprResult_31 = _ExprResult_31;
	Parms.__verse_0x00000000__11 = __verse_0x00000000__11;
	Parms.InvokeResultDummy_32 = InvokeResultDummy_32;
	Parms._ExprResultStack_33 = _ExprResultStack_33;
	Parms._ExprResult_34 = _ExprResult_34;
	Parms._ExprResult_35 = _ExprResult_35;
	Parms.InvokeResultDummy_36 = InvokeResultDummy_36;
	Parms._ExprResultStack_37 = _ExprResultStack_37;
	Parms._ExprResult_38 = _ExprResult_38;
	Parms._ExprResult_39 = _ExprResult_39;
	Parms.InvokeResultDummy_40 = InvokeResultDummy_40;
	Parms._ExprResultStack_41 = _ExprResultStack_41;
	Parms._ExprResult_42 = _ExprResult_42;
	Parms._ExprResult_43 = _ExprResult_43;
	Parms.InvokeResultDummy_44 = InvokeResultDummy_44;
	Parms._ExprResultStack_45 = _ExprResultStack_45;
	Parms._ExprResult_46 = _ExprResult_46;
	Parms._ExprResult_47 = _ExprResult_47;
	Parms.InvokeResultDummy_48 = InvokeResultDummy_48;
	Parms._ExprResultStack_49 = _ExprResultStack_49;
	Parms._ExprResult_50 = _ExprResult_50;
	Parms._ExprResult_51 = _ExprResult_51;
	Parms.InvokeResultDummy_52 = InvokeResultDummy_52;
	Parms._ExprResultStack_53 = _ExprResultStack_53;
	Parms._ExprResult_54 = _ExprResult_54;
	Parms._ExprResult_55 = _ExprResult_55;
	Parms.InvokeResultDummy_56 = InvokeResultDummy_56;
	Parms._ExprResultStack_57 = _ExprResultStack_57;
	Parms._ExprResult_58 = _ExprResult_58;
	Parms._ExprResult_59 = _ExprResult_59;
	Parms.InvokeResultDummy_60 = InvokeResultDummy_60;
	Parms._ExprResultStack_61 = _ExprResultStack_61;
	Parms._ExprResult_62 = _ExprResult_62;
	Parms._ExprResult_63 = _ExprResult_63;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseDevices.Devices_CreativeAnimation_animation_controller._L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RStopInternal
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// enum class EDevices_CreativeAnimation_playstoppause_resultRetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class EDevices_CreativeAnimation_playstoppause_result UDevices_CreativeAnimation_animation_controller::_L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RStopInternal(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_CreativeAnimation_animation_controller", "_L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RStopInternal");

	Params::UDevices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RStopInternal_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseDevices.Devices_CreativeAnimation_animation_controller._L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RStop
// (Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// enum class EDevices_CreativeAnimation_playstoppause_result__verse_0x95D09D0E_Result_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_0                                                        (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_1                                                    (HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_3                                                        (HasGetValueTypeHash)
// struct FTuple_L_Kchar_Mplaystoppause__result_R_ExprResult_4                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_5                                                    (HasGetValueTypeHash)
// enum class EDevices_CreativeAnimation_playstoppause_result__verse_0x95D09D0E_Result_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_6                                                        (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_7                                                    (HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_8                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_9                                                        (HasGetValueTypeHash)
// struct FTuple_L_Kchar_Mplaystoppause__result_R_ExprResult_10                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_11                                                   (HasGetValueTypeHash)

void UDevices_CreativeAnimation_animation_controller::_L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RStop(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, enum class EDevices_CreativeAnimation_playstoppause_result __verse_0x95D09D0E_Result_1, FVerseFunctionProperty_ _Callee_0, const struct FTuple_L_R& _ExprResult_1, enum class EVerseTrue _InvokeSureResultDummy_2, FVerseFunctionProperty_ _Callee_3, const struct FTuple_L_Kchar_Mplaystoppause__result_R& _ExprResult_4, FVerseStringProperty_ _ExprResult_5, enum class EDevices_CreativeAnimation_playstoppause_result __verse_0x95D09D0E_Result_2, FVerseFunctionProperty_ _Callee_6, const struct FTuple_L_R& _ExprResult_7, enum class EVerseTrue _InvokeSureResultDummy_8, FVerseFunctionProperty_ _Callee_9, const struct FTuple_L_Kchar_Mplaystoppause__result_R& _ExprResult_10, FVerseStringProperty_ _ExprResult_11)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_CreativeAnimation_animation_controller", "_L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RStop");

	Params::UDevices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RStop_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms.__verse_0x95D09D0E_Result_1 = __verse_0x95D09D0E_Result_1;
	Parms._Callee_0 = _Callee_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._InvokeSureResultDummy_2 = _InvokeSureResultDummy_2;
	Parms._Callee_3 = _Callee_3;
	Parms._ExprResult_4 = _ExprResult_4;
	Parms._ExprResult_5 = _ExprResult_5;
	Parms.__verse_0x95D09D0E_Result_2 = __verse_0x95D09D0E_Result_2;
	Parms._Callee_6 = _Callee_6;
	Parms._ExprResult_7 = _ExprResult_7;
	Parms._InvokeSureResultDummy_8 = _InvokeSureResultDummy_8;
	Parms._Callee_9 = _Callee_9;
	Parms._ExprResult_10 = _ExprResult_10;
	Parms._ExprResult_11 = _ExprResult_11;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_CreativeAnimation_animation_controller._L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RSetAnimationInternal_L_N_Kkeyframe__delta_M_N_QAnimationMode_Nanimation__mode_20_3d_20_2e_2e_2e_R
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_Kkeyframe__delta_M_QAnimationMode_Nanimation__mode_20_3d_20_2e_2e_2e_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// enum class EDevices_CreativeAnimation_set_animation_resultRetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class EDevices_CreativeAnimation_set_animation_result UDevices_CreativeAnimation_animation_controller::_L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RSetAnimationInternal_L_N_Kkeyframe__delta_M_N_QAnimationMode_Nanimation__mode_20_3d_20_2e_2e_2e_R(const struct FTuple_L_Kkeyframe__delta_M_QAnimationMode_Nanimation__mode_20_3d_20_2e_2e_2e_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_CreativeAnimation_animation_controller", "_L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RSetAnimationInternal_L_N_Kkeyframe__delta_M_N_QAnimationMode_Nanimation__mode_20_3d_20_2e_2e_2e_R");

	Params::UDevices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RSetAnimationInternal_L_N_Kkeyframe__delta_M_N_QAnimationMode_Nanimation__mode_20_3d_20_2e_2e_2e_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseDevices.Devices_CreativeAnimation_animation_controller._L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RSetAnimation_L_N_Kkeyframe__delta_M_N_QMode_Nanimation__mode_R
// (Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_L_Kkeyframe__delta_M_QMode_Nanimation__mode_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// enum class EDevices_CreativeAnimation_set_animation_result__verse_0x95D09D0E_Result_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_0                                                        (HasGetValueTypeHash)
// struct FTuple_L_Kkeyframe__delta_M_QAnimationMode_Nanimation__mode_R_ExprResult_1                                                    (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_2                                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             InvokeResultDummy_3                                              (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_4                                               (ZeroConstructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_5                                                    (HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_6                                                    (HasGetValueTypeHash)
// class UDiagnostics_log*            __verse_0x00000000__3                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_7                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_8                                                        (HasGetValueTypeHash)
// struct FTuple_L_Kchar_M_QLevel_Nlog__level_R_ExprResult_9                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_10                                              (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_11                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_12                                              (HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_13                                                       (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_14                                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EDevices_CreativeAnimation_set_animation_result__verse_0x95D09D0E_Result_4                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_15                                                       (HasGetValueTypeHash)
// struct FTuple_L_Kkeyframe__delta_M_QAnimationMode_Nanimation__mode_R_ExprResult_16                                                   (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_17                                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             InvokeResultDummy_18                                             (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_19                                              (ZeroConstructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_20                                                   (HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_21                                                   (HasGetValueTypeHash)
// class UDiagnostics_log*            __verse_0x00000000__6                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_22                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_23                                                       (HasGetValueTypeHash)
// struct FTuple_L_Kchar_M_QLevel_Nlog__level_R_ExprResult_24                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_25                                              (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_26                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_27                                              (HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_28                                                       (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_29                                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDevices_CreativeAnimation_animation_controller::_L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RSetAnimation_L_N_Kkeyframe__delta_M_N_QMode_Nanimation__mode_R(const struct FTuple_L_Kkeyframe__delta_M_QMode_Nanimation__mode_R& __verse_0xB2CDDD72_Argument, enum class EDevices_CreativeAnimation_set_animation_result __verse_0x95D09D0E_Result_1, FVerseFunctionProperty_ _Callee_0, const struct FTuple_L_Kkeyframe__delta_M_QAnimationMode_Nanimation__mode_R& _ExprResult_1, FOptionalProperty_ _ExprResult_2, FVerseDynamicProperty_ InvokeResultDummy_3, FOptionalProperty_ _ExprResultStack_4, FVerseDynamicProperty_ _ExprResult_5, FVerseDynamicProperty_ _ExprResult_6, class UDiagnostics_log* __verse_0x00000000__3, enum class EVerseTrue _InvokeSureResultDummy_7, FVerseFunctionProperty_ _Callee_8, const struct FTuple_L_Kchar_M_QLevel_Nlog__level_R& _ExprResult_9, FVerseStringProperty_ _ExprResultStack_10, FVerseStringProperty_ _ExprResult_11, FVerseStringProperty_ _ExprResultStack_12, FVerseFunctionProperty_ _Callee_13, FOptionalProperty_ _ExprResult_14, enum class EDevices_CreativeAnimation_set_animation_result __verse_0x95D09D0E_Result_4, FVerseFunctionProperty_ _Callee_15, const struct FTuple_L_Kkeyframe__delta_M_QAnimationMode_Nanimation__mode_R& _ExprResult_16, FOptionalProperty_ _ExprResult_17, FVerseDynamicProperty_ InvokeResultDummy_18, FOptionalProperty_ _ExprResultStack_19, FVerseDynamicProperty_ _ExprResult_20, FVerseDynamicProperty_ _ExprResult_21, class UDiagnostics_log* __verse_0x00000000__6, enum class EVerseTrue _InvokeSureResultDummy_22, FVerseFunctionProperty_ _Callee_23, const struct FTuple_L_Kchar_M_QLevel_Nlog__level_R& _ExprResult_24, FVerseStringProperty_ _ExprResultStack_25, FVerseStringProperty_ _ExprResult_26, FVerseStringProperty_ _ExprResultStack_27, FVerseFunctionProperty_ _Callee_28, FOptionalProperty_ _ExprResult_29)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_CreativeAnimation_animation_controller", "_L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RSetAnimation_L_N_Kkeyframe__delta_M_N_QMode_Nanimation__mode_R");

	Params::UDevices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RSetAnimation_L_N_Kkeyframe__delta_M_N_QMode_Nanimation__mode_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms.__verse_0x95D09D0E_Result_1 = __verse_0x95D09D0E_Result_1;
	Parms._Callee_0 = _Callee_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms.InvokeResultDummy_3 = InvokeResultDummy_3;
	Parms._ExprResultStack_4 = _ExprResultStack_4;
	Parms._ExprResult_5 = _ExprResult_5;
	Parms._ExprResult_6 = _ExprResult_6;
	Parms.__verse_0x00000000__3 = __verse_0x00000000__3;
	Parms._InvokeSureResultDummy_7 = _InvokeSureResultDummy_7;
	Parms._Callee_8 = _Callee_8;
	Parms._ExprResult_9 = _ExprResult_9;
	Parms._ExprResultStack_10 = _ExprResultStack_10;
	Parms._ExprResult_11 = _ExprResult_11;
	Parms._ExprResultStack_12 = _ExprResultStack_12;
	Parms._Callee_13 = _Callee_13;
	Parms._ExprResult_14 = _ExprResult_14;
	Parms.__verse_0x95D09D0E_Result_4 = __verse_0x95D09D0E_Result_4;
	Parms._Callee_15 = _Callee_15;
	Parms._ExprResult_16 = _ExprResult_16;
	Parms._ExprResult_17 = _ExprResult_17;
	Parms.InvokeResultDummy_18 = InvokeResultDummy_18;
	Parms._ExprResultStack_19 = _ExprResultStack_19;
	Parms._ExprResult_20 = _ExprResult_20;
	Parms._ExprResult_21 = _ExprResult_21;
	Parms.__verse_0x00000000__6 = __verse_0x00000000__6;
	Parms._InvokeSureResultDummy_22 = _InvokeSureResultDummy_22;
	Parms._Callee_23 = _Callee_23;
	Parms._ExprResult_24 = _ExprResult_24;
	Parms._ExprResultStack_25 = _ExprResultStack_25;
	Parms._ExprResult_26 = _ExprResult_26;
	Parms._ExprResultStack_27 = _ExprResultStack_27;
	Parms._Callee_28 = _Callee_28;
	Parms._ExprResult_29 = _ExprResult_29;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_CreativeAnimation_animation_controller._L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPlayInternal
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// enum class EDevices_CreativeAnimation_playstoppause_resultRetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class EDevices_CreativeAnimation_playstoppause_result UDevices_CreativeAnimation_animation_controller::_L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPlayInternal(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_CreativeAnimation_animation_controller", "_L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPlayInternal");

	Params::UDevices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPlayInternal_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseDevices.Devices_CreativeAnimation_animation_controller._L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPlay
// (Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// enum class EDevices_CreativeAnimation_playstoppause_result__verse_0x95D09D0E_Result_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_0                                                        (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_1                                                    (HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_3                                                        (HasGetValueTypeHash)
// struct FTuple_L_Kchar_Mplaystoppause__result_R_ExprResult_4                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_5                                                    (HasGetValueTypeHash)
// enum class EDevices_CreativeAnimation_playstoppause_result__verse_0x95D09D0E_Result_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_6                                                        (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_7                                                    (HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_8                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_9                                                        (HasGetValueTypeHash)
// struct FTuple_L_Kchar_Mplaystoppause__result_R_ExprResult_10                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_11                                                   (HasGetValueTypeHash)

void UDevices_CreativeAnimation_animation_controller::_L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPlay(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, enum class EDevices_CreativeAnimation_playstoppause_result __verse_0x95D09D0E_Result_1, FVerseFunctionProperty_ _Callee_0, const struct FTuple_L_R& _ExprResult_1, enum class EVerseTrue _InvokeSureResultDummy_2, FVerseFunctionProperty_ _Callee_3, const struct FTuple_L_Kchar_Mplaystoppause__result_R& _ExprResult_4, FVerseStringProperty_ _ExprResult_5, enum class EDevices_CreativeAnimation_playstoppause_result __verse_0x95D09D0E_Result_2, FVerseFunctionProperty_ _Callee_6, const struct FTuple_L_R& _ExprResult_7, enum class EVerseTrue _InvokeSureResultDummy_8, FVerseFunctionProperty_ _Callee_9, const struct FTuple_L_Kchar_Mplaystoppause__result_R& _ExprResult_10, FVerseStringProperty_ _ExprResult_11)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_CreativeAnimation_animation_controller", "_L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPlay");

	Params::UDevices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPlay_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms.__verse_0x95D09D0E_Result_1 = __verse_0x95D09D0E_Result_1;
	Parms._Callee_0 = _Callee_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._InvokeSureResultDummy_2 = _InvokeSureResultDummy_2;
	Parms._Callee_3 = _Callee_3;
	Parms._ExprResult_4 = _ExprResult_4;
	Parms._ExprResult_5 = _ExprResult_5;
	Parms.__verse_0x95D09D0E_Result_2 = __verse_0x95D09D0E_Result_2;
	Parms._Callee_6 = _Callee_6;
	Parms._ExprResult_7 = _ExprResult_7;
	Parms._InvokeSureResultDummy_8 = _InvokeSureResultDummy_8;
	Parms._Callee_9 = _Callee_9;
	Parms._ExprResult_10 = _ExprResult_10;
	Parms._ExprResult_11 = _ExprResult_11;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_CreativeAnimation_animation_controller._L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPauseInternal
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// enum class EDevices_CreativeAnimation_playstoppause_resultRetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class EDevices_CreativeAnimation_playstoppause_result UDevices_CreativeAnimation_animation_controller::_L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPauseInternal(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_CreativeAnimation_animation_controller", "_L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPauseInternal");

	Params::UDevices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPauseInternal_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseDevices.Devices_CreativeAnimation_animation_controller._L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPause
// (Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// enum class EDevices_CreativeAnimation_playstoppause_result__verse_0x95D09D0E_Result_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_0                                                        (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_1                                                    (HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_3                                                        (HasGetValueTypeHash)
// struct FTuple_L_Kchar_Mplaystoppause__result_R_ExprResult_4                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_5                                                    (HasGetValueTypeHash)
// enum class EDevices_CreativeAnimation_playstoppause_result__verse_0x95D09D0E_Result_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_6                                                        (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_7                                                    (HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_8                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_9                                                        (HasGetValueTypeHash)
// struct FTuple_L_Kchar_Mplaystoppause__result_R_ExprResult_10                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_11                                                   (HasGetValueTypeHash)

void UDevices_CreativeAnimation_animation_controller::_L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPause(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, enum class EDevices_CreativeAnimation_playstoppause_result __verse_0x95D09D0E_Result_1, FVerseFunctionProperty_ _Callee_0, const struct FTuple_L_R& _ExprResult_1, enum class EVerseTrue _InvokeSureResultDummy_2, FVerseFunctionProperty_ _Callee_3, const struct FTuple_L_Kchar_Mplaystoppause__result_R& _ExprResult_4, FVerseStringProperty_ _ExprResult_5, enum class EDevices_CreativeAnimation_playstoppause_result __verse_0x95D09D0E_Result_2, FVerseFunctionProperty_ _Callee_6, const struct FTuple_L_R& _ExprResult_7, enum class EVerseTrue _InvokeSureResultDummy_8, FVerseFunctionProperty_ _Callee_9, const struct FTuple_L_Kchar_Mplaystoppause__result_R& _ExprResult_10, FVerseStringProperty_ _ExprResult_11)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_CreativeAnimation_animation_controller", "_L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPause");

	Params::UDevices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RPause_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms.__verse_0x95D09D0E_Result_1 = __verse_0x95D09D0E_Result_1;
	Parms._Callee_0 = _Callee_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._InvokeSureResultDummy_2 = _InvokeSureResultDummy_2;
	Parms._Callee_3 = _Callee_3;
	Parms._ExprResult_4 = _ExprResult_4;
	Parms._ExprResult_5 = _ExprResult_5;
	Parms.__verse_0x95D09D0E_Result_2 = __verse_0x95D09D0E_Result_2;
	Parms._Callee_6 = _Callee_6;
	Parms._ExprResult_7 = _ExprResult_7;
	Parms._InvokeSureResultDummy_8 = _InvokeSureResultDummy_8;
	Parms._Callee_9 = _Callee_9;
	Parms._ExprResult_10 = _ExprResult_10;
	Parms._ExprResult_11 = _ExprResult_11;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_CreativeAnimation_animation_controller._L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R
// (Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_L_Kchar_Mplaystoppause__result_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FVerseDynamicProperty_             InvokeResultDummy_0                                              (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_1                                               (ZeroConstructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_2                                                    (HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_3                                                    (HasGetValueTypeHash)
// class UDiagnostics_log*            __verse_0x00000000__2                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_4                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_5                                                        (HasGetValueTypeHash)
// struct FTuple_L_Kchar_M_QLevel_Nlog__level_R_ExprResult_6                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_7                                                    (HasGetValueTypeHash)
// TArray<FVerseDynamicProperty_>     __verse_0xFFC68BC5_Array_3                                       (ContainsInstancedReference)
// FVerseFunctionProperty_            _Callee_8                                                        (HasGetValueTypeHash)
// TArray<TArray<FVerseDynamicProperty_>>_ExprResult_9                                                    (ContainsInstancedReference)
// TArray<FVerseStringProperty_>      __verse_0xFFC68BC5_Array_4                                       (ContainsInstancedReference)
// struct FTuple_L_Kchar_M_Kchar_R    __verse_0x00000000__5                                            (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_10                                              (HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_11                                                       (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_12                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultDummy_13                                              (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultDummy_14                                              (HasGetValueTypeHash)
// TArray<TArray<FVerseDynamicProperty_>>_ForResult_15                                                    (ContainsInstancedReference)
// int64                              _ForIndex_16                                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              _ForLength_17                                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              __verse_0xFB88B569_Item_7                                        (HasGetValueTypeHash)
// TArray<FVerseDynamicProperty_>     _ExprResult_18                                                   (ContainsInstancedReference)
// FVerseStringProperty_              __verse_0xFFC68BC5_Array_8                                       (HasGetValueTypeHash)
// TArray<FVerseDynamicProperty_>     _ForResult_19                                                    (ContainsInstancedReference)
// int64                              _ForIndex_20                                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              _ForLength_21                                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              __verse_0xFB88B569_Item_10                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_22                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ForResult_23                                                    (HasGetValueTypeHash)
// int64                              _ForIndex_24                                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              _ForLength_25                                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             __verse_0xFB88B569_Item_12                                       (HasGetValueTypeHash)
// uint8                              _ExprResult_26                                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_27                                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             InvokeResultDummy_28                                             (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_29                                              (ZeroConstructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_30                                                   (HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_31                                                   (HasGetValueTypeHash)
// class UDiagnostics_log*            __verse_0x00000000__14                                           (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_32                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_33                                                       (HasGetValueTypeHash)
// struct FTuple_L_Kchar_M_QLevel_Nlog__level_R_ExprResult_34                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_35                                                   (HasGetValueTypeHash)
// TArray<FVerseDynamicProperty_>     __verse_0xFFC68BC5_Array_15                                      (ContainsInstancedReference)
// FVerseFunctionProperty_            _Callee_36                                                       (HasGetValueTypeHash)
// TArray<TArray<FVerseDynamicProperty_>>_ExprResult_37                                                   (ContainsInstancedReference)
// TArray<FVerseStringProperty_>      __verse_0xFFC68BC5_Array_16                                      (ContainsInstancedReference)
// struct FTuple_L_Kchar_M_Kchar_R    __verse_0x00000000__17                                           (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_38                                              (HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_39                                                       (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_40                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultDummy_41                                              (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultDummy_42                                              (HasGetValueTypeHash)
// TArray<TArray<FVerseDynamicProperty_>>_ForResult_43                                                    (ContainsInstancedReference)
// int64                              _ForIndex_44                                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              _ForLength_45                                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              __verse_0xFB88B569_Item_19                                       (HasGetValueTypeHash)
// TArray<FVerseDynamicProperty_>     _ExprResult_46                                                   (ContainsInstancedReference)
// FVerseStringProperty_              __verse_0xFFC68BC5_Array_20                                      (HasGetValueTypeHash)
// TArray<FVerseDynamicProperty_>     _ForResult_47                                                    (ContainsInstancedReference)
// int64                              _ForIndex_48                                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              _ForLength_49                                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              __verse_0xFB88B569_Item_22                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_50                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ForResult_51                                                    (HasGetValueTypeHash)
// int64                              _ForIndex_52                                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              _ForLength_53                                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             __verse_0xFB88B569_Item_24                                       (HasGetValueTypeHash)
// uint8                              _ExprResult_54                                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_55                                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             InvokeResultDummy_56                                             (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_57                                              (ZeroConstructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_58                                                   (HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_59                                                   (HasGetValueTypeHash)
// class UDiagnostics_log*            __verse_0x00000000__26                                           (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_60                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_61                                                       (HasGetValueTypeHash)
// struct FTuple_L_Kchar_M_QLevel_Nlog__level_R_ExprResult_62                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_63                                                   (HasGetValueTypeHash)
// TArray<FVerseDynamicProperty_>     __verse_0xFFC68BC5_Array_27                                      (ContainsInstancedReference)
// FVerseFunctionProperty_            _Callee_64                                                       (HasGetValueTypeHash)
// TArray<TArray<FVerseDynamicProperty_>>_ExprResult_65                                                   (ContainsInstancedReference)
// TArray<FVerseStringProperty_>      __verse_0xFFC68BC5_Array_28                                      (ContainsInstancedReference)
// struct FTuple_L_Kchar_M_Kchar_R    __verse_0x00000000__29                                           (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_66                                              (HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_67                                                       (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_68                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultDummy_69                                              (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultDummy_70                                              (HasGetValueTypeHash)
// TArray<TArray<FVerseDynamicProperty_>>_ForResult_71                                                    (ContainsInstancedReference)
// int64                              _ForIndex_72                                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              _ForLength_73                                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              __verse_0xFB88B569_Item_31                                       (HasGetValueTypeHash)
// TArray<FVerseDynamicProperty_>     _ExprResult_74                                                   (ContainsInstancedReference)
// FVerseStringProperty_              __verse_0xFFC68BC5_Array_32                                      (HasGetValueTypeHash)
// TArray<FVerseDynamicProperty_>     _ForResult_75                                                    (ContainsInstancedReference)
// int64                              _ForIndex_76                                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              _ForLength_77                                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              __verse_0xFB88B569_Item_34                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_78                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ForResult_79                                                    (HasGetValueTypeHash)
// int64                              _ForIndex_80                                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              _ForLength_81                                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             __verse_0xFB88B569_Item_36                                       (HasGetValueTypeHash)
// uint8                              _ExprResult_82                                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_83                                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             InvokeResultDummy_84                                             (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_85                                              (ZeroConstructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_86                                                   (HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_87                                                   (HasGetValueTypeHash)
// class UDiagnostics_log*            __verse_0x00000000__38                                           (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_88                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_89                                                       (HasGetValueTypeHash)
// struct FTuple_L_Kchar_M_QLevel_Nlog__level_R_ExprResult_90                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_91                                                   (HasGetValueTypeHash)
// TArray<FVerseDynamicProperty_>     __verse_0xFFC68BC5_Array_39                                      (ContainsInstancedReference)
// FVerseFunctionProperty_            _Callee_92                                                       (HasGetValueTypeHash)
// TArray<TArray<FVerseDynamicProperty_>>_ExprResult_93                                                   (ContainsInstancedReference)
// TArray<FVerseStringProperty_>      __verse_0xFFC68BC5_Array_40                                      (ContainsInstancedReference)
// struct FTuple_L_Kchar_M_Kchar_R    __verse_0x00000000__41                                           (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_94                                              (HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_95                                                       (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_96                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultDummy_97                                              (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultDummy_98                                              (HasGetValueTypeHash)
// TArray<TArray<FVerseDynamicProperty_>>_ForResult_99                                                    (ContainsInstancedReference)
// int64                              _ForIndex_100                                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              _ForLength_101                                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              __verse_0xFB88B569_Item_43                                       (HasGetValueTypeHash)
// TArray<FVerseDynamicProperty_>     _ExprResult_102                                                  (ContainsInstancedReference)
// FVerseStringProperty_              __verse_0xFFC68BC5_Array_44                                      (HasGetValueTypeHash)
// TArray<FVerseDynamicProperty_>     _ForResult_103                                                   (ContainsInstancedReference)
// int64                              _ForIndex_104                                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              _ForLength_105                                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              __verse_0xFB88B569_Item_46                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_106                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ForResult_107                                                   (HasGetValueTypeHash)
// int64                              _ForIndex_108                                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              _ForLength_109                                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             __verse_0xFB88B569_Item_48                                       (HasGetValueTypeHash)
// uint8                              _ExprResult_110                                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_111                                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDevices_CreativeAnimation_animation_controller::_L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R(const struct FTuple_L_Kchar_Mplaystoppause__result_R& __verse_0xB2CDDD72_Argument, FVerseDynamicProperty_ InvokeResultDummy_0, FOptionalProperty_ _ExprResultStack_1, FVerseDynamicProperty_ _ExprResult_2, FVerseDynamicProperty_ _ExprResult_3, class UDiagnostics_log* __verse_0x00000000__2, enum class EVerseTrue _InvokeSureResultDummy_4, FVerseFunctionProperty_ _Callee_5, const struct FTuple_L_Kchar_M_QLevel_Nlog__level_R& _ExprResult_6, FVerseStringProperty_ _ExprResult_7, const TArray<FVerseDynamicProperty_>& __verse_0xFFC68BC5_Array_3, FVerseFunctionProperty_ _Callee_8, const TArray<TArray<FVerseDynamicProperty_>>& _ExprResult_9, const TArray<FVerseStringProperty_>& __verse_0xFFC68BC5_Array_4, const struct FTuple_L_Kchar_M_Kchar_R& __verse_0x00000000__5, FVerseStringProperty_ _ExprResultStack_10, FVerseFunctionProperty_ _Callee_11, FVerseStringProperty_ _ExprResult_12, FVerseStringProperty_ _ExprResultDummy_13, FVerseStringProperty_ _ExprResultDummy_14, const TArray<TArray<FVerseDynamicProperty_>>& _ForResult_15, int64 _ForIndex_16, int64 _ForLength_17, FVerseStringProperty_ __verse_0xFB88B569_Item_7, const TArray<FVerseDynamicProperty_>& _ExprResult_18, FVerseStringProperty_ __verse_0xFFC68BC5_Array_8, const TArray<FVerseDynamicProperty_>& _ForResult_19, int64 _ForIndex_20, int64 _ForLength_21, uint8 __verse_0xFB88B569_Item_10, FVerseDynamicProperty_ _ExprResult_22, FVerseStringProperty_ _ForResult_23, int64 _ForIndex_24, int64 _ForLength_25, FVerseDynamicProperty_ __verse_0xFB88B569_Item_12, uint8 _ExprResult_26, FOptionalProperty_ _ExprResult_27, FVerseDynamicProperty_ InvokeResultDummy_28, FOptionalProperty_ _ExprResultStack_29, FVerseDynamicProperty_ _ExprResult_30, FVerseDynamicProperty_ _ExprResult_31, class UDiagnostics_log* __verse_0x00000000__14, enum class EVerseTrue _InvokeSureResultDummy_32, FVerseFunctionProperty_ _Callee_33, const struct FTuple_L_Kchar_M_QLevel_Nlog__level_R& _ExprResult_34, FVerseStringProperty_ _ExprResult_35, const TArray<FVerseDynamicProperty_>& __verse_0xFFC68BC5_Array_15, FVerseFunctionProperty_ _Callee_36, const TArray<TArray<FVerseDynamicProperty_>>& _ExprResult_37, const TArray<FVerseStringProperty_>& __verse_0xFFC68BC5_Array_16, const struct FTuple_L_Kchar_M_Kchar_R& __verse_0x00000000__17, FVerseStringProperty_ _ExprResultStack_38, FVerseFunctionProperty_ _Callee_39, FVerseStringProperty_ _ExprResult_40, FVerseStringProperty_ _ExprResultDummy_41, FVerseStringProperty_ _ExprResultDummy_42, const TArray<TArray<FVerseDynamicProperty_>>& _ForResult_43, int64 _ForIndex_44, int64 _ForLength_45, FVerseStringProperty_ __verse_0xFB88B569_Item_19, const TArray<FVerseDynamicProperty_>& _ExprResult_46, FVerseStringProperty_ __verse_0xFFC68BC5_Array_20, const TArray<FVerseDynamicProperty_>& _ForResult_47, int64 _ForIndex_48, int64 _ForLength_49, uint8 __verse_0xFB88B569_Item_22, FVerseDynamicProperty_ _ExprResult_50, FVerseStringProperty_ _ForResult_51, int64 _ForIndex_52, int64 _ForLength_53, FVerseDynamicProperty_ __verse_0xFB88B569_Item_24, uint8 _ExprResult_54, FOptionalProperty_ _ExprResult_55, FVerseDynamicProperty_ InvokeResultDummy_56, FOptionalProperty_ _ExprResultStack_57, FVerseDynamicProperty_ _ExprResult_58, FVerseDynamicProperty_ _ExprResult_59, class UDiagnostics_log* __verse_0x00000000__26, enum class EVerseTrue _InvokeSureResultDummy_60, FVerseFunctionProperty_ _Callee_61, const struct FTuple_L_Kchar_M_QLevel_Nlog__level_R& _ExprResult_62, FVerseStringProperty_ _ExprResult_63, const TArray<FVerseDynamicProperty_>& __verse_0xFFC68BC5_Array_27, FVerseFunctionProperty_ _Callee_64, const TArray<TArray<FVerseDynamicProperty_>>& _ExprResult_65, const TArray<FVerseStringProperty_>& __verse_0xFFC68BC5_Array_28, const struct FTuple_L_Kchar_M_Kchar_R& __verse_0x00000000__29, FVerseStringProperty_ _ExprResultStack_66, FVerseFunctionProperty_ _Callee_67, FVerseStringProperty_ _ExprResult_68, FVerseStringProperty_ _ExprResultDummy_69, FVerseStringProperty_ _ExprResultDummy_70, const TArray<TArray<FVerseDynamicProperty_>>& _ForResult_71, int64 _ForIndex_72, int64 _ForLength_73, FVerseStringProperty_ __verse_0xFB88B569_Item_31, const TArray<FVerseDynamicProperty_>& _ExprResult_74, FVerseStringProperty_ __verse_0xFFC68BC5_Array_32, const TArray<FVerseDynamicProperty_>& _ForResult_75, int64 _ForIndex_76, int64 _ForLength_77, uint8 __verse_0xFB88B569_Item_34, FVerseDynamicProperty_ _ExprResult_78, FVerseStringProperty_ _ForResult_79, int64 _ForIndex_80, int64 _ForLength_81, FVerseDynamicProperty_ __verse_0xFB88B569_Item_36, uint8 _ExprResult_82, FOptionalProperty_ _ExprResult_83, FVerseDynamicProperty_ InvokeResultDummy_84, FOptionalProperty_ _ExprResultStack_85, FVerseDynamicProperty_ _ExprResult_86, FVerseDynamicProperty_ _ExprResult_87, class UDiagnostics_log* __verse_0x00000000__38, enum class EVerseTrue _InvokeSureResultDummy_88, FVerseFunctionProperty_ _Callee_89, const struct FTuple_L_Kchar_M_QLevel_Nlog__level_R& _ExprResult_90, FVerseStringProperty_ _ExprResult_91, const TArray<FVerseDynamicProperty_>& __verse_0xFFC68BC5_Array_39, FVerseFunctionProperty_ _Callee_92, const TArray<TArray<FVerseDynamicProperty_>>& _ExprResult_93, const TArray<FVerseStringProperty_>& __verse_0xFFC68BC5_Array_40, const struct FTuple_L_Kchar_M_Kchar_R& __verse_0x00000000__41, FVerseStringProperty_ _ExprResultStack_94, FVerseFunctionProperty_ _Callee_95, FVerseStringProperty_ _ExprResult_96, FVerseStringProperty_ _ExprResultDummy_97, FVerseStringProperty_ _ExprResultDummy_98, const TArray<TArray<FVerseDynamicProperty_>>& _ForResult_99, int64 _ForIndex_100, int64 _ForLength_101, FVerseStringProperty_ __verse_0xFB88B569_Item_43, const TArray<FVerseDynamicProperty_>& _ExprResult_102, FVerseStringProperty_ __verse_0xFFC68BC5_Array_44, const TArray<FVerseDynamicProperty_>& _ForResult_103, int64 _ForIndex_104, int64 _ForLength_105, uint8 __verse_0xFB88B569_Item_46, FVerseDynamicProperty_ _ExprResult_106, FVerseStringProperty_ _ForResult_107, int64 _ForIndex_108, int64 _ForLength_109, FVerseDynamicProperty_ __verse_0xFB88B569_Item_48, uint8 _ExprResult_110, FOptionalProperty_ _ExprResult_111)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_CreativeAnimation_animation_controller", "_L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R");

	Params::UDevices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RLogPlayStopPauseResultIfError_L_N_Kchar_M_Nplaystoppause__result_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms.InvokeResultDummy_0 = InvokeResultDummy_0;
	Parms._ExprResultStack_1 = _ExprResultStack_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._ExprResult_3 = _ExprResult_3;
	Parms.__verse_0x00000000__2 = __verse_0x00000000__2;
	Parms._InvokeSureResultDummy_4 = _InvokeSureResultDummy_4;
	Parms._Callee_5 = _Callee_5;
	Parms._ExprResult_6 = _ExprResult_6;
	Parms._ExprResult_7 = _ExprResult_7;
	Parms.__verse_0xFFC68BC5_Array_3 = __verse_0xFFC68BC5_Array_3;
	Parms._Callee_8 = _Callee_8;
	Parms._ExprResult_9 = _ExprResult_9;
	Parms.__verse_0xFFC68BC5_Array_4 = __verse_0xFFC68BC5_Array_4;
	Parms.__verse_0x00000000__5 = __verse_0x00000000__5;
	Parms._ExprResultStack_10 = _ExprResultStack_10;
	Parms._Callee_11 = _Callee_11;
	Parms._ExprResult_12 = _ExprResult_12;
	Parms._ExprResultDummy_13 = _ExprResultDummy_13;
	Parms._ExprResultDummy_14 = _ExprResultDummy_14;
	Parms._ForResult_15 = _ForResult_15;
	Parms._ForIndex_16 = _ForIndex_16;
	Parms._ForLength_17 = _ForLength_17;
	Parms.__verse_0xFB88B569_Item_7 = __verse_0xFB88B569_Item_7;
	Parms._ExprResult_18 = _ExprResult_18;
	Parms.__verse_0xFFC68BC5_Array_8 = __verse_0xFFC68BC5_Array_8;
	Parms._ForResult_19 = _ForResult_19;
	Parms._ForIndex_20 = _ForIndex_20;
	Parms._ForLength_21 = _ForLength_21;
	Parms.__verse_0xFB88B569_Item_10 = __verse_0xFB88B569_Item_10;
	Parms._ExprResult_22 = _ExprResult_22;
	Parms._ForResult_23 = _ForResult_23;
	Parms._ForIndex_24 = _ForIndex_24;
	Parms._ForLength_25 = _ForLength_25;
	Parms.__verse_0xFB88B569_Item_12 = __verse_0xFB88B569_Item_12;
	Parms._ExprResult_26 = _ExprResult_26;
	Parms._ExprResult_27 = _ExprResult_27;
	Parms.InvokeResultDummy_28 = InvokeResultDummy_28;
	Parms._ExprResultStack_29 = _ExprResultStack_29;
	Parms._ExprResult_30 = _ExprResult_30;
	Parms._ExprResult_31 = _ExprResult_31;
	Parms.__verse_0x00000000__14 = __verse_0x00000000__14;
	Parms._InvokeSureResultDummy_32 = _InvokeSureResultDummy_32;
	Parms._Callee_33 = _Callee_33;
	Parms._ExprResult_34 = _ExprResult_34;
	Parms._ExprResult_35 = _ExprResult_35;
	Parms.__verse_0xFFC68BC5_Array_15 = __verse_0xFFC68BC5_Array_15;
	Parms._Callee_36 = _Callee_36;
	Parms._ExprResult_37 = _ExprResult_37;
	Parms.__verse_0xFFC68BC5_Array_16 = __verse_0xFFC68BC5_Array_16;
	Parms.__verse_0x00000000__17 = __verse_0x00000000__17;
	Parms._ExprResultStack_38 = _ExprResultStack_38;
	Parms._Callee_39 = _Callee_39;
	Parms._ExprResult_40 = _ExprResult_40;
	Parms._ExprResultDummy_41 = _ExprResultDummy_41;
	Parms._ExprResultDummy_42 = _ExprResultDummy_42;
	Parms._ForResult_43 = _ForResult_43;
	Parms._ForIndex_44 = _ForIndex_44;
	Parms._ForLength_45 = _ForLength_45;
	Parms.__verse_0xFB88B569_Item_19 = __verse_0xFB88B569_Item_19;
	Parms._ExprResult_46 = _ExprResult_46;
	Parms.__verse_0xFFC68BC5_Array_20 = __verse_0xFFC68BC5_Array_20;
	Parms._ForResult_47 = _ForResult_47;
	Parms._ForIndex_48 = _ForIndex_48;
	Parms._ForLength_49 = _ForLength_49;
	Parms.__verse_0xFB88B569_Item_22 = __verse_0xFB88B569_Item_22;
	Parms._ExprResult_50 = _ExprResult_50;
	Parms._ForResult_51 = _ForResult_51;
	Parms._ForIndex_52 = _ForIndex_52;
	Parms._ForLength_53 = _ForLength_53;
	Parms.__verse_0xFB88B569_Item_24 = __verse_0xFB88B569_Item_24;
	Parms._ExprResult_54 = _ExprResult_54;
	Parms._ExprResult_55 = _ExprResult_55;
	Parms.InvokeResultDummy_56 = InvokeResultDummy_56;
	Parms._ExprResultStack_57 = _ExprResultStack_57;
	Parms._ExprResult_58 = _ExprResult_58;
	Parms._ExprResult_59 = _ExprResult_59;
	Parms.__verse_0x00000000__26 = __verse_0x00000000__26;
	Parms._InvokeSureResultDummy_60 = _InvokeSureResultDummy_60;
	Parms._Callee_61 = _Callee_61;
	Parms._ExprResult_62 = _ExprResult_62;
	Parms._ExprResult_63 = _ExprResult_63;
	Parms.__verse_0xFFC68BC5_Array_27 = __verse_0xFFC68BC5_Array_27;
	Parms._Callee_64 = _Callee_64;
	Parms._ExprResult_65 = _ExprResult_65;
	Parms.__verse_0xFFC68BC5_Array_28 = __verse_0xFFC68BC5_Array_28;
	Parms.__verse_0x00000000__29 = __verse_0x00000000__29;
	Parms._ExprResultStack_66 = _ExprResultStack_66;
	Parms._Callee_67 = _Callee_67;
	Parms._ExprResult_68 = _ExprResult_68;
	Parms._ExprResultDummy_69 = _ExprResultDummy_69;
	Parms._ExprResultDummy_70 = _ExprResultDummy_70;
	Parms._ForResult_71 = _ForResult_71;
	Parms._ForIndex_72 = _ForIndex_72;
	Parms._ForLength_73 = _ForLength_73;
	Parms.__verse_0xFB88B569_Item_31 = __verse_0xFB88B569_Item_31;
	Parms._ExprResult_74 = _ExprResult_74;
	Parms.__verse_0xFFC68BC5_Array_32 = __verse_0xFFC68BC5_Array_32;
	Parms._ForResult_75 = _ForResult_75;
	Parms._ForIndex_76 = _ForIndex_76;
	Parms._ForLength_77 = _ForLength_77;
	Parms.__verse_0xFB88B569_Item_34 = __verse_0xFB88B569_Item_34;
	Parms._ExprResult_78 = _ExprResult_78;
	Parms._ForResult_79 = _ForResult_79;
	Parms._ForIndex_80 = _ForIndex_80;
	Parms._ForLength_81 = _ForLength_81;
	Parms.__verse_0xFB88B569_Item_36 = __verse_0xFB88B569_Item_36;
	Parms._ExprResult_82 = _ExprResult_82;
	Parms._ExprResult_83 = _ExprResult_83;
	Parms.InvokeResultDummy_84 = InvokeResultDummy_84;
	Parms._ExprResultStack_85 = _ExprResultStack_85;
	Parms._ExprResult_86 = _ExprResult_86;
	Parms._ExprResult_87 = _ExprResult_87;
	Parms.__verse_0x00000000__38 = __verse_0x00000000__38;
	Parms._InvokeSureResultDummy_88 = _InvokeSureResultDummy_88;
	Parms._Callee_89 = _Callee_89;
	Parms._ExprResult_90 = _ExprResult_90;
	Parms._ExprResult_91 = _ExprResult_91;
	Parms.__verse_0xFFC68BC5_Array_39 = __verse_0xFFC68BC5_Array_39;
	Parms._Callee_92 = _Callee_92;
	Parms._ExprResult_93 = _ExprResult_93;
	Parms.__verse_0xFFC68BC5_Array_40 = __verse_0xFFC68BC5_Array_40;
	Parms.__verse_0x00000000__41 = __verse_0x00000000__41;
	Parms._ExprResultStack_94 = _ExprResultStack_94;
	Parms._Callee_95 = _Callee_95;
	Parms._ExprResult_96 = _ExprResult_96;
	Parms._ExprResultDummy_97 = _ExprResultDummy_97;
	Parms._ExprResultDummy_98 = _ExprResultDummy_98;
	Parms._ForResult_99 = _ForResult_99;
	Parms._ForIndex_100 = _ForIndex_100;
	Parms._ForLength_101 = _ForLength_101;
	Parms.__verse_0xFB88B569_Item_43 = __verse_0xFB88B569_Item_43;
	Parms._ExprResult_102 = _ExprResult_102;
	Parms.__verse_0xFFC68BC5_Array_44 = __verse_0xFFC68BC5_Array_44;
	Parms._ForResult_103 = _ForResult_103;
	Parms._ForIndex_104 = _ForIndex_104;
	Parms._ForLength_105 = _ForLength_105;
	Parms.__verse_0xFB88B569_Item_46 = __verse_0xFB88B569_Item_46;
	Parms._ExprResult_106 = _ExprResult_106;
	Parms._ForResult_107 = _ForResult_107;
	Parms._ForIndex_108 = _ForIndex_108;
	Parms._ForLength_109 = _ForLength_109;
	Parms.__verse_0xFB88B569_Item_48 = __verse_0xFB88B569_Item_48;
	Parms._ExprResult_110 = _ExprResult_110;
	Parms._ExprResult_111 = _ExprResult_111;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_CreativeAnimation_animation_controller._L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RIsValid
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionalProperty_ UDevices_CreativeAnimation_animation_controller::_L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RIsValid(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_CreativeAnimation_animation_controller", "_L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RIsValid");

	Params::UDevices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RIsValid_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseDevices.Devices_CreativeAnimation_animation_controller._L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RGetState
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// enum class EDevices_CreativeAnimation_animation_controller_stateRetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class EDevices_CreativeAnimation_animation_controller_state UDevices_CreativeAnimation_animation_controller::_L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RGetState(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_CreativeAnimation_animation_controller", "_L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RGetState");

	Params::UDevices_CreativeAnimation_animation_controller__L_2fFortnite_2ecom_2fDevices_2fCreativeAnimation_2fanimation__controller_N_RGetState_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseDevices.Devices_CreativeAnimation_animation_controller.AwaitNextKeyframe
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UDevices_CreativeAnimation_animation_controller::AwaitNextKeyframe(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_CreativeAnimation_animation_controller", "AwaitNextKeyframe");

	Params::UDevices_CreativeAnimation_animation_controller_AwaitNextKeyframe_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseDevices.Devices_CreativeAnimation_animation_controller.$InitInstance
// (None)
// Parameters:

void UDevices_CreativeAnimation_animation_controller::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_CreativeAnimation_animation_controller", "$InitInstance");

	Params::UDevices_CreativeAnimation_animation_controller__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_CreativeAnimation_animation_controller.$Block
// (None)
// Parameters:

void UDevices_CreativeAnimation_animation_controller::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_CreativeAnimation_animation_controller", "$Block");

	Params::UDevices_CreativeAnimation_animation_controller__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_CreativeAnimation_animation_controller.$InitCDO
// (HasDefaults)
// Parameters:
// class UDiagnostics_log*            _ExprResult_0                                                    (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint64                             _InstancingGraph_1                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerseEngine_subscribable_event*_ExprResult_2                                                    (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint64                             _InstancingGraph_3                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerseEngine_subscribable_event*_ExprResult_4                                                    (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint64                             _InstancingGraph_5                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerseEngine_subscribable_event*_ExprResult_6                                                    (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint64                             _InstancingGraph_7                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDiagnostics_log*            _ExprResult_8                                                    (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint64                             _InstancingGraph_9                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerseEngine_subscribable_event*_ExprResult_10                                                   (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint64                             _InstancingGraph_11                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerseEngine_subscribable_event*_ExprResult_12                                                   (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint64                             _InstancingGraph_13                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerseEngine_subscribable_event*_ExprResult_14                                                   (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint64                             _InstancingGraph_15                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDevices_CreativeAnimation_animation_controller::_InitCDO(class UDiagnostics_log* _ExprResult_0, uint64 _InstancingGraph_1, class UVerseEngine_subscribable_event* _ExprResult_2, uint64 _InstancingGraph_3, class UVerseEngine_subscribable_event* _ExprResult_4, uint64 _InstancingGraph_5, class UVerseEngine_subscribable_event* _ExprResult_6, uint64 _InstancingGraph_7, class UDiagnostics_log* _ExprResult_8, uint64 _InstancingGraph_9, class UVerseEngine_subscribable_event* _ExprResult_10, uint64 _InstancingGraph_11, class UVerseEngine_subscribable_event* _ExprResult_12, uint64 _InstancingGraph_13, class UVerseEngine_subscribable_event* _ExprResult_14, uint64 _InstancingGraph_15)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_CreativeAnimation_animation_controller", "$InitCDO");

	Params::UDevices_CreativeAnimation_animation_controller__InitCDO_Params Parms{};

	Parms._ExprResult_0 = _ExprResult_0;
	Parms._InstancingGraph_1 = _InstancingGraph_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._InstancingGraph_3 = _InstancingGraph_3;
	Parms._ExprResult_4 = _ExprResult_4;
	Parms._InstancingGraph_5 = _InstancingGraph_5;
	Parms._ExprResult_6 = _ExprResult_6;
	Parms._InstancingGraph_7 = _InstancingGraph_7;
	Parms._ExprResult_8 = _ExprResult_8;
	Parms._InstancingGraph_9 = _InstancingGraph_9;
	Parms._ExprResult_10 = _ExprResult_10;
	Parms._InstancingGraph_11 = _InstancingGraph_11;
	Parms._ExprResult_12 = _ExprResult_12;
	Parms._InstancingGraph_13 = _InstancingGraph_13;
	Parms._ExprResult_14 = _ExprResult_14;
	Parms._InstancingGraph_15 = _InstancingGraph_15;

	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseDevices.Devices_CreativeAnimation_animation_controller_debug_log
// (None)

class UClass* UDevices_CreativeAnimation_animation_controller_debug_log::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Devices_CreativeAnimation_animation_controller_debug_log");

	return Clss;
}


// Devices_CreativeAnimation_animation_controller_debug_log VerseDevices.Default__Devices_CreativeAnimation_animation_controller_debug_log
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDevices_CreativeAnimation_animation_controller_debug_log* UDevices_CreativeAnimation_animation_controller_debug_log::GetDefaultObj()
{
	static class UDevices_CreativeAnimation_animation_controller_debug_log* Default = nullptr;

	if (!Default)
		Default = static_cast<UDevices_CreativeAnimation_animation_controller_debug_log*>(UDevices_CreativeAnimation_animation_controller_debug_log::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseDevices.Devices_CreativeAnimation_animation_controller_debug_log.$InitInstance
// (None)
// Parameters:

void UDevices_CreativeAnimation_animation_controller_debug_log::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_CreativeAnimation_animation_controller_debug_log", "$InitInstance");

	Params::UDevices_CreativeAnimation_animation_controller_debug_log__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_CreativeAnimation_animation_controller_debug_log.$Block
// (None)
// Parameters:

void UDevices_CreativeAnimation_animation_controller_debug_log::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_CreativeAnimation_animation_controller_debug_log", "$Block");

	Params::UDevices_CreativeAnimation_animation_controller_debug_log__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_CreativeAnimation_animation_controller_debug_log.$InitCDO
// (None)
// Parameters:

void UDevices_CreativeAnimation_animation_controller_debug_log::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_CreativeAnimation_animation_controller_debug_log", "$InitCDO");

	Params::UDevices_CreativeAnimation_animation_controller_debug_log__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseDevices.Devices_CreativeAnimation_InterpolationTypes
// (None)

class UClass* UDevices_CreativeAnimation_InterpolationTypes::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Devices_CreativeAnimation_InterpolationTypes");

	return Clss;
}


// Devices_CreativeAnimation_InterpolationTypes VerseDevices.Default__Devices_CreativeAnimation_InterpolationTypes
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDevices_CreativeAnimation_InterpolationTypes* UDevices_CreativeAnimation_InterpolationTypes::GetDefaultObj()
{
	static class UDevices_CreativeAnimation_InterpolationTypes* Default = nullptr;

	if (!Default)
		Default = static_cast<UDevices_CreativeAnimation_InterpolationTypes*>(UDevices_CreativeAnimation_InterpolationTypes::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseDevices.Devices_CreativeAnimation_InterpolationTypes.$InitCDO
// (HasDefaults)
// Parameters:
// struct FDevices_CreativeAnimation_cubic_bezier_parameters_ExprResult_0                                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_1                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_2                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_3                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_4                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_5                                                    (HasGetValueTypeHash)
// struct FDevices_CreativeAnimation_cubic_bezier_parameters_ExprResult_6                                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_7                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_8                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_9                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_10                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_11                                                   (HasGetValueTypeHash)
// struct FDevices_CreativeAnimation_cubic_bezier_parameters_ExprResult_12                                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_13                                              (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_14                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_15                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_16                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_17                                                   (HasGetValueTypeHash)
// struct FDevices_CreativeAnimation_cubic_bezier_parameters_ExprResult_18                                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_19                                              (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_20                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_21                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_22                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_23                                                   (HasGetValueTypeHash)
// struct FDevices_CreativeAnimation_cubic_bezier_parameters_ExprResult_24                                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_25                                              (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_26                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_27                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_28                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_29                                                   (HasGetValueTypeHash)
// struct FDevices_CreativeAnimation_cubic_bezier_parameters_ExprResult_30                                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_31                                              (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_32                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_33                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_34                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_35                                                   (HasGetValueTypeHash)
// struct FDevices_CreativeAnimation_cubic_bezier_parameters_ExprResult_36                                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_37                                              (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_38                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_39                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_40                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_41                                                   (HasGetValueTypeHash)
// struct FDevices_CreativeAnimation_cubic_bezier_parameters_ExprResult_42                                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_43                                              (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_44                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_45                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_46                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_47                                                   (HasGetValueTypeHash)
// struct FDevices_CreativeAnimation_cubic_bezier_parameters_ExprResult_48                                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_49                                              (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_50                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_51                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_52                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_53                                                   (HasGetValueTypeHash)
// struct FDevices_CreativeAnimation_cubic_bezier_parameters_ExprResult_54                                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_55                                              (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_56                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_57                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_58                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_59                                                   (HasGetValueTypeHash)

void UDevices_CreativeAnimation_InterpolationTypes::_InitCDO(const struct FDevices_CreativeAnimation_cubic_bezier_parameters& _ExprResult_0, TMap<FVerseStringProperty_, uint8> _ExprResultStack_1, FVerseStringProperty_ _ExprResult_2, FVerseStringProperty_ _ExprResult_3, FVerseStringProperty_ _ExprResult_4, FVerseStringProperty_ _ExprResult_5, const struct FDevices_CreativeAnimation_cubic_bezier_parameters& _ExprResult_6, TMap<FVerseStringProperty_, uint8> _ExprResultStack_7, FVerseStringProperty_ _ExprResult_8, FVerseStringProperty_ _ExprResult_9, FVerseStringProperty_ _ExprResult_10, FVerseStringProperty_ _ExprResult_11, const struct FDevices_CreativeAnimation_cubic_bezier_parameters& _ExprResult_12, TMap<FVerseStringProperty_, uint8> _ExprResultStack_13, FVerseStringProperty_ _ExprResult_14, FVerseStringProperty_ _ExprResult_15, FVerseStringProperty_ _ExprResult_16, FVerseStringProperty_ _ExprResult_17, const struct FDevices_CreativeAnimation_cubic_bezier_parameters& _ExprResult_18, TMap<FVerseStringProperty_, uint8> _ExprResultStack_19, FVerseStringProperty_ _ExprResult_20, FVerseStringProperty_ _ExprResult_21, FVerseStringProperty_ _ExprResult_22, FVerseStringProperty_ _ExprResult_23, const struct FDevices_CreativeAnimation_cubic_bezier_parameters& _ExprResult_24, TMap<FVerseStringProperty_, uint8> _ExprResultStack_25, FVerseStringProperty_ _ExprResult_26, FVerseStringProperty_ _ExprResult_27, FVerseStringProperty_ _ExprResult_28, FVerseStringProperty_ _ExprResult_29, const struct FDevices_CreativeAnimation_cubic_bezier_parameters& _ExprResult_30, TMap<FVerseStringProperty_, uint8> _ExprResultStack_31, FVerseStringProperty_ _ExprResult_32, FVerseStringProperty_ _ExprResult_33, FVerseStringProperty_ _ExprResult_34, FVerseStringProperty_ _ExprResult_35, const struct FDevices_CreativeAnimation_cubic_bezier_parameters& _ExprResult_36, TMap<FVerseStringProperty_, uint8> _ExprResultStack_37, FVerseStringProperty_ _ExprResult_38, FVerseStringProperty_ _ExprResult_39, FVerseStringProperty_ _ExprResult_40, FVerseStringProperty_ _ExprResult_41, const struct FDevices_CreativeAnimation_cubic_bezier_parameters& _ExprResult_42, TMap<FVerseStringProperty_, uint8> _ExprResultStack_43, FVerseStringProperty_ _ExprResult_44, FVerseStringProperty_ _ExprResult_45, FVerseStringProperty_ _ExprResult_46, FVerseStringProperty_ _ExprResult_47, const struct FDevices_CreativeAnimation_cubic_bezier_parameters& _ExprResult_48, TMap<FVerseStringProperty_, uint8> _ExprResultStack_49, FVerseStringProperty_ _ExprResult_50, FVerseStringProperty_ _ExprResult_51, FVerseStringProperty_ _ExprResult_52, FVerseStringProperty_ _ExprResult_53, const struct FDevices_CreativeAnimation_cubic_bezier_parameters& _ExprResult_54, TMap<FVerseStringProperty_, uint8> _ExprResultStack_55, FVerseStringProperty_ _ExprResult_56, FVerseStringProperty_ _ExprResult_57, FVerseStringProperty_ _ExprResult_58, FVerseStringProperty_ _ExprResult_59)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_CreativeAnimation_InterpolationTypes", "$InitCDO");

	Params::UDevices_CreativeAnimation_InterpolationTypes__InitCDO_Params Parms{};

	Parms._ExprResult_0 = _ExprResult_0;
	Parms._ExprResultStack_1 = _ExprResultStack_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._ExprResult_3 = _ExprResult_3;
	Parms._ExprResult_4 = _ExprResult_4;
	Parms._ExprResult_5 = _ExprResult_5;
	Parms._ExprResult_6 = _ExprResult_6;
	Parms._ExprResultStack_7 = _ExprResultStack_7;
	Parms._ExprResult_8 = _ExprResult_8;
	Parms._ExprResult_9 = _ExprResult_9;
	Parms._ExprResult_10 = _ExprResult_10;
	Parms._ExprResult_11 = _ExprResult_11;
	Parms._ExprResult_12 = _ExprResult_12;
	Parms._ExprResultStack_13 = _ExprResultStack_13;
	Parms._ExprResult_14 = _ExprResult_14;
	Parms._ExprResult_15 = _ExprResult_15;
	Parms._ExprResult_16 = _ExprResult_16;
	Parms._ExprResult_17 = _ExprResult_17;
	Parms._ExprResult_18 = _ExprResult_18;
	Parms._ExprResultStack_19 = _ExprResultStack_19;
	Parms._ExprResult_20 = _ExprResult_20;
	Parms._ExprResult_21 = _ExprResult_21;
	Parms._ExprResult_22 = _ExprResult_22;
	Parms._ExprResult_23 = _ExprResult_23;
	Parms._ExprResult_24 = _ExprResult_24;
	Parms._ExprResultStack_25 = _ExprResultStack_25;
	Parms._ExprResult_26 = _ExprResult_26;
	Parms._ExprResult_27 = _ExprResult_27;
	Parms._ExprResult_28 = _ExprResult_28;
	Parms._ExprResult_29 = _ExprResult_29;
	Parms._ExprResult_30 = _ExprResult_30;
	Parms._ExprResultStack_31 = _ExprResultStack_31;
	Parms._ExprResult_32 = _ExprResult_32;
	Parms._ExprResult_33 = _ExprResult_33;
	Parms._ExprResult_34 = _ExprResult_34;
	Parms._ExprResult_35 = _ExprResult_35;
	Parms._ExprResult_36 = _ExprResult_36;
	Parms._ExprResultStack_37 = _ExprResultStack_37;
	Parms._ExprResult_38 = _ExprResult_38;
	Parms._ExprResult_39 = _ExprResult_39;
	Parms._ExprResult_40 = _ExprResult_40;
	Parms._ExprResult_41 = _ExprResult_41;
	Parms._ExprResult_42 = _ExprResult_42;
	Parms._ExprResultStack_43 = _ExprResultStack_43;
	Parms._ExprResult_44 = _ExprResult_44;
	Parms._ExprResult_45 = _ExprResult_45;
	Parms._ExprResult_46 = _ExprResult_46;
	Parms._ExprResult_47 = _ExprResult_47;
	Parms._ExprResult_48 = _ExprResult_48;
	Parms._ExprResultStack_49 = _ExprResultStack_49;
	Parms._ExprResult_50 = _ExprResult_50;
	Parms._ExprResult_51 = _ExprResult_51;
	Parms._ExprResult_52 = _ExprResult_52;
	Parms._ExprResult_53 = _ExprResult_53;
	Parms._ExprResult_54 = _ExprResult_54;
	Parms._ExprResultStack_55 = _ExprResultStack_55;
	Parms._ExprResult_56 = _ExprResult_56;
	Parms._ExprResult_57 = _ExprResult_57;
	Parms._ExprResult_58 = _ExprResult_58;
	Parms._ExprResult_59 = _ExprResult_59;

	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseDevices.Devices_device_event
// (None)

class UClass* UDevices_device_event::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Devices_device_event");

	return Clss;
}


// Devices_device_event VerseDevices.Default__Devices_device_event
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDevices_device_event* UDevices_device_event::GetDefaultObj()
{
	static class UDevices_device_event* Default = nullptr;

	if (!Default)
		Default = static_cast<UDevices_device_event*>(UDevices_device_event::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseDevices.Devices_device_event.$InitInstance
// (None)
// Parameters:

void UDevices_device_event::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_event", "$InitInstance");

	Params::UDevices_device_event__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_device_event.$Block
// (None)
// Parameters:

void UDevices_device_event::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_event", "$Block");

	Params::UDevices_device_event__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_device_event.$InitCDO
// (None)
// Parameters:

void UDevices_device_event::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_event", "$InitCDO");

	Params::UDevices_device_event__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseDevices.Devices_device_event_agent
// (None)

class UClass* UDevices_device_event_agent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Devices_device_event_agent");

	return Clss;
}


// Devices_device_event_agent VerseDevices.Default__Devices_device_event_agent
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDevices_device_event_agent* UDevices_device_event_agent::GetDefaultObj()
{
	static class UDevices_device_event_agent* Default = nullptr;

	if (!Default)
		Default = static_cast<UDevices_device_event_agent*>(UDevices_device_event_agent::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseDevices.Devices_device_event_agent._L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FVerseFunctionProperty_            __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UObject*                     RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UObject* UDevices_device_event_agent::_L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R(FVerseFunctionProperty_ __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_event_agent", "_L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R");

	Params::UDevices_device_event_agent__L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseDevices.Devices_device_event_agent.Await
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UDevices_device_event_agent::Await(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_event_agent", "Await");

	Params::UDevices_device_event_agent_Await_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseDevices.Devices_device_event_agent.$InitInstance
// (None)
// Parameters:

void UDevices_device_event_agent::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_event_agent", "$InitInstance");

	Params::UDevices_device_event_agent__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_device_event_agent.$Block
// (None)
// Parameters:

void UDevices_device_event_agent::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_event_agent", "$Block");

	Params::UDevices_device_event_agent__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_device_event_agent.$InitCDO
// (None)
// Parameters:

void UDevices_device_event_agent::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_event_agent", "$InitCDO");

	Params::UDevices_device_event_agent__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseDevices.Devices_device_event_agent_int
// (None)

class UClass* UDevices_device_event_agent_int::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Devices_device_event_agent_int");

	return Clss;
}


// Devices_device_event_agent_int VerseDevices.Default__Devices_device_event_agent_int
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDevices_device_event_agent_int* UDevices_device_event_agent_int::GetDefaultObj()
{
	static class UDevices_device_event_agent_int* Default = nullptr;

	if (!Default)
		Default = static_cast<UDevices_device_event_agent_int*>(UDevices_device_event_agent_int::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseDevices.Devices_device_event_agent_int._L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FVerseFunctionProperty_            __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UObject*                     RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UObject* UDevices_device_event_agent_int::_L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R(FVerseFunctionProperty_ __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_event_agent_int", "_L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R");

	Params::UDevices_device_event_agent_int__L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseDevices.Devices_device_event_agent_int.Await
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UDevices_device_event_agent_int::Await(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_event_agent_int", "Await");

	Params::UDevices_device_event_agent_int_Await_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseDevices.Devices_device_event_agent_int.$InitInstance
// (None)
// Parameters:

void UDevices_device_event_agent_int::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_event_agent_int", "$InitInstance");

	Params::UDevices_device_event_agent_int__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_device_event_agent_int.$Block
// (None)
// Parameters:

void UDevices_device_event_agent_int::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_event_agent_int", "$Block");

	Params::UDevices_device_event_agent_int__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_device_event_agent_int.$InitCDO
// (None)
// Parameters:

void UDevices_device_event_agent_int::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_event_agent_int", "$InitCDO");

	Params::UDevices_device_event_agent_int__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseDevices.Devices_device_event_ai_interaction
// (None)

class UClass* UDevices_device_event_ai_interaction::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Devices_device_event_ai_interaction");

	return Clss;
}


// Devices_device_event_ai_interaction VerseDevices.Default__Devices_device_event_ai_interaction
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDevices_device_event_ai_interaction* UDevices_device_event_ai_interaction::GetDefaultObj()
{
	static class UDevices_device_event_ai_interaction* Default = nullptr;

	if (!Default)
		Default = static_cast<UDevices_device_event_ai_interaction*>(UDevices_device_event_ai_interaction::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseDevices.Devices_device_event_ai_interaction._L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FVerseFunctionProperty_            __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UObject*                     RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UObject* UDevices_device_event_ai_interaction::_L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R(FVerseFunctionProperty_ __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_event_ai_interaction", "_L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R");

	Params::UDevices_device_event_ai_interaction__L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseDevices.Devices_device_event_ai_interaction.Await
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UDevices_device_event_ai_interaction::Await(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_event_ai_interaction", "Await");

	Params::UDevices_device_event_ai_interaction_Await_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseDevices.Devices_device_event_ai_interaction.$InitInstance
// (None)
// Parameters:

void UDevices_device_event_ai_interaction::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_event_ai_interaction", "$InitInstance");

	Params::UDevices_device_event_ai_interaction__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_device_event_ai_interaction.$Block
// (None)
// Parameters:

void UDevices_device_event_ai_interaction::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_event_ai_interaction", "$Block");

	Params::UDevices_device_event_ai_interaction__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_device_event_ai_interaction.$InitCDO
// (None)
// Parameters:

void UDevices_device_event_ai_interaction::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_event_ai_interaction", "$InitCDO");

	Params::UDevices_device_event_ai_interaction__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseDevices.Devices_device_event_optional_agent
// (None)

class UClass* UDevices_device_event_optional_agent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Devices_device_event_optional_agent");

	return Clss;
}


// Devices_device_event_optional_agent VerseDevices.Default__Devices_device_event_optional_agent
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDevices_device_event_optional_agent* UDevices_device_event_optional_agent::GetDefaultObj()
{
	static class UDevices_device_event_optional_agent* Default = nullptr;

	if (!Default)
		Default = static_cast<UDevices_device_event_optional_agent*>(UDevices_device_event_optional_agent::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseDevices.Devices_device_event_optional_agent._L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FVerseFunctionProperty_            __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UObject*                     RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UObject* UDevices_device_event_optional_agent::_L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R(FVerseFunctionProperty_ __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_event_optional_agent", "_L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R");

	Params::UDevices_device_event_optional_agent__L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseDevices.Devices_device_event_optional_agent.Await
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UDevices_device_event_optional_agent::Await(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_event_optional_agent", "Await");

	Params::UDevices_device_event_optional_agent_Await_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseDevices.Devices_device_event_optional_agent.$InitInstance
// (None)
// Parameters:

void UDevices_device_event_optional_agent::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_event_optional_agent", "$InitInstance");

	Params::UDevices_device_event_optional_agent__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_device_event_optional_agent.$Block
// (None)
// Parameters:

void UDevices_device_event_optional_agent::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_event_optional_agent", "$Block");

	Params::UDevices_device_event_optional_agent__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_device_event_optional_agent.$InitCDO
// (None)
// Parameters:

void UDevices_device_event_optional_agent::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_event_optional_agent", "$InitCDO");

	Params::UDevices_device_event_optional_agent__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseDevices.Devices_device_event_optional_agent_int
// (None)

class UClass* UDevices_device_event_optional_agent_int::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Devices_device_event_optional_agent_int");

	return Clss;
}


// Devices_device_event_optional_agent_int VerseDevices.Default__Devices_device_event_optional_agent_int
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDevices_device_event_optional_agent_int* UDevices_device_event_optional_agent_int::GetDefaultObj()
{
	static class UDevices_device_event_optional_agent_int* Default = nullptr;

	if (!Default)
		Default = static_cast<UDevices_device_event_optional_agent_int*>(UDevices_device_event_optional_agent_int::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseDevices.Devices_device_event_optional_agent_int._L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FVerseFunctionProperty_            __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UObject*                     RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UObject* UDevices_device_event_optional_agent_int::_L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R(FVerseFunctionProperty_ __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_event_optional_agent_int", "_L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R");

	Params::UDevices_device_event_optional_agent_int__L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseDevices.Devices_device_event_optional_agent_int.Await
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UDevices_device_event_optional_agent_int::Await(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_event_optional_agent_int", "Await");

	Params::UDevices_device_event_optional_agent_int_Await_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseDevices.Devices_device_event_optional_agent_int.$InitInstance
// (None)
// Parameters:

void UDevices_device_event_optional_agent_int::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_event_optional_agent_int", "$InitInstance");

	Params::UDevices_device_event_optional_agent_int__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_device_event_optional_agent_int.$Block
// (None)
// Parameters:

void UDevices_device_event_optional_agent_int::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_event_optional_agent_int", "$Block");

	Params::UDevices_device_event_optional_agent_int__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_device_event_optional_agent_int.$InitCDO
// (None)
// Parameters:

void UDevices_device_event_optional_agent_int::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_event_optional_agent_int", "$InitCDO");

	Params::UDevices_device_event_optional_agent_int__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseDevices.Devices_device_event_vehicle
// (None)

class UClass* UDevices_device_event_vehicle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Devices_device_event_vehicle");

	return Clss;
}


// Devices_device_event_vehicle VerseDevices.Default__Devices_device_event_vehicle
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDevices_device_event_vehicle* UDevices_device_event_vehicle::GetDefaultObj()
{
	static class UDevices_device_event_vehicle* Default = nullptr;

	if (!Default)
		Default = static_cast<UDevices_device_event_vehicle*>(UDevices_device_event_vehicle::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseDevices.Devices_device_event_vehicle._L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FVerseFunctionProperty_            __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UObject*                     RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UObject* UDevices_device_event_vehicle::_L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R(FVerseFunctionProperty_ __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_event_vehicle", "_L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R");

	Params::UDevices_device_event_vehicle__L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseDevices.Devices_device_event_vehicle.Await
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UDevices_device_event_vehicle::Await(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_event_vehicle", "Await");

	Params::UDevices_device_event_vehicle_Await_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseDevices.Devices_device_event_vehicle.$InitInstance
// (None)
// Parameters:

void UDevices_device_event_vehicle::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_event_vehicle", "$InitInstance");

	Params::UDevices_device_event_vehicle__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_device_event_vehicle.$Block
// (None)
// Parameters:

void UDevices_device_event_vehicle::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_event_vehicle", "$Block");

	Params::UDevices_device_event_vehicle__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_device_event_vehicle.$InitCDO
// (None)
// Parameters:

void UDevices_device_event_vehicle::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_event_vehicle", "$InitCDO");

	Params::UDevices_device_event_vehicle__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseDevices.Devices_device_event_void
// (None)

class UClass* UDevices_device_event_void::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Devices_device_event_void");

	return Clss;
}


// Devices_device_event_void VerseDevices.Default__Devices_device_event_void
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDevices_device_event_void* UDevices_device_event_void::GetDefaultObj()
{
	static class UDevices_device_event_void* Default = nullptr;

	if (!Default)
		Default = static_cast<UDevices_device_event_void*>(UDevices_device_event_void::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseDevices.Devices_device_event_void._L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FVerseFunctionProperty_            __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UObject*                     RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UObject* UDevices_device_event_void::_L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R(FVerseFunctionProperty_ __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_event_void", "_L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R");

	Params::UDevices_device_event_void__L_2fVerse_2eorg_2fVerse_2fsubscribable_2fsubscribable_Lt_R_N_RSubscribe_L_Nt_Tvoid_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseDevices.Devices_device_event_void.Await
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UDevices_device_event_void::Await(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_event_void", "Await");

	Params::UDevices_device_event_void_Await_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseDevices.Devices_device_event_void.$InitInstance
// (None)
// Parameters:

void UDevices_device_event_void::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_event_void", "$InitInstance");

	Params::UDevices_device_event_void__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_device_event_void.$Block
// (None)
// Parameters:

void UDevices_device_event_void::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_event_void", "$Block");

	Params::UDevices_device_event_void__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_device_event_void.$InitCDO
// (None)
// Parameters:

void UDevices_device_event_void::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_event_void", "$InitCDO");

	Params::UDevices_device_event_void__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseDevices.Devices_device_function
// (None)

class UClass* UDevices_device_function::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Devices_device_function");

	return Clss;
}


// Devices_device_function VerseDevices.Default__Devices_device_function
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDevices_device_function* UDevices_device_function::GetDefaultObj()
{
	static class UDevices_device_function* Default = nullptr;

	if (!Default)
		Default = static_cast<UDevices_device_function*>(UDevices_device_function::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseDevices.Devices_device_function._L_2fFortnite_2ecom_2fDevices_2fdevice__function_N_RInvoke
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UDevices_device_function::_L_2fFortnite_2ecom_2fDevices_2fdevice__function_N_RInvoke(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_function", "_L_2fFortnite_2ecom_2fDevices_2fdevice__function_N_RInvoke");

	Params::UDevices_device_function__L_2fFortnite_2ecom_2fDevices_2fdevice__function_N_RInvoke_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseDevices.Devices_device_function._L_2fFortnite_2ecom_2fDevices_2fdevice__function_N_RInvoke_L_Nagent_R
// (Native, Public, BlueprintCallable)
// Parameters:
// class USimulation_agent*           __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

void UDevices_device_function::_L_2fFortnite_2ecom_2fDevices_2fdevice__function_N_RInvoke_L_Nagent_R(class USimulation_agent* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_function", "_L_2fFortnite_2ecom_2fDevices_2fdevice__function_N_RInvoke_L_Nagent_R");

	Params::UDevices_device_function__L_2fFortnite_2ecom_2fDevices_2fdevice__function_N_RInvoke_L_Nagent_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseDevices.Devices_device_function.$InitInstance
// (None)
// Parameters:

void UDevices_device_function::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_function", "$InitInstance");

	Params::UDevices_device_function__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_device_function.$Block
// (None)
// Parameters:

void UDevices_device_function::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_function", "$Block");

	Params::UDevices_device_function__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_device_function.$InitCDO
// (None)
// Parameters:

void UDevices_device_function::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_function", "$InitCDO");

	Params::UDevices_device_function__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseDevices.Devices_device_function_get_base
// (None)

class UClass* UDevices_device_function_get_base::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Devices_device_function_get_base");

	return Clss;
}


// Devices_device_function_get_base VerseDevices.Default__Devices_device_function_get_base
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDevices_device_function_get_base* UDevices_device_function_get_base::GetDefaultObj()
{
	static class UDevices_device_function_get_base* Default = nullptr;

	if (!Default)
		Default = static_cast<UDevices_device_function_get_base*>(UDevices_device_function_get_base::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseDevices.Devices_device_function_get_base.$InitInstance
// (None)
// Parameters:

void UDevices_device_function_get_base::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_function_get_base", "$InitInstance");

	Params::UDevices_device_function_get_base__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_device_function_get_base.$Block
// (None)
// Parameters:

void UDevices_device_function_get_base::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_function_get_base", "$Block");

	Params::UDevices_device_function_get_base__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_device_function_get_base.$InitCDO
// (None)
// Parameters:

void UDevices_device_function_get_base::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_function_get_base", "$InitCDO");

	Params::UDevices_device_function_get_base__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseDevices.Devices_device_function_get_agent
// (None)

class UClass* UDevices_device_function_get_agent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Devices_device_function_get_agent");

	return Clss;
}


// Devices_device_function_get_agent VerseDevices.Default__Devices_device_function_get_agent
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDevices_device_function_get_agent* UDevices_device_function_get_agent::GetDefaultObj()
{
	static class UDevices_device_function_get_agent* Default = nullptr;

	if (!Default)
		Default = static_cast<UDevices_device_function_get_agent*>(UDevices_device_function_get_agent::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseDevices.Devices_device_function_get_agent._L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__agent_N_RInvoke
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

FOptionalProperty_ UDevices_device_function_get_agent::_L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__agent_N_RInvoke(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_function_get_agent", "_L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__agent_N_RInvoke");

	Params::UDevices_device_function_get_agent__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__agent_N_RInvoke_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseDevices.Devices_device_function_get_agent.$InitInstance
// (None)
// Parameters:

void UDevices_device_function_get_agent::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_function_get_agent", "$InitInstance");

	Params::UDevices_device_function_get_agent__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_device_function_get_agent.$Block
// (None)
// Parameters:

void UDevices_device_function_get_agent::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_function_get_agent", "$Block");

	Params::UDevices_device_function_get_agent__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_device_function_get_agent.$InitCDO
// (None)
// Parameters:

void UDevices_device_function_get_agent::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_function_get_agent", "$InitCDO");

	Params::UDevices_device_function_get_agent__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseDevices.Devices_device_function_get_color
// (None)

class UClass* UDevices_device_function_get_color::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Devices_device_function_get_color");

	return Clss;
}


// Devices_device_function_get_color VerseDevices.Default__Devices_device_function_get_color
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDevices_device_function_get_color* UDevices_device_function_get_color::GetDefaultObj()
{
	static class UDevices_device_function_get_color* Default = nullptr;

	if (!Default)
		Default = static_cast<UDevices_device_function_get_color*>(UDevices_device_function_get_color::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseDevices.Devices_device_function_get_color._L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__color_N_RInvoke
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FColors_color               RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

struct FColors_color UDevices_device_function_get_color::_L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__color_N_RInvoke(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_function_get_color", "_L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__color_N_RInvoke");

	Params::UDevices_device_function_get_color__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__color_N_RInvoke_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseDevices.Devices_device_function_get_color.$InitInstance
// (None)
// Parameters:

void UDevices_device_function_get_color::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_function_get_color", "$InitInstance");

	Params::UDevices_device_function_get_color__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_device_function_get_color.$Block
// (None)
// Parameters:

void UDevices_device_function_get_color::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_function_get_color", "$Block");

	Params::UDevices_device_function_get_color__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_device_function_get_color.$InitCDO
// (None)
// Parameters:

void UDevices_device_function_get_color::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_function_get_color", "$InitCDO");

	Params::UDevices_device_function_get_color__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseDevices.Devices_device_function_get_float
// (None)

class UClass* UDevices_device_function_get_float::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Devices_device_function_get_float");

	return Clss;
}


// Devices_device_function_get_float VerseDevices.Default__Devices_device_function_get_float
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDevices_device_function_get_float* UDevices_device_function_get_float::GetDefaultObj()
{
	static class UDevices_device_function_get_float* Default = nullptr;

	if (!Default)
		Default = static_cast<UDevices_device_function_get_float*>(UDevices_device_function_get_float::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseDevices.Devices_device_function_get_float._L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__float_N_RInvoke
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// double                             RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double UDevices_device_function_get_float::_L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__float_N_RInvoke(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_function_get_float", "_L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__float_N_RInvoke");

	Params::UDevices_device_function_get_float__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__float_N_RInvoke_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseDevices.Devices_device_function_get_float.$InitInstance
// (None)
// Parameters:

void UDevices_device_function_get_float::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_function_get_float", "$InitInstance");

	Params::UDevices_device_function_get_float__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_device_function_get_float.$Block
// (None)
// Parameters:

void UDevices_device_function_get_float::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_function_get_float", "$Block");

	Params::UDevices_device_function_get_float__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_device_function_get_float.$InitCDO
// (None)
// Parameters:

void UDevices_device_function_get_float::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_function_get_float", "$InitCDO");

	Params::UDevices_device_function_get_float__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseDevices.Devices_device_function_get_int
// (None)

class UClass* UDevices_device_function_get_int::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Devices_device_function_get_int");

	return Clss;
}


// Devices_device_function_get_int VerseDevices.Default__Devices_device_function_get_int
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDevices_device_function_get_int* UDevices_device_function_get_int::GetDefaultObj()
{
	static class UDevices_device_function_get_int* Default = nullptr;

	if (!Default)
		Default = static_cast<UDevices_device_function_get_int*>(UDevices_device_function_get_int::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseDevices.Devices_device_function_get_int._L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__int_N_RInvoke
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UDevices_device_function_get_int::_L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__int_N_RInvoke(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_function_get_int", "_L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__int_N_RInvoke");

	Params::UDevices_device_function_get_int__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__int_N_RInvoke_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseDevices.Devices_device_function_get_int.$InitInstance
// (None)
// Parameters:

void UDevices_device_function_get_int::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_function_get_int", "$InitInstance");

	Params::UDevices_device_function_get_int__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_device_function_get_int.$Block
// (None)
// Parameters:

void UDevices_device_function_get_int::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_function_get_int", "$Block");

	Params::UDevices_device_function_get_int__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_device_function_get_int.$InitCDO
// (None)
// Parameters:

void UDevices_device_function_get_int::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_function_get_int", "$InitCDO");

	Params::UDevices_device_function_get_int__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseDevices.Devices_device_function_get_logic
// (None)

class UClass* UDevices_device_function_get_logic::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Devices_device_function_get_logic");

	return Clss;
}


// Devices_device_function_get_logic VerseDevices.Default__Devices_device_function_get_logic
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDevices_device_function_get_logic* UDevices_device_function_get_logic::GetDefaultObj()
{
	static class UDevices_device_function_get_logic* Default = nullptr;

	if (!Default)
		Default = static_cast<UDevices_device_function_get_logic*>(UDevices_device_function_get_logic::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseDevices.Devices_device_function_get_logic._L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__logic_N_RInvoke
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// uint8                              RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

uint8 UDevices_device_function_get_logic::_L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__logic_N_RInvoke(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_function_get_logic", "_L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__logic_N_RInvoke");

	Params::UDevices_device_function_get_logic__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__logic_N_RInvoke_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseDevices.Devices_device_function_get_logic.$InitInstance
// (None)
// Parameters:

void UDevices_device_function_get_logic::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_function_get_logic", "$InitInstance");

	Params::UDevices_device_function_get_logic__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_device_function_get_logic.$Block
// (None)
// Parameters:

void UDevices_device_function_get_logic::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_function_get_logic", "$Block");

	Params::UDevices_device_function_get_logic__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_device_function_get_logic.$InitCDO
// (None)
// Parameters:

void UDevices_device_function_get_logic::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_function_get_logic", "$InitCDO");

	Params::UDevices_device_function_get_logic__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseDevices.Devices_device_function_get_string
// (None)

class UClass* UDevices_device_function_get_string::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Devices_device_function_get_string");

	return Clss;
}


// Devices_device_function_get_string VerseDevices.Default__Devices_device_function_get_string
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDevices_device_function_get_string* UDevices_device_function_get_string::GetDefaultObj()
{
	static class UDevices_device_function_get_string* Default = nullptr;

	if (!Default)
		Default = static_cast<UDevices_device_function_get_string*>(UDevices_device_function_get_string::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseDevices.Devices_device_function_get_string._L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__string_N_RInvoke
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FVerseStringProperty_              RetVal                                                           (Parm, OutParm, ReturnParm, HasGetValueTypeHash)

FVerseStringProperty_ UDevices_device_function_get_string::_L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__string_N_RInvoke(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_function_get_string", "_L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__string_N_RInvoke");

	Params::UDevices_device_function_get_string__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__string_N_RInvoke_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseDevices.Devices_device_function_get_string.$InitInstance
// (None)
// Parameters:

void UDevices_device_function_get_string::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_function_get_string", "$InitInstance");

	Params::UDevices_device_function_get_string__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_device_function_get_string.$Block
// (None)
// Parameters:

void UDevices_device_function_get_string::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_function_get_string", "$Block");

	Params::UDevices_device_function_get_string__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_device_function_get_string.$InitCDO
// (None)
// Parameters:

void UDevices_device_function_get_string::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_function_get_string", "$InitCDO");

	Params::UDevices_device_function_get_string__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseDevices.Devices_device_function_get_vector3
// (None)

class UClass* UDevices_device_function_get_vector3::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Devices_device_function_get_vector3");

	return Clss;
}


// Devices_device_function_get_vector3 VerseDevices.Default__Devices_device_function_get_vector3
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDevices_device_function_get_vector3* UDevices_device_function_get_vector3::GetDefaultObj()
{
	static class UDevices_device_function_get_vector3* Default = nullptr;

	if (!Default)
		Default = static_cast<UDevices_device_function_get_vector3*>(UDevices_device_function_get_vector3::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseDevices.Devices_device_function_get_vector3._L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__vector3_N_RInvoke
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FSpatialMath_vector3        RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

struct FSpatialMath_vector3 UDevices_device_function_get_vector3::_L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__vector3_N_RInvoke(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_function_get_vector3", "_L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__vector3_N_RInvoke");

	Params::UDevices_device_function_get_vector3__L_2fFortnite_2ecom_2fDevices_2fdevice__function__get__vector3_N_RInvoke_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseDevices.Devices_device_function_get_vector3.$InitInstance
// (None)
// Parameters:

void UDevices_device_function_get_vector3::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_function_get_vector3", "$InitInstance");

	Params::UDevices_device_function_get_vector3__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_device_function_get_vector3.$Block
// (None)
// Parameters:

void UDevices_device_function_get_vector3::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_function_get_vector3", "$Block");

	Params::UDevices_device_function_get_vector3__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_device_function_get_vector3.$InitCDO
// (None)
// Parameters:

void UDevices_device_function_get_vector3::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_function_get_vector3", "$InitCDO");

	Params::UDevices_device_function_get_vector3__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseDevices.Devices_device_function_set_base
// (None)

class UClass* UDevices_device_function_set_base::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Devices_device_function_set_base");

	return Clss;
}


// Devices_device_function_set_base VerseDevices.Default__Devices_device_function_set_base
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDevices_device_function_set_base* UDevices_device_function_set_base::GetDefaultObj()
{
	static class UDevices_device_function_set_base* Default = nullptr;

	if (!Default)
		Default = static_cast<UDevices_device_function_set_base*>(UDevices_device_function_set_base::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseDevices.Devices_device_function_set_base.$InitInstance
// (None)
// Parameters:

void UDevices_device_function_set_base::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_function_set_base", "$InitInstance");

	Params::UDevices_device_function_set_base__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_device_function_set_base.$Block
// (None)
// Parameters:

void UDevices_device_function_set_base::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_function_set_base", "$Block");

	Params::UDevices_device_function_set_base__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_device_function_set_base.$InitCDO
// (None)
// Parameters:

void UDevices_device_function_set_base::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_function_set_base", "$InitCDO");

	Params::UDevices_device_function_set_base__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseDevices.Devices_device_function_set_agent
// (None)

class UClass* UDevices_device_function_set_agent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Devices_device_function_set_agent");

	return Clss;
}


// Devices_device_function_set_agent VerseDevices.Default__Devices_device_function_set_agent
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDevices_device_function_set_agent* UDevices_device_function_set_agent::GetDefaultObj()
{
	static class UDevices_device_function_set_agent* Default = nullptr;

	if (!Default)
		Default = static_cast<UDevices_device_function_set_agent*>(UDevices_device_function_set_agent::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseDevices.Devices_device_function_set_agent._L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__agent_N_RInvoke_L_N_Qagent_R
// (Native, Public, BlueprintCallable)
// Parameters:
// FOptionalProperty_                 __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

void UDevices_device_function_set_agent::_L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__agent_N_RInvoke_L_N_Qagent_R(FOptionalProperty_ __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_function_set_agent", "_L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__agent_N_RInvoke_L_N_Qagent_R");

	Params::UDevices_device_function_set_agent__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__agent_N_RInvoke_L_N_Qagent_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseDevices.Devices_device_function_set_agent.$InitInstance
// (None)
// Parameters:

void UDevices_device_function_set_agent::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_function_set_agent", "$InitInstance");

	Params::UDevices_device_function_set_agent__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_device_function_set_agent.$Block
// (None)
// Parameters:

void UDevices_device_function_set_agent::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_function_set_agent", "$Block");

	Params::UDevices_device_function_set_agent__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_device_function_set_agent.$InitCDO
// (None)
// Parameters:

void UDevices_device_function_set_agent::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_function_set_agent", "$InitCDO");

	Params::UDevices_device_function_set_agent__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseDevices.Devices_device_function_set_color
// (None)

class UClass* UDevices_device_function_set_color::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Devices_device_function_set_color");

	return Clss;
}


// Devices_device_function_set_color VerseDevices.Default__Devices_device_function_set_color
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDevices_device_function_set_color* UDevices_device_function_set_color::GetDefaultObj()
{
	static class UDevices_device_function_set_color* Default = nullptr;

	if (!Default)
		Default = static_cast<UDevices_device_function_set_color*>(UDevices_device_function_set_color::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseDevices.Devices_device_function_set_color._L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__color_N_RInvoke_L_Ncolor_R
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FColors_color               __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDevices_device_function_set_color::_L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__color_N_RInvoke_L_Ncolor_R(const struct FColors_color& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_function_set_color", "_L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__color_N_RInvoke_L_Ncolor_R");

	Params::UDevices_device_function_set_color__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__color_N_RInvoke_L_Ncolor_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseDevices.Devices_device_function_set_color.$InitInstance
// (None)
// Parameters:

void UDevices_device_function_set_color::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_function_set_color", "$InitInstance");

	Params::UDevices_device_function_set_color__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_device_function_set_color.$Block
// (None)
// Parameters:

void UDevices_device_function_set_color::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_function_set_color", "$Block");

	Params::UDevices_device_function_set_color__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_device_function_set_color.$InitCDO
// (None)
// Parameters:

void UDevices_device_function_set_color::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_function_set_color", "$InitCDO");

	Params::UDevices_device_function_set_color__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseDevices.Devices_device_function_set_float
// (None)

class UClass* UDevices_device_function_set_float::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Devices_device_function_set_float");

	return Clss;
}


// Devices_device_function_set_float VerseDevices.Default__Devices_device_function_set_float
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDevices_device_function_set_float* UDevices_device_function_set_float::GetDefaultObj()
{
	static class UDevices_device_function_set_float* Default = nullptr;

	if (!Default)
		Default = static_cast<UDevices_device_function_set_float*>(UDevices_device_function_set_float::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseDevices.Devices_device_function_set_float._L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__float_N_RInvoke_L_Nfloat_R
// (Native, Public, BlueprintCallable)
// Parameters:
// double                             __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDevices_device_function_set_float::_L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__float_N_RInvoke_L_Nfloat_R(double __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_function_set_float", "_L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__float_N_RInvoke_L_Nfloat_R");

	Params::UDevices_device_function_set_float__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__float_N_RInvoke_L_Nfloat_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseDevices.Devices_device_function_set_float.$InitInstance
// (None)
// Parameters:

void UDevices_device_function_set_float::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_function_set_float", "$InitInstance");

	Params::UDevices_device_function_set_float__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_device_function_set_float.$Block
// (None)
// Parameters:

void UDevices_device_function_set_float::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_function_set_float", "$Block");

	Params::UDevices_device_function_set_float__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_device_function_set_float.$InitCDO
// (None)
// Parameters:

void UDevices_device_function_set_float::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_function_set_float", "$InitCDO");

	Params::UDevices_device_function_set_float__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseDevices.Devices_device_function_set_int
// (None)

class UClass* UDevices_device_function_set_int::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Devices_device_function_set_int");

	return Clss;
}


// Devices_device_function_set_int VerseDevices.Default__Devices_device_function_set_int
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDevices_device_function_set_int* UDevices_device_function_set_int::GetDefaultObj()
{
	static class UDevices_device_function_set_int* Default = nullptr;

	if (!Default)
		Default = static_cast<UDevices_device_function_set_int*>(UDevices_device_function_set_int::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseDevices.Devices_device_function_set_int._L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__int_N_RInvoke_L_Nint_R
// (Native, Public, BlueprintCallable)
// Parameters:
// int64                              __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDevices_device_function_set_int::_L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__int_N_RInvoke_L_Nint_R(int64 __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_function_set_int", "_L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__int_N_RInvoke_L_Nint_R");

	Params::UDevices_device_function_set_int__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__int_N_RInvoke_L_Nint_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseDevices.Devices_device_function_set_int.$InitInstance
// (None)
// Parameters:

void UDevices_device_function_set_int::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_function_set_int", "$InitInstance");

	Params::UDevices_device_function_set_int__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_device_function_set_int.$Block
// (None)
// Parameters:

void UDevices_device_function_set_int::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_function_set_int", "$Block");

	Params::UDevices_device_function_set_int__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_device_function_set_int.$InitCDO
// (None)
// Parameters:

void UDevices_device_function_set_int::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_function_set_int", "$InitCDO");

	Params::UDevices_device_function_set_int__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseDevices.Devices_device_function_set_logic
// (None)

class UClass* UDevices_device_function_set_logic::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Devices_device_function_set_logic");

	return Clss;
}


// Devices_device_function_set_logic VerseDevices.Default__Devices_device_function_set_logic
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDevices_device_function_set_logic* UDevices_device_function_set_logic::GetDefaultObj()
{
	static class UDevices_device_function_set_logic* Default = nullptr;

	if (!Default)
		Default = static_cast<UDevices_device_function_set_logic*>(UDevices_device_function_set_logic::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseDevices.Devices_device_function_set_logic._L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__logic_N_RInvoke_L_Nlogic_R
// (Native, Public, BlueprintCallable)
// Parameters:
// uint8                              __verse_0xB2CDDD72_Argument                                      (Parm, NoDestructor, HasGetValueTypeHash)

void UDevices_device_function_set_logic::_L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__logic_N_RInvoke_L_Nlogic_R(uint8 __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_function_set_logic", "_L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__logic_N_RInvoke_L_Nlogic_R");

	Params::UDevices_device_function_set_logic__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__logic_N_RInvoke_L_Nlogic_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseDevices.Devices_device_function_set_logic.$InitInstance
// (None)
// Parameters:

void UDevices_device_function_set_logic::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_function_set_logic", "$InitInstance");

	Params::UDevices_device_function_set_logic__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_device_function_set_logic.$Block
// (None)
// Parameters:

void UDevices_device_function_set_logic::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_function_set_logic", "$Block");

	Params::UDevices_device_function_set_logic__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_device_function_set_logic.$InitCDO
// (None)
// Parameters:

void UDevices_device_function_set_logic::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_function_set_logic", "$InitCDO");

	Params::UDevices_device_function_set_logic__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseDevices.Devices_device_function_set_message
// (None)

class UClass* UDevices_device_function_set_message::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Devices_device_function_set_message");

	return Clss;
}


// Devices_device_function_set_message VerseDevices.Default__Devices_device_function_set_message
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDevices_device_function_set_message* UDevices_device_function_set_message::GetDefaultObj()
{
	static class UDevices_device_function_set_message* Default = nullptr;

	if (!Default)
		Default = static_cast<UDevices_device_function_set_message*>(UDevices_device_function_set_message::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseDevices.Devices_device_function_set_message._L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__message_N_RInvoke_L_Nmessage_R
// (Native, Public, BlueprintCallable)
// Parameters:
// class UVerse_message*              __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

void UDevices_device_function_set_message::_L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__message_N_RInvoke_L_Nmessage_R(class UVerse_message* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_function_set_message", "_L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__message_N_RInvoke_L_Nmessage_R");

	Params::UDevices_device_function_set_message__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__message_N_RInvoke_L_Nmessage_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseDevices.Devices_device_function_set_message.$InitInstance
// (None)
// Parameters:

void UDevices_device_function_set_message::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_function_set_message", "$InitInstance");

	Params::UDevices_device_function_set_message__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_device_function_set_message.$Block
// (None)
// Parameters:

void UDevices_device_function_set_message::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_function_set_message", "$Block");

	Params::UDevices_device_function_set_message__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_device_function_set_message.$InitCDO
// (None)
// Parameters:

void UDevices_device_function_set_message::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_function_set_message", "$InitCDO");

	Params::UDevices_device_function_set_message__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseDevices.Devices_device_function_set_multi_parameter_base
// (None)

class UClass* UDevices_device_function_set_multi_parameter_base::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Devices_device_function_set_multi_parameter_base");

	return Clss;
}


// Devices_device_function_set_multi_parameter_base VerseDevices.Default__Devices_device_function_set_multi_parameter_base
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDevices_device_function_set_multi_parameter_base* UDevices_device_function_set_multi_parameter_base::GetDefaultObj()
{
	static class UDevices_device_function_set_multi_parameter_base* Default = nullptr;

	if (!Default)
		Default = static_cast<UDevices_device_function_set_multi_parameter_base*>(UDevices_device_function_set_multi_parameter_base::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseDevices.Devices_device_function_set_multi_parameter_base.$InitInstance
// (None)
// Parameters:

void UDevices_device_function_set_multi_parameter_base::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_function_set_multi_parameter_base", "$InitInstance");

	Params::UDevices_device_function_set_multi_parameter_base__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_device_function_set_multi_parameter_base.$Block
// (None)
// Parameters:

void UDevices_device_function_set_multi_parameter_base::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_function_set_multi_parameter_base", "$Block");

	Params::UDevices_device_function_set_multi_parameter_base__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_device_function_set_multi_parameter_base.$InitCDO
// (HasDefaults)
// Parameters:
// FOptionalProperty_                 _ExprResult_0                                                    (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0x00000000__1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_1                                                    (NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_2                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_3                                                    (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0x00000000__3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_4                                                    (NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_5                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UDevices_device_function_set_multi_parameter_base::_InitCDO(FOptionalProperty_ _ExprResult_0, FOptionalProperty_ __verse_0x00000000__1, uint8 _ExprResult_1, FOptionalProperty_ _ExprResultStack_2, FOptionalProperty_ _ExprResult_3, FOptionalProperty_ __verse_0x00000000__3, uint8 _ExprResult_4, FOptionalProperty_ _ExprResultStack_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_function_set_multi_parameter_base", "$InitCDO");

	Params::UDevices_device_function_set_multi_parameter_base__InitCDO_Params Parms{};

	Parms._ExprResult_0 = _ExprResult_0;
	Parms.__verse_0x00000000__1 = __verse_0x00000000__1;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._ExprResultStack_2 = _ExprResultStack_2;
	Parms._ExprResult_3 = _ExprResult_3;
	Parms.__verse_0x00000000__3 = __verse_0x00000000__3;
	Parms._ExprResult_4 = _ExprResult_4;
	Parms._ExprResultStack_5 = _ExprResultStack_5;

	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseDevices.Devices_device_function_set_params_by_name
// (None)

class UClass* UDevices_device_function_set_params_by_name::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Devices_device_function_set_params_by_name");

	return Clss;
}


// Devices_device_function_set_params_by_name VerseDevices.Default__Devices_device_function_set_params_by_name
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDevices_device_function_set_params_by_name* UDevices_device_function_set_params_by_name::GetDefaultObj()
{
	static class UDevices_device_function_set_params_by_name* Default = nullptr;

	if (!Default)
		Default = static_cast<UDevices_device_function_set_params_by_name*>(UDevices_device_function_set_params_by_name::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseDevices.Devices_device_function_set_params_by_name._L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__params__by__name_N_RInvoke_L_N_5b_Kchar_5dfunction__parameter__base_R
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TMap<FVerseStringProperty_, class UDevices_function_parameter_base*>__verse_0xB2CDDD72_Argument                                      (Parm, ContainsInstancedReference)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

FOptionalProperty_ UDevices_device_function_set_params_by_name::_L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__params__by__name_N_RInvoke_L_N_5b_Kchar_5dfunction__parameter__base_R(TMap<FVerseStringProperty_, class UDevices_function_parameter_base*> __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_function_set_params_by_name", "_L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__params__by__name_N_RInvoke_L_N_5b_Kchar_5dfunction__parameter__base_R");

	Params::UDevices_device_function_set_params_by_name__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__params__by__name_N_RInvoke_L_N_5b_Kchar_5dfunction__parameter__base_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseDevices.Devices_device_function_set_params_by_name.$InitInstance
// (None)
// Parameters:

void UDevices_device_function_set_params_by_name::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_function_set_params_by_name", "$InitInstance");

	Params::UDevices_device_function_set_params_by_name__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_device_function_set_params_by_name.$Block
// (None)
// Parameters:

void UDevices_device_function_set_params_by_name::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_function_set_params_by_name", "$Block");

	Params::UDevices_device_function_set_params_by_name__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_device_function_set_params_by_name.$InitCDO
// (None)
// Parameters:

void UDevices_device_function_set_params_by_name::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_function_set_params_by_name", "$InitCDO");

	Params::UDevices_device_function_set_params_by_name__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseDevices.Devices_device_function_set_params_by_name_const
// (None)

class UClass* UDevices_device_function_set_params_by_name_const::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Devices_device_function_set_params_by_name_const");

	return Clss;
}


// Devices_device_function_set_params_by_name_const VerseDevices.Default__Devices_device_function_set_params_by_name_const
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDevices_device_function_set_params_by_name_const* UDevices_device_function_set_params_by_name_const::GetDefaultObj()
{
	static class UDevices_device_function_set_params_by_name_const* Default = nullptr;

	if (!Default)
		Default = static_cast<UDevices_device_function_set_params_by_name_const*>(UDevices_device_function_set_params_by_name_const::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseDevices.Devices_device_function_set_params_by_name_const._L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__params__by__name__const_N_RInvokeConst_L_N_5b_Kchar_5dfunction__parameter__base_R
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TMap<FVerseStringProperty_, class UDevices_function_parameter_base*>__verse_0xB2CDDD72_Argument                                      (Parm, ContainsInstancedReference)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

FOptionalProperty_ UDevices_device_function_set_params_by_name_const::_L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__params__by__name__const_N_RInvokeConst_L_N_5b_Kchar_5dfunction__parameter__base_R(TMap<FVerseStringProperty_, class UDevices_function_parameter_base*> __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_function_set_params_by_name_const", "_L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__params__by__name__const_N_RInvokeConst_L_N_5b_Kchar_5dfunction__parameter__base_R");

	Params::UDevices_device_function_set_params_by_name_const__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__params__by__name__const_N_RInvokeConst_L_N_5b_Kchar_5dfunction__parameter__base_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseDevices.Devices_device_function_set_params_by_name_const.$InitInstance
// (None)
// Parameters:

void UDevices_device_function_set_params_by_name_const::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_function_set_params_by_name_const", "$InitInstance");

	Params::UDevices_device_function_set_params_by_name_const__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_device_function_set_params_by_name_const.$Block
// (None)
// Parameters:

void UDevices_device_function_set_params_by_name_const::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_function_set_params_by_name_const", "$Block");

	Params::UDevices_device_function_set_params_by_name_const__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_device_function_set_params_by_name_const.$InitCDO
// (None)
// Parameters:

void UDevices_device_function_set_params_by_name_const::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_function_set_params_by_name_const", "$InitCDO");

	Params::UDevices_device_function_set_params_by_name_const__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseDevices.Devices_device_function_set_params_by_type
// (None)

class UClass* UDevices_device_function_set_params_by_type::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Devices_device_function_set_params_by_type");

	return Clss;
}


// Devices_device_function_set_params_by_type VerseDevices.Default__Devices_device_function_set_params_by_type
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDevices_device_function_set_params_by_type* UDevices_device_function_set_params_by_type::GetDefaultObj()
{
	static class UDevices_device_function_set_params_by_type* Default = nullptr;

	if (!Default)
		Default = static_cast<UDevices_device_function_set_params_by_type*>(UDevices_device_function_set_params_by_type::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseDevices.Devices_device_function_set_params_by_type._L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__params__by__type_N_RInvoke_L_N_Kfunction__parameter__base_R
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class UDevices_function_parameter_base*>__verse_0xB2CDDD72_Argument                                      (Parm, ContainsInstancedReference)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

FOptionalProperty_ UDevices_device_function_set_params_by_type::_L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__params__by__type_N_RInvoke_L_N_Kfunction__parameter__base_R(const TArray<class UDevices_function_parameter_base*>& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_function_set_params_by_type", "_L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__params__by__type_N_RInvoke_L_N_Kfunction__parameter__base_R");

	Params::UDevices_device_function_set_params_by_type__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__params__by__type_N_RInvoke_L_N_Kfunction__parameter__base_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseDevices.Devices_device_function_set_params_by_type.$InitInstance
// (None)
// Parameters:

void UDevices_device_function_set_params_by_type::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_function_set_params_by_type", "$InitInstance");

	Params::UDevices_device_function_set_params_by_type__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_device_function_set_params_by_type.$Block
// (None)
// Parameters:

void UDevices_device_function_set_params_by_type::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_function_set_params_by_type", "$Block");

	Params::UDevices_device_function_set_params_by_type__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_device_function_set_params_by_type.$InitCDO
// (None)
// Parameters:

void UDevices_device_function_set_params_by_type::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_function_set_params_by_type", "$InitCDO");

	Params::UDevices_device_function_set_params_by_type__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseDevices.Devices_device_function_set_params_by_type_const
// (None)

class UClass* UDevices_device_function_set_params_by_type_const::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Devices_device_function_set_params_by_type_const");

	return Clss;
}


// Devices_device_function_set_params_by_type_const VerseDevices.Default__Devices_device_function_set_params_by_type_const
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDevices_device_function_set_params_by_type_const* UDevices_device_function_set_params_by_type_const::GetDefaultObj()
{
	static class UDevices_device_function_set_params_by_type_const* Default = nullptr;

	if (!Default)
		Default = static_cast<UDevices_device_function_set_params_by_type_const*>(UDevices_device_function_set_params_by_type_const::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseDevices.Devices_device_function_set_params_by_type_const._L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__params__by__type__const_N_RInvokeConst_L_N_Kfunction__parameter__base_R
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class UDevices_function_parameter_base*>__verse_0xB2CDDD72_Argument                                      (Parm, ContainsInstancedReference)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

FOptionalProperty_ UDevices_device_function_set_params_by_type_const::_L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__params__by__type__const_N_RInvokeConst_L_N_Kfunction__parameter__base_R(const TArray<class UDevices_function_parameter_base*>& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_function_set_params_by_type_const", "_L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__params__by__type__const_N_RInvokeConst_L_N_Kfunction__parameter__base_R");

	Params::UDevices_device_function_set_params_by_type_const__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__params__by__type__const_N_RInvokeConst_L_N_Kfunction__parameter__base_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseDevices.Devices_device_function_set_params_by_type_const.$InitInstance
// (None)
// Parameters:

void UDevices_device_function_set_params_by_type_const::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_function_set_params_by_type_const", "$InitInstance");

	Params::UDevices_device_function_set_params_by_type_const__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_device_function_set_params_by_type_const.$Block
// (None)
// Parameters:

void UDevices_device_function_set_params_by_type_const::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_function_set_params_by_type_const", "$Block");

	Params::UDevices_device_function_set_params_by_type_const__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_device_function_set_params_by_type_const.$InitCDO
// (None)
// Parameters:

void UDevices_device_function_set_params_by_type_const::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_function_set_params_by_type_const", "$InitCDO");

	Params::UDevices_device_function_set_params_by_type_const__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseDevices.Devices_device_function_set_string
// (None)

class UClass* UDevices_device_function_set_string::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Devices_device_function_set_string");

	return Clss;
}


// Devices_device_function_set_string VerseDevices.Default__Devices_device_function_set_string
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDevices_device_function_set_string* UDevices_device_function_set_string::GetDefaultObj()
{
	static class UDevices_device_function_set_string* Default = nullptr;

	if (!Default)
		Default = static_cast<UDevices_device_function_set_string*>(UDevices_device_function_set_string::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseDevices.Devices_device_function_set_string._L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__string_N_RInvoke_L_N_Kchar_R
// (Native, Public, BlueprintCallable)
// Parameters:
// FVerseStringProperty_              __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UDevices_device_function_set_string::_L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__string_N_RInvoke_L_N_Kchar_R(FVerseStringProperty_ __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_function_set_string", "_L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__string_N_RInvoke_L_N_Kchar_R");

	Params::UDevices_device_function_set_string__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__string_N_RInvoke_L_N_Kchar_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseDevices.Devices_device_function_set_string.$InitInstance
// (None)
// Parameters:

void UDevices_device_function_set_string::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_function_set_string", "$InitInstance");

	Params::UDevices_device_function_set_string__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_device_function_set_string.$Block
// (None)
// Parameters:

void UDevices_device_function_set_string::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_function_set_string", "$Block");

	Params::UDevices_device_function_set_string__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_device_function_set_string.$InitCDO
// (None)
// Parameters:

void UDevices_device_function_set_string::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_function_set_string", "$InitCDO");

	Params::UDevices_device_function_set_string__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseDevices.Devices_device_function_set_vector3
// (None)

class UClass* UDevices_device_function_set_vector3::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Devices_device_function_set_vector3");

	return Clss;
}


// Devices_device_function_set_vector3 VerseDevices.Default__Devices_device_function_set_vector3
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDevices_device_function_set_vector3* UDevices_device_function_set_vector3::GetDefaultObj()
{
	static class UDevices_device_function_set_vector3* Default = nullptr;

	if (!Default)
		Default = static_cast<UDevices_device_function_set_vector3*>(UDevices_device_function_set_vector3::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseDevices.Devices_device_function_set_vector3._L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__vector3_N_RInvoke_L_Nvector3_R
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FSpatialMath_vector3        __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UDevices_device_function_set_vector3::_L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__vector3_N_RInvoke_L_Nvector3_R(const struct FSpatialMath_vector3& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_function_set_vector3", "_L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__vector3_N_RInvoke_L_Nvector3_R");

	Params::UDevices_device_function_set_vector3__L_2fFortnite_2ecom_2fDevices_2fdevice__function__set__vector3_N_RInvoke_L_Nvector3_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseDevices.Devices_device_function_set_vector3.$InitInstance
// (None)
// Parameters:

void UDevices_device_function_set_vector3::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_function_set_vector3", "$InitInstance");

	Params::UDevices_device_function_set_vector3__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_device_function_set_vector3.$Block
// (None)
// Parameters:

void UDevices_device_function_set_vector3::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_function_set_vector3", "$Block");

	Params::UDevices_device_function_set_vector3__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_device_function_set_vector3.$InitCDO
// (None)
// Parameters:

void UDevices_device_function_set_vector3::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_function_set_vector3", "$InitCDO");

	Params::UDevices_device_function_set_vector3__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseDevices.Devices_device_subscription
// (None)

class UClass* UDevices_device_subscription::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Devices_device_subscription");

	return Clss;
}


// Devices_device_subscription VerseDevices.Default__Devices_device_subscription
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDevices_device_subscription* UDevices_device_subscription::GetDefaultObj()
{
	static class UDevices_device_subscription* Default = nullptr;

	if (!Default)
		Default = static_cast<UDevices_device_subscription*>(UDevices_device_subscription::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseDevices.Devices_device_subscription._L_2fVerse_2eorg_2fVerse_2fcancelable_N_RCancel
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UDevices_device_subscription::_L_2fVerse_2eorg_2fVerse_2fcancelable_N_RCancel(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_subscription", "_L_2fVerse_2eorg_2fVerse_2fcancelable_N_RCancel");

	Params::UDevices_device_subscription__L_2fVerse_2eorg_2fVerse_2fcancelable_N_RCancel_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseDevices.Devices_device_subscription.$InitInstance
// (None)
// Parameters:

void UDevices_device_subscription::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_subscription", "$InitInstance");

	Params::UDevices_device_subscription__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_device_subscription.$Block
// (None)
// Parameters:

void UDevices_device_subscription::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_subscription", "$Block");

	Params::UDevices_device_subscription__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_device_subscription.$InitCDO
// (None)
// Parameters:

void UDevices_device_subscription::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_device_subscription", "$InitCDO");

	Params::UDevices_device_subscription__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseDevices.Devices_function_parameter_base
// (None)

class UClass* UDevices_function_parameter_base::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Devices_function_parameter_base");

	return Clss;
}


// Devices_function_parameter_base VerseDevices.Default__Devices_function_parameter_base
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDevices_function_parameter_base* UDevices_function_parameter_base::GetDefaultObj()
{
	static class UDevices_function_parameter_base* Default = nullptr;

	if (!Default)
		Default = static_cast<UDevices_function_parameter_base*>(UDevices_function_parameter_base::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseDevices.Devices_function_parameter_base.$InitInstance
// (None)
// Parameters:

void UDevices_function_parameter_base::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_function_parameter_base", "$InitInstance");

	Params::UDevices_function_parameter_base__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_function_parameter_base.$Block
// (None)
// Parameters:

void UDevices_function_parameter_base::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_function_parameter_base", "$Block");

	Params::UDevices_function_parameter_base__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_function_parameter_base.$InitCDO
// (None)
// Parameters:

void UDevices_function_parameter_base::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_function_parameter_base", "$InitCDO");

	Params::UDevices_function_parameter_base__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseDevices.Devices_function_parameter_agent
// (None)

class UClass* UDevices_function_parameter_agent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Devices_function_parameter_agent");

	return Clss;
}


// Devices_function_parameter_agent VerseDevices.Default__Devices_function_parameter_agent
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDevices_function_parameter_agent* UDevices_function_parameter_agent::GetDefaultObj()
{
	static class UDevices_function_parameter_agent* Default = nullptr;

	if (!Default)
		Default = static_cast<UDevices_function_parameter_agent*>(UDevices_function_parameter_agent::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseDevices.Devices_function_parameter_agent.$InitInstance
// (None)
// Parameters:

void UDevices_function_parameter_agent::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_function_parameter_agent", "$InitInstance");

	Params::UDevices_function_parameter_agent__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_function_parameter_agent.$Block
// (None)
// Parameters:

void UDevices_function_parameter_agent::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_function_parameter_agent", "$Block");

	Params::UDevices_function_parameter_agent__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_function_parameter_agent.$InitCDO
// (None)
// Parameters:

void UDevices_function_parameter_agent::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_function_parameter_agent", "$InitCDO");

	Params::UDevices_function_parameter_agent__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseDevices.Devices_function_parameter_color
// (None)

class UClass* UDevices_function_parameter_color::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Devices_function_parameter_color");

	return Clss;
}


// Devices_function_parameter_color VerseDevices.Default__Devices_function_parameter_color
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDevices_function_parameter_color* UDevices_function_parameter_color::GetDefaultObj()
{
	static class UDevices_function_parameter_color* Default = nullptr;

	if (!Default)
		Default = static_cast<UDevices_function_parameter_color*>(UDevices_function_parameter_color::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseDevices.Devices_function_parameter_color.$InitInstance
// (None)
// Parameters:

void UDevices_function_parameter_color::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_function_parameter_color", "$InitInstance");

	Params::UDevices_function_parameter_color__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_function_parameter_color.$Block
// (None)
// Parameters:

void UDevices_function_parameter_color::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_function_parameter_color", "$Block");

	Params::UDevices_function_parameter_color__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_function_parameter_color.$InitCDO
// (None)
// Parameters:

void UDevices_function_parameter_color::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_function_parameter_color", "$InitCDO");

	Params::UDevices_function_parameter_color__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseDevices.Devices_function_parameter_float
// (None)

class UClass* UDevices_function_parameter_float::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Devices_function_parameter_float");

	return Clss;
}


// Devices_function_parameter_float VerseDevices.Default__Devices_function_parameter_float
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDevices_function_parameter_float* UDevices_function_parameter_float::GetDefaultObj()
{
	static class UDevices_function_parameter_float* Default = nullptr;

	if (!Default)
		Default = static_cast<UDevices_function_parameter_float*>(UDevices_function_parameter_float::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseDevices.Devices_function_parameter_float.$InitInstance
// (None)
// Parameters:

void UDevices_function_parameter_float::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_function_parameter_float", "$InitInstance");

	Params::UDevices_function_parameter_float__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_function_parameter_float.$Block
// (None)
// Parameters:

void UDevices_function_parameter_float::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_function_parameter_float", "$Block");

	Params::UDevices_function_parameter_float__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_function_parameter_float.$InitCDO
// (None)
// Parameters:

void UDevices_function_parameter_float::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_function_parameter_float", "$InitCDO");

	Params::UDevices_function_parameter_float__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseDevices.Devices_function_parameter_int
// (None)

class UClass* UDevices_function_parameter_int::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Devices_function_parameter_int");

	return Clss;
}


// Devices_function_parameter_int VerseDevices.Default__Devices_function_parameter_int
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDevices_function_parameter_int* UDevices_function_parameter_int::GetDefaultObj()
{
	static class UDevices_function_parameter_int* Default = nullptr;

	if (!Default)
		Default = static_cast<UDevices_function_parameter_int*>(UDevices_function_parameter_int::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseDevices.Devices_function_parameter_int.$InitInstance
// (None)
// Parameters:

void UDevices_function_parameter_int::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_function_parameter_int", "$InitInstance");

	Params::UDevices_function_parameter_int__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_function_parameter_int.$Block
// (None)
// Parameters:

void UDevices_function_parameter_int::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_function_parameter_int", "$Block");

	Params::UDevices_function_parameter_int__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_function_parameter_int.$InitCDO
// (None)
// Parameters:

void UDevices_function_parameter_int::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_function_parameter_int", "$InitCDO");

	Params::UDevices_function_parameter_int__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseDevices.Devices_function_parameter_logic
// (None)

class UClass* UDevices_function_parameter_logic::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Devices_function_parameter_logic");

	return Clss;
}


// Devices_function_parameter_logic VerseDevices.Default__Devices_function_parameter_logic
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDevices_function_parameter_logic* UDevices_function_parameter_logic::GetDefaultObj()
{
	static class UDevices_function_parameter_logic* Default = nullptr;

	if (!Default)
		Default = static_cast<UDevices_function_parameter_logic*>(UDevices_function_parameter_logic::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseDevices.Devices_function_parameter_logic.$InitInstance
// (None)
// Parameters:

void UDevices_function_parameter_logic::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_function_parameter_logic", "$InitInstance");

	Params::UDevices_function_parameter_logic__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_function_parameter_logic.$Block
// (None)
// Parameters:

void UDevices_function_parameter_logic::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_function_parameter_logic", "$Block");

	Params::UDevices_function_parameter_logic__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_function_parameter_logic.$InitCDO
// (None)
// Parameters:

void UDevices_function_parameter_logic::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_function_parameter_logic", "$InitCDO");

	Params::UDevices_function_parameter_logic__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseDevices.Devices_function_parameter_message
// (None)

class UClass* UDevices_function_parameter_message::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Devices_function_parameter_message");

	return Clss;
}


// Devices_function_parameter_message VerseDevices.Default__Devices_function_parameter_message
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDevices_function_parameter_message* UDevices_function_parameter_message::GetDefaultObj()
{
	static class UDevices_function_parameter_message* Default = nullptr;

	if (!Default)
		Default = static_cast<UDevices_function_parameter_message*>(UDevices_function_parameter_message::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseDevices.Devices_function_parameter_message.$InitInstance
// (None)
// Parameters:

void UDevices_function_parameter_message::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_function_parameter_message", "$InitInstance");

	Params::UDevices_function_parameter_message__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_function_parameter_message.$Block
// (None)
// Parameters:

void UDevices_function_parameter_message::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_function_parameter_message", "$Block");

	Params::UDevices_function_parameter_message__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_function_parameter_message.$InitCDO
// (None)
// Parameters:

void UDevices_function_parameter_message::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_function_parameter_message", "$InitCDO");

	Params::UDevices_function_parameter_message__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseDevices.Devices_function_parameter_string
// (None)

class UClass* UDevices_function_parameter_string::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Devices_function_parameter_string");

	return Clss;
}


// Devices_function_parameter_string VerseDevices.Default__Devices_function_parameter_string
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDevices_function_parameter_string* UDevices_function_parameter_string::GetDefaultObj()
{
	static class UDevices_function_parameter_string* Default = nullptr;

	if (!Default)
		Default = static_cast<UDevices_function_parameter_string*>(UDevices_function_parameter_string::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseDevices.Devices_function_parameter_string.$InitInstance
// (None)
// Parameters:

void UDevices_function_parameter_string::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_function_parameter_string", "$InitInstance");

	Params::UDevices_function_parameter_string__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_function_parameter_string.$Block
// (None)
// Parameters:

void UDevices_function_parameter_string::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_function_parameter_string", "$Block");

	Params::UDevices_function_parameter_string__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_function_parameter_string.$InitCDO
// (None)
// Parameters:

void UDevices_function_parameter_string::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_function_parameter_string", "$InitCDO");

	Params::UDevices_function_parameter_string__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseDevices.Devices_function_parameter_vector3
// (None)

class UClass* UDevices_function_parameter_vector3::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Devices_function_parameter_vector3");

	return Clss;
}


// Devices_function_parameter_vector3 VerseDevices.Default__Devices_function_parameter_vector3
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDevices_function_parameter_vector3* UDevices_function_parameter_vector3::GetDefaultObj()
{
	static class UDevices_function_parameter_vector3* Default = nullptr;

	if (!Default)
		Default = static_cast<UDevices_function_parameter_vector3*>(UDevices_function_parameter_vector3::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseDevices.Devices_function_parameter_vector3.$InitInstance
// (None)
// Parameters:

void UDevices_function_parameter_vector3::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_function_parameter_vector3", "$InitInstance");

	Params::UDevices_function_parameter_vector3__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_function_parameter_vector3.$Block
// (None)
// Parameters:

void UDevices_function_parameter_vector3::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_function_parameter_vector3", "$Block");

	Params::UDevices_function_parameter_vector3__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_function_parameter_vector3.$InitCDO
// (None)
// Parameters:

void UDevices_function_parameter_vector3::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_function_parameter_vector3", "$InitCDO");

	Params::UDevices_function_parameter_vector3__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseDevices.Devices_move_to_debug_log
// (None)

class UClass* UDevices_move_to_debug_log::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Devices_move_to_debug_log");

	return Clss;
}


// Devices_move_to_debug_log VerseDevices.Default__Devices_move_to_debug_log
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDevices_move_to_debug_log* UDevices_move_to_debug_log::GetDefaultObj()
{
	static class UDevices_move_to_debug_log* Default = nullptr;

	if (!Default)
		Default = static_cast<UDevices_move_to_debug_log*>(UDevices_move_to_debug_log::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseDevices.Devices_move_to_debug_log.$InitInstance
// (None)
// Parameters:

void UDevices_move_to_debug_log::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_move_to_debug_log", "$InitInstance");

	Params::UDevices_move_to_debug_log__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_move_to_debug_log.$Block
// (None)
// Parameters:

void UDevices_move_to_debug_log::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_move_to_debug_log", "$Block");

	Params::UDevices_move_to_debug_log__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_move_to_debug_log.$InitCDO
// (None)
// Parameters:

void UDevices_move_to_debug_log::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_move_to_debug_log", "$InitCDO");

	Params::UDevices_move_to_debug_log__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseDevices.Devices_teleport_to_debug_log
// (None)

class UClass* UDevices_teleport_to_debug_log::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Devices_teleport_to_debug_log");

	return Clss;
}


// Devices_teleport_to_debug_log VerseDevices.Default__Devices_teleport_to_debug_log
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UDevices_teleport_to_debug_log* UDevices_teleport_to_debug_log::GetDefaultObj()
{
	static class UDevices_teleport_to_debug_log* Default = nullptr;

	if (!Default)
		Default = static_cast<UDevices_teleport_to_debug_log*>(UDevices_teleport_to_debug_log::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseDevices.Devices_teleport_to_debug_log.$InitInstance
// (None)
// Parameters:

void UDevices_teleport_to_debug_log::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_teleport_to_debug_log", "$InitInstance");

	Params::UDevices_teleport_to_debug_log__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_teleport_to_debug_log.$Block
// (None)
// Parameters:

void UDevices_teleport_to_debug_log::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_teleport_to_debug_log", "$Block");

	Params::UDevices_teleport_to_debug_log__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseDevices.Devices_teleport_to_debug_log.$InitCDO
// (None)
// Parameters:

void UDevices_teleport_to_debug_log::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Devices_teleport_to_debug_log", "$InitCDO");

	Params::UDevices_teleport_to_debug_log__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseDevices.task_Devices$operator_U_2eMoveToInternal_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntuple_Ltransform_Mfloat_R_R
// (None)

class UClass* UTask_Devices_operator_U_2eMoveToInternal_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntuple_Ltransform_Mfloat_R_R::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_Devices$operator_U_2eMoveToInternal_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntuple_Ltransform_Mfloat_R_R");

	return Clss;
}


// task_Devices$operator_U_2eMoveToInternal_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntuple_Ltransform_Mfloat_R_R VerseDevices.Default__task_Devices$operator_U_2eMoveToInternal_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntuple_Ltransform_Mfloat_R_R
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_Devices_operator_U_2eMoveToInternal_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntuple_Ltransform_Mfloat_R_R* UTask_Devices_operator_U_2eMoveToInternal_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntuple_Ltransform_Mfloat_R_R::GetDefaultObj()
{
	static class UTask_Devices_operator_U_2eMoveToInternal_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntuple_Ltransform_Mfloat_R_R* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_Devices_operator_U_2eMoveToInternal_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntuple_Ltransform_Mfloat_R_R*>(UTask_Devices_operator_U_2eMoveToInternal_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntuple_Ltransform_Mfloat_R_R::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseDevices.task_Devices$operator_U_2eMoveToInternal_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntuple_Ltransform_Mfloat_R_R.Update
// (Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_Devices_operator_U_2eMoveToInternal_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntuple_Ltransform_Mfloat_R_R::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_Devices$operator_U_2eMoveToInternal_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntuple_Ltransform_Mfloat_R_R", "Update");

	Params::UTask_Devices_operator_U_2eMoveToInternal_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntuple_Ltransform_Mfloat_R_R_Update_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass VerseDevices.task_Devices$operator_U_2eMoveToInternal_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntuple_Lvector3_Mrotation_Mfloat_R_R
// (None)

class UClass* UTask_Devices_operator_U_2eMoveToInternal_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntuple_Lvector3_Mrotation_Mfloat_R_R::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_Devices$operator_U_2eMoveToInternal_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntuple_Lvector3_Mrotation_Mfloat_R_R");

	return Clss;
}


// task_Devices$operator_U_2eMoveToInternal_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntuple_Lvector3_Mrotation_Mfloat_R_R VerseDevices.Default__task_Devices$operator_U_2eMoveToInternal_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntuple_Lvector3_Mrotation_Mfloat_R_R
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_Devices_operator_U_2eMoveToInternal_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntuple_Lvector3_Mrotation_Mfloat_R_R* UTask_Devices_operator_U_2eMoveToInternal_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntuple_Lvector3_Mrotation_Mfloat_R_R::GetDefaultObj()
{
	static class UTask_Devices_operator_U_2eMoveToInternal_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntuple_Lvector3_Mrotation_Mfloat_R_R* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_Devices_operator_U_2eMoveToInternal_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntuple_Lvector3_Mrotation_Mfloat_R_R*>(UTask_Devices_operator_U_2eMoveToInternal_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntuple_Lvector3_Mrotation_Mfloat_R_R::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseDevices.task_Devices$operator_U_2eMoveToInternal_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntuple_Lvector3_Mrotation_Mfloat_R_R.Update
// (Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_Devices_operator_U_2eMoveToInternal_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntuple_Lvector3_Mrotation_Mfloat_R_R::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_Devices$operator_U_2eMoveToInternal_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntuple_Lvector3_Mrotation_Mfloat_R_R", "Update");

	Params::UTask_Devices_operator_U_2eMoveToInternal_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntuple_Lvector3_Mrotation_Mfloat_R_R_Update_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass VerseDevices.task_Devices$operator_U_2eMoveToInternalImpl_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntuple_Ltransform_Mfloat_R_R
// (None)

class UClass* UTask_Devices_operator_U_2eMoveToInternalImpl_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntuple_Ltransform_Mfloat_R_R::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_Devices$operator_U_2eMoveToInternalImpl_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntuple_Ltransform_Mfloat_R_R");

	return Clss;
}


// task_Devices$operator_U_2eMoveToInternalImpl_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntuple_Ltransform_Mfloat_R_R VerseDevices.Default__task_Devices$operator_U_2eMoveToInternalImpl_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntuple_Ltransform_Mfloat_R_R
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_Devices_operator_U_2eMoveToInternalImpl_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntuple_Ltransform_Mfloat_R_R* UTask_Devices_operator_U_2eMoveToInternalImpl_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntuple_Ltransform_Mfloat_R_R::GetDefaultObj()
{
	static class UTask_Devices_operator_U_2eMoveToInternalImpl_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntuple_Ltransform_Mfloat_R_R* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_Devices_operator_U_2eMoveToInternalImpl_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntuple_Ltransform_Mfloat_R_R*>(UTask_Devices_operator_U_2eMoveToInternalImpl_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntuple_Ltransform_Mfloat_R_R::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseDevices.task_Devices$operator_U_2eMoveToInternalImpl_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntuple_Ltransform_Mfloat_R_R.Update
// (Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_Devices_operator_U_2eMoveToInternalImpl_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntuple_Ltransform_Mfloat_R_R::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_Devices$operator_U_2eMoveToInternalImpl_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntuple_Ltransform_Mfloat_R_R", "Update");

	Params::UTask_Devices_operator_U_2eMoveToInternalImpl_U_L_Ncreative__movable__object__base_M_Ntuple_L_R_M_Ntuple_Ltransform_Mfloat_R_R_Update_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass VerseDevices.task_Devices_creative_device$MoveTo_L_Ntransform_M_Nfloat_R
// (None)

class UClass* UTask_Devices_creative_device_MoveTo_L_Ntransform_M_Nfloat_R::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_Devices_creative_device$MoveTo_L_Ntransform_M_Nfloat_R");

	return Clss;
}


// task_Devices_creative_device$MoveTo_L_Ntransform_M_Nfloat_R VerseDevices.Default__task_Devices_creative_device$MoveTo_L_Ntransform_M_Nfloat_R
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_Devices_creative_device_MoveTo_L_Ntransform_M_Nfloat_R* UTask_Devices_creative_device_MoveTo_L_Ntransform_M_Nfloat_R::GetDefaultObj()
{
	static class UTask_Devices_creative_device_MoveTo_L_Ntransform_M_Nfloat_R* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_Devices_creative_device_MoveTo_L_Ntransform_M_Nfloat_R*>(UTask_Devices_creative_device_MoveTo_L_Ntransform_M_Nfloat_R::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseDevices.task_Devices_creative_device$MoveTo_L_Ntransform_M_Nfloat_R.Update
// (Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_Devices_creative_device_MoveTo_L_Ntransform_M_Nfloat_R::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_Devices_creative_device$MoveTo_L_Ntransform_M_Nfloat_R", "Update");

	Params::UTask_Devices_creative_device_MoveTo_L_Ntransform_M_Nfloat_R_Update_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass VerseDevices.task_Devices_creative_device$MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R
// (None)

class UClass* UTask_Devices_creative_device_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_Devices_creative_device$MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R");

	return Clss;
}


// task_Devices_creative_device$MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R VerseDevices.Default__task_Devices_creative_device$MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_Devices_creative_device_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R* UTask_Devices_creative_device_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R::GetDefaultObj()
{
	static class UTask_Devices_creative_device_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_Devices_creative_device_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R*>(UTask_Devices_creative_device_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseDevices.task_Devices_creative_device$MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R.Update
// (Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_Devices_creative_device_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_Devices_creative_device$MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R", "Update");

	Params::UTask_Devices_creative_device_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R_Update_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass VerseDevices.task_Devices_creative_device$OnBegin
// (None)

class UClass* UTask_Devices_creative_device_OnBegin::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_Devices_creative_device$OnBegin");

	return Clss;
}


// task_Devices_creative_device$OnBegin VerseDevices.Default__task_Devices_creative_device$OnBegin
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_Devices_creative_device_OnBegin* UTask_Devices_creative_device_OnBegin::GetDefaultObj()
{
	static class UTask_Devices_creative_device_OnBegin* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_Devices_creative_device_OnBegin*>(UTask_Devices_creative_device_OnBegin::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseDevices.task_Devices_creative_device$OnBegin.Update
// (Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_Devices_creative_device_OnBegin::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_Devices_creative_device$OnBegin", "Update");

	Params::UTask_Devices_creative_device_OnBegin_Update_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass VerseDevices.task_Devices_creative_prop$MoveTo_L_Ntransform_M_Nfloat_R
// (None)

class UClass* UTask_Devices_creative_prop_MoveTo_L_Ntransform_M_Nfloat_R::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_Devices_creative_prop$MoveTo_L_Ntransform_M_Nfloat_R");

	return Clss;
}


// task_Devices_creative_prop$MoveTo_L_Ntransform_M_Nfloat_R VerseDevices.Default__task_Devices_creative_prop$MoveTo_L_Ntransform_M_Nfloat_R
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_Devices_creative_prop_MoveTo_L_Ntransform_M_Nfloat_R* UTask_Devices_creative_prop_MoveTo_L_Ntransform_M_Nfloat_R::GetDefaultObj()
{
	static class UTask_Devices_creative_prop_MoveTo_L_Ntransform_M_Nfloat_R* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_Devices_creative_prop_MoveTo_L_Ntransform_M_Nfloat_R*>(UTask_Devices_creative_prop_MoveTo_L_Ntransform_M_Nfloat_R::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseDevices.task_Devices_creative_prop$MoveTo_L_Ntransform_M_Nfloat_R.Update
// (Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_Devices_creative_prop_MoveTo_L_Ntransform_M_Nfloat_R::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_Devices_creative_prop$MoveTo_L_Ntransform_M_Nfloat_R", "Update");

	Params::UTask_Devices_creative_prop_MoveTo_L_Ntransform_M_Nfloat_R_Update_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass VerseDevices.task_Devices_creative_prop$MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R
// (None)

class UClass* UTask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_Devices_creative_prop$MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R");

	return Clss;
}


// task_Devices_creative_prop$MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R VerseDevices.Default__task_Devices_creative_prop$MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R* UTask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R::GetDefaultObj()
{
	static class UTask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R*>(UTask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseDevices.task_Devices_creative_prop$MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R.Update
// (Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_Devices_creative_prop$MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R", "Update");

	Params::UTask_Devices_creative_prop_MoveTo_L_Nvector3_M_Nrotation_M_Nfloat_R_Update_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass VerseDevices.task_Devices_CreativeAnimation_animation_controller$AwaitNextKeyframe
// (None)

class UClass* UTask_Devices_CreativeAnimation_animation_controller_AwaitNextKeyframe::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_Devices_CreativeAnimation_animation_controller$AwaitNextKeyframe");

	return Clss;
}


// task_Devices_CreativeAnimation_animation_controller$AwaitNextKeyframe VerseDevices.Default__task_Devices_CreativeAnimation_animation_controller$AwaitNextKeyframe
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_Devices_CreativeAnimation_animation_controller_AwaitNextKeyframe* UTask_Devices_CreativeAnimation_animation_controller_AwaitNextKeyframe::GetDefaultObj()
{
	static class UTask_Devices_CreativeAnimation_animation_controller_AwaitNextKeyframe* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_Devices_CreativeAnimation_animation_controller_AwaitNextKeyframe*>(UTask_Devices_CreativeAnimation_animation_controller_AwaitNextKeyframe::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseDevices.task_Devices_CreativeAnimation_animation_controller$AwaitNextKeyframe.Update
// (Native, Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_Devices_CreativeAnimation_animation_controller_AwaitNextKeyframe::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_Devices_CreativeAnimation_animation_controller$AwaitNextKeyframe", "Update");

	Params::UTask_Devices_CreativeAnimation_animation_controller_AwaitNextKeyframe_Update_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// VerseClass VerseDevices.task_Devices_device_event_agent$Await
// (None)

class UClass* UTask_Devices_device_event_agent_Await::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_Devices_device_event_agent$Await");

	return Clss;
}


// task_Devices_device_event_agent$Await VerseDevices.Default__task_Devices_device_event_agent$Await
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_Devices_device_event_agent_Await* UTask_Devices_device_event_agent_Await::GetDefaultObj()
{
	static class UTask_Devices_device_event_agent_Await* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_Devices_device_event_agent_Await*>(UTask_Devices_device_event_agent_Await::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseDevices.task_Devices_device_event_agent$Await.Update
// (Native, Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_Devices_device_event_agent_Await::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_Devices_device_event_agent$Await", "Update");

	Params::UTask_Devices_device_event_agent_Await_Update_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// VerseClass VerseDevices.task_Devices_device_event_agent_int$Await
// (None)

class UClass* UTask_Devices_device_event_agent_int_Await::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_Devices_device_event_agent_int$Await");

	return Clss;
}


// task_Devices_device_event_agent_int$Await VerseDevices.Default__task_Devices_device_event_agent_int$Await
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_Devices_device_event_agent_int_Await* UTask_Devices_device_event_agent_int_Await::GetDefaultObj()
{
	static class UTask_Devices_device_event_agent_int_Await* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_Devices_device_event_agent_int_Await*>(UTask_Devices_device_event_agent_int_Await::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseDevices.task_Devices_device_event_agent_int$Await.Update
// (Native, Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_Devices_device_event_agent_int_Await::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_Devices_device_event_agent_int$Await", "Update");

	Params::UTask_Devices_device_event_agent_int_Await_Update_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// VerseClass VerseDevices.task_Devices_device_event_ai_interaction$Await
// (None)

class UClass* UTask_Devices_device_event_ai_interaction_Await::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_Devices_device_event_ai_interaction$Await");

	return Clss;
}


// task_Devices_device_event_ai_interaction$Await VerseDevices.Default__task_Devices_device_event_ai_interaction$Await
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_Devices_device_event_ai_interaction_Await* UTask_Devices_device_event_ai_interaction_Await::GetDefaultObj()
{
	static class UTask_Devices_device_event_ai_interaction_Await* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_Devices_device_event_ai_interaction_Await*>(UTask_Devices_device_event_ai_interaction_Await::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseDevices.task_Devices_device_event_ai_interaction$Await.Update
// (Native, Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_Devices_device_event_ai_interaction_Await::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_Devices_device_event_ai_interaction$Await", "Update");

	Params::UTask_Devices_device_event_ai_interaction_Await_Update_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// VerseClass VerseDevices.task_Devices_device_event_optional_agent$Await
// (None)

class UClass* UTask_Devices_device_event_optional_agent_Await::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_Devices_device_event_optional_agent$Await");

	return Clss;
}


// task_Devices_device_event_optional_agent$Await VerseDevices.Default__task_Devices_device_event_optional_agent$Await
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_Devices_device_event_optional_agent_Await* UTask_Devices_device_event_optional_agent_Await::GetDefaultObj()
{
	static class UTask_Devices_device_event_optional_agent_Await* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_Devices_device_event_optional_agent_Await*>(UTask_Devices_device_event_optional_agent_Await::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseDevices.task_Devices_device_event_optional_agent$Await.Update
// (Native, Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_Devices_device_event_optional_agent_Await::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_Devices_device_event_optional_agent$Await", "Update");

	Params::UTask_Devices_device_event_optional_agent_Await_Update_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// VerseClass VerseDevices.task_Devices_device_event_optional_agent_int$Await
// (None)

class UClass* UTask_Devices_device_event_optional_agent_int_Await::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_Devices_device_event_optional_agent_int$Await");

	return Clss;
}


// task_Devices_device_event_optional_agent_int$Await VerseDevices.Default__task_Devices_device_event_optional_agent_int$Await
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_Devices_device_event_optional_agent_int_Await* UTask_Devices_device_event_optional_agent_int_Await::GetDefaultObj()
{
	static class UTask_Devices_device_event_optional_agent_int_Await* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_Devices_device_event_optional_agent_int_Await*>(UTask_Devices_device_event_optional_agent_int_Await::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseDevices.task_Devices_device_event_optional_agent_int$Await.Update
// (Native, Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_Devices_device_event_optional_agent_int_Await::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_Devices_device_event_optional_agent_int$Await", "Update");

	Params::UTask_Devices_device_event_optional_agent_int_Await_Update_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// VerseClass VerseDevices.task_Devices_device_event_vehicle$Await
// (None)

class UClass* UTask_Devices_device_event_vehicle_Await::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_Devices_device_event_vehicle$Await");

	return Clss;
}


// task_Devices_device_event_vehicle$Await VerseDevices.Default__task_Devices_device_event_vehicle$Await
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_Devices_device_event_vehicle_Await* UTask_Devices_device_event_vehicle_Await::GetDefaultObj()
{
	static class UTask_Devices_device_event_vehicle_Await* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_Devices_device_event_vehicle_Await*>(UTask_Devices_device_event_vehicle_Await::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseDevices.task_Devices_device_event_vehicle$Await.Update
// (Native, Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_Devices_device_event_vehicle_Await::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_Devices_device_event_vehicle$Await", "Update");

	Params::UTask_Devices_device_event_vehicle_Await_Update_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// VerseClass VerseDevices.task_Devices_device_event_void$Await
// (None)

class UClass* UTask_Devices_device_event_void_Await::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_Devices_device_event_void$Await");

	return Clss;
}


// task_Devices_device_event_void$Await VerseDevices.Default__task_Devices_device_event_void$Await
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_Devices_device_event_void_Await* UTask_Devices_device_event_void_Await::GetDefaultObj()
{
	static class UTask_Devices_device_event_void_Await* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_Devices_device_event_void_Await*>(UTask_Devices_device_event_void_Await::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseDevices.task_Devices_device_event_void$Await.Update
// (Native, Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_Devices_device_event_void_Await::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_Devices_device_event_void$Await", "Update");

	Params::UTask_Devices_device_event_void_Await_Update_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


