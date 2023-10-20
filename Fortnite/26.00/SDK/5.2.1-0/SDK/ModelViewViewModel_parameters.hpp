#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

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

// 0x28 (0x28 - 0x0)
// Function ModelViewViewModel.MVVMSubsystem.K2_GetAvailableBinding
struct UMVVMSubsystem_K2_GetAvailableBinding_Params
{
public:
	class UClass*                                Class;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMVVMBindingName                      BindingName;                                       // 0x8(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                Accessor;                                          // 0x10(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMVVMAvailableBinding                 ReturnValue;                                       // 0x18(0xC)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_29C[0x4];                                      // Fixing Size Of Struct
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
	uint8                                        Pad_29E[0x7];                                      // Fixing Size Of Struct
};

// 0xC (0xC - 0x0)
// Function ModelViewViewModel.MVVMViewModelBase.K2_SetPropertyValue
struct UMVVMViewModelBase_K2_SetPropertyValue_Params
{
public:
	int32                                        OldValue;                                          // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NewValue;                                          // 0x4(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2A2[0x3];                                      // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function ModelViewViewModel.MVVMViewModelBase.K2_RemoveFieldValueChangedDelegate
struct UMVVMViewModelBase_K2_RemoveFieldValueChangedDelegate_Params
{
public:
	struct FFieldNotificationId                  FieldId;                                           // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x8(0x10)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function ModelViewViewModel.MVVMViewModelBase.K2_BroadcastFieldValueChanged
struct UMVVMViewModelBase_K2_BroadcastFieldValueChanged_Params
{
public:
	struct FFieldNotificationId                  FieldId;                                           // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ModelViewViewModel.MVVMViewModelBase.K2_AddFieldValueChangedDelegate
struct UMVVMViewModelBase_K2_AddFieldValueChangedDelegate_Params
{
public:
	struct FFieldNotificationId                  FieldId;                                           // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x8(0x10)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function ModelViewViewModel.MVVMViewModelCollectionObject.RemoveViewModel
struct UMVVMViewModelCollectionObject_RemoveViewModel_Params
{
public:
	struct FMVVMViewModelContext                 Context;                                           // 0x0(0x10)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BA[0x7];                                      // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function ModelViewViewModel.MVVMViewModelCollectionObject.RemoveAllViewModelInstance
struct UMVVMViewModelCollectionObject_RemoveAllViewModelInstance_Params
{
public:
	class UMVVMViewModelBase*                    ViewModel;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x8(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2BF[0x4];                                      // Fixing Size Of Struct
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
	uint8                                        Pad_2CE[0x7];                                      // Fixing Size Of Struct
};

// 0x20 (0x20 - 0x0)
// Function ModelViewViewModel.MVVMView.SetViewModel
struct UMVVMView_SetViewModel_Params
{
public:
	class FName                                  ViewModelName;                                     // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TScriptInterface<class UNotifyFieldValueChanged> ViewModel;                                         // 0x8(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2D7[0x7];                                      // Fixing Size Of Struct
};

}
}


