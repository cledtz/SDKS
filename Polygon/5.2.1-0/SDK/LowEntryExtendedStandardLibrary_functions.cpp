#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class LowEntryExtendedStandardLibrary.LowEntryBitDataEntry
// (None)

class UClass* ULowEntryBitDataEntry::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LowEntryBitDataEntry");

	return Clss;
}


// LowEntryBitDataEntry LowEntryExtendedStandardLibrary.Default__LowEntryBitDataEntry
// (Public, ClassDefaultObject, ArchetypeObject)

class ULowEntryBitDataEntry* ULowEntryBitDataEntry::GetDefaultObj()
{
	static class ULowEntryBitDataEntry* Default = nullptr;

	if (!Default)
		Default = static_cast<ULowEntryBitDataEntry*>(ULowEntryBitDataEntry::StaticClass()->DefaultObject);

	return Default;
}


// Class LowEntryExtendedStandardLibrary.LowEntryBitDataReader
// (None)

class UClass* ULowEntryBitDataReader::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LowEntryBitDataReader");

	return Clss;
}


// LowEntryBitDataReader LowEntryExtendedStandardLibrary.Default__LowEntryBitDataReader
// (Public, ClassDefaultObject, ArchetypeObject)

class ULowEntryBitDataReader* ULowEntryBitDataReader::GetDefaultObj()
{
	static class ULowEntryBitDataReader* Default = nullptr;

	if (!Default)
		Default = static_cast<ULowEntryBitDataReader*>(ULowEntryBitDataReader::StaticClass()->DefaultObject);

	return Default;
}


// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.SetPosition
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Position_                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryBitDataReader::SetPosition(int32 Position_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryBitDataReader", "SetPosition");

	Params::ULowEntryBitDataReader_SetPosition_Params Parms{};

	Parms.Position_ = Position_;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.Reset
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void ULowEntryBitDataReader::Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryBitDataReader", "Reset");

	Params::ULowEntryBitDataReader_Reset_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.Remaining
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 ULowEntryBitDataReader::Remaining()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryBitDataReader", "Remaining");

	Params::ULowEntryBitDataReader_Remaining_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetStringUtf8Array
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> ULowEntryBitDataReader::GetStringUtf8Array()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryBitDataReader", "GetStringUtf8Array");

	Params::ULowEntryBitDataReader_GetStringUtf8Array_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetStringUtf8
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULowEntryBitDataReader::GetStringUtf8()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryBitDataReader", "GetStringUtf8");

	Params::ULowEntryBitDataReader_GetStringUtf8_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetPositiveInteger3Array
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<int32>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<int32> ULowEntryBitDataReader::GetPositiveInteger3Array()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryBitDataReader", "GetPositiveInteger3Array");

	Params::ULowEntryBitDataReader_GetPositiveInteger3Array_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetPositiveInteger3
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 ULowEntryBitDataReader::GetPositiveInteger3()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryBitDataReader", "GetPositiveInteger3");

	Params::ULowEntryBitDataReader_GetPositiveInteger3_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetPositiveInteger2Array
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<int32>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<int32> ULowEntryBitDataReader::GetPositiveInteger2Array()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryBitDataReader", "GetPositiveInteger2Array");

	Params::ULowEntryBitDataReader_GetPositiveInteger2Array_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetPositiveInteger2
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 ULowEntryBitDataReader::GetPositiveInteger2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryBitDataReader", "GetPositiveInteger2");

	Params::ULowEntryBitDataReader_GetPositiveInteger2_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetPositiveInteger1Array
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<int32>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<int32> ULowEntryBitDataReader::GetPositiveInteger1Array()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryBitDataReader", "GetPositiveInteger1Array");

	Params::ULowEntryBitDataReader_GetPositiveInteger1Array_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetPositiveInteger1
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 ULowEntryBitDataReader::GetPositiveInteger1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryBitDataReader", "GetPositiveInteger1");

	Params::ULowEntryBitDataReader_GetPositiveInteger1_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetPosition
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 ULowEntryBitDataReader::GetPosition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryBitDataReader", "GetPosition");

	Params::ULowEntryBitDataReader_GetPosition_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetLongBytesArray
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class ULowEntryLong*>       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class ULowEntryLong*> ULowEntryBitDataReader::GetLongBytesArray()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryBitDataReader", "GetLongBytesArray");

	Params::ULowEntryBitDataReader_GetLongBytesArray_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetLongBytes
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ULowEntryLong*               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULowEntryLong* ULowEntryBitDataReader::GetLongBytes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryBitDataReader", "GetLongBytes");

	Params::ULowEntryBitDataReader_GetLongBytes_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetLongArray
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<int64>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<int64> ULowEntryBitDataReader::GetLongArray()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryBitDataReader", "GetLongArray");

	Params::ULowEntryBitDataReader_GetLongArray_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetLong
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int64 ULowEntryBitDataReader::GetLong()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryBitDataReader", "GetLong");

	Params::ULowEntryBitDataReader_GetLong_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetIntegerMostSignificantBits
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              BitCount                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 ULowEntryBitDataReader::GetIntegerMostSignificantBits(int32 BitCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryBitDataReader", "GetIntegerMostSignificantBits");

	Params::ULowEntryBitDataReader_GetIntegerMostSignificantBits_Params Parms{};

	Parms.BitCount = BitCount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetIntegerLeastSignificantBits
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              BitCount                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 ULowEntryBitDataReader::GetIntegerLeastSignificantBits(int32 BitCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryBitDataReader", "GetIntegerLeastSignificantBits");

	Params::ULowEntryBitDataReader_GetIntegerLeastSignificantBits_Params Parms{};

	Parms.BitCount = BitCount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetIntegerArrayMostSignificantBits
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              BitCount                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int32>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<int32> ULowEntryBitDataReader::GetIntegerArrayMostSignificantBits(int32 BitCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryBitDataReader", "GetIntegerArrayMostSignificantBits");

	Params::ULowEntryBitDataReader_GetIntegerArrayMostSignificantBits_Params Parms{};

	Parms.BitCount = BitCount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetIntegerArrayLeastSignificantBits
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              BitCount                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int32>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<int32> ULowEntryBitDataReader::GetIntegerArrayLeastSignificantBits(int32 BitCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryBitDataReader", "GetIntegerArrayLeastSignificantBits");

	Params::ULowEntryBitDataReader_GetIntegerArrayLeastSignificantBits_Params Parms{};

	Parms.BitCount = BitCount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetIntegerArray
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<int32>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<int32> ULowEntryBitDataReader::GetIntegerArray()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryBitDataReader", "GetIntegerArray");

	Params::ULowEntryBitDataReader_GetIntegerArray_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetInteger
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 ULowEntryBitDataReader::GetInteger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryBitDataReader", "GetInteger");

	Params::ULowEntryBitDataReader_GetInteger_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetFloatArray
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<float>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<float> ULowEntryBitDataReader::GetFloatArray()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryBitDataReader", "GetFloatArray");

	Params::ULowEntryBitDataReader_GetFloatArray_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetFloat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float ULowEntryBitDataReader::GetFloat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryBitDataReader", "GetFloat");

	Params::ULowEntryBitDataReader_GetFloat_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetDoubleBytesArray
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class ULowEntryDouble*>     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class ULowEntryDouble*> ULowEntryBitDataReader::GetDoubleBytesArray()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryBitDataReader", "GetDoubleBytesArray");

	Params::ULowEntryBitDataReader_GetDoubleBytesArray_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetDoubleBytes
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ULowEntryDouble*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULowEntryDouble* ULowEntryBitDataReader::GetDoubleBytes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryBitDataReader", "GetDoubleBytes");

	Params::ULowEntryBitDataReader_GetDoubleBytes_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetDoubleArray
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<double>                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<double> ULowEntryBitDataReader::GetDoubleArray()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryBitDataReader", "GetDoubleArray");

	Params::ULowEntryBitDataReader_GetDoubleArray_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetDouble
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// double                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

double ULowEntryBitDataReader::GetDouble()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryBitDataReader", "GetDouble");

	Params::ULowEntryBitDataReader_GetDouble_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetClone
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ULowEntryBitDataReader*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULowEntryBitDataReader* ULowEntryBitDataReader::GetClone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryBitDataReader", "GetClone");

	Params::ULowEntryBitDataReader_GetClone_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetByteMostSignificantBits
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              BitCount                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

uint8 ULowEntryBitDataReader::GetByteMostSignificantBits(int32 BitCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryBitDataReader", "GetByteMostSignificantBits");

	Params::ULowEntryBitDataReader_GetByteMostSignificantBits_Params Parms{};

	Parms.BitCount = BitCount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetByteLeastSignificantBits
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              BitCount                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

uint8 ULowEntryBitDataReader::GetByteLeastSignificantBits(int32 BitCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryBitDataReader", "GetByteLeastSignificantBits");

	Params::ULowEntryBitDataReader_GetByteLeastSignificantBits_Params Parms{};

	Parms.BitCount = BitCount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetByteArrayMostSignificantBits
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              BitCount                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<uint8> ULowEntryBitDataReader::GetByteArrayMostSignificantBits(int32 BitCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryBitDataReader", "GetByteArrayMostSignificantBits");

	Params::ULowEntryBitDataReader_GetByteArrayMostSignificantBits_Params Parms{};

	Parms.BitCount = BitCount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetByteArrayLeastSignificantBits
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              BitCount                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<uint8> ULowEntryBitDataReader::GetByteArrayLeastSignificantBits(int32 BitCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryBitDataReader", "GetByteArrayLeastSignificantBits");

	Params::ULowEntryBitDataReader_GetByteArrayLeastSignificantBits_Params Parms{};

	Parms.BitCount = BitCount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetByteArray
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<uint8>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<uint8> ULowEntryBitDataReader::GetByteArray()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryBitDataReader", "GetByteArray");

	Params::ULowEntryBitDataReader_GetByteArray_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetByte
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// uint8                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

uint8 ULowEntryBitDataReader::GetByte()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryBitDataReader", "GetByte");

	Params::ULowEntryBitDataReader_GetByte_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetBooleanArray
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<bool>                       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<bool> ULowEntryBitDataReader::GetBooleanArray()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryBitDataReader", "GetBooleanArray");

	Params::ULowEntryBitDataReader_GetBooleanArray_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetBoolean
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULowEntryBitDataReader::GetBoolean()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryBitDataReader", "GetBoolean");

	Params::ULowEntryBitDataReader_GetBoolean_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetBitArray
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<bool>                       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<bool> ULowEntryBitDataReader::GetBitArray()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryBitDataReader", "GetBitArray");

	Params::ULowEntryBitDataReader_GetBitArray_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.GetBit
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULowEntryBitDataReader::GetBit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryBitDataReader", "GetBit");

	Params::ULowEntryBitDataReader_GetBit_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryBitDataReader.Empty
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void ULowEntryBitDataReader::Empty()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryBitDataReader", "Empty");

	Params::ULowEntryBitDataReader_Empty_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class LowEntryExtendedStandardLibrary.LowEntryBitDataWriter
// (None)

class UClass* ULowEntryBitDataWriter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LowEntryBitDataWriter");

	return Clss;
}


// LowEntryBitDataWriter LowEntryExtendedStandardLibrary.Default__LowEntryBitDataWriter
// (Public, ClassDefaultObject, ArchetypeObject)

class ULowEntryBitDataWriter* ULowEntryBitDataWriter::GetDefaultObj()
{
	static class ULowEntryBitDataWriter* Default = nullptr;

	if (!Default)
		Default = static_cast<ULowEntryBitDataWriter*>(ULowEntryBitDataWriter::StaticClass()->DefaultObject);

	return Default;
}


// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddStringUtf8Array
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class FString>              Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void ULowEntryBitDataWriter::AddStringUtf8Array(TArray<class FString>& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryBitDataWriter", "AddStringUtf8Array");

	Params::ULowEntryBitDataWriter_AddStringUtf8Array_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddStringUtf8
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryBitDataWriter::AddStringUtf8(const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryBitDataWriter", "AddStringUtf8");

	Params::ULowEntryBitDataWriter_AddStringUtf8_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddPositiveInteger3Array
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<int32>                      Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void ULowEntryBitDataWriter::AddPositiveInteger3Array(TArray<int32>& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryBitDataWriter", "AddPositiveInteger3Array");

	Params::ULowEntryBitDataWriter_AddPositiveInteger3Array_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddPositiveInteger3
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryBitDataWriter::AddPositiveInteger3(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryBitDataWriter", "AddPositiveInteger3");

	Params::ULowEntryBitDataWriter_AddPositiveInteger3_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddPositiveInteger2Array
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<int32>                      Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void ULowEntryBitDataWriter::AddPositiveInteger2Array(TArray<int32>& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryBitDataWriter", "AddPositiveInteger2Array");

	Params::ULowEntryBitDataWriter_AddPositiveInteger2Array_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddPositiveInteger2
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryBitDataWriter::AddPositiveInteger2(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryBitDataWriter", "AddPositiveInteger2");

	Params::ULowEntryBitDataWriter_AddPositiveInteger2_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddPositiveInteger1Array
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<int32>                      Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void ULowEntryBitDataWriter::AddPositiveInteger1Array(TArray<int32>& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryBitDataWriter", "AddPositiveInteger1Array");

	Params::ULowEntryBitDataWriter_AddPositiveInteger1Array_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddPositiveInteger1
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryBitDataWriter::AddPositiveInteger1(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryBitDataWriter", "AddPositiveInteger1");

	Params::ULowEntryBitDataWriter_AddPositiveInteger1_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddLongBytesArray
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class ULowEntryLong*>       Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void ULowEntryBitDataWriter::AddLongBytesArray(TArray<class ULowEntryLong*>& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryBitDataWriter", "AddLongBytesArray");

	Params::ULowEntryBitDataWriter_AddLongBytesArray_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddLongBytes
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ULowEntryLong*               Value                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryBitDataWriter::AddLongBytes(class ULowEntryLong* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryBitDataWriter", "AddLongBytes");

	Params::ULowEntryBitDataWriter_AddLongBytes_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddLongArray
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<int64>                      Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void ULowEntryBitDataWriter::AddLongArray(TArray<int64>& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryBitDataWriter", "AddLongArray");

	Params::ULowEntryBitDataWriter_AddLongArray_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddLong
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryBitDataWriter::AddLong(int64 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryBitDataWriter", "AddLong");

	Params::ULowEntryBitDataWriter_AddLong_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddIntegerMostSignificantBits
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              BitCount                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryBitDataWriter::AddIntegerMostSignificantBits(int32 Value, int32 BitCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryBitDataWriter", "AddIntegerMostSignificantBits");

	Params::ULowEntryBitDataWriter_AddIntegerMostSignificantBits_Params Parms{};

	Parms.Value = Value;
	Parms.BitCount = BitCount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddIntegerLeastSignificantBits
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              BitCount                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryBitDataWriter::AddIntegerLeastSignificantBits(int32 Value, int32 BitCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryBitDataWriter", "AddIntegerLeastSignificantBits");

	Params::ULowEntryBitDataWriter_AddIntegerLeastSignificantBits_Params Parms{};

	Parms.Value = Value;
	Parms.BitCount = BitCount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddIntegerArrayMostSignificantBits
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<int32>                      Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              BitCount                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryBitDataWriter::AddIntegerArrayMostSignificantBits(TArray<int32>& Value, int32 BitCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryBitDataWriter", "AddIntegerArrayMostSignificantBits");

	Params::ULowEntryBitDataWriter_AddIntegerArrayMostSignificantBits_Params Parms{};

	Parms.Value = Value;
	Parms.BitCount = BitCount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddIntegerArrayLeastSignificantBits
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<int32>                      Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              BitCount                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryBitDataWriter::AddIntegerArrayLeastSignificantBits(TArray<int32>& Value, int32 BitCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryBitDataWriter", "AddIntegerArrayLeastSignificantBits");

	Params::ULowEntryBitDataWriter_AddIntegerArrayLeastSignificantBits_Params Parms{};

	Parms.Value = Value;
	Parms.BitCount = BitCount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddIntegerArray
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<int32>                      Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void ULowEntryBitDataWriter::AddIntegerArray(TArray<int32>& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryBitDataWriter", "AddIntegerArray");

	Params::ULowEntryBitDataWriter_AddIntegerArray_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddInteger
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryBitDataWriter::AddInteger(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryBitDataWriter", "AddInteger");

	Params::ULowEntryBitDataWriter_AddInteger_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddFloatArray
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<float>                      Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void ULowEntryBitDataWriter::AddFloatArray(TArray<float>& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryBitDataWriter", "AddFloatArray");

	Params::ULowEntryBitDataWriter_AddFloatArray_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddFloat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryBitDataWriter::AddFloat(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryBitDataWriter", "AddFloat");

	Params::ULowEntryBitDataWriter_AddFloat_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddDoubleBytesArray
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class ULowEntryDouble*>     Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void ULowEntryBitDataWriter::AddDoubleBytesArray(TArray<class ULowEntryDouble*>& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryBitDataWriter", "AddDoubleBytesArray");

	Params::ULowEntryBitDataWriter_AddDoubleBytesArray_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddDoubleBytes
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ULowEntryDouble*             Value                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryBitDataWriter::AddDoubleBytes(class ULowEntryDouble* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryBitDataWriter", "AddDoubleBytes");

	Params::ULowEntryBitDataWriter_AddDoubleBytes_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddDoubleArray
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<double>                     Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void ULowEntryBitDataWriter::AddDoubleArray(TArray<double>& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryBitDataWriter", "AddDoubleArray");

	Params::ULowEntryBitDataWriter_AddDoubleArray_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddDouble
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// double                             Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryBitDataWriter::AddDouble(double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryBitDataWriter", "AddDouble");

	Params::ULowEntryBitDataWriter_AddDouble_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddByteMostSignificantBits
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// uint8                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              BitCount                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryBitDataWriter::AddByteMostSignificantBits(uint8 Value, int32 BitCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryBitDataWriter", "AddByteMostSignificantBits");

	Params::ULowEntryBitDataWriter_AddByteMostSignificantBits_Params Parms{};

	Parms.Value = Value;
	Parms.BitCount = BitCount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddByteLeastSignificantBits
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// uint8                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              BitCount                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryBitDataWriter::AddByteLeastSignificantBits(uint8 Value, int32 BitCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryBitDataWriter", "AddByteLeastSignificantBits");

	Params::ULowEntryBitDataWriter_AddByteLeastSignificantBits_Params Parms{};

	Parms.Value = Value;
	Parms.BitCount = BitCount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddByteArrayMostSignificantBits
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<uint8>                      Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              BitCount                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryBitDataWriter::AddByteArrayMostSignificantBits(TArray<uint8>& Value, int32 BitCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryBitDataWriter", "AddByteArrayMostSignificantBits");

	Params::ULowEntryBitDataWriter_AddByteArrayMostSignificantBits_Params Parms{};

	Parms.Value = Value;
	Parms.BitCount = BitCount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddByteArrayLeastSignificantBits
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<uint8>                      Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              BitCount                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryBitDataWriter::AddByteArrayLeastSignificantBits(TArray<uint8>& Value, int32 BitCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryBitDataWriter", "AddByteArrayLeastSignificantBits");

	Params::ULowEntryBitDataWriter_AddByteArrayLeastSignificantBits_Params Parms{};

	Parms.Value = Value;
	Parms.BitCount = BitCount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddByteArray
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<uint8>                      Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void ULowEntryBitDataWriter::AddByteArray(TArray<uint8>& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryBitDataWriter", "AddByteArray");

	Params::ULowEntryBitDataWriter_AddByteArray_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddByte
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// uint8                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryBitDataWriter::AddByte(uint8 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryBitDataWriter", "AddByte");

	Params::ULowEntryBitDataWriter_AddByte_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddBooleanArray
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<bool>                       Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void ULowEntryBitDataWriter::AddBooleanArray(TArray<bool>& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryBitDataWriter", "AddBooleanArray");

	Params::ULowEntryBitDataWriter_AddBooleanArray_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddBoolean
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryBitDataWriter::AddBoolean(bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryBitDataWriter", "AddBoolean");

	Params::ULowEntryBitDataWriter_AddBoolean_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddBitArray
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<bool>                       Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void ULowEntryBitDataWriter::AddBitArray(TArray<bool>& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryBitDataWriter", "AddBitArray");

	Params::ULowEntryBitDataWriter_AddBitArray_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryBitDataWriter.AddBit
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryBitDataWriter::AddBit(bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryBitDataWriter", "AddBit");

	Params::ULowEntryBitDataWriter_AddBit_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class LowEntryExtendedStandardLibrary.LowEntryByteArray
// (None)

class UClass* ULowEntryByteArray::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LowEntryByteArray");

	return Clss;
}


// LowEntryByteArray LowEntryExtendedStandardLibrary.Default__LowEntryByteArray
// (Public, ClassDefaultObject, ArchetypeObject)

class ULowEntryByteArray* ULowEntryByteArray::GetDefaultObj()
{
	static class ULowEntryByteArray* Default = nullptr;

	if (!Default)
		Default = static_cast<ULowEntryByteArray*>(ULowEntryByteArray::StaticClass()->DefaultObject);

	return Default;
}


// Class LowEntryExtendedStandardLibrary.LowEntryByteDataEntry
// (None)

class UClass* ULowEntryByteDataEntry::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LowEntryByteDataEntry");

	return Clss;
}


// LowEntryByteDataEntry LowEntryExtendedStandardLibrary.Default__LowEntryByteDataEntry
// (Public, ClassDefaultObject, ArchetypeObject)

class ULowEntryByteDataEntry* ULowEntryByteDataEntry::GetDefaultObj()
{
	static class ULowEntryByteDataEntry* Default = nullptr;

	if (!Default)
		Default = static_cast<ULowEntryByteDataEntry*>(ULowEntryByteDataEntry::StaticClass()->DefaultObject);

	return Default;
}


// Class LowEntryExtendedStandardLibrary.LowEntryByteDataReader
// (None)

class UClass* ULowEntryByteDataReader::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LowEntryByteDataReader");

	return Clss;
}


// LowEntryByteDataReader LowEntryExtendedStandardLibrary.Default__LowEntryByteDataReader
// (Public, ClassDefaultObject, ArchetypeObject)

class ULowEntryByteDataReader* ULowEntryByteDataReader::GetDefaultObj()
{
	static class ULowEntryByteDataReader* Default = nullptr;

	if (!Default)
		Default = static_cast<ULowEntryByteDataReader*>(ULowEntryByteDataReader::StaticClass()->DefaultObject);

	return Default;
}


// Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.SetPosition
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Position_                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryByteDataReader::SetPosition(int32 Position_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryByteDataReader", "SetPosition");

	Params::ULowEntryByteDataReader_SetPosition_Params Parms{};

	Parms.Position_ = Position_;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.Reset
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void ULowEntryByteDataReader::Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryByteDataReader", "Reset");

	Params::ULowEntryByteDataReader_Reset_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.Remaining
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 ULowEntryByteDataReader::Remaining()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryByteDataReader", "Remaining");

	Params::ULowEntryByteDataReader_Remaining_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetStringUtf8Array
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> ULowEntryByteDataReader::GetStringUtf8Array()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryByteDataReader", "GetStringUtf8Array");

	Params::ULowEntryByteDataReader_GetStringUtf8Array_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetStringUtf8
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULowEntryByteDataReader::GetStringUtf8()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryByteDataReader", "GetStringUtf8");

	Params::ULowEntryByteDataReader_GetStringUtf8_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetPositiveInteger3Array
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<int32>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<int32> ULowEntryByteDataReader::GetPositiveInteger3Array()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryByteDataReader", "GetPositiveInteger3Array");

	Params::ULowEntryByteDataReader_GetPositiveInteger3Array_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetPositiveInteger3
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 ULowEntryByteDataReader::GetPositiveInteger3()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryByteDataReader", "GetPositiveInteger3");

	Params::ULowEntryByteDataReader_GetPositiveInteger3_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetPositiveInteger2Array
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<int32>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<int32> ULowEntryByteDataReader::GetPositiveInteger2Array()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryByteDataReader", "GetPositiveInteger2Array");

	Params::ULowEntryByteDataReader_GetPositiveInteger2Array_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetPositiveInteger2
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 ULowEntryByteDataReader::GetPositiveInteger2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryByteDataReader", "GetPositiveInteger2");

	Params::ULowEntryByteDataReader_GetPositiveInteger2_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetPositiveInteger1Array
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<int32>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<int32> ULowEntryByteDataReader::GetPositiveInteger1Array()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryByteDataReader", "GetPositiveInteger1Array");

	Params::ULowEntryByteDataReader_GetPositiveInteger1Array_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetPositiveInteger1
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 ULowEntryByteDataReader::GetPositiveInteger1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryByteDataReader", "GetPositiveInteger1");

	Params::ULowEntryByteDataReader_GetPositiveInteger1_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetPosition
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 ULowEntryByteDataReader::GetPosition()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryByteDataReader", "GetPosition");

	Params::ULowEntryByteDataReader_GetPosition_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetLongBytesArray
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class ULowEntryLong*>       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class ULowEntryLong*> ULowEntryByteDataReader::GetLongBytesArray()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryByteDataReader", "GetLongBytesArray");

	Params::ULowEntryByteDataReader_GetLongBytesArray_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetLongBytes
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ULowEntryLong*               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULowEntryLong* ULowEntryByteDataReader::GetLongBytes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryByteDataReader", "GetLongBytes");

	Params::ULowEntryByteDataReader_GetLongBytes_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetLongArray
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<int64>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<int64> ULowEntryByteDataReader::GetLongArray()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryByteDataReader", "GetLongArray");

	Params::ULowEntryByteDataReader_GetLongArray_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetLong
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int64 ULowEntryByteDataReader::GetLong()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryByteDataReader", "GetLong");

	Params::ULowEntryByteDataReader_GetLong_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetIntegerArray
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<int32>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<int32> ULowEntryByteDataReader::GetIntegerArray()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryByteDataReader", "GetIntegerArray");

	Params::ULowEntryByteDataReader_GetIntegerArray_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetInteger
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 ULowEntryByteDataReader::GetInteger()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryByteDataReader", "GetInteger");

	Params::ULowEntryByteDataReader_GetInteger_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetFloatArray
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<float>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<float> ULowEntryByteDataReader::GetFloatArray()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryByteDataReader", "GetFloatArray");

	Params::ULowEntryByteDataReader_GetFloatArray_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetFloat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float ULowEntryByteDataReader::GetFloat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryByteDataReader", "GetFloat");

	Params::ULowEntryByteDataReader_GetFloat_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetDoubleBytesArray
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class ULowEntryDouble*>     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class ULowEntryDouble*> ULowEntryByteDataReader::GetDoubleBytesArray()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryByteDataReader", "GetDoubleBytesArray");

	Params::ULowEntryByteDataReader_GetDoubleBytesArray_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetDoubleBytes
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ULowEntryDouble*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULowEntryDouble* ULowEntryByteDataReader::GetDoubleBytes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryByteDataReader", "GetDoubleBytes");

	Params::ULowEntryByteDataReader_GetDoubleBytes_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetDoubleArray
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<double>                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<double> ULowEntryByteDataReader::GetDoubleArray()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryByteDataReader", "GetDoubleArray");

	Params::ULowEntryByteDataReader_GetDoubleArray_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetDouble
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// double                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

double ULowEntryByteDataReader::GetDouble()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryByteDataReader", "GetDouble");

	Params::ULowEntryByteDataReader_GetDouble_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetClone
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ULowEntryByteDataReader*     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULowEntryByteDataReader* ULowEntryByteDataReader::GetClone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryByteDataReader", "GetClone");

	Params::ULowEntryByteDataReader_GetClone_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetByteArray
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<uint8>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<uint8> ULowEntryByteDataReader::GetByteArray()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryByteDataReader", "GetByteArray");

	Params::ULowEntryByteDataReader_GetByteArray_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetByte
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// uint8                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

uint8 ULowEntryByteDataReader::GetByte()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryByteDataReader", "GetByte");

	Params::ULowEntryByteDataReader_GetByte_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetBooleanArray
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<bool>                       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<bool> ULowEntryByteDataReader::GetBooleanArray()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryByteDataReader", "GetBooleanArray");

	Params::ULowEntryByteDataReader_GetBooleanArray_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.GetBoolean
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULowEntryByteDataReader::GetBoolean()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryByteDataReader", "GetBoolean");

	Params::ULowEntryByteDataReader_GetBoolean_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryByteDataReader.Empty
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void ULowEntryByteDataReader::Empty()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryByteDataReader", "Empty");

	Params::ULowEntryByteDataReader_Empty_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class LowEntryExtendedStandardLibrary.LowEntryByteDataWriter
// (None)

class UClass* ULowEntryByteDataWriter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LowEntryByteDataWriter");

	return Clss;
}


// LowEntryByteDataWriter LowEntryExtendedStandardLibrary.Default__LowEntryByteDataWriter
// (Public, ClassDefaultObject, ArchetypeObject)

class ULowEntryByteDataWriter* ULowEntryByteDataWriter::GetDefaultObj()
{
	static class ULowEntryByteDataWriter* Default = nullptr;

	if (!Default)
		Default = static_cast<ULowEntryByteDataWriter*>(ULowEntryByteDataWriter::StaticClass()->DefaultObject);

	return Default;
}


// Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddStringUtf8Array
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class FString>              Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void ULowEntryByteDataWriter::AddStringUtf8Array(TArray<class FString>& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryByteDataWriter", "AddStringUtf8Array");

	Params::ULowEntryByteDataWriter_AddStringUtf8Array_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddStringUtf8
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryByteDataWriter::AddStringUtf8(const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryByteDataWriter", "AddStringUtf8");

	Params::ULowEntryByteDataWriter_AddStringUtf8_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddPositiveInteger3Array
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<int32>                      Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void ULowEntryByteDataWriter::AddPositiveInteger3Array(TArray<int32>& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryByteDataWriter", "AddPositiveInteger3Array");

	Params::ULowEntryByteDataWriter_AddPositiveInteger3Array_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddPositiveInteger3
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryByteDataWriter::AddPositiveInteger3(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryByteDataWriter", "AddPositiveInteger3");

	Params::ULowEntryByteDataWriter_AddPositiveInteger3_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddPositiveInteger2Array
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<int32>                      Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void ULowEntryByteDataWriter::AddPositiveInteger2Array(TArray<int32>& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryByteDataWriter", "AddPositiveInteger2Array");

	Params::ULowEntryByteDataWriter_AddPositiveInteger2Array_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddPositiveInteger2
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryByteDataWriter::AddPositiveInteger2(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryByteDataWriter", "AddPositiveInteger2");

	Params::ULowEntryByteDataWriter_AddPositiveInteger2_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddPositiveInteger1Array
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<int32>                      Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void ULowEntryByteDataWriter::AddPositiveInteger1Array(TArray<int32>& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryByteDataWriter", "AddPositiveInteger1Array");

	Params::ULowEntryByteDataWriter_AddPositiveInteger1Array_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddPositiveInteger1
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryByteDataWriter::AddPositiveInteger1(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryByteDataWriter", "AddPositiveInteger1");

	Params::ULowEntryByteDataWriter_AddPositiveInteger1_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddLongBytesArray
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class ULowEntryLong*>       Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void ULowEntryByteDataWriter::AddLongBytesArray(TArray<class ULowEntryLong*>& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryByteDataWriter", "AddLongBytesArray");

	Params::ULowEntryByteDataWriter_AddLongBytesArray_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddLongBytes
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ULowEntryLong*               Value                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryByteDataWriter::AddLongBytes(class ULowEntryLong* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryByteDataWriter", "AddLongBytes");

	Params::ULowEntryByteDataWriter_AddLongBytes_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddLongArray
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<int64>                      Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void ULowEntryByteDataWriter::AddLongArray(TArray<int64>& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryByteDataWriter", "AddLongArray");

	Params::ULowEntryByteDataWriter_AddLongArray_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddLong
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryByteDataWriter::AddLong(int64 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryByteDataWriter", "AddLong");

	Params::ULowEntryByteDataWriter_AddLong_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddIntegerArray
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<int32>                      Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void ULowEntryByteDataWriter::AddIntegerArray(TArray<int32>& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryByteDataWriter", "AddIntegerArray");

	Params::ULowEntryByteDataWriter_AddIntegerArray_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddInteger
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryByteDataWriter::AddInteger(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryByteDataWriter", "AddInteger");

	Params::ULowEntryByteDataWriter_AddInteger_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddFloatArray
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<float>                      Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void ULowEntryByteDataWriter::AddFloatArray(TArray<float>& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryByteDataWriter", "AddFloatArray");

	Params::ULowEntryByteDataWriter_AddFloatArray_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddFloat
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryByteDataWriter::AddFloat(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryByteDataWriter", "AddFloat");

	Params::ULowEntryByteDataWriter_AddFloat_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddDoubleBytesArray
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class ULowEntryDouble*>     Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void ULowEntryByteDataWriter::AddDoubleBytesArray(TArray<class ULowEntryDouble*>& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryByteDataWriter", "AddDoubleBytesArray");

	Params::ULowEntryByteDataWriter_AddDoubleBytesArray_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddDoubleBytes
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ULowEntryDouble*             Value                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryByteDataWriter::AddDoubleBytes(class ULowEntryDouble* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryByteDataWriter", "AddDoubleBytes");

	Params::ULowEntryByteDataWriter_AddDoubleBytes_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddDoubleArray
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<double>                     Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void ULowEntryByteDataWriter::AddDoubleArray(TArray<double>& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryByteDataWriter", "AddDoubleArray");

	Params::ULowEntryByteDataWriter_AddDoubleArray_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddDouble
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// double                             Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryByteDataWriter::AddDouble(double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryByteDataWriter", "AddDouble");

	Params::ULowEntryByteDataWriter_AddDouble_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddByteArray
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<uint8>                      Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void ULowEntryByteDataWriter::AddByteArray(TArray<uint8>& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryByteDataWriter", "AddByteArray");

	Params::ULowEntryByteDataWriter_AddByteArray_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddByte
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// uint8                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryByteDataWriter::AddByte(uint8 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryByteDataWriter", "AddByte");

	Params::ULowEntryByteDataWriter_AddByte_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddBooleanArray
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<bool>                       Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void ULowEntryByteDataWriter::AddBooleanArray(TArray<bool>& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryByteDataWriter", "AddBooleanArray");

	Params::ULowEntryByteDataWriter_AddBooleanArray_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryByteDataWriter.AddBoolean
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryByteDataWriter::AddBoolean(bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryByteDataWriter", "AddBoolean");

	Params::ULowEntryByteDataWriter_AddBoolean_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class LowEntryExtendedStandardLibrary.LowEntryDouble
// (None)

class UClass* ULowEntryDouble::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LowEntryDouble");

	return Clss;
}


// LowEntryDouble LowEntryExtendedStandardLibrary.Default__LowEntryDouble
// (Public, ClassDefaultObject, ArchetypeObject)

class ULowEntryDouble* ULowEntryDouble::GetDefaultObj()
{
	static class ULowEntryDouble* Default = nullptr;

	if (!Default)
		Default = static_cast<ULowEntryDouble*>(ULowEntryDouble::StaticClass()->DefaultObject);

	return Default;
}


// Function LowEntryExtendedStandardLibrary.LowEntryDouble.SetDouble
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// double                             Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryDouble::SetDouble(double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryDouble", "SetDouble");

	Params::ULowEntryDouble_SetDouble_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryDouble.SetBytes
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<uint8>                      ByteArray                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Length                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryDouble::SetBytes(TArray<uint8>& ByteArray, int32 Index, int32 Length)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryDouble", "SetBytes");

	Params::ULowEntryDouble_SetBytes_Params Parms{};

	Parms.ByteArray = ByteArray;
	Parms.Index = Index;
	Parms.Length = Length;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryDouble.LongBytes_LessThan
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class ULowEntryLong*               Value                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULowEntryDouble::LongBytes_LessThan(class ULowEntryLong* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryDouble", "LongBytes_LessThan");

	Params::ULowEntryDouble_LongBytes_LessThan_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryDouble.LongBytes_GreaterThan
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class ULowEntryLong*               Value                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULowEntryDouble::LongBytes_GreaterThan(class ULowEntryLong* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryDouble", "LongBytes_GreaterThan");

	Params::ULowEntryDouble_LongBytes_GreaterThan_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryDouble.Integer_LessThan
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULowEntryDouble::Integer_LessThan(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryDouble", "Integer_LessThan");

	Params::ULowEntryDouble_Integer_LessThan_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryDouble.Integer_GreaterThan
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULowEntryDouble::Integer_GreaterThan(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryDouble", "Integer_GreaterThan");

	Params::ULowEntryDouble_Integer_GreaterThan_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryDouble.GetDouble
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// double                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

double ULowEntryDouble::GetDouble()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryDouble", "GetDouble");

	Params::ULowEntryDouble_GetDouble_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryDouble.GetBytes
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<uint8>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<uint8> ULowEntryDouble::GetBytes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryDouble", "GetBytes");

	Params::ULowEntryDouble_GetBytes_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryDouble.Float_Subtract
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// double                             Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryDouble::Float_Subtract(double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryDouble", "Float_Subtract");

	Params::ULowEntryDouble_Float_Subtract_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryDouble.Float_LessThan
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// double                             Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULowEntryDouble::Float_LessThan(double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryDouble", "Float_LessThan");

	Params::ULowEntryDouble_Float_LessThan_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryDouble.Float_GreaterThan
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// double                             Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULowEntryDouble::Float_GreaterThan(double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryDouble", "Float_GreaterThan");

	Params::ULowEntryDouble_Float_GreaterThan_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryDouble.Float_Equals
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// double                             Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULowEntryDouble::Float_Equals(double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryDouble", "Float_Equals");

	Params::ULowEntryDouble_Float_Equals_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryDouble.Float_Add
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// double                             Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryDouble::Float_Add(double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryDouble", "Float_Add");

	Params::ULowEntryDouble_Float_Add_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryDouble.DoubleBytes_Subtract
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ULowEntryDouble*             Value                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryDouble::DoubleBytes_Subtract(class ULowEntryDouble* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryDouble", "DoubleBytes_Subtract");

	Params::ULowEntryDouble_DoubleBytes_Subtract_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryDouble.DoubleBytes_LessThan
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class ULowEntryDouble*             Value                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULowEntryDouble::DoubleBytes_LessThan(class ULowEntryDouble* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryDouble", "DoubleBytes_LessThan");

	Params::ULowEntryDouble_DoubleBytes_LessThan_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryDouble.DoubleBytes_GreaterThan
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class ULowEntryDouble*             Value                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULowEntryDouble::DoubleBytes_GreaterThan(class ULowEntryDouble* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryDouble", "DoubleBytes_GreaterThan");

	Params::ULowEntryDouble_DoubleBytes_GreaterThan_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryDouble.DoubleBytes_Equals
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class ULowEntryDouble*             Value                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULowEntryDouble::DoubleBytes_Equals(class ULowEntryDouble* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryDouble", "DoubleBytes_Equals");

	Params::ULowEntryDouble_DoubleBytes_Equals_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryDouble.DoubleBytes_Add
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ULowEntryDouble*             Value                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryDouble::DoubleBytes_Add(class ULowEntryDouble* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryDouble", "DoubleBytes_Add");

	Params::ULowEntryDouble_DoubleBytes_Add_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryDouble.CreateClone
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class ULowEntryDouble*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULowEntryDouble* ULowEntryDouble::CreateClone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryDouble", "CreateClone");

	Params::ULowEntryDouble_CreateClone_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryDouble.CastToString
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              MinFractionalDigits                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULowEntryDouble::CastToString(int32 MinFractionalDigits)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryDouble", "CastToString");

	Params::ULowEntryDouble_CastToString_Params Parms{};

	Parms.MinFractionalDigits = MinFractionalDigits;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryDouble.CastToLongBytes
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class ULowEntryLong*               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULowEntryLong* ULowEntryDouble::CastToLongBytes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryDouble", "CastToLongBytes");

	Params::ULowEntryDouble_CastToLongBytes_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class LowEntryExtendedStandardLibrary.LowEntryExecutionQueue
// (None)

class UClass* ULowEntryExecutionQueue::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LowEntryExecutionQueue");

	return Clss;
}


// LowEntryExecutionQueue LowEntryExtendedStandardLibrary.Default__LowEntryExecutionQueue
// (Public, ClassDefaultObject, ArchetypeObject)

class ULowEntryExecutionQueue* ULowEntryExecutionQueue::GetDefaultObj()
{
	static class ULowEntryExecutionQueue* Default = nullptr;

	if (!Default)
		Default = static_cast<ULowEntryExecutionQueue*>(ULowEntryExecutionQueue::StaticClass()->DefaultObject);

	return Default;
}


// Class LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary
// (None)

class UClass* ULowEntryExtendedStandardLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LowEntryExtendedStandardLibrary");

	return Clss;
}


// LowEntryExtendedStandardLibrary LowEntryExtendedStandardLibrary.Default__LowEntryExtendedStandardLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class ULowEntryExtendedStandardLibrary* ULowEntryExtendedStandardLibrary::GetDefaultObj()
{
	static class ULowEntryExtendedStandardLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<ULowEntryExtendedStandardLibrary*>(ULowEntryExtendedStandardLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.XboxOnePlatform
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULowEntryExtendedStandardLibrary::XboxOnePlatform()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "XboxOnePlatform");

	Params::ULowEntryExtendedStandardLibrary_XboxOnePlatform_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.WithEditor
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULowEntryExtendedStandardLibrary::WithEditor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "WithEditor");

	Params::ULowEntryExtendedStandardLibrary_WithEditor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.WindowsRtPlatform
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULowEntryExtendedStandardLibrary::WindowsRtPlatform()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "WindowsRtPlatform");

	Params::ULowEntryExtendedStandardLibrary_WindowsRtPlatform_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.WindowsRtArmPlatform
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULowEntryExtendedStandardLibrary::WindowsRtArmPlatform()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "WindowsRtArmPlatform");

	Params::ULowEntryExtendedStandardLibrary_WindowsRtArmPlatform_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.WindowsPlatform
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULowEntryExtendedStandardLibrary::WindowsPlatform()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "WindowsPlatform");

	Params::ULowEntryExtendedStandardLibrary_WindowsPlatform_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.WindowsNewlineCharacter
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULowEntryExtendedStandardLibrary::WindowsNewlineCharacter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "WindowsNewlineCharacter");

	Params::ULowEntryExtendedStandardLibrary_WindowsNewlineCharacter_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Windows64Platform
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULowEntryExtendedStandardLibrary::Windows64Platform()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "Windows64Platform");

	Params::ULowEntryExtendedStandardLibrary_Windows64Platform_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Windows32Platform
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULowEntryExtendedStandardLibrary::Windows32Platform()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "Windows32Platform");

	Params::ULowEntryExtendedStandardLibrary_Windows32Platform_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.TickSeconds
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           LatentInfo                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              Ticks                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             SecondsInterval                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Tick                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::TickSeconds(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, int32 Ticks, double SecondsInterval, int32* Tick)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "TickSeconds");

	Params::ULowEntryExtendedStandardLibrary_TickSeconds_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.LatentInfo = LatentInfo;
	Parms.Ticks = Ticks;
	Parms.SecondsInterval = SecondsInterval;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Tick != nullptr)
		*Tick = Parms.Tick;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.TickFrames
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           LatentInfo                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              Ticks                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              FramesInterval                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Tick                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::TickFrames(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, int32 Ticks, int32 FramesInterval, int32* Tick)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "TickFrames");

	Params::ULowEntryExtendedStandardLibrary_TickFrames_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.LatentInfo = LatentInfo;
	Parms.Ticks = Ticks;
	Parms.FramesInterval = FramesInterval;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Tick != nullptr)
		*Tick = Parms.Tick;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.TextureUpdateResource
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UTexture*                    Texture                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::TextureUpdateResource(class UTexture* Texture)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "TextureUpdateResource");

	Params::ULowEntryExtendedStandardLibrary_TextureUpdateResource_Params Parms{};

	Parms.Texture = Texture;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.TextureRenderTarget2DToPixels
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UTextureRenderTarget2D*      TextureRenderTarget2D                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Width                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Height                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FColor>              Pixels                                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::TextureRenderTarget2DToPixels(class UTextureRenderTarget2D* TextureRenderTarget2D, int32* Width, int32* Height, TArray<struct FColor>* Pixels)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "TextureRenderTarget2DToPixels");

	Params::ULowEntryExtendedStandardLibrary_TextureRenderTarget2DToPixels_Params Parms{};

	Parms.TextureRenderTarget2D = TextureRenderTarget2D;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Width != nullptr)
		*Width = Parms.Width;

	if (Height != nullptr)
		*Height = Parms.Height;

	if (Pixels != nullptr)
		*Pixels = Parms.Pixels;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.TextureRenderTarget2DToBytes
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UTextureRenderTarget2D*      TextureRenderTarget2D                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELowEntryImageFormat    ImageFormat                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                      ByteArray                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int32                              CompressionQuality                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::TextureRenderTarget2DToBytes(class UTextureRenderTarget2D* TextureRenderTarget2D, enum class ELowEntryImageFormat ImageFormat, TArray<uint8>* ByteArray, int32 CompressionQuality)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "TextureRenderTarget2DToBytes");

	Params::ULowEntryExtendedStandardLibrary_TextureRenderTarget2DToBytes_Params Parms{};

	Parms.TextureRenderTarget2D = TextureRenderTarget2D;
	Parms.ImageFormat = ImageFormat;
	Parms.CompressionQuality = CompressionQuality;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ByteArray != nullptr)
		*ByteArray = Parms.ByteArray;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Texture2DToPixels
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UTexture2D*                  Texture2D                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Width                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Height                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FColor>              Pixels                                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::Texture2DToPixels(class UTexture2D* Texture2D, int32* Width, int32* Height, TArray<struct FColor>* Pixels)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "Texture2DToPixels");

	Params::ULowEntryExtendedStandardLibrary_Texture2DToPixels_Params Parms{};

	Parms.Texture2D = Texture2D;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Width != nullptr)
		*Width = Parms.Width;

	if (Height != nullptr)
		*Height = Parms.Height;

	if (Pixels != nullptr)
		*Pixels = Parms.Pixels;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Texture2DToBytes
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UTexture2D*                  Texture2D                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELowEntryImageFormat    ImageFormat                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                      ByteArray                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int32                              CompressionQuality                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::Texture2DToBytes(class UTexture2D* Texture2D, enum class ELowEntryImageFormat ImageFormat, TArray<uint8>* ByteArray, int32 CompressionQuality)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "Texture2DToBytes");

	Params::ULowEntryExtendedStandardLibrary_Texture2DToBytes_Params Parms{};

	Parms.Texture2D = Texture2D;
	Parms.ImageFormat = ImageFormat;
	Parms.CompressionQuality = CompressionQuality;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ByteArray != nullptr)
		*ByteArray = Parms.ByteArray;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.TestBuild
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULowEntryExtendedStandardLibrary::TestBuild()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "TestBuild");

	Params::ULowEntryExtendedStandardLibrary_TestBuild_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.TabCharacter
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULowEntryExtendedStandardLibrary::TabCharacter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "TabCharacter");

	Params::ULowEntryExtendedStandardLibrary_TabCharacter_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SwitchPlatform
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULowEntryExtendedStandardLibrary::SwitchPlatform()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "SwitchPlatform");

	Params::ULowEntryExtendedStandardLibrary_SwitchPlatform_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.StringToBytesUtf8
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      String                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<uint8> ULowEntryExtendedStandardLibrary::StringToBytesUtf8(const class FString& String)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "StringToBytesUtf8");

	Params::ULowEntryExtendedStandardLibrary_StringToBytesUtf8_Params Parms{};

	Parms.String = String;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SplitBytes
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<uint8>                      ByteArray                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              LengthA                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                      A                                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<uint8>                      B                                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::SplitBytes(TArray<uint8>& ByteArray, int32 LengthA, TArray<uint8>* A, TArray<uint8>* B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "SplitBytes");

	Params::ULowEntryExtendedStandardLibrary_SplitBytes_Params Parms{};

	Parms.ByteArray = ByteArray;
	Parms.LengthA = LengthA;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (A != nullptr)
		*A = Parms.A;

	if (B != nullptr)
		*B = Parms.B;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SoundClass_SetVolume
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USoundClass*                 SoundClass                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             Volume                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::SoundClass_SetVolume(class USoundClass* SoundClass, double Volume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "SoundClass_SetVolume");

	Params::ULowEntryExtendedStandardLibrary_SoundClass_SetVolume_Params Parms{};

	Parms.SoundClass = SoundClass;
	Parms.Volume = Volume;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SoundClass_SetPitch
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USoundClass*                 SoundClass                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             Pitch                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::SoundClass_SetPitch(class USoundClass* SoundClass, double Pitch)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "SoundClass_SetPitch");

	Params::ULowEntryExtendedStandardLibrary_SoundClass_SetPitch_Params Parms{};

	Parms.SoundClass = SoundClass;
	Parms.Pitch = Pitch;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SoundClass_GetVolume
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class USoundClass*                 SoundClass                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

double ULowEntryExtendedStandardLibrary::SoundClass_GetVolume(class USoundClass* SoundClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "SoundClass_GetVolume");

	Params::ULowEntryExtendedStandardLibrary_SoundClass_GetVolume_Params Parms{};

	Parms.SoundClass = SoundClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SoundClass_GetPitch
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class USoundClass*                 SoundClass                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

double ULowEntryExtendedStandardLibrary::SoundClass_GetPitch(class USoundClass* SoundClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "SoundClass_GetPitch");

	Params::ULowEntryExtendedStandardLibrary_SoundClass_GetPitch_Params Parms{};

	Parms.SoundClass = SoundClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortTimespanArrayDirectly
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FTimespan>           TimespanArray                                                    (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               Reversed                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::SortTimespanArrayDirectly(TArray<struct FTimespan>& TimespanArray, bool Reversed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "SortTimespanArrayDirectly");

	Params::ULowEntryExtendedStandardLibrary_SortTimespanArrayDirectly_Params Parms{};

	Parms.TimespanArray = TimespanArray;
	Parms.Reversed = Reversed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortTimespanArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FTimespan>           TimespanArray                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               Reversed                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FTimespan>           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FTimespan> ULowEntryExtendedStandardLibrary::SortTimespanArray(TArray<struct FTimespan>& TimespanArray, bool Reversed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "SortTimespanArray");

	Params::ULowEntryExtendedStandardLibrary_SortTimespanArray_Params Parms{};

	Parms.TimespanArray = TimespanArray;
	Parms.Reversed = Reversed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortStringArrayDirectly
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class FString>              StringArray                                                      (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               Reversed                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::SortStringArrayDirectly(TArray<class FString>& StringArray, bool Reversed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "SortStringArrayDirectly");

	Params::ULowEntryExtendedStandardLibrary_SortStringArrayDirectly_Params Parms{};

	Parms.StringArray = StringArray;
	Parms.Reversed = Reversed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortStringArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class FString>              StringArray                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               Reversed                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> ULowEntryExtendedStandardLibrary::SortStringArray(TArray<class FString>& StringArray, bool Reversed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "SortStringArray");

	Params::ULowEntryExtendedStandardLibrary_SortStringArray_Params Parms{};

	Parms.StringArray = StringArray;
	Parms.Reversed = Reversed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortObjectArrayDirectly
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class UObject*>             ObjectArray                                                      (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Comparator                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Reversed                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::SortObjectArrayDirectly(TArray<class UObject*>& ObjectArray, FDelegateProperty_ Comparator, bool Reversed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "SortObjectArrayDirectly");

	Params::ULowEntryExtendedStandardLibrary_SortObjectArrayDirectly_Params Parms{};

	Parms.ObjectArray = ObjectArray;
	Parms.Comparator = Comparator;
	Parms.Reversed = Reversed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortObjectArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class UObject*>             ObjectArray                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Comparator                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Reversed                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UObject*>             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UObject*> ULowEntryExtendedStandardLibrary::SortObjectArray(TArray<class UObject*>& ObjectArray, FDelegateProperty_ Comparator, bool Reversed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "SortObjectArray");

	Params::ULowEntryExtendedStandardLibrary_SortObjectArray_Params Parms{};

	Parms.ObjectArray = ObjectArray;
	Parms.Comparator = Comparator;
	Parms.Reversed = Reversed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortIntegerArrayDirectly
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<int32>                      IntegerArray                                                     (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               Reversed                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::SortIntegerArrayDirectly(TArray<int32>& IntegerArray, bool Reversed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "SortIntegerArrayDirectly");

	Params::ULowEntryExtendedStandardLibrary_SortIntegerArrayDirectly_Params Parms{};

	Parms.IntegerArray = IntegerArray;
	Parms.Reversed = Reversed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortIntegerArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<int32>                      IntegerArray                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               Reversed                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int32>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<int32> ULowEntryExtendedStandardLibrary::SortIntegerArray(TArray<int32>& IntegerArray, bool Reversed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "SortIntegerArray");

	Params::ULowEntryExtendedStandardLibrary_SortIntegerArray_Params Parms{};

	Parms.IntegerArray = IntegerArray;
	Parms.Reversed = Reversed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortFloatArrayDirectly
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<float>                      FloatArray                                                       (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               Reversed                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::SortFloatArrayDirectly(TArray<float>& FloatArray, bool Reversed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "SortFloatArrayDirectly");

	Params::ULowEntryExtendedStandardLibrary_SortFloatArrayDirectly_Params Parms{};

	Parms.FloatArray = FloatArray;
	Parms.Reversed = Reversed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortFloatArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<float>                      FloatArray                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               Reversed                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<float> ULowEntryExtendedStandardLibrary::SortFloatArray(TArray<float>& FloatArray, bool Reversed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "SortFloatArray");

	Params::ULowEntryExtendedStandardLibrary_SortFloatArray_Params Parms{};

	Parms.FloatArray = FloatArray;
	Parms.Reversed = Reversed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortDoubleArrayDirectly
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<double>                     DoubleArray                                                      (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               Reversed                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::SortDoubleArrayDirectly(TArray<double>& DoubleArray, bool Reversed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "SortDoubleArrayDirectly");

	Params::ULowEntryExtendedStandardLibrary_SortDoubleArrayDirectly_Params Parms{};

	Parms.DoubleArray = DoubleArray;
	Parms.Reversed = Reversed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortDoubleArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<double>                     DoubleArray                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               Reversed                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<double>                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<double> ULowEntryExtendedStandardLibrary::SortDoubleArray(TArray<double>& DoubleArray, bool Reversed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "SortDoubleArray");

	Params::ULowEntryExtendedStandardLibrary_SortDoubleArray_Params Parms{};

	Parms.DoubleArray = DoubleArray;
	Parms.Reversed = Reversed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortDateTimeArrayDirectly
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FDateTime>           DateTimeArray                                                    (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               Reversed                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::SortDateTimeArrayDirectly(TArray<struct FDateTime>& DateTimeArray, bool Reversed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "SortDateTimeArrayDirectly");

	Params::ULowEntryExtendedStandardLibrary_SortDateTimeArrayDirectly_Params Parms{};

	Parms.DateTimeArray = DateTimeArray;
	Parms.Reversed = Reversed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortDateTimeArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FDateTime>           DateTimeArray                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               Reversed                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FDateTime>           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FDateTime> ULowEntryExtendedStandardLibrary::SortDateTimeArray(TArray<struct FDateTime>& DateTimeArray, bool Reversed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "SortDateTimeArray");

	Params::ULowEntryExtendedStandardLibrary_SortDateTimeArray_Params Parms{};

	Parms.DateTimeArray = DateTimeArray;
	Parms.Reversed = Reversed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortByteArrayDirectly
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<uint8>                      ByteArray                                                        (Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               Reversed                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::SortByteArrayDirectly(TArray<uint8>& ByteArray, bool Reversed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "SortByteArrayDirectly");

	Params::ULowEntryExtendedStandardLibrary_SortByteArrayDirectly_Params Parms{};

	Parms.ByteArray = ByteArray;
	Parms.Reversed = Reversed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SortByteArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<uint8>                      ByteArray                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               Reversed                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<uint8> ULowEntryExtendedStandardLibrary::SortByteArray(TArray<uint8>& ByteArray, bool Reversed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "SortByteArray");

	Params::ULowEntryExtendedStandardLibrary_SortByteArray_Params Parms{};

	Parms.ByteArray = ByteArray;
	Parms.Reversed = Reversed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SimpleKismetSystemLibraryPrintString
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      InString                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::SimpleKismetSystemLibraryPrintString(const class FString& InString)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "SimpleKismetSystemLibraryPrintString");

	Params::ULowEntryExtendedStandardLibrary_SimpleKismetSystemLibraryPrintString_Params Parms{};

	Parms.InString = InString;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ShippingBuild
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULowEntryExtendedStandardLibrary::ShippingBuild()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "ShippingBuild");

	Params::ULowEntryExtendedStandardLibrary_ShippingBuild_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Sha512
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<uint8>                      ByteArray                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Length                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<uint8> ULowEntryExtendedStandardLibrary::Sha512(TArray<uint8>& ByteArray, int32 Index, int32 Length)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "Sha512");

	Params::ULowEntryExtendedStandardLibrary_Sha512_Params Parms{};

	Parms.ByteArray = ByteArray;
	Parms.Index = Index;
	Parms.Length = Length;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Sha256
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<uint8>                      ByteArray                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Length                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<uint8> ULowEntryExtendedStandardLibrary::Sha256(TArray<uint8>& ByteArray, int32 Index, int32 Length)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "Sha256");

	Params::ULowEntryExtendedStandardLibrary_Sha256_Params Parms{};

	Parms.ByteArray = ByteArray;
	Parms.Index = Index;
	Parms.Length = Length;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Sha1
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<uint8>                      ByteArray                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Length                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<uint8> ULowEntryExtendedStandardLibrary::Sha1(TArray<uint8>& ByteArray, int32 Index, int32 Length)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "Sha1");

	Params::ULowEntryExtendedStandardLibrary_Sha1_Params Parms{};

	Parms.ByteArray = ByteArray;
	Parms.Index = Index;
	Parms.Length = Length;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SetWorldRenderingEnabled
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               Enabled                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::SetWorldRenderingEnabled(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "SetWorldRenderingEnabled");

	Params::ULowEntryExtendedStandardLibrary_SetWorldRenderingEnabled_Params Parms{};

	Parms.Enabled = Enabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SetWindowSize
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              Width                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Height                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::SetWindowSize(int32 Width, int32 Height)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "SetWindowSize");

	Params::ULowEntryExtendedStandardLibrary_SetWindowSize_Params Parms{};

	Parms.Width = Width;
	Parms.Height = Height;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SetWindowPositionInPercentagesCentered
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// double                             X                                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             Y                                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::SetWindowPositionInPercentagesCentered(double X, double Y)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "SetWindowPositionInPercentagesCentered");

	Params::ULowEntryExtendedStandardLibrary_SetWindowPositionInPercentagesCentered_Params Parms{};

	Parms.X = X;
	Parms.Y = Y;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SetWindowPosition
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              X                                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Y                                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::SetWindowPosition(int32 X, int32 Y)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "SetWindowPosition");

	Params::ULowEntryExtendedStandardLibrary_SetWindowPosition_Params Parms{};

	Parms.X = X;
	Parms.Y = Y;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SetWindowPositiomInPercentagesCentered
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// double                             X                                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             Y                                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::SetWindowPositiomInPercentagesCentered(double X, double Y)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "SetWindowPositiomInPercentagesCentered");

	Params::ULowEntryExtendedStandardLibrary_SetWindowPositiomInPercentagesCentered_Params Parms{};

	Parms.X = X;
	Parms.Y = Y;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SetWindowMode
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               Fullscreen                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IsFullscreenWindowed                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::SetWindowMode(bool Fullscreen, bool IsFullscreenWindowed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "SetWindowMode");

	Params::ULowEntryExtendedStandardLibrary_SetWindowMode_Params Parms{};

	Parms.Fullscreen = Fullscreen;
	Parms.IsFullscreenWindowed = IsFullscreenWindowed;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SetSplitScreenType_TwoPlayers
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class ELowEntrySplitScreenTypeTwoPlayersType                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::SetSplitScreenType_TwoPlayers(enum class ELowEntrySplitScreenTypeTwoPlayers Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "SetSplitScreenType_TwoPlayers");

	Params::ULowEntryExtendedStandardLibrary_SetSplitScreenType_TwoPlayers_Params Parms{};

	Parms.Type = Type;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SetSplitScreenType_ThreePlayers
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// enum class ELowEntrySplitScreenTypeThreePlayersType                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::SetSplitScreenType_ThreePlayers(enum class ELowEntrySplitScreenTypeThreePlayers Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "SetSplitScreenType_ThreePlayers");

	Params::ULowEntryExtendedStandardLibrary_SetSplitScreenType_ThreePlayers_Params Parms{};

	Parms.Type = Type;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SetSplitScreenEnabled
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               Enabled                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::SetSplitScreenEnabled(bool Enabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "SetSplitScreenEnabled");

	Params::ULowEntryExtendedStandardLibrary_SetSplitScreenEnabled_Params Parms{};

	Parms.Enabled = Enabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SetMousePositionInPercentages
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// double                             X                                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             Y                                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::SetMousePositionInPercentages(double X, double Y)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "SetMousePositionInPercentages");

	Params::ULowEntryExtendedStandardLibrary_SetMousePositionInPercentages_Params Parms{};

	Parms.X = X;
	Parms.Y = Y;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SetMousePosition
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              X                                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Y                                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::SetMousePosition(int32 X, int32 Y)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "SetMousePosition");

	Params::ULowEntryExtendedStandardLibrary_SetMousePosition_Params Parms{};

	Parms.X = X;
	Parms.Y = Y;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SetMouseLockedToViewport
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// bool                               Locked                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::SetMouseLockedToViewport(bool Locked)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "SetMouseLockedToViewport");

	Params::ULowEntryExtendedStandardLibrary_SetMouseLockedToViewport_Params Parms{};

	Parms.Locked = Locked;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SetGenericTeamId
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UActor*                      Target                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              TeamID                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::SetGenericTeamId(class UActor* Target, uint8 TeamID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "SetGenericTeamId");

	Params::ULowEntryExtendedStandardLibrary_SetGenericTeamId_Params Parms{};

	Parms.Target = Target;
	Parms.TeamID = TeamID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ServerChangeMap
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Map                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Args                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPlayerController*           SpecificPlayer                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::ServerChangeMap(class UObject* WorldContextObject, const class FString& Map, const class FString& Args, class UPlayerController* SpecificPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "ServerChangeMap");

	Params::ULowEntryExtendedStandardLibrary_ServerChangeMap_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Map = Map;
	Parms.Args = Args;
	Parms.SpecificPlayer = SpecificPlayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SceneCaptureComponent2DToPixels
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class USceneCaptureComponent2D*    SceneCaptureComponent2D                                          (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Width                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Height                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FColor>              Pixels                                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::SceneCaptureComponent2DToPixels(class USceneCaptureComponent2D* SceneCaptureComponent2D, int32* Width, int32* Height, TArray<struct FColor>* Pixels)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "SceneCaptureComponent2DToPixels");

	Params::ULowEntryExtendedStandardLibrary_SceneCaptureComponent2DToPixels_Params Parms{};

	Parms.SceneCaptureComponent2D = SceneCaptureComponent2D;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Width != nullptr)
		*Width = Parms.Width;

	if (Height != nullptr)
		*Height = Parms.Height;

	if (Pixels != nullptr)
		*Pixels = Parms.Pixels;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SceneCaptureComponent2DToBytes
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class USceneCaptureComponent2D*    SceneCaptureComponent2D                                          (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELowEntryImageFormat    ImageFormat                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                      ByteArray                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int32                              CompressionQuality                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::SceneCaptureComponent2DToBytes(class USceneCaptureComponent2D* SceneCaptureComponent2D, enum class ELowEntryImageFormat ImageFormat, TArray<uint8>* ByteArray, int32 CompressionQuality)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "SceneCaptureComponent2DToBytes");

	Params::ULowEntryExtendedStandardLibrary_SceneCaptureComponent2DToBytes_Params Parms{};

	Parms.SceneCaptureComponent2D = SceneCaptureComponent2D;
	Parms.ImageFormat = ImageFormat;
	Parms.CompressionQuality = CompressionQuality;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ByteArray != nullptr)
		*ByteArray = Parms.ByteArray;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SceneCaptureComponent2D_SetFov
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USceneCaptureComponent2D*    SceneCaptureComponent2D                                          (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             FOV                                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::SceneCaptureComponent2D_SetFov(class USceneCaptureComponent2D* SceneCaptureComponent2D, double FOV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "SceneCaptureComponent2D_SetFov");

	Params::ULowEntryExtendedStandardLibrary_SceneCaptureComponent2D_SetFov_Params Parms{};

	Parms.SceneCaptureComponent2D = SceneCaptureComponent2D;
	Parms.FOV = FOV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SceneCaptureComponent2D_GetFov
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class USceneCaptureComponent2D*    SceneCaptureComponent2D                                          (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             FOV                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::SceneCaptureComponent2D_GetFov(class USceneCaptureComponent2D* SceneCaptureComponent2D, double* FOV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "SceneCaptureComponent2D_GetFov");

	Params::ULowEntryExtendedStandardLibrary_SceneCaptureComponent2D_GetFov_Params Parms{};

	Parms.SceneCaptureComponent2D = SceneCaptureComponent2D;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (FOV != nullptr)
		*FOV = Parms.FOV;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SceneCapture2DToPixels
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class USceneCapture2D*             SceneCapture2D                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Width                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Height                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FColor>              Pixels                                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::SceneCapture2DToPixels(class USceneCapture2D* SceneCapture2D, int32* Width, int32* Height, TArray<struct FColor>* Pixels)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "SceneCapture2DToPixels");

	Params::ULowEntryExtendedStandardLibrary_SceneCapture2DToPixels_Params Parms{};

	Parms.SceneCapture2D = SceneCapture2D;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Width != nullptr)
		*Width = Parms.Width;

	if (Height != nullptr)
		*Height = Parms.Height;

	if (Pixels != nullptr)
		*Pixels = Parms.Pixels;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SceneCapture2DToBytes
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class USceneCapture2D*             SceneCapture2D                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELowEntryImageFormat    ImageFormat                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                      ByteArray                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int32                              CompressionQuality                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::SceneCapture2DToBytes(class USceneCapture2D* SceneCapture2D, enum class ELowEntryImageFormat ImageFormat, TArray<uint8>* ByteArray, int32 CompressionQuality)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "SceneCapture2DToBytes");

	Params::ULowEntryExtendedStandardLibrary_SceneCapture2DToBytes_Params Parms{};

	Parms.SceneCapture2D = SceneCapture2D;
	Parms.ImageFormat = ImageFormat;
	Parms.CompressionQuality = CompressionQuality;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ByteArray != nullptr)
		*ByteArray = Parms.ByteArray;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SceneCapture2D_SetFov
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USceneCapture2D*             SceneCapture2D                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             FOV                                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::SceneCapture2D_SetFov(class USceneCapture2D* SceneCapture2D, double FOV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "SceneCapture2D_SetFov");

	Params::ULowEntryExtendedStandardLibrary_SceneCapture2D_SetFov_Params Parms{};

	Parms.SceneCapture2D = SceneCapture2D;
	Parms.FOV = FOV;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.SceneCapture2D_GetFov
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class USceneCapture2D*             SceneCapture2D                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             FOV                                                              (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::SceneCapture2D_GetFov(class USceneCapture2D* SceneCapture2D, double* FOV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "SceneCapture2D_GetFov");

	Params::ULowEntryExtendedStandardLibrary_SceneCapture2D_GetFov_Params Parms{};

	Parms.SceneCapture2D = SceneCapture2D;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (FOV != nullptr)
		*FOV = Parms.FOV;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.RoundDecimals
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// double                             Number                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Decimals                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

double ULowEntryExtendedStandardLibrary::RoundDecimals(double Number, int32 Decimals)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "RoundDecimals");

	Params::ULowEntryExtendedStandardLibrary_RoundDecimals_Params Parms{};

	Parms.Number = Number;
	Parms.Decimals = Decimals;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.RetriggerableRandomDelayFrames
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MinFrames                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MaxFrames                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           LatentInfo                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::RetriggerableRandomDelayFrames(class UObject* WorldContextObject, int32 MinFrames, int32 MaxFrames, const struct FLatentActionInfo& LatentInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "RetriggerableRandomDelayFrames");

	Params::ULowEntryExtendedStandardLibrary_RetriggerableRandomDelayFrames_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.MinFrames = MinFrames;
	Parms.MaxFrames = MaxFrames;
	Parms.LatentInfo = LatentInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.RetriggerableRandomDelay
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             MinDuration                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             MaxDuration                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           LatentInfo                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::RetriggerableRandomDelay(class UObject* WorldContextObject, double MinDuration, double MaxDuration, const struct FLatentActionInfo& LatentInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "RetriggerableRandomDelay");

	Params::ULowEntryExtendedStandardLibrary_RetriggerableRandomDelay_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.MinDuration = MinDuration;
	Parms.MaxDuration = MaxDuration;
	Parms.LatentInfo = LatentInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.RetriggerableDelayFrames
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Frames                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           LatentInfo                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::RetriggerableDelayFrames(class UObject* WorldContextObject, int32 Frames, const struct FLatentActionInfo& LatentInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "RetriggerableDelayFrames");

	Params::ULowEntryExtendedStandardLibrary_RetriggerableDelayFrames_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Frames = Frames;
	Parms.LatentInfo = LatentInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ReplaceCharactersExcept
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      String                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReplacementCharacter                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               KeepLowercaseAZ                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               KeepUppercaseAZ                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               KeepNumbers                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OtherCharactersToKeep                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULowEntryExtendedStandardLibrary::ReplaceCharactersExcept(const class FString& String, const class FString& ReplacementCharacter, bool KeepLowercaseAZ, bool KeepUppercaseAZ, bool KeepNumbers, const class FString& OtherCharactersToKeep)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "ReplaceCharactersExcept");

	Params::ULowEntryExtendedStandardLibrary_ReplaceCharactersExcept_Params Parms{};

	Parms.String = String;
	Parms.ReplacementCharacter = ReplacementCharacter;
	Parms.KeepLowercaseAZ = KeepLowercaseAZ;
	Parms.KeepUppercaseAZ = KeepUppercaseAZ;
	Parms.KeepNumbers = KeepNumbers;
	Parms.OtherCharactersToKeep = OtherCharactersToKeep;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.RemoveCharactersExcept
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      String                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               KeepLowercaseAZ                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               KeepUppercaseAZ                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               KeepNumbers                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OtherCharactersToKeep                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULowEntryExtendedStandardLibrary::RemoveCharactersExcept(const class FString& String, bool KeepLowercaseAZ, bool KeepUppercaseAZ, bool KeepNumbers, const class FString& OtherCharactersToKeep)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "RemoveCharactersExcept");

	Params::ULowEntryExtendedStandardLibrary_RemoveCharactersExcept_Params Parms{};

	Parms.String = String;
	Parms.KeepLowercaseAZ = KeepLowercaseAZ;
	Parms.KeepUppercaseAZ = KeepUppercaseAZ;
	Parms.KeepNumbers = KeepNumbers;
	Parms.OtherCharactersToKeep = OtherCharactersToKeep;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.RegexReplace
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      String                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Pattern                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Replacement                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULowEntryExtendedStandardLibrary::RegexReplace(const class FString& String, const class FString& Pattern, const class FString& Replacement)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "RegexReplace");

	Params::ULowEntryExtendedStandardLibrary_RegexReplace_Params Parms{};

	Parms.String = String;
	Parms.Pattern = Pattern;
	Parms.Replacement = Replacement;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.RegexMatch
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      String                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Pattern                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULowEntryExtendedStandardLibrary::RegexMatch(const class FString& String, const class FString& Pattern)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "RegexMatch");

	Params::ULowEntryExtendedStandardLibrary_RegexMatch_Params Parms{};

	Parms.String = String;
	Parms.Pattern = Pattern;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.RegexGetMatches
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      String                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Pattern                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FLowEntryRegexMatch> ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FLowEntryRegexMatch> ULowEntryExtendedStandardLibrary::RegexGetMatches(const class FString& String, const class FString& Pattern)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "RegexGetMatches");

	Params::ULowEntryExtendedStandardLibrary_RegexGetMatches_Params Parms{};

	Parms.String = String;
	Parms.Pattern = Pattern;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.RegexCount
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      String                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Pattern                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 ULowEntryExtendedStandardLibrary::RegexCount(const class FString& String, const class FString& Pattern)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "RegexCount");

	Params::ULowEntryExtendedStandardLibrary_RegexCount_Params Parms{};

	Parms.String = String;
	Parms.Pattern = Pattern;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.RandomDelayFrames
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MinFrames                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MaxFrames                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           LatentInfo                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::RandomDelayFrames(class UObject* WorldContextObject, int32 MinFrames, int32 MaxFrames, const struct FLatentActionInfo& LatentInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "RandomDelayFrames");

	Params::ULowEntryExtendedStandardLibrary_RandomDelayFrames_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.MinFrames = MinFrames;
	Parms.MaxFrames = MaxFrames;
	Parms.LatentInfo = LatentInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.RandomDelay
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             MinDuration                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             MaxDuration                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           LatentInfo                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::RandomDelay(class UObject* WorldContextObject, double MinDuration, double MaxDuration, const struct FLatentActionInfo& LatentInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "RandomDelay");

	Params::ULowEntryExtendedStandardLibrary_RandomDelay_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.MinDuration = MinDuration;
	Parms.MaxDuration = MaxDuration;
	Parms.LatentInfo = LatentInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.QueueExecutions
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULowEntryExecutionQueue*     Queue                                                            (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           LatentInfo                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::QueueExecutions(class UObject* WorldContextObject, class ULowEntryExecutionQueue** Queue, const struct FLatentActionInfo& LatentInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "QueueExecutions");

	Params::ULowEntryExtendedStandardLibrary_QueueExecutions_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.LatentInfo = LatentInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Queue != nullptr)
		*Queue = Parms.Queue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Ps4Platform
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULowEntryExtendedStandardLibrary::Ps4Platform()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "Ps4Platform");

	Params::ULowEntryExtendedStandardLibrary_Ps4Platform_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.PlayerControllerGetLocalPlayer
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UPlayerController*           PlayerController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULocalPlayer*                LocalPlayer                                                      (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::PlayerControllerGetLocalPlayer(class UPlayerController* PlayerController, bool* Success, class ULocalPlayer** LocalPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "PlayerControllerGetLocalPlayer");

	Params::ULowEntryExtendedStandardLibrary_PlayerControllerGetLocalPlayer_Params Parms{};

	Parms.PlayerController = PlayerController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Success != nullptr)
		*Success = Parms.Success;

	if (LocalPlayer != nullptr)
		*LocalPlayer = Parms.LocalPlayer;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.PixelsToTexture2D
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              Width                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Height                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FColor>              Pixels                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class UTexture2D*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTexture2D* ULowEntryExtendedStandardLibrary::PixelsToTexture2D(int32 Width, int32 Height, TArray<struct FColor>& Pixels)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "PixelsToTexture2D");

	Params::ULowEntryExtendedStandardLibrary_PixelsToTexture2D_Params Parms{};

	Parms.Width = Width;
	Parms.Height = Height;
	Parms.Pixels = Pixels;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.PixelsToExistingTexture2D
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               ReusedGivenTexture2D                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture2D*                  Texture2D                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Width                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Height                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FColor>              Pixels                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class UTexture2D*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTexture2D* ULowEntryExtendedStandardLibrary::PixelsToExistingTexture2D(bool* ReusedGivenTexture2D, class UTexture2D* Texture2D, int32 Width, int32 Height, TArray<struct FColor>& Pixels)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "PixelsToExistingTexture2D");

	Params::ULowEntryExtendedStandardLibrary_PixelsToExistingTexture2D_Params Parms{};

	Parms.Texture2D = Texture2D;
	Parms.Width = Width;
	Parms.Height = Height;
	Parms.Pixels = Pixels;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReusedGivenTexture2D != nullptr)
		*ReusedGivenTexture2D = Parms.ReusedGivenTexture2D;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.PixelsToBytes
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              Width                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Height                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FColor>              Pixels                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// enum class ELowEntryImageFormat    ImageFormat                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                      ByteArray                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int32                              CompressionQuality                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::PixelsToBytes(int32 Width, int32 Height, TArray<struct FColor>& Pixels, enum class ELowEntryImageFormat ImageFormat, TArray<uint8>* ByteArray, int32 CompressionQuality)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "PixelsToBytes");

	Params::ULowEntryExtendedStandardLibrary_PixelsToBytes_Params Parms{};

	Parms.Width = Width;
	Parms.Height = Height;
	Parms.Pixels = Pixels;
	Parms.ImageFormat = ImageFormat;
	Parms.CompressionQuality = CompressionQuality;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ByteArray != nullptr)
		*ByteArray = Parms.ByteArray;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Pearson
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<uint8>                      ByteArray                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              HashLength                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Length                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<uint8> ULowEntryExtendedStandardLibrary::Pearson(TArray<uint8>& ByteArray, int32 HashLength, int32 Index, int32 Length)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "Pearson");

	Params::ULowEntryExtendedStandardLibrary_Pearson_Params Parms{};

	Parms.ByteArray = ByteArray;
	Parms.HashLength = HashLength;
	Parms.Index = Index;
	Parms.Length = Length;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ParseStringIntoLongBytes
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      String                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULowEntryLong*               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULowEntryLong* ULowEntryExtendedStandardLibrary::ParseStringIntoLongBytes(const class FString& String)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "ParseStringIntoLongBytes");

	Params::ULowEntryExtendedStandardLibrary_ParseStringIntoLongBytes_Params Parms{};

	Parms.String = String;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ParseStringIntoLong
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      String                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int64                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int64 ULowEntryExtendedStandardLibrary::ParseStringIntoLong(const class FString& String)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "ParseStringIntoLong");

	Params::ULowEntryExtendedStandardLibrary_ParseStringIntoLong_Params Parms{};

	Parms.String = String;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ParseStringIntoDoubleBytes
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      String                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULowEntryDouble*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULowEntryDouble* ULowEntryExtendedStandardLibrary::ParseStringIntoDoubleBytes(const class FString& String)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "ParseStringIntoDoubleBytes");

	Params::ULowEntryExtendedStandardLibrary_ParseStringIntoDoubleBytes_Params Parms{};

	Parms.String = String;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ParsedHashcashIsValid
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class ULowEntryParsedHashcash*     Target                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULowEntryExtendedStandardLibrary::ParsedHashcashIsValid(class ULowEntryParsedHashcash* Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "ParsedHashcashIsValid");

	Params::ULowEntryExtendedStandardLibrary_ParsedHashcashIsValid_Params Parms{};

	Parms.Target = Target;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.NextQueueExecution
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class ULowEntryExecutionQueue*     Queue                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::NextQueueExecution(class ULowEntryExecutionQueue* Queue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "NextQueueExecution");

	Params::ULowEntryExtendedStandardLibrary_NextQueueExecution_Params Parms{};

	Parms.Queue = Queue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.NewlineCharacter
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULowEntryExtendedStandardLibrary::NewlineCharacter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "NewlineCharacter");

	Params::ULowEntryExtendedStandardLibrary_NewlineCharacter_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.MinString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      A                                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      B                                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULowEntryExtendedStandardLibrary::MinString(const class FString& A, const class FString& B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "MinString");

	Params::ULowEntryExtendedStandardLibrary_MinString_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.MinOfTimespanArray
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FTimespan>           TimespanArray                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              IndexOfMinValue                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTimespan                   MinValue                                                         (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::MinOfTimespanArray(TArray<struct FTimespan>& TimespanArray, int32* IndexOfMinValue, struct FTimespan* MinValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "MinOfTimespanArray");

	Params::ULowEntryExtendedStandardLibrary_MinOfTimespanArray_Params Parms{};

	Parms.TimespanArray = TimespanArray;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (IndexOfMinValue != nullptr)
		*IndexOfMinValue = Parms.IndexOfMinValue;

	if (MinValue != nullptr)
		*MinValue = Parms.MinValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.MinOfStringArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class FString>              StringArray                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              IndexOfMinValue                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      MinValue                                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::MinOfStringArray(TArray<class FString>& StringArray, int32* IndexOfMinValue, class FString* MinValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "MinOfStringArray");

	Params::ULowEntryExtendedStandardLibrary_MinOfStringArray_Params Parms{};

	Parms.StringArray = StringArray;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (IndexOfMinValue != nullptr)
		*IndexOfMinValue = Parms.IndexOfMinValue;

	if (MinValue != nullptr)
		*MinValue = Parms.MinValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.MinOfDateTimeArray
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FDateTime>           DateTimeArray                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              IndexOfMinValue                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDateTime                   MinValue                                                         (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::MinOfDateTimeArray(TArray<struct FDateTime>& DateTimeArray, int32* IndexOfMinValue, struct FDateTime* MinValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "MinOfDateTimeArray");

	Params::ULowEntryExtendedStandardLibrary_MinOfDateTimeArray_Params Parms{};

	Parms.DateTimeArray = DateTimeArray;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (IndexOfMinValue != nullptr)
		*IndexOfMinValue = Parms.IndexOfMinValue;

	if (MinValue != nullptr)
		*MinValue = Parms.MinValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.MergeEncapsulatedByteArrays
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class ULowEntryByteArray*>  ByteArrays                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<uint8>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<uint8> ULowEntryExtendedStandardLibrary::MergeEncapsulatedByteArrays(TArray<class ULowEntryByteArray*>& ByteArrays)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "MergeEncapsulatedByteArrays");

	Params::ULowEntryExtendedStandardLibrary_MergeEncapsulatedByteArrays_Params Parms{};

	Parms.ByteArrays = ByteArrays;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.MergeBytes
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<uint8>                      A                                                                (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<uint8>                      B                                                                (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<uint8>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<uint8> ULowEntryExtendedStandardLibrary::MergeBytes(const TArray<uint8>& A, const TArray<uint8>& B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "MergeBytes");

	Params::ULowEntryExtendedStandardLibrary_MergeBytes_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Md5
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<uint8>                      ByteArray                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Length                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<uint8> ULowEntryExtendedStandardLibrary::Md5(TArray<uint8>& ByteArray, int32 Index, int32 Length)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "Md5");

	Params::ULowEntryExtendedStandardLibrary_Md5_Params Parms{};

	Parms.ByteArray = ByteArray;
	Parms.Index = Index;
	Parms.Length = Length;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.MaxString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      A                                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      B                                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULowEntryExtendedStandardLibrary::MaxString(const class FString& A, const class FString& B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "MaxString");

	Params::ULowEntryExtendedStandardLibrary_MaxString_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.MaxOfTimespanArray
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FTimespan>           TimespanArray                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              IndexOfMaxValue                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTimespan                   MaxValue                                                         (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::MaxOfTimespanArray(TArray<struct FTimespan>& TimespanArray, int32* IndexOfMaxValue, struct FTimespan* MaxValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "MaxOfTimespanArray");

	Params::ULowEntryExtendedStandardLibrary_MaxOfTimespanArray_Params Parms{};

	Parms.TimespanArray = TimespanArray;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (IndexOfMaxValue != nullptr)
		*IndexOfMaxValue = Parms.IndexOfMaxValue;

	if (MaxValue != nullptr)
		*MaxValue = Parms.MaxValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.MaxOfStringArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class FString>              StringArray                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              IndexOfMaxValue                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      MaxValue                                                         (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::MaxOfStringArray(TArray<class FString>& StringArray, int32* IndexOfMaxValue, class FString* MaxValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "MaxOfStringArray");

	Params::ULowEntryExtendedStandardLibrary_MaxOfStringArray_Params Parms{};

	Parms.StringArray = StringArray;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (IndexOfMaxValue != nullptr)
		*IndexOfMaxValue = Parms.IndexOfMaxValue;

	if (MaxValue != nullptr)
		*MaxValue = Parms.MaxValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.MaxOfDateTimeArray
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FDateTime>           DateTimeArray                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              IndexOfMaxValue                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDateTime                   MaxValue                                                         (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::MaxOfDateTimeArray(TArray<struct FDateTime>& DateTimeArray, int32* IndexOfMaxValue, struct FDateTime* MaxValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "MaxOfDateTimeArray");

	Params::ULowEntryExtendedStandardLibrary_MaxOfDateTimeArray_Params Parms{};

	Parms.DateTimeArray = DateTimeArray;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (IndexOfMaxValue != nullptr)
		*IndexOfMaxValue = Parms.IndexOfMaxValue;

	if (MaxValue != nullptr)
		*MaxValue = Parms.MaxValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.MacPlatform
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULowEntryExtendedStandardLibrary::MacPlatform()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "MacPlatform");

	Params::ULowEntryExtendedStandardLibrary_MacPlatform_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LongToBytes
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int64                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<uint8> ULowEntryExtendedStandardLibrary::LongToBytes(int64 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "LongToBytes");

	Params::ULowEntryExtendedStandardLibrary_LongToBytes_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Long_CreateZero
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class ULowEntryLong*               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULowEntryLong* ULowEntryExtendedStandardLibrary::Long_CreateZero()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "Long_CreateZero");

	Params::ULowEntryExtendedStandardLibrary_Long_CreateZero_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Long_Create
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<uint8>                      ByteArray                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Length                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULowEntryLong*               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULowEntryLong* ULowEntryExtendedStandardLibrary::Long_Create(TArray<uint8>& ByteArray, int32 Index, int32 Length)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "Long_Create");

	Params::ULowEntryExtendedStandardLibrary_Long_Create_Params Parms{};

	Parms.ByteArray = ByteArray;
	Parms.Index = Index;
	Parms.Length = Length;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LoadVideo
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UMediaSoundComponent*        MediaSoundComponent                                              (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      URL                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMediaPlayer*                MediaPlayer                                                      (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMediaTexture*               MediaTexture                                                     (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               PlayOnOpen                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Loop                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::LoadVideo(class UMediaSoundComponent* MediaSoundComponent, const class FString& URL, bool* Success, class UMediaPlayer** MediaPlayer, class UMediaTexture** MediaTexture, bool PlayOnOpen, bool Loop)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "LoadVideo");

	Params::ULowEntryExtendedStandardLibrary_LoadVideo_Params Parms{};

	Parms.MediaSoundComponent = MediaSoundComponent;
	Parms.URL = URL;
	Parms.PlayOnOpen = PlayOnOpen;
	Parms.Loop = Loop;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Success != nullptr)
		*Success = Parms.Success;

	if (MediaPlayer != nullptr)
		*MediaPlayer = Parms.MediaPlayer;

	if (MediaTexture != nullptr)
		*MediaTexture = Parms.MediaTexture;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LinuxPlatform
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULowEntryExtendedStandardLibrary::LinuxPlatform()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "LinuxPlatform");

	Params::ULowEntryExtendedStandardLibrary_LinuxPlatform_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessStringString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      A                                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      B                                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULowEntryExtendedStandardLibrary::LessStringString(const class FString& A, const class FString& B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "LessStringString");

	Params::ULowEntryExtendedStandardLibrary_LessStringString_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessIntegerFloat
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              A                                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             B                                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULowEntryExtendedStandardLibrary::LessIntegerFloat(int32 A, double B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "LessIntegerFloat");

	Params::ULowEntryExtendedStandardLibrary_LessIntegerFloat_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessIntegerByte
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              A                                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              B                                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULowEntryExtendedStandardLibrary::LessIntegerByte(int32 A, uint8 B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "LessIntegerByte");

	Params::ULowEntryExtendedStandardLibrary_LessIntegerByte_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessFloatInteger
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// double                             A                                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              B                                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULowEntryExtendedStandardLibrary::LessFloatInteger(double A, int32 B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "LessFloatInteger");

	Params::ULowEntryExtendedStandardLibrary_LessFloatInteger_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessFloatByte
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// double                             A                                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              B                                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULowEntryExtendedStandardLibrary::LessFloatByte(double A, uint8 B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "LessFloatByte");

	Params::ULowEntryExtendedStandardLibrary_LessFloatByte_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessEqualStringString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      A                                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      B                                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULowEntryExtendedStandardLibrary::LessEqualStringString(const class FString& A, const class FString& B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "LessEqualStringString");

	Params::ULowEntryExtendedStandardLibrary_LessEqualStringString_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessEqualIntegerFloat
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              A                                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             B                                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULowEntryExtendedStandardLibrary::LessEqualIntegerFloat(int32 A, double B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "LessEqualIntegerFloat");

	Params::ULowEntryExtendedStandardLibrary_LessEqualIntegerFloat_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessEqualIntegerByte
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              A                                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              B                                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULowEntryExtendedStandardLibrary::LessEqualIntegerByte(int32 A, uint8 B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "LessEqualIntegerByte");

	Params::ULowEntryExtendedStandardLibrary_LessEqualIntegerByte_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessEqualFloatInteger
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// double                             A                                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              B                                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULowEntryExtendedStandardLibrary::LessEqualFloatInteger(double A, int32 B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "LessEqualFloatInteger");

	Params::ULowEntryExtendedStandardLibrary_LessEqualFloatInteger_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessEqualFloatByte
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// double                             A                                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              B                                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULowEntryExtendedStandardLibrary::LessEqualFloatByte(double A, uint8 B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "LessEqualFloatByte");

	Params::ULowEntryExtendedStandardLibrary_LessEqualFloatByte_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessEqualByteInteger
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// uint8                              A                                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              B                                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULowEntryExtendedStandardLibrary::LessEqualByteInteger(uint8 A, int32 B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "LessEqualByteInteger");

	Params::ULowEntryExtendedStandardLibrary_LessEqualByteInteger_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessEqualByteFloat
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// uint8                              A                                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             B                                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULowEntryExtendedStandardLibrary::LessEqualByteFloat(uint8 A, double B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "LessEqualByteFloat");

	Params::ULowEntryExtendedStandardLibrary_LessEqualByteFloat_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessByteInteger
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// uint8                              A                                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              B                                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULowEntryExtendedStandardLibrary::LessByteInteger(uint8 A, int32 B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "LessByteInteger");

	Params::ULowEntryExtendedStandardLibrary_LessByteInteger_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LessByteFloat
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// uint8                              A                                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             B                                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULowEntryExtendedStandardLibrary::LessByteFloat(uint8 A, double B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "LessByteFloat");

	Params::ULowEntryExtendedStandardLibrary_LessByteFloat_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LatentAction_Create_String
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class ULowEntryLatentActionString* LatentAction                                                     (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::LatentAction_Create_String(class ULowEntryLatentActionString** LatentAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "LatentAction_Create_String");

	Params::ULowEntryExtendedStandardLibrary_LatentAction_Create_String_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (LatentAction != nullptr)
		*LatentAction = Parms.LatentAction;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LatentAction_Create_Object
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class ULowEntryLatentActionObject* LatentAction                                                     (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::LatentAction_Create_Object(class ULowEntryLatentActionObject** LatentAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "LatentAction_Create_Object");

	Params::ULowEntryExtendedStandardLibrary_LatentAction_Create_Object_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (LatentAction != nullptr)
		*LatentAction = Parms.LatentAction;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LatentAction_Create_None
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class ULowEntryLatentActionNone*   LatentAction                                                     (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::LatentAction_Create_None(class ULowEntryLatentActionNone** LatentAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "LatentAction_Create_None");

	Params::ULowEntryExtendedStandardLibrary_LatentAction_Create_None_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (LatentAction != nullptr)
		*LatentAction = Parms.LatentAction;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LatentAction_Create_Integer
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class ULowEntryLatentActionInteger*LatentAction                                                     (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::LatentAction_Create_Integer(class ULowEntryLatentActionInteger** LatentAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "LatentAction_Create_Integer");

	Params::ULowEntryExtendedStandardLibrary_LatentAction_Create_Integer_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (LatentAction != nullptr)
		*LatentAction = Parms.LatentAction;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LatentAction_Create_Float
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class ULowEntryLatentActionFloat*  LatentAction                                                     (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::LatentAction_Create_Float(class ULowEntryLatentActionFloat** LatentAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "LatentAction_Create_Float");

	Params::ULowEntryExtendedStandardLibrary_LatentAction_Create_Float_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (LatentAction != nullptr)
		*LatentAction = Parms.LatentAction;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.LatentAction_Create_Boolean
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class ULowEntryLatentActionBoolean*LatentAction                                                     (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::LatentAction_Create_Boolean(class ULowEntryLatentActionBoolean** LatentAction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "LatentAction_Create_Boolean");

	Params::ULowEntryExtendedStandardLibrary_LatentAction_Create_Boolean_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (LatentAction != nullptr)
		*LatentAction = Parms.LatentAction;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.JoinGame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ServerAddress                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Args                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPlayerController*           SpecificPlayer                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::JoinGame(class UObject* WorldContextObject, const class FString& ServerAddress, const class FString& Args, class UPlayerController* SpecificPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "JoinGame");

	Params::ULowEntryExtendedStandardLibrary_JoinGame_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ServerAddress = ServerAddress;
	Parms.Args = Args;
	Parms.SpecificPlayer = SpecificPlayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.IsWorldRenderingEnabled
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Enabled                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::IsWorldRenderingEnabled(bool* Success, bool* Enabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "IsWorldRenderingEnabled");

	Params::ULowEntryExtendedStandardLibrary_IsWorldRenderingEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Success != nullptr)
		*Success = Parms.Success;

	if (Enabled != nullptr)
		*Enabled = Parms.Enabled;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.IsBitSet
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// uint8                              B                                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Bit                                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULowEntryExtendedStandardLibrary::IsBitSet(uint8 B, int32 Bit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "IsBitSet");

	Params::ULowEntryExtendedStandardLibrary_IsBitSet_Params Parms{};

	Parms.B = B;
	Parms.Bit = Bit;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.IosPlatform
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULowEntryExtendedStandardLibrary::IosPlatform()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "IosPlatform");

	Params::ULowEntryExtendedStandardLibrary_IosPlatform_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.IntegerToBytes
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<uint8> ULowEntryExtendedStandardLibrary::IntegerToBytes(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "IntegerToBytes");

	Params::ULowEntryExtendedStandardLibrary_IntegerToBytes_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Html5Platform
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULowEntryExtendedStandardLibrary::Html5Platform()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "Html5Platform");

	Params::ULowEntryExtendedStandardLibrary_Html5Platform_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.HostGame
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Map                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Args                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPlayerController*           SpecificPlayer                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::HostGame(class UObject* WorldContextObject, const class FString& Map, const class FString& Args, class UPlayerController* SpecificPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "HostGame");

	Params::ULowEntryExtendedStandardLibrary_HostGame_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Map = Map;
	Parms.Args = Args;
	Parms.SpecificPlayer = SpecificPlayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.HMAC
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<uint8>                      ByteArray                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<uint8>                      Key                                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// enum class ELowEntryHmacAlgorithm  Algorithm                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Length                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<uint8> ULowEntryExtendedStandardLibrary::HMAC(TArray<uint8>& ByteArray, TArray<uint8>& Key, enum class ELowEntryHmacAlgorithm Algorithm, int32 Index, int32 Length)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "HMAC");

	Params::ULowEntryExtendedStandardLibrary_HMAC_Params Parms{};

	Parms.ByteArray = ByteArray;
	Parms.Key = Key;
	Parms.Algorithm = Algorithm;
	Parms.Index = Index;
	Parms.Length = Length;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.HexToBytes
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      Hex                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<uint8> ULowEntryExtendedStandardLibrary::HexToBytes(const class FString& Hex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "HexToBytes");

	Params::ULowEntryExtendedStandardLibrary_HexToBytes_Params Parms{};

	Parms.Hex = Hex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.HashcashParseArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class FString>              Hashes                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<class ULowEntryParsedHashcash*>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class ULowEntryParsedHashcash*> ULowEntryExtendedStandardLibrary::HashcashParseArray(TArray<class FString>& Hashes)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "HashcashParseArray");

	Params::ULowEntryExtendedStandardLibrary_HashcashParseArray_Params Parms{};

	Parms.Hashes = Hashes;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.HashcashParse
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Hash                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULowEntryParsedHashcash*     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULowEntryParsedHashcash* ULowEntryExtendedStandardLibrary::HashcashParse(const class FString& Hash)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "HashcashParse");

	Params::ULowEntryExtendedStandardLibrary_HashcashParse_Params Parms{};

	Parms.Hash = Hash;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.HashcashCustomCreationDate
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      Resource                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDateTime                   UtcDate                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Bits                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULowEntryExtendedStandardLibrary::HashcashCustomCreationDate(const class FString& Resource, struct FDateTime& UtcDate, int32 Bits)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "HashcashCustomCreationDate");

	Params::ULowEntryExtendedStandardLibrary_HashcashCustomCreationDate_Params Parms{};

	Parms.Resource = Resource;
	Parms.UtcDate = UtcDate;
	Parms.Bits = Bits;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.HashcashArrayCustomCreationDate
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class FString>              Resources                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FDateTime                   UtcDate                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Bits                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> ULowEntryExtendedStandardLibrary::HashcashArrayCustomCreationDate(TArray<class FString>& Resources, struct FDateTime& UtcDate, int32 Bits)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "HashcashArrayCustomCreationDate");

	Params::ULowEntryExtendedStandardLibrary_HashcashArrayCustomCreationDate_Params Parms{};

	Parms.Resources = Resources;
	Parms.UtcDate = UtcDate;
	Parms.Bits = Bits;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.HashcashArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class FString>              Resources                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Bits                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> ULowEntryExtendedStandardLibrary::HashcashArray(TArray<class FString>& Resources, int32 Bits)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "HashcashArray");

	Params::ULowEntryExtendedStandardLibrary_HashcashArray_Params Parms{};

	Parms.Resources = Resources;
	Parms.Bits = Bits;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Hashcash
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      Resource                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Bits                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULowEntryExtendedStandardLibrary::Hashcash(const class FString& Resource, int32 Bits)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "Hashcash");

	Params::ULowEntryExtendedStandardLibrary_Hashcash_Params Parms{};

	Parms.Resource = Resource;
	Parms.Bits = Bits;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterStringString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      A                                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      B                                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULowEntryExtendedStandardLibrary::GreaterStringString(const class FString& A, const class FString& B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "GreaterStringString");

	Params::ULowEntryExtendedStandardLibrary_GreaterStringString_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterIntegerFloat
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              A                                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             B                                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULowEntryExtendedStandardLibrary::GreaterIntegerFloat(int32 A, double B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "GreaterIntegerFloat");

	Params::ULowEntryExtendedStandardLibrary_GreaterIntegerFloat_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterIntegerByte
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              A                                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              B                                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULowEntryExtendedStandardLibrary::GreaterIntegerByte(int32 A, uint8 B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "GreaterIntegerByte");

	Params::ULowEntryExtendedStandardLibrary_GreaterIntegerByte_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterFloatInteger
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// double                             A                                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              B                                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULowEntryExtendedStandardLibrary::GreaterFloatInteger(double A, int32 B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "GreaterFloatInteger");

	Params::ULowEntryExtendedStandardLibrary_GreaterFloatInteger_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterFloatByte
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// double                             A                                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              B                                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULowEntryExtendedStandardLibrary::GreaterFloatByte(double A, uint8 B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "GreaterFloatByte");

	Params::ULowEntryExtendedStandardLibrary_GreaterFloatByte_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterEqualStringString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      A                                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      B                                                                (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULowEntryExtendedStandardLibrary::GreaterEqualStringString(const class FString& A, const class FString& B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "GreaterEqualStringString");

	Params::ULowEntryExtendedStandardLibrary_GreaterEqualStringString_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterEqualIntegerFloat
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              A                                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             B                                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULowEntryExtendedStandardLibrary::GreaterEqualIntegerFloat(int32 A, double B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "GreaterEqualIntegerFloat");

	Params::ULowEntryExtendedStandardLibrary_GreaterEqualIntegerFloat_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterEqualIntegerByte
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              A                                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              B                                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULowEntryExtendedStandardLibrary::GreaterEqualIntegerByte(int32 A, uint8 B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "GreaterEqualIntegerByte");

	Params::ULowEntryExtendedStandardLibrary_GreaterEqualIntegerByte_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterEqualFloatInteger
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// double                             A                                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              B                                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULowEntryExtendedStandardLibrary::GreaterEqualFloatInteger(double A, int32 B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "GreaterEqualFloatInteger");

	Params::ULowEntryExtendedStandardLibrary_GreaterEqualFloatInteger_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterEqualFloatByte
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// double                             A                                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              B                                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULowEntryExtendedStandardLibrary::GreaterEqualFloatByte(double A, uint8 B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "GreaterEqualFloatByte");

	Params::ULowEntryExtendedStandardLibrary_GreaterEqualFloatByte_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterEqualByteInteger
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// uint8                              A                                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              B                                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULowEntryExtendedStandardLibrary::GreaterEqualByteInteger(uint8 A, int32 B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "GreaterEqualByteInteger");

	Params::ULowEntryExtendedStandardLibrary_GreaterEqualByteInteger_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterEqualByteFloat
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// uint8                              A                                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             B                                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULowEntryExtendedStandardLibrary::GreaterEqualByteFloat(uint8 A, double B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "GreaterEqualByteFloat");

	Params::ULowEntryExtendedStandardLibrary_GreaterEqualByteFloat_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterByteInteger
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// uint8                              A                                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              B                                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULowEntryExtendedStandardLibrary::GreaterByteInteger(uint8 A, int32 B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "GreaterByteInteger");

	Params::ULowEntryExtendedStandardLibrary_GreaterByteInteger_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GreaterByteFloat
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// uint8                              A                                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             B                                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULowEntryExtendedStandardLibrary::GreaterByteFloat(uint8 A, double B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "GreaterByteFloat");

	Params::ULowEntryExtendedStandardLibrary_GreaterByteFloat_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GrayscalePixels
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<struct FColor>              Pixel                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FColor>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FColor> ULowEntryExtendedStandardLibrary::GrayscalePixels(TArray<struct FColor>& Pixel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "GrayscalePixels");

	Params::ULowEntryExtendedStandardLibrary_GrayscalePixels_Params Parms{};

	Parms.Pixel = Pixel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GrayscalePixel
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FColor                      Pixel                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FColor                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FColor ULowEntryExtendedStandardLibrary::GrayscalePixel(struct FColor& Pixel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "GrayscalePixel");

	Params::ULowEntryExtendedStandardLibrary_GrayscalePixel_Params Parms{};

	Parms.Pixel = Pixel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetWindowSize
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Width                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Height                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::GetWindowSize(bool* Success, int32* Width, int32* Height)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "GetWindowSize");

	Params::ULowEntryExtendedStandardLibrary_GetWindowSize_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Success != nullptr)
		*Success = Parms.Success;

	if (Width != nullptr)
		*Width = Parms.Width;

	if (Height != nullptr)
		*Height = Parms.Height;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetWindowPositionInPercentagesCentered
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             X                                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             Y                                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::GetWindowPositionInPercentagesCentered(bool* Success, double* X, double* Y)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "GetWindowPositionInPercentagesCentered");

	Params::ULowEntryExtendedStandardLibrary_GetWindowPositionInPercentagesCentered_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Success != nullptr)
		*Success = Parms.Success;

	if (X != nullptr)
		*X = Parms.X;

	if (Y != nullptr)
		*Y = Parms.Y;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetWindowPosition
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              X                                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Y                                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::GetWindowPosition(bool* Success, int32* X, int32* Y)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "GetWindowPosition");

	Params::ULowEntryExtendedStandardLibrary_GetWindowPosition_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Success != nullptr)
		*Success = Parms.Success;

	if (X != nullptr)
		*X = Parms.X;

	if (Y != nullptr)
		*Y = Parms.Y;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetWindowPositiomInPercentagesCentered
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             X                                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             Y                                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::GetWindowPositiomInPercentagesCentered(bool* Success, double* X, double* Y)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "GetWindowPositiomInPercentagesCentered");

	Params::ULowEntryExtendedStandardLibrary_GetWindowPositiomInPercentagesCentered_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Success != nullptr)
		*Success = Parms.Success;

	if (X != nullptr)
		*X = Parms.X;

	if (Y != nullptr)
		*Y = Parms.Y;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetWindowMode
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Fullscreen                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               IsFullscreenWindowed                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::GetWindowMode(bool* Success, bool* Fullscreen, bool* IsFullscreenWindowed)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "GetWindowMode");

	Params::ULowEntryExtendedStandardLibrary_GetWindowMode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Success != nullptr)
		*Success = Parms.Success;

	if (Fullscreen != nullptr)
		*Fullscreen = Parms.Fullscreen;

	if (IsFullscreenWindowed != nullptr)
		*IsFullscreenWindowed = Parms.IsFullscreenWindowed;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetWindowBounds
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              X                                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Y                                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Width                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Height                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::GetWindowBounds(bool* Success, int32* X, int32* Y, int32* Width, int32* Height)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "GetWindowBounds");

	Params::ULowEntryExtendedStandardLibrary_GetWindowBounds_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Success != nullptr)
		*Success = Parms.Success;

	if (X != nullptr)
		*X = Parms.X;

	if (Y != nullptr)
		*Y = Parms.Y;

	if (Width != nullptr)
		*Width = Parms.Width;

	if (Height != nullptr)
		*Height = Parms.Height;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetWindowBorderSize
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMargin                     Margin                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::GetWindowBorderSize(bool* Success, struct FMargin* Margin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "GetWindowBorderSize");

	Params::ULowEntryExtendedStandardLibrary_GetWindowBorderSize_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Success != nullptr)
		*Success = Parms.Success;

	if (Margin != nullptr)
		*Margin = Parms.Margin;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetUserFocusedWidgetType
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              UserIndex                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName ULowEntryExtendedStandardLibrary::GetUserFocusedWidgetType(int32 UserIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "GetUserFocusedWidgetType");

	Params::ULowEntryExtendedStandardLibrary_GetUserFocusedWidgetType_Params Parms{};

	Parms.UserIndex = UserIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetSplitScreenType
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class ELowEntrySplitScreenTypeType                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::GetSplitScreenType(enum class ELowEntrySplitScreenType* Type)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "GetSplitScreenType");

	Params::ULowEntryExtendedStandardLibrary_GetSplitScreenType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Type != nullptr)
		*Type = Parms.Type;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetProjectVersion
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULowEntryExtendedStandardLibrary::GetProjectVersion()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "GetProjectVersion");

	Params::ULowEntryExtendedStandardLibrary_GetProjectVersion_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetProjectName
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULowEntryExtendedStandardLibrary::GetProjectName()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "GetProjectName");

	Params::ULowEntryExtendedStandardLibrary_GetProjectName_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetPrimaryMonitorWorkArea
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              X                                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Y                                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Width                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Height                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::GetPrimaryMonitorWorkArea(int32* X, int32* Y, int32* Width, int32* Height)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "GetPrimaryMonitorWorkArea");

	Params::ULowEntryExtendedStandardLibrary_GetPrimaryMonitorWorkArea_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (X != nullptr)
		*X = Parms.X;

	if (Y != nullptr)
		*Y = Parms.Y;

	if (Width != nullptr)
		*Width = Parms.Width;

	if (Height != nullptr)
		*Height = Parms.Height;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetPrimaryMonitorResolution
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              Width                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Height                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::GetPrimaryMonitorResolution(int32* Width, int32* Height)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "GetPrimaryMonitorResolution");

	Params::ULowEntryExtendedStandardLibrary_GetPrimaryMonitorResolution_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Width != nullptr)
		*Width = Parms.Width;

	if (Height != nullptr)
		*Height = Parms.Height;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetMousePositionInPercentages
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             X                                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             Y                                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::GetMousePositionInPercentages(bool* Success, double* X, double* Y)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "GetMousePositionInPercentages");

	Params::ULowEntryExtendedStandardLibrary_GetMousePositionInPercentages_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Success != nullptr)
		*Success = Parms.Success;

	if (X != nullptr)
		*X = Parms.X;

	if (Y != nullptr)
		*Y = Parms.Y;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetMousePosition
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              X                                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Y                                                                (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::GetMousePosition(bool* Success, int32* X, int32* Y)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "GetMousePosition");

	Params::ULowEntryExtendedStandardLibrary_GetMousePosition_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Success != nullptr)
		*Success = Parms.Success;

	if (X != nullptr)
		*X = Parms.X;

	if (Y != nullptr)
		*Y = Parms.Y;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetMaximumVolume
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              Volume                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::GetMaximumVolume(int32* Volume, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "GetMaximumVolume");

	Params::ULowEntryExtendedStandardLibrary_GetMaximumVolume_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Volume != nullptr)
		*Volume = Parms.Volume;

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetLocalToAbsoluteScale
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometry                   Geometry                                                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D ULowEntryExtendedStandardLibrary::GetLocalToAbsoluteScale(struct FGeometry& Geometry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "GetLocalToAbsoluteScale");

	Params::ULowEntryExtendedStandardLibrary_GetLocalToAbsoluteScale_Params Parms{};

	Parms.Geometry = Geometry;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetKeyboardFocusedWidgetType
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FName                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FName ULowEntryExtendedStandardLibrary::GetKeyboardFocusedWidgetType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "GetKeyboardFocusedWidgetType");

	Params::ULowEntryExtendedStandardLibrary_GetKeyboardFocusedWidgetType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetGenericTeamId
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UActor*                      Target                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              TeamID                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::GetGenericTeamId(class UActor* Target, uint8* TeamID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "GetGenericTeamId");

	Params::ULowEntryExtendedStandardLibrary_GetGenericTeamId_Params Parms{};

	Parms.Target = Target;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (TeamID != nullptr)
		*TeamID = Parms.TeamID;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetCurrentVolumePercentage
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// double                             Percentage                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::GetCurrentVolumePercentage(double* Percentage, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "GetCurrentVolumePercentage");

	Params::ULowEntryExtendedStandardLibrary_GetCurrentVolumePercentage_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Percentage != nullptr)
		*Percentage = Parms.Percentage;

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetCurrentVolume
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              Volume                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::GetCurrentVolume(int32* Volume, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "GetCurrentVolume");

	Params::ULowEntryExtendedStandardLibrary_GetCurrentVolume_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Volume != nullptr)
		*Volume = Parms.Volume;

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetClassWithName
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      ClassName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                      Class_                                                           (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::GetClassWithName(const class FString& ClassName, class UClass** Class_, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "GetClassWithName");

	Params::ULowEntryExtendedStandardLibrary_GetClassWithName_Params Parms{};

	Parms.ClassName = ClassName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Class_ != nullptr)
		*Class_ = Parms.Class_;

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetByteWithBitSet
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// uint8                              Byte                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Bit                                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

