#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class Chooser.ChooserParameterBool_ContextProperty
// (None)

class UClass* UChooserParameterBool_ContextProperty::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChooserParameterBool_ContextProperty");

	return Clss;
}


// ChooserParameterBool_ContextProperty Chooser.Default__ChooserParameterBool_ContextProperty
// (Public, ClassDefaultObject, ArchetypeObject)

class UChooserParameterBool_ContextProperty* UChooserParameterBool_ContextProperty::GetDefaultObj()
{
	static class UChooserParameterBool_ContextProperty* Default = nullptr;

	if (!Default)
		Default = static_cast<UChooserParameterBool_ContextProperty*>(UChooserParameterBool_ContextProperty::StaticClass()->DefaultObject);

	return Default;
}


// Class Chooser.ChooserColumnBool
// (None)

class UClass* UChooserColumnBool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChooserColumnBool");

	return Clss;
}


// ChooserColumnBool Chooser.Default__ChooserColumnBool
// (Public, ClassDefaultObject, ArchetypeObject)

class UChooserColumnBool* UChooserColumnBool::GetDefaultObj()
{
	static class UChooserColumnBool* Default = nullptr;

	if (!Default)
		Default = static_cast<UChooserColumnBool*>(UChooserColumnBool::StaticClass()->DefaultObject);

	return Default;
}


// Class Chooser.HasContextClass
// (None)

class UClass* UHasContextClass::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("HasContextClass");

	return Clss;
}


// HasContextClass Chooser.Default__HasContextClass
// (Public, ClassDefaultObject, ArchetypeObject)

class UHasContextClass* UHasContextClass::GetDefaultObj()
{
	static class UHasContextClass* Default = nullptr;

	if (!Default)
		Default = static_cast<UHasContextClass*>(UHasContextClass::StaticClass()->DefaultObject);

	return Default;
}


// Class Chooser.ChooserParameterEnum_ContextProperty
// (None)

class UClass* UChooserParameterEnum_ContextProperty::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChooserParameterEnum_ContextProperty");

	return Clss;
}


// ChooserParameterEnum_ContextProperty Chooser.Default__ChooserParameterEnum_ContextProperty
// (Public, ClassDefaultObject, ArchetypeObject)

class UChooserParameterEnum_ContextProperty* UChooserParameterEnum_ContextProperty::GetDefaultObj()
{
	static class UChooserParameterEnum_ContextProperty* Default = nullptr;

	if (!Default)
		Default = static_cast<UChooserParameterEnum_ContextProperty*>(UChooserParameterEnum_ContextProperty::StaticClass()->DefaultObject);

	return Default;
}


// Class Chooser.ChooserColumnEnum
// (None)

class UClass* UChooserColumnEnum::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChooserColumnEnum");

	return Clss;
}


// ChooserColumnEnum Chooser.Default__ChooserColumnEnum
// (Public, ClassDefaultObject, ArchetypeObject)

class UChooserColumnEnum* UChooserColumnEnum::GetDefaultObj()
{
	static class UChooserColumnEnum* Default = nullptr;

	if (!Default)
		Default = static_cast<UChooserColumnEnum*>(UChooserColumnEnum::StaticClass()->DefaultObject);

	return Default;
}


// Class Chooser.ChooserParameterFloat_ContextProperty
// (None)

class UClass* UChooserParameterFloat_ContextProperty::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChooserParameterFloat_ContextProperty");

	return Clss;
}


// ChooserParameterFloat_ContextProperty Chooser.Default__ChooserParameterFloat_ContextProperty
// (Public, ClassDefaultObject, ArchetypeObject)

class UChooserParameterFloat_ContextProperty* UChooserParameterFloat_ContextProperty::GetDefaultObj()
{
	static class UChooserParameterFloat_ContextProperty* Default = nullptr;

	if (!Default)
		Default = static_cast<UChooserParameterFloat_ContextProperty*>(UChooserParameterFloat_ContextProperty::StaticClass()->DefaultObject);

	return Default;
}


// Class Chooser.ChooserColumnFloatRange
// (None)

class UClass* UChooserColumnFloatRange::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChooserColumnFloatRange");

	return Clss;
}


