#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x12D8 - 0x12B0)
// BlueprintGeneratedClass DA_Glider_Item.DA_Glider_Item_C
class UDA_Glider_Item_C : public UFortCustomizableAbilityDecoTool
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x12B0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	struct FGameplayTagContainer                 ErrorReason;                                       // 0x12B8(0x20)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DA_Glider_Item_C");
		return Clss;
	}

	void IsOnGround(bool* bOnGround, class UPawn* CallFunc_GetInstigator_ReturnValue, class UFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsFalling_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue);
	void RaiseUsageError(struct FGameplayTagContainer& FailedReason, class UPawn* CallFunc_GetInstigator_ReturnValue, class UFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess);
	void BPPressTrigger(class UFortDecoHelper* FortDecoHelper);
	void ExecuteUbergraph_DA_Glider_Item(int32 EntryPoint, class UFortDecoHelper* K2Node_Event_FortDecoHelper);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
