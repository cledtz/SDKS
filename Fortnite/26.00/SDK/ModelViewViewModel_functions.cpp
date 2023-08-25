#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class ModelViewViewModel.MVVMConversionLibrary
// (None)

class UClass* UMVVMConversionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MVVMConversionLibrary");

	return Clss;
}


// MVVMConversionLibrary ModelViewViewModel.Default__MVVMConversionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UMVVMConversionLibrary* UMVVMConversionLibrary::GetDefaultObj()
{
	static class UMVVMConversionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UMVVMConversionLibrary*>(UMVVMConversionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function ModelViewViewModel.MVVMConversionLibrary.Conv_BoolToSlateVisibility
// (Final, Native, Static, Private, BlueprintCallable, BlueprintPure)
// Parameters:
// bool                               bIsVisible                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESlateVisibility        TrueVisibility                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESlateVisibility        FalseVisibility                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESlateVisibility        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ESlateVisibility UMVVMConversionLibrary::Conv_BoolToSlateVisibility(bool bIsVisible, enum class ESlateVisibility TrueVisibility, enum class ESlateVisibility FalseVisibility)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MVVMConversionLibrary", "Conv_BoolToSlateVisibility");

	Params::UMVVMConversionLibrary_Conv_BoolToSlateVisibility_Params Parms{};

	Parms.bIsVisible = bIsVisible;
	Parms.TrueVisibility = TrueVisibility;
	Parms.FalseVisibility = FalseVisibility;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModelViewViewModel.MVVMViewModelContextResolver
// (None)

class UClass* UMVVMViewModelContextResolver::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MVVMViewModelContextResolver");

	return Clss;
}


// MVVMViewModelContextResolver ModelViewViewModel.Default__MVVMViewModelContextResolver
// (Public, ClassDefaultObject, ArchetypeObject)

class UMVVMViewModelContextResolver* UMVVMViewModelContextResolver::GetDefaultObj()
{
	static class UMVVMViewModelContextResolver* Default = nullptr;

	if (!Default)
		Default = static_cast<UMVVMViewModelContextResolver*>(UMVVMViewModelContextResolver::StaticClass()->DefaultObject);

	return Default;
}


// Function ModelViewViewModel.MVVMViewModelContextResolver.K2_CreateInstance
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// class UClass*                      ExpectedType                                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UUserWidget*                 UserWidget                                                       (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TScriptInterface<class UNotifyFieldValueChanged>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class UNotifyFieldValueChanged> UMVVMViewModelContextResolver::K2_CreateInstance(class UClass* ExpectedType, class UUserWidget* UserWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MVVMViewModelContextResolver", "K2_CreateInstance");

	Params::UMVVMViewModelContextResolver_K2_CreateInstance_Params Parms{};

	Parms.ExpectedType = ExpectedType;
	Parms.UserWidget = UserWidget;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Class ModelViewViewModel.MVVMGameSubsystem
// (None)

class UClass* UMVVMGameSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MVVMGameSubsystem");

	return Clss;
}


