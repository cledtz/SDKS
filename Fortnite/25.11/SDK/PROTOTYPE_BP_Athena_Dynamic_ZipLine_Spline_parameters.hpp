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

// 0x9 (0x9 - 0x0)
// Function PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline.PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C.RemovePlayerFromZipliningArray
struct APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_RemovePlayerFromZipliningArray_Params
{
public:
	class AFortPlayerPawn*                       Item;                                              // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_RemoveItem_ReturnValue;             // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC (0xC - 0x0)
// Function PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline.PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C.AddPlayerToZipliningArray
struct APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_AddPlayerToZipliningArray_Params
{
public:
	class AFortPlayerPawn*                       NewItem;                                           // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_AddUnique_ReturnValue;              // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x34 (0x34 - 0x0)
// Function PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline.PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C.SetCableTilingBySplineLength
struct APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetCableTilingBySplineLength_Params
{
public:
	class UMeshComponent*                        Target;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetSplineLength_ReturnValue;              // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4256[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FTrunc_ReturnValue;                       // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4257[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_A_ImplicitCast;       // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast; // 0x30(0x4)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x22 (0x22 - 0x0)
// Function PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline.PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C.BlueprintCanInteract
struct APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_BlueprintCanInteract_Params
{
public:
	class AFortPawn*                             InteractingPawn;                                   // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EInteractionBeingAttempted        InteractionBeingAttempted;                         // 0x8(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETInteractionType                 InteractionType;                                   // 0x9(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0xA(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4258[0x5];                                     // Fixing Size After Last Property..
	FInterfaceProperty_                          CallFunc_HasAnyMatchingGameplayTags_self_CastInput; // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAnyMatchingGameplayTags_ReturnValue;   // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE0 (0xE0 - 0x0)
// Function PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline.PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C.GetAutoHorizAndVertVectors
struct APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_GetAutoHorizAndVertVectors_Params
{
public:
	struct FVector                               HighVector;                                        // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               LowVector;                                         // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               VertVec;                                           // 0x30(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               HorizVec;                                          // 0x48(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0x60(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_X;                            // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Y;                            // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Z;                            // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x90(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0xB0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue_1;                 // 0xC8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19C (0x19C - 0x0)
// Function PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline.PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C.Calc Auto Location At Alpha
struct APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha_Params
{
public:
	double                                       InAlpha;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DrawDebug;                                         // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4259[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               PointLocation;                                     // 0x10(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       SplinePointID;                                     // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_425A[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_GetAutoHorizAndVertVectors_VertVec;       // 0x38(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetAutoHorizAndVertVectors_HorizVec;      // 0x50(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x68(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue_1;       // 0x80(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_VLerp_ReturnValue;                        // 0x98(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0xB1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_425B[0x6];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0xB8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue_1;      // 0xD0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_VLerp_ReturnValue_1;                      // 0xE8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue_2;      // 0x100(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_VLerp_ReturnValue_2;                      // 0x118(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_VLerp_ReturnValue_3;                      // 0x130(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Lerp_ReturnValue;                         // 0x148(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x150(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_FClamp_ReturnValue;                       // 0x168(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_VLerp_ReturnValue_4;                      // 0x170(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_VLerp_Alpha_ImplicitCast;                 // 0x188(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_VLerp_Alpha_ImplicitCast_1;               // 0x18C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_VLerp_Alpha_ImplicitCast_2;               // 0x190(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_VLerp_Alpha_ImplicitCast_3;               // 0x194(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_VLerp_Alpha_ImplicitCast_4;               // 0x198(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1D0 (0x1D0 - 0x0)
// Function PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline.PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C.SetSplinePositionAndTangent
struct APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_SetSplinePositionAndTangent_Params
{
public:
	bool                                         SetPosition;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SetTangent;                                        // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_425C[0x2];                                     // Fixing Size After Last Property..
	int32                                        ID;                                                // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       OneDivNumPoints;                                   // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SplinePointIDToSet;                                // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_425D[0x4];                                     // Fixing Size After Last Property..
	double                                       AlphaForLocation;                                  // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFirstPoint;                                      // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_425E[0x3];                                     // Fixing Size After Last Property..
	int32                                        SplinePointID;                                     // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       PrevAlpha;                                         // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Alpha;                                             // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_425F[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0x40(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x58(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4260[0x6];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Lerp_ReturnValue;                         // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_LastIndex_ReturnValue;              // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4261[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_FClamp_ReturnValue;                       // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USplineMeshComponent*                  CallFunc_Array_Get_Item;                           // 0x90(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4262[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_Calc_Auto_Location_At_Alpha_PointLocation; // 0xA0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0xB8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetAutoHorizAndVertVectors_VertVec;       // 0xD0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetAutoHorizAndVertVectors_HorizVec;      // 0xE8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue_1;       // 0x100(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue_2;       // 0x118(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_VLerp_ReturnValue;                        // 0x130(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue_3;       // 0x148(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_VLerp_ReturnValue_1;                      // 0x160(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x178(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4263[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x17C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x180(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Conv_IntToDouble_ReturnValue_1;           // 0x188(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4264[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_GetNumberOfSplinePoints_ReturnValue;      // 0x194(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x198(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4265[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x19C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x1A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4266[0x7];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Conv_IntToDouble_ReturnValue_2;           // 0x1A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x1B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue_1;        // 0x1B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue_2;        // 0x1C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_VLerp_Alpha_ImplicitCast;                 // 0x1C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_VLerp_Alpha_ImplicitCast_1;               // 0x1CC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xAA (0xAA - 0x0)
// Function PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline.PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C.CalculatePositionOfPoles
struct APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_CalculatePositionOfPoles_Params
{
public:
	int32                                        CallFunc_GetNumberOfSplinePoints_ReturnValue;      // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetLocationAndTangentAtSplinePoint_Location; // 0x8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetLocationAndTangentAtSplinePoint_Tangent; // 0x20(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetLocationAndTangentAtSplinePoint_Location_1; // 0x38(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetLocationAndTangentAtSplinePoint_Tangent_1; // 0x50(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       CallFunc_K2_GetRootComponent_ReturnValue;          // 0x68(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       CallFunc_K2_GetRootComponent_ReturnValue_1;        // 0x70(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetSocketLocation_ReturnValue;            // 0x78(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetSocketLocation_ReturnValue_1;          // 0x90(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xA9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE8 (0xE8 - 0x0)
// Function PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline.PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C.AutoSmoothTanget
struct APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_AutoSmoothTanget_Params
{
public:
	struct FVector                               Tangent;                                           // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               PointA;                                            // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               PointB;                                            // 0x30(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               SmoothedTangent;                                   // 0x48(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4267[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0x68(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Normal_ReturnValue;                       // 0x80(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_VSize_ReturnValue;                        // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0xA0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue_1;       // 0xB8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               K2Node_Select_Default;                             // 0xD0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x80 (0x80 - 0x0)
// Function PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline.PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C.AddSplineMeshSegment
struct APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_AddSplineMeshSegment_Params
{
public:
	class USplineMeshComponent*                  SplineMeshSegment;                                 // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4268[0x8];                                     // Fixing Size After Last Property..
	struct FTransform                            Temp_struct_Variable;                              // 0x10(0x60)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USplineMeshComponent*                  CallFunc_AddComponent_ReturnValue;                 // 0x70(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetStaticMesh_ReturnValue;                // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4269[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1B0 (0x1B0 - 0x0)
// Function PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline.PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C.UserConstructionScript
struct APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_UserConstructionScript_Params
{
public:
	bool                                         NewLocalVar_0;                                     // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_426A[0x3];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Variable;                                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0xD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_426B[0x2];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_426C[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetNumberOfSplinePoints_ReturnValue;      // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_426D[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_GetNumberOfSplinePoints_ReturnValue_1;    // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x3C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x3D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_426E[0x2];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_GetNumberOfSplinePoints_ReturnValue_2;    // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_2;            // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_X;                            // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Y;                            // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Z;                            // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_X_1;                          // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Y_1;                          // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Z_1;                          // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_426F[0x3];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Variable_2;                               // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       CallFunc_K2_GetRootComponent_ReturnValue;          // 0x80(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4270[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_GetSocketLocation_ReturnValue;            // 0x90(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_3;                 // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4271[0x4];                                     // Fixing Size After Last Property..
	class USceneComponent*                       CallFunc_K2_GetRootComponent_ReturnValue_1;        // 0xB0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4272[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_GetSocketLocation_ReturnValue_1;          // 0xC0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetLocationAndTangentAtSplinePoint_Location; // 0xD8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetLocationAndTangentAtSplinePoint_Tangent; // 0xF0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetLocationAndTangentAtSplinePoint_Location_1; // 0x108(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetLocationAndTangentAtSplinePoint_Tangent_1; // 0x120(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USplineMeshComponent*                  CallFunc_AddSplineMeshSegment_SplineMeshSegment;   // 0x138(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_AutoSmoothTanget_SmoothedTangent;         // 0x140(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetNumMaterials_ReturnValue;              // 0x158(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4273[0x4];                                     // Fixing Size After Last Property..
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x160(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_3;            // 0x168(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x16C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4274[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x170(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4275[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_AutoSmoothTanget_SmoothedTangent_1;       // 0x178(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetNumberOfSplinePoints_ReturnValue_3;    // 0x190(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_4;            // 0x194(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue_2;           // 0x198(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_3;          // 0x199(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4276[0x6];                                     // Fixing Size After Last Property..
	double                                       CallFunc_SelectFloat_ReturnValue_1;                // 0x1A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetScalarParameterValue_Value_ImplicitCast; // 0x1A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetScalarParameterValue_Value_ImplicitCast_1; // 0x1AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline.PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C.ReceiveBeginPlay
struct APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_ReceiveBeginPlay_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline.PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C.WaitThenSetDynamicSpline
struct APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_WaitThenSetDynamicSpline_Params
{
public:
};

// 0x148 (0x148 - 0x0)
// Function PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline.PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C.OnDeathServer
struct APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_OnDeathServer_Params
{
public:
	float                                        Damage;                                            // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4277[0x4];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 DamageTags;                                        // 0x8(0x20)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	struct FVector                               Momentum;                                          // 0x28(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            HitInfo;                                           // 0x40(0xE0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AController*                           InstigatedBy;                                      // 0x120(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                DamageCauser;                                      // 0x128(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle          EffectContext;                                     // 0x130(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x10 (0x10 - 0x0)
// Function PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline.PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C.OnZipliningStarted
struct APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_OnZipliningStarted_Params
{
public:
	class AFortPlayerPawn*                       InteractingPawn;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   InteractComponent;                                 // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x14 (0x14 - 0x0)
// Function PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline.PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C.OnZipliningStopped
struct APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_OnZipliningStopped_Params
{
public:
	class AFortPlayerPawn*                       InteractingPawn;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   InteractComponent;                                 // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                        ZiplineUsageDuration;                              // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2DC (0x2DC - 0x0)
// Function PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline.PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C.ExecuteUbergraph_PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline
struct APROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_C_ExecuteUbergraph_PROTOTYPE_BP_Athena_Dynamic_ZipLine_Spline_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4278[0x4];                                     // Fixing Size After Last Property..
	class AFortPlayerPawn*                       K2Node_Event_InteractingPawn;                      // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   K2Node_Event_InteractComponent;                    // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_ZiplineUsageDuration;                 // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_4279[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetLocationAtSplinePoint_ReturnValue;     // 0x28(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetNumberOfSplinePoints_ReturnValue;      // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_427A[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_GetLocationAtSplinePoint_ReturnValue_1;   // 0x50(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_427B[0x7];                                     // Fixing Size After Last Property..
	struct FTransform                            CallFunc_GetTransform_ReturnValue;                 // 0x70(0x60)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CallFunc_InvertTransform_ReturnValue;              // 0xD0(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetNumberOfSplinePoints_ReturnValue_1;    // 0x130(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x134(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_LastIndex_ReturnValue;              // 0x138(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_427C[0x4];                                     // Fixing Size After Last Property..
	class USplineMeshComponent*                  CallFunc_Array_Get_Item;                           // 0x140(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x148(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_427D[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_TransformLocation_ReturnValue;            // 0x150(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x168(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_Damage;                               // 0x16C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 K2Node_Event_DamageTags;                           // 0x170(0x20)(ConstParm)
	struct FVector                               K2Node_Event_Momentum;                             // 0x190(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            K2Node_Event_HitInfo;                              // 0x1A8(0xE0)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AController*                           K2Node_Event_InstigatedBy;                         // 0x288(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_Event_DamageCauser;                         // 0x290(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayEffectContextHandle          K2Node_Event_EffectContext;                        // 0x298(0x18)()
	class UMaterialInstanceDynamic*              CallFunc_Array_Get_Item_1;                         // 0x2B0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x2B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_427E[0x4];                                     // Fixing Size After Last Property..
	class AFortPlayerPawn*                       K2Node_Event_InteractingPawn_1;                    // 0x2C0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   K2Node_Event_InteractComponent_1;                  // 0x2C8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x2D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_427F[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x2D4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetScalarParameterValue_Value_ImplicitCast; // 0x2D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
