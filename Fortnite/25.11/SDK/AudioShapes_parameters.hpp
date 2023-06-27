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

// 0x10 (0x10 - 0x0)
// Function AudioShapes.AudioShapeComponent.UpdateAudioShape
struct UAudioShapeComponent_UpdateAudioShape_Params
{
public:
	TArray<class APlayerController*>             InLocalControllers;                                // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function AudioShapes.AudioShapeComponent.Enable
struct UAudioShapeComponent_Enable_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function AudioShapes.AudioShapeComponent.Disable
struct UAudioShapeComponent_Disable_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function AudioShapes.AudioShapePrimitiveComponent.GetIsPlayerInside
struct UAudioShapePrimitiveComponent_GetIsPlayerInside_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AudioShapes.AudioShapePrimitiveComponent.GetInsideAudioComponent
struct UAudioShapePrimitiveComponent_GetInsideAudioComponent_Params
{
public:
	class UAudioComponent*                       ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AudioShapes.AudioShapePrimitiveComponent.GetEdgeAudioComponent
struct UAudioShapePrimitiveComponent_GetEdgeAudioComponent_Params
{
public:
	class UAudioComponent*                       ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function AudioShapes.AudioShapeBoxComponent.SetBoxTransform
struct UAudioShapeBoxComponent_SetBoxTransform_Params
{
public:
	struct FTransform                            InTransform;                                       // 0x0(0x60)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AudioShapes.AudioShapeCylinderComponent.SetRadius
struct UAudioShapeCylinderComponent_SetRadius_Params
{
public:
	float                                        InRadius;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function AudioShapes.AudioShapeCylinderComponent.SetHalfHeight
struct UAudioShapeCylinderComponent_SetHalfHeight_Params
{
public:
	float                                        InHalfHeight;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AudioShapes.AudioShapeLineComponent.SetStartPoint
struct UAudioShapeLineComponent_SetStartPoint_Params
{
public:
	struct FVector                               InStartPoint;                                      // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AudioShapes.AudioShapeLineComponent.SetEndPoint
struct UAudioShapeLineComponent_SetEndPoint_Params
{
public:
	struct FVector                               InEndPoint;                                        // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function AudioShapes.AudioShapeLineListComponent.UpdatePoint
struct UAudioShapeLineListComponent_UpdatePoint_Params
{
public:
	int32                                        InIndex;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3830[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               InPoint;                                           // 0x8(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3831[0x7];                                     // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// Function AudioShapes.AudioShapeLineListComponent.RemovePoint
struct UAudioShapeLineListComponent_RemovePoint_Params
{
public:
	int32                                        InIndex;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3832[0x3];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function AudioShapes.AudioShapeLineListComponent.GetPoints
struct UAudioShapeLineListComponent_GetPoints_Params
{
public:
	TArray<struct FVector>                       OutPoints;                                         // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function AudioShapes.AudioShapeLineListComponent.AddPoint
struct UAudioShapeLineListComponent_AddPoint_Params
{
public:
	struct FVector                               InPoint;                                           // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x18(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3833[0x4];                                     // Fixing Size Of Struct..
};

// 0x4 (0x4 - 0x0)
// Function AudioShapes.AudioShapeSphereComponent.SetRadius
struct UAudioShapeSphereComponent_SetRadius_Params
{
public:
	float                                        InRadius;                                          // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
