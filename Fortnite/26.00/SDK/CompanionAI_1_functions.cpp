#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// VerseClass CompanionAI.$SolarisSignatureFunctionOuter
// (None)

class UClass* U_SolarisSignatureFunctionOuter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("$SolarisSignatureFunctionOuter");

	return Clss;
}


// $SolarisSignatureFunctionOuter CompanionAI.Default__$SolarisSignatureFunctionOuter
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class U_SolarisSignatureFunctionOuter* U_SolarisSignatureFunctionOuter::GetDefaultObj()
{
	static class U_SolarisSignatureFunctionOuter* Default = nullptr;

	if (!Default)
		Default = static_cast<U_SolarisSignatureFunctionOuter*>(U_SolarisSignatureFunctionOuter::StaticClass()->DefaultObject);

	return Default;
}


// VerseClass CompanionAI.CompanionAI
// (None)

class UClass* UCompanionAI::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CompanionAI");

	return Clss;
}


// CompanionAI CompanionAI.Default__CompanionAI
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCompanionAI* UCompanionAI::GetDefaultObj()
{
	static class UCompanionAI* Default = nullptr;

	if (!Default)
		Default = static_cast<UCompanionAI*>(UCompanionAI::StaticClass()->DefaultObject);

	return Default;
}


// Function CompanionAI.CompanionAI._L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eIsBeingDBNOCarried_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionalProperty_ UCompanionAI::_L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eIsBeingDBNOCarried_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI", "_L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eIsBeingDBNOCarried_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R");

	Params::UCompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eIsBeingDBNOCarried_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CompanionAI.CompanionAI._L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eGetTeamMembers_U_L_Nagent_M_Ntuple_L_R_M_Ntuple_L_R_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lagent_Mtuple_L_R_Mtuple_L_R_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// TArray<class USimulation_agent*>   RetVal                                                           (Parm, OutParm, ReturnParm, ContainsInstancedReference)

TArray<class USimulation_agent*> UCompanionAI::_L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eGetTeamMembers_U_L_Nagent_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lagent_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI", "_L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eGetTeamMembers_U_L_Nagent_M_Ntuple_L_R_M_Ntuple_L_R_R");

	Params::UCompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eGetTeamMembers_U_L_Nagent_M_Ntuple_L_R_M_Ntuple_L_R_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CompanionAI.CompanionAI._L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eGetNPCLeashRadius_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FTuple_Lfloat_Mfloat_R      RetVal                                                           (Parm, OutParm, ReturnParm, HasGetValueTypeHash)

struct FTuple_Lfloat_Mfloat_R UCompanionAI::_L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eGetNPCLeashRadius_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI", "_L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eGetNPCLeashRadius_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R");

	Params::UCompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eGetNPCLeashRadius_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CompanionAI.CompanionAI._L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eGetFortPing_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

FOptionalProperty_ UCompanionAI::_L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eGetFortPing_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI", "_L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eGetFortPing_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R");

	Params::UCompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eGetFortPing_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CompanionAI.CompanionAI._L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eGetFortBRCreatureActions_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

FOptionalProperty_ UCompanionAI::_L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eGetFortBRCreatureActions_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI", "_L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eGetFortBRCreatureActions_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R");

	Params::UCompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eGetFortBRCreatureActions_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CompanionAI.CompanionAI._L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eGetFortBRCharacterActions_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

FOptionalProperty_ UCompanionAI::_L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eGetFortBRCharacterActions_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI", "_L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eGetFortBRCharacterActions_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R");

	Params::UCompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eGetFortBRCharacterActions_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CompanionAI.CompanionAI._L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eGetAgent_U_L_Nentity_M_Ntuple_L_R_M_Ntuple_L_R_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lentity_Mtuple_L_R_Mtuple_L_R_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

FOptionalProperty_ UCompanionAI::_L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eGetAgent_U_L_Nentity_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lentity_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI", "_L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eGetAgent_U_L_Nentity_M_Ntuple_L_R_M_Ntuple_L_R_R");

	Params::UCompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_Roperator_U_2eGetAgent_U_L_Nentity_M_Ntuple_L_R_M_Ntuple_L_R_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CompanionAI.CompanionAI._L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Nentity__type_R
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// enum class ECompanionAI_PingCommand_entity_type__verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              RetVal                                                           (Parm, OutParm, ReturnParm, HasGetValueTypeHash)
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

FVerseStringProperty_ UCompanionAI::_L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Nentity__type_R(enum class ECompanionAI_PingCommand_entity_type __verse_0xB2CDDD72_Argument, FVerseDynamicProperty_ InvokeResultDummy_0, FOptionalProperty_ _ExprResultStack_1, FVerseDynamicProperty_ _ExprResult_2, FVerseDynamicProperty_ _ExprResult_3, FVerseDynamicProperty_ InvokeResultDummy_4, FOptionalProperty_ _ExprResultStack_5, FVerseDynamicProperty_ _ExprResult_6, FVerseDynamicProperty_ _ExprResult_7, FVerseDynamicProperty_ InvokeResultDummy_8, FOptionalProperty_ _ExprResultStack_9, FVerseDynamicProperty_ _ExprResult_10, FVerseDynamicProperty_ _ExprResult_11, FVerseDynamicProperty_ InvokeResultDummy_12, FOptionalProperty_ _ExprResultStack_13, FVerseDynamicProperty_ _ExprResult_14, FVerseDynamicProperty_ _ExprResult_15, FVerseDynamicProperty_ InvokeResultDummy_16, FOptionalProperty_ _ExprResultStack_17, FVerseDynamicProperty_ _ExprResult_18, FVerseDynamicProperty_ _ExprResult_19, FVerseDynamicProperty_ InvokeResultDummy_20, FOptionalProperty_ _ExprResultStack_21, FVerseDynamicProperty_ _ExprResult_22, FVerseDynamicProperty_ _ExprResult_23, FVerseDynamicProperty_ InvokeResultDummy_24, FOptionalProperty_ _ExprResultStack_25, FVerseDynamicProperty_ _ExprResult_26, FVerseDynamicProperty_ _ExprResult_27, FVerseDynamicProperty_ InvokeResultDummy_28, FOptionalProperty_ _ExprResultStack_29, FVerseDynamicProperty_ _ExprResult_30, FVerseDynamicProperty_ _ExprResult_31, FVerseDynamicProperty_ InvokeResultDummy_32, FOptionalProperty_ _ExprResultStack_33, FVerseDynamicProperty_ _ExprResult_34, FVerseDynamicProperty_ _ExprResult_35, FVerseDynamicProperty_ InvokeResultDummy_36, FOptionalProperty_ _ExprResultStack_37, FVerseDynamicProperty_ _ExprResult_38, FVerseDynamicProperty_ _ExprResult_39, FVerseDynamicProperty_ InvokeResultDummy_40, FOptionalProperty_ _ExprResultStack_41, FVerseDynamicProperty_ _ExprResult_42, FVerseDynamicProperty_ _ExprResult_43, FVerseDynamicProperty_ InvokeResultDummy_44, FOptionalProperty_ _ExprResultStack_45, FVerseDynamicProperty_ _ExprResult_46, FVerseDynamicProperty_ _ExprResult_47)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI", "_L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Nentity__type_R");

	Params::UCompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Nentity__type_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
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


// Function CompanionAI.CompanionAI._L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Ncommand__type_R
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// enum class ECompanionAI_PingCommand_command_type__verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              RetVal                                                           (Parm, OutParm, ReturnParm, HasGetValueTypeHash)
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
// FVerseDynamicProperty_             InvokeResultDummy_32                                             (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_33                                              (ZeroConstructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_34                                                   (HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_35                                                   (HasGetValueTypeHash)
// FVerseDynamicProperty_             InvokeResultDummy_36                                             (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_37                                              (ZeroConstructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_38                                                   (HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_39                                                   (HasGetValueTypeHash)

FVerseStringProperty_ UCompanionAI::_L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Ncommand__type_R(enum class ECompanionAI_PingCommand_command_type __verse_0xB2CDDD72_Argument, FVerseDynamicProperty_ InvokeResultDummy_0, FOptionalProperty_ _ExprResultStack_1, FVerseDynamicProperty_ _ExprResult_2, FVerseDynamicProperty_ _ExprResult_3, FVerseDynamicProperty_ InvokeResultDummy_4, FOptionalProperty_ _ExprResultStack_5, FVerseDynamicProperty_ _ExprResult_6, FVerseDynamicProperty_ _ExprResult_7, FVerseDynamicProperty_ InvokeResultDummy_8, FOptionalProperty_ _ExprResultStack_9, FVerseDynamicProperty_ _ExprResult_10, FVerseDynamicProperty_ _ExprResult_11, FVerseDynamicProperty_ InvokeResultDummy_12, FOptionalProperty_ _ExprResultStack_13, FVerseDynamicProperty_ _ExprResult_14, FVerseDynamicProperty_ _ExprResult_15, FVerseDynamicProperty_ InvokeResultDummy_16, FOptionalProperty_ _ExprResultStack_17, FVerseDynamicProperty_ _ExprResult_18, FVerseDynamicProperty_ _ExprResult_19, FVerseDynamicProperty_ InvokeResultDummy_20, FOptionalProperty_ _ExprResultStack_21, FVerseDynamicProperty_ _ExprResult_22, FVerseDynamicProperty_ _ExprResult_23, FVerseDynamicProperty_ InvokeResultDummy_24, FOptionalProperty_ _ExprResultStack_25, FVerseDynamicProperty_ _ExprResult_26, FVerseDynamicProperty_ _ExprResult_27, FVerseDynamicProperty_ InvokeResultDummy_28, FOptionalProperty_ _ExprResultStack_29, FVerseDynamicProperty_ _ExprResult_30, FVerseDynamicProperty_ _ExprResult_31, FVerseDynamicProperty_ InvokeResultDummy_32, FOptionalProperty_ _ExprResultStack_33, FVerseDynamicProperty_ _ExprResult_34, FVerseDynamicProperty_ _ExprResult_35, FVerseDynamicProperty_ InvokeResultDummy_36, FOptionalProperty_ _ExprResultStack_37, FVerseDynamicProperty_ _ExprResult_38, FVerseDynamicProperty_ _ExprResult_39)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI", "_L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Ncommand__type_R");

	Params::UCompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RToString_L_Ncommand__type_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
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
	Parms.InvokeResultDummy_32 = InvokeResultDummy_32;
	Parms._ExprResultStack_33 = _ExprResultStack_33;
	Parms._ExprResult_34 = _ExprResult_34;
	Parms._ExprResult_35 = _ExprResult_35;
	Parms.InvokeResultDummy_36 = InvokeResultDummy_36;
	Parms._ExprResultStack_37 = _ExprResultStack_37;
	Parms._ExprResult_38 = _ExprResult_38;
	Parms._ExprResult_39 = _ExprResult_39;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CompanionAI.CompanionAI._L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RCompare_L_Nfort__obstacle__info_M_Nentity_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lfort__obstacle__info_Mentity_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// uint8                              RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