uint8 ULowEntryExtendedStandardLibrary::GetByteWithBitSet(uint8 Byte, int32 Bit, bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "GetByteWithBitSet");

	Params::ULowEntryExtendedStandardLibrary_GetByteWithBitSet_Params Parms{};

	Parms.Byte = Byte;
	Parms.Bit = Bit;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetBatteryTemperature
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// double                             Celsius                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::GetBatteryTemperature(double* Celsius, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "GetBatteryTemperature");

	Params::ULowEntryExtendedStandardLibrary_GetBatteryTemperature_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Celsius != nullptr)
		*Celsius = Parms.Celsius;

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetBatteryState
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// enum class ELowEntryBatteryState   State                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::GetBatteryState(enum class ELowEntryBatteryState* State, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "GetBatteryState");

	Params::ULowEntryExtendedStandardLibrary_GetBatteryState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (State != nullptr)
		*State = Parms.State;

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetBatteryCharge
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              Percentage                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Success                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::GetBatteryCharge(int32* Percentage, bool* Success)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "GetBatteryCharge");

	Params::ULowEntryExtendedStandardLibrary_GetBatteryCharge_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Percentage != nullptr)
		*Percentage = Parms.Percentage;

	if (Success != nullptr)
		*Success = Parms.Success;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetAndroidVolume
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              Volume                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::GetAndroidVolume(int32* Volume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "GetAndroidVolume");

	Params::ULowEntryExtendedStandardLibrary_GetAndroidVolume_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Volume != nullptr)
		*Volume = Parms.Volume;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetAndroidVersion
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULowEntryExtendedStandardLibrary::GetAndroidVersion()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "GetAndroidVersion");

	Params::ULowEntryExtendedStandardLibrary_GetAndroidVersion_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetAndroidOsLanguage
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULowEntryExtendedStandardLibrary::GetAndroidOsLanguage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "GetAndroidOsLanguage");

	Params::ULowEntryExtendedStandardLibrary_GetAndroidOsLanguage_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetAndroidNumberOfCores
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 ULowEntryExtendedStandardLibrary::GetAndroidNumberOfCores()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "GetAndroidNumberOfCores");

	Params::ULowEntryExtendedStandardLibrary_GetAndroidNumberOfCores_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetAndroidGpuFamily
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULowEntryExtendedStandardLibrary::GetAndroidGpuFamily()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "GetAndroidGpuFamily");

	Params::ULowEntryExtendedStandardLibrary_GetAndroidGpuFamily_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetAndroidGlVersion
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULowEntryExtendedStandardLibrary::GetAndroidGlVersion()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "GetAndroidGlVersion");

	Params::ULowEntryExtendedStandardLibrary_GetAndroidGlVersion_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetAndroidDeviceModel
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULowEntryExtendedStandardLibrary::GetAndroidDeviceModel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "GetAndroidDeviceModel");

	Params::ULowEntryExtendedStandardLibrary_GetAndroidDeviceModel_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetAndroidDeviceMake
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULowEntryExtendedStandardLibrary::GetAndroidDeviceMake()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "GetAndroidDeviceMake");

	Params::ULowEntryExtendedStandardLibrary_GetAndroidDeviceMake_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetAndroidDefaultLocale
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULowEntryExtendedStandardLibrary::GetAndroidDefaultLocale()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "GetAndroidDefaultLocale");

	Params::ULowEntryExtendedStandardLibrary_GetAndroidDefaultLocale_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetAndroidBuildVersion
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 ULowEntryExtendedStandardLibrary::GetAndroidBuildVersion()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "GetAndroidBuildVersion");

	Params::ULowEntryExtendedStandardLibrary_GetAndroidBuildVersion_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetAbsoluteToLocalScale
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometry                   Geometry                                                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D ULowEntryExtendedStandardLibrary::GetAbsoluteToLocalScale(struct FGeometry& Geometry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "GetAbsoluteToLocalScale");

	Params::ULowEntryExtendedStandardLibrary_GetAbsoluteToLocalScale_Params Parms{};

	Parms.Geometry = Geometry;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GetAbsoluteSize
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FGeometry                   Geometry                                                         (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D ULowEntryExtendedStandardLibrary::GetAbsoluteSize(struct FGeometry& Geometry)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "GetAbsoluteSize");

	Params::ULowEntryExtendedStandardLibrary_GetAbsoluteSize_Params Parms{};

	Parms.Geometry = Geometry;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GenerateRandomBytesRandomLength
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              MinLength                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              MaxLength                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                      ByteArray                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::GenerateRandomBytesRandomLength(int32 MinLength, int32 MaxLength, TArray<uint8>* ByteArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "GenerateRandomBytesRandomLength");

	Params::ULowEntryExtendedStandardLibrary_GenerateRandomBytesRandomLength_Params Parms{};

	Parms.MinLength = MinLength;
	Parms.MaxLength = MaxLength;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ByteArray != nullptr)
		*ByteArray = Parms.ByteArray;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.GenerateRandomBytes
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              Length                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                      ByteArray                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::GenerateRandomBytes(int32 Length, TArray<uint8>* ByteArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "GenerateRandomBytes");

	Params::ULowEntryExtendedStandardLibrary_GenerateRandomBytes_Params Parms{};

	Parms.Length = Length;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ByteArray != nullptr)
		*ByteArray = Parms.ByteArray;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.FloorDecimals
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// double                             Number                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Decimals                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

