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

// 0x10 (0x88 - 0x78)
// BlueprintGeneratedClass AnimNotifyState_NiagaraNotify_SetParameters.AnimNotifyState_NiagaraNotify_SetParameters_C
class UAnimNotifyState_NiagaraNotify_SetParameters_C : public UAnimNotifyState_TimedNiagaraEffect
{
public:
	TArray<struct FStruc_NiagaraParameters>      Parameter_Setup;                                   // 0x78(0x10)(Edit, BlueprintVisible)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AnimNotifyState_NiagaraNotify_SetParameters_C");
		return Clss;
	}

	bool Received_NotifyTick(class USkeletalMeshComponent* MeshComp, class UAnimSequenceBase* Animation, float FrameDeltaTime, struct FAnimNotifyEventReference& EventReference, class UFXSystemComponent* CallFunc_GetSpawnedEffect_ReturnValue, class UFXSystemComponent* CallFunc_GetSpawnedEffect_ReturnValue_1, class UFXSystemComponent* CallFunc_GetSpawnedEffect_ReturnValue_2, class UFXSystemComponent* CallFunc_GetSpawnedEffect_ReturnValue_3, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, bool Temp_bool_Has_Been_Initd_Variable, bool Temp_bool_IsClosed_Variable, const struct FStruc_NiagaraParameters& CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