uint8 UCompanionAI::_L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RCompare_L_Nfort__obstacle__info_M_Nentity_R(const struct FTuple_Lfort__obstacle__info_Mentity_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI", "_L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RCompare_L_Nfort__obstacle__info_M_Nentity_R");

	Params::UCompanionAI__L_2fFortnite_2ecom_2fAI_2fCompanionAI_N_RCompare_L_Nfort__obstacle__info_M_Nentity_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CompanionAI.CompanionAI.CompanionAI_ping_info$OverrideFactory
// (Static, HasOutParams)
// Parameters:
// struct FCompanionAI_ping_info      RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor)
// TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap                              (ConstParm, Parm, ContainsInstancedReference)

struct FCompanionAI_ping_info UCompanionAI::CompanionAI_ping_info_OverrideFactory(TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI", "CompanionAI_ping_info$OverrideFactory");

	Params::UCompanionAI_CompanionAI_ping_info_OverrideFactory_Params Parms{};

	Parms.__verse_0xFB48ED96__InitOverrideMap = __verse_0xFB48ED96__InitOverrideMap;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CompanionAI.CompanionAI.CompanionAI_ping_info$Factory
// (Static, HasOutParams)
// Parameters:
// struct FCompanionAI_ping_info      RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor)

struct FCompanionAI_ping_info UCompanionAI::CompanionAI_ping_info_Factory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI", "CompanionAI_ping_info$Factory");

	Params::UCompanionAI_CompanionAI_ping_info_Factory_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CompanionAI.CompanionAI.$InitCDO
// (None)
// Parameters:

void UCompanionAI::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI", "$InitCDO");

	Params::UCompanionAI__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass CompanionAI.CompanionAI_companion_ai
// (None)

class UClass* UCompanionAI_companion_ai::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CompanionAI_companion_ai");

	return Clss;
}


// CompanionAI_companion_ai CompanionAI.Default__CompanionAI_companion_ai
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCompanionAI_companion_ai* UCompanionAI_companion_ai::GetDefaultObj()
{
	static class UCompanionAI_companion_ai* Default = nullptr;

	if (!Default)
		Default = static_cast<UCompanionAI_companion_ai*>(UCompanionAI_companion_ai::StaticClass()->DefaultObject);

	return Default;
}


// Function CompanionAI.CompanionAI_companion_ai.OnBegin
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UCompanionAI_companion_ai::OnBegin(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_companion_ai", "OnBegin");

	Params::UCompanionAI_companion_ai_OnBegin_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CompanionAI.CompanionAI_companion_ai.$InitInstance
// (None)
// Parameters:

void UCompanionAI_companion_ai::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_companion_ai", "$InitInstance");

	Params::UCompanionAI_companion_ai__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function CompanionAI.CompanionAI_companion_ai.$Block
// (None)
// Parameters:

void UCompanionAI_companion_ai::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_companion_ai", "$Block");

	Params::UCompanionAI_companion_ai__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function CompanionAI.CompanionAI_companion_ai.$InitCDO
// (HasDefaults)
// Parameters:
// class UDiagnostics_log*            _ExprResult_0                                                    (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint64                             _InstancingGraph_1                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDiagnostics_debug_draw*     _ExprResult_2                                                    (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint64                             _InstancingGraph_3                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDiagnostics_log*            _ExprResult_4                                                    (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint64                             _InstancingGraph_5                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDiagnostics_debug_draw*     _ExprResult_6                                                    (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint64                             _InstancingGraph_7                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCompanionAI_companion_ai::_InitCDO(class UDiagnostics_log* _ExprResult_0, uint64 _InstancingGraph_1, class UDiagnostics_debug_draw* _ExprResult_2, uint64 _InstancingGraph_3, class UDiagnostics_log* _ExprResult_4, uint64 _InstancingGraph_5, class UDiagnostics_debug_draw* _ExprResult_6, uint64 _InstancingGraph_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_companion_ai", "$InitCDO");

	Params::UCompanionAI_companion_ai__InitCDO_Params Parms{};

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


// VerseClass CompanionAI.CompanionAI_companion_ai_runtime
// (None)

class UClass* UCompanionAI_companion_ai_runtime::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CompanionAI_companion_ai_runtime");

	return Clss;
}


// CompanionAI_companion_ai_runtime CompanionAI.Default__CompanionAI_companion_ai_runtime
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCompanionAI_companion_ai_runtime* UCompanionAI_companion_ai_runtime::GetDefaultObj()
{
	static class UCompanionAI_companion_ai_runtime* Default = nullptr;

	if (!Default)
		Default = static_cast<UCompanionAI_companion_ai_runtime*>(UCompanionAI_companion_ai_runtime::StaticClass()->DefaultObject);

	return Default;
}


// Function CompanionAI.CompanionAI_companion_ai_runtime.WaitForTargetMovementService_L_Nfort__character_M_Nfloat_R
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_Lfort__character_Mfloat_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UCompanionAI_companion_ai_runtime::WaitForTargetMovementService_L_Nfort__character_M_Nfloat_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_Lfort__character_Mfloat_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_companion_ai_runtime", "WaitForTargetMovementService_L_Nfort__character_M_Nfloat_R");

	Params::UCompanionAI_companion_ai_runtime_WaitForTargetMovementService_L_Nfort__character_M_Nfloat_R_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CompanionAI.CompanionAI_companion_ai_runtime.WaitForTargetInVehicleService_L_Nfort__character_R
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UCompanionAI_companion_ai_runtime::WaitForTargetInVehicleService_L_Nfort__character_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, class UObject* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_companion_ai_runtime", "WaitForTargetInVehicleService_L_Nfort__character_R");

	Params::UCompanionAI_companion_ai_runtime_WaitForTargetInVehicleService_L_Nfort__character_R_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CompanionAI.CompanionAI_companion_ai_runtime.WaitForDamageService
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UCompanionAI_companion_ai_runtime::WaitForDamageService(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_companion_ai_runtime", "WaitForDamageService");

	Params::UCompanionAI_companion_ai_runtime_WaitForDamageService_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CompanionAI.CompanionAI_companion_ai_runtime.TacticalSprintService
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UCompanionAI_companion_ai_runtime::TacticalSprintService(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_companion_ai_runtime", "TacticalSprintService");

	Params::UCompanionAI_companion_ai_runtime_TacticalSprintService_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CompanionAI.CompanionAI_companion_ai_runtime.SprintService
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UCompanionAI_companion_ai_runtime::SprintService(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_companion_ai_runtime", "SprintService");

	Params::UCompanionAI_companion_ai_runtime_SprintService_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CompanionAI.CompanionAI_companion_ai_runtime.ShootTargetService_L_Nfloat_R
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UCompanionAI_companion_ai_runtime::ShootTargetService_L_Nfloat_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, double __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_companion_ai_runtime", "ShootTargetService_L_Nfloat_R");

	Params::UCompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CompanionAI.CompanionAI_companion_ai_runtime.SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_Lvector3_Mfloat_Magent_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UCompanionAI_companion_ai_runtime::SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_Lvector3_Mfloat_Magent_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_companion_ai_runtime", "SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R");

	Params::UCompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CompanionAI.CompanionAI_companion_ai_runtime.ReviveCommand_L_Nagent_R
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USimulation_agent*           __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UCompanionAI_companion_ai_runtime::ReviveCommand_L_Nagent_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, class USimulation_agent* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_companion_ai_runtime", "ReviveCommand_L_Nagent_R");

	Params::UCompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CompanionAI.CompanionAI_companion_ai_runtime._L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnUnconverted1_L_Nany_R_Nvoid
// (Public, HasDefaults, BlueprintCallable)
// Parameters:
// FVerseDynamicProperty_             __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_0                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_1                                                        (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_2                                                    (HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_4                                                        (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_5                                                    (HasGetValueTypeHash)

void UCompanionAI_companion_ai_runtime::_L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnUnconverted1_L_Nany_R_Nvoid(FVerseDynamicProperty_ __verse_0xB2CDDD72_Argument, enum class EVerseTrue _InvokeSureResultDummy_0, FVerseFunctionProperty_ _Callee_1, const struct FTuple_L_R& _ExprResult_2, enum class EVerseTrue _InvokeSureResultDummy_3, FVerseFunctionProperty_ _Callee_4, const struct FTuple_L_R& _ExprResult_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_companion_ai_runtime", "_L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnUnconverted1_L_Nany_R_Nvoid");

	Params::UCompanionAI_companion_ai_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnUnconverted1_L_Nany_R_Nvoid_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._InvokeSureResultDummy_0 = _InvokeSureResultDummy_0;
	Parms._Callee_1 = _Callee_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._InvokeSureResultDummy_3 = _InvokeSureResultDummy_3;
	Parms._Callee_4 = _Callee_4;
	Parms._ExprResult_5 = _ExprResult_5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CompanionAI.CompanionAI_companion_ai_runtime._L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnUnconverted
// (Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UObject*                     __verse_0x00000000__1                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_0                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_1                                                        (HasGetValueTypeHash)
// class UObject*                     __verse_0x00000000__2                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_3                                                        (HasGetValueTypeHash)

void UCompanionAI_companion_ai_runtime::_L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnUnconverted(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, class UObject* __verse_0x00000000__1, enum class EVerseTrue _InvokeSureResultDummy_0, FVerseFunctionProperty_ _Callee_1, class UObject* __verse_0x00000000__2, enum class EVerseTrue _InvokeSureResultDummy_2, FVerseFunctionProperty_ _Callee_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_companion_ai_runtime", "_L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnUnconverted");

	Params::UCompanionAI_companion_ai_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnUnconverted_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms.__verse_0x00000000__1 = __verse_0x00000000__1;
	Parms._InvokeSureResultDummy_0 = _InvokeSureResultDummy_0;
	Parms._Callee_1 = _Callee_1;
	Parms.__verse_0x00000000__2 = __verse_0x00000000__2;
	Parms._InvokeSureResultDummy_2 = _InvokeSureResultDummy_2;
	Parms._Callee_3 = _Callee_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CompanionAI.CompanionAI_companion_ai_runtime._L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnConverted0_L_Nany_R_Nvoid
// (Public, HasDefaults, BlueprintCallable)
// Parameters:
// FVerseDynamicProperty_             __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_0                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_1                                                        (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_2                                                    (HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_4                                                        (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_5                                                    (HasGetValueTypeHash)

void UCompanionAI_companion_ai_runtime::_L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnConverted0_L_Nany_R_Nvoid(FVerseDynamicProperty_ __verse_0xB2CDDD72_Argument, enum class EVerseTrue _InvokeSureResultDummy_0, FVerseFunctionProperty_ _Callee_1, const struct FTuple_L_R& _ExprResult_2, enum class EVerseTrue _InvokeSureResultDummy_3, FVerseFunctionProperty_ _Callee_4, const struct FTuple_L_R& _ExprResult_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_companion_ai_runtime", "_L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnConverted0_L_Nany_R_Nvoid");

	Params::UCompanionAI_companion_ai_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnConverted0_L_Nany_R_Nvoid_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._InvokeSureResultDummy_0 = _InvokeSureResultDummy_0;
	Parms._Callee_1 = _Callee_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._InvokeSureResultDummy_3 = _InvokeSureResultDummy_3;
	Parms._Callee_4 = _Callee_4;
	Parms._ExprResult_5 = _ExprResult_5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CompanionAI.CompanionAI_companion_ai_runtime._L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnConverted
// (Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UObject*                     __verse_0x00000000__1                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_0                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_1                                                        (HasGetValueTypeHash)
// class UObject*                     __verse_0x00000000__2                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_3                                                        (HasGetValueTypeHash)

void UCompanionAI_companion_ai_runtime::_L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnConverted(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, class UObject* __verse_0x00000000__1, enum class EVerseTrue _InvokeSureResultDummy_0, FVerseFunctionProperty_ _Callee_1, class UObject* __verse_0x00000000__2, enum class EVerseTrue _InvokeSureResultDummy_2, FVerseFunctionProperty_ _Callee_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_companion_ai_runtime", "_L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnConverted");

	Params::UCompanionAI_companion_ai_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_ROnConverted_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms.__verse_0x00000000__1 = __verse_0x00000000__1;
	Parms._InvokeSureResultDummy_0 = _InvokeSureResultDummy_0;
	Parms._Callee_1 = _Callee_1;
	Parms.__verse_0x00000000__2 = __verse_0x00000000__2;
	Parms._InvokeSureResultDummy_2 = _InvokeSureResultDummy_2;
	Parms._Callee_3 = _Callee_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CompanionAI.CompanionAI_companion_ai_runtime.LookAtThreatTask
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UCompanionAI_companion_ai_runtime::LookAtThreatTask(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_companion_ai_runtime", "LookAtThreatTask");

	Params::UCompanionAI_companion_ai_runtime_LookAtThreatTask_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CompanionAI.CompanionAI_companion_ai_runtime.LookAtOrAttackTarget
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UCompanionAI_companion_ai_runtime::LookAtOrAttackTarget(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_companion_ai_runtime", "LookAtOrAttackTarget");

	Params::UCompanionAI_companion_ai_runtime_LookAtOrAttackTarget_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CompanionAI.CompanionAI_companion_ai_runtime.LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_Lvector3_Mfloat_Mfloat_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UCompanionAI_companion_ai_runtime::LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_Lvector3_Mfloat_Mfloat_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_companion_ai_runtime", "LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R");

	Params::UCompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CompanionAI.CompanionAI_companion_ai_runtime._L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_RLogAndDisplayOnScreen_L_N_Kchar_R
// (Public, HasDefaults, BlueprintCallable)
// Parameters:
// FVerseStringProperty_              __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_0                                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UDiagnostics_log*            __verse_0x00000000__2                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_2                                                        (HasGetValueTypeHash)
// struct FTuple_L_Kchar_M_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R_ExprResult_3                                                    (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_4                                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_5                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_6                                                        (HasGetValueTypeHash)
// struct FTuple_L_Kchar_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_R_ExprResult_7                                                    (HasGetValueTypeHash)
// struct FTuple_L_Kchar_M_QColor_Ncolor_M_QDuration_Nfloat_R__verse_0x00000000__3                                            (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_8                                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FOptionalProperty_                 _ExprResult_9                                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultDummy_10                                              (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_11                                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UDiagnostics_log*            __verse_0x00000000__5                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_12                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_13                                                       (HasGetValueTypeHash)
// struct FTuple_L_Kchar_M_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R_ExprResult_14                                                   (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_15                                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_16                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_17                                                       (HasGetValueTypeHash)
// struct FTuple_L_Kchar_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_R_ExprResult_18                                                   (HasGetValueTypeHash)
// struct FTuple_L_Kchar_M_QColor_Ncolor_M_QDuration_Nfloat_R__verse_0x00000000__6                                            (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_19                                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FOptionalProperty_                 _ExprResult_20                                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultDummy_21                                              (HasGetValueTypeHash)

void UCompanionAI_companion_ai_runtime::_L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_RLogAndDisplayOnScreen_L_N_Kchar_R(FVerseStringProperty_ __verse_0xB2CDDD72_Argument, FOptionalProperty_ _ExprResultStack_0, class UDiagnostics_log* __verse_0x00000000__2, enum class EVerseTrue _InvokeSureResultDummy_1, FVerseFunctionProperty_ _Callee_2, const struct FTuple_L_Kchar_M_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R& _ExprResult_3, FOptionalProperty_ _ExprResult_4, enum class EVerseTrue _InvokeSureResultDummy_5, FVerseFunctionProperty_ _Callee_6, const struct FTuple_L_Kchar_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_R& _ExprResult_7, const struct FTuple_L_Kchar_M_QColor_Ncolor_M_QDuration_Nfloat_R& __verse_0x00000000__3, FOptionalProperty_ _ExprResult_8, FOptionalProperty_ _ExprResult_9, FVerseStringProperty_ _ExprResultDummy_10, FOptionalProperty_ _ExprResultStack_11, class UDiagnostics_log* __verse_0x00000000__5, enum class EVerseTrue _InvokeSureResultDummy_12, FVerseFunctionProperty_ _Callee_13, const struct FTuple_L_Kchar_M_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R& _ExprResult_14, FOptionalProperty_ _ExprResult_15, enum class EVerseTrue _InvokeSureResultDummy_16, FVerseFunctionProperty_ _Callee_17, const struct FTuple_L_Kchar_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_R& _ExprResult_18, const struct FTuple_L_Kchar_M_QColor_Ncolor_M_QDuration_Nfloat_R& __verse_0x00000000__6, FOptionalProperty_ _ExprResult_19, FOptionalProperty_ _ExprResult_20, FVerseStringProperty_ _ExprResultDummy_21)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_companion_ai_runtime", "_L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_RLogAndDisplayOnScreen_L_N_Kchar_R");

	Params::UCompanionAI_companion_ai_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__ai__runtime_N_RLogAndDisplayOnScreen_L_N_Kchar_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._ExprResultStack_0 = _ExprResultStack_0;
	Parms.__verse_0x00000000__2 = __verse_0x00000000__2;
	Parms._InvokeSureResultDummy_1 = _InvokeSureResultDummy_1;
	Parms._Callee_2 = _Callee_2;
	Parms._ExprResult_3 = _ExprResult_3;
	Parms._ExprResult_4 = _ExprResult_4;
	Parms._InvokeSureResultDummy_5 = _InvokeSureResultDummy_5;
	Parms._Callee_6 = _Callee_6;
	Parms._ExprResult_7 = _ExprResult_7;
	Parms.__verse_0x00000000__3 = __verse_0x00000000__3;
	Parms._ExprResult_8 = _ExprResult_8;
	Parms._ExprResult_9 = _ExprResult_9;
	Parms._ExprResultDummy_10 = _ExprResultDummy_10;
	Parms._ExprResultStack_11 = _ExprResultStack_11;
	Parms.__verse_0x00000000__5 = __verse_0x00000000__5;
	Parms._InvokeSureResultDummy_12 = _InvokeSureResultDummy_12;
	Parms._Callee_13 = _Callee_13;
	Parms._ExprResult_14 = _ExprResult_14;
	Parms._ExprResult_15 = _ExprResult_15;
	Parms._InvokeSureResultDummy_16 = _InvokeSureResultDummy_16;
	Parms._Callee_17 = _Callee_17;
	Parms._ExprResult_18 = _ExprResult_18;
	Parms.__verse_0x00000000__6 = __verse_0x00000000__6;
	Parms._ExprResult_19 = _ExprResult_19;
	Parms._ExprResult_20 = _ExprResult_20;
	Parms._ExprResultDummy_21 = _ExprResultDummy_21;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CompanionAI.CompanionAI_companion_ai_runtime.HandleReviveCommand_L_Nping__info_R
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCompanionAI_ping_info      __verse_0xB2CDDD72_Argument                                      (Parm, NoDestructor)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UCompanionAI_companion_ai_runtime::HandleReviveCommand_L_Nping__info_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FCompanionAI_ping_info& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_companion_ai_runtime", "HandleReviveCommand_L_Nping__info_R");

	Params::UCompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CompanionAI.CompanionAI_companion_ai_runtime.HandleObstacleService_L_N_Qentity_R
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UCompanionAI_companion_ai_runtime::HandleObstacleService_L_N_Qentity_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, FOptionalProperty_ __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_companion_ai_runtime", "HandleObstacleService_L_N_Qentity_R");

	Params::UCompanionAI_companion_ai_runtime_HandleObstacleService_L_N_Qentity_R_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CompanionAI.CompanionAI_companion_ai_runtime.HandleNPCCommand_L_Nping__info_R
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCompanionAI_ping_info      __verse_0xB2CDDD72_Argument                                      (Parm, NoDestructor)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UCompanionAI_companion_ai_runtime::HandleNPCCommand_L_Nping__info_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FCompanionAI_ping_info& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_companion_ai_runtime", "HandleNPCCommand_L_Nping__info_R");

	Params::UCompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CompanionAI.CompanionAI_companion_ai_runtime.HandleHoldPositionCommand_L_Nping__info_R
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCompanionAI_ping_info      __verse_0xB2CDDD72_Argument                                      (Parm, NoDestructor)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UCompanionAI_companion_ai_runtime::HandleHoldPositionCommand_L_Nping__info_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FCompanionAI_ping_info& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_companion_ai_runtime", "HandleHoldPositionCommand_L_Nping__info_R");

	Params::UCompanionAI_companion_ai_runtime_HandleHoldPositionCommand_L_Nping__info_R_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CompanionAI.CompanionAI_companion_ai_runtime.HandleGoToCommand_L_Nping__info_R
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCompanionAI_ping_info      __verse_0xB2CDDD72_Argument                                      (Parm, NoDestructor)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UCompanionAI_companion_ai_runtime::HandleGoToCommand_L_Nping__info_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FCompanionAI_ping_info& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_companion_ai_runtime", "HandleGoToCommand_L_Nping__info_R");

	Params::UCompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CompanionAI.CompanionAI_companion_ai_runtime.HandleGoTo_L_Nping__info_R
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCompanionAI_ping_info      __verse_0xB2CDDD72_Argument                                      (Parm, NoDestructor)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UCompanionAI_companion_ai_runtime::HandleGoTo_L_Nping__info_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FCompanionAI_ping_info& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_companion_ai_runtime", "HandleGoTo_L_Nping__info_R");

	Params::UCompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CompanionAI.CompanionAI_companion_ai_runtime.HandleBackToMeCommand_L_Nping__info_R
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCompanionAI_ping_info      __verse_0xB2CDDD72_Argument                                      (Parm, NoDestructor)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UCompanionAI_companion_ai_runtime::HandleBackToMeCommand_L_Nping__info_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FCompanionAI_ping_info& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_companion_ai_runtime", "HandleBackToMeCommand_L_Nping__info_R");

	Params::UCompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CompanionAI.CompanionAI_companion_ai_runtime.GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UCompanionAI_companion_ai_runtime::GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_Lvector3_M_Qagent_Mlogic_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_companion_ai_runtime", "GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R");

	Params::UCompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CompanionAI.CompanionAI_companion_ai_runtime.GoToAndAttackTask_L_Nfort__threat__info_R
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAI_fort_threat_info        __verse_0xB2CDDD72_Argument                                      (Parm, NoDestructor)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UCompanionAI_companion_ai_runtime::GoToAndAttackTask_L_Nfort__threat__info_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FAI_fort_threat_info& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_companion_ai_runtime", "GoToAndAttackTask_L_Nfort__threat__info_R");

	Params::UCompanionAI_companion_ai_runtime_GoToAndAttackTask_L_Nfort__threat__info_R_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CompanionAI.CompanionAI_companion_ai_runtime.GetThreat
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UCompanionAI_companion_ai_runtime::GetThreat(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_companion_ai_runtime", "GetThreat");

	Params::UCompanionAI_companion_ai_runtime_GetThreat_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CompanionAI.CompanionAI_companion_ai_runtime.GetObstacle
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UCompanionAI_companion_ai_runtime::GetObstacle(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_companion_ai_runtime", "GetObstacle");

	Params::UCompanionAI_companion_ai_runtime_GetObstacle_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CompanionAI.CompanionAI_companion_ai_runtime.GetNewThreat
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UCompanionAI_companion_ai_runtime::GetNewThreat(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_companion_ai_runtime", "GetNewThreat");

	Params::UCompanionAI_companion_ai_runtime_GetNewThreat_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CompanionAI.CompanionAI_companion_ai_runtime.GetNewTargetPerception
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UCompanionAI_companion_ai_runtime::GetNewTargetPerception(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_companion_ai_runtime", "GetNewTargetPerception");

	Params::UCompanionAI_companion_ai_runtime_GetNewTargetPerception_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CompanionAI.CompanionAI_companion_ai_runtime.GetNewObstacle
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UCompanionAI_companion_ai_runtime::GetNewObstacle(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_companion_ai_runtime", "GetNewObstacle");

	Params::UCompanionAI_companion_ai_runtime_GetNewObstacle_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CompanionAI.CompanionAI_companion_ai_runtime.GetAttackCommandTarget_L_Nping__info_R
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCompanionAI_ping_info      __verse_0xB2CDDD72_Argument                                      (Parm, NoDestructor)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UCompanionAI_companion_ai_runtime::GetAttackCommandTarget_L_Nping__info_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FCompanionAI_ping_info& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_companion_ai_runtime", "GetAttackCommandTarget_L_Nping__info_R");

	Params::UCompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CompanionAI.CompanionAI_companion_ai_runtime.GameLoop
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UCompanionAI_companion_ai_runtime::GameLoop(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_companion_ai_runtime", "GameLoop");

	Params::UCompanionAI_companion_ai_runtime_GameLoop_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CompanionAI.CompanionAI_companion_ai_runtime.DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_Lvector3_Mfloat_Mcolor_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UCompanionAI_companion_ai_runtime::DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_Lvector3_Mfloat_Mcolor_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_companion_ai_runtime", "DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R");

	Params::UCompanionAI_companion_ai_runtime_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CompanionAI.CompanionAI_companion_ai_runtime.CrouchUntilHit
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UCompanionAI_companion_ai_runtime::CrouchUntilHit(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_companion_ai_runtime", "CrouchUntilHit");

	Params::UCompanionAI_companion_ai_runtime_CrouchUntilHit_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CompanionAI.CompanionAI_companion_ai_runtime.CrouchService
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UCompanionAI_companion_ai_runtime::CrouchService(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_companion_ai_runtime", "CrouchService");

	Params::UCompanionAI_companion_ai_runtime_CrouchService_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CompanionAI.CompanionAI_companion_ai_runtime.CheckForReviveTeamMembers_L_Nping__info_R
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FCompanionAI_ping_info      __verse_0xB2CDDD72_Argument                                      (Parm, NoDestructor)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UCompanionAI_companion_ai_runtime::CheckForReviveTeamMembers_L_Nping__info_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FCompanionAI_ping_info& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_companion_ai_runtime", "CheckForReviveTeamMembers_L_Nping__info_R");

	Params::UCompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CompanionAI.CompanionAI_companion_ai_runtime.$InitInstance
// (None)
// Parameters:

void UCompanionAI_companion_ai_runtime::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_companion_ai_runtime", "$InitInstance");

	Params::UCompanionAI_companion_ai_runtime__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function CompanionAI.CompanionAI_companion_ai_runtime.$Block
// (None)
// Parameters:

void UCompanionAI_companion_ai_runtime::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_companion_ai_runtime", "$Block");

	Params::UCompanionAI_companion_ai_runtime__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function CompanionAI.CompanionAI_companion_ai_runtime.$InitCDO
// (None)
// Parameters:

void UCompanionAI_companion_ai_runtime::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_companion_ai_runtime", "$InitCDO");

	Params::UCompanionAI_companion_ai_runtime__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass CompanionAI.CompanionAI_companion_creature
// (None)

class UClass* UCompanionAI_companion_creature::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CompanionAI_companion_creature");

	return Clss;
}


// CompanionAI_companion_creature CompanionAI.Default__CompanionAI_companion_creature
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCompanionAI_companion_creature* UCompanionAI_companion_creature::GetDefaultObj()
{
	static class UCompanionAI_companion_creature* Default = nullptr;

	if (!Default)
		Default = static_cast<UCompanionAI_companion_creature*>(UCompanionAI_companion_creature::StaticClass()->DefaultObject);

	return Default;
}


// Function CompanionAI.CompanionAI_companion_creature.OnBegin
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UCompanionAI_companion_creature::OnBegin(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_companion_creature", "OnBegin");

	Params::UCompanionAI_companion_creature_OnBegin_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CompanionAI.CompanionAI_companion_creature._L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_RLogAndDisplayOnScreen_L_N_Kchar_R
// (Public, HasDefaults, BlueprintCallable)
// Parameters:
// FVerseStringProperty_              __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_0                                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UDiagnostics_log*            __verse_0x00000000__2                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_2                                                        (HasGetValueTypeHash)
// struct FTuple_L_Kchar_M_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R_ExprResult_3                                                    (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_4                                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_5                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_6                                                        (HasGetValueTypeHash)
// struct FTuple_L_Kchar_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_R_ExprResult_7                                                    (HasGetValueTypeHash)
// struct FTuple_L_Kchar_M_QColor_Ncolor_M_QDuration_Nfloat_R__verse_0x00000000__3                                            (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_8                                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// FOptionalProperty_                 _ExprResult_9                                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultDummy_10                                              (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_11                                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UDiagnostics_log*            __verse_0x00000000__5                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_12                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_13                                                       (HasGetValueTypeHash)
// struct FTuple_L_Kchar_M_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R_ExprResult_14                                                   (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_15                                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_16                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_17                                                       (HasGetValueTypeHash)
// struct FTuple_L_Kchar_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_R_ExprResult_18                                                   (HasGetValueTypeHash)
// struct FTuple_L_Kchar_M_QColor_Ncolor_M_QDuration_Nfloat_R__verse_0x00000000__6                                            (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_19                                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// FOptionalProperty_                 _ExprResult_20                                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultDummy_21                                              (HasGetValueTypeHash)

void UCompanionAI_companion_creature::_L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_RLogAndDisplayOnScreen_L_N_Kchar_R(FVerseStringProperty_ __verse_0xB2CDDD72_Argument, FOptionalProperty_ _ExprResultStack_0, class UDiagnostics_log* __verse_0x00000000__2, enum class EVerseTrue _InvokeSureResultDummy_1, FVerseFunctionProperty_ _Callee_2, const struct FTuple_L_Kchar_M_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R& _ExprResult_3, FOptionalProperty_ _ExprResult_4, enum class EVerseTrue _InvokeSureResultDummy_5, FVerseFunctionProperty_ _Callee_6, const struct FTuple_L_Kchar_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_R& _ExprResult_7, const struct FTuple_L_Kchar_M_QColor_Ncolor_M_QDuration_Nfloat_R& __verse_0x00000000__3, FOptionalProperty_ _ExprResult_8, FOptionalProperty_ _ExprResult_9, FVerseStringProperty_ _ExprResultDummy_10, FOptionalProperty_ _ExprResultStack_11, class UDiagnostics_log* __verse_0x00000000__5, enum class EVerseTrue _InvokeSureResultDummy_12, FVerseFunctionProperty_ _Callee_13, const struct FTuple_L_Kchar_M_QLevel_Nlog__level_20_3d_20_2e_2e_2e_R& _ExprResult_14, FOptionalProperty_ _ExprResult_15, enum class EVerseTrue _InvokeSureResultDummy_16, FVerseFunctionProperty_ _Callee_17, const struct FTuple_L_Kchar_M_QDuration_Nfloat_20_3d_20_2e_2e_2e_M_QColor_Ncolor_20_3d_20_2e_2e_2e_R& _ExprResult_18, const struct FTuple_L_Kchar_M_QColor_Ncolor_M_QDuration_Nfloat_R& __verse_0x00000000__6, FOptionalProperty_ _ExprResult_19, FOptionalProperty_ _ExprResult_20, FVerseStringProperty_ _ExprResultDummy_21)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_companion_creature", "_L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_RLogAndDisplayOnScreen_L_N_Kchar_R");

	Params::UCompanionAI_companion_creature__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature_N_RLogAndDisplayOnScreen_L_N_Kchar_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._ExprResultStack_0 = _ExprResultStack_0;
	Parms.__verse_0x00000000__2 = __verse_0x00000000__2;
	Parms._InvokeSureResultDummy_1 = _InvokeSureResultDummy_1;
	Parms._Callee_2 = _Callee_2;
	Parms._ExprResult_3 = _ExprResult_3;
	Parms._ExprResult_4 = _ExprResult_4;
	Parms._InvokeSureResultDummy_5 = _InvokeSureResultDummy_5;
	Parms._Callee_6 = _Callee_6;
	Parms._ExprResult_7 = _ExprResult_7;
	Parms.__verse_0x00000000__3 = __verse_0x00000000__3;
	Parms._ExprResult_8 = _ExprResult_8;
	Parms._ExprResult_9 = _ExprResult_9;
	Parms._ExprResultDummy_10 = _ExprResultDummy_10;
	Parms._ExprResultStack_11 = _ExprResultStack_11;
	Parms.__verse_0x00000000__5 = __verse_0x00000000__5;
	Parms._InvokeSureResultDummy_12 = _InvokeSureResultDummy_12;
	Parms._Callee_13 = _Callee_13;
	Parms._ExprResult_14 = _ExprResult_14;
	Parms._ExprResult_15 = _ExprResult_15;
	Parms._InvokeSureResultDummy_16 = _InvokeSureResultDummy_16;
	Parms._Callee_17 = _Callee_17;
	Parms._ExprResult_18 = _ExprResult_18;
	Parms.__verse_0x00000000__6 = __verse_0x00000000__6;
	Parms._ExprResult_19 = _ExprResult_19;
	Parms._ExprResult_20 = _ExprResult_20;
	Parms._ExprResultDummy_21 = _ExprResultDummy_21;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CompanionAI.CompanionAI_companion_creature.DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_Lvector3_Mfloat_Mcolor_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UCompanionAI_companion_creature::DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_Lvector3_Mfloat_Mcolor_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_companion_creature", "DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R");

	Params::UCompanionAI_companion_creature_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CompanionAI.CompanionAI_companion_creature.$InitInstance
// (None)
// Parameters:

void UCompanionAI_companion_creature::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_companion_creature", "$InitInstance");

	Params::UCompanionAI_companion_creature__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function CompanionAI.CompanionAI_companion_creature.$Block
// (None)
// Parameters:

void UCompanionAI_companion_creature::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_companion_creature", "$Block");

	Params::UCompanionAI_companion_creature__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function CompanionAI.CompanionAI_companion_creature.$InitCDO
// (HasDefaults)
// Parameters:
// class UDiagnostics_log*            _ExprResult_0                                                    (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint64                             _InstancingGraph_1                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDiagnostics_debug_draw*     _ExprResult_2                                                    (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint64                             _InstancingGraph_3                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDiagnostics_log*            _ExprResult_4                                                    (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint64                             _InstancingGraph_5                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UDiagnostics_debug_draw*     _ExprResult_6                                                    (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint64                             _InstancingGraph_7                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCompanionAI_companion_creature::_InitCDO(class UDiagnostics_log* _ExprResult_0, uint64 _InstancingGraph_1, class UDiagnostics_debug_draw* _ExprResult_2, uint64 _InstancingGraph_3, class UDiagnostics_log* _ExprResult_4, uint64 _InstancingGraph_5, class UDiagnostics_debug_draw* _ExprResult_6, uint64 _InstancingGraph_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_companion_creature", "$InitCDO");

	Params::UCompanionAI_companion_creature__InitCDO_Params Parms{};

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


// VerseClass CompanionAI.CompanionAI_companion_creature_runtime
// (None)

class UClass* UCompanionAI_companion_creature_runtime::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CompanionAI_companion_creature_runtime");

	return Clss;
}


// CompanionAI_companion_creature_runtime CompanionAI.Default__CompanionAI_companion_creature_runtime
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCompanionAI_companion_creature_runtime* UCompanionAI_companion_creature_runtime::GetDefaultObj()
{
	static class UCompanionAI_companion_creature_runtime* Default = nullptr;

	if (!Default)
		Default = static_cast<UCompanionAI_companion_creature_runtime*>(UCompanionAI_companion_creature_runtime::StaticClass()->DefaultObject);

	return Default;
}


// Function CompanionAI.CompanionAI_companion_creature_runtime.SeekLKP_L_Nagent_M_Nfloat_R
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_Lagent_Mfloat_R      __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UCompanionAI_companion_creature_runtime::SeekLKP_L_Nagent_M_Nfloat_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_Lagent_Mfloat_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_companion_creature_runtime", "SeekLKP_L_Nagent_M_Nfloat_R");

	Params::UCompanionAI_companion_creature_runtime_SeekLKP_L_Nagent_M_Nfloat_R_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CompanionAI.CompanionAI_companion_creature_runtime.PatrolAround
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UCompanionAI_companion_creature_runtime::PatrolAround(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_companion_creature_runtime", "PatrolAround");

	Params::UCompanionAI_companion_creature_runtime_PatrolAround_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CompanionAI.CompanionAI_companion_creature_runtime._L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature__runtime_N_RLogAndDisplayOnScreen_L_N_Kchar_R
// (Public, HasDefaults, BlueprintCallable)
// Parameters:
// FVerseStringProperty_              __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UCompanionAI_companion_creature*__verse_0x00000000__1                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_0                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_1                                                        (HasGetValueTypeHash)
// class UCompanionAI_companion_creature*__verse_0x00000000__2                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_3                                                        (HasGetValueTypeHash)

void UCompanionAI_companion_creature_runtime::_L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature__runtime_N_RLogAndDisplayOnScreen_L_N_Kchar_R(FVerseStringProperty_ __verse_0xB2CDDD72_Argument, class UCompanionAI_companion_creature* __verse_0x00000000__1, enum class EVerseTrue _InvokeSureResultDummy_0, FVerseFunctionProperty_ _Callee_1, class UCompanionAI_companion_creature* __verse_0x00000000__2, enum class EVerseTrue _InvokeSureResultDummy_2, FVerseFunctionProperty_ _Callee_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_companion_creature_runtime", "_L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature__runtime_N_RLogAndDisplayOnScreen_L_N_Kchar_R");

	Params::UCompanionAI_companion_creature_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature__runtime_N_RLogAndDisplayOnScreen_L_N_Kchar_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms.__verse_0x00000000__1 = __verse_0x00000000__1;
	Parms._InvokeSureResultDummy_0 = _InvokeSureResultDummy_0;
	Parms._Callee_1 = _Callee_1;
	Parms.__verse_0x00000000__2 = __verse_0x00000000__2;
	Parms._InvokeSureResultDummy_2 = _InvokeSureResultDummy_2;
	Parms._Callee_3 = _Callee_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CompanionAI.CompanionAI_companion_creature_runtime._L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature__runtime_N_RIsTargetInRange_L_Nagent_M_Nfloat_R
// (Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_Lagent_Mfloat_R      __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_0                                                    (NoDestructor, HasGetValueTypeHash)
// struct FSpatialMath_vector3        __verse_0x4550A2D9_MyPosition_2                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSpatialMath_transform      _ExprResult_1                                                    (NoDestructor)
// class UObject*                     __verse_0x00000000__3                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_2                                                        (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_3                                                    (HasGetValueTypeHash)
// struct FAI_fort_threat_info        __verse_0x08287148_Snapshot_4                                    (NoDestructor)
// class UObject*                     __verse_0x00000000__5                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_4                                               (ZeroConstructor, NoDestructor)
// FVerseFunctionProperty_            _Callee_5                                                        (HasGetValueTypeHash)
// double                             __verse_0x47C7BD3D_DistanceToLKP_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_6                                                        (HasGetValueTypeHash)
// struct FTuple_Lvector3_Mvector3_R  _ExprResult_7                                                    (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_8                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_9                                                    (NoDestructor, HasGetValueTypeHash)
// struct FSpatialMath_vector3        __verse_0x4550A2D9_MyPosition_8                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSpatialMath_transform      _ExprResult_10                                                   (NoDestructor)
// class UObject*                     __verse_0x00000000__9                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_11                                                       (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_12                                                   (HasGetValueTypeHash)
// struct FAI_fort_threat_info        __verse_0x08287148_Snapshot_10                                   (NoDestructor)
// class UObject*                     __verse_0x00000000__11                                           (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_13                                              (ZeroConstructor, NoDestructor)
// FVerseFunctionProperty_            _Callee_14                                                       (HasGetValueTypeHash)
// double                             __verse_0x47C7BD3D_DistanceToLKP_10                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_15                                                       (HasGetValueTypeHash)
// struct FTuple_Lvector3_Mvector3_R  _ExprResult_16                                                   (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_17                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionalProperty_ UCompanionAI_companion_creature_runtime::_L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature__runtime_N_RIsTargetInRange_L_Nagent_M_Nfloat_R(const struct FTuple_Lagent_Mfloat_R& __verse_0xB2CDDD72_Argument, uint8 _ExprResult_0, const struct FSpatialMath_vector3& __verse_0x4550A2D9_MyPosition_2, const struct FSpatialMath_transform& _ExprResult_1, class UObject* __verse_0x00000000__3, FVerseFunctionProperty_ _Callee_2, const struct FTuple_L_R& _ExprResult_3, const struct FAI_fort_threat_info& __verse_0x08287148_Snapshot_4, class UObject* __verse_0x00000000__5, FOptionalProperty_ _ExprResultStack_4, FVerseFunctionProperty_ _Callee_5, double __verse_0x47C7BD3D_DistanceToLKP_4, FVerseFunctionProperty_ _Callee_6, const struct FTuple_Lvector3_Mvector3_R& _ExprResult_7, FOptionalProperty_ _ExprResultStack_8, uint8 _ExprResult_9, const struct FSpatialMath_vector3& __verse_0x4550A2D9_MyPosition_8, const struct FSpatialMath_transform& _ExprResult_10, class UObject* __verse_0x00000000__9, FVerseFunctionProperty_ _Callee_11, const struct FTuple_L_R& _ExprResult_12, const struct FAI_fort_threat_info& __verse_0x08287148_Snapshot_10, class UObject* __verse_0x00000000__11, FOptionalProperty_ _ExprResultStack_13, FVerseFunctionProperty_ _Callee_14, double __verse_0x47C7BD3D_DistanceToLKP_10, FVerseFunctionProperty_ _Callee_15, const struct FTuple_Lvector3_Mvector3_R& _ExprResult_16, FOptionalProperty_ _ExprResultStack_17)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_companion_creature_runtime", "_L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature__runtime_N_RIsTargetInRange_L_Nagent_M_Nfloat_R");

	Params::UCompanionAI_companion_creature_runtime__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2fcompanion__creature__runtime_N_RIsTargetInRange_L_Nagent_M_Nfloat_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._ExprResult_0 = _ExprResult_0;
	Parms.__verse_0x4550A2D9_MyPosition_2 = __verse_0x4550A2D9_MyPosition_2;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms.__verse_0x00000000__3 = __verse_0x00000000__3;
	Parms._Callee_2 = _Callee_2;
	Parms._ExprResult_3 = _ExprResult_3;
	Parms.__verse_0x08287148_Snapshot_4 = __verse_0x08287148_Snapshot_4;
	Parms.__verse_0x00000000__5 = __verse_0x00000000__5;
	Parms._ExprResultStack_4 = _ExprResultStack_4;
	Parms._Callee_5 = _Callee_5;
	Parms.__verse_0x47C7BD3D_DistanceToLKP_4 = __verse_0x47C7BD3D_DistanceToLKP_4;
	Parms._Callee_6 = _Callee_6;
	Parms._ExprResult_7 = _ExprResult_7;
	Parms._ExprResultStack_8 = _ExprResultStack_8;
	Parms._ExprResult_9 = _ExprResult_9;
	Parms.__verse_0x4550A2D9_MyPosition_8 = __verse_0x4550A2D9_MyPosition_8;
	Parms._ExprResult_10 = _ExprResult_10;
	Parms.__verse_0x00000000__9 = __verse_0x00000000__9;
	Parms._Callee_11 = _Callee_11;
	Parms._ExprResult_12 = _ExprResult_12;
	Parms.__verse_0x08287148_Snapshot_10 = __verse_0x08287148_Snapshot_10;
	Parms.__verse_0x00000000__11 = __verse_0x00000000__11;
	Parms._ExprResultStack_13 = _ExprResultStack_13;
	Parms._Callee_14 = _Callee_14;
	Parms.__verse_0x47C7BD3D_DistanceToLKP_10 = __verse_0x47C7BD3D_DistanceToLKP_10;
	Parms._Callee_15 = _Callee_15;
	Parms._ExprResult_16 = _ExprResult_16;
	Parms._ExprResultStack_17 = _ExprResultStack_17;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CompanionAI.CompanionAI_companion_creature_runtime.Howl
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UCompanionAI_companion_creature_runtime::Howl(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_companion_creature_runtime", "Howl");

	Params::UCompanionAI_companion_creature_runtime_Howl_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CompanionAI.CompanionAI_companion_creature_runtime.GameLoop
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UCompanionAI_companion_creature_runtime::GameLoop(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_companion_creature_runtime", "GameLoop");

	Params::UCompanionAI_companion_creature_runtime_GameLoop_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CompanionAI.CompanionAI_companion_creature_runtime.FaceLKP_L_Nagent_M_Nfloat_R
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_Lagent_Mfloat_R      __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UCompanionAI_companion_creature_runtime::FaceLKP_L_Nagent_M_Nfloat_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_Lagent_Mfloat_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_companion_creature_runtime", "FaceLKP_L_Nagent_M_Nfloat_R");

	Params::UCompanionAI_companion_creature_runtime_FaceLKP_L_Nagent_M_Nfloat_R_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CompanionAI.CompanionAI_companion_creature_runtime.EngageTarget_L_Nagent_M_Ngameplay__ability__asset_R
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_Lagent_Mgameplay__ability__asset_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UCompanionAI_companion_creature_runtime::EngageTarget_L_Nagent_M_Ngameplay__ability__asset_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_Lagent_Mgameplay__ability__asset_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_companion_creature_runtime", "EngageTarget_L_Nagent_M_Ngameplay__ability__asset_R");

	Params::UCompanionAI_companion_creature_runtime_EngageTarget_L_Nagent_M_Ngameplay__ability__asset_R_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CompanionAI.CompanionAI_companion_creature_runtime.DetectNewTarget
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UCompanionAI_companion_creature_runtime::DetectNewTarget(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_companion_creature_runtime", "DetectNewTarget");

	Params::UCompanionAI_companion_creature_runtime_DetectNewTarget_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CompanionAI.CompanionAI_companion_creature_runtime.DetectMovement_L_Nvector3_M_Nagent_M_Nfloat_R
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_Lvector3_Magent_Mfloat_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UCompanionAI_companion_creature_runtime::DetectMovement_L_Nvector3_M_Nagent_M_Nfloat_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_Lvector3_Magent_Mfloat_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_companion_creature_runtime", "DetectMovement_L_Nvector3_M_Nagent_M_Nfloat_R");

	Params::UCompanionAI_companion_creature_runtime_DetectMovement_L_Nvector3_M_Nagent_M_Nfloat_R_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CompanionAI.CompanionAI_companion_creature_runtime.ActivateAbilityWhenCloseEnough_L_Nagent_M_Ngameplay__ability__asset_M_Nfloat_M_Nfloat_R
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_Lagent_Mgameplay__ability__asset_Mfloat_Mfloat_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UCompanionAI_companion_creature_runtime::ActivateAbilityWhenCloseEnough_L_Nagent_M_Ngameplay__ability__asset_M_Nfloat_M_Nfloat_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_Lagent_Mgameplay__ability__asset_Mfloat_Mfloat_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_companion_creature_runtime", "ActivateAbilityWhenCloseEnough_L_Nagent_M_Ngameplay__ability__asset_M_Nfloat_M_Nfloat_R");

	Params::UCompanionAI_companion_creature_runtime_ActivateAbilityWhenCloseEnough_L_Nagent_M_Ngameplay__ability__asset_M_Nfloat_M_Nfloat_R_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CompanionAI.CompanionAI_companion_creature_runtime.$InitInstance
// (None)
// Parameters:

void UCompanionAI_companion_creature_runtime::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_companion_creature_runtime", "$InitInstance");

	Params::UCompanionAI_companion_creature_runtime__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function CompanionAI.CompanionAI_companion_creature_runtime.$Block
// (None)
// Parameters:

void UCompanionAI_companion_creature_runtime::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_companion_creature_runtime", "$Block");

	Params::UCompanionAI_companion_creature_runtime__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function CompanionAI.CompanionAI_companion_creature_runtime.$InitCDO
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

void UCompanionAI_companion_creature_runtime::_InitCDO(FOptionalProperty_ _ExprResult_0, FOptionalProperty_ __verse_0x00000000__1, uint8 _ExprResult_1, FOptionalProperty_ _ExprResultStack_2, FOptionalProperty_ _ExprResult_3, FOptionalProperty_ __verse_0x00000000__3, uint8 _ExprResult_4, FOptionalProperty_ _ExprResultStack_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_companion_creature_runtime", "$InitCDO");

	Params::UCompanionAI_companion_creature_runtime__InitCDO_Params Parms{};

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


// VerseClass CompanionAI.CompanionAI_default_ai_behavior
// (None)

class UClass* UCompanionAI_default_ai_behavior::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CompanionAI_default_ai_behavior");

	return Clss;
}


// CompanionAI_default_ai_behavior CompanionAI.Default__CompanionAI_default_ai_behavior
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCompanionAI_default_ai_behavior* UCompanionAI_default_ai_behavior::GetDefaultObj()
{
	static class UCompanionAI_default_ai_behavior* Default = nullptr;

	if (!Default)
		Default = static_cast<UCompanionAI_default_ai_behavior*>(UCompanionAI_default_ai_behavior::StaticClass()->DefaultObject);

	return Default;
}


// Function CompanionAI.CompanionAI_default_ai_behavior.OnBegin
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UCompanionAI_default_ai_behavior::OnBegin(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_default_ai_behavior", "OnBegin");

	Params::UCompanionAI_default_ai_behavior_OnBegin_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CompanionAI.CompanionAI_default_ai_behavior.$InitInstance
// (None)
// Parameters:

void UCompanionAI_default_ai_behavior::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_default_ai_behavior", "$InitInstance");

	Params::UCompanionAI_default_ai_behavior__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function CompanionAI.CompanionAI_default_ai_behavior.$Block
// (None)
// Parameters:

void UCompanionAI_default_ai_behavior::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_default_ai_behavior", "$Block");

	Params::UCompanionAI_default_ai_behavior__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function CompanionAI.CompanionAI_default_ai_behavior.$InitCDO
// (None)
// Parameters:

void UCompanionAI_default_ai_behavior::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_default_ai_behavior", "$InitCDO");

	Params::UCompanionAI_default_ai_behavior__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass CompanionAI.CompanionAI_fort_br_character_actions_interface
// (None)

class UClass* UCompanionAI_fort_br_character_actions_interface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CompanionAI_fort_br_character_actions_interface");

	return Clss;
}


// CompanionAI_fort_br_character_actions_interface CompanionAI.Default__CompanionAI_fort_br_character_actions_interface
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCompanionAI_fort_br_character_actions_interface* UCompanionAI_fort_br_character_actions_interface::GetDefaultObj()
{
	static class UCompanionAI_fort_br_character_actions_interface* Default = nullptr;

	if (!Default)
		Default = static_cast<UCompanionAI_fort_br_character_actions_interface*>(UCompanionAI_fort_br_character_actions_interface::StaticClass()->DefaultObject);

	return Default;
}


// Function CompanionAI.CompanionAI_fort_br_character_actions_interface.RunDefaultBehavior
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UCompanionAI_fort_br_character_actions_interface::RunDefaultBehavior(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_fort_br_character_actions_interface", "RunDefaultBehavior");

	Params::UCompanionAI_fort_br_character_actions_interface_RunDefaultBehavior_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CompanionAI.CompanionAI_fort_br_character_actions_interface._L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__br__character__actions__interface_N_RIsFollowingBehaviorEnabled
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// uint8                              RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

uint8 UCompanionAI_fort_br_character_actions_interface::_L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__br__character__actions__interface_N_RIsFollowingBehaviorEnabled(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_fort_br_character_actions_interface", "_L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__br__character__actions__interface_N_RIsFollowingBehaviorEnabled");

	Params::UCompanionAI_fort_br_character_actions_interface__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__br__character__actions__interface_N_RIsFollowingBehaviorEnabled_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass CompanionAI.CompanionAI_fort_br_creature_actions_interface
// (None)

class UClass* UCompanionAI_fort_br_creature_actions_interface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CompanionAI_fort_br_creature_actions_interface");

	return Clss;
}


// CompanionAI_fort_br_creature_actions_interface CompanionAI.Default__CompanionAI_fort_br_creature_actions_interface
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCompanionAI_fort_br_creature_actions_interface* UCompanionAI_fort_br_creature_actions_interface::GetDefaultObj()
{
	static class UCompanionAI_fort_br_creature_actions_interface* Default = nullptr;

	if (!Default)
		Default = static_cast<UCompanionAI_fort_br_creature_actions_interface*>(UCompanionAI_fort_br_creature_actions_interface::StaticClass()->DefaultObject);

	return Default;
}


// Function CompanionAI.CompanionAI_fort_br_creature_actions_interface.RunDefaultBehavior
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UCompanionAI_fort_br_creature_actions_interface::RunDefaultBehavior(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_fort_br_creature_actions_interface", "RunDefaultBehavior");

	Params::UCompanionAI_fort_br_creature_actions_interface_RunDefaultBehavior_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass CompanionAI.CompanionAI_fort_creature_component
// (None)

class UClass* UCompanionAI_fort_creature_component::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CompanionAI_fort_creature_component");

	return Clss;
}


// CompanionAI_fort_creature_component CompanionAI.Default__CompanionAI_fort_creature_component
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCompanionAI_fort_creature_component* UCompanionAI_fort_creature_component::GetDefaultObj()
{
	static class UCompanionAI_fort_creature_component* Default = nullptr;

	if (!Default)
		Default = static_cast<UCompanionAI_fort_creature_component*>(UCompanionAI_fort_creature_component::StaticClass()->DefaultObject);

	return Default;
}


// Function CompanionAI.CompanionAI_fort_creature_component.RunDefaultBehavior
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UCompanionAI_fort_creature_component::RunDefaultBehavior(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_fort_creature_component", "RunDefaultBehavior");

	Params::UCompanionAI_fort_creature_component_RunDefaultBehavior_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CompanionAI.CompanionAI_fort_creature_component.$InitInstance
// (None)
// Parameters:

void UCompanionAI_fort_creature_component::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_fort_creature_component", "$InitInstance");

	Params::UCompanionAI_fort_creature_component__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function CompanionAI.CompanionAI_fort_creature_component.$Block
// (None)
// Parameters:

void UCompanionAI_fort_creature_component::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_fort_creature_component", "$Block");

	Params::UCompanionAI_fort_creature_component__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function CompanionAI.CompanionAI_fort_creature_component.$InitCDO
// (None)
// Parameters:

void UCompanionAI_fort_creature_component::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_fort_creature_component", "$InitCDO");

	Params::UCompanionAI_fort_creature_component__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass CompanionAI.CompanionAI_fort_npc_component
// (None)

class UClass* UCompanionAI_fort_npc_component::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CompanionAI_fort_npc_component");

	return Clss;
}


// CompanionAI_fort_npc_component CompanionAI.Default__CompanionAI_fort_npc_component
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCompanionAI_fort_npc_component* UCompanionAI_fort_npc_component::GetDefaultObj()
{
	static class UCompanionAI_fort_npc_component* Default = nullptr;

	if (!Default)
		Default = static_cast<UCompanionAI_fort_npc_component*>(UCompanionAI_fort_npc_component::StaticClass()->DefaultObject);

	return Default;
}


// Function CompanionAI.CompanionAI_fort_npc_component.RunDefaultBehavior
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UCompanionAI_fort_npc_component::RunDefaultBehavior(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_fort_npc_component", "RunDefaultBehavior");

	Params::UCompanionAI_fort_npc_component_RunDefaultBehavior_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CompanionAI.CompanionAI_fort_npc_component._L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__br__character__actions__interface_N_RIsFollowingBehaviorEnabled
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// uint8                              RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

uint8 UCompanionAI_fort_npc_component::_L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__br__character__actions__interface_N_RIsFollowingBehaviorEnabled(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_fort_npc_component", "_L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__br__character__actions__interface_N_RIsFollowingBehaviorEnabled");

	Params::UCompanionAI_fort_npc_component__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__br__character__actions__interface_N_RIsFollowingBehaviorEnabled_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CompanionAI.CompanionAI_fort_npc_component.$InitInstance
// (None)
// Parameters:

void UCompanionAI_fort_npc_component::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_fort_npc_component", "$InitInstance");

	Params::UCompanionAI_fort_npc_component__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function CompanionAI.CompanionAI_fort_npc_component.$Block
// (None)
// Parameters:

void UCompanionAI_fort_npc_component::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_fort_npc_component", "$Block");

	Params::UCompanionAI_fort_npc_component__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function CompanionAI.CompanionAI_fort_npc_component.$InitCDO
// (None)
// Parameters:

void UCompanionAI_fort_npc_component::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_fort_npc_component", "$InitCDO");

	Params::UCompanionAI_fort_npc_component__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass CompanionAI.CompanionAI_fort_ping_interface
// (None)

class UClass* UCompanionAI_fort_ping_interface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CompanionAI_fort_ping_interface");

	return Clss;
}


// CompanionAI_fort_ping_interface CompanionAI.Default__CompanionAI_fort_ping_interface
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCompanionAI_fort_ping_interface* UCompanionAI_fort_ping_interface::GetDefaultObj()
{
	static class UCompanionAI_fort_ping_interface* Default = nullptr;

	if (!Default)
		Default = static_cast<UCompanionAI_fort_ping_interface*>(UCompanionAI_fort_ping_interface::StaticClass()->DefaultObject);

	return Default;
}


// Function CompanionAI.CompanionAI_fort_ping_interface._L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RUnconvertedEvent
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UObject*                     RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UObject* UCompanionAI_fort_ping_interface::_L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RUnconvertedEvent(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_fort_ping_interface", "_L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RUnconvertedEvent");

	Params::UCompanionAI_fort_ping_interface__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RUnconvertedEvent_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CompanionAI.CompanionAI_fort_ping_interface.OnNPCCommand
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UCompanionAI_fort_ping_interface::OnNPCCommand(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_fort_ping_interface", "OnNPCCommand");

	Params::UCompanionAI_fort_ping_interface_OnNPCCommand_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CompanionAI.CompanionAI_fort_ping_interface._L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RIsAttackCommandEnabled
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// uint8                              RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

uint8 UCompanionAI_fort_ping_interface::_L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RIsAttackCommandEnabled(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_fort_ping_interface", "_L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RIsAttackCommandEnabled");

	Params::UCompanionAI_fort_ping_interface__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RIsAttackCommandEnabled_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CompanionAI.CompanionAI_fort_ping_interface._L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RGetCurrentNPCCommand
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor)

FOptionalProperty_ UCompanionAI_fort_ping_interface::_L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RGetCurrentNPCCommand(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_fort_ping_interface", "_L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RGetCurrentNPCCommand");

	Params::UCompanionAI_fort_ping_interface__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RGetCurrentNPCCommand_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CompanionAI.CompanionAI_fort_ping_interface._L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_REnableCommandWheel_L_Nlogic_R
// (Public, BlueprintCallable)
// Parameters:
// uint8                              __verse_0xB2CDDD72_Argument                                      (Parm, NoDestructor, HasGetValueTypeHash)

void UCompanionAI_fort_ping_interface::_L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_REnableCommandWheel_L_Nlogic_R(uint8 __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_fort_ping_interface", "_L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_REnableCommandWheel_L_Nlogic_R");

	Params::UCompanionAI_fort_ping_interface__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_REnableCommandWheel_L_Nlogic_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CompanionAI.CompanionAI_fort_ping_interface._L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RDeclineNPCCommand_L_Nlogic_R
// (Public, BlueprintCallable)
// Parameters:
// uint8                              __verse_0xB2CDDD72_Argument                                      (Parm, NoDestructor, HasGetValueTypeHash)

void UCompanionAI_fort_ping_interface::_L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RDeclineNPCCommand_L_Nlogic_R(uint8 __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_fort_ping_interface", "_L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RDeclineNPCCommand_L_Nlogic_R");

	Params::UCompanionAI_fort_ping_interface__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RDeclineNPCCommand_L_Nlogic_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CompanionAI.CompanionAI_fort_ping_interface._L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RConvertedEvent
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UObject*                     RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UObject* UCompanionAI_fort_ping_interface::_L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RConvertedEvent(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_fort_ping_interface", "_L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RConvertedEvent");

	Params::UCompanionAI_fort_ping_interface__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RConvertedEvent_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CompanionAI.CompanionAI_fort_ping_interface._L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RConvertPingToAttack_L_Nagent_R
// (Public, BlueprintCallable)
// Parameters:
// class USimulation_agent*           __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

void UCompanionAI_fort_ping_interface::_L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RConvertPingToAttack_L_Nagent_R(class USimulation_agent* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_fort_ping_interface", "_L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RConvertPingToAttack_L_Nagent_R");

	Params::UCompanionAI_fort_ping_interface__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RConvertPingToAttack_L_Nagent_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CompanionAI.CompanionAI_fort_ping_interface._L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RCanAcceptPingCommand
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// uint8                              RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

uint8 UCompanionAI_fort_ping_interface::_L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RCanAcceptPingCommand(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_fort_ping_interface", "_L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RCanAcceptPingCommand");

	Params::UCompanionAI_fort_ping_interface__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RCanAcceptPingCommand_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CompanionAI.CompanionAI_fort_ping_interface._L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RAreNPCCommandsEnabled
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// uint8                              RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

uint8 UCompanionAI_fort_ping_interface::_L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RAreNPCCommandsEnabled(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_fort_ping_interface", "_L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RAreNPCCommandsEnabled");

	Params::UCompanionAI_fort_ping_interface__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RAreNPCCommandsEnabled_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass CompanionAI.CompanionAI_log_companion_ai
// (None)

class UClass* UCompanionAI_log_companion_ai::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CompanionAI_log_companion_ai");

	return Clss;
}


// CompanionAI_log_companion_ai CompanionAI.Default__CompanionAI_log_companion_ai
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCompanionAI_log_companion_ai* UCompanionAI_log_companion_ai::GetDefaultObj()
{
	static class UCompanionAI_log_companion_ai* Default = nullptr;

	if (!Default)
		Default = static_cast<UCompanionAI_log_companion_ai*>(UCompanionAI_log_companion_ai::StaticClass()->DefaultObject);

	return Default;
}


// Function CompanionAI.CompanionAI_log_companion_ai.$InitInstance
// (None)
// Parameters:

void UCompanionAI_log_companion_ai::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_log_companion_ai", "$InitInstance");

	Params::UCompanionAI_log_companion_ai__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function CompanionAI.CompanionAI_log_companion_ai.$Block
// (None)
// Parameters:

void UCompanionAI_log_companion_ai::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_log_companion_ai", "$Block");

	Params::UCompanionAI_log_companion_ai__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function CompanionAI.CompanionAI_log_companion_ai.$InitCDO
// (None)
// Parameters:

void UCompanionAI_log_companion_ai::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_log_companion_ai", "$InitCDO");

	Params::UCompanionAI_log_companion_ai__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass CompanionAI.CompanionAI_log_companion_creature
// (None)

class UClass* UCompanionAI_log_companion_creature::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CompanionAI_log_companion_creature");

	return Clss;
}


// CompanionAI_log_companion_creature CompanionAI.Default__CompanionAI_log_companion_creature
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCompanionAI_log_companion_creature* UCompanionAI_log_companion_creature::GetDefaultObj()
{
	static class UCompanionAI_log_companion_creature* Default = nullptr;

	if (!Default)
		Default = static_cast<UCompanionAI_log_companion_creature*>(UCompanionAI_log_companion_creature::StaticClass()->DefaultObject);

	return Default;
}


// Function CompanionAI.CompanionAI_log_companion_creature.$InitInstance
// (None)
// Parameters:

void UCompanionAI_log_companion_creature::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_log_companion_creature", "$InitInstance");

	Params::UCompanionAI_log_companion_creature__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function CompanionAI.CompanionAI_log_companion_creature.$Block
// (None)
// Parameters:

void UCompanionAI_log_companion_creature::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_log_companion_creature", "$Block");

	Params::UCompanionAI_log_companion_creature__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function CompanionAI.CompanionAI_log_companion_creature.$InitCDO
// (None)
// Parameters:

void UCompanionAI_log_companion_creature::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_log_companion_creature", "$InitCDO");

	Params::UCompanionAI_log_companion_creature__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass CompanionAI.CompanionAI_ping_component
// (None)

class UClass* UCompanionAI_ping_component::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CompanionAI_ping_component");

	return Clss;
}


// CompanionAI_ping_component CompanionAI.Default__CompanionAI_ping_component
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCompanionAI_ping_component* UCompanionAI_ping_component::GetDefaultObj()
{
	static class UCompanionAI_ping_component* Default = nullptr;

	if (!Default)
		Default = static_cast<UCompanionAI_ping_component*>(UCompanionAI_ping_component::StaticClass()->DefaultObject);

	return Default;
}


// Function CompanionAI.CompanionAI_ping_component._L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RUnconvertedEvent
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UObject*                     RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UObject* UCompanionAI_ping_component::_L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RUnconvertedEvent(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_ping_component", "_L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RUnconvertedEvent");

	Params::UCompanionAI_ping_component__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RUnconvertedEvent_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CompanionAI.CompanionAI_ping_component.OnNPCCommand
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UCompanionAI_ping_component::OnNPCCommand(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_ping_component", "OnNPCCommand");

	Params::UCompanionAI_ping_component_OnNPCCommand_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CompanionAI.CompanionAI_ping_component._L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RIsAttackCommandEnabled
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// uint8                              RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

uint8 UCompanionAI_ping_component::_L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RIsAttackCommandEnabled(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_ping_component", "_L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RIsAttackCommandEnabled");

	Params::UCompanionAI_ping_component__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RIsAttackCommandEnabled_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CompanionAI.CompanionAI_ping_component._L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RGetCurrentNPCCommand
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor)

FOptionalProperty_ UCompanionAI_ping_component::_L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RGetCurrentNPCCommand(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_ping_component", "_L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RGetCurrentNPCCommand");

	Params::UCompanionAI_ping_component__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RGetCurrentNPCCommand_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CompanionAI.CompanionAI_ping_component._L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_REnableCommandWheel_L_Nlogic_R
// (Native, Public, BlueprintCallable)
// Parameters:
// uint8                              __verse_0xB2CDDD72_Argument                                      (Parm, NoDestructor, HasGetValueTypeHash)

void UCompanionAI_ping_component::_L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_REnableCommandWheel_L_Nlogic_R(uint8 __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_ping_component", "_L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_REnableCommandWheel_L_Nlogic_R");

	Params::UCompanionAI_ping_component__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_REnableCommandWheel_L_Nlogic_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CompanionAI.CompanionAI_ping_component._L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RDeclineNPCCommand_L_Nlogic_R
// (Native, Public, BlueprintCallable)
// Parameters:
// uint8                              __verse_0xB2CDDD72_Argument                                      (Parm, NoDestructor, HasGetValueTypeHash)

void UCompanionAI_ping_component::_L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RDeclineNPCCommand_L_Nlogic_R(uint8 __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_ping_component", "_L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RDeclineNPCCommand_L_Nlogic_R");

	Params::UCompanionAI_ping_component__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RDeclineNPCCommand_L_Nlogic_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CompanionAI.CompanionAI_ping_component._L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RConvertedEvent
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UObject*                     RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UObject* UCompanionAI_ping_component::_L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RConvertedEvent(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_ping_component", "_L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RConvertedEvent");

	Params::UCompanionAI_ping_component__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RConvertedEvent_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function CompanionAI.CompanionAI_ping_component._L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RConvertPingToAttack_L_Nagent_R
// (Native, Public, BlueprintCallable)
// Parameters:
// class USimulation_agent*           __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

void UCompanionAI_ping_component::_L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RConvertPingToAttack_L_Nagent_R(class USimulation_agent* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_ping_component", "_L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RConvertPingToAttack_L_Nagent_R");

	Params::UCompanionAI_ping_component__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RConvertPingToAttack_L_Nagent_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CompanionAI.CompanionAI_ping_component._L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RCanAcceptPingCommand
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// uint8                              RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

uint8 UCompanionAI_ping_component::_L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RCanAcceptPingCommand(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_ping_component", "_L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RCanAcceptPingCommand");

	Params::UCompanionAI_ping_component__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RCanAcceptPingCommand_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CompanionAI.CompanionAI_ping_component._L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RAreNPCCommandsEnabled
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// uint8                              RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

uint8 UCompanionAI_ping_component::_L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RAreNPCCommandsEnabled(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_ping_component", "_L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RAreNPCCommandsEnabled");

	Params::UCompanionAI_ping_component__L_2fFortnite_2ecom_2fAI_2fCompanionAI_2ffort__ping__interface_N_RAreNPCCommandsEnabled_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function CompanionAI.CompanionAI_ping_component.$InitInstance
// (None)
// Parameters:

void UCompanionAI_ping_component::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_ping_component", "$InitInstance");

	Params::UCompanionAI_ping_component__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function CompanionAI.CompanionAI_ping_component.$Block
// (None)
// Parameters:

void UCompanionAI_ping_component::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_ping_component", "$Block");

	Params::UCompanionAI_ping_component__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function CompanionAI.CompanionAI_ping_component.$InitCDO
// (HasDefaults)
// Parameters:
// class UVerseEngine_multicast_delegate*_ExprResult_0                                                    (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint64                             _InstancingGraph_1                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerseEngine_multicast_delegate*_ExprResult_2                                                    (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint64                             _InstancingGraph_3                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerseEngine_multicast_delegate*_ExprResult_4                                                    (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint64                             _InstancingGraph_5                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerseEngine_multicast_delegate*_ExprResult_6                                                    (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint64                             _InstancingGraph_7                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCompanionAI_ping_component::_InitCDO(class UVerseEngine_multicast_delegate* _ExprResult_0, uint64 _InstancingGraph_1, class UVerseEngine_multicast_delegate* _ExprResult_2, uint64 _InstancingGraph_3, class UVerseEngine_multicast_delegate* _ExprResult_4, uint64 _InstancingGraph_5, class UVerseEngine_multicast_delegate* _ExprResult_6, uint64 _InstancingGraph_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CompanionAI_ping_component", "$InitCDO");

	Params::UCompanionAI_ping_component__InitCDO_Params Parms{};

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


// VerseClass CompanionAI.task_CompanionAI_companion_ai$OnBegin
// (None)

class UClass* UTask_CompanionAI_companion_ai_OnBegin::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_CompanionAI_companion_ai$OnBegin");

	return Clss;
}


// task_CompanionAI_companion_ai$OnBegin CompanionAI.Default__task_CompanionAI_companion_ai$OnBegin
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_CompanionAI_companion_ai_OnBegin* UTask_CompanionAI_companion_ai_OnBegin::GetDefaultObj()
{
	static class UTask_CompanionAI_companion_ai_OnBegin* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_CompanionAI_companion_ai_OnBegin*>(UTask_CompanionAI_companion_ai_OnBegin::StaticClass()->DefaultObject);

	return Default;
}


// Function CompanionAI.task_CompanionAI_companion_ai$OnBegin.Update
// (Public, HasOutParams, HasDefaults)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint64                             _InstancingGraph_62                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint64                             _InstancingGraph_139                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_CompanionAI_companion_ai_OnBegin::Update(uint64 _InstancingGraph_62, uint64 _InstancingGraph_139)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_CompanionAI_companion_ai$OnBegin", "Update");

	Params::UTask_CompanionAI_companion_ai_OnBegin_Update_Params Parms{};

	Parms._InstancingGraph_62 = _InstancingGraph_62;
	Parms._InstancingGraph_139 = _InstancingGraph_139;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass CompanionAI.task_CompanionAI_companion_ai_runtime$CheckForReviveTeamMembers_L_Nping__info_R
// (None)

class UClass* UTask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_CompanionAI_companion_ai_runtime$CheckForReviveTeamMembers_L_Nping__info_R");

	return Clss;
}


// task_CompanionAI_companion_ai_runtime$CheckForReviveTeamMembers_L_Nping__info_R CompanionAI.Default__task_CompanionAI_companion_ai_runtime$CheckForReviveTeamMembers_L_Nping__info_R
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R* UTask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R::GetDefaultObj()
{
	static class UTask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R*>(UTask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R::StaticClass()->DefaultObject);

	return Default;
}


// Function CompanionAI.task_CompanionAI_companion_ai_runtime$CheckForReviveTeamMembers_L_Nping__info_R.Update
// (Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_CompanionAI_companion_ai_runtime$CheckForReviveTeamMembers_L_Nping__info_R", "Update");

	Params::UTask_CompanionAI_companion_ai_runtime_CheckForReviveTeamMembers_L_Nping__info_R_Update_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass CompanionAI.task_CompanionAI_companion_ai_runtime$CrouchService
// (None)

class UClass* UTask_CompanionAI_companion_ai_runtime_CrouchService::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_CompanionAI_companion_ai_runtime$CrouchService");

	return Clss;
}


// task_CompanionAI_companion_ai_runtime$CrouchService CompanionAI.Default__task_CompanionAI_companion_ai_runtime$CrouchService
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_CompanionAI_companion_ai_runtime_CrouchService* UTask_CompanionAI_companion_ai_runtime_CrouchService::GetDefaultObj()
{
	static class UTask_CompanionAI_companion_ai_runtime_CrouchService* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_CompanionAI_companion_ai_runtime_CrouchService*>(UTask_CompanionAI_companion_ai_runtime_CrouchService::StaticClass()->DefaultObject);

	return Default;
}


// Function CompanionAI.task_CompanionAI_companion_ai_runtime$CrouchService.Update
// (Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_CompanionAI_companion_ai_runtime_CrouchService::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_CompanionAI_companion_ai_runtime$CrouchService", "Update");

	Params::UTask_CompanionAI_companion_ai_runtime_CrouchService_Update_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass CompanionAI.task_CompanionAI_companion_ai_runtime$CrouchUntilHit
// (None)

class UClass* UTask_CompanionAI_companion_ai_runtime_CrouchUntilHit::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_CompanionAI_companion_ai_runtime$CrouchUntilHit");

	return Clss;
}


// task_CompanionAI_companion_ai_runtime$CrouchUntilHit CompanionAI.Default__task_CompanionAI_companion_ai_runtime$CrouchUntilHit
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_CompanionAI_companion_ai_runtime_CrouchUntilHit* UTask_CompanionAI_companion_ai_runtime_CrouchUntilHit::GetDefaultObj()
{
	static class UTask_CompanionAI_companion_ai_runtime_CrouchUntilHit* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_CompanionAI_companion_ai_runtime_CrouchUntilHit*>(UTask_CompanionAI_companion_ai_runtime_CrouchUntilHit::StaticClass()->DefaultObject);

	return Default;
}


// Function CompanionAI.task_CompanionAI_companion_ai_runtime$CrouchUntilHit.Update
// (Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_CompanionAI_companion_ai_runtime_CrouchUntilHit::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_CompanionAI_companion_ai_runtime$CrouchUntilHit", "Update");

	Params::UTask_CompanionAI_companion_ai_runtime_CrouchUntilHit_Update_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass CompanionAI.task_CompanionAI_companion_ai_runtime$DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R
// (None)

class UClass* UTask_CompanionAI_companion_ai_runtime_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_CompanionAI_companion_ai_runtime$DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R");

	return Clss;
}


// task_CompanionAI_companion_ai_runtime$DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R CompanionAI.Default__task_CompanionAI_companion_ai_runtime$DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_CompanionAI_companion_ai_runtime_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R* UTask_CompanionAI_companion_ai_runtime_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R::GetDefaultObj()
{
	static class UTask_CompanionAI_companion_ai_runtime_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_CompanionAI_companion_ai_runtime_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R*>(UTask_CompanionAI_companion_ai_runtime_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R::StaticClass()->DefaultObject);

	return Default;
}


// Function CompanionAI.task_CompanionAI_companion_ai_runtime$DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R.Update
// (Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_CompanionAI_companion_ai_runtime_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_CompanionAI_companion_ai_runtime$DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R", "Update");

	Params::UTask_CompanionAI_companion_ai_runtime_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R_Update_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass CompanionAI.task_CompanionAI_companion_ai_runtime$GameLoop
// (None)

class UClass* UTask_CompanionAI_companion_ai_runtime_GameLoop::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_CompanionAI_companion_ai_runtime$GameLoop");

	return Clss;
}


// task_CompanionAI_companion_ai_runtime$GameLoop CompanionAI.Default__task_CompanionAI_companion_ai_runtime$GameLoop
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_CompanionAI_companion_ai_runtime_GameLoop* UTask_CompanionAI_companion_ai_runtime_GameLoop::GetDefaultObj()
{
	static class UTask_CompanionAI_companion_ai_runtime_GameLoop* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_CompanionAI_companion_ai_runtime_GameLoop*>(UTask_CompanionAI_companion_ai_runtime_GameLoop::StaticClass()->DefaultObject);

	return Default;
}


// Function CompanionAI.task_CompanionAI_companion_ai_runtime$GameLoop.Update
// (Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_CompanionAI_companion_ai_runtime_GameLoop::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_CompanionAI_companion_ai_runtime$GameLoop", "Update");

	Params::UTask_CompanionAI_companion_ai_runtime_GameLoop_Update_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass CompanionAI.task_CompanionAI_companion_ai_runtime$GetAttackCommandTarget_L_Nping__info_R
// (None)

class UClass* UTask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_CompanionAI_companion_ai_runtime$GetAttackCommandTarget_L_Nping__info_R");

	return Clss;
}


// task_CompanionAI_companion_ai_runtime$GetAttackCommandTarget_L_Nping__info_R CompanionAI.Default__task_CompanionAI_companion_ai_runtime$GetAttackCommandTarget_L_Nping__info_R
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R* UTask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R::GetDefaultObj()
{
	static class UTask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R*>(UTask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R::StaticClass()->DefaultObject);

	return Default;
}


// Function CompanionAI.task_CompanionAI_companion_ai_runtime$GetAttackCommandTarget_L_Nping__info_R.Update
// (Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_CompanionAI_companion_ai_runtime$GetAttackCommandTarget_L_Nping__info_R", "Update");

	Params::UTask_CompanionAI_companion_ai_runtime_GetAttackCommandTarget_L_Nping__info_R_Update_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass CompanionAI.task_CompanionAI_companion_ai_runtime$GetNewObstacle
// (None)

class UClass* UTask_CompanionAI_companion_ai_runtime_GetNewObstacle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_CompanionAI_companion_ai_runtime$GetNewObstacle");

	return Clss;
}


// task_CompanionAI_companion_ai_runtime$GetNewObstacle CompanionAI.Default__task_CompanionAI_companion_ai_runtime$GetNewObstacle
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_CompanionAI_companion_ai_runtime_GetNewObstacle* UTask_CompanionAI_companion_ai_runtime_GetNewObstacle::GetDefaultObj()
{
	static class UTask_CompanionAI_companion_ai_runtime_GetNewObstacle* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_CompanionAI_companion_ai_runtime_GetNewObstacle*>(UTask_CompanionAI_companion_ai_runtime_GetNewObstacle::StaticClass()->DefaultObject);

	return Default;
}


// Function CompanionAI.task_CompanionAI_companion_ai_runtime$GetNewObstacle.Update
// (Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_CompanionAI_companion_ai_runtime_GetNewObstacle::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_CompanionAI_companion_ai_runtime$GetNewObstacle", "Update");

	Params::UTask_CompanionAI_companion_ai_runtime_GetNewObstacle_Update_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass CompanionAI.task_CompanionAI_companion_ai_runtime$GetNewTargetPerception
// (None)

class UClass* UTask_CompanionAI_companion_ai_runtime_GetNewTargetPerception::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_CompanionAI_companion_ai_runtime$GetNewTargetPerception");

	return Clss;
}


// task_CompanionAI_companion_ai_runtime$GetNewTargetPerception CompanionAI.Default__task_CompanionAI_companion_ai_runtime$GetNewTargetPerception
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_CompanionAI_companion_ai_runtime_GetNewTargetPerception* UTask_CompanionAI_companion_ai_runtime_GetNewTargetPerception::GetDefaultObj()
{
	static class UTask_CompanionAI_companion_ai_runtime_GetNewTargetPerception* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_CompanionAI_companion_ai_runtime_GetNewTargetPerception*>(UTask_CompanionAI_companion_ai_runtime_GetNewTargetPerception::StaticClass()->DefaultObject);

	return Default;
}


// Function CompanionAI.task_CompanionAI_companion_ai_runtime$GetNewTargetPerception.Update
// (Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_CompanionAI_companion_ai_runtime_GetNewTargetPerception::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_CompanionAI_companion_ai_runtime$GetNewTargetPerception", "Update");

	Params::UTask_CompanionAI_companion_ai_runtime_GetNewTargetPerception_Update_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass CompanionAI.task_CompanionAI_companion_ai_runtime$GetNewThreat
// (None)

class UClass* UTask_CompanionAI_companion_ai_runtime_GetNewThreat::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_CompanionAI_companion_ai_runtime$GetNewThreat");

	return Clss;
}


// task_CompanionAI_companion_ai_runtime$GetNewThreat CompanionAI.Default__task_CompanionAI_companion_ai_runtime$GetNewThreat
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_CompanionAI_companion_ai_runtime_GetNewThreat* UTask_CompanionAI_companion_ai_runtime_GetNewThreat::GetDefaultObj()
{
	static class UTask_CompanionAI_companion_ai_runtime_GetNewThreat* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_CompanionAI_companion_ai_runtime_GetNewThreat*>(UTask_CompanionAI_companion_ai_runtime_GetNewThreat::StaticClass()->DefaultObject);

	return Default;
}


// Function CompanionAI.task_CompanionAI_companion_ai_runtime$GetNewThreat.Update
// (Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_CompanionAI_companion_ai_runtime_GetNewThreat::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_CompanionAI_companion_ai_runtime$GetNewThreat", "Update");

	Params::UTask_CompanionAI_companion_ai_runtime_GetNewThreat_Update_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass CompanionAI.task_CompanionAI_companion_ai_runtime$GetObstacle
// (None)

class UClass* UTask_CompanionAI_companion_ai_runtime_GetObstacle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_CompanionAI_companion_ai_runtime$GetObstacle");

	return Clss;
}


// task_CompanionAI_companion_ai_runtime$GetObstacle CompanionAI.Default__task_CompanionAI_companion_ai_runtime$GetObstacle
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_CompanionAI_companion_ai_runtime_GetObstacle* UTask_CompanionAI_companion_ai_runtime_GetObstacle::GetDefaultObj()
{
	static class UTask_CompanionAI_companion_ai_runtime_GetObstacle* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_CompanionAI_companion_ai_runtime_GetObstacle*>(UTask_CompanionAI_companion_ai_runtime_GetObstacle::StaticClass()->DefaultObject);

	return Default;
}


// Function CompanionAI.task_CompanionAI_companion_ai_runtime$GetObstacle.Update
// (Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_CompanionAI_companion_ai_runtime_GetObstacle::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_CompanionAI_companion_ai_runtime$GetObstacle", "Update");

	Params::UTask_CompanionAI_companion_ai_runtime_GetObstacle_Update_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass CompanionAI.task_CompanionAI_companion_ai_runtime$GetThreat
// (None)

class UClass* UTask_CompanionAI_companion_ai_runtime_GetThreat::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_CompanionAI_companion_ai_runtime$GetThreat");

	return Clss;
}


// task_CompanionAI_companion_ai_runtime$GetThreat CompanionAI.Default__task_CompanionAI_companion_ai_runtime$GetThreat
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_CompanionAI_companion_ai_runtime_GetThreat* UTask_CompanionAI_companion_ai_runtime_GetThreat::GetDefaultObj()
{
	static class UTask_CompanionAI_companion_ai_runtime_GetThreat* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_CompanionAI_companion_ai_runtime_GetThreat*>(UTask_CompanionAI_companion_ai_runtime_GetThreat::StaticClass()->DefaultObject);

	return Default;
}


// Function CompanionAI.task_CompanionAI_companion_ai_runtime$GetThreat.Update
// (Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_CompanionAI_companion_ai_runtime_GetThreat::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_CompanionAI_companion_ai_runtime$GetThreat", "Update");

	Params::UTask_CompanionAI_companion_ai_runtime_GetThreat_Update_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass CompanionAI.task_CompanionAI_companion_ai_runtime$GoToAndAttackTask_L_Nfort__threat__info_R
// (None)

class UClass* UTask_CompanionAI_companion_ai_runtime_GoToAndAttackTask_L_Nfort__threat__info_R::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_CompanionAI_companion_ai_runtime$GoToAndAttackTask_L_Nfort__threat__info_R");

	return Clss;
}


// task_CompanionAI_companion_ai_runtime$GoToAndAttackTask_L_Nfort__threat__info_R CompanionAI.Default__task_CompanionAI_companion_ai_runtime$GoToAndAttackTask_L_Nfort__threat__info_R
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_CompanionAI_companion_ai_runtime_GoToAndAttackTask_L_Nfort__threat__info_R* UTask_CompanionAI_companion_ai_runtime_GoToAndAttackTask_L_Nfort__threat__info_R::GetDefaultObj()
{
	static class UTask_CompanionAI_companion_ai_runtime_GoToAndAttackTask_L_Nfort__threat__info_R* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_CompanionAI_companion_ai_runtime_GoToAndAttackTask_L_Nfort__threat__info_R*>(UTask_CompanionAI_companion_ai_runtime_GoToAndAttackTask_L_Nfort__threat__info_R::StaticClass()->DefaultObject);

	return Default;
}


// Function CompanionAI.task_CompanionAI_companion_ai_runtime$GoToAndAttackTask_L_Nfort__threat__info_R.Update
// (Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_CompanionAI_companion_ai_runtime_GoToAndAttackTask_L_Nfort__threat__info_R::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_CompanionAI_companion_ai_runtime$GoToAndAttackTask_L_Nfort__threat__info_R", "Update");

	Params::UTask_CompanionAI_companion_ai_runtime_GoToAndAttackTask_L_Nfort__threat__info_R_Update_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass CompanionAI.task_CompanionAI_companion_ai_runtime$GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R
// (None)

class UClass* UTask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_CompanionAI_companion_ai_runtime$GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R");

	return Clss;
}


// task_CompanionAI_companion_ai_runtime$GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R CompanionAI.Default__task_CompanionAI_companion_ai_runtime$GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R* UTask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R::GetDefaultObj()
{
	static class UTask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R*>(UTask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R::StaticClass()->DefaultObject);

	return Default;
}


// Function CompanionAI.task_CompanionAI_companion_ai_runtime$GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R.Update
// (Public, HasOutParams, HasDefaults)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint64                             _InstancingGraph_34                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint64                             _InstancingGraph_49                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint64                             _InstancingGraph_98                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint64                             _InstancingGraph_113                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R::Update(uint64 _InstancingGraph_34, uint64 _InstancingGraph_49, uint64 _InstancingGraph_98, uint64 _InstancingGraph_113)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_CompanionAI_companion_ai_runtime$GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R", "Update");

	Params::UTask_CompanionAI_companion_ai_runtime_GoToPositionTask_L_Nvector3_M_N_Qagent_M_Nlogic_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R_Update_Params Parms{};

	Parms._InstancingGraph_34 = _InstancingGraph_34;
	Parms._InstancingGraph_49 = _InstancingGraph_49;
	Parms._InstancingGraph_98 = _InstancingGraph_98;
	Parms._InstancingGraph_113 = _InstancingGraph_113;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass CompanionAI.task_CompanionAI_companion_ai_runtime$HandleBackToMeCommand_L_Nping__info_R
// (None)

class UClass* UTask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_CompanionAI_companion_ai_runtime$HandleBackToMeCommand_L_Nping__info_R");

	return Clss;
}


// task_CompanionAI_companion_ai_runtime$HandleBackToMeCommand_L_Nping__info_R CompanionAI.Default__task_CompanionAI_companion_ai_runtime$HandleBackToMeCommand_L_Nping__info_R
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R* UTask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R::GetDefaultObj()
{
	static class UTask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R*>(UTask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R::StaticClass()->DefaultObject);

	return Default;
}


// Function CompanionAI.task_CompanionAI_companion_ai_runtime$HandleBackToMeCommand_L_Nping__info_R.Update
// (Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_CompanionAI_companion_ai_runtime$HandleBackToMeCommand_L_Nping__info_R", "Update");

	Params::UTask_CompanionAI_companion_ai_runtime_HandleBackToMeCommand_L_Nping__info_R_Update_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass CompanionAI.task_CompanionAI_companion_ai_runtime$HandleGoTo_L_Nping__info_R
// (None)

class UClass* UTask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_CompanionAI_companion_ai_runtime$HandleGoTo_L_Nping__info_R");

	return Clss;
}


// task_CompanionAI_companion_ai_runtime$HandleGoTo_L_Nping__info_R CompanionAI.Default__task_CompanionAI_companion_ai_runtime$HandleGoTo_L_Nping__info_R
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R* UTask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R::GetDefaultObj()
{
	static class UTask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R*>(UTask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R::StaticClass()->DefaultObject);

	return Default;
}


// Function CompanionAI.task_CompanionAI_companion_ai_runtime$HandleGoTo_L_Nping__info_R.Update
// (Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_CompanionAI_companion_ai_runtime$HandleGoTo_L_Nping__info_R", "Update");

	Params::UTask_CompanionAI_companion_ai_runtime_HandleGoTo_L_Nping__info_R_Update_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass CompanionAI.task_CompanionAI_companion_ai_runtime$HandleGoToCommand_L_Nping__info_R
// (None)

class UClass* UTask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_CompanionAI_companion_ai_runtime$HandleGoToCommand_L_Nping__info_R");

	return Clss;
}


// task_CompanionAI_companion_ai_runtime$HandleGoToCommand_L_Nping__info_R CompanionAI.Default__task_CompanionAI_companion_ai_runtime$HandleGoToCommand_L_Nping__info_R
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R* UTask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R::GetDefaultObj()
{
	static class UTask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R*>(UTask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R::StaticClass()->DefaultObject);

	return Default;
}


// Function CompanionAI.task_CompanionAI_companion_ai_runtime$HandleGoToCommand_L_Nping__info_R.Update
// (Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_CompanionAI_companion_ai_runtime$HandleGoToCommand_L_Nping__info_R", "Update");

	Params::UTask_CompanionAI_companion_ai_runtime_HandleGoToCommand_L_Nping__info_R_Update_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass CompanionAI.task_CompanionAI_companion_ai_runtime$HandleHoldPositionCommand_L_Nping__info_R
// (None)

class UClass* UTask_CompanionAI_companion_ai_runtime_HandleHoldPositionCommand_L_Nping__info_R::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_CompanionAI_companion_ai_runtime$HandleHoldPositionCommand_L_Nping__info_R");

	return Clss;
}


// task_CompanionAI_companion_ai_runtime$HandleHoldPositionCommand_L_Nping__info_R CompanionAI.Default__task_CompanionAI_companion_ai_runtime$HandleHoldPositionCommand_L_Nping__info_R
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_CompanionAI_companion_ai_runtime_HandleHoldPositionCommand_L_Nping__info_R* UTask_CompanionAI_companion_ai_runtime_HandleHoldPositionCommand_L_Nping__info_R::GetDefaultObj()
{
	static class UTask_CompanionAI_companion_ai_runtime_HandleHoldPositionCommand_L_Nping__info_R* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_CompanionAI_companion_ai_runtime_HandleHoldPositionCommand_L_Nping__info_R*>(UTask_CompanionAI_companion_ai_runtime_HandleHoldPositionCommand_L_Nping__info_R::StaticClass()->DefaultObject);

	return Default;
}


// Function CompanionAI.task_CompanionAI_companion_ai_runtime$HandleHoldPositionCommand_L_Nping__info_R.Update
// (Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_CompanionAI_companion_ai_runtime_HandleHoldPositionCommand_L_Nping__info_R::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_CompanionAI_companion_ai_runtime$HandleHoldPositionCommand_L_Nping__info_R", "Update");

	Params::UTask_CompanionAI_companion_ai_runtime_HandleHoldPositionCommand_L_Nping__info_R_Update_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass CompanionAI.task_CompanionAI_companion_ai_runtime$HandleNPCCommand_L_Nping__info_R
// (None)

class UClass* UTask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_CompanionAI_companion_ai_runtime$HandleNPCCommand_L_Nping__info_R");

	return Clss;
}


// task_CompanionAI_companion_ai_runtime$HandleNPCCommand_L_Nping__info_R CompanionAI.Default__task_CompanionAI_companion_ai_runtime$HandleNPCCommand_L_Nping__info_R
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R* UTask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R::GetDefaultObj()
{
	static class UTask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R*>(UTask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R::StaticClass()->DefaultObject);

	return Default;
}


// Function CompanionAI.task_CompanionAI_companion_ai_runtime$HandleNPCCommand_L_Nping__info_R.Update
// (Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_CompanionAI_companion_ai_runtime$HandleNPCCommand_L_Nping__info_R", "Update");

	Params::UTask_CompanionAI_companion_ai_runtime_HandleNPCCommand_L_Nping__info_R_Update_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass CompanionAI.task_CompanionAI_companion_ai_runtime$HandleObstacleService_L_N_Qentity_R
// (None)

class UClass* UTask_CompanionAI_companion_ai_runtime_HandleObstacleService_L_N_Qentity_R::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_CompanionAI_companion_ai_runtime$HandleObstacleService_L_N_Qentity_R");

	return Clss;
}


// task_CompanionAI_companion_ai_runtime$HandleObstacleService_L_N_Qentity_R CompanionAI.Default__task_CompanionAI_companion_ai_runtime$HandleObstacleService_L_N_Qentity_R
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_CompanionAI_companion_ai_runtime_HandleObstacleService_L_N_Qentity_R* UTask_CompanionAI_companion_ai_runtime_HandleObstacleService_L_N_Qentity_R::GetDefaultObj()
{
	static class UTask_CompanionAI_companion_ai_runtime_HandleObstacleService_L_N_Qentity_R* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_CompanionAI_companion_ai_runtime_HandleObstacleService_L_N_Qentity_R*>(UTask_CompanionAI_companion_ai_runtime_HandleObstacleService_L_N_Qentity_R::StaticClass()->DefaultObject);

	return Default;
}


// Function CompanionAI.task_CompanionAI_companion_ai_runtime$HandleObstacleService_L_N_Qentity_R.Update
// (Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_CompanionAI_companion_ai_runtime_HandleObstacleService_L_N_Qentity_R::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_CompanionAI_companion_ai_runtime$HandleObstacleService_L_N_Qentity_R", "Update");

	Params::UTask_CompanionAI_companion_ai_runtime_HandleObstacleService_L_N_Qentity_R_Update_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass CompanionAI.task_CompanionAI_companion_ai_runtime$HandleReviveCommand_L_Nping__info_R
// (None)

class UClass* UTask_CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_CompanionAI_companion_ai_runtime$HandleReviveCommand_L_Nping__info_R");

	return Clss;
}


// task_CompanionAI_companion_ai_runtime$HandleReviveCommand_L_Nping__info_R CompanionAI.Default__task_CompanionAI_companion_ai_runtime$HandleReviveCommand_L_Nping__info_R
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R* UTask_CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R::GetDefaultObj()
{
	static class UTask_CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R*>(UTask_CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R::StaticClass()->DefaultObject);

	return Default;
}


// Function CompanionAI.task_CompanionAI_companion_ai_runtime$HandleReviveCommand_L_Nping__info_R.Update
// (Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_CompanionAI_companion_ai_runtime$HandleReviveCommand_L_Nping__info_R", "Update");

	Params::UTask_CompanionAI_companion_ai_runtime_HandleReviveCommand_L_Nping__info_R_Update_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass CompanionAI.task_CompanionAI_companion_ai_runtime$LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R
// (None)

class UClass* UTask_CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_CompanionAI_companion_ai_runtime$LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R");

	return Clss;
}


// task_CompanionAI_companion_ai_runtime$LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R CompanionAI.Default__task_CompanionAI_companion_ai_runtime$LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R* UTask_CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R::GetDefaultObj()
{
	static class UTask_CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R*>(UTask_CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R::StaticClass()->DefaultObject);

	return Default;
}


// Function CompanionAI.task_CompanionAI_companion_ai_runtime$LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R.Update
// (Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_CompanionAI_companion_ai_runtime$LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R", "Update");

	Params::UTask_CompanionAI_companion_ai_runtime_LookAroundTask_L_Nvector3_M_Nfloat_M_Nfloat_R_Update_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass CompanionAI.task_CompanionAI_companion_ai_runtime$LookAtOrAttackTarget
// (None)

class UClass* UTask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_CompanionAI_companion_ai_runtime$LookAtOrAttackTarget");

	return Clss;
}


// task_CompanionAI_companion_ai_runtime$LookAtOrAttackTarget CompanionAI.Default__task_CompanionAI_companion_ai_runtime$LookAtOrAttackTarget
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget* UTask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget::GetDefaultObj()
{
	static class UTask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget*>(UTask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget::StaticClass()->DefaultObject);

	return Default;
}


// Function CompanionAI.task_CompanionAI_companion_ai_runtime$LookAtOrAttackTarget.Update
// (Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_CompanionAI_companion_ai_runtime$LookAtOrAttackTarget", "Update");

	Params::UTask_CompanionAI_companion_ai_runtime_LookAtOrAttackTarget_Update_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass CompanionAI.task_CompanionAI_companion_ai_runtime$LookAtThreatTask
// (None)

class UClass* UTask_CompanionAI_companion_ai_runtime_LookAtThreatTask::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_CompanionAI_companion_ai_runtime$LookAtThreatTask");

	return Clss;
}


// task_CompanionAI_companion_ai_runtime$LookAtThreatTask CompanionAI.Default__task_CompanionAI_companion_ai_runtime$LookAtThreatTask
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_CompanionAI_companion_ai_runtime_LookAtThreatTask* UTask_CompanionAI_companion_ai_runtime_LookAtThreatTask::GetDefaultObj()
{
	static class UTask_CompanionAI_companion_ai_runtime_LookAtThreatTask* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_CompanionAI_companion_ai_runtime_LookAtThreatTask*>(UTask_CompanionAI_companion_ai_runtime_LookAtThreatTask::StaticClass()->DefaultObject);

	return Default;
}


// Function CompanionAI.task_CompanionAI_companion_ai_runtime$LookAtThreatTask.Update
// (Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_CompanionAI_companion_ai_runtime_LookAtThreatTask::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_CompanionAI_companion_ai_runtime$LookAtThreatTask", "Update");

	Params::UTask_CompanionAI_companion_ai_runtime_LookAtThreatTask_Update_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass CompanionAI.task_CompanionAI_companion_ai_runtime$ReviveCommand_L_Nagent_R
// (None)

class UClass* UTask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_CompanionAI_companion_ai_runtime$ReviveCommand_L_Nagent_R");

	return Clss;
}


// task_CompanionAI_companion_ai_runtime$ReviveCommand_L_Nagent_R CompanionAI.Default__task_CompanionAI_companion_ai_runtime$ReviveCommand_L_Nagent_R
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R* UTask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R::GetDefaultObj()
{
	static class UTask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R*>(UTask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R::StaticClass()->DefaultObject);

	return Default;
}


// Function CompanionAI.task_CompanionAI_companion_ai_runtime$ReviveCommand_L_Nagent_R.Update
// (Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_CompanionAI_companion_ai_runtime$ReviveCommand_L_Nagent_R", "Update");

	Params::UTask_CompanionAI_companion_ai_runtime_ReviveCommand_L_Nagent_R_Update_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass CompanionAI.task_CompanionAI_companion_ai_runtime$SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R
// (None)

class UClass* UTask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_CompanionAI_companion_ai_runtime$SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R");

	return Clss;
}


// task_CompanionAI_companion_ai_runtime$SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R CompanionAI.Default__task_CompanionAI_companion_ai_runtime$SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R* UTask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R::GetDefaultObj()
{
	static class UTask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R*>(UTask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R::StaticClass()->DefaultObject);

	return Default;
}


// Function CompanionAI.task_CompanionAI_companion_ai_runtime$SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R.Update
// (Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_CompanionAI_companion_ai_runtime$SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R", "Update");

	Params::UTask_CompanionAI_companion_ai_runtime_SetLeashPosition_L_Nvector3_M_Nfloat_M_Nagent_R_Update_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass CompanionAI.task_CompanionAI_companion_ai_runtime$ShootTargetService_L_Nfloat_R
// (None)

class UClass* UTask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_CompanionAI_companion_ai_runtime$ShootTargetService_L_Nfloat_R");

	return Clss;
}


// task_CompanionAI_companion_ai_runtime$ShootTargetService_L_Nfloat_R CompanionAI.Default__task_CompanionAI_companion_ai_runtime$ShootTargetService_L_Nfloat_R
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R* UTask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R::GetDefaultObj()
{
	static class UTask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R*>(UTask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R::StaticClass()->DefaultObject);

	return Default;
}


// Function CompanionAI.task_CompanionAI_companion_ai_runtime$ShootTargetService_L_Nfloat_R.Update
// (Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_CompanionAI_companion_ai_runtime$ShootTargetService_L_Nfloat_R", "Update");

	Params::UTask_CompanionAI_companion_ai_runtime_ShootTargetService_L_Nfloat_R_Update_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass CompanionAI.task_CompanionAI_companion_ai_runtime$SprintService
// (None)

class UClass* UTask_CompanionAI_companion_ai_runtime_SprintService::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_CompanionAI_companion_ai_runtime$SprintService");

	return Clss;
}


// task_CompanionAI_companion_ai_runtime$SprintService CompanionAI.Default__task_CompanionAI_companion_ai_runtime$SprintService
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_CompanionAI_companion_ai_runtime_SprintService* UTask_CompanionAI_companion_ai_runtime_SprintService::GetDefaultObj()
{
	static class UTask_CompanionAI_companion_ai_runtime_SprintService* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_CompanionAI_companion_ai_runtime_SprintService*>(UTask_CompanionAI_companion_ai_runtime_SprintService::StaticClass()->DefaultObject);

	return Default;
}


// Function CompanionAI.task_CompanionAI_companion_ai_runtime$SprintService.Update
// (Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_CompanionAI_companion_ai_runtime_SprintService::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_CompanionAI_companion_ai_runtime$SprintService", "Update");

	Params::UTask_CompanionAI_companion_ai_runtime_SprintService_Update_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass CompanionAI.task_CompanionAI_companion_ai_runtime$TacticalSprintService
// (None)

class UClass* UTask_CompanionAI_companion_ai_runtime_TacticalSprintService::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_CompanionAI_companion_ai_runtime$TacticalSprintService");

	return Clss;
}


// task_CompanionAI_companion_ai_runtime$TacticalSprintService CompanionAI.Default__task_CompanionAI_companion_ai_runtime$TacticalSprintService
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_CompanionAI_companion_ai_runtime_TacticalSprintService* UTask_CompanionAI_companion_ai_runtime_TacticalSprintService::GetDefaultObj()
{
	static class UTask_CompanionAI_companion_ai_runtime_TacticalSprintService* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_CompanionAI_companion_ai_runtime_TacticalSprintService*>(UTask_CompanionAI_companion_ai_runtime_TacticalSprintService::StaticClass()->DefaultObject);

	return Default;
}


// Function CompanionAI.task_CompanionAI_companion_ai_runtime$TacticalSprintService.Update
// (Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_CompanionAI_companion_ai_runtime_TacticalSprintService::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_CompanionAI_companion_ai_runtime$TacticalSprintService", "Update");

	Params::UTask_CompanionAI_companion_ai_runtime_TacticalSprintService_Update_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass CompanionAI.task_CompanionAI_companion_ai_runtime$WaitForDamageService
// (None)

class UClass* UTask_CompanionAI_companion_ai_runtime_WaitForDamageService::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_CompanionAI_companion_ai_runtime$WaitForDamageService");

	return Clss;
}


// task_CompanionAI_companion_ai_runtime$WaitForDamageService CompanionAI.Default__task_CompanionAI_companion_ai_runtime$WaitForDamageService
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_CompanionAI_companion_ai_runtime_WaitForDamageService* UTask_CompanionAI_companion_ai_runtime_WaitForDamageService::GetDefaultObj()
{
	static class UTask_CompanionAI_companion_ai_runtime_WaitForDamageService* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_CompanionAI_companion_ai_runtime_WaitForDamageService*>(UTask_CompanionAI_companion_ai_runtime_WaitForDamageService::StaticClass()->DefaultObject);

	return Default;
}


// Function CompanionAI.task_CompanionAI_companion_ai_runtime$WaitForDamageService.Update
// (Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_CompanionAI_companion_ai_runtime_WaitForDamageService::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_CompanionAI_companion_ai_runtime$WaitForDamageService", "Update");

	Params::UTask_CompanionAI_companion_ai_runtime_WaitForDamageService_Update_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass CompanionAI.task_CompanionAI_companion_ai_runtime$WaitForTargetInVehicleService_L_Nfort__character_R
// (None)

class UClass* UTask_CompanionAI_companion_ai_runtime_WaitForTargetInVehicleService_L_Nfort__character_R::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_CompanionAI_companion_ai_runtime$WaitForTargetInVehicleService_L_Nfort__character_R");

	return Clss;
}


// task_CompanionAI_companion_ai_runtime$WaitForTargetInVehicleService_L_Nfort__character_R CompanionAI.Default__task_CompanionAI_companion_ai_runtime$WaitForTargetInVehicleService_L_Nfort__character_R
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_CompanionAI_companion_ai_runtime_WaitForTargetInVehicleService_L_Nfort__character_R* UTask_CompanionAI_companion_ai_runtime_WaitForTargetInVehicleService_L_Nfort__character_R::GetDefaultObj()
{
	static class UTask_CompanionAI_companion_ai_runtime_WaitForTargetInVehicleService_L_Nfort__character_R* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_CompanionAI_companion_ai_runtime_WaitForTargetInVehicleService_L_Nfort__character_R*>(UTask_CompanionAI_companion_ai_runtime_WaitForTargetInVehicleService_L_Nfort__character_R::StaticClass()->DefaultObject);

	return Default;
}


// Function CompanionAI.task_CompanionAI_companion_ai_runtime$WaitForTargetInVehicleService_L_Nfort__character_R.Update
// (Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_CompanionAI_companion_ai_runtime_WaitForTargetInVehicleService_L_Nfort__character_R::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_CompanionAI_companion_ai_runtime$WaitForTargetInVehicleService_L_Nfort__character_R", "Update");

	Params::UTask_CompanionAI_companion_ai_runtime_WaitForTargetInVehicleService_L_Nfort__character_R_Update_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass CompanionAI.task_CompanionAI_companion_ai_runtime$WaitForTargetMovementService_L_Nfort__character_M_Nfloat_R
// (None)

class UClass* UTask_CompanionAI_companion_ai_runtime_WaitForTargetMovementService_L_Nfort__character_M_Nfloat_R::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_CompanionAI_companion_ai_runtime$WaitForTargetMovementService_L_Nfort__character_M_Nfloat_R");

	return Clss;
}


// task_CompanionAI_companion_ai_runtime$WaitForTargetMovementService_L_Nfort__character_M_Nfloat_R CompanionAI.Default__task_CompanionAI_companion_ai_runtime$WaitForTargetMovementService_L_Nfort__character_M_Nfloat_R
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_CompanionAI_companion_ai_runtime_WaitForTargetMovementService_L_Nfort__character_M_Nfloat_R* UTask_CompanionAI_companion_ai_runtime_WaitForTargetMovementService_L_Nfort__character_M_Nfloat_R::GetDefaultObj()
{
	static class UTask_CompanionAI_companion_ai_runtime_WaitForTargetMovementService_L_Nfort__character_M_Nfloat_R* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_CompanionAI_companion_ai_runtime_WaitForTargetMovementService_L_Nfort__character_M_Nfloat_R*>(UTask_CompanionAI_companion_ai_runtime_WaitForTargetMovementService_L_Nfort__character_M_Nfloat_R::StaticClass()->DefaultObject);

	return Default;
}


// Function CompanionAI.task_CompanionAI_companion_ai_runtime$WaitForTargetMovementService_L_Nfort__character_M_Nfloat_R.Update
// (Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_CompanionAI_companion_ai_runtime_WaitForTargetMovementService_L_Nfort__character_M_Nfloat_R::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_CompanionAI_companion_ai_runtime$WaitForTargetMovementService_L_Nfort__character_M_Nfloat_R", "Update");

	Params::UTask_CompanionAI_companion_ai_runtime_WaitForTargetMovementService_L_Nfort__character_M_Nfloat_R_Update_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass CompanionAI.task_CompanionAI_companion_creature$DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R
// (None)

class UClass* UTask_CompanionAI_companion_creature_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_CompanionAI_companion_creature$DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R");

	return Clss;
}


// task_CompanionAI_companion_creature$DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R CompanionAI.Default__task_CompanionAI_companion_creature$DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_CompanionAI_companion_creature_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R* UTask_CompanionAI_companion_creature_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R::GetDefaultObj()
{
	static class UTask_CompanionAI_companion_creature_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_CompanionAI_companion_creature_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R*>(UTask_CompanionAI_companion_creature_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R::StaticClass()->DefaultObject);

	return Default;
}


// Function CompanionAI.task_CompanionAI_companion_creature$DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R.Update
// (Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_CompanionAI_companion_creature_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_CompanionAI_companion_creature$DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R", "Update");

	Params::UTask_CompanionAI_companion_creature_DrawSphere_L_Nvector3_M_Nfloat_M_Ncolor_R_Update_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass CompanionAI.task_CompanionAI_companion_creature$OnBegin
// (None)

class UClass* UTask_CompanionAI_companion_creature_OnBegin::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_CompanionAI_companion_creature$OnBegin");

	return Clss;
}


// task_CompanionAI_companion_creature$OnBegin CompanionAI.Default__task_CompanionAI_companion_creature$OnBegin
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_CompanionAI_companion_creature_OnBegin* UTask_CompanionAI_companion_creature_OnBegin::GetDefaultObj()
{
	static class UTask_CompanionAI_companion_creature_OnBegin* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_CompanionAI_companion_creature_OnBegin*>(UTask_CompanionAI_companion_creature_OnBegin::StaticClass()->DefaultObject);

	return Default;
}


// Function CompanionAI.task_CompanionAI_companion_creature$OnBegin.Update
// (Public, HasOutParams, HasDefaults)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint64                             _InstancingGraph_29                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint64                             _InstancingGraph_93                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_CompanionAI_companion_creature_OnBegin::Update(uint64 _InstancingGraph_29, uint64 _InstancingGraph_93)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_CompanionAI_companion_creature$OnBegin", "Update");

	Params::UTask_CompanionAI_companion_creature_OnBegin_Update_Params Parms{};

	Parms._InstancingGraph_29 = _InstancingGraph_29;
	Parms._InstancingGraph_93 = _InstancingGraph_93;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass CompanionAI.task_CompanionAI_companion_creature_runtime$ActivateAbilityWhenCloseEnough_L_Nagent_M_Ngameplay__ability__asset_M_Nfloat_M_Nfloat_R
// (None)

class UClass* UTask_CompanionAI_companion_creature_runtime_ActivateAbilityWhenCloseEnough_L_Nagent_M_Ngameplay__ability__asset_M_Nfloat_M_Nfloat_R::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_CompanionAI_companion_creature_runtime$ActivateAbilityWhenCloseEnough_L_Nagent_M_Ngameplay__ability__asset_M_Nfloat_M_Nfloat_R");

	return Clss;
}


// task_CompanionAI_companion_creature_runtime$ActivateAbilityWhenCloseEnough_L_Nagent_M_Ngameplay__ability__asset_M_Nfloat_M_Nfloat_R CompanionAI.Default__task_CompanionAI_companion_creature_runtime$ActivateAbilityWhenCloseEnough_L_Nagent_M_Ngameplay__ability__asset_M_Nfloat_M_Nfloat_R
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_CompanionAI_companion_creature_runtime_ActivateAbilityWhenCloseEnough_L_Nagent_M_Ngameplay__ability__asset_M_Nfloat_M_Nfloat_R* UTask_CompanionAI_companion_creature_runtime_ActivateAbilityWhenCloseEnough_L_Nagent_M_Ngameplay__ability__asset_M_Nfloat_M_Nfloat_R::GetDefaultObj()
{
	static class UTask_CompanionAI_companion_creature_runtime_ActivateAbilityWhenCloseEnough_L_Nagent_M_Ngameplay__ability__asset_M_Nfloat_M_Nfloat_R* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_CompanionAI_companion_creature_runtime_ActivateAbilityWhenCloseEnough_L_Nagent_M_Ngameplay__ability__asset_M_Nfloat_M_Nfloat_R*>(UTask_CompanionAI_companion_creature_runtime_ActivateAbilityWhenCloseEnough_L_Nagent_M_Ngameplay__ability__asset_M_Nfloat_M_Nfloat_R::StaticClass()->DefaultObject);

	return Default;
}


// Function CompanionAI.task_CompanionAI_companion_creature_runtime$ActivateAbilityWhenCloseEnough_L_Nagent_M_Ngameplay__ability__asset_M_Nfloat_M_Nfloat_R.Update
// (Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_CompanionAI_companion_creature_runtime_ActivateAbilityWhenCloseEnough_L_Nagent_M_Ngameplay__ability__asset_M_Nfloat_M_Nfloat_R::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_CompanionAI_companion_creature_runtime$ActivateAbilityWhenCloseEnough_L_Nagent_M_Ngameplay__ability__asset_M_Nfloat_M_Nfloat_R", "Update");

	Params::UTask_CompanionAI_companion_creature_runtime_ActivateAbilityWhenCloseEnough_L_Nagent_M_Ngameplay__ability__asset_M_Nfloat_M_Nfloat_R_Update_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass CompanionAI.task_CompanionAI_companion_creature_runtime$DetectMovement_L_Nvector3_M_Nagent_M_Nfloat_R
// (None)

class UClass* UTask_CompanionAI_companion_creature_runtime_DetectMovement_L_Nvector3_M_Nagent_M_Nfloat_R::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_CompanionAI_companion_creature_runtime$DetectMovement_L_Nvector3_M_Nagent_M_Nfloat_R");

	return Clss;
}


// task_CompanionAI_companion_creature_runtime$DetectMovement_L_Nvector3_M_Nagent_M_Nfloat_R CompanionAI.Default__task_CompanionAI_companion_creature_runtime$DetectMovement_L_Nvector3_M_Nagent_M_Nfloat_R
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_CompanionAI_companion_creature_runtime_DetectMovement_L_Nvector3_M_Nagent_M_Nfloat_R* UTask_CompanionAI_companion_creature_runtime_DetectMovement_L_Nvector3_M_Nagent_M_Nfloat_R::GetDefaultObj()
{
	static class UTask_CompanionAI_companion_creature_runtime_DetectMovement_L_Nvector3_M_Nagent_M_Nfloat_R* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_CompanionAI_companion_creature_runtime_DetectMovement_L_Nvector3_M_Nagent_M_Nfloat_R*>(UTask_CompanionAI_companion_creature_runtime_DetectMovement_L_Nvector3_M_Nagent_M_Nfloat_R::StaticClass()->DefaultObject);

	return Default;
}


// Function CompanionAI.task_CompanionAI_companion_creature_runtime$DetectMovement_L_Nvector3_M_Nagent_M_Nfloat_R.Update
// (Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_CompanionAI_companion_creature_runtime_DetectMovement_L_Nvector3_M_Nagent_M_Nfloat_R::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_CompanionAI_companion_creature_runtime$DetectMovement_L_Nvector3_M_Nagent_M_Nfloat_R", "Update");

	Params::UTask_CompanionAI_companion_creature_runtime_DetectMovement_L_Nvector3_M_Nagent_M_Nfloat_R_Update_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass CompanionAI.task_CompanionAI_companion_creature_runtime$DetectNewTarget
// (None)

class UClass* UTask_CompanionAI_companion_creature_runtime_DetectNewTarget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_CompanionAI_companion_creature_runtime$DetectNewTarget");

	return Clss;
}


// task_CompanionAI_companion_creature_runtime$DetectNewTarget CompanionAI.Default__task_CompanionAI_companion_creature_runtime$DetectNewTarget
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_CompanionAI_companion_creature_runtime_DetectNewTarget* UTask_CompanionAI_companion_creature_runtime_DetectNewTarget::GetDefaultObj()
{
	static class UTask_CompanionAI_companion_creature_runtime_DetectNewTarget* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_CompanionAI_companion_creature_runtime_DetectNewTarget*>(UTask_CompanionAI_companion_creature_runtime_DetectNewTarget::StaticClass()->DefaultObject);

	return Default;
}


// Function CompanionAI.task_CompanionAI_companion_creature_runtime$DetectNewTarget.Update
// (Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_CompanionAI_companion_creature_runtime_DetectNewTarget::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_CompanionAI_companion_creature_runtime$DetectNewTarget", "Update");

	Params::UTask_CompanionAI_companion_creature_runtime_DetectNewTarget_Update_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass CompanionAI.task_CompanionAI_companion_creature_runtime$EngageTarget_L_Nagent_M_Ngameplay__ability__asset_R
// (None)

class UClass* UTask_CompanionAI_companion_creature_runtime_EngageTarget_L_Nagent_M_Ngameplay__ability__asset_R::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_CompanionAI_companion_creature_runtime$EngageTarget_L_Nagent_M_Ngameplay__ability__asset_R");

	return Clss;
}


// task_CompanionAI_companion_creature_runtime$EngageTarget_L_Nagent_M_Ngameplay__ability__asset_R CompanionAI.Default__task_CompanionAI_companion_creature_runtime$EngageTarget_L_Nagent_M_Ngameplay__ability__asset_R
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_CompanionAI_companion_creature_runtime_EngageTarget_L_Nagent_M_Ngameplay__ability__asset_R* UTask_CompanionAI_companion_creature_runtime_EngageTarget_L_Nagent_M_Ngameplay__ability__asset_R::GetDefaultObj()
{
	static class UTask_CompanionAI_companion_creature_runtime_EngageTarget_L_Nagent_M_Ngameplay__ability__asset_R* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_CompanionAI_companion_creature_runtime_EngageTarget_L_Nagent_M_Ngameplay__ability__asset_R*>(UTask_CompanionAI_companion_creature_runtime_EngageTarget_L_Nagent_M_Ngameplay__ability__asset_R::StaticClass()->DefaultObject);

	return Default;
}


// Function CompanionAI.task_CompanionAI_companion_creature_runtime$EngageTarget_L_Nagent_M_Ngameplay__ability__asset_R.Update
// (Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_CompanionAI_companion_creature_runtime_EngageTarget_L_Nagent_M_Ngameplay__ability__asset_R::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_CompanionAI_companion_creature_runtime$EngageTarget_L_Nagent_M_Ngameplay__ability__asset_R", "Update");

	Params::UTask_CompanionAI_companion_creature_runtime_EngageTarget_L_Nagent_M_Ngameplay__ability__asset_R_Update_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass CompanionAI.task_CompanionAI_companion_creature_runtime$FaceLKP_L_Nagent_M_Nfloat_R
// (None)

class UClass* UTask_CompanionAI_companion_creature_runtime_FaceLKP_L_Nagent_M_Nfloat_R::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_CompanionAI_companion_creature_runtime$FaceLKP_L_Nagent_M_Nfloat_R");

	return Clss;
}