// ChooserColumnFloatRange Chooser.Default__ChooserColumnFloatRange
// (Public, ClassDefaultObject, ArchetypeObject)

class UChooserColumnFloatRange* UChooserColumnFloatRange::GetDefaultObj()
{
	static class UChooserColumnFloatRange* Default = nullptr;

	if (!Default)
		Default = static_cast<UChooserColumnFloatRange*>(UChooserColumnFloatRange::StaticClass()->DefaultObject);

	return Default;
}


// Class Chooser.ChooserParameterGameplayTag_ContextProperty
// (None)

class UClass* UChooserParameterGameplayTag_ContextProperty::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChooserParameterGameplayTag_ContextProperty");

	return Clss;
}


// ChooserParameterGameplayTag_ContextProperty Chooser.Default__ChooserParameterGameplayTag_ContextProperty
// (Public, ClassDefaultObject, ArchetypeObject)

class UChooserParameterGameplayTag_ContextProperty* UChooserParameterGameplayTag_ContextProperty::GetDefaultObj()
{
	static class UChooserParameterGameplayTag_ContextProperty* Default = nullptr;

	if (!Default)
		Default = static_cast<UChooserParameterGameplayTag_ContextProperty*>(UChooserParameterGameplayTag_ContextProperty::StaticClass()->DefaultObject);

	return Default;
}


// Class Chooser.ChooserColumnGameplayTag
// (None)

class UClass* UChooserColumnGameplayTag::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChooserColumnGameplayTag");

	return Clss;
}


// ChooserColumnGameplayTag Chooser.Default__ChooserColumnGameplayTag
// (Public, ClassDefaultObject, ArchetypeObject)

class UChooserColumnGameplayTag* UChooserColumnGameplayTag::GetDefaultObj()
{
	static class UChooserColumnGameplayTag* Default = nullptr;

	if (!Default)
		Default = static_cast<UChooserColumnGameplayTag*>(UChooserColumnGameplayTag::StaticClass()->DefaultObject);

	return Default;
}


// Class Chooser.ChooserColumn
// (None)

class UClass* UChooserColumn::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChooserColumn");

	return Clss;
}


// ChooserColumn Chooser.Default__ChooserColumn
// (Public, ClassDefaultObject, ArchetypeObject)

class UChooserColumn* UChooserColumn::GetDefaultObj()
{
	static class UChooserColumn* Default = nullptr;

	if (!Default)
		Default = static_cast<UChooserColumn*>(UChooserColumn::StaticClass()->DefaultObject);

	return Default;
}


// Class Chooser.ChooserParameterBool
// (None)

class UClass* UChooserParameterBool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChooserParameterBool");

	return Clss;
}


// ChooserParameterBool Chooser.Default__ChooserParameterBool
// (Public, ClassDefaultObject, ArchetypeObject)

class UChooserParameterBool* UChooserParameterBool::GetDefaultObj()
{
	static class UChooserParameterBool* Default = nullptr;

	if (!Default)
		Default = static_cast<UChooserParameterBool*>(UChooserParameterBool::StaticClass()->DefaultObject);

	return Default;
}


// Class Chooser.ChooserParameterEnum
// (None)

class UClass* UChooserParameterEnum::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChooserParameterEnum");

	return Clss;
}


// ChooserParameterEnum Chooser.Default__ChooserParameterEnum
// (Public, ClassDefaultObject, ArchetypeObject)

class UChooserParameterEnum* UChooserParameterEnum::GetDefaultObj()
{
	static class UChooserParameterEnum* Default = nullptr;

	if (!Default)
		Default = static_cast<UChooserParameterEnum*>(UChooserParameterEnum::StaticClass()->DefaultObject);

	return Default;
}


// Class Chooser.ChooserParameterFloat
// (None)

class UClass* UChooserParameterFloat::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChooserParameterFloat");

	return Clss;
}


// ChooserParameterFloat Chooser.Default__ChooserParameterFloat
// (Public, ClassDefaultObject, ArchetypeObject)

class UChooserParameterFloat* UChooserParameterFloat::GetDefaultObj()
{
	static class UChooserParameterFloat* Default = nullptr;

	if (!Default)
		Default = static_cast<UChooserParameterFloat*>(UChooserParameterFloat::StaticClass()->DefaultObject);

