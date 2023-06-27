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

// 0xA0 (0xBC8 - 0xB28)
// BlueprintGeneratedClass GA_Athena_ZipLine_Jump.GA_Athena_ZipLine_Jump_C
class UGA_Athena_ZipLine_Jump_C : public UFortGameplayAbility
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0xB28(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class AFortPlayerPawn*                       PlayerPawn;                                        // 0xB30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        MaxLateralSpeed;                                   // 0xB38(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FVector                               ImpulseVec;                                        // 0xB60(0x18)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FScalableFloat                        JumpVertStrength;                                  // 0xB78(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)
	struct FScalableFloat                        JumpLateralDamper;                                 // 0xBA0(0x28)(Edit, BlueprintVisible, DisableEditOnInstance)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GA_Athena_ZipLine_Jump_C");
		return Clss;
	}

	void K2_ActivateAbility();
	void K2_OnEndAbility(bool bWasCancelled);
	void ExecuteUbergraph_GA_Athena_ZipLine_Jump(int32 EntryPoint, float CallFunc_GetValueAtLevel_ReturnValue, bool K2Node_Event_bWasCancelled, class AActor* CallFunc_GetAvatarActorFromActorInfo_ReturnValue, class AFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, float CallFunc_GetValueAtLevel_ReturnValue_1, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, double CallFunc_BreakVector_X_2, double CallFunc_BreakVector_Y_2, double CallFunc_BreakVector_Z_2, const struct FVector& CallFunc_GetVelocity_ReturnValue_1, double CallFunc_VSizeSquared_ReturnValue, double CallFunc_BreakVector_X_3, double CallFunc_BreakVector_Y_3, double CallFunc_BreakVector_Z_3, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue_1, float CallFunc_GetValueAtLevel_ReturnValue_2, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue_2, double CallFunc_Multiply_VectorFloat_B_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_Multiply_DoubleDouble_B_ImplicitCast, double CallFunc_Multiply_VectorFloat_B_ImplicitCast_1, double CallFunc_MakeVector_Z_ImplicitCast, double CallFunc_MakeVector_Z_ImplicitCast_1);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
