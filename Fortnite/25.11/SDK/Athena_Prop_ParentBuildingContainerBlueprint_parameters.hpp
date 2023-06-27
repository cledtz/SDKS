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

// 0x24 (0x24 - 0x0)
// Function Athena_Prop_ParentBuildingContainerBlueprint.Athena_Prop_ParentBuildingContainerBlueprint_C.GetTimeOfDayBlueprintDefaultVariables
struct AAthena_Prop_ParentBuildingContainerBlueprint_C_GetTimeOfDayBlueprintDefaultVariables_Params
{
public:
	struct FTimeOfDayBlueprintDefaultVariables   OutVariables;                                      // 0x0(0x10)(Parm, OutParm, NoDestructor)
	struct FTimeOfDayBlueprintDefaultVariables   K2Node_MakeStruct_TimeOfDayBlueprintDefaultVariables; // 0x10(0x10)(NoDestructor)
	float                                        K2Node_MakeStruct_VolumetricLightScatteringIntensity_ImplicitCast; // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x27C (0x27C - 0x0)
// Function Athena_Prop_ParentBuildingContainerBlueprint.Athena_Prop_ParentBuildingContainerBlueprint_C.UserConstructionScript
struct AAthena_Prop_ParentBuildingContainerBlueprint_C_UserConstructionScript_Params
{
public:
	class UStaticMeshComponent*                  CallFunc_GetBuildingMeshComponent_ReturnValue;     // 0x0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCurveLinearColor*                     CallFunc_GetWindSpeedCurveForPreview_ReturnValue;  // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UCurveLinearColor*                     CallFunc_GetWindPannerSpeedCurveForPreview_ReturnValue; // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9544[0x3];                                     // Fixing Size After Last Property..
	struct FLinearColor                          CallFunc_GetLinearColorValue_ReturnValue;          // 0x1C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakColor_R;                             // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakColor_G;                             // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakColor_B;                             // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakColor_A;                             // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9545[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x40(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_RotateAngleAxis_ReturnValue;              // 0x58(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_X;                            // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Y;                            // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Z;                            // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_GetLinearColorValue_ReturnValue_1;        // 0x88(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_MakeColor_ReturnValue;                    // 0x98(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakColor_R_1;                           // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakColor_G_1;                           // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakColor_B_1;                           // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakColor_A_1;                           // 0xB4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInterface*>            CallFunc_GetIntenseWindMaterialsForPreview_Materials; // 0xB8(0x10)(ReferenceParm)
	bool                                         CallFunc_GetIntenseWindMaterialsForPreview_ReturnValue; // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0xC9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9546[0x6];                                     // Fixing Size After Last Property..
	class UStaticMeshComponent*                  CallFunc_GetBuildingMeshComponent_ReturnValue_1;   // 0xD0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UCurveLinearColor*                     CallFunc_GetWindSpeedCurveForPreview_ReturnValue_1; // 0xD8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9547[0x3];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xE4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9548[0x4];                                     // Fixing Size After Last Property..
	class UCurveLinearColor*                     CallFunc_GetWindPannerSpeedCurveForPreview_ReturnValue_1; // 0xF0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0xF9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9549[0x2];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xFC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x104(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_954A[0x3];                                     // Fixing Size After Last Property..
	TArray<class UMaterialInterface*>            CallFunc_GetMaterials_ReturnValue;                 // 0x108(0x10)(ReferenceParm)
	bool                                         CallFunc_SetStaticMesh_ReturnValue;                // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_954B[0x7];                                     // Fixing Size After Last Property..
	struct FTransform                            Temp_struct_Variable;                              // 0x120(0x60)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x180(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_954C[0x4];                                     // Fixing Size After Last Property..
	class UMaterialInterface*                    CallFunc_Array_Get_Item;                           // 0x188(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  CallFunc_AddComponent_ReturnValue;                 // 0x190(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                     K2Node_DynamicCast_AsMaterial_Instance;            // 0x198(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x1A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_954D[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_GetActorScale3D_ReturnValue;              // 0x1A8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_X_1;                          // 0x1C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Y_1;                          // 0x1C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Z_1;                          // 0x1D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_FMax_ReturnValue;                         // 0x1D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_FMax_ReturnValue_1;                       // 0x1E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Divide_VectorFloat_ReturnValue;           // 0x1E8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x200(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x218(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x219(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x21A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_954E[0x1];                                     // Fixing Size After Last Property..
	float                                        CallFunc_GetTimeRange_MinTime;                     // 0x21C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetTimeRange_MaxTime;                     // 0x220(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_954F[0x4];                                     // Fixing Size After Last Property..
	double                                       K2Node_VariableGet_CodeControlled_Animation_Curve_Animation_Length_ImplicitCast; // 0x228(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    CallFunc_Array_Get_Item_1;                         // 0x230(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x238(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9550[0x4];                                     // Fixing Size After Last Property..
	class UMaterialInstance*                     K2Node_DynamicCast_AsMaterial_Instance_1;          // 0x240(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x248(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x249(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9551[0x6];                                     // Fixing Size After Last Property..
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x250(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetLinearColorValue_InTime_ImplicitCast;  // 0x258(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_RotateAngleAxis_AngleDeg_ImplicitCast;    // 0x25C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_K2_InterpolateMaterialInstanceParams_Alpha_ImplicitCast; // 0x260(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetLinearColorValue_InTime_ImplicitCast_1; // 0x264(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_MakeColor_R_ImplicitCast;                 // 0x268(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_MakeColor_G_ImplicitCast;                 // 0x26C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_MakeColor_B_ImplicitCast;                 // 0x270(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetCustomPrimitiveDataFloat_Value_ImplicitCast; // 0x274(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_VariableSetRef_Target_ImplicitCast;         // 0x278(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function Athena_Prop_ParentBuildingContainerBlueprint.Athena_Prop_ParentBuildingContainerBlueprint_C.ReceiveBeginPlay
struct AAthena_Prop_ParentBuildingContainerBlueprint_C_ReceiveBeginPlay_Params
{
public:
};

// 0x3 (0x3 - 0x0)
// Function Athena_Prop_ParentBuildingContainerBlueprint.Athena_Prop_ParentBuildingContainerBlueprint_C.OnDayPhaseChanged
struct AAthena_Prop_ParentBuildingContainerBlueprint_C_OnDayPhaseChanged_Params
{
public:
	enum class EFortDayPhase                     CurrentDayPhase;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortDayPhase                     PreviousDayPhase;                                  // 0x1(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bAtCreation;                                       // 0x2(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function Athena_Prop_ParentBuildingContainerBlueprint.Athena_Prop_ParentBuildingContainerBlueprint_C.Loop Animation Curve
struct AAthena_Prop_ParentBuildingContainerBlueprint_C_Loop_Animation_Curve_Params
{
public:
};

// 0x30 (0x30 - 0x0)
// Function Athena_Prop_ParentBuildingContainerBlueprint.Athena_Prop_ParentBuildingContainerBlueprint_C.OnBounceAnimationUpdate
struct AAthena_Prop_ParentBuildingContainerBlueprint_C_OnBounceAnimationUpdate_Params
{
public:
	struct FFortBounceData                       Data;                                              // 0x0(0x30)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function Athena_Prop_ParentBuildingContainerBlueprint.Athena_Prop_ParentBuildingContainerBlueprint_C.OnSetSearched
struct AAthena_Prop_ParentBuildingContainerBlueprint_C_OnSetSearched_Params
{
public:
};

// 0xA1C (0xA1C - 0x0)
// Function Athena_Prop_ParentBuildingContainerBlueprint.Athena_Prop_ParentBuildingContainerBlueprint_C.ExecuteUbergraph_Athena_Prop_ParentBuildingContainerBlueprint
struct AAthena_Prop_ParentBuildingContainerBlueprint_C_ExecuteUbergraph_Athena_Prop_ParentBuildingContainerBlueprint_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortDayPhase                     Temp_byte_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9552[0x3];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9553[0x4];                                     // Fixing Size After Last Property..
	FInterfaceProperty_                          CallFunc_GetContextualTimeOfDayManager_ReturnValue; // 0x18(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UObject*                               CallFunc_Conv_InterfaceToObject_ReturnValue;       // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9554[0x3];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Variable;                                 // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_GetOrCreateMIDOnDefaultMesh_ReturnValue;  // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_GetOrCreateMIDOnDefaultMesh_ReturnValue_1; // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortDayPhase                     Temp_byte_Variable_1;                              // 0x54(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9555[0x3];                                     // Fixing Size After Last Property..
	double                                       Temp_real_Variable;                                // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_3;                 // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9556[0x4];                                     // Fixing Size After Last Property..
	FInterfaceProperty_                          CallFunc_GetContextualTimeOfDayManager_ReturnValue_1; // 0x70(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UObject*                               CallFunc_Conv_InterfaceToObject_ReturnValue_1;     // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9557[0x7];                                     // Fixing Size After Last Property..
	class UStaticMeshComponent*                  CallFunc_GetBuildingMeshComponent_ReturnValue;     // 0x90(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class EFortDayPhase                     CallFunc_GetPreviousDayPhase_ReturnValue;          // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9558[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_GetNumMaterials_ReturnValue;              // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue;              // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortDayPhase                     CallFunc_GetCurrentDayPhase_ReturnValue;           // 0xA4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9559[0x3];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Variable_2;                               // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_955A[0x4];                                     // Fixing Size After Last Property..
	class UMaterialInstanceDynamic*              CallFunc_GetOrCreateMIDOnDefaultMesh_ReturnValue_2; // 0xB0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_4;                 // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0xBC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  CallFunc_GetBuildingMeshComponent_ReturnValue_1;   // 0xC0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0xC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_955B[0x4];                                     // Fixing Size After Last Property..
	class UStaticMeshComponent*                  CallFunc_GetBuildingMeshComponent_ReturnValue_2;   // 0xD0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetNumMaterials_ReturnValue_1;            // 0xD8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_5;                 // 0xDC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_1;            // 0xE0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0xE4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_955C[0x3];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Variable_3;                               // 0xE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortDayPhase                     CallFunc_GetCurrentDayPhase_ReturnValue_1;         // 0xEC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_955D[0x3];                                     // Fixing Size After Last Property..
	class UMaterialInstanceDynamic*              CallFunc_GetOrCreateMIDOnDefaultMesh_ReturnValue_3; // 0xF0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterial*                             CallFunc_GetBaseMaterial_ReturnValue;              // 0xF8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_6;                 // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x104(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortDayPhase                     Temp_byte_Variable_2;                              // 0x105(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortDayPhase                     CallFunc_GetPreviousDayPhase_ReturnValue_1;        // 0x106(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortDayPhase                     Temp_byte_Variable_3;                              // 0x107(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  CallFunc_GetBuildingMeshComponent_ReturnValue_3;   // 0x108(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetNumMaterials_ReturnValue_2;            // 0x110(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortDayPhase                     Temp_byte_Variable_4;                              // 0x114(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_955E[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_2;            // 0x118(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_955F[0x4];                                     // Fixing Size After Last Property..
	FInterfaceProperty_                          CallFunc_GetContextualTimeOfDayManager_ReturnValue_2; // 0x120(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	double                                       Temp_real_Variable_1;                              // 0x130(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               CallFunc_Conv_InterfaceToObject_ReturnValue_2;     // 0x138(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EFortDayPhase                     CallFunc_GetCurrentDayPhase_ReturnValue_2;         // 0x140(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x141(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9560[0x6];                                     // Fixing Size After Last Property..
	FInterfaceProperty_                          CallFunc_GetContextualTimeOfDayManager_ReturnValue_3; // 0x148(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	class UObject*                               CallFunc_Conv_InterfaceToObject_ReturnValue_3;     // 0x158(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	enum class EFortDayPhase                     CallFunc_GetPreviousDayPhase_ReturnValue_2;        // 0x160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x161(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9561[0x6];                                     // Fixing Size After Last Property..
	double                                       Temp_real_Variable_2;                              // 0x168(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FInterfaceProperty_                          CallFunc_GetContextualTimeOfDayManager_ReturnValue_4; // 0x170(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_3;                   // 0x180(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9562[0x4];                                     // Fixing Size After Last Property..
	class UObject*                               CallFunc_Conv_InterfaceToObject_ReturnValue_4;     // 0x188(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x190(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortDayPhase                     CallFunc_GetCurrentDayPhase_ReturnValue_3;         // 0x191(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortDayPhase                     CallFunc_GetPreviousDayPhase_ReturnValue_3;        // 0x192(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9563[0x5];                                     // Fixing Size After Last Property..
	double                                       Temp_real_Variable_3;                              // 0x198(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_4;                              // 0x1A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_5;                              // 0x1A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_3;                  // 0x1B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortDayPhase                     CallFunc_GetPreviousDayPhase_ReturnValue_4;        // 0x1B4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9564[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Add_IntInt_ReturnValue_7;                 // 0x1B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9565[0x4];                                     // Fixing Size After Last Property..
	double                                       Temp_real_Variable_6;                              // 0x1C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FInterfaceProperty_                          CallFunc_GetContextualTimeOfDayManager_ReturnValue_5; // 0x1C8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	enum class EFortDayPhase                     Temp_byte_Variable_5;                              // 0x1D8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9566[0x7];                                     // Fixing Size After Last Property..
	class UObject*                               CallFunc_Conv_InterfaceToObject_ReturnValue_5;     // 0x1E0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_5;                    // 0x1E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortDayPhase                     CallFunc_GetCurrentDayPhase_ReturnValue_4;         // 0x1E9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9567[0x6];                                     // Fixing Size After Last Property..
	class UStaticMeshComponent*                  CallFunc_GetBuildingMeshComponent_ReturnValue_4;   // 0x1F0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_4;                               // 0x1F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9568[0x4];                                     // Fixing Size After Last Property..
	class UMaterialInterface*                    CallFunc_GetMaterial_ReturnValue;                  // 0x200(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_GetOrCreateMIDOnDefaultMesh_ReturnValue_4; // 0x208(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceConstant*             K2Node_DynamicCast_AsMaterial_Instance_Constant;   // 0x210(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x218(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9569[0x3];                                     // Fixing Size After Last Property..
	float                                        CallFunc_K2_GetScalarParameterValue_ReturnValue;   // 0x21C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_K2_GetVectorParameterValue_ReturnValue;   // 0x220(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_K2_GetVectorParameterValue_ReturnValue_1; // 0x230(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_DoubleDouble_ReturnValue;        // 0x240(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_DoubleDouble_ReturnValue_1;      // 0x241(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_DoubleDouble_ReturnValue_2;      // 0x242(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue_1;           // 0x243(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x244(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x245(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_956A[0x2];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Add_IntInt_ReturnValue_8;                 // 0x248(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetNumMaterials_ReturnValue_3;            // 0x24C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_3;            // 0x250(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortDayPhase                     Temp_byte_Variable_6;                              // 0x254(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue_2;           // 0x255(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x256(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue_1;          // 0x257(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortDayPhase                     Temp_byte_Variable_7;                              // 0x258(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue_2;          // 0x259(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortDayPhase                     Temp_byte_Variable_8;                              // 0x25A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_956B[0x5];                                     // Fixing Size After Last Property..
	double                                       CallFunc_RandomFloatInRange_ReturnValue;           // 0x260(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  CallFunc_GetBuildingMeshComponent_ReturnValue_5;   // 0x268(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_RandomFloatInRange_ReturnValue_1;         // 0x270(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  CallFunc_GetBuildingMeshComponent_ReturnValue_6;   // 0x278(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	enum class EFortDayPhase                     CallFunc_GetCurrentDayPhase_ReturnValue_5;         // 0x280(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_956C[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_GetNumMaterials_ReturnValue_4;            // 0x284(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FInterfaceProperty_                          CallFunc_GetContextualTimeOfDayManager_ReturnValue_6; // 0x288(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_4;            // 0x298(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_956D[0x4];                                     // Fixing Size After Last Property..
	class UObject*                               CallFunc_Conv_InterfaceToObject_ReturnValue_6;     // 0x2A0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue_3;           // 0x2A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_6;                    // 0x2A9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortDayPhase                     CallFunc_GetPreviousDayPhase_ReturnValue_5;        // 0x2AA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_956E[0x1];                                     // Fixing Size After Last Property..
	float                                        CallFunc_GetScalarParameterValue_ReturnValue;      // 0x2AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortDayPhase                     CallFunc_GetCurrentDayPhase_ReturnValue_6;         // 0x2B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortDayPhase                     Temp_byte_Variable_9;                              // 0x2B1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortDayPhase                     Temp_byte_Variable_10;                             // 0x2B2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_956F[0x1];                                     // Fixing Size After Last Property..
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x2B4(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_4;                  // 0x2C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_9;                 // 0x2C4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_4;                   // 0x2C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_5;                               // 0x2CC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_GetOrCreateMIDOnDefaultMesh_ReturnValue_5; // 0x2D0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterial*                             CallFunc_GetBaseMaterial_ReturnValue_1;            // 0x2D8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue_4;           // 0x2E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x2E1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9570[0x2];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Add_IntInt_ReturnValue_10;                // 0x2E4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortDayPhase                     K2Node_Event_CurrentDayPhase;                      // 0x2E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortDayPhase                     K2Node_Event_PreviousDayPhase;                     // 0x2E9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bAtCreation;                          // 0x2EA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9571[0x5];                                     // Fixing Size After Last Property..
	double                                       K2Node_Select_Default;                             // 0x2F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Array_Get_Item;                           // 0x2F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x300(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x308(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Default_1;                           // 0x310(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Default_2;                           // 0x318(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Default_3;                           // 0x320(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Default_4;                           // 0x328(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Lerp_ReturnValue;                         // 0x330(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_Array_Get_Item_1;                         // 0x338(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Array_Get_Item_2;                         // 0x348(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_Multiply_LinearColorFloat_ReturnValue;    // 0x350(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_2;      // 0x360(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_3;      // 0x368(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_Multiply_LinearColorFloat_ReturnValue_1;  // 0x370(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Array_Get_Item_3;                         // 0x380(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x388(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9572[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_4;      // 0x390(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_Array_Get_Item_4;                         // 0x398(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_Multiply_LinearColorFloat_ReturnValue_2;  // 0x3A8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0x3B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x3BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x3C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9573[0x7];                                     // Fixing Size After Last Property..
	double                                       K2Node_Select_Default_5;                           // 0x3C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Default_6;                           // 0x3D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Lerp_ReturnValue_1;                       // 0x3D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Default_7;                           // 0x3E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Default_8;                           // 0x3E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Lerp_ReturnValue_2;                       // 0x3F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Default_9;                           // 0x3F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Default_10;                          // 0x400(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Lerp_ReturnValue_3;                       // 0x408(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_Array_Get_Item_5;                         // 0x410(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_Multiply_LinearColorFloat_ReturnValue_3;  // 0x420(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_Multiply_LinearColorFloat_ReturnValue_4;  // 0x430(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortDayPhase                     Temp_byte_Variable_11;                             // 0x440(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9574[0x7];                                     // Fixing Size After Last Property..
	double                                       K2Node_Select_Default_11;                          // 0x448(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Lerp_ReturnValue_4;                       // 0x450(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_2;                  // 0x458(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_7;                    // 0x459(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9575[0x2];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Subtract_IntInt_ReturnValue_5;            // 0x45C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue_5;           // 0x460(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_3;                  // 0x461(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x462(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EFortDayPhase                     Temp_byte_Variable_12;                             // 0x463(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9576[0x4];                                     // Fixing Size After Last Property..
	double                                       K2Node_Select_Default_12;                          // 0x468(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFortBounceData                       K2Node_Event_Data;                                 // 0x470(0x30)(ConstParm, NoDestructor)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_5;      // 0x4A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x4A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9577[0x7];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x4B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakColor_R;                             // 0x4B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakColor_G;                             // 0x4BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakColor_B;                             // 0x4C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakColor_A;                             // 0x4C4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_6;      // 0x4C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x4D0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakColor_R_1;                           // 0x4E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakColor_G_1;                           // 0x4EC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakColor_B_1;                           // 0x4F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakColor_A_1;                           // 0x4F4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue_1;                 // 0x4F8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x510(0x8)(NoDestructor, HasGetValueTypeHash)
	struct FTimeOfDayControlledLightData         CallFunc_Array_Get_Item_6;                         // 0x518(0x28)(NoDestructor, ContainsInstancedReference)
	struct FTimeOfDayControlledLightData         CallFunc_Array_Get_Item_7;                         // 0x540(0x28)(NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_IsValid_ReturnValue_8;                    // 0x568(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_9;                    // 0x569(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9578[0x2];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x56C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x570(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9579[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x574(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x578(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_957A[0x7];                                     // Fixing Size After Last Property..
	struct FTimeOfDayControlledLightData         CallFunc_Array_Get_Item_8;                         // 0x580(0x28)(NoDestructor, ContainsInstancedReference)
	int32                                        CallFunc_Array_Length_ReturnValue_3;               // 0x5A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x5AC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_957B[0x3];                                     // Fixing Size After Last Property..
	struct FTimeOfDayControlledLightData         CallFunc_Array_Get_Item_9;                         // 0x5B0(0x28)(NoDestructor, ContainsInstancedReference)
	struct FTimeOfDayControlledLightData         CallFunc_Array_Get_Item_10;                        // 0x5D8(0x28)(NoDestructor, ContainsInstancedReference)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0x600(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_10;                   // 0x618(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_957C[0x7];                                     // Fixing Size After Last Property..
	double                                       CallFunc_VSize_ReturnValue;                        // 0x620(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x628(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_4;               // 0x630(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_957D[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_FClamp_ReturnValue;                       // 0x638(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_3;                // 0x640(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_957E[0x7];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x648(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0x650(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_5;               // 0x658(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_957F[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x660(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_4;                // 0x678(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9580[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue_1;       // 0x680(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue_2;       // 0x698(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x6B0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_K2_SetWorldLocation_SweepHitResult;       // 0x6C8(0xE0)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	float                                        CallFunc_SetCustomPrimitiveDataFloat_Value_ImplicitCast; // 0x7A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_LinearColorFloat_B_ImplicitCast; // 0x7AC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_LinearColorFloat_B_ImplicitCast_1; // 0x7B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_LinearColorFloat_B_ImplicitCast_2; // 0x7B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_LinearColorFloat_B_ImplicitCast_3; // 0x7B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_AddLightAnimationIntensity_StartValue_ImplicitCast; // 0x7BC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_AddLightAnimationIntensity_EndValue_ImplicitCast; // 0x7C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_LinearColorFloat_B_ImplicitCast_4; // 0x7C4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Array_Add_NewItem_ImplicitCast;           // 0x7C8(0x8)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_NotEqual_DoubleDouble_A_ImplicitCast;     // 0x7D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_NotEqual_DoubleDouble_A_ImplicitCast_1;   // 0x7D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_NotEqual_DoubleDouble_A_ImplicitCast_2;   // 0x7E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Delay_Duration_ImplicitCast;              // 0x7E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9581[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Multiply_VectorFloat_B_ImplicitCast;      // 0x7F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_AddLightAnimationIntensity_Duration_ImplicitCast; // 0x7F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9582[0x4];                                     // Fixing Size After Last Property..
	double                                       K2Node_Select_Morning_ImplicitCast;                // 0x800(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Morning_ImplicitCast_1;              // 0x808(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Day_ImplicitCast;                    // 0x810(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Day_ImplicitCast_1;                  // 0x818(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Evening_ImplicitCast;                // 0x820(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Evening_ImplicitCast_1;              // 0x828(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Night_ImplicitCast;                  // 0x830(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Night_ImplicitCast_1;                // 0x838(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_AddMIDAnimationFloat_EndValue_ImplicitCast; // 0x840(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_AddMIDAnimationFloat_StartValue_ImplicitCast; // 0x844(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Morning_ImplicitCast_2;              // 0x848(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Morning_ImplicitCast_3;              // 0x850(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Day_ImplicitCast_2;                  // 0x858(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Day_ImplicitCast_3;                  // 0x860(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Evening_ImplicitCast_2;              // 0x868(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Evening_ImplicitCast_3;              // 0x870(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Night_ImplicitCast_2;                // 0x878(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Night_ImplicitCast_3;                // 0x880(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Morning_ImplicitCast_4;              // 0x888(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Morning_ImplicitCast_5;              // 0x890(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Day_ImplicitCast_4;                  // 0x898(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Day_ImplicitCast_5;                  // 0x8A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Evening_ImplicitCast_4;              // 0x8A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Evening_ImplicitCast_5;              // 0x8B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Night_ImplicitCast_4;                // 0x8B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Night_ImplicitCast_5;                // 0x8C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_AddMIDAnimationFloat_Duration_ImplicitCast; // 0x8C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_AddMIDAnimationColor_Duration_ImplicitCast; // 0x8CC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_AddMIDAnimationFloat_EndValue_ImplicitCast_1; // 0x8D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_AddMIDAnimationFloat_StartValue_ImplicitCast_1; // 0x8D4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetScalarParameterValue_Value_ImplicitCast; // 0x8D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9583[0x4];                                     // Fixing Size After Last Property..
	double                                       K2Node_Select_Morning_ImplicitCast_6;              // 0x8E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Day_ImplicitCast_6;                  // 0x8E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Evening_ImplicitCast_6;              // 0x8F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Night_ImplicitCast_6;                // 0x8F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_AddMIDAnimationFloat_Duration_ImplicitCast_1; // 0x900(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_AddMIDAnimationColor_Duration_ImplicitCast_1; // 0x904(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Morning_ImplicitCast_7;              // 0x908(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Morning_ImplicitCast_8;              // 0x910(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Day_ImplicitCast_7;                  // 0x918(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Day_ImplicitCast_8;                  // 0x920(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Evening_ImplicitCast_7;              // 0x928(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Evening_ImplicitCast_8;              // 0x930(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Night_ImplicitCast_7;                // 0x938(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Night_ImplicitCast_8;                // 0x940(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Morning_ImplicitCast_9;              // 0x948(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Morning_ImplicitCast_10;             // 0x950(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Day_ImplicitCast_9;                  // 0x958(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Day_ImplicitCast_10;                 // 0x960(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Evening_ImplicitCast_9;              // 0x968(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Evening_ImplicitCast_10;             // 0x970(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Night_ImplicitCast_9;                // 0x978(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Night_ImplicitCast_10;               // 0x980(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Morning_ImplicitCast_11;             // 0x988(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Morning_ImplicitCast_12;             // 0x990(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Day_ImplicitCast_11;                 // 0x998(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Day_ImplicitCast_12;                 // 0x9A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Evening_ImplicitCast_11;             // 0x9A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Evening_ImplicitCast_12;             // 0x9B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Night_ImplicitCast_11;               // 0x9B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Night_ImplicitCast_12;               // 0x9C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetIntensity_NewIntensity_ImplicitCast;   // 0x9C8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9584[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Multiply_VectorFloat_B_ImplicitCast_1;    // 0x9D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_B_ImplicitCast;       // 0x9D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_MakeVector_X_ImplicitCast;                // 0x9E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_MakeVector_Y_ImplicitCast;                // 0x9E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_MakeVector_Z_ImplicitCast;                // 0x9F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_MakeVector_X_ImplicitCast_1;              // 0x9F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_MakeVector_Y_ImplicitCast_1;              // 0xA00(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_MakeVector_Z_ImplicitCast_1;              // 0xA08(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_AddMIDAnimationFloat_Duration_ImplicitCast_2; // 0xA10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_AddLightAnimationIntensity_Duration_ImplicitCast_1; // 0xA14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;    // 0xA18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
