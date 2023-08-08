#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.OnLaunchCharacter
// (Event, Protected, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     LaunchVelocity                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bXYOverride                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bZOverride                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_DoubleToVector_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_Conv_VectorToVector2D_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Vector_Up_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsNearlyZero2D_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_RotateAngleAxis_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetValueAsBool_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValidClass_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveActiveGameplayEffect_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue                (NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RotateAngleAxis_AngleDeg_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FVector UNPC_Pawn_Wildlife_Parent_C::OnLaunchCharacter(const struct FVector& LaunchVelocity, bool bXYOverride, bool bZOverride, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue, const struct FVector2D& CallFunc_Conv_VectorToVector2D_ReturnValue, const struct FVector& CallFunc_Vector_Up_ReturnValue, bool CallFunc_IsNearlyZero2D_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, const struct FVector& CallFunc_Multiply_VectorVector_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue, const struct FVector& CallFunc_RotateAngleAxis_ReturnValue, bool CallFunc_GetValueAsBool_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_IsValidClass_ReturnValue, int32 Temp_int_Variable, bool CallFunc_RemoveActiveGameplayEffect_ReturnValue, bool CallFunc_HasMatchingGameplayTag_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_GreaterEqual_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, float CallFunc_RotateAngleAxis_AngleDeg_ImplicitCast)
{
	static auto Func = Class->GetFunction("NPC_Pawn_Wildlife_Parent_C", "OnLaunchCharacter");

	Params::UNPC_Pawn_Wildlife_Parent_C_OnLaunchCharacter_Params Parms;

	Parms.LaunchVelocity = LaunchVelocity;
	Parms.bXYOverride = bXYOverride;
	Parms.bZOverride = bZOverride;
	Parms.CallFunc_Conv_DoubleToVector_ReturnValue = CallFunc_Conv_DoubleToVector_ReturnValue;
	Parms.CallFunc_Conv_VectorToVector2D_ReturnValue = CallFunc_Conv_VectorToVector2D_ReturnValue;
	Parms.CallFunc_Vector_Up_ReturnValue = CallFunc_Vector_Up_ReturnValue;
	Parms.CallFunc_IsNearlyZero2D_ReturnValue = CallFunc_IsNearlyZero2D_ReturnValue;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_Multiply_VectorVector_ReturnValue = CallFunc_Multiply_VectorVector_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_RotateAngleAxis_ReturnValue = CallFunc_RotateAngleAxis_ReturnValue;
	Parms.CallFunc_GetValueAsBool_ReturnValue = CallFunc_GetValueAsBool_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_IsValidClass_ReturnValue = CallFunc_IsValidClass_ReturnValue;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_RemoveActiveGameplayEffect_ReturnValue = CallFunc_RemoveActiveGameplayEffect_ReturnValue;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue = CallFunc_HasMatchingGameplayTag_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue = CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_RotateAngleAxis_AngleDeg_ImplicitCast = CallFunc_RotateAngleAxis_AngleDeg_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.TryShowHealthBar
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortPawnComponent_Convert*  CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerPawn*             CallFunc_GetConverterPawn_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_OnLocalPlayersTeam_Return_Value                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocallyControlled_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Wildlife_Parent_C::TryShowHealthBar(class UFortPawnComponent_Convert* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortPlayerPawn* CallFunc_GetConverterPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_OnLocalPlayersTeam_Return_Value, bool CallFunc_IsLocallyControlled_ReturnValue)
{
	static auto Func = Class->GetFunction("NPC_Pawn_Wildlife_Parent_C", "TryShowHealthBar");

	Params::UNPC_Pawn_Wildlife_Parent_C_TryShowHealthBar_Params Parms;

	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetConverterPawn_ReturnValue = CallFunc_GetConverterPawn_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_OnLocalPlayersTeam_Return_Value = CallFunc_OnLocalPlayersTeam_Return_Value;
	Parms.CallFunc_IsLocallyControlled_ReturnValue = CallFunc_IsLocallyControlled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.BlueprintCanInteract
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UFortPawn*                   InteractingPawn                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EInteractionBeingAttemptedInteractionBeingAttempted                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BlueprintCanInteract_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class UGameplayTagAssetInterface>CallFunc_HasMatchingGameplayTag_self_CastInput                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPawnComponent_Convert*  CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerPawn*             CallFunc_GetConverterPawn_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetOnlyLeaderInteraction_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UNPC_Pawn_Wildlife_Parent_C::BlueprintCanInteract(class UFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted, bool CallFunc_BlueprintCanInteract_ReturnValue, TScriptInterface<class UGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, class UFortPawnComponent_Convert* CallFunc_GetComponentByClass_ReturnValue, class UFortPlayerPawn* CallFunc_GetConverterPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_GetOnlyLeaderInteraction_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue)
{
	static auto Func = Class->GetFunction("NPC_Pawn_Wildlife_Parent_C", "BlueprintCanInteract");

	Params::UNPC_Pawn_Wildlife_Parent_C_BlueprintCanInteract_Params Parms;

	Parms.InteractingPawn = InteractingPawn;
	Parms.InteractionBeingAttempted = InteractionBeingAttempted;
	Parms.CallFunc_BlueprintCanInteract_ReturnValue = CallFunc_BlueprintCanInteract_ReturnValue;
	Parms.CallFunc_HasMatchingGameplayTag_self_CastInput = CallFunc_HasMatchingGameplayTag_self_CastInput;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue = CallFunc_HasMatchingGameplayTag_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_GetConverterPawn_ReturnValue = CallFunc_GetConverterPawn_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_GetOnlyLeaderInteraction_ReturnValue = CallFunc_GetOnlyLeaderInteraction_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.PlayStateChangeAudio
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_NPC_AlertLevel     Index                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable                                             (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_1                                           (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_2                                           (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_3                                           (NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                Temp_struct_Variable_4                                           (NoDestructor, HasGetValueTypeHash)
// enum class Enum_NPC_AlertLevel     Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                K2Node_Select_Default                                            (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsGameplayTagValid_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Wildlife_Parent_C::PlayStateChangeAudio(enum class Enum_NPC_AlertLevel Index, const struct FGameplayTag& Temp_struct_Variable, const struct FGameplayTag& Temp_struct_Variable_1, const struct FGameplayTag& Temp_struct_Variable_2, const struct FGameplayTag& Temp_struct_Variable_3, const struct FGameplayTag& Temp_struct_Variable_4, enum class Enum_NPC_AlertLevel Temp_byte_Variable, const struct FGameplayTag& K2Node_Select_Default, bool CallFunc_IsGameplayTagValid_ReturnValue)
{
	static auto Func = Class->GetFunction("NPC_Pawn_Wildlife_Parent_C", "PlayStateChangeAudio");

	Params::UNPC_Pawn_Wildlife_Parent_C_PlayStateChangeAudio_Params Parms;

	Parms.Index = Index;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.Temp_struct_Variable_2 = Temp_struct_Variable_2;
	Parms.Temp_struct_Variable_3 = Temp_struct_Variable_3;
	Parms.Temp_struct_Variable_4 = Temp_struct_Variable_4;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsGameplayTagValid_ReturnValue = CallFunc_IsGameplayTagValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.PlayAdditiveHitReacts
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     Hit_Direction                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAnimMontage*                Anim_Montage                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       CallFunc_GetOwnedGameplayTags_TagContainer                       ()
// bool                               CallFunc_HasTag_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Wildlife_Parent_C::PlayAdditiveHitReacts(struct FVector& Hit_Direction, class UAnimMontage* Anim_Montage, const struct FGameplayTagContainer& CallFunc_GetOwnedGameplayTags_TagContainer, bool CallFunc_HasTag_ReturnValue)
{
	static auto Func = Class->GetFunction("NPC_Pawn_Wildlife_Parent_C", "PlayAdditiveHitReacts");

	Params::UNPC_Pawn_Wildlife_Parent_C_PlayAdditiveHitReacts_Params Parms;

	Parms.Hit_Direction = Hit_Direction;
	Parms.Anim_Montage = Anim_Montage;
	Parms.CallFunc_GetOwnedGameplayTags_TagContainer = CallFunc_GetOwnedGameplayTags_TagContainer;
	Parms.CallFunc_HasTag_ReturnValue = CallFunc_HasTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.BlueprintModifyIncomingDamage
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       DamageTags                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayEffectContextHandleEffectContext                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UController*                 EventInstigator                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              LastFrameCount                                                   (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      Last_DamageCauser                                                (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// class UController*                 LastDamageInstigator                                             (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, NoDestructor, HasGetValueTypeHash)
// double                             NewDamage                                                        (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BlueprintModifyIncomingDamage_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              CallFunc_GetFrameCount_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_Int64Int64_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_FunctionResult_ReturnValue_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

float UNPC_Pawn_Wildlife_Parent_C::BlueprintModifyIncomingDamage(float Damage, struct FGameplayTagContainer& DamageTags, struct FGameplayEffectContextHandle& EffectContext, class UController* EventInstigator, class UActor* DamageCauser, int64 LastFrameCount, class UActor* Last_DamageCauser, class UController* LastDamageInstigator, double NewDamage, float CallFunc_BlueprintModifyIncomingDamage_ReturnValue, int64 CallFunc_GetFrameCount_ReturnValue, bool CallFunc_EqualEqual_Int64Int64_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, float K2Node_FunctionResult_ReturnValue_ImplicitCast)
{
	static auto Func = Class->GetFunction("NPC_Pawn_Wildlife_Parent_C", "BlueprintModifyIncomingDamage");

	Params::UNPC_Pawn_Wildlife_Parent_C_BlueprintModifyIncomingDamage_Params Parms;

	Parms.Damage = Damage;
	Parms.DamageTags = DamageTags;
	Parms.EffectContext = EffectContext;
	Parms.EventInstigator = EventInstigator;
	Parms.DamageCauser = DamageCauser;
	Parms.LastFrameCount = LastFrameCount;
	Parms.Last_DamageCauser = Last_DamageCauser;
	Parms.LastDamageInstigator = LastDamageInstigator;
	Parms.NewDamage = NewDamage;
	Parms.CallFunc_BlueprintModifyIncomingDamage_ReturnValue = CallFunc_BlueprintModifyIncomingDamage_ReturnValue;
	Parms.CallFunc_GetFrameCount_ReturnValue = CallFunc_GetFrameCount_ReturnValue;
	Parms.CallFunc_EqualEqual_Int64Int64_ReturnValue = CallFunc_EqualEqual_Int64Int64_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue_1 = CallFunc_EqualEqual_ObjectObject_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.K2Node_FunctionResult_ReturnValue_ImplicitCast = K2Node_FunctionResult_ReturnValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.NPCStatusWidget_UpdateKeepVisible
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShouldKeepVisible                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMaxHealth_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetHealth_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerController*       CallFunc_GetFirstLocalFortPlayerController_ReturnValue           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPawn*                       CallFunc_K2_GetPawn_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NPC_GetScalableFloatHotfixValue_AsBool                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetUserWidgetObject_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNPCStatusWidget_C*          K2Node_DynamicCast_AsNPCStatus_Widget                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetDistanceBetweenActors_Distance                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESubGame                CallFunc_GetSubGame_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_B_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_A_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Wildlife_Parent_C::NPCStatusWidget_UpdateKeepVisible(bool ShouldKeepVisible, float CallFunc_GetMaxHealth_ReturnValue, float CallFunc_GetHealth_ReturnValue, class UFortPlayerController* CallFunc_GetFirstLocalFortPlayerController_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, class UPawn* CallFunc_K2_GetPawn_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_NPC_GetScalableFloatHotfixValue_AsBool, int32 CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded, double CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UNPCStatusWidget_C* K2Node_DynamicCast_AsNPCStatus_Widget, bool K2Node_DynamicCast_bSuccess, double CallFunc_GetDistanceBetweenActors_Distance, bool CallFunc_Greater_DoubleDouble_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, double CallFunc_Divide_DoubleDouble_B_ImplicitCast, double CallFunc_Divide_DoubleDouble_A_ImplicitCast)
{
	static auto Func = Class->GetFunction("NPC_Pawn_Wildlife_Parent_C", "NPCStatusWidget_UpdateKeepVisible");

	Params::UNPC_Pawn_Wildlife_Parent_C_NPCStatusWidget_UpdateKeepVisible_Params Parms;

	Parms.ShouldKeepVisible = ShouldKeepVisible;
	Parms.CallFunc_GetMaxHealth_ReturnValue = CallFunc_GetMaxHealth_ReturnValue;
	Parms.CallFunc_GetHealth_ReturnValue = CallFunc_GetHealth_ReturnValue;
	Parms.CallFunc_GetFirstLocalFortPlayerController_ReturnValue = CallFunc_GetFirstLocalFortPlayerController_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_K2_GetPawn_ReturnValue = CallFunc_K2_GetPawn_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsBool = CallFunc_NPC_GetScalableFloatHotfixValue_AsBool;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded = CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat = CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat;
	Parms.CallFunc_GetUserWidgetObject_ReturnValue = CallFunc_GetUserWidgetObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsNPCStatus_Widget = K2Node_DynamicCast_AsNPCStatus_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_GetDistanceBetweenActors_Distance = CallFunc_GetDistanceBetweenActors_Distance;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_GetSubGame_ReturnValue = CallFunc_GetSubGame_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_B_ImplicitCast = CallFunc_Divide_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Divide_DoubleDouble_A_ImplicitCast = CallFunc_Divide_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.CanBeInteractedWithWhenTamed
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// bool                               bCanInteract                                                     (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NPC_GetScalableFloatHotfixValue_AsBool                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Wildlife_Parent_C::CanBeInteractedWithWhenTamed(bool* bCanInteract, bool CallFunc_NPC_GetScalableFloatHotfixValue_AsBool, int32 CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded, double CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("NPC_Pawn_Wildlife_Parent_C", "CanBeInteractedWithWhenTamed");

	Params::UNPC_Pawn_Wildlife_Parent_C_CanBeInteractedWithWhenTamed_Params Parms;

	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsBool = CallFunc_NPC_GetScalableFloatHotfixValue_AsBool;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded = CallFunc_NPC_GetScalableFloatHotfixValue_AsIntRounded;
	Parms.CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat = CallFunc_NPC_GetScalableFloatHotfixValue_AsFloat;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bCanInteract != nullptr)
		*bCanInteract = Parms.bCanInteract;

}


// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.NPC PickupGrabbed_Destroyed
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActor*                      ActorGrabbed                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Wildlife_Parent_C::NPC_PickupGrabbed_Destroyed(class UActor* ActorGrabbed)
{
	static auto Func = Class->GetFunction("NPC_Pawn_Wildlife_Parent_C", "NPC PickupGrabbed_Destroyed");

	Params::UNPC_Pawn_Wildlife_Parent_C_NPC_PickupGrabbed_Destroyed_Params Parms;

	Parms.ActorGrabbed = ActorGrabbed;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.SetTamingEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               EnableTaming                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NPC_CanBeInteractedWith_CanInteract                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPawnComponent_Convert*  CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Wildlife_Parent_C::SetTamingEnabled(bool EnableTaming, bool CallFunc_NPC_CanBeInteractedWith_CanInteract, class UFortPawnComponent_Convert* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static auto Func = Class->GetFunction("NPC_Pawn_Wildlife_Parent_C", "SetTamingEnabled");

	Params::UNPC_Pawn_Wildlife_Parent_C_SetTamingEnabled_Params Parms;

	Parms.EnableTaming = EnableTaming;
	Parms.CallFunc_NPC_CanBeInteractedWith_CanInteract = CallFunc_NPC_CanBeInteractedWith_CanInteract;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.NPC CanBeInteractedWith
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CanInteract                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NPC_CanBeInteractedWith_CanInteract                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Wildlife_Parent_C::NPC_CanBeInteractedWith(bool* CanInteract, bool CallFunc_NPC_CanBeInteractedWith_CanInteract, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("NPC_Pawn_Wildlife_Parent_C", "NPC CanBeInteractedWith");

	Params::UNPC_Pawn_Wildlife_Parent_C_NPC_CanBeInteractedWith_Params Parms;

	Parms.CallFunc_NPC_CanBeInteractedWith_CanInteract = CallFunc_NPC_CanBeInteractedWith_CanInteract;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (CanInteract != nullptr)
		*CanInteract = Parms.CanInteract;

}


// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.AttachAndApplyVocalFX
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSoundLibraryPlayResult     SoundLibraryResult                                               (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MatchesTag_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_K2_AttachToComponent_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Wildlife_Parent_C::AttachAndApplyVocalFX(struct FSoundLibraryPlayResult& SoundLibraryResult, int32 Temp_int_Array_Index_Variable, class UAudioComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_MatchesTag_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, bool CallFunc_K2_AttachToComponent_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static auto Func = Class->GetFunction("NPC_Pawn_Wildlife_Parent_C", "AttachAndApplyVocalFX");

	Params::UNPC_Pawn_Wildlife_Parent_C_AttachAndApplyVocalFX_Params Parms;

	Parms.SoundLibraryResult = SoundLibraryResult;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_MatchesTag_ReturnValue = CallFunc_MatchesTag_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.CallFunc_K2_AttachToComponent_ReturnValue = CallFunc_K2_AttachToComponent_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.Play Water Splash at Water Surface
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortWaterBodyActor*         Water_Body                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Enter_Water                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Wildlife_Parent_C::Play_Water_Splash_at_Water_Surface(class UFortWaterBodyActor* Water_Body, bool Enter_Water)
{
	static auto Func = Class->GetFunction("NPC_Pawn_Wildlife_Parent_C", "Play Water Splash at Water Surface");

	Params::UNPC_Pawn_Wildlife_Parent_C_Play_Water_Splash_at_Water_Surface_Params Parms;

	Parms.Water_Body = Water_Body;
	Parms.Enter_Water = Enter_Water;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.IsValidAutoFireTarget
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UActor*                      Attacker                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortTeamAffiliation    TeamAffiliation                                                  (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetActorTeam_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortTeamAffiliation    CallFunc_GetTeamAffiliationBetweenTeams_ReturnValue              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMaxHealth_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetHealth_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_DoubleDouble_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Less_DoubleDouble_B_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Less_DoubleDouble_A_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UNPC_Pawn_Wildlife_Parent_C::IsValidAutoFireTarget(class UActor* Attacker, enum class EFortTeamAffiliation TeamAffiliation, uint8 CallFunc_GetActorTeam_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class EFortTeamAffiliation CallFunc_GetTeamAffiliationBetweenTeams_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, float CallFunc_GetMaxHealth_ReturnValue, float CallFunc_GetHealth_ReturnValue, bool CallFunc_Less_DoubleDouble_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, double CallFunc_Less_DoubleDouble_B_ImplicitCast, double CallFunc_Less_DoubleDouble_A_ImplicitCast)
{
	static auto Func = Class->GetFunction("NPC_Pawn_Wildlife_Parent_C", "IsValidAutoFireTarget");

	Params::UNPC_Pawn_Wildlife_Parent_C_IsValidAutoFireTarget_Params Parms;

	Parms.Attacker = Attacker;
	Parms.TeamAffiliation = TeamAffiliation;
	Parms.CallFunc_GetActorTeam_ReturnValue = CallFunc_GetActorTeam_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetTeamAffiliationBetweenTeams_ReturnValue = CallFunc_GetTeamAffiliationBetweenTeams_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_GetMaxHealth_ReturnValue = CallFunc_GetMaxHealth_ReturnValue;
	Parms.CallFunc_GetHealth_ReturnValue = CallFunc_GetHealth_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_ReturnValue = CallFunc_Less_DoubleDouble_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_Less_DoubleDouble_B_ImplicitCast = CallFunc_Less_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Less_DoubleDouble_A_ImplicitCast = CallFunc_Less_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.Play Sound Lib
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                Event_Name                                                       (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class USoundLibrarySubsystem*      CallFunc_GetWorldSubsystem_ReturnValue                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FSoundLibrarySimpleContextSettingsK2Node_MakeStruct_SoundLibrarySimpleContextSettings              (NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UB_CreatureSoundLibraryContext_C*CallFunc_SpawnObject_ReturnValue                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSoundLibraryPlayResult     CallFunc_PlaySound_OutResults                                    (ContainsInstancedReference)

void UNPC_Pawn_Wildlife_Parent_C::Play_Sound_Lib(const struct FGameplayTag& Event_Name, class USoundLibrarySubsystem* CallFunc_GetWorldSubsystem_ReturnValue, const struct FSoundLibrarySimpleContextSettings& K2Node_MakeStruct_SoundLibrarySimpleContextSettings, bool CallFunc_IsValid_ReturnValue, class UB_CreatureSoundLibraryContext_C* CallFunc_SpawnObject_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, const struct FSoundLibraryPlayResult& CallFunc_PlaySound_OutResults)
{
	static auto Func = Class->GetFunction("NPC_Pawn_Wildlife_Parent_C", "Play Sound Lib");

	Params::UNPC_Pawn_Wildlife_Parent_C_Play_Sound_Lib_Params Parms;

	Parms.Event_Name = Event_Name;
	Parms.CallFunc_GetWorldSubsystem_ReturnValue = CallFunc_GetWorldSubsystem_ReturnValue;
	Parms.K2Node_MakeStruct_SoundLibrarySimpleContextSettings = K2Node_MakeStruct_SoundLibrarySimpleContextSettings;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SpawnObject_ReturnValue = CallFunc_SpawnObject_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_PlaySound_OutResults = CallFunc_PlaySound_OutResults;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.UpdateTamingIndicator
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerController*       CallFunc_GetFirstLocalFortPlayerController_ReturnValue           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetActorTeam_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Wildlife_Parent_C::UpdateTamingIndicator(bool CallFunc_HasAuthority_ReturnValue, class UFortPlayerController* CallFunc_GetFirstLocalFortPlayerController_ReturnValue, uint8 CallFunc_GetActorTeam_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static auto Func = Class->GetFunction("NPC_Pawn_Wildlife_Parent_C", "UpdateTamingIndicator");

	Params::UNPC_Pawn_Wildlife_Parent_C_UpdateTamingIndicator_Params Parms;

	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetFirstLocalFortPlayerController_ReturnValue = CallFunc_GetFirstLocalFortPlayerController_ReturnValue;
	Parms.CallFunc_GetActorTeam_ReturnValue = CallFunc_GetActorTeam_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.OnRep_LeaderTeam
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UNPC_Pawn_Wildlife_Parent_C::OnRep_LeaderTeam()
{
	static auto Func = Class->GetFunction("NPC_Pawn_Wildlife_Parent_C", "OnRep_LeaderTeam");

	Params::UNPC_Pawn_Wildlife_Parent_C_OnRep_LeaderTeam_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.OnLoaded_9DC5FDA543FAF13BB29E95AA78B28A06
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UObject>         Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)

void UNPC_Pawn_Wildlife_Parent_C::OnLoaded_9DC5FDA543FAF13BB29E95AA78B28A06(TSubclassOf<class UObject> Loaded)
{
	static auto Func = Class->GetFunction("NPC_Pawn_Wildlife_Parent_C", "OnLoaded_9DC5FDA543FAF13BB29E95AA78B28A06");

	Params::UNPC_Pawn_Wildlife_Parent_C_OnLoaded_9DC5FDA543FAF13BB29E95AA78B28A06_Params Parms;

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void UNPC_Pawn_Wildlife_Parent_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("NPC_Pawn_Wildlife_Parent_C", "ReceiveBeginPlay");

	Params::UNPC_Pawn_Wildlife_Parent_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.LinkAnimationLayers
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UNPC_Pawn_Wildlife_Parent_C::LinkAnimationLayers()
{
	static auto Func = Class->GetFunction("NPC_Pawn_Wildlife_Parent_C", "LinkAnimationLayers");

	Params::UNPC_Pawn_Wildlife_Parent_C_LinkAnimationLayers_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.AsyncLinkAnimationLayer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// TSoftClassPtr<class UAnimInstance> AnimationLayer                                                   (BlueprintVisible, BlueprintReadOnly, Parm, HasGetValueTypeHash)

void UNPC_Pawn_Wildlife_Parent_C::AsyncLinkAnimationLayer(TSoftClassPtr<class UAnimInstance> AnimationLayer)
{
	static auto Func = Class->GetFunction("NPC_Pawn_Wildlife_Parent_C", "AsyncLinkAnimationLayer");

	Params::UNPC_Pawn_Wildlife_Parent_C_AsyncLinkAnimationLayer_Params Parms;

	Parms.AnimationLayer = AnimationLayer;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.OnCustomizationsLoaded_BP
// (Event, Protected, BlueprintEvent)
// Parameters:

void UNPC_Pawn_Wildlife_Parent_C::OnCustomizationsLoaded_BP()
{
	static auto Func = Class->GetFunction("NPC_Pawn_Wildlife_Parent_C", "OnCustomizationsLoaded_BP");

	Params::UNPC_Pawn_Wildlife_Parent_C_OnCustomizationsLoaded_BP_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.On NPC PawnInteractedWith
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActor*                      AIPawn                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerPawn*             InteractingPlayerPawn                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Wildlife_Parent_C::On_NPC_PawnInteractedWith(class UActor* AIPawn, class UFortPlayerPawn* InteractingPlayerPawn)
{
	static auto Func = Class->GetFunction("NPC_Pawn_Wildlife_Parent_C", "On NPC PawnInteractedWith");

	Params::UNPC_Pawn_Wildlife_Parent_C_On_NPC_PawnInteractedWith_Params Parms;

	Parms.AIPawn = AIPawn;
	Parms.InteractingPlayerPawn = InteractingPlayerPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.BndEvt__ConvertComponent_K2Node_ComponentBoundEvent_0_ConvertedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFortPawn*                   InstigatorPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortPawn*                   ConvertedPawn                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Wildlife_Parent_C::BndEvt__ConvertComponent_K2Node_ComponentBoundEvent_0_ConvertedEvent__DelegateSignature(class UFortPawn* InstigatorPawn, class UFortPawn* ConvertedPawn)
{
	static auto Func = Class->GetFunction("NPC_Pawn_Wildlife_Parent_C", "BndEvt__ConvertComponent_K2Node_ComponentBoundEvent_0_ConvertedEvent__DelegateSignature");

	Params::UNPC_Pawn_Wildlife_Parent_C_BndEvt__ConvertComponent_K2Node_ComponentBoundEvent_0_ConvertedEvent__DelegateSignature_Params Parms;

	Parms.InstigatorPawn = InstigatorPawn;
	Parms.ConvertedPawn = ConvertedPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.BndEvt__ConvertComponent_K2Node_ComponentBoundEvent_1_UnconvertedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// class UFortPawn*                   UnconvertedPawn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EUnconvertReason        UnconvertReason                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Wildlife_Parent_C::BndEvt__ConvertComponent_K2Node_ComponentBoundEvent_1_UnconvertedEvent__DelegateSignature(class UFortPawn* UnconvertedPawn, enum class EUnconvertReason UnconvertReason)
{
	static auto Func = Class->GetFunction("NPC_Pawn_Wildlife_Parent_C", "BndEvt__ConvertComponent_K2Node_ComponentBoundEvent_1_UnconvertedEvent__DelegateSignature");

	Params::UNPC_Pawn_Wildlife_Parent_C_BndEvt__ConvertComponent_K2Node_ComponentBoundEvent_1_UnconvertedEvent__DelegateSignature_Params Parms;

	Parms.UnconvertedPawn = UnconvertedPawn;
	Parms.UnconvertReason = UnconvertReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.NPC AlertLevelChangedServer
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class Enum_NPC_AlertLevel     NPCAlertLevel                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Wildlife_Parent_C::NPC_AlertLevelChangedServer(enum class Enum_NPC_AlertLevel NPCAlertLevel)
{
	static auto Func = Class->GetFunction("NPC_Pawn_Wildlife_Parent_C", "NPC AlertLevelChangedServer");

	Params::UNPC_Pawn_Wildlife_Parent_C_NPC_AlertLevelChangedServer_Params Parms;

	Parms.NPCAlertLevel = NPCAlertLevel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.OnDeathServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       DamageTags                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                     Momentum                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitInfo                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UController*                 InstigatedBy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleEffectContext                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UNPC_Pawn_Wildlife_Parent_C::OnDeathServer(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class UController* InstigatedBy, class UActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static auto Func = Class->GetFunction("NPC_Pawn_Wildlife_Parent_C", "OnDeathServer");

	Params::UNPC_Pawn_Wildlife_Parent_C_OnDeathServer_Params Parms;

	Parms.Damage = Damage;
	Parms.DamageTags = DamageTags;
	Parms.Momentum = Momentum;
	Parms.HitInfo = HitInfo;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = EffectContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.NPC LeaderSet
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Success_                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      Leader                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EUnconvertReason        UnconvertReason                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Wildlife_Parent_C::NPC_LeaderSet(bool Success_, class UActor* Leader, enum class EUnconvertReason UnconvertReason)
{
	static auto Func = Class->GetFunction("NPC_Pawn_Wildlife_Parent_C", "NPC LeaderSet");

	Params::UNPC_Pawn_Wildlife_Parent_C_NPC_LeaderSet_Params Parms;

	Parms.Success_ = Success_;
	Parms.Leader = Leader;
	Parms.UnconvertReason = UnconvertReason;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.BndEvt__SoundLibrary_Component_K2Node_ComponentBoundEvent_2_OnSoundLibraryPlayEvent__DelegateSignature
// (HasOutParams, BlueprintEvent)
// Parameters:
// struct FSoundLibraryPlayResult     Results                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// class USoundLibraryContext*        Context                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Wildlife_Parent_C::BndEvt__SoundLibrary_Component_K2Node_ComponentBoundEvent_2_OnSoundLibraryPlayEvent__DelegateSignature(struct FSoundLibraryPlayResult& Results, class USoundLibraryContext* Context)
{
	static auto Func = Class->GetFunction("NPC_Pawn_Wildlife_Parent_C", "BndEvt__SoundLibrary_Component_K2Node_ComponentBoundEvent_2_OnSoundLibraryPlayEvent__DelegateSignature");

	Params::UNPC_Pawn_Wildlife_Parent_C_BndEvt__SoundLibrary_Component_K2Node_ComponentBoundEvent_2_OnSoundLibraryPlayEvent__DelegateSignature_Params Parms;

	Parms.Results = Results;
	Parms.Context = Context;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.OnBeingControlledChanged
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bControlled                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Wildlife_Parent_C::OnBeingControlledChanged(bool bControlled)
{
	static auto Func = Class->GetFunction("NPC_Pawn_Wildlife_Parent_C", "OnBeingControlledChanged");

	Params::UNPC_Pawn_Wildlife_Parent_C_OnBeingControlledChanged_Params Parms;

	Parms.bControlled = bControlled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.OnApplyEffectOptimization
// (Event, Public, BlueprintEvent)
// Parameters:
// int32                              NewBudgetValue                                                   (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Wildlife_Parent_C::OnApplyEffectOptimization(int32 NewBudgetValue)
{
	static auto Func = Class->GetFunction("NPC_Pawn_Wildlife_Parent_C", "OnApplyEffectOptimization");

	Params::UNPC_Pawn_Wildlife_Parent_C_OnApplyEffectOptimization_Params Parms;

	Parms.NewBudgetValue = NewBudgetValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.OnDamagePlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       DamageTags                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                     Momentum                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitInfo                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UFortPawn*                   InstigatedBy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleEffectContext                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UNPC_Pawn_Wildlife_Parent_C::OnDamagePlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class UFortPawn* InstigatedBy, class UActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static auto Func = Class->GetFunction("NPC_Pawn_Wildlife_Parent_C", "OnDamagePlayEffects");

	Params::UNPC_Pawn_Wildlife_Parent_C_OnDamagePlayEffects_Params Parms;

	Parms.Damage = Damage;
	Parms.DamageTags = DamageTags;
	Parms.Momentum = Momentum;
	Parms.HitInfo = HitInfo;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = EffectContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.NPC UpdateHealthBarComponentVisibility
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UNPC_Pawn_Wildlife_Parent_C::NPC_UpdateHealthBarComponentVisibility()
{
	static auto Func = Class->GetFunction("NPC_Pawn_Wildlife_Parent_C", "NPC UpdateHealthBarComponentVisibility");

	Params::UNPC_Pawn_Wildlife_Parent_C_NPC_UpdateHealthBarComponentVisibility_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.OnPawnHealthChanged_Event_0
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UNPC_Pawn_Wildlife_Parent_C::OnPawnHealthChanged_Event_0()
{
	static auto Func = Class->GetFunction("NPC_Pawn_Wildlife_Parent_C", "OnPawnHealthChanged_Event_0");

	Params::UNPC_Pawn_Wildlife_Parent_C_OnPawnHealthChanged_Event_0_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.On Pawn Focused
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortPawn*                   FocusedPawn                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Wildlife_Parent_C::On_Pawn_Focused(class UFortPawn* FocusedPawn)
{
	static auto Func = Class->GetFunction("NPC_Pawn_Wildlife_Parent_C", "On Pawn Focused");

	Params::UNPC_Pawn_Wildlife_Parent_C_On_Pawn_Focused_Params Parms;

	Parms.FocusedPawn = FocusedPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.HideStatus
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UNPC_Pawn_Wildlife_Parent_C::HideStatus()
{
	static auto Func = Class->GetFunction("NPC_Pawn_Wildlife_Parent_C", "HideStatus");

	Params::UNPC_Pawn_Wildlife_Parent_C_HideStatus_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.OnSlidingStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bNewSlidingState                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Wildlife_Parent_C::OnSlidingStateChanged(bool bNewSlidingState)
{
	static auto Func = Class->GetFunction("NPC_Pawn_Wildlife_Parent_C", "OnSlidingStateChanged");

	Params::UNPC_Pawn_Wildlife_Parent_C_OnSlidingStateChanged_Params Parms;

	Parms.bNewSlidingState = bNewSlidingState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.OnDeathPlayEffects
// (BlueprintCosmetic, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                              Damage                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       DamageTags                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FVector                     Momentum                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  HitInfo                                                          (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UFortPawn*                   InstigatedBy                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleEffectContext                                                    (BlueprintVisible, BlueprintReadOnly, Parm)

void UNPC_Pawn_Wildlife_Parent_C::OnDeathPlayEffects(float Damage, struct FGameplayTagContainer& DamageTags, const struct FVector& Momentum, struct FHitResult& HitInfo, class UFortPawn* InstigatedBy, class UActor* DamageCauser, const struct FGameplayEffectContextHandle& EffectContext)
{
	static auto Func = Class->GetFunction("NPC_Pawn_Wildlife_Parent_C", "OnDeathPlayEffects");

	Params::UNPC_Pawn_Wildlife_Parent_C_OnDeathPlayEffects_Params Parms;

	Parms.Damage = Damage;
	Parms.DamageTags = DamageTags;
	Parms.Momentum = Momentum;
	Parms.HitInfo = HitInfo;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.EffectContext = EffectContext;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.OnLanded
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FHitResult                  Hit                                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)

void UNPC_Pawn_Wildlife_Parent_C::OnLanded(struct FHitResult& Hit)
{
	static auto Func = Class->GetFunction("NPC_Pawn_Wildlife_Parent_C", "OnLanded");

	Params::UNPC_Pawn_Wildlife_Parent_C_OnLanded_Params Parms;

	Parms.Hit = Hit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.OnOutOfConvertResistanceServer
// (BlueprintAuthorityOnly, Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                              ConvertDamageDone                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       SourceTags                                                       (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// struct FGameplayEffectContextHandleEffectContext                                                    (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// class UController*                 EffectInstigator                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActor*                      EffectCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Wildlife_Parent_C::OnOutOfConvertResistanceServer(float ConvertDamageDone, struct FGameplayTagContainer& SourceTags, struct FGameplayEffectContextHandle& EffectContext, class UController* EffectInstigator, class UActor* EffectCauser)
{
	static auto Func = Class->GetFunction("NPC_Pawn_Wildlife_Parent_C", "OnOutOfConvertResistanceServer");

	Params::UNPC_Pawn_Wildlife_Parent_C_OnOutOfConvertResistanceServer_Params Parms;

	Parms.ConvertDamageDone = ConvertDamageDone;
	Parms.SourceTags = SourceTags;
	Parms.EffectContext = EffectContext;
	Parms.EffectInstigator = EffectInstigator;
	Parms.EffectCauser = EffectCauser;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.RestoreConvertResistance
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UNPC_Pawn_Wildlife_Parent_C::RestoreConvertResistance()
{
	static auto Func = Class->GetFunction("NPC_Pawn_Wildlife_Parent_C", "RestoreConvertResistance");

	Params::UNPC_Pawn_Wildlife_Parent_C_RestoreConvertResistance_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.CE_UpdateSurfaceType
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActorComponent*             Component                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               bReset                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Wildlife_Parent_C::CE_UpdateSurfaceType(class UActorComponent* Component, bool bReset)
{
	static auto Func = Class->GetFunction("NPC_Pawn_Wildlife_Parent_C", "CE_UpdateSurfaceType");

	Params::UNPC_Pawn_Wildlife_Parent_C_CE_UpdateSurfaceType_Params Parms;

	Parms.Component = Component;
	Parms.bReset = bReset;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.ExecuteUbergraph_NPC_Pawn_Wildlife_Parent
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftClassPtr<class UAnimInstance> K2Node_CustomEvent_AnimationLayer                                (HasGetValueTypeHash)
// bool                               CallFunc_IsValidSoftClassReference_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_wildcard_To_allow_the_previous_value_to_be_returned_Variable(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetUserWidgetObject_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNPCStatusWidget_C*          K2Node_DynamicCast_AsNPCStatus_Widget                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      K2Node_Event_AIPawn                                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerPawn*             K2Node_Event_InteractingPlayerPawn                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPawn*                   K2Node_DynamicCast_AsFort_Pawn                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetConsoleVariableIntValue_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_InEditorOrPIE_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<bool>                       Temp_wildcard_Avoid_creating_array_every_time_Variable           (ConstParm, ReferenceParm)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortPawn*                   K2Node_ComponentBoundEvent_InstigatorPawn                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortPawn*                   K2Node_ComponentBoundEvent_ConvertedPawn                         (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetVisualEffectQuality_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetActorTeam_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAbilitySystemComponent* CallFunc_GetFortAbilitySystemComponent_ReturnValue               (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UFortPawn*                   K2Node_ComponentBoundEvent_UnconvertedPawn                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EUnconvertReason        K2Node_ComponentBoundEvent_UnconvertReason                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class Enum_NPC_AlertLevel     K2Node_Event_NPCAlertLevel                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Damage_2                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_Event_DamageTags_2                                        (ConstParm)
// struct FVector                     K2Node_Event_Momentum_2                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_Event_HitInfo_2                                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UController*                 K2Node_Event_InstigatedBy_2                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActor*                      K2Node_Event_DamageCauser_2                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleK2Node_Event_EffectContext_3                                     ()
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_Success_                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActor*                      K2Node_Event_Leader                                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EUnconvertReason        K2Node_Event_UnconvertReason                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetConsoleVariableIntValue_ReturnValue_1                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSoundLibraryPlayResult     K2Node_ComponentBoundEvent_Results                               (ConstParm, ContainsInstancedReference)
// class USoundLibraryContext*        K2Node_ComponentBoundEvent_Context                               (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_IntInt_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bControlled                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortHUDContext*             CallFunc_GetContext_ReturnValue                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NPC_CanBeInteractedWith_CanInteract                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanBeInteractedWithWhenTamed_bCanInteract               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NPC_UpdateInteract_EnabledInteract                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Event_NewBudgetValue                                      (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_IntInt_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDead_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchInteger_CmpSuccess_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Damage_1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_Event_DamageTags_1                                        (ConstParm)
// struct FVector                     K2Node_Event_Momentum_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_Event_HitInfo_1                                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UFortPawn*                   K2Node_Event_InstigatedBy_1                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActor*                      K2Node_Event_DamageCauser_1                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleK2Node_Event_EffectContext_2                                     ()
// class UFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESubGame                CallFunc_GetSubGame_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetConsoleVariableIntValue_ReturnValue_2                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESubGame                CallFunc_GetSubGame_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_InEditorOrPIE_ReturnValue_1                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerPawn*             CallFunc_GetConverterPawn_ReturnValue                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UGameUserSettings*           CallFunc_GetGameUserSettings_ReturnValue_1                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetVisualEffectQuality_ReturnValue_1                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ESubGame                CallFunc_GetSubGame_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerPawn*             CallFunc_GetConverterPawn_ReturnValue_1                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPawn*                   K2Node_CustomEvent_FocusedPawn                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPawnComponent_Convert*  CallFunc_GetComponentByClass_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerPawn*             CallFunc_GetConverterPawn_ReturnValue_2                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerStateAthena*      K2Node_DynamicCast_AsFort_Player_State_Athena                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetSquadId_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UClass*                      Temp_class_Variable                                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UClass*                      K2Node_ClassDynamicCast_AsAnim_Instance                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ClassDynamicCast_bSuccess                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_RemoveActiveGameplayEffect_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue                (NoDestructor, HasGetValueTypeHash)
// double                             Temp_real_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAbilitySystemComponent* CallFunc_GetFortAbilitySystemComponent_ReturnValue_1             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerController*       CallFunc_GetFirstLocalFortPlayerController_ReturnValue           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerStateAthena*      K2Node_DynamicCast_AsFort_Player_State_Athena_1                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              CallFunc_GetSquadId_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_RemoveActiveEffectsWithTags_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_1              (NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetUserWidgetObject_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bNewSlidingState                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNPCStatusWidget_C*          K2Node_DynamicCast_AsNPCStatus_Widget_1                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleCallFunc_MakeSimpleFortEffectContext_ReturnValue                 ()
// TSubclassOf<class UObject>         K2Node_CustomEvent_Loaded                                        (ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_Damage                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_Event_DamageTags                                          (ConstParm)
// struct FVector                     K2Node_Event_Momentum                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_Event_HitInfo                                             (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// class UFortPawn*                   K2Node_Event_InstigatedBy                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActor*                      K2Node_Event_DamageCauser                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectContextHandleK2Node_Event_EffectContext_1                                     ()
// struct FHitResult                  K2Node_Event_Hit                                                 (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// TArray<class UActor*>              Temp_object_Variable                                             (ConstParm, ReferenceParm)
// float                              CallFunc_GetHealth_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMaxHealth_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAbilitySystemComponent* CallFunc_GetFortAbilitySystemComponent_ReturnValue_2             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectSpecHandle   CallFunc_MakeOutgoingSpec_ReturnValue                            ()
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayEffectSpecHandle   CallFunc_AssignTagSetByCallerMagnitude_ReturnValue               ()
// struct FActiveGameplayEffectHandle CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue            (NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMaxConvertResistance_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_ConvertDamageDone                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_Event_SourceTags                                          (ConstParm)
// struct FGameplayEffectContextHandleK2Node_Event_EffectContext                                       (ConstParm)
// class UController*                 K2Node_Event_EffectInstigator                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActor*                      K2Node_Event_EffectCauser                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetMaxConvertResistance_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPawn*                   K2Node_DynamicCast_AsFort_Pawn_1                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortSurfaceTrackingComponent*CallFunc_GetSurfaceTrackingComponent_ReturnValue                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// enum class EPhysicalSurface        CallFunc_GetCurrentSurfaceType_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UActorComponent*             K2Node_CustomEvent_Component                                     (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_bReset                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_11                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUserWidget*                 CallFunc_GetUserWidgetObject_ReturnValue_2                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<enum class EObjectTypeQuery>K2Node_MakeArray_Array                                           (ConstParm, ReferenceParm)
// class UNPCStatusWidget_C*          K2Node_DynamicCast_AsNPCStatus_Widget_2                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_LineTraceSingleForObjects_OutHit                        (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// bool                               CallFunc_LineTraceSingleForObjects_ReturnValue                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bBlockingHit                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BreakHitResult_bInitialOverlap                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Time                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_BreakHitResult_Distance                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactPoint                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_Normal                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_ImpactNormal                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPhysicalMaterial*           CallFunc_BreakHitResult_PhysMat                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_BreakHitResult_HitActor                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_BreakHitResult_HitComponent                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_HitBoneName                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_BreakHitResult_BoneName                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_HitItem                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_ElementIndex                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_BreakHitResult_FaceIndex                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceStart                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakHitResult_TraceEnd                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_MakeRotFromZX_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldRotation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// float                              CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_A_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_B_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_VariableSetRef_Target_ImplicitCast                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Wildlife_Parent_C::ExecuteUbergraph_NPC_Pawn_Wildlife_Parent(int32 EntryPoint, bool Temp_bool_Variable, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, TSoftClassPtr<class UAnimInstance> K2Node_CustomEvent_AnimationLayer, bool CallFunc_IsValidSoftClassReference_ReturnValue, bool Temp_wildcard_To_allow_the_previous_value_to_be_returned_Variable, bool CallFunc_IsValid_ReturnValue, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue, class UNPCStatusWidget_C* K2Node_DynamicCast_AsNPCStatus_Widget, bool K2Node_DynamicCast_bSuccess, class UActor* K2Node_Event_AIPawn, class UFortPlayerPawn* K2Node_Event_InteractingPlayerPawn, int32 Temp_int_Variable, bool K2Node_SwitchInteger_CmpSuccess, class UFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess_1, int32 CallFunc_GetConsoleVariableIntValue_ReturnValue, bool CallFunc_InEditorOrPIE_ReturnValue, TArray<bool>& Temp_wildcard_Avoid_creating_array_every_time_Variable, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue, class UFortPawn* K2Node_ComponentBoundEvent_InstigatorPawn, class UFortPawn* K2Node_ComponentBoundEvent_ConvertedPawn, int32 CallFunc_GetVisualEffectQuality_ReturnValue, uint8 CallFunc_GetActorTeam_ReturnValue, class UFortAbilitySystemComponent* CallFunc_GetFortAbilitySystemComponent_ReturnValue, class UFortPawn* K2Node_ComponentBoundEvent_UnconvertedPawn, enum class EUnconvertReason K2Node_ComponentBoundEvent_UnconvertReason, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, enum class Enum_NPC_AlertLevel K2Node_Event_NPCAlertLevel, bool K2Node_SwitchEnum_CmpSuccess, float K2Node_Event_Damage_2, const struct FGameplayTagContainer& K2Node_Event_DamageTags_2, const struct FVector& K2Node_Event_Momentum_2, const struct FHitResult& K2Node_Event_HitInfo_2, class UController* K2Node_Event_InstigatedBy_2, class UActor* K2Node_Event_DamageCauser_2, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext_3, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue, bool K2Node_Event_Success_, class UActor* K2Node_Event_Leader, enum class EUnconvertReason K2Node_Event_UnconvertReason, int32 CallFunc_GetConsoleVariableIntValue_ReturnValue_1, const struct FSoundLibraryPlayResult& K2Node_ComponentBoundEvent_Results, class USoundLibraryContext* K2Node_ComponentBoundEvent_Context, bool CallFunc_EqualEqual_IntInt_ReturnValue, bool K2Node_Event_bControlled, class UFortHUDContext* CallFunc_GetContext_ReturnValue, bool CallFunc_IsValid_ReturnValue_3, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_NPC_CanBeInteractedWith_CanInteract, bool CallFunc_CanBeInteractedWithWhenTamed_bCanInteract, bool CallFunc_NPC_UpdateInteract_EnabledInteract, int32 K2Node_Event_NewBudgetValue, bool CallFunc_LessEqual_IntInt_ReturnValue, bool CallFunc_IsDead_ReturnValue, int32 Temp_int_Variable_1, bool K2Node_SwitchInteger_CmpSuccess_1, float K2Node_Event_Damage_1, const struct FGameplayTagContainer& K2Node_Event_DamageTags_1, const struct FVector& K2Node_Event_Momentum_1, const struct FHitResult& K2Node_Event_HitInfo_1, class UFortPawn* K2Node_Event_InstigatedBy_1, class UActor* K2Node_Event_DamageCauser_1, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext_2, class UFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess_2, enum class ESubGame CallFunc_GetSubGame_ReturnValue, int32 CallFunc_GetConsoleVariableIntValue_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue, enum class ESubGame CallFunc_GetSubGame_ReturnValue_1, bool CallFunc_InEditorOrPIE_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_1, class UFortPlayerPawn* CallFunc_GetConverterPawn_ReturnValue, bool CallFunc_IsValid_ReturnValue_4, class UGameUserSettings* CallFunc_GetGameUserSettings_ReturnValue_1, int32 CallFunc_GetVisualEffectQuality_ReturnValue_1, enum class ESubGame CallFunc_GetSubGame_ReturnValue_2, bool CallFunc_EqualEqual_ByteByte_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UFortPlayerPawn* CallFunc_GetConverterPawn_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_5, bool CallFunc_HasAuthority_ReturnValue, class UFortPawn* K2Node_CustomEvent_FocusedPawn, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class UFortPawnComponent_Convert* CallFunc_GetComponentByClass_ReturnValue, bool CallFunc_IsValid_ReturnValue_6, class UFortPlayerPawn* CallFunc_GetConverterPawn_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_7, class UFortPlayerStateAthena* K2Node_DynamicCast_AsFort_Player_State_Athena, bool K2Node_DynamicCast_bSuccess_3, uint8 CallFunc_GetSquadId_ReturnValue, class UClass* Temp_class_Variable, class UClass* K2Node_ClassDynamicCast_AsAnim_Instance, bool K2Node_ClassDynamicCast_bSuccess, bool CallFunc_RemoveActiveGameplayEffect_ReturnValue, bool CallFunc_HasAuthority_ReturnValue_1, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue, double Temp_real_Variable, bool CallFunc_IsDedicatedServer_ReturnValue_1, class UFortAbilitySystemComponent* CallFunc_GetFortAbilitySystemComponent_ReturnValue_1, class UFortPlayerController* CallFunc_GetFirstLocalFortPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue_8, class UFortPlayerStateAthena* K2Node_DynamicCast_AsFort_Player_State_Athena_1, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_IsValid_ReturnValue_9, uint8 CallFunc_GetSquadId_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue_3, int32 CallFunc_RemoveActiveEffectsWithTags_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_10, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue_1, bool K2Node_Event_bNewSlidingState, class UNPCStatusWidget_C* K2Node_DynamicCast_AsNPCStatus_Widget_1, bool K2Node_DynamicCast_bSuccess_5, const struct FGameplayEffectContextHandle& CallFunc_MakeSimpleFortEffectContext_ReturnValue, TSubclassOf<class UObject> K2Node_CustomEvent_Loaded, bool CallFunc_Array_Contains_ReturnValue, float K2Node_Event_Damage, const struct FGameplayTagContainer& K2Node_Event_DamageTags, const struct FVector& K2Node_Event_Momentum, const struct FHitResult& K2Node_Event_HitInfo, class UFortPawn* K2Node_Event_InstigatedBy, class UActor* K2Node_Event_DamageCauser, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext_1, const struct FHitResult& K2Node_Event_Hit, TArray<class UActor*>& Temp_object_Variable, float CallFunc_GetHealth_ReturnValue, float CallFunc_GetMaxHealth_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, class UFortAbilitySystemComponent* CallFunc_GetFortAbilitySystemComponent_ReturnValue_2, const struct FGameplayEffectSpecHandle& CallFunc_MakeOutgoingSpec_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FGameplayEffectSpecHandle& CallFunc_AssignTagSetByCallerMagnitude_ReturnValue, const struct FActiveGameplayEffectHandle& CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue, float CallFunc_GetMaxConvertResistance_ReturnValue, float K2Node_Event_ConvertDamageDone, const struct FGameplayTagContainer& K2Node_Event_SourceTags, const struct FGameplayEffectContextHandle& K2Node_Event_EffectContext, class UController* K2Node_Event_EffectInstigator, class UActor* K2Node_Event_EffectCauser, float CallFunc_GetMaxConvertResistance_ReturnValue, class UFortPawn* K2Node_DynamicCast_AsFort_Pawn_1, bool K2Node_DynamicCast_bSuccess_6, double CallFunc_Multiply_DoubleDouble_ReturnValue, class UFortSurfaceTrackingComponent* CallFunc_GetSurfaceTrackingComponent_ReturnValue, enum class EPhysicalSurface CallFunc_GetCurrentSurfaceType_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue_4, class UActorComponent* K2Node_CustomEvent_Component, bool K2Node_CustomEvent_bReset, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_IsValid_ReturnValue_11, class UUserWidget* CallFunc_GetUserWidgetObject_ReturnValue_2, TArray<enum class EObjectTypeQuery>& K2Node_MakeArray_Array, class UNPCStatusWidget_C* K2Node_DynamicCast_AsNPCStatus_Widget_2, bool K2Node_DynamicCast_bSuccess_7, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue_1, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue_1, const struct FHitResult& CallFunc_LineTraceSingleForObjects_OutHit, bool CallFunc_LineTraceSingleForObjects_ReturnValue, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, bool CallFunc_BreakHitResult_bBlockingHit, bool CallFunc_BreakHitResult_bInitialOverlap, float CallFunc_BreakHitResult_Time, float CallFunc_BreakHitResult_Distance, const struct FVector& CallFunc_BreakHitResult_Location, const struct FVector& CallFunc_BreakHitResult_ImpactPoint, const struct FVector& CallFunc_BreakHitResult_Normal, const struct FVector& CallFunc_BreakHitResult_ImpactNormal, class UPhysicalMaterial* CallFunc_BreakHitResult_PhysMat, class UActor* CallFunc_BreakHitResult_HitActor, class UPrimitiveComponent* CallFunc_BreakHitResult_HitComponent, class FName CallFunc_BreakHitResult_HitBoneName, class FName CallFunc_BreakHitResult_BoneName, int32 CallFunc_BreakHitResult_HitItem, int32 CallFunc_BreakHitResult_ElementIndex, int32 CallFunc_BreakHitResult_FaceIndex, const struct FVector& CallFunc_BreakHitResult_TraceStart, const struct FVector& CallFunc_BreakHitResult_TraceEnd, const struct FRotator& CallFunc_MakeRotFromZX_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, float CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, double CallFunc_Divide_DoubleDouble_B_ImplicitCast, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double K2Node_VariableSetRef_Target_ImplicitCast)
{
	static auto Func = Class->GetFunction("NPC_Pawn_Wildlife_Parent_C", "ExecuteUbergraph_NPC_Pawn_Wildlife_Parent");

	Params::UNPC_Pawn_Wildlife_Parent_C_ExecuteUbergraph_NPC_Pawn_Wildlife_Parent_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.K2Node_CustomEvent_AnimationLayer = K2Node_CustomEvent_AnimationLayer;
	Parms.CallFunc_IsValidSoftClassReference_ReturnValue = CallFunc_IsValidSoftClassReference_ReturnValue;
	Parms.Temp_wildcard_To_allow_the_previous_value_to_be_returned_Variable = Temp_wildcard_To_allow_the_previous_value_to_be_returned_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetUserWidgetObject_ReturnValue = CallFunc_GetUserWidgetObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsNPCStatus_Widget = K2Node_DynamicCast_AsNPCStatus_Widget;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_Event_AIPawn = K2Node_Event_AIPawn;
	Parms.K2Node_Event_InteractingPlayerPawn = K2Node_Event_InteractingPlayerPawn;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.K2Node_SwitchInteger_CmpSuccess = K2Node_SwitchInteger_CmpSuccess;
	Parms.K2Node_DynamicCast_AsFort_Pawn = K2Node_DynamicCast_AsFort_Pawn;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetConsoleVariableIntValue_ReturnValue = CallFunc_GetConsoleVariableIntValue_ReturnValue;
	Parms.CallFunc_InEditorOrPIE_ReturnValue = CallFunc_InEditorOrPIE_ReturnValue;
	Parms.Temp_wildcard_Avoid_creating_array_every_time_Variable = Temp_wildcard_Avoid_creating_array_every_time_Variable;
	Parms.CallFunc_GetGameUserSettings_ReturnValue = CallFunc_GetGameUserSettings_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_InstigatorPawn = K2Node_ComponentBoundEvent_InstigatorPawn;
	Parms.K2Node_ComponentBoundEvent_ConvertedPawn = K2Node_ComponentBoundEvent_ConvertedPawn;
	Parms.CallFunc_GetVisualEffectQuality_ReturnValue = CallFunc_GetVisualEffectQuality_ReturnValue;
	Parms.CallFunc_GetActorTeam_ReturnValue = CallFunc_GetActorTeam_ReturnValue;
	Parms.CallFunc_GetFortAbilitySystemComponent_ReturnValue = CallFunc_GetFortAbilitySystemComponent_ReturnValue;
	Parms.K2Node_ComponentBoundEvent_UnconvertedPawn = K2Node_ComponentBoundEvent_UnconvertedPawn;
	Parms.K2Node_ComponentBoundEvent_UnconvertReason = K2Node_ComponentBoundEvent_UnconvertReason;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.K2Node_Event_NPCAlertLevel = K2Node_Event_NPCAlertLevel;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_Event_Damage_2 = K2Node_Event_Damage_2;
	Parms.K2Node_Event_DamageTags_2 = K2Node_Event_DamageTags_2;
	Parms.K2Node_Event_Momentum_2 = K2Node_Event_Momentum_2;
	Parms.K2Node_Event_HitInfo_2 = K2Node_Event_HitInfo_2;
	Parms.K2Node_Event_InstigatedBy_2 = K2Node_Event_InstigatedBy_2;
	Parms.K2Node_Event_DamageCauser_2 = K2Node_Event_DamageCauser_2;
	Parms.K2Node_Event_EffectContext_3 = K2Node_Event_EffectContext_3;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;
	Parms.K2Node_Event_Success_ = K2Node_Event_Success_;
	Parms.K2Node_Event_Leader = K2Node_Event_Leader;
	Parms.K2Node_Event_UnconvertReason = K2Node_Event_UnconvertReason;
	Parms.CallFunc_GetConsoleVariableIntValue_ReturnValue_1 = CallFunc_GetConsoleVariableIntValue_ReturnValue_1;
	Parms.K2Node_ComponentBoundEvent_Results = K2Node_ComponentBoundEvent_Results;
	Parms.K2Node_ComponentBoundEvent_Context = K2Node_ComponentBoundEvent_Context;
	Parms.CallFunc_EqualEqual_IntInt_ReturnValue = CallFunc_EqualEqual_IntInt_ReturnValue;
	Parms.K2Node_Event_bControlled = K2Node_Event_bControlled;
	Parms.CallFunc_GetContext_ReturnValue = CallFunc_GetContext_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_NPC_CanBeInteractedWith_CanInteract = CallFunc_NPC_CanBeInteractedWith_CanInteract;
	Parms.CallFunc_CanBeInteractedWithWhenTamed_bCanInteract = CallFunc_CanBeInteractedWithWhenTamed_bCanInteract;
	Parms.CallFunc_NPC_UpdateInteract_EnabledInteract = CallFunc_NPC_UpdateInteract_EnabledInteract;
	Parms.K2Node_Event_NewBudgetValue = K2Node_Event_NewBudgetValue;
	Parms.CallFunc_LessEqual_IntInt_ReturnValue = CallFunc_LessEqual_IntInt_ReturnValue;
	Parms.CallFunc_IsDead_ReturnValue = CallFunc_IsDead_ReturnValue;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.K2Node_SwitchInteger_CmpSuccess_1 = K2Node_SwitchInteger_CmpSuccess_1;
	Parms.K2Node_Event_Damage_1 = K2Node_Event_Damage_1;
	Parms.K2Node_Event_DamageTags_1 = K2Node_Event_DamageTags_1;
	Parms.K2Node_Event_Momentum_1 = K2Node_Event_Momentum_1;
	Parms.K2Node_Event_HitInfo_1 = K2Node_Event_HitInfo_1;
	Parms.K2Node_Event_InstigatedBy_1 = K2Node_Event_InstigatedBy_1;
	Parms.K2Node_Event_DamageCauser_1 = K2Node_Event_DamageCauser_1;
	Parms.K2Node_Event_EffectContext_2 = K2Node_Event_EffectContext_2;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_GetSubGame_ReturnValue = CallFunc_GetSubGame_ReturnValue;
	Parms.CallFunc_GetConsoleVariableIntValue_ReturnValue_2 = CallFunc_GetConsoleVariableIntValue_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_GetSubGame_ReturnValue_1 = CallFunc_GetSubGame_ReturnValue_1;
	Parms.CallFunc_InEditorOrPIE_ReturnValue_1 = CallFunc_InEditorOrPIE_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_1 = CallFunc_EqualEqual_ByteByte_ReturnValue_1;
	Parms.CallFunc_GetConverterPawn_ReturnValue = CallFunc_GetConverterPawn_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.CallFunc_GetGameUserSettings_ReturnValue_1 = CallFunc_GetGameUserSettings_ReturnValue_1;
	Parms.CallFunc_GetVisualEffectQuality_ReturnValue_1 = CallFunc_GetVisualEffectQuality_ReturnValue_1;
	Parms.CallFunc_GetSubGame_ReturnValue_2 = CallFunc_GetSubGame_ReturnValue_2;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_2 = CallFunc_EqualEqual_ByteByte_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_GetConverterPawn_ReturnValue_1 = CallFunc_GetConverterPawn_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_CustomEvent_FocusedPawn = K2Node_CustomEvent_FocusedPawn;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.CallFunc_GetComponentByClass_ReturnValue = CallFunc_GetComponentByClass_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_GetConverterPawn_ReturnValue_2 = CallFunc_GetConverterPawn_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.K2Node_DynamicCast_AsFort_Player_State_Athena = K2Node_DynamicCast_AsFort_Player_State_Athena;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetSquadId_ReturnValue = CallFunc_GetSquadId_ReturnValue;
	Parms.Temp_class_Variable = Temp_class_Variable;
	Parms.K2Node_ClassDynamicCast_AsAnim_Instance = K2Node_ClassDynamicCast_AsAnim_Instance;
	Parms.K2Node_ClassDynamicCast_bSuccess = K2Node_ClassDynamicCast_bSuccess;
	Parms.CallFunc_RemoveActiveGameplayEffect_ReturnValue = CallFunc_RemoveActiveGameplayEffect_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue_1 = CallFunc_HasAuthority_ReturnValue_1;
	Parms.CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue = CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue;
	Parms.Temp_real_Variable = Temp_real_Variable;
	Parms.CallFunc_IsDedicatedServer_ReturnValue_1 = CallFunc_IsDedicatedServer_ReturnValue_1;
	Parms.CallFunc_GetFortAbilitySystemComponent_ReturnValue_1 = CallFunc_GetFortAbilitySystemComponent_ReturnValue_1;
	Parms.CallFunc_GetFirstLocalFortPlayerController_ReturnValue = CallFunc_GetFirstLocalFortPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.K2Node_DynamicCast_AsFort_Player_State_Athena_1 = K2Node_DynamicCast_AsFort_Player_State_Athena_1;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;
	Parms.CallFunc_GetSquadId_ReturnValue_1 = CallFunc_GetSquadId_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_3 = CallFunc_EqualEqual_ByteByte_ReturnValue_3;
	Parms.CallFunc_RemoveActiveEffectsWithTags_ReturnValue = CallFunc_RemoveActiveEffectsWithTags_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_1 = CallFunc_BP_ApplyGameplayEffectToSelf_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_10 = CallFunc_IsValid_ReturnValue_10;
	Parms.CallFunc_GetUserWidgetObject_ReturnValue_1 = CallFunc_GetUserWidgetObject_ReturnValue_1;
	Parms.K2Node_Event_bNewSlidingState = K2Node_Event_bNewSlidingState;
	Parms.K2Node_DynamicCast_AsNPCStatus_Widget_1 = K2Node_DynamicCast_AsNPCStatus_Widget_1;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_MakeSimpleFortEffectContext_ReturnValue = CallFunc_MakeSimpleFortEffectContext_ReturnValue;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;
	Parms.K2Node_Event_Damage = K2Node_Event_Damage;
	Parms.K2Node_Event_DamageTags = K2Node_Event_DamageTags;
	Parms.K2Node_Event_Momentum = K2Node_Event_Momentum;
	Parms.K2Node_Event_HitInfo = K2Node_Event_HitInfo;
	Parms.K2Node_Event_InstigatedBy = K2Node_Event_InstigatedBy;
	Parms.K2Node_Event_DamageCauser = K2Node_Event_DamageCauser;
	Parms.K2Node_Event_EffectContext_1 = K2Node_Event_EffectContext_1;
	Parms.K2Node_Event_Hit = K2Node_Event_Hit;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.CallFunc_GetHealth_ReturnValue = CallFunc_GetHealth_ReturnValue;
	Parms.CallFunc_GetMaxHealth_ReturnValue = CallFunc_GetMaxHealth_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetFortAbilitySystemComponent_ReturnValue_2 = CallFunc_GetFortAbilitySystemComponent_ReturnValue_2;
	Parms.CallFunc_MakeOutgoingSpec_ReturnValue = CallFunc_MakeOutgoingSpec_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_AssignTagSetByCallerMagnitude_ReturnValue = CallFunc_AssignTagSetByCallerMagnitude_ReturnValue;
	Parms.CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue = CallFunc_BP_ApplyGameplayEffectSpecToSelf_ReturnValue;
	Parms.CallFunc_GetMaxConvertResistance_ReturnValue = CallFunc_GetMaxConvertResistance_ReturnValue;
	Parms.K2Node_Event_ConvertDamageDone = K2Node_Event_ConvertDamageDone;
	Parms.K2Node_Event_SourceTags = K2Node_Event_SourceTags;
	Parms.K2Node_Event_EffectContext = K2Node_Event_EffectContext;
	Parms.K2Node_Event_EffectInstigator = K2Node_Event_EffectInstigator;
	Parms.K2Node_Event_EffectCauser = K2Node_Event_EffectCauser;
	Parms.CallFunc_GetMaxConvertResistance_ReturnValue = CallFunc_GetMaxConvertResistance_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Pawn_1 = K2Node_DynamicCast_AsFort_Pawn_1;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetSurfaceTrackingComponent_ReturnValue = CallFunc_GetSurfaceTrackingComponent_ReturnValue;
	Parms.CallFunc_GetCurrentSurfaceType_ReturnValue = CallFunc_GetCurrentSurfaceType_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue_4 = CallFunc_EqualEqual_ByteByte_ReturnValue_4;
	Parms.K2Node_CustomEvent_Component = K2Node_CustomEvent_Component;
	Parms.K2Node_CustomEvent_bReset = K2Node_CustomEvent_bReset;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_IsValid_ReturnValue_11 = CallFunc_IsValid_ReturnValue_11;
	Parms.CallFunc_GetUserWidgetObject_ReturnValue_2 = CallFunc_GetUserWidgetObject_ReturnValue_2;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_DynamicCast_AsNPCStatus_Widget_2 = K2Node_DynamicCast_AsNPCStatus_Widget_2;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue_1 = CallFunc_K2_GetActorLocation_ReturnValue_1;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue_1 = CallFunc_Subtract_VectorVector_ReturnValue_1;
	Parms.CallFunc_LineTraceSingleForObjects_OutHit = CallFunc_LineTraceSingleForObjects_OutHit;
	Parms.CallFunc_LineTraceSingleForObjects_ReturnValue = CallFunc_LineTraceSingleForObjects_ReturnValue;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_BreakHitResult_bBlockingHit = CallFunc_BreakHitResult_bBlockingHit;
	Parms.CallFunc_BreakHitResult_bInitialOverlap = CallFunc_BreakHitResult_bInitialOverlap;
	Parms.CallFunc_BreakHitResult_Time = CallFunc_BreakHitResult_Time;
	Parms.CallFunc_BreakHitResult_Distance = CallFunc_BreakHitResult_Distance;
	Parms.CallFunc_BreakHitResult_Location = CallFunc_BreakHitResult_Location;
	Parms.CallFunc_BreakHitResult_ImpactPoint = CallFunc_BreakHitResult_ImpactPoint;
	Parms.CallFunc_BreakHitResult_Normal = CallFunc_BreakHitResult_Normal;
	Parms.CallFunc_BreakHitResult_ImpactNormal = CallFunc_BreakHitResult_ImpactNormal;
	Parms.CallFunc_BreakHitResult_PhysMat = CallFunc_BreakHitResult_PhysMat;
	Parms.CallFunc_BreakHitResult_HitActor = CallFunc_BreakHitResult_HitActor;
	Parms.CallFunc_BreakHitResult_HitComponent = CallFunc_BreakHitResult_HitComponent;
	Parms.CallFunc_BreakHitResult_HitBoneName = CallFunc_BreakHitResult_HitBoneName;
	Parms.CallFunc_BreakHitResult_BoneName = CallFunc_BreakHitResult_BoneName;
	Parms.CallFunc_BreakHitResult_HitItem = CallFunc_BreakHitResult_HitItem;
	Parms.CallFunc_BreakHitResult_ElementIndex = CallFunc_BreakHitResult_ElementIndex;
	Parms.CallFunc_BreakHitResult_FaceIndex = CallFunc_BreakHitResult_FaceIndex;
	Parms.CallFunc_BreakHitResult_TraceStart = CallFunc_BreakHitResult_TraceStart;
	Parms.CallFunc_BreakHitResult_TraceEnd = CallFunc_BreakHitResult_TraceEnd;
	Parms.CallFunc_MakeRotFromZX_ReturnValue = CallFunc_MakeRotFromZX_ReturnValue;
	Parms.CallFunc_K2_SetWorldRotation_SweepHitResult = CallFunc_K2_SetWorldRotation_SweepHitResult;
	Parms.CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast = CallFunc_AssignTagSetByCallerMagnitude_Magnitude_ImplicitCast;
	Parms.CallFunc_Divide_DoubleDouble_A_ImplicitCast = CallFunc_Divide_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_Divide_DoubleDouble_B_ImplicitCast = CallFunc_Divide_DoubleDouble_B_ImplicitCast;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.K2Node_VariableSetRef_Target_ImplicitCast = K2Node_VariableSetRef_Target_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.OnModifiedDamageReceived__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UNPC_Pawn_Wildlife_Parent_C::OnModifiedDamageReceived__DelegateSignature()
{
	static auto Func = Class->GetFunction("NPC_Pawn_Wildlife_Parent_C", "OnModifiedDamageReceived__DelegateSignature");

	Params::UNPC_Pawn_Wildlife_Parent_C_OnModifiedDamageReceived__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.ConvertedDispatcher__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Converted                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPawn*                   InstigatorPawn                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Wildlife_Parent_C::ConvertedDispatcher__DelegateSignature(bool Converted, class UFortPawn* InstigatorPawn)
{
	static auto Func = Class->GetFunction("NPC_Pawn_Wildlife_Parent_C", "ConvertedDispatcher__DelegateSignature");

	Params::UNPC_Pawn_Wildlife_Parent_C_ConvertedDispatcher__DelegateSignature_Params Parms;

	Parms.Converted = Converted;
	Parms.InstigatorPawn = InstigatorPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function NPC_Pawn_Wildlife_Parent.NPC_Pawn_Wildlife_Parent_C.OnPickupGrabbed_Destroyed__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNPC_Pawn_Wildlife_Parent_C* WildlifePawn                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActor*                      ActorGrabbed                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UNPC_Pawn_Wildlife_Parent_C::OnPickupGrabbed_Destroyed__DelegateSignature(class UNPC_Pawn_Wildlife_Parent_C* WildlifePawn, class UActor* ActorGrabbed)
{
	static auto Func = Class->GetFunction("NPC_Pawn_Wildlife_Parent_C", "OnPickupGrabbed_Destroyed__DelegateSignature");

	Params::UNPC_Pawn_Wildlife_Parent_C_OnPickupGrabbed_Destroyed__DelegateSignature_Params Parms;

	Parms.WildlifePawn = WildlifePawn;
	Parms.ActorGrabbed = ActorGrabbed;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
