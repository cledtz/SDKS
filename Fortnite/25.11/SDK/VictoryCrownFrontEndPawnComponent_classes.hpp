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

// 0x1A (0xDA - 0xC0)
// BlueprintGeneratedClass VictoryCrownFrontEndPawnComponent.VictoryCrownFrontEndPawnComponent_C
class UVictoryCrownFrontEndPawnComponent_C : public UFortPawnComponent_VictoryCrownsFrontEnd
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xC0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTag                          CrownFXCueTag;                                     // 0xC8(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_2306[0x4];                                     // Fixing Size After Last Property..
	class APlayerPawn_Athena_C*                  AthenaPawn;                                        // 0xD0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	bool                                         AccountHasCrown;                                   // 0xD8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         AppliedCrownFX;                                    // 0xD9(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VictoryCrownFrontEndPawnComponent_C");
		return Clss;
	}

	void UpdateForGCNL(bool ShouldApplyFX, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_2, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue);
	void OnStatChanged_80A6FD2F402F11C0D0A207ACE25F03A6(class FName StatName, int32 StatValue);
	void PlaylistChanged();
	void ReceiveEndPlay(enum class EEndPlayReason EndPlayReason);
	void ReceiveBeginPlay();
	void ExecuteUbergraph_VictoryCrownFrontEndPawnComponent(int32 EntryPoint, class FName K2Node_CustomEvent_StatName, int32 K2Node_CustomEvent_StatValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, int32 Temp_int_Variable, class FName Temp_name_Variable, bool CallFunc_Greater_IntInt_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue, class AActor* CallFunc_GetOwner_ReturnValue_1, class AFortTeamMemberPedestal* K2Node_DynamicCast_AsFort_Team_Member_Pedestal, bool K2Node_DynamicCast_bSuccess, class APlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena, bool K2Node_DynamicCast_bSuccess_1, class UFortAsyncAction_CosmeticAdaptiveStatWatcher* CallFunc_WatchCosmeticStat_ReturnValue, bool CallFunc_IsValid_ReturnValue, enum class EEndPlayReason K2Node_Event_EndPlayReason);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