double ULowEntryExtendedStandardLibrary::FloorDecimals(double Number, int32 Decimals)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "FloorDecimals");

	Params::ULowEntryExtendedStandardLibrary_FloorDecimals_Params Parms{};

	Parms.Number = Number;
	Parms.Decimals = Decimals;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.FloatToBytes
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<uint8> ULowEntryExtendedStandardLibrary::FloatToBytes(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "FloatToBytes");

	Params::ULowEntryExtendedStandardLibrary_FloatToBytes_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ExecToInteger
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// enum class ELowEntryExtendedStandardLibrary0to9Branch                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::ExecToInteger(enum class ELowEntryExtendedStandardLibrary0to9 Branch, int32* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "ExecToInteger");

	Params::ULowEntryExtendedStandardLibrary_ExecToInteger_Params Parms{};

	Parms.Branch = Branch;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ExecToByte
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// enum class ELowEntryExtendedStandardLibrary0to9Branch                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::ExecToByte(enum class ELowEntryExtendedStandardLibrary0to9 Branch, uint8* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "ExecToByte");

	Params::ULowEntryExtendedStandardLibrary_ExecToByte_Params Parms{};

	Parms.Branch = Branch;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ExecToBoolean
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// enum class ELowEntryExtendedStandardLibraryTrueOrFalseBranch                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::ExecToBoolean(enum class ELowEntryExtendedStandardLibraryTrueOrFalse Branch, bool* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "ExecToBoolean");

	Params::ULowEntryExtendedStandardLibrary_ExecToBoolean_Params Parms{};

	Parms.Branch = Branch;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.EncapsulateByteArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<uint8>                      ByteArray                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class ULowEntryByteArray*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULowEntryByteArray* ULowEntryExtendedStandardLibrary::EncapsulateByteArray(TArray<uint8>& ByteArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "EncapsulateByteArray");

	Params::ULowEntryExtendedStandardLibrary_EncapsulateByteArray_Params Parms{};

	Parms.ByteArray = ByteArray;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.DoubleToBytes
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// double                             Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<uint8> ULowEntryExtendedStandardLibrary::DoubleToBytes(double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "DoubleToBytes");

	Params::ULowEntryExtendedStandardLibrary_DoubleToBytes_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Double_CreateZero
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class ULowEntryDouble*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULowEntryDouble* ULowEntryExtendedStandardLibrary::Double_CreateZero()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "Double_CreateZero");

	Params::ULowEntryExtendedStandardLibrary_Double_CreateZero_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Double_Create
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<uint8>                      ByteArray                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Length                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULowEntryDouble*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULowEntryDouble* ULowEntryExtendedStandardLibrary::Double_Create(TArray<uint8>& ByteArray, int32 Index, int32 Length)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "Double_Create");

	Params::ULowEntryExtendedStandardLibrary_Double_Create_Params Parms{};

	Parms.ByteArray = ByteArray;
	Parms.Index = Index;
	Parms.Length = Length;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Divide_Vector2dVector2d
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector2D                   A                                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   B                                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector2D ULowEntryExtendedStandardLibrary::Divide_Vector2dVector2d(struct FVector2D& A, struct FVector2D& B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "Divide_Vector2dVector2d");

	Params::ULowEntryExtendedStandardLibrary_Divide_Vector2dVector2d_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.DevelopmentBuild
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULowEntryExtendedStandardLibrary::DevelopmentBuild()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "DevelopmentBuild");

	Params::ULowEntryExtendedStandardLibrary_DevelopmentBuild_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.DesktopPlatform
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULowEntryExtendedStandardLibrary::DesktopPlatform()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "DesktopPlatform");

	Params::ULowEntryExtendedStandardLibrary_DesktopPlatform_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.DelayFrames
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Frames                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           LatentInfo                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::DelayFrames(class UObject* WorldContextObject, int32 Frames, const struct FLatentActionInfo& LatentInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "DelayFrames");

	Params::ULowEntryExtendedStandardLibrary_DelayFrames_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Frames = Frames;
	Parms.LatentInfo = LatentInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.DebugBuild
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULowEntryExtendedStandardLibrary::DebugBuild()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "DebugBuild");

	Params::ULowEntryExtendedStandardLibrary_DebugBuild_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.DateTime_ToUnixTimestamp
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDateTime                   DateTime                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULowEntryLong*               Timestamp                                                        (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::DateTime_ToUnixTimestamp(struct FDateTime& DateTime, class ULowEntryLong** Timestamp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "DateTime_ToUnixTimestamp");

	Params::ULowEntryExtendedStandardLibrary_DateTime_ToUnixTimestamp_Params Parms{};

	Parms.DateTime = DateTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Timestamp != nullptr)
		*Timestamp = Parms.Timestamp;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.DateTime_ToString
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDateTime                   DateTime                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      String                                                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Format                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::DateTime_ToString(struct FDateTime& DateTime, class FString* String, const class FString& Format)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "DateTime_ToString");

	Params::ULowEntryExtendedStandardLibrary_DateTime_ToString_Params Parms{};

	Parms.DateTime = DateTime;
	Parms.Format = Format;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (String != nullptr)
		*String = Parms.String;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.DateTime_ToIso8601
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDateTime                   DateTime                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      String                                                           (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::DateTime_ToIso8601(struct FDateTime& DateTime, class FString* String)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "DateTime_ToIso8601");

	Params::ULowEntryExtendedStandardLibrary_DateTime_ToIso8601_Params Parms{};

	Parms.DateTime = DateTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (String != nullptr)
		*String = Parms.String;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.DateTime_FromUnixTimestamp
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class ULowEntryLong*               Timestamp                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDateTime                   DateTime                                                         (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::DateTime_FromUnixTimestamp(class ULowEntryLong* Timestamp, struct FDateTime* DateTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "DateTime_FromUnixTimestamp");

	Params::ULowEntryExtendedStandardLibrary_DateTime_FromUnixTimestamp_Params Parms{};

	Parms.Timestamp = Timestamp;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (DateTime != nullptr)
		*DateTime = Parms.DateTime;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.CreateString
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              Length                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Filler                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULowEntryExtendedStandardLibrary::CreateString(int32 Length, const class FString& Filler)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "CreateString");

	Params::ULowEntryExtendedStandardLibrary_CreateString_Params Parms{};

	Parms.Length = Length;
	Parms.Filler = Filler;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.CreateObject
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TSubclassOf<class UObject>         Class                                                            (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     Object                                                           (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::CreateObject(TSubclassOf<class UObject> Class, class UObject** Object)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "CreateObject");

	Params::ULowEntryExtendedStandardLibrary_CreateObject_Params Parms{};

	Parms.Class = Class;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Object != nullptr)
		*Object = Parms.Object;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Crash
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void ULowEntryExtendedStandardLibrary::Crash()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "Crash");

	Params::ULowEntryExtendedStandardLibrary_Crash_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ConvertUtcDateToLocalDate
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDateTime                   Utc                                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDateTime                   Local                                                            (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::ConvertUtcDateToLocalDate(struct FDateTime& Utc, struct FDateTime* Local)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "ConvertUtcDateToLocalDate");

	Params::ULowEntryExtendedStandardLibrary_ConvertUtcDateToLocalDate_Params Parms{};

	Parms.Utc = Utc;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Local != nullptr)
		*Local = Parms.Local;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ConvertLocalDateToUtcDate
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDateTime                   Local                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FDateTime                   Utc                                                              (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::ConvertLocalDateToUtcDate(struct FDateTime& Local, struct FDateTime* Utc)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "ConvertLocalDateToUtcDate");

	Params::ULowEntryExtendedStandardLibrary_ConvertLocalDateToUtcDate_Params Parms{};

	Parms.Local = Local;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Utc != nullptr)
		*Utc = Parms.Utc;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ClipboardSet
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::ClipboardSet(const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "ClipboardSet");

	Params::ULowEntryExtendedStandardLibrary_ClipboardSet_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ClipboardGet
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULowEntryExtendedStandardLibrary::ClipboardGet()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "ClipboardGet");

	Params::ULowEntryExtendedStandardLibrary_ClipboardGet_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ClearUserFocus
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// int32                              UserIndex                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::ClearUserFocus(int32 UserIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "ClearUserFocus");

	Params::ULowEntryExtendedStandardLibrary_ClearUserFocus_Params Parms{};

	Parms.UserIndex = UserIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ClearKeyboardFocus
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void ULowEntryExtendedStandardLibrary::ClearKeyboardFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "ClearKeyboardFocus");

	Params::ULowEntryExtendedStandardLibrary_ClearKeyboardFocus_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ClearAllUserFocus
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:

