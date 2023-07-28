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

// 0x10 (0xB38 - 0xB28)
// BlueprintGeneratedClass GA_BoostJumpPack_Equip.GA_BoostJumpPack_Equip_C
class UGA_BoostJumpPack_Equip_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB28(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UFortPlayerPawn*                       PlayerPawn;                                        // 0xB30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_BoostJumpPack_Equip_C");
		return Clss;
	}

	class UFortItem* GetGadgetItem(class UFortPlayerPawn* Pawn, bool CallFunc_IsValid_ReturnValue, const struct FGuid& CallFunc_GetInventoryGUID_ReturnValue, class UFortPlayerControllerZone* CallFunc_GetPlayerController_AsFort_Player_Controller_Zone, class UFortItem* CallFunc_BP_GetInventoryItemWithGuid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1);
	void GetPlayerController(class UFortPlayerPawn* Pawn, class UFortPlayerControllerZone** AsFort_Player_Controller_Zone, bool CallFunc_IsValid_ReturnValue, class UController* CallFunc_GetController_ReturnValue, class UFortPlayerControllerZone* K2Node_DynamicCast_AsFort_Player_Controller_Zone, bool K2Node_DynamicCast_bSuccess);
	void IsAuthority(bool* bAuthority, bool CallFunc_HasAuthority_ReturnValue);
	bool K2_CanActivateAbility(const struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayAbilitySpecHandle& Handle, struct FGameplayTagContainer* RelevantTags, class UFortPlayerPawn* LocalPlayerPawn, const struct FGameplayTagContainer& ErrorReasonGamepad, const struct FGameplayTagContainer& ErrorReason);
	void K2_ActivateAbility();
	void ExecuteUbergraph_GA_BoostJumpPack_Equip(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
