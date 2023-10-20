#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class VaRest.VaRestJsonObject
// (None)

class UClass* UVaRestJsonObject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VaRestJsonObject");

	return Clss;
}


// VaRestJsonObject VaRest.Default__VaRestJsonObject
// (Public, ClassDefaultObject, ArchetypeObject)

class UVaRestJsonObject* UVaRestJsonObject::GetDefaultObj()
{
	static class UVaRestJsonObject* Default = nullptr;

	if (!Default)
		Default = static_cast<UVaRestJsonObject*>(UVaRestJsonObject::StaticClass()->DefaultObject);

	return Default;
}


// Function VaRest.VaRestJsonObject.WriteToFilePath
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Path                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsRelativeToProjectDir                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVaRestJsonObject::WriteToFilePath(const class FString& Path, bool bIsRelativeToProjectDir)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonObject", "WriteToFilePath");

	Params::UVaRestJsonObject_WriteToFilePath_Params Parms{};

	Parms.Path = Path;
	Parms.bIsRelativeToProjectDir = bIsRelativeToProjectDir;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRest.VaRestJsonObject.SetStringField
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      StringValue                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVaRestJsonObject::SetStringField(const class FString& FieldName, const class FString& StringValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonObject", "SetStringField");

	Params::UVaRestJsonObject_SetStringField_Params Parms{};

	Parms.FieldName = FieldName;
	Parms.StringValue = StringValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VaRest.VaRestJsonObject.SetStringArrayField
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              StringArray                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UVaRestJsonObject::SetStringArrayField(const class FString& FieldName, TArray<class FString>& StringArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonObject", "SetStringArrayField");

	Params::UVaRestJsonObject_SetStringArrayField_Params Parms{};

	Parms.FieldName = FieldName;
	Parms.StringArray = StringArray;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VaRest.VaRestJsonObject.SetObjectField
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVaRestJsonObject*           JsonObject                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVaRestJsonObject::SetObjectField(const class FString& FieldName, class UVaRestJsonObject* JsonObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonObject", "SetObjectField");

	Params::UVaRestJsonObject_SetObjectField_Params Parms{};

	Parms.FieldName = FieldName;
	Parms.JsonObject = JsonObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VaRest.VaRestJsonObject.SetObjectArrayField
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UVaRestJsonObject*>   ObjectArray                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UVaRestJsonObject::SetObjectArrayField(const class FString& FieldName, TArray<class UVaRestJsonObject*>& ObjectArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonObject", "SetObjectArrayField");

	Params::UVaRestJsonObject_SetObjectArrayField_Params Parms{};

	Parms.FieldName = FieldName;
	Parms.ObjectArray = ObjectArray;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VaRest.VaRestJsonObject.SetNumberFieldDouble
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// double                             Number                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVaRestJsonObject::SetNumberFieldDouble(const class FString& FieldName, double Number)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonObject", "SetNumberFieldDouble");

	Params::UVaRestJsonObject_SetNumberFieldDouble_Params Parms{};

	Parms.FieldName = FieldName;
	Parms.Number = Number;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VaRest.VaRestJsonObject.SetNumberField
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Number                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVaRestJsonObject::SetNumberField(const class FString& FieldName, float Number)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonObject", "SetNumberField");

	Params::UVaRestJsonObject_SetNumberField_Params Parms{};

	Parms.FieldName = FieldName;
	Parms.Number = Number;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VaRest.VaRestJsonObject.SetNumberArrayFieldDouble
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<double>                     NumberArray                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UVaRestJsonObject::SetNumberArrayFieldDouble(const class FString& FieldName, TArray<double>& NumberArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonObject", "SetNumberArrayFieldDouble");

	Params::UVaRestJsonObject_SetNumberArrayFieldDouble_Params Parms{};

	Parms.FieldName = FieldName;
	Parms.NumberArray = NumberArray;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VaRest.VaRestJsonObject.SetNumberArrayField
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                      NumberArray                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UVaRestJsonObject::SetNumberArrayField(const class FString& FieldName, TArray<float>& NumberArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonObject", "SetNumberArrayField");

	Params::UVaRestJsonObject_SetNumberArrayField_Params Parms{};

	Parms.FieldName = FieldName;
	Parms.NumberArray = NumberArray;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VaRest.VaRestJsonObject.SetMapFields_uint8
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TMap<class FString, uint8>         Fields                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UVaRestJsonObject::SetMapFields_uint8(TMap<class FString, uint8>& Fields)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonObject", "SetMapFields_uint8");

	Params::UVaRestJsonObject_SetMapFields_uint8_Params Parms{};

	Parms.Fields = Fields;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VaRest.VaRestJsonObject.SetMapFields_string
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TMap<class FString, class FString> Fields                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UVaRestJsonObject::SetMapFields_string(TMap<class FString, class FString>& Fields)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonObject", "SetMapFields_string");

	Params::UVaRestJsonObject_SetMapFields_string_Params Parms{};

	Parms.Fields = Fields;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VaRest.VaRestJsonObject.SetMapFields_int64
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TMap<class FString, int64>         Fields                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UVaRestJsonObject::SetMapFields_int64(TMap<class FString, int64>& Fields)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonObject", "SetMapFields_int64");

	Params::UVaRestJsonObject_SetMapFields_int64_Params Parms{};

	Parms.Fields = Fields;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VaRest.VaRestJsonObject.SetMapFields_int32
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TMap<class FString, int32>         Fields                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UVaRestJsonObject::SetMapFields_int32(TMap<class FString, int32>& Fields)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonObject", "SetMapFields_int32");

	Params::UVaRestJsonObject_SetMapFields_int32_Params Parms{};

	Parms.Fields = Fields;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VaRest.VaRestJsonObject.SetMapFields_bool
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TMap<class FString, bool>          Fields                                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UVaRestJsonObject::SetMapFields_bool(TMap<class FString, bool>& Fields)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonObject", "SetMapFields_bool");

	Params::UVaRestJsonObject_SetMapFields_bool_Params Parms{};

	Parms.Fields = Fields;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VaRest.VaRestJsonObject.SetIntegerField
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Number                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVaRestJsonObject::SetIntegerField(const class FString& FieldName, int32 Number)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonObject", "SetIntegerField");

	Params::UVaRestJsonObject_SetIntegerField_Params Parms{};

	Parms.FieldName = FieldName;
	Parms.Number = Number;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VaRest.VaRestJsonObject.SetInt64Field
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int64                              Number                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVaRestJsonObject::SetInt64Field(const class FString& FieldName, int64 Number)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonObject", "SetInt64Field");

	Params::UVaRestJsonObject_SetInt64Field_Params Parms{};

	Parms.FieldName = FieldName;
	Parms.Number = Number;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VaRest.VaRestJsonObject.SetField
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVaRestJsonValue*            JsonValue                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVaRestJsonObject::SetField(const class FString& FieldName, class UVaRestJsonValue* JsonValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonObject", "SetField");

	Params::UVaRestJsonObject_SetField_Params Parms{};

	Parms.FieldName = FieldName;
	Parms.JsonValue = JsonValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VaRest.VaRestJsonObject.SetBoolField
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVaRestJsonObject::SetBoolField(const class FString& FieldName, bool InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonObject", "SetBoolField");

	Params::UVaRestJsonObject_SetBoolField_Params Parms{};

	Parms.FieldName = FieldName;
	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VaRest.VaRestJsonObject.SetBoolArrayField
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<bool>                       BoolArray                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UVaRestJsonObject::SetBoolArrayField(const class FString& FieldName, TArray<bool>& BoolArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonObject", "SetBoolArrayField");

	Params::UVaRestJsonObject_SetBoolArrayField_Params Parms{};

	Parms.FieldName = FieldName;
	Parms.BoolArray = BoolArray;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VaRest.VaRestJsonObject.SetArrayField
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UVaRestJsonValue*>    InArray                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UVaRestJsonObject::SetArrayField(const class FString& FieldName, TArray<class UVaRestJsonValue*>& InArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonObject", "SetArrayField");

	Params::UVaRestJsonObject_SetArrayField_Params Parms{};

	Parms.FieldName = FieldName;
	Parms.InArray = InArray;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VaRest.VaRestJsonObject.Reset
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UVaRestJsonObject::Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonObject", "Reset");

	Params::UVaRestJsonObject_Reset_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VaRest.VaRestJsonObject.RemoveField
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVaRestJsonObject::RemoveField(const class FString& FieldName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonObject", "RemoveField");

	Params::UVaRestJsonObject_RemoveField_Params Parms{};

	Parms.FieldName = FieldName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VaRest.VaRestJsonObject.MergeJsonObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UVaRestJsonObject*           InJsonObject                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Overwrite                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVaRestJsonObject::MergeJsonObject(class UVaRestJsonObject* InJsonObject, bool Overwrite)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonObject", "MergeJsonObject");

	Params::UVaRestJsonObject_MergeJsonObject_Params Parms{};

	Parms.InJsonObject = InJsonObject;
	Parms.Overwrite = Overwrite;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VaRest.VaRestJsonObject.HasField
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVaRestJsonObject::HasField(const class FString& FieldName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonObject", "HasField");

	Params::UVaRestJsonObject_HasField_Params Parms{};

	Parms.FieldName = FieldName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRest.VaRestJsonObject.GetStringField
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UVaRestJsonObject::GetStringField(const class FString& FieldName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonObject", "GetStringField");

	Params::UVaRestJsonObject_GetStringField_Params Parms{};

	Parms.FieldName = FieldName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRest.VaRestJsonObject.GetStringArrayField
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> UVaRestJsonObject::GetStringArrayField(const class FString& FieldName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonObject", "GetStringArrayField");

	Params::UVaRestJsonObject_GetStringArrayField_Params Parms{};

	Parms.FieldName = FieldName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRest.VaRestJsonObject.GetObjectField
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVaRestJsonObject*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UVaRestJsonObject* UVaRestJsonObject::GetObjectField(const class FString& FieldName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonObject", "GetObjectField");

	Params::UVaRestJsonObject_GetObjectField_Params Parms{};

	Parms.FieldName = FieldName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRest.VaRestJsonObject.GetObjectArrayField
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UVaRestJsonObject*>   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UVaRestJsonObject*> UVaRestJsonObject::GetObjectArrayField(const class FString& FieldName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonObject", "GetObjectArrayField");

	Params::UVaRestJsonObject_GetObjectArrayField_Params Parms{};

	Parms.FieldName = FieldName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRest.VaRestJsonObject.GetNumberField
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UVaRestJsonObject::GetNumberField(const class FString& FieldName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonObject", "GetNumberField");

	Params::UVaRestJsonObject_GetNumberField_Params Parms{};

	Parms.FieldName = FieldName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRest.VaRestJsonObject.GetNumberArrayField
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<float>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<float> UVaRestJsonObject::GetNumberArrayField(const class FString& FieldName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonObject", "GetNumberArrayField");

	Params::UVaRestJsonObject_GetNumberArrayField_Params Parms{};

	Parms.FieldName = FieldName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRest.VaRestJsonObject.GetIntegerField
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UVaRestJsonObject::GetIntegerField(const class FString& FieldName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonObject", "GetIntegerField");

	Params::UVaRestJsonObject_GetIntegerField_Params Parms{};

	Parms.FieldName = FieldName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRest.VaRestJsonObject.GetIntegerArrayField
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<int32>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<int32> UVaRestJsonObject::GetIntegerArrayField(const class FString& FieldName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonObject", "GetIntegerArrayField");

	Params::UVaRestJsonObject_GetIntegerArrayField_Params Parms{};

	Parms.FieldName = FieldName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRest.VaRestJsonObject.GetInt64Field
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int64                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int64 UVaRestJsonObject::GetInt64Field(const class FString& FieldName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonObject", "GetInt64Field");

	Params::UVaRestJsonObject_GetInt64Field_Params Parms{};

	Parms.FieldName = FieldName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRest.VaRestJsonObject.GetFieldTypeString
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UVaRestJsonObject::GetFieldTypeString(const class FString& FieldName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonObject", "GetFieldTypeString");

	Params::UVaRestJsonObject_GetFieldTypeString_Params Parms{};

	Parms.FieldName = FieldName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRest.VaRestJsonObject.GetFieldNames
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> UVaRestJsonObject::GetFieldNames()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonObject", "GetFieldNames");

	Params::UVaRestJsonObject_GetFieldNames_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRest.VaRestJsonObject.GetField
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVaRestJsonValue*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UVaRestJsonValue* UVaRestJsonObject::GetField(const class FString& FieldName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonObject", "GetField");

	Params::UVaRestJsonObject_GetField_Params Parms{};

	Parms.FieldName = FieldName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRest.VaRestJsonObject.GetBoolField
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVaRestJsonObject::GetBoolField(const class FString& FieldName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonObject", "GetBoolField");

	Params::UVaRestJsonObject_GetBoolField_Params Parms{};

	Parms.FieldName = FieldName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRest.VaRestJsonObject.GetBoolArrayField
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<bool>                       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<bool> UVaRestJsonObject::GetBoolArrayField(const class FString& FieldName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonObject", "GetBoolArrayField");

	Params::UVaRestJsonObject_GetBoolArrayField_Params Parms{};

	Parms.FieldName = FieldName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRest.VaRestJsonObject.GetArrayField
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      FieldName                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UVaRestJsonValue*>    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UVaRestJsonValue*> UVaRestJsonObject::GetArrayField(const class FString& FieldName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonObject", "GetArrayField");

	Params::UVaRestJsonObject_GetArrayField_Params Parms{};

	Parms.FieldName = FieldName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRest.VaRestJsonObject.EncodeJsonToSingleString
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UVaRestJsonObject::EncodeJsonToSingleString()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonObject", "EncodeJsonToSingleString");

	Params::UVaRestJsonObject_EncodeJsonToSingleString_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRest.VaRestJsonObject.EncodeJson
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UVaRestJsonObject::EncodeJson()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonObject", "EncodeJson");

	Params::UVaRestJsonObject_EncodeJson_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRest.VaRestJsonObject.DecodeJson
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      JsonString                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUseIncrementalParser                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVaRestJsonObject::DecodeJson(const class FString& JsonString, bool bUseIncrementalParser)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonObject", "DecodeJson");

	Params::UVaRestJsonObject_DecodeJson_Params Parms{};

	Parms.JsonString = JsonString;
	Parms.bUseIncrementalParser = bUseIncrementalParser;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class VaRest.VaRestJsonValue
// (None)

class UClass* UVaRestJsonValue::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VaRestJsonValue");

	return Clss;
}


// VaRestJsonValue VaRest.Default__VaRestJsonValue
// (Public, ClassDefaultObject, ArchetypeObject)

class UVaRestJsonValue* UVaRestJsonValue::GetDefaultObj()
{
	static class UVaRestJsonValue* Default = nullptr;

	if (!Default)
		Default = static_cast<UVaRestJsonValue*>(UVaRestJsonValue::StaticClass()->DefaultObject);

	return Default;
}


// Function VaRest.VaRestJsonValue.Reset
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UVaRestJsonValue::Reset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonValue", "Reset");

	Params::UVaRestJsonValue_Reset_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VaRest.VaRestJsonValue.IsNull
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVaRestJsonValue::IsNull()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonValue", "IsNull");

	Params::UVaRestJsonValue_IsNull_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRest.VaRestJsonValue.GetTypeString
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UVaRestJsonValue::GetTypeString()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonValue", "GetTypeString");

	Params::UVaRestJsonValue_GetTypeString_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRest.VaRestJsonValue.GetType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EVaJson                 ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EVaJson UVaRestJsonValue::GetType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonValue", "GetType");

	Params::UVaRestJsonValue_GetType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRest.VaRestJsonValue.AsString
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UVaRestJsonValue::AsString()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonValue", "AsString");

	Params::UVaRestJsonValue_AsString_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRest.VaRestJsonValue.AsObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UVaRestJsonObject*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UVaRestJsonObject* UVaRestJsonValue::AsObject()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonValue", "AsObject");

	Params::UVaRestJsonValue_AsObject_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRest.VaRestJsonValue.AsNumber
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UVaRestJsonValue::AsNumber()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonValue", "AsNumber");

	Params::UVaRestJsonValue_AsNumber_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRest.VaRestJsonValue.AsInt64
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int64                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int64 UVaRestJsonValue::AsInt64()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonValue", "AsInt64");

	Params::UVaRestJsonValue_AsInt64_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRest.VaRestJsonValue.AsInt32
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UVaRestJsonValue::AsInt32()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonValue", "AsInt32");

	Params::UVaRestJsonValue_AsInt32_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRest.VaRestJsonValue.AsBool
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVaRestJsonValue::AsBool()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonValue", "AsBool");

	Params::UVaRestJsonValue_AsBool_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRest.VaRestJsonValue.AsArray
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UVaRestJsonValue*>    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UVaRestJsonValue*> UVaRestJsonValue::AsArray()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestJsonValue", "AsArray");

	Params::UVaRestJsonValue_AsArray_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class VaRest.VaRestLibrary
// (None)

class UClass* UVaRestLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VaRestLibrary");

	return Clss;
}


// VaRestLibrary VaRest.Default__VaRestLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UVaRestLibrary* UVaRestLibrary::GetDefaultObj()
{
	static class UVaRestLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UVaRestLibrary*>(UVaRestLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function VaRest.VaRestLibrary.StringToSha1
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      StringToHash                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UVaRestLibrary::StringToSha1(const class FString& StringToHash)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestLibrary", "StringToSha1");

	Params::UVaRestLibrary_StringToSha1_Params Parms{};

	Parms.StringToHash = StringToHash;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRest.VaRestLibrary.StringToMd5
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      StringToHash                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UVaRestLibrary::StringToMd5(const class FString& StringToHash)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestLibrary", "StringToMd5");

	Params::UVaRestLibrary_StringToMd5_Params Parms{};

	Parms.StringToHash = StringToHash;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRest.VaRestLibrary.PercentEncode
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      Source                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UVaRestLibrary::PercentEncode(const class FString& Source)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestLibrary", "PercentEncode");

	Params::UVaRestLibrary_PercentEncode_Params Parms{};

	Parms.Source = Source;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRest.VaRestLibrary.HTTPStatusIntToEnum
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              StatusCode                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EVaRestHttpStatusCode   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EVaRestHttpStatusCode UVaRestLibrary::HTTPStatusIntToEnum(int32 StatusCode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestLibrary", "HTTPStatusIntToEnum");

	Params::UVaRestLibrary_HTTPStatusIntToEnum_Params Parms{};

	Parms.StatusCode = StatusCode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRest.VaRestLibrary.GetWorldURL
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVaRestURL                  ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FVaRestURL UVaRestLibrary::GetWorldURL(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestLibrary", "GetWorldURL");

	Params::UVaRestLibrary_GetWorldURL_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRest.VaRestLibrary.GetVaRestVersion
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UVaRestLibrary::GetVaRestVersion()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestLibrary", "GetVaRestVersion");

	Params::UVaRestLibrary_GetVaRestVersion_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRest.VaRestLibrary.GetVaRestSettings
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UVaRestSettings*             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UVaRestSettings* UVaRestLibrary::GetVaRestSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestLibrary", "GetVaRestSettings");

	Params::UVaRestLibrary_GetVaRestSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRest.VaRestLibrary.Base64EncodeData
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<uint8>                      Data                                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      Dest                                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVaRestLibrary::Base64EncodeData(TArray<uint8>& Data, class FString* Dest)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestLibrary", "Base64EncodeData");

	Params::UVaRestLibrary_Base64EncodeData_Params Parms{};

	Parms.Data = Data;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Dest != nullptr)
		*Dest = Parms.Dest;

	return Parms.ReturnValue;

}


// Function VaRest.VaRestLibrary.Base64Encode
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      Source                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UVaRestLibrary::Base64Encode(const class FString& Source)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestLibrary", "Base64Encode");

	Params::UVaRestLibrary_Base64Encode_Params Parms{};

	Parms.Source = Source;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRest.VaRestLibrary.Base64DecodeData
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      Source                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<uint8>                      Dest                                                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVaRestLibrary::Base64DecodeData(const class FString& Source, TArray<uint8>* Dest)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestLibrary", "Base64DecodeData");

	Params::UVaRestLibrary_Base64DecodeData_Params Parms{};

	Parms.Source = Source;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Dest != nullptr)
		*Dest = Parms.Dest;

	return Parms.ReturnValue;

}


// Function VaRest.VaRestLibrary.Base64Decode
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      Source                                                           (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      Dest                                                             (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVaRestLibrary::Base64Decode(const class FString& Source, class FString* Dest)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestLibrary", "Base64Decode");

	Params::UVaRestLibrary_Base64Decode_Params Parms{};

	Parms.Source = Source;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Dest != nullptr)
		*Dest = Parms.Dest;

	return Parms.ReturnValue;

}


// Class VaRest.VaRestRequestJSON
// (None)

class UClass* UVaRestRequestJSON::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VaRestRequestJSON");

	return Clss;
}


// VaRestRequestJSON VaRest.Default__VaRestRequestJSON
// (Public, ClassDefaultObject, ArchetypeObject)

class UVaRestRequestJSON* UVaRestRequestJSON::GetDefaultObj()
{
	static class UVaRestRequestJSON* Default = nullptr;

	if (!Default)
		Default = static_cast<UVaRestRequestJSON*>(UVaRestRequestJSON::StaticClass()->DefaultObject);

	return Default;
}


// Function VaRest.VaRestRequestJSON.SetVerb
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVaRestRequestVerb      Verb                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVaRestRequestJSON::SetVerb(enum class EVaRestRequestVerb Verb)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestRequestJSON", "SetVerb");

	Params::UVaRestRequestJSON_SetVerb_Params Parms{};

	Parms.Verb = Verb;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VaRest.VaRestRequestJSON.SetURL
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      URL                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVaRestRequestJSON::SetURL(const class FString& URL)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestRequestJSON", "SetURL");

	Params::UVaRestRequestJSON_SetURL_Params Parms{};

	Parms.URL = URL;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VaRest.VaRestRequestJSON.SetStringRequestContent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Content                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVaRestRequestJSON::SetStringRequestContent(const class FString& Content)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestRequestJSON", "SetStringRequestContent");

	Params::UVaRestRequestJSON_SetStringRequestContent_Params Parms{};

	Parms.Content = Content;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VaRest.VaRestRequestJSON.SetResponseObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UVaRestJsonObject*           JsonObject                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVaRestRequestJSON::SetResponseObject(class UVaRestJsonObject* JsonObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestRequestJSON", "SetResponseObject");

	Params::UVaRestRequestJSON_SetResponseObject_Params Parms{};

	Parms.JsonObject = JsonObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VaRest.VaRestRequestJSON.SetRequestObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UVaRestJsonObject*           JsonObject                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVaRestRequestJSON::SetRequestObject(class UVaRestJsonObject* JsonObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestRequestJSON", "SetRequestObject");

	Params::UVaRestRequestJSON_SetRequestObject_Params Parms{};

	Parms.JsonObject = JsonObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VaRest.VaRestRequestJSON.SetHeader
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      HeaderName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      HeaderValue                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVaRestRequestJSON::SetHeader(const class FString& HeaderName, const class FString& HeaderValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestRequestJSON", "SetHeader");

	Params::UVaRestRequestJSON_SetHeader_Params Parms{};

	Parms.HeaderName = HeaderName;
	Parms.HeaderValue = HeaderValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VaRest.VaRestRequestJSON.SetCustomVerb
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Verb                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVaRestRequestJSON::SetCustomVerb(const class FString& Verb)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestRequestJSON", "SetCustomVerb");

	Params::UVaRestRequestJSON_SetCustomVerb_Params Parms{};

	Parms.Verb = Verb;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VaRest.VaRestRequestJSON.SetContentType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVaRestRequestContentTypeContentType                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVaRestRequestJSON::SetContentType(enum class EVaRestRequestContentType ContentType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestRequestJSON", "SetContentType");

	Params::UVaRestRequestJSON_SetContentType_Params Parms{};

	Parms.ContentType = ContentType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VaRest.VaRestRequestJSON.SetBinaryRequestContent
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<uint8>                      Content                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UVaRestRequestJSON::SetBinaryRequestContent(TArray<uint8>& Content)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestRequestJSON", "SetBinaryRequestContent");

	Params::UVaRestRequestJSON_SetBinaryRequestContent_Params Parms{};

	Parms.Content = Content;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VaRest.VaRestRequestJSON.SetBinaryContentType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      ContentType                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVaRestRequestJSON::SetBinaryContentType(const class FString& ContentType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestRequestJSON", "SetBinaryContentType");

	Params::UVaRestRequestJSON_SetBinaryContentType_Params Parms{};

	Parms.ContentType = ContentType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VaRest.VaRestRequestJSON.ResetResponseData
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UVaRestRequestJSON::ResetResponseData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestRequestJSON", "ResetResponseData");

	Params::UVaRestRequestJSON_ResetResponseData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VaRest.VaRestRequestJSON.ResetRequestData
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UVaRestRequestJSON::ResetRequestData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestRequestJSON", "ResetRequestData");

	Params::UVaRestRequestJSON_ResetRequestData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VaRest.VaRestRequestJSON.ResetData
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UVaRestRequestJSON::ResetData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestRequestJSON", "ResetData");

	Params::UVaRestRequestJSON_ResetData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VaRest.VaRestRequestJSON.RemoveTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        Tag                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UVaRestRequestJSON::RemoveTag(class FName Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestRequestJSON", "RemoveTag");

	Params::UVaRestRequestJSON_RemoveTag_Params Parms{};

	Parms.Tag = Tag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRest.VaRestRequestJSON.ProcessURL
// (Native, Public, BlueprintCallable)
// Parameters:
// class FString                      URL                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVaRestRequestJSON::ProcessURL(const class FString& URL)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestRequestJSON", "ProcessURL");

	Params::UVaRestRequestJSON_ProcessURL_Params Parms{};

	Parms.URL = URL;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VaRest.VaRestRequestJSON.HasTag
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        Tag                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UVaRestRequestJSON::HasTag(class FName Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestRequestJSON", "HasTag");

	Params::UVaRestRequestJSON_HasTag_Params Parms{};

	Parms.Tag = Tag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRest.VaRestRequestJSON.GetVerb
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EVaRestRequestVerb      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EVaRestRequestVerb UVaRestRequestJSON::GetVerb()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestRequestJSON", "GetVerb");

	Params::UVaRestRequestJSON_GetVerb_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRest.VaRestRequestJSON.GetURL
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UVaRestRequestJSON::GetURL()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestRequestJSON", "GetURL");

	Params::UVaRestRequestJSON_GetURL_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRest.VaRestRequestJSON.GetStatus
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EVaRestRequestStatus    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EVaRestRequestStatus UVaRestRequestJSON::GetStatus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestRequestJSON", "GetStatus");

	Params::UVaRestRequestJSON_GetStatus_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRest.VaRestRequestJSON.GetResponseValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UVaRestJsonValue*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UVaRestJsonValue* UVaRestRequestJSON::GetResponseValue()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestRequestJSON", "GetResponseValue");

	Params::UVaRestRequestJSON_GetResponseValue_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRest.VaRestRequestJSON.GetResponseObject
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UVaRestJsonObject*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UVaRestJsonObject* UVaRestRequestJSON::GetResponseObject()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestRequestJSON", "GetResponseObject");

	Params::UVaRestRequestJSON_GetResponseObject_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRest.VaRestRequestJSON.GetResponseHeader
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      HeaderName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UVaRestRequestJSON::GetResponseHeader(const class FString& HeaderName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestRequestJSON", "GetResponseHeader");

	Params::UVaRestRequestJSON_GetResponseHeader_Params Parms{};

	Parms.HeaderName = HeaderName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRest.VaRestRequestJSON.GetResponseContentLength
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UVaRestRequestJSON::GetResponseContentLength()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestRequestJSON", "GetResponseContentLength");

	Params::UVaRestRequestJSON_GetResponseContentLength_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRest.VaRestRequestJSON.GetResponseContentAsString
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bCacheResponseContent                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UVaRestRequestJSON::GetResponseContentAsString(bool bCacheResponseContent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestRequestJSON", "GetResponseContentAsString");

	Params::UVaRestRequestJSON_GetResponseContentAsString_Params Parms{};

	Parms.bCacheResponseContent = bCacheResponseContent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRest.VaRestRequestJSON.GetResponseContent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<uint8>                      ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<uint8> UVaRestRequestJSON::GetResponseContent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestRequestJSON", "GetResponseContent");

	Params::UVaRestRequestJSON_GetResponseContent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRest.VaRestRequestJSON.GetResponseCode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UVaRestRequestJSON::GetResponseCode()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestRequestJSON", "GetResponseCode");

	Params::UVaRestRequestJSON_GetResponseCode_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRest.VaRestRequestJSON.GetRequestObject
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UVaRestJsonObject*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UVaRestJsonObject* UVaRestRequestJSON::GetRequestObject()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestRequestJSON", "GetRequestObject");

	Params::UVaRestRequestJSON_GetRequestObject_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRest.VaRestRequestJSON.GetAllResponseHeaders
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> UVaRestRequestJSON::GetAllResponseHeaders()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestRequestJSON", "GetAllResponseHeaders");

	Params::UVaRestRequestJSON_GetAllResponseHeaders_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRest.VaRestRequestJSON.ExecuteProcessRequest
// (Native, Public, BlueprintCallable)
// Parameters:

void UVaRestRequestJSON::ExecuteProcessRequest()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestRequestJSON", "ExecuteProcessRequest");

	Params::UVaRestRequestJSON_ExecuteProcessRequest_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VaRest.VaRestRequestJSON.Cancel
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UVaRestRequestJSON::Cancel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestRequestJSON", "Cancel");

	Params::UVaRestRequestJSON_Cancel_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VaRest.VaRestRequestJSON.ApplyURL
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      URL                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVaRestJsonObject*           Result                                                           (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FLatentActionInfo           LatentInfo                                                       (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UVaRestRequestJSON::ApplyURL(const class FString& URL, class UVaRestJsonObject** Result, class UObject* WorldContextObject, const struct FLatentActionInfo& LatentInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestRequestJSON", "ApplyURL");

	Params::UVaRestRequestJSON_ApplyURL_Params Parms{};

	Parms.URL = URL;
	Parms.WorldContextObject = WorldContextObject;
	Parms.LatentInfo = LatentInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Result != nullptr)
		*Result = Parms.Result;

}


// Function VaRest.VaRestRequestJSON.AddTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        Tag                                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVaRestRequestJSON::AddTag(class FName Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestRequestJSON", "AddTag");

	Params::UVaRestRequestJSON_AddTag_Params Parms{};

	Parms.Tag = Tag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class VaRest.VaRestSettings
// (None)

class UClass* UVaRestSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VaRestSettings");

	return Clss;
}


// VaRestSettings VaRest.Default__VaRestSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UVaRestSettings* UVaRestSettings::GetDefaultObj()
{
	static class UVaRestSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UVaRestSettings*>(UVaRestSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class VaRest.VaRestSubsystem
// (None)

class UClass* UVaRestSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VaRestSubsystem");

	return Clss;
}


// VaRestSubsystem VaRest.Default__VaRestSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UVaRestSubsystem* UVaRestSubsystem::GetDefaultObj()
{
	static class UVaRestSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UVaRestSubsystem*>(UVaRestSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function VaRest.VaRestSubsystem.StaticConstructVaRestJsonObject
// (Final, Native, Static, Public)
// Parameters:
// class UVaRestJsonObject*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UVaRestJsonObject* UVaRestSubsystem::StaticConstructVaRestJsonObject()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestSubsystem", "StaticConstructVaRestJsonObject");

	Params::UVaRestSubsystem_StaticConstructVaRestJsonObject_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRest.VaRestSubsystem.LoadJsonFromFile
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      Path                                                             (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsRelativeToContentDir                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVaRestJsonObject*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UVaRestJsonObject* UVaRestSubsystem::LoadJsonFromFile(const class FString& Path, bool bIsRelativeToContentDir)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestSubsystem", "LoadJsonFromFile");

	Params::UVaRestSubsystem_LoadJsonFromFile_Params Parms{};

	Parms.Path = Path;
	Parms.bIsRelativeToContentDir = bIsRelativeToContentDir;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRest.VaRestSubsystem.DecodeJsonValue
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      JsonString                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVaRestJsonValue*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UVaRestJsonValue* UVaRestSubsystem::DecodeJsonValue(const class FString& JsonString)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestSubsystem", "DecodeJsonValue");

	Params::UVaRestSubsystem_DecodeJsonValue_Params Parms{};

	Parms.JsonString = JsonString;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRest.VaRestSubsystem.DecodeJsonObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      JsonString                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVaRestJsonObject*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UVaRestJsonObject* UVaRestSubsystem::DecodeJsonObject(const class FString& JsonString)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestSubsystem", "DecodeJsonObject");

	Params::UVaRestSubsystem_DecodeJsonObject_Params Parms{};

	Parms.JsonString = JsonString;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRest.VaRestSubsystem.ConstructVaRestRequestExt
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EVaRestRequestVerb      Verb                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EVaRestRequestContentTypeContentType                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVaRestRequestJSON*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UVaRestRequestJSON* UVaRestSubsystem::ConstructVaRestRequestExt(enum class EVaRestRequestVerb Verb, enum class EVaRestRequestContentType ContentType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestSubsystem", "ConstructVaRestRequestExt");

	Params::UVaRestSubsystem_ConstructVaRestRequestExt_Params Parms{};

	Parms.Verb = Verb;
	Parms.ContentType = ContentType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRest.VaRestSubsystem.ConstructVaRestRequest
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UVaRestRequestJSON*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UVaRestRequestJSON* UVaRestSubsystem::ConstructVaRestRequest()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestSubsystem", "ConstructVaRestRequest");

	Params::UVaRestSubsystem_ConstructVaRestRequest_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRest.VaRestSubsystem.ConstructVaRestJsonObject
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UVaRestJsonObject*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UVaRestJsonObject* UVaRestSubsystem::ConstructVaRestJsonObject()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestSubsystem", "ConstructVaRestJsonObject");

	Params::UVaRestSubsystem_ConstructVaRestJsonObject_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRest.VaRestSubsystem.ConstructJsonValueString
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class FString                      StringValue                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVaRestJsonValue*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UVaRestJsonValue* UVaRestSubsystem::ConstructJsonValueString(const class FString& StringValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestSubsystem", "ConstructJsonValueString");

	Params::UVaRestSubsystem_ConstructJsonValueString_Params Parms{};

	Parms.StringValue = StringValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRest.VaRestSubsystem.ConstructJsonValueObject
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UVaRestJsonObject*           JsonObject                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVaRestJsonValue*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UVaRestJsonValue* UVaRestSubsystem::ConstructJsonValueObject(class UVaRestJsonObject* JsonObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestSubsystem", "ConstructJsonValueObject");

	Params::UVaRestSubsystem_ConstructJsonValueObject_Params Parms{};

	Parms.JsonObject = JsonObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRest.VaRestSubsystem.ConstructJsonValueNumber
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              Number                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVaRestJsonValue*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UVaRestJsonValue* UVaRestSubsystem::ConstructJsonValueNumber(float Number)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestSubsystem", "ConstructJsonValueNumber");

	Params::UVaRestSubsystem_ConstructJsonValueNumber_Params Parms{};

	Parms.Number = Number;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRest.VaRestSubsystem.ConstructJsonValueBool
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               InValue                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVaRestJsonValue*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UVaRestJsonValue* UVaRestSubsystem::ConstructJsonValueBool(bool InValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestSubsystem", "ConstructJsonValueBool");

	Params::UVaRestSubsystem_ConstructJsonValueBool_Params Parms{};

	Parms.InValue = InValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRest.VaRestSubsystem.ConstructJsonValueArray
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<class UVaRestJsonValue*>    InArray                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class UVaRestJsonValue*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UVaRestJsonValue* UVaRestSubsystem::ConstructJsonValueArray(TArray<class UVaRestJsonValue*>& InArray)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestSubsystem", "ConstructJsonValueArray");

	Params::UVaRestSubsystem_ConstructJsonValueArray_Params Parms{};

	Parms.InArray = InArray;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VaRest.VaRestSubsystem.CallURL
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      URL                                                              (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EVaRestRequestVerb      Verb                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EVaRestRequestContentTypeContentType                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UVaRestJsonObject*           VaRestJson                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Callback                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVaRestSubsystem::CallURL(const class FString& URL, enum class EVaRestRequestVerb Verb, enum class EVaRestRequestContentType ContentType, class UVaRestJsonObject* VaRestJson, FDelegateProperty_& Callback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VaRestSubsystem", "CallURL");

	Params::UVaRestSubsystem_CallURL_Params Parms{};

	Parms.URL = URL;
	Parms.Verb = Verb;
	Parms.ContentType = ContentType;
	Parms.VaRestJson = VaRestJson;
	Parms.Callback = Callback;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