// task_CompanionAI_companion_creature_runtime$FaceLKP_L_Nagent_M_Nfloat_R CompanionAI.Default__task_CompanionAI_companion_creature_runtime$FaceLKP_L_Nagent_M_Nfloat_R
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_CompanionAI_companion_creature_runtime_FaceLKP_L_Nagent_M_Nfloat_R* UTask_CompanionAI_companion_creature_runtime_FaceLKP_L_Nagent_M_Nfloat_R::GetDefaultObj()
{
	static class UTask_CompanionAI_companion_creature_runtime_FaceLKP_L_Nagent_M_Nfloat_R* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_CompanionAI_companion_creature_runtime_FaceLKP_L_Nagent_M_Nfloat_R*>(UTask_CompanionAI_companion_creature_runtime_FaceLKP_L_Nagent_M_Nfloat_R::StaticClass()->DefaultObject);

	return Default;
}


// Function CompanionAI.task_CompanionAI_companion_creature_runtime$FaceLKP_L_Nagent_M_Nfloat_R.Update
// (Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_CompanionAI_companion_creature_runtime_FaceLKP_L_Nagent_M_Nfloat_R::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_CompanionAI_companion_creature_runtime$FaceLKP_L_Nagent_M_Nfloat_R", "Update");

	Params::UTask_CompanionAI_companion_creature_runtime_FaceLKP_L_Nagent_M_Nfloat_R_Update_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass CompanionAI.task_CompanionAI_companion_creature_runtime$GameLoop
