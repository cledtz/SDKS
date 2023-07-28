#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0x4 - 0x0)
// Function ModelViewViewModel.MVVMConversionLibrary.Conv_BoolToSlateVisibility
struct UMVVMConversionLibrary_Conv_BoolToSlateVisibility_Params
{
public:
	bool                                         bIsVisible;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESlateVisibility                  TrueVisibility;                                    // 0x1(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESlateVisibility                  FalseVisibility;                                   // 0x2(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESlateVisibility                  ReturnValue;                                       // 0x3(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ModelViewViewModel.MVVMViewModelContextResolver.K2_CreateInstance
struct UMVVMViewModelContextResolver_K2_CreateInstance_Params
{
public:
	class UClass*                                ExpectedType;                                      // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UUserWidget*                           UserWidget;                                        // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FInterfaceProperty_                          ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ModelViewViewModel.MVVMGameSubsystem.GetViewModelCollection
struct UMVVMGameSubsystem_GetViewModelCollection_Params
{
public:
	class UMVVMViewModelCollectionObject*        ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModelViewViewModel.MVVMSubsystem.K2_GetViewFromUserWidget
struct UMVVMSubsystem_K2_GetViewFromUserWidget_Params
{
public:
	class UUserWidget*                           UserWidget;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMVVMView*                             ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ModelViewViewModel.MVVMSubsystem.K2_GetAvailableBindings
struct UMVVMSubsystem_K2_GetAvailableBindings_Params
{
public:
	class UClass*                                Class;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                Accessor;                                          // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FMVVMAvailableBinding>         ReturnValue;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ModelViewViewModel.MVVMSubsystem.K2_GetAvailableBinding
struct UMVVMSubsystem_K2_GetAvailableBinding_Params
{
public:
	class UClass*                                Class;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMVVMBindingName                      BindingName;                                       // 0x8(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F77[0x4];                                     // Fixing Size After Last Property..
	class UClass*                                Accessor;                                          // 0x10(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMVVMAvailableBinding                 ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ModelViewViewModel.MVVMSubsystem.GetGlobalViewModelCollection
struct UMVVMSubsystem_GetGlobalViewModelCollection_Params
{
public:
	class UMVVMViewModelCollectionObject*        ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ModelViewViewModel.MVVMSubsystem.DoesWidgetTreeContainedWidget
struct UMVVMSubsystem_DoesWidgetTreeContainedWidget_Params
{
public:
	class UWidgetTree*                           WidgetTree;                                        // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UWidget*                               ViewWidget;                                        // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F78[0x7];                                     // Fixing Size Of Struct..
};

// 0xC (0xC - 0x0)
// Function ModelViewViewModel.MVVMViewModelBase.K2_SetPropertyValue
struct UMVVMViewModelBase_K2_SetPropertyValue_Params
{
public:
	int32                                        OldValue;                                          // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NewValue;                                          // 0x4(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F79[0x3];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function ModelViewViewModel.MVVMViewModelBase.K2_RemoveFieldValueChangedDelegate
struct UMVVMViewModelBase_K2_RemoveFieldValueChangedDelegate_Params
{
public:
	struct FFieldNotificationId                  FieldId;                                           // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x4(0xC)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ModelViewViewModel.MVVMViewModelBase.K2_BroadcastFieldValueChanged
struct UMVVMViewModelBase_K2_BroadcastFieldValueChanged_Params
{
public:
	struct FFieldNotificationId                  FieldId;                                           // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModelViewViewModel.MVVMViewModelBase.K2_AddFieldValueChangedDelegate
struct UMVVMViewModelBase_K2_AddFieldValueChangedDelegate_Params
{
public:
	struct FFieldNotificationId                  FieldId;                                           // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x4(0xC)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ModelViewViewModel.MVVMViewModelCollectionObject.RemoveViewModel
struct UMVVMViewModelCollectionObject_RemoveViewModel_Params
{
public:
	struct FMVVMViewModelContext                 Context;                                           // 0x0(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F7B[0x7];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function ModelViewViewModel.MVVMViewModelCollectionObject.RemoveAllViewModelInstance
struct UMVVMViewModelCollectionObject_RemoveAllViewModelInstance_Params
{
public:
	class UMVVMViewModelBase*                    ViewModel;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F7C[0x4];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// Function ModelViewViewModel.MVVMViewModelCollectionObject.FindViewModelInstance
struct UMVVMViewModelCollectionObject_FindViewModelInstance_Params
{
public:
	struct FMVVMViewModelContext                 Context;                                           // 0x0(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UMVVMViewModelBase*                    ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function ModelViewViewModel.MVVMViewModelCollectionObject.FindFirstViewModelInstanceOfType
struct UMVVMViewModelCollectionObject_FindFirstViewModelInstanceOfType_Params
{
public:
	TSubclassOf<class UMVVMViewModelBase>        ViewModelClass;                                    // 0x0(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMVVMViewModelBase*                    ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function ModelViewViewModel.MVVMViewModelCollectionObject.AddViewModelInstance
struct UMVVMViewModelCollectionObject_AddViewModelInstance_Params
{
public:
	struct FMVVMViewModelContext                 Context;                                           // 0x0(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UMVVMViewModelBase*                    ViewModel;                                         // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F7D[0x7];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// Function ModelViewViewModel.MVVMView.SetViewModelByClass
struct UMVVMView_SetViewModelByClass_Params
{
public:
	FInterfaceProperty_                          NewValue;                                          // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F7F[0x7];                                     // Fixing Size Of Struct..
};

// 0x20 (0x20 - 0x0)
// Function ModelViewViewModel.MVVMView.SetViewModel
struct UMVVMView_SetViewModel_Params
{
public:
	class FName                                  ViewModelName;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F80[0x4];                                     // Fixing Size After Last Property..
	FInterfaceProperty_                          ViewModel;                                         // 0x8(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F81[0x7];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// Function ModelViewViewModel.MVVMView.GetViewModel
struct UMVVMView_GetViewModel_Params
{
public:
	class FName                                  ViewModelName;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3F82[0x4];                                     // Fixing Size After Last Property..
	FInterfaceProperty_                          ReturnValue;                                       // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
