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

// 0x1 (0x1 - 0x0)
// Function InteractiveToolsFramework.GizmoBaseComponent.UpdateWorldLocalState
struct UGizmoBaseComponent_UpdateWorldLocalState_Params
{
public:
	bool                                         bWorldIn;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function InteractiveToolsFramework.GizmoBaseComponent.UpdateHoverState
struct UGizmoBaseComponent_UpdateHoverState_Params
{
public:
	bool                                         bHoveringIn;                                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function InteractiveToolsFramework.GizmoTransformSource.SetTransform
struct UGizmoTransformSource_SetTransform_Params
{
public:
	struct FTransform                            NewTransform;                                      // 0x0(0x60)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function InteractiveToolsFramework.GizmoTransformSource.GetTransform
struct UGizmoTransformSource_GetTransform_Params
{
public:
	struct FTransform                            ReturnValue;                                       // 0x0(0x60)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function InteractiveToolsFramework.GizmoAxisSource.HasTangentVectors
struct UGizmoAxisSource_HasTangentVectors_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// Function InteractiveToolsFramework.GizmoAxisSource.GetTangentVectors
struct UGizmoAxisSource_GetTangentVectors_Params
{
public:
	struct FVector                               TangentXOut;                                       // 0x0(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               TangentYOut;                                       // 0x18(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function InteractiveToolsFramework.GizmoAxisSource.GetOrigin
struct UGizmoAxisSource_GetOrigin_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function InteractiveToolsFramework.GizmoAxisSource.GetDirection
struct UGizmoAxisSource_GetDirection_Params
{
public:
	struct FVector                               ReturnValue;                                       // 0x0(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function InteractiveToolsFramework.GizmoClickTarget.UpdateInteractingState
struct UGizmoClickTarget_UpdateInteractingState_Params
{
public:
	bool                                         bInteracting;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function InteractiveToolsFramework.GizmoClickTarget.UpdateHoverState
struct UGizmoClickTarget_UpdateHoverState_Params
{
public:
	bool                                         bHovering;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function InteractiveToolsFramework.GizmoClickMultiTarget.UpdateInteractingState
struct UGizmoClickMultiTarget_UpdateInteractingState_Params
{
public:
	bool                                         bInteracting;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CD7[0x3];                                     // Fixing Size After Last Property
	uint32                                       InPartIdentifier;                                  // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function InteractiveToolsFramework.GizmoClickMultiTarget.UpdateHoverState
struct UGizmoClickMultiTarget_UpdateHoverState_Params
{
public:
	bool                                         bHovering;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CDC[0x3];                                     // Fixing Size After Last Property
	uint32                                       InPartIdentifier;                                  // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function InteractiveToolsFramework.GizmoClickMultiTarget.UpdateHittableState
struct UGizmoClickMultiTarget_UpdateHittableState_Params
{
public:
	bool                                         bHittable;                                         // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CDF[0x3];                                     // Fixing Size After Last Property
	uint32                                       InPartIdentifier;                                  // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function InteractiveToolsFramework.GizmoRenderMultiTarget.UpdateVisibilityState
struct UGizmoRenderMultiTarget_UpdateVisibilityState_Params
{
public:
	bool                                         bVisible;                                          // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3CE6[0x3];                                     // Fixing Size After Last Property
	uint32                                       InPartIdentifier;                                  // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function InteractiveToolsFramework.GizmoStateTarget.EndUpdate
struct UGizmoStateTarget_EndUpdate_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function InteractiveToolsFramework.GizmoStateTarget.BeginUpdate
struct UGizmoStateTarget_BeginUpdate_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function InteractiveToolsFramework.GizmoFloatParameterSource.SetParameter
struct UGizmoFloatParameterSource_SetParameter_Params
{
public:
	float                                        NewValue;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function InteractiveToolsFramework.GizmoFloatParameterSource.GetParameter
struct UGizmoFloatParameterSource_GetParameter_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function InteractiveToolsFramework.GizmoFloatParameterSource.EndModify
struct UGizmoFloatParameterSource_EndModify_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function InteractiveToolsFramework.GizmoFloatParameterSource.BeginModify
struct UGizmoFloatParameterSource_BeginModify_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function InteractiveToolsFramework.GizmoVec2ParameterSource.SetParameter
struct UGizmoVec2ParameterSource_SetParameter_Params
{
public:
	struct FVector2D                             NewValue;                                          // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function InteractiveToolsFramework.GizmoVec2ParameterSource.GetParameter
struct UGizmoVec2ParameterSource_GetParameter_Params
{
public:
	struct FVector2D                             ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function InteractiveToolsFramework.GizmoVec2ParameterSource.EndModify
struct UGizmoVec2ParameterSource_EndModify_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function InteractiveToolsFramework.GizmoVec2ParameterSource.BeginModify
struct UGizmoVec2ParameterSource_BeginModify_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