// MVVMGameSubsystem ModelViewViewModel.Default__MVVMGameSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UMVVMGameSubsystem* UMVVMGameSubsystem::GetDefaultObj()
{
	static class UMVVMGameSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UMVVMGameSubsystem*>(UMVVMGameSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function ModelViewViewModel.MVVMGameSubsystem.GetViewModelCollection
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMVVMViewModelCollectionObject*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMVVMViewModelCollectionObject* UMVVMGameSubsystem::GetViewModelCollection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MVVMGameSubsystem", "GetViewModelCollection");

	Params::UMVVMGameSubsystem_GetViewModelCollection_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModelViewViewModel.MVVMSubsystem
// (None)

class UClass* UMVVMSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MVVMSubsystem");

	return Clss;
}


// MVVMSubsystem ModelViewViewModel.Default__MVVMSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UMVVMSubsystem* UMVVMSubsystem::GetDefaultObj()
{
	static class UMVVMSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UMVVMSubsystem*>(UMVVMSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Function ModelViewViewModel.MVVMSubsystem.K2_GetViewFromUserWidget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UUserWidget*                 UserWidget                                                       (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMVVMView*                   ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMVVMView* UMVVMSubsystem::K2_GetViewFromUserWidget(class UUserWidget* UserWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MVVMSubsystem", "K2_GetViewFromUserWidget");

	Params::UMVVMSubsystem_K2_GetViewFromUserWidget_Params Parms{};

	Parms.UserWidget = UserWidget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModelViewViewModel.MVVMSubsystem.K2_GetAvailableBindings
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                      Class                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                      Accessor                                                         (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FMVVMAvailableBinding>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FMVVMAvailableBinding> UMVVMSubsystem::K2_GetAvailableBindings(class UClass* Class, class UClass* Accessor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MVVMSubsystem", "K2_GetAvailableBindings");

	Params::UMVVMSubsystem_K2_GetAvailableBindings_Params Parms{};

	Parms.Class = Class;
	Parms.Accessor = Accessor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModelViewViewModel.MVVMSubsystem.K2_GetAvailableBinding
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UClass*                      Class                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMVVMBindingName            BindingName                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UClass*                      Accessor                                                         (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMVVMAvailableBinding       ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FMVVMAvailableBinding UMVVMSubsystem::K2_GetAvailableBinding(class UClass* Class, const struct FMVVMBindingName& BindingName, class UClass* Accessor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MVVMSubsystem", "K2_GetAvailableBinding");

	Params::UMVVMSubsystem_K2_GetAvailableBinding_Params Parms{};

	Parms.Class = Class;
	Parms.BindingName = BindingName;
	Parms.Accessor = Accessor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModelViewViewModel.MVVMSubsystem.GetGlobalViewModelCollection
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMVVMViewModelCollectionObject*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMVVMViewModelCollectionObject* UMVVMSubsystem::GetGlobalViewModelCollection()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MVVMSubsystem", "GetGlobalViewModelCollection");

	Params::UMVVMSubsystem_GetGlobalViewModelCollection_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModelViewViewModel.MVVMSubsystem.DoesWidgetTreeContainedWidget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UWidgetTree*                 WidgetTree                                                       (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UWidget*                     ViewWidget                                                       (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMVVMSubsystem::DoesWidgetTreeContainedWidget(class UWidgetTree* WidgetTree, class UWidget* ViewWidget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MVVMSubsystem", "DoesWidgetTreeContainedWidget");

	Params::UMVVMSubsystem_DoesWidgetTreeContainedWidget_Params Parms{};

	Parms.WidgetTree = WidgetTree;
	Parms.ViewWidget = ViewWidget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModelViewViewModel.MVVMViewModelBase
// (None)

class UClass* UMVVMViewModelBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MVVMViewModelBase");

	return Clss;
}


// MVVMViewModelBase ModelViewViewModel.Default__MVVMViewModelBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UMVVMViewModelBase* UMVVMViewModelBase::GetDefaultObj()
{
	static class UMVVMViewModelBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UMVVMViewModelBase*>(UMVVMViewModelBase::StaticClass()->DefaultObject);

	return Default;
}


// Function ModelViewViewModel.MVVMViewModelBase.K2_SetPropertyValue
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              OldValue                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NewValue                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMVVMViewModelBase::K2_SetPropertyValue(int32& OldValue, int32& NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MVVMViewModelBase", "K2_SetPropertyValue");

	Params::UMVVMViewModelBase_K2_SetPropertyValue_Params Parms{};

	Parms.OldValue = OldValue;
	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModelViewViewModel.MVVMViewModelBase.K2_RemoveFieldValueChangedDelegate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FFieldNotificationId        FieldId                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMVVMViewModelBase::K2_RemoveFieldValueChangedDelegate(const struct FFieldNotificationId& FieldId, FDelegateProperty_ Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MVVMViewModelBase", "K2_RemoveFieldValueChangedDelegate");

	Params::UMVVMViewModelBase_K2_RemoveFieldValueChangedDelegate_Params Parms{};

	Parms.FieldId = FieldId;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModelViewViewModel.MVVMViewModelBase.K2_BroadcastFieldValueChanged
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FFieldNotificationId        FieldId                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMVVMViewModelBase::K2_BroadcastFieldValueChanged(const struct FFieldNotificationId& FieldId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MVVMViewModelBase", "K2_BroadcastFieldValueChanged");

	Params::UMVVMViewModelBase_K2_BroadcastFieldValueChanged_Params Parms{};

	Parms.FieldId = FieldId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModelViewViewModel.MVVMViewModelBase.K2_AddFieldValueChangedDelegate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FFieldNotificationId        FieldId                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMVVMViewModelBase::K2_AddFieldValueChangedDelegate(const struct FFieldNotificationId& FieldId, FDelegateProperty_ Delegate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MVVMViewModelBase", "K2_AddFieldValueChangedDelegate");

	Params::UMVVMViewModelBase_K2_AddFieldValueChangedDelegate_Params Parms{};

	Parms.FieldId = FieldId;
	Parms.Delegate = Delegate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class ModelViewViewModel.MVVMViewModelCollectionObject
// (None)

class UClass* UMVVMViewModelCollectionObject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MVVMViewModelCollectionObject");

	return Clss;
}


// MVVMViewModelCollectionObject ModelViewViewModel.Default__MVVMViewModelCollectionObject
// (Public, ClassDefaultObject, ArchetypeObject)

class UMVVMViewModelCollectionObject* UMVVMViewModelCollectionObject::GetDefaultObj()
{
	static class UMVVMViewModelCollectionObject* Default = nullptr;

	if (!Default)
		Default = static_cast<UMVVMViewModelCollectionObject*>(UMVVMViewModelCollectionObject::StaticClass()->DefaultObject);

	return Default;
}


// Function ModelViewViewModel.MVVMViewModelCollectionObject.RemoveViewModel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMVVMViewModelContext       Context                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMVVMViewModelCollectionObject::RemoveViewModel(const struct FMVVMViewModelContext& Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MVVMViewModelCollectionObject", "RemoveViewModel");

	Params::UMVVMViewModelCollectionObject_RemoveViewModel_Params Parms{};

	Parms.Context = Context;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModelViewViewModel.MVVMViewModelCollectionObject.RemoveAllViewModelInstance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMVVMViewModelBase*          ViewModel                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMVVMViewModelCollectionObject::RemoveAllViewModelInstance(class UMVVMViewModelBase* ViewModel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MVVMViewModelCollectionObject", "RemoveAllViewModelInstance");

	Params::UMVVMViewModelCollectionObject_RemoveAllViewModelInstance_Params Parms{};

	Parms.ViewModel = ViewModel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModelViewViewModel.MVVMViewModelCollectionObject.FindViewModelInstance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMVVMViewModelContext       Context                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UMVVMViewModelBase*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMVVMViewModelBase* UMVVMViewModelCollectionObject::FindViewModelInstance(const struct FMVVMViewModelContext& Context)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MVVMViewModelCollectionObject", "FindViewModelInstance");

	Params::UMVVMViewModelCollectionObject_FindViewModelInstance_Params Parms{};

	Parms.Context = Context;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModelViewViewModel.MVVMViewModelCollectionObject.FindFirstViewModelInstanceOfType
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TSubclassOf<class UMVVMViewModelBase>ViewModelClass                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMVVMViewModelBase*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMVVMViewModelBase* UMVVMViewModelCollectionObject::FindFirstViewModelInstanceOfType(TSubclassOf<class UMVVMViewModelBase>& ViewModelClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MVVMViewModelCollectionObject", "FindFirstViewModelInstanceOfType");

	Params::UMVVMViewModelCollectionObject_FindFirstViewModelInstanceOfType_Params Parms{};

	Parms.ViewModelClass = ViewModelClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModelViewViewModel.MVVMViewModelCollectionObject.AddViewModelInstance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMVVMViewModelContext       Context                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UMVVMViewModelBase*          ViewModel                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMVVMViewModelCollectionObject::AddViewModelInstance(const struct FMVVMViewModelContext& Context, class UMVVMViewModelBase* ViewModel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MVVMViewModelCollectionObject", "AddViewModelInstance");

	Params::UMVVMViewModelCollectionObject_AddViewModelInstance_Params Parms{};

	Parms.Context = Context;
	Parms.ViewModel = ViewModel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModelViewViewModel.MVVMViewModelBlueprintGeneratedClass
// (Field, Struct, Class)

class UClass* UMVVMViewModelBlueprintGeneratedClass::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MVVMViewModelBlueprintGeneratedClass");

	return Clss;
}


// MVVMViewModelBlueprintGeneratedClass ModelViewViewModel.Default__MVVMViewModelBlueprintGeneratedClass
// (Public, ClassDefaultObject, ArchetypeObject)

class UMVVMViewModelBlueprintGeneratedClass* UMVVMViewModelBlueprintGeneratedClass::GetDefaultObj()
{
	static class UMVVMViewModelBlueprintGeneratedClass* Default = nullptr;

	if (!Default)
		Default = static_cast<UMVVMViewModelBlueprintGeneratedClass*>(UMVVMViewModelBlueprintGeneratedClass::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelViewViewModel.MVVMBindingSubsystem
// (None)

class UClass* UMVVMBindingSubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MVVMBindingSubsystem");

	return Clss;
}


// MVVMBindingSubsystem ModelViewViewModel.Default__MVVMBindingSubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UMVVMBindingSubsystem* UMVVMBindingSubsystem::GetDefaultObj()
{
	static class UMVVMBindingSubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UMVVMBindingSubsystem*>(UMVVMBindingSubsystem::StaticClass()->DefaultObject);

	return Default;
}


// Class ModelViewViewModel.MVVMView
// (None)

class UClass* UMVVMView::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MVVMView");

	return Clss;
}


// MVVMView ModelViewViewModel.Default__MVVMView
// (Public, ClassDefaultObject, ArchetypeObject)

class UMVVMView* UMVVMView::GetDefaultObj()
{
	static class UMVVMView* Default = nullptr;

	if (!Default)
		Default = static_cast<UMVVMView*>(UMVVMView::StaticClass()->DefaultObject);

	return Default;
}


// Function ModelViewViewModel.MVVMView.UninitializeSources
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMVVMView::UninitializeSources()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MVVMView", "UninitializeSources");

	Params::UMVVMView_UninitializeSources_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModelViewViewModel.MVVMView.UninitializeBindings
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMVVMView::UninitializeBindings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MVVMView", "UninitializeBindings");

	Params::UMVVMView_UninitializeBindings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModelViewViewModel.MVVMView.SetViewModelByClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class UNotifyFieldValueChanged>NewValue                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMVVMView::SetViewModelByClass(TScriptInterface<class UNotifyFieldValueChanged> NewValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MVVMView", "SetViewModelByClass");

	Params::UMVVMView_SetViewModelByClass_Params Parms{};

	Parms.NewValue = NewValue;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModelViewViewModel.MVVMView.SetViewModel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ViewModelName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TScriptInterface<class UNotifyFieldValueChanged>ViewModel                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMVVMView::SetViewModel(class FName ViewModelName, TScriptInterface<class UNotifyFieldValueChanged> ViewModel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MVVMView", "SetViewModel");

	Params::UMVVMView_SetViewModel_Params Parms{};

	Parms.ViewModelName = ViewModelName;
	Parms.ViewModel = ViewModel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModelViewViewModel.MVVMView.InitializeSources
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMVVMView::InitializeSources()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MVVMView", "InitializeSources");

	Params::UMVVMView_InitializeSources_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModelViewViewModel.MVVMView.InitializeBindings
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMVVMView::InitializeBindings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MVVMView", "InitializeBindings");

	Params::UMVVMView_InitializeBindings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function ModelViewViewModel.MVVMView.GetViewModel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        ViewModelName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TScriptInterface<class UNotifyFieldValueChanged>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TScriptInterface<class UNotifyFieldValueChanged> UMVVMView::GetViewModel(class FName ViewModelName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MVVMView", "GetViewModel");

	Params::UMVVMView_GetViewModel_Params Parms{};

	Parms.ViewModelName = ViewModelName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModelViewViewModel.MVVMView.AreSourcesInitialized
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMVVMView::AreSourcesInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MVVMView", "AreSourcesInitialized");

	Params::UMVVMView_AreSourcesInitialized_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function ModelViewViewModel.MVVMView.AreBindingsInitialized
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMVVMView::AreBindingsInitialized()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MVVMView", "AreBindingsInitialized");

	Params::UMVVMView_AreBindingsInitialized_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class ModelViewViewModel.MVVMViewClass
// (None)

class UClass* UMVVMViewClass::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MVVMViewClass");

	return Clss;
}


// MVVMViewClass ModelViewViewModel.Default__MVVMViewClass
// (Public, ClassDefaultObject, ArchetypeObject)

class UMVVMViewClass* UMVVMViewClass::GetDefaultObj()
{
	static class UMVVMViewClass* Default = nullptr;

	if (!Default)
		Default = static_cast<UMVVMViewClass*>(UMVVMViewClass::StaticClass()->DefaultObject);

	return Default;
}

}


