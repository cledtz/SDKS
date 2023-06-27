#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

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

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MVVMConversionLibrary");
		return Clss;
	}

	enum class ESlateVisibility Conv_BoolToSlateVisibility(bool bIsVisible, enum class ESlateVisibility TrueVisibility, enum class ESlateVisibility FalseVisibility);
};

// 0x0 (0x28 - 0x28)
// Class ModelViewViewModel.MVVMViewModelContextResolver
class UMVVMViewModelContextResolver : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MVVMViewModelContextResolver");
		return Clss;
	}

	FInterfaceProperty_ K2_CreateInstance(class UClass* ExpectedType, class UUserWidget* UserWidget);
};

// 0x8 (0x38 - 0x30)
// Class ModelViewViewModel.MVVMGameSubsystem
class UMVVMGameSubsystem : public UGameInstanceSubsystem
{
public:
	class UMVVMViewModelCollectionObject*        ViewModelCollection;                               // 0x30(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MVVMGameSubsystem");
		return Clss;
	}

	class UMVVMViewModelCollectionObject* GetViewModelCollection();
};

// 0x0 (0x30 - 0x30)
// Class ModelViewViewModel.MVVMSubsystem
class UMVVMSubsystem : public UEngineSubsystem
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MVVMSubsystem");
		return Clss;
	}

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
	uint8                                        Pad_3671[0x40];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MVVMViewModelBase");
		return Clss;
	}

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

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MVVMViewModelCollectionObject");
		return Clss;
	}

	bool RemoveViewModel(const struct FMVVMViewModelContext& Context);
	int32 RemoveAllViewModelInstance(class UMVVMViewModelBase* ViewModel);
	class UMVVMViewModelBase* FindViewModelInstance(const struct FMVVMViewModelContext& Context);
	class UMVVMViewModelBase* FindFirstViewModelInstanceOfType(TSubclassOf<class UMVVMViewModelBase>& ViewModelClass);
	bool AddViewModelInstance(const struct FMVVMViewModelContext& Context, class UMVVMViewModelBase* ViewModel);
};

// 0x0 (0x380 - 0x380)
// Class ModelViewViewModel.MVVMViewModelBlueprintGeneratedClass
class UMVVMViewModelBlueprintGeneratedClass : public UBlueprintGeneratedClass
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MVVMViewModelBlueprintGeneratedClass");
		return Clss;
	}

};

// 0x60 (0x90 - 0x30)
// Class ModelViewViewModel.MVVMBindingSubsystem
class UMVVMBindingSubsystem : public UEngineSubsystem
{
public:
	uint8                                        Pad_3675[0x60];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MVVMBindingSubsystem");
		return Clss;
	}

};

// 0x30 (0x58 - 0x28)
// Class ModelViewViewModel.MVVMView
class UMVVMView : public UUserWidgetExtension
{
public:
	class UMVVMViewClass*                        ClassExtension;                                    // 0x28(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FMVVMViewSource>               Sources;                                           // 0x30(0x10)(Edit, ZeroConstructor, Transient, EditConst, NativeAccessSpecifierPrivate)
	uint8                                        Pad_367A[0x10];                                    // Fixing Size After Last Property..
	bool                                         bLogBinding;                                       // 0x50(0x1)(Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bConstructed;                                      // 0x51(0x1)(Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bInitialized;                                      // 0x52(0x1)(Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bHasEveryTickBinding;                              // 0x53(0x1)(Edit, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_367B[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MVVMView");
		return Clss;
	}

	bool SetViewModelByClass(FInterfaceProperty_ NewValue);
	bool SetViewModel(class FName ViewModelName, FInterfaceProperty_ ViewModel);
	FInterfaceProperty_ GetViewModel(class FName ViewModelName);
};

// 0x88 (0xB0 - 0x28)
// Class ModelViewViewModel.MVVMViewClass
class UMVVMViewClass : public UWidgetBlueprintGeneratedClassExtension
{
public:
	TArray<struct FMVVMViewClass_SourceCreator>  SourceCreators;                                    // 0x28(0x10)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	TArray<struct FMVVMViewClass_CompiledBinding> CompiledBindings;                                  // 0x38(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FMVVMCompiledBindingLibrary           BindingLibrary;                                    // 0x48(0x60)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_367C[0x4];                                     // Fixing Size After Last Property..
	bool                                         bInitializeAtConstruction;                         // 0xAC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_367D[0x3];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MVVMViewClass");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
