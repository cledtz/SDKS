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

// 0x58 (0x58 - 0x0)
// Function AttachableWheelsRuntime.AttachableWheel.OnRep_AttachData
struct UAttachableWheel_OnRep_AttachData_Params
{
public:
	struct FAttachableWheelAttachData            AttachDataPrev;                                    // 0x0(0x58)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AttachableWheelsRuntime.AttachableWheel.OnPhysicsStateChanged
struct UAttachableWheel_OnPhysicsStateChanged_Params
{
public:
	class UPrimitiveComponent*                   PrimitiveComponent;                                // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EComponentPhysicsStateChange      StateChange;                                       // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8301[0x7];                                     // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// Function AttachableWheelsRuntime.AttachableWheel.OnDetached
struct UAttachableWheel_OnDetached_Params
{
public:
	class UPrimitiveComponent*                   DetachedComponent;                                 // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AttachableWheelsRuntime.AttachableWheel.OnAttached
struct UAttachableWheel_OnAttached_Params
{
public:
	class UPrimitiveComponent*                   AttachedComponent;                                 // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function AttachableWheelsRuntime.AttachableWheel.GetWorldSpaceAttachData
struct UAttachableWheel_GetWorldSpaceAttachData_Params
{
public:
	struct FAttachableWheelAttachData            OutAttachData;                                     // 0x0(0x58)(Parm, OutParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   PrimitiveComponent;                                // 0x58(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BodyName;                                          // 0x60(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x64(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8302[0x3];                                     // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// Function AttachableWheelsRuntime.AttachableWheel.GetAttachedComponent
struct UAttachableWheel_GetAttachedComponent_Params
{
public:
	class UPrimitiveComponent*                   ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function AttachableWheelsRuntime.AttachableWheel.DrawDebug
struct UAttachableWheel_DrawDebug_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function AttachableWheelsRuntime.AttachableWheel.DetachFrom
struct UAttachableWheel_DetachFrom_Params
{
public:
	class UPrimitiveComponent*                   InComponent;                                       // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8303[0x7];                                     // Fixing Size Of Struct..
};

// 0x0 (0x0 - 0x0)
// Function AttachableWheelsRuntime.AttachableWheel.Detach
struct UAttachableWheel_Detach_Params
{
public:
};

// 0x40 (0x40 - 0x0)
// Function AttachableWheelsRuntime.AttachableWheel.AttachTo
struct UAttachableWheel_AttachTo_Params
{
public:
	class UPrimitiveComponent*                   InComponent;                                       // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               WorldLocation;                                     // 0x8(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               AxleDirection;                                     // 0x20(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x38(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8304[0x7];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function AttachableWheelsRuntime.AttachableWheel.AttachInPlace
struct UAttachableWheel_AttachInPlace_Params
{
public:
	class UPrimitiveComponent*                   InComponent;                                       // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8305[0x7];                                     // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// Function AttachableWheelsRuntime.AttachableWheelsComponent.OnWheelDetached
struct UAttachableWheelsComponent_OnWheelDetached_Params
{
public:
	class UAttachableWheel*                      AttachedWheel;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AttachableWheelsRuntime.AttachableWheelsComponent.OnWheelAttached
struct UAttachableWheelsComponent_OnWheelAttached_Params
{
public:
	class UAttachableWheel*                      AttachedWheel;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AttachableWheelsRuntime.AttachableWheelsComponent.HandleWheelDetached_Internal
struct UAttachableWheelsComponent_HandleWheelDetached_Internal_Params
{
public:
	class UAttachableWheel*                      AttachedWheel;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8307[0x7];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function AttachableWheelsRuntime.AttachableWheelsComponent.HandleWheelAttached_Internal
struct UAttachableWheelsComponent_HandleWheelAttached_Internal_Params
{
public:
	class UAttachableWheel*                      AttachedWheel;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8308[0x7];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function AttachableWheelsRuntime.AttachableWheelsComponent.GetAttachedWheels
struct UAttachableWheelsComponent_GetAttachedWheels_Params
{
public:
	TArray<class UAttachableWheel*>              ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function AttachableWheelsRuntime.AttachableWheelsComponent.GetAttachedWheelClosestOnAxis
struct UAttachableWheelsComponent_GetAttachedWheelClosestOnAxis_Params
{
public:
	struct FVector                               Point;                                             // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OutClosetDistanceToAxis;                           // 0x18(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8309[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               OutClosestPointOnAxis;                             // 0x20(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               OutClosestAxis;                                    // 0x38(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAttachableWheel*                      ReturnValue;                                       // 0x50(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function AttachableWheelsRuntime.AttachableWheelsComponent.DrawDebug
struct UAttachableWheelsComponent_DrawDebug_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function AttachableWheelsRuntime.AttachableWheelsComponent.DetachAllWheels
struct UAttachableWheelsComponent_DetachAllWheels_Params
{
public:
	int32                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
