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

// 0xFC (0xFC - 0x0)
// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.Any Player Pawn Near Location
struct UMissionBlueprintFunctionLibrary_C_Any_Player_Pawn_Near_Location_Params
{
public:
	double                                       DistanceToCheck;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Location;                                          // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AFortPlayerPawn*>               Ignore_Player_Pawns;                               // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UObject*                               __WorldContext;                                    // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         IsPawnNearLocation;                                // 0x38(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_91F8[0x7];                                     // Fixing Size After Last Property..
	TArray<class AFortPawn*>                     PawnsNearLocation;                                 // 0x40(0x10)(Parm, OutParm)
	TArray<class AFortPlayerPawn*>               Filtered_Player_Pawns;                             // 0x50(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)
	TArray<class AFortPawn*>                     Pawns;                                             // 0x60(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_91F9[0x4];                                     // Fixing Size After Last Property..
	TArray<class AFortPlayerPawn*>               CallFunc_GetAllFortPlayerPawns_OutFortPlayerPawns; // 0x78(0x10)(ReferenceParm)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_91FA[0x4];                                     // Fixing Size After Last Property..
	class AFortPawn*                             CallFunc_Array_Get_Item;                           // 0x98(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Athena_CheckActorHasTags_bDidActorHaveTags; // 0xA4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xA5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_91FB[0x2];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0xA8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_91FC[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_DistanceBetweenTwoVectors_Distance;       // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0xD1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_91FD[0x2];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0xD4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0xD8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_91FE[0x4];                                     // Fixing Size After Last Property..
	class AFortPlayerPawn*                       CallFunc_Array_Get_Item_1;                         // 0xE0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0xE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Array_RemoveItem_ReturnValue;             // 0xEC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0xED(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_91FF[0x2];                                     // Fixing Size After Last Property..
	class AFortPawn*                             Temp_object_Variable;                              // 0xF0(0x8)(ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_AddUnique_ReturnValue;              // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.GetSeasonalEventManager
struct UMissionBlueprintFunctionLibrary_C_GetSeasonalEventManager_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortSeasonalEventManager*             SeasonalEventManager;                              // 0x10(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UGameInstance*                         CallFunc_GetGameInstance_ReturnValue;              // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortGameInstance*                     K2Node_DynamicCast_AsFort_Game_Instance;           // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9200[0x7];                                     // Fixing Size After Last Property..
	class UFortSeasonalEventManager*             CallFunc_GetEventManager_ReturnValue;              // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x39 (0x39 - 0x0)
// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.NPC_CanBeElemental
struct UMissionBlueprintFunctionLibrary_C_NPC_CanBeElemental_Params
{
public:
	struct FGameplayTag                          PawnTag;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9201[0x4];                                     // Fixing Size After Last Property..
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Value;                                             // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9202[0x7];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 ElementalEnablePawnTag;                            // 0x18(0x20)(Edit, BlueprintVisible)
	bool                                         CallFunc_HasTag_ReturnValue;                       // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xB0 (0xB0 - 0x0)
// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.LaunchHoverboard
struct UMissionBlueprintFunctionLibrary_C_LaunchHoverboard_Params
{
public:
	class AActor*                                HoverboardActor;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               LaunchVelocity;                                    // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  ForceFeedbackTag;                                  // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9203[0x4];                                     // Fixing Size After Last Property..
	class UObject*                               __WorldContext;                                    // 0x28(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x30(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9204[0x7];                                     // Fixing Size After Last Property..
	class AFortAthenaJackalVehicle*              Hoverboard;                                        // 0x38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
	class AFortAthenaJackalVehicle*              K2Node_DynamicCast_AsFort_Athena_Jackal_Vehicle;   // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9205[0x7];                                     // Fixing Size After Last Property..
	FInterfaceProperty_                          CallFunc_GetDriver_self_CastInput;                 // 0x50(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       CallFunc_GetDriver_ReturnValue;                    // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FInterfaceProperty_                          CallFunc_HasMatchingGameplayTag_self_CastInput;    // 0x68(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasMatchingGameplayTag_ReturnValue;       // 0x78(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9206[0x6];                                     // Fixing Size After Last Property..
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                 K2Node_DynamicCast_AsFort_Player_Controller;       // 0x88(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9207[0x7];                                     // Fixing Size After Last Property..
	FInterfaceProperty_                          CallFunc_SetIgnoreNextFallingDamage_self_CastInput; // 0x98(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FActiveGameplayEffectHandle           CallFunc_ApplyGlobalEnvironmentGameplayEffectToActor_ReturnValue; // 0xA8(0x8)(NoDestructor, HasGetValueTypeHash)
};

// 0x29 (0x29 - 0x0)
// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.NPC_ConvertTagToNameText
struct UMissionBlueprintFunctionLibrary_C_NPC_ConvertTagToNameText_Params
{
public:
	struct FGameplayTag                          PawnTag;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9208[0x4];                                     // Fixing Size After Last Property..
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FText                                  Name;                                              // 0x10(0x18)(Parm, OutParm)
	bool                                         GameplayTagsK2Node_SwitchGameplayTag_CmpSuccess;   // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x278 (0x278 - 0x0)
// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.CheckBasicVectorToActorLineOfSight
struct UMissionBlueprintFunctionLibrary_C_CheckBasicVectorToActorLineOfSight_Params
{
public:
	struct FVector                               Vector_A;                                          // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                Actor_B;                                           // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Actor_B_Location_Offset;                           // 0x20(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETraceTypeQuery                   TraceChannel;                                      // 0x38(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EDrawDebugTrace                   DrawDebugType;                                     // 0x39(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9209[0x6];                                     // Fixing Size After Last Property..
	double                                       DrawTime;                                          // 0x40(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                        ActorsToIgnore;                                    // 0x48(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	bool                                         bTraceComplex;                                     // 0x58(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bRequireThatTraceHitActorB;                        // 0x59(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_920A[0x6];                                     // Fixing Size After Last Property..
	class UObject*                               __WorldContext;                                    // 0x60(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         In_Line_Of_Sight;                                  // 0x68(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_920B[0x7];                                     // Fixing Size After Last Property..
	double                                       Distance;                                          // 0x70(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Result;                                            // 0x78(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x79(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_920C[0x6];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0x80(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x98(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Vector_Distance_ReturnValue;              // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_LineTraceSingle_OutHit;                   // 0xB8(0xE0)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_LineTraceSingle_ReturnValue;              // 0x198(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BreakHitResult_bBlockingHit;              // 0x199(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BreakHitResult_bInitialOverlap;           // 0x19A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_920D[0x1];                                     // Fixing Size After Last Property..
	float                                        CallFunc_BreakHitResult_Time;                      // 0x19C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakHitResult_Distance;                  // 0x1A0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_920E[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_BreakHitResult_Location;                  // 0x1A8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_ImpactPoint;               // 0x1C0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_Normal;                    // 0x1D8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_ImpactNormal;              // 0x1F0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                     CallFunc_BreakHitResult_PhysMat;                   // 0x208(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BreakHitResult_HitActor;                  // 0x210(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   CallFunc_BreakHitResult_HitComponent;              // 0x218(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_BreakHitResult_HitBoneName;               // 0x220(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_BreakHitResult_BoneName;                  // 0x224(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_HitItem;                   // 0x228(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_ElementIndex;              // 0x22C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_FaceIndex;                 // 0x230(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_920F[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_BreakHitResult_TraceStart;                // 0x238(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_TraceEnd;                  // 0x250(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x268(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9210[0x3];                                     // Fixing Size After Last Property..
	float                                        CallFunc_LineTraceSingle_DrawTime_ImplicitCast;    // 0x26C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_FunctionResult_Distance_ImplicitCast;       // 0x270(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x450 (0x450 - 0x0)
// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.CheckBasicActorLineOfSight
struct UMissionBlueprintFunctionLibrary_C_CheckBasicActorLineOfSight_Params
{
public:
	class AActor*                                Actor_A;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               ActorA_Location_Offset;                            // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                Actor_B;                                           // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Actor_B_Location_Offset;                           // 0x28(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         UseActorHalfHeightForSight;                        // 0x40(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETraceTypeQuery                   TraceChannel;                                      // 0x41(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EDrawDebugTrace                   DrawDebugType;                                     // 0x42(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9211[0x5];                                     // Fixing Size After Last Property..
	double                                       DrawTime;                                          // 0x48(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bTraceComplex;                                     // 0x50(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9212[0x7];                                     // Fixing Size After Last Property..
	class UObject*                               __WorldContext;                                    // 0x58(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         In_Line_Of_Sight;                                  // 0x60(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9213[0x7];                                     // Fixing Size After Last Property..
	double                                       Distance;                                          // 0x68(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               ActorB_Offset;                                     // 0x70(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               ActorA_Offset;                                     // 0x88(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Actor_B_Start_Vector;                              // 0xA0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               ActorA_StartVector;                                // 0xB8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Result;                                            // 0xD0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xD1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9214[0x6];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue;          // 0xD8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetActorBounds_Origin;                    // 0xF0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetActorBounds_BoxExtent;                 // 0x108(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_1;        // 0x120(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_X;                            // 0x138(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Y;                            // 0x140(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Z;                            // 0x148(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_FClamp_ReturnValue;                       // 0x150(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x158(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9215[0x7];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue;          // 0x160(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x168(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_2;        // 0x180(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0x198(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetActorBounds_Origin_1;                  // 0x1B0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_GetActorBounds_BoxExtent_1;               // 0x1C8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AActor*>                        K2Node_MakeArray_Array;                            // 0x1E0(0x10)(ConstParm, ReferenceParm)
	double                                       CallFunc_BreakVector_X_1;                          // 0x1F0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Y_1;                          // 0x1F8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Z_1;                          // 0x200(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_K2_GetActorLocation_ReturnValue_3;        // 0x208(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_FClamp_ReturnValue_1;                     // 0x220(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Divide_DoubleDouble_ReturnValue_1;        // 0x228(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_1;           // 0x230(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue_1;                 // 0x248(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_2;           // 0x260(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue_3;           // 0x278(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FHitResult                            CallFunc_LineTraceSingle_OutHit;                   // 0x290(0xE0)(IsPlainOldData, NoDestructor, ContainsInstancedReference)
	bool                                         CallFunc_LineTraceSingle_ReturnValue;              // 0x370(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BreakHitResult_bBlockingHit;              // 0x371(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BreakHitResult_bInitialOverlap;           // 0x372(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9216[0x1];                                     // Fixing Size After Last Property..
	float                                        CallFunc_BreakHitResult_Time;                      // 0x374(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_BreakHitResult_Distance;                  // 0x378(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9217[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_BreakHitResult_Location;                  // 0x380(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_ImpactPoint;               // 0x398(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_Normal;                    // 0x3B0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_ImpactNormal;              // 0x3C8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UPhysicalMaterial*                     CallFunc_BreakHitResult_PhysMat;                   // 0x3E0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                CallFunc_BreakHitResult_HitActor;                  // 0x3E8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UPrimitiveComponent*                   CallFunc_BreakHitResult_HitComponent;              // 0x3F0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_BreakHitResult_HitBoneName;               // 0x3F8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  CallFunc_BreakHitResult_BoneName;                  // 0x3FC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_HitItem;                   // 0x400(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_ElementIndex;              // 0x404(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_BreakHitResult_FaceIndex;                 // 0x408(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9218[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_BreakHitResult_TraceStart;                // 0x410(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_BreakHitResult_TraceEnd;                  // 0x428(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_ObjectObject_ReturnValue;      // 0x440(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9219[0x3];                                     // Fixing Size After Last Property..
	float                                        CallFunc_LineTraceSingle_DrawTime_ImplicitCast;    // 0x444(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_FunctionResult_Distance_ImplicitCast;       // 0x448(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1A8 (0x1A8 - 0x0)
// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.NPC_LockThenRotateInPlace
struct UMissionBlueprintFunctionLibrary_C_NPC_LockThenRotateInPlace_Params
{
public:
	bool                                         LockedInPlace;                                     // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_921A[0x7];                                     // Fixing Size After Last Property..
	class AFortPlayerPawn*                       PlayerPawn;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortAIPawn*                           SurvivorPawn;                                      // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FStruct_SurvivorScriptedAbilities     Survivor_Abilities;                                // 0x20(0x24)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_921B[0x4];                                     // Fixing Size After Last Property..
	struct FGameplayEventData                    K2Node_MakeStruct_GameplayEventData;               // 0x48(0xB0)()
	struct FGameplayEventData                    K2Node_MakeStruct_GameplayEventData_1;             // 0xF8(0xB0)()
};

// 0xEC (0xEC - 0x0)
// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.GetControllersNearActorThatRequireQuestObjective
struct UMissionBlueprintFunctionLibrary_C_GetControllersNearActorThatRequireQuestObjective_Params
{
public:
	double                                       Distance;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                Actor;                                             // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortQuestItemDefinition*              Quest_Item;                                        // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                  Quest_Item_Backend_Objective_Name;                 // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_921C[0x4];                                     // Fixing Size After Last Property..
	class UObject*                               __WorldContext;                                    // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class AFortPlayerController*>         PlayerControllersNearbyThatRequireQuest;           // 0x28(0x10)(Parm, OutParm)
	bool                                         SuccessfullyFoundPlayer;                           // 0x38(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_921D[0x3];                                     // Fixing Size After Last Property..
	class FName                                  LocalBackendName;                                  // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortQuestItemDefinition*              LocalQuestItem;                                    // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class AFortPlayerController*>         ControllersWhoRequireQuestObjective;               // 0x48(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)
	TArray<class AFortPlayerController*>         ControllersNearbyArray;                            // 0x58(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)
	bool                                         FoundPlayer;                                       // 0x68(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_AnyPlayerNearActor_IsPlayerNearActor;     // 0x69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_921E[0x6];                                     // Fixing Size After Last Property..
	TArray<class AFortPlayerPawn*>               CallFunc_AnyPlayerNearActor_PlayersNearActor;      // 0x70(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x84(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x85(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_921F[0x2];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Array_Index_Variable;                     // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9220[0x4];                                     // Fixing Size After Last Property..
	class AFortPlayerPawn*                       CallFunc_Array_Get_Item;                           // 0x90(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x98(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9221[0x4];                                     // Fixing Size After Last Property..
	class AFortPlayerController*                 K2Node_DynamicCast_AsFort_Player_Controller;       // 0xA8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xB1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9222[0x2];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xB4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable_1;                   // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9223[0x4];                                     // Fixing Size After Last Property..
	class AFortPlayerController*                 CallFunc_Array_Get_Item_1;                         // 0xC0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0xC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_DoesPlayerHaveQuest_QuestValid;           // 0xCC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9224[0x3];                                     // Fixing Size After Last Property..
	class AFortPlayerController*                 CallFunc_DoesPlayerHaveQuest_PlayerControllerRef;  // 0xD0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable_1;                  // 0xD8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_AddUnique_ReturnValue;              // 0xDC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0xE0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9225[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Add_IntInt_ReturnValue_1;                 // 0xE4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_AddUnique_ReturnValue_1;            // 0xE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x63 (0x63 - 0x0)
// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.HaveAllPlayersCompletedQuest
struct UMissionBlueprintFunctionLibrary_C_HaveAllPlayersCompletedQuest_Params
{
public:
	class UFortQuestItemDefinition*              QuestItem;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         AllPlayersCompletedQuest;                          // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         NotCompleted;                                      // 0x11(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9226[0x2];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Array_Index_Variable;                     // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AFortPlayerController*>         CallFunc_GetAllFortPlayerControllers_ReturnValue;  // 0x18(0x10)(ReferenceParm)
	class AFortPlayerController*                 CallFunc_Array_Get_Item;                           // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9227[0x4];                                     // Fixing Size After Last Property..
	class UFortQuestManager*                     CallFunc_GetQuestManager_ReturnValue;              // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9228[0x7];                                     // Fixing Size After Last Property..
	class UFortQuestItem*                        CallFunc_GetQuestWithDefinition_ReturnValue;       // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasCompletedQuest_ReturnValue;            // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x51(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9229[0x2];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_922A[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x62(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4A (0x4A - 0x0)
// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.HasPlayerCompletedQuestObjectiveHandle
struct UMissionBlueprintFunctionLibrary_C_HasPlayerCompletedQuestObjectiveHandle_Params
{
public:
	class AFortPlayerController*                 PlayerController;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortQuestItemDefinition*              QuestReference;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   QuestBackendObjectiveHandle;                       // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	class UObject*                               __WorldContext;                                    // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                 PlayerControllerOut;                               // 0x28(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CompletedQuestObjective;                           // 0x30(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasCompletedObjective;                             // 0x31(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x32(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x33(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_922B[0x4];                                     // Fixing Size After Last Property..
	class UFortQuestManager*                     CallFunc_GetQuestManager_ReturnValue;              // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortQuestItem*                        CallFunc_GetQuestWithDefinition_ReturnValue;       // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasCompletedObjective_ReturnValue;        // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x98 (0x98 - 0x0)
// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.DoesAnyPlayerRequireQuestObjective
struct UMissionBlueprintFunctionLibrary_C_DoesAnyPlayerRequireQuestObjective_Params
{
public:
	class UFortQuestItemDefinition*              QuestReference;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   QuestObjectiveHandle;                              // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	class UObject*                               __WorldContext;                                    // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class AFortPlayerController*>         PlayerControllersWhoRequireObjective;              // 0x20(0x10)(Parm, OutParm)
	bool                                         SomebodyRequiresObjective;                         // 0x30(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_922C[0x7];                                     // Fixing Size After Last Property..
	TArray<class AFortPlayerController*>         ControllersWhoRequireObjective;                    // 0x38(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)
	bool                                         SomebodyNeededTheObjective;                        // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_922D[0x3];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Array_Index_Variable;                     // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AFortPlayerController*>         CallFunc_GetAllFortPlayerControllers_ReturnValue;  // 0x50(0x10)(ReferenceParm)
	class AFortPlayerController*                 CallFunc_Array_Get_Item;                           // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x6C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_922E[0x3];                                     // Fixing Size After Last Property..
	class UFortQuestManager*                     CallFunc_GetQuestManager_ReturnValue;              // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortQuestItem*                        CallFunc_GetQuestWithDefinition_ReturnValue;       // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x84(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x85(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasCompletedObjective_ReturnValue;        // 0x86(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x87(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_AddUnique_ReturnValue;              // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_922F[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x58 (0x58 - 0x0)
// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.HideParticleComponentsAttachedToMesh
struct UMissionBlueprintFunctionLibrary_C_HideParticleComponentsAttachedToMesh_Params
{
public:
	class UStaticMeshComponent*                  MeshComponent;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         SuccessfullyDeactivatedParticle;                   // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         FoundParticle;                                     // 0x11(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9230[0x5];                                     // Fixing Size After Last Property..
	TArray<class USceneComponent*>               CallFunc_GetChildrenComponents_Children;           // 0x18(0x10)(ReferenceParm, ContainsInstancedReference)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x34(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9231[0x3];                                     // Fixing Size After Last Property..
	class USceneComponent*                       CallFunc_Array_Get_Item;                           // 0x38(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              K2Node_DynamicCast_AsCascade_Particle_System_Component; // 0x40(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9232[0x2];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9233[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x43 (0x43 - 0x0)
// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.HasPlayerCompletedQuestObjective
struct UMissionBlueprintFunctionLibrary_C_HasPlayerCompletedQuestObjective_Params
{
public:
	class AFortPlayerController*                 PlayerController;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortQuestItemDefinition*              QuestReference;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                  QuestBackendObjectiveName;                         // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9234[0x4];                                     // Fixing Size After Last Property..
	class UObject*                               __WorldContext;                                    // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                 PlayerControllerOut;                               // 0x20(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CompletedQuestObjective;                           // 0x28(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasCompletedObjective;                             // 0x29(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x2B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9235[0x3];                                     // Fixing Size After Last Property..
	class UFortQuestManager*                     CallFunc_GetQuestManager_ReturnValue;              // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortQuestItem*                        CallFunc_GetQuestWithDefinition_ReturnValue;       // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasCompletedObjectiveWithName_ReturnValue; // 0x42(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x94 (0x94 - 0x0)
// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.GetContributingControllersNearActor
struct UMissionBlueprintFunctionLibrary_C_GetContributingControllersNearActor_Params
{
public:
	double                                       Distance;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                Actor;                                             // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class AFortPlayerController*>         PlayerControllersNearby;                           // 0x18(0x10)(Parm, OutParm)
	bool                                         SuccessfullyFoundPlayer;                           // 0x28(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9236[0x7];                                     // Fixing Size After Last Property..
	TArray<class AFortPlayerController*>         ControllersNearbyArray;                            // 0x30(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)
	bool                                         FoundPlayer;                                       // 0x40(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_AnyPlayerNearActor_IsPlayerNearActor;     // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9237[0x6];                                     // Fixing Size After Last Property..
	TArray<class AFortPlayerPawn*>               CallFunc_AnyPlayerNearActor_PlayersNearActor;      // 0x48(0x10)(ReferenceParm)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9238[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9239[0x4];                                     // Fixing Size After Last Property..
	class AFortPlayerPawn*                       CallFunc_Array_Get_Item;                           // 0x68(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AController*                           CallFunc_GetController_ReturnValue;                // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                 K2Node_DynamicCast_AsFort_Player_Controller;       // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_923A[0x3];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_AddUnique_ReturnValue;              // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x8C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_923B[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x90(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xFD (0xFD - 0x0)
// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.PointLocationsBetweenTwoVectors
struct UMissionBlueprintFunctionLibrary_C_PointLocationsBetweenTwoVectors_Params
{
public:
	struct FVector                               Vector_1;                                          // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Vector_2;                                          // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        HowManyPoints;                                     // 0x30(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_923C[0x4];                                     // Fixing Size After Last Property..
	class UObject*                               __WorldContext;                                    // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<struct FVector>                       VectorPoints;                                      // 0x40(0x10)(Parm, OutParm)
	bool                                         SuccessfullyFoundPoints;                           // 0x50(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         WasSuccessful;                                     // 0x51(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_923D[0x6];                                     // Fixing Size After Last Property..
	TArray<struct FVector>                       ResultVectorArray;                                 // 0x58(0x10)(Edit, BlueprintVisible)
	struct FVector                               DifferenceVector;                                  // 0x68(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_923E[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0x88(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Divide_VectorInt_ReturnValue;             // 0xA0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0xB8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue_1;        // 0xBC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_923F[0x3];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Variable;                                 // 0xC0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xC4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Multiply_VectorInt_ReturnValue;           // 0xC8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Add_VectorVector_ReturnValue;             // 0xE0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_AddUnique_ReturnValue;              // 0xF8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0xFC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.GetCurrentDifficulty
struct UMissionBlueprintFunctionLibrary_C_GetCurrentDifficulty_Params
{
public:
	class UObject*                               __WorldContext;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       Difficulty;                                        // 0x8(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9240[0x7];                                     // Fixing Size After Last Property..
	class AGameStateBase*                        CallFunc_GetGameState_ReturnValue;                 // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortGameStateZone*                    K2Node_DynamicCast_AsFort_Game_State_Zone;         // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9241[0x3];                                     // Fixing Size After Last Property..
	float                                        CallFunc_GetGameDifficulty_ReturnValue;            // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       K2Node_FunctionResult_Difficulty_ImplicitCast;     // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x54 (0x54 - 0x0)
// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.ApplyDifficultyOffset
struct UMissionBlueprintFunctionLibrary_C_ApplyDifficultyOffset_Params
{
public:
	class FName                                  RowName;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9242[0x4];                                     // Fixing Size After Last Property..
	double                                       BaseDifficulty;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Success;                                           // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEvaluateCurveTableResult         CallFunc_EvaluateCurveTableRow_OutResult;          // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9243[0x2];                                     // Fixing Size After Last Property..
	float                                        CallFunc_EvaluateCurveTableRow_OutXY;              // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_GetCurrentDifficulty_Difficulty;          // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetCurrentDifficulty_Success;             // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x29(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9244[0x6];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Subtract_DoubleDouble_ReturnValue;        // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_EvaluateCurveTableRow_InXY_ImplicitCast;  // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9245[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Add_DoubleDouble_A_ImplicitCast;          // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_AdjustWaveBasedGameDifficulty_fDifficultyAddMod_ImplicitCast; // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x60 (0x60 - 0x0)
// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.DistanceBetweenTwoVectors
struct UMissionBlueprintFunctionLibrary_C_DistanceBetweenTwoVectors_Params
{
public:
	struct FVector                               Vector1;                                           // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Vector2;                                           // 0x18(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       Distance;                                          // 0x38(0x8)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_Subtract_VectorVector_ReturnValue;        // 0x40(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_VSize_ReturnValue;                        // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x99 (0x99 - 0x0)
// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.HasPlayerCompletedQuest
struct UMissionBlueprintFunctionLibrary_C_HasPlayerCompletedQuest_Params
{
public:
	class AFortPlayerController*                 PlayerController;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortQuestItemDefinition*              QuestReference;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                  QuestBackendName;                                  // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9246[0x4];                                     // Fixing Size After Last Property..
	class UObject*                               __WorldContext;                                    // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                 PlayerControllerOut;                               // 0x20(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CompletedQuest;                                    // 0x28(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         HasCompletedQuest;                                 // 0x29(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue;          // 0x2A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_NameName_ReturnValue_1;        // 0x2B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasComponentForWorldProcessingUpdates_ReturnValue; // 0x2D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9247[0x2];                                     // Fixing Size After Last Property..
	class FString                                CallFunc_GetPersistentName_ReturnValue;            // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9248[0x7];                                     // Fixing Size After Last Property..
	class UFortPlayerStateComponent_Quests*      CallFunc_GetComponentByClass_ReturnValue;          // 0x48(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UFortQuestManager*                     CallFunc_GetQuestManager_ReturnValue;              // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9249[0x7];                                     // Fixing Size After Last Property..
	class UFortQuestItem*                        CallFunc_GetQuestWithDefinition_ReturnValue;       // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_4;                    // 0x69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasCompletedObjectiveWithName_ReturnValue; // 0x6A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasCompletedQuest_ReturnValue;            // 0x6B(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_924A[0x4];                                     // Fixing Size After Last Property..
	FInterfaceProperty_                          CallFunc_IsQuestInstanceCompleted_self_CastInput;  // 0x70(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsQuestInstanceCompleted_ReturnValue;     // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_924B[0x7];                                     // Fixing Size After Last Property..
	FInterfaceProperty_                          CallFunc_IsQuestInstanceObjectiveCompleted_self_CastInput; // 0x88(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsQuestInstanceObjectiveCompleted_ReturnValue; // 0x98(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xAC (0xAC - 0x0)
// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.SeperatePlayersWhoNeedQuest
struct UMissionBlueprintFunctionLibrary_C_SeperatePlayersWhoNeedQuest_Params
{
public:
	class UFortQuestItemDefinition*              QuestItemReference;                                // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                  QuestObjectiveBackendName;                         // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_924C[0x4];                                     // Fixing Size After Last Property..
	class UObject*                               __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class AFortPlayerController*>         PlayersWhoNeedQuest;                               // 0x18(0x10)(Parm, OutParm)
	TArray<class AFortPlayerController*>         PlayersWhoDoNotNeedQuest;                          // 0x28(0x10)(Parm, OutParm)
	TArray<class AFortPlayerController*>         NotRequireQuest;                                   // 0x38(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)
	TArray<class AFortPlayerController*>         RequireQuest;                                      // 0x48(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_924D[0x4];                                     // Fixing Size After Last Property..
	TArray<class AFortPlayerController*>         CallFunc_GetAllFortPlayerControllers_ReturnValue;  // 0x60(0x10)(ReferenceParm)
	class AFortPlayerController*                 CallFunc_Array_Get_Item;                           // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x7C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_924E[0x3];                                     // Fixing Size After Last Property..
	class UFortQuestManager*                     CallFunc_GetQuestManager_ReturnValue;              // 0x80(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortQuestItem*                        CallFunc_GetQuestWithDefinition_ReturnValue;       // 0x88(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasCompletedObjectiveWithName_ReturnValue; // 0x90(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x91(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_924F[0x2];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Array_AddUnique_ReturnValue;              // 0x94(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_AddUnique_ReturnValue_1;            // 0x98(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x9C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_AddUnique_ReturnValue_2;            // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0xA4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9250[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0xA8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x190 (0x190 - 0x0)
// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.BasicBuildingItemDrop
struct UMissionBlueprintFunctionLibrary_C_BasicBuildingItemDrop_Params
{
public:
	enum class EnumEventWorldItemDrop            Item_Drop_Level;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9251[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               LootDropLocation;                                  // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        ItemsToSpawnPerRoll;                               // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9252[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               SpawnVector;                                       // 0x30(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_RandomFloatInRange_ReturnValue;           // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9253[0x7];                                     // Fixing Size After Last Property..
	double                                       CallFunc_RandomFloatInRange_ReturnValue_1;         // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_RandomFloatInRange_ReturnValue_2;         // 0x60(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_RandomFloatInRange_ReturnValue_3;         // 0x68(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_RandomFloatInRange_ReturnValue_4;         // 0x70(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_RandomFloatInRange_ReturnValue_5;         // 0x78(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Variable;                                 // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_IntInt_ReturnValue;             // 0x84(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9254[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9255[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_BreakVector_X;                            // 0x90(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Y;                            // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Z;                            // 0xA0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_X_1;                          // 0xA8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Y_1;                          // 0xB0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Z_1;                          // 0xB8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue;             // 0xC0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue_1;           // 0xC8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue_2;           // 0xD0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue_3;           // 0xD8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue_4;           // 0xE0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0xE8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue_5;           // 0x100(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPickup*                           CallFunc_K2_SpawnPickupInWorld_ReturnValue;        // 0x108(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue_1;                 // 0x110(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPickup*                           CallFunc_K2_SpawnPickupInWorld_ReturnValue_1;      // 0x128(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_X_2;                          // 0x130(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Y_2;                          // 0x138(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_BreakVector_Z_2;                          // 0x140(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_MultiGate_FirstRun;                         // 0x148(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9256[0x3];                                     // Fixing Size After Last Property..
	int32                                        K2Node_MultiGate_Data;                             // 0x14C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_MultiGate_ScratchBool;                      // 0x150(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9257[0x3];                                     // Fixing Size After Last Property..
	int32                                        K2Node_MultiGate_ScratchIndex;                     // 0x154(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue_6;           // 0x158(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue_7;           // 0x160(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_Add_DoubleDouble_ReturnValue_8;           // 0x168(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue_2;                 // 0x170(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPickup*                           CallFunc_K2_SpawnPickupInWorld_ReturnValue_2;      // 0x188(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.GetBuildingRecommendation
struct UMissionBlueprintFunctionLibrary_C_GetBuildingRecommendation_Params
{
public:
	class FName                                  RowName;                                           // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9258[0x4];                                     // Fixing Size After Last Property..
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        BuildingCount;                                     // 0x10(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         RowFound;                                          // 0x14(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9259[0x3];                                     // Fixing Size After Last Property..
	double                                       CallFunc_GetCurrentDifficulty_Difficulty;          // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetCurrentDifficulty_Success;             // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EEvaluateCurveTableResult         CallFunc_EvaluateCurveTableRow_OutResult;          // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_925A[0x2];                                     // Fixing Size After Last Property..
	float                                        CallFunc_EvaluateCurveTableRow_OutXY;              // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Round_ReturnValue;                        // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_925B[0x3];                                     // Fixing Size After Last Property..
	float                                        CallFunc_EvaluateCurveTableRow_InXY_ImplicitCast;  // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_925C[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_Round_A_ImplicitCast;                     // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x74 (0x74 - 0x0)
// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.Random_360_VectorInRange
struct UMissionBlueprintFunctionLibrary_C_Random_360_VectorInRange_Params
{
public:
	double                                       MinDistance;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       MaxDistance;                                       // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FVector                               Random_Vector_Result_;                             // 0x18(0x18)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_RandomFloatInRange_ReturnValue;           // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_RandomFloatInRange_ReturnValue_1;         // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_MakeVector_ReturnValue;                   // 0x40(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               CallFunc_RotateAngleAxis_ReturnValue;              // 0x58(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_RotateAngleAxis_AngleDeg_ImplicitCast;    // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x90 (0x90 - 0x0)
// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.AnyPawnNearActor
struct UMissionBlueprintFunctionLibrary_C_AnyPawnNearActor_Params
{
public:
	double                                       DistanceToCheck;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                Actor;                                             // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         IsPawnNearActor;                                   // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_925D[0x7];                                     // Fixing Size After Last Property..
	TArray<class AFortPawn*>                     PawnsNearActor;                                    // 0x20(0x10)(Parm, OutParm)
	TArray<class AFortPawn*>                     Pawns;                                             // 0x30(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_925E[0x4];                                     // Fixing Size After Last Property..
	TArray<class AFortPawn*>                     CallFunc_GetAllActorsOfClass_OutActors;            // 0x48(0x10)(ReferenceParm)
	class AFortPawn*                             CallFunc_Array_Get_Item;                           // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetDistanceTo_ReturnValue;                // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_925F[0x2];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9260[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_AddUnique_ReturnValue;              // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9261[0x7];                                     // Fixing Size After Last Property..
	double                                       CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;    // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x70 (0x70 - 0x0)
// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.GiveQuestUpdateToPlayers
struct UMissionBlueprintFunctionLibrary_C_GiveQuestUpdateToPlayers_Params
{
public:
	class UFortQuestItemDefinition*              Quest_Reference;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                  Quest_Objective_Backend_Name;                      // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9262[0x4];                                     // Fixing Size After Last Property..
	struct FDataTableRowHandle                   ObjectiveStatEvent;                                // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	TArray<class AFortPlayerController*>         PlayerControllersForUpdate;                        // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
	class UObject*                               __WorldContext;                                    // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerController*                 CallFunc_Array_Get_Item;                           // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9263[0x7];                                     // Fixing Size After Last Property..
	class UFortQuestManager*                     CallFunc_GetQuestManager_ReturnValue;              // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortQuestItem*                        CallFunc_GetQuestWithDefinition_ReturnValue;       // 0x58(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x61(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasCompletedObjectiveWithName_ReturnValue; // 0x62(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9264[0x1];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9265[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x31 (0x31 - 0x0)
// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.DropChance
struct UMissionBlueprintFunctionLibrary_C_DropChance_Params
{
public:
	double                                       DropPercentChance;                                 // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         DropResult;                                        // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9266[0x7];                                     // Fixing Size After Last Property..
	double                                       CallFunc_FClamp_ReturnValue;                       // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_DoubleDouble_ReturnValue;    // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9267[0x7];                                     // Fixing Size After Last Property..
	double                                       CallFunc_RandomFloatInRange_ReturnValue;           // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x90 (0x90 - 0x0)
// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.AnyPlayerNearActor
struct UMissionBlueprintFunctionLibrary_C_AnyPlayerNearActor_Params
{
public:
	double                                       DistanceToCheck;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class AActor*                                Actor;                                             // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         IsPlayerNearActor;                                 // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9268[0x7];                                     // Fixing Size After Last Property..
	TArray<class AFortPlayerPawn*>               PlayersNearActor;                                  // 0x20(0x10)(Parm, OutParm)
	TArray<class AFortPlayerPawn*>               PlayerPawns;                                       // 0x30(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)
	TArray<class AFortPlayerPawn*>               CallFunc_GetAllFortPlayerPawns_OutFortPlayerPawns; // 0x40(0x10)(ReferenceParm)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9269[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_926A[0x4];                                     // Fixing Size After Last Property..
	class AFortPlayerPawn*                       CallFunc_Array_Get_Item;                           // 0x60(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetDistanceTo_ReturnValue;                // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x70(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_LessEqual_DoubleDouble_ReturnValue;       // 0x71(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_926B[0x2];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x74(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_AddUnique_ReturnValue;              // 0x78(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x7C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_926C[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_926D[0x4];                                     // Fixing Size After Last Property..
	double                                       CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;    // 0x88(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.FlashObjectiveUI
struct UMissionBlueprintFunctionLibrary_C_FlashObjectiveUI_Params
{
public:
	class AFortObjectiveBase*                    Objective_Reference;                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTagContainer                 CallFunc_MakeLiteralGameplayTagContainer_ReturnValue; // 0x10(0x20)()
};

// 0xF0 (0xF0 - 0x0)
// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.NPC_DroneStopRescue
struct UMissionBlueprintFunctionLibrary_C_NPC_DroneStopRescue_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                Instigator;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FStruct_SurvivorScriptedAbilities     SurvivorAbilityStruct;                             // 0x18(0x24)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_926E[0x4];                                     // Fixing Size After Last Property..
	struct FGameplayEventData                    K2Node_MakeStruct_GameplayEventData;               // 0x40(0xB0)()
};

// 0xF0 (0xF0 - 0x0)
// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.NPC_DroneStartRescue
struct UMissionBlueprintFunctionLibrary_C_NPC_DroneStartRescue_Params
{
public:
	class AActor*                                Actor;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AActor*                                Instigator;                                        // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FStruct_SurvivorScriptedAbilities     SurvivorAbilityStruct;                             // 0x18(0x24)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_926F[0x4];                                     // Fixing Size After Last Property..
	struct FGameplayEventData                    K2Node_MakeStruct_GameplayEventData;               // 0x40(0xB0)()
};

// 0x8D (0x8D - 0x0)
// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.ListPlayersWhoNeedQuest
struct UMissionBlueprintFunctionLibrary_C_ListPlayersWhoNeedQuest_Params
{
public:
	class UFortQuestItemDefinition*              Quest_Reference;                                   // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                  Quest_Backend_Name;                                // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9270[0x4];                                     // Fixing Size After Last Property..
	class UObject*                               __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	TArray<class AFortPlayerController*>         Player_Controllers_Who_Require_The_Quest;          // 0x18(0x10)(Parm, OutParm)
	bool                                         DoesAnyoneRequireTheQuest;                         // 0x28(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PlayerNeededTheQuest;                              // 0x29(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9271[0x6];                                     // Fixing Size After Last Property..
	TArray<class AFortPlayerController*>         PlayersWhoRequireQuest;                            // 0x30(0x10)(Edit, BlueprintVisible, DisableEditOnTemplate)
	TArray<class AFortPlayerController*>         CallFunc_GetAllFortPlayerControllers_ReturnValue;  // 0x40(0x10)(ReferenceParm)
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x58(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x5C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9272[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Temp_int_Array_Index_Variable;                     // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9273[0x7];                                     // Fixing Size After Last Property..
	class AFortPlayerController*                 CallFunc_Array_Get_Item;                           // 0x70(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortQuestManager*                     CallFunc_GetQuestManager_ReturnValue;              // 0x78(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasCompletedObjectiveWithName_ReturnValue; // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9274[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Array_AddUnique_ReturnValue;              // 0x84(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_2;               // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue_1;        // 0x8C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x6B (0x6B - 0x0)
// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.DoesAnyoneRequireQuest
struct UMissionBlueprintFunctionLibrary_C_DoesAnyoneRequireQuest_Params
{
public:
	class UFortQuestItemDefinition*              QuestReference;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                  Quest_Backend_Name;                                // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9275[0x4];                                     // Fixing Size After Last Property..
	class UObject*                               __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         SomePlayerNeedsTheQuest;                           // 0x18(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         PlayerNeedsQuest;                                  // 0x19(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9276[0x2];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Array_Index_Variable;                     // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class AFortPlayerController*>         CallFunc_GetAllFortPlayerControllers_ReturnValue;  // 0x20(0x10)(ReferenceParm)
	class AFortPlayerController*                 CallFunc_Array_Get_Item;                           // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9277[0x4];                                     // Fixing Size After Last Property..
	class UFortQuestManager*                     CallFunc_GetQuestManager_ReturnValue;              // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9278[0x4];                                     // Fixing Size After Last Property..
	class UFortQuestItem*                        CallFunc_GetQuestWithDefinition_ReturnValue;       // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GreaterEqual_IntInt_ReturnValue;          // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x59(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasCompletedObjectiveWithName_ReturnValue; // 0x5A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9279[0x1];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x5C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x60(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_927A[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x64(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x69(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x6A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x59 (0x59 - 0x0)
// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.QuestObjectiveCountAchieved
struct UMissionBlueprintFunctionLibrary_C_QuestObjectiveCountAchieved_Params
{
public:
	class AFortPlayerController*                 PlayerControllerReference;                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortQuestItemDefinition*              Quest_Item_Reference;                              // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   ObjectiveStatHandle;                               // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)
	class UObject*                               __WorldContext;                                    // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        Quest_Count_Achieved;                              // 0x28(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        Quest_Count_Required;                              // 0x2C(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         SuccessfullyFoundCount;                            // 0x30(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_927B[0x3];                                     // Fixing Size After Last Property..
	int32                                        LocalRequiredCount;                                // 0x34(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        LocalAchievedCount;                                // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bSuccessfullyFoundStage;                           // 0x3C(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x3D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_927C[0x2];                                     // Fixing Size After Last Property..
	class UFortQuestManager*                     CallFunc_GetQuestManager_ReturnValue;              // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortQuestItem*                        CallFunc_GetQuestWithDefinition_ReturnValue;       // 0x48(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortQuestObjectiveInfo*               CallFunc_GetObjectiveInfo_ReturnValue;             // 0x50(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x58(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x60 (0x60 - 0x0)
// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.HighlightQuestActor
struct UMissionBlueprintFunctionLibrary_C_HighlightQuestActor_Params
{
public:
	class AActor*                                ActorToHighlight;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         HighlightEnabled;                                  // 0x8(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_927D[0x7];                                     // Fixing Size After Last Property..
	class UObject*                               __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABuildingActor*                        K2Node_DynamicCast_AsBuilding_Actor;               // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_927E[0x3];                                     // Fixing Size After Last Property..
	float                                        CallFunc_GetScalarParameterValue_ReturnValue;      // 0x24(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class ABuildingSMActor*                      K2Node_DynamicCast_AsBuilding_Static_Mesh;         // 0x28(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_927F[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_FTrunc_ReturnValue;                       // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  CallFunc_GetBuildingMeshComponent_ReturnValue;     // 0x38(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UStaticMeshComponent*                  CallFunc_GetBuildingMeshComponent_ReturnValue_1;   // 0x40(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetScalarParameterValue_ReturnValue_1;    // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_FTrunc_ReturnValue_1;                     // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_FTrunc_A_ImplicitCast;                    // 0x50(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_FTrunc_A_ImplicitCast_1;                  // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4B (0x4B - 0x0)
// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.DoesPlayerHaveQuest
struct UMissionBlueprintFunctionLibrary_C_DoesPlayerHaveQuest_Params
{
public:
	class AFortPlayerController*                 PlayerController;                                  // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortQuestItemDefinition*              Quest_Item_Reference;                              // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                  Quest_Item_Objective_Backend_Name;                 // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9280[0x4];                                     // Fixing Size After Last Property..
	class UObject*                               __WorldContext;                                    // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         QuestValid;                                        // 0x20(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9281[0x7];                                     // Fixing Size After Last Property..
	class AFortPlayerController*                 PlayerControllerRef;                               // 0x28(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortQuestManager*                     CallFunc_GetQuestManager_ReturnValue;              // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9282[0x7];                                     // Fixing Size After Last Property..
	class UFortQuestItem*                        CallFunc_GetQuestWithDefinition_ReturnValue;       // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_HasCompletedObjectiveWithName_ReturnValue; // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x49(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x4A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x201 (0x201 - 0x0)
// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.GetObjectiveBadgeIconBrush
struct UMissionBlueprintFunctionLibrary_C_GetObjectiveBadgeIconBrush_Params
{
public:
	class AFortObjectiveBase*                    Objective;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          RewardTag;                                         // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9283[0x4];                                     // Fixing Size After Last Property..
	class UObject*                               __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9284[0x8];                                     // Fixing Size After Last Property..
	struct FSlateBrush                           IconBrush;                                         // 0x20(0xC0)(Parm, OutParm)
	class UFortBadgeItemDefinition*              BadgeItem;                                         // 0xE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_True_if_break_was_hit_Variable;          // 0xE8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9285[0x7];                                     // Fixing Size After Last Property..
	TArray<class UFortWorldItemDefinition*>      CallFunc_GetRewardItemsByTag_OutRewardItems;       // 0xF0(0x10)(ReferenceParm)
	int32                                        CallFunc_Array_Length_ReturnValue;                 // 0x100(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        CallFunc_Array_Length_ReturnValue_1;               // 0x104(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Greater_IntInt_ReturnValue;               // 0x109(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue;                  // 0x10A(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9286[0x1];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Array_Index_Variable;                     // 0x10C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UFortWorldItemDefinition*              CallFunc_Array_Get_Item;                           // 0x110(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFortBadgeItemDefinition*              K2Node_DynamicCast_AsFort_Badge_Item_Definition;   // 0x118(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9287[0x3];                                     // Fixing Size After Last Property..
	int32                                        Temp_int_Loop_Counter_Variable;                    // 0x124(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Less_IntInt_ReturnValue_1;                // 0x128(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9288[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Add_IntInt_ReturnValue;                   // 0x12C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x130(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9289[0xF];                                     // Fixing Size After Last Property..
	struct FSlateBrush                           CallFunc_GetSmallPreviewImageBrush_ReturnValue;    // 0x140(0xC0)()
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x200(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x49 (0x49 - 0x0)
// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.UnRegisterUI UpdatesWithDamageEvents
struct UMissionBlueprintFunctionLibrary_C_UnRegisterUI_UpdatesWithDamageEvents_Params
{
public:
	class AActor*                                ActorToUnRegisterWith;                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortMissionState*                     MissionState;                                      // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABuildingActor*                        K2Node_DynamicCast_AsBuilding_Actor;               // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_928A[0x3];                                     // Fixing Size After Last Property..
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x24(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x30(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_928B[0x4];                                     // Fixing Size After Last Property..
	class AFortPawn*                             K2Node_DynamicCast_AsFort_Pawn;                    // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x49 (0x49 - 0x0)
// Function MissionBlueprintFunctionLibrary.MissionBlueprintFunctionLibrary_C.RegisterUI UpdatesWithDamageEvents
struct UMissionBlueprintFunctionLibrary_C_RegisterUI_UpdatesWithDamageEvents_Params
{
public:
	class AActor*                                ActorToRegisterWith;                               // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortMissionState*                     MissionState;                                      // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABuildingActor*                        K2Node_DynamicCast_AsBuilding_Actor;               // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_928C[0x3];                                     // Fixing Size After Last Property..
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x24(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x30(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_928D[0x4];                                     // Fixing Size After Last Property..
	class AFortPawn*                             K2Node_DynamicCast_AsFort_Pawn;                    // 0x40(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
