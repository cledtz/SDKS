#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x400 (0xAD0 - 0x6D0)
// BlueprintGeneratedClass AOE_Commando_KeepOutExplosion.AOE_Commando_KeepOutExplosion_C
class UAOE_Commando_KeepOutExplosion_C : public UFortAreaOfEffectCloud
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x6D0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UAudioComponent*                       AOE_Audio_Effect;                                  // 0x6D8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UParticleSystemComponent*              P_Grenade_Linger;                                  // 0x6E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USphereComponent*                      DamageArea;                                        // 0x6E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class USceneComponent*                       DefaultSceneRoot;                                  // 0x6F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       Radius;                                            // 0x6F8(0x8)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, RepNotify, NoDestructor, HasGetValueTypeHash)
	struct FSoundAttenuationSettings             AOE_Sound_Attenuation_Based_On_Radius;             // 0x700(0x3D0)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass();
	static class UAOE_Commando_KeepOutExplosion_C* GetDefaultObj();

	void OnRep_Radius(const struct FSoundAttenuationSettings& CallFunc_BP_GetAttenuationSettingsToApply_OutAttenuationSettings, bool CallFunc_BP_GetAttenuationSettingsToApply_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FSoundAttenuationSettings& K2Node_MakeStruct_SoundAttenuationSettings, float CallFunc_SetFloatParameter_Param_ImplicitCast, float K2Node_MakeStruct_FalloffDistance_ImplicitCast);
	void Send_Info(double Radius);
	void ReceiveDestroyed();
	void ReceiveBeginPlay();
	void ExecuteUbergraph_AOE_Commando_KeepOutExplosion(int32 EntryPoint, double K2Node_CustomEvent_Radius, float CallFunc_SetSphereRadius_InSphereRadius_ImplicitCast);
};

}