// (None)

class UClass* UTask_CompanionAI_companion_creature_runtime_GameLoop::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_CompanionAI_companion_creature_runtime$GameLoop");

	return Clss;
}


// task_CompanionAI_companion_creature_runtime$GameLoop CompanionAI.Default__task_CompanionAI_companion_creature_runtime$GameLoop
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_CompanionAI_companion_creature_runtime_GameLoop* UTask_CompanionAI_companion_creature_runtime_GameLoop::GetDefaultObj()
{
	static class UTask_CompanionAI_companion_creature_runtime_GameLoop* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_CompanionAI_companion_creature_runtime_GameLoop*>(UTask_CompanionAI_companion_creature_runtime_GameLoop::StaticClass()->DefaultObject);

	return Default;
}


// Function CompanionAI.task_CompanionAI_companion_creature_runtime$GameLoop.Update
// (Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_CompanionAI_companion_creature_runtime_GameLoop::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_CompanionAI_companion_creature_runtime$GameLoop", "Update");

	Params::UTask_CompanionAI_companion_creature_runtime_GameLoop_Update_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass CompanionAI.task_CompanionAI_companion_creature_runtime$Howl
// (None)

class UClass* UTask_CompanionAI_companion_creature_runtime_Howl::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_CompanionAI_companion_creature_runtime$Howl");

	return Clss;
}


