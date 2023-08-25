#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// VerseClass EpicGamesTemporary.$SolarisSignatureFunctionOuter
// (None)

class UClass* U_SolarisSignatureFunctionOuter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("$SolarisSignatureFunctionOuter");

	return Clss;
}


// $SolarisSignatureFunctionOuter EpicGamesTemporary.Default__$SolarisSignatureFunctionOuter
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class U_SolarisSignatureFunctionOuter* U_SolarisSignatureFunctionOuter::GetDefaultObj()
{
	static class U_SolarisSignatureFunctionOuter* Default = nullptr;

	if (!Default)
		Default = static_cast<U_SolarisSignatureFunctionOuter*>(U_SolarisSignatureFunctionOuter::StaticClass()->DefaultObject);

	return Default;
}


// VerseClass EpicGamesTemporary.SpatialMath
// (None)

class UClass* USpatialMath::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpatialMath");

	return Clss;
}


// SpatialMath EpicGamesTemporary.Default__SpatialMath
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class USpatialMath* USpatialMath::GetDefaultObj()
{
	static class USpatialMath* Default = nullptr;

	if (!Default)
		Default = static_cast<USpatialMath*>(USpatialMath::StaticClass()->DefaultObject);

	return Default;
}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Rprefix_U_2d_U_L_Nvector3_R
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FSpatialMath_vector3        __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSpatialMath_vector3        RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_0                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_1                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_2                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_3                                                    (HasGetValueTypeHash)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_4                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_5                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_6                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_7                                                    (HasGetValueTypeHash)

