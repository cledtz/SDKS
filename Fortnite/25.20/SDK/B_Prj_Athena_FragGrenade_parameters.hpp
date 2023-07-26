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

// 0x0 (0x0 - 0x0)
// Function B_Prj_Athena_FragGrenade.B_Prj_Athena_FragGrenade_C.PreExploWarning__FinishedFunc
struct AB_Prj_Athena_FragGrenade_C_PreExploWarning__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_Prj_Athena_FragGrenade.B_Prj_Athena_FragGrenade_C.PreExploWarning__UpdateFunc
struct AB_Prj_Athena_FragGrenade_C_PreExploWarning__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_Prj_Athena_FragGrenade.B_Prj_Athena_FragGrenade_C.FuseEnded
struct AB_Prj_Athena_FragGrenade_C_FuseEnded_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function B_Prj_Athena_FragGrenade.B_Prj_Athena_FragGrenade_C.OnExploded
struct AB_Prj_Athena_FragGrenade_C_OnExploded_Params
{
public:
	TArray<class AActor*>                        HitActors;                                         // 0x0(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	TArray<struct FHitResult>                    HitResults;                                        // 0x10(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0xE0 (0xE0 - 0x0)
// Function B_Prj_Athena_FragGrenade.B_Prj_Athena_FragGrenade_C.OnBounce
struct AB_Prj_Athena_FragGrenade_C_OnBounce_Params
{
public:
	struct FHitResult                            Hit;                                               // 0x0(0xE0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// 0x0 (0x0 - 0x0)
// Function B_Prj_Athena_FragGrenade.B_Prj_Athena_FragGrenade_C.ReceiveBeginPlay
struct AB_Prj_Athena_FragGrenade_C_ReceiveBeginPlay_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function B_Prj_Athena_FragGrenade.B_Prj_Athena_FragGrenade_C.Pre Explo Audio Tell
struct AB_Prj_Athena_FragGrenade_C_Pre_Explo_Audio_Tell_Params
{
public:
};

// 0x11 (0x11 - 0x0)
// Function B_Prj_Athena_FragGrenade.B_Prj_Athena_FragGrenade_C.BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_1_WaterInteractionOnEnterWater__DelegateSignature
struct AB_Prj_Athena_FragGrenade_C_BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_1_WaterInteractionOnEnterWater__DelegateSignature_Params
{
public:
	class AFortWaterBodyActor*                   WaterBody;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortWaterInteractionComponent*        WaterInteractionComponent;                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsFirstBody;                                      // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x11 (0x11 - 0x0)
// Function B_Prj_Athena_FragGrenade.B_Prj_Athena_FragGrenade_C.BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_3_WaterInteractionOnExitWater__DelegateSignature
struct AB_Prj_Athena_FragGrenade_C_BndEvt__WaterInteractionComponent_K2Node_ComponentBoundEvent_3_WaterInteractionOnExitWater__DelegateSignature_Params
{
public:
	class AFortWaterBodyActor*                   WaterBody;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortWaterInteractionComponent*        WaterInteractionComponent;                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsLastBody;                                       // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x558 (0x558 - 0x0)
// Function B_Prj_Athena_FragGrenade.B_Prj_Athena_FragGrenade_C.ExecuteUbergraph_B_Prj_Athena_FragGrenade
struct AB_Prj_Athena_FragGrenade_C_ExecuteUbergraph_B_Prj_Athena_FragGrenade_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_81FF[0x4];                                     // Fixing Size After Last Property..
	class APlayerController*                     CallFunc_GetPlayerController_ReturnValue;          // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Conv_DoubleToVector_ReturnValue;          // 0x10(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AController*                           CallFunc_GetInstigatorController_ReturnValue;      // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_OnSameTeam_ReturnValue;                   // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8200[0x7];                                     // Fixing Size After Last Property..
	TArray<class AActor*>                        K2Node_Event_HitActors;                            // 0x38(0x10)(ConstParm, ReferenceParm)
	TArray<struct FHitResult>                    K2Node_Event_HitResults;                           // 0x48(0x10)(ConstParm, ReferenceParm, ContainsInstancedReference)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x58(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            K2Node_Event_Hit;                                  // 0x70(0xE0)(ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_BreakHitResult_bBlockingHit;              // 0x150(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BreakHitResult_bInitialOverlap;           // 0x151(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8201[0x2];                                     // Fixing Size After Last Property..
	float                                        CallFunc_BreakHitResult_Time;                      // 0x154(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakHitResult_Distance;                  // 0x158(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8202[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_BreakHitResult_Location;                  // 0x160(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_ImpactPoint;               // 0x178(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_Normal;                    // 0x190(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_ImpactNormal;              // 0x1A8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                     CallFunc_BreakHitResult_PhysMat;                   // 0x1C0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BreakHitResult_HitActor;                  // 0x1C8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   CallFunc_BreakHitResult_HitComponent;              // 0x1D0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_BreakHitResult_HitBoneName;               // 0x1D8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_BreakHitResult_BoneName;                  // 0x1DC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_HitItem;                   // 0x1E0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_ElementIndex;              // 0x1E4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_FaceIndex;                 // 0x1E8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8203[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_BreakHitResult_TraceStart;                // 0x1F0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_TraceEnd;                  // 0x208(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x220(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x221(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8204[0x2];                                     // Fixing Size After Last Property..
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x224(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x230(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          CallFunc_K2_SetTimerDelegate_ReturnValue;          // 0x238(0x8)(NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetConsoleVariableBoolValue_ReturnValue;  // 0x240(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8205[0x7];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue_1;        // 0x248(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue_2;        // 0x250(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                CallFunc_MakeGameplayCueParameters_ReturnValue;    // 0x258(0xD0)(ContainsInstancedReference)
	int32                                        CallFunc_GetConsoleVariableIntValue_ReturnValue;   // 0x328(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_IntInt_ReturnValue;            // 0x32C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8206[0x3];                                     // Fixing Size After Last Property..
	struct FHitResult                            CallFunc_K2_SetWorldRotation_SweepHitResult;       // 0x330(0xE0)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	class AFortWaterBodyActor*                   K2Node_ComponentBoundEvent_WaterBody_1;            // 0x410(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortWaterInteractionComponent*        K2Node_ComponentBoundEvent_WaterInteractionComponent_1; // 0x418(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_bIsFirstBody;           // 0x420(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8207[0xF];                                     // Fixing Size After Last Property..
	struct FTransform                            CallFunc_K2_GetComponentToWorld_ReturnValue;       // 0x430(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x490(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BeginDeferredActorSpawnFromClass_ReturnValue; // 0x4A8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FWaterSurfaceInfo                     CallFunc_GetWaterSurfaceInfoStruct_OutWaterSurfaceInfo; // 0x4B0(0x68)(NoDestructor)
	class AFN_RadialForce_C*                     CallFunc_FinishSpawningActor_ReturnValue;          // 0x518(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FInterfaceProperty_                          CallFunc_SetFloatParameter_self_CastInput;         // 0x520(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortWaterBodyActor*                   K2Node_ComponentBoundEvent_WaterBody;              // 0x530(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortWaterInteractionComponent*        K2Node_ComponentBoundEvent_WaterInteractionComponent; // 0x538(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_ComponentBoundEvent_bIsLastBody;            // 0x540(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8208[0x7];                                     // Fixing Size After Last Property..
	class UNiagaraComponent*                     CallFunc_SpawnSystemAtLocation_ReturnValue;        // 0x548(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_K2_SetTimerDelegate_Time_ImplicitCast;    // 0x550(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_SetPlayRate_NewRate_ImplicitCast;         // 0x554(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