// task_CompanionAI_companion_creature_runtime$Howl CompanionAI.Default__task_CompanionAI_companion_creature_runtime$Howl
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_CompanionAI_companion_creature_runtime_Howl* UTask_CompanionAI_companion_creature_runtime_Howl::GetDefaultObj()
{
	static class UTask_CompanionAI_companion_creature_runtime_Howl* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_CompanionAI_companion_creature_runtime_Howl*>(UTask_CompanionAI_companion_creature_runtime_Howl::StaticClass()->DefaultObject);

	return Default;
}


// Function CompanionAI.task_CompanionAI_companion_creature_runtime$Howl.Update
// (Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_CompanionAI_companion_creature_runtime_Howl::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_CompanionAI_companion_creature_runtime$Howl", "Update");

	Params::UTask_CompanionAI_companion_creature_runtime_Howl_Update_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass CompanionAI.task_CompanionAI_companion_creature_runtime$PatrolAround
// (None)

class UClass* UTask_CompanionAI_companion_creature_runtime_PatrolAround::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_CompanionAI_companion_creature_runtime$PatrolAround");

	return Clss;
}


// task_CompanionAI_companion_creature_runtime$PatrolAround CompanionAI.Default__task_CompanionAI_companion_creature_runtime$PatrolAround
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_CompanionAI_companion_creature_runtime_PatrolAround* UTask_CompanionAI_companion_creature_runtime_PatrolAround::GetDefaultObj()
{
	static class UTask_CompanionAI_companion_creature_runtime_PatrolAround* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_CompanionAI_companion_creature_runtime_PatrolAround*>(UTask_CompanionAI_companion_creature_runtime_PatrolAround::StaticClass()->DefaultObject);

	return Default;
}


