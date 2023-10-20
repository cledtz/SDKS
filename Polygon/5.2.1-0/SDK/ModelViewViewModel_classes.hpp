#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x38 - 0x30)
// Class ModelViewViewModel.MVVMSubsystem
class UMVVMSubsystem : public UEngineSubsystem
{
public:
	class UMVVMViewModelCollectionObject*        GlobalViewModelCollection;                         // 0x30(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMVVMSubsystem* GetDefaultObj();

	class UMVVMView* K2_GetViewFromUserWidget(class UUserWidget* UserWidget);
	TArray<struct FMVVMAvailableBinding> K2_GetAvailableBindings(class UClass* Class, class UClass* Accessor);
	struct FMVVMAvailableBinding K2_GetAvailableBinding(class UClass* Class, const struct FMVVMBindingName& BindingName, class UClass* Accessor);
	class UMVVMViewModelCollectionObject* GetGlobalViewModelCollection();
	bool DoesWidgetTreeContainedWidget(class UWidgetTree* WidgetTree, class UWidget* ViewWidget);
};

// 0x40 (0x68 - 0x28)
// Class ModelViewViewModel.MVVMViewModelBase
class UMVVMViewModelBase : public UObject
{
public:
	uint8                                        Pad_2B2[0x40];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UMVVMViewModelBase* GetDefaultObj();

	bool K2_SetPropertyValue(int32& OldValue, int32& NewValue);
	void K2_RemoveFieldValueChangedDelegate(const struct FFieldNotificationId& FieldId, FDelegateProperty_ Delegate);
	void K2_BroadcastFieldValueChanged(const struct FFieldNotificationId& FieldId);
	void K2_AddFieldValueChangedDelegate(const struct FFieldNotificationId& FieldId, FDelegateProperty_ Delegate);
};

// 0x28 (0x50 - 0x28)
// Class ModelViewViewModel.MVVMViewModelCollectionObject
class UMVVMViewModelCollectionObject : public UObject
{
public:
	struct FMVVMViewModelCollection              ViewModelCollection;                               // 0x28(0x28)(Transient, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMVVMViewModelCollectionObject* GetDefaultObj();

	bool RemoveViewModel(const struct FMVVMViewModelContext& Context);
	int32 RemoveAllViewModelInstance(class UMVVMViewModelBase* ViewModel);
	class UMVVMViewModelBase* FindViewModelInstance(const struct FMVVMViewModelContext& Context);
	class UMVVMViewModelBase* FindFirstViewModelInstanceOfType(TSubclassOf<class UMVVMViewModelBase>& ViewModelClass);
	bool AddViewModelInstance(const struct FMVVMViewModelContext& Context, class UMVVMViewModelBase* ViewModel);
};

// 0x20 (0x390 - 0x370)
// Class ModelViewViewModel.MVVMViewModelBlueprintGeneratedClass
class UMVVMViewModelBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
public:
	TArray<struct FFieldNotificationId>          FieldNotifyNames;                                  // 0x370(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2D2[0x10];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UMVVMViewModelBlueprintGeneratedClass* GetDefaultObj();

};

// 0x40 (0x68 - 0x28)
// Class ModelViewViewModel.MVVMView
class UMVVMView : public UUserWidgetExtension
{
public:
	class UMVVMViewClass*                        ClassExtension;                                    // 0x28(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2D8[0x38];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UMVVMView* GetDefaultObj();

	bool SetViewModel(class FName ViewModelName, TScriptInterface<class UNotifyFieldValueChanged> ViewModel);
};

// 0x88 (0xB0 - 0x28)
// Class ModelViewViewModel.MVVMViewClass
class UMVVMViewClass : public UWidgetBlueprintGeneratedClassExtension
{
public:
	TArray<struct FMVVMViewClass_SourceCreator>  SourceCreators;                                    // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FMVVMViewClass_CompiledBinding> CompiledBindings;                                  // 0x38(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FMVVMCompiledBindingLibrary           BindingLibrary;                                    // 0x48(0x60)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_2DB[0x8];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UMVVMViewClass* GetDefaultObj();

};

// 0x60 (0xA0 - 0x40)
// Class ModelViewViewModel.MVVMViewWorldSubsystem
class UMVVMViewWorldSubsystem : public UTickableWorldSubsystem
{
public:
	uint8                                        Pad_2DD[0x60];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UMVVMViewWorldSubsystem* GetDefaultObj();

};

}


