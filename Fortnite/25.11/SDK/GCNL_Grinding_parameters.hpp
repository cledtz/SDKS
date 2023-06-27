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
// Function GCNL_Grinding.GCNL_Grinding_C.AllowAudio
struct AGCNL_Grinding_C_AllowAudio_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function GCNL_Grinding.GCNL_Grinding_C.OnJumpedOff
struct AGCNL_Grinding_C_OnJumpedOff_Params
{
public:
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A094[0x7];                                     // Fixing Size After Last Property..
	class USceneComponent*                       CallFunc_K2_GetRootComponent_ReturnValue;          // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue;           // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function GCNL_Grinding.GCNL_Grinding_C.GrindAudioState
struct AGCNL_Grinding_C_GrindAudioState_Params
{
public:
	bool                                         Start;                                             // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_2;                    // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_3;                    // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_OnLocalPlayersTeam_Return_Value;          // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A095[0x2];                                     // Fixing Size After Last Property..
	class USceneComponent*                       CallFunc_K2_GetRootComponent_ReturnValue;          // 0x8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue;           // 0x10(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function GCNL_Grinding.GCNL_Grinding_C.AlphaCurve__FinishedFunc
struct AGCNL_Grinding_C_AlphaCurve__FinishedFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GCNL_Grinding.GCNL_Grinding_C.AlphaCurve__UpdateFunc
struct AGCNL_Grinding_C_AlphaCurve__UpdateFunc_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GCNL_Grinding.GCNL_Grinding_C.OnFeetLanded
struct AGCNL_Grinding_C_OnFeetLanded_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function GCNL_Grinding.GCNL_Grinding_C.OnGrindRailSprint
struct AGCNL_Grinding_C_OnGrindRailSprint_Params
{
public:
	bool                                         bNewIsSprinting;                                   // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function GCNL_Grinding.GCNL_Grinding_C.OnGrindRailBoosterMode
struct AGCNL_Grinding_C_OnGrindRailBoosterMode_Params
{
public:
	enum class EGrindRailBoosterMode             PreviousBoosterMode;                               // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x108 (0x108 - 0x0)
// Function GCNL_Grinding.GCNL_Grinding_C.OnRemovalGeneric
struct AGCNL_Grinding_C_OnRemovalGeneric_Params
{
public:
	class AActor*                                MyTarget;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xD0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UFXSystemComponent*>            ParticleComponents;                                // 0xD8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UAudioComponent*>               AudioComponents;                                   // 0xE8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	class ULegacyCameraShake*                    BurstCameraShakeInstance;                          // 0xF8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ADecalActor*                           BurstDecalInstance;                                // 0x100(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x108 (0x108 - 0x0)
// Function GCNL_Grinding.GCNL_Grinding_C.OnApplicationGeneric
struct AGCNL_Grinding_C_OnApplicationGeneric_Params
{
public:
	class AActor*                                MyTarget;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xD0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UFXSystemComponent*>            ParticleComponents;                                // 0xD8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UAudioComponent*>               AudioComponents;                                   // 0xE8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	class ULegacyCameraShake*                    BurstCameraShakeInstance;                          // 0xF8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ADecalActor*                           BurstDecalInstance;                                // 0x100(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function GCNL_Grinding.GCNL_Grinding_C.HandleGrindRailChanged
struct AGCNL_Grinding_C_HandleGrindRailChanged_Params
{
public:
	class AFortGrindRail*                        OldRail;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortGrindRail*                        NewRail;                                           // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function GCNL_Grinding.GCNL_Grinding_C.OnForwardChanged
struct AGCNL_Grinding_C_OnForwardChanged_Params
{
public:
	bool                                         bNewState;                                         // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x4 (0x4 - 0x0)
// Function GCNL_Grinding.GCNL_Grinding_C.ReceiveTick
struct AGCNL_Grinding_C_ReceiveTick_Params
{
public:
	float                                        DeltaSeconds;                                      // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xF8 (0xF8 - 0x0)
// Function GCNL_Grinding.GCNL_Grinding_C.OnLoopingStartGeneric
struct AGCNL_Grinding_C_OnLoopingStartGeneric_Params
{
public:
	class AActor*                                MyTarget;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xD0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UFXSystemComponent*>            ParticleComponents;                                // 0xD8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UAudioComponent*>               AudioComponents;                                   // 0xE8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
};

// 0x3D8 (0x3D8 - 0x0)
// Function GCNL_Grinding.GCNL_Grinding_C.ExecuteUbergraph_GCNL_Grinding
struct AGCNL_Grinding_C_ExecuteUbergraph_GCNL_Grinding_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A096[0x2];                                     // Fixing Size After Last Property..
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x8(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x14(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_2;            // 0x20(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_CustomEvent_bNewIsSprinting;                // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess;                      // 0x2D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EGrindRailBoosterMode             K2Node_CustomEvent_PreviousBoosterMode;            // 0x2E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_SwitchEnum_CmpSuccess_1;                    // 0x2F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UBP_GrindingComponent_C*               CallFunc_GetComponentByClass_ReturnValue;          // 0x30(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AActor*                                K2Node_Event_MyTarget_2;                           // 0x38(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                K2Node_Event_Parameters_2;                         // 0x40(0xD0)(ConstParm, ContainsInstancedReference)
	TArray<class UFXSystemComponent*>            K2Node_Event_ParticleComponents_2;                 // 0x110(0x10)(ConstParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UAudioComponent*>               K2Node_Event_AudioComponents_2;                    // 0x120(0x10)(ConstParm, ReferenceParm, ContainsInstancedReference)
	class ULegacyCameraShake*                    K2Node_Event_BurstCameraShakeInstance_1;           // 0x130(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ADecalActor*                           K2Node_Event_BurstDecalInstance_1;                 // 0x138(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn;             // 0x140(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x148(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A097[0x7];                                     // Fixing Size After Last Property..
	class AActor*                                K2Node_Event_MyTarget_1;                           // 0x150(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                K2Node_Event_Parameters_1;                         // 0x158(0xD0)(ConstParm, ContainsInstancedReference)
	TArray<class UFXSystemComponent*>            K2Node_Event_ParticleComponents_1;                 // 0x228(0x10)(ConstParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UAudioComponent*>               K2Node_Event_AudioComponents_1;                    // 0x238(0x10)(ConstParm, ReferenceParm, ContainsInstancedReference)
	class ULegacyCameraShake*                    K2Node_Event_BurstCameraShakeInstance;             // 0x248(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ADecalActor*                           K2Node_Event_BurstDecalInstance;                   // 0x250(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_3;            // 0x258(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A098[0x4];                                     // Fixing Size After Last Property..
	class AFortGrindRail*                        K2Node_CustomEvent_OldRail;                        // 0x268(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortGrindRail*                        K2Node_CustomEvent_NewRail;                        // 0x270(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ABGA_GrindRail_C*                      K2Node_DynamicCast_AsBGA_Grind_Rail;               // 0x278(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_1;                     // 0x280(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A099[0x3];                                     // Fixing Size After Last Property..
	int32                                        CallFunc_Conv_ByteToInt_ReturnValue;               // 0x284(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_Event_bNewState;                            // 0x288(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A09A[0x7];                                     // Fixing Size After Last Property..
	class USceneComponent*                       CallFunc_K2_GetRootComponent_ReturnValue;          // 0x290(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_4;            // 0x298(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_GetConsoleVariableFloatValue_ReturnValue; // 0x2A4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_DeltaSeconds;                         // 0x2A8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A09B[0x4];                                     // Fixing Size After Last Property..
	class AActor*                                K2Node_Event_MyTarget;                             // 0x2B0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                K2Node_Event_Parameters;                           // 0x2B8(0xD0)(ConstParm, ContainsInstancedReference)
	TArray<class UFXSystemComponent*>            K2Node_Event_ParticleComponents;                   // 0x388(0x10)(ConstParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UAudioComponent*>               K2Node_Event_AudioComponents;                      // 0x398(0x10)(ConstParm, ReferenceParm, ContainsInstancedReference)
	class UAudioComponent*                       CallFunc_Array_Get_Item;                           // 0x3A8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UFXSystemComponent*                    CallFunc_Array_Get_Item_1;                         // 0x3B0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UBP_GrindingComponent_C*               CallFunc_GetComponentByClass_ReturnValue_1;        // 0x3B8(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class AFortPlayerPawn*                       K2Node_DynamicCast_AsFort_Player_Pawn_1;           // 0x3C0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess_2;                     // 0x3C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A09C[0x7];                                     // Fixing Size After Last Property..
	class UAudioComponent*                       CallFunc_SpawnSoundAttached_ReturnValue;           // 0x3D0(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
