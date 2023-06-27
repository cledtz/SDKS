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

// 0x1B0 (0x1B0 - 0x0)
// Function GCN_Burst_LandOnRail.GCN_Burst_LandOnRail_C.OnBurstGeneric
struct UGCN_Burst_LandOnRail_C_OnBurstGeneric_Params
{
public:
	class AActor*                                MyTarget;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xD0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UFXSystemComponent*>            ParticleComponents;                                // 0xD8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UAudioComponent*>               AudioComponents;                                   // 0xE8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	class ULegacyCameraShake*                    BurstCameraShakeInstance;                          // 0xF8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ADecalActor*                           BurstDecalInstance;                                // 0x100(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         Temp_bool_Variable;                                // 0x108(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A08E[0x7];                                     // Fixing Size After Last Property..
	class USoundLibrarySubsystem*                CallFunc_GetWorldSubsystem_ReturnValue;            // 0x110(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class AFortPawn*                             K2Node_DynamicCast_AsFort_Pawn;                    // 0x118(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         K2Node_DynamicCast_bSuccess;                       // 0x120(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A08F[0x7];                                     // Fixing Size After Last Property..
	class UBP_GrindingComponent_C*               CallFunc_GetComponentByClass_ReturnValue;          // 0x128(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       CallFunc_K2_GetRootComponent_ReturnValue;          // 0x130(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FGameplayTag                          K2Node_Select_Default;                             // 0x138(0x4)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A090[0x4];                                     // Fixing Size After Last Property..
	struct FSoundLibrarySimpleContextSettings    K2Node_MakeStruct_SoundLibrarySimpleContextSettings; // 0x140(0x58)(NoDestructor, ContainsInstancedReference)
	struct FSoundLibraryPlayResult               CallFunc_PlaySoundSimple_ReturnValue;              // 0x198(0x18)(ContainsInstancedReference)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
