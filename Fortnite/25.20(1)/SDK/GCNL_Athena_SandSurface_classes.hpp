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

// 0x26 (0x9A0 - 0x97A)
// BlueprintGeneratedClass GCNL_Athena_SandSurface.GCNL_Athena_SandSurface_C
class UGCNL_Athena_SandSurface_C : public UGCNL_Athena_Surface_Parent_C
{
public:
	uint8                                        Pad_8CEA[0x6];                                     // Fixing Size After Last Property..
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x980(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNiagaraComponent*                     FootStepFX;                                        // 0x988(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, InstancedReference, NoDestructor, HasGetValueTypeHash)
	bool                                         bNotValid;                                         // 0x990(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bReplayMode;                                       // 0x991(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8CEB[0x6];                                     // Fixing Size After Last Property..
	class UFortReplaySpectatorAthena*            ReplayController;                                  // 0x998(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCNL_Athena_SandSurface_C");
		return Clss;
	}

	void OnPlayerFootstep(const struct FVector& CallFunc_GetVelocity_ReturnValue, const struct FVector& CallFunc_GetCachedStepSurfaceNormal_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UActor* CallFunc_GetViewTarget_ReturnValue, bool CallFunc_OnSameTeam_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, int32 CallFunc_GetCachedFootstepIndex_ReturnValue, bool CallFunc_EqualEqual_IntInt_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue_1, const struct FTransform& CallFunc_SelectTransform_ReturnValue, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct FVector& CallFunc_GetForwardVector_ReturnValue, const struct FVector4& CallFunc_MakeVector4_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, TArray<struct FVector4>& K2Node_MakeArray_Array, const struct FVector& CallFunc_SelectVector_ReturnValue);
	void OnLoopingStartNiagara(class UActor* MyTarget, struct FGameplayCueParameters& Parameters, TArray<class UNiagaraComponent*>& ParticleComponents, TArray<class UAudioComponent*>& AudioComponents);
	void ExecuteUbergraph_GCNL_Athena_SandSurface(int32 EntryPoint, bool CallFunc_IsMobilePlatform_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UActor* K2Node_Event_MyTarget, const struct FGameplayCueParameters& K2Node_Event_Parameters, TArray<class UNiagaraComponent*>& K2Node_Event_ParticleComponents, TArray<class UAudioComponent*>& K2Node_Event_AudioComponents, class UNiagaraComponent* CallFunc_Array_Get_Item, bool CallFunc_OnLocalPlayersTeam_Return_Value, bool CallFunc_GetIsPlayingReplay_ReturnValue, class UFortPlayerController* CallFunc_GetFirstLocalFortPlayerController_ReturnValue, class UFortReplaySpectatorAthena* K2Node_DynamicCast_AsFort_Replay_Spectator_Athena, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsValid_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
