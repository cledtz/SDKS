#pragma once

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

// 0x0 (0x0 - 0x0)
// Function DynamicUI.DynamicUITransitionableWidgetInterface.BroadcastTransitionCompleted
struct UDynamicUITransitionableWidgetInterface_BroadcastTransitionCompleted_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function DynamicUI.DynamicUIDirectorBase.RemoveScene
struct UDynamicUIDirectorBase_RemoveScene_Params
{
public:
	class UDynamicUIScene*                       Scene;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function DynamicUI.DynamicUIDirectorBase.GetOwningLocalPlayerController
struct UDynamicUIDirectorBase_GetOwningLocalPlayerController_Params
{
public:
	class UPlayerController*                     ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function DynamicUI.DynamicUIDirectorBase.GetOwningLocalPlayer
struct UDynamicUIDirectorBase_GetOwningLocalPlayer_Params
{
public:
	class ULocalPlayer*                          ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function DynamicUI.DynamicUIDirectorBase.GetOwnedEventRouter
struct UDynamicUIDirectorBase_GetOwnedEventRouter_Params
{
public:
	class UGameplayEventRouterComponent*         ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function DynamicUI.DynamicUIDirectorBase.AddScene
struct UDynamicUIDirectorBase_AddScene_Params
{
public:
	class UDynamicUIScene*                       Scene;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function DynamicUI.DynamicUIManager.RemoveScenes
struct UDynamicUIManager_RemoveScenes_Params
{
public:
	TArray<class UDynamicUIScene*>               Scenes;                                            // 0x0(0x10)(ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	class UPlayerController*                     Player;                                            // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function DynamicUI.DynamicUIManager.RemoveSceneFromFirstLocalPlayer
struct UDynamicUIManager_RemoveSceneFromFirstLocalPlayer_Params
{
public:
	class UDynamicUIScene*                       Scene;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function DynamicUI.DynamicUIManager.RemoveScene
struct UDynamicUIManager_RemoveScene_Params
{
public:
	class UDynamicUIScene*                       Scene;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayerController*                     Player;                                            // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function DynamicUI.DynamicUIManager.AddSceneToFirstLocalPlayer
struct UDynamicUIManager_AddSceneToFirstLocalPlayer_Params
{
public:
	class UDynamicUIScene*                       Scene;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function DynamicUI.DynamicUIManager.AddScenes
struct UDynamicUIManager_AddScenes_Params
{
public:
	TArray<class UDynamicUIScene*>               Scenes;                                            // 0x0(0x10)(ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	class UPlayerController*                     Player;                                            // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function DynamicUI.DynamicUIManager.AddScene
struct UDynamicUIManager_AddScene_Params
{
public:
	class UDynamicUIScene*                       Scene;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UPlayerController*                     Player;                                            // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