void ULowEntryExtendedStandardLibrary::ClearAllUserFocus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "ClearAllUserFocus");

	Params::ULowEntryExtendedStandardLibrary_ClearAllUserFocus_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ChangeMap
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Map                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Args                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPlayerController*           SpecificPlayer                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::ChangeMap(class UObject* WorldContextObject, const class FString& Map, const class FString& Args, class UPlayerController* SpecificPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "ChangeMap");

	Params::ULowEntryExtendedStandardLibrary_ChangeMap_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.Map = Map;
	Parms.Args = Args;
	Parms.SpecificPlayer = SpecificPlayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.CeilDecimals
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// double                             Number                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Decimals                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

double ULowEntryExtendedStandardLibrary::CeilDecimals(double Number, int32 Decimals)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "CeilDecimals");

	Params::ULowEntryExtendedStandardLibrary_CeilDecimals_Params Parms{};

	Parms.Number = Number;
	Parms.Decimals = Decimals;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.CaseSwitchObject
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              OnlyCheckFirstX                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     Value                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     _1__                                                             (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     _2__                                                             (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     _3__                                                             (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     _4__                                                             (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     _5__                                                             (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     _6__                                                             (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     _7__                                                             (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     _8__                                                             (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     _9__                                                             (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     _10__                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELowEntryExtendedStandardLibrary1to10otherBranch                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::CaseSwitchObject(int32 OnlyCheckFirstX, class UObject* Value, class UObject* _1__, class UObject* _2__, class UObject* _3__, class UObject* _4__, class UObject* _5__, class UObject* _6__, class UObject* _7__, class UObject* _8__, class UObject* _9__, class UObject* _10__, enum class ELowEntryExtendedStandardLibrary1to10other* Branch)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "CaseSwitchObject");

	Params::ULowEntryExtendedStandardLibrary_CaseSwitchObject_Params Parms{};

	Parms.OnlyCheckFirstX = OnlyCheckFirstX;
	Parms.Value = Value;
	Parms._1__ = _1__;
	Parms._2__ = _2__;
	Parms._3__ = _3__;
	Parms._4__ = _4__;
	Parms._5__ = _5__;
	Parms._6__ = _6__;
	Parms._7__ = _7__;
	Parms._8__ = _8__;
	Parms._9__ = _9__;
	Parms._10__ = _10__;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Branch != nullptr)
		*Branch = Parms.Branch;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.CaseSwitchInteger
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              OnlyCheckFirstX                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              _1__                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              _2__                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              _3__                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              _4__                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              _5__                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              _6__                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              _7__                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              _8__                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              _9__                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              _10__                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELowEntryExtendedStandardLibrary1to10otherBranch                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::CaseSwitchInteger(int32 OnlyCheckFirstX, int32 Value, int32 _1__, int32 _2__, int32 _3__, int32 _4__, int32 _5__, int32 _6__, int32 _7__, int32 _8__, int32 _9__, int32 _10__, enum class ELowEntryExtendedStandardLibrary1to10other* Branch)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "CaseSwitchInteger");

	Params::ULowEntryExtendedStandardLibrary_CaseSwitchInteger_Params Parms{};

	Parms.OnlyCheckFirstX = OnlyCheckFirstX;
	Parms.Value = Value;
	Parms._1__ = _1__;
	Parms._2__ = _2__;
	Parms._3__ = _3__;
	Parms._4__ = _4__;
	Parms._5__ = _5__;
	Parms._6__ = _6__;
	Parms._7__ = _7__;
	Parms._8__ = _8__;
	Parms._9__ = _9__;
	Parms._10__ = _10__;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Branch != nullptr)
		*Branch = Parms.Branch;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.CaseSwitchByte
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              OnlyCheckFirstX                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              _1__                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              _2__                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              _3__                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              _4__                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              _5__                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              _6__                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              _7__                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              _8__                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              _9__                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              _10__                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ELowEntryExtendedStandardLibrary1to10otherBranch                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::CaseSwitchByte(int32 OnlyCheckFirstX, uint8 Value, uint8 _1__, uint8 _2__, uint8 _3__, uint8 _4__, uint8 _5__, uint8 _6__, uint8 _7__, uint8 _8__, uint8 _9__, uint8 _10__, enum class ELowEntryExtendedStandardLibrary1to10other* Branch)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "CaseSwitchByte");

	Params::ULowEntryExtendedStandardLibrary_CaseSwitchByte_Params Parms{};

	Parms.OnlyCheckFirstX = OnlyCheckFirstX;
	Parms.Value = Value;
	Parms._1__ = _1__;
	Parms._2__ = _2__;
	Parms._3__ = _3__;
	Parms._4__ = _4__;
	Parms._5__ = _5__;
	Parms._6__ = _6__;
	Parms._7__ = _7__;
	Parms._8__ = _8__;
	Parms._9__ = _9__;
	Parms._10__ = _10__;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Branch != nullptr)
		*Branch = Parms.Branch;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.CarriageReturnCharacter
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULowEntryExtendedStandardLibrary::CarriageReturnCharacter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "CarriageReturnCharacter");

	Params::ULowEntryExtendedStandardLibrary_CarriageReturnCharacter_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteToBytes
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// uint8                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<uint8> ULowEntryExtendedStandardLibrary::ByteToBytes(uint8 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "ByteToBytes");

	Params::ULowEntryExtendedStandardLibrary_ByteToBytes_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteToBoolean
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// uint8                              Byte                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULowEntryExtendedStandardLibrary::ByteToBoolean(uint8 Byte)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "ByteToBoolean");

	Params::ULowEntryExtendedStandardLibrary_ByteToBoolean_Params Parms{};

	Parms.Byte = Byte;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteToBits
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// uint8                              Byte                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Bit1                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Bit2                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Bit3                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Bit4                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Bit5                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Bit6                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Bit7                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Bit8                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::ByteToBits(uint8 Byte, bool* Bit1, bool* Bit2, bool* Bit3, bool* Bit4, bool* Bit5, bool* Bit6, bool* Bit7, bool* Bit8)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "ByteToBits");

	Params::ULowEntryExtendedStandardLibrary_ByteToBits_Params Parms{};

	Parms.Byte = Byte;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Bit1 != nullptr)
		*Bit1 = Parms.Bit1;

	if (Bit2 != nullptr)
		*Bit2 = Parms.Bit2;

	if (Bit3 != nullptr)
		*Bit3 = Parms.Bit3;

	if (Bit4 != nullptr)
		*Bit4 = Parms.Bit4;

	if (Bit5 != nullptr)
		*Bit5 = Parms.Bit5;

	if (Bit6 != nullptr)
		*Bit6 = Parms.Bit6;

	if (Bit7 != nullptr)
		*Bit7 = Parms.Bit7;

	if (Bit8 != nullptr)
		*Bit8 = Parms.Bit8;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToStringUtf8
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<uint8>                      ByteArray                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Length                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULowEntryExtendedStandardLibrary::BytesToStringUtf8(TArray<uint8>& ByteArray, int32 Index, int32 Length)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "BytesToStringUtf8");

	Params::ULowEntryExtendedStandardLibrary_BytesToStringUtf8_Params Parms{};

	Parms.ByteArray = ByteArray;
	Parms.Index = Index;
	Parms.Length = Length;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToPixels
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<uint8>                      ByteArray                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// enum class ELowEntryImageFormat    ImageFormat                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Width                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Height                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FColor>              Pixels                                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Length                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::BytesToPixels(TArray<uint8>& ByteArray, enum class ELowEntryImageFormat ImageFormat, int32* Width, int32* Height, TArray<struct FColor>* Pixels, int32 Index, int32 Length)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "BytesToPixels");

	Params::ULowEntryExtendedStandardLibrary_BytesToPixels_Params Parms{};

	Parms.ByteArray = ByteArray;
	Parms.ImageFormat = ImageFormat;
	Parms.Index = Index;
	Parms.Length = Length;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Width != nullptr)
		*Width = Parms.Width;

	if (Height != nullptr)
		*Height = Parms.Height;

	if (Pixels != nullptr)
		*Pixels = Parms.Pixels;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToLongBytes
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<uint8>                      ByteArray                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Length                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULowEntryLong*               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULowEntryLong* ULowEntryExtendedStandardLibrary::BytesToLongBytes(TArray<uint8>& ByteArray, int32 Index, int32 Length)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "BytesToLongBytes");

	Params::ULowEntryExtendedStandardLibrary_BytesToLongBytes_Params Parms{};

	Parms.ByteArray = ByteArray;
	Parms.Index = Index;
	Parms.Length = Length;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToLong
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<uint8>                      ByteArray                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Length                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int64                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int64 ULowEntryExtendedStandardLibrary::BytesToLong(TArray<uint8>& ByteArray, int32 Index, int32 Length)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "BytesToLong");

	Params::ULowEntryExtendedStandardLibrary_BytesToLong_Params Parms{};

	Parms.ByteArray = ByteArray;
	Parms.Index = Index;
	Parms.Length = Length;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToInteger
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<uint8>                      ByteArray                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Length                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 ULowEntryExtendedStandardLibrary::BytesToInteger(TArray<uint8>& ByteArray, int32 Index, int32 Length)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "BytesToInteger");

	Params::ULowEntryExtendedStandardLibrary_BytesToInteger_Params Parms{};

	Parms.ByteArray = ByteArray;
	Parms.Index = Index;
	Parms.Length = Length;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToImage
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<uint8>                      ByteArray                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// enum class ELowEntryImageFormat    ImageFormat                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Length                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture2D*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTexture2D* ULowEntryExtendedStandardLibrary::BytesToImage(TArray<uint8>& ByteArray, enum class ELowEntryImageFormat ImageFormat, int32 Index, int32 Length)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "BytesToImage");

	Params::ULowEntryExtendedStandardLibrary_BytesToImage_Params Parms{};

	Parms.ByteArray = ByteArray;
	Parms.ImageFormat = ImageFormat;
	Parms.Index = Index;
	Parms.Length = Length;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToHex
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<uint8>                      ByteArray                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               AddSpaces                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Length                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULowEntryExtendedStandardLibrary::BytesToHex(TArray<uint8>& ByteArray, bool AddSpaces, int32 Index, int32 Length)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "BytesToHex");

	Params::ULowEntryExtendedStandardLibrary_BytesToHex_Params Parms{};

	Parms.ByteArray = ByteArray;
	Parms.AddSpaces = AddSpaces;
	Parms.Index = Index;
	Parms.Length = Length;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToFloat
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<uint8>                      ByteArray                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Length                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float ULowEntryExtendedStandardLibrary::BytesToFloat(TArray<uint8>& ByteArray, int32 Index, int32 Length)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "BytesToFloat");

	Params::ULowEntryExtendedStandardLibrary_BytesToFloat_Params Parms{};

	Parms.ByteArray = ByteArray;
	Parms.Index = Index;
	Parms.Length = Length;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToExistingImage
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// bool                               ReusedGivenTexture2D                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture2D*                  Texture2D                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                      ByteArray                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// enum class ELowEntryImageFormat    ImageFormat                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Length                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UTexture2D*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UTexture2D* ULowEntryExtendedStandardLibrary::BytesToExistingImage(bool* ReusedGivenTexture2D, class UTexture2D* Texture2D, TArray<uint8>& ByteArray, enum class ELowEntryImageFormat ImageFormat, int32 Index, int32 Length)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "BytesToExistingImage");

	Params::ULowEntryExtendedStandardLibrary_BytesToExistingImage_Params Parms{};

	Parms.Texture2D = Texture2D;
	Parms.ByteArray = ByteArray;
	Parms.ImageFormat = ImageFormat;
	Parms.Index = Index;
	Parms.Length = Length;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ReusedGivenTexture2D != nullptr)
		*ReusedGivenTexture2D = Parms.ReusedGivenTexture2D;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToDoubleBytes
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<uint8>                      ByteArray                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Length                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULowEntryDouble*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULowEntryDouble* ULowEntryExtendedStandardLibrary::BytesToDoubleBytes(TArray<uint8>& ByteArray, int32 Index, int32 Length)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "BytesToDoubleBytes");

	Params::ULowEntryExtendedStandardLibrary_BytesToDoubleBytes_Params Parms{};

	Parms.ByteArray = ByteArray;
	Parms.Index = Index;
	Parms.Length = Length;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToDouble
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<uint8>                      ByteArray                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Length                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

