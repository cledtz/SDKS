#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.CheckForPawnDeath
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPawn*                   Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               IsDead                                                           (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetHealth_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_LessEqual_DoubleDouble_A_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAB_GenericApplyKnockback_C::CheckForPawnDeath(class AFortPawn* Pawn, bool* IsDead, float CallFunc_GetHealth_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, double CallFunc_LessEqual_DoubleDouble_A_ImplicitCast)
{
	static auto Func = Class->GetFunction("GAB_GenericApplyKnockback_C", "CheckForPawnDeath");

	Params::UGAB_GenericApplyKnockback_C_CheckForPawnDeath_Params Parms;

	Parms.Pawn = Pawn;
	Parms.CallFunc_GetHealth_ReturnValue = CallFunc_GetHealth_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_A_ImplicitCast = CallFunc_LessEqual_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (IsDead != nullptr)
		*IsDead = Parms.IsDead;

}


// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.DoesUseInstagorInsteadOfImpulseDirection
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// struct FGameplayEffectContextHandleEffectContext                                                    (BlueprintVisible, BlueprintReadOnly, Parm)
// class UObject*                     OptionalObject                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Value                                                            (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                GT_IgnoreImpulseDirection                                        (Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameplayEffect*             K2Node_DynamicCast_AsGameplay_Effect                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     CallFunc_EffectContextGetSourceObject_ReturnValue                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FInterfaceProperty_                K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasTag_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAB_GenericApplyKnockback_C::DoesUseInstagorInsteadOfImpulseDirection(const struct FGameplayEffectContextHandle& EffectContext, class UObject* OptionalObject, bool* Value, const struct FGameplayTag& GT_IgnoreImpulseDirection, bool Temp_bool_Variable, class UGameplayEffect* K2Node_DynamicCast_AsGameplay_Effect, bool K2Node_DynamicCast_bSuccess, class UObject* CallFunc_EffectContextGetSourceObject_ReturnValue, FInterfaceProperty_ K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_HasTag_ReturnValue, bool CallFunc_HasMatchingGameplayTag_ReturnValue)
{
	static auto Func = Class->GetFunction("GAB_GenericApplyKnockback_C", "DoesUseInstagorInsteadOfImpulseDirection");

	Params::UGAB_GenericApplyKnockback_C_DoesUseInstagorInsteadOfImpulseDirection_Params Parms;

	Parms.EffectContext = EffectContext;
	Parms.OptionalObject = OptionalObject;
	Parms.GT_IgnoreImpulseDirection = GT_IgnoreImpulseDirection;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_DynamicCast_AsGameplay_Effect = K2Node_DynamicCast_AsGameplay_Effect;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_EffectContextGetSourceObject_ReturnValue = CallFunc_EffectContextGetSourceObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface = K2Node_DynamicCast_AsGameplay_Tag_Asset_Interface;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_HasTag_ReturnValue = CallFunc_HasTag_ReturnValue;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue = CallFunc_HasMatchingGameplayTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (Value != nullptr)
		*Value = Parms.Value;

}


// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.GetPawnFromInstigator
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      InActor                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             OutPawn                                                          (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerStateZone*        K2Node_DynamicCast_AsFort_Player_State_Zone                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             CallFunc_GetCurrentPawn_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UGAB_GenericApplyKnockback_C::GetPawnFromInstigator(class AActor* InActor, class AFortPlayerPawn** OutPawn, class AFortPlayerStateZone* K2Node_DynamicCast_AsFort_Player_State_Zone, bool K2Node_DynamicCast_bSuccess, class AFortPlayerPawn* CallFunc_GetCurrentPawn_ReturnValue)
{
	static auto Func = Class->GetFunction("GAB_GenericApplyKnockback_C", "GetPawnFromInstigator");

	Params::UGAB_GenericApplyKnockback_C_GetPawnFromInstigator_Params Parms;

	Parms.InActor = InActor;
	Parms.K2Node_DynamicCast_AsFort_Player_State_Zone = K2Node_DynamicCast_AsFort_Player_State_Zone;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetCurrentPawn_ReturnValue = CallFunc_GetCurrentPawn_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutPawn != nullptr)
		*OutPawn = Parms.OutPawn;

}


// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.CalculateImpulseDirection
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AFortPlayerPawn*             InPawn                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_RotatorToVector_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue_1                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_DoubleDouble_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector UGAB_GenericApplyKnockback_C::CalculateImpulseDirection(class AFortPlayerPawn* InPawn, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue_1, const struct FVector& CallFunc_GetVelocity_ReturnValue, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue, const struct FVector& CallFunc_Normal_ReturnValue_1, double CallFunc_VSize_ReturnValue, bool CallFunc_EqualEqual_DoubleDouble_ReturnValue)
{
	static auto Func = Class->GetFunction("GAB_GenericApplyKnockback_C", "CalculateImpulseDirection");

	Params::UGAB_GenericApplyKnockback_C_CalculateImpulseDirection_Params Parms;

	Parms.InPawn = InPawn;
	Parms.CallFunc_GetActivatingPawn_ReturnValue = CallFunc_GetActivatingPawn_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_Conv_RotatorToVector_ReturnValue = CallFunc_Conv_RotatorToVector_ReturnValue;
	Parms.CallFunc_GetActivatingPawn_ReturnValue_1 = CallFunc_GetActivatingPawn_ReturnValue_1;
	Parms.CallFunc_GetVelocity_ReturnValue = CallFunc_GetVelocity_ReturnValue;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.CallFunc_Normal_ReturnValue_1 = CallFunc_Normal_ReturnValue_1;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_EqualEqual_DoubleDouble_ReturnValue = CallFunc_EqualEqual_DoubleDouble_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnCancelled_D744890E4C485F1C80B3E7864AE506FF
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_GenericApplyKnockback_C::OnCancelled_D744890E4C485F1C80B3E7864AE506FF()
{
	static auto Func = Class->GetFunction("GAB_GenericApplyKnockback_C", "OnCancelled_D744890E4C485F1C80B3E7864AE506FF");

	Params::UGAB_GenericApplyKnockback_C_OnCancelled_D744890E4C485F1C80B3E7864AE506FF_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnInterrupted_D744890E4C485F1C80B3E7864AE506FF
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_GenericApplyKnockback_C::OnInterrupted_D744890E4C485F1C80B3E7864AE506FF()
{
	static auto Func = Class->GetFunction("GAB_GenericApplyKnockback_C", "OnInterrupted_D744890E4C485F1C80B3E7864AE506FF");

	Params::UGAB_GenericApplyKnockback_C_OnInterrupted_D744890E4C485F1C80B3E7864AE506FF_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnBlendOut_D744890E4C485F1C80B3E7864AE506FF
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_GenericApplyKnockback_C::OnBlendOut_D744890E4C485F1C80B3E7864AE506FF()
{
	static auto Func = Class->GetFunction("GAB_GenericApplyKnockback_C", "OnBlendOut_D744890E4C485F1C80B3E7864AE506FF");

	Params::UGAB_GenericApplyKnockback_C_OnBlendOut_D744890E4C485F1C80B3E7864AE506FF_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnCompleted_D744890E4C485F1C80B3E7864AE506FF
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_GenericApplyKnockback_C::OnCompleted_D744890E4C485F1C80B3E7864AE506FF()
{
	static auto Func = Class->GetFunction("GAB_GenericApplyKnockback_C", "OnCompleted_D744890E4C485F1C80B3E7864AE506FF");

	Params::UGAB_GenericApplyKnockback_C_OnCompleted_D744890E4C485F1C80B3E7864AE506FF_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnCancelled_1F181048470CEB2EB6CC648039C5913C
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_GenericApplyKnockback_C::OnCancelled_1F181048470CEB2EB6CC648039C5913C()
{
	static auto Func = Class->GetFunction("GAB_GenericApplyKnockback_C", "OnCancelled_1F181048470CEB2EB6CC648039C5913C");

	Params::UGAB_GenericApplyKnockback_C_OnCancelled_1F181048470CEB2EB6CC648039C5913C_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnInterrupted_1F181048470CEB2EB6CC648039C5913C
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_GenericApplyKnockback_C::OnInterrupted_1F181048470CEB2EB6CC648039C5913C()
{
	static auto Func = Class->GetFunction("GAB_GenericApplyKnockback_C", "OnInterrupted_1F181048470CEB2EB6CC648039C5913C");

	Params::UGAB_GenericApplyKnockback_C_OnInterrupted_1F181048470CEB2EB6CC648039C5913C_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnBlendOut_1F181048470CEB2EB6CC648039C5913C
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_GenericApplyKnockback_C::OnBlendOut_1F181048470CEB2EB6CC648039C5913C()
{
	static auto Func = Class->GetFunction("GAB_GenericApplyKnockback_C", "OnBlendOut_1F181048470CEB2EB6CC648039C5913C");

	Params::UGAB_GenericApplyKnockback_C_OnBlendOut_1F181048470CEB2EB6CC648039C5913C_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnCompleted_1F181048470CEB2EB6CC648039C5913C
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_GenericApplyKnockback_C::OnCompleted_1F181048470CEB2EB6CC648039C5913C()
{
	static auto Func = Class->GetFunction("GAB_GenericApplyKnockback_C", "OnCompleted_1F181048470CEB2EB6CC648039C5913C");

	Params::UGAB_GenericApplyKnockback_C_OnCompleted_1F181048470CEB2EB6CC648039C5913C_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnCancelled_BA9188C34C234A4C47306FA73AAF0583
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_GenericApplyKnockback_C::OnCancelled_BA9188C34C234A4C47306FA73AAF0583()
{
	static auto Func = Class->GetFunction("GAB_GenericApplyKnockback_C", "OnCancelled_BA9188C34C234A4C47306FA73AAF0583");

	Params::UGAB_GenericApplyKnockback_C_OnCancelled_BA9188C34C234A4C47306FA73AAF0583_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnInterrupted_BA9188C34C234A4C47306FA73AAF0583
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_GenericApplyKnockback_C::OnInterrupted_BA9188C34C234A4C47306FA73AAF0583()
{
	static auto Func = Class->GetFunction("GAB_GenericApplyKnockback_C", "OnInterrupted_BA9188C34C234A4C47306FA73AAF0583");

	Params::UGAB_GenericApplyKnockback_C_OnInterrupted_BA9188C34C234A4C47306FA73AAF0583_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnBlendOut_BA9188C34C234A4C47306FA73AAF0583
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_GenericApplyKnockback_C::OnBlendOut_BA9188C34C234A4C47306FA73AAF0583()
{
	static auto Func = Class->GetFunction("GAB_GenericApplyKnockback_C", "OnBlendOut_BA9188C34C234A4C47306FA73AAF0583");

	Params::UGAB_GenericApplyKnockback_C_OnBlendOut_BA9188C34C234A4C47306FA73AAF0583_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnCompleted_BA9188C34C234A4C47306FA73AAF0583
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_GenericApplyKnockback_C::OnCompleted_BA9188C34C234A4C47306FA73AAF0583()
{
	static auto Func = Class->GetFunction("GAB_GenericApplyKnockback_C", "OnCompleted_BA9188C34C234A4C47306FA73AAF0583");

	Params::UGAB_GenericApplyKnockback_C_OnCompleted_BA9188C34C234A4C47306FA73AAF0583_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnCancelled_8FC7071F40FA26EA05D9688FB3E623A0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_GenericApplyKnockback_C::OnCancelled_8FC7071F40FA26EA05D9688FB3E623A0()
{
	static auto Func = Class->GetFunction("GAB_GenericApplyKnockback_C", "OnCancelled_8FC7071F40FA26EA05D9688FB3E623A0");

	Params::UGAB_GenericApplyKnockback_C_OnCancelled_8FC7071F40FA26EA05D9688FB3E623A0_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnInterrupted_8FC7071F40FA26EA05D9688FB3E623A0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_GenericApplyKnockback_C::OnInterrupted_8FC7071F40FA26EA05D9688FB3E623A0()
{
	static auto Func = Class->GetFunction("GAB_GenericApplyKnockback_C", "OnInterrupted_8FC7071F40FA26EA05D9688FB3E623A0");

	Params::UGAB_GenericApplyKnockback_C_OnInterrupted_8FC7071F40FA26EA05D9688FB3E623A0_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnBlendOut_8FC7071F40FA26EA05D9688FB3E623A0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_GenericApplyKnockback_C::OnBlendOut_8FC7071F40FA26EA05D9688FB3E623A0()
{
	static auto Func = Class->GetFunction("GAB_GenericApplyKnockback_C", "OnBlendOut_8FC7071F40FA26EA05D9688FB3E623A0");

	Params::UGAB_GenericApplyKnockback_C_OnBlendOut_8FC7071F40FA26EA05D9688FB3E623A0_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnCompleted_8FC7071F40FA26EA05D9688FB3E623A0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_GenericApplyKnockback_C::OnCompleted_8FC7071F40FA26EA05D9688FB3E623A0()
{
	static auto Func = Class->GetFunction("GAB_GenericApplyKnockback_C", "OnCompleted_8FC7071F40FA26EA05D9688FB3E623A0");

	Params::UGAB_GenericApplyKnockback_C_OnCompleted_8FC7071F40FA26EA05D9688FB3E623A0_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnCancelled_07DF210D46EDFA929CDBFFB162E8E4CF
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_GenericApplyKnockback_C::OnCancelled_07DF210D46EDFA929CDBFFB162E8E4CF()
{
	static auto Func = Class->GetFunction("GAB_GenericApplyKnockback_C", "OnCancelled_07DF210D46EDFA929CDBFFB162E8E4CF");

	Params::UGAB_GenericApplyKnockback_C_OnCancelled_07DF210D46EDFA929CDBFFB162E8E4CF_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnInterrupted_07DF210D46EDFA929CDBFFB162E8E4CF
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_GenericApplyKnockback_C::OnInterrupted_07DF210D46EDFA929CDBFFB162E8E4CF()
{
	static auto Func = Class->GetFunction("GAB_GenericApplyKnockback_C", "OnInterrupted_07DF210D46EDFA929CDBFFB162E8E4CF");

	Params::UGAB_GenericApplyKnockback_C_OnInterrupted_07DF210D46EDFA929CDBFFB162E8E4CF_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnBlendOut_07DF210D46EDFA929CDBFFB162E8E4CF
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_GenericApplyKnockback_C::OnBlendOut_07DF210D46EDFA929CDBFFB162E8E4CF()
{
	static auto Func = Class->GetFunction("GAB_GenericApplyKnockback_C", "OnBlendOut_07DF210D46EDFA929CDBFFB162E8E4CF");

	Params::UGAB_GenericApplyKnockback_C_OnBlendOut_07DF210D46EDFA929CDBFFB162E8E4CF_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnCompleted_07DF210D46EDFA929CDBFFB162E8E4CF
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_GenericApplyKnockback_C::OnCompleted_07DF210D46EDFA929CDBFFB162E8E4CF()
{
	static auto Func = Class->GetFunction("GAB_GenericApplyKnockback_C", "OnCompleted_07DF210D46EDFA929CDBFFB162E8E4CF");

	Params::UGAB_GenericApplyKnockback_C_OnCompleted_07DF210D46EDFA929CDBFFB162E8E4CF_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnReachedJumpApex
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_GenericApplyKnockback_C::OnReachedJumpApex()
{
	static auto Func = Class->GetFunction("GAB_GenericApplyKnockback_C", "OnReachedJumpApex");

	Params::UGAB_GenericApplyKnockback_C_OnReachedJumpApex_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.SetupMontageSectionsAndOrientDirection
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_GenericApplyKnockback_C::SetupMontageSectionsAndOrientDirection()
{
	static auto Func = Class->GetFunction("GAB_GenericApplyKnockback_C", "SetupMontageSectionsAndOrientDirection");

	Params::UGAB_GenericApplyKnockback_C_SetupMontageSectionsAndOrientDirection_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnPawnLanded
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FHitResult                  Hit                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UGAB_GenericApplyKnockback_C::OnPawnLanded(struct FHitResult& Hit)
{
	static auto Func = Class->GetFunction("GAB_GenericApplyKnockback_C", "OnPawnLanded");

	Params::UGAB_GenericApplyKnockback_C_OnPawnLanded_Params Parms;

	Parms.Hit = Hit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.OnHitPawn
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class AActor*                      SelfActor                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      OtherActor                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     NormalImpulse                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  Hit                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UGAB_GenericApplyKnockback_C::OnHitPawn(class AActor* SelfActor, class AActor* OtherActor, const struct FVector& NormalImpulse, struct FHitResult& Hit)
{
	static auto Func = Class->GetFunction("GAB_GenericApplyKnockback_C", "OnHitPawn");

	Params::UGAB_GenericApplyKnockback_C_OnHitPawn_Params Parms;

	Parms.SelfActor = SelfActor;
	Parms.OtherActor = OtherActor;
	Parms.NormalImpulse = NormalImpulse;
	Parms.Hit = Hit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.MovementModeChangedDelegate_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class ACharacter*                  Character                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EMovementMode           PrevMovementMode                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              PreviousCustomMode                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAB_GenericApplyKnockback_C::MovementModeChangedDelegate_Event(class ACharacter* Character, enum class EMovementMode PrevMovementMode, uint8 PreviousCustomMode)
{
	static auto Func = Class->GetFunction("GAB_GenericApplyKnockback_C", "MovementModeChangedDelegate_Event");

	Params::UGAB_GenericApplyKnockback_C_MovementModeChangedDelegate_Event_Params Parms;

	Parms.Character = Character;
	Parms.PrevMovementMode = PrevMovementMode;
	Parms.PreviousCustomMode = PreviousCustomMode;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.BindMovementModeChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_GenericApplyKnockback_C::BindMovementModeChange()
{
	static auto Func = Class->GetFunction("GAB_GenericApplyKnockback_C", "BindMovementModeChange");

	Params::UGAB_GenericApplyKnockback_C_BindMovementModeChange_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.UnbindMovementModeChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_GenericApplyKnockback_C::UnbindMovementModeChange()
{
	static auto Func = Class->GetFunction("GAB_GenericApplyKnockback_C", "UnbindMovementModeChange");

	Params::UGAB_GenericApplyKnockback_C_UnbindMovementModeChange_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.K2_ActivateAbilityFromEvent
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayEventData          EventData                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UGAB_GenericApplyKnockback_C::K2_ActivateAbilityFromEvent(struct FGameplayEventData& EventData)
{
	static auto Func = Class->GetFunction("GAB_GenericApplyKnockback_C", "K2_ActivateAbilityFromEvent");

	Params::UGAB_GenericApplyKnockback_C_K2_ActivateAbilityFromEvent_Params Parms;

	Parms.EventData = EventData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.K2_OnEndAbility
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bWasCancelled                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAB_GenericApplyKnockback_C::K2_OnEndAbility(bool bWasCancelled)
{
	static auto Func = Class->GetFunction("GAB_GenericApplyKnockback_C", "K2_OnEndAbility");

	Params::UGAB_GenericApplyKnockback_C_K2_OnEndAbility_Params Parms;

	Parms.bWasCancelled = bWasCancelled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.DebugLine
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UGAB_GenericApplyKnockback_C::DebugLine()
{
	static auto Func = Class->GetFunction("GAB_GenericApplyKnockback_C", "DebugLine");

	Params::UGAB_GenericApplyKnockback_C_DebugLine_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function GAB_GenericApplyKnockback.GAB_GenericApplyKnockback_C.ExecuteUbergraph_GAB_GenericApplyKnockback
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue_1                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue_2                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsFalling_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue_3                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue_4                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue_5                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAbilityTask_PlayMontageAndWait*CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilityTask_PlayMontageAndWait*CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue_1             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_CustomEvent_Hit_1                                         (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                     CallFunc_Normal_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_SelfActor                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AActor*                      K2Node_CustomEvent_OtherActor                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_CustomEvent_NormalImpulse                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_CustomEvent_Hit                                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayAbilityTargetDataHandleCallFunc_AbilityTargetDataFromHitResult_ReturnValue              ()
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetVelocity_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue_6                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue_7                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FInterfaceProperty_                CallFunc_HasMatchingGameplayTag_self_CastInput                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue_8                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortAbilitySystemComponent* CallFunc_GetActivatingAbilityComponent_ReturnValue               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveActiveGameplayEffect_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_9                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_10                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_11                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_12                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue_9                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue               (NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue_10                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_13                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_14                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAbilityTask_PlayMontageAndWait*CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue_2             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilityTask_PlayMontageAndWait*CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue_3             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortAbilitySystemComponent* CallFunc_GetActivatingAbilityComponent_ReturnValue_1             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_15                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_1             (NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue_11                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsServer_ReturnValue_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_16                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_2             (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_17                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_18                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_19                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue_12                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_K2_GetActorRotation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_Conv_RotatorToVector_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Normal_ReturnValue_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue_2                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue_13                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_20                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue_14                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CheckForPawnDeath_IsDead                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_21                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class ACharacter*                  K2Node_CustomEvent_Character                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EMovementMode           K2Node_CustomEvent_PrevMovementMode                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              K2Node_CustomEvent_PreviousCustomMode                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue_15                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPawnMovementComponent*      CallFunc_GetMovementComponent_ReturnValue                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortMovementComp_Character* K2Node_DynamicCast_AsFort_Movement_Comp_Character                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetValidValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue_16                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ByteByte_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilityTask_PlayMontageAndWait*CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue_4             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_3             (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_11                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<struct FActiveGameplayEffectHandle>CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue              (ReferenceParm)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_22                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEventData          K2Node_Event_EventData                                           (ConstParm)
// struct FVector                     CallFunc_GetImpulseData_ImpulseDirection                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetImpulseData_KnockbackMagnitude                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetImpulseData_KnockbackZAngle                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesUseInstagorInsteadOfImpulseDirection_Value          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AActor*                      CallFunc_EffectContextGetInstigatorActor_ReturnValue             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class AFortPlayerPawn*             CallFunc_GetPawnFromPlayerStateZone_OutPawn                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetPawnFromPlayerStateZone_PawnReturned                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABuildingTrap*               K2Node_DynamicCast_AsBuilding_Trap                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_CalculateImpulseDirection_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class ABuildingTrapFloor*          K2Node_DynamicCast_AsBuilding_Trap_Floor                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bWasCancelled                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAbilitySystemComponent* CallFunc_GetActivatingAbilityComponent_ReturnValue_2             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveActiveGameplayEffect_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class AFortPawn*                   CallFunc_GetActivatingPawn_ReturnValue_17                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_23                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_Delay_Duration_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_B_ImplicitCast                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SelectFloat_B_ImplicitCast_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ApplyKnockback_KnockbackZAngle_ImplicitCast             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ApplyKnockback_KnockbackMagnitude_ImplicitCast          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGAB_GenericApplyKnockback_C::ExecuteUbergraph_GAB_GenericApplyKnockback(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, bool Temp_bool_Variable, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, bool CallFunc_IsValid_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, bool CallFunc_IsValid_ReturnValue_1, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue_1, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue_2, bool CallFunc_IsFalling_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue_3, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue_4, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue_5, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FHitResult& K2Node_CustomEvent_Hit_1, const struct FVector& CallFunc_Normal_ReturnValue, class AActor* K2Node_CustomEvent_SelfActor, class AActor* K2Node_CustomEvent_OtherActor, const struct FVector& K2Node_CustomEvent_NormalImpulse, const struct FHitResult& K2Node_CustomEvent_Hit, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_1, const struct FGameplayAbilityTargetDataHandle& CallFunc_AbilityTargetDataFromHitResult_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, const struct FVector& CallFunc_GetVelocity_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, double CallFunc_VSize_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue_6, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue_7, FInterfaceProperty_ CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue_8, class UFortAbilitySystemComponent* CallFunc_GetActivatingAbilityComponent_ReturnValue, bool CallFunc_RemoveActiveGameplayEffect_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_9, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_12, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue_9, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue_10, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_14, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_IsValid_ReturnValue_6, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue_3, class UFortAbilitySystemComponent* CallFunc_GetActivatingAbilityComponent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_7, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_15, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_1, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue_11, bool K2Node_SwitchEnum_CmpSuccess_1, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_IsServer_ReturnValue, bool CallFunc_IsServer_ReturnValue_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_16, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_17, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_18, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_19, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue_12, bool CallFunc_BooleanAND_ReturnValue_1, const struct FRotator& CallFunc_K2_GetActorRotation_ReturnValue, const struct FVector& CallFunc_Conv_RotatorToVector_ReturnValue, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector& CallFunc_Normal_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue_2, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue_13, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_20, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue_14, bool CallFunc_CheckForPawnDeath_IsDead, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_21, class ACharacter* K2Node_CustomEvent_Character, enum class EMovementMode K2Node_CustomEvent_PrevMovementMode, uint8 K2Node_CustomEvent_PreviousCustomMode, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue_15, bool CallFunc_IsValid_ReturnValue_8, class UPawnMovementComponent* CallFunc_GetMovementComponent_ReturnValue, bool CallFunc_IsValid_ReturnValue_9, class UFortMovementComp_Character* K2Node_DynamicCast_AsFort_Movement_Comp_Character, bool K2Node_DynamicCast_bSuccess, uint8 CallFunc_GetValidValue_ReturnValue, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue_16, bool CallFunc_NotEqual_ByteByte_ReturnValue, class UAbilityTask_PlayMontageAndWait* CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue_4, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_10, bool CallFunc_IsValid_ReturnValue_11, TArray<struct FActiveGameplayEffectHandle>& CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_22, const struct FGameplayEventData& K2Node_Event_EventData, const struct FVector& CallFunc_GetImpulseData_ImpulseDirection, float CallFunc_GetImpulseData_KnockbackMagnitude, float CallFunc_GetImpulseData_KnockbackZAngle, bool CallFunc_DoesUseInstagorInsteadOfImpulseDirection_Value, double CallFunc_SelectFloat_ReturnValue, double CallFunc_SelectFloat_ReturnValue_1, const struct FVector& K2Node_Select_Default, class AActor* CallFunc_EffectContextGetInstigatorActor_ReturnValue, class AFortPlayerPawn* CallFunc_GetPawnFromPlayerStateZone_OutPawn, bool CallFunc_GetPawnFromPlayerStateZone_PawnReturned, class ABuildingTrap* K2Node_DynamicCast_AsBuilding_Trap, bool K2Node_DynamicCast_bSuccess_1, const struct FVector& CallFunc_CalculateImpulseDirection_ReturnValue, class ABuildingTrapFloor* K2Node_DynamicCast_AsBuilding_Trap_Floor, bool K2Node_DynamicCast_bSuccess_2, bool K2Node_Event_bWasCancelled, bool Temp_bool_Variable_1, class UFortAbilitySystemComponent* CallFunc_GetActivatingAbilityComponent_ReturnValue_2, bool CallFunc_RemoveActiveGameplayEffect_ReturnValue_1, class AFortPawn* CallFunc_GetActivatingPawn_ReturnValue_17, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_23, float CallFunc_Delay_Duration_ImplicitCast, double CallFunc_SelectFloat_B_ImplicitCast, double CallFunc_SelectFloat_B_ImplicitCast_1, float CallFunc_ApplyKnockback_KnockbackZAngle_ImplicitCast, float CallFunc_ApplyKnockback_KnockbackMagnitude_ImplicitCast)
{
	static auto Func = Class->GetFunction("GAB_GenericApplyKnockback_C", "ExecuteUbergraph_GAB_GenericApplyKnockback");

	Params::UGAB_GenericApplyKnockback_C_ExecuteUbergraph_GAB_GenericApplyKnockback_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetActivatingPawn_ReturnValue = CallFunc_GetActivatingPawn_ReturnValue;
	Parms.CallFunc_GetActivatingPawn_ReturnValue_1 = CallFunc_GetActivatingPawn_ReturnValue_1;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.CallFunc_GetActivatingPawn_ReturnValue_2 = CallFunc_GetActivatingPawn_ReturnValue_2;
	Parms.CallFunc_IsFalling_ReturnValue = CallFunc_IsFalling_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.CallFunc_GetActivatingPawn_ReturnValue_3 = CallFunc_GetActivatingPawn_ReturnValue_3;
	Parms.CallFunc_GetActivatingPawn_ReturnValue_4 = CallFunc_GetActivatingPawn_ReturnValue_4;
	Parms.CallFunc_GetActivatingPawn_ReturnValue_5 = CallFunc_GetActivatingPawn_ReturnValue_5;
	Parms.CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue = CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue_1 = CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.K2Node_CustomEvent_Hit_1 = K2Node_CustomEvent_Hit_1;
	Parms.CallFunc_Normal_ReturnValue = CallFunc_Normal_ReturnValue;
	Parms.K2Node_CustomEvent_SelfActor = K2Node_CustomEvent_SelfActor;
	Parms.K2Node_CustomEvent_OtherActor = K2Node_CustomEvent_OtherActor;
	Parms.K2Node_CustomEvent_NormalImpulse = K2Node_CustomEvent_NormalImpulse;
	Parms.K2Node_CustomEvent_Hit = K2Node_CustomEvent_Hit;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_1 = CallFunc_Multiply_VectorFloat_ReturnValue_1;
	Parms.CallFunc_AbilityTargetDataFromHitResult_ReturnValue = CallFunc_AbilityTargetDataFromHitResult_ReturnValue;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_GetVelocity_ReturnValue = CallFunc_GetVelocity_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetActivatingPawn_ReturnValue_6 = CallFunc_GetActivatingPawn_ReturnValue_6;
	Parms.CallFunc_GetActivatingPawn_ReturnValue_7 = CallFunc_GetActivatingPawn_ReturnValue_7;
	Parms.CallFunc_HasMatchingGameplayTag_self_CastInput = CallFunc_HasMatchingGameplayTag_self_CastInput;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue = CallFunc_HasMatchingGameplayTag_ReturnValue;
	Parms.CallFunc_GetActivatingPawn_ReturnValue_8 = CallFunc_GetActivatingPawn_ReturnValue_8;
	Parms.CallFunc_GetActivatingAbilityComponent_ReturnValue = CallFunc_GetActivatingAbilityComponent_ReturnValue;
	Parms.CallFunc_RemoveActiveGameplayEffect_ReturnValue = CallFunc_RemoveActiveGameplayEffect_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_9 = K2Node_CreateDelegate_OutputDelegate_9;
	Parms.K2Node_CreateDelegate_OutputDelegate_10 = K2Node_CreateDelegate_OutputDelegate_10;
	Parms.K2Node_CreateDelegate_OutputDelegate_11 = K2Node_CreateDelegate_OutputDelegate_11;
	Parms.K2Node_CreateDelegate_OutputDelegate_12 = K2Node_CreateDelegate_OutputDelegate_12;
	Parms.CallFunc_GetActivatingPawn_ReturnValue_9 = CallFunc_GetActivatingPawn_ReturnValue_9;
	Parms.CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue = CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetActivatingPawn_ReturnValue_10 = CallFunc_GetActivatingPawn_ReturnValue_10;
	Parms.K2Node_CreateDelegate_OutputDelegate_13 = K2Node_CreateDelegate_OutputDelegate_13;
	Parms.K2Node_CreateDelegate_OutputDelegate_14 = K2Node_CreateDelegate_OutputDelegate_14;
	Parms.CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue_2 = CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue_3 = CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue_3;
	Parms.CallFunc_GetActivatingAbilityComponent_ReturnValue_1 = CallFunc_GetActivatingAbilityComponent_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.K2Node_CreateDelegate_OutputDelegate_15 = K2Node_CreateDelegate_OutputDelegate_15;
	Parms.CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_1 = CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_1;
	Parms.CallFunc_GetActivatingPawn_ReturnValue_11 = CallFunc_GetActivatingPawn_ReturnValue_11;
	Parms.K2Node_SwitchEnum_CmpSuccess_1 = K2Node_SwitchEnum_CmpSuccess_1;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_IsServer_ReturnValue = CallFunc_IsServer_ReturnValue;
	Parms.CallFunc_IsServer_ReturnValue_1 = CallFunc_IsServer_ReturnValue_1;
	Parms.K2Node_CreateDelegate_OutputDelegate_16 = K2Node_CreateDelegate_OutputDelegate_16;
	Parms.CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_2 = CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_17 = K2Node_CreateDelegate_OutputDelegate_17;
	Parms.K2Node_CreateDelegate_OutputDelegate_18 = K2Node_CreateDelegate_OutputDelegate_18;
	Parms.K2Node_CreateDelegate_OutputDelegate_19 = K2Node_CreateDelegate_OutputDelegate_19;
	Parms.CallFunc_GetActivatingPawn_ReturnValue_12 = CallFunc_GetActivatingPawn_ReturnValue_12;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_K2_GetActorRotation_ReturnValue = CallFunc_K2_GetActorRotation_ReturnValue;
	Parms.CallFunc_Conv_RotatorToVector_ReturnValue = CallFunc_Conv_RotatorToVector_ReturnValue;
	Parms.CallFunc_BreakVector_X_1 = CallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = CallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;
	Parms.CallFunc_Normal_ReturnValue_1 = CallFunc_Normal_ReturnValue_1;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue_2 = CallFunc_Multiply_VectorFloat_ReturnValue_2;
	Parms.CallFunc_GetActivatingPawn_ReturnValue_13 = CallFunc_GetActivatingPawn_ReturnValue_13;
	Parms.K2Node_CreateDelegate_OutputDelegate_20 = K2Node_CreateDelegate_OutputDelegate_20;
	Parms.CallFunc_GetActivatingPawn_ReturnValue_14 = CallFunc_GetActivatingPawn_ReturnValue_14;
	Parms.CallFunc_CheckForPawnDeath_IsDead = CallFunc_CheckForPawnDeath_IsDead;
	Parms.K2Node_CreateDelegate_OutputDelegate_21 = K2Node_CreateDelegate_OutputDelegate_21;
	Parms.K2Node_CustomEvent_Character = K2Node_CustomEvent_Character;
	Parms.K2Node_CustomEvent_PrevMovementMode = K2Node_CustomEvent_PrevMovementMode;
	Parms.K2Node_CustomEvent_PreviousCustomMode = K2Node_CustomEvent_PreviousCustomMode;
	Parms.CallFunc_GetActivatingPawn_ReturnValue_15 = CallFunc_GetActivatingPawn_ReturnValue_15;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.CallFunc_GetMovementComponent_ReturnValue = CallFunc_GetMovementComponent_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;
	Parms.K2Node_DynamicCast_AsFort_Movement_Comp_Character = K2Node_DynamicCast_AsFort_Movement_Comp_Character;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetValidValue_ReturnValue = CallFunc_GetValidValue_ReturnValue;
	Parms.CallFunc_GetActivatingPawn_ReturnValue_16 = CallFunc_GetActivatingPawn_ReturnValue_16;
	Parms.CallFunc_NotEqual_ByteByte_ReturnValue = CallFunc_NotEqual_ByteByte_ReturnValue;
	Parms.CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue_4 = CallFunc_CreatePlayMontageAndWaitProxy_ReturnValue_4;
	Parms.CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_3 = CallFunc_BP_ApplyGameplayEffectToOwner_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_10 = CallFunc_IsValid_ReturnValue_10;
	Parms.CallFunc_IsValid_ReturnValue_11 = CallFunc_IsValid_ReturnValue_11;
	Parms.CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue = CallFunc_BP_ApplyGameplayEffectToTarget_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_22 = K2Node_CreateDelegate_OutputDelegate_22;
	Parms.K2Node_Event_EventData = K2Node_Event_EventData;
	Parms.CallFunc_GetImpulseData_ImpulseDirection = CallFunc_GetImpulseData_ImpulseDirection;
	Parms.CallFunc_GetImpulseData_KnockbackMagnitude = CallFunc_GetImpulseData_KnockbackMagnitude;
	Parms.CallFunc_GetImpulseData_KnockbackZAngle = CallFunc_GetImpulseData_KnockbackZAngle;
	Parms.CallFunc_DoesUseInstagorInsteadOfImpulseDirection_Value = CallFunc_DoesUseInstagorInsteadOfImpulseDirection_Value;
	Parms.CallFunc_SelectFloat_ReturnValue = CallFunc_SelectFloat_ReturnValue;
	Parms.CallFunc_SelectFloat_ReturnValue_1 = CallFunc_SelectFloat_ReturnValue_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_EffectContextGetInstigatorActor_ReturnValue = CallFunc_EffectContextGetInstigatorActor_ReturnValue;
	Parms.CallFunc_GetPawnFromPlayerStateZone_OutPawn = CallFunc_GetPawnFromPlayerStateZone_OutPawn;
	Parms.CallFunc_GetPawnFromPlayerStateZone_PawnReturned = CallFunc_GetPawnFromPlayerStateZone_PawnReturned;
	Parms.K2Node_DynamicCast_AsBuilding_Trap = K2Node_DynamicCast_AsBuilding_Trap;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_CalculateImpulseDirection_ReturnValue = CallFunc_CalculateImpulseDirection_ReturnValue;
	Parms.K2Node_DynamicCast_AsBuilding_Trap_Floor = K2Node_DynamicCast_AsBuilding_Trap_Floor;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.K2Node_Event_bWasCancelled = K2Node_Event_bWasCancelled;
	Parms.Temp_bool_Variable_1 = Temp_bool_Variable_1;
	Parms.CallFunc_GetActivatingAbilityComponent_ReturnValue_2 = CallFunc_GetActivatingAbilityComponent_ReturnValue_2;
	Parms.CallFunc_RemoveActiveGameplayEffect_ReturnValue_1 = CallFunc_RemoveActiveGameplayEffect_ReturnValue_1;
	Parms.CallFunc_GetActivatingPawn_ReturnValue_17 = CallFunc_GetActivatingPawn_ReturnValue_17;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_23 = K2Node_CreateDelegate_OutputDelegate_23;
	Parms.CallFunc_Delay_Duration_ImplicitCast = CallFunc_Delay_Duration_ImplicitCast;
	Parms.CallFunc_SelectFloat_B_ImplicitCast = CallFunc_SelectFloat_B_ImplicitCast;
	Parms.CallFunc_SelectFloat_B_ImplicitCast_1 = CallFunc_SelectFloat_B_ImplicitCast_1;
	Parms.CallFunc_ApplyKnockback_KnockbackZAngle_ImplicitCast = CallFunc_ApplyKnockback_KnockbackZAngle_ImplicitCast;
	Parms.CallFunc_ApplyKnockback_KnockbackMagnitude_ImplicitCast = CallFunc_ApplyKnockback_KnockbackMagnitude_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
