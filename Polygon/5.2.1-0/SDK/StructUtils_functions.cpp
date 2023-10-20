#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class StructUtils.PropertyBagMissingObject
// (None)

class UClass* UPropertyBagMissingObject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PropertyBagMissingObject");

	return Clss;
}


// PropertyBagMissingObject StructUtils.Default__PropertyBagMissingObject
// (Public, ClassDefaultObject, ArchetypeObject)

class UPropertyBagMissingObject* UPropertyBagMissingObject::GetDefaultObj()
{
	static class UPropertyBagMissingObject* Default = nullptr;

	if (!Default)
		Default = static_cast<UPropertyBagMissingObject*>(UPropertyBagMissingObject::StaticClass()->DefaultObject);

	return Default;
}


// Class StructUtils.PropertyBag
// (Field, Struct, ScriptStruct)

class UClass* UPropertyBag::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PropertyBag");

	return Clss;
}


// PropertyBag StructUtils.Default__PropertyBag
// (Public, ClassDefaultObject, ArchetypeObject)

class UPropertyBag* UPropertyBag::GetDefaultObj()
{
	static class UPropertyBag* Default = nullptr;

	if (!Default)
		Default = static_cast<UPropertyBag*>(UPropertyBag::StaticClass()->DefaultObject);

	return Default;
}


// Class StructUtils.StructUtilsFunctionLibrary
// (None)

class UClass* UStructUtilsFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("StructUtilsFunctionLibrary");

	return Clss;
}


// StructUtilsFunctionLibrary StructUtils.Default__StructUtilsFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UStructUtilsFunctionLibrary* UStructUtilsFunctionLibrary::GetDefaultObj()
{
	static class UStructUtilsFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UStructUtilsFunctionLibrary*>(UStructUtilsFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function StructUtils.StructUtilsFunctionLibrary.SetInstancedStructValue
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FInstancedStruct            InstancedStruct                                                  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStructUtilsFunctionLibrary::SetInstancedStructValue(struct FInstancedStruct& InstancedStruct, int32& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StructUtilsFunctionLibrary", "SetInstancedStructValue");

	Params::UStructUtilsFunctionLibrary_SetInstancedStructValue_Params Parms{};

	Parms.InstancedStruct = InstancedStruct;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function StructUtils.StructUtilsFunctionLibrary.Reset
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FInstancedStruct            InstancedStruct                                                  (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UScriptStruct*               StructType                                                       (ConstParm, Parm, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStructUtilsFunctionLibrary::Reset(struct FInstancedStruct& InstancedStruct, class UScriptStruct* StructType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StructUtilsFunctionLibrary", "Reset");

	Params::UStructUtilsFunctionLibrary_Reset_Params Parms{};

	Parms.InstancedStruct = InstancedStruct;
	Parms.StructType = StructType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function StructUtils.StructUtilsFunctionLibrary.NotEqual_InstancedStruct
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FInstancedStruct            A                                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FInstancedStruct            B                                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UStructUtilsFunctionLibrary::NotEqual_InstancedStruct(struct FInstancedStruct& A, struct FInstancedStruct& B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StructUtilsFunctionLibrary", "NotEqual_InstancedStruct");

	Params::UStructUtilsFunctionLibrary_NotEqual_InstancedStruct_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function StructUtils.StructUtilsFunctionLibrary.MakeInstancedStruct
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              Value                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInstancedStruct            ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FInstancedStruct UStructUtilsFunctionLibrary::MakeInstancedStruct(int32& Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StructUtilsFunctionLibrary", "MakeInstancedStruct");

	Params::UStructUtilsFunctionLibrary_MakeInstancedStruct_Params Parms{};

	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function StructUtils.StructUtilsFunctionLibrary.IsValid_InstancedStruct
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FInstancedStruct            InstancedStruct                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UStructUtilsFunctionLibrary::IsValid_InstancedStruct(struct FInstancedStruct& InstancedStruct)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StructUtilsFunctionLibrary", "IsValid_InstancedStruct");

	Params::UStructUtilsFunctionLibrary_IsValid_InstancedStruct_Params Parms{};

	Parms.InstancedStruct = InstancedStruct;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function StructUtils.StructUtilsFunctionLibrary.IsInstancedStructValid
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FInstancedStruct            InstancedStruct                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// enum class EStructUtilsResult      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EStructUtilsResult UStructUtilsFunctionLibrary::IsInstancedStructValid(struct FInstancedStruct& InstancedStruct)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StructUtilsFunctionLibrary", "IsInstancedStructValid");

	Params::UStructUtilsFunctionLibrary_IsInstancedStructValid_Params Parms{};

	Parms.InstancedStruct = InstancedStruct;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function StructUtils.StructUtilsFunctionLibrary.GetInstancedStructValue
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// enum class EStructUtilsResult      ExecResult                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInstancedStruct            InstancedStruct                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UStructUtilsFunctionLibrary::GetInstancedStructValue(enum class EStructUtilsResult* ExecResult, struct FInstancedStruct& InstancedStruct, int32* Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StructUtilsFunctionLibrary", "GetInstancedStructValue");

	Params::UStructUtilsFunctionLibrary_GetInstancedStructValue_Params Parms{};

	Parms.InstancedStruct = InstancedStruct;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (ExecResult != nullptr)
		*ExecResult = Parms.ExecResult;

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function StructUtils.StructUtilsFunctionLibrary.EqualEqual_InstancedStruct
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FInstancedStruct            A                                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FInstancedStruct            B                                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UStructUtilsFunctionLibrary::EqualEqual_InstancedStruct(struct FInstancedStruct& A, struct FInstancedStruct& B)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("StructUtilsFunctionLibrary", "EqualEqual_InstancedStruct");

	Params::UStructUtilsFunctionLibrary_EqualEqual_InstancedStruct_Params Parms{};

	Parms.A = A;
	Parms.B = B;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