double ULowEntryExtendedStandardLibrary::BytesToDouble(TArray<uint8>& ByteArray, int32 Index, int32 Length)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "BytesToDouble");

	Params::ULowEntryExtendedStandardLibrary_BytesToDouble_Params Parms{};

	Parms.ByteArray = ByteArray;
	Parms.Index = Index;
	Parms.Length = Length;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToByte
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<uint8>                      ByteArray                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Length                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

uint8 ULowEntryExtendedStandardLibrary::BytesToByte(TArray<uint8>& ByteArray, int32 Index, int32 Length)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "BytesToByte");

	Params::ULowEntryExtendedStandardLibrary_BytesToByte_Params Parms{};

	Parms.ByteArray = ByteArray;
	Parms.Index = Index;
	Parms.Length = Length;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToBoolean
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<uint8>                      ByteArray                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Length                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULowEntryExtendedStandardLibrary::BytesToBoolean(TArray<uint8>& ByteArray, int32 Index, int32 Length)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "BytesToBoolean");

	Params::ULowEntryExtendedStandardLibrary_BytesToBoolean_Params Parms{};

	Parms.ByteArray = ByteArray;
	Parms.Index = Index;
	Parms.Length = Length;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToBitString
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<uint8>                      ByteArray                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               AddSpaces                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Length                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULowEntryExtendedStandardLibrary::BytesToBitString(TArray<uint8>& ByteArray, bool AddSpaces, int32 Index, int32 Length)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "BytesToBitString");

	Params::ULowEntryExtendedStandardLibrary_BytesToBitString_Params Parms{};

	Parms.ByteArray = ByteArray;
	Parms.AddSpaces = AddSpaces;
	Parms.Index = Index;
	Parms.Length = Length;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToBinary
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<uint8>                      ByteArray                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               AddSpaces                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Length                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULowEntryExtendedStandardLibrary::BytesToBinary(TArray<uint8>& ByteArray, bool AddSpaces, int32 Index, int32 Length)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "BytesToBinary");

	Params::ULowEntryExtendedStandardLibrary_BytesToBinary_Params Parms{};

	Parms.ByteArray = ByteArray;
	Parms.AddSpaces = AddSpaces;
	Parms.Index = Index;
	Parms.Length = Length;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToBase64Url
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<uint8>                      ByteArray                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Length                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULowEntryExtendedStandardLibrary::BytesToBase64Url(TArray<uint8>& ByteArray, int32 Index, int32 Length)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "BytesToBase64Url");

	Params::ULowEntryExtendedStandardLibrary_BytesToBase64Url_Params Parms{};

	Parms.ByteArray = ByteArray;
	Parms.Index = Index;
	Parms.Length = Length;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesToBase64
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<uint8>                      ByteArray                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Length                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULowEntryExtendedStandardLibrary::BytesToBase64(TArray<uint8>& ByteArray, int32 Index, int32 Length)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "BytesToBase64");

	Params::ULowEntryExtendedStandardLibrary_BytesToBase64_Params Parms{};

	Parms.ByteArray = ByteArray;
	Parms.Index = Index;
	Parms.Length = Length;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BytesSubArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<uint8>                      ByteArray                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Length                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<uint8> ULowEntryExtendedStandardLibrary::BytesSubArray(TArray<uint8>& ByteArray, int32 Index, int32 Length)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "BytesSubArray");

	Params::ULowEntryExtendedStandardLibrary_BytesSubArray_Params Parms{};

	Parms.ByteArray = ByteArray;
	Parms.Index = Index;
	Parms.Length = Length;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataWriter_GetBytes
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class ULowEntryByteDataWriter*     ByteDataWriter                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<uint8> ULowEntryExtendedStandardLibrary::ByteDataWriter_GetBytes(class ULowEntryByteDataWriter* ByteDataWriter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "ByteDataWriter_GetBytes");

	Params::ULowEntryExtendedStandardLibrary_ByteDataWriter_GetBytes_Params Parms{};

	Parms.ByteDataWriter = ByteDataWriter;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataWriter_CreateFromEntryArrayPure
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class ULowEntryByteDataEntry*>Array                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class ULowEntryByteDataWriter*     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULowEntryByteDataWriter* ULowEntryExtendedStandardLibrary::ByteDataWriter_CreateFromEntryArrayPure(TArray<class ULowEntryByteDataEntry*>& Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "ByteDataWriter_CreateFromEntryArrayPure");

	Params::ULowEntryExtendedStandardLibrary_ByteDataWriter_CreateFromEntryArrayPure_Params Parms{};

	Parms.Array = Array;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataWriter_CreateFromEntryArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class ULowEntryByteDataEntry*>Array                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class ULowEntryByteDataWriter*     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULowEntryByteDataWriter* ULowEntryExtendedStandardLibrary::ByteDataWriter_CreateFromEntryArray(TArray<class ULowEntryByteDataEntry*>& Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "ByteDataWriter_CreateFromEntryArray");

	Params::ULowEntryExtendedStandardLibrary_ByteDataWriter_CreateFromEntryArray_Params Parms{};

	Parms.Array = Array;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataReader_Create
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<uint8>                      Bytes                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Length                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULowEntryByteDataReader*     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULowEntryByteDataReader* ULowEntryExtendedStandardLibrary::ByteDataReader_Create(TArray<uint8>& Bytes, int32 Index, int32 Length)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "ByteDataReader_Create");

	Params::ULowEntryExtendedStandardLibrary_ByteDataReader_Create_Params Parms{};

	Parms.Bytes = Bytes;
	Parms.Index = Index;
	Parms.Length = Length;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromStringUtf8Array
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class FString>              Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class ULowEntryByteDataEntry*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULowEntryByteDataEntry* ULowEntryExtendedStandardLibrary::ByteDataEntry_CreateFromStringUtf8Array(TArray<class FString>& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "ByteDataEntry_CreateFromStringUtf8Array");

	Params::ULowEntryExtendedStandardLibrary_ByteDataEntry_CreateFromStringUtf8Array_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromStringUtf8
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULowEntryByteDataEntry*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULowEntryByteDataEntry* ULowEntryExtendedStandardLibrary::ByteDataEntry_CreateFromStringUtf8(const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "ByteDataEntry_CreateFromStringUtf8");

	Params::ULowEntryExtendedStandardLibrary_ByteDataEntry_CreateFromStringUtf8_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromPositiveInteger3Array
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<int32>                      Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class ULowEntryByteDataEntry*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULowEntryByteDataEntry* ULowEntryExtendedStandardLibrary::ByteDataEntry_CreateFromPositiveInteger3Array(TArray<int32>& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "ByteDataEntry_CreateFromPositiveInteger3Array");

	Params::ULowEntryExtendedStandardLibrary_ByteDataEntry_CreateFromPositiveInteger3Array_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromPositiveInteger3
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULowEntryByteDataEntry*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULowEntryByteDataEntry* ULowEntryExtendedStandardLibrary::ByteDataEntry_CreateFromPositiveInteger3(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "ByteDataEntry_CreateFromPositiveInteger3");

	Params::ULowEntryExtendedStandardLibrary_ByteDataEntry_CreateFromPositiveInteger3_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromPositiveInteger2Array
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<int32>                      Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class ULowEntryByteDataEntry*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULowEntryByteDataEntry* ULowEntryExtendedStandardLibrary::ByteDataEntry_CreateFromPositiveInteger2Array(TArray<int32>& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "ByteDataEntry_CreateFromPositiveInteger2Array");

	Params::ULowEntryExtendedStandardLibrary_ByteDataEntry_CreateFromPositiveInteger2Array_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromPositiveInteger2
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULowEntryByteDataEntry*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULowEntryByteDataEntry* ULowEntryExtendedStandardLibrary::ByteDataEntry_CreateFromPositiveInteger2(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "ByteDataEntry_CreateFromPositiveInteger2");

	Params::ULowEntryExtendedStandardLibrary_ByteDataEntry_CreateFromPositiveInteger2_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromPositiveInteger1Array
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<int32>                      Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class ULowEntryByteDataEntry*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULowEntryByteDataEntry* ULowEntryExtendedStandardLibrary::ByteDataEntry_CreateFromPositiveInteger1Array(TArray<int32>& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "ByteDataEntry_CreateFromPositiveInteger1Array");

	Params::ULowEntryExtendedStandardLibrary_ByteDataEntry_CreateFromPositiveInteger1Array_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromPositiveInteger1
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULowEntryByteDataEntry*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULowEntryByteDataEntry* ULowEntryExtendedStandardLibrary::ByteDataEntry_CreateFromPositiveInteger1(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "ByteDataEntry_CreateFromPositiveInteger1");

	Params::ULowEntryExtendedStandardLibrary_ByteDataEntry_CreateFromPositiveInteger1_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromLongBytesArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class ULowEntryLong*>       Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class ULowEntryByteDataEntry*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULowEntryByteDataEntry* ULowEntryExtendedStandardLibrary::ByteDataEntry_CreateFromLongBytesArray(TArray<class ULowEntryLong*>& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "ByteDataEntry_CreateFromLongBytesArray");

	Params::ULowEntryExtendedStandardLibrary_ByteDataEntry_CreateFromLongBytesArray_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromLongBytes
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class ULowEntryLong*               Value                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULowEntryByteDataEntry*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULowEntryByteDataEntry* ULowEntryExtendedStandardLibrary::ByteDataEntry_CreateFromLongBytes(class ULowEntryLong* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "ByteDataEntry_CreateFromLongBytes");

	Params::ULowEntryExtendedStandardLibrary_ByteDataEntry_CreateFromLongBytes_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromLongArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<int64>                      Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class ULowEntryByteDataEntry*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULowEntryByteDataEntry* ULowEntryExtendedStandardLibrary::ByteDataEntry_CreateFromLongArray(TArray<int64>& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "ByteDataEntry_CreateFromLongArray");

	Params::ULowEntryExtendedStandardLibrary_ByteDataEntry_CreateFromLongArray_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromLong
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int64                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULowEntryByteDataEntry*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULowEntryByteDataEntry* ULowEntryExtendedStandardLibrary::ByteDataEntry_CreateFromLong(int64 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "ByteDataEntry_CreateFromLong");

	Params::ULowEntryExtendedStandardLibrary_ByteDataEntry_CreateFromLong_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromIntegerArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<int32>                      Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class ULowEntryByteDataEntry*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULowEntryByteDataEntry* ULowEntryExtendedStandardLibrary::ByteDataEntry_CreateFromIntegerArray(TArray<int32>& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "ByteDataEntry_CreateFromIntegerArray");

	Params::ULowEntryExtendedStandardLibrary_ByteDataEntry_CreateFromIntegerArray_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromInteger
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULowEntryByteDataEntry*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULowEntryByteDataEntry* ULowEntryExtendedStandardLibrary::ByteDataEntry_CreateFromInteger(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "ByteDataEntry_CreateFromInteger");

	Params::ULowEntryExtendedStandardLibrary_ByteDataEntry_CreateFromInteger_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromFloatArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<float>                      Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class ULowEntryByteDataEntry*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULowEntryByteDataEntry* ULowEntryExtendedStandardLibrary::ByteDataEntry_CreateFromFloatArray(TArray<float>& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "ByteDataEntry_CreateFromFloatArray");

	Params::ULowEntryExtendedStandardLibrary_ByteDataEntry_CreateFromFloatArray_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromFloat
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULowEntryByteDataEntry*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULowEntryByteDataEntry* ULowEntryExtendedStandardLibrary::ByteDataEntry_CreateFromFloat(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "ByteDataEntry_CreateFromFloat");

	Params::ULowEntryExtendedStandardLibrary_ByteDataEntry_CreateFromFloat_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromDoubleBytesArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class ULowEntryDouble*>     Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class ULowEntryByteDataEntry*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULowEntryByteDataEntry* ULowEntryExtendedStandardLibrary::ByteDataEntry_CreateFromDoubleBytesArray(TArray<class ULowEntryDouble*>& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "ByteDataEntry_CreateFromDoubleBytesArray");

	Params::ULowEntryExtendedStandardLibrary_ByteDataEntry_CreateFromDoubleBytesArray_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromDoubleBytes
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class ULowEntryDouble*             Value                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULowEntryByteDataEntry*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULowEntryByteDataEntry* ULowEntryExtendedStandardLibrary::ByteDataEntry_CreateFromDoubleBytes(class ULowEntryDouble* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "ByteDataEntry_CreateFromDoubleBytes");

	Params::ULowEntryExtendedStandardLibrary_ByteDataEntry_CreateFromDoubleBytes_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromDoubleArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<double>                     Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class ULowEntryByteDataEntry*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULowEntryByteDataEntry* ULowEntryExtendedStandardLibrary::ByteDataEntry_CreateFromDoubleArray(TArray<double>& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "ByteDataEntry_CreateFromDoubleArray");

	Params::ULowEntryExtendedStandardLibrary_ByteDataEntry_CreateFromDoubleArray_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromDouble
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// double                             Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULowEntryByteDataEntry*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULowEntryByteDataEntry* ULowEntryExtendedStandardLibrary::ByteDataEntry_CreateFromDouble(double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "ByteDataEntry_CreateFromDouble");

	Params::ULowEntryExtendedStandardLibrary_ByteDataEntry_CreateFromDouble_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromByteArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<uint8>                      Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class ULowEntryByteDataEntry*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULowEntryByteDataEntry* ULowEntryExtendedStandardLibrary::ByteDataEntry_CreateFromByteArray(TArray<uint8>& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "ByteDataEntry_CreateFromByteArray");

	Params::ULowEntryExtendedStandardLibrary_ByteDataEntry_CreateFromByteArray_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromByte
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// uint8                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULowEntryByteDataEntry*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULowEntryByteDataEntry* ULowEntryExtendedStandardLibrary::ByteDataEntry_CreateFromByte(uint8 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "ByteDataEntry_CreateFromByte");

	Params::ULowEntryExtendedStandardLibrary_ByteDataEntry_CreateFromByte_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromBooleanArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<bool>                       Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class ULowEntryByteDataEntry*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULowEntryByteDataEntry* ULowEntryExtendedStandardLibrary::ByteDataEntry_CreateFromBooleanArray(TArray<bool>& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "ByteDataEntry_CreateFromBooleanArray");

	Params::ULowEntryExtendedStandardLibrary_ByteDataEntry_CreateFromBooleanArray_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.ByteDataEntry_CreateFromBoolean
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULowEntryByteDataEntry*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULowEntryByteDataEntry* ULowEntryExtendedStandardLibrary::ByteDataEntry_CreateFromBoolean(bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "ByteDataEntry_CreateFromBoolean");

	Params::ULowEntryExtendedStandardLibrary_ByteDataEntry_CreateFromBoolean_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BooleanToBytes
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<uint8> ULowEntryExtendedStandardLibrary::BooleanToBytes(bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "BooleanToBytes");

	Params::ULowEntryExtendedStandardLibrary_BooleanToBytes_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BooleanToByte
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

