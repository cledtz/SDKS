#pragma once

// Dumped with Dumper-7!


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
	uint8                                        Pad_96AA[0x4];                                     // Fixing Size After Last Property 
	struct FDataTableRowHandle                   EventRowHandle;                                    // 0x38(0x10)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor)

	static class UClass* StaticClass();
	static class UBP_ControllerRequirement_CheckLivingWorldManagerBudget_C* GetDefaultObj();

	bool IsRequirementMetInternal(struct FControllerRequirementTestContext& RequestContext, bool CallFunc_IsValid_ReturnValue, class UFortGameStateAthena* CallFunc_GetGameStateAthenaFromContext_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, class UFortAthenaLivingWorldManager* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, int32 CallFunc_QueryEventBudget_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue);
};

}


