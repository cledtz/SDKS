#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// VerseClass VerseExperimental.$SolarisSignatureFunctionOuter
// (None)

class UClass* U_SolarisSignatureFunctionOuter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("$SolarisSignatureFunctionOuter");

	return Clss;
}


// $SolarisSignatureFunctionOuter VerseExperimental.Default__$SolarisSignatureFunctionOuter
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class U_SolarisSignatureFunctionOuter* U_SolarisSignatureFunctionOuter::GetDefaultObj()
{
	static class U_SolarisSignatureFunctionOuter* Default = nullptr;

	if (!Default)
		Default = static_cast<U_SolarisSignatureFunctionOuter*>(U_SolarisSignatureFunctionOuter::StaticClass()->DefaultObject);

	return Default;
}


// VerseClass VerseExperimental.VerseExperimental
// (None)

class UClass* UVerseExperimental::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseExperimental");

	return Clss;
}


// VerseExperimental VerseExperimental.Default__VerseExperimental
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVerseExperimental* UVerseExperimental::GetDefaultObj()
{
	static class UVerseExperimental* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseExperimental*>(UVerseExperimental::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseExperimental.VerseExperimental._L_2fVerse_2eorg_2fVerseExperimental_N_Roperator_U_2f_U_L_Ntime__span_M_Nfloat_R
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_Ltime__span_Mfloat_R __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FVerseExperimental_time_spanRetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor)
// FVerseFunctionProperty_            _Callee_0                                                        (HasGetValueTypeHash)
// struct FTuple_Ltime__span_Mfloat_R _ExprResult_1                                                    (HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_2                                                        (HasGetValueTypeHash)
// struct FTuple_Ltime__span_Mfloat_R _ExprResult_3                                                    (HasGetValueTypeHash)

struct FVerseExperimental_time_span UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_Roperator_U_2f_U_L_Ntime__span_M_Nfloat_R(const struct FTuple_Ltime__span_Mfloat_R& __verse_0xB2CDDD72_Argument, FVerseFunctionProperty_ _Callee_0, const struct FTuple_Ltime__span_Mfloat_R& _ExprResult_1, FVerseFunctionProperty_ _Callee_2, const struct FTuple_Ltime__span_Mfloat_R& _ExprResult_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_Roperator_U_2f_U_L_Ntime__span_M_Nfloat_R");

	Params::UVerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_Roperator_U_2f_U_L_Ntime__span_M_Nfloat_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._Callee_0 = _Callee_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._Callee_2 = _Callee_2;
	Parms._ExprResult_3 = _ExprResult_3;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseExperimental.VerseExperimental._L_2fVerse_2eorg_2fVerseExperimental_N_Roperator_U_2d_U_L_Ndate__time_M_Ndate__time_R
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_Ldate__time_Mdate__time_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FVerseExperimental_time_spanRetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor)
// FVerseFunctionProperty_            _Callee_0                                                        (HasGetValueTypeHash)
// struct FTuple_Ldate__time_Mdate__time_R_ExprResult_1                                                    (HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_2                                                        (HasGetValueTypeHash)
// struct FTuple_Ldate__time_Mdate__time_R_ExprResult_3                                                    (HasGetValueTypeHash)

struct FVerseExperimental_time_span UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_Roperator_U_2d_U_L_Ndate__time_M_Ndate__time_R(const struct FTuple_Ldate__time_Mdate__time_R& __verse_0xB2CDDD72_Argument, FVerseFunctionProperty_ _Callee_0, const struct FTuple_Ldate__time_Mdate__time_R& _ExprResult_1, FVerseFunctionProperty_ _Callee_2, const struct FTuple_Ldate__time_Mdate__time_R& _ExprResult_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_Roperator_U_2d_U_L_Ndate__time_M_Ndate__time_R");

	Params::UVerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_Roperator_U_2d_U_L_Ndate__time_M_Ndate__time_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._Callee_0 = _Callee_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._Callee_2 = _Callee_2;
	Parms._ExprResult_3 = _ExprResult_3;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseExperimental.VerseExperimental._L_2fVerse_2eorg_2fVerseExperimental_N_Roperator_U_2d_U_L_Ndate__time_M_Ntime__span_R
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_Ldate__time_Mtime__span_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FVerseExperimental_date_timeRetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// FVerseFunctionProperty_            _Callee_0                                                        (HasGetValueTypeHash)
// struct FTuple_Ldate__time_Mtime__span_R_ExprResult_1                                                    (HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_2                                                        (HasGetValueTypeHash)
// struct FTuple_Ldate__time_Mtime__span_R_ExprResult_3                                                    (HasGetValueTypeHash)

struct FVerseExperimental_date_time UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_Roperator_U_2d_U_L_Ndate__time_M_Ntime__span_R(const struct FTuple_Ldate__time_Mtime__span_R& __verse_0xB2CDDD72_Argument, FVerseFunctionProperty_ _Callee_0, const struct FTuple_Ldate__time_Mtime__span_R& _ExprResult_1, FVerseFunctionProperty_ _Callee_2, const struct FTuple_Ldate__time_Mtime__span_R& _ExprResult_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_Roperator_U_2d_U_L_Ndate__time_M_Ntime__span_R");

	Params::UVerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_Roperator_U_2d_U_L_Ndate__time_M_Ntime__span_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._Callee_0 = _Callee_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._Callee_2 = _Callee_2;
	Parms._ExprResult_3 = _ExprResult_3;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseExperimental.VerseExperimental._L_2fVerse_2eorg_2fVerseExperimental_N_Roperator_U_2d_U_L_Ntime__span_R
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVerseExperimental_time_span__verse_0xB2CDDD72_Argument                                      (Parm, NoDestructor)
// struct FVerseExperimental_time_spanRetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_0                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_1                                                    (HasGetValueTypeHash)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_2                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_3                                                    (HasGetValueTypeHash)

struct FVerseExperimental_time_span UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_Roperator_U_2d_U_L_Ntime__span_R(const struct FVerseExperimental_time_span& __verse_0xB2CDDD72_Argument, TMap<FVerseStringProperty_, uint8> _ExprResultStack_0, FVerseStringProperty_ _ExprResult_1, TMap<FVerseStringProperty_, uint8> _ExprResultStack_2, FVerseStringProperty_ _ExprResult_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_Roperator_U_2d_U_L_Ntime__span_R");

	Params::UVerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_Roperator_U_2d_U_L_Ntime__span_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._ExprResultStack_0 = _ExprResultStack_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._ExprResultStack_2 = _ExprResultStack_2;
	Parms._ExprResult_3 = _ExprResult_3;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseExperimental.VerseExperimental._L_2fVerse_2eorg_2fVerseExperimental_N_Roperator_U_2d_U_L_Ntime__span_M_Ntime__span_R
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_Ltime__span_Mtime__span_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FVerseExperimental_time_spanRetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor)
// FVerseFunctionProperty_            _Callee_0                                                        (HasGetValueTypeHash)
// struct FTuple_Ltime__span_Mtime__span_R_ExprResult_1                                                    (HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_2                                                        (HasGetValueTypeHash)
// struct FTuple_Ltime__span_Mtime__span_R_ExprResult_3                                                    (HasGetValueTypeHash)

struct FVerseExperimental_time_span UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_Roperator_U_2d_U_L_Ntime__span_M_Ntime__span_R(const struct FTuple_Ltime__span_Mtime__span_R& __verse_0xB2CDDD72_Argument, FVerseFunctionProperty_ _Callee_0, const struct FTuple_Ltime__span_Mtime__span_R& _ExprResult_1, FVerseFunctionProperty_ _Callee_2, const struct FTuple_Ltime__span_Mtime__span_R& _ExprResult_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_Roperator_U_2d_U_L_Ntime__span_M_Ntime__span_R");

	Params::UVerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_Roperator_U_2d_U_L_Ntime__span_M_Ntime__span_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._Callee_0 = _Callee_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._Callee_2 = _Callee_2;
	Parms._ExprResult_3 = _ExprResult_3;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseExperimental.VerseExperimental._L_2fVerse_2eorg_2fVerseExperimental_N_Roperator_U_2b_U_L_Ndate__time_M_Ntime__span_R
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_Ldate__time_Mtime__span_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FVerseExperimental_date_timeRetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// FVerseFunctionProperty_            _Callee_0                                                        (HasGetValueTypeHash)
// struct FTuple_Ldate__time_Mtime__span_R_ExprResult_1                                                    (HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_2                                                        (HasGetValueTypeHash)
// struct FTuple_Ldate__time_Mtime__span_R_ExprResult_3                                                    (HasGetValueTypeHash)

struct FVerseExperimental_date_time UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_Roperator_U_2b_U_L_Ndate__time_M_Ntime__span_R(const struct FTuple_Ldate__time_Mtime__span_R& __verse_0xB2CDDD72_Argument, FVerseFunctionProperty_ _Callee_0, const struct FTuple_Ldate__time_Mtime__span_R& _ExprResult_1, FVerseFunctionProperty_ _Callee_2, const struct FTuple_Ldate__time_Mtime__span_R& _ExprResult_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_Roperator_U_2b_U_L_Ndate__time_M_Ntime__span_R");

	Params::UVerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_Roperator_U_2b_U_L_Ndate__time_M_Ntime__span_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._Callee_0 = _Callee_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._Callee_2 = _Callee_2;
	Parms._ExprResult_3 = _ExprResult_3;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseExperimental.VerseExperimental._L_2fVerse_2eorg_2fVerseExperimental_N_Roperator_U_2b_U_L_Ntime__span_M_Ntime__span_R
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_Ltime__span_Mtime__span_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FVerseExperimental_time_spanRetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor)
// FVerseFunctionProperty_            _Callee_0                                                        (HasGetValueTypeHash)
// struct FTuple_Ltime__span_Mtime__span_R_ExprResult_1                                                    (HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_2                                                        (HasGetValueTypeHash)
// struct FTuple_Ltime__span_Mtime__span_R_ExprResult_3                                                    (HasGetValueTypeHash)

struct FVerseExperimental_time_span UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_Roperator_U_2b_U_L_Ntime__span_M_Ntime__span_R(const struct FTuple_Ltime__span_Mtime__span_R& __verse_0xB2CDDD72_Argument, FVerseFunctionProperty_ _Callee_0, const struct FTuple_Ltime__span_Mtime__span_R& _ExprResult_1, FVerseFunctionProperty_ _Callee_2, const struct FTuple_Ltime__span_Mtime__span_R& _ExprResult_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_Roperator_U_2b_U_L_Ntime__span_M_Ntime__span_R");

	Params::UVerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_Roperator_U_2b_U_L_Ntime__span_M_Ntime__span_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._Callee_0 = _Callee_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._Callee_2 = _Callee_2;
	Parms._ExprResult_3 = _ExprResult_3;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseExperimental.VerseExperimental._L_2fVerse_2eorg_2fVerseExperimental_N_Roperator_U_2a_U_L_Ntime__span_M_Nfloat_R
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_Ltime__span_Mfloat_R __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FVerseExperimental_time_spanRetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor)
// FVerseFunctionProperty_            _Callee_0                                                        (HasGetValueTypeHash)
// struct FTuple_Ltime__span_Mfloat_R _ExprResult_1                                                    (HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_2                                                        (HasGetValueTypeHash)
// struct FTuple_Ltime__span_Mfloat_R _ExprResult_3                                                    (HasGetValueTypeHash)

struct FVerseExperimental_time_span UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_Roperator_U_2a_U_L_Ntime__span_M_Nfloat_R(const struct FTuple_Ltime__span_Mfloat_R& __verse_0xB2CDDD72_Argument, FVerseFunctionProperty_ _Callee_0, const struct FTuple_Ltime__span_Mfloat_R& _ExprResult_1, FVerseFunctionProperty_ _Callee_2, const struct FTuple_Ltime__span_Mfloat_R& _ExprResult_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_Roperator_U_2a_U_L_Ntime__span_M_Nfloat_R");

	Params::UVerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_Roperator_U_2a_U_L_Ntime__span_M_Nfloat_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._Callee_0 = _Callee_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._Callee_2 = _Callee_2;
	Parms._ExprResult_3 = _ExprResult_3;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseExperimental.VerseExperimental._L_2fVerse_2eorg_2fVerseExperimental_N_Roperator_U_2a_U_L_Nfloat_M_Ntime__span_R
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_Lfloat_Mtime__span_R __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FVerseExperimental_time_spanRetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor)
// FVerseFunctionProperty_            _Callee_0                                                        (HasGetValueTypeHash)
// struct FTuple_Ltime__span_Mfloat_R _ExprResult_1                                                    (HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_2                                                        (HasGetValueTypeHash)
// struct FTuple_Ltime__span_Mfloat_R _ExprResult_3                                                    (HasGetValueTypeHash)

struct FVerseExperimental_time_span UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_Roperator_U_2a_U_L_Nfloat_M_Ntime__span_R(const struct FTuple_Lfloat_Mtime__span_R& __verse_0xB2CDDD72_Argument, FVerseFunctionProperty_ _Callee_0, const struct FTuple_Ltime__span_Mfloat_R& _ExprResult_1, FVerseFunctionProperty_ _Callee_2, const struct FTuple_Ltime__span_Mfloat_R& _ExprResult_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_Roperator_U_2a_U_L_Nfloat_M_Ntime__span_R");

	Params::UVerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_Roperator_U_2a_U_L_Nfloat_M_Ntime__span_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._Callee_0 = _Callee_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._Callee_2 = _Callee_2;
	Parms._ExprResult_3 = _ExprResult_3;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseExperimental.VerseExperimental._L_2fVerse_2eorg_2fVerseExperimental_N_RValidateDateTime_L_Nint_M_Nint_M_Nint_M_Nint_M_Nint_M_Nint_M_Nint_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lint_Mint_Mint_Mint_Mint_Mint_Mint_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// uint8                              RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

uint8 UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RValidateDateTime_L_Nint_M_Nint_M_Nint_M_Nint_M_Nint_M_Nint_M_Nint_R(const struct FTuple_Lint_Mint_Mint_Mint_Mint_Mint_Mint_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RValidateDateTime_L_Nint_M_Nint_M_Nint_M_Nint_M_Nint_M_Nint_M_Nint_R");

	Params::UVerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RValidateDateTime_L_Nint_M_Nint_M_Nint_M_Nint_M_Nint_M_Nint_M_Nint_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseExperimental.VerseExperimental._L_2fVerse_2eorg_2fVerseExperimental_N_RValidate_L_Ndate__time_R
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVerseExperimental_date_time__verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_0                                                    (NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_1                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// FVerseFunctionProperty_            _Callee_2                                                        (HasGetValueTypeHash)
// struct FTuple_Ldate__time_Mdate__time_R_ExprResult_3                                                    (HasGetValueTypeHash)
// struct FVerseExperimental_date_time_ExprResultStack_4                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// FVerseFunctionProperty_            _Callee_5                                                        (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_6                                                    (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_7                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// FVerseFunctionProperty_            _Callee_8                                                        (HasGetValueTypeHash)
// struct FTuple_Ldate__time_Mdate__time_R_ExprResult_9                                                    (HasGetValueTypeHash)
// struct FVerseExperimental_date_time_ExprResultStack_10                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// FVerseFunctionProperty_            _Callee_11                                                       (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_12                                                   (HasGetValueTypeHash)
// uint8                              _ExprResult_13                                                   (NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_14                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// FVerseFunctionProperty_            _Callee_15                                                       (HasGetValueTypeHash)
// struct FTuple_Ldate__time_Mdate__time_R_ExprResult_16                                                   (HasGetValueTypeHash)
// struct FVerseExperimental_date_time_ExprResultStack_17                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// FVerseFunctionProperty_            _Callee_18                                                       (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_19                                                   (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_20                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// FVerseFunctionProperty_            _Callee_21                                                       (HasGetValueTypeHash)
// struct FTuple_Ldate__time_Mdate__time_R_ExprResult_22                                                   (HasGetValueTypeHash)
// struct FVerseExperimental_date_time_ExprResultStack_23                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// FVerseFunctionProperty_            _Callee_24                                                       (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_25                                                   (HasGetValueTypeHash)

FOptionalProperty_ UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RValidate_L_Ndate__time_R(const struct FVerseExperimental_date_time& __verse_0xB2CDDD72_Argument, uint8 _ExprResult_0, FOptionalProperty_ _ExprResultStack_1, FVerseFunctionProperty_ _Callee_2, const struct FTuple_Ldate__time_Mdate__time_R& _ExprResult_3, const struct FVerseExperimental_date_time& _ExprResultStack_4, FVerseFunctionProperty_ _Callee_5, const struct FTuple_L_R& _ExprResult_6, FOptionalProperty_ _ExprResultStack_7, FVerseFunctionProperty_ _Callee_8, const struct FTuple_Ldate__time_Mdate__time_R& _ExprResult_9, const struct FVerseExperimental_date_time& _ExprResultStack_10, FVerseFunctionProperty_ _Callee_11, const struct FTuple_L_R& _ExprResult_12, uint8 _ExprResult_13, FOptionalProperty_ _ExprResultStack_14, FVerseFunctionProperty_ _Callee_15, const struct FTuple_Ldate__time_Mdate__time_R& _ExprResult_16, const struct FVerseExperimental_date_time& _ExprResultStack_17, FVerseFunctionProperty_ _Callee_18, const struct FTuple_L_R& _ExprResult_19, FOptionalProperty_ _ExprResultStack_20, FVerseFunctionProperty_ _Callee_21, const struct FTuple_Ldate__time_Mdate__time_R& _ExprResult_22, const struct FVerseExperimental_date_time& _ExprResultStack_23, FVerseFunctionProperty_ _Callee_24, const struct FTuple_L_R& _ExprResult_25)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RValidate_L_Ndate__time_R");

	Params::UVerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RValidate_L_Ndate__time_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._ExprResult_0 = _ExprResult_0;
	Parms._ExprResultStack_1 = _ExprResultStack_1;
	Parms._Callee_2 = _Callee_2;
	Parms._ExprResult_3 = _ExprResult_3;
	Parms._ExprResultStack_4 = _ExprResultStack_4;
	Parms._Callee_5 = _Callee_5;
	Parms._ExprResult_6 = _ExprResult_6;
	Parms._ExprResultStack_7 = _ExprResultStack_7;
	Parms._Callee_8 = _Callee_8;
	Parms._ExprResult_9 = _ExprResult_9;
	Parms._ExprResultStack_10 = _ExprResultStack_10;
	Parms._Callee_11 = _Callee_11;
	Parms._ExprResult_12 = _ExprResult_12;
	Parms._ExprResult_13 = _ExprResult_13;
	Parms._ExprResultStack_14 = _ExprResultStack_14;
	Parms._Callee_15 = _Callee_15;
	Parms._ExprResult_16 = _ExprResult_16;
	Parms._ExprResultStack_17 = _ExprResultStack_17;
	Parms._Callee_18 = _Callee_18;
	Parms._ExprResult_19 = _ExprResult_19;
	Parms._ExprResultStack_20 = _ExprResultStack_20;
	Parms._Callee_21 = _Callee_21;
	Parms._ExprResult_22 = _ExprResult_22;
	Parms._ExprResultStack_23 = _ExprResultStack_23;
	Parms._Callee_24 = _Callee_24;
	Parms._ExprResult_25 = _ExprResult_25;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseExperimental.VerseExperimental._L_2fVerse_2eorg_2fVerseExperimental_N_RUtcNow
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FVerseExperimental_date_timeRetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

struct FVerseExperimental_date_time UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RUtcNow(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RUtcNow");

	Params::UVerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RUtcNow_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseExperimental.VerseExperimental._L_2fVerse_2eorg_2fVerseExperimental_N_RToString_L_Ntime__span_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FVerseExperimental_time_span__verse_0xB2CDDD72_Argument                                      (Parm, NoDestructor)
// FVerseStringProperty_              RetVal                                                           (Parm, OutParm, ReturnParm, HasGetValueTypeHash)

FVerseStringProperty_ UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RToString_L_Ntime__span_R(const struct FVerseExperimental_time_span& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RToString_L_Ntime__span_R");

	Params::UVerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RToString_L_Ntime__span_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseExperimental.VerseExperimental._L_2fVerse_2eorg_2fVerseExperimental_N_RToString_L_Ndate__time_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FVerseExperimental_date_time__verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// FVerseStringProperty_              RetVal                                                           (Parm, OutParm, ReturnParm, HasGetValueTypeHash)

FVerseStringProperty_ UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RToString_L_Ndate__time_R(const struct FVerseExperimental_date_time& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RToString_L_Ndate__time_R");

	Params::UVerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RToString_L_Ndate__time_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseExperimental.VerseExperimental._L_2fVerse_2eorg_2fVerseExperimental_N_RPerformNativeSubtract_L_Ntime__span_M_Ntime__span_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Ltime__span_Mtime__span_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FVerseExperimental_time_spanRetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor)

struct FVerseExperimental_time_span UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RPerformNativeSubtract_L_Ntime__span_M_Ntime__span_R(const struct FTuple_Ltime__span_Mtime__span_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RPerformNativeSubtract_L_Ntime__span_M_Ntime__span_R");

	Params::UVerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RPerformNativeSubtract_L_Ntime__span_M_Ntime__span_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseExperimental.VerseExperimental._L_2fVerse_2eorg_2fVerseExperimental_N_RPerformNativeSubtract_L_Ndate__time_M_Ndate__time_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Ldate__time_Mdate__time_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FVerseExperimental_time_spanRetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor)

struct FVerseExperimental_time_span UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RPerformNativeSubtract_L_Ndate__time_M_Ndate__time_R(const struct FTuple_Ldate__time_Mdate__time_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RPerformNativeSubtract_L_Ndate__time_M_Ndate__time_R");

	Params::UVerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RPerformNativeSubtract_L_Ndate__time_M_Ndate__time_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseExperimental.VerseExperimental._L_2fVerse_2eorg_2fVerseExperimental_N_RPerformNativeSubtract_L_Ndate__time_M_Ntime__span_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Ldate__time_Mtime__span_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FVerseExperimental_date_timeRetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

struct FVerseExperimental_date_time UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RPerformNativeSubtract_L_Ndate__time_M_Ntime__span_R(const struct FTuple_Ldate__time_Mtime__span_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RPerformNativeSubtract_L_Ndate__time_M_Ntime__span_R");

	Params::UVerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RPerformNativeSubtract_L_Ndate__time_M_Ntime__span_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseExperimental.VerseExperimental._L_2fVerse_2eorg_2fVerseExperimental_N_RPerformNativeNegate_L_Ntime__span_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FVerseExperimental_time_span__verse_0xB2CDDD72_Argument                                      (Parm, NoDestructor)
// struct FVerseExperimental_time_spanRetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor)

struct FVerseExperimental_time_span UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RPerformNativeNegate_L_Ntime__span_R(const struct FVerseExperimental_time_span& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RPerformNativeNegate_L_Ntime__span_R");

	Params::UVerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RPerformNativeNegate_L_Ntime__span_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseExperimental.VerseExperimental._L_2fVerse_2eorg_2fVerseExperimental_N_RPerformNativeMultiply_L_Ntime__span_M_Nfloat_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Ltime__span_Mfloat_R __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FVerseExperimental_time_spanRetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor)

struct FVerseExperimental_time_span UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RPerformNativeMultiply_L_Ntime__span_M_Nfloat_R(const struct FTuple_Ltime__span_Mfloat_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RPerformNativeMultiply_L_Ntime__span_M_Nfloat_R");

	Params::UVerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RPerformNativeMultiply_L_Ntime__span_M_Nfloat_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseExperimental.VerseExperimental._L_2fVerse_2eorg_2fVerseExperimental_N_RPerformNativeDivide_L_Ntime__span_M_Nfloat_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Ltime__span_Mfloat_R __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FVerseExperimental_time_spanRetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor)

struct FVerseExperimental_time_span UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RPerformNativeDivide_L_Ntime__span_M_Nfloat_R(const struct FTuple_Ltime__span_Mfloat_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RPerformNativeDivide_L_Ntime__span_M_Nfloat_R");

	Params::UVerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RPerformNativeDivide_L_Ntime__span_M_Nfloat_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseExperimental.VerseExperimental._L_2fVerse_2eorg_2fVerseExperimental_N_RPerformNativeAdd_L_Ntime__span_M_Ntime__span_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Ltime__span_Mtime__span_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FVerseExperimental_time_spanRetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor)

struct FVerseExperimental_time_span UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RPerformNativeAdd_L_Ntime__span_M_Ntime__span_R(const struct FTuple_Ltime__span_Mtime__span_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RPerformNativeAdd_L_Ntime__span_M_Ntime__span_R");

	Params::UVerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RPerformNativeAdd_L_Ntime__span_M_Ntime__span_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseExperimental.VerseExperimental._L_2fVerse_2eorg_2fVerseExperimental_N_RPerformNativeAdd_L_Ndate__time_M_Ntime__span_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Ldate__time_Mtime__span_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FVerseExperimental_date_timeRetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

struct FVerseExperimental_date_time UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RPerformNativeAdd_L_Ndate__time_M_Ntime__span_R(const struct FTuple_Ldate__time_Mtime__span_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RPerformNativeAdd_L_Ndate__time_M_Ntime__span_R");

	Params::UVerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RPerformNativeAdd_L_Ndate__time_M_Ntime__span_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseExperimental.VerseExperimental._L_2fVerse_2eorg_2fVerseExperimental_N_RLessEqual_L_Ndate__time_M_Ndate__time_R
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_Ldate__time_Mdate__time_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// struct FVerseExperimental_date_time_ExprResult_0                                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_1                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_2                                                    (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_3                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVerseExperimental_date_time_ExprResult_4                                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_5                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_6                                                    (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_7                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionalProperty_ UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RLessEqual_L_Ndate__time_M_Ndate__time_R(const struct FTuple_Ldate__time_Mdate__time_R& __verse_0xB2CDDD72_Argument, const struct FVerseExperimental_date_time& _ExprResult_0, TMap<FVerseStringProperty_, uint8> _ExprResultStack_1, FVerseStringProperty_ _ExprResult_2, FOptionalProperty_ _ExprResultStack_3, const struct FVerseExperimental_date_time& _ExprResult_4, TMap<FVerseStringProperty_, uint8> _ExprResultStack_5, FVerseStringProperty_ _ExprResult_6, FOptionalProperty_ _ExprResultStack_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RLessEqual_L_Ndate__time_M_Ndate__time_R");

	Params::UVerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RLessEqual_L_Ndate__time_M_Ndate__time_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._ExprResult_0 = _ExprResult_0;
	Parms._ExprResultStack_1 = _ExprResultStack_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._ExprResultStack_3 = _ExprResultStack_3;
	Parms._ExprResult_4 = _ExprResult_4;
	Parms._ExprResultStack_5 = _ExprResultStack_5;
	Parms._ExprResult_6 = _ExprResult_6;
	Parms._ExprResultStack_7 = _ExprResultStack_7;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseExperimental.VerseExperimental._L_2fVerse_2eorg_2fVerseExperimental_N_RLessEqual_L_Ntime__span_M_Ntime__span_R
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_Ltime__span_Mtime__span_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor)
// struct FVerseExperimental_time_span_ExprResult_0                                                    (NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_1                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_2                                                    (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_3                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVerseExperimental_time_span_ExprResult_4                                                    (NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_5                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_6                                                    (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_7                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionalProperty_ UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RLessEqual_L_Ntime__span_M_Ntime__span_R(const struct FTuple_Ltime__span_Mtime__span_R& __verse_0xB2CDDD72_Argument, const struct FVerseExperimental_time_span& _ExprResult_0, TMap<FVerseStringProperty_, uint8> _ExprResultStack_1, FVerseStringProperty_ _ExprResult_2, FOptionalProperty_ _ExprResultStack_3, const struct FVerseExperimental_time_span& _ExprResult_4, TMap<FVerseStringProperty_, uint8> _ExprResultStack_5, FVerseStringProperty_ _ExprResult_6, FOptionalProperty_ _ExprResultStack_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RLessEqual_L_Ntime__span_M_Ntime__span_R");

	Params::UVerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RLessEqual_L_Ntime__span_M_Ntime__span_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._ExprResult_0 = _ExprResult_0;
	Parms._ExprResultStack_1 = _ExprResultStack_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._ExprResultStack_3 = _ExprResultStack_3;
	Parms._ExprResult_4 = _ExprResult_4;
	Parms._ExprResultStack_5 = _ExprResultStack_5;
	Parms._ExprResult_6 = _ExprResult_6;
	Parms._ExprResultStack_7 = _ExprResultStack_7;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseExperimental.VerseExperimental._L_2fVerse_2eorg_2fVerseExperimental_N_RLess_L_Ndate__time_M_Ndate__time_R
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_Ldate__time_Mdate__time_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// struct FVerseExperimental_date_time_ExprResult_0                                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_1                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_2                                                    (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_3                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVerseExperimental_date_time_ExprResult_4                                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_5                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_6                                                    (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_7                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionalProperty_ UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RLess_L_Ndate__time_M_Ndate__time_R(const struct FTuple_Ldate__time_Mdate__time_R& __verse_0xB2CDDD72_Argument, const struct FVerseExperimental_date_time& _ExprResult_0, TMap<FVerseStringProperty_, uint8> _ExprResultStack_1, FVerseStringProperty_ _ExprResult_2, FOptionalProperty_ _ExprResultStack_3, const struct FVerseExperimental_date_time& _ExprResult_4, TMap<FVerseStringProperty_, uint8> _ExprResultStack_5, FVerseStringProperty_ _ExprResult_6, FOptionalProperty_ _ExprResultStack_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RLess_L_Ndate__time_M_Ndate__time_R");

	Params::UVerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RLess_L_Ndate__time_M_Ndate__time_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._ExprResult_0 = _ExprResult_0;
	Parms._ExprResultStack_1 = _ExprResultStack_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._ExprResultStack_3 = _ExprResultStack_3;
	Parms._ExprResult_4 = _ExprResult_4;
	Parms._ExprResultStack_5 = _ExprResultStack_5;
	Parms._ExprResult_6 = _ExprResult_6;
	Parms._ExprResultStack_7 = _ExprResultStack_7;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseExperimental.VerseExperimental._L_2fVerse_2eorg_2fVerseExperimental_N_RLess_L_Ntime__span_M_Ntime__span_R
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_Ltime__span_Mtime__span_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor)
// struct FVerseExperimental_time_span_ExprResult_0                                                    (NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_1                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_2                                                    (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_3                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVerseExperimental_time_span_ExprResult_4                                                    (NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_5                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_6                                                    (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_7                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionalProperty_ UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RLess_L_Ntime__span_M_Ntime__span_R(const struct FTuple_Ltime__span_Mtime__span_R& __verse_0xB2CDDD72_Argument, const struct FVerseExperimental_time_span& _ExprResult_0, TMap<FVerseStringProperty_, uint8> _ExprResultStack_1, FVerseStringProperty_ _ExprResult_2, FOptionalProperty_ _ExprResultStack_3, const struct FVerseExperimental_time_span& _ExprResult_4, TMap<FVerseStringProperty_, uint8> _ExprResultStack_5, FVerseStringProperty_ _ExprResult_6, FOptionalProperty_ _ExprResultStack_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RLess_L_Ntime__span_M_Ntime__span_R");

	Params::UVerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RLess_L_Ntime__span_M_Ntime__span_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._ExprResult_0 = _ExprResult_0;
	Parms._ExprResultStack_1 = _ExprResultStack_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._ExprResultStack_3 = _ExprResultStack_3;
	Parms._ExprResult_4 = _ExprResult_4;
	Parms._ExprResultStack_5 = _ExprResultStack_5;
	Parms._ExprResult_6 = _ExprResult_6;
	Parms._ExprResultStack_7 = _ExprResultStack_7;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseExperimental.VerseExperimental._L_2fVerse_2eorg_2fVerseExperimental_N_RGreaterEqual_L_Ndate__time_M_Ndate__time_R
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_Ldate__time_Mdate__time_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// struct FVerseExperimental_date_time_ExprResult_0                                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_1                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_2                                                    (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_3                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVerseExperimental_date_time_ExprResult_4                                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_5                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_6                                                    (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_7                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionalProperty_ UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RGreaterEqual_L_Ndate__time_M_Ndate__time_R(const struct FTuple_Ldate__time_Mdate__time_R& __verse_0xB2CDDD72_Argument, const struct FVerseExperimental_date_time& _ExprResult_0, TMap<FVerseStringProperty_, uint8> _ExprResultStack_1, FVerseStringProperty_ _ExprResult_2, FOptionalProperty_ _ExprResultStack_3, const struct FVerseExperimental_date_time& _ExprResult_4, TMap<FVerseStringProperty_, uint8> _ExprResultStack_5, FVerseStringProperty_ _ExprResult_6, FOptionalProperty_ _ExprResultStack_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RGreaterEqual_L_Ndate__time_M_Ndate__time_R");

	Params::UVerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RGreaterEqual_L_Ndate__time_M_Ndate__time_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._ExprResult_0 = _ExprResult_0;
	Parms._ExprResultStack_1 = _ExprResultStack_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._ExprResultStack_3 = _ExprResultStack_3;
	Parms._ExprResult_4 = _ExprResult_4;
	Parms._ExprResultStack_5 = _ExprResultStack_5;
	Parms._ExprResult_6 = _ExprResult_6;
	Parms._ExprResultStack_7 = _ExprResultStack_7;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseExperimental.VerseExperimental._L_2fVerse_2eorg_2fVerseExperimental_N_RGreaterEqual_L_Ntime__span_M_Ntime__span_R
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_Ltime__span_Mtime__span_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor)
// struct FVerseExperimental_time_span_ExprResult_0                                                    (NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_1                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_2                                                    (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_3                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVerseExperimental_time_span_ExprResult_4                                                    (NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_5                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_6                                                    (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_7                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionalProperty_ UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RGreaterEqual_L_Ntime__span_M_Ntime__span_R(const struct FTuple_Ltime__span_Mtime__span_R& __verse_0xB2CDDD72_Argument, const struct FVerseExperimental_time_span& _ExprResult_0, TMap<FVerseStringProperty_, uint8> _ExprResultStack_1, FVerseStringProperty_ _ExprResult_2, FOptionalProperty_ _ExprResultStack_3, const struct FVerseExperimental_time_span& _ExprResult_4, TMap<FVerseStringProperty_, uint8> _ExprResultStack_5, FVerseStringProperty_ _ExprResult_6, FOptionalProperty_ _ExprResultStack_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RGreaterEqual_L_Ntime__span_M_Ntime__span_R");

	Params::UVerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RGreaterEqual_L_Ntime__span_M_Ntime__span_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._ExprResult_0 = _ExprResult_0;
	Parms._ExprResultStack_1 = _ExprResultStack_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._ExprResultStack_3 = _ExprResultStack_3;
	Parms._ExprResult_4 = _ExprResult_4;
	Parms._ExprResultStack_5 = _ExprResultStack_5;
	Parms._ExprResult_6 = _ExprResult_6;
	Parms._ExprResultStack_7 = _ExprResultStack_7;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseExperimental.VerseExperimental._L_2fVerse_2eorg_2fVerseExperimental_N_RGreater_L_Ntime__span_M_Ntime__span_R
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_Ltime__span_Mtime__span_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor)
// struct FVerseExperimental_time_span_ExprResult_0                                                    (NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_1                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_2                                                    (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_3                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVerseExperimental_time_span_ExprResult_4                                                    (NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_5                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_6                                                    (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_7                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionalProperty_ UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RGreater_L_Ntime__span_M_Ntime__span_R(const struct FTuple_Ltime__span_Mtime__span_R& __verse_0xB2CDDD72_Argument, const struct FVerseExperimental_time_span& _ExprResult_0, TMap<FVerseStringProperty_, uint8> _ExprResultStack_1, FVerseStringProperty_ _ExprResult_2, FOptionalProperty_ _ExprResultStack_3, const struct FVerseExperimental_time_span& _ExprResult_4, TMap<FVerseStringProperty_, uint8> _ExprResultStack_5, FVerseStringProperty_ _ExprResult_6, FOptionalProperty_ _ExprResultStack_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RGreater_L_Ntime__span_M_Ntime__span_R");

	Params::UVerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RGreater_L_Ntime__span_M_Ntime__span_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._ExprResult_0 = _ExprResult_0;
	Parms._ExprResultStack_1 = _ExprResultStack_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._ExprResultStack_3 = _ExprResultStack_3;
	Parms._ExprResult_4 = _ExprResult_4;
	Parms._ExprResultStack_5 = _ExprResultStack_5;
	Parms._ExprResult_6 = _ExprResult_6;
	Parms._ExprResultStack_7 = _ExprResultStack_7;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseExperimental.VerseExperimental._L_2fVerse_2eorg_2fVerseExperimental_N_RGreater_L_Ndate__time_M_Ndate__time_R
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_Ldate__time_Mdate__time_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// struct FVerseExperimental_date_time_ExprResult_0                                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_1                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_2                                                    (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_3                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVerseExperimental_date_time_ExprResult_4                                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_5                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_6                                                    (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_7                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionalProperty_ UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RGreater_L_Ndate__time_M_Ndate__time_R(const struct FTuple_Ldate__time_Mdate__time_R& __verse_0xB2CDDD72_Argument, const struct FVerseExperimental_date_time& _ExprResult_0, TMap<FVerseStringProperty_, uint8> _ExprResultStack_1, FVerseStringProperty_ _ExprResult_2, FOptionalProperty_ _ExprResultStack_3, const struct FVerseExperimental_date_time& _ExprResult_4, TMap<FVerseStringProperty_, uint8> _ExprResultStack_5, FVerseStringProperty_ _ExprResult_6, FOptionalProperty_ _ExprResultStack_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RGreater_L_Ndate__time_M_Ndate__time_R");

	Params::UVerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RGreater_L_Ndate__time_M_Ndate__time_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._ExprResult_0 = _ExprResult_0;
	Parms._ExprResultStack_1 = _ExprResultStack_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._ExprResultStack_3 = _ExprResultStack_3;
	Parms._ExprResult_4 = _ExprResult_4;
	Parms._ExprResultStack_5 = _ExprResultStack_5;
	Parms._ExprResult_6 = _ExprResult_6;
	Parms._ExprResultStack_7 = _ExprResultStack_7;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseExperimental.VerseExperimental._L_2fVerse_2eorg_2fVerseExperimental_N_RGetYear_L_Ndate__time_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FVerseExperimental_date_time__verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RGetYear_L_Ndate__time_R(const struct FVerseExperimental_date_time& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RGetYear_L_Ndate__time_R");

	Params::UVerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RGetYear_L_Ndate__time_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseExperimental.VerseExperimental._L_2fVerse_2eorg_2fVerseExperimental_N_RGetTotalSeconds_L_Ntime__span_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FVerseExperimental_time_span__verse_0xB2CDDD72_Argument                                      (Parm, NoDestructor)
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RGetTotalSeconds_L_Ntime__span_R(const struct FVerseExperimental_time_span& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RGetTotalSeconds_L_Ntime__span_R");

	Params::UVerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RGetTotalSeconds_L_Ntime__span_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseExperimental.VerseExperimental._L_2fVerse_2eorg_2fVerseExperimental_N_RGetTotalMinutes_L_Ntime__span_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FVerseExperimental_time_span__verse_0xB2CDDD72_Argument                                      (Parm, NoDestructor)
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RGetTotalMinutes_L_Ntime__span_R(const struct FVerseExperimental_time_span& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RGetTotalMinutes_L_Ntime__span_R");

	Params::UVerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RGetTotalMinutes_L_Ntime__span_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseExperimental.VerseExperimental._L_2fVerse_2eorg_2fVerseExperimental_N_RGetTotalMilliseconds_L_Ntime__span_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FVerseExperimental_time_span__verse_0xB2CDDD72_Argument                                      (Parm, NoDestructor)
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RGetTotalMilliseconds_L_Ntime__span_R(const struct FVerseExperimental_time_span& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RGetTotalMilliseconds_L_Ntime__span_R");

	Params::UVerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RGetTotalMilliseconds_L_Ntime__span_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseExperimental.VerseExperimental._L_2fVerse_2eorg_2fVerseExperimental_N_RGetTotalMicroseconds_L_Ntime__span_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FVerseExperimental_time_span__verse_0xB2CDDD72_Argument                                      (Parm, NoDestructor)
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RGetTotalMicroseconds_L_Ntime__span_R(const struct FVerseExperimental_time_span& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RGetTotalMicroseconds_L_Ntime__span_R");

	Params::UVerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RGetTotalMicroseconds_L_Ntime__span_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseExperimental.VerseExperimental._L_2fVerse_2eorg_2fVerseExperimental_N_RGetTotalHours_L_Ntime__span_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FVerseExperimental_time_span__verse_0xB2CDDD72_Argument                                      (Parm, NoDestructor)
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RGetTotalHours_L_Ntime__span_R(const struct FVerseExperimental_time_span& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RGetTotalHours_L_Ntime__span_R");

	Params::UVerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RGetTotalHours_L_Ntime__span_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseExperimental.VerseExperimental._L_2fVerse_2eorg_2fVerseExperimental_N_RGetTotalDays_L_Ntime__span_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FVerseExperimental_time_span__verse_0xB2CDDD72_Argument                                      (Parm, NoDestructor)
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RGetTotalDays_L_Ntime__span_R(const struct FVerseExperimental_time_span& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RGetTotalDays_L_Ntime__span_R");

	Params::UVerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RGetTotalDays_L_Ntime__span_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseExperimental.VerseExperimental._L_2fVerse_2eorg_2fVerseExperimental_N_RGetTimeOfDay_L_Ndate__time_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FVerseExperimental_date_time__verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVerseExperimental_time_of_day_partsRetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

struct FVerseExperimental_time_of_day_parts UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RGetTimeOfDay_L_Ndate__time_R(const struct FVerseExperimental_date_time& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RGetTimeOfDay_L_Ndate__time_R");

	Params::UVerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RGetTimeOfDay_L_Ndate__time_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseExperimental.VerseExperimental._L_2fVerse_2eorg_2fVerseExperimental_N_RGetSeconds_L_Ntime__span_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FVerseExperimental_time_span__verse_0xB2CDDD72_Argument                                      (Parm, NoDestructor)
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RGetSeconds_L_Ntime__span_R(const struct FVerseExperimental_time_span& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RGetSeconds_L_Ntime__span_R");

	Params::UVerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RGetSeconds_L_Ntime__span_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseExperimental.VerseExperimental._L_2fVerse_2eorg_2fVerseExperimental_N_RGetSeconds_L_Ndate__time_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FVerseExperimental_date_time__verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RGetSeconds_L_Ndate__time_R(const struct FVerseExperimental_date_time& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RGetSeconds_L_Ndate__time_R");

	Params::UVerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RGetSeconds_L_Ndate__time_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseExperimental.VerseExperimental._L_2fVerse_2eorg_2fVerseExperimental_N_RGetNanoseconds_L_Ndate__time_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FVerseExperimental_date_time__verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RGetNanoseconds_L_Ndate__time_R(const struct FVerseExperimental_date_time& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RGetNanoseconds_L_Ndate__time_R");

	Params::UVerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RGetNanoseconds_L_Ndate__time_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseExperimental.VerseExperimental._L_2fVerse_2eorg_2fVerseExperimental_N_RGetNanoseconds_L_Ntime__span_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FVerseExperimental_time_span__verse_0xB2CDDD72_Argument                                      (Parm, NoDestructor)
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RGetNanoseconds_L_Ntime__span_R(const struct FVerseExperimental_time_span& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RGetNanoseconds_L_Ntime__span_R");

	Params::UVerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RGetNanoseconds_L_Ntime__span_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseExperimental.VerseExperimental._L_2fVerse_2eorg_2fVerseExperimental_N_RGetMonthOfYear_L_Ndate__time_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FVerseExperimental_date_time__verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EVerseExperimental_month_of_yearRetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class EVerseExperimental_month_of_year UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RGetMonthOfYear_L_Ndate__time_R(const struct FVerseExperimental_date_time& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RGetMonthOfYear_L_Ndate__time_R");

	Params::UVerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RGetMonthOfYear_L_Ndate__time_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseExperimental.VerseExperimental._L_2fVerse_2eorg_2fVerseExperimental_N_RGetMonth_L_Ndate__time_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FVerseExperimental_date_time__verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RGetMonth_L_Ndate__time_R(const struct FVerseExperimental_date_time& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RGetMonth_L_Ndate__time_R");

	Params::UVerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RGetMonth_L_Ndate__time_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseExperimental.VerseExperimental._L_2fVerse_2eorg_2fVerseExperimental_N_RGetMinutes_L_Ntime__span_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FVerseExperimental_time_span__verse_0xB2CDDD72_Argument                                      (Parm, NoDestructor)
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RGetMinutes_L_Ntime__span_R(const struct FVerseExperimental_time_span& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RGetMinutes_L_Ntime__span_R");

	Params::UVerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RGetMinutes_L_Ntime__span_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseExperimental.VerseExperimental._L_2fVerse_2eorg_2fVerseExperimental_N_RGetMinutes_L_Ndate__time_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FVerseExperimental_date_time__verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RGetMinutes_L_Ndate__time_R(const struct FVerseExperimental_date_time& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RGetMinutes_L_Ndate__time_R");

	Params::UVerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RGetMinutes_L_Ndate__time_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseExperimental.VerseExperimental._L_2fVerse_2eorg_2fVerseExperimental_N_RGetMilliseconds_L_Ntime__span_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FVerseExperimental_time_span__verse_0xB2CDDD72_Argument                                      (Parm, NoDestructor)
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RGetMilliseconds_L_Ntime__span_R(const struct FVerseExperimental_time_span& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RGetMilliseconds_L_Ntime__span_R");

	Params::UVerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RGetMilliseconds_L_Ntime__span_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseExperimental.VerseExperimental._L_2fVerse_2eorg_2fVerseExperimental_N_RGetMilliseconds_L_Ndate__time_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FVerseExperimental_date_time__verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RGetMilliseconds_L_Ndate__time_R(const struct FVerseExperimental_date_time& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RGetMilliseconds_L_Ndate__time_R");

	Params::UVerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RGetMilliseconds_L_Ndate__time_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseExperimental.VerseExperimental._L_2fVerse_2eorg_2fVerseExperimental_N_RGetMicroseconds_L_Ntime__span_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FVerseExperimental_time_span__verse_0xB2CDDD72_Argument                                      (Parm, NoDestructor)
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RGetMicroseconds_L_Ntime__span_R(const struct FVerseExperimental_time_span& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RGetMicroseconds_L_Ntime__span_R");

	Params::UVerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RGetMicroseconds_L_Ntime__span_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseExperimental.VerseExperimental._L_2fVerse_2eorg_2fVerseExperimental_N_RGetMicroseconds_L_Ndate__time_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FVerseExperimental_date_time__verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RGetMicroseconds_L_Ndate__time_R(const struct FVerseExperimental_date_time& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RGetMicroseconds_L_Ndate__time_R");

	Params::UVerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RGetMicroseconds_L_Ndate__time_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseExperimental.VerseExperimental._L_2fVerse_2eorg_2fVerseExperimental_N_RGetHours_L_Ntime__span_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FVerseExperimental_time_span__verse_0xB2CDDD72_Argument                                      (Parm, NoDestructor)
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RGetHours_L_Ntime__span_R(const struct FVerseExperimental_time_span& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RGetHours_L_Ntime__span_R");

	Params::UVerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RGetHours_L_Ntime__span_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseExperimental.VerseExperimental._L_2fVerse_2eorg_2fVerseExperimental_N_RGetHours_L_Ndate__time_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FVerseExperimental_date_time__verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RGetHours_L_Ndate__time_R(const struct FVerseExperimental_date_time& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RGetHours_L_Ndate__time_R");

	Params::UVerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RGetHours_L_Ndate__time_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseExperimental.VerseExperimental._L_2fVerse_2eorg_2fVerseExperimental_N_RGetDays_L_Ntime__span_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FVerseExperimental_time_span__verse_0xB2CDDD72_Argument                                      (Parm, NoDestructor)
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RGetDays_L_Ntime__span_R(const struct FVerseExperimental_time_span& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RGetDays_L_Ntime__span_R");

	Params::UVerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RGetDays_L_Ntime__span_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseExperimental.VerseExperimental._L_2fVerse_2eorg_2fVerseExperimental_N_RGetDayOfWeek_L_Ndate__time_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FVerseExperimental_date_time__verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// enum class EVerseExperimental_day_of_weekRetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class EVerseExperimental_day_of_week UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RGetDayOfWeek_L_Ndate__time_R(const struct FVerseExperimental_date_time& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RGetDayOfWeek_L_Ndate__time_R");

	Params::UVerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RGetDayOfWeek_L_Ndate__time_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseExperimental.VerseExperimental._L_2fVerse_2eorg_2fVerseExperimental_N_RGetDay_L_Ndate__time_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FVerseExperimental_date_time__verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RGetDay_L_Ndate__time_R(const struct FVerseExperimental_date_time& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RGetDay_L_Ndate__time_R");

	Params::UVerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RGetDay_L_Ndate__time_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseExperimental.VerseExperimental._L_2fVerse_2eorg_2fVerseExperimental_N_RGetDate_L_Ndate__time_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FVerseExperimental_date_time__verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVerseExperimental_date_partsRetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

struct FVerseExperimental_date_parts UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RGetDate_L_Ndate__time_R(const struct FVerseExperimental_date_time& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RGetDate_L_Ndate__time_R");

	Params::UVerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RGetDate_L_Ndate__time_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseExperimental.VerseExperimental._L_2fVerse_2eorg_2fVerseExperimental_N_RDaysInYear_L_Nint_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int64                              __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RDaysInYear_L_Nint_R(int64 __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RDaysInYear_L_Nint_R");

	Params::UVerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RDaysInYear_L_Nint_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseExperimental.VerseExperimental._L_2fVerse_2eorg_2fVerseExperimental_N_RDaysInMonth_L_Nint_M_Nint_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lint_Mint_R          __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RDaysInMonth_L_Nint_M_Nint_R(const struct FTuple_Lint_Mint_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RDaysInMonth_L_Nint_M_Nint_R");

	Params::UVerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RDaysInMonth_L_Nint_M_Nint_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseExperimental.VerseExperimental._L_2fVerse_2eorg_2fVerseExperimental_N_RDateTimeMin
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FVerseExperimental_date_timeRetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_0                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_1                                                    (HasGetValueTypeHash)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_2                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_3                                                    (HasGetValueTypeHash)

struct FVerseExperimental_date_time UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RDateTimeMin(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, TMap<FVerseStringProperty_, uint8> _ExprResultStack_0, FVerseStringProperty_ _ExprResult_1, TMap<FVerseStringProperty_, uint8> _ExprResultStack_2, FVerseStringProperty_ _ExprResult_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RDateTimeMin");

	Params::UVerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RDateTimeMin_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._ExprResultStack_0 = _ExprResultStack_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._ExprResultStack_2 = _ExprResultStack_2;
	Parms._ExprResult_3 = _ExprResult_3;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseExperimental.VerseExperimental._L_2fVerse_2eorg_2fVerseExperimental_N_RDateTimeMax
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FVerseExperimental_date_timeRetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_0                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_1                                                    (HasGetValueTypeHash)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_2                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_3                                                    (HasGetValueTypeHash)

struct FVerseExperimental_date_time UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RDateTimeMax(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, TMap<FVerseStringProperty_, uint8> _ExprResultStack_0, FVerseStringProperty_ _ExprResult_1, TMap<FVerseStringProperty_, uint8> _ExprResultStack_2, FVerseStringProperty_ _ExprResult_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RDateTimeMax");

	Params::UVerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RDateTimeMax_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._ExprResultStack_0 = _ExprResultStack_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._ExprResultStack_2 = _ExprResultStack_2;
	Parms._ExprResult_3 = _ExprResult_3;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseExperimental.VerseExperimental._L_2fVerse_2eorg_2fVerseExperimental_N_RCreateTimeSpan_L_Nint_M_Nint_M_Nint_M_Nint_M_Nint_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lint_Mint_Mint_Mint_Mint_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FVerseExperimental_time_spanRetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor)

struct FVerseExperimental_time_span UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RCreateTimeSpan_L_Nint_M_Nint_M_Nint_M_Nint_M_Nint_R(const struct FTuple_Lint_Mint_Mint_Mint_Mint_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RCreateTimeSpan_L_Nint_M_Nint_M_Nint_M_Nint_M_Nint_R");

	Params::UVerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RCreateTimeSpan_L_Nint_M_Nint_M_Nint_M_Nint_M_Nint_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseExperimental.VerseExperimental._L_2fVerse_2eorg_2fVerseExperimental_N_RCreateDateTime_L_Nint_M_Nint_M_Nint_M_Nint_M_Nint_M_Nint_M_Nint_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lint_Mint_Mint_Mint_Mint_Mint_Mint_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

FOptionalProperty_ UVerseExperimental::_L_2fVerse_2eorg_2fVerseExperimental_N_RCreateDateTime_L_Nint_M_Nint_M_Nint_M_Nint_M_Nint_M_Nint_M_Nint_R(const struct FTuple_Lint_Mint_Mint_Mint_Mint_Mint_Mint_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseExperimental", "_L_2fVerse_2eorg_2fVerseExperimental_N_RCreateDateTime_L_Nint_M_Nint_M_Nint_M_Nint_M_Nint_M_Nint_M_Nint_R");

	Params::UVerseExperimental__L_2fVerse_2eorg_2fVerseExperimental_N_RCreateDateTime_L_Nint_M_Nint_M_Nint_M_Nint_M_Nint_M_Nint_M_Nint_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseExperimental.VerseExperimental.VerseExperimental_time_span$OverrideFactory
// (Static, HasOutParams, HasDefaults)
// Parameters:
// struct FVerseExperimental_time_spanRetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor)
// TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap                              (ConstParm, Parm, ContainsInstancedReference)
// FVerseStringProperty_              _ExprResultStack_0                                               (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_1                                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_2                                               (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_3                                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

struct FVerseExperimental_time_span UVerseExperimental::VerseExperimental_time_span_OverrideFactory(TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap, FVerseStringProperty_ _ExprResultStack_0, FOptionalProperty_ _ExprResult_1, FVerseStringProperty_ _ExprResultStack_2, FOptionalProperty_ _ExprResult_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseExperimental", "VerseExperimental_time_span$OverrideFactory");

	Params::UVerseExperimental_VerseExperimental_time_span_OverrideFactory_Params Parms{};

	Parms.__verse_0xFB48ED96__InitOverrideMap = __verse_0xFB48ED96__InitOverrideMap;
	Parms._ExprResultStack_0 = _ExprResultStack_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._ExprResultStack_2 = _ExprResultStack_2;
	Parms._ExprResult_3 = _ExprResult_3;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseExperimental.VerseExperimental.VerseExperimental_time_span$Factory
// (Static, HasOutParams)
// Parameters:
// struct FVerseExperimental_time_spanRetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor)

struct FVerseExperimental_time_span UVerseExperimental::VerseExperimental_time_span_Factory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseExperimental", "VerseExperimental_time_span$Factory");

	Params::UVerseExperimental_VerseExperimental_time_span_Factory_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseExperimental.VerseExperimental.VerseExperimental_time_of_day_parts$OverrideFactory
// (Static, HasOutParams)
// Parameters:
// struct FVerseExperimental_time_of_day_partsRetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap                              (ConstParm, Parm, ContainsInstancedReference)

struct FVerseExperimental_time_of_day_parts UVerseExperimental::VerseExperimental_time_of_day_parts_OverrideFactory(TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseExperimental", "VerseExperimental_time_of_day_parts$OverrideFactory");

	Params::UVerseExperimental_VerseExperimental_time_of_day_parts_OverrideFactory_Params Parms{};

	Parms.__verse_0xFB48ED96__InitOverrideMap = __verse_0xFB48ED96__InitOverrideMap;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseExperimental.VerseExperimental.VerseExperimental_time_of_day_parts$Factory
// (Static, HasOutParams)
// Parameters:
// struct FVerseExperimental_time_of_day_partsRetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

struct FVerseExperimental_time_of_day_parts UVerseExperimental::VerseExperimental_time_of_day_parts_Factory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseExperimental", "VerseExperimental_time_of_day_parts$Factory");

	Params::UVerseExperimental_VerseExperimental_time_of_day_parts_Factory_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseExperimental.VerseExperimental.VerseExperimental_date_parts$OverrideFactory
// (Static, HasOutParams)
// Parameters:
// struct FVerseExperimental_date_partsRetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap                              (ConstParm, Parm, ContainsInstancedReference)

struct FVerseExperimental_date_parts UVerseExperimental::VerseExperimental_date_parts_OverrideFactory(TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseExperimental", "VerseExperimental_date_parts$OverrideFactory");

	Params::UVerseExperimental_VerseExperimental_date_parts_OverrideFactory_Params Parms{};

	Parms.__verse_0xFB48ED96__InitOverrideMap = __verse_0xFB48ED96__InitOverrideMap;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseExperimental.VerseExperimental.VerseExperimental_date_parts$Factory
// (Static, HasOutParams)
// Parameters:
// struct FVerseExperimental_date_partsRetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

struct FVerseExperimental_date_parts UVerseExperimental::VerseExperimental_date_parts_Factory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseExperimental", "VerseExperimental_date_parts$Factory");

	Params::UVerseExperimental_VerseExperimental_date_parts_Factory_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseExperimental.VerseExperimental.VerseExperimental_date_time$OverrideFactory
// (Static, HasOutParams, HasDefaults)
// Parameters:
// struct FVerseExperimental_date_timeRetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap                              (ConstParm, Parm, ContainsInstancedReference)
// FVerseStringProperty_              _ExprResultStack_0                                               (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_1                                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_2                                               (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_3                                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

struct FVerseExperimental_date_time UVerseExperimental::VerseExperimental_date_time_OverrideFactory(TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap, FVerseStringProperty_ _ExprResultStack_0, FOptionalProperty_ _ExprResult_1, FVerseStringProperty_ _ExprResultStack_2, FOptionalProperty_ _ExprResult_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseExperimental", "VerseExperimental_date_time$OverrideFactory");

	Params::UVerseExperimental_VerseExperimental_date_time_OverrideFactory_Params Parms{};

	Parms.__verse_0xFB48ED96__InitOverrideMap = __verse_0xFB48ED96__InitOverrideMap;
	Parms._ExprResultStack_0 = _ExprResultStack_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._ExprResultStack_2 = _ExprResultStack_2;
	Parms._ExprResult_3 = _ExprResult_3;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseExperimental.VerseExperimental.VerseExperimental_date_time$Factory
// (Static, HasOutParams)
// Parameters:
// struct FVerseExperimental_date_timeRetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

struct FVerseExperimental_date_time UVerseExperimental::VerseExperimental_date_time_Factory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseExperimental", "VerseExperimental_date_time$Factory");

	Params::UVerseExperimental_VerseExperimental_date_time_Factory_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseExperimental.VerseExperimental.$InitCDO
// (None)
// Parameters:

void UVerseExperimental::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseExperimental", "$InitCDO");

	Params::UVerseExperimental__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseExperimental.VerseExperimental_date_time_ticks
// (None)

class UClass* UVerseExperimental_date_time_ticks::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseExperimental_date_time_ticks");

	return Clss;
}


// VerseExperimental_date_time_ticks VerseExperimental.Default__VerseExperimental_date_time_ticks
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVerseExperimental_date_time_ticks* UVerseExperimental_date_time_ticks::GetDefaultObj()
{
	static class UVerseExperimental_date_time_ticks* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseExperimental_date_time_ticks*>(UVerseExperimental_date_time_ticks::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseExperimental.VerseExperimental_date_time_ticks.$InitCDO
// (None)
// Parameters:

void UVerseExperimental_date_time_ticks::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseExperimental_date_time_ticks", "$InitCDO");

	Params::UVerseExperimental_date_time_ticks__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}

}


