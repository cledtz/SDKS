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

// 0x200 (0x200 - 0x0)
// Function BP_Athena_Environmental_ZipLine_Spline.BP_Athena_Environmental_ZipLine_Spline_C.SetInteractionCollision
struct ABP_Athena_Environmental_ZipLine_Spline_C_SetInteractionCollision_Params
{
public:
	struct FVector                               CallFunc_GetLocationAtSplinePoint_ReturnValue;     // 0x0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetNumberOfSplinePoints_ReturnValue;      // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_93FB[0x4];                                     // Fixing Size After Last Property..
	struct FHitResult                            CallFunc_K2_SetWorldLocation_SweepHitResult;       // 0x20(0xE0)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_93FC[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_GetLocationAtSplinePoint_ReturnValue_1;   // 0x108(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_K2_SetWorldLocation_SweepHitResult_1;     // 0x120(0xE0)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// 0x34 (0x34 - 0x0)
// Function BP_Athena_Environmental_ZipLine_Spline.BP_Athena_Environmental_ZipLine_Spline_C.SetCableTilingBySplineLength
struct ABP_Athena_Environmental_ZipLine_Spline_C_SetCableTilingBySplineLength_Params
{
public:
	class UMeshComponent*                        Target;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetSplineLength_ReturnValue;              // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_93FD[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FTrunc_ReturnValue;                       // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_93FE[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_A_ImplicitCast;       // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast; // 0x30(0x4)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x22 (0x22 - 0x0)
// Function BP_Athena_Environmental_ZipLine_Spline.BP_Athena_Environmental_ZipLine_Spline_C.BlueprintCanInteract
struct ABP_Athena_Environmental_ZipLine_Spline_C_BlueprintCanInteract_Params
{
public:
	class AFortPawn*                             InteractingPawn;                                   // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EInteractionBeingAttempted        InteractionBeingAttempted;                         // 0x8(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETInteractionType                 InteractionType;                                   // 0x9(0x1)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         ReturnValue;                                       // 0xA(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_93FF[0x5];                                     // Fixing Size After Last Property..
	FInterfaceProperty_                          CallFunc_HasAnyMatchingGameplayTags_self_CastInput; // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasAnyMatchingGameplayTags_ReturnValue;   // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE0 (0xE0 - 0x0)
// Function BP_Athena_Environmental_ZipLine_Spline.BP_Athena_Environmental_ZipLine_Spline_C.GetAutoHorizAndVertVectors
struct ABP_Athena_Environmental_ZipLine_Spline_C_GetAutoHorizAndVertVectors_Params
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
// Function BP_Athena_Environmental_ZipLine_Spline.BP_Athena_Environmental_ZipLine_Spline_C.Calc Auto Location At Alpha
struct ABP_Athena_Environmental_ZipLine_Spline_C_Calc_Auto_Location_At_Alpha_Params
{
public:
	double                                       InAlpha;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         DrawDebug;                                         // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9400[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               PointLocation;                                     // 0x10(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       SplinePointID;                                     // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9401[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_GetAutoHorizAndVertVectors_VertVec;       // 0x38(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetAutoHorizAndVertVectors_HorizVec;      // 0x50(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x68(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue_1;       // 0x80(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_VLerp_ReturnValue;                        // 0x98(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0xB1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9402[0x6];                                     // Fixing Size After Last Property..
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

// 0x198 (0x198 - 0x0)
// Function BP_Athena_Environmental_ZipLine_Spline.BP_Athena_Environmental_ZipLine_Spline_C.SetSplinePositionAndTangent
struct ABP_Athena_Environmental_ZipLine_Spline_C_SetSplinePositionAndTangent_Params
{
public:
	bool                                         SetPosition;                                       // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SetTangent;                                        // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9403[0x2];                                     // Fixing Size After Last Property..
	int32                                        ID;                                                // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       OneDivNumPoints;                                   // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        SplinePointIDToSet;                                // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9404[0x4];                                     // Fixing Size After Last Property..
	double                                       AlphaForLocation;                                  // 0x18(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsFirstPoint;                                      // 0x20(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9405[0x3];                                     // Fixing Size After Last Property..
	int32                                        SplinePointID;                                     // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       PrevAlpha;                                         // 0x28(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Alpha;                                             // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0x38(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x50(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9406[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_Calc_Auto_Location_At_Alpha_PointLocation; // 0x70(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Lerp_ReturnValue;                         // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_FClamp_ReturnValue;                       // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetAutoHorizAndVertVectors_VertVec;       // 0x98(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetAutoHorizAndVertVectors_HorizVec;      // 0xB0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue_1;       // 0xC8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue_2;       // 0xE0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_VLerp_ReturnValue;                        // 0xF8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue_3;       // 0x110(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_VLerp_ReturnValue_1;                      // 0x128(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x141(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x142(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9407[0x1];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x144(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x148(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Conv_IntToDouble_ReturnValue_1;           // 0x150(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x158(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9408[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_GetNumberOfSplinePoints_ReturnValue;      // 0x15C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9409[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x164(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x168(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_940A[0x7];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Conv_IntToDouble_ReturnValue_2;           // 0x170(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x178(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue_1;        // 0x180(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue_2;        // 0x188(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_VLerp_Alpha_ImplicitCast;                 // 0x190(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_VLerp_Alpha_ImplicitCast_1;               // 0x194(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xAA (0xAA - 0x0)
// Function BP_Athena_Environmental_ZipLine_Spline.BP_Athena_Environmental_ZipLine_Spline_C.CalculatePositionOfPoles
struct ABP_Athena_Environmental_ZipLine_Spline_C_CalculatePositionOfPoles_Params
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
// Function BP_Athena_Environmental_ZipLine_Spline.BP_Athena_Environmental_ZipLine_Spline_C.AutoSmoothTanget
struct ABP_Athena_Environmental_ZipLine_Spline_C_AutoSmoothTanget_Params
{
public:
	struct FVector                               Tangent;                                           // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               PointA;                                            // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               PointB;                                            // 0x30(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               SmoothedTangent;                                   // 0x48(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_940B[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0x68(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Normal_ReturnValue;                       // 0x80(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_VSize_ReturnValue;                        // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0xA0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue_1;       // 0xB8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               K2Node_Select_Default;                             // 0xD0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x79 (0x79 - 0x0)
// Function BP_Athena_Environmental_ZipLine_Spline.BP_Athena_Environmental_ZipLine_Spline_C.AddSplineMeshSegment
struct ABP_Athena_Environmental_ZipLine_Spline_C_AddSplineMeshSegment_Params
{
public:
	class USplineMeshComponent*                  SplineMeshSegment;                                 // 0x0(0x8)(Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_940C[0x8];                                     // Fixing Size After Last Property..
	struct FTransform                            Temp_struct_Variable;                              // 0x10(0x60)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USplineMeshComponent*                  CallFunc_AddComponent_ReturnValue;                 // 0x70(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetStaticMesh_ReturnValue;                // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A0 (0x1A0 - 0x0)
// Function BP_Athena_Environmental_ZipLine_Spline.BP_Athena_Environmental_ZipLine_Spline_C.UserConstructionScript
struct ABP_Athena_Environmental_ZipLine_Spline_C_UserConstructionScript_Params
{
public:
	bool                                         NewLocalVar_0;                                     // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_940D[0x3];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Variable;                                 // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_940E[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetNumberOfSplinePoints_ReturnValue;      // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetNumberOfSplinePoints_ReturnValue_1;    // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_1;            // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetNumberOfSplinePoints_ReturnValue_2;    // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_2;            // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_940F[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_BreakVector_X;                            // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Y;                            // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Z;                            // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_X_1;                          // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Y_1;                          // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Z_1;                          // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0x6C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x6D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x6E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x6F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9410[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_2;                               // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_3;                 // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       CallFunc_K2_GetRootComponent_ReturnValue;          // 0x80(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9411[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_GetSocketLocation_ReturnValue;            // 0x90(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       CallFunc_K2_GetRootComponent_ReturnValue_1;        // 0xA8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetLocationAndTangentAtSplinePoint_Location; // 0xB0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetLocationAndTangentAtSplinePoint_Tangent; // 0xC8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetSocketLocation_ReturnValue_1;          // 0xE0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9412[0x7];                                     // Fixing Size After Last Property..
	class USplineMeshComponent*                  CallFunc_AddSplineMeshSegment_SplineMeshSegment;   // 0x100(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetLocationAndTangentAtSplinePoint_Location_1; // 0x108(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetLocationAndTangentAtSplinePoint_Tangent_1; // 0x120(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_AutoSmoothTanget_SmoothedTangent;         // 0x138(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_AutoSmoothTanget_SmoothedTangent_1;       // 0x150(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetNumMaterials_ReturnValue;              // 0x168(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_3;            // 0x16C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x170(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x178(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9413[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x17C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetNumberOfSplinePoints_ReturnValue_3;    // 0x180(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_4;            // 0x184(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue_2;           // 0x188(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_3;          // 0x189(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9414[0x6];                                     // Fixing Size After Last Property..
	double                                       CallFunc_SelectFloat_ReturnValue_1;                // 0x190(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetScalarParameterValue_Value_ImplicitCast; // 0x198(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetScalarParameterValue_Value_ImplicitCast_1; // 0x19C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function BP_Athena_Environmental_ZipLine_Spline.BP_Athena_Environmental_ZipLine_Spline_C.ReceiveBeginPlay
struct ABP_Athena_Environmental_ZipLine_Spline_C_ReceiveBeginPlay_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function BP_Athena_Environmental_ZipLine_Spline.BP_Athena_Environmental_ZipLine_Spline_C.PlayerAttachedToZipline
struct ABP_Athena_Environmental_ZipLine_Spline_C_PlayerAttachedToZipline_Params
{
public:
	class AFortPlayerPawn*                       PlayerPawn;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function BP_Athena_Environmental_ZipLine_Spline.BP_Athena_Environmental_ZipLine_Spline_C.PlayerDetachedFromZipline
struct ABP_Athena_Environmental_ZipLine_Spline_C_PlayerDetachedFromZipline_Params
{
public:
	class AFortPlayerPawn*                       PlayerPawn;                                        // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x60 (0x60 - 0x0)
// Function BP_Athena_Environmental_ZipLine_Spline.BP_Athena_Environmental_ZipLine_Spline_C.HandlePoleDied
struct ABP_Athena_Environmental_ZipLine_Spline_C_HandlePoleDied_Params
{
public:
	class AActor*                                DamagedActor;                                      // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        Damage;                                            // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9415[0x4];                                     // Fixing Size After Last Property..
	class AController*                           InstigatedBy;                                      // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                DamageCauser;                                      // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               HitLocation;                                       // 0x20(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   FHitComponent;                                     // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                  BoneName;                                          // 0x40(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9416[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               Momentum;                                          // 0x48(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xF8 (0xF8 - 0x0)
// Function BP_Athena_Environmental_ZipLine_Spline.BP_Athena_Environmental_ZipLine_Spline_C.ExecuteUbergraph_BP_Athena_Environmental_ZipLine_Spline
struct ABP_Athena_Environmental_ZipLine_Spline_C_ExecuteUbergraph_BP_Athena_Environmental_ZipLine_Spline_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       K2Node_CustomEvent_PlayerPawn_1;                   // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetLocationAtSplinePoint_ReturnValue;     // 0x18(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetNumberOfSplinePoints_ReturnValue;      // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9417[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9418[0x3];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_GetLocationAtSplinePoint_ReturnValue_1;   // 0x48(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       K2Node_CustomEvent_PlayerPawn;                     // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_Array_Get_Item;                           // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x74(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9419[0x3];                                     // Fixing Size After Last Property..
	class AActor*                                K2Node_CustomEvent_DamagedActor;                   // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_CustomEvent_Damage;                         // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_941A[0x4];                                     // Fixing Size After Last Property..
	class AController*                           K2Node_CustomEvent_InstigatedBy;                   // 0x88(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_CustomEvent_DamageCauser;                   // 0x90(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               K2Node_CustomEvent_HitLocation;                    // 0x98(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   K2Node_CustomEvent_FHitComponent;                  // 0xB0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                  K2Node_CustomEvent_BoneName;                       // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_941B[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               K2Node_CustomEvent_Momentum;                       // 0xC0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0xD8(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0xE4(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetValueAsBool_ReturnValue;               // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_941C[0x3];                                     // Fixing Size After Last Property..
	float                                        CallFunc_SetScalarParameterValue_Value_ImplicitCast; // 0xF4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