// Function CompanionAI.task_CompanionAI_companion_creature_runtime$PatrolAround.Update
// (Public, HasOutParams, HasDefaults)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint64                             _InstancingGraph_6                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint64                             _InstancingGraph_23                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint64                             _InstancingGraph_39                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint64                             _InstancingGraph_55                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint64                             _InstancingGraph_75                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint64                             _InstancingGraph_92                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint64                             _InstancingGraph_108                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint64                             _InstancingGraph_124                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_CompanionAI_companion_creature_runtime_PatrolAround::Update(uint64 _InstancingGraph_6, uint64 _InstancingGraph_23, uint64 _InstancingGraph_39, uint64 _InstancingGraph_55, uint64 _InstancingGraph_75, uint64 _InstancingGraph_92, uint64 _InstancingGraph_108, uint64 _InstancingGraph_124)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_CompanionAI_companion_creature_runtime$PatrolAround", "Update");

	Params::UTask_CompanionAI_companion_creature_runtime_PatrolAround_Update_Params Parms{};

	Parms._InstancingGraph_6 = _InstancingGraph_6;
	Parms._InstancingGraph_23 = _InstancingGraph_23;
	Parms._InstancingGraph_39 = _InstancingGraph_39;
	Parms._InstancingGraph_55 = _InstancingGraph_55;
	Parms._InstancingGraph_75 = _InstancingGraph_75;
	Parms._InstancingGraph_92 = _InstancingGraph_92;
	Parms._InstancingGraph_108 = _InstancingGraph_108;
	Parms._InstancingGraph_124 = _InstancingGraph_124;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass CompanionAI.task_CompanionAI_companion_creature_runtime$SeekLKP_L_Nagent_M_Nfloat_R
