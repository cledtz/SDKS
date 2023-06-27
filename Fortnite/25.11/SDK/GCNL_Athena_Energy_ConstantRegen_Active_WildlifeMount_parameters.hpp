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
// Function GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount.GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C.Added_7482F31A49360978B87F339D76FC2BB7
struct AGCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C_Added_7482F31A49360978B87F339D76FC2BB7_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount.GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C.Removed_AD34CCD44592FD2F05DB47BDF9413ACC
struct AGCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C_Removed_AD34CCD44592FD2F05DB47BDF9413ACC_Params
{
public:
};

// 0x108 (0x108 - 0x0)
// Function GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount.GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C.OnApplicationGeneric
struct AGCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C_OnApplicationGeneric_Params
{
public:
	class AActor*                                MyTarget;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                Parameters;                                        // 0x8(0xD0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UFXSystemComponent*>            ParticleComponents;                                // 0xD8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UAudioComponent*>               AudioComponents;                                   // 0xE8(0x10)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
	class ULegacyCameraShake*                    BurstCameraShakeInstance;                          // 0xF8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ADecalActor*                           BurstDecalInstance;                                // 0x100(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x149 (0x149 - 0x0)
// Function GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount.GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C.ExecuteUbergraph_GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount
struct AGCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_C_ExecuteUbergraph_GCNL_Athena_Energy_ConstantRegen_Active_WildlifeMount_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate_1;            // 0x10(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9A98[0x4];                                     // Fixing Size After Last Property..
	class AActor*                                K2Node_Event_MyTarget;                             // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FGameplayCueParameters                K2Node_Event_Parameters;                           // 0x28(0xD0)(ConstParm, ContainsInstancedReference)
	TArray<class UFXSystemComponent*>            K2Node_Event_ParticleComponents;                   // 0xF8(0x10)(ConstParm, ReferenceParm, ContainsInstancedReference)
	TArray<class UAudioComponent*>               K2Node_Event_AudioComponents;                      // 0x108(0x10)(ConstParm, ReferenceParm, ContainsInstancedReference)
	class ULegacyCameraShake*                    K2Node_Event_BurstCameraShakeInstance;             // 0x118(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class ADecalActor*                           K2Node_Event_BurstDecalInstance;                   // 0x120(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UAbilityAsync_WaitGameplayTagAdded*    CallFunc_WaitGameplayTagAddToActor_ReturnValue;    // 0x128(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UFXSystemComponent*                    CallFunc_Array_Get_Item;                           // 0x130(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9A99[0x7];                                     // Fixing Size After Last Property..
	class UAbilityAsync_WaitGameplayTagRemoved*  CallFunc_WaitGameplayTagRemoveFromActor_ReturnValue; // 0x140(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x148(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
