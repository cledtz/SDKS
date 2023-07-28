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

// 0x0 (0x68 - 0x68)
// BlueprintGeneratedClass GCN_BoostJumpPack_Equipped.GCN_BoostJumpPack_Equipped_C
class UGCN_BoostJumpPack_Equipped_C : public UFortGameplayCueNotify_Simple
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GCN_BoostJumpPack_Equipped_C");
		return Clss;
	}

	bool OnExecute(class UActor* MyTarget, struct FGameplayCueParameters& Parameters, class UPlayerPawn_Athena_C* PlayerPawn, class UPlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena, bool K2Node_DynamicCast_bSuccess, double CallFunc_GetFuelPercent_Fuel_Percent, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast);
	double GetMaxFuel(class UPlayerPawn_Athena_C* PlayerPawn, const struct FGameplayAttribute& Attribute, bool CallFunc_IsValid_ReturnValue, float CallFunc_GetSimulatedAttributeValue_ReturnValue, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, double K2Node_FunctionResult_ReturnValue_ImplicitCast, double K2Node_FunctionResult_ReturnValue_ImplicitCast_1);
	double GetFuel(class UPlayerPawn_Athena_C* PlayerPawn, const struct FGameplayAttribute& Attribute, float CallFunc_GetSimulatedAttributeValue_ReturnValue, bool CallFunc_GetFloatAttribute_bSuccessfullyFoundAttribute, float CallFunc_GetFloatAttribute_ReturnValue, bool CallFunc_IsValid_ReturnValue, double K2Node_FunctionResult_ReturnValue_ImplicitCast, double K2Node_FunctionResult_ReturnValue_ImplicitCast_1);
	void GetFuelPercent(class UPlayerPawn_Athena_C* PlayerPawn, double* Fuel_Percent, double CallFunc_GetFuel_ReturnValue, double CallFunc_GetMaxFuel_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue);
	bool WhileActive(class UActor* MyTarget, struct FGameplayCueParameters& Parameters, class UPlayerPawn_Athena_C* PlayerPawn, class UPlayerPawn_Athena_C* K2Node_DynamicCast_AsPlayer_Pawn_Athena, bool K2Node_DynamicCast_bSuccess, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue, double CallFunc_GetFuelPercent_Fuel_Percent, bool CallFunc_IsValid_ReturnValue, float CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
