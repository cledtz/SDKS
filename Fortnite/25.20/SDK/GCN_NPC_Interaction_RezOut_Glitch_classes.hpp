#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x730 - 0x720)
// BlueprintGeneratedClass GCN_NPC_Interaction_RezOut_Glitch.GCN_NPC_Interaction_RezOut_Glitch_C
class AGCN_NPC_Interaction_RezOut_Glitch_C : public AGCN_RezOut_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x720(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USoundBase*                            SoundOnNPCDeath;                                   // 0x728(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCN_NPC_Interaction_RezOut_Glitch_C");
		return Clss;
	}

	void Spawn_Dissolve_VFX();
	void ExecuteUbergraph_GCN_NPC_Interaction_RezOut_Glitch(int32 EntryPoint, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, const struct FRotator& CallFunc_K2_GetComponentRotation_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
