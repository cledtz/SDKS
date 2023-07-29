#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function ModelViewViewModel.MVVMSubsystem.K2_GetViewFromUserWidget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UUserWidget*                 UserWidget                                                       (ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMVVMView*                   ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMVVMView* UMVVMSubsystem::K2_GetViewFromUserWidget(class UUserWidget* UserWidget)
{
	static auto Func = Class->GetFunction("MVVMSubsystem", "K2_GetViewFromUserWidget");

	Params::UMVVMSubsystem_K2_GetViewFromUserWidget_Params Parms;

	Parms.UserWidget = UserWidget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

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
	static auto Func = Class->GetFunction("MVVMSubsystem", "K2_GetAvailableBindings");

	Params::UMVVMSubsystem_K2_GetAvailableBindings_Params Parms;

	Parms.Class = Class;
	Parms.Accessor = Accessor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

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
	static auto Func = Class->GetFunction("MVVMSubsystem", "K2_GetAvailableBinding");

	Params::UMVVMSubsystem_K2_GetAvailableBinding_Params Parms;

	Parms.Class = Class;
	Parms.BindingName = BindingName;
	Parms.Accessor = Accessor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ModelViewViewModel.MVVMSubsystem.GetGlobalViewModelCollection
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMVVMViewModelCollectionObject*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMVVMViewModelCollectionObject* UMVVMSubsystem::GetGlobalViewModelCollection()
{
	static auto Func = Class->GetFunction("MVVMSubsystem", "GetGlobalViewModelCollection");

	Params::UMVVMSubsystem_GetGlobalViewModelCollection_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

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
	static auto Func = Class->GetFunction("MVVMSubsystem", "DoesWidgetTreeContainedWidget");

	Params::UMVVMSubsystem_DoesWidgetTreeContainedWidget_Params Parms;

	Parms.WidgetTree = WidgetTree;
	Parms.ViewWidget = ViewWidget;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ModelViewViewModel.MVVMViewModelBase.K2_SetPropertyValue
// (Final, Native, Protected, HasOutParams, BlueprintCallable)
// Parameters:
// int32                              OldValue                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              NewValue                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMVVMViewModelBase::K2_SetPropertyValue(int32& OldValue, int32& NewValue)
{
	static auto Func = Class->GetFunction("MVVMViewModelBase", "K2_SetPropertyValue");

	Params::UMVVMViewModelBase_K2_SetPropertyValue_Params Parms;

	Parms.OldValue = OldValue;
	Parms.NewValue = NewValue;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ModelViewViewModel.MVVMViewModelBase.K2_RemoveFieldValueChangedDelegate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FFieldNotificationId        FieldId                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMVVMViewModelBase::K2_RemoveFieldValueChangedDelegate(const struct FFieldNotificationId& FieldId, FDelegateProperty_ Delegate)
{
	static auto Func = Class->GetFunction("MVVMViewModelBase", "K2_RemoveFieldValueChangedDelegate");

	Params::UMVVMViewModelBase_K2_RemoveFieldValueChangedDelegate_Params Parms;

	Parms.FieldId = FieldId;
	Parms.Delegate = Delegate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ModelViewViewModel.MVVMViewModelBase.K2_BroadcastFieldValueChanged
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// struct FFieldNotificationId        FieldId                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMVVMViewModelBase::K2_BroadcastFieldValueChanged(const struct FFieldNotificationId& FieldId)
{
	static auto Func = Class->GetFunction("MVVMViewModelBase", "K2_BroadcastFieldValueChanged");

	Params::UMVVMViewModelBase_K2_BroadcastFieldValueChanged_Params Parms;

	Parms.FieldId = FieldId;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ModelViewViewModel.MVVMViewModelBase.K2_AddFieldValueChangedDelegate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FFieldNotificationId        FieldId                                                          (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Delegate                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMVVMViewModelBase::K2_AddFieldValueChangedDelegate(const struct FFieldNotificationId& FieldId, FDelegateProperty_ Delegate)
{
	static auto Func = Class->GetFunction("MVVMViewModelBase", "K2_AddFieldValueChangedDelegate");

	Params::UMVVMViewModelBase_K2_AddFieldValueChangedDelegate_Params Parms;

	Parms.FieldId = FieldId;
	Parms.Delegate = Delegate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function ModelViewViewModel.MVVMViewModelCollectionObject.RemoveViewModel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMVVMViewModelContext       Context                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMVVMViewModelCollectionObject::RemoveViewModel(const struct FMVVMViewModelContext& Context)
{
	static auto Func = Class->GetFunction("MVVMViewModelCollectionObject", "RemoveViewModel");

	Params::UMVVMViewModelCollectionObject_RemoveViewModel_Params Parms;

	Parms.Context = Context;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ModelViewViewModel.MVVMViewModelCollectionObject.RemoveAllViewModelInstance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMVVMViewModelBase*          ViewModel                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMVVMViewModelCollectionObject::RemoveAllViewModelInstance(class UMVVMViewModelBase* ViewModel)
{
	static auto Func = Class->GetFunction("MVVMViewModelCollectionObject", "RemoveAllViewModelInstance");

	Params::UMVVMViewModelCollectionObject_RemoveAllViewModelInstance_Params Parms;

	Parms.ViewModel = ViewModel;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ModelViewViewModel.MVVMViewModelCollectionObject.FindViewModelInstance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMVVMViewModelContext       Context                                                          (Parm, NoDestructor, NativeAccessSpecifierPublic)
// class UMVVMViewModelBase*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMVVMViewModelBase* UMVVMViewModelCollectionObject::FindViewModelInstance(const struct FMVVMViewModelContext& Context)
{
	static auto Func = Class->GetFunction("MVVMViewModelCollectionObject", "FindViewModelInstance");

	Params::UMVVMViewModelCollectionObject_FindViewModelInstance_Params Parms;

	Parms.Context = Context;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function ModelViewViewModel.MVVMViewModelCollectionObject.FindFirstViewModelInstanceOfType
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TSubclassOf<class UMVVMViewModelBase>ViewModelClass                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UMVVMViewModelBase*          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMVVMViewModelBase* UMVVMViewModelCollectionObject::FindFirstViewModelInstanceOfType(TSubclassOf<class UMVVMViewModelBase>& ViewModelClass)
{
	static auto Func = Class->GetFunction("MVVMViewModelCollectionObject", "FindFirstViewModelInstanceOfType");

	Params::UMVVMViewModelCollectionObject_FindFirstViewModelInstanceOfType_Params Parms;

	Parms.ViewModelClass = ViewModelClass;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

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
	static auto Func = Class->GetFunction("MVVMViewModelCollectionObject", "AddViewModelInstance");

	Params::UMVVMViewModelCollectionObject_AddViewModelInstance_Params Parms;

	Parms.Context = Context;
	Parms.ViewModel = ViewModel;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

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
	static auto Func = Class->GetFunction("MVVMView", "SetViewModel");

	Params::UMVVMView_SetViewModel_Params Parms;

	Parms.ViewModelName = ViewModelName;
	Parms.ViewModel = ViewModel;

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