// (None)

class UClass* UTask_CompanionAI_companion_creature_runtime_SeekLKP_L_Nagent_M_Nfloat_R::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_CompanionAI_companion_creature_runtime$SeekLKP_L_Nagent_M_Nfloat_R");

	return Clss;
}


// task_CompanionAI_companion_creature_runtime$SeekLKP_L_Nagent_M_Nfloat_R CompanionAI.Default__task_CompanionAI_companion_creature_runtime$SeekLKP_L_Nagent_M_Nfloat_R
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_CompanionAI_companion_creature_runtime_SeekLKP_L_Nagent_M_Nfloat_R* UTask_CompanionAI_companion_creature_runtime_SeekLKP_L_Nagent_M_Nfloat_R::GetDefaultObj()
{
	static class UTask_CompanionAI_companion_creature_runtime_SeekLKP_L_Nagent_M_Nfloat_R* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_CompanionAI_companion_creature_runtime_SeekLKP_L_Nagent_M_Nfloat_R*>(UTask_CompanionAI_companion_creature_runtime_SeekLKP_L_Nagent_M_Nfloat_R::StaticClass()->DefaultObject);

	return Default;
}


// Function CompanionAI.task_CompanionAI_companion_creature_runtime$SeekLKP_L_Nagent_M_Nfloat_R.Update
// (Public, HasOutParams, HasDefaults)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint64                             _InstancingGraph_24                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint64                             _InstancingGraph_61                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_CompanionAI_companion_creature_runtime_SeekLKP_L_Nagent_M_Nfloat_R::Update(uint64 _InstancingGraph_24, uint64 _InstancingGraph_61)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_CompanionAI_companion_creature_runtime$SeekLKP_L_Nagent_M_Nfloat_R", "Update");

	Params::UTask_CompanionAI_companion_creature_runtime_SeekLKP_L_Nagent_M_Nfloat_R_Update_Params Parms{};

	Parms._InstancingGraph_24 = _InstancingGraph_24;
	Parms._InstancingGraph_61 = _InstancingGraph_61;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass CompanionAI.task_CompanionAI_default_ai_behavior$OnBegin
