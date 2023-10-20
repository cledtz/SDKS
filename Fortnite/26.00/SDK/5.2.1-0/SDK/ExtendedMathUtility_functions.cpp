#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ExtendedMathUtility.ExtendedMathUtility
// (None)

class UClass* UExtendedMathUtility::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ExtendedMathUtility");

	return Clss;
}


// ExtendedMathUtility ExtendedMathUtility.Default__ExtendedMathUtility
// (Public, ClassDefaultObject, ArchetypeObject)

class UExtendedMathUtility* UExtendedMathUtility::GetDefaultObj()
{
	static class UExtendedMathUtility* Default = nullptr;

	if (!Default)
		Default = static_cast<UExtendedMathUtility*>(UExtendedMathUtility::StaticClass()->DefaultObject);

	return Default;
}


// Function ExtendedMathUtility.ExtendedMathUtility.VInterpToExtended
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     Current                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Target                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              DeltaTime                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InterpSpeed_X                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InterpSpeed_Y                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InterpSpeed_Z                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UExtendedMathUtility::VInterpToExtended(const struct FVector& Current, const struct FVector& Target, float DeltaTime, float InterpSpeed_X, float InterpSpeed_Y, float InterpSpeed_Z)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExtendedMathUtility", "VInterpToExtended");

	Params::UExtendedMathUtility_VInterpToExtended_Params Parms{};

	Parms.Current = Current;
	Parms.Target = Target;
	Parms.DeltaTime = DeltaTime;
	Parms.InterpSpeed_X = InterpSpeed_X;
	Parms.InterpSpeed_Y = InterpSpeed_Y;
	Parms.InterpSpeed_Z = InterpSpeed_Z;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ExtendedMathUtility.ExtendedMathUtility.RInterpToExtended
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FRotator                    Current                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FRotator                    Target                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// float                              DeltaTime                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InterpSpeed_Pitch                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InterpSpeed_Yaw                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InterpSpeed_Roll                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FRotator UExtendedMathUtility::RInterpToExtended(const struct FRotator& Current, const struct FRotator& Target, float DeltaTime, float InterpSpeed_Pitch, float InterpSpeed_Yaw, float InterpSpeed_Roll)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExtendedMathUtility", "RInterpToExtended");

	Params::UExtendedMathUtility_RInterpToExtended_Params Parms{};

	Parms.Current = Current;
	Parms.Target = Target;
	Parms.DeltaTime = DeltaTime;
	Parms.InterpSpeed_Pitch = InterpSpeed_Pitch;
	Parms.InterpSpeed_Yaw = InterpSpeed_Yaw;
	Parms.InterpSpeed_Roll = InterpSpeed_Roll;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ExtendedMathUtility.ExtendedMathUtility.IsNegative_Int
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              IntToCheck                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UExtendedMathUtility::IsNegative_Int(int32 IntToCheck)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExtendedMathUtility", "IsNegative_Int");

	Params::UExtendedMathUtility_IsNegative_Int_Params Parms{};

	Parms.IntToCheck = IntToCheck;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ExtendedMathUtility.ExtendedMathUtility.IsNegative_Float
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              FloatToCheck                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UExtendedMathUtility::IsNegative_Float(float FloatToCheck)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ExtendedMathUtility", "IsNegative_Float");

	Params::UExtendedMathUtility_IsNegative_Float_Params Parms{};

	Parms.FloatToCheck = FloatToCheck;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


