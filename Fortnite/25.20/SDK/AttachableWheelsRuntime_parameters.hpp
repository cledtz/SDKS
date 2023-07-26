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
struct AAttachableWheel_OnRep_AttachData_Params
{
public:
	struct FAttachableWheelAttachData            AttachDataPrev;                                    // 0x0(0x58)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AttachableWheelsRuntime.AttachableWheel.OnPhysicsStateChanged
struct AAttachableWheel_OnPhysicsStateChanged_Params
{
public:
	class UPrimitiveComponent*                   PrimitiveComponent;                                // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EComponentPhysicsStateChange      StateChange;                                       // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_83E7[0x7];                                     // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// Function AttachableWheelsRuntime.AttachableWheel.OnDetached
struct AAttachableWheel_OnDetached_Params
{
public:
	class UPrimitiveComponent*                   DetachedComponent;                                 // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AttachableWheelsRuntime.AttachableWheel.OnAttached
struct AAttachableWheel_OnAttached_Params
{
public:
	class UPrimitiveComponent*                   AttachedComponent;                                 // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// Function AttachableWheelsRuntime.AttachableWheel.GetWorldSpaceAttachData
struct AAttachableWheel_GetWorldSpaceAttachData_Params
{
public:
	struct FAttachableWheelAttachData            OutAttachData;                                     // 0x0(0x58)(Parm, OutParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	class UPrimitiveComponent*                   PrimitiveComponent;                                // 0x58(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BodyName;                                          // 0x60(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x64(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_83E8[0x3];                                     // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// Function AttachableWheelsRuntime.AttachableWheel.GetAttachedComponent
struct AAttachableWheel_GetAttachedComponent_Params
{
public:
	class UPrimitiveComponent*                   ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function AttachableWheelsRuntime.AttachableWheel.DrawDebug
struct AAttachableWheel_DrawDebug_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function AttachableWheelsRuntime.AttachableWheel.DetachFrom
struct AAttachableWheel_DetachFrom_Params
{
public:
	class UPrimitiveComponent*                   InComponent;                                       // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_83E9[0x7];                                     // Fixing Size Of Struct..
};

// 0x0 (0x0 - 0x0)
// Function AttachableWheelsRuntime.AttachableWheel.Detach
struct AAttachableWheel_Detach_Params
{
public:
};

// 0x40 (0x40 - 0x0)
// Function AttachableWheelsRuntime.AttachableWheel.AttachTo
struct AAttachableWheel_AttachTo_Params
{
public:
	class UPrimitiveComponent*                   InComponent;                                       // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               WorldLocation;                                     // 0x8(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               AxleDirection;                                     // 0x20(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x38(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_83EA[0x7];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function AttachableWheelsRuntime.AttachableWheel.AttachInPlace
struct AAttachableWheel_AttachInPlace_Params
{
public:
	class UPrimitiveComponent*                   InComponent;                                       // 0x0(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_83EB[0x7];                                     // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// Function AttachableWheelsRuntime.AttachableWheelsComponent.OnWheelDetached
struct UAttachableWheelsComponent_OnWheelDetached_Params
{
public:
	class AAttachableWheel*                      AttachedWheel;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AttachableWheelsRuntime.AttachableWheelsComponent.OnWheelAttached
struct UAttachableWheelsComponent_OnWheelAttached_Params
{
public:
	class AAttachableWheel*                      AttachedWheel;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AttachableWheelsRuntime.AttachableWheelsComponent.HandleWheelDetached_Internal
struct UAttachableWheelsComponent_HandleWheelDetached_Internal_Params
{
public:
	class AAttachableWheel*                      AttachedWheel;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_83ED[0x7];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function AttachableWheelsRuntime.AttachableWheelsComponent.HandleWheelAttached_Internal
struct UAttachableWheelsComponent_HandleWheelAttached_Internal_Params
{
public:
	class AAttachableWheel*                      AttachedWheel;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_83EE[0x7];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function AttachableWheelsRuntime.AttachableWheelsComponent.GetAttachedWheels
struct UAttachableWheelsComponent_GetAttachedWheels_Params
{
public:
	TArray<class AAttachableWheel*>              ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// Function AttachableWheelsRuntime.AttachableWheelsComponent.GetAttachedWheelClosestOnAxis
struct UAttachableWheelsComponent_GetAttachedWheelClosestOnAxis_Params
{
public:
	struct FVector                               Point;                                             // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OutClosetDistanceToAxis;                           // 0x18(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_83EF[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               OutClosestPointOnAxis;                             // 0x20(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               OutClosestAxis;                                    // 0x38(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AAttachableWheel*                      ReturnValue;                                       // 0x50(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
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