// (None)

class UClass* UTask_CompanionAI_default_ai_behavior_OnBegin::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_CompanionAI_default_ai_behavior$OnBegin");

	return Clss;
}


// task_CompanionAI_default_ai_behavior$OnBegin CompanionAI.Default__task_CompanionAI_default_ai_behavior$OnBegin
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_CompanionAI_default_ai_behavior_OnBegin* UTask_CompanionAI_default_ai_behavior_OnBegin::GetDefaultObj()
{
	static class UTask_CompanionAI_default_ai_behavior_OnBegin* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_CompanionAI_default_ai_behavior_OnBegin*>(UTask_CompanionAI_default_ai_behavior_OnBegin::StaticClass()->DefaultObject);

	return Default;
}


// Function CompanionAI.task_CompanionAI_default_ai_behavior$OnBegin.Update
// (Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_CompanionAI_default_ai_behavior_OnBegin::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_CompanionAI_default_ai_behavior$OnBegin", "Update");

	Params::UTask_CompanionAI_default_ai_behavior_OnBegin_Update_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass CompanionAI.task_CompanionAI_fort_br_character_actions_interface$RunDefaultBehavior
// (None)

class UClass* UTask_CompanionAI_fort_br_character_actions_interface_RunDefaultBehavior::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_CompanionAI_fort_br_character_actions_interface$RunDefaultBehavior");

	return Clss;
}


// task_CompanionAI_fort_br_character_actions_interface$RunDefaultBehavior CompanionAI.Default__task_CompanionAI_fort_br_character_actions_interface$RunDefaultBehavior
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_CompanionAI_fort_br_character_actions_interface_RunDefaultBehavior* UTask_CompanionAI_fort_br_character_actions_interface_RunDefaultBehavior::GetDefaultObj()
{
	static class UTask_CompanionAI_fort_br_character_actions_interface_RunDefaultBehavior* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_CompanionAI_fort_br_character_actions_interface_RunDefaultBehavior*>(UTask_CompanionAI_fort_br_character_actions_interface_RunDefaultBehavior::StaticClass()->DefaultObject);

	return Default;
}


// Function CompanionAI.task_CompanionAI_fort_br_character_actions_interface$RunDefaultBehavior.Update
// (Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_CompanionAI_fort_br_character_actions_interface_RunDefaultBehavior::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_CompanionAI_fort_br_character_actions_interface$RunDefaultBehavior", "Update");

	Params::UTask_CompanionAI_fort_br_character_actions_interface_RunDefaultBehavior_Update_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass CompanionAI.task_CompanionAI_fort_br_creature_actions_interface$RunDefaultBehavior
// (None)

class UClass* UTask_CompanionAI_fort_br_creature_actions_interface_RunDefaultBehavior::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_CompanionAI_fort_br_creature_actions_interface$RunDefaultBehavior");

	return Clss;
}


// task_CompanionAI_fort_br_creature_actions_interface$RunDefaultBehavior CompanionAI.Default__task_CompanionAI_fort_br_creature_actions_interface$RunDefaultBehavior
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_CompanionAI_fort_br_creature_actions_interface_RunDefaultBehavior* UTask_CompanionAI_fort_br_creature_actions_interface_RunDefaultBehavior::GetDefaultObj()
{
	static class UTask_CompanionAI_fort_br_creature_actions_interface_RunDefaultBehavior* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_CompanionAI_fort_br_creature_actions_interface_RunDefaultBehavior*>(UTask_CompanionAI_fort_br_creature_actions_interface_RunDefaultBehavior::StaticClass()->DefaultObject);

	return Default;
}


// Function CompanionAI.task_CompanionAI_fort_br_creature_actions_interface$RunDefaultBehavior.Update
// (Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_CompanionAI_fort_br_creature_actions_interface_RunDefaultBehavior::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_CompanionAI_fort_br_creature_actions_interface$RunDefaultBehavior", "Update");

	Params::UTask_CompanionAI_fort_br_creature_actions_interface_RunDefaultBehavior_Update_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass CompanionAI.task_CompanionAI_fort_creature_component$RunDefaultBehavior
// (None)

class UClass* UTask_CompanionAI_fort_creature_component_RunDefaultBehavior::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_CompanionAI_fort_creature_component$RunDefaultBehavior");

	return Clss;
}


// task_CompanionAI_fort_creature_component$RunDefaultBehavior CompanionAI.Default__task_CompanionAI_fort_creature_component$RunDefaultBehavior
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_CompanionAI_fort_creature_component_RunDefaultBehavior* UTask_CompanionAI_fort_creature_component_RunDefaultBehavior::GetDefaultObj()
{
	static class UTask_CompanionAI_fort_creature_component_RunDefaultBehavior* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_CompanionAI_fort_creature_component_RunDefaultBehavior*>(UTask_CompanionAI_fort_creature_component_RunDefaultBehavior::StaticClass()->DefaultObject);

	return Default;
}


// Function CompanionAI.task_CompanionAI_fort_creature_component$RunDefaultBehavior.Update
// (Native, Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_CompanionAI_fort_creature_component_RunDefaultBehavior::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_CompanionAI_fort_creature_component$RunDefaultBehavior", "Update");

	Params::UTask_CompanionAI_fort_creature_component_RunDefaultBehavior_Update_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// VerseClass CompanionAI.task_CompanionAI_fort_npc_component$RunDefaultBehavior
// (None)

class UClass* UTask_CompanionAI_fort_npc_component_RunDefaultBehavior::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_CompanionAI_fort_npc_component$RunDefaultBehavior");

	return Clss;
}


// task_CompanionAI_fort_npc_component$RunDefaultBehavior CompanionAI.Default__task_CompanionAI_fort_npc_component$RunDefaultBehavior
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_CompanionAI_fort_npc_component_RunDefaultBehavior* UTask_CompanionAI_fort_npc_component_RunDefaultBehavior::GetDefaultObj()
{
	static class UTask_CompanionAI_fort_npc_component_RunDefaultBehavior* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_CompanionAI_fort_npc_component_RunDefaultBehavior*>(UTask_CompanionAI_fort_npc_component_RunDefaultBehavior::StaticClass()->DefaultObject);

	return Default;
}


// Function CompanionAI.task_CompanionAI_fort_npc_component$RunDefaultBehavior.Update
// (Native, Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_CompanionAI_fort_npc_component_RunDefaultBehavior::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_CompanionAI_fort_npc_component$RunDefaultBehavior", "Update");

	Params::UTask_CompanionAI_fort_npc_component_RunDefaultBehavior_Update_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// VerseClass CompanionAI.task_CompanionAI_fort_ping_interface$OnNPCCommand
// (None)

class UClass* UTask_CompanionAI_fort_ping_interface_OnNPCCommand::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_CompanionAI_fort_ping_interface$OnNPCCommand");

	return Clss;
}


// task_CompanionAI_fort_ping_interface$OnNPCCommand CompanionAI.Default__task_CompanionAI_fort_ping_interface$OnNPCCommand
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_CompanionAI_fort_ping_interface_OnNPCCommand* UTask_CompanionAI_fort_ping_interface_OnNPCCommand::GetDefaultObj()
{
	static class UTask_CompanionAI_fort_ping_interface_OnNPCCommand* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_CompanionAI_fort_ping_interface_OnNPCCommand*>(UTask_CompanionAI_fort_ping_interface_OnNPCCommand::StaticClass()->DefaultObject);

	return Default;
}


// Function CompanionAI.task_CompanionAI_fort_ping_interface$OnNPCCommand.Update
// (Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_CompanionAI_fort_ping_interface_OnNPCCommand::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_CompanionAI_fort_ping_interface$OnNPCCommand", "Update");

	Params::UTask_CompanionAI_fort_ping_interface_OnNPCCommand_Update_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass CompanionAI.task_CompanionAI_ping_component$OnNPCCommand
// (None)

class UClass* UTask_CompanionAI_ping_component_OnNPCCommand::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_CompanionAI_ping_component$OnNPCCommand");

	return Clss;
}


// task_CompanionAI_ping_component$OnNPCCommand CompanionAI.Default__task_CompanionAI_ping_component$OnNPCCommand
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_CompanionAI_ping_component_OnNPCCommand* UTask_CompanionAI_ping_component_OnNPCCommand::GetDefaultObj()
{
	static class UTask_CompanionAI_ping_component_OnNPCCommand* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_CompanionAI_ping_component_OnNPCCommand*>(UTask_CompanionAI_ping_component_OnNPCCommand::StaticClass()->DefaultObject);

	return Default;
}


// Function CompanionAI.task_CompanionAI_ping_component$OnNPCCommand.Update
// (Native, Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_CompanionAI_ping_component_OnNPCCommand::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_CompanionAI_ping_component$OnNPCCommand", "Update");

	Params::UTask_CompanionAI_ping_component_OnNPCCommand_Update_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


