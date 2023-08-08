#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x48 - 0x30)
// BlueprintGeneratedClass BP_ControllerRequirement_CheckLivingWorldManagerBudget.BP_ControllerRequirement_CheckLivingWorldManagerBudget_C
class UBP_ControllerRequirement_CheckLivingWorldManagerBudget_C : public UFortControllerRequirement
{
public:
	int32                                        RequiredBudget;                                    // 0x30(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_A257[0x4];                                     // Fixing Size After Last Property
	struct FDataTableRowHandle                   EventRowHandle;                                    // 0x38(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_ControllerRequirement_CheckLivingWorldManagerBudget_C");
		return Clss;
	}

	bool IsRequirementMetInternal(struct FControllerRequirementTestContext& RequestContext, bool CallFunc_IsValid_ReturnValue, class UFortGameStateAthena* CallFunc_GetGameStateAthenaFromContext_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UFortAthenaLivingWorldManager* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_QueryEventBudget_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