	return Default;
}


// Class Chooser.ChooserParameterGameplayTag
// (None)

class UClass* UChooserParameterGameplayTag::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChooserParameterGameplayTag");

	return Clss;
}


// ChooserParameterGameplayTag Chooser.Default__ChooserParameterGameplayTag
// (Public, ClassDefaultObject, ArchetypeObject)

class UChooserParameterGameplayTag* UChooserParameterGameplayTag::GetDefaultObj()
{
	static class UChooserParameterGameplayTag* Default = nullptr;

	if (!Default)
		Default = static_cast<UChooserParameterGameplayTag*>(UChooserParameterGameplayTag::StaticClass()->DefaultObject);

	return Default;
}


// Class Chooser.ObjectChooser
// (None)

class UClass* UObjectChooser::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ObjectChooser");

	return Clss;
}


// ObjectChooser Chooser.Default__ObjectChooser
// (Public, ClassDefaultObject, ArchetypeObject)

class UObjectChooser* UObjectChooser::GetDefaultObj()
{
	static class UObjectChooser* Default = nullptr;

	if (!Default)
		Default = static_cast<UObjectChooser*>(UObjectChooser::StaticClass()->DefaultObject);

	return Default;
}


// Class Chooser.ObjectChooser_Asset
// (None)

class UClass* UObjectChooser_Asset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ObjectChooser_Asset");

	return Clss;
}


// ObjectChooser_Asset Chooser.Default__ObjectChooser_Asset
// (Public, ClassDefaultObject, ArchetypeObject)

class UObjectChooser_Asset* UObjectChooser_Asset::GetDefaultObj()
{
	static class UObjectChooser_Asset* Default = nullptr;

	if (!Default)
		Default = static_cast<UObjectChooser_Asset*>(UObjectChooser_Asset::StaticClass()->DefaultObject);

	return Default;
}


// Class Chooser.ChooserTable
// (None)

class UClass* UChooserTable::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChooserTable");

	return Clss;
}


// ChooserTable Chooser.Default__ChooserTable
// (Public, ClassDefaultObject, ArchetypeObject)

class UChooserTable* UChooserTable::GetDefaultObj()
{
	static class UChooserTable* Default = nullptr;

	if (!Default)
		Default = static_cast<UChooserTable*>(UChooserTable::StaticClass()->DefaultObject);

	return Default;
}


// Class Chooser.ObjectChooser_EvaluateChooser
// (None)

class UClass* UObjectChooser_EvaluateChooser::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ObjectChooser_EvaluateChooser");

	return Clss;
}


// ObjectChooser_EvaluateChooser Chooser.Default__ObjectChooser_EvaluateChooser
// (Public, ClassDefaultObject, ArchetypeObject)

class UObjectChooser_EvaluateChooser* UObjectChooser_EvaluateChooser::GetDefaultObj()
{
	static class UObjectChooser_EvaluateChooser* Default = nullptr;

	if (!Default)
		Default = static_cast<UObjectChooser_EvaluateChooser*>(UObjectChooser_EvaluateChooser::StaticClass()->DefaultObject);

	return Default;
}


// Class Chooser.ChooserColumnMenuContext
// (None)

class UClass* UChooserColumnMenuContext::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChooserColumnMenuContext");

	return Clss;
}


// ChooserColumnMenuContext Chooser.Default__ChooserColumnMenuContext
// (Public, ClassDefaultObject, ArchetypeObject)

class UChooserColumnMenuContext* UChooserColumnMenuContext::GetDefaultObj()
{
	static class UChooserColumnMenuContext* Default = nullptr;

	if (!Default)
		Default = static_cast<UChooserColumnMenuContext*>(UChooserColumnMenuContext::StaticClass()->DefaultObject);

	return Default;
}


// Class Chooser.ChooserFunctionLibrary
// (None)

class UClass* UChooserFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ChooserFunctionLibrary");

	return Clss;
}


