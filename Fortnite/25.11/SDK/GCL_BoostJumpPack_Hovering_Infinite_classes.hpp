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

// 0x40 (0xAE0 - 0xAA0)
// BlueprintGeneratedClass GCL_BoostJumpPack_Hovering_Infinite.GCL_BoostJumpPack_Hovering_Infinite_C
class AGCL_BoostJumpPack_Hovering_Infinite_C : public AGameplayCueNotify_Jetpack_Hovering
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xAA0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         bJetpackAudioEnabled;                              // 0xAA8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9C6B[0x7];                                     // Fixing Size After Last Property..
	class USoundBase*                            SoundOnStart;                                      // 0xAB0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            SoundOnStop;                                       // 0xAB8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            SoundLoopOnIdle;                                   // 0xAC0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            SoundLoopOnAccel;                                  // 0xAC8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         bIsFirstJump;                                      // 0xAD0(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9C6C[0x7];                                     // Fixing Size After Last Property..
	class UFXSystemComponent*                    VFX_Reference;                                     // 0xAD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCL_BoostJumpPack_Hovering_Infinite_C");
		return Clss;
	}

	void SetJetpackAudioEnabled(bool Enabled, bool CallFunc_IsValid_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_1, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_2, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool Temp_bool_Variable, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class USoundBase* K2Node_Select_Default, double CallFunc_RandomFloatInRange_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1, double CallFunc_RandomFloatInRange_ReturnValue_1, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_2, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_3, float CallFunc_SpawnSoundAttached_StartTime_ImplicitCast, float CallFunc_SpawnSoundAttached_StartTime_ImplicitCast_1);
	bool OnRemove(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_OnRemove_ReturnValue);
	bool OnActive(class AActor* MyTarget, struct FGameplayCueParameters& Parameters, bool CallFunc_OnActive_ReturnValue, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFXSystemComponent* CallFunc_SpawnFXSystemAttached_ReturnValue);
	void On_Pawn_Landed(struct FHitResult& Hit);
	void ExecuteUbergraph_GCL_BoostJumpPack_Hovering_Infinite(int32 EntryPoint, const struct FHitResult& K2Node_CustomEvent_Hit, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
