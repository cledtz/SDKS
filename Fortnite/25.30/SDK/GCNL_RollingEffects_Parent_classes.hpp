#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0xAF0 - 0xAC8)
// BlueprintGeneratedClass GCNL_RollingEffects_Parent.GCNL_RollingEffects_Parent_C
class UGCNL_RollingEffects_Parent_C : public UFortGameplayCueNotifyLoop_PhysicsObjectRolling
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xAC8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class USoundBase*                            SoundAssetDefault;                                 // 0xAD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            SoundAssetSmall;                                   // 0xAD8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            SoundAssetMedium;                                  // 0xAE0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class USoundBase*                            SoundAssetLarge;                                   // 0xAE8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCNL_RollingEffects_Parent_C");
		return Clss;
	}

	void GetObjectSizeParam(class UActor* PhysicsObject, int32* Size, bool CallFunc_DoesPhysicsObjectMeetSizeRequirement_ReturnValue, bool CallFunc_DoesPhysicsObjectMeetSizeRequirement_ReturnValue_1);
	void GetSoundAsset(class UActor* PhysicsObject, class USoundBase** Asset, int32 Temp_int_Variable, int32 CallFunc_GetObjectSizeParam_Size, bool Temp_bool_Variable, class USoundBase* K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue, class USoundBase* K2Node_Select_Default_1);
	void OnApplicationGeneric(class UActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UFXSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class UDecalActor* BurstDecalInstance);
	void OnRemovalGeneric(class UActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UFXSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents, class ULegacyCameraShake* BurstCameraShakeInstance, class UDecalActor* BurstDecalInstance);
	void ExecuteUbergraph_GCNL_RollingEffects_Parent(int32 EntryPoint, class UActor* K2Node_Event_MyTarget, const struct FGameplayCueParameters& K2Node_Event_Parameters, TArray<class UFXSystemComponent*>& K2Node_Event_ParticleComponents, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents, class ULegacyCameraShake* K2Node_Event_BurstCameraShakeInstance, class UDecalActor* K2Node_Event_BurstDecalInstance, class UActor* K2Node_Event_MyTarget_1, const struct FGameplayCueParameters& K2Node_Event_Parameters_1, TArray<class UFXSystemComponent*>& K2Node_Event_ParticleComponents_1, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents_1, class ULegacyCameraShake* K2Node_Event_BurstCameraShakeInstance_1, class UDecalActor* K2Node_Event_BurstDecalInstance_1, class USoundBase* CallFunc_GetSoundAsset_Asset, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif