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

// 0x38 (0x38 - 0x0)
// Function ModularGameplay.GameFrameworkComponentManager.UnregisterClassInitStateDelegate
struct UGameFrameworkComponentManager_UnregisterClassInitStateDelegate_Params
{
public:
	TSoftClassPtr<class AActor>                  ActorClass;                                        // 0x0(0x28)(Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           DelegateToRemove;                                  // 0x28(0xC)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x34(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_371F[0x3];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// Function ModularGameplay.GameFrameworkComponentManager.UnregisterActorInitStateDelegate
struct UGameFrameworkComponentManager_UnregisterActorInitStateDelegate_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           DelegateToRemove;                                  // 0x8(0xC)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x14(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3720[0x3];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function ModularGameplay.GameFrameworkComponentManager.SendExtensionEvent
struct UGameFrameworkComponentManager_SendExtensionEvent_Params
{
public:
	class AActor*                                Receiver;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  EventName;                                         // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnlyInGameWorlds;                                 // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3721[0x3];                                     // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// Function ModularGameplay.GameFrameworkComponentManager.RemoveReceiver
struct UGameFrameworkComponentManager_RemoveReceiver_Params
{
public:
	class AActor*                                Receiver;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function ModularGameplay.GameFrameworkComponentManager.RegisterAndCallForClassInitState
struct UGameFrameworkComponentManager_RegisterAndCallForClassInitState_Params
{
public:
	TSoftClassPtr<class AActor>                  ActorClass;                                        // 0x0(0x28)(Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  FeatureName;                                       // 0x28(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          RequiredState;                                     // 0x2C(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x30(0xC)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCallImmediately;                                  // 0x3C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x3D(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3722[0x2];                                     // Fixing Size Of Struct..
};

// 0x20 (0x20 - 0x0)
// Function ModularGameplay.GameFrameworkComponentManager.RegisterAndCallForActorInitState
struct UGameFrameworkComponentManager_RegisterAndCallForActorInitState_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  FeatureName;                                       // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          RequiredState;                                     // 0xC(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x10(0xC)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCallImmediately;                                  // 0x1C(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1D(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3723[0x2];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function ModularGameplay.GameFrameworkComponentManager.AddReceiver
struct UGameFrameworkComponentManager_AddReceiver_Params
{
public:
	class AActor*                                Receiver;                                          // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAddOnlyInGameWorlds;                              // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3724[0x7];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function ModularGameplay.GameFrameworkInitStateInterface.UnregisterInitStateDelegate
struct UGameFrameworkInitStateInterface_UnregisterInitStateDelegate_Params
{
public:
	FDelegateProperty_                           Delegate;                                          // 0x0(0xC)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0xC(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3726[0x3];                                     // Fixing Size Of Struct..
};

// 0x14 (0x14 - 0x0)
// Function ModularGameplay.GameFrameworkInitStateInterface.RegisterAndCallForInitStateChange
struct UGameFrameworkInitStateInterface_RegisterAndCallForInitStateChange_Params
{
public:
	struct FGameplayTag                          RequiredState;                                     // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FDelegateProperty_                           Delegate;                                          // 0x4(0xC)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCallImmediately;                                  // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x11(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3727[0x2];                                     // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// Function ModularGameplay.GameFrameworkInitStateInterface.HasReachedInitState
struct UGameFrameworkInitStateInterface_HasReachedInitState_Params
{
public:
	struct FGameplayTag                          DesiredState;                                      // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3728[0x3];                                     // Fixing Size Of Struct..
};

// 0x4 (0x4 - 0x0)
// Function ModularGameplay.GameFrameworkInitStateInterface.GetInitState
struct UGameFrameworkInitStateInterface_GetInitState_Params
{
public:
	struct FGameplayTag                          ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function ModularGameplay.GameFrameworkInitStateInterface.GetFeatureName
struct UGameFrameworkInitStateInterface_GetFeatureName_Params
{
public:
	class FName                                  ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