uint8 ULowEntryExtendedStandardLibrary::BooleanToByte(bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "BooleanToByte");

	Params::ULowEntryExtendedStandardLibrary_BooleanToByte_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitStringToBytes
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      Bits                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<uint8> ULowEntryExtendedStandardLibrary::BitStringToBytes(const class FString& Bits)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "BitStringToBytes");

	Params::ULowEntryExtendedStandardLibrary_BitStringToBytes_Params Parms{};

	Parms.Bits = Bits;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitsToByte
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               Bit1                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Bit2                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Bit3                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Bit4                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Bit5                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Bit6                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Bit7                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Bit8                                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              Byte                                                             (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryExtendedStandardLibrary::BitsToByte(bool Bit1, bool Bit2, bool Bit3, bool Bit4, bool Bit5, bool Bit6, bool Bit7, bool Bit8, uint8* Byte)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "BitsToByte");

	Params::ULowEntryExtendedStandardLibrary_BitsToByte_Params Parms{};

	Parms.Bit1 = Bit1;
	Parms.Bit2 = Bit2;
	Parms.Bit3 = Bit3;
	Parms.Bit4 = Bit4;
	Parms.Bit5 = Bit5;
	Parms.Bit6 = Bit6;
	Parms.Bit7 = Bit7;
	Parms.Bit8 = Bit8;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Byte != nullptr)
		*Byte = Parms.Byte;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataWriter_GetBytes
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class ULowEntryBitDataWriter*      BitDataWriter                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<uint8> ULowEntryExtendedStandardLibrary::BitDataWriter_GetBytes(class ULowEntryBitDataWriter* BitDataWriter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "BitDataWriter_GetBytes");

	Params::ULowEntryExtendedStandardLibrary_BitDataWriter_GetBytes_Params Parms{};

	Parms.BitDataWriter = BitDataWriter;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataWriter_CreateFromEntryArrayPure
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class ULowEntryBitDataEntry*>Array                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class ULowEntryBitDataWriter*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULowEntryBitDataWriter* ULowEntryExtendedStandardLibrary::BitDataWriter_CreateFromEntryArrayPure(TArray<class ULowEntryBitDataEntry*>& Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "BitDataWriter_CreateFromEntryArrayPure");

	Params::ULowEntryExtendedStandardLibrary_BitDataWriter_CreateFromEntryArrayPure_Params Parms{};

	Parms.Array = Array;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataWriter_CreateFromEntryArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class ULowEntryBitDataEntry*>Array                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class ULowEntryBitDataWriter*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULowEntryBitDataWriter* ULowEntryExtendedStandardLibrary::BitDataWriter_CreateFromEntryArray(TArray<class ULowEntryBitDataEntry*>& Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "BitDataWriter_CreateFromEntryArray");

	Params::ULowEntryExtendedStandardLibrary_BitDataWriter_CreateFromEntryArray_Params Parms{};

	Parms.Array = Array;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataReader_Create
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<uint8>                      Bytes                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Length                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULowEntryBitDataReader*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULowEntryBitDataReader* ULowEntryExtendedStandardLibrary::BitDataReader_Create(TArray<uint8>& Bytes, int32 Index, int32 Length)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "BitDataReader_Create");

	Params::ULowEntryExtendedStandardLibrary_BitDataReader_Create_Params Parms{};

	Parms.Bytes = Bytes;
	Parms.Index = Index;
	Parms.Length = Length;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromStringUtf8Array
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class FString>              Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class ULowEntryBitDataEntry*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::BitDataEntry_CreateFromStringUtf8Array(TArray<class FString>& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "BitDataEntry_CreateFromStringUtf8Array");

	Params::ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromStringUtf8Array_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromStringUtf8
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      Value                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULowEntryBitDataEntry*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::BitDataEntry_CreateFromStringUtf8(const class FString& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "BitDataEntry_CreateFromStringUtf8");

	Params::ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromStringUtf8_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromPositiveInteger3Array
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<int32>                      Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class ULowEntryBitDataEntry*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::BitDataEntry_CreateFromPositiveInteger3Array(TArray<int32>& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "BitDataEntry_CreateFromPositiveInteger3Array");

	Params::ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromPositiveInteger3Array_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromPositiveInteger3
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULowEntryBitDataEntry*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::BitDataEntry_CreateFromPositiveInteger3(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "BitDataEntry_CreateFromPositiveInteger3");

	Params::ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromPositiveInteger3_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromPositiveInteger2Array
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<int32>                      Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class ULowEntryBitDataEntry*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::BitDataEntry_CreateFromPositiveInteger2Array(TArray<int32>& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "BitDataEntry_CreateFromPositiveInteger2Array");

	Params::ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromPositiveInteger2Array_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromPositiveInteger2
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULowEntryBitDataEntry*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::BitDataEntry_CreateFromPositiveInteger2(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "BitDataEntry_CreateFromPositiveInteger2");

	Params::ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromPositiveInteger2_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromPositiveInteger1Array
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<int32>                      Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class ULowEntryBitDataEntry*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::BitDataEntry_CreateFromPositiveInteger1Array(TArray<int32>& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "BitDataEntry_CreateFromPositiveInteger1Array");

	Params::ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromPositiveInteger1Array_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromPositiveInteger1
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULowEntryBitDataEntry*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::BitDataEntry_CreateFromPositiveInteger1(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "BitDataEntry_CreateFromPositiveInteger1");

	Params::ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromPositiveInteger1_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromLongBytesArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class ULowEntryLong*>       Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class ULowEntryBitDataEntry*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::BitDataEntry_CreateFromLongBytesArray(TArray<class ULowEntryLong*>& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "BitDataEntry_CreateFromLongBytesArray");

	Params::ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromLongBytesArray_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromLongBytes
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class ULowEntryLong*               Value                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULowEntryBitDataEntry*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::BitDataEntry_CreateFromLongBytes(class ULowEntryLong* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "BitDataEntry_CreateFromLongBytes");

	Params::ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromLongBytes_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromLongArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<int64>                      Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class ULowEntryBitDataEntry*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::BitDataEntry_CreateFromLongArray(TArray<int64>& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "BitDataEntry_CreateFromLongArray");

	Params::ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromLongArray_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromLong
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int64                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULowEntryBitDataEntry*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::BitDataEntry_CreateFromLong(int64 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "BitDataEntry_CreateFromLong");

	Params::ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromLong_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromIntegerMostSignificantBits
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              BitCount                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULowEntryBitDataEntry*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::BitDataEntry_CreateFromIntegerMostSignificantBits(int32 Value, int32 BitCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "BitDataEntry_CreateFromIntegerMostSignificantBits");

	Params::ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromIntegerMostSignificantBits_Params Parms{};

	Parms.Value = Value;
	Parms.BitCount = BitCount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromIntegerLeastSignificantBits
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              BitCount                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULowEntryBitDataEntry*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::BitDataEntry_CreateFromIntegerLeastSignificantBits(int32 Value, int32 BitCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "BitDataEntry_CreateFromIntegerLeastSignificantBits");

	Params::ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromIntegerLeastSignificantBits_Params Parms{};

	Parms.Value = Value;
	Parms.BitCount = BitCount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromIntegerArrayMostSignificantBits
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<int32>                      Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              BitCount                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULowEntryBitDataEntry*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::BitDataEntry_CreateFromIntegerArrayMostSignificantBits(TArray<int32>& Value, int32 BitCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "BitDataEntry_CreateFromIntegerArrayMostSignificantBits");

	Params::ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromIntegerArrayMostSignificantBits_Params Parms{};

	Parms.Value = Value;
	Parms.BitCount = BitCount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromIntegerArrayLeastSignificantBits
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<int32>                      Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              BitCount                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULowEntryBitDataEntry*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::BitDataEntry_CreateFromIntegerArrayLeastSignificantBits(TArray<int32>& Value, int32 BitCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "BitDataEntry_CreateFromIntegerArrayLeastSignificantBits");

	Params::ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromIntegerArrayLeastSignificantBits_Params Parms{};

	Parms.Value = Value;
	Parms.BitCount = BitCount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromIntegerArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<int32>                      Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class ULowEntryBitDataEntry*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::BitDataEntry_CreateFromIntegerArray(TArray<int32>& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "BitDataEntry_CreateFromIntegerArray");

	Params::ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromIntegerArray_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromInteger
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULowEntryBitDataEntry*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::BitDataEntry_CreateFromInteger(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "BitDataEntry_CreateFromInteger");

	Params::ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromInteger_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromFloatArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<float>                      Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class ULowEntryBitDataEntry*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::BitDataEntry_CreateFromFloatArray(TArray<float>& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "BitDataEntry_CreateFromFloatArray");

	Params::ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromFloatArray_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromFloat
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULowEntryBitDataEntry*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::BitDataEntry_CreateFromFloat(float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "BitDataEntry_CreateFromFloat");

	Params::ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromFloat_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromDoubleBytesArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class ULowEntryDouble*>     Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class ULowEntryBitDataEntry*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::BitDataEntry_CreateFromDoubleBytesArray(TArray<class ULowEntryDouble*>& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "BitDataEntry_CreateFromDoubleBytesArray");

	Params::ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromDoubleBytesArray_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromDoubleBytes
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class ULowEntryDouble*             Value                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULowEntryBitDataEntry*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::BitDataEntry_CreateFromDoubleBytes(class ULowEntryDouble* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "BitDataEntry_CreateFromDoubleBytes");

	Params::ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromDoubleBytes_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromDoubleArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<double>                     Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class ULowEntryBitDataEntry*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::BitDataEntry_CreateFromDoubleArray(TArray<double>& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "BitDataEntry_CreateFromDoubleArray");

	Params::ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromDoubleArray_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromDouble
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// double                             Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULowEntryBitDataEntry*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::BitDataEntry_CreateFromDouble(double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "BitDataEntry_CreateFromDouble");

	Params::ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromDouble_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromByteMostSignificantBits
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// uint8                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              BitCount                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULowEntryBitDataEntry*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::BitDataEntry_CreateFromByteMostSignificantBits(uint8 Value, int32 BitCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "BitDataEntry_CreateFromByteMostSignificantBits");

	Params::ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromByteMostSignificantBits_Params Parms{};

	Parms.Value = Value;
	Parms.BitCount = BitCount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromByteLeastSignificantBits
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// uint8                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              BitCount                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULowEntryBitDataEntry*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::BitDataEntry_CreateFromByteLeastSignificantBits(uint8 Value, int32 BitCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "BitDataEntry_CreateFromByteLeastSignificantBits");

	Params::ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromByteLeastSignificantBits_Params Parms{};

	Parms.Value = Value;
	Parms.BitCount = BitCount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromByteArrayMostSignificantBits
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<uint8>                      Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              BitCount                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULowEntryBitDataEntry*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::BitDataEntry_CreateFromByteArrayMostSignificantBits(TArray<uint8>& Value, int32 BitCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "BitDataEntry_CreateFromByteArrayMostSignificantBits");

	Params::ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromByteArrayMostSignificantBits_Params Parms{};

	Parms.Value = Value;
	Parms.BitCount = BitCount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromByteArrayLeastSignificantBits
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<uint8>                      Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              BitCount                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULowEntryBitDataEntry*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::BitDataEntry_CreateFromByteArrayLeastSignificantBits(TArray<uint8>& Value, int32 BitCount)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "BitDataEntry_CreateFromByteArrayLeastSignificantBits");

	Params::ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromByteArrayLeastSignificantBits_Params Parms{};

	Parms.Value = Value;
	Parms.BitCount = BitCount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromByteArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<uint8>                      Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class ULowEntryBitDataEntry*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::BitDataEntry_CreateFromByteArray(TArray<uint8>& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "BitDataEntry_CreateFromByteArray");

	Params::ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromByteArray_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromByte
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// uint8                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULowEntryBitDataEntry*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::BitDataEntry_CreateFromByte(uint8 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "BitDataEntry_CreateFromByte");

	Params::ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromByte_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromBooleanArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<bool>                       Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class ULowEntryBitDataEntry*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::BitDataEntry_CreateFromBooleanArray(TArray<bool>& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "BitDataEntry_CreateFromBooleanArray");

	Params::ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromBooleanArray_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromBoolean
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULowEntryBitDataEntry*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::BitDataEntry_CreateFromBoolean(bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "BitDataEntry_CreateFromBoolean");

	Params::ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromBoolean_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromBitArray
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<bool>                       Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class ULowEntryBitDataEntry*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::BitDataEntry_CreateFromBitArray(TArray<bool>& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "BitDataEntry_CreateFromBitArray");

	Params::ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromBitArray_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BitDataEntry_CreateFromBit
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ULowEntryBitDataEntry*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULowEntryBitDataEntry* ULowEntryExtendedStandardLibrary::BitDataEntry_CreateFromBit(bool Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "BitDataEntry_CreateFromBit");

	Params::ULowEntryExtendedStandardLibrary_BitDataEntry_CreateFromBit_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BinaryToBytes
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      Binary                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<uint8> ULowEntryExtendedStandardLibrary::BinaryToBytes(const class FString& Binary)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "BinaryToBytes");

	Params::ULowEntryExtendedStandardLibrary_BinaryToBytes_Params Parms{};

	Parms.Binary = Binary;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.BCrypt
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<uint8>                      ByteArray                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<uint8>                      Salt                                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Strength                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Length                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<uint8> ULowEntryExtendedStandardLibrary::BCrypt(TArray<uint8>& ByteArray, TArray<uint8>& Salt, int32 Strength, int32 Index, int32 Length)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "BCrypt");

	Params::ULowEntryExtendedStandardLibrary_BCrypt_Params Parms{};

	Parms.ByteArray = ByteArray;
	Parms.Salt = Salt;
	Parms.Strength = Strength;
	Parms.Index = Index;
	Parms.Length = Length;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Base64UrlToBytes
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      Base64Url                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<uint8> ULowEntryExtendedStandardLibrary::Base64UrlToBytes(const class FString& Base64Url)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "Base64UrlToBytes");

	Params::ULowEntryExtendedStandardLibrary_Base64UrlToBytes_Params Parms{};

	Parms.Base64Url = Base64Url;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Base64UrlToBase64
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      Base64Url                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULowEntryExtendedStandardLibrary::Base64UrlToBase64(const class FString& Base64Url)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "Base64UrlToBase64");

	Params::ULowEntryExtendedStandardLibrary_Base64UrlToBase64_Params Parms{};

	Parms.Base64Url = Base64Url;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Base64ToBytes
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      Base64                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<uint8> ULowEntryExtendedStandardLibrary::Base64ToBytes(const class FString& Base64)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "Base64ToBytes");

	Params::ULowEntryExtendedStandardLibrary_Base64ToBytes_Params Parms{};

	Parms.Base64 = Base64;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.Base64ToBase64Url
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      Base64                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULowEntryExtendedStandardLibrary::Base64ToBase64Url(const class FString& Base64)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "Base64ToBase64Url");

	Params::ULowEntryExtendedStandardLibrary_Base64ToBase64Url_Params Parms{};

	Parms.Base64 = Base64;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.AreBytesEqual
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<uint8>                      A                                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<uint8>                      B                                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              IndexA                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              LengthA                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              IndexB                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              LengthB                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULowEntryExtendedStandardLibrary::AreBytesEqual(TArray<uint8>& A, TArray<uint8>& B, int32 IndexA, int32 LengthA, int32 IndexB, int32 LengthB)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "AreBytesEqual");

	Params::ULowEntryExtendedStandardLibrary_AreBytesEqual_Params Parms{};

	Parms.A = A;
	Parms.B = B;
	Parms.IndexA = IndexA;
	Parms.LengthA = LengthA;
	Parms.IndexB = IndexB;
	Parms.LengthB = LengthB;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.AreAndroidHeadphonesPluggedIn
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULowEntryExtendedStandardLibrary::AreAndroidHeadphonesPluggedIn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "AreAndroidHeadphonesPluggedIn");

	Params::ULowEntryExtendedStandardLibrary_AreAndroidHeadphonesPluggedIn_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryExtendedStandardLibrary.AndroidPlatform
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULowEntryExtendedStandardLibrary::AndroidPlatform()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryExtendedStandardLibrary", "AndroidPlatform");

	Params::ULowEntryExtendedStandardLibrary_AndroidPlatform_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class LowEntryExtendedStandardLibrary.LowEntryLatentActionBoolean