struct FSpatialMath_vector3 USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Rprefix_U_2d_U_L_Nvector3_R(const struct FSpatialMath_vector3& __verse_0xB2CDDD72_Argument, TMap<FVerseStringProperty_, uint8> _ExprResultStack_0, FVerseStringProperty_ _ExprResult_1, FVerseStringProperty_ _ExprResult_2, FVerseStringProperty_ _ExprResult_3, TMap<FVerseStringProperty_, uint8> _ExprResultStack_4, FVerseStringProperty_ _ExprResult_5, FVerseStringProperty_ _ExprResult_6, FVerseStringProperty_ _ExprResult_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Rprefix_U_2d_U_L_Nvector3_R");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Rprefix_U_2d_U_L_Nvector3_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._ExprResultStack_0 = _ExprResultStack_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._ExprResult_3 = _ExprResult_3;
	Parms._ExprResultStack_4 = _ExprResultStack_4;
	Parms._ExprResult_5 = _ExprResult_5;
	Parms._ExprResult_6 = _ExprResult_6;
	Parms._ExprResult_7 = _ExprResult_7;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Rprefix_U_2d_U_L_Nvector2_R
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FSpatialMath_vector2        __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSpatialMath_vector2        RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_0                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_1                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_2                                                    (HasGetValueTypeHash)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_3                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_4                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_5                                                    (HasGetValueTypeHash)

struct FSpatialMath_vector2 USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Rprefix_U_2d_U_L_Nvector2_R(const struct FSpatialMath_vector2& __verse_0xB2CDDD72_Argument, TMap<FVerseStringProperty_, uint8> _ExprResultStack_0, FVerseStringProperty_ _ExprResult_1, FVerseStringProperty_ _ExprResult_2, TMap<FVerseStringProperty_, uint8> _ExprResultStack_3, FVerseStringProperty_ _ExprResult_4, FVerseStringProperty_ _ExprResult_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Rprefix_U_2d_U_L_Nvector2_R");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Rprefix_U_2d_U_L_Nvector2_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._ExprResultStack_0 = _ExprResultStack_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._ExprResultStack_3 = _ExprResultStack_3;
	Parms._ExprResult_4 = _ExprResult_4;
	Parms._ExprResult_5 = _ExprResult_5;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Rprefix_U_2d_U_L_Nvector2i_R
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FSpatialMath_vector2i       __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSpatialMath_vector2i       RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_0                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_1                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_2                                                    (HasGetValueTypeHash)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_3                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_4                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_5                                                    (HasGetValueTypeHash)

struct FSpatialMath_vector2i USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Rprefix_U_2d_U_L_Nvector2i_R(const struct FSpatialMath_vector2i& __verse_0xB2CDDD72_Argument, TMap<FVerseStringProperty_, uint8> _ExprResultStack_0, FVerseStringProperty_ _ExprResult_1, FVerseStringProperty_ _ExprResult_2, TMap<FVerseStringProperty_, uint8> _ExprResultStack_3, FVerseStringProperty_ _ExprResult_4, FVerseStringProperty_ _ExprResult_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Rprefix_U_2d_U_L_Nvector2i_R");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Rprefix_U_2d_U_L_Nvector2i_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._ExprResultStack_0 = _ExprResultStack_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._ExprResultStack_3 = _ExprResultStack_3;
	Parms._ExprResult_4 = _ExprResult_4;
	Parms._ExprResult_5 = _ExprResult_5;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2f_U_L_Nvector2_M_Nfloat_R
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_Lvector2_Mfloat_R    __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FSpatialMath_vector2        RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_0                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_1                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_2                                                    (HasGetValueTypeHash)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_3                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_4                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_5                                                    (HasGetValueTypeHash)

struct FSpatialMath_vector2 USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2f_U_L_Nvector2_M_Nfloat_R(const struct FTuple_Lvector2_Mfloat_R& __verse_0xB2CDDD72_Argument, TMap<FVerseStringProperty_, uint8> _ExprResultStack_0, FVerseStringProperty_ _ExprResult_1, FVerseStringProperty_ _ExprResult_2, TMap<FVerseStringProperty_, uint8> _ExprResultStack_3, FVerseStringProperty_ _ExprResult_4, FVerseStringProperty_ _ExprResult_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2f_U_L_Nvector2_M_Nfloat_R");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2f_U_L_Nvector2_M_Nfloat_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._ExprResultStack_0 = _ExprResultStack_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._ExprResultStack_3 = _ExprResultStack_3;
	Parms._ExprResult_4 = _ExprResult_4;
	Parms._ExprResult_5 = _ExprResult_5;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2f_U_L_Nvector3_M_Nvector3_R
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_Lvector3_Mvector3_R  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FSpatialMath_vector3        RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_0                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_1                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_2                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_3                                                    (HasGetValueTypeHash)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_4                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_5                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_6                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_7                                                    (HasGetValueTypeHash)

struct FSpatialMath_vector3 USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2f_U_L_Nvector3_M_Nvector3_R(const struct FTuple_Lvector3_Mvector3_R& __verse_0xB2CDDD72_Argument, TMap<FVerseStringProperty_, uint8> _ExprResultStack_0, FVerseStringProperty_ _ExprResult_1, FVerseStringProperty_ _ExprResult_2, FVerseStringProperty_ _ExprResult_3, TMap<FVerseStringProperty_, uint8> _ExprResultStack_4, FVerseStringProperty_ _ExprResult_5, FVerseStringProperty_ _ExprResult_6, FVerseStringProperty_ _ExprResult_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2f_U_L_Nvector3_M_Nvector3_R");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2f_U_L_Nvector3_M_Nvector3_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._ExprResultStack_0 = _ExprResultStack_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._ExprResult_3 = _ExprResult_3;
	Parms._ExprResultStack_4 = _ExprResultStack_4;
	Parms._ExprResult_5 = _ExprResult_5;
	Parms._ExprResult_6 = _ExprResult_6;
	Parms._ExprResult_7 = _ExprResult_7;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2f_U_L_Nvector3_M_Nfloat_R
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_Lvector3_Mfloat_R    __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FSpatialMath_vector3        RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_0                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_1                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_2                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_3                                                    (HasGetValueTypeHash)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_4                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_5                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_6                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_7                                                    (HasGetValueTypeHash)

struct FSpatialMath_vector3 USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2f_U_L_Nvector3_M_Nfloat_R(const struct FTuple_Lvector3_Mfloat_R& __verse_0xB2CDDD72_Argument, TMap<FVerseStringProperty_, uint8> _ExprResultStack_0, FVerseStringProperty_ _ExprResult_1, FVerseStringProperty_ _ExprResult_2, FVerseStringProperty_ _ExprResult_3, TMap<FVerseStringProperty_, uint8> _ExprResultStack_4, FVerseStringProperty_ _ExprResult_5, FVerseStringProperty_ _ExprResult_6, FVerseStringProperty_ _ExprResult_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2f_U_L_Nvector3_M_Nfloat_R");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2f_U_L_Nvector3_M_Nfloat_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._ExprResultStack_0 = _ExprResultStack_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._ExprResult_3 = _ExprResult_3;
	Parms._ExprResultStack_4 = _ExprResultStack_4;
	Parms._ExprResult_5 = _ExprResult_5;
	Parms._ExprResult_6 = _ExprResult_6;
	Parms._ExprResult_7 = _ExprResult_7;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2f_U_L_Nvector2_M_Nvector2_R
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_Lvector2_Mvector2_R  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FSpatialMath_vector2        RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_0                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_1                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_2                                                    (HasGetValueTypeHash)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_3                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_4                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_5                                                    (HasGetValueTypeHash)

struct FSpatialMath_vector2 USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2f_U_L_Nvector2_M_Nvector2_R(const struct FTuple_Lvector2_Mvector2_R& __verse_0xB2CDDD72_Argument, TMap<FVerseStringProperty_, uint8> _ExprResultStack_0, FVerseStringProperty_ _ExprResult_1, FVerseStringProperty_ _ExprResult_2, TMap<FVerseStringProperty_, uint8> _ExprResultStack_3, FVerseStringProperty_ _ExprResult_4, FVerseStringProperty_ _ExprResult_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2f_U_L_Nvector2_M_Nvector2_R");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2f_U_L_Nvector2_M_Nvector2_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._ExprResultStack_0 = _ExprResultStack_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._ExprResultStack_3 = _ExprResultStack_3;
	Parms._ExprResult_4 = _ExprResult_4;
	Parms._ExprResult_5 = _ExprResult_5;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eUnrotateVector_U_L_Nrotation_M_Ntuple_L_R_M_Nvector3_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lrotation_Mtuple_L_R_Mvector3_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FSpatialMath_vector3        RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

struct FSpatialMath_vector3 USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eUnrotateVector_U_L_Nrotation_M_Ntuple_L_R_M_Nvector3_R(const struct FTuple_Lrotation_Mtuple_L_R_Mvector3_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eUnrotateVector_U_L_Nrotation_M_Ntuple_L_R_M_Nvector3_R");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eUnrotateVector_U_L_Nrotation_M_Ntuple_L_R_M_Nvector3_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eUnrotateBy_U_L_Nrotation_M_Ntuple_L_R_M_Nrotation_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lrotation_Mtuple_L_R_Mrotation_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FVerseRotation              RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor)

struct FVerseRotation USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eUnrotateBy_U_L_Nrotation_M_Ntuple_L_R_M_Nrotation_R(const struct FTuple_Lrotation_Mtuple_L_R_Mrotation_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eUnrotateBy_U_L_Nrotation_M_Ntuple_L_R_M_Nrotation_R");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eUnrotateBy_U_L_Nrotation_M_Ntuple_L_R_M_Nrotation_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eRotateVector_U_L_Nrotation_M_Ntuple_L_R_M_Nvector3_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lrotation_Mtuple_L_R_Mvector3_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FSpatialMath_vector3        RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

struct FSpatialMath_vector3 USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eRotateVector_U_L_Nrotation_M_Ntuple_L_R_M_Nvector3_R(const struct FTuple_Lrotation_Mtuple_L_R_Mvector3_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eRotateVector_U_L_Nrotation_M_Ntuple_L_R_M_Nvector3_R");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eRotateVector_U_L_Nrotation_M_Ntuple_L_R_M_Nvector3_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eRotateBy_U_L_Nrotation_M_Ntuple_L_R_M_Nrotation_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lrotation_Mtuple_L_R_Mrotation_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FVerseRotation              RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor)

struct FVerseRotation USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eRotateBy_U_L_Nrotation_M_Ntuple_L_R_M_Nrotation_R(const struct FTuple_Lrotation_Mtuple_L_R_Mrotation_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eRotateBy_U_L_Nrotation_M_Ntuple_L_R_M_Nrotation_R");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eRotateBy_U_L_Nrotation_M_Ntuple_L_R_M_Nrotation_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eMakeUnitVector_U_L_Nvector3_M_Ntuple_L_R_M_Ntuple_L_R_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lvector3_Mtuple_L_R_Mtuple_L_R_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

FOptionalProperty_ USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eMakeUnitVector_U_L_Nvector3_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lvector3_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eMakeUnitVector_U_L_Nvector3_M_Ntuple_L_R_M_Ntuple_L_R_R");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eMakeUnitVector_U_L_Nvector3_M_Ntuple_L_R_M_Ntuple_L_R_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eMakeUnitVector_U_L_Nvector2_M_Ntuple_L_R_M_Ntuple_L_R_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lvector2_Mtuple_L_R_Mtuple_L_R_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

FOptionalProperty_ USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eMakeUnitVector_U_L_Nvector2_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lvector2_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eMakeUnitVector_U_L_Nvector2_M_Ntuple_L_R_M_Ntuple_L_R_R");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eMakeUnitVector_U_L_Nvector2_M_Ntuple_L_R_M_Ntuple_L_R_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eLengthXY_U_L_Nvector3_M_Ntuple_L_R_M_Ntuple_L_R_R
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_Lvector3_Mtuple_L_R_Mtuple_L_R_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// double                             RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_0                                                        (HasGetValueTypeHash)
// double                             _ExprResultStack_1                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_2                                                        (HasGetValueTypeHash)
// struct FTuple_Lvector3_Mtuple_L_R_Mtuple_L_R_R_ExprResult_3                                                    (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_4                                                    (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_5                                                    (HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_6                                                        (HasGetValueTypeHash)
// double                             _ExprResultStack_7                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_8                                                        (HasGetValueTypeHash)
// struct FTuple_Lvector3_Mtuple_L_R_Mtuple_L_R_R_ExprResult_9                                                    (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_10                                                   (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_11                                                   (HasGetValueTypeHash)

double USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eLengthXY_U_L_Nvector3_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lvector3_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument, FVerseFunctionProperty_ _Callee_0, double _ExprResultStack_1, FVerseFunctionProperty_ _Callee_2, const struct FTuple_Lvector3_Mtuple_L_R_Mtuple_L_R_R& _ExprResult_3, const struct FTuple_L_R& _ExprResult_4, const struct FTuple_L_R& _ExprResult_5, FVerseFunctionProperty_ _Callee_6, double _ExprResultStack_7, FVerseFunctionProperty_ _Callee_8, const struct FTuple_Lvector3_Mtuple_L_R_Mtuple_L_R_R& _ExprResult_9, const struct FTuple_L_R& _ExprResult_10, const struct FTuple_L_R& _ExprResult_11)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eLengthXY_U_L_Nvector3_M_Ntuple_L_R_M_Ntuple_L_R_R");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eLengthXY_U_L_Nvector3_M_Ntuple_L_R_M_Ntuple_L_R_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._Callee_0 = _Callee_0;
	Parms._ExprResultStack_1 = _ExprResultStack_1;
	Parms._Callee_2 = _Callee_2;
	Parms._ExprResult_3 = _ExprResult_3;
	Parms._ExprResult_4 = _ExprResult_4;
	Parms._ExprResult_5 = _ExprResult_5;
	Parms._Callee_6 = _Callee_6;
	Parms._ExprResultStack_7 = _ExprResultStack_7;
	Parms._Callee_8 = _Callee_8;
	Parms._ExprResult_9 = _ExprResult_9;
	Parms._ExprResult_10 = _ExprResult_10;
	Parms._ExprResult_11 = _ExprResult_11;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eLengthSquaredXY_U_L_Nvector3_M_Ntuple_L_R_M_Ntuple_L_R_R
// (Final, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lvector3_Mtuple_L_R_Mtuple_L_R_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// double                             RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eLengthSquaredXY_U_L_Nvector3_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lvector3_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eLengthSquaredXY_U_L_Nvector3_M_Ntuple_L_R_M_Ntuple_L_R_R");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eLengthSquaredXY_U_L_Nvector3_M_Ntuple_L_R_M_Ntuple_L_R_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eLengthSquared_U_L_Nvector3_M_Ntuple_L_R_M_Ntuple_L_R_R
// (Final, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lvector3_Mtuple_L_R_Mtuple_L_R_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// double                             RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eLengthSquared_U_L_Nvector3_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lvector3_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eLengthSquared_U_L_Nvector3_M_Ntuple_L_R_M_Ntuple_L_R_R");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eLengthSquared_U_L_Nvector3_M_Ntuple_L_R_M_Ntuple_L_R_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eLengthSquared_U_L_Nvector2_M_Ntuple_L_R_M_Ntuple_L_R_R
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_Lvector2_Mtuple_L_R_Mtuple_L_R_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// double                             RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_0                                                        (HasGetValueTypeHash)
// struct FTuple_Lvector2_Mvector2_R  _ExprResult_1                                                    (HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_2                                                        (HasGetValueTypeHash)
// struct FTuple_Lvector2_Mvector2_R  _ExprResult_3                                                    (HasGetValueTypeHash)

double USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eLengthSquared_U_L_Nvector2_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lvector2_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument, FVerseFunctionProperty_ _Callee_0, const struct FTuple_Lvector2_Mvector2_R& _ExprResult_1, FVerseFunctionProperty_ _Callee_2, const struct FTuple_Lvector2_Mvector2_R& _ExprResult_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eLengthSquared_U_L_Nvector2_M_Ntuple_L_R_M_Ntuple_L_R_R");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eLengthSquared_U_L_Nvector2_M_Ntuple_L_R_M_Ntuple_L_R_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._Callee_0 = _Callee_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._Callee_2 = _Callee_2;
	Parms._ExprResult_3 = _ExprResult_3;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eLength_U_L_Nvector2_M_Ntuple_L_R_M_Ntuple_L_R_R
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_Lvector2_Mtuple_L_R_Mtuple_L_R_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// double                             RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_0                                                        (HasGetValueTypeHash)
// double                             _ExprResultStack_1                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_2                                                        (HasGetValueTypeHash)
// struct FTuple_Lvector2_Mtuple_L_R_Mtuple_L_R_R_ExprResult_3                                                    (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_4                                                    (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_5                                                    (HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_6                                                        (HasGetValueTypeHash)
// double                             _ExprResultStack_7                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_8                                                        (HasGetValueTypeHash)
// struct FTuple_Lvector2_Mtuple_L_R_Mtuple_L_R_R_ExprResult_9                                                    (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_10                                                   (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_11                                                   (HasGetValueTypeHash)

double USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eLength_U_L_Nvector2_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lvector2_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument, FVerseFunctionProperty_ _Callee_0, double _ExprResultStack_1, FVerseFunctionProperty_ _Callee_2, const struct FTuple_Lvector2_Mtuple_L_R_Mtuple_L_R_R& _ExprResult_3, const struct FTuple_L_R& _ExprResult_4, const struct FTuple_L_R& _ExprResult_5, FVerseFunctionProperty_ _Callee_6, double _ExprResultStack_7, FVerseFunctionProperty_ _Callee_8, const struct FTuple_Lvector2_Mtuple_L_R_Mtuple_L_R_R& _ExprResult_9, const struct FTuple_L_R& _ExprResult_10, const struct FTuple_L_R& _ExprResult_11)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eLength_U_L_Nvector2_M_Ntuple_L_R_M_Ntuple_L_R_R");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eLength_U_L_Nvector2_M_Ntuple_L_R_M_Ntuple_L_R_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._Callee_0 = _Callee_0;
	Parms._ExprResultStack_1 = _ExprResultStack_1;
	Parms._Callee_2 = _Callee_2;
	Parms._ExprResult_3 = _ExprResult_3;
	Parms._ExprResult_4 = _ExprResult_4;
	Parms._ExprResult_5 = _ExprResult_5;
	Parms._Callee_6 = _Callee_6;
	Parms._ExprResultStack_7 = _ExprResultStack_7;
	Parms._Callee_8 = _Callee_8;
	Parms._ExprResult_9 = _ExprResult_9;
	Parms._ExprResult_10 = _ExprResult_10;
	Parms._ExprResult_11 = _ExprResult_11;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eLength_U_L_Nvector3_M_Ntuple_L_R_M_Ntuple_L_R_R
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_Lvector3_Mtuple_L_R_Mtuple_L_R_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// double                             RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_0                                                        (HasGetValueTypeHash)
// double                             _ExprResultStack_1                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_2                                                        (HasGetValueTypeHash)
// struct FTuple_Lvector3_Mtuple_L_R_Mtuple_L_R_R_ExprResult_3                                                    (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_4                                                    (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_5                                                    (HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_6                                                        (HasGetValueTypeHash)
// double                             _ExprResultStack_7                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_8                                                        (HasGetValueTypeHash)
// struct FTuple_Lvector3_Mtuple_L_R_Mtuple_L_R_R_ExprResult_9                                                    (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_10                                                   (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_11                                                   (HasGetValueTypeHash)

double USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eLength_U_L_Nvector3_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lvector3_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument, FVerseFunctionProperty_ _Callee_0, double _ExprResultStack_1, FVerseFunctionProperty_ _Callee_2, const struct FTuple_Lvector3_Mtuple_L_R_Mtuple_L_R_R& _ExprResult_3, const struct FTuple_L_R& _ExprResult_4, const struct FTuple_L_R& _ExprResult_5, FVerseFunctionProperty_ _Callee_6, double _ExprResultStack_7, FVerseFunctionProperty_ _Callee_8, const struct FTuple_Lvector3_Mtuple_L_R_Mtuple_L_R_R& _ExprResult_9, const struct FTuple_L_R& _ExprResult_10, const struct FTuple_L_R& _ExprResult_11)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eLength_U_L_Nvector3_M_Ntuple_L_R_M_Ntuple_L_R_R");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eLength_U_L_Nvector3_M_Ntuple_L_R_M_Ntuple_L_R_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._Callee_0 = _Callee_0;
	Parms._ExprResultStack_1 = _ExprResultStack_1;
	Parms._Callee_2 = _Callee_2;
	Parms._ExprResult_3 = _ExprResult_3;
	Parms._ExprResult_4 = _ExprResult_4;
	Parms._ExprResult_5 = _ExprResult_5;
	Parms._Callee_6 = _Callee_6;
	Parms._ExprResultStack_7 = _ExprResultStack_7;
	Parms._Callee_8 = _Callee_8;
	Parms._ExprResult_9 = _ExprResult_9;
	Parms._ExprResult_10 = _ExprResult_10;
	Parms._ExprResult_11 = _ExprResult_11;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eIsFinite_U_L_Nvector2_M_Ntuple_L_R_M_Ntuple_L_R_R
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_Lvector2_Mtuple_L_R_Mtuple_L_R_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// enum class EVerseFalse             _ExprResult_0                                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSpatialMath_vector2        _ExprResult_1                                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_2                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_3                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_4                                                    (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_5                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_6                                                        (HasGetValueTypeHash)
// struct FTuple_Lfloat_Mtuple_L_R_Mtuple_L_R_R_ExprResult_7                                                    (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_8                                                    (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_9                                                    (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_10                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_11                                                       (HasGetValueTypeHash)
// struct FTuple_Lfloat_Mtuple_L_R_Mtuple_L_R_R_ExprResult_12                                                   (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_13                                                   (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_14                                                   (HasGetValueTypeHash)
// enum class EVerseFalse             _ExprResult_15                                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSpatialMath_vector2        _ExprResult_16                                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_17                                              (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_18                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_19                                                   (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_20                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_21                                                       (HasGetValueTypeHash)
// struct FTuple_Lfloat_Mtuple_L_R_Mtuple_L_R_R_ExprResult_22                                                   (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_23                                                   (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_24                                                   (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_25                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_26                                                       (HasGetValueTypeHash)
// struct FTuple_Lfloat_Mtuple_L_R_Mtuple_L_R_R_ExprResult_27                                                   (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_28                                                   (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_29                                                   (HasGetValueTypeHash)

FOptionalProperty_ USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eIsFinite_U_L_Nvector2_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lvector2_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument, enum class EVerseFalse _ExprResult_0, const struct FSpatialMath_vector2& _ExprResult_1, TMap<FVerseStringProperty_, uint8> _ExprResultStack_2, FVerseStringProperty_ _ExprResult_3, FVerseStringProperty_ _ExprResult_4, FOptionalProperty_ _ExprResultStack_5, FVerseFunctionProperty_ _Callee_6, const struct FTuple_Lfloat_Mtuple_L_R_Mtuple_L_R_R& _ExprResult_7, const struct FTuple_L_R& _ExprResult_8, const struct FTuple_L_R& _ExprResult_9, FOptionalProperty_ _ExprResultStack_10, FVerseFunctionProperty_ _Callee_11, const struct FTuple_Lfloat_Mtuple_L_R_Mtuple_L_R_R& _ExprResult_12, const struct FTuple_L_R& _ExprResult_13, const struct FTuple_L_R& _ExprResult_14, enum class EVerseFalse _ExprResult_15, const struct FSpatialMath_vector2& _ExprResult_16, TMap<FVerseStringProperty_, uint8> _ExprResultStack_17, FVerseStringProperty_ _ExprResult_18, FVerseStringProperty_ _ExprResult_19, FOptionalProperty_ _ExprResultStack_20, FVerseFunctionProperty_ _Callee_21, const struct FTuple_Lfloat_Mtuple_L_R_Mtuple_L_R_R& _ExprResult_22, const struct FTuple_L_R& _ExprResult_23, const struct FTuple_L_R& _ExprResult_24, FOptionalProperty_ _ExprResultStack_25, FVerseFunctionProperty_ _Callee_26, const struct FTuple_Lfloat_Mtuple_L_R_Mtuple_L_R_R& _ExprResult_27, const struct FTuple_L_R& _ExprResult_28, const struct FTuple_L_R& _ExprResult_29)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eIsFinite_U_L_Nvector2_M_Ntuple_L_R_M_Ntuple_L_R_R");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eIsFinite_U_L_Nvector2_M_Ntuple_L_R_M_Ntuple_L_R_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._ExprResult_0 = _ExprResult_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._ExprResultStack_2 = _ExprResultStack_2;
	Parms._ExprResult_3 = _ExprResult_3;
	Parms._ExprResult_4 = _ExprResult_4;
	Parms._ExprResultStack_5 = _ExprResultStack_5;
	Parms._Callee_6 = _Callee_6;
	Parms._ExprResult_7 = _ExprResult_7;
	Parms._ExprResult_8 = _ExprResult_8;
	Parms._ExprResult_9 = _ExprResult_9;
	Parms._ExprResultStack_10 = _ExprResultStack_10;
	Parms._Callee_11 = _Callee_11;
	Parms._ExprResult_12 = _ExprResult_12;
	Parms._ExprResult_13 = _ExprResult_13;
	Parms._ExprResult_14 = _ExprResult_14;
	Parms._ExprResult_15 = _ExprResult_15;
	Parms._ExprResult_16 = _ExprResult_16;
	Parms._ExprResultStack_17 = _ExprResultStack_17;
	Parms._ExprResult_18 = _ExprResult_18;
	Parms._ExprResult_19 = _ExprResult_19;
	Parms._ExprResultStack_20 = _ExprResultStack_20;
	Parms._Callee_21 = _Callee_21;
	Parms._ExprResult_22 = _ExprResult_22;
	Parms._ExprResult_23 = _ExprResult_23;
	Parms._ExprResult_24 = _ExprResult_24;
	Parms._ExprResultStack_25 = _ExprResultStack_25;
	Parms._Callee_26 = _Callee_26;
	Parms._ExprResult_27 = _ExprResult_27;
	Parms._ExprResult_28 = _ExprResult_28;
	Parms._ExprResult_29 = _ExprResult_29;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eIsFinite_U_L_Nvector3_M_Ntuple_L_R_M_Ntuple_L_R_R
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_Lvector3_Mtuple_L_R_Mtuple_L_R_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// enum class EVerseFalse             _ExprResult_0                                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSpatialMath_vector3        _ExprResult_1                                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_2                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_3                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_4                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_5                                                    (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_6                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_7                                                        (HasGetValueTypeHash)
// struct FTuple_Lfloat_Mtuple_L_R_Mtuple_L_R_R_ExprResult_8                                                    (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_9                                                    (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_10                                                   (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_11                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_12                                                       (HasGetValueTypeHash)
// struct FTuple_Lfloat_Mtuple_L_R_Mtuple_L_R_R_ExprResult_13                                                   (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_14                                                   (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_15                                                   (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_16                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_17                                                       (HasGetValueTypeHash)
// struct FTuple_Lfloat_Mtuple_L_R_Mtuple_L_R_R_ExprResult_18                                                   (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_19                                                   (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_20                                                   (HasGetValueTypeHash)
// enum class EVerseFalse             _ExprResult_21                                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSpatialMath_vector3        _ExprResult_22                                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_23                                              (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_24                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_25                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_26                                                   (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_27                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_28                                                       (HasGetValueTypeHash)
// struct FTuple_Lfloat_Mtuple_L_R_Mtuple_L_R_R_ExprResult_29                                                   (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_30                                                   (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_31                                                   (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_32                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_33                                                       (HasGetValueTypeHash)
// struct FTuple_Lfloat_Mtuple_L_R_Mtuple_L_R_R_ExprResult_34                                                   (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_35                                                   (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_36                                                   (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_37                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_38                                                       (HasGetValueTypeHash)
// struct FTuple_Lfloat_Mtuple_L_R_Mtuple_L_R_R_ExprResult_39                                                   (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_40                                                   (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_41                                                   (HasGetValueTypeHash)

FOptionalProperty_ USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eIsFinite_U_L_Nvector3_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lvector3_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument, enum class EVerseFalse _ExprResult_0, const struct FSpatialMath_vector3& _ExprResult_1, TMap<FVerseStringProperty_, uint8> _ExprResultStack_2, FVerseStringProperty_ _ExprResult_3, FVerseStringProperty_ _ExprResult_4, FVerseStringProperty_ _ExprResult_5, FOptionalProperty_ _ExprResultStack_6, FVerseFunctionProperty_ _Callee_7, const struct FTuple_Lfloat_Mtuple_L_R_Mtuple_L_R_R& _ExprResult_8, const struct FTuple_L_R& _ExprResult_9, const struct FTuple_L_R& _ExprResult_10, FOptionalProperty_ _ExprResultStack_11, FVerseFunctionProperty_ _Callee_12, const struct FTuple_Lfloat_Mtuple_L_R_Mtuple_L_R_R& _ExprResult_13, const struct FTuple_L_R& _ExprResult_14, const struct FTuple_L_R& _ExprResult_15, FOptionalProperty_ _ExprResultStack_16, FVerseFunctionProperty_ _Callee_17, const struct FTuple_Lfloat_Mtuple_L_R_Mtuple_L_R_R& _ExprResult_18, const struct FTuple_L_R& _ExprResult_19, const struct FTuple_L_R& _ExprResult_20, enum class EVerseFalse _ExprResult_21, const struct FSpatialMath_vector3& _ExprResult_22, TMap<FVerseStringProperty_, uint8> _ExprResultStack_23, FVerseStringProperty_ _ExprResult_24, FVerseStringProperty_ _ExprResult_25, FVerseStringProperty_ _ExprResult_26, FOptionalProperty_ _ExprResultStack_27, FVerseFunctionProperty_ _Callee_28, const struct FTuple_Lfloat_Mtuple_L_R_Mtuple_L_R_R& _ExprResult_29, const struct FTuple_L_R& _ExprResult_30, const struct FTuple_L_R& _ExprResult_31, FOptionalProperty_ _ExprResultStack_32, FVerseFunctionProperty_ _Callee_33, const struct FTuple_Lfloat_Mtuple_L_R_Mtuple_L_R_R& _ExprResult_34, const struct FTuple_L_R& _ExprResult_35, const struct FTuple_L_R& _ExprResult_36, FOptionalProperty_ _ExprResultStack_37, FVerseFunctionProperty_ _Callee_38, const struct FTuple_Lfloat_Mtuple_L_R_Mtuple_L_R_R& _ExprResult_39, const struct FTuple_L_R& _ExprResult_40, const struct FTuple_L_R& _ExprResult_41)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eIsFinite_U_L_Nvector3_M_Ntuple_L_R_M_Ntuple_L_R_R");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eIsFinite_U_L_Nvector3_M_Ntuple_L_R_M_Ntuple_L_R_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._ExprResult_0 = _ExprResult_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._ExprResultStack_2 = _ExprResultStack_2;
	Parms._ExprResult_3 = _ExprResult_3;
	Parms._ExprResult_4 = _ExprResult_4;
	Parms._ExprResult_5 = _ExprResult_5;
	Parms._ExprResultStack_6 = _ExprResultStack_6;
	Parms._Callee_7 = _Callee_7;
	Parms._ExprResult_8 = _ExprResult_8;
	Parms._ExprResult_9 = _ExprResult_9;
	Parms._ExprResult_10 = _ExprResult_10;
	Parms._ExprResultStack_11 = _ExprResultStack_11;
	Parms._Callee_12 = _Callee_12;
	Parms._ExprResult_13 = _ExprResult_13;
	Parms._ExprResult_14 = _ExprResult_14;
	Parms._ExprResult_15 = _ExprResult_15;
	Parms._ExprResultStack_16 = _ExprResultStack_16;
	Parms._Callee_17 = _Callee_17;
	Parms._ExprResult_18 = _ExprResult_18;
	Parms._ExprResult_19 = _ExprResult_19;
	Parms._ExprResult_20 = _ExprResult_20;
	Parms._ExprResult_21 = _ExprResult_21;
	Parms._ExprResult_22 = _ExprResult_22;
	Parms._ExprResultStack_23 = _ExprResultStack_23;
	Parms._ExprResult_24 = _ExprResult_24;
	Parms._ExprResult_25 = _ExprResult_25;
	Parms._ExprResult_26 = _ExprResult_26;
	Parms._ExprResultStack_27 = _ExprResultStack_27;
	Parms._Callee_28 = _Callee_28;
	Parms._ExprResult_29 = _ExprResult_29;
	Parms._ExprResult_30 = _ExprResult_30;
	Parms._ExprResult_31 = _ExprResult_31;
	Parms._ExprResultStack_32 = _ExprResultStack_32;
	Parms._Callee_33 = _Callee_33;
	Parms._ExprResult_34 = _ExprResult_34;
	Parms._ExprResult_35 = _ExprResult_35;
	Parms._ExprResult_36 = _ExprResult_36;
	Parms._ExprResultStack_37 = _ExprResultStack_37;
	Parms._Callee_38 = _Callee_38;
	Parms._ExprResult_39 = _ExprResult_39;
	Parms._ExprResult_40 = _ExprResult_40;
	Parms._ExprResult_41 = _ExprResult_41;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eIsFinite_U_L_Nrotation_M_Ntuple_L_R_M_Ntuple_L_R_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lrotation_Mtuple_L_R_Mtuple_L_R_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor)

FOptionalProperty_ USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eIsFinite_U_L_Nrotation_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lrotation_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eIsFinite_U_L_Nrotation_M_Ntuple_L_R_M_Ntuple_L_R_R");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eIsFinite_U_L_Nrotation_M_Ntuple_L_R_M_Ntuple_L_R_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eIsAlmostZero_U_L_Nvector2_M_Ntuple_L_R_M_Nfloat_R
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_Lvector2_Mtuple_L_R_Mfloat_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_0                                                    (NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_1                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_2                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_3                                                    (NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_4                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_5                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionalProperty_ USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eIsAlmostZero_U_L_Nvector2_M_Ntuple_L_R_M_Nfloat_R(const struct FTuple_Lvector2_Mtuple_L_R_Mfloat_R& __verse_0xB2CDDD72_Argument, uint8 _ExprResult_0, FOptionalProperty_ _ExprResultStack_1, FOptionalProperty_ _ExprResultStack_2, uint8 _ExprResult_3, FOptionalProperty_ _ExprResultStack_4, FOptionalProperty_ _ExprResultStack_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eIsAlmostZero_U_L_Nvector2_M_Ntuple_L_R_M_Nfloat_R");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eIsAlmostZero_U_L_Nvector2_M_Ntuple_L_R_M_Nfloat_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._ExprResult_0 = _ExprResult_0;
	Parms._ExprResultStack_1 = _ExprResultStack_1;
	Parms._ExprResultStack_2 = _ExprResultStack_2;
	Parms._ExprResult_3 = _ExprResult_3;
	Parms._ExprResultStack_4 = _ExprResultStack_4;
	Parms._ExprResultStack_5 = _ExprResultStack_5;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eIsAlmostZero_U_L_Nvector3_M_Ntuple_L_R_M_Nfloat_R
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_Lvector3_Mtuple_L_R_Mfloat_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_0                                                    (NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_1                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_2                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_3                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_4                                                    (NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_5                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_6                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_7                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionalProperty_ USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eIsAlmostZero_U_L_Nvector3_M_Ntuple_L_R_M_Nfloat_R(const struct FTuple_Lvector3_Mtuple_L_R_Mfloat_R& __verse_0xB2CDDD72_Argument, uint8 _ExprResult_0, FOptionalProperty_ _ExprResultStack_1, FOptionalProperty_ _ExprResultStack_2, FOptionalProperty_ _ExprResultStack_3, uint8 _ExprResult_4, FOptionalProperty_ _ExprResultStack_5, FOptionalProperty_ _ExprResultStack_6, FOptionalProperty_ _ExprResultStack_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eIsAlmostZero_U_L_Nvector3_M_Ntuple_L_R_M_Nfloat_R");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eIsAlmostZero_U_L_Nvector3_M_Ntuple_L_R_M_Nfloat_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._ExprResult_0 = _ExprResult_0;
	Parms._ExprResultStack_1 = _ExprResultStack_1;
	Parms._ExprResultStack_2 = _ExprResultStack_2;
	Parms._ExprResultStack_3 = _ExprResultStack_3;
	Parms._ExprResult_4 = _ExprResult_4;
	Parms._ExprResultStack_5 = _ExprResultStack_5;
	Parms._ExprResultStack_6 = _ExprResultStack_6;
	Parms._ExprResultStack_7 = _ExprResultStack_7;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eInvert_U_L_Nrotation_M_Ntuple_L_R_M_Ntuple_L_R_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lrotation_Mtuple_L_R_Mtuple_L_R_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FVerseRotation              RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor)

struct FVerseRotation USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eInvert_U_L_Nrotation_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lrotation_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eInvert_U_L_Nrotation_M_Ntuple_L_R_M_Ntuple_L_R_R");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eInvert_U_L_Nrotation_M_Ntuple_L_R_M_Ntuple_L_R_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eGetYawPitchRollDegrees_U_L_Nrotation_M_Ntuple_L_R_M_Ntuple_L_R_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lrotation_Mtuple_L_R_Mtuple_L_R_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// TArray<double>                     RetVal                                                           (Parm, OutParm, ReturnParm, ContainsInstancedReference)

TArray<double> USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eGetYawPitchRollDegrees_U_L_Nrotation_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lrotation_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eGetYawPitchRollDegrees_U_L_Nrotation_M_Ntuple_L_R_M_Ntuple_L_R_R");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eGetYawPitchRollDegrees_U_L_Nrotation_M_Ntuple_L_R_M_Ntuple_L_R_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eGetLocalUp_U_L_Nrotation_M_Ntuple_L_R_M_Ntuple_L_R_R
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_Lrotation_Mtuple_L_R_Mtuple_L_R_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FSpatialMath_vector3        RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// FVerseFunctionProperty_            _Callee_0                                                        (HasGetValueTypeHash)
// struct FTuple_Lrotation_Mtuple_L_R_Mvector3_R_ExprResult_1                                                    (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_2                                                    (HasGetValueTypeHash)
// struct FSpatialMath_vector3        _ExprResult_3                                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_4                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_5                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_6                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_7                                                    (HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_8                                                        (HasGetValueTypeHash)
// struct FTuple_Lrotation_Mtuple_L_R_Mvector3_R_ExprResult_9                                                    (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_10                                                   (HasGetValueTypeHash)
// struct FSpatialMath_vector3        _ExprResult_11                                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_12                                              (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_13                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_14                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_15                                                   (HasGetValueTypeHash)

struct FSpatialMath_vector3 USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eGetLocalUp_U_L_Nrotation_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lrotation_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument, FVerseFunctionProperty_ _Callee_0, const struct FTuple_Lrotation_Mtuple_L_R_Mvector3_R& _ExprResult_1, const struct FTuple_L_R& _ExprResult_2, const struct FSpatialMath_vector3& _ExprResult_3, TMap<FVerseStringProperty_, uint8> _ExprResultStack_4, FVerseStringProperty_ _ExprResult_5, FVerseStringProperty_ _ExprResult_6, FVerseStringProperty_ _ExprResult_7, FVerseFunctionProperty_ _Callee_8, const struct FTuple_Lrotation_Mtuple_L_R_Mvector3_R& _ExprResult_9, const struct FTuple_L_R& _ExprResult_10, const struct FSpatialMath_vector3& _ExprResult_11, TMap<FVerseStringProperty_, uint8> _ExprResultStack_12, FVerseStringProperty_ _ExprResult_13, FVerseStringProperty_ _ExprResult_14, FVerseStringProperty_ _ExprResult_15)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eGetLocalUp_U_L_Nrotation_M_Ntuple_L_R_M_Ntuple_L_R_R");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eGetLocalUp_U_L_Nrotation_M_Ntuple_L_R_M_Ntuple_L_R_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._Callee_0 = _Callee_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._ExprResult_3 = _ExprResult_3;
	Parms._ExprResultStack_4 = _ExprResultStack_4;
	Parms._ExprResult_5 = _ExprResult_5;
	Parms._ExprResult_6 = _ExprResult_6;
	Parms._ExprResult_7 = _ExprResult_7;
	Parms._Callee_8 = _Callee_8;
	Parms._ExprResult_9 = _ExprResult_9;
	Parms._ExprResult_10 = _ExprResult_10;
	Parms._ExprResult_11 = _ExprResult_11;
	Parms._ExprResultStack_12 = _ExprResultStack_12;
	Parms._ExprResult_13 = _ExprResult_13;
	Parms._ExprResult_14 = _ExprResult_14;
	Parms._ExprResult_15 = _ExprResult_15;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eGetLocalRight_U_L_Nrotation_M_Ntuple_L_R_M_Ntuple_L_R_R
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_Lrotation_Mtuple_L_R_Mtuple_L_R_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FSpatialMath_vector3        RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// FVerseFunctionProperty_            _Callee_0                                                        (HasGetValueTypeHash)
// struct FTuple_Lrotation_Mtuple_L_R_Mvector3_R_ExprResult_1                                                    (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_2                                                    (HasGetValueTypeHash)
// struct FSpatialMath_vector3        _ExprResult_3                                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_4                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_5                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_6                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_7                                                    (HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_8                                                        (HasGetValueTypeHash)
// struct FTuple_Lrotation_Mtuple_L_R_Mvector3_R_ExprResult_9                                                    (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_10                                                   (HasGetValueTypeHash)
// struct FSpatialMath_vector3        _ExprResult_11                                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_12                                              (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_13                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_14                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_15                                                   (HasGetValueTypeHash)

struct FSpatialMath_vector3 USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eGetLocalRight_U_L_Nrotation_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lrotation_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument, FVerseFunctionProperty_ _Callee_0, const struct FTuple_Lrotation_Mtuple_L_R_Mvector3_R& _ExprResult_1, const struct FTuple_L_R& _ExprResult_2, const struct FSpatialMath_vector3& _ExprResult_3, TMap<FVerseStringProperty_, uint8> _ExprResultStack_4, FVerseStringProperty_ _ExprResult_5, FVerseStringProperty_ _ExprResult_6, FVerseStringProperty_ _ExprResult_7, FVerseFunctionProperty_ _Callee_8, const struct FTuple_Lrotation_Mtuple_L_R_Mvector3_R& _ExprResult_9, const struct FTuple_L_R& _ExprResult_10, const struct FSpatialMath_vector3& _ExprResult_11, TMap<FVerseStringProperty_, uint8> _ExprResultStack_12, FVerseStringProperty_ _ExprResult_13, FVerseStringProperty_ _ExprResult_14, FVerseStringProperty_ _ExprResult_15)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eGetLocalRight_U_L_Nrotation_M_Ntuple_L_R_M_Ntuple_L_R_R");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eGetLocalRight_U_L_Nrotation_M_Ntuple_L_R_M_Ntuple_L_R_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._Callee_0 = _Callee_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._ExprResult_3 = _ExprResult_3;
	Parms._ExprResultStack_4 = _ExprResultStack_4;
	Parms._ExprResult_5 = _ExprResult_5;
	Parms._ExprResult_6 = _ExprResult_6;
	Parms._ExprResult_7 = _ExprResult_7;
	Parms._Callee_8 = _Callee_8;
	Parms._ExprResult_9 = _ExprResult_9;
	Parms._ExprResult_10 = _ExprResult_10;
	Parms._ExprResult_11 = _ExprResult_11;
	Parms._ExprResultStack_12 = _ExprResultStack_12;
	Parms._ExprResult_13 = _ExprResult_13;
	Parms._ExprResult_14 = _ExprResult_14;
	Parms._ExprResult_15 = _ExprResult_15;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eGetLocalForward_U_L_Nrotation_M_Ntuple_L_R_M_Ntuple_L_R_R
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_Lrotation_Mtuple_L_R_Mtuple_L_R_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FSpatialMath_vector3        RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// FVerseFunctionProperty_            _Callee_0                                                        (HasGetValueTypeHash)
// struct FTuple_Lrotation_Mtuple_L_R_Mvector3_R_ExprResult_1                                                    (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_2                                                    (HasGetValueTypeHash)
// struct FSpatialMath_vector3        _ExprResult_3                                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_4                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_5                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_6                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_7                                                    (HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_8                                                        (HasGetValueTypeHash)
// struct FTuple_Lrotation_Mtuple_L_R_Mvector3_R_ExprResult_9                                                    (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_10                                                   (HasGetValueTypeHash)
// struct FSpatialMath_vector3        _ExprResult_11                                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_12                                              (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_13                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_14                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_15                                                   (HasGetValueTypeHash)

struct FSpatialMath_vector3 USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eGetLocalForward_U_L_Nrotation_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lrotation_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument, FVerseFunctionProperty_ _Callee_0, const struct FTuple_Lrotation_Mtuple_L_R_Mvector3_R& _ExprResult_1, const struct FTuple_L_R& _ExprResult_2, const struct FSpatialMath_vector3& _ExprResult_3, TMap<FVerseStringProperty_, uint8> _ExprResultStack_4, FVerseStringProperty_ _ExprResult_5, FVerseStringProperty_ _ExprResult_6, FVerseStringProperty_ _ExprResult_7, FVerseFunctionProperty_ _Callee_8, const struct FTuple_Lrotation_Mtuple_L_R_Mvector3_R& _ExprResult_9, const struct FTuple_L_R& _ExprResult_10, const struct FSpatialMath_vector3& _ExprResult_11, TMap<FVerseStringProperty_, uint8> _ExprResultStack_12, FVerseStringProperty_ _ExprResult_13, FVerseStringProperty_ _ExprResult_14, FVerseStringProperty_ _ExprResult_15)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eGetLocalForward_U_L_Nrotation_M_Ntuple_L_R_M_Ntuple_L_R_R");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eGetLocalForward_U_L_Nrotation_M_Ntuple_L_R_M_Ntuple_L_R_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._Callee_0 = _Callee_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._ExprResult_3 = _ExprResult_3;
	Parms._ExprResultStack_4 = _ExprResultStack_4;
	Parms._ExprResult_5 = _ExprResult_5;
	Parms._ExprResult_6 = _ExprResult_6;
	Parms._ExprResult_7 = _ExprResult_7;
	Parms._Callee_8 = _Callee_8;
	Parms._ExprResult_9 = _ExprResult_9;
	Parms._ExprResult_10 = _ExprResult_10;
	Parms._ExprResult_11 = _ExprResult_11;
	Parms._ExprResultStack_12 = _ExprResultStack_12;
	Parms._ExprResult_13 = _ExprResult_13;
	Parms._ExprResult_14 = _ExprResult_14;
	Parms._ExprResult_15 = _ExprResult_15;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eGetAxis_U_L_Nrotation_M_Ntuple_L_R_M_Ntuple_L_R_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lrotation_Mtuple_L_R_Mtuple_L_R_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FSpatialMath_vector3        RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

struct FSpatialMath_vector3 USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eGetAxis_U_L_Nrotation_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lrotation_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eGetAxis_U_L_Nrotation_M_Ntuple_L_R_M_Ntuple_L_R_R");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eGetAxis_U_L_Nrotation_M_Ntuple_L_R_M_Ntuple_L_R_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eGetAngle_U_L_Nrotation_M_Ntuple_L_R_M_Ntuple_L_R_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lrotation_Mtuple_L_R_Mtuple_L_R_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// double                             RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eGetAngle_U_L_Nrotation_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lrotation_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eGetAngle_U_L_Nrotation_M_Ntuple_L_R_M_Ntuple_L_R_R");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eGetAngle_U_L_Nrotation_M_Ntuple_L_R_M_Ntuple_L_R_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eApplyYaw_U_L_Nrotation_M_Ntuple_L_R_M_Nfloat_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lrotation_Mtuple_L_R_Mfloat_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FVerseRotation              RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor)

struct FVerseRotation USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eApplyYaw_U_L_Nrotation_M_Ntuple_L_R_M_Nfloat_R(const struct FTuple_Lrotation_Mtuple_L_R_Mfloat_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eApplyYaw_U_L_Nrotation_M_Ntuple_L_R_M_Nfloat_R");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eApplyYaw_U_L_Nrotation_M_Ntuple_L_R_M_Nfloat_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eApplyWorldRotationZ_U_L_Nrotation_M_Ntuple_L_R_M_Nfloat_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lrotation_Mtuple_L_R_Mfloat_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FVerseRotation              RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor)

struct FVerseRotation USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eApplyWorldRotationZ_U_L_Nrotation_M_Ntuple_L_R_M_Nfloat_R(const struct FTuple_Lrotation_Mtuple_L_R_Mfloat_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eApplyWorldRotationZ_U_L_Nrotation_M_Ntuple_L_R_M_Nfloat_R");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eApplyWorldRotationZ_U_L_Nrotation_M_Ntuple_L_R_M_Nfloat_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eApplyWorldRotationY_U_L_Nrotation_M_Ntuple_L_R_M_Nfloat_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lrotation_Mtuple_L_R_Mfloat_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FVerseRotation              RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor)

struct FVerseRotation USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eApplyWorldRotationY_U_L_Nrotation_M_Ntuple_L_R_M_Nfloat_R(const struct FTuple_Lrotation_Mtuple_L_R_Mfloat_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eApplyWorldRotationY_U_L_Nrotation_M_Ntuple_L_R_M_Nfloat_R");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eApplyWorldRotationY_U_L_Nrotation_M_Ntuple_L_R_M_Nfloat_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eApplyWorldRotationX_U_L_Nrotation_M_Ntuple_L_R_M_Nfloat_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lrotation_Mtuple_L_R_Mfloat_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FVerseRotation              RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor)

struct FVerseRotation USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eApplyWorldRotationX_U_L_Nrotation_M_Ntuple_L_R_M_Nfloat_R(const struct FTuple_Lrotation_Mtuple_L_R_Mfloat_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eApplyWorldRotationX_U_L_Nrotation_M_Ntuple_L_R_M_Nfloat_R");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eApplyWorldRotationX_U_L_Nrotation_M_Ntuple_L_R_M_Nfloat_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eApplyRoll_U_L_Nrotation_M_Ntuple_L_R_M_Nfloat_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lrotation_Mtuple_L_R_Mfloat_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FVerseRotation              RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor)

struct FVerseRotation USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eApplyRoll_U_L_Nrotation_M_Ntuple_L_R_M_Nfloat_R(const struct FTuple_Lrotation_Mtuple_L_R_Mfloat_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eApplyRoll_U_L_Nrotation_M_Ntuple_L_R_M_Nfloat_R");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eApplyRoll_U_L_Nrotation_M_Ntuple_L_R_M_Nfloat_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eApplyPitch_U_L_Nrotation_M_Ntuple_L_R_M_Nfloat_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lrotation_Mtuple_L_R_Mfloat_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FVerseRotation              RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor)

struct FVerseRotation USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eApplyPitch_U_L_Nrotation_M_Ntuple_L_R_M_Nfloat_R(const struct FTuple_Lrotation_Mtuple_L_R_Mfloat_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eApplyPitch_U_L_Nrotation_M_Ntuple_L_R_M_Nfloat_R");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eApplyPitch_U_L_Nrotation_M_Ntuple_L_R_M_Nfloat_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eApplyLocalRotationZ_U_L_Nrotation_M_Ntuple_L_R_M_Nfloat_R
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_Lrotation_Mtuple_L_R_Mfloat_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FVerseRotation              RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor)
// FVerseFunctionProperty_            _Callee_0                                                        (HasGetValueTypeHash)
// struct FTuple_Lrotation_Mtuple_L_R_Mrotation_R_ExprResult_1                                                    (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_2                                                    (HasGetValueTypeHash)
// struct FVerseRotation              _ExprResultStack_3                                               (NoDestructor)
// FVerseFunctionProperty_            _Callee_4                                                        (HasGetValueTypeHash)
// struct FTuple_Lvector3_Mfloat_R    _ExprResult_5                                                    (HasGetValueTypeHash)
// struct FSpatialMath_vector3        _ExprResultStack_6                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// FVerseFunctionProperty_            _Callee_7                                                        (HasGetValueTypeHash)
// struct FTuple_Lrotation_Mtuple_L_R_Mtuple_L_R_R_ExprResult_8                                                    (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_9                                                    (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_10                                                   (HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_11                                                       (HasGetValueTypeHash)
// struct FTuple_Lrotation_Mtuple_L_R_Mrotation_R_ExprResult_12                                                   (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_13                                                   (HasGetValueTypeHash)
// struct FVerseRotation              _ExprResultStack_14                                              (NoDestructor)
// FVerseFunctionProperty_            _Callee_15                                                       (HasGetValueTypeHash)
// struct FTuple_Lvector3_Mfloat_R    _ExprResult_16                                                   (HasGetValueTypeHash)
// struct FSpatialMath_vector3        _ExprResultStack_17                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// FVerseFunctionProperty_            _Callee_18                                                       (HasGetValueTypeHash)
// struct FTuple_Lrotation_Mtuple_L_R_Mtuple_L_R_R_ExprResult_19                                                   (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_20                                                   (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_21                                                   (HasGetValueTypeHash)

struct FVerseRotation USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eApplyLocalRotationZ_U_L_Nrotation_M_Ntuple_L_R_M_Nfloat_R(const struct FTuple_Lrotation_Mtuple_L_R_Mfloat_R& __verse_0xB2CDDD72_Argument, FVerseFunctionProperty_ _Callee_0, const struct FTuple_Lrotation_Mtuple_L_R_Mrotation_R& _ExprResult_1, const struct FTuple_L_R& _ExprResult_2, const struct FVerseRotation& _ExprResultStack_3, FVerseFunctionProperty_ _Callee_4, const struct FTuple_Lvector3_Mfloat_R& _ExprResult_5, const struct FSpatialMath_vector3& _ExprResultStack_6, FVerseFunctionProperty_ _Callee_7, const struct FTuple_Lrotation_Mtuple_L_R_Mtuple_L_R_R& _ExprResult_8, const struct FTuple_L_R& _ExprResult_9, const struct FTuple_L_R& _ExprResult_10, FVerseFunctionProperty_ _Callee_11, const struct FTuple_Lrotation_Mtuple_L_R_Mrotation_R& _ExprResult_12, const struct FTuple_L_R& _ExprResult_13, const struct FVerseRotation& _ExprResultStack_14, FVerseFunctionProperty_ _Callee_15, const struct FTuple_Lvector3_Mfloat_R& _ExprResult_16, const struct FSpatialMath_vector3& _ExprResultStack_17, FVerseFunctionProperty_ _Callee_18, const struct FTuple_Lrotation_Mtuple_L_R_Mtuple_L_R_R& _ExprResult_19, const struct FTuple_L_R& _ExprResult_20, const struct FTuple_L_R& _ExprResult_21)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eApplyLocalRotationZ_U_L_Nrotation_M_Ntuple_L_R_M_Nfloat_R");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eApplyLocalRotationZ_U_L_Nrotation_M_Ntuple_L_R_M_Nfloat_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._Callee_0 = _Callee_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._ExprResultStack_3 = _ExprResultStack_3;
	Parms._Callee_4 = _Callee_4;
	Parms._ExprResult_5 = _ExprResult_5;
	Parms._ExprResultStack_6 = _ExprResultStack_6;
	Parms._Callee_7 = _Callee_7;
	Parms._ExprResult_8 = _ExprResult_8;
	Parms._ExprResult_9 = _ExprResult_9;
	Parms._ExprResult_10 = _ExprResult_10;
	Parms._Callee_11 = _Callee_11;
	Parms._ExprResult_12 = _ExprResult_12;
	Parms._ExprResult_13 = _ExprResult_13;
	Parms._ExprResultStack_14 = _ExprResultStack_14;
	Parms._Callee_15 = _Callee_15;
	Parms._ExprResult_16 = _ExprResult_16;
	Parms._ExprResultStack_17 = _ExprResultStack_17;
	Parms._Callee_18 = _Callee_18;
	Parms._ExprResult_19 = _ExprResult_19;
	Parms._ExprResult_20 = _ExprResult_20;
	Parms._ExprResult_21 = _ExprResult_21;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eApplyLocalRotationY_U_L_Nrotation_M_Ntuple_L_R_M_Nfloat_R
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_Lrotation_Mtuple_L_R_Mfloat_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FVerseRotation              RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor)
// FVerseFunctionProperty_            _Callee_0                                                        (HasGetValueTypeHash)
// struct FTuple_Lrotation_Mtuple_L_R_Mrotation_R_ExprResult_1                                                    (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_2                                                    (HasGetValueTypeHash)
// struct FVerseRotation              _ExprResultStack_3                                               (NoDestructor)
// FVerseFunctionProperty_            _Callee_4                                                        (HasGetValueTypeHash)
// struct FTuple_Lvector3_Mfloat_R    _ExprResult_5                                                    (HasGetValueTypeHash)
// struct FSpatialMath_vector3        _ExprResultStack_6                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// FVerseFunctionProperty_            _Callee_7                                                        (HasGetValueTypeHash)
// struct FTuple_Lrotation_Mtuple_L_R_Mtuple_L_R_R_ExprResult_8                                                    (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_9                                                    (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_10                                                   (HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_11                                                       (HasGetValueTypeHash)
// struct FTuple_Lrotation_Mtuple_L_R_Mrotation_R_ExprResult_12                                                   (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_13                                                   (HasGetValueTypeHash)
// struct FVerseRotation              _ExprResultStack_14                                              (NoDestructor)
// FVerseFunctionProperty_            _Callee_15                                                       (HasGetValueTypeHash)
// struct FTuple_Lvector3_Mfloat_R    _ExprResult_16                                                   (HasGetValueTypeHash)
// struct FSpatialMath_vector3        _ExprResultStack_17                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// FVerseFunctionProperty_            _Callee_18                                                       (HasGetValueTypeHash)
// struct FTuple_Lrotation_Mtuple_L_R_Mtuple_L_R_R_ExprResult_19                                                   (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_20                                                   (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_21                                                   (HasGetValueTypeHash)

struct FVerseRotation USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eApplyLocalRotationY_U_L_Nrotation_M_Ntuple_L_R_M_Nfloat_R(const struct FTuple_Lrotation_Mtuple_L_R_Mfloat_R& __verse_0xB2CDDD72_Argument, FVerseFunctionProperty_ _Callee_0, const struct FTuple_Lrotation_Mtuple_L_R_Mrotation_R& _ExprResult_1, const struct FTuple_L_R& _ExprResult_2, const struct FVerseRotation& _ExprResultStack_3, FVerseFunctionProperty_ _Callee_4, const struct FTuple_Lvector3_Mfloat_R& _ExprResult_5, const struct FSpatialMath_vector3& _ExprResultStack_6, FVerseFunctionProperty_ _Callee_7, const struct FTuple_Lrotation_Mtuple_L_R_Mtuple_L_R_R& _ExprResult_8, const struct FTuple_L_R& _ExprResult_9, const struct FTuple_L_R& _ExprResult_10, FVerseFunctionProperty_ _Callee_11, const struct FTuple_Lrotation_Mtuple_L_R_Mrotation_R& _ExprResult_12, const struct FTuple_L_R& _ExprResult_13, const struct FVerseRotation& _ExprResultStack_14, FVerseFunctionProperty_ _Callee_15, const struct FTuple_Lvector3_Mfloat_R& _ExprResult_16, const struct FSpatialMath_vector3& _ExprResultStack_17, FVerseFunctionProperty_ _Callee_18, const struct FTuple_Lrotation_Mtuple_L_R_Mtuple_L_R_R& _ExprResult_19, const struct FTuple_L_R& _ExprResult_20, const struct FTuple_L_R& _ExprResult_21)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eApplyLocalRotationY_U_L_Nrotation_M_Ntuple_L_R_M_Nfloat_R");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eApplyLocalRotationY_U_L_Nrotation_M_Ntuple_L_R_M_Nfloat_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._Callee_0 = _Callee_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._ExprResultStack_3 = _ExprResultStack_3;
	Parms._Callee_4 = _Callee_4;
	Parms._ExprResult_5 = _ExprResult_5;
	Parms._ExprResultStack_6 = _ExprResultStack_6;
	Parms._Callee_7 = _Callee_7;
	Parms._ExprResult_8 = _ExprResult_8;
	Parms._ExprResult_9 = _ExprResult_9;
	Parms._ExprResult_10 = _ExprResult_10;
	Parms._Callee_11 = _Callee_11;
	Parms._ExprResult_12 = _ExprResult_12;
	Parms._ExprResult_13 = _ExprResult_13;
	Parms._ExprResultStack_14 = _ExprResultStack_14;
	Parms._Callee_15 = _Callee_15;
	Parms._ExprResult_16 = _ExprResult_16;
	Parms._ExprResultStack_17 = _ExprResultStack_17;
	Parms._Callee_18 = _Callee_18;
	Parms._ExprResult_19 = _ExprResult_19;
	Parms._ExprResult_20 = _ExprResult_20;
	Parms._ExprResult_21 = _ExprResult_21;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eApplyLocalRotationX_U_L_Nrotation_M_Ntuple_L_R_M_Nfloat_R
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_Lrotation_Mtuple_L_R_Mfloat_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FVerseRotation              RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor)
// FVerseFunctionProperty_            _Callee_0                                                        (HasGetValueTypeHash)
// struct FTuple_Lrotation_Mtuple_L_R_Mrotation_R_ExprResult_1                                                    (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_2                                                    (HasGetValueTypeHash)
// struct FVerseRotation              _ExprResultStack_3                                               (NoDestructor)
// FVerseFunctionProperty_            _Callee_4                                                        (HasGetValueTypeHash)
// struct FTuple_Lvector3_Mfloat_R    _ExprResult_5                                                    (HasGetValueTypeHash)
// struct FSpatialMath_vector3        _ExprResultStack_6                                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// FVerseFunctionProperty_            _Callee_7                                                        (HasGetValueTypeHash)
// struct FTuple_Lrotation_Mtuple_L_R_Mtuple_L_R_R_ExprResult_8                                                    (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_9                                                    (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_10                                                   (HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_11                                                       (HasGetValueTypeHash)
// struct FTuple_Lrotation_Mtuple_L_R_Mrotation_R_ExprResult_12                                                   (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_13                                                   (HasGetValueTypeHash)
// struct FVerseRotation              _ExprResultStack_14                                              (NoDestructor)
// FVerseFunctionProperty_            _Callee_15                                                       (HasGetValueTypeHash)
// struct FTuple_Lvector3_Mfloat_R    _ExprResult_16                                                   (HasGetValueTypeHash)
// struct FSpatialMath_vector3        _ExprResultStack_17                                              (ZeroConstructor, IsPlainOldData, NoDestructor)
// FVerseFunctionProperty_            _Callee_18                                                       (HasGetValueTypeHash)
// struct FTuple_Lrotation_Mtuple_L_R_Mtuple_L_R_R_ExprResult_19                                                   (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_20                                                   (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_21                                                   (HasGetValueTypeHash)

struct FVerseRotation USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eApplyLocalRotationX_U_L_Nrotation_M_Ntuple_L_R_M_Nfloat_R(const struct FTuple_Lrotation_Mtuple_L_R_Mfloat_R& __verse_0xB2CDDD72_Argument, FVerseFunctionProperty_ _Callee_0, const struct FTuple_Lrotation_Mtuple_L_R_Mrotation_R& _ExprResult_1, const struct FTuple_L_R& _ExprResult_2, const struct FVerseRotation& _ExprResultStack_3, FVerseFunctionProperty_ _Callee_4, const struct FTuple_Lvector3_Mfloat_R& _ExprResult_5, const struct FSpatialMath_vector3& _ExprResultStack_6, FVerseFunctionProperty_ _Callee_7, const struct FTuple_Lrotation_Mtuple_L_R_Mtuple_L_R_R& _ExprResult_8, const struct FTuple_L_R& _ExprResult_9, const struct FTuple_L_R& _ExprResult_10, FVerseFunctionProperty_ _Callee_11, const struct FTuple_Lrotation_Mtuple_L_R_Mrotation_R& _ExprResult_12, const struct FTuple_L_R& _ExprResult_13, const struct FVerseRotation& _ExprResultStack_14, FVerseFunctionProperty_ _Callee_15, const struct FTuple_Lvector3_Mfloat_R& _ExprResult_16, const struct FSpatialMath_vector3& _ExprResultStack_17, FVerseFunctionProperty_ _Callee_18, const struct FTuple_Lrotation_Mtuple_L_R_Mtuple_L_R_R& _ExprResult_19, const struct FTuple_L_R& _ExprResult_20, const struct FTuple_L_R& _ExprResult_21)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eApplyLocalRotationX_U_L_Nrotation_M_Ntuple_L_R_M_Nfloat_R");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2eApplyLocalRotationX_U_L_Nrotation_M_Ntuple_L_R_M_Nfloat_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._Callee_0 = _Callee_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._ExprResultStack_3 = _ExprResultStack_3;
	Parms._Callee_4 = _Callee_4;
	Parms._ExprResult_5 = _ExprResult_5;
	Parms._ExprResultStack_6 = _ExprResultStack_6;
	Parms._Callee_7 = _Callee_7;
	Parms._ExprResult_8 = _ExprResult_8;
	Parms._ExprResult_9 = _ExprResult_9;
	Parms._ExprResult_10 = _ExprResult_10;
	Parms._Callee_11 = _Callee_11;
	Parms._ExprResult_12 = _ExprResult_12;
	Parms._ExprResult_13 = _ExprResult_13;
	Parms._ExprResultStack_14 = _ExprResultStack_14;
	Parms._Callee_15 = _Callee_15;
	Parms._ExprResult_16 = _ExprResult_16;
	Parms._ExprResultStack_17 = _ExprResultStack_17;
	Parms._Callee_18 = _Callee_18;
	Parms._ExprResult_19 = _ExprResult_19;
	Parms._ExprResult_20 = _ExprResult_20;
	Parms._ExprResult_21 = _ExprResult_21;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2d_U_L_Nvector2i_M_Nvector2i_R
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_Lvector2i_Mvector2i_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FSpatialMath_vector2i       RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_0                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_1                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_2                                                    (HasGetValueTypeHash)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_3                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_4                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_5                                                    (HasGetValueTypeHash)

struct FSpatialMath_vector2i USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2d_U_L_Nvector2i_M_Nvector2i_R(const struct FTuple_Lvector2i_Mvector2i_R& __verse_0xB2CDDD72_Argument, TMap<FVerseStringProperty_, uint8> _ExprResultStack_0, FVerseStringProperty_ _ExprResult_1, FVerseStringProperty_ _ExprResult_2, TMap<FVerseStringProperty_, uint8> _ExprResultStack_3, FVerseStringProperty_ _ExprResult_4, FVerseStringProperty_ _ExprResult_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2d_U_L_Nvector2i_M_Nvector2i_R");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2d_U_L_Nvector2i_M_Nvector2i_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._ExprResultStack_0 = _ExprResultStack_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._ExprResultStack_3 = _ExprResultStack_3;
	Parms._ExprResult_4 = _ExprResult_4;
	Parms._ExprResult_5 = _ExprResult_5;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2d_U_L_Nvector3_M_Nvector3_R
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_Lvector3_Mvector3_R  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FSpatialMath_vector3        RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_0                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_1                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_2                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_3                                                    (HasGetValueTypeHash)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_4                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_5                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_6                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_7                                                    (HasGetValueTypeHash)

struct FSpatialMath_vector3 USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2d_U_L_Nvector3_M_Nvector3_R(const struct FTuple_Lvector3_Mvector3_R& __verse_0xB2CDDD72_Argument, TMap<FVerseStringProperty_, uint8> _ExprResultStack_0, FVerseStringProperty_ _ExprResult_1, FVerseStringProperty_ _ExprResult_2, FVerseStringProperty_ _ExprResult_3, TMap<FVerseStringProperty_, uint8> _ExprResultStack_4, FVerseStringProperty_ _ExprResult_5, FVerseStringProperty_ _ExprResult_6, FVerseStringProperty_ _ExprResult_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2d_U_L_Nvector3_M_Nvector3_R");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2d_U_L_Nvector3_M_Nvector3_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._ExprResultStack_0 = _ExprResultStack_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._ExprResult_3 = _ExprResult_3;
	Parms._ExprResultStack_4 = _ExprResultStack_4;
	Parms._ExprResult_5 = _ExprResult_5;
	Parms._ExprResult_6 = _ExprResult_6;
	Parms._ExprResult_7 = _ExprResult_7;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2d_U_L_Nvector2_M_Nvector2_R
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_Lvector2_Mvector2_R  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FSpatialMath_vector2        RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_0                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_1                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_2                                                    (HasGetValueTypeHash)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_3                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_4                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_5                                                    (HasGetValueTypeHash)

struct FSpatialMath_vector2 USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2d_U_L_Nvector2_M_Nvector2_R(const struct FTuple_Lvector2_Mvector2_R& __verse_0xB2CDDD72_Argument, TMap<FVerseStringProperty_, uint8> _ExprResultStack_0, FVerseStringProperty_ _ExprResult_1, FVerseStringProperty_ _ExprResult_2, TMap<FVerseStringProperty_, uint8> _ExprResultStack_3, FVerseStringProperty_ _ExprResult_4, FVerseStringProperty_ _ExprResult_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2d_U_L_Nvector2_M_Nvector2_R");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2d_U_L_Nvector2_M_Nvector2_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._ExprResultStack_0 = _ExprResultStack_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._ExprResultStack_3 = _ExprResultStack_3;
	Parms._ExprResult_4 = _ExprResult_4;
	Parms._ExprResult_5 = _ExprResult_5;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2b_U_L_Nvector2i_M_Nvector2i_R
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_Lvector2i_Mvector2i_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FSpatialMath_vector2i       RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_0                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_1                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_2                                                    (HasGetValueTypeHash)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_3                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_4                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_5                                                    (HasGetValueTypeHash)

struct FSpatialMath_vector2i USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2b_U_L_Nvector2i_M_Nvector2i_R(const struct FTuple_Lvector2i_Mvector2i_R& __verse_0xB2CDDD72_Argument, TMap<FVerseStringProperty_, uint8> _ExprResultStack_0, FVerseStringProperty_ _ExprResult_1, FVerseStringProperty_ _ExprResult_2, TMap<FVerseStringProperty_, uint8> _ExprResultStack_3, FVerseStringProperty_ _ExprResult_4, FVerseStringProperty_ _ExprResult_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2b_U_L_Nvector2i_M_Nvector2i_R");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2b_U_L_Nvector2i_M_Nvector2i_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._ExprResultStack_0 = _ExprResultStack_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._ExprResultStack_3 = _ExprResultStack_3;
	Parms._ExprResult_4 = _ExprResult_4;
	Parms._ExprResult_5 = _ExprResult_5;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2b_U_L_Nvector3_M_Nvector3_R
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_Lvector3_Mvector3_R  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FSpatialMath_vector3        RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_0                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_1                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_2                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_3                                                    (HasGetValueTypeHash)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_4                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_5                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_6                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_7                                                    (HasGetValueTypeHash)

struct FSpatialMath_vector3 USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2b_U_L_Nvector3_M_Nvector3_R(const struct FTuple_Lvector3_Mvector3_R& __verse_0xB2CDDD72_Argument, TMap<FVerseStringProperty_, uint8> _ExprResultStack_0, FVerseStringProperty_ _ExprResult_1, FVerseStringProperty_ _ExprResult_2, FVerseStringProperty_ _ExprResult_3, TMap<FVerseStringProperty_, uint8> _ExprResultStack_4, FVerseStringProperty_ _ExprResult_5, FVerseStringProperty_ _ExprResult_6, FVerseStringProperty_ _ExprResult_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2b_U_L_Nvector3_M_Nvector3_R");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2b_U_L_Nvector3_M_Nvector3_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._ExprResultStack_0 = _ExprResultStack_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._ExprResult_3 = _ExprResult_3;
	Parms._ExprResultStack_4 = _ExprResultStack_4;
	Parms._ExprResult_5 = _ExprResult_5;
	Parms._ExprResult_6 = _ExprResult_6;
	Parms._ExprResult_7 = _ExprResult_7;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2b_U_L_Nvector2_M_Nvector2_R
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_Lvector2_Mvector2_R  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FSpatialMath_vector2        RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_0                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_1                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_2                                                    (HasGetValueTypeHash)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_3                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_4                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_5                                                    (HasGetValueTypeHash)

struct FSpatialMath_vector2 USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2b_U_L_Nvector2_M_Nvector2_R(const struct FTuple_Lvector2_Mvector2_R& __verse_0xB2CDDD72_Argument, TMap<FVerseStringProperty_, uint8> _ExprResultStack_0, FVerseStringProperty_ _ExprResult_1, FVerseStringProperty_ _ExprResult_2, TMap<FVerseStringProperty_, uint8> _ExprResultStack_3, FVerseStringProperty_ _ExprResult_4, FVerseStringProperty_ _ExprResult_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2b_U_L_Nvector2_M_Nvector2_R");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2b_U_L_Nvector2_M_Nvector2_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._ExprResultStack_0 = _ExprResultStack_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._ExprResultStack_3 = _ExprResultStack_3;
	Parms._ExprResult_4 = _ExprResult_4;
	Parms._ExprResult_5 = _ExprResult_5;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2a_U_L_Nvector2i_M_Nint_R
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_Lvector2i_Mint_R     __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FSpatialMath_vector2i       RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_0                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_1                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_2                                                    (HasGetValueTypeHash)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_3                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_4                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_5                                                    (HasGetValueTypeHash)

struct FSpatialMath_vector2i USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2a_U_L_Nvector2i_M_Nint_R(const struct FTuple_Lvector2i_Mint_R& __verse_0xB2CDDD72_Argument, TMap<FVerseStringProperty_, uint8> _ExprResultStack_0, FVerseStringProperty_ _ExprResult_1, FVerseStringProperty_ _ExprResult_2, TMap<FVerseStringProperty_, uint8> _ExprResultStack_3, FVerseStringProperty_ _ExprResult_4, FVerseStringProperty_ _ExprResult_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2a_U_L_Nvector2i_M_Nint_R");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2a_U_L_Nvector2i_M_Nint_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._ExprResultStack_0 = _ExprResultStack_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._ExprResultStack_3 = _ExprResultStack_3;
	Parms._ExprResult_4 = _ExprResult_4;
	Parms._ExprResult_5 = _ExprResult_5;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2a_U_L_Nfloat_M_Nvector3_R
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_Lfloat_Mvector3_R    __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FSpatialMath_vector3        RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_0                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_1                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_2                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_3                                                    (HasGetValueTypeHash)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_4                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_5                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_6                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_7                                                    (HasGetValueTypeHash)

struct FSpatialMath_vector3 USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2a_U_L_Nfloat_M_Nvector3_R(const struct FTuple_Lfloat_Mvector3_R& __verse_0xB2CDDD72_Argument, TMap<FVerseStringProperty_, uint8> _ExprResultStack_0, FVerseStringProperty_ _ExprResult_1, FVerseStringProperty_ _ExprResult_2, FVerseStringProperty_ _ExprResult_3, TMap<FVerseStringProperty_, uint8> _ExprResultStack_4, FVerseStringProperty_ _ExprResult_5, FVerseStringProperty_ _ExprResult_6, FVerseStringProperty_ _ExprResult_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2a_U_L_Nfloat_M_Nvector3_R");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2a_U_L_Nfloat_M_Nvector3_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._ExprResultStack_0 = _ExprResultStack_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._ExprResult_3 = _ExprResult_3;
	Parms._ExprResultStack_4 = _ExprResultStack_4;
	Parms._ExprResult_5 = _ExprResult_5;
	Parms._ExprResult_6 = _ExprResult_6;
	Parms._ExprResult_7 = _ExprResult_7;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2a_U_L_Nvector3_M_Nfloat_R
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_Lvector3_Mfloat_R    __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FSpatialMath_vector3        RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_0                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_1                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_2                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_3                                                    (HasGetValueTypeHash)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_4                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_5                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_6                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_7                                                    (HasGetValueTypeHash)

struct FSpatialMath_vector3 USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2a_U_L_Nvector3_M_Nfloat_R(const struct FTuple_Lvector3_Mfloat_R& __verse_0xB2CDDD72_Argument, TMap<FVerseStringProperty_, uint8> _ExprResultStack_0, FVerseStringProperty_ _ExprResult_1, FVerseStringProperty_ _ExprResult_2, FVerseStringProperty_ _ExprResult_3, TMap<FVerseStringProperty_, uint8> _ExprResultStack_4, FVerseStringProperty_ _ExprResult_5, FVerseStringProperty_ _ExprResult_6, FVerseStringProperty_ _ExprResult_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2a_U_L_Nvector3_M_Nfloat_R");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2a_U_L_Nvector3_M_Nfloat_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._ExprResultStack_0 = _ExprResultStack_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._ExprResult_3 = _ExprResult_3;
	Parms._ExprResultStack_4 = _ExprResultStack_4;
	Parms._ExprResult_5 = _ExprResult_5;
	Parms._ExprResult_6 = _ExprResult_6;
	Parms._ExprResult_7 = _ExprResult_7;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2a_U_L_Nfloat_M_Nvector2_R
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_Lfloat_Mvector2_R    __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FSpatialMath_vector2        RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_0                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_1                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_2                                                    (HasGetValueTypeHash)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_3                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_4                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_5                                                    (HasGetValueTypeHash)

struct FSpatialMath_vector2 USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2a_U_L_Nfloat_M_Nvector2_R(const struct FTuple_Lfloat_Mvector2_R& __verse_0xB2CDDD72_Argument, TMap<FVerseStringProperty_, uint8> _ExprResultStack_0, FVerseStringProperty_ _ExprResult_1, FVerseStringProperty_ _ExprResult_2, TMap<FVerseStringProperty_, uint8> _ExprResultStack_3, FVerseStringProperty_ _ExprResult_4, FVerseStringProperty_ _ExprResult_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2a_U_L_Nfloat_M_Nvector2_R");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2a_U_L_Nfloat_M_Nvector2_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._ExprResultStack_0 = _ExprResultStack_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._ExprResultStack_3 = _ExprResultStack_3;
	Parms._ExprResult_4 = _ExprResult_4;
	Parms._ExprResult_5 = _ExprResult_5;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2a_U_L_Nvector3_M_Nvector3_R
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_Lvector3_Mvector3_R  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FSpatialMath_vector3        RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_0                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_1                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_2                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_3                                                    (HasGetValueTypeHash)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_4                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_5                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_6                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_7                                                    (HasGetValueTypeHash)

struct FSpatialMath_vector3 USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2a_U_L_Nvector3_M_Nvector3_R(const struct FTuple_Lvector3_Mvector3_R& __verse_0xB2CDDD72_Argument, TMap<FVerseStringProperty_, uint8> _ExprResultStack_0, FVerseStringProperty_ _ExprResult_1, FVerseStringProperty_ _ExprResult_2, FVerseStringProperty_ _ExprResult_3, TMap<FVerseStringProperty_, uint8> _ExprResultStack_4, FVerseStringProperty_ _ExprResult_5, FVerseStringProperty_ _ExprResult_6, FVerseStringProperty_ _ExprResult_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2a_U_L_Nvector3_M_Nvector3_R");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2a_U_L_Nvector3_M_Nvector3_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._ExprResultStack_0 = _ExprResultStack_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._ExprResult_3 = _ExprResult_3;
	Parms._ExprResultStack_4 = _ExprResultStack_4;
	Parms._ExprResult_5 = _ExprResult_5;
	Parms._ExprResult_6 = _ExprResult_6;
	Parms._ExprResult_7 = _ExprResult_7;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2a_U_L_Nint_M_Nvector2i_R
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_Lint_Mvector2i_R     __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FSpatialMath_vector2i       RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_0                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_1                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_2                                                    (HasGetValueTypeHash)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_3                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_4                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_5                                                    (HasGetValueTypeHash)

struct FSpatialMath_vector2i USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2a_U_L_Nint_M_Nvector2i_R(const struct FTuple_Lint_Mvector2i_R& __verse_0xB2CDDD72_Argument, TMap<FVerseStringProperty_, uint8> _ExprResultStack_0, FVerseStringProperty_ _ExprResult_1, FVerseStringProperty_ _ExprResult_2, TMap<FVerseStringProperty_, uint8> _ExprResultStack_3, FVerseStringProperty_ _ExprResult_4, FVerseStringProperty_ _ExprResult_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2a_U_L_Nint_M_Nvector2i_R");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2a_U_L_Nint_M_Nvector2i_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._ExprResultStack_0 = _ExprResultStack_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._ExprResultStack_3 = _ExprResultStack_3;
	Parms._ExprResult_4 = _ExprResult_4;
	Parms._ExprResult_5 = _ExprResult_5;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2a_U_L_Nvector2_M_Nfloat_R
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_Lvector2_Mfloat_R    __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FSpatialMath_vector2        RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_0                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_1                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_2                                                    (HasGetValueTypeHash)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_3                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_4                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_5                                                    (HasGetValueTypeHash)

struct FSpatialMath_vector2 USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2a_U_L_Nvector2_M_Nfloat_R(const struct FTuple_Lvector2_Mfloat_R& __verse_0xB2CDDD72_Argument, TMap<FVerseStringProperty_, uint8> _ExprResultStack_0, FVerseStringProperty_ _ExprResult_1, FVerseStringProperty_ _ExprResult_2, TMap<FVerseStringProperty_, uint8> _ExprResultStack_3, FVerseStringProperty_ _ExprResult_4, FVerseStringProperty_ _ExprResult_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2a_U_L_Nvector2_M_Nfloat_R");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_Roperator_U_2a_U_L_Nvector2_M_Nfloat_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._ExprResultStack_0 = _ExprResultStack_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._ExprResultStack_3 = _ExprResultStack_3;
	Parms._ExprResult_4 = _ExprResult_4;
	Parms._ExprResult_5 = _ExprResult_5;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RZero
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FSpatialMath_vector3        RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_0                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_1                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_2                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_3                                                    (HasGetValueTypeHash)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_4                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_5                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_6                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_7                                                    (HasGetValueTypeHash)

struct FSpatialMath_vector3 USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RZero(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, TMap<FVerseStringProperty_, uint8> _ExprResultStack_0, FVerseStringProperty_ _ExprResult_1, FVerseStringProperty_ _ExprResult_2, FVerseStringProperty_ _ExprResult_3, TMap<FVerseStringProperty_, uint8> _ExprResultStack_4, FVerseStringProperty_ _ExprResult_5, FVerseStringProperty_ _ExprResult_6, FVerseStringProperty_ _ExprResult_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RZero");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RZero_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._ExprResultStack_0 = _ExprResultStack_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._ExprResult_3 = _ExprResult_3;
	Parms._ExprResultStack_4 = _ExprResultStack_4;
	Parms._ExprResult_5 = _ExprResult_5;
	Parms._ExprResult_6 = _ExprResult_6;
	Parms._ExprResult_7 = _ExprResult_7;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RZAxis
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FSpatialMath_vector3        RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_0                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_1                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_2                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_3                                                    (HasGetValueTypeHash)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_4                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_5                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_6                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_7                                                    (HasGetValueTypeHash)

struct FSpatialMath_vector3 USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RZAxis(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, TMap<FVerseStringProperty_, uint8> _ExprResultStack_0, FVerseStringProperty_ _ExprResult_1, FVerseStringProperty_ _ExprResult_2, FVerseStringProperty_ _ExprResult_3, TMap<FVerseStringProperty_, uint8> _ExprResultStack_4, FVerseStringProperty_ _ExprResult_5, FVerseStringProperty_ _ExprResult_6, FVerseStringProperty_ _ExprResult_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RZAxis");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RZAxis_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._ExprResultStack_0 = _ExprResultStack_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._ExprResult_3 = _ExprResult_3;
	Parms._ExprResultStack_4 = _ExprResultStack_4;
	Parms._ExprResult_5 = _ExprResult_5;
	Parms._ExprResult_6 = _ExprResult_6;
	Parms._ExprResult_7 = _ExprResult_7;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RYAxis
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FSpatialMath_vector3        RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_0                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_1                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_2                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_3                                                    (HasGetValueTypeHash)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_4                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_5                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_6                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_7                                                    (HasGetValueTypeHash)

struct FSpatialMath_vector3 USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RYAxis(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, TMap<FVerseStringProperty_, uint8> _ExprResultStack_0, FVerseStringProperty_ _ExprResult_1, FVerseStringProperty_ _ExprResult_2, FVerseStringProperty_ _ExprResult_3, TMap<FVerseStringProperty_, uint8> _ExprResultStack_4, FVerseStringProperty_ _ExprResult_5, FVerseStringProperty_ _ExprResult_6, FVerseStringProperty_ _ExprResult_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RYAxis");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RYAxis_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._ExprResultStack_0 = _ExprResultStack_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._ExprResult_3 = _ExprResult_3;
	Parms._ExprResultStack_4 = _ExprResultStack_4;
	Parms._ExprResult_5 = _ExprResult_5;
	Parms._ExprResult_6 = _ExprResult_6;
	Parms._ExprResult_7 = _ExprResult_7;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RXAxis
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FSpatialMath_vector3        RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_0                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_1                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_2                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_3                                                    (HasGetValueTypeHash)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_4                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_5                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_6                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_7                                                    (HasGetValueTypeHash)

struct FSpatialMath_vector3 USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RXAxis(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, TMap<FVerseStringProperty_, uint8> _ExprResultStack_0, FVerseStringProperty_ _ExprResult_1, FVerseStringProperty_ _ExprResult_2, FVerseStringProperty_ _ExprResult_3, TMap<FVerseStringProperty_, uint8> _ExprResultStack_4, FVerseStringProperty_ _ExprResult_5, FVerseStringProperty_ _ExprResult_6, FVerseStringProperty_ _ExprResult_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RXAxis");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RXAxis_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._ExprResultStack_0 = _ExprResultStack_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._ExprResult_3 = _ExprResult_3;
	Parms._ExprResultStack_4 = _ExprResultStack_4;
	Parms._ExprResult_5 = _ExprResult_5;
	Parms._ExprResult_6 = _ExprResult_6;
	Parms._ExprResult_7 = _ExprResult_7;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RTransformVectorNoScale_L_Ntransform_M_Nvector3_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Ltransform_Mvector3_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FSpatialMath_vector3        RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

struct FSpatialMath_vector3 USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RTransformVectorNoScale_L_Ntransform_M_Nvector3_R(const struct FTuple_Ltransform_Mvector3_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RTransformVectorNoScale_L_Ntransform_M_Nvector3_R");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RTransformVectorNoScale_L_Ntransform_M_Nvector3_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RTransformVector_L_Ntransform_M_Nvector3_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Ltransform_Mvector3_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FSpatialMath_vector3        RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

struct FSpatialMath_vector3 USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RTransformVector_L_Ntransform_M_Nvector3_R(const struct FTuple_Ltransform_Mvector3_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RTransformVector_L_Ntransform_M_Nvector3_R");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RTransformVector_L_Ntransform_M_Nvector3_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RToVector2i_L_Nvector2_R
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FSpatialMath_vector2        __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// struct FSpatialMath_vector2i       _ExprResult_0                                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_1                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_2                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_3                                                    (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_4                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_5                                                        (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_6                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_7                                                        (HasGetValueTypeHash)
// struct FSpatialMath_vector2i       _ExprResult_8                                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_9                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_10                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_11                                                   (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_12                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_13                                                       (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_14                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_15                                                       (HasGetValueTypeHash)

FOptionalProperty_ USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RToVector2i_L_Nvector2_R(const struct FSpatialMath_vector2& __verse_0xB2CDDD72_Argument, const struct FSpatialMath_vector2i& _ExprResult_0, TMap<FVerseStringProperty_, uint8> _ExprResultStack_1, FVerseStringProperty_ _ExprResult_2, FVerseStringProperty_ _ExprResult_3, FOptionalProperty_ _ExprResultStack_4, FVerseFunctionProperty_ _Callee_5, FOptionalProperty_ _ExprResultStack_6, FVerseFunctionProperty_ _Callee_7, const struct FSpatialMath_vector2i& _ExprResult_8, TMap<FVerseStringProperty_, uint8> _ExprResultStack_9, FVerseStringProperty_ _ExprResult_10, FVerseStringProperty_ _ExprResult_11, FOptionalProperty_ _ExprResultStack_12, FVerseFunctionProperty_ _Callee_13, FOptionalProperty_ _ExprResultStack_14, FVerseFunctionProperty_ _Callee_15)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RToVector2i_L_Nvector2_R");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RToVector2i_L_Nvector2_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._ExprResult_0 = _ExprResult_0;
	Parms._ExprResultStack_1 = _ExprResultStack_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._ExprResult_3 = _ExprResult_3;
	Parms._ExprResultStack_4 = _ExprResultStack_4;
	Parms._Callee_5 = _Callee_5;
	Parms._ExprResultStack_6 = _ExprResultStack_6;
	Parms._Callee_7 = _Callee_7;
	Parms._ExprResult_8 = _ExprResult_8;
	Parms._ExprResultStack_9 = _ExprResultStack_9;
	Parms._ExprResult_10 = _ExprResult_10;
	Parms._ExprResult_11 = _ExprResult_11;
	Parms._ExprResultStack_12 = _ExprResultStack_12;
	Parms._Callee_13 = _Callee_13;
	Parms._ExprResultStack_14 = _ExprResultStack_14;
	Parms._Callee_15 = _Callee_15;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RToVector2_L_Nvector2i_R
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FSpatialMath_vector2i       __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FSpatialMath_vector2        RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_0                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_1                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_2                                                    (HasGetValueTypeHash)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_3                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_4                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_5                                                    (HasGetValueTypeHash)

struct FSpatialMath_vector2 USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RToVector2_L_Nvector2i_R(const struct FSpatialMath_vector2i& __verse_0xB2CDDD72_Argument, TMap<FVerseStringProperty_, uint8> _ExprResultStack_0, FVerseStringProperty_ _ExprResult_1, FVerseStringProperty_ _ExprResult_2, TMap<FVerseStringProperty_, uint8> _ExprResultStack_3, FVerseStringProperty_ _ExprResult_4, FVerseStringProperty_ _ExprResult_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RToVector2_L_Nvector2i_R");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RToVector2_L_Nvector2i_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._ExprResultStack_0 = _ExprResultStack_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._ExprResultStack_3 = _ExprResultStack_3;
	Parms._ExprResult_4 = _ExprResult_4;
	Parms._ExprResult_5 = _ExprResult_5;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RToString_L_Nvector2i_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSpatialMath_vector2i       __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// FVerseStringProperty_              RetVal                                                           (Parm, OutParm, ReturnParm, HasGetValueTypeHash)

FVerseStringProperty_ USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RToString_L_Nvector2i_R(const struct FSpatialMath_vector2i& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RToString_L_Nvector2i_R");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RToString_L_Nvector2i_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RToString_L_Nvector3_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSpatialMath_vector3        __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// FVerseStringProperty_              RetVal                                                           (Parm, OutParm, ReturnParm, HasGetValueTypeHash)

FVerseStringProperty_ USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RToString_L_Nvector3_R(const struct FSpatialMath_vector3& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RToString_L_Nvector3_R");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RToString_L_Nvector3_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RToString_L_Nrotation_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FVerseRotation              __verse_0xB2CDDD72_Argument                                      (Parm, NoDestructor)
// FVerseStringProperty_              RetVal                                                           (Parm, OutParm, ReturnParm, HasGetValueTypeHash)

FVerseStringProperty_ USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RToString_L_Nrotation_R(const struct FVerseRotation& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RToString_L_Nrotation_R");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RToString_L_Nrotation_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RToString_L_Nvector2_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FSpatialMath_vector2        __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// FVerseStringProperty_              RetVal                                                           (Parm, OutParm, ReturnParm, HasGetValueTypeHash)

FVerseStringProperty_ USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RToString_L_Nvector2_R(const struct FSpatialMath_vector2& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RToString_L_Nvector2_R");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RToString_L_Nvector2_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RSlerp_L_Nrotation_M_Nrotation_M_Nfloat_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lrotation_Mrotation_Mfloat_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor)

FOptionalProperty_ USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RSlerp_L_Nrotation_M_Nrotation_M_Nfloat_R(const struct FTuple_Lrotation_Mrotation_Mfloat_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RSlerp_L_Nrotation_M_Nrotation_M_Nfloat_R");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RSlerp_L_Nrotation_M_Nrotation_M_Nfloat_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RReflectVector_L_Nvector2_M_Nvector2_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lvector2_Mvector2_R  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

FOptionalProperty_ USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RReflectVector_L_Nvector2_M_Nvector2_R(const struct FTuple_Lvector2_Mvector2_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RReflectVector_L_Nvector2_M_Nvector2_R");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RReflectVector_L_Nvector2_M_Nvector2_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RReflectVector_L_Nvector3_M_Nvector3_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lvector3_Mvector3_R  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

FOptionalProperty_ USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RReflectVector_L_Nvector3_M_Nvector3_R(const struct FTuple_Lvector3_Mvector3_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RReflectVector_L_Nvector3_M_Nvector3_R");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RReflectVector_L_Nvector3_M_Nvector3_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RRadiansToDegrees_L_Nfloat_R
// (Final, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// double                             __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RRadiansToDegrees_L_Nfloat_R(double __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RRadiansToDegrees_L_Nfloat_R");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RRadiansToDegrees_L_Nfloat_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_ROnes
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FSpatialMath_vector3        RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_0                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_1                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_2                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_3                                                    (HasGetValueTypeHash)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_4                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_5                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_6                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_7                                                    (HasGetValueTypeHash)

struct FSpatialMath_vector3 USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_ROnes(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, TMap<FVerseStringProperty_, uint8> _ExprResultStack_0, FVerseStringProperty_ _ExprResult_1, FVerseStringProperty_ _ExprResult_2, FVerseStringProperty_ _ExprResult_3, TMap<FVerseStringProperty_, uint8> _ExprResultStack_4, FVerseStringProperty_ _ExprResult_5, FVerseStringProperty_ _ExprResult_6, FVerseStringProperty_ _ExprResult_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_ROnes");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_ROnes_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._ExprResultStack_0 = _ExprResultStack_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._ExprResult_3 = _ExprResult_3;
	Parms._ExprResultStack_4 = _ExprResultStack_4;
	Parms._ExprResult_5 = _ExprResult_5;
	Parms._ExprResult_6 = _ExprResult_6;
	Parms._ExprResult_7 = _ExprResult_7;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RMakeShortestRotationBetween_L_Nvector3_M_Nvector3_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lvector3_Mvector3_R  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FVerseRotation              RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor)

struct FVerseRotation USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RMakeShortestRotationBetween_L_Nvector3_M_Nvector3_R(const struct FTuple_Lvector3_Mvector3_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RMakeShortestRotationBetween_L_Nvector3_M_Nvector3_R");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RMakeShortestRotationBetween_L_Nvector3_M_Nvector3_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RMakeShortestRotationBetween_L_Nrotation_M_Nrotation_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lrotation_Mrotation_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FVerseRotation              RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor)

struct FVerseRotation USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RMakeShortestRotationBetween_L_Nrotation_M_Nrotation_R(const struct FTuple_Lrotation_Mrotation_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RMakeShortestRotationBetween_L_Nrotation_M_Nrotation_R");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RMakeShortestRotationBetween_L_Nrotation_M_Nrotation_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RMakeRotationFromYawPitchRollDegrees_L_Nfloat_M_Nfloat_M_Nfloat_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lfloat_Mfloat_Mfloat_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FVerseRotation              RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor)

struct FVerseRotation USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RMakeRotationFromYawPitchRollDegrees_L_Nfloat_M_Nfloat_M_Nfloat_R(const struct FTuple_Lfloat_Mfloat_Mfloat_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RMakeRotationFromYawPitchRollDegrees_L_Nfloat_M_Nfloat_M_Nfloat_R");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RMakeRotationFromYawPitchRollDegrees_L_Nfloat_M_Nfloat_M_Nfloat_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RMakeRotation_L_Nvector3_M_Nfloat_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lvector3_Mfloat_R    __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FVerseRotation              RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor)

struct FVerseRotation USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RMakeRotation_L_Nvector3_M_Nfloat_R(const struct FTuple_Lvector3_Mfloat_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RMakeRotation_L_Nvector3_M_Nfloat_R");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RMakeRotation_L_Nvector3_M_Nfloat_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RLerp_L_Nvector2_M_Nvector2_M_Nfloat_R
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_Lvector2_Mvector2_Mfloat_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FSpatialMath_vector2        RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_0                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_1                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_2                                                    (HasGetValueTypeHash)
// double                             _ExprResultStack_3                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_4                                                        (HasGetValueTypeHash)
// struct FTuple_Lfloat_Mfloat_Mfloat_R_ExprResult_5                                                    (HasGetValueTypeHash)
// double                             _ExprResultStack_6                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_7                                                        (HasGetValueTypeHash)
// struct FTuple_Lfloat_Mfloat_Mfloat_R_ExprResult_8                                                    (HasGetValueTypeHash)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_9                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_10                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_11                                                   (HasGetValueTypeHash)
// double                             _ExprResultStack_12                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_13                                                       (HasGetValueTypeHash)
// struct FTuple_Lfloat_Mfloat_Mfloat_R_ExprResult_14                                                   (HasGetValueTypeHash)
// double                             _ExprResultStack_15                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_16                                                       (HasGetValueTypeHash)
// struct FTuple_Lfloat_Mfloat_Mfloat_R_ExprResult_17                                                   (HasGetValueTypeHash)

struct FSpatialMath_vector2 USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RLerp_L_Nvector2_M_Nvector2_M_Nfloat_R(const struct FTuple_Lvector2_Mvector2_Mfloat_R& __verse_0xB2CDDD72_Argument, TMap<FVerseStringProperty_, uint8> _ExprResultStack_0, FVerseStringProperty_ _ExprResult_1, FVerseStringProperty_ _ExprResult_2, double _ExprResultStack_3, FVerseFunctionProperty_ _Callee_4, const struct FTuple_Lfloat_Mfloat_Mfloat_R& _ExprResult_5, double _ExprResultStack_6, FVerseFunctionProperty_ _Callee_7, const struct FTuple_Lfloat_Mfloat_Mfloat_R& _ExprResult_8, TMap<FVerseStringProperty_, uint8> _ExprResultStack_9, FVerseStringProperty_ _ExprResult_10, FVerseStringProperty_ _ExprResult_11, double _ExprResultStack_12, FVerseFunctionProperty_ _Callee_13, const struct FTuple_Lfloat_Mfloat_Mfloat_R& _ExprResult_14, double _ExprResultStack_15, FVerseFunctionProperty_ _Callee_16, const struct FTuple_Lfloat_Mfloat_Mfloat_R& _ExprResult_17)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RLerp_L_Nvector2_M_Nvector2_M_Nfloat_R");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RLerp_L_Nvector2_M_Nvector2_M_Nfloat_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._ExprResultStack_0 = _ExprResultStack_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._ExprResultStack_3 = _ExprResultStack_3;
	Parms._Callee_4 = _Callee_4;
	Parms._ExprResult_5 = _ExprResult_5;
	Parms._ExprResultStack_6 = _ExprResultStack_6;
	Parms._Callee_7 = _Callee_7;
	Parms._ExprResult_8 = _ExprResult_8;
	Parms._ExprResultStack_9 = _ExprResultStack_9;
	Parms._ExprResult_10 = _ExprResult_10;
	Parms._ExprResult_11 = _ExprResult_11;
	Parms._ExprResultStack_12 = _ExprResultStack_12;
	Parms._Callee_13 = _Callee_13;
	Parms._ExprResult_14 = _ExprResult_14;
	Parms._ExprResultStack_15 = _ExprResultStack_15;
	Parms._Callee_16 = _Callee_16;
	Parms._ExprResult_17 = _ExprResult_17;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RLerp_L_Nvector3_M_Nvector3_M_Nfloat_R
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_Lvector3_Mvector3_Mfloat_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FSpatialMath_vector3        RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_0                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_1                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_2                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_3                                                    (HasGetValueTypeHash)
// double                             _ExprResultStack_4                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_5                                                        (HasGetValueTypeHash)
// struct FTuple_Lfloat_Mfloat_Mfloat_R_ExprResult_6                                                    (HasGetValueTypeHash)
// double                             _ExprResultStack_7                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_8                                                        (HasGetValueTypeHash)
// struct FTuple_Lfloat_Mfloat_Mfloat_R_ExprResult_9                                                    (HasGetValueTypeHash)
// double                             _ExprResultStack_10                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_11                                                       (HasGetValueTypeHash)
// struct FTuple_Lfloat_Mfloat_Mfloat_R_ExprResult_12                                                   (HasGetValueTypeHash)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_13                                              (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_14                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_15                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_16                                                   (HasGetValueTypeHash)
// double                             _ExprResultStack_17                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_18                                                       (HasGetValueTypeHash)
// struct FTuple_Lfloat_Mfloat_Mfloat_R_ExprResult_19                                                   (HasGetValueTypeHash)
// double                             _ExprResultStack_20                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_21                                                       (HasGetValueTypeHash)
// struct FTuple_Lfloat_Mfloat_Mfloat_R_ExprResult_22                                                   (HasGetValueTypeHash)
// double                             _ExprResultStack_23                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_24                                                       (HasGetValueTypeHash)
// struct FTuple_Lfloat_Mfloat_Mfloat_R_ExprResult_25                                                   (HasGetValueTypeHash)

struct FSpatialMath_vector3 USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RLerp_L_Nvector3_M_Nvector3_M_Nfloat_R(const struct FTuple_Lvector3_Mvector3_Mfloat_R& __verse_0xB2CDDD72_Argument, TMap<FVerseStringProperty_, uint8> _ExprResultStack_0, FVerseStringProperty_ _ExprResult_1, FVerseStringProperty_ _ExprResult_2, FVerseStringProperty_ _ExprResult_3, double _ExprResultStack_4, FVerseFunctionProperty_ _Callee_5, const struct FTuple_Lfloat_Mfloat_Mfloat_R& _ExprResult_6, double _ExprResultStack_7, FVerseFunctionProperty_ _Callee_8, const struct FTuple_Lfloat_Mfloat_Mfloat_R& _ExprResult_9, double _ExprResultStack_10, FVerseFunctionProperty_ _Callee_11, const struct FTuple_Lfloat_Mfloat_Mfloat_R& _ExprResult_12, TMap<FVerseStringProperty_, uint8> _ExprResultStack_13, FVerseStringProperty_ _ExprResult_14, FVerseStringProperty_ _ExprResult_15, FVerseStringProperty_ _ExprResult_16, double _ExprResultStack_17, FVerseFunctionProperty_ _Callee_18, const struct FTuple_Lfloat_Mfloat_Mfloat_R& _ExprResult_19, double _ExprResultStack_20, FVerseFunctionProperty_ _Callee_21, const struct FTuple_Lfloat_Mfloat_Mfloat_R& _ExprResult_22, double _ExprResultStack_23, FVerseFunctionProperty_ _Callee_24, const struct FTuple_Lfloat_Mfloat_Mfloat_R& _ExprResult_25)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RLerp_L_Nvector3_M_Nvector3_M_Nfloat_R");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RLerp_L_Nvector3_M_Nvector3_M_Nfloat_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._ExprResultStack_0 = _ExprResultStack_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._ExprResult_2 = _ExprResult_2;
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
	Parms._ExprResultStack_13 = _ExprResultStack_13;
	Parms._ExprResult_14 = _ExprResult_14;
	Parms._ExprResult_15 = _ExprResult_15;
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


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RIsAlmostEqual_L_Nvector2_M_Nvector2_M_Nfloat_R
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_Lvector2_Mvector2_Mfloat_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_0                                                    (NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_1                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_2                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_3                                                    (NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_4                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_5                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionalProperty_ USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RIsAlmostEqual_L_Nvector2_M_Nvector2_M_Nfloat_R(const struct FTuple_Lvector2_Mvector2_Mfloat_R& __verse_0xB2CDDD72_Argument, uint8 _ExprResult_0, FOptionalProperty_ _ExprResultStack_1, FOptionalProperty_ _ExprResultStack_2, uint8 _ExprResult_3, FOptionalProperty_ _ExprResultStack_4, FOptionalProperty_ _ExprResultStack_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RIsAlmostEqual_L_Nvector2_M_Nvector2_M_Nfloat_R");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RIsAlmostEqual_L_Nvector2_M_Nvector2_M_Nfloat_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._ExprResult_0 = _ExprResult_0;
	Parms._ExprResultStack_1 = _ExprResultStack_1;
	Parms._ExprResultStack_2 = _ExprResultStack_2;
	Parms._ExprResult_3 = _ExprResult_3;
	Parms._ExprResultStack_4 = _ExprResultStack_4;
	Parms._ExprResultStack_5 = _ExprResultStack_5;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RIsAlmostEqual_L_Nvector3_M_Nvector3_M_Nfloat_R
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_Lvector3_Mvector3_Mfloat_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_0                                                    (NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_1                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_2                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_3                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_4                                                    (NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_5                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_6                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_7                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionalProperty_ USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RIsAlmostEqual_L_Nvector3_M_Nvector3_M_Nfloat_R(const struct FTuple_Lvector3_Mvector3_Mfloat_R& __verse_0xB2CDDD72_Argument, uint8 _ExprResult_0, FOptionalProperty_ _ExprResultStack_1, FOptionalProperty_ _ExprResultStack_2, FOptionalProperty_ _ExprResultStack_3, uint8 _ExprResult_4, FOptionalProperty_ _ExprResultStack_5, FOptionalProperty_ _ExprResultStack_6, FOptionalProperty_ _ExprResultStack_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RIsAlmostEqual_L_Nvector3_M_Nvector3_M_Nfloat_R");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RIsAlmostEqual_L_Nvector3_M_Nvector3_M_Nfloat_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._ExprResult_0 = _ExprResult_0;
	Parms._ExprResultStack_1 = _ExprResultStack_1;
	Parms._ExprResultStack_2 = _ExprResultStack_2;
	Parms._ExprResultStack_3 = _ExprResultStack_3;
	Parms._ExprResult_4 = _ExprResult_4;
	Parms._ExprResultStack_5 = _ExprResultStack_5;
	Parms._ExprResultStack_6 = _ExprResultStack_6;
	Parms._ExprResultStack_7 = _ExprResultStack_7;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RIdentityRotation
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FVerseRotation              RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor)

struct FVerseRotation USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RIdentityRotation(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RIdentityRotation");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RIdentityRotation_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_REquals_L_Nvector2i_M_Nvector2i_R
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_Lvector2i_Mvector2i_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// enum class EVerseFalse             _ExprResult_0                                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSpatialMath_vector2i       _ExprResult_1                                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_2                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_3                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_4                                                    (HasGetValueTypeHash)
// int64                              _ExprResult_5                                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResultStack_6                                               (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_7                                               (ZeroConstructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_8                                                    (HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_9                                                    (HasGetValueTypeHash)
// int64                              _ExprResult_10                                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResultStack_11                                              (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_12                                              (ZeroConstructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_13                                                   (HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_14                                                   (HasGetValueTypeHash)
// enum class EVerseFalse             _ExprResult_15                                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSpatialMath_vector2i       _ExprResult_16                                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_17                                              (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_18                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_19                                                   (HasGetValueTypeHash)
// int64                              _ExprResult_20                                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResultStack_21                                              (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_22                                              (ZeroConstructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_23                                                   (HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_24                                                   (HasGetValueTypeHash)
// int64                              _ExprResult_25                                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResultStack_26                                              (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_27                                              (ZeroConstructor, HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_28                                                   (HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResult_29                                                   (HasGetValueTypeHash)

FOptionalProperty_ USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_REquals_L_Nvector2i_M_Nvector2i_R(const struct FTuple_Lvector2i_Mvector2i_R& __verse_0xB2CDDD72_Argument, enum class EVerseFalse _ExprResult_0, const struct FSpatialMath_vector2i& _ExprResult_1, TMap<FVerseStringProperty_, uint8> _ExprResultStack_2, FVerseStringProperty_ _ExprResult_3, FVerseStringProperty_ _ExprResult_4, int64 _ExprResult_5, FVerseDynamicProperty_ _ExprResultStack_6, FOptionalProperty_ _ExprResultStack_7, FVerseDynamicProperty_ _ExprResult_8, FVerseDynamicProperty_ _ExprResult_9, int64 _ExprResult_10, FVerseDynamicProperty_ _ExprResultStack_11, FOptionalProperty_ _ExprResultStack_12, FVerseDynamicProperty_ _ExprResult_13, FVerseDynamicProperty_ _ExprResult_14, enum class EVerseFalse _ExprResult_15, const struct FSpatialMath_vector2i& _ExprResult_16, TMap<FVerseStringProperty_, uint8> _ExprResultStack_17, FVerseStringProperty_ _ExprResult_18, FVerseStringProperty_ _ExprResult_19, int64 _ExprResult_20, FVerseDynamicProperty_ _ExprResultStack_21, FOptionalProperty_ _ExprResultStack_22, FVerseDynamicProperty_ _ExprResult_23, FVerseDynamicProperty_ _ExprResult_24, int64 _ExprResult_25, FVerseDynamicProperty_ _ExprResultStack_26, FOptionalProperty_ _ExprResultStack_27, FVerseDynamicProperty_ _ExprResult_28, FVerseDynamicProperty_ _ExprResult_29)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_REquals_L_Nvector2i_M_Nvector2i_R");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_REquals_L_Nvector2i_M_Nvector2i_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._ExprResult_0 = _ExprResult_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._ExprResultStack_2 = _ExprResultStack_2;
	Parms._ExprResult_3 = _ExprResult_3;
	Parms._ExprResult_4 = _ExprResult_4;
	Parms._ExprResult_5 = _ExprResult_5;
	Parms._ExprResultStack_6 = _ExprResultStack_6;
	Parms._ExprResultStack_7 = _ExprResultStack_7;
	Parms._ExprResult_8 = _ExprResult_8;
	Parms._ExprResult_9 = _ExprResult_9;
	Parms._ExprResult_10 = _ExprResult_10;
	Parms._ExprResultStack_11 = _ExprResultStack_11;
	Parms._ExprResultStack_12 = _ExprResultStack_12;
	Parms._ExprResult_13 = _ExprResult_13;
	Parms._ExprResult_14 = _ExprResult_14;
	Parms._ExprResult_15 = _ExprResult_15;
	Parms._ExprResult_16 = _ExprResult_16;
	Parms._ExprResultStack_17 = _ExprResultStack_17;
	Parms._ExprResult_18 = _ExprResult_18;
	Parms._ExprResult_19 = _ExprResult_19;
	Parms._ExprResult_20 = _ExprResult_20;
	Parms._ExprResultStack_21 = _ExprResultStack_21;
	Parms._ExprResultStack_22 = _ExprResultStack_22;
	Parms._ExprResult_23 = _ExprResult_23;
	Parms._ExprResult_24 = _ExprResult_24;
	Parms._ExprResult_25 = _ExprResult_25;
	Parms._ExprResultStack_26 = _ExprResultStack_26;
	Parms._ExprResultStack_27 = _ExprResultStack_27;
	Parms._ExprResult_28 = _ExprResult_28;
	Parms._ExprResult_29 = _ExprResult_29;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RDotProduct_L_Nvector2i_M_Nvector2i_R
// (Final, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lvector2i_Mvector2i_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RDotProduct_L_Nvector2i_M_Nvector2i_R(const struct FTuple_Lvector2i_Mvector2i_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RDotProduct_L_Nvector2i_M_Nvector2i_R");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RDotProduct_L_Nvector2i_M_Nvector2i_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RDotProduct_L_Nvector2_M_Nvector2_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lvector2_Mvector2_R  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// double                             RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RDotProduct_L_Nvector2_M_Nvector2_R(const struct FTuple_Lvector2_Mvector2_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RDotProduct_L_Nvector2_M_Nvector2_R");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RDotProduct_L_Nvector2_M_Nvector2_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RDotProduct_L_Nvector3_M_Nvector3_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lvector3_Mvector3_R  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// double                             RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RDotProduct_L_Nvector3_M_Nvector3_R(const struct FTuple_Lvector3_Mvector3_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RDotProduct_L_Nvector3_M_Nvector3_R");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RDotProduct_L_Nvector3_M_Nvector3_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RDistanceXY_L_Nvector3_M_Nvector3_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lvector3_Mvector3_R  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// double                             RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RDistanceXY_L_Nvector3_M_Nvector3_R(const struct FTuple_Lvector3_Mvector3_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RDistanceXY_L_Nvector3_M_Nvector3_R");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RDistanceXY_L_Nvector3_M_Nvector3_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RDistanceSquaredXY_L_Nvector3_M_Nvector3_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lvector3_Mvector3_R  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// double                             RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RDistanceSquaredXY_L_Nvector3_M_Nvector3_R(const struct FTuple_Lvector3_Mvector3_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RDistanceSquaredXY_L_Nvector3_M_Nvector3_R");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RDistanceSquaredXY_L_Nvector3_M_Nvector3_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RDistanceSquared_L_Nvector3_M_Nvector3_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lvector3_Mvector3_R  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// double                             RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RDistanceSquared_L_Nvector3_M_Nvector3_R(const struct FTuple_Lvector3_Mvector3_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RDistanceSquared_L_Nvector3_M_Nvector3_R");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RDistanceSquared_L_Nvector3_M_Nvector3_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RDistanceSquared_L_Nvector2_M_Nvector2_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lvector2_Mvector2_R  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// double                             RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RDistanceSquared_L_Nvector2_M_Nvector2_R(const struct FTuple_Lvector2_Mvector2_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RDistanceSquared_L_Nvector2_M_Nvector2_R");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RDistanceSquared_L_Nvector2_M_Nvector2_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RDistance_L_Nvector2_M_Nvector2_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lvector2_Mvector2_R  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// double                             RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RDistance_L_Nvector2_M_Nvector2_R(const struct FTuple_Lvector2_Mvector2_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RDistance_L_Nvector2_M_Nvector2_R");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RDistance_L_Nvector2_M_Nvector2_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RDistance_L_Nvector3_M_Nvector3_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lvector3_Mvector3_R  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// double                             RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RDistance_L_Nvector3_M_Nvector3_R(const struct FTuple_Lvector3_Mvector3_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RDistance_L_Nvector3_M_Nvector3_R");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RDistance_L_Nvector3_M_Nvector3_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RDistance_L_Nrotation_M_Nrotation_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lrotation_Mrotation_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// double                             RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RDistance_L_Nrotation_M_Nrotation_R(const struct FTuple_Lrotation_Mrotation_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RDistance_L_Nrotation_M_Nrotation_R");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RDistance_L_Nrotation_M_Nrotation_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RDegreesToRadians_L_Nfloat_R
// (Final, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// double                             __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RDegreesToRadians_L_Nfloat_R(double __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RDegreesToRadians_L_Nfloat_R");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RDegreesToRadians_L_Nfloat_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RCrossProduct_L_Nvector3_M_Nvector3_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lvector3_Mvector3_R  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FSpatialMath_vector3        RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

struct FSpatialMath_vector3 USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RCrossProduct_L_Nvector3_M_Nvector3_R(const struct FTuple_Lvector3_Mvector3_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RCrossProduct_L_Nvector3_M_Nvector3_R");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RCrossProduct_L_Nvector3_M_Nvector3_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath._L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RAngularDistance_L_Nrotation_M_Nrotation_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lrotation_Mrotation_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// double                             RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double USpatialMath::_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RAngularDistance_L_Nrotation_M_Nrotation_R(const struct FTuple_Lrotation_Mrotation_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "_L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RAngularDistance_L_Nrotation_M_Nrotation_R");

	Params::USpatialMath__L_2fUnrealEngine_2ecom_2fTemporary_2fSpatialMath_N_RAngularDistance_L_Nrotation_M_Nrotation_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath.SpatialMath_vector3$OverrideFactory
// (Static, HasOutParams, HasDefaults)
// Parameters:
// struct FSpatialMath_vector3        RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
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

struct FSpatialMath_vector3 USpatialMath::SpatialMath_vector3_OverrideFactory(TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap, FVerseStringProperty_ _ExprResultStack_0, FOptionalProperty_ _ExprResult_1, FVerseStringProperty_ _ExprResultStack_2, FOptionalProperty_ _ExprResult_3, FVerseStringProperty_ _ExprResultStack_4, FOptionalProperty_ _ExprResult_5, FVerseStringProperty_ _ExprResultStack_6, FOptionalProperty_ _ExprResult_7, FVerseStringProperty_ _ExprResultStack_8, FOptionalProperty_ _ExprResult_9, FVerseStringProperty_ _ExprResultStack_10, FOptionalProperty_ _ExprResult_11)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "SpatialMath_vector3$OverrideFactory");

	Params::USpatialMath_SpatialMath_vector3_OverrideFactory_Params Parms{};

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

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath.SpatialMath_vector3$Factory
// (Static, HasOutParams)
// Parameters:
// struct FSpatialMath_vector3        RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

struct FSpatialMath_vector3 USpatialMath::SpatialMath_vector3_Factory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "SpatialMath_vector3$Factory");

	Params::USpatialMath_SpatialMath_vector3_Factory_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath.SpatialMath_vector2i$OverrideFactory
// (Static, HasOutParams, HasDefaults)
// Parameters:
// struct FSpatialMath_vector2i       RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap                              (ConstParm, Parm, ContainsInstancedReference)
// FVerseStringProperty_              _ExprResultStack_0                                               (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_1                                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_2                                               (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_3                                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_4                                               (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_5                                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_6                                               (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_7                                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

struct FSpatialMath_vector2i USpatialMath::SpatialMath_vector2i_OverrideFactory(TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap, FVerseStringProperty_ _ExprResultStack_0, FOptionalProperty_ _ExprResult_1, FVerseStringProperty_ _ExprResultStack_2, FOptionalProperty_ _ExprResult_3, FVerseStringProperty_ _ExprResultStack_4, FOptionalProperty_ _ExprResult_5, FVerseStringProperty_ _ExprResultStack_6, FOptionalProperty_ _ExprResult_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "SpatialMath_vector2i$OverrideFactory");

	Params::USpatialMath_SpatialMath_vector2i_OverrideFactory_Params Parms{};

	Parms.__verse_0xFB48ED96__InitOverrideMap = __verse_0xFB48ED96__InitOverrideMap;
	Parms._ExprResultStack_0 = _ExprResultStack_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._ExprResultStack_2 = _ExprResultStack_2;
	Parms._ExprResult_3 = _ExprResult_3;
	Parms._ExprResultStack_4 = _ExprResultStack_4;
	Parms._ExprResult_5 = _ExprResult_5;
	Parms._ExprResultStack_6 = _ExprResultStack_6;
	Parms._ExprResult_7 = _ExprResult_7;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath.SpatialMath_vector2i$Factory
// (Static, HasOutParams)
// Parameters:
// struct FSpatialMath_vector2i       RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

struct FSpatialMath_vector2i USpatialMath::SpatialMath_vector2i_Factory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "SpatialMath_vector2i$Factory");

	Params::USpatialMath_SpatialMath_vector2i_Factory_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath.SpatialMath_vector2$OverrideFactory
// (Static, HasOutParams, HasDefaults)
// Parameters:
// struct FSpatialMath_vector2        RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap                              (ConstParm, Parm, ContainsInstancedReference)
// FVerseStringProperty_              _ExprResultStack_0                                               (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_1                                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_2                                               (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_3                                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_4                                               (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_5                                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_6                                               (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_7                                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

struct FSpatialMath_vector2 USpatialMath::SpatialMath_vector2_OverrideFactory(TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap, FVerseStringProperty_ _ExprResultStack_0, FOptionalProperty_ _ExprResult_1, FVerseStringProperty_ _ExprResultStack_2, FOptionalProperty_ _ExprResult_3, FVerseStringProperty_ _ExprResultStack_4, FOptionalProperty_ _ExprResult_5, FVerseStringProperty_ _ExprResultStack_6, FOptionalProperty_ _ExprResult_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "SpatialMath_vector2$OverrideFactory");

	Params::USpatialMath_SpatialMath_vector2_OverrideFactory_Params Parms{};

	Parms.__verse_0xFB48ED96__InitOverrideMap = __verse_0xFB48ED96__InitOverrideMap;
	Parms._ExprResultStack_0 = _ExprResultStack_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._ExprResultStack_2 = _ExprResultStack_2;
	Parms._ExprResult_3 = _ExprResult_3;
	Parms._ExprResultStack_4 = _ExprResultStack_4;
	Parms._ExprResult_5 = _ExprResult_5;
	Parms._ExprResultStack_6 = _ExprResultStack_6;
	Parms._ExprResult_7 = _ExprResult_7;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath.SpatialMath_vector2$Factory
// (Static, HasOutParams)
// Parameters:
// struct FSpatialMath_vector2        RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

struct FSpatialMath_vector2 USpatialMath::SpatialMath_vector2_Factory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "SpatialMath_vector2$Factory");

	Params::USpatialMath_SpatialMath_vector2_Factory_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath.SpatialMath_transform$OverrideFactory
// (Static, HasOutParams, HasDefaults)
// Parameters:
// struct FSpatialMath_transform      RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor)
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
// struct FVerseRotation              _ExprResultStack_9                                               (NoDestructor)
// FVerseFunctionProperty_            _Callee_10                                                       (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_11                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_12                                              (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_13                                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FSpatialMath_vector3        _ExprResult_14                                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_15                                              (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_16                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_17                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_18                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_19                                              (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_20                                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FSpatialMath_vector3        _ExprResult_21                                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_22                                              (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_23                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_24                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_25                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_26                                              (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_27                                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVerseRotation              _ExprResultStack_28                                              (NoDestructor)
// FVerseFunctionProperty_            _Callee_29                                                       (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_30                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_31                                              (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_32                                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FSpatialMath_vector3        _ExprResult_33                                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_34                                              (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_35                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_36                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_37                                                   (HasGetValueTypeHash)

struct FSpatialMath_transform USpatialMath::SpatialMath_transform_OverrideFactory(TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap, FVerseStringProperty_ _ExprResultStack_0, FOptionalProperty_ _ExprResult_1, const struct FSpatialMath_vector3& _ExprResult_2, TMap<FVerseStringProperty_, uint8> _ExprResultStack_3, FVerseStringProperty_ _ExprResult_4, FVerseStringProperty_ _ExprResult_5, FVerseStringProperty_ _ExprResult_6, FVerseStringProperty_ _ExprResultStack_7, FOptionalProperty_ _ExprResult_8, const struct FVerseRotation& _ExprResultStack_9, FVerseFunctionProperty_ _Callee_10, const struct FTuple_L_R& _ExprResult_11, FVerseStringProperty_ _ExprResultStack_12, FOptionalProperty_ _ExprResult_13, const struct FSpatialMath_vector3& _ExprResult_14, TMap<FVerseStringProperty_, uint8> _ExprResultStack_15, FVerseStringProperty_ _ExprResult_16, FVerseStringProperty_ _ExprResult_17, FVerseStringProperty_ _ExprResult_18, FVerseStringProperty_ _ExprResultStack_19, FOptionalProperty_ _ExprResult_20, const struct FSpatialMath_vector3& _ExprResult_21, TMap<FVerseStringProperty_, uint8> _ExprResultStack_22, FVerseStringProperty_ _ExprResult_23, FVerseStringProperty_ _ExprResult_24, FVerseStringProperty_ _ExprResult_25, FVerseStringProperty_ _ExprResultStack_26, FOptionalProperty_ _ExprResult_27, const struct FVerseRotation& _ExprResultStack_28, FVerseFunctionProperty_ _Callee_29, const struct FTuple_L_R& _ExprResult_30, FVerseStringProperty_ _ExprResultStack_31, FOptionalProperty_ _ExprResult_32, const struct FSpatialMath_vector3& _ExprResult_33, TMap<FVerseStringProperty_, uint8> _ExprResultStack_34, FVerseStringProperty_ _ExprResult_35, FVerseStringProperty_ _ExprResult_36, FVerseStringProperty_ _ExprResult_37)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "SpatialMath_transform$OverrideFactory");

	Params::USpatialMath_SpatialMath_transform_OverrideFactory_Params Parms{};

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
	Parms._Callee_10 = _Callee_10;
	Parms._ExprResult_11 = _ExprResult_11;
	Parms._ExprResultStack_12 = _ExprResultStack_12;
	Parms._ExprResult_13 = _ExprResult_13;
	Parms._ExprResult_14 = _ExprResult_14;
	Parms._ExprResultStack_15 = _ExprResultStack_15;
	Parms._ExprResult_16 = _ExprResult_16;
	Parms._ExprResult_17 = _ExprResult_17;
	Parms._ExprResult_18 = _ExprResult_18;
	Parms._ExprResultStack_19 = _ExprResultStack_19;
	Parms._ExprResult_20 = _ExprResult_20;
	Parms._ExprResult_21 = _ExprResult_21;
	Parms._ExprResultStack_22 = _ExprResultStack_22;
	Parms._ExprResult_23 = _ExprResult_23;
	Parms._ExprResult_24 = _ExprResult_24;
	Parms._ExprResult_25 = _ExprResult_25;
	Parms._ExprResultStack_26 = _ExprResultStack_26;
	Parms._ExprResult_27 = _ExprResult_27;
	Parms._ExprResultStack_28 = _ExprResultStack_28;
	Parms._Callee_29 = _Callee_29;
	Parms._ExprResult_30 = _ExprResult_30;
	Parms._ExprResultStack_31 = _ExprResultStack_31;
	Parms._ExprResult_32 = _ExprResult_32;
	Parms._ExprResult_33 = _ExprResult_33;
	Parms._ExprResultStack_34 = _ExprResultStack_34;
	Parms._ExprResult_35 = _ExprResult_35;
	Parms._ExprResult_36 = _ExprResult_36;
	Parms._ExprResult_37 = _ExprResult_37;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath.SpatialMath_transform$Factory
// (Static, HasOutParams, HasDefaults)
// Parameters:
// struct FSpatialMath_transform      RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor)
// struct FSpatialMath_vector3        _ExprResult_0                                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_1                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_2                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_3                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_4                                                    (HasGetValueTypeHash)
// struct FVerseRotation              _ExprResultStack_5                                               (NoDestructor)
// FVerseFunctionProperty_            _Callee_6                                                        (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_7                                                    (HasGetValueTypeHash)
// struct FSpatialMath_vector3        _ExprResult_8                                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_9                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_10                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_11                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_12                                                   (HasGetValueTypeHash)
// struct FSpatialMath_vector3        _ExprResult_13                                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_14                                              (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_15                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_16                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_17                                                   (HasGetValueTypeHash)
// struct FVerseRotation              _ExprResultStack_18                                              (NoDestructor)
// FVerseFunctionProperty_            _Callee_19                                                       (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_20                                                   (HasGetValueTypeHash)
// struct FSpatialMath_vector3        _ExprResult_21                                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_22                                              (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_23                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_24                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_25                                                   (HasGetValueTypeHash)

struct FSpatialMath_transform USpatialMath::SpatialMath_transform_Factory(const struct FSpatialMath_vector3& _ExprResult_0, TMap<FVerseStringProperty_, uint8> _ExprResultStack_1, FVerseStringProperty_ _ExprResult_2, FVerseStringProperty_ _ExprResult_3, FVerseStringProperty_ _ExprResult_4, const struct FVerseRotation& _ExprResultStack_5, FVerseFunctionProperty_ _Callee_6, const struct FTuple_L_R& _ExprResult_7, const struct FSpatialMath_vector3& _ExprResult_8, TMap<FVerseStringProperty_, uint8> _ExprResultStack_9, FVerseStringProperty_ _ExprResult_10, FVerseStringProperty_ _ExprResult_11, FVerseStringProperty_ _ExprResult_12, const struct FSpatialMath_vector3& _ExprResult_13, TMap<FVerseStringProperty_, uint8> _ExprResultStack_14, FVerseStringProperty_ _ExprResult_15, FVerseStringProperty_ _ExprResult_16, FVerseStringProperty_ _ExprResult_17, const struct FVerseRotation& _ExprResultStack_18, FVerseFunctionProperty_ _Callee_19, const struct FTuple_L_R& _ExprResult_20, const struct FSpatialMath_vector3& _ExprResult_21, TMap<FVerseStringProperty_, uint8> _ExprResultStack_22, FVerseStringProperty_ _ExprResult_23, FVerseStringProperty_ _ExprResult_24, FVerseStringProperty_ _ExprResult_25)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "SpatialMath_transform$Factory");

	Params::USpatialMath_SpatialMath_transform_Factory_Params Parms{};

	Parms._ExprResult_0 = _ExprResult_0;
	Parms._ExprResultStack_1 = _ExprResultStack_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._ExprResult_3 = _ExprResult_3;
	Parms._ExprResult_4 = _ExprResult_4;
	Parms._ExprResultStack_5 = _ExprResultStack_5;
	Parms._Callee_6 = _Callee_6;
	Parms._ExprResult_7 = _ExprResult_7;
	Parms._ExprResult_8 = _ExprResult_8;
	Parms._ExprResultStack_9 = _ExprResultStack_9;
	Parms._ExprResult_10 = _ExprResult_10;
	Parms._ExprResult_11 = _ExprResult_11;
	Parms._ExprResult_12 = _ExprResult_12;
	Parms._ExprResult_13 = _ExprResult_13;
	Parms._ExprResultStack_14 = _ExprResultStack_14;
	Parms._ExprResult_15 = _ExprResult_15;
	Parms._ExprResult_16 = _ExprResult_16;
	Parms._ExprResult_17 = _ExprResult_17;
	Parms._ExprResultStack_18 = _ExprResultStack_18;
	Parms._Callee_19 = _Callee_19;
	Parms._ExprResult_20 = _ExprResult_20;
	Parms._ExprResult_21 = _ExprResult_21;
	Parms._ExprResultStack_22 = _ExprResultStack_22;
	Parms._ExprResult_23 = _ExprResult_23;
	Parms._ExprResult_24 = _ExprResult_24;
	Parms._ExprResult_25 = _ExprResult_25;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function EpicGamesTemporary.SpatialMath.$InitCDO
// (None)
// Parameters:

void USpatialMath::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SpatialMath", "$InitCDO");

	Params::USpatialMath__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}

}


