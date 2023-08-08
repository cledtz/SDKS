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


// Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.GetAffiliationsToShowFor
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<enum class EFortTeamAffiliation>ReturnValue                                                      (Parm, OutParm, ReturnParm)
// TArray<enum class EFortTeamAffiliation>K2Node_MakeArray_Array                                           (ReferenceParm)

TArray<enum class EFortTeamAffiliation> UB_Athena_Zipline_Ascender_C::GetAffiliationsToShowFor(TArray<enum class EFortTeamAffiliation>& K2Node_MakeArray_Array)
{
	static auto Func = Class->GetFunction("B_Athena_Zipline_Ascender_C", "GetAffiliationsToShowFor");

	Params::UB_Athena_Zipline_Ascender_C_GetAffiliationsToShowFor_Params Parms;

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.ShouldShowSoundIndicator
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UFortPlayerController*       PlayerController                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortTeamAffiliation    CallFunc_GetTeamAffiliation_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UB_Athena_Zipline_Ascender_C::ShouldShowSoundIndicator(class UFortPlayerController* PlayerController, bool CallFunc_IsValid_ReturnValue, enum class EFortTeamAffiliation CallFunc_GetTeamAffiliation_ReturnValue, bool CallFunc_EqualEqual_ByteByte_ReturnValue)
{
	static auto Func = Class->GetFunction("B_Athena_Zipline_Ascender_C", "ShouldShowSoundIndicator");

	Params::UB_Athena_Zipline_Ascender_C_ShouldShowSoundIndicator_Params Parms;

	Parms.PlayerController = PlayerController;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetTeamAffiliation_ReturnValue = CallFunc_GetTeamAffiliation_ReturnValue;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.GetDynamicDestructionResourceType
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// enum class EDynamicDestructionResourceTypeReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class EDynamicDestructionResourceType UB_Athena_Zipline_Ascender_C::GetDynamicDestructionResourceType()
{
	static auto Func = Class->GetFunction("B_Athena_Zipline_Ascender_C", "GetDynamicDestructionResourceType");

	Params::UB_Athena_Zipline_Ascender_C_GetDynamicDestructionResourceType_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.GetDynamicDestructionStaticMeshComponents
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UStaticMeshComponent*>OutFullFXStaticMeshComponents                                    (Parm, OutParm, ContainsInstancedReference)
// TArray<class UStaticMeshComponent*>OutVisibilityOnlyStaticMeshComponents                            (Parm, OutParm, ContainsInstancedReference)
// TArray<class UStaticMeshComponent*>OutShadowProxyStaticMeshComponents                               (Parm, OutParm, ContainsInstancedReference)
// TArray<class UStaticMeshComponent*>K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)
// TArray<class UStaticMeshComponent*>K2Node_MakeArray_Array_1                                         (ReferenceParm, ContainsInstancedReference)

void UB_Athena_Zipline_Ascender_C::GetDynamicDestructionStaticMeshComponents(TArray<class UStaticMeshComponent*>* OutFullFXStaticMeshComponents, TArray<class UStaticMeshComponent*>* OutVisibilityOnlyStaticMeshComponents, TArray<class UStaticMeshComponent*>* OutShadowProxyStaticMeshComponents, TArray<class UStaticMeshComponent*>& K2Node_MakeArray_Array, TArray<class UStaticMeshComponent*>& K2Node_MakeArray_Array_1)
{
	static auto Func = Class->GetFunction("B_Athena_Zipline_Ascender_C", "GetDynamicDestructionStaticMeshComponents");

	Params::UB_Athena_Zipline_Ascender_C_GetDynamicDestructionStaticMeshComponents_Params Parms;

	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;

	UObject::ProcessEvent(Func, &Parms);

	if (OutFullFXStaticMeshComponents != nullptr)
		*OutFullFXStaticMeshComponents = Parms.OutFullFXStaticMeshComponents;

	if (OutVisibilityOnlyStaticMeshComponents != nullptr)
		*OutVisibilityOnlyStaticMeshComponents = Parms.OutVisibilityOnlyStaticMeshComponents;

	if (OutShadowProxyStaticMeshComponents != nullptr)
		*OutShadowProxyStaticMeshComponents = Parms.OutShadowProxyStaticMeshComponents;

}


// Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.ShouldUseDynamicDestructionNiagaraSystem
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UB_Athena_Zipline_Ascender_C::ShouldUseDynamicDestructionNiagaraSystem()
{
	static auto Func = Class->GetFunction("B_Athena_Zipline_Ascender_C", "ShouldUseDynamicDestructionNiagaraSystem");

	Params::UB_Athena_Zipline_Ascender_C_ShouldUseDynamicDestructionNiagaraSystem_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.ShouldUseDynamicDestructionMaterial
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UB_Athena_Zipline_Ascender_C::ShouldUseDynamicDestructionMaterial()
{
	static auto Func = Class->GetFunction("B_Athena_Zipline_Ascender_C", "ShouldUseDynamicDestructionMaterial");

	Params::UB_Athena_Zipline_Ascender_C_ShouldUseDynamicDestructionMaterial_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.OnRep_BeDestroy
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UB_Athena_Zipline_Ascender_C::OnRep_BeDestroy()
{
	static auto Func = Class->GetFunction("B_Athena_Zipline_Ascender_C", "OnRep_BeDestroy");

	Params::UB_Athena_Zipline_Ascender_C_OnRep_BeDestroy_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.BlueprintCanInteract
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UFortPawn*                   InteractingPawn                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EInteractionBeingAttemptedInteractionBeingAttempted                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class ETInteractionType       InteractionType                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       BlockInteractionTags                                             (Edit, BlueprintVisible)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class UGameplayTagAssetInterface>CallFunc_HasAnyMatchingGameplayTags_self_CastInput               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAnyMatchingGameplayTags_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class UGameplayTagAssetInterface>CallFunc_HasMatchingGameplayTag_self_CastInput                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasMatchingGameplayTag_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UB_Athena_Zipline_Ascender_C::BlueprintCanInteract(class UFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted, enum class ETInteractionType InteractionType, const struct FGameplayTagContainer& BlockInteractionTags, bool CallFunc_HasAuthority_ReturnValue, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, TScriptInterface<class UGameplayTagAssetInterface> CallFunc_HasAnyMatchingGameplayTags_self_CastInput, bool CallFunc_HasAnyMatchingGameplayTags_ReturnValue, TScriptInterface<class UGameplayTagAssetInterface> CallFunc_HasMatchingGameplayTag_self_CastInput, bool CallFunc_HasMatchingGameplayTag_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanAND_ReturnValue)
{
	static auto Func = Class->GetFunction("B_Athena_Zipline_Ascender_C", "BlueprintCanInteract");

	Params::UB_Athena_Zipline_Ascender_C_BlueprintCanInteract_Params Parms;

	Parms.InteractingPawn = InteractingPawn;
	Parms.InteractionBeingAttempted = InteractionBeingAttempted;
	Parms.InteractionType = InteractionType;
	Parms.BlockInteractionTags = BlockInteractionTags;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.CallFunc_HasAnyMatchingGameplayTags_self_CastInput = CallFunc_HasAnyMatchingGameplayTags_self_CastInput;
	Parms.CallFunc_HasAnyMatchingGameplayTags_ReturnValue = CallFunc_HasAnyMatchingGameplayTags_ReturnValue;
	Parms.CallFunc_HasMatchingGameplayTag_self_CastInput = CallFunc_HasMatchingGameplayTag_self_CastInput;
	Parms.CallFunc_HasMatchingGameplayTag_ReturnValue = CallFunc_HasMatchingGameplayTag_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.CanBeginZiplining
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UFortPlayerPawn*             InteractingPawn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         InteractComponent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_CanBeginZiplining_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDBNO_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerPawn*             CallFunc_GetDBNOHoistee_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanOR_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UB_Athena_Zipline_Ascender_C::CanBeginZiplining(class UFortPlayerPawn* InteractingPawn, class UPrimitiveComponent* InteractComponent, bool CallFunc_CanBeginZiplining_ReturnValue, bool CallFunc_IsDBNO_ReturnValue, class UFortPlayerPawn* CallFunc_GetDBNOHoistee_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue)
{
	static auto Func = Class->GetFunction("B_Athena_Zipline_Ascender_C", "CanBeginZiplining");

	Params::UB_Athena_Zipline_Ascender_C_CanBeginZiplining_Params Parms;

	Parms.InteractingPawn = InteractingPawn;
	Parms.InteractComponent = InteractComponent;
	Parms.CallFunc_CanBeginZiplining_ReturnValue = CallFunc_CanBeginZiplining_ReturnValue;
	Parms.CallFunc_IsDBNO_ReturnValue = CallFunc_IsDBNO_ReturnValue;
	Parms.CallFunc_GetDBNOHoistee_ReturnValue = CallFunc_GetDBNOHoistee_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_BooleanOR_ReturnValue = CallFunc_BooleanOR_ReturnValue;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.LocalOnFailedInteract
// (Event, Public, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UFortPlayerPawn*             InteractingPawn                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UB_Athena_Zipline_Ascender_C::LocalOnFailedInteract(class UFortPlayerPawn* InteractingPawn)
{
	static auto Func = Class->GetFunction("B_Athena_Zipline_Ascender_C", "LocalOnFailedInteract");

	Params::UB_Athena_Zipline_Ascender_C_LocalOnFailedInteract_Params Parms;

	Parms.InteractingPawn = InteractingPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.GetBoundsComponents
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UActor*                      SelfActor                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class USceneComponent*>     OutComponents                                                    (Parm, OutParm, ContainsInstancedReference)

void UB_Athena_Zipline_Ascender_C::GetBoundsComponents(class UActor* SelfActor, TArray<class USceneComponent*>* OutComponents)
{
	static auto Func = Class->GetFunction("B_Athena_Zipline_Ascender_C", "GetBoundsComponents");

	Params::UB_Athena_Zipline_Ascender_C_GetBoundsComponents_Params Parms;

	Parms.SelfActor = SelfActor;

	UObject::ProcessEvent(Func, &Parms);

	if (OutComponents != nullptr)
		*OutComponents = Parms.OutComponents;

}


// Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.ApplyStructureDamage
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UBuildingSMActor*            BuildingActor                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActor*                      DamageSource                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAbilitySystemComponent*     CallFunc_GetAbilitySystemComponent_ReturnValue                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<TSubclassOf<class UGameplayEffect>>K2Node_MakeArray_Array                                           (ReferenceParm)
// struct FVector                     CallFunc_K2_GetActorLocation_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_Athena_Zipline_Ascender_C::ApplyStructureDamage(class UBuildingSMActor* BuildingActor, class UActor* DamageSource, class UAbilitySystemComponent* CallFunc_GetAbilitySystemComponent_ReturnValue, TArray<TSubclassOf<class UGameplayEffect>>& K2Node_MakeArray_Array, const struct FVector& CallFunc_K2_GetActorLocation_ReturnValue)
{
	static auto Func = Class->GetFunction("B_Athena_Zipline_Ascender_C", "ApplyStructureDamage");

	Params::UB_Athena_Zipline_Ascender_C_ApplyStructureDamage_Params Parms;

	Parms.BuildingActor = BuildingActor;
	Parms.DamageSource = DamageSource;
	Parms.CallFunc_GetAbilitySystemComponent_ReturnValue = CallFunc_GetAbilitySystemComponent_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_K2_GetActorLocation_ReturnValue = CallFunc_K2_GetActorLocation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.AttachCapToEndOfSplineMesh
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  CallFunc_K2_SetWorldLocation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// double                             CallFunc_MakeVector_Z_ImplicitCast                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_Athena_Zipline_Ascender_C::AttachCapToEndOfSplineMesh(const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_1, const struct FHitResult& CallFunc_K2_SetWorldLocation_SweepHitResult, double CallFunc_MakeVector_Z_ImplicitCast)
{
	static auto Func = Class->GetFunction("B_Athena_Zipline_Ascender_C", "AttachCapToEndOfSplineMesh");

	Params::UB_Athena_Zipline_Ascender_C_AttachCapToEndOfSplineMesh_Params Parms;

	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_K2_SetWorldLocation_SweepHitResult = CallFunc_K2_SetWorldLocation_SweepHitResult;
	Parms.CallFunc_MakeVector_Z_ImplicitCast = CallFunc_MakeVector_Z_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.AttemptOverrideZiplineSocketOffset
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UFortPlayerPawn*             InteractingPawn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         InteractComponent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                     BaseSocketOffset                                                 (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     OutSocketOffset                                                  (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         CallFunc_GetHandleComponent_ReturnValue                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UB_Athena_Zipline_Ascender_C::AttemptOverrideZiplineSocketOffset(class UFortPlayerPawn* InteractingPawn, class UPrimitiveComponent* InteractComponent, struct FVector& BaseSocketOffset, struct FVector* OutSocketOffset, bool Temp_bool_Variable, class UPrimitiveComponent* CallFunc_GetHandleComponent_ReturnValue, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, const struct FVector& K2Node_Select_Default, const struct FVector& CallFunc_Add_VectorVector_ReturnValue)
{
	static auto Func = Class->GetFunction("B_Athena_Zipline_Ascender_C", "AttemptOverrideZiplineSocketOffset");

	Params::UB_Athena_Zipline_Ascender_C_AttemptOverrideZiplineSocketOffset_Params Parms;

	Parms.InteractingPawn = InteractingPawn;
	Parms.InteractComponent = InteractComponent;
	Parms.BaseSocketOffset = BaseSocketOffset;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_GetHandleComponent_ReturnValue = CallFunc_GetHandleComponent_ReturnValue;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (OutSocketOffset != nullptr)
		*OutSocketOffset = Parms.OutSocketOffset;

	return Parms.ReturnValue;

}


// Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.CalculateLaunchVelocity
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UActor*                      PlayerPawn                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     LaunchVelocity                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetActorForwardVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Multiply_VectorFloat_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_A_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MakeVector_Z_ImplicitCast                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_Athena_Zipline_Ascender_C::CalculateLaunchVelocity(class UActor* PlayerPawn, struct FVector* LaunchVelocity, const struct FVector& CallFunc_GetActorForwardVector_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, float CallFunc_GetValueAtLevel_ReturnValue_1, const struct FVector& CallFunc_Multiply_VectorFloat_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, double CallFunc_Multiply_DoubleDouble_A_ImplicitCast, double CallFunc_MakeVector_Z_ImplicitCast)
{
	static auto Func = Class->GetFunction("B_Athena_Zipline_Ascender_C", "CalculateLaunchVelocity");

	Params::UB_Athena_Zipline_Ascender_C_CalculateLaunchVelocity_Params Parms;

	Parms.PlayerPawn = PlayerPawn;
	Parms.CallFunc_GetActorForwardVector_ReturnValue = CallFunc_GetActorForwardVector_ReturnValue;
	Parms.CallFunc_GetValueAtLevel_ReturnValue = CallFunc_GetValueAtLevel_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetValueAtLevel_ReturnValue_1 = CallFunc_GetValueAtLevel_ReturnValue_1;
	Parms.CallFunc_Multiply_VectorFloat_ReturnValue = CallFunc_Multiply_VectorFloat_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_A_ImplicitCast = CallFunc_Multiply_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_MakeVector_Z_ImplicitCast = CallFunc_MakeVector_Z_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (LaunchVelocity != nullptr)
		*LaunchVelocity = Parms.LaunchVelocity;

}


// Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.SetCableTilingBySplineLength
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              CallFunc_GetSplineLength_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_FTrunc_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_A_ImplicitCast                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_Athena_Zipline_Ascender_C::SetCableTilingBySplineLength(float CallFunc_GetSplineLength_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, int32 CallFunc_FTrunc_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, double CallFunc_Divide_DoubleDouble_A_ImplicitCast, float CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast)
{
	static auto Func = Class->GetFunction("B_Athena_Zipline_Ascender_C", "SetCableTilingBySplineLength");

	Params::UB_Athena_Zipline_Ascender_C_SetCableTilingBySplineLength_Params Parms;

	Parms.CallFunc_GetSplineLength_ReturnValue = CallFunc_GetSplineLength_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_FTrunc_ReturnValue = CallFunc_FTrunc_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_A_ImplicitCast = CallFunc_Divide_DoubleDouble_A_ImplicitCast;
	Parms.CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast = CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.DeactivateCableWobble
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue_1                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_Athena_Zipline_Ascender_C::DeactivateCableWobble(bool CallFunc_IsDedicatedServer_ReturnValue, double CallFunc_GetGameTimeInSeconds_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_GetGameTimeInSeconds_ReturnValue_1, bool CallFunc_Greater_DoubleDouble_ReturnValue, float CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast)
{
	static auto Func = Class->GetFunction("B_Athena_Zipline_Ascender_C", "DeactivateCableWobble");

	Params::UB_Athena_Zipline_Ascender_C_DeactivateCableWobble_Params Parms;

	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue_1 = CallFunc_GetGameTimeInSeconds_ReturnValue_1;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast = CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.ActivateCableWobble
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast_1(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_Athena_Zipline_Ascender_C::ActivateCableWobble(bool CallFunc_IsDedicatedServer_ReturnValue, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_GetGameTimeInSeconds_ReturnValue, float CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast, float CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast_1)
{
	static auto Func = Class->GetFunction("B_Athena_Zipline_Ascender_C", "ActivateCableWobble");

	Params::UB_Athena_Zipline_Ascender_C_ActivateCableWobble_Params Parms;

	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast = CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast;
	Parms.CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast_1 = CallFunc_SetScalarParameterValueOnMaterials_ParameterValue_ImplicitCast_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.HotfixEnabled
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_GetValueAsBool_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_Athena_Zipline_Ascender_C::HotfixEnabled(bool CallFunc_GetValueAsBool_ReturnValue)
{
	static auto Func = Class->GetFunction("B_Athena_Zipline_Ascender_C", "HotfixEnabled");

	Params::UB_Athena_Zipline_Ascender_C_HotfixEnabled_Params Parms;

	Parms.CallFunc_GetValueAsBool_ReturnValue = CallFunc_GetValueAsBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.GetTopComponent
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UPrimitiveComponent*         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UPrimitiveComponent* UB_Athena_Zipline_Ascender_C::GetTopComponent()
{
	static auto Func = Class->GetFunction("B_Athena_Zipline_Ascender_C", "GetTopComponent");

	Params::UB_Athena_Zipline_Ascender_C_GetTopComponent_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.GetHandleComponent
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UPrimitiveComponent*         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)

class UPrimitiveComponent* UB_Athena_Zipline_Ascender_C::GetHandleComponent()
{
	static auto Func = Class->GetFunction("B_Athena_Zipline_Ascender_C", "GetHandleComponent");

	Params::UB_Athena_Zipline_Ascender_C_GetHandleComponent_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.GetInteractComponentOverride
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UFortPlayerPawn*             InteractingPawn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         InteractComponent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Vector_DistanceSquared_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Square_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_Select_Default                                            (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_A_ImplicitCast                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

class UPrimitiveComponent* UB_Athena_Zipline_Ascender_C::GetInteractComponentOverride(class UFortPlayerPawn* InteractingPawn, class UPrimitiveComponent* InteractComponent, bool CallFunc_IsValid_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, bool Temp_bool_Variable, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, double CallFunc_Add_DoubleDouble_ReturnValue, double CallFunc_Vector_DistanceSquared_ReturnValue, double CallFunc_Square_ReturnValue, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, class UPrimitiveComponent* K2Node_Select_Default, double CallFunc_Add_DoubleDouble_A_ImplicitCast)
{
	static auto Func = Class->GetFunction("B_Athena_Zipline_Ascender_C", "GetInteractComponentOverride");

	Params::UB_Athena_Zipline_Ascender_C_GetInteractComponentOverride_Params Parms;

	Parms.InteractingPawn = InteractingPawn;
	Parms.InteractComponent = InteractComponent;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_1 = CallFunc_K2_GetComponentLocation_ReturnValue_1;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_Vector_DistanceSquared_ReturnValue = CallFunc_Vector_DistanceSquared_ReturnValue;
	Parms.CallFunc_Square_ReturnValue = CallFunc_Square_ReturnValue;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_Add_DoubleDouble_A_ImplicitCast = CallFunc_Add_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.PawnIsInHandleRange
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UFortPawn*                   Pawn                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UActor*>              CallFunc_GetOverlappingActors_OverlappingActors                  (ReferenceParm)
// bool                               CallFunc_Array_Contains_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UB_Athena_Zipline_Ascender_C::PawnIsInHandleRange(class UFortPawn* Pawn, TArray<class UActor*>& CallFunc_GetOverlappingActors_OverlappingActors, bool CallFunc_Array_Contains_ReturnValue)
{
	static auto Func = Class->GetFunction("B_Athena_Zipline_Ascender_C", "PawnIsInHandleRange");

	Params::UB_Athena_Zipline_Ascender_C_PawnIsInHandleRange_Params Parms;

	Parms.Pawn = Pawn;
	Parms.CallFunc_GetOverlappingActors_OverlappingActors = CallFunc_GetOverlappingActors_OverlappingActors;
	Parms.CallFunc_Array_Contains_ReturnValue = CallFunc_Array_Contains_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.BlueprintGetInteractionString
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, Const)
// Parameters:
// class UFortPawn*                   InteractingPawn                                                  (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EInteractionBeingAttemptedInteractionBeingAttempted                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        ReturnValue                                                      (Parm, OutParm, ReturnParm)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Temp_text_Variable                                               ()
// class FText                        Temp_text_Variable_1                                             ()
// bool                               CallFunc_EqualEqual_ObjectObject_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        K2Node_Select_Default                                            ()

class FText UB_Athena_Zipline_Ascender_C::BlueprintGetInteractionString(class UFortPawn* InteractingPawn, enum class EInteractionBeingAttempted InteractionBeingAttempted, bool Temp_bool_Variable, class FText Temp_text_Variable, class FText Temp_text_Variable_1, bool CallFunc_EqualEqual_ObjectObject_ReturnValue, class FText K2Node_Select_Default)
{
	static auto Func = Class->GetFunction("B_Athena_Zipline_Ascender_C", "BlueprintGetInteractionString");

	Params::UB_Athena_Zipline_Ascender_C_BlueprintGetInteractionString_Params Parms;

	Parms.InteractingPawn = InteractingPawn;
	Parms.InteractionBeingAttempted = InteractionBeingAttempted;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_text_Variable = Temp_text_Variable;
	Parms.Temp_text_Variable_1 = Temp_text_Variable_1;
	Parms.CallFunc_EqualEqual_ObjectObject_ReturnValue = CallFunc_EqualEqual_ObjectObject_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.GetLastSplinePointIndex
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetNumberOfSplinePoints_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Subtract_IntInt_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int32 UB_Athena_Zipline_Ascender_C::GetLastSplinePointIndex(int32 CallFunc_GetNumberOfSplinePoints_ReturnValue, int32 CallFunc_Subtract_IntInt_ReturnValue)
{
	static auto Func = Class->GetFunction("B_Athena_Zipline_Ascender_C", "GetLastSplinePointIndex");

	Params::UB_Athena_Zipline_Ascender_C_GetLastSplinePointIndex_Params Parms;

	Parms.CallFunc_GetNumberOfSplinePoints_ReturnValue = CallFunc_GetNumberOfSplinePoints_ReturnValue;
	Parms.CallFunc_Subtract_IntInt_ReturnValue = CallFunc_Subtract_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.UserConstructionScript
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_Athena_Zipline_Ascender_C::UserConstructionScript(bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static auto Func = Class->GetFunction("B_Athena_Zipline_Ascender_C", "UserConstructionScript");

	Params::UB_Athena_Zipline_Ascender_C_UserConstructionScript_Params Parms;

	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.OnReady_93837FC44A18F6AE57D3478CC43A98AB
// (HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortGameStateAthena*        GameState                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortPlaylist*               Playlist                                                         (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       PlaylistContextTags                                              (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)

void UB_Athena_Zipline_Ascender_C::OnReady_93837FC44A18F6AE57D3478CC43A98AB(class UFortGameStateAthena* GameState, class UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags)
{
	static auto Func = Class->GetFunction("B_Athena_Zipline_Ascender_C", "OnReady_93837FC44A18F6AE57D3478CC43A98AB");

	Params::UB_Athena_Zipline_Ascender_C_OnReady_93837FC44A18F6AE57D3478CC43A98AB_Params Parms;

	Parms.GameState = GameState;
	Parms.Playlist = Playlist;
	Parms.PlaylistContextTags = PlaylistContextTags;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.BP_HandlePlayerStartedUsingHandle
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortPlayerPawn*             Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UB_Athena_Zipline_Ascender_C::BP_HandlePlayerStartedUsingHandle(class UFortPlayerPawn* Player)
{
	static auto Func = Class->GetFunction("B_Athena_Zipline_Ascender_C", "BP_HandlePlayerStartedUsingHandle");

	Params::UB_Athena_Zipline_Ascender_C_BP_HandlePlayerStartedUsingHandle_Params Parms;

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.BP_HandlePlayerStoppedUsingHandle
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortPlayerPawn*             Player                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UB_Athena_Zipline_Ascender_C::BP_HandlePlayerStoppedUsingHandle(class UFortPlayerPawn* Player)
{
	static auto Func = Class->GetFunction("B_Athena_Zipline_Ascender_C", "BP_HandlePlayerStoppedUsingHandle");

	Params::UB_Athena_Zipline_Ascender_C_BP_HandlePlayerStoppedUsingHandle_Params Parms;

	Parms.Player = Player;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.BP_HandleStartedLoweringCable
// (Event, Public, BlueprintEvent)
// Parameters:

void UB_Athena_Zipline_Ascender_C::BP_HandleStartedLoweringCable()
{
	static auto Func = Class->GetFunction("B_Athena_Zipline_Ascender_C", "BP_HandleStartedLoweringCable");

	Params::UB_Athena_Zipline_Ascender_C_BP_HandleStartedLoweringCable_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.BP_HandleStartedLoweringHandle
// (Event, Public, BlueprintEvent)
// Parameters:

void UB_Athena_Zipline_Ascender_C::BP_HandleStartedLoweringHandle()
{
	static auto Func = Class->GetFunction("B_Athena_Zipline_Ascender_C", "BP_HandleStartedLoweringHandle");

	Params::UB_Athena_Zipline_Ascender_C_BP_HandleStartedLoweringHandle_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.BP_HandleStoppedLoweringCable
// (Event, Public, BlueprintEvent)
// Parameters:

void UB_Athena_Zipline_Ascender_C::BP_HandleStoppedLoweringCable()
{
	static auto Func = Class->GetFunction("B_Athena_Zipline_Ascender_C", "BP_HandleStoppedLoweringCable");

	Params::UB_Athena_Zipline_Ascender_C_BP_HandleStoppedLoweringCable_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.BP_HandleStoppedLoweringHandle
// (Event, Public, BlueprintEvent)
// Parameters:

void UB_Athena_Zipline_Ascender_C::BP_HandleStoppedLoweringHandle()
{
	static auto Func = Class->GetFunction("B_Athena_Zipline_Ascender_C", "BP_HandleStoppedLoweringHandle");

	Params::UB_Athena_Zipline_Ascender_C_BP_HandleStoppedLoweringHandle_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.OnZipliningStarted
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortPlayerPawn*             InteractingPawn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         InteractComponent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UB_Athena_Zipline_Ascender_C::OnZipliningStarted(class UFortPlayerPawn* InteractingPawn, class UPrimitiveComponent* InteractComponent)
{
	static auto Func = Class->GetFunction("B_Athena_Zipline_Ascender_C", "OnZipliningStarted");

	Params::UB_Athena_Zipline_Ascender_C_OnZipliningStarted_Params Parms;

	Parms.InteractingPawn = InteractingPawn;
	Parms.InteractComponent = InteractComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.PlayerDescendingStarted
// (Net, NetMulticast, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UFortPlayerPawn*             Sliding_Player                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UB_Athena_Zipline_Ascender_C::PlayerDescendingStarted(class UFortPlayerPawn* Sliding_Player)
{
	static auto Func = Class->GetFunction("B_Athena_Zipline_Ascender_C", "PlayerDescendingStarted");

	Params::UB_Athena_Zipline_Ascender_C_PlayerDescendingStarted_Params Parms;

	Parms.Sliding_Player = Sliding_Player;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void UB_Athena_Zipline_Ascender_C::ReceiveBeginPlay()
{
	static auto Func = Class->GetFunction("B_Athena_Zipline_Ascender_C", "ReceiveBeginPlay");

	Params::UB_Athena_Zipline_Ascender_C_ReceiveBeginPlay_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.BP_HandleUpdatedLoweringCable
// (Event, Public, BlueprintEvent)
// Parameters:

void UB_Athena_Zipline_Ascender_C::BP_HandleUpdatedLoweringCable()
{
	static auto Func = Class->GetFunction("B_Athena_Zipline_Ascender_C", "BP_HandleUpdatedLoweringCable");

	Params::UB_Athena_Zipline_Ascender_C_BP_HandleUpdatedLoweringCable_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.OnZipliningStopped
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortPlayerPawn*             InteractingPawn                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         InteractComponent                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// float                              ZiplineUsageDuration                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_Athena_Zipline_Ascender_C::OnZipliningStopped(class UFortPlayerPawn* InteractingPawn, class UPrimitiveComponent* InteractComponent, float ZiplineUsageDuration)
{
	static auto Func = Class->GetFunction("B_Athena_Zipline_Ascender_C", "OnZipliningStopped");

	Params::UB_Athena_Zipline_Ascender_C_OnZipliningStopped_Params Parms;

	Parms.InteractingPawn = InteractingPawn;
	Parms.InteractComponent = InteractComponent;
	Parms.ZiplineUsageDuration = ZiplineUsageDuration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.ShouldPlayWhooshTimer
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UB_Athena_Zipline_Ascender_C::ShouldPlayWhooshTimer()
{
	static auto Func = Class->GetFunction("B_Athena_Zipline_Ascender_C", "ShouldPlayWhooshTimer");

	Params::UB_Athena_Zipline_Ascender_C_ShouldPlayWhooshTimer_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.OnAscenderSetupComplete_Event
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UB_Athena_Zipline_Ascender_C::OnAscenderSetupComplete_Event()
{
	static auto Func = Class->GetFunction("B_Athena_Zipline_Ascender_C", "OnAscenderSetupComplete_Event");

	Params::UB_Athena_Zipline_Ascender_C_OnAscenderSetupComplete_Event_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.HandleLinkedActorDestroyed
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActor*                      DamageCauser                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UB_Athena_Zipline_Ascender_C::HandleLinkedActorDestroyed(class UActor* DamageCauser)
{
	static auto Func = Class->GetFunction("B_Athena_Zipline_Ascender_C", "HandleLinkedActorDestroyed");

	Params::UB_Athena_Zipline_Ascender_C_HandleLinkedActorDestroyed_Params Parms;

	Parms.DamageCauser = DamageCauser;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Athena_Zipline_Ascender.B_Athena_Zipline_Ascender_C.ExecuteUbergraph_B_Athena_Zipline_Ascender
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerPawn*             K2Node_Event_Player                                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerPawn*             CallFunc_GetPawnUsingHandle_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerPawn*             K2Node_Event_Player_1                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerPawn*             K2Node_Event_InteractingPawn_1                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_Event_InteractComponent_1                                 (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerPawn*             CallFunc_GetPawnUsingHandle_ReturnValue_1                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerPawn*             K2Node_CustomEvent_Sliding_Player                                (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue_1                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_1                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue_2                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerPawn*             K2Node_Event_InteractingPawn                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UPrimitiveComponent*         K2Node_Event_InteractComponent                                   (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_ZiplineUsageDuration                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerPawn*             CallFunc_GetPawnUsingHandle_ReturnValue_2                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortAsyncAction_CurrentPlaylistReady*CallFunc_PlaylistDataReadyAsync_ReturnValue                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_NotEqual_ObjectObject_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGameStateAthena*        Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortPlaylist*               Temp_object_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       Temp_struct_Variable                                             ()
// class UFortGameStateAthena*        K2Node_CustomEvent_GameState                                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortPlaylist*               K2Node_CustomEvent_Playlist                                      (ConstParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTagContainer       K2Node_CustomEvent_PlaylistContextTags                           (ConstParm)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerPawn*             CallFunc_GetPawnUsingHandle_ReturnValue_3                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue_3                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimer_ReturnValue                                 (NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_K2_GetComponentLocation_ReturnValue_2                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Add_VectorVector_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FGameplayCueParameters      CallFunc_MakeGameplayCueParameters_ReturnValue                   (ContainsInstancedReference)
// class UActor*                      K2Node_CustomEvent_DamageCauser                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetValueAsBool_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_Athena_Zipline_Ascender_C::ExecuteUbergraph_B_Athena_Zipline_Ascender(int32 EntryPoint, class UFortPlayerPawn* K2Node_Event_Player, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue, class UFortPlayerPawn* CallFunc_GetPawnUsingHandle_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UFortPlayerPawn* K2Node_Event_Player_1, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class UFortPlayerPawn* K2Node_Event_InteractingPawn_1, class UPrimitiveComponent* K2Node_Event_InteractComponent_1, class UFortPlayerPawn* CallFunc_GetPawnUsingHandle_ReturnValue_1, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class UFortPlayerPawn* K2Node_CustomEvent_Sliding_Player, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_1, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_3, class UFortPlayerPawn* K2Node_Event_InteractingPawn, class UPrimitiveComponent* K2Node_Event_InteractComponent, float K2Node_Event_ZiplineUsageDuration, class UFortPlayerPawn* CallFunc_GetPawnUsingHandle_ReturnValue_2, class UFortAsyncAction_CurrentPlaylistReady* CallFunc_PlaylistDataReadyAsync_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_4, class UFortGameStateAthena* Temp_object_Variable, class UFortPlaylist* Temp_object_Variable_1, const struct FGameplayTagContainer& Temp_struct_Variable, class UFortGameStateAthena* K2Node_CustomEvent_GameState, class UFortPlaylist* K2Node_CustomEvent_Playlist, const struct FGameplayTagContainer& K2Node_CustomEvent_PlaylistContextTags, bool CallFunc_IsValid_ReturnValue_5, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, class UFortPlayerPawn* CallFunc_GetPawnUsingHandle_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_6, bool CallFunc_IsValid_ReturnValue_7, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_3, bool CallFunc_IsValid_ReturnValue_8, const struct FTimerHandle& CallFunc_K2_SetTimer_ReturnValue, const struct FVector& CallFunc_K2_GetComponentLocation_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_9, const struct FVector& CallFunc_Add_VectorVector_ReturnValue, const struct FGameplayCueParameters& CallFunc_MakeGameplayCueParameters_ReturnValue, class UActor* K2Node_CustomEvent_DamageCauser, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, bool CallFunc_GetValueAsBool_ReturnValue)
{
	static auto Func = Class->GetFunction("B_Athena_Zipline_Ascender_C", "ExecuteUbergraph_B_Athena_Zipline_Ascender");

	Params::UB_Athena_Zipline_Ascender_C_ExecuteUbergraph_B_Athena_Zipline_Ascender_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_Player = K2Node_Event_Player;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue = CallFunc_K2_GetComponentLocation_ReturnValue;
	Parms.CallFunc_GetPawnUsingHandle_ReturnValue = CallFunc_GetPawnUsingHandle_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_Event_Player_1 = K2Node_Event_Player_1;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;
	Parms.K2Node_Event_InteractingPawn_1 = K2Node_Event_InteractingPawn_1;
	Parms.K2Node_Event_InteractComponent_1 = K2Node_Event_InteractComponent_1;
	Parms.CallFunc_GetPawnUsingHandle_ReturnValue_1 = CallFunc_GetPawnUsingHandle_ReturnValue_1;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue = CallFunc_NotEqual_ObjectObject_ReturnValue;
	Parms.K2Node_CustomEvent_Sliding_Player = K2Node_CustomEvent_Sliding_Player;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue_1 = CallFunc_SpawnSoundAttached_ReturnValue_1;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_1 = CallFunc_K2_GetComponentLocation_ReturnValue_1;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue_2 = CallFunc_SpawnSoundAttached_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.K2Node_Event_InteractingPawn = K2Node_Event_InteractingPawn;
	Parms.K2Node_Event_InteractComponent = K2Node_Event_InteractComponent;
	Parms.K2Node_Event_ZiplineUsageDuration = K2Node_Event_ZiplineUsageDuration;
	Parms.CallFunc_GetPawnUsingHandle_ReturnValue_2 = CallFunc_GetPawnUsingHandle_ReturnValue_2;
	Parms.CallFunc_PlaylistDataReadyAsync_ReturnValue = CallFunc_PlaylistDataReadyAsync_ReturnValue;
	Parms.CallFunc_NotEqual_ObjectObject_ReturnValue_1 = CallFunc_NotEqual_ObjectObject_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.K2Node_CustomEvent_GameState = K2Node_CustomEvent_GameState;
	Parms.K2Node_CustomEvent_Playlist = K2Node_CustomEvent_Playlist;
	Parms.K2Node_CustomEvent_PlaylistContextTags = K2Node_CustomEvent_PlaylistContextTags;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_GetPawnUsingHandle_ReturnValue_3 = CallFunc_GetPawnUsingHandle_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue_3 = CallFunc_SpawnSoundAttached_ReturnValue_3;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.CallFunc_K2_SetTimer_ReturnValue = CallFunc_K2_SetTimer_ReturnValue;
	Parms.CallFunc_K2_GetComponentLocation_ReturnValue_2 = CallFunc_K2_GetComponentLocation_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;
	Parms.CallFunc_Add_VectorVector_ReturnValue = CallFunc_Add_VectorVector_ReturnValue;
	Parms.CallFunc_MakeGameplayCueParameters_ReturnValue = CallFunc_MakeGameplayCueParameters_ReturnValue;
	Parms.K2Node_CustomEvent_DamageCauser = K2Node_CustomEvent_DamageCauser;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.CallFunc_GetValueAsBool_ReturnValue = CallFunc_GetValueAsBool_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
