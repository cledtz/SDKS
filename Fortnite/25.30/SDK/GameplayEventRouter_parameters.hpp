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
// Function GameplayEventRouter.AsyncAction_StartListeningToEvent.StopListeningToEvent
struct UAsyncAction_StartListeningToEvent_StopListeningToEvent_Params
{
public:
};

// 0x30 (0x30 - 0x0)
// Function GameplayEventRouter.AsyncAction_StartListeningToEvent.StartListeningToEvent
struct UAsyncAction_StartListeningToEvent_StartListeningToEvent_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameplayEventRouterComponent*         Target;                                            // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UScriptStruct*                         EventType;                                         // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               Context;                                           // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEventBubblingRule                EventBubblingRule;                                 // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DBD[0x7];                                      // Fixing Size After Last Property
	class UAsyncAction_StartListeningToEvent*    ReturnValue;                                       // 0x28(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GameplayEventRouter.AsyncAction_StartListeningToEvent.GetPayload
struct UAsyncAction_StartListeningToEvent_GetPayload_Params
{
public:
	int32                                        OutPayload;                                        // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DC4[0x3];                                      // Fixing Size Of Struct
};

// 0x0 (0x0 - 0x0)
// Function GameplayEventRouter.AsyncAction_StartListeningToStatefulEvent.StopListeningToStatefulEvent
struct UAsyncAction_StartListeningToStatefulEvent_StopListeningToStatefulEvent_Params
{
public:
};

// 0x30 (0x30 - 0x0)
// Function GameplayEventRouter.AsyncAction_StartListeningToStatefulEvent.StartListeningToStatefulEvent
struct UAsyncAction_StartListeningToStatefulEvent_StartListeningToStatefulEvent_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameplayEventRouterComponent*         Target;                                            // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UScriptStruct*                         EventType;                                         // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               Context;                                           // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EEventBubblingRule                EventBubblingRule;                                 // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DD7[0x7];                                      // Fixing Size After Last Property
	class UAsyncAction_StartListeningToStatefulEvent* ReturnValue;                                       // 0x28(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GameplayEventRouter.AsyncAction_StartListeningToStatefulEvent.GetPayload
struct UAsyncAction_StartListeningToStatefulEvent_GetPayload_Params
{
public:
	int32                                        OutPayload;                                        // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DD9[0x3];                                      // Fixing Size Of Struct
};

// 0x1C (0x1C - 0x0)
// Function GameplayEventRouter.GameplayEventRouterComponent.StopListeningToEvent
struct UGameplayEventRouterComponent_StopListeningToEvent_Params
{
public:
	struct FGameplayEventListenerHandle          HandleToRemove;                                    // 0x0(0x1C)(Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GameplayEventRouter.GameplayEventRouterComponent.K2_BroadcastStatefulEvent
struct UGameplayEventRouterComponent_K2_BroadcastStatefulEvent_Params
{
public:
	int32                                        EventData;                                         // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DEE[0x4];                                      // Fixing Size After Last Property
	class UObject*                               EventContext;                                      // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DEF[0x7];                                      // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function GameplayEventRouter.GameplayEventRouterComponent.K2_BroadcastEvent
struct UGameplayEventRouterComponent_K2_BroadcastEvent_Params
{
public:
	int32                                        EventData;                                         // 0x0(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DF8[0x4];                                      // Fixing Size After Last Property
	class UObject*                               EventContext;                                      // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DF9[0x7];                                      // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function GameplayEventRouter.GameplayEventRouterComponent.HasValidEventState
struct UGameplayEventRouterComponent_HasValidEventState_Params
{
public:
	class UScriptStruct*                         EventType;                                         // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               Context;                                           // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_E05[0x7];                                      // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function GameplayEventRouter.GameplayEventRouterComponent.ClearEventStateByContext
struct UGameplayEventRouterComponent_ClearEventStateByContext_Params
{
public:
	class UScriptStruct*                         EventType;                                         // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               Context;                                           // 0x8(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GameplayEventRouter.GameplayEventRouterComponent.ClearEventState
struct UGameplayEventRouterComponent_ClearEventState_Params
{
public:
	class UScriptStruct*                         EventType;                                         // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function GameplayEventRouter.GameplayEventRouterOwnerInterface.GetEventRouterClass
struct UGameplayEventRouterOwnerInterface_GetEventRouterClass_Params
{
public:
	TSubclassOf<class UGameplayEventRouterComponent> ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function GameplayEventRouter.GameplayEventRouterSubsytem.GetGlobalEventRouter
struct UGameplayEventRouterSubsytem_GetGlobalEventRouter_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameplayEventRouterComponent*         ReturnValue;                                       // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function GameplayEventRouter.GameplayEventRouterSubsytem.GetEventRouter
struct UGameplayEventRouterSubsytem_GetEventRouter_Params
{
public:
	class UClass*                                Scope;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                ContextActor;                                      // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UGameplayEventRouterComponent*         ReturnValue;                                       // 0x10(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
