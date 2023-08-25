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

// 0x30 (0x30 - 0x0)
// Function SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.SetValueAsSOClaimHandle
struct USmartObjectBlueprintFunctionLibrary_SetValueAsSOClaimHandle_Params
{
public:
	class UBlackboardComponent*                  BlackboardComponent;                               // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  KeyName;                                           // 0x8(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14B7[0x4];                                     // Fixing Size After Last Property 
	struct FSmartObjectClaimHandle               Value;                                             // 0x10(0x20)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.SetSmartObjectEnabled
struct USmartObjectBlueprintFunctionLibrary_SetSmartObjectEnabled_Params
{
public:
	class UActor*                                SmartObjectActor;                                  // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14C5[0x6];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.SetMultipleSmartObjectsEnabled
struct USmartObjectBlueprintFunctionLibrary_SetMultipleSmartObjectsEnabled_Params
{
public:
	TArray<class UActor*>                        SmartObjectActors;                                 // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x10(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x11(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_14D4[0x6];                                     // Fixing Size Of Struct
};

// 0x50 (0x50 - 0x0)
// Function SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.SetBlackboardValueAsSOClaimHandle
struct USmartObjectBlueprintFunctionLibrary_SetBlackboardValueAsSOClaimHandle_Params
{
public:
	class UBTNode*                               NodeOwner;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                Key;                                               // 0x8(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FSmartObjectClaimHandle               Value;                                             // 0x30(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.RemoveSmartObject
struct USmartObjectBlueprintFunctionLibrary_RemoveSmartObject_Params
{
public:
	class UActor*                                SmartObjectActor;                                  // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1503[0x7];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.RemoveMultipleSmartObjects
struct USmartObjectBlueprintFunctionLibrary_RemoveMultipleSmartObjects_Params
{
public:
	TArray<class UActor*>                        SmartObjectActors;                                 // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_150B[0x7];                                     // Fixing Size Of Struct
};

// 0x38 (0x38 - 0x0)
// Function SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.MarkSmartObjectSlotAsOccupied
struct USmartObjectBlueprintFunctionLibrary_MarkSmartObjectSlotAsOccupied_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSmartObjectClaimHandle               ClaimHandle;                                       // 0x8(0x20)(ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
	TSubclassOf<class USmartObjectBehaviorDefinition> DefinitionClass;                                   // 0x28(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USmartObjectBehaviorDefinition*        ReturnValue;                                       // 0x30(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.MarkSmartObjectSlotAsFree
struct USmartObjectBlueprintFunctionLibrary_MarkSmartObjectSlotAsFree_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSmartObjectClaimHandle               ClaimHandle;                                       // 0x8(0x20)(ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x28(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1518[0x7];                                     // Fixing Size Of Struct
};

// 0x40 (0x40 - 0x0)
// Function SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.MarkSmartObjectSlotAsClaimed
struct USmartObjectBlueprintFunctionLibrary_MarkSmartObjectSlotAsClaimed_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSmartObjectSlotHandle                SlotHandle;                                        // 0x8(0x10)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                UserActor;                                         // 0x18(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSmartObjectClaimHandle               ReturnValue;                                       // 0x20(0x20)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.IsValidSmartObjectClaimHandle
struct USmartObjectBlueprintFunctionLibrary_IsValidSmartObjectClaimHandle_Params
{
public:
	struct FSmartObjectClaimHandle               Handle;                                            // 0x0(0x20)(ConstParm, Parm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1520[0x7];                                     // Fixing Size Of Struct
};

// 0x30 (0x30 - 0x0)
// Function SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.GetValueAsSOClaimHandle
struct USmartObjectBlueprintFunctionLibrary_GetValueAsSOClaimHandle_Params
{
public:
	class UBlackboardComponent*                  BlackboardComponent;                               // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  KeyName;                                           // 0x8(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_152A[0x4];                                     // Fixing Size After Last Property 
	struct FSmartObjectClaimHandle               ReturnValue;                                       // 0x10(0x20)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// Function SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.GetBlackboardValueAsSOClaimHandle
struct USmartObjectBlueprintFunctionLibrary_GetBlackboardValueAsSOClaimHandle_Params
{
public:
	class UBTNode*                               NodeOwner;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FBlackboardKeySelector                Key;                                               // 0x8(0x28)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	struct FSmartObjectClaimHandle               ReturnValue;                                       // 0x30(0x20)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.AddSmartObject
struct USmartObjectBlueprintFunctionLibrary_AddSmartObject_Params
{
public:
	class UActor*                                SmartObjectActor;                                  // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1532[0x7];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.AddOrRemoveSmartObject
struct USmartObjectBlueprintFunctionLibrary_AddOrRemoveSmartObject_Params
{
public:
	class UActor*                                SmartObject;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1537[0x6];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.AddOrRemoveMultipleSmartObjects
struct USmartObjectBlueprintFunctionLibrary_AddOrRemoveMultipleSmartObjects_Params
{
public:
	TArray<class UActor*>                        SmartObjectActors;                                 // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bAdd;                                              // 0x10(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x11(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1541[0x6];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function SmartObjectsModule.SmartObjectBlueprintFunctionLibrary.AddMultipleSmartObjects
struct USmartObjectBlueprintFunctionLibrary_AddMultipleSmartObjects_Params
{
public:
	TArray<class UActor*>                        SmartObjectActors;                                 // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1544[0x7];                                     // Fixing Size Of Struct
};

// 0x38 (0x38 - 0x0)
// Function SmartObjectsModule.SmartObjectComponent.ReceiveOnEvent
struct USmartObjectComponent_ReceiveOnEvent_Params
{
public:
	struct FSmartObjectEventData                 EventData;                                         // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class UActor*                                Interactor;                                        // 0x30(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function SmartObjectsModule.SmartObjectSubsystem.Use
struct USmartObjectSubsystem_Use_Params
{
public:
	struct FSmartObjectClaimHandle               ClaimHandle;                                       // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	TSubclassOf<class USmartObjectBehaviorDefinition> DefinitionClass;                                   // 0x20(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USmartObjectBehaviorDefinition*        ReturnValue;                                       // 0x28(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SmartObjectsModule.SmartObjectSubsystem.SetSlotEnabled
struct USmartObjectSubsystem_SetSlotEnabled_Params
{
public:
	struct FSmartObjectSlotHandle                SlotHandle;                                        // 0x0(0x10)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x10(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x11(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1579[0x6];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function SmartObjectsModule.SmartObjectSubsystem.SetEnabled
struct USmartObjectSubsystem_SetEnabled_Params
{
public:
	struct FSmartObjectHandle                    Handle;                                            // 0x0(0x8)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x8(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x9(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1582[0x6];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function SmartObjectsModule.SmartObjectSubsystem.RemoveTagFromSlot
struct USmartObjectSubsystem_RemoveTagFromSlot_Params
{
public:
	struct FSmartObjectSlotHandle                SlotHandle;                                        // 0x0(0x10)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          Tag;                                               // 0x10(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x14(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_158A[0x3];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function SmartObjectsModule.SmartObjectSubsystem.RemoveTagFromInstance
struct USmartObjectSubsystem_RemoveTagFromInstance_Params
{
public:
	struct FSmartObjectHandle                    Handle;                                            // 0x0(0x8)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          Tag;                                               // 0x8(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_158D[0x4];                                     // Fixing Size Of Struct
};

// 0x28 (0x28 - 0x0)
// Function SmartObjectsModule.SmartObjectSubsystem.Release
struct USmartObjectSubsystem_Release_Params
{
public:
	struct FSmartObjectClaimHandle               ClaimHandle;                                       // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_158E[0x7];                                     // Fixing Size Of Struct
};

// 0x20 (0x20 - 0x0)
// Function SmartObjectsModule.SmartObjectSubsystem.GetSmartObjectComponentByRequestResult
struct USmartObjectSubsystem_GetSmartObjectComponentByRequestResult_Params
{
public:
	struct FSmartObjectRequestResult             Result;                                            // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class USmartObjectComponent*                 ReturnValue;                                       // 0x18(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function SmartObjectsModule.SmartObjectSubsystem.GetSmartObjectComponent
struct USmartObjectSubsystem_GetSmartObjectComponent_Params
{
public:
	struct FSmartObjectClaimHandle               ClaimHandle;                                       // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class USmartObjectComponent*                 ReturnValue;                                       // 0x20(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// Function SmartObjectsModule.SmartObjectSubsystem.GetSlotTransformFromRequestResult
struct USmartObjectSubsystem_GetSlotTransformFromRequestResult_Params
{
public:
	struct FSmartObjectRequestResult             RequestResult;                                     // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_159F[0x8];                                     // Fixing Size After Last Property 
	struct FTransform                            OutSlotTransform;                                  // 0x20(0x60)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x80(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15A1[0xF];                                     // Fixing Size Of Struct
};

// 0x90 (0x90 - 0x0)
// Function SmartObjectsModule.SmartObjectSubsystem.GetSlotTransform
struct USmartObjectSubsystem_GetSlotTransform_Params
{
public:
	struct FSmartObjectClaimHandle               ClaimHandle;                                       // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FTransform                            OutSlotTransform;                                  // 0x20(0x60)(Parm, OutParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x80(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15A3[0xF];                                     // Fixing Size Of Struct
};

// 0x30 (0x30 - 0x0)
// Function SmartObjectsModule.SmartObjectSubsystem.GetSlotTags
struct USmartObjectSubsystem_GetSlotTags_Params
{
public:
	struct FSmartObjectSlotHandle                SlotHandle;                                        // 0x0(0x10)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 ReturnValue;                                       // 0x10(0x20)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function SmartObjectsModule.SmartObjectSubsystem.GetSlotLocation
struct USmartObjectSubsystem_GetSlotLocation_Params
{
public:
	struct FSmartObjectClaimHandle               ClaimHandle;                                       // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               OutSlotLocation;                                   // 0x20(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x38(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15AA[0x7];                                     // Fixing Size Of Struct
};

// 0x28 (0x28 - 0x0)
// Function SmartObjectsModule.SmartObjectSubsystem.GetInstanceTags
struct USmartObjectSubsystem_GetInstanceTags_Params
{
public:
	struct FSmartObjectHandle                    Handle;                                            // 0x0(0x8)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 ReturnValue;                                       // 0x8(0x20)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function SmartObjectsModule.SmartObjectSubsystem.GetBehaviorDefinitionByRequestResult
struct USmartObjectSubsystem_GetBehaviorDefinitionByRequestResult_Params
{
public:
	struct FSmartObjectRequestResult             RequestResult;                                     // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	TSubclassOf<class USmartObjectBehaviorDefinition> DefinitionClass;                                   // 0x18(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USmartObjectBehaviorDefinition*        ReturnValue;                                       // 0x20(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function SmartObjectsModule.SmartObjectSubsystem.GetBehaviorDefinition
struct USmartObjectSubsystem_GetBehaviorDefinition_Params
{
public:
	struct FSmartObjectClaimHandle               ClaimHandle;                                       // 0x0(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	TSubclassOf<class USmartObjectBehaviorDefinition> DefinitionClass;                                   // 0x20(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USmartObjectBehaviorDefinition*        ReturnValue;                                       // 0x28(0x8)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x150 (0x150 - 0x0)
// Function SmartObjectsModule.SmartObjectSubsystem.FindSmartObjects_BP
struct USmartObjectSubsystem_FindSmartObjects_BP_Params
{
public:
	struct FSmartObjectRequest                   Request;                                           // 0x0(0x130)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FSmartObjectRequestResult>     OutResults;                                        // 0x130(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	class UActor*                                UserActor;                                         // 0x140(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x148(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15B6[0x7];                                     // Fixing Size Of Struct
};

// 0x150 (0x150 - 0x0)
// Function SmartObjectsModule.SmartObjectSubsystem.FindSmartObjects
struct USmartObjectSubsystem_FindSmartObjects_Params
{
public:
	struct FSmartObjectRequest                   Request;                                           // 0x0(0x130)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FSmartObjectRequestResult>     OutResults;                                        // 0x130(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	class UActor*                                UserActor;                                         // 0x140(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x148(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15B9[0x7];                                     // Fixing Size Of Struct
};

// 0x150 (0x150 - 0x0)
// Function SmartObjectsModule.SmartObjectSubsystem.FindSmartObject
struct USmartObjectSubsystem_FindSmartObject_Params
{
public:
	struct FSmartObjectRequest                   Request;                                           // 0x0(0x130)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	class UActor*                                UserActor;                                         // 0x130(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSmartObjectRequestResult             ReturnValue;                                       // 0x138(0x18)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function SmartObjectsModule.SmartObjectSubsystem.Claim
struct USmartObjectSubsystem_Claim_Params
{
public:
	struct FSmartObjectRequestResult             RequestResult;                                     // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	class UActor*                                UserActor;                                         // 0x18(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSmartObjectClaimHandle               ReturnValue;                                       // 0x20(0x20)(Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SmartObjectsModule.SmartObjectSubsystem.AddTagToSlot
struct USmartObjectSubsystem_AddTagToSlot_Params
{
public:
	struct FSmartObjectSlotHandle                SlotHandle;                                        // 0x0(0x10)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          Tag;                                               // 0x10(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15BF[0x4];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function SmartObjectsModule.SmartObjectSubsystem.AddTagToInstance
struct USmartObjectSubsystem_AddTagToInstance_Params
{
public:
	struct FSmartObjectHandle                    Handle;                                            // 0x0(0x8)(ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          Tag;                                               // 0x8(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15C2[0x4];                                     // Fixing Size Of Struct
};

// 0x0 (0x0 - 0x0)
// Function SmartObjectsModule.SmartObjectTestingActor.RunTests
struct USmartObjectTestingActor_RunTests_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function SmartObjectsModule.SmartObjectTestingActor.ResetTests
struct USmartObjectTestingActor_ResetTests_Params
{
public:
};

}
}


