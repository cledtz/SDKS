#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class TypedElementRuntime.TypedElementSelectionSetLibrary
// (None)

class UClass* UTypedElementSelectionSetLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TypedElementSelectionSetLibrary");

	return Clss;
}


// TypedElementSelectionSetLibrary TypedElementRuntime.Default__TypedElementSelectionSetLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UTypedElementSelectionSetLibrary* UTypedElementSelectionSetLibrary::GetDefaultObj()
{
	static class UTypedElementSelectionSetLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UTypedElementSelectionSetLibrary*>(UTypedElementSelectionSetLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function TypedElementRuntime.TypedElementSelectionSetLibrary.SetSelectionFromList
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UTypedElementSelectionSet*   SelectionSet                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptTypedElementListProxyElementList                                                      (ConstParm, Parm, NativeAccessSpecifierPublic)
// struct FTypedElementSelectionOptionsSelectionOptions                                                 (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTypedElementSelectionSetLibrary::SetSelectionFromList(class UTypedElementSelectionSet* SelectionSet, const struct FScriptTypedElementListProxy& ElementList, const struct FTypedElementSelectionOptions& SelectionOptions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSetLibrary", "SetSelectionFromList");

	Params::UTypedElementSelectionSetLibrary_SetSelectionFromList_Params Parms{};

	Parms.SelectionSet = SelectionSet;
	Parms.ElementList = ElementList;
	Parms.SelectionOptions = SelectionOptions;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementSelectionSetLibrary.SelectElementsFromList
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UTypedElementSelectionSet*   SelectionSet                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptTypedElementListProxyElementList                                                      (ConstParm, Parm, NativeAccessSpecifierPublic)
// struct FTypedElementSelectionOptionsSelectionOptions                                                 (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTypedElementSelectionSetLibrary::SelectElementsFromList(class UTypedElementSelectionSet* SelectionSet, const struct FScriptTypedElementListProxy& ElementList, const struct FTypedElementSelectionOptions& SelectionOptions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSetLibrary", "SelectElementsFromList");

	Params::UTypedElementSelectionSetLibrary_SelectElementsFromList_Params Parms{};

	Parms.SelectionSet = SelectionSet;
	Parms.ElementList = ElementList;
	Parms.SelectionOptions = SelectionOptions;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementSelectionSetLibrary.GetNormalizedSelection
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UTypedElementSelectionSet*   SelectionSet                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTypedElementSelectionNormalizationOptionsNormalizationOptions                                             (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FScriptTypedElementListProxyReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FScriptTypedElementListProxy UTypedElementSelectionSetLibrary::GetNormalizedSelection(class UTypedElementSelectionSet* SelectionSet, const struct FTypedElementSelectionNormalizationOptions& NormalizationOptions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSetLibrary", "GetNormalizedSelection");

	Params::UTypedElementSelectionSetLibrary_GetNormalizedSelection_Params Parms{};

	Parms.SelectionSet = SelectionSet;
	Parms.NormalizationOptions = NormalizationOptions;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementSelectionSetLibrary.GetNormalizedElementList
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UTypedElementSelectionSet*   SelectionSet                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptTypedElementListProxyElementList                                                      (ConstParm, Parm, NativeAccessSpecifierPublic)
// struct FTypedElementSelectionNormalizationOptionsNormalizationOptions                                             (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
// struct FScriptTypedElementListProxyReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FScriptTypedElementListProxy UTypedElementSelectionSetLibrary::GetNormalizedElementList(class UTypedElementSelectionSet* SelectionSet, const struct FScriptTypedElementListProxy& ElementList, const struct FTypedElementSelectionNormalizationOptions& NormalizationOptions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSetLibrary", "GetNormalizedElementList");

	Params::UTypedElementSelectionSetLibrary_GetNormalizedElementList_Params Parms{};

	Parms.SelectionSet = SelectionSet;
	Parms.ElementList = ElementList;
	Parms.NormalizationOptions = NormalizationOptions;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementSelectionSetLibrary.DeselectElementsFromList
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UTypedElementSelectionSet*   SelectionSet                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptTypedElementListProxyElementList                                                      (ConstParm, Parm, NativeAccessSpecifierPublic)
// struct FTypedElementSelectionOptionsSelectionOptions                                                 (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTypedElementSelectionSetLibrary::DeselectElementsFromList(class UTypedElementSelectionSet* SelectionSet, const struct FScriptTypedElementListProxy& ElementList, const struct FTypedElementSelectionOptions& SelectionOptions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSetLibrary", "DeselectElementsFromList");

	Params::UTypedElementSelectionSetLibrary_DeselectElementsFromList_Params Parms{};

	Parms.SelectionSet = SelectionSet;
	Parms.ElementList = ElementList;
	Parms.SelectionOptions = SelectionOptions;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class TypedElementRuntime.TypedElementSelectionSet
// (None)

class UClass* UTypedElementSelectionSet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TypedElementSelectionSet");

	return Clss;
}


// TypedElementSelectionSet TypedElementRuntime.Default__TypedElementSelectionSet
// (Public, ClassDefaultObject, ArchetypeObject)

class UTypedElementSelectionSet* UTypedElementSelectionSet::GetDefaultObj()
{
	static class UTypedElementSelectionSet* Default = nullptr;

	if (!Default)
		Default = static_cast<UTypedElementSelectionSet*>(UTypedElementSelectionSet::StaticClass()->DefaultObject);

	return Default;
}


// Function TypedElementRuntime.TypedElementSelectionSet.SetSelection
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FScriptTypedElementHandle>InElementHandles                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FTypedElementSelectionOptionsInSelectionOptions                                               (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTypedElementSelectionSet::SetSelection(TArray<struct FScriptTypedElementHandle>& InElementHandles, const struct FTypedElementSelectionOptions& InSelectionOptions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "SetSelection");

	Params::UTypedElementSelectionSet_SetSelection_Params Parms{};

	Parms.InElementHandles = InElementHandles;
	Parms.InSelectionOptions = InSelectionOptions;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementSelectionSet.SelectElements
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FScriptTypedElementHandle>InElementHandles                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FTypedElementSelectionOptionsInSelectionOptions                                               (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTypedElementSelectionSet::SelectElements(TArray<struct FScriptTypedElementHandle>& InElementHandles, const struct FTypedElementSelectionOptions& InSelectionOptions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "SelectElements");

	Params::UTypedElementSelectionSet_SelectElements_Params Parms{};

	Parms.InElementHandles = InElementHandles;
	Parms.InSelectionOptions = InSelectionOptions;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementSelectionSet.SelectElement
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementHandle   InElementHandle                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FTypedElementSelectionOptionsInSelectionOptions                                               (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTypedElementSelectionSet::SelectElement(struct FScriptTypedElementHandle& InElementHandle, const struct FTypedElementSelectionOptions& InSelectionOptions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "SelectElement");

	Params::UTypedElementSelectionSet_SelectElement_Params Parms{};

	Parms.InElementHandle = InElementHandle;
	Parms.InSelectionOptions = InSelectionOptions;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementSelectionSet.RestoreSelectionState
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTypedElementSelectionSetStateInSelectionState                                                 (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UTypedElementSelectionSet::RestoreSelectionState(struct FTypedElementSelectionSetState& InSelectionState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "RestoreSelectionState");

	Params::UTypedElementSelectionSet_RestoreSelectionState_Params Parms{};

	Parms.InSelectionState = InSelectionState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// DelegateFunction TypedElementRuntime.TypedElementSelectionSet.OnPreChangeDynamic__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UTypedElementSelectionSet*   SelectionSet                                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTypedElementSelectionSet::OnPreChangeDynamic__DelegateSignature(class UTypedElementSelectionSet* SelectionSet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "OnPreChangeDynamic__DelegateSignature");

	Params::UTypedElementSelectionSet_OnPreChangeDynamic__DelegateSignature_Params Parms{};

	Parms.SelectionSet = SelectionSet;

	UObject::ProcessEvent(Func, &Parms);

}


// DelegateFunction TypedElementRuntime.TypedElementSelectionSet.OnChangeDynamic__DelegateSignature
// (MulticastDelegate, Public, Delegate)
// Parameters:
// class UTypedElementSelectionSet*   SelectionSet                                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTypedElementSelectionSet::OnChangeDynamic__DelegateSignature(class UTypedElementSelectionSet* SelectionSet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "OnChangeDynamic__DelegateSignature");

	Params::UTypedElementSelectionSet_OnChangeDynamic__DelegateSignature_Params Parms{};

	Parms.SelectionSet = SelectionSet;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TypedElementRuntime.TypedElementSelectionSet.K2_GetSelectedElementHandles
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// TSubclassOf<class UInterface>      InBaseInterfaceType                                              (ConstParm, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FScriptTypedElementHandle>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FScriptTypedElementHandle> UTypedElementSelectionSet::K2_GetSelectedElementHandles(TSubclassOf<class UInterface> InBaseInterfaceType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "K2_GetSelectedElementHandles");

	Params::UTypedElementSelectionSet_K2_GetSelectedElementHandles_Params Parms{};

	Parms.InBaseInterfaceType = InBaseInterfaceType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementSelectionSet.IsElementSelected
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FScriptTypedElementHandle   InElementHandle                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FTypedElementIsSelectedOptionsInSelectionOptions                                               (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTypedElementSelectionSet::IsElementSelected(struct FScriptTypedElementHandle& InElementHandle, const struct FTypedElementIsSelectedOptions& InSelectionOptions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "IsElementSelected");

	Params::UTypedElementSelectionSet_IsElementSelected_Params Parms{};

	Parms.InElementHandle = InElementHandle;
	Parms.InSelectionOptions = InSelectionOptions;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementSelectionSet.HasSelectedObjects
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UClass*                      InRequiredClass                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTypedElementSelectionSet::HasSelectedObjects(class UClass* InRequiredClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "HasSelectedObjects");

	Params::UTypedElementSelectionSet_HasSelectedObjects_Params Parms{};

	Parms.InRequiredClass = InRequiredClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementSelectionSet.HasSelectedElements
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// TSubclassOf<class UInterface>      InBaseInterfaceType                                              (ConstParm, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTypedElementSelectionSet::HasSelectedElements(TSubclassOf<class UInterface> InBaseInterfaceType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "HasSelectedElements");

	Params::UTypedElementSelectionSet_HasSelectedElements_Params Parms{};

	Parms.InBaseInterfaceType = InBaseInterfaceType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementSelectionSet.GetTopSelectedObject
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                      InRequiredClass                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* UTypedElementSelectionSet::GetTopSelectedObject(class UClass* InRequiredClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "GetTopSelectedObject");

	Params::UTypedElementSelectionSet_GetTopSelectedObject_Params Parms{};

	Parms.InRequiredClass = InRequiredClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementSelectionSet.GetSelectionElement
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FScriptTypedElementHandle   InElementHandle                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// enum class ETypedElementSelectionMethodInSelectionMethod                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptTypedElementHandle   ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FScriptTypedElementHandle UTypedElementSelectionSet::GetSelectionElement(struct FScriptTypedElementHandle& InElementHandle, enum class ETypedElementSelectionMethod InSelectionMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "GetSelectionElement");

	Params::UTypedElementSelectionSet_GetSelectionElement_Params Parms{};

	Parms.InElementHandle = InElementHandle;
	Parms.InSelectionMethod = InSelectionMethod;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementSelectionSet.GetSelectedObjects
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UClass*                      InRequiredClass                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UObject*>             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UObject*> UTypedElementSelectionSet::GetSelectedObjects(class UClass* InRequiredClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "GetSelectedObjects");

	Params::UTypedElementSelectionSet_GetSelectedObjects_Params Parms{};

	Parms.InRequiredClass = InRequiredClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementSelectionSet.GetNumSelectedElements
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UTypedElementSelectionSet::GetNumSelectedElements()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "GetNumSelectedElements");

	Params::UTypedElementSelectionSet_GetNumSelectedElements_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementSelectionSet.GetCurrentSelectionState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FTypedElementSelectionSetStateReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FTypedElementSelectionSetState UTypedElementSelectionSet::GetCurrentSelectionState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "GetCurrentSelectionState");

	Params::UTypedElementSelectionSet_GetCurrentSelectionState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementSelectionSet.GetBottomSelectedObject
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                      InRequiredClass                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* UTypedElementSelectionSet::GetBottomSelectedObject(class UClass* InRequiredClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "GetBottomSelectedObject");

	Params::UTypedElementSelectionSet_GetBottomSelectedObject_Params Parms{};

	Parms.InRequiredClass = InRequiredClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementSelectionSet.DeselectElements
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FScriptTypedElementHandle>InElementHandles                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// struct FTypedElementSelectionOptionsInSelectionOptions                                               (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTypedElementSelectionSet::DeselectElements(TArray<struct FScriptTypedElementHandle>& InElementHandles, const struct FTypedElementSelectionOptions& InSelectionOptions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "DeselectElements");

	Params::UTypedElementSelectionSet_DeselectElements_Params Parms{};

	Parms.InElementHandles = InElementHandles;
	Parms.InSelectionOptions = InSelectionOptions;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementSelectionSet.DeselectElement
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementHandle   InElementHandle                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FTypedElementSelectionOptionsInSelectionOptions                                               (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTypedElementSelectionSet::DeselectElement(struct FScriptTypedElementHandle& InElementHandle, const struct FTypedElementSelectionOptions& InSelectionOptions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "DeselectElement");

	Params::UTypedElementSelectionSet_DeselectElement_Params Parms{};

	Parms.InElementHandle = InElementHandle;
	Parms.InSelectionOptions = InSelectionOptions;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementSelectionSet.CountSelectedObjects
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UClass*                      InRequiredClass                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UTypedElementSelectionSet::CountSelectedObjects(class UClass* InRequiredClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "CountSelectedObjects");

	Params::UTypedElementSelectionSet_CountSelectedObjects_Params Parms{};

	Parms.InRequiredClass = InRequiredClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementSelectionSet.CountSelectedElements
// (Final, Native, Public, BlueprintCallable, Const)
// Parameters:
// TSubclassOf<class UInterface>      InBaseInterfaceType                                              (ConstParm, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UTypedElementSelectionSet::CountSelectedElements(TSubclassOf<class UInterface> InBaseInterfaceType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "CountSelectedElements");

	Params::UTypedElementSelectionSet_CountSelectedElements_Params Parms{};

	Parms.InBaseInterfaceType = InBaseInterfaceType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementSelectionSet.ClearSelection
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FTypedElementSelectionOptionsInSelectionOptions                                               (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTypedElementSelectionSet::ClearSelection(const struct FTypedElementSelectionOptions& InSelectionOptions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "ClearSelection");

	Params::UTypedElementSelectionSet_ClearSelection_Params Parms{};

	Parms.InSelectionOptions = InSelectionOptions;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementSelectionSet.CanSelectElement
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FScriptTypedElementHandle   InElementHandle                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FTypedElementSelectionOptionsInSelectionOptions                                               (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTypedElementSelectionSet::CanSelectElement(struct FScriptTypedElementHandle& InElementHandle, const struct FTypedElementSelectionOptions& InSelectionOptions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "CanSelectElement");

	Params::UTypedElementSelectionSet_CanSelectElement_Params Parms{};

	Parms.InElementHandle = InElementHandle;
	Parms.InSelectionOptions = InSelectionOptions;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementSelectionSet.CanDeselectElement
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FScriptTypedElementHandle   InElementHandle                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FTypedElementSelectionOptionsInSelectionOptions                                               (ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTypedElementSelectionSet::CanDeselectElement(struct FScriptTypedElementHandle& InElementHandle, const struct FTypedElementSelectionOptions& InSelectionOptions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "CanDeselectElement");

	Params::UTypedElementSelectionSet_CanDeselectElement_Params Parms{};

	Parms.InElementHandle = InElementHandle;
	Parms.InSelectionOptions = InSelectionOptions;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementSelectionSet.AllowSelectionModifiers
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FScriptTypedElementHandle   InElementHandle                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTypedElementSelectionSet::AllowSelectionModifiers(struct FScriptTypedElementHandle& InElementHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionSet", "AllowSelectionModifiers");

	Params::UTypedElementSelectionSet_AllowSelectionModifiers_Params Parms{};

	Parms.InElementHandle = InElementHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class TypedElementRuntime.TypedElementAssetDataInterface
// (None)

class UClass* UTypedElementAssetDataInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TypedElementAssetDataInterface");

	return Clss;
}


// TypedElementAssetDataInterface TypedElementRuntime.Default__TypedElementAssetDataInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class UTypedElementAssetDataInterface* UTypedElementAssetDataInterface::GetDefaultObj()
{
	static class UTypedElementAssetDataInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<UTypedElementAssetDataInterface*>(UTypedElementAssetDataInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function TypedElementRuntime.TypedElementAssetDataInterface.GetAssetData
// (Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementHandle   InElementHandle                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FAssetData                  ReturnValue                                                      (Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FAssetData UTypedElementAssetDataInterface::GetAssetData(struct FScriptTypedElementHandle& InElementHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementAssetDataInterface", "GetAssetData");

	Params::UTypedElementAssetDataInterface_GetAssetData_Params Parms{};

	Parms.InElementHandle = InElementHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementAssetDataInterface.GetAllReferencedAssetDatas
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementHandle   InElementHandle                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FAssetData>          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FAssetData> UTypedElementAssetDataInterface::GetAllReferencedAssetDatas(struct FScriptTypedElementHandle& InElementHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementAssetDataInterface", "GetAllReferencedAssetDatas");

	Params::UTypedElementAssetDataInterface_GetAllReferencedAssetDatas_Params Parms{};

	Parms.InElementHandle = InElementHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class TypedElementRuntime.TypedElementHierarchyInterface
// (None)

class UClass* UTypedElementHierarchyInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TypedElementHierarchyInterface");

	return Clss;
}


// TypedElementHierarchyInterface TypedElementRuntime.Default__TypedElementHierarchyInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class UTypedElementHierarchyInterface* UTypedElementHierarchyInterface::GetDefaultObj()
{
	static class UTypedElementHierarchyInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<UTypedElementHierarchyInterface*>(UTypedElementHierarchyInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function TypedElementRuntime.TypedElementHierarchyInterface.GetParentElement
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementHandle   InElementHandle                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bAllowCreate                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptTypedElementHandle   ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FScriptTypedElementHandle UTypedElementHierarchyInterface::GetParentElement(struct FScriptTypedElementHandle& InElementHandle, bool bAllowCreate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementHierarchyInterface", "GetParentElement");

	Params::UTypedElementHierarchyInterface_GetParentElement_Params Parms{};

	Parms.InElementHandle = InElementHandle;
	Parms.bAllowCreate = bAllowCreate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementHierarchyInterface.GetChildElements
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementHandle   InElementHandle                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FScriptTypedElementHandle>OutElementHandles                                                (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               bAllowCreate                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTypedElementHierarchyInterface::GetChildElements(struct FScriptTypedElementHandle& InElementHandle, TArray<struct FScriptTypedElementHandle>* OutElementHandles, bool bAllowCreate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementHierarchyInterface", "GetChildElements");

	Params::UTypedElementHierarchyInterface_GetChildElements_Params Parms{};

	Parms.InElementHandle = InElementHandle;
	Parms.bAllowCreate = bAllowCreate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutElementHandles != nullptr)
		*OutElementHandles = Parms.OutElementHandles;

}


// Class TypedElementRuntime.TypedElementObjectInterface
// (None)

class UClass* UTypedElementObjectInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TypedElementObjectInterface");

	return Clss;
}


// TypedElementObjectInterface TypedElementRuntime.Default__TypedElementObjectInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class UTypedElementObjectInterface* UTypedElementObjectInterface::GetDefaultObj()
{
	static class UTypedElementObjectInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<UTypedElementObjectInterface*>(UTypedElementObjectInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function TypedElementRuntime.TypedElementObjectInterface.GetObjectClass
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementHandle   InElementHandle                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UClass*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UClass* UTypedElementObjectInterface::GetObjectClass(struct FScriptTypedElementHandle& InElementHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementObjectInterface", "GetObjectClass");

	Params::UTypedElementObjectInterface_GetObjectClass_Params Parms{};

	Parms.InElementHandle = InElementHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementObjectInterface.GetObject
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementHandle   InElementHandle                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UObject*                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UObject* UTypedElementObjectInterface::GetObject(struct FScriptTypedElementHandle& InElementHandle)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementObjectInterface", "GetObject");

	Params::UTypedElementObjectInterface_GetObject_Params Parms{};

	Parms.InElementHandle = InElementHandle;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class TypedElementRuntime.TypedElementSelectionInterface
// (None)

class UClass* UTypedElementSelectionInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TypedElementSelectionInterface");

	return Clss;
}


// TypedElementSelectionInterface TypedElementRuntime.Default__TypedElementSelectionInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class UTypedElementSelectionInterface* UTypedElementSelectionInterface::GetDefaultObj()
{
	static class UTypedElementSelectionInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<UTypedElementSelectionInterface*>(UTypedElementSelectionInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function TypedElementRuntime.TypedElementSelectionInterface.SelectElement
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementHandle   InElementHandle                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FScriptTypedElementListProxyInSelectionSet                                                   (Parm, NativeAccessSpecifierPublic)
// struct FTypedElementSelectionOptionsInSelectionOptions                                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTypedElementSelectionInterface::SelectElement(struct FScriptTypedElementHandle& InElementHandle, const struct FScriptTypedElementListProxy& InSelectionSet, struct FTypedElementSelectionOptions& InSelectionOptions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionInterface", "SelectElement");

	Params::UTypedElementSelectionInterface_SelectElement_Params Parms{};

	Parms.InElementHandle = InElementHandle;
	Parms.InSelectionSet = InSelectionSet;
	Parms.InSelectionOptions = InSelectionOptions;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementSelectionInterface.IsElementSelected
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementHandle   InElementHandle                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FScriptTypedElementListProxyInSelectionSet                                                   (ConstParm, Parm, NativeAccessSpecifierPublic)
// struct FTypedElementIsSelectedOptionsInSelectionOptions                                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTypedElementSelectionInterface::IsElementSelected(struct FScriptTypedElementHandle& InElementHandle, const struct FScriptTypedElementListProxy& InSelectionSet, struct FTypedElementIsSelectedOptions& InSelectionOptions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionInterface", "IsElementSelected");

	Params::UTypedElementSelectionInterface_IsElementSelected_Params Parms{};

	Parms.InElementHandle = InElementHandle;
	Parms.InSelectionSet = InSelectionSet;
	Parms.InSelectionOptions = InSelectionOptions;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementSelectionInterface.GetSelectionElement
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementHandle   InElementHandle                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FScriptTypedElementListProxyInCurrentSelection                                               (ConstParm, Parm, NativeAccessSpecifierPublic)
// enum class ETypedElementSelectionMethodInSelectionMethod                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FScriptTypedElementHandle   ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FScriptTypedElementHandle UTypedElementSelectionInterface::GetSelectionElement(struct FScriptTypedElementHandle& InElementHandle, const struct FScriptTypedElementListProxy& InCurrentSelection, enum class ETypedElementSelectionMethod InSelectionMethod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionInterface", "GetSelectionElement");

	Params::UTypedElementSelectionInterface_GetSelectionElement_Params Parms{};

	Parms.InElementHandle = InElementHandle;
	Parms.InCurrentSelection = InCurrentSelection;
	Parms.InSelectionMethod = InSelectionMethod;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementSelectionInterface.DeselectElement
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementHandle   InElementHandle                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FScriptTypedElementListProxyInSelectionSet                                                   (Parm, NativeAccessSpecifierPublic)
// struct FTypedElementSelectionOptionsInSelectionOptions                                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTypedElementSelectionInterface::DeselectElement(struct FScriptTypedElementHandle& InElementHandle, const struct FScriptTypedElementListProxy& InSelectionSet, struct FTypedElementSelectionOptions& InSelectionOptions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionInterface", "DeselectElement");

	Params::UTypedElementSelectionInterface_DeselectElement_Params Parms{};

	Parms.InElementHandle = InElementHandle;
	Parms.InSelectionSet = InSelectionSet;
	Parms.InSelectionOptions = InSelectionOptions;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementSelectionInterface.CanSelectElement
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementHandle   InElementHandle                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FTypedElementSelectionOptionsInSelectionOptions                                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTypedElementSelectionInterface::CanSelectElement(struct FScriptTypedElementHandle& InElementHandle, struct FTypedElementSelectionOptions& InSelectionOptions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionInterface", "CanSelectElement");

	Params::UTypedElementSelectionInterface_CanSelectElement_Params Parms{};

	Parms.InElementHandle = InElementHandle;
	Parms.InSelectionOptions = InSelectionOptions;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementSelectionInterface.CanDeselectElement
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementHandle   InElementHandle                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FTypedElementSelectionOptionsInSelectionOptions                                               (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTypedElementSelectionInterface::CanDeselectElement(struct FScriptTypedElementHandle& InElementHandle, struct FTypedElementSelectionOptions& InSelectionOptions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionInterface", "CanDeselectElement");

	Params::UTypedElementSelectionInterface_CanDeselectElement_Params Parms{};

	Parms.InElementHandle = InElementHandle;
	Parms.InSelectionOptions = InSelectionOptions;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function TypedElementRuntime.TypedElementSelectionInterface.AllowSelectionModifiers
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FScriptTypedElementHandle   InElementHandle                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FScriptTypedElementListProxyInSelectionSet                                                   (ConstParm, Parm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UTypedElementSelectionInterface::AllowSelectionModifiers(struct FScriptTypedElementHandle& InElementHandle, const struct FScriptTypedElementListProxy& InSelectionSet)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TypedElementSelectionInterface", "AllowSelectionModifiers");

	Params::UTypedElementSelectionInterface_AllowSelectionModifiers_Params Parms{};

	Parms.InElementHandle = InElementHandle;
	Parms.InSelectionSet = InSelectionSet;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