// (None)

class UClass* ULowEntryLatentActionBoolean::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LowEntryLatentActionBoolean");

	return Clss;
}


// LowEntryLatentActionBoolean LowEntryExtendedStandardLibrary.Default__LowEntryLatentActionBoolean
// (Public, ClassDefaultObject, ArchetypeObject)

class ULowEntryLatentActionBoolean* ULowEntryLatentActionBoolean::GetDefaultObj()
{
	static class ULowEntryLatentActionBoolean* Default = nullptr;

	if (!Default)
		Default = static_cast<ULowEntryLatentActionBoolean*>(ULowEntryLatentActionBoolean::StaticClass()->DefaultObject);

	return Default;
}


// Function LowEntryExtendedStandardLibrary.LowEntryLatentActionBoolean.WaitTillDone
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           LatentInfo                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               Result_                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryLatentActionBoolean::WaitTillDone(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, bool* Result_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryLatentActionBoolean", "WaitTillDone");

	Params::ULowEntryLatentActionBoolean_WaitTillDone_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.LatentInfo = LatentInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Result_ != nullptr)
		*Result_ = Parms.Result_;

}


// Function LowEntryExtendedStandardLibrary.LowEntryLatentActionBoolean.IsDone
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULowEntryLatentActionBoolean::IsDone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryLatentActionBoolean", "IsDone");

	Params::ULowEntryLatentActionBoolean_IsDone_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryLatentActionBoolean.GetResult
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               Result_                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryLatentActionBoolean::GetResult(bool* Result_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryLatentActionBoolean", "GetResult");

	Params::ULowEntryLatentActionBoolean_GetResult_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Result_ != nullptr)
		*Result_ = Parms.Result_;

}


// Function LowEntryExtendedStandardLibrary.LowEntryLatentActionBoolean.Done
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               Result_                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryLatentActionBoolean::Done(bool Result_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryLatentActionBoolean", "Done");

	Params::ULowEntryLatentActionBoolean_Done_Params Parms{};

	Parms.Result_ = Result_;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class LowEntryExtendedStandardLibrary.LowEntryLatentActionFloat
// (None)

class UClass* ULowEntryLatentActionFloat::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LowEntryLatentActionFloat");

	return Clss;
}


// LowEntryLatentActionFloat LowEntryExtendedStandardLibrary.Default__LowEntryLatentActionFloat
// (Public, ClassDefaultObject, ArchetypeObject)

class ULowEntryLatentActionFloat* ULowEntryLatentActionFloat::GetDefaultObj()
{
	static class ULowEntryLatentActionFloat* Default = nullptr;

	if (!Default)
		Default = static_cast<ULowEntryLatentActionFloat*>(ULowEntryLatentActionFloat::StaticClass()->DefaultObject);

	return Default;
}


// Function LowEntryExtendedStandardLibrary.LowEntryLatentActionFloat.WaitTillDone
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           LatentInfo                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
// double                             Result_                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryLatentActionFloat::WaitTillDone(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, double* Result_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryLatentActionFloat", "WaitTillDone");

	Params::ULowEntryLatentActionFloat_WaitTillDone_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.LatentInfo = LatentInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Result_ != nullptr)
		*Result_ = Parms.Result_;

}


// Function LowEntryExtendedStandardLibrary.LowEntryLatentActionFloat.IsDone
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULowEntryLatentActionFloat::IsDone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryLatentActionFloat", "IsDone");

	Params::ULowEntryLatentActionFloat_IsDone_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryLatentActionFloat.GetResult
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// double                             Result_                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryLatentActionFloat::GetResult(double* Result_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryLatentActionFloat", "GetResult");

	Params::ULowEntryLatentActionFloat_GetResult_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Result_ != nullptr)
		*Result_ = Parms.Result_;

}


// Function LowEntryExtendedStandardLibrary.LowEntryLatentActionFloat.Done
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// double                             Result_                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryLatentActionFloat::Done(double Result_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryLatentActionFloat", "Done");

	Params::ULowEntryLatentActionFloat_Done_Params Parms{};

	Parms.Result_ = Result_;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class LowEntryExtendedStandardLibrary.LowEntryLatentActionInteger
// (None)

class UClass* ULowEntryLatentActionInteger::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LowEntryLatentActionInteger");

	return Clss;
}


// LowEntryLatentActionInteger LowEntryExtendedStandardLibrary.Default__LowEntryLatentActionInteger
// (Public, ClassDefaultObject, ArchetypeObject)

class ULowEntryLatentActionInteger* ULowEntryLatentActionInteger::GetDefaultObj()
{
	static class ULowEntryLatentActionInteger* Default = nullptr;

	if (!Default)
		Default = static_cast<ULowEntryLatentActionInteger*>(ULowEntryLatentActionInteger::StaticClass()->DefaultObject);

	return Default;
}


// Function LowEntryExtendedStandardLibrary.LowEntryLatentActionInteger.WaitTillDone
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           LatentInfo                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
// int32                              Result_                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryLatentActionInteger::WaitTillDone(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, int32* Result_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryLatentActionInteger", "WaitTillDone");

	Params::ULowEntryLatentActionInteger_WaitTillDone_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.LatentInfo = LatentInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Result_ != nullptr)
		*Result_ = Parms.Result_;

}


// Function LowEntryExtendedStandardLibrary.LowEntryLatentActionInteger.IsDone
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULowEntryLatentActionInteger::IsDone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryLatentActionInteger", "IsDone");

	Params::ULowEntryLatentActionInteger_IsDone_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryLatentActionInteger.GetResult
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              Result_                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryLatentActionInteger::GetResult(int32* Result_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryLatentActionInteger", "GetResult");

	Params::ULowEntryLatentActionInteger_GetResult_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Result_ != nullptr)
		*Result_ = Parms.Result_;

}


// Function LowEntryExtendedStandardLibrary.LowEntryLatentActionInteger.Done
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Result_                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryLatentActionInteger::Done(int32 Result_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryLatentActionInteger", "Done");

	Params::ULowEntryLatentActionInteger_Done_Params Parms{};

	Parms.Result_ = Result_;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class LowEntryExtendedStandardLibrary.LowEntryLatentActionNone
// (None)

class UClass* ULowEntryLatentActionNone::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LowEntryLatentActionNone");

	return Clss;
}


// LowEntryLatentActionNone LowEntryExtendedStandardLibrary.Default__LowEntryLatentActionNone
// (Public, ClassDefaultObject, ArchetypeObject)

class ULowEntryLatentActionNone* ULowEntryLatentActionNone::GetDefaultObj()
{
	static class ULowEntryLatentActionNone* Default = nullptr;

	if (!Default)
		Default = static_cast<ULowEntryLatentActionNone*>(ULowEntryLatentActionNone::StaticClass()->DefaultObject);

	return Default;
}


// Function LowEntryExtendedStandardLibrary.LowEntryLatentActionNone.WaitTillDone
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           LatentInfo                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)

void ULowEntryLatentActionNone::WaitTillDone(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryLatentActionNone", "WaitTillDone");

	Params::ULowEntryLatentActionNone_WaitTillDone_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.LatentInfo = LatentInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryLatentActionNone.IsDone
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULowEntryLatentActionNone::IsDone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryLatentActionNone", "IsDone");

	Params::ULowEntryLatentActionNone_IsDone_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryLatentActionNone.Done
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void ULowEntryLatentActionNone::Done()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryLatentActionNone", "Done");

	Params::ULowEntryLatentActionNone_Done_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class LowEntryExtendedStandardLibrary.LowEntryLatentActionObject
// (None)

class UClass* ULowEntryLatentActionObject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LowEntryLatentActionObject");

	return Clss;
}


// LowEntryLatentActionObject LowEntryExtendedStandardLibrary.Default__LowEntryLatentActionObject
// (Public, ClassDefaultObject, ArchetypeObject)

class ULowEntryLatentActionObject* ULowEntryLatentActionObject::GetDefaultObj()
{
	static class ULowEntryLatentActionObject* Default = nullptr;

	if (!Default)
		Default = static_cast<ULowEntryLatentActionObject*>(ULowEntryLatentActionObject::StaticClass()->DefaultObject);

	return Default;
}


// Function LowEntryExtendedStandardLibrary.LowEntryLatentActionObject.WaitTillDone
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           LatentInfo                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UObject*                     Result_                                                          (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryLatentActionObject::WaitTillDone(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class UObject** Result_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryLatentActionObject", "WaitTillDone");

	Params::ULowEntryLatentActionObject_WaitTillDone_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.LatentInfo = LatentInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Result_ != nullptr)
		*Result_ = Parms.Result_;

}


// Function LowEntryExtendedStandardLibrary.LowEntryLatentActionObject.IsDone
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULowEntryLatentActionObject::IsDone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryLatentActionObject", "IsDone");

	Params::ULowEntryLatentActionObject_IsDone_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryLatentActionObject.GetResult
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     Result_                                                          (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryLatentActionObject::GetResult(class UObject** Result_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryLatentActionObject", "GetResult");

	Params::ULowEntryLatentActionObject_GetResult_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Result_ != nullptr)
		*Result_ = Parms.Result_;

}


// Function LowEntryExtendedStandardLibrary.LowEntryLatentActionObject.Done
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Result_                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryLatentActionObject::Done(class UObject* Result_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryLatentActionObject", "Done");

	Params::ULowEntryLatentActionObject_Done_Params Parms{};

	Parms.Result_ = Result_;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class LowEntryExtendedStandardLibrary.LowEntryLatentActionString
// (None)

class UClass* ULowEntryLatentActionString::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LowEntryLatentActionString");

	return Clss;
}


// LowEntryLatentActionString LowEntryExtendedStandardLibrary.Default__LowEntryLatentActionString
// (Public, ClassDefaultObject, ArchetypeObject)

class ULowEntryLatentActionString* ULowEntryLatentActionString::GetDefaultObj()
{
	static class ULowEntryLatentActionString* Default = nullptr;

	if (!Default)
		Default = static_cast<ULowEntryLatentActionString*>(ULowEntryLatentActionString::StaticClass()->DefaultObject);

	return Default;
}


// Function LowEntryExtendedStandardLibrary.LowEntryLatentActionString.WaitTillDone
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           LatentInfo                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class FString                      Result_                                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryLatentActionString::WaitTillDone(class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo, class FString* Result_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryLatentActionString", "WaitTillDone");

	Params::ULowEntryLatentActionString_WaitTillDone_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.LatentInfo = LatentInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Result_ != nullptr)
		*Result_ = Parms.Result_;

}


// Function LowEntryExtendedStandardLibrary.LowEntryLatentActionString.IsDone
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULowEntryLatentActionString::IsDone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryLatentActionString", "IsDone");

	Params::ULowEntryLatentActionString_IsDone_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryLatentActionString.GetResult
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      Result_                                                          (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryLatentActionString::GetResult(class FString* Result_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryLatentActionString", "GetResult");

	Params::ULowEntryLatentActionString_GetResult_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Result_ != nullptr)
		*Result_ = Parms.Result_;

}


// Function LowEntryExtendedStandardLibrary.LowEntryLatentActionString.Done
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Result_                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryLatentActionString::Done(const class FString& Result_)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryLatentActionString", "Done");

	Params::ULowEntryLatentActionString_Done_Params Parms{};

	Parms.Result_ = Result_;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class LowEntryExtendedStandardLibrary.LowEntryLong
// (None)

class UClass* ULowEntryLong::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LowEntryLong");

	return Clss;
}


// LowEntryLong LowEntryExtendedStandardLibrary.Default__LowEntryLong
// (Public, ClassDefaultObject, ArchetypeObject)

class ULowEntryLong* ULowEntryLong::GetDefaultObj()
{
	static class ULowEntryLong* Default = nullptr;

	if (!Default)
		Default = static_cast<ULowEntryLong*>(ULowEntryLong::StaticClass()->DefaultObject);

	return Default;
}


// Function LowEntryExtendedStandardLibrary.LowEntryLong.SetLong
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int64                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryLong::SetLong(int64 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryLong", "SetLong");

	Params::ULowEntryLong_SetLong_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryLong.SetBytes
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<uint8>                      ByteArray                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Length                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryLong::SetBytes(TArray<uint8>& ByteArray, int32 Index, int32 Length)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryLong", "SetBytes");

	Params::ULowEntryLong_SetBytes_Params Parms{};

	Parms.ByteArray = ByteArray;
	Parms.Index = Index;
	Parms.Length = Length;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryLong.LongBytes_Subtract
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ULowEntryLong*               Value                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryLong::LongBytes_Subtract(class ULowEntryLong* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryLong", "LongBytes_Subtract");

	Params::ULowEntryLong_LongBytes_Subtract_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryLong.LongBytes_LessThan
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class ULowEntryLong*               Value                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULowEntryLong::LongBytes_LessThan(class ULowEntryLong* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryLong", "LongBytes_LessThan");

	Params::ULowEntryLong_LongBytes_LessThan_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryLong.LongBytes_GreaterThan
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class ULowEntryLong*               Value                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULowEntryLong::LongBytes_GreaterThan(class ULowEntryLong* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryLong", "LongBytes_GreaterThan");

	Params::ULowEntryLong_LongBytes_GreaterThan_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryLong.LongBytes_Equals
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class ULowEntryLong*               Value                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULowEntryLong::LongBytes_Equals(class ULowEntryLong* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryLong", "LongBytes_Equals");

	Params::ULowEntryLong_LongBytes_Equals_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryLong.LongBytes_Add
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class ULowEntryLong*               Value                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryLong::LongBytes_Add(class ULowEntryLong* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryLong", "LongBytes_Add");

	Params::ULowEntryLong_LongBytes_Add_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryLong.Integer_Subtract
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryLong::Integer_Subtract(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryLong", "Integer_Subtract");

	Params::ULowEntryLong_Integer_Subtract_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryLong.Integer_LessThan
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULowEntryLong::Integer_LessThan(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryLong", "Integer_LessThan");

	Params::ULowEntryLong_Integer_LessThan_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryLong.Integer_GreaterThan
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULowEntryLong::Integer_GreaterThan(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryLong", "Integer_GreaterThan");

	Params::ULowEntryLong_Integer_GreaterThan_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryLong.Integer_Equals
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULowEntryLong::Integer_Equals(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryLong", "Integer_Equals");

	Params::ULowEntryLong_Integer_Equals_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryLong.Integer_Add
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void ULowEntryLong::Integer_Add(int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryLong", "Integer_Add");

	Params::ULowEntryLong_Integer_Add_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function LowEntryExtendedStandardLibrary.LowEntryLong.GetLong
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int64                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int64 ULowEntryLong::GetLong()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryLong", "GetLong");

	Params::ULowEntryLong_GetLong_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryLong.GetBytes
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<uint8>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<uint8> ULowEntryLong::GetBytes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryLong", "GetBytes");

	Params::ULowEntryLong_GetBytes_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryLong.Float_LessThan
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// double                             Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULowEntryLong::Float_LessThan(double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryLong", "Float_LessThan");

	Params::ULowEntryLong_Float_LessThan_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryLong.Float_GreaterThan
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// double                             Value                                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULowEntryLong::Float_GreaterThan(double Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryLong", "Float_GreaterThan");

	Params::ULowEntryLong_Float_GreaterThan_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryLong.DoubleBytes_LessThan
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class ULowEntryDouble*             Value                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULowEntryLong::DoubleBytes_LessThan(class ULowEntryDouble* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryLong", "DoubleBytes_LessThan");

	Params::ULowEntryLong_DoubleBytes_LessThan_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryLong.DoubleBytes_GreaterThan
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class ULowEntryDouble*             Value                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ULowEntryLong::DoubleBytes_GreaterThan(class ULowEntryDouble* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryLong", "DoubleBytes_GreaterThan");

	Params::ULowEntryLong_DoubleBytes_GreaterThan_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryLong.CreateClone
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class ULowEntryLong*               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULowEntryLong* ULowEntryLong::CreateClone()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryLong", "CreateClone");

	Params::ULowEntryLong_CreateClone_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryLong.CastToString
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULowEntryLong::CastToString()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryLong", "CastToString");

	Params::ULowEntryLong_CastToString_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryLong.CastToDoubleBytes
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class ULowEntryDouble*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class ULowEntryDouble* ULowEntryLong::CastToDoubleBytes()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryLong", "CastToDoubleBytes");

	Params::ULowEntryLong_CastToDoubleBytes_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class LowEntryExtendedStandardLibrary.LowEntryParsedHashcash
// (None)

class UClass* ULowEntryParsedHashcash::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LowEntryParsedHashcash");

	return Clss;
}


// LowEntryParsedHashcash LowEntryExtendedStandardLibrary.Default__LowEntryParsedHashcash
// (Public, ClassDefaultObject, ArchetypeObject)

class ULowEntryParsedHashcash* ULowEntryParsedHashcash::GetDefaultObj()
{
	static class ULowEntryParsedHashcash* Default = nullptr;

	if (!Default)
		Default = static_cast<ULowEntryParsedHashcash*>(ULowEntryParsedHashcash::StaticClass()->DefaultObject);

	return Default;
}


// Function LowEntryExtendedStandardLibrary.LowEntryParsedHashcash.ToString
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULowEntryParsedHashcash::ToString()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryParsedHashcash", "ToString");

	Params::ULowEntryParsedHashcash_ToString_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryParsedHashcash.GetResource
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString ULowEntryParsedHashcash::GetResource()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryParsedHashcash", "GetResource");

	Params::ULowEntryParsedHashcash_GetResource_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryParsedHashcash.GetDate
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FDateTime                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FDateTime ULowEntryParsedHashcash::GetDate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryParsedHashcash", "GetDate");

	Params::ULowEntryParsedHashcash_GetDate_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function LowEntryExtendedStandardLibrary.LowEntryParsedHashcash.GetBits
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 ULowEntryParsedHashcash::GetBits()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("LowEntryParsedHashcash", "GetBits");

	Params::ULowEntryParsedHashcash_GetBits_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


