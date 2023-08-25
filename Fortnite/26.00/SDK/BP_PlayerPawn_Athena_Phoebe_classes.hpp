#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x14 (0x668C - 0x6678)
// BlueprintGeneratedClass BP_PlayerPawn_Athena_Phoebe.BP_PlayerPawn_Athena_Phoebe_C
class UBP_PlayerPawn_Athena_Phoebe_C : public UPlayerPawn_Athena_C
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x6678(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class FName                                  AIEvaluator_CharacterLaunchedKeyName;              // 0x6680(0x4)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         bUseCosmeticVariants;                              // 0x6684(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6D0C[0x3];                                     // Fixing Size After Last Property 
	int32                                        CosmeticVariantID;                                 // 0x6688(0x4)(Edit, BlueprintVisible, Net, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_PlayerPawn_Athena_Phoebe_C* GetDefaultObj();

	void ComputeCosmeticVariantID(bool CallFunc_Less_IntInt_ReturnValue, class UAthenaAIServicePlayerBots* CallFunc_GetAIServicePlayerBots_ReturnValue, int32 CallFunc_FetchNextCustomBotCosmeticVariantID_ReturnValue, bool CallFunc_IsValid_ReturnValue);
	void AssignCosmeticVariant(bool CallFunc_GreaterEqual_IntInt_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, class USkeletalMeshComponent* CallFunc_GetSkeletalMeshForPartType_ReturnValue, bool CallFunc_IsValid_ReturnValue, float CallFunc_SetCustomPrimitiveDataFloat_Value_ImplicitCast);
	void OnLaunched(const struct FVector& LaunchVelocity, bool bXYOverride, bool bZOverride);
	void OnCharacterCustomizationCompleted(class UFortPlayerPawn* Pawn);
	void ExecuteUbergraph_BP_PlayerPawn_Athena_Phoebe(int32 EntryPoint, class UController* CallFunc_GetController_ReturnValue, class UFortAthenaAIBotController* K2Node_DynamicCast_AsFort_Athena_AIBot_Controller, bool K2Node_DynamicCast_bSuccess, const struct FVector& K2Node_Event_LaunchVelocity, bool K2Node_Event_bXYOverride, bool K2Node_Event_bZOverride, class UBlackboardComponent* CallFunc_GetBlackboard_ReturnValue, class UFortPlayerPawn* K2Node_Event_Pawn, bool CallFunc_HasAuthority_ReturnValue);
};

}


