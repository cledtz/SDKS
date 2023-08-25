#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class ModelViewViewModel.MVVMConversionLibrary
class UMVVMConversionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UMVVMConversionLibrary* GetDefaultObj();

	enum class ESlateVisibility Conv_BoolToSlateVisibility(bool bIsVisible, enum class ESlateVisibility TrueVisibility, enum class ESlateVisibility FalseVisibility);
};

// 0x0 (0x28 - 0x28)
// Class ModelViewViewModel.MVVMViewModelContextResolver
class UMVVMViewModelContextResolver : public UObject
{
public:

	static class UClass* StaticClass();
	static class UMVVMViewModelContextResolver* GetDefaultObj();

	TScriptInterface<class UNotifyFieldValueChanged> K2_CreateInstance(class UClass* ExpectedType, class UUserWidget* UserWidget);
};

// 0x8 (0x38 - 0x30)
// Class ModelViewViewModel.MVVMGameSubsystem
class UMVVMGameSubsystem : public UGameInstanceSubsystem
{
public:
	class UMVVMViewModelCollectionObject*        ViewModelCollection;                               // 0x30(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMVVMGameSubsystem* GetDefaultObj();

	class UMVVMViewModelCollectionObject* GetViewModelCollection();
};

// 0x0 (0x30 - 0x30)
// Class ModelViewViewModel.MVVMSubsystem
class UMVVMSubsystem : public UEngineSubsystem
{
public:

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
	uint8                                        Pad_1C7C[0x40];                                    // Fixing Size Of Struct

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

// 0x0 (0x368 - 0x368)
// Class ModelViewViewModel.MVVMViewModelBlueprintGeneratedClass
class UMVVMViewModelBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
public:

	static class UClass* StaticClass();
	static class UMVVMViewModelBlueprintGeneratedClass* GetDefaultObj();

};

// 0x60 (0x90 - 0x30)
// Class ModelViewViewModel.MVVMBindingSubsystem
class UMVVMBindingSubsystem : public UEngineSubsystem
{
public:
	uint8                                        Pad_1C98[0x60];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UMVVMBindingSubsystem* GetDefaultObj();

};

// 0x30 (0x58 - 0x28)
// Class ModelViewViewModel.MVVMView
class UMVVMView : public UUserWidgetExtension
{
public:
	class UMVVMViewClass*                        ClassExtension;                                    // 0x28(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FMVVMViewSource>               Sources;                                           // 0x30(0x10)(Edit, ZeroConstructor, Transient, EditConst, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1CB6[0x10];                                    // Fixing Size After Last Property 
	bool                                         bLogBinding;                                       // 0x50(0x1)(Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bConstructed;                                      // 0x51(0x1)(Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bSourcesInitialized;                               // 0x52(0x1)(Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bBindingsInitialized;                              // 0x53(0x1)(Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bHasEveryTickBinding;                              // 0x54(0x1)(Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1CBB[0x3];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UMVVMView* GetDefaultObj();

	void UninitializeSources();
	void UninitializeBindings();
	bool SetViewModelByClass(TScriptInterface<class UNotifyFieldValueChanged> NewValue);
	bool SetViewModel(class FName ViewModelName, TScriptInterface<class UNotifyFieldValueChanged> ViewModel);
	void InitializeSources();
	void InitializeBindings();
	TScriptInterface<class UNotifyFieldValueChanged> GetViewModel(class FName ViewModelName);
	bool AreSourcesInitialized();
	bool AreBindingsInitialized();
};

// 0x88 (0xB0 - 0x28)
// Class ModelViewViewModel.MVVMViewClass
class UMVVMViewClass : public UWidgetBlueprintGeneratedClassExtension
{
public:
	TArray<struct FMVVMViewClass_SourceCreator>  SourceCreators;                                    // 0x28(0x10)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<struct FMVVMViewClass_CompiledBinding> CompiledBindings;                                  // 0x38(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FMVVMCompiledBindingLibrary           BindingLibrary;                                    // 0x48(0x60)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_1CBD[0x4];                                     // Fixing Size After Last Property 
	bool                                         bInitializeSourcesOnConstruct;                     // 0xAC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bInitializeBindingsOnConstruct;                    // 0xAD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1CBE[0x2];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UMVVMViewClass* GetDefaultObj();

};

}


