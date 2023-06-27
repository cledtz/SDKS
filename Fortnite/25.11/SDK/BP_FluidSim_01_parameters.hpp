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

// 0x30 (0x30 - 0x0)
// Function BP_FluidSim_01.BP_FluidSim_01_C.CycleDebugRenderTargets
struct ABP_FluidSim_01_C_CycleDebugRenderTargets_Params
{
public:
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Percent_IntInt_ReturnValue;               // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Percent_IntInt_ReturnValue_1;             // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9CDD[0x4];                                     // Fixing Size After Last Property..
	class UTextureRenderTarget2D*                CallFunc_Array_Get_Item;                           // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                CallFunc_Array_Get_Item_1;                         // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Percent_IntInt_ReturnValue_2;             // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                CallFunc_Array_Get_Item_2;                         // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x43 (0x43 - 0x0)
// Function BP_FluidSim_01.BP_FluidSim_01_C.Get Frames Since Last Active Forces
struct ABP_FluidSim_01_C_Get_Frames_Since_Last_Active_Forces_Params
{
public:
	int32                                        Temp_int_Variable;                                 // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UActorComponent*>               CallFunc_Map_Keys_Keys;                            // 0x8(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9CDE[0x4];                                     // Fixing Size After Last Property..
	TArray<class UActorComponent*>               CallFunc_Map_Keys_Keys_1;                          // 0x20(0x10)(ReferenceParm, ContainsInstancedReference)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9CDF[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_1;             // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9CE0[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue_2;             // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue_1;                  // 0x42(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x60 (0x60 - 0x0)
// Function BP_FluidSim_01.BP_FluidSim_01_C.Clear Sim from Waterbody MIDs
struct ABP_FluidSim_01_C_Clear_Sim_from_Waterbody_MIDs_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9CE1[0x4];                                     // Fixing Size After Last Property..
	TArray<class AWaterBody*>                    CallFunc_GetAllActorsOfClass_OutActors;            // 0x10(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9CE2[0x4];                                     // Fixing Size After Last Property..
	class AWaterBody*                            CallFunc_Array_Get_Item;                           // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9CE3[0x7];                                     // Fixing Size After Last Property..
	class UWaterBodyComponent*                   CallFunc_GetWaterBodyComponent_ReturnValue;        // 0x38(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_GetRiverToLakeTransitionMaterialInstance_ReturnValue; // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_GetRiverToOceanTransitionMaterialInstance_ReturnValue; // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9CE4[0x6];                                     // Fixing Size After Last Property..
	class UMaterialInstanceDynamic*              CallFunc_GetWaterMaterialInstance_ReturnValue;     // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x152 (0x152 - 0x0)
// Function BP_FluidSim_01.BP_FluidSim_01_C.Remove Projectile Force
struct ABP_FluidSim_01_C_Remove_Projectile_Force_Params
{
public:
	class UActorComponent*                       Component;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FFluidForceDynamicPerInstanceData     CallFunc_Map_Find_Value;                           // 0x8(0x148)(ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x150(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Remove_ReturnValue;                   // 0x151(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x62C (0x62C - 0x0)
// Function BP_FluidSim_01.BP_FluidSim_01_C.Register Projectile Force
struct ABP_FluidSim_01_C_Register_Projectile_Force_Params
{
public:
	struct FFluidForceDynamic                    Dynamic_Fluid_Force;                               // 0x0(0x70)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
	class USceneComponent*                       Tracked_Component;                                 // 0x70(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	TMap<class FName, struct FVector>            SocketVelMap;                                      // 0x78(0x50)(Edit, BlueprintVisible)
	TMap<class FName, struct FVector>            SocketLocMap;                                      // 0xC8(0x50)(Edit, BlueprintVisible)
	struct FFluidForceDynamic                    LocalDynamicForce;                                 // 0x118(0x70)(Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
	struct FVector                               Temp_struct_Variable;                              // 0x188(0x18)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x1A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9CE5[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               Temp_struct_Variable_1;                            // 0x1A8(0x18)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x1C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9CE6[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               Temp_struct_Variable_2;                            // 0x1C8(0x18)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x1E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x1E4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x1E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x1EC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0x1F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9CE7[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               Temp_struct_Variable_3;                            // 0x1F8(0x18)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetShallowWaterMaxDynamicForces_ReturnValue; // 0x210(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Map_Length_ReturnValue;                   // 0x214(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x218(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x219(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x21A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x21B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9CE8[0x4];                                     // Fixing Size After Last Property..
	class UMaterialInterface*                    Temp_object_Variable;                              // 0x220(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x228(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9CE9[0x7];                                     // Fixing Size After Last Property..
	class UMaterialInterface*                    K2Node_Select_Default;                             // 0x230(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetComponentBounds_Origin;                // 0x238(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetComponentBounds_BoxExtent;             // 0x250(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetComponentBounds_SphereRadius;          // 0x268(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9CEA[0x4];                                     // Fixing Size After Last Property..
	TArray<class FName>                          CallFunc_Map_Values_Values;                        // 0x270(0x10)(ReferenceParm)
	TArray<class FName>                          CallFunc_Map_Keys_Keys;                            // 0x280(0x10)(ReferenceParm)
	class FName                                  CallFunc_Array_Get_Item;                           // 0x290(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Array_Get_Item_1;                         // 0x294(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x298(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x29C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x2A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x2A1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9CEB[0x6];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x2A8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                K2Node_DynamicCast_AsSkeletal_Mesh_Component;      // 0x2C0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x2C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9CEC[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue_1;    // 0x2D0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x2E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9CED[0x7];                                     // Fixing Size After Last Property..
	class UMaterialInterface*                    Temp_object_Variable_1;                            // 0x2F0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x2F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9CEE[0x7];                                     // Fixing Size After Last Property..
	TArray<class FName>                          CallFunc_Map_Keys_Keys_1;                          // 0x300(0x10)(ReferenceParm)
	class FName                                  CallFunc_Array_Get_Item_2;                         // 0x310(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9CEF[0x4];                                     // Fixing Size After Last Property..
	class UMaterialInterface*                    K2Node_Select_Default_1;                           // 0x318(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetSocketLocation_ReturnValue;            // 0x320(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x338(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9CF0[0x4];                                     // Fixing Size After Last Property..
	struct FFluidForceDynamicPerInstanceData     K2Node_MakeStruct_FluidForceDynamicPerInstanceData; // 0x340(0x148)(ContainsInstancedReference, HasGetValueTypeHash)
	TMap<class FName, struct FVector>            K2Node_MakeMap_Map;                                // 0x488(0x50)()
	struct FFluidForceDynamicPerInstanceData     K2Node_MakeStruct_FluidForceDynamicPerInstanceData_1; // 0x4D8(0x148)(ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0x620(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_3;                // 0x624(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9CF1[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x628(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function BP_FluidSim_01.BP_FluidSim_01_C.GetPlayerPawnForces
struct ABP_FluidSim_01_C_GetPlayerPawnForces_Params
{
public:
};

// 0xEA (0xEA - 0x0)
// Function BP_FluidSim_01.BP_FluidSim_01_C.Validate RTs
struct ABP_FluidSim_01_C_Validate_RTs_Params
{
public:
	bool                                         RTs_All_Valid;                                     // 0x0(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AnyRTInvalid;                                      // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9CF2[0x6];                                     // Fixing Size After Last Property..
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UWaterSubsystem*                       CallFunc_GetWorldSubsystem_ReturnValue;            // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9CF3[0x4];                                     // Fixing Size After Last Property..
	class UWaterSubsystem*                       CallFunc_GetWorldSubsystem_ReturnValue_1;          // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_4;              // 0x78(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_5;              // 0x88(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_6;              // 0x98(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9CF4[0x7];                                     // Fixing Size After Last Property..
	class FString                                CallFunc_Concat_StrStr_ReturnValue_7;              // 0xB0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_8;              // 0xC0(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UWaterSubsystem*                       CallFunc_GetWorldSubsystem_ReturnValue_2;          // 0xD0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xD8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0xD9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9CF5[0x2];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xDC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                CallFunc_Array_Get_Item;                           // 0xE0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0xE9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x61 (0x61 - 0x0)
// Function BP_FluidSim_01.BP_FluidSim_01_C.Set Waterbody MID Params
struct ABP_FluidSim_01_C_Set_Waterbody_MID_Params_Params
{
public:
	int32                                        Temp_int_Array_Index_Variable;                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9CF6[0x4];                                     // Fixing Size After Last Property..
	TArray<class AWaterBody*>                    CallFunc_GetAllActorsOfClass_OutActors;            // 0x10(0x10)(ReferenceParm)
	class AWaterBody*                            CallFunc_Array_Get_Item;                           // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9CF7[0x4];                                     // Fixing Size After Last Property..
	class UWaterBodyComponent*                   CallFunc_GetWaterBodyComponent_ReturnValue;        // 0x30(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9CF8[0x7];                                     // Fixing Size After Last Property..
	class UMaterialInstanceDynamic*              CallFunc_GetRiverToLakeTransitionMaterialInstance_ReturnValue; // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9CF9[0x7];                                     // Fixing Size After Last Property..
	class UMaterialInstanceDynamic*              CallFunc_GetRiverToOceanTransitionMaterialInstance_ReturnValue; // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_GetWaterMaterialInstance_ReturnValue;     // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function BP_FluidSim_01.BP_FluidSim_01_C.GetLocalPawn
struct ABP_FluidSim_01_C_GetLocalPawn_Params
{
public:
	class APawn*                                 Pawn;                                              // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class APawn*                                 CallFunc_K2_GetPawn_ReturnValue;                   // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x718 (0x718 - 0x0)
// Function BP_FluidSim_01.BP_FluidSim_01_C.Draw Dynamic Force
struct ABP_FluidSim_01_C_Draw_Dynamic_Force_Params
{
public:
	class UCanvas*                               Canvas;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             Canvas_Size;                                       // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFluidForceDynamicPerInstanceData     Dynamic_Force_Settings;                            // 0x18(0x148)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              LocalMID;                                          // 0x160(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FFluidForceDynamicPerInstanceData     LocalForce;                                        // 0x168(0x148)(Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x2B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9CFA[0x4];                                     // Fixing Size After Last Property..
	class FString                                CallFunc_Conv_IntToString_ReturnValue;             // 0x2B8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x2C8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_1;              // 0x2D8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_2;              // 0x2E8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue_3;              // 0x2F8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x308(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue_1;          // 0x30C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_Get_Force_MID_MID;                        // 0x310(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class FName>                          CallFunc_Map_Keys_Keys;                            // 0x318(0x10)(ReferenceParm)
	class FName                                  CallFunc_Array_Get_Item;                           // 0x328(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x32C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Map_Find_Value;                           // 0x330(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x334(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x335(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9CFB[0x2];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0x338(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x350(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorVector_ReturnValue;        // 0x358(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Dot_VectorVector_ReturnValue;             // 0x370(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_DoubleDouble_ReturnValue;            // 0x378(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9CFC[0x3];                                     // Fixing Size After Last Property..
	struct FLinearColor                          CallFunc_Conv_VectorToLinearColor_ReturnValue;     // 0x37C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x38C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x390(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9CFD[0x7];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x398(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_VSize_ReturnValue;                        // 0x3A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Convert_Force_Position_UV_Location;       // 0x3A8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_Conv_VectorToLinearColor_ReturnValue_1;   // 0x3C0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_Conv_VectorToVector2D_ReturnValue;        // 0x3D0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_Set_Canvas_Material_Scale_and_Position_Screen_Position; // 0x3E0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_Set_Canvas_Material_Scale_and_Position_Screen_Size; // 0x3F0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x400(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9CFE[0x7];                                     // Fixing Size After Last Property..
	struct FRotator                              CallFunc_K2_GetComponentRotation_ReturnValue;      // 0x408(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x420(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetAxes_X;                                // 0x428(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetAxes_Y;                                // 0x440(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetAxes_Z;                                // 0x458(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x470(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_Conv_VectorToLinearColor_ReturnValue_2;   // 0x474(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_Conv_VectorToLinearColor_ReturnValue_3;   // 0x484(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_Conv_VectorToLinearColor_ReturnValue_4;   // 0x494(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9CFF[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_2;      // 0x4A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_Conv_VectorToLinearColor_ReturnValue_5;   // 0x4B0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_3;      // 0x4C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Convert_Force_Position_UV_Location_1;     // 0x4C8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_Conv_VectorToVector2D_ReturnValue_1;      // 0x4E0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Map_Find_Value_1;                         // 0x4F0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_1;                   // 0x508(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D00[0x7];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x510(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_X;                            // 0x518(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Y;                            // 0x520(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Z;                            // 0x528(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_VSize_ReturnValue_1;                      // 0x530(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x538(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Conv_IntToDouble_ReturnValue_1;           // 0x540(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SignOfFloat_ReturnValue;                  // 0x548(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Map_Find_Value_2;                         // 0x550(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_2;                   // 0x568(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D01[0x7];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_4;      // 0x570(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x578(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D02[0x7];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_5;      // 0x580(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_X_1;                          // 0x588(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Y_1;                          // 0x590(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Z_1;                          // 0x598(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_VSize_ReturnValue_2;                      // 0x5A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue_1;           // 0x5A8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Map_Find_Value_3;                         // 0x5B0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_3;                   // 0x5C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D03[0x7];                                     // Fixing Size After Last Property..
	double                                       CallFunc_SignOfFloat_ReturnValue_1;                // 0x5D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_X_2;                          // 0x5D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Y_2;                          // 0x5E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Z_2;                          // 0x5E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_6;      // 0x5F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_MakeStruct_LinearColor;                     // 0x5F8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_7;      // 0x608(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Map_Find_Value_4;                         // 0x610(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue_4;                   // 0x628(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0x629(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D04[0x6];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_8;      // 0x630(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0x638(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D05[0x7];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue_1;        // 0x640(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_Set_Canvas_Material_Scale_and_Position_Screen_Position_1; // 0x648(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_Set_Canvas_Material_Scale_and_Position_Screen_Size_1; // 0x658(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_X_3;                          // 0x668(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Y_3;                          // 0x670(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Z_3;                          // 0x678(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_Divide_Vector2DFloat_ReturnValue;         // 0x680(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          K2Node_MakeStruct_LinearColor_1;                   // 0x690(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_Divide_Vector2DFloat_ReturnValue_1;       // 0x6A0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_A_ImplicitCast;       // 0x6B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_B_ImplicitCast;     // 0x6B8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetScalarParameterValue_Value_ImplicitCast; // 0x6C0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D06[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x6C8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_B_ImplicitCast_1;   // 0x6D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetScalarParameterValue_Value_ImplicitCast_1; // 0x6D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D07[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Multiply_DoubleDouble_A_ImplicitCast_1;   // 0x6E0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_B_ImplicitCast_2;   // 0x6E8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_B_ImplicitCast_3;   // 0x6F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_MakeStruct_A_ImplicitCast;                  // 0x6F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_MakeStruct_R_ImplicitCast;                  // 0x6FC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_MakeStruct_G_ImplicitCast;                  // 0x700(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_MakeStruct_B_ImplicitCast;                  // 0x704(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_MakeStruct_A_ImplicitCast_1;                // 0x708(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_MakeStruct_R_ImplicitCast_1;                // 0x70C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_MakeStruct_G_ImplicitCast_1;                // 0x710(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_MakeStruct_B_ImplicitCast_1;                // 0x714(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x159 (0x159 - 0x0)
// Function BP_FluidSim_01.BP_FluidSim_01_C.Remove Dynamic Force
struct ABP_FluidSim_01_C_Remove_Dynamic_Force_Params
{
public:
	class UActorComponent*                       Component;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Remove_ReturnValue;                   // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D08[0x7];                                     // Fixing Size After Last Property..
	struct FFluidForceDynamicPerInstanceData     CallFunc_Map_Find_Value;                           // 0x10(0x148)(ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x158(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x670 (0x670 - 0x0)
// Function BP_FluidSim_01.BP_FluidSim_01_C.Register Dynamic Force
struct ABP_FluidSim_01_C_Register_Dynamic_Force_Params
{
public:
	struct FFluidForceDynamic                    Dynamic_Fluid_Force;                               // 0x0(0x70)(BlueprintVisible, BlueprintReadOnly, Parm, ContainsInstancedReference, HasGetValueTypeHash)
	class USceneComponent*                       Tracked_Component;                                 // 0x70(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       WaterLevel;                                        // 0x78(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       LocalWaterLevel;                                   // 0x80(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class FName, struct FVector>            SocketVelMap;                                      // 0x88(0x50)(Edit, BlueprintVisible)
	TMap<class FName, struct FVector>            SocketLocMap;                                      // 0xD8(0x50)(Edit, BlueprintVisible)
	struct FFluidForceDynamic                    LocalDynamicForce;                                 // 0x128(0x70)(Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
	struct FVector                               Temp_struct_Variable;                              // 0x198(0x18)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x1B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x1B4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x1B8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D09[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               Temp_struct_Variable_1;                            // 0x1C0(0x18)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Temp_struct_Variable_2;                            // 0x1D8(0x18)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x1F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x1F4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x1F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0x1FC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Temp_struct_Variable_3;                            // 0x200(0x18)(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x218(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_X;                            // 0x230(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Y;                            // 0x238(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Z;                            // 0x240(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_SelectFloat_ReturnValue;                  // 0x248(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetShallowWaterMaxDynamicForces_ReturnValue; // 0x250(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Map_Length_ReturnValue;                   // 0x254(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x258(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x259(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x25A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x25B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D0A[0x4];                                     // Fixing Size After Last Property..
	class UMaterialInterface*                    Temp_object_Variable;                              // 0x260(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x268(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D0B[0x7];                                     // Fixing Size After Last Property..
	class UMaterialInterface*                    K2Node_Select_Default;                             // 0x270(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0x278(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x27C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetComponentBounds_Origin;                // 0x280(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetComponentBounds_BoxExtent;             // 0x298(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetComponentBounds_SphereRadius;          // 0x2B0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D0C[0x4];                                     // Fixing Size After Last Property..
	TArray<class FName>                          CallFunc_Map_Values_Values;                        // 0x2B8(0x10)(ReferenceParm)
	TArray<class FName>                          CallFunc_Map_Keys_Keys;                            // 0x2C8(0x10)(ReferenceParm)
	class FName                                  CallFunc_Array_Get_Item;                           // 0x2D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Array_Get_Item_1;                         // 0x2DC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x2E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x2E4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x2E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x2E9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D0D[0x6];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue;      // 0x2F0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class USkeletalMeshComponent*                K2Node_DynamicCast_AsSkeletal_Mesh_Component;      // 0x308(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x310(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D0E[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_K2_GetComponentLocation_ReturnValue_1;    // 0x318(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x330(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D0F[0x7];                                     // Fixing Size After Last Property..
	class UMaterialInterface*                    Temp_object_Variable_1;                            // 0x338(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x340(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D10[0x7];                                     // Fixing Size After Last Property..
	TArray<class FName>                          CallFunc_Map_Keys_Keys_1;                          // 0x348(0x10)(ReferenceParm)
	class FName                                  CallFunc_Array_Get_Item_2;                         // 0x358(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D11[0x4];                                     // Fixing Size After Last Property..
	class UMaterialInterface*                    K2Node_Select_Default_1;                           // 0x360(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetSocketLocation_ReturnValue;            // 0x368(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x380(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_3;                // 0x384(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D12[0x3];                                     // Fixing Size After Last Property..
	struct FFluidForceDynamicPerInstanceData     K2Node_MakeStruct_FluidForceDynamicPerInstanceData; // 0x388(0x148)(ContainsInstancedReference, HasGetValueTypeHash)
	TMap<class FName, struct FVector>            K2Node_MakeMap_Map;                                // 0x4D0(0x50)()
	struct FFluidForceDynamicPerInstanceData     K2Node_MakeStruct_FluidForceDynamicPerInstanceData_1; // 0x520(0x148)(ContainsInstancedReference, HasGetValueTypeHash)
	float                                        K2Node_MakeStruct_WaterLevel_34_A4E505D148073B883CA7B1B09A3E34A8_ImplicitCast; // 0x668(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_MakeStruct_WaterLevel_34_A4E505D148073B883CA7B1B09A3E34A8_ImplicitCast_1; // 0x66C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8F5 (0x8F5 - 0x0)
// Function BP_FluidSim_01.BP_FluidSim_01_C.Update Dynamic Forces
struct ABP_FluidSim_01_C_Update_Dynamic_Forces_Params
{
public:
	struct FVector                               CurSocketLoc;                                      // 0x0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFluidForceDynamicPerInstanceData     LocalForce;                                        // 0x18(0x148)(Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x160(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x164(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x168(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x16C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x170(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x174(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<struct FFluidForceDynamicPerInstanceData> CallFunc_Map_Values_Values;                        // 0x178(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x188(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x18C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D13[0x3];                                     // Fixing Size After Last Property..
	TMap<class FName, struct FVector>            K2Node_MakeMap_Map;                                // 0x190(0x50)()
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D14[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_GetComponentBounds_Origin;                // 0x1E8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetComponentBounds_BoxExtent;             // 0x200(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetComponentBounds_SphereRadius;          // 0x218(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D15[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_SelectVector_ReturnValue;                 // 0x220(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0x238(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFluidForceDynamicPerInstanceData     K2Node_MakeStruct_FluidForceDynamicPerInstanceData; // 0x250(0x148)(ContainsInstancedReference, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x398(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D16[0x3];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0x39C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFluidForceDynamicPerInstanceData     CallFunc_Array_Get_Item;                           // 0x3A0(0x148)(ContainsInstancedReference, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetComponentBounds_Origin_1;              // 0x4E8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetComponentBounds_BoxExtent_1;           // 0x500(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetComponentBounds_SphereRadius_1;        // 0x518(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x51C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x51D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D17[0x2];                                     // Fixing Size After Last Property..
	class USkeletalMeshComponent*                K2Node_DynamicCast_AsSkeletal_Mesh_Component;      // 0x520(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x528(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D18[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_GetComponentBounds_Origin_2;              // 0x530(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetComponentBounds_BoxExtent_2;           // 0x548(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetComponentBounds_SphereRadius_2;        // 0x560(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0x564(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue_1;      // 0x568(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x580(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D19[0x4];                                     // Fixing Size After Last Property..
	TArray<struct FFluidForceDynamicPerInstanceData> CallFunc_Map_Values_Values_1;                      // 0x588(0x10)(ReferenceParm, ContainsInstancedReference)
	struct FFluidForceDynamicPerInstanceData     CallFunc_Array_Get_Item_1;                         // 0x598(0x148)(ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x6E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D1A[0x4];                                     // Fixing Size After Last Property..
	TMap<class FName, struct FVector>            K2Node_MakeMap_Map_1;                              // 0x6E8(0x50)()
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x738(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D1B[0x7];                                     // Fixing Size After Last Property..
	struct FFluidForceDynamicPerInstanceData     K2Node_MakeStruct_FluidForceDynamicPerInstanceData_1; // 0x740(0x148)(ContainsInstancedReference, HasGetValueTypeHash)
	TArray<class FName>                          CallFunc_Map_Keys_Keys;                            // 0x888(0x10)(ReferenceParm)
	class FName                                  CallFunc_Array_Get_Item_2;                         // 0x898(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x89C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D1C[0x3];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_GetSocketLocation_ReturnValue;            // 0x8A0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Map_Find_Value;                           // 0x8B8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x8D0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D1D[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue_2;      // 0x8D8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x8F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x8F4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x154 (0x154 - 0x0)
// Function BP_FluidSim_01.BP_FluidSim_01_C.Draw Impulse Force
struct ABP_FluidSim_01_C_Draw_Impulse_Force_Params
{
public:
	class UCanvas*                               Canvas;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             Canvas_Size;                                       // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFluidForceImpulsePerInstanceData     Impulse_Settings;                                  // 0x18(0x61)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_9D1E[0x7];                                     // Fixing Size After Last Property..
	class UMaterialInstanceDynamic*              LocalImpulseMID;                                   // 0x80(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D1F[0x7];                                     // Fixing Size After Last Property..
	class UMaterialInstanceDynamic*              CallFunc_Get_Force_MID_MID;                        // 0x98(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Convert_Force_Position_UV_Location;       // 0xA0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_Conv_VectorToVector2D_ReturnValue;        // 0xB8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_Get_Force_MID_MID_1;                      // 0xD0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_FClamp_ReturnValue;                       // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;  // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue_1;        // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_Set_Canvas_Material_Scale_and_Position_Screen_Position; // 0x100(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_Set_Canvas_Material_Scale_and_Position_Screen_Size; // 0x110(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Subtract_DoubleDouble_A_ImplicitCast;     // 0x120(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Subtract_DoubleDouble_B_ImplicitCast;     // 0x128(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_A_ImplicitCast;       // 0x130(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_A_ImplicitCast;     // 0x138(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_B_ImplicitCast;       // 0x140(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_MultiplyMultiply_FloatFloat_Exp_ImplicitCast; // 0x148(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetScalarParameterValue_Value_ImplicitCast; // 0x150(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x144 (0x144 - 0x0)
// Function BP_FluidSim_01.BP_FluidSim_01_C.Update Impulse Lifetimes
struct ABP_FluidSim_01_C_Update_Impulse_Lifetimes_Params
{
public:
	TArray<struct FFluidForceImpulsePerInstanceData> LocalForces;                                       // 0x0(0x10)(Edit, BlueprintVisible, ContainsInstancedReference)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D20[0x4];                                     // Fixing Size After Last Property..
	struct FFluidForceImpulsePerInstanceData     CallFunc_Array_Get_Item;                           // 0x20(0x61)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_9D21[0x7];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x8C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D22[0x3];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D23[0x7];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFluidForceImpulsePerInstanceData     K2Node_SetFieldsInStruct_StructOut;                // 0xB0(0x61)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_9D24[0x7];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x118(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D25[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Add_DoubleDouble_A_ImplicitCast;          // 0x120(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Subtract_DoubleDouble_A_ImplicitCast;     // 0x128(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Subtract_DoubleDouble_B_ImplicitCast;     // 0x130(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Greater_DoubleDouble_A_ImplicitCast;      // 0x138(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_SetFieldsInStruct_ElapsedTime_44_12C387C1450456E47FC74BBD11EEAE4F_ImplicitCast; // 0x140(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1F8 (0x1F8 - 0x0)
// Function BP_FluidSim_01.BP_FluidSim_01_C.Apply Fluid Force Impulse
struct ABP_FluidSim_01_C_Apply_Fluid_Force_Impulse_Params
{
public:
	struct FFluidForceImpulse                    Impulse_Settings;                                  // 0x0(0x58)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        MaxImpulseForces;                                  // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x5C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D26[0x3];                                     // Fixing Size After Last Property..
	struct FFluidForceImpulsePerInstanceData     K2Node_MakeStruct_FluidForceImpulsePerInstanceData; // 0x60(0x61)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_9D27[0x7];                                     // Fixing Size After Last Property..
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xC8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D28[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_GetShallowWaterMaxImpulseForces_ReturnValue; // 0xCC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xD4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D29[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0xD8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xDC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0xDD(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0xDE(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D2A[0x1];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0xE0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    Temp_object_Variable;                              // 0xF8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorVector_ReturnValue;        // 0x100(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Dot_VectorVector_ReturnValue;             // 0x118(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    K2Node_Select_Default;                             // 0x120(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D2B[0x7];                                     // Fixing Size After Last Property..
	struct FFluidForceImpulse                    K2Node_MakeStruct_FluidForceImpulse;               // 0x130(0x58)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	struct FFluidForceImpulsePerInstanceData     K2Node_MakeStruct_FluidForceImpulsePerInstanceData_1; // 0x188(0x61)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_9D2C[0x7];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Array_Add_ReturnValue;                    // 0x1F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Add_ReturnValue_1;                  // 0x1F4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function BP_FluidSim_01.BP_FluidSim_01_C.Get LandscapeWaterInfo
struct ABP_FluidSim_01_C_Get_LandscapeWaterInfo_Params
{
public:
	TArray<class AWaterZone*>                    CallFunc_GetAllActorsOfClass_OutActors;            // 0x0(0x10)(ReferenceParm)
	class AWaterZone*                            CallFunc_Array_Get_Item;                           // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_IsValidIndex_ReturnValue;           // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x58 (0x58 - 0x0)
// Function BP_FluidSim_01.BP_FluidSim_01_C.Get Force MID
struct ABP_FluidSim_01_C_Get_Force_MID_Params
{
public:
	class UMaterialInterface*                    Parent;                                            // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              Mid;                                               // 0x8(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              OutMID;                                            // 0x10(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FString                                CallFunc_GetDisplayName_ReturnValue;               // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D2D[0x4];                                     // Fixing Size After Last Property..
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_Map_Find_Value;                           // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Map_Find_ReturnValue;                     // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D2E[0x2];                                     // Fixing Size After Last Property..
	float                                        CallFunc_SetScalarParameterValue_Value_ImplicitCast; // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x418 (0x418 - 0x0)
// Function BP_FluidSim_01.BP_FluidSim_01_C.GridMovement
struct ABP_FluidSim_01_C_GridMovement_Params
{
public:
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D2F[0x7];                                     // Fixing Size After Last Property..
	class APlayerCameraManager*                  CallFunc_GetPlayerCameraManager_ReturnValue;       // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FRotator                              CallFunc_GetCameraRotation_ReturnValue;            // 0x28(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FVector                               CallFunc_GetCameraLocation_ReturnValue;            // 0x40(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetAxes_X;                                // 0x58(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetAxes_Y;                                // 0x70(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetAxes_Z;                                // 0x88(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_X;                            // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Y;                            // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Z;                            // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_Conv_VectorToLinearColor_ReturnValue;     // 0xC0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_X_1;                          // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Y_1;                          // 0xE8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Z_1;                          // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0xF8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x110(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x118(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x130(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_X_2;                          // 0x148(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Y_2;                          // 0x150(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Z_2;                          // 0x158(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_K2_SetWorldLocation_SweepHitResult;       // 0x160(0xE0)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FVector                               CallFunc_MakeVector_ReturnValue_1;                 // 0x240(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               K2Node_Select_Default;                             // 0x258(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x270(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_X_3;                          // 0x288(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Y_3;                          // 0x290(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Z_3;                          // 0x298(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_Conv_VectorToLinearColor_ReturnValue_1;   // 0x2A0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue_2;                 // 0x2B0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_K2_SetWorldLocation_SweepHitResult_1;     // 0x2C8(0xE0)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FLinearColor                          CallFunc_Conv_VectorToLinearColor_ReturnValue_2;   // 0x3A8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0x3B8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Divide_VectorFloat_ReturnValue;           // 0x3D0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue_1;      // 0x3E8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Divide_VectorFloat_ReturnValue_1;         // 0x400(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xC4 (0xC4 - 0x0)
// Function BP_FluidSim_01.BP_FluidSim_01_C.SetupSimMIDs
struct ABP_FluidSim_01_C_SetupSimMIDs_Params
{
public:
	class UMaterialInterface*                    Temp_object_Variable;                              // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D30[0x7];                                     // Fixing Size After Last Property..
	class UMaterialInterface*                    Temp_object_Variable_1;                            // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D31[0x4];                                     // Fixing Size After Last Property..
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D32[0x5];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Conv_BoolToDouble_ReturnValue;            // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UMaterialInterface*>            CallFunc_Map_Keys_Keys;                            // 0x40(0x10)(ReferenceParm)
	class UMaterialInterface*                    K2Node_Select_Default;                             // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    CallFunc_Array_Get_Item;                           // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D33[0x7];                                     // Fixing Size After Last Property..
	class UMaterialInstanceDynamic*              CallFunc_Get_Force_MID_MID;                        // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue_1; // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x7C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D34[0x3];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Conv_IntToDouble_ReturnValue_1;           // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x91(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue_1;    // 0x92(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D35[0x5];                                     // Fixing Size After Last Property..
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue_2; // 0x98(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetScalarParameterValue_Value_ImplicitCast; // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetScalarParameterValue_Value_ImplicitCast_1; // 0xA4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetScalarParameterValue_Value_ImplicitCast_2; // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetScalarParameterValue_Value_ImplicitCast_3; // 0xAC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast; // 0xB0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetScalarParameterValue_Value_ImplicitCast_4; // 0xB4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetScalarParameterValue_Value_ImplicitCast_5; // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetScalarParameterValue_Value_ImplicitCast_6; // 0xBC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetScalarParameterValue_Value_ImplicitCast_7; // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x64 (0x64 - 0x0)
// Function BP_FluidSim_01.BP_FluidSim_01_C.SetupDisplayMIDs
struct ABP_FluidSim_01_C_SetupDisplayMIDs_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D36[0x7];                                     // Fixing Size After Last Property..
	double                                       Temp_real_Variable;                                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue_1; // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_X;                            // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Y;                            // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Z;                            // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_Select_Default;                             // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetScalarParameterValue_Value_ImplicitCast; // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x140 (0x140 - 0x0)
// Function BP_FluidSim_01.BP_FluidSim_01_C.Convert Force Position
struct ABP_FluidSim_01_C_Convert_Force_Position_Params
{
public:
	struct FVector                               Force_Location;                                    // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Sine_Bob;                                          // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               UV_Location;                                       // 0x20(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_GetGameTimeInSeconds_ReturnValue;         // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0x40(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_X;                            // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Y;                            // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Z;                            // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Sin_ReturnValue;                          // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_2;      // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x90(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Divide_VectorFloat_ReturnValue;           // 0xA8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorFloat_ReturnValue;              // 0xC0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorFloat_ReturnValue;         // 0xE0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_X_1;                          // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Y_1;                          // 0x100(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Z_1;                          // 0x108(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue_1;                 // 0x110(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x128(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function BP_FluidSim_01.BP_FluidSim_01_C.Cycle Render Targets
struct ABP_FluidSim_01_C_Cycle_Render_Targets_Params
{
public:
	class UTextureRenderTarget2D*                Current_Target;                                    // 0x0(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Percent_IntInt_ReturnValue;               // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                CallFunc_Array_Get_Item;                           // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Percent_IntInt_ReturnValue_1;             // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D37[0x4];                                     // Fixing Size After Last Property..
	class UTextureRenderTarget2D*                CallFunc_Array_Get_Item_1;                         // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Percent_IntInt_ReturnValue_2;             // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                CallFunc_Array_Get_Item_2;                         // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x2E8 (0x2E8 - 0x0)
// Function BP_FluidSim_01.BP_FluidSim_01_C.UserConstructionScript
struct ABP_FluidSim_01_C_UserConstructionScript_Params
{
public:
	struct FTransform                            Temp_struct_Variable;                              // 0x0(0x60)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  CallFunc_AddComponent_ReturnValue;                 // 0x60(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_CreateDynamicMaterialInstance_ReturnValue; // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue_1;      // 0x80(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x90(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_X;                            // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Y;                            // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Z;                            // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue_1;      // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D38[0x8];                                     // Fixing Size After Last Property..
	struct FTransform                            CallFunc_GetTransform_ReturnValue;                 // 0xD0(0x60)(ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_TransformLocation_ReturnValue;            // 0x130(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue_1;        // 0x148(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_X_1;                          // 0x150(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Y_1;                          // 0x158(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Z_1;                          // 0x160(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x168(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x180(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D39[0x8];                                     // Fixing Size After Last Property..
	struct FTransform                            CallFunc_MakeTransform_ReturnValue;                // 0x1A0(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_K2_SetWorldLocation_SweepHitResult;       // 0x200(0xE0)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class UStaticMeshComponent*                  CallFunc_AddComponent_ReturnValue_1;               // 0x2E0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function BP_FluidSim_01.BP_FluidSim_01_C.ReceiveBeginPlay
struct ABP_FluidSim_01_C_ReceiveBeginPlay_Params
{
public:
};

// 0x4 (0x4 - 0x0)
// Function BP_FluidSim_01.BP_FluidSim_01_C.ReceiveTick
struct ABP_FluidSim_01_C_ReceiveTick_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function BP_FluidSim_01.BP_FluidSim_01_C.Clear RTs
struct ABP_FluidSim_01_C_Clear_RTs_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_FluidSim_01.BP_FluidSim_01_C.Allocate RTs
struct ABP_FluidSim_01_C_Allocate_RTs_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_FluidSim_01.BP_FluidSim_01_C.ReCheckScalability
struct ABP_FluidSim_01_C_ReCheckScalability_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_FluidSim_01.BP_FluidSim_01_C.Release RTs
struct ABP_FluidSim_01_C_Release_RTs_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_FluidSim_01.BP_FluidSim_01_C.FluidGridDebug
struct ABP_FluidSim_01_C_FluidGridDebug_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function BP_FluidSim_01.BP_FluidSim_01_C.SetShowDebugWaterPlane
struct ABP_FluidSim_01_C_SetShowDebugWaterPlane_Params
{
public:
	bool                                         IsVisible;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function BP_FluidSim_01.BP_FluidSim_01_C.SetDebugNormalRT
struct ABP_FluidSim_01_C_SetDebugNormalRT_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_FluidSim_01.BP_FluidSim_01_C.SetDebugForcesRT
struct ABP_FluidSim_01_C_SetDebugForcesRT_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_FluidSim_01.BP_FluidSim_01_C.SetDebugRippleRT1
struct ABP_FluidSim_01_C_SetDebugRippleRT1_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_FluidSim_01.BP_FluidSim_01_C.SetDebugRippleRT2
struct ABP_FluidSim_01_C_SetDebugRippleRT2_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function BP_FluidSim_01.BP_FluidSim_01_C.SetDebugRippleRTCurrent
struct ABP_FluidSim_01_C_SetDebugRippleRTCurrent_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function BP_FluidSim_01.BP_FluidSim_01_C.SetUpdateForcesInFixedTimeStep
struct ABP_FluidSim_01_C_SetUpdateForcesInFixedTimeStep_Params
{
public:
	bool                                         Bool;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_FluidSim_01.BP_FluidSim_01_C.SetNormalInFixedTimeStep
struct ABP_FluidSim_01_C_SetNormalInFixedTimeStep_Params
{
public:
	bool                                         Bool;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_FluidSim_01.BP_FluidSim_01_C.SetSimInFixedTimeStep
struct ABP_FluidSim_01_C_SetSimInFixedTimeStep_Params
{
public:
	bool                                         Bool;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function BP_FluidSim_01.BP_FluidSim_01_C.SetAllSimParamsInFixedTimeStep
struct ABP_FluidSim_01_C_SetAllSimParamsInFixedTimeStep_Params
{
public:
	bool                                         Bool;                                              // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x604 (0x604 - 0x0)
// Function BP_FluidSim_01.BP_FluidSim_01_C.ExecuteUbergraph_BP_FluidSim_01
struct ABP_FluidSim_01_C_ExecuteUbergraph_BP_FluidSim_01_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_1;                              // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D3A[0x2];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETextureRenderTargetFormat        Temp_byte_Variable;                                // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETextureRenderTargetFormat        Temp_byte_Variable_1;                              // 0x15(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D3B[0x2];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsDedicatedServer_ReturnValue;            // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_2;                              // 0x25(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D3C[0x2];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Loop_Counter_Variable_2;                  // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_2;                 // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETextureRenderTargetFormat        K2Node_Select_Default;                             // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D3D[0x3];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Array_Index_Variable_2;                   // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETextureRenderTargetFormat        Temp_byte_Variable_2;                              // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D3E[0x3];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Variable;                                 // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_3;                  // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_3;                 // 0x44(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_3;                   // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETextureRenderTargetFormat        Temp_byte_Variable_3;                              // 0x4C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETextureRenderTargetFormat        Temp_byte_Variable_4;                              // 0x4D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D3F[0x2];                                     // Fixing Size After Last Property..
	float                                        K2Node_Event_DeltaSeconds;                         // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D40[0x4];                                     // Fixing Size After Last Property..
	class UTextureRenderTarget2D*                CallFunc_Cycle_Render_Targets_Current_Target;      // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_4;                 // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_3;                              // 0x64(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETextureRenderTargetFormat        K2Node_Select_Default_1;                           // 0x65(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D41[0x2];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x6C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D42[0x3];                                     // Fixing Size After Last Property..
	struct FIntPoint                             K2Node_MakeStruct_IntPoint;                        // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_1;          // 0x79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x7A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x7B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_4;                   // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UTextureRenderTarget2D*                CallFunc_Array_Get_Item;                           // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_5;                   // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FIntPoint                             K2Node_MakeStruct_IntPoint_1;                      // 0x8C(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_2;          // 0x94(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D43[0x3];                                     // Fixing Size After Last Property..
	class UTextureRenderTarget2D*                CallFunc_Array_Get_Item_1;                         // 0x98(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_3;          // 0xA4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0xA5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D44[0x2];                                     // Fixing Size After Last Property..
	struct FIntPoint                             K2Node_MakeStruct_IntPoint_2;                      // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D45[0x7];                                     // Fixing Size After Last Property..
	class UTextureRenderTarget2D*                CallFunc_CreateRenderTarget2D_ReturnValue;         // 0xB8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_4;          // 0xC0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_5;          // 0xC1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_2;                 // 0xC2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D46[0x5];                                     // Fixing Size After Last Property..
	class UCanvas*                               CallFunc_BeginDrawCanvasToRenderTarget_Canvas;     // 0xC8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_BeginDrawCanvasToRenderTarget_Size;       // 0xD0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDrawToRenderTargetContext            CallFunc_BeginDrawCanvasToRenderTarget_Context;    // 0xE0(0x10)(NoDestructor)
	enum class ETextureRenderTargetFormat        Temp_byte_Variable_5;                              // 0xF0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D47[0x3];                                     // Fixing Size After Last Property..
	struct FIntPoint                             K2Node_MakeStruct_IntPoint_3;                      // 0xF4(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D48[0x4];                                     // Fixing Size After Last Property..
	class UTextureRenderTarget2D*                CallFunc_CreateRenderTarget2D_ReturnValue_1;       // 0x100(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_6;          // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x109(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue_7;          // 0x10A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_3;                 // 0x10B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D49[0x4];                                     // Fixing Size After Last Property..
	struct FFluidForceImpulsePerInstanceData     CallFunc_Array_Get_Item_2;                         // 0x110(0x61)(NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_9D4A[0x7];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x178(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x17C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D4B[0x3];                                     // Fixing Size After Last Property..
	class UCanvas*                               CallFunc_BeginDrawCanvasToRenderTarget_Canvas_1;   // 0x180(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_BeginDrawCanvasToRenderTarget_Size_1;     // 0x188(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDrawToRenderTargetContext            CallFunc_BeginDrawCanvasToRenderTarget_Context_1;  // 0x198(0x10)(NoDestructor)
	TArray<struct FFluidForceDynamicPerInstanceData> CallFunc_Map_Values_Values;                        // 0x1A8(0x10)(ReferenceParm, ContainsInstancedReference)
	struct FFluidForceDynamicPerInstanceData     CallFunc_Array_Get_Item_3;                         // 0x1B8(0x148)(ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_3;               // 0x300(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x304(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D4C[0x3];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Loop_Counter_Variable_4;                  // 0x308(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_2;                // 0x30C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D4D[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Add_IntInt_ReturnValue_5;                 // 0x310(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_5;                  // 0x314(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_3;                // 0x318(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D4E[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Add_IntInt_ReturnValue_6;                 // 0x31C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_4;               // 0x320(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_4;                // 0x324(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Validate_RTs_RTs_All_Valid;               // 0x325(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D4F[0x2];                                     // Fixing Size After Last Property..
	class FString                                CallFunc_Concat_StrStr_ReturnValue;                // 0x328(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class UCanvas*                               CallFunc_BeginDrawCanvasToRenderTarget_Canvas_2;   // 0x338(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_BeginDrawCanvasToRenderTarget_Size_2;     // 0x340(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDrawToRenderTargetContext            CallFunc_BeginDrawCanvasToRenderTarget_Context_2;  // 0x350(0x10)(NoDestructor)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x360(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D50[0x7];                                     // Fixing Size After Last Property..
	double                                       Temp_real_Variable;                                // 0x368(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETextureRenderTargetFormat        Temp_byte_Variable_6;                              // 0x370(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETextureRenderTargetFormat        K2Node_Select_Default_2;                           // 0x371(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D51[0x6];                                     // Fixing Size After Last Property..
	TArray<struct FFluidForceDynamicPerInstanceData> CallFunc_Map_Values_Values_1;                      // 0x378(0x10)(ReferenceParm, ContainsInstancedReference)
	class UTextureRenderTarget2D*                CallFunc_CreateRenderTarget2D_ReturnValue_2;       // 0x388(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FFluidForceDynamicPerInstanceData     CallFunc_Array_Get_Item_4;                         // 0x390(0x148)(ContainsInstancedReference, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_5;               // 0x4D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_GetShallowWaterSimulationRenderTargetSize_ReturnValue; // 0x4DC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_5;                // 0x4E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D52[0x3];                                     // Fixing Size After Last Property..
	float                                        CallFunc_GetScalarParameterValue_ReturnValue;      // 0x4E4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0x4E8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D53[0x7];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Conv_IntToDouble_ReturnValue;             // 0x4F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_6;                // 0x4F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D54[0x7];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Multiply_DoubleDouble_ReturnValue;        // 0x500(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       Temp_real_Variable_1;                              // 0x508(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue_7;                 // 0x510(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable_4;                              // 0x514(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D55[0x3];                                     // Fixing Size After Last Property..
	double                                       K2Node_Select_Default_3;                           // 0x518(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_IsVisible;                      // 0x520(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D56[0x7];                                     // Fixing Size After Last Property..
	class UWaterSubsystem*                       CallFunc_GetWorldSubsystem_ReturnValue;            // 0x528(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x530(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x538(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UWaterSubsystem*                       CallFunc_GetWorldSubsystem_ReturnValue_1;          // 0x550(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsShallowWaterSimulationEnabled_ReturnValue; // 0x558(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D57[0x7];                                     // Fixing Size After Last Property..
	class UTextureRenderTarget2D*                Temp_object_Variable;                              // 0x560(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Bool_3;                         // 0x568(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Bool_2;                         // 0x569(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D58[0x2];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_MakeLiteralInt_ReturnValue;               // 0x56C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Bool_1;                         // 0x570(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_Bool;                           // 0x571(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D59[0x2];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Max_Substep_to_Prevent_runaway_loop_Variable; // 0x574(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x578(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_7;                // 0x584(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D5A[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Add_IntInt_ReturnValue_8;                 // 0x588(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D5B[0x4];                                     // Fixing Size After Last Property..
	class UWaterSubsystem*                       CallFunc_GetWorldSubsystem_ReturnValue_2;          // 0x590(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsShallowWaterSimulationEnabled_ReturnValue_1; // 0x598(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D5C[0x7];                                     // Fixing Size After Last Property..
	double                                       Temp_real_Time_Accumulator_Variable;               // 0x5A0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_DoubleDouble_ReturnValue;         // 0x5A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D5D[0x7];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x5B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_4;                 // 0x5B8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D5E[0x7];                                     // Fixing Size After Last Property..
	double                                       CallFunc_GetWorldDeltaSeconds_ReturnValue;         // 0x5C0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETextureRenderTargetFormat        Temp_byte_Variable_7;                              // 0x5C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D5F[0x7];                                     // Fixing Size After Last Property..
	double                                       CallFunc_FMin_ReturnValue;                         // 0x5D0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x5D8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETextureRenderTargetFormat        K2Node_Select_Default_4;                           // 0x5E0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D60[0x7];                                     // Fixing Size After Last Property..
	class UTextureRenderTarget2D*                CallFunc_CreateRenderTarget2D_ReturnValue_3;       // 0x5E8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable_1;                               // 0x5F0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9D61[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_EqualEqual_DoubleDouble_A_ImplicitCast;   // 0x5F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetScalarParameterValue_ParameterValue_ImplicitCast; // 0x600(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
