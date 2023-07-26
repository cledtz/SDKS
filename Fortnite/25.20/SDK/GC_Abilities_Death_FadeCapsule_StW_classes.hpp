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

// 0x30 (0x560 - 0x530)
// BlueprintGeneratedClass GC_Abilities_Death_FadeCapsule_StW.GC_Abilities_Death_FadeCapsule_StW_C
class AGC_Abilities_Death_FadeCapsule_StW_C : public AFortGameplayCueNotify_BurstLatent
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x530(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	float                                        CapsuleFadeTL_RemoveShadow_D18D776D462C2233B7D3E1B7577403C1; // 0x538(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class ETimelineDirection                CapsuleFadeTL__Direction_D18D776D462C2233B7D3E1B7577403C1; // 0x53C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_86BB[0x3];                                     // Fixing Size After Last Property..
	class UTimelineComponent*                    CapsuleFadeTL;                                     // 0x540(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	double                                       Starting_Min_Capsule_Shadow_Vis;                   // 0x548(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class USkeletalMeshComponent*>        SkeletalMesh;                                      // 0x550(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, ContainsInstancedReference)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GC_Abilities_Death_FadeCapsule_StW_C");
		return Clss;
	}

	void SkeletalMeshSetup(class AFortPlayerPawn* FortPawn, class USkeletalMeshComponent* Temp_object_Variable, int32 CallFunc_MakeLiteralInt_ReturnValue, int32 Temp_int_Variable, int32 Temp_int_Variable_1, uint8 CallFunc_Conv_IntToByte_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, uint8 CallFunc_GetValidValue_ReturnValue, uint8 CallFunc_Conv_IntToByte_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue, uint8 CallFunc_GetEnumeratorValueFromIndex_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue, bool CallFunc_Array_RemoveItem_ReturnValue, int32 CallFunc_Array_Add_ReturnValue);
	void CapsuleFadeTL__FinishedFunc();
	void CapsuleFadeTL__UpdateFunc();
	void K2_HandleGameplayCue(class AActor* MyTarget, enum class EGameplayCueEvent EventType, struct FGameplayCueParameters& Parameters);
	void ExecuteUbergraph_GC_Abilities_Death_FadeCapsule_StW(int32 EntryPoint, bool CallFunc_IsDedicatedServer_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable, class AActor* K2Node_Event_MyTarget, enum class EGameplayCueEvent K2Node_Event_EventType, const struct FGameplayCueParameters& K2Node_Event_Parameters, bool K2Node_SwitchEnum_CmpSuccess, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, double CallFunc_Lerp_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class USkeletalMeshComponent* CallFunc_Array_Get_Item, bool CallFunc_Less_IntInt_ReturnValue, double CallFunc_Lerp_Alpha_ImplicitCast, double K2Node_VariableSet_Starting_Min_Capsule_Shadow_Vis_ImplicitCast, float CallFunc_SetCapsuleIndirectShadowMinVisibility_NewValue_ImplicitCast);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
