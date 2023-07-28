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


// Function Chooser.ChooserFunctionLibrary.MakeEvaluateChooser
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UChooserTable*               Chooser                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInstancedStruct            ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FInstancedStruct UChooserFunctionLibrary::MakeEvaluateChooser(class UChooserTable* Chooser)
{
	static auto Func = Class->GetFunction("ChooserFunctionLibrary", "MakeEvaluateChooser");

	Params::UChooserFunctionLibrary_MakeEvaluateChooser_Params Parms;

	Parms.Chooser = Chooser;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Chooser.ChooserFunctionLibrary.GetChooserStructOutput
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FChooserEvaluationContext   Context                                                          (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChooserFunctionLibrary::GetChooserStructOutput(struct FChooserEvaluationContext& Context, int32 Index, int32* Value)
{
	static auto Func = Class->GetFunction("ChooserFunctionLibrary", "GetChooserStructOutput");

	Params::UChooserFunctionLibrary_GetChooserStructOutput_Params Parms;

	Parms.Context = Context;
	Parms.Index = Index;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function Chooser.ChooserFunctionLibrary.EvaluateObjectChooserBaseMulti
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FChooserEvaluationContext   Context                                                          (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FInstancedStruct            ObjectChooser                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TSubclassOf<class UObject>         ObjectClass                                                      (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UObject*>             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UObject*> UChooserFunctionLibrary::EvaluateObjectChooserBaseMulti(struct FChooserEvaluationContext& Context, struct FInstancedStruct& ObjectChooser, TSubclassOf<class UObject> ObjectClass)
{
	static auto Func = Class->GetFunction("ChooserFunctionLibrary", "EvaluateObjectChooserBaseMulti");

	Params::UChooserFunctionLibrary_EvaluateObjectChooserBaseMulti_Params Parms;

	Parms.Context = Context;
	Parms.ObjectChooser = ObjectChooser;
	Parms.ObjectClass = ObjectClass;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Chooser.ChooserFunctionLibrary.EvaluateObjectChooserBase
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FChooserEvaluationContext   Context                                                          (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FInstancedStruct            ObjectChooser                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TSubclassOf<class UObject>         ObjectClass                                                      (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* UChooserFunctionLibrary::EvaluateObjectChooserBase(struct FChooserEvaluationContext& Context, struct FInstancedStruct& ObjectChooser, TSubclassOf<class UObject> ObjectClass)
{
	static auto Func = Class->GetFunction("ChooserFunctionLibrary", "EvaluateObjectChooserBase");

	Params::UChooserFunctionLibrary_EvaluateObjectChooserBase_Params Parms;

	Parms.Context = Context;
	Parms.ObjectChooser = ObjectChooser;
	Parms.ObjectClass = ObjectClass;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Chooser.ChooserFunctionLibrary.EvaluateChooserMulti
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     ContextObject                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UChooserTable*               ChooserTable                                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UObject>         ObjectClass                                                      (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UObject*>             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UObject*> UChooserFunctionLibrary::EvaluateChooserMulti(class UObject* ContextObject, class UChooserTable* ChooserTable, TSubclassOf<class UObject> ObjectClass)
{
	static auto Func = Class->GetFunction("ChooserFunctionLibrary", "EvaluateChooserMulti");

	Params::UChooserFunctionLibrary_EvaluateChooserMulti_Params Parms;

	Parms.ContextObject = ContextObject;
	Parms.ChooserTable = ChooserTable;
	Parms.ObjectClass = ObjectClass;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Chooser.ChooserFunctionLibrary.EvaluateChooser
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     ContextObject                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UChooserTable*               ChooserTable                                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UObject>         ObjectClass                                                      (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* UChooserFunctionLibrary::EvaluateChooser(class UObject* ContextObject, class UChooserTable* ChooserTable, TSubclassOf<class UObject> ObjectClass)
{
	static auto Func = Class->GetFunction("ChooserFunctionLibrary", "EvaluateChooser");

	Params::UChooserFunctionLibrary_EvaluateChooser_Params Parms;

	Parms.ContextObject = ContextObject;
	Parms.ChooserTable = ChooserTable;
	Parms.ObjectClass = ObjectClass;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function Chooser.ChooserFunctionLibrary.AddChooserStructInput
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FChooserEvaluationContext   Context                                                          (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChooserFunctionLibrary::AddChooserStructInput(struct FChooserEvaluationContext& Context, int32 Value)
{
	static auto Func = Class->GetFunction("ChooserFunctionLibrary", "AddChooserStructInput");

	Params::UChooserFunctionLibrary_AddChooserStructInput_Params Parms;

	Parms.Context = Context;
	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function Chooser.ChooserFunctionLibrary.AddChooserObjectInput
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FChooserEvaluationContext   Context                                                          (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UObject*                     Object                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChooserFunctionLibrary::AddChooserObjectInput(struct FChooserEvaluationContext& Context, class UObject* Object)
{
	static auto Func = Class->GetFunction("ChooserFunctionLibrary", "AddChooserObjectInput");

	Params::UChooserFunctionLibrary_AddChooserObjectInput_Params Parms;

	Parms.Context = Context;
	Parms.Object = Object;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
