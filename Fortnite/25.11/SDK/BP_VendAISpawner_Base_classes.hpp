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

// 0x28 (0x2B0 - 0x288)
// BlueprintGeneratedClass BP_VendAISpawner_Base.BP_VendAISpawner_Base_C
class ABP_VendAISpawner_Base_C : public AActor
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x288(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     Niagara;                                           // 0x290(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	double                                       SpawnDelay;                                        // 0x298(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDataTableRowHandle                   EventRowHandle;                                    // 0x2A0(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_VendAISpawner_Base_C");
		return Clss;
	}

	void ReceiveBeginPlay();
	void ExecuteUbergraph_BP_VendAISpawner_Base(int32 EntryPoint, bool CallFunc_HasAuthority_ReturnValue, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ Temp_delegate_Variable, const struct FTransform& CallFunc_GetTransform_ReturnValue, class AFortGameStateAthena* CallFunc_GetGameStateAthenaFromContext_ReturnValue, class UFortAthenaLivingWorldManager* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_TrySpawnEvent_RequestId, bool CallFunc_TrySpawnEvent_ReturnValue, float CallFunc_Delay_Duration_ImplicitCast);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
