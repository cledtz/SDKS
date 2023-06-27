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

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
