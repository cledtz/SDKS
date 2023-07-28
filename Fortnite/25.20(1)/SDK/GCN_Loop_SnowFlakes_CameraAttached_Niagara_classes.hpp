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

// 0x14 (0x97C - 0x968)
// BlueprintGeneratedClass GCN_Loop_SnowFlakes_CameraAttached_Niagara.GCN_Loop_SnowFlakes_CameraAttached_Niagara_C
class UGCN_Loop_SnowFlakes_CameraAttached_Niagara_C : public UFortGameplayCueNotify_Loop
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x968(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     ReturnValue;                                       // 0x970(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	int32                                        NewVar;                                            // 0x978(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCN_Loop_SnowFlakes_CameraAttached_Niagara_C");
		return Clss;
	}

	void OnLoopingStartGeneric(class UActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UFXSystemComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents);
	void ExecuteUbergraph_GCN_Loop_SnowFlakes_CameraAttached_Niagara(int32 EntryPoint, class UActor* K2Node_Event_MyTarget, const struct FGameplayCueParameters& K2Node_Event_Parameters, TArray<class UFXSystemComponent*>& K2Node_Event_ParticleComponents, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents, class UFXSystemComponent* CallFunc_Array_Get_Item, class UNiagaraComponent* K2Node_DynamicCast_AsNiagara_Particle_System_Component, bool K2Node_DynamicCast_bSuccess, class UNiagaraSystem* CallFunc_GetAsset_ReturnValue, bool CallFunc_IsNiagaraEffectEnabled_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