// ChooserFunctionLibrary Chooser.Default__ChooserFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UChooserFunctionLibrary* UChooserFunctionLibrary::GetDefaultObj()
{
	static class UChooserFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UChooserFunctionLibrary*>(UChooserFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function Chooser.ChooserFunctionLibrary.MakeEvaluateChooser
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UChooserTable*               Chooser                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FInstancedStruct            ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FInstancedStruct UChooserFunctionLibrary::MakeEvaluateChooser(class UChooserTable* Chooser)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChooserFunctionLibrary", "MakeEvaluateChooser");

	Params::UChooserFunctionLibrary_MakeEvaluateChooser_Params Parms{};

	Parms.Chooser = Chooser;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Chooser.ChooserFunctionLibrary.MakeChooserEvaluationContext
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FChooserEvaluationContext   ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FChooserEvaluationContext UChooserFunctionLibrary::MakeChooserEvaluationContext()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChooserFunctionLibrary", "MakeChooserEvaluationContext");

	Params::UChooserFunctionLibrary_MakeChooserEvaluationContext_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChooserFunctionLibrary", "GetChooserStructOutput");

	Params::UChooserFunctionLibrary_GetChooserStructOutput_Params Parms{};

	Parms.Context = Context;
	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function Chooser.ChooserFunctionLibrary.EvaluateObjectChooserBaseMulti
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FChooserEvaluationContext   Context                                                          (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FInstancedStruct            ObjectChooser                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TSubclassOf<class UObject>         ObjectClass                                                      (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bResultIsClass                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UObject*>             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UObject*> UChooserFunctionLibrary::EvaluateObjectChooserBaseMulti(struct FChooserEvaluationContext& Context, struct FInstancedStruct& ObjectChooser, TSubclassOf<class UObject> ObjectClass, bool bResultIsClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChooserFunctionLibrary", "EvaluateObjectChooserBaseMulti");

	Params::UChooserFunctionLibrary_EvaluateObjectChooserBaseMulti_Params Parms{};

	Parms.Context = Context;
	Parms.ObjectChooser = ObjectChooser;
	Parms.ObjectClass = ObjectClass;
	Parms.bResultIsClass = bResultIsClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Chooser.ChooserFunctionLibrary.EvaluateObjectChooserBase
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FChooserEvaluationContext   Context                                                          (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FInstancedStruct            ObjectChooser                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TSubclassOf<class UObject>         ObjectClass                                                      (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bResultIsClass                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* UChooserFunctionLibrary::EvaluateObjectChooserBase(struct FChooserEvaluationContext& Context, struct FInstancedStruct& ObjectChooser, TSubclassOf<class UObject> ObjectClass, bool bResultIsClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChooserFunctionLibrary", "EvaluateObjectChooserBase");

	Params::UChooserFunctionLibrary_EvaluateObjectChooserBase_Params Parms{};

	Parms.Context = Context;
	Parms.ObjectChooser = ObjectChooser;
	Parms.ObjectClass = ObjectClass;
	Parms.bResultIsClass = bResultIsClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChooserFunctionLibrary", "EvaluateChooserMulti");

	Params::UChooserFunctionLibrary_EvaluateChooserMulti_Params Parms{};

	Parms.ContextObject = ContextObject;
	Parms.ChooserTable = ChooserTable;
	Parms.ObjectClass = ObjectClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChooserFunctionLibrary", "EvaluateChooser");

	Params::UChooserFunctionLibrary_EvaluateChooser_Params Parms{};

	Parms.ContextObject = ContextObject;
	Parms.ChooserTable = ChooserTable;
	Parms.ObjectClass = ObjectClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function Chooser.ChooserFunctionLibrary.AddChooserStructInput
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FChooserEvaluationContext   Context                                                          (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChooserFunctionLibrary::AddChooserStructInput(struct FChooserEvaluationContext& Context, int32 Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChooserFunctionLibrary", "AddChooserStructInput");

	Params::UChooserFunctionLibrary_AddChooserStructInput_Params Parms{};

	Parms.Context = Context;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function Chooser.ChooserFunctionLibrary.AddChooserObjectInput
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FChooserEvaluationContext   Context                                                          (Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UObject*                     Object                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UChooserFunctionLibrary::AddChooserObjectInput(struct FChooserEvaluationContext& Context, class UObject* Object)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ChooserFunctionLibrary", "AddChooserObjectInput");

	Params::UChooserFunctionLibrary_AddChooserObjectInput_Params Parms{};

	Parms.Context = Context;
	Parms.Object = Object;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


