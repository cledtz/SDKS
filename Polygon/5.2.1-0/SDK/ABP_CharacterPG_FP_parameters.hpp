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

// 0x10 (0x10 - 0x0)
// Function ABP_CharacterPG_FP.ABP_CharacterPG_FP_C.BasePose
struct UABP_CharacterPG_FP_C_BasePose_Params
{
public:
	struct FPoseLink                             BasePose;                                          // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function ABP_CharacterPG_FP.ABP_CharacterPG_FP_C.GunLocomotion
struct UABP_CharacterPG_FP_C_GunLocomotion_Params
{
public:
	struct FPoseLink                             BaseFinal;                                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             GunLocomotion;                                     // 0x10(0x10)(Parm, OutParm, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function ABP_CharacterPG_FP.ABP_CharacterPG_FP_C.PoseBlending
struct UABP_CharacterPG_FP_C_PoseBlending_Params
{
public:
	struct FPoseLink                             BaseLocomotion;                                    // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             BasePose;                                          // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	struct FPoseLink                             PoseBlending;                                      // 0x20(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function ABP_CharacterPG_FP.ABP_CharacterPG_FP_C.BaseLocomotion
struct UABP_CharacterPG_FP_C_BaseLocomotion_Params
{
public:
	struct FPoseLink                             BaseLocomotion;                                    // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function ABP_CharacterPG_FP.ABP_CharacterPG_FP_C.AnimGraph
struct UABP_CharacterPG_FP_C_AnimGraph_Params
{
public:
	struct FPoseLink                             AnimGraph;                                         // 0x0(0x10)(Parm, OutParm, NoDestructor)
};

// 0x54 (0x54 - 0x0)
// Function ABP_CharacterPG_FP.ABP_CharacterPG_FP_C.FootStep_Cloth
struct UABP_CharacterPG_FP_C_FootStep_Cloth_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2EEB[0x7];                                     // Fixing Size After Last Property 
	double                                       Temp_real_Variable;                                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_1;                              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2EEC[0x7];                                     // Fixing Size After Last Property 
	double                                       Temp_real_Variable_2;                              // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x2B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2EED[0x4];                                     // Fixing Size After Last Property 
	class UPawnMovementComponent*                CallFunc_GetMovementComponent_ReturnValue;         // 0x30(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsFalling_ReturnValue;                    // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x39(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetIsSprinting_ReturnValue;               // 0x3A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x3B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2EEE[0x4];                                     // Fixing Size After Last Property 
	double                                       K2Node_Select_Default;                             // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Default_1;                           // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_PlaySound2D_VolumeMultiplier_ImplicitCast; // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2C0 (0x2C0 - 0x0)
// Function ABP_CharacterPG_FP.ABP_CharacterPG_FP_C.JumpEvent
struct UABP_CharacterPG_FP_C_JumpEvent_Params
{
public:
	bool                                         IsStart;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPhysicalSurface                  Temp_byte_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F19[0x6];                                     // Fixing Size After Last Property 
	class USoundBase*                            Temp_object_Variable;                              // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_1;                            // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_2;                            // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_3;                            // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_4;                            // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_5;                            // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_6;                            // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_7;                            // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_8;                            // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_9;                            // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_10;                           // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_11;                           // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_12;                           // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_13;                           // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_14;                           // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_15;                           // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPhysicalSurface                  Temp_byte_Variable_1;                              // 0x89(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F1D[0x6];                                     // Fixing Size After Last Property 
	class USoundBase*                            Temp_object_Variable_16;                           // 0x90(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_17;                           // 0x98(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_18;                           // 0xA0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_19;                           // 0xA8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_20;                           // 0xB0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_21;                           // 0xB8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_22;                           // 0xC0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_23;                           // 0xC8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_24;                           // 0xD0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_25;                           // 0xD8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_26;                           // 0xE0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_27;                           // 0xE8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_28;                           // 0xF0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_29;                           // 0xF8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_30;                           // 0x100(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_31;                           // 0x108(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UActor*>                        Temp_object_Variable_32;                           // 0x110(0x10)(ConstParm, ReferenceParm)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x121(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F23[0x6];                                     // Fixing Size After Last Property 
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x128(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetActorUpVector_ReturnValue;             // 0x130(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x148(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F24[0x7];                                     // Fixing Size After Last Property 
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x150(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue_1;       // 0x168(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x180(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x198(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_LineTraceSingle_OutHit;                   // 0x1B0(0xE8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_LineTraceSingle_ReturnValue;              // 0x298(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPhysicalSurface                  CallFunc_GetSurfaceType_ReturnValue;               // 0x299(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F27[0x6];                                     // Fixing Size After Last Property 
	class USoundBase*                            K2Node_Select_Default;                             // 0x2A0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            K2Node_Select_Default_1;                           // 0x2A8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            K2Node_Select_Default_2;                           // 0x2B0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue;           // 0x2B8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x175 (0x175 - 0x0)
// Function ABP_CharacterPG_FP.ABP_CharacterPG_FP_C.CacheGunModulesValues
struct UABP_CharacterPG_FP_C_CacheGunModulesValues_Params
{
public:
	class UItem_Module_General*                  L_ModuleIt;                                        // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F66[0x3];                                     // Fixing Size After Last Property 
	class UItem_Module_Underbarrel_Grip*         K2Node_DynamicCast_AsItem_Module_Underbarrel_Grip; // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F68[0x7];                                     // Fixing Size After Last Property 
	class UItem_Module_Optic*                    K2Node_DynamicCast_AsItem_Module_Optic;            // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DoesSocketExist_ReturnValue;              // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F69[0xE];                                     // Fixing Size After Last Property 
	struct FTransform                            CallFunc_GetSocketTransform_ReturnValue;           // 0x40(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakTransform_Location;                  // 0xA0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation;                  // 0xB8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale;                     // 0xD0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F6C[0x7];                                     // Fixing Size After Last Property 
	struct FVector                               CallFunc_GetActorRelativeLocation_ReturnValue;     // 0xF0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetComponentScale_ReturnValue;         // 0x108(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Divide_VectorVector_ReturnValue;          // 0x120(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F70[0x7];                                     // Fixing Size After Last Property 
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x140(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_PG_PlayerState_Game_C*             K2Node_DynamicCast_AsBP_PG_Player_State_Game;      // 0x158(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x161(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F72[0x6];                                     // Fixing Size After Last Property 
	class UItem_Module_General*                  CallFunc_Array_Get_Item;                           // 0x168(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x170(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x174(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x21 (0x21 - 0x0)
// Function ABP_CharacterPG_FP.ABP_CharacterPG_FP_C.CacheGunValues
struct UABP_CharacterPG_FP_C_CacheGunValues_Params
{
public:
	class UClass*                                L_OldGunClass;                                     // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UClass*                                CallFunc_GetObjectClass_ReturnValue;               // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ClassClass_ReturnValue;          // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValidClass_ReturnValue;                 // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2F81[0x6];                                     // Fixing Size After Last Property 
	class UClass*                                CallFunc_GetObjectClass_ReturnValue_1;             // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function ABP_CharacterPG_FP.ABP_CharacterPG_FP_C.BlueprintThreadSafeUpdateAnimation
struct UABP_CharacterPG_FP_C_BlueprintThreadSafeUpdateAnimation_Params
{
public:
	float                                        DeltaTime;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x298 (0x298 - 0x0)
// Function ABP_CharacterPG_FP.ABP_CharacterPG_FP_C.FootStep
struct UABP_CharacterPG_FP_C_FootStep_Params
{
public:
	bool                                         RightLeg;                                          // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2FAA[0x6];                                     // Fixing Size After Last Property 
	double                                       Temp_real_Variable;                                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_1;                              // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2FAC[0x7];                                     // Fixing Size After Last Property 
	double                                       Temp_real_Variable_2;                              // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_3;                              // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2FAE[0x7];                                     // Fixing Size After Last Property 
	double                                       Temp_real_Variable_4;                              // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPhysicalSurface                  Temp_byte_Variable;                                // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2FB1[0x7];                                     // Fixing Size After Last Property 
	class USoundBase*                            Temp_object_Variable;                              // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_1;                            // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_2;                            // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_3;                            // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_4;                            // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_5;                            // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_6;                            // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_7;                            // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_8;                            // 0x88(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_9;                            // 0x90(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_10;                           // 0x98(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_11;                           // 0xA0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_12;                           // 0xA8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_13;                           // 0xB0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_14;                           // 0xB8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            Temp_object_Variable_15;                           // 0xC0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class UActor*>                        Temp_object_Variable_16;                           // 0xC8(0x10)(ConstParm, ReferenceParm)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0xD9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0xDA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xDB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2FB8[0x4];                                     // Fixing Size After Last Property 
	class UPawnMovementComponent*                CallFunc_GetMovementComponent_ReturnValue;         // 0xE0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsFalling_ReturnValue;                    // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0xE9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xEA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2FBA[0x5];                                     // Fixing Size After Last Property 
	double                                       K2Node_Select_Default;                             // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0xF8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetIsSprinting_ReturnValue;               // 0x100(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2FBC[0x7];                                     // Fixing Size After Last Property 
	double                                       K2Node_Select_Default_1;                           // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Default_2;                           // 0x110(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetActorUpVector_ReturnValue;             // 0x118(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x130(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0x148(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue_1;       // 0x160(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x178(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_LineTraceSingle_OutHit;                   // 0x190(0xE8)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_LineTraceSingle_ReturnValue;              // 0x278(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EPhysicalSurface                  CallFunc_GetSurfaceType_ReturnValue;               // 0x279(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2FBF[0x6];                                     // Fixing Size After Last Property 
	class USoundBase*                            K2Node_Select_Default_3;                           // 0x280(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue;           // 0x288(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_ClientStartCameraShake_Scale_ImplicitCast; // 0x290(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SpawnSoundAttached_VolumeMultiplier_ImplicitCast; // 0x294(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function ABP_CharacterPG_FP.ABP_CharacterPG_FP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TwoWayBlend_D8EEEECA486AF0B93998CEA556C4DE71
struct UABP_CharacterPG_FP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TwoWayBlend_D8EEEECA486AF0B93998CEA556C4DE71_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ABP_CharacterPG_FP.ABP_CharacterPG_FP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_ModifyBone_1B66EDF44A1FFFB4DE8C2486A21A0D77
struct UABP_CharacterPG_FP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_ModifyBone_1B66EDF44A1FFFB4DE8C2486A21A0D77_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ABP_CharacterPG_FP.ABP_CharacterPG_FP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TwoWayBlend_308D3AEA40AE877C3E1186BDEB59709F
struct UABP_CharacterPG_FP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TwoWayBlend_308D3AEA40AE877C3E1186BDEB59709F_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ABP_CharacterPG_FP.ABP_CharacterPG_FP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_ModifyBone_F7759FAE4A6C8A0468115694FB42C5A4
struct UABP_CharacterPG_FP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_ModifyBone_F7759FAE4A6C8A0468115694FB42C5A4_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ABP_CharacterPG_FP.ABP_CharacterPG_FP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_970718284095E341DF3407AD8CCC437A
struct UABP_CharacterPG_FP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_970718284095E341DF3407AD8CCC437A_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ABP_CharacterPG_FP.ABP_CharacterPG_FP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_D672B8AD4C4774C39A319E8D4E05B8F2
struct UABP_CharacterPG_FP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_D672B8AD4C4774C39A319E8D4E05B8F2_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ABP_CharacterPG_FP.ABP_CharacterPG_FP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_7D66503C42CABAB9ADC810ADC30035E4
struct UABP_CharacterPG_FP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_7D66503C42CABAB9ADC810ADC30035E4_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ABP_CharacterPG_FP.ABP_CharacterPG_FP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_1CF6A3BE45EA072884A7B196C7F3F7CE
struct UABP_CharacterPG_FP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_1CF6A3BE45EA072884A7B196C7F3F7CE_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ABP_CharacterPG_FP.ABP_CharacterPG_FP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_BlendSpacePlayer_3E3B2F27417B56EA3F9EE48117118F0B
struct UABP_CharacterPG_FP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_BlendSpacePlayer_3E3B2F27417B56EA3F9EE48117118F0B_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ABP_CharacterPG_FP.ABP_CharacterPG_FP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_RotateRootBone_CCD03C174196DFE3ECC98083C405ABE3
struct UABP_CharacterPG_FP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_RotateRootBone_CCD03C174196DFE3ECC98083C405ABE3_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ABP_CharacterPG_FP.ABP_CharacterPG_FP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_0A775297491CB6D8EF1D678521C50D1B
struct UABP_CharacterPG_FP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_0A775297491CB6D8EF1D678521C50D1B_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ABP_CharacterPG_FP.ABP_CharacterPG_FP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_7D12E5EB4CA6A60836D80A913DAB50C5
struct UABP_CharacterPG_FP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_7D12E5EB4CA6A60836D80A913DAB50C5_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ABP_CharacterPG_FP.ABP_CharacterPG_FP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_CA7FA45B4F7487FAD4B1A9A8D8395F17
struct UABP_CharacterPG_FP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_CA7FA45B4F7487FAD4B1A9A8D8395F17_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ABP_CharacterPG_FP.ABP_CharacterPG_FP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_2887DBE845DF5D51CFAE8A819BFC1DD4
struct UABP_CharacterPG_FP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_2887DBE845DF5D51CFAE8A819BFC1DD4_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ABP_CharacterPG_FP.ABP_CharacterPG_FP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_50A36B6940E9695644F679AFD3DBCDB3
struct UABP_CharacterPG_FP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_50A36B6940E9695644F679AFD3DBCDB3_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ABP_CharacterPG_FP.ABP_CharacterPG_FP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_523B8E6545F8CAEA09CB60A7C4C3B5B6
struct UABP_CharacterPG_FP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_523B8E6545F8CAEA09CB60A7C4C3B5B6_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ABP_CharacterPG_FP.ABP_CharacterPG_FP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_254406EC4279CF2B786321BCE20A2311
struct UABP_CharacterPG_FP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_254406EC4279CF2B786321BCE20A2311_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ABP_CharacterPG_FP.ABP_CharacterPG_FP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_A849066E4A16BFE40C1BF9AC3B660049
struct UABP_CharacterPG_FP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_A849066E4A16BFE40C1BF9AC3B660049_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ABP_CharacterPG_FP.ABP_CharacterPG_FP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_C8CDA2D54B811A23CB1F8C9299735AD1
struct UABP_CharacterPG_FP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_C8CDA2D54B811A23CB1F8C9299735AD1_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ABP_CharacterPG_FP.ABP_CharacterPG_FP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_42AEC4144575B9A813C1FE906CB269E9
struct UABP_CharacterPG_FP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_42AEC4144575B9A813C1FE906CB269E9_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ABP_CharacterPG_FP.ABP_CharacterPG_FP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_6D3C596043C6848BE595B1BCD6AE4627
struct UABP_CharacterPG_FP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_6D3C596043C6848BE595B1BCD6AE4627_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ABP_CharacterPG_FP.ABP_CharacterPG_FP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_D08CF40346943E1E1A62308143787BD7
struct UABP_CharacterPG_FP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_D08CF40346943E1E1A62308143787BD7_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ABP_CharacterPG_FP.ABP_CharacterPG_FP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_BlendSpacePlayer_161E020840422278B47ED2891C976B3C
struct UABP_CharacterPG_FP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_BlendSpacePlayer_161E020840422278B47ED2891C976B3C_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ABP_CharacterPG_FP.ABP_CharacterPG_FP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_EC2BB4F94E84868F054695B1076C9452
struct UABP_CharacterPG_FP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_EC2BB4F94E84868F054695B1076C9452_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ABP_CharacterPG_FP.ABP_CharacterPG_FP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_E73940E140E86455224A529D5212739A
struct UABP_CharacterPG_FP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_E73940E140E86455224A529D5212739A_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ABP_CharacterPG_FP.ABP_CharacterPG_FP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_F245B72F4D80BA207E264496511B1049
struct UABP_CharacterPG_FP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_F245B72F4D80BA207E264496511B1049_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ABP_CharacterPG_FP.ABP_CharacterPG_FP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_1D1BA0B5425BD1B94B561BAC631F68C2
struct UABP_CharacterPG_FP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_1D1BA0B5425BD1B94B561BAC631F68C2_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ABP_CharacterPG_FP.ABP_CharacterPG_FP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_B403FE0040230F3C2CC7669161E4E054
struct UABP_CharacterPG_FP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_B403FE0040230F3C2CC7669161E4E054_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ABP_CharacterPG_FP.ABP_CharacterPG_FP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_ApplyAdditive_354125F4431650839A2DD691F11D56DB
struct UABP_CharacterPG_FP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_ApplyAdditive_354125F4431650839A2DD691F11D56DB_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ABP_CharacterPG_FP.ABP_CharacterPG_FP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_C030784F42C7BAA9E23EFB81EA617AD4
struct UABP_CharacterPG_FP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_C030784F42C7BAA9E23EFB81EA617AD4_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ABP_CharacterPG_FP.ABP_CharacterPG_FP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_E0F79D8940419DB47C207EBB7F0C5ED2
struct UABP_CharacterPG_FP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_E0F79D8940419DB47C207EBB7F0C5ED2_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ABP_CharacterPG_FP.ABP_CharacterPG_FP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_B40BA28549B31553A8B73393156D9CF2
struct UABP_CharacterPG_FP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_B40BA28549B31553A8B73393156D9CF2_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ABP_CharacterPG_FP.ABP_CharacterPG_FP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_74E33F784E5487D4CB783FB1E231B9DC
struct UABP_CharacterPG_FP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_74E33F784E5487D4CB783FB1E231B9DC_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ABP_CharacterPG_FP.ABP_CharacterPG_FP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_F90171B14028060A7C99E99A6273B3C6
struct UABP_CharacterPG_FP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_F90171B14028060A7C99E99A6273B3C6_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ABP_CharacterPG_FP.ABP_CharacterPG_FP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_3E5A41E346BAAEB04609E5B6D5B62E54
struct UABP_CharacterPG_FP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_3E5A41E346BAAEB04609E5B6D5B62E54_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ABP_CharacterPG_FP.ABP_CharacterPG_FP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_F2B849EC484BA0420C9FEA916D15202B
struct UABP_CharacterPG_FP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_F2B849EC484BA0420C9FEA916D15202B_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ABP_CharacterPG_FP.ABP_CharacterPG_FP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_C6351B6248809561B39B449E31905C80
struct UABP_CharacterPG_FP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_C6351B6248809561B39B449E31905C80_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ABP_CharacterPG_FP.ABP_CharacterPG_FP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_B2F5B21840B64BFFE858AAAAC4D15335
struct UABP_CharacterPG_FP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_B2F5B21840B64BFFE858AAAAC4D15335_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ABP_CharacterPG_FP.ABP_CharacterPG_FP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_067A3D1A4A7E52E04EFB2B81E4A10FB0
struct UABP_CharacterPG_FP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_067A3D1A4A7E52E04EFB2B81E4A10FB0_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ABP_CharacterPG_FP.ABP_CharacterPG_FP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_83F580F74242F893E139D7A104F71ACA
struct UABP_CharacterPG_FP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_83F580F74242F893E139D7A104F71ACA_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ABP_CharacterPG_FP.ABP_CharacterPG_FP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_D9FE0D384430F67A4A8D259395545D6B
struct UABP_CharacterPG_FP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_D9FE0D384430F67A4A8D259395545D6B_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ABP_CharacterPG_FP.ABP_CharacterPG_FP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_576D56414029B84939EA06A22BCA4EAF
struct UABP_CharacterPG_FP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_576D56414029B84939EA06A22BCA4EAF_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ABP_CharacterPG_FP.ABP_CharacterPG_FP_C.EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_F64BB4E0451B9A7D2B986C96793F98EE
struct UABP_CharacterPG_FP_C_EvaluateGraphExposedInputs_ExecuteUbergraph_ABP_CharacterPG_FP_AnimGraphNode_TransitionResult_F64BB4E0451B9A7D2B986C96793F98EE_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ABP_CharacterPG_FP.ABP_CharacterPG_FP_C.AnimNotify_FootStep_L
struct UABP_CharacterPG_FP_C_AnimNotify_FootStep_L_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ABP_CharacterPG_FP.ABP_CharacterPG_FP_C.AnimNotify_FootStep_R
struct UABP_CharacterPG_FP_C_AnimNotify_FootStep_R_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ABP_CharacterPG_FP.ABP_CharacterPG_FP_C.AnimNotify_Jump_End
struct UABP_CharacterPG_FP_C_AnimNotify_Jump_End_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ABP_CharacterPG_FP.ABP_CharacterPG_FP_C.AnimNotify_Jump_Start
struct UABP_CharacterPG_FP_C_AnimNotify_Jump_Start_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ABP_CharacterPG_FP.ABP_CharacterPG_FP_C.AnimNotify_FootStep_Cloth
struct UABP_CharacterPG_FP_C_AnimNotify_FootStep_Cloth_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function ABP_CharacterPG_FP.ABP_CharacterPG_FP_C.BlueprintUpdateAnimation
struct UABP_CharacterPG_FP_C_BlueprintUpdateAnimation_Params
{
public:
	float                                        DeltaTimeX;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function ABP_CharacterPG_FP.ABP_CharacterPG_FP_C.BlueprintInitializeAnimation
struct UABP_CharacterPG_FP_C_BlueprintInitializeAnimation_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ABP_CharacterPG_FP.ABP_CharacterPG_FP_C.OnSetPlayerState_Event
struct UABP_CharacterPG_FP_C_OnSetPlayerState_Event_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function ABP_CharacterPG_FP.ABP_CharacterPG_FP_C.Event On Jumped
struct UABP_CharacterPG_FP_C_Event_On_Jumped_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function ABP_CharacterPG_FP.ABP_CharacterPG_FP_C.OnSetCurrentGun_Event
struct UABP_CharacterPG_FP_C_OnSetCurrentGun_Event_Params
{
public:
	class UItem_Gun_General*                     OldCurrentGun;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function ABP_CharacterPG_FP.ABP_CharacterPG_FP_C.OnSetGunModules_Event
struct UABP_CharacterPG_FP_C_OnSetGunModules_Event_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function ABP_CharacterPG_FP.ABP_CharacterPG_FP_C.OnAiming_Event
struct UABP_CharacterPG_FP_C_OnAiming_Event_Params
{
public:
	class UItem_Module_Optic*                    OpticItem;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x112C (0x112C - 0x0)
// Function ABP_CharacterPG_FP.ABP_CharacterPG_FP_C.ExecuteUbergraph_ABP_CharacterPG_FP
struct UABP_CharacterPG_FP_C_ExecuteUbergraph_ABP_CharacterPG_FP_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsAiming_ReturnValue;                     // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x7(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsAiming_ReturnValue_1;                   // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_1;                // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30D8[0x6];                                     // Fixing Size After Last Property 
	double                                       Temp_real_Variable;                                // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_1;       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30D9[0x7];                                     // Fixing Size After Last Property 
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30DB[0x7];                                     // Fixing Size After Last Property 
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Lerp_ReturnValue;                         // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_2;       // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30DE[0x2];                                     // Fixing Size After Last Property 
	float                                        CallFunc_GetGunRecoilAlpha_Backward_ReturnValue;   // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x48(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30DF[0x3];                                     // Fixing Size After Last Property 
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x64(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x74(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x84(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x94(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x95(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30E2[0x2];                                     // Fixing Size After Last Property 
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x98(0x10)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_3;       // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30E5[0x7];                                     // Fixing Size After Last Property 
	struct FVector2D                             Temp_struct_Variable;                              // 0xB0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_DoubleDouble_ReturnValue_1;     // 0xC1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_2;                // 0xC2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30E7[0x5];                                     // Fixing Size After Last Property 
	double                                       Temp_real_Variable_1;                              // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30E8[0x3];                                     // Fixing Size After Last Property 
	float                                        CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue; // 0xD4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_DoubleDouble_ReturnValue_2;     // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_4;       // 0xD9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_DoubleDouble_ReturnValue_3;     // 0xDA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_3;                 // 0xDB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0xDC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30E9[0x3];                                     // Fixing Size After Last Property 
	double                                       Temp_real_Variable_2;                              // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_5;       // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30EB[0x7];                                     // Fixing Size After Last Property 
	double                                       Temp_real_Variable_3;                              // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_6;       // 0xF8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0xF9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30ED[0x6];                                     // Fixing Size After Last Property 
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x100(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_3;                // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30EF[0x3];                                     // Fixing Size After Last Property 
	float                                        Temp_real_Variable_4;                              // 0x10C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_4;                 // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30F1[0x3];                                     // Fixing Size After Last Property 
	float                                        Temp_real_Variable_5;                              // 0x114(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_3;                              // 0x118(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30F2[0x7];                                     // Fixing Size After Last Property 
	double                                       Temp_real_Variable_6;                              // 0x120(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x128(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_1; // 0x130(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_DoubleDouble_ReturnValue_4;     // 0x134(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30F4[0x3];                                     // Fixing Size After Last Property 
	double                                       CallFunc_DegCos_ReturnValue;                       // 0x138(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_2;      // 0x140(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue_1;        // 0x148(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_3;      // 0x150(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_4;                // 0x158(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_DoubleDouble_ReturnValue_5;     // 0x159(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_7;       // 0x15A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_8;       // 0x15B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_5;                 // 0x15C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30F9[0x3];                                     // Fixing Size After Last Property 
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_4;      // 0x160(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_DoubleDouble_ReturnValue_6;     // 0x168(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30FB[0x7];                                     // Fixing Size After Last Property 
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_5;      // 0x170(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_6;      // 0x178(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue;                  // 0x180(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_9;       // 0x198(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30FC[0x7];                                     // Fixing Size After Last Property 
	double                                       CallFunc_DegSin_ReturnValue;                       // 0x1A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_ComposeRotators_ReturnValue;              // 0x1A8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	double                                       CallFunc_DegCos_ReturnValue_1;                     // 0x1C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0x1C8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_Multiply_Vector2DVector2D_ReturnValue;    // 0x1D8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector2D_X;                          // 0x1E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector2D_Y;                          // 0x1F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetGunRecoilAlpha_Backward_ReturnValue_1; // 0x1F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_30FE[0x4];                                     // Fixing Size After Last Property 
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_7;      // 0x200(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_5;                // 0x208(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3100[0x7];                                     // Fixing Size After Last Property 
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x210(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_10;      // 0x228(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_6;                 // 0x229(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_DoubleDouble_ReturnValue_7;     // 0x22A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_DoubleDouble_ReturnValue_8;     // 0x22B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3102[0x4];                                     // Fixing Size After Last Property 
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue_2;        // 0x230(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_DoubleDouble_ReturnValue_9;     // 0x238(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_11;      // 0x239(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_7;                 // 0x23A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_6;                // 0x23B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_12;      // 0x23C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_8;                 // 0x23D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_13;      // 0x23E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_9;                 // 0x23F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_7;                // 0x240(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3104[0x7];                                     // Fixing Size After Last Property 
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue_3;        // 0x248(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_14;      // 0x250(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_10;                // 0x251(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_DoubleDouble_ReturnValue_10;    // 0x252(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_DoubleDouble_ReturnValue_11;    // 0x253(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_15;      // 0x254(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_11;                // 0x255(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsAiming_ReturnValue_2;                   // 0x256(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_8;                // 0x257(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_16;      // 0x258(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_12;                // 0x259(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_9;                // 0x25A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_13;                // 0x25B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_17;      // 0x25C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_14;                // 0x25D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_310B[0x2];                                     // Fixing Size After Last Property 
	float                                        CallFunc_GetGunRecoilAlpha_Backward_ReturnValue_2; // 0x260(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_10;               // 0x264(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_15;                // 0x265(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_310D[0x2];                                     // Fixing Size After Last Property 
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_8;      // 0x268(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_DegSin_ReturnValue_1;                     // 0x270(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_DegCos_ReturnValue_2;                     // 0x278(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue_1;               // 0x280(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_Multiply_Vector2DVector2D_ReturnValue_1;  // 0x290(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_9;      // 0x2A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector2D_X_1;                        // 0x2A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector2D_Y_1;                        // 0x2B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_10;     // 0x2B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_11;     // 0x2C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Conv_IntToVector_ReturnValue;             // 0x2C8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue_1;                 // 0x2E0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorVector_ReturnValue;        // 0x2F8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0x310(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_12;     // 0x328(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_13;     // 0x330(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Lerp_ReturnValue_1;                       // 0x338(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue_1;                // 0x340(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_2; // 0x358(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_DoubleDouble_ReturnValue_12;    // 0x35C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_DoubleDouble_ReturnValue_13;    // 0x35D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3115[0x2];                                     // Fixing Size After Last Property 
	struct FRotator                              CallFunc_ComposeRotators_ReturnValue_1;            // 0x360(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_18;      // 0x378(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3118[0x7];                                     // Fixing Size After Last Property 
	struct FVector                               Temp_struct_Interpolated_current_gun_position_Variable; // 0x380(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_VectorVector_ReturnValue;        // 0x398(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_16;                // 0x399(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_311B[0x2];                                     // Fixing Size After Last Property 
	float                                        CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_3; // 0x39C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_DoubleDouble_ReturnValue_14;    // 0x3A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_311C[0x7];                                     // Fixing Size After Last Property 
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue_4;        // 0x3A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_14;     // 0x3B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue_2;                 // 0x3B8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue_3;                 // 0x3D0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x3E8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_4;                              // 0x400(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_311F[0x3];                                     // Fixing Size After Last Property 
	float                                        K2Node_Select_Default;                             // 0x404(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_DoubleDouble_ReturnValue_15;    // 0x408(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3122[0x7];                                     // Fixing Size After Last Property 
	double                                       Temp_real_Variable_7;                              // 0x410(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_5;                              // 0x418(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3123[0x7];                                     // Fixing Size After Last Property 
	struct FVector                               CallFunc_MakeVector_ReturnValue_4;                 // 0x420(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Default_1;                           // 0x438(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_15;     // 0x440(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_FInterpTo_ReturnValue;                    // 0x448(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x450(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3124[0x7];                                     // Fixing Size After Last Property 
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_16;     // 0x458(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue_2;                // 0x460(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_17;     // 0x478(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue_3;                // 0x480(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        CallFunc_GetCurveValue_ReturnValue;                // 0x498(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3125[0x4];                                     // Fixing Size After Last Property 
	struct FRotator                              CallFunc_ComposeRotators_ReturnValue_2;            // 0x4A0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        CallFunc_GetInstanceAssetPlayerTimeFromEndFraction_ReturnValue_4; // 0x4B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3126[0x4];                                     // Fixing Size After Last Property 
	struct FVector                               CallFunc_BreakTransform_Location;                  // 0x4C0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation;                  // 0x4D8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale;                     // 0x4F0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_DoubleDouble_ReturnValue_16;    // 0x508(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3127[0x3];                                     // Fixing Size After Last Property 
	float                                        Temp_real_Variable_8;                              // 0x50C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_real_Variable_9;                              // 0x510(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_6;                              // 0x514(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3128[0x3];                                     // Fixing Size After Last Property 
	float                                        CallFunc_GetCurveValue_ReturnValue_1;              // 0x518(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Select_Default_2;                           // 0x51C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_7;                              // 0x520(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3129[0x7];                                     // Fixing Size After Last Property 
	struct FVector                               CallFunc_Conv_DoubleToVector_ReturnValue_1;        // 0x528(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Conv_DoubleToVector_ReturnValue_2;        // 0x540(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorVector_ReturnValue_1;      // 0x558(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorVector_ReturnValue_2;      // 0x570(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_8;                              // 0x588(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_9;                              // 0x589(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_312A[0x2];                                     // Fixing Size After Last Property 
	float                                        Temp_real_Variable_10;                             // 0x58C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        Temp_real_Variable_11;                             // 0x590(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EGunSlot                          Temp_byte_Variable;                                // 0x594(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_312B[0x3];                                     // Fixing Size After Last Property 
	double                                       Temp_real_Variable_12;                             // 0x598(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Select_Default_3;                           // 0x5A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_312C[0x4];                                     // Fixing Size After Last Property 
	struct FRotator                              CallFunc_MakeRotator_ReturnValue_4;                // 0x5A8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	double                                       Temp_real_Variable_13;                             // 0x5C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_RLerp_ReturnValue;                        // 0x5C8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                              CallFunc_ComposeRotators_ReturnValue_3;            // 0x5E0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         Temp_bool_Variable_10;                             // 0x5F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_312E[0x7];                                     // Fixing Size After Last Property 
	struct FVector                               Temp_struct_Variable_1;                            // 0x600(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Default_4;                           // 0x618(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_FInterpTo_ReturnValue_1;                  // 0x620(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Temp_struct_Variable_2;                            // 0x628(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EGunSlot                          Temp_byte_Variable_1;                              // 0x640(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_312F[0x7];                                     // Fixing Size After Last Property 
	struct FVector                               K2Node_Select_Default_5;                           // 0x648(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorVector_ReturnValue_3;      // 0x660(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_1;           // 0x678(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_DeltaTimeX;                           // 0x690(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x694(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x695(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_11;               // 0x696(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsAiming_ReturnValue_3;                   // 0x697(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               K2Node_Select_Default_6;                           // 0x698(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               K2Node_Select_Default_7;                           // 0x6B0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_2;           // 0x6C8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue_19;      // 0x6E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3130[0x7];                                     // Fixing Size After Last Property 
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_18;     // 0x6E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue_1;           // 0x6F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue_5;                 // 0x6F8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue_5;        // 0x710(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_19;     // 0x718(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector2D_X_2;                        // 0x720(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector2D_Y_2;                        // 0x728(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue_6;                 // 0x730(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_20;     // 0x748(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_3;           // 0x750(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_21;     // 0x768(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_22;     // 0x770(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue_5;                // 0x778(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        CallFunc_GetScaledCapsuleRadius_ReturnValue;       // 0x790(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3134[0x4];                                     // Fixing Size After Last Property 
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x798(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFindFloorResult                      CallFunc_K2_ComputeFloorDist_FloorResult;          // 0x7B0(0xF8)(NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_IsFalling_ReturnValue;                    // 0x8A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3135[0x7];                                     // Fixing Size After Last Property 
	double                                       Temp_real_Interpolated_Character_Move_Direction_Variable; // 0x8B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_23;     // 0x8B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue_6;                // 0x8C0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                              CallFunc_ComposeRotators_ReturnValue_4;            // 0x8D8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	double                                       CallFunc_FInterpTo_ReturnValue_2;                  // 0x8F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_GetControlRotation_ReturnValue;           // 0x8F8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	float                                        CallFunc_BreakRotator_Roll;                        // 0x910(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Pitch;                       // 0x914(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakRotator_Yaw;                         // 0x918(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3136[0x4];                                     // Fixing Size After Last Property 
	class UPawnMovementComponent*                CallFunc_GetMovementComponent_ReturnValue;         // 0x920(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsFalling_ReturnValue_1;                  // 0x928(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue_12;               // 0x929(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x92A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_17;                // 0x92B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_313A[0x4];                                     // Fixing Size After Last Property 
	struct FRotator                              CallFunc_K2_GetActorRotation_ReturnValue;          // 0x930(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_GetVelocity_ReturnValue;                  // 0x948(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_X;                            // 0x960(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Y;                            // 0x968(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Z;                            // 0x970(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetVelocity_ReturnValue_1;                // 0x978(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue_7;                 // 0x990(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_VSize_ReturnValue;                        // 0x9A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_CalculateDirection_ReturnValue;           // 0x9B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x9B4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_313D[0x3];                                     // Fixing Size After Last Property 
	double                                       CallFunc_FInterpTo_Constant_ReturnValue;           // 0x9B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Has_Been_Initd_Variable;                 // 0x9C0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_313F[0x7];                                     // Fixing Size After Last Property 
	class UPawnMovementComponent*                CallFunc_GetMovementComponent_ReturnValue_1;       // 0x9C8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsFalling_ReturnValue_2;                  // 0x9D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsInvertMouse_ReturnValue;                // 0x9D1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3140[0x6];                                     // Fixing Size After Last Property 
	double                                       K2Node_Select_Default_8;                           // 0x9D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x9E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsAiming_ReturnValue_4;                   // 0x9E1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3142[0x2];                                     // Fixing Size After Last Property 
	float                                        CallFunc_GetFOVAngle_ReturnValue;                  // 0x9E4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetMouseSensitivityAimingValue_ReturnValue; // 0x9E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetMouseSensitivityValue_ReturnValue;     // 0x9EC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_MathExpression_ReturnValue;                 // 0x9F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x9F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_A_ImplicitCast;       // 0xA00(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_25;     // 0xA08(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_FClamp_ReturnValue;                       // 0xA10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Default_9;                           // 0xA18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_26;     // 0xA20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Conv_DoubleToVector_ReturnValue_3;        // 0xA28(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorVector_ReturnValue_4;      // 0xA40(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_X_1;                          // 0xA58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Y_1;                          // 0xA60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Z_1;                          // 0xA68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0xA70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetInputMouseDelta_DeltaX;                // 0xA78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetInputMouseDelta_DeltaY;                // 0xA7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_27;     // 0xA80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector2D_X_3;                        // 0xA88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector2D_Y_3;                        // 0xA90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_28;     // 0xA98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_29;     // 0xAA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_30;     // 0xAA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue_7;        // 0xAB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_31;     // 0xAB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_32;     // 0xAC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_33;     // 0xAC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue_8;        // 0xAD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue_2;               // 0xAD8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetGunRecoilAlpha_Pitch_ReturnValue;      // 0xAE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3145[0x4];                                     // Fixing Size After Last Property 
	struct FVector2D                             CallFunc_Vector2DInterpTo_ReturnValue;             // 0xAF0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_34;     // 0xB00(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             K2Node_Select_Default_10;                          // 0xB08(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_FMin_ReturnValue;                         // 0xB18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue_9;        // 0xB20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0xB28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetGunRecoilAlpha_Yaw_ReturnValue;        // 0xB30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3147[0x4];                                     // Fixing Size After Last Property 
	double                                       CallFunc_FClamp_ReturnValue_1;                     // 0xB38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_IsClosed_Variable;                       // 0xB40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3148[0x7];                                     // Fixing Size After Last Property 
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue_1;      // 0xB48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_35;     // 0xB50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue_2;           // 0xB58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPawn*                                 CallFunc_TryGetPawnOwner_ReturnValue;              // 0xB60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector2D_X_4;                        // 0xB68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector2D_Y_4;                        // 0xB70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_PG_Game_Character_C*               K2Node_DynamicCast_AsBP_PG_Game_Character;         // 0xB78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xB80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3149[0x7];                                     // Fixing Size After Last Property 
	double                                       CallFunc_Lerp_ReturnValue_2;                       // 0xB88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue_8;                 // 0xB90(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPlayerController*                     CallFunc_GetPlayerController_ReturnValue_1;        // 0xBA8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UBP_PG_PlayerController_Game_C*        K2Node_DynamicCast_AsBP_PG_Player_Controller_Game; // 0xBB0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0xBB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_5;                    // 0xBB9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_314A[0x6];                                     // Fixing Size After Last Property 
	double                                       CallFunc_DegSin_ReturnValue_2;                     // 0xBC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector2D_X_5;                        // 0xBC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector2D_Y_5;                        // 0xBD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_FInterpTo_ReturnValue_3;                  // 0xBD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_36;     // 0xBE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_37;     // 0xBE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue_9;                 // 0xBF0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_4;           // 0xC08(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItem_Gun_General*                     K2Node_CustomEvent_OldCurrentGun;                  // 0xC20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_X_2;                          // 0xC28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Y_2;                          // 0xC30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Z_2;                          // 0xC38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_6;                    // 0xC40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_314D[0x7];                                     // Fixing Size After Last Property 
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue_10;       // 0xC48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_38;     // 0xC50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue_10;                // 0xC58(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetRateScale_ReturnValue;                 // 0xC70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_314E[0x4];                                     // Fixing Size After Last Property 
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_5;           // 0xC78(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetPlayLength_ReturnValue;                // 0xC90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_314F[0x4];                                     // Fixing Size After Last Property 
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue_11;       // 0xC98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_39;     // 0xCA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_PG_PlayerState_Game_C*             K2Node_DynamicCast_AsBP_PG_Player_State_Game;      // 0xCA8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0xCB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_7;                    // 0xCB1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3150[0x6];                                     // Fixing Size After Last Property 
	struct FVector                               CallFunc_VInterpToExtended_ReturnValue;            // 0xCB8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_8;                    // 0xCD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3151[0x7];                                     // Fixing Size After Last Property 
	struct FVector                               K2Node_Select_Default_11;                          // 0xCD8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_18;                // 0xCF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3152[0x7];                                     // Fixing Size After Last Property 
	double                                       CallFunc_BreakVector2D_X_6;                        // 0xCF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector2D_Y_6;                        // 0xD00(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_40;     // 0xD08(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CallFunc_GetSocketTransform_ReturnValue;           // 0xD10(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_41;     // 0xD70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakTransform_Location_1;                // 0xD78(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation_1;                // 0xD90(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale_1;                   // 0xDA8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_MakeRotator_ReturnValue_7;                // 0xDC0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                              CallFunc_Multiply_RotatorFloat_ReturnValue;        // 0xDD8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FRotator                              CallFunc_ComposeRotators_ReturnValue_5;            // 0xDF0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	bool                                         CallFunc_IsValid_ReturnValue_9;                    // 0xE08(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_315B[0x7];                                     // Fixing Size After Last Property 
	struct FVector                               CallFunc_GetActorRelativeLocation_ReturnValue;     // 0xE10(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetComponentScale_ReturnValue;         // 0xE28(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTransform                            CallFunc_GetSocketTransform_ReturnValue_1;         // 0xE40(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Divide_VectorVector_ReturnValue;          // 0xEA0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakTransform_Location_2;                // 0xEB8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_BreakTransform_Rotation_2;                // 0xED0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_BreakTransform_Scale_2;                   // 0xEE8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue_1;      // 0xF00(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue_2;      // 0xF18(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_6;           // 0xF30(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UItem_Module_Optic*                    K2Node_CustomEvent_OpticItem;                      // 0xF48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_RLerp_Alpha_ImplicitCast;                 // 0xF50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_Multiply_RotatorFloat_B_ImplicitCast;     // 0xF54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Conv_DoubleToVector_InDouble_ImplicitCast; // 0xF58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;    // 0xF60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_1;  // 0xF68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0xF70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_FInterpTo_InterpSpeed_ImplicitCast;       // 0xF78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_FInterpTo_DeltaTime_ImplicitCast;         // 0xF80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1;   // 0xF88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_2;  // 0xF90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_B_ImplicitCast;       // 0xF98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_A_ImplicitCast_2;   // 0xFA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_MakeRotator_Roll_ImplicitCast;            // 0xFA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_StructMemberSet___FloatProperty_8_ImplicitCast; // 0xFAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_StructMemberSet___FloatProperty_7_ImplicitCast; // 0xFB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3164[0x4];                                     // Fixing Size After Last Property 
	double                                       CallFunc_Multiply_DoubleDouble_A_ImplicitCast_3;   // 0xFB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_A_ImplicitCast_1;     // 0xFC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_A_ImplicitCast_2;     // 0xFC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_B_ImplicitCast;     // 0xFD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_StructMemberSet_Yaw_ImplicitCast;           // 0xFD8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3165[0x4];                                     // Fixing Size After Last Property 
	double                                       CallFunc_Multiply_DoubleDouble_A_ImplicitCast_4;   // 0xFE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_StructMemberSet___FloatProperty_10_ImplicitCast; // 0xFE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_StructMemberSet___FloatProperty_9_ImplicitCast; // 0xFEC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_MakeRotator_Pitch_ImplicitCast;           // 0xFF0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3166[0x4];                                     // Fixing Size After Last Property 
	double                                       CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_3;  // 0xFF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_4;  // 0x1000(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast_1;    // 0x1008(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_5;  // 0x1010(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_MakeRotator_Roll_ImplicitCast_1;          // 0x1018(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3167[0x4];                                     // Fixing Size After Last Property 
	double                                       CallFunc_Multiply_DoubleDouble_A_ImplicitCast_5;   // 0x1020(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_MakeRotator_Roll_ImplicitCast_2;          // 0x1028(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_3168[0x4];                                     // Fixing Size After Last Property 
	double                                       CallFunc_LessEqual_DoubleDouble_A_ImplicitCast_6;  // 0x1030(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Conv_DoubleToVector_InDouble_ImplicitCast_1; // 0x1038(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Conv_DoubleToVector_InDouble_ImplicitCast_2; // 0x1040(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_FInterpTo_DeltaTime_ImplicitCast_1;       // 0x1048(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_B_ImplicitCast_1;     // 0x1050(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_MakeRotator_Pitch_ImplicitCast_1;         // 0x1058(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_MakeRotator_Roll_ImplicitCast_3;          // 0x105C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_MakeRotator_Yaw_ImplicitCast;             // 0x1060(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_MakeRotator_Pitch_ImplicitCast_2;         // 0x1064(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_FInterpTo_DeltaTime_ImplicitCast_2;       // 0x1068(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_FInterpTo_Current_ImplicitCast;           // 0x1070(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_FInterpTo_Target_ImplicitCast;            // 0x1078(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_VariableSet_LeanBodyAlphaInterp_ImplicitCast; // 0x1080(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_316A[0x4];                                     // Fixing Size After Last Property 
	double                                       K2Node_VariableSet_CameraPitch_ImplicitCast;       // 0x1088(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_VariableSet_MoveDirection_ImplicitCast;     // 0x1090(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_FInterpTo_Constant_DeltaTime_ImplicitCast; // 0x1098(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_MathExpression_FOV_ImplicitCast;            // 0x10A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_MathExpression_MouseSensitivityAiming_ImplicitCast; // 0x10A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_A_ImplicitCast_6;   // 0x10B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Conv_DoubleToVector_InDouble_ImplicitCast_3; // 0x10B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_B_ImplicitCast_2;     // 0x10C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_B_ImplicitCast_3;     // 0x10C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_VInterpToExtended_interpSpeed_X_ImplicitCast; // 0x10D0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_VInterpToExtended_interpSpeed_Y_ImplicitCast; // 0x10D4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_VInterpToExtended_interpSpeed_Z_ImplicitCast; // 0x10D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_316B[0x4];                                     // Fixing Size After Last Property 
	double                                       CallFunc_Multiply_DoubleDouble_A_ImplicitCast_7;   // 0x10E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_A_ImplicitCast_8;   // 0x10E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast; // 0x10F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast_1; // 0x10F4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_A_ImplicitCast_9;   // 0x10F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_B_ImplicitCast_4;     // 0x1100(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Subtract_DoubleDouble_A_ImplicitCast;     // 0x1108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_B_ImplicitCast_5;     // 0x1110(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_A_ImplicitCast_3;     // 0x1118(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_RetriggerableDelay_Duration_ImplicitCast; // 0x1120(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_MakeRotator_Roll_ImplicitCast_4;          // 0x1124(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_MakeRotator_Yaw_ImplicitCast_1;           // 0x1128(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}


