#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_Ranged_Generic.B_Ranged_Generic_C
// (Actor)

class UClass* UB_Ranged_Generic_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_Ranged_Generic_C");

	return Clss;
}


// B_Ranged_Generic_C B_Ranged_Generic.Default__B_Ranged_Generic_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UB_Ranged_Generic_C* UB_Ranged_Generic_C::GetDefaultObj()
{
	static class UB_Ranged_Generic_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UB_Ranged_Generic_C*>(UB_Ranged_Generic_C::StaticClass()->DefaultObject);

	return Default;
}


// Function B_Ranged_Generic.B_Ranged_Generic_C.StopLocalForceFeedback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UForceFeedbackEffect*        ForceFeedbackEffect                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        Tag                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UController*                 CallFunc_GetInstigatorController_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           K2Node_DynamicCast_AsPlayer_Controller                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocalController_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_Ranged_Generic_C::StopLocalForceFeedback(class UForceFeedbackEffect* ForceFeedbackEffect, class FName Tag, class UController* CallFunc_GetInstigatorController_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPlayerController* K2Node_DynamicCast_AsPlayer_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsLocalController_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Generic_C", "StopLocalForceFeedback");

	Params::UB_Ranged_Generic_C_StopLocalForceFeedback_Params Parms{};

	Parms.ForceFeedbackEffect = ForceFeedbackEffect;
	Parms.Tag = Tag;
	Parms.CallFunc_GetInstigatorController_ReturnValue = CallFunc_GetInstigatorController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_Controller = K2Node_DynamicCast_AsPlayer_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsLocalController_ReturnValue = CallFunc_IsLocalController_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.PlayLocalForceFeedback
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UForceFeedbackEffect*        ForceFeedbackEffect                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class FName                        Tag                                                              (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bLooping                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UController*                 CallFunc_GetInstigatorController_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           K2Node_DynamicCast_AsPlayer_Controller                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsLocalController_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_Ranged_Generic_C::PlayLocalForceFeedback(class UForceFeedbackEffect* ForceFeedbackEffect, class FName Tag, bool bLooping, class UController* CallFunc_GetInstigatorController_ReturnValue, bool CallFunc_IsValid_ReturnValue, class UPlayerController* K2Node_DynamicCast_AsPlayer_Controller, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsLocalController_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Generic_C", "PlayLocalForceFeedback");

	Params::UB_Ranged_Generic_C_PlayLocalForceFeedback_Params Parms{};

	Parms.ForceFeedbackEffect = ForceFeedbackEffect;
	Parms.Tag = Tag;
	Parms.bLooping = bLooping;
	Parms.CallFunc_GetInstigatorController_ReturnValue = CallFunc_GetInstigatorController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_Controller = K2Node_DynamicCast_AsPlayer_Controller;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_IsLocalController_ReturnValue = CallFunc_IsLocalController_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.getScopeComp
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*        ScopeComponent                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UB_Ranged_Generic_C::GetScopeComp(class UStaticMeshComponent** ScopeComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Generic_C", "getScopeComp");

	Params::UB_Ranged_Generic_C_GetScopeComp_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (ScopeComponent != nullptr)
		*ScopeComponent = Parms.ScopeComponent;

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.initScope
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_getScopeComp_scopeComponent                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_getScopeComp_scopeComponent_1                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInterface*          CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UseScopeTargeting_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetStaticMesh_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_Ranged_Generic_C::InitScope(int32 Temp_int_Array_Index_Variable, class UStaticMeshComponent* CallFunc_getScopeComp_scopeComponent, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, const struct FTransform& Temp_struct_Variable, class UStaticMeshComponent* CallFunc_getScopeComp_scopeComponent_1, bool CallFunc_IsValid_ReturnValue_1, class UStaticMeshComponent* CallFunc_AddComponent_ReturnValue, int32 Temp_int_Loop_Counter_Variable, class UMaterialInterface* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_UseScopeTargeting_ReturnValue, bool CallFunc_SetStaticMesh_ReturnValue, bool CallFunc_IsValid_ReturnValue_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Generic_C", "initScope");

	Params::UB_Ranged_Generic_C_InitScope_Params Parms{};

	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_getScopeComp_scopeComponent = CallFunc_getScopeComp_scopeComponent;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.CallFunc_getScopeComp_scopeComponent_1 = CallFunc_getScopeComp_scopeComponent_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_UseScopeTargeting_ReturnValue = CallFunc_UseScopeTargeting_ReturnValue;
	Parms.CallFunc_SetStaticMesh_ReturnValue = CallFunc_SetStaticMesh_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.IsNewFeedbackEnabled
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enabled                                                          (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetValueAtLevel_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_Ranged_Generic_C::IsNewFeedbackEnabled(bool* Enabled, float CallFunc_GetValueAtLevel_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, double CallFunc_Greater_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Generic_C", "IsNewFeedbackEnabled");

	Params::UB_Ranged_Generic_C_IsNewFeedbackEnabled_Params Parms{};

	Parms.CallFunc_GetValueAtLevel_ReturnValue = CallFunc_GetValueAtLevel_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

	if (Enabled != nullptr)
		*Enabled = Parms.Enabled;

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.LocalReloadStarted
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              ReloadTime                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EFortWeaponReloadType   ReloadType                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_Ranged_Generic_C::LocalReloadStarted(float ReloadTime, enum class EFortWeaponReloadType ReloadType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Generic_C", "LocalReloadStarted");

	Params::UB_Ranged_Generic_C_LocalReloadStarted_Params Parms{};

	Parms.ReloadTime = ReloadTime;
	Parms.ReloadType = ReloadType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.GetCorrectMuzzleNiagaraSystem
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TSoftObjectPtr<class UNiagaraSystem>OutNiagaraSystem                                                 (Parm, OutParm, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsQuartzGunfireEnabled_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UNiagaraSystem>K2Node_Select_Default                                            (HasGetValueTypeHash)

void UB_Ranged_Generic_C::GetCorrectMuzzleNiagaraSystem(TSoftObjectPtr<class UNiagaraSystem>* OutNiagaraSystem, bool Temp_bool_Variable, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsQuartzGunfireEnabled_ReturnValue, TSoftObjectPtr<class UNiagaraSystem> K2Node_Select_Default)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Generic_C", "GetCorrectMuzzleNiagaraSystem");

	Params::UB_Ranged_Generic_C_GetCorrectMuzzleNiagaraSystem_Params Parms{};

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsQuartzGunfireEnabled_ReturnValue = CallFunc_IsQuartzGunfireEnabled_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;

	UObject::ProcessEvent(Func, &Parms);

	if (OutNiagaraSystem != nullptr)
		*OutNiagaraSystem = Parms.OutNiagaraSystem;

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.PlayScopeOutAudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UB_Ranged_Generic_C::PlayScopeOutAudio(bool CallFunc_IsValid_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Generic_C", "PlayScopeOutAudio");

	Params::UB_Ranged_Generic_C_PlayScopeOutAudio_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.GetScopeParameters
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*        ScopeComponent                                                   (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   DepthOfFieldVignetteRange                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     WeaponSightsOffset                                               (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_getScopeComp_scopeComponent                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_Ranged_Generic_C::GetScopeParameters(class UStaticMeshComponent** ScopeComponent, struct FVector2D* DepthOfFieldVignetteRange, struct FVector* WeaponSightsOffset, class UStaticMeshComponent* CallFunc_getScopeComp_scopeComponent, bool CallFunc_IsValid_ReturnValue, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Generic_C", "GetScopeParameters");

	Params::UB_Ranged_Generic_C_GetScopeParameters_Params Parms{};

	Parms.CallFunc_getScopeComp_scopeComponent = CallFunc_getScopeComp_scopeComponent;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (ScopeComponent != nullptr)
		*ScopeComponent = Parms.ScopeComponent;

	if (DepthOfFieldVignetteRange != nullptr)
		*DepthOfFieldVignetteRange = Parms.DepthOfFieldVignetteRange;

	if (WeaponSightsOffset != nullptr)
		*WeaponSightsOffset = Parms.WeaponSightsOffset;

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.GetActiveMuzzleComponents
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// TArray<class UFXSystemComponent*>  NewParam                                                         (Parm, OutParm, ContainsInstancedReference)
// TSoftObjectPtr<class UNiagaraSystem>CallFunc_GetCorrectMuzzleNiagaraSystem_OutNiagaraSystem          (HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNiagaraSystem*              K2Node_DynamicCast_AsNiagara_System                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFXSystemComponent*>  K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UNiagaraSystem>CallFunc_GetCorrectMuzzleNiagaraSystem_OutNiagaraSystem_1        (HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraSystem*              K2Node_DynamicCast_AsNiagara_System_1                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetMuzzleSocketName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAttached_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class UFXSystemComponent*>  K2Node_MakeArray_Array_1                                         (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_Ranged_Generic_C::GetActiveMuzzleComponents(TArray<class UFXSystemComponent*>* NewParam, TSoftObjectPtr<class UNiagaraSystem> CallFunc_GetCorrectMuzzleNiagaraSystem_OutNiagaraSystem, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, class UNiagaraSystem* K2Node_DynamicCast_AsNiagara_System, bool K2Node_DynamicCast_bSuccess, TArray<class UFXSystemComponent*>& K2Node_MakeArray_Array, bool CallFunc_IsValid_ReturnValue, TSoftObjectPtr<class UNiagaraSystem> CallFunc_GetCorrectMuzzleNiagaraSystem_OutNiagaraSystem_1, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_1, class UNiagaraSystem* K2Node_DynamicCast_AsNiagara_System_1, bool K2Node_DynamicCast_bSuccess_1, class FName CallFunc_GetMuzzleSocketName_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, TArray<class UFXSystemComponent*>& K2Node_MakeArray_Array_1, bool CallFunc_IsValid_ReturnValue_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Generic_C", "GetActiveMuzzleComponents");

	Params::UB_Ranged_Generic_C_GetActiveMuzzleComponents_Params Parms{};

	Parms.CallFunc_GetCorrectMuzzleNiagaraSystem_OutNiagaraSystem = CallFunc_GetCorrectMuzzleNiagaraSystem_OutNiagaraSystem;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.K2Node_DynamicCast_AsNiagara_System = K2Node_DynamicCast_AsNiagara_System;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_GetCorrectMuzzleNiagaraSystem_OutNiagaraSystem_1 = CallFunc_GetCorrectMuzzleNiagaraSystem_OutNiagaraSystem_1;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1 = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsNiagara_System_1 = K2Node_DynamicCast_AsNiagara_System_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_GetMuzzleSocketName_ReturnValue = CallFunc_GetMuzzleSocketName_ReturnValue;
	Parms.CallFunc_SpawnSystemAttached_ReturnValue = CallFunc_SpawnSystemAttached_ReturnValue;
	Parms.K2Node_MakeArray_Array_1 = K2Node_MakeArray_Array_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;

	UObject::ProcessEvent(Func, &Parms);

	if (NewParam != nullptr)
		*NewParam = Parms.NewParam;

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.SetActiveMuzzleComponent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               NiagaraEnabled                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_Ranged_Generic_C::SetActiveMuzzleComponent(bool NiagaraEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Generic_C", "SetActiveMuzzleComponent");

	Params::UB_Ranged_Generic_C_SetActiveMuzzleComponent_Params Parms{};

	Parms.NiagaraEnabled = NiagaraEnabled;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.StopScopedAudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_Ranged_Generic_C::StopScopedAudio(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Generic_C", "StopScopedAudio");

	Params::UB_Ranged_Generic_C_StopScopedAudio_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.StartScopedAudio
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue_1                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UB_Ranged_Generic_C::StartScopedAudio(bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_2, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Generic_C", "StartScopedAudio");

	Params::UB_Ranged_Generic_C_StartScopedAudio_Params Parms{};

	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue_1 = CallFunc_SpawnSoundAttached_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.SetPostProcessParams
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// double                             InputPin                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_Ranged_Generic_C::SetPostProcessParams(double InputPin)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Generic_C", "SetPostProcessParams");

	Params::UB_Ranged_Generic_C_SetPostProcessParams_Params Parms{};

	Parms.InputPin = InputPin;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.SetActiveAlterationIdleParticles
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Active                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_Ranged_Generic_C::SetActiveAlterationIdleParticles(bool Active, bool CallFunc_IsDedicatedServer_ReturnValue, bool CallFunc_IsValid_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Generic_C", "SetActiveAlterationIdleParticles");

	Params::UB_Ranged_Generic_C_SetActiveAlterationIdleParticles_Params Parms{};

	Parms.Active = Active;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.ShowReticle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UController*                 CallFunc_GetInstigatorController_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerControllerZone*   K2Node_DynamicCast_AsFort_Player_Controller_Zone                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_Ranged_Generic_C::ShowReticle(class UController* CallFunc_GetInstigatorController_ReturnValue, class UFortPlayerControllerZone* K2Node_DynamicCast_AsFort_Player_Controller_Zone, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Generic_C", "ShowReticle");

	Params::UB_Ranged_Generic_C_ShowReticle_Params Parms{};

	Parms.CallFunc_GetInstigatorController_ReturnValue = CallFunc_GetInstigatorController_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Zone = K2Node_DynamicCast_AsFort_Player_Controller_Zone;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.HideReticle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UController*                 CallFunc_GetInstigatorController_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerControllerZone*   K2Node_DynamicCast_AsFort_Player_Controller_Zone                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_Ranged_Generic_C::HideReticle(class UController* CallFunc_GetInstigatorController_ReturnValue, class UFortPlayerControllerZone* K2Node_DynamicCast_AsFort_Player_Controller_Zone, bool K2Node_DynamicCast_bSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Generic_C", "HideReticle");

	Params::UB_Ranged_Generic_C_HideReticle_Params Parms{};

	Parms.CallFunc_GetInstigatorController_ReturnValue = CallFunc_GetInstigatorController_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Zone = K2Node_DynamicCast_AsFort_Player_Controller_Zone;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.ActivateOrDeactivateWindParticle
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               bNewActive                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_Ranged_Generic_C::ActivateOrDeactivateWindParticle(bool bNewActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Generic_C", "ActivateOrDeactivateWindParticle");

	Params::UB_Ranged_Generic_C_ActivateOrDeactivateWindParticle_Params Parms{};

	Parms.bNewActive = bNewActive;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.DeactivateMuzzleFX
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetValueAsBool_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFXSystemComponent*>  CallFunc_GetActiveMuzzleComponents_NewParam                      (ReferenceParm, ContainsInstancedReference)
// class UFXSystemComponent*          CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_Ranged_Generic_C::DeactivateMuzzleFX(int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GetValueAsBool_ReturnValue, TArray<class UFXSystemComponent*>& CallFunc_GetActiveMuzzleComponents_NewParam, class UFXSystemComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Generic_C", "DeactivateMuzzleFX");

	Params::UB_Ranged_Generic_C_DeactivateMuzzleFX_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetValueAsBool_ReturnValue = CallFunc_GetValueAsBool_ReturnValue;
	Parms.CallFunc_GetActiveMuzzleComponents_NewParam = CallFunc_GetActiveMuzzleComponents_NewParam;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.ActivateReloadSmokeFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_ShouldPlayReloadFX_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAttached_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UB_Ranged_Generic_C::ActivateReloadSmokeFX(bool CallFunc_ShouldPlayReloadFX_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Generic_C", "ActivateReloadSmokeFX");

	Params::UB_Ranged_Generic_C_ActivateReloadSmokeFX_Params Parms{};

	Parms.CallFunc_ShouldPlayReloadFX_ReturnValue = CallFunc_ShouldPlayReloadFX_ReturnValue;
	Parms.CallFunc_SpawnSystemAttached_ReturnValue = CallFunc_SpawnSystemAttached_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.ActivateShellsFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Bool                                                             (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetValueAsBool_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_DoubleToVector_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class En_ShellTypes_01        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ActivateShellsFXNative_SpawnRateScale_ImplicitCast      (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ActivateShellsFXNative_Radius_ImplicitCast              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ActivateShellsFXNative_Height_ImplicitCast              (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ActivateShellsFXNative_CullDistance_ImplicitCast        (ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_Ranged_Generic_C::ActivateShellsFX(bool Bool, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, int32 Temp_int_Variable_3, bool CallFunc_GetValueAsBool_ReturnValue, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue, bool CallFunc_IsValid_ReturnValue, int32 Temp_int_Variable_4, enum class En_ShellTypes_01 Temp_byte_Variable, int32 K2Node_Select_Default, float CallFunc_ActivateShellsFXNative_SpawnRateScale_ImplicitCast, float CallFunc_ActivateShellsFXNative_Radius_ImplicitCast, float CallFunc_ActivateShellsFXNative_Height_ImplicitCast, float CallFunc_ActivateShellsFXNative_CullDistance_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Generic_C", "ActivateShellsFX");

	Params::UB_Ranged_Generic_C_ActivateShellsFX_Params Parms{};

	Parms.Bool = Bool;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.CallFunc_GetValueAsBool_ReturnValue = CallFunc_GetValueAsBool_ReturnValue;
	Parms.CallFunc_Conv_DoubleToVector_ReturnValue = CallFunc_Conv_DoubleToVector_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.Temp_int_Variable_4 = Temp_int_Variable_4;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_ActivateShellsFXNative_SpawnRateScale_ImplicitCast = CallFunc_ActivateShellsFXNative_SpawnRateScale_ImplicitCast;
	Parms.CallFunc_ActivateShellsFXNative_Radius_ImplicitCast = CallFunc_ActivateShellsFXNative_Radius_ImplicitCast;
	Parms.CallFunc_ActivateShellsFXNative_Height_ImplicitCast = CallFunc_ActivateShellsFXNative_Height_ImplicitCast;
	Parms.CallFunc_ActivateShellsFXNative_CullDistance_ImplicitCast = CallFunc_ActivateShellsFXNative_CullDistance_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.DeactivateShellsFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               CallFunc_GetValueAsBool_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsActive_ReturnValue                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_Ranged_Generic_C::DeactivateShellsFX(bool CallFunc_GetValueAsBool_ReturnValue, bool CallFunc_IsActive_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Generic_C", "DeactivateShellsFX");

	Params::UB_Ranged_Generic_C_DeactivateShellsFX_Params Parms{};

	Parms.CallFunc_GetValueAsBool_ReturnValue = CallFunc_GetValueAsBool_ReturnValue;
	Parms.CallFunc_IsActive_ReturnValue = CallFunc_IsActive_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.SetupShellFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UNiagaraSystem*              Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNiagaraSystem*              Temp_object_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_2                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Conv_DoubleToVector_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldPlayPersistentFireFX_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class En_ShellTypes_01        Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraSystem*              K2Node_Select_Default                                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetNumericCVar_OutValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetNumericCVar_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraComponent*           CallFunc_SpawnSystemAttached_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_3                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_4                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSocketExist_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_Select_Default_1                                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast_1                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMax_A_ImplicitCast                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetCullDistance_NewCullDistance_ImplicitCast            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_Ranged_Generic_C::SetupShellFX(class UNiagaraSystem* Temp_object_Variable, class UNiagaraSystem* Temp_object_Variable_1, bool Temp_bool_Variable, int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 Temp_int_Variable_2, const struct FVector& CallFunc_Conv_DoubleToVector_ReturnValue, bool CallFunc_ShouldPlayPersistentFireFX_ReturnValue, enum class En_ShellTypes_01 Temp_byte_Variable, class UNiagaraSystem* K2Node_Select_Default, float CallFunc_GetNumericCVar_OutValue, bool CallFunc_GetNumericCVar_ReturnValue, class UNiagaraComponent* CallFunc_SpawnSystemAttached_ReturnValue, double CallFunc_FMax_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, int32 Temp_int_Variable_3, double CallFunc_Multiply_DoubleDouble_ReturnValue, int32 Temp_int_Variable_4, bool CallFunc_DoesSocketExist_ReturnValue, int32 K2Node_Select_Default_1, float CallFunc_SetVariableFloat_InValue_ImplicitCast, float CallFunc_SetVariableFloat_InValue_ImplicitCast_1, double CallFunc_FMax_A_ImplicitCast, float CallFunc_SetCullDistance_NewCullDistance_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Generic_C", "SetupShellFX");

	Params::UB_Ranged_Generic_C_SetupShellFX_Params Parms{};

	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.Temp_int_Variable_2 = Temp_int_Variable_2;
	Parms.CallFunc_Conv_DoubleToVector_ReturnValue = CallFunc_Conv_DoubleToVector_ReturnValue;
	Parms.CallFunc_ShouldPlayPersistentFireFX_ReturnValue = CallFunc_ShouldPlayPersistentFireFX_ReturnValue;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetNumericCVar_OutValue = CallFunc_GetNumericCVar_OutValue;
	Parms.CallFunc_GetNumericCVar_ReturnValue = CallFunc_GetNumericCVar_ReturnValue;
	Parms.CallFunc_SpawnSystemAttached_ReturnValue = CallFunc_SpawnSystemAttached_ReturnValue;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.Temp_int_Variable_3 = Temp_int_Variable_3;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.Temp_int_Variable_4 = Temp_int_Variable_4;
	Parms.CallFunc_DoesSocketExist_ReturnValue = CallFunc_DoesSocketExist_ReturnValue;
	Parms.K2Node_Select_Default_1 = K2Node_Select_Default_1;
	Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast = CallFunc_SetVariableFloat_InValue_ImplicitCast;
	Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast_1 = CallFunc_SetVariableFloat_InValue_ImplicitCast_1;
	Parms.CallFunc_FMax_A_ImplicitCast = CallFunc_FMax_A_ImplicitCast;
	Parms.CallFunc_SetCullDistance_NewCullDistance_ImplicitCast = CallFunc_SetCullDistance_NewCullDistance_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.UpdateShellEmittersFX
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<enum class En_ShellTypes_01>Keys_to_Check                                                    (Edit, BlueprintVisible)
// TArray<class FName>                Values_to_Run_Through                                            (Edit, BlueprintVisible)
// int32                              CallFunc_GetShellReloadCounter_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Max_ReturnValue                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Conv_IntToDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetVariableFloat_InValue_ImplicitCast                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_Ranged_Generic_C::UpdateShellEmittersFX(const TArray<enum class En_ShellTypes_01>& Keys_to_Check, const TArray<class FName>& Values_to_Run_Through, int32 CallFunc_GetShellReloadCounter_ReturnValue, bool Temp_bool_Variable, int32 CallFunc_Max_ReturnValue, double CallFunc_Conv_IntToDouble_ReturnValue, double K2Node_Select_Default, bool CallFunc_IsValid_ReturnValue, float CallFunc_SetVariableFloat_InValue_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Generic_C", "UpdateShellEmittersFX");

	Params::UB_Ranged_Generic_C_UpdateShellEmittersFX_Params Parms{};

	Parms.Keys_to_Check = Keys_to_Check;
	Parms.Values_to_Run_Through = Values_to_Run_Through;
	Parms.CallFunc_GetShellReloadCounter_ReturnValue = CallFunc_GetShellReloadCounter_ReturnValue;
	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.CallFunc_Max_ReturnValue = CallFunc_Max_ReturnValue;
	Parms.CallFunc_Conv_IntToDouble_ReturnValue = CallFunc_Conv_IntToDouble_ReturnValue;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_SetVariableFloat_InValue_ImplicitCast = CallFunc_SetVariableFloat_InValue_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.Muzzle Play Reload FX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EFortReloadFXState      Selection                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_Ranged_Generic_C::Muzzle_Play_Reload_FX(enum class EFortReloadFXState Selection, bool K2Node_SwitchEnum_CmpSuccess)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Generic_C", "Muzzle Play Reload FX");

	Params::UB_Ranged_Generic_C_Muzzle_Play_Reload_FX_Params Parms{};

	Parms.Selection = Selection;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.Muzzle Flash FX
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Persistent_Fire                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetValueAsBool_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFXSystemComponent*>  CallFunc_GetActiveMuzzleComponents_NewParam                      (ReferenceParm, ContainsInstancedReference)
// bool                               CallFunc_IsUsingScope_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFXSystemComponent*          CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UNiagaraSystem>CallFunc_GetCorrectMuzzleNiagaraSystem_OutNiagaraSystem          (HasGetValueTypeHash)
// float                              CallFunc_ActivateMuzzleFlashFXNative_MuzzleFlashSmallMaxScale_ImplicitCast(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ActivateMuzzleFlashFXNative_MuzzleFlashSmallMinScale_ImplicitCast(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ActivateMuzzleFlashFXNative_MuzzleFlashLargeMaxScale_ImplicitCast(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ActivateMuzzleFlashFXNative_MuzzleFlashLargeMinScale_ImplicitCast(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_ActivateMuzzleFlashFXNative_MuzzleChanceOfLargeFlash_ImplicitCast(ConstParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_Ranged_Generic_C::Muzzle_Flash_FX(bool Persistent_Fire, int32 Temp_int_Variable, int32 CallFunc_Add_IntInt_ReturnValue, bool CallFunc_GetValueAsBool_ReturnValue, TArray<class UFXSystemComponent*>& CallFunc_GetActiveMuzzleComponents_NewParam, bool CallFunc_IsUsingScope_ReturnValue, class UFXSystemComponent* CallFunc_Array_Get_Item, bool CallFunc_Not_PreBool_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, double CallFunc_GetGameTimeInSeconds_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue, TSoftObjectPtr<class UNiagaraSystem> CallFunc_GetCorrectMuzzleNiagaraSystem_OutNiagaraSystem, float CallFunc_ActivateMuzzleFlashFXNative_MuzzleFlashSmallMaxScale_ImplicitCast, float CallFunc_ActivateMuzzleFlashFXNative_MuzzleFlashSmallMinScale_ImplicitCast, float CallFunc_ActivateMuzzleFlashFXNative_MuzzleFlashLargeMaxScale_ImplicitCast, float CallFunc_ActivateMuzzleFlashFXNative_MuzzleFlashLargeMinScale_ImplicitCast, float CallFunc_ActivateMuzzleFlashFXNative_MuzzleChanceOfLargeFlash_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Generic_C", "Muzzle Flash FX");

	Params::UB_Ranged_Generic_C_Muzzle_Flash_FX_Params Parms{};

	Parms.Persistent_Fire = Persistent_Fire;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_GetValueAsBool_ReturnValue = CallFunc_GetValueAsBool_ReturnValue;
	Parms.CallFunc_GetActiveMuzzleComponents_NewParam = CallFunc_GetActiveMuzzleComponents_NewParam;
	Parms.CallFunc_IsUsingScope_ReturnValue = CallFunc_IsUsingScope_ReturnValue;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_GetCorrectMuzzleNiagaraSystem_OutNiagaraSystem = CallFunc_GetCorrectMuzzleNiagaraSystem_OutNiagaraSystem;
	Parms.CallFunc_ActivateMuzzleFlashFXNative_MuzzleFlashSmallMaxScale_ImplicitCast = CallFunc_ActivateMuzzleFlashFXNative_MuzzleFlashSmallMaxScale_ImplicitCast;
	Parms.CallFunc_ActivateMuzzleFlashFXNative_MuzzleFlashSmallMinScale_ImplicitCast = CallFunc_ActivateMuzzleFlashFXNative_MuzzleFlashSmallMinScale_ImplicitCast;
	Parms.CallFunc_ActivateMuzzleFlashFXNative_MuzzleFlashLargeMaxScale_ImplicitCast = CallFunc_ActivateMuzzleFlashFXNative_MuzzleFlashLargeMaxScale_ImplicitCast;
	Parms.CallFunc_ActivateMuzzleFlashFXNative_MuzzleFlashLargeMinScale_ImplicitCast = CallFunc_ActivateMuzzleFlashFXNative_MuzzleFlashLargeMinScale_ImplicitCast;
	Parms.CallFunc_ActivateMuzzleFlashFXNative_MuzzleChanceOfLargeFlash_ImplicitCast = CallFunc_ActivateMuzzleFlashFXNative_MuzzleChanceOfLargeFlash_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.SetWpnRarity
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UB_Ranged_Generic_C::SetWpnRarity()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Generic_C", "SetWpnRarity");

	Params::UB_Ranged_Generic_C_SetWpnRarity_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.AddRandomScale
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable_1                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_RandomFloatInRange_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFXSystemComponent*>  CallFunc_GetActiveMuzzleComponents_NewParam                      (ReferenceParm, ContainsInstancedReference)
// double                             CallFunc_RandomFloatInRange_ReturnValue_2                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFXSystemComponent*          CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_LessEqual_DoubleDouble_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFXSystemComponent*          CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_Ranged_Generic_C::AddRandomScale(int32 Temp_int_Variable, int32 Temp_int_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue_1, double CallFunc_RandomFloatInRange_ReturnValue, const struct FVector& CallFunc_MakeVector_ReturnValue, double CallFunc_RandomFloatInRange_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue_1, TArray<class UFXSystemComponent*>& CallFunc_GetActiveMuzzleComponents_NewParam, double CallFunc_RandomFloatInRange_ReturnValue_2, class UFXSystemComponent* CallFunc_Array_Get_Item, bool CallFunc_LessEqual_DoubleDouble_ReturnValue, int32 CallFunc_Array_Length_ReturnValue, class UFXSystemComponent* CallFunc_Array_Get_Item_1, bool CallFunc_Less_IntInt_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Generic_C", "AddRandomScale");

	Params::UB_Ranged_Generic_C_AddRandomScale_Params Parms{};

	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.Temp_int_Variable_1 = Temp_int_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_RandomFloatInRange_ReturnValue = CallFunc_RandomFloatInRange_ReturnValue;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_1 = CallFunc_RandomFloatInRange_ReturnValue_1;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;
	Parms.CallFunc_GetActiveMuzzleComponents_NewParam = CallFunc_GetActiveMuzzleComponents_NewParam;
	Parms.CallFunc_RandomFloatInRange_ReturnValue_2 = CallFunc_RandomFloatInRange_ReturnValue_2;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_LessEqual_DoubleDouble_ReturnValue = CallFunc_LessEqual_DoubleDouble_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.UserConstructionScript
// (Event, Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              ValidMuzzleSocketCount                                           (Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetScalarParameterValue_ReturnValue                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_DoubleDouble_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UNiagaraSystem>CallFunc_GetCorrectMuzzleNiagaraSystem_OutNiagaraSystem          (HasGetValueTypeHash)
// bool                               CallFunc_IsNiagaraEffectEnabledSoftPtr_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GreaterEqual_IntInt_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class FName>                CallFunc_GetUniqueMuzzleSocketNames_Names                        (ReferenceParm)
// TArray<class FName>                CallFunc_GetUniqueMuzzleSocketNames_Names_1                      (ReferenceParm)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable                                             (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  Temp_struct_Variable_1                                           (ConstParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_AddComponent_ReturnValue                                (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_AddComponent_ReturnValue_1                              (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_Array_Get_Item                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FName                        CallFunc_GetMuzzleSocketName_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Array_IsValidIndex_ReturnValue_1                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Greater_DoubleDouble_A_ImplicitCast                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_Ranged_Generic_C::UserConstructionScript(int32 ValidMuzzleSocketCount, int32 Temp_int_Array_Index_Variable, float CallFunc_GetScalarParameterValue_ReturnValue, bool CallFunc_Greater_DoubleDouble_ReturnValue, TSoftObjectPtr<class UNiagaraSystem> CallFunc_GetCorrectMuzzleNiagaraSystem_OutNiagaraSystem, bool CallFunc_IsNiagaraEffectEnabledSoftPtr_ReturnValue, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_Add_IntInt_ReturnValue, int32 Temp_int_Array_Index_Variable_1, bool CallFunc_GreaterEqual_IntInt_ReturnValue, TArray<class FName>& CallFunc_GetUniqueMuzzleSocketNames_Names, TArray<class FName>& CallFunc_GetUniqueMuzzleSocketNames_Names_1, int32 CallFunc_Array_Length_ReturnValue, const struct FTransform& Temp_struct_Variable, const struct FTransform& Temp_struct_Variable_1, class UParticleSystemComponent* CallFunc_AddComponent_ReturnValue, class UParticleSystemComponent* CallFunc_AddComponent_ReturnValue_1, bool CallFunc_IsDedicatedServer_ReturnValue, int32 CallFunc_Array_Length_ReturnValue_1, class UParticleSystemComponent* CallFunc_Array_Get_Item, int32 CallFunc_Array_Length_ReturnValue_2, bool CallFunc_Less_IntInt_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue, class FName CallFunc_GetMuzzleSocketName_ReturnValue, bool CallFunc_Array_IsValidIndex_ReturnValue_1, int32 Temp_int_Loop_Counter_Variable_1, bool CallFunc_Less_IntInt_ReturnValue_1, int32 CallFunc_Add_IntInt_ReturnValue_1, double CallFunc_Greater_DoubleDouble_A_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Generic_C", "UserConstructionScript");

	Params::UB_Ranged_Generic_C_UserConstructionScript_Params Parms{};

	Parms.ValidMuzzleSocketCount = ValidMuzzleSocketCount;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetScalarParameterValue_ReturnValue = CallFunc_GetScalarParameterValue_ReturnValue;
	Parms.CallFunc_Greater_DoubleDouble_ReturnValue = CallFunc_Greater_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetCorrectMuzzleNiagaraSystem_OutNiagaraSystem = CallFunc_GetCorrectMuzzleNiagaraSystem_OutNiagaraSystem;
	Parms.CallFunc_IsNiagaraEffectEnabledSoftPtr_ReturnValue = CallFunc_IsNiagaraEffectEnabledSoftPtr_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.CallFunc_GreaterEqual_IntInt_ReturnValue = CallFunc_GreaterEqual_IntInt_ReturnValue;
	Parms.CallFunc_GetUniqueMuzzleSocketNames_Names = CallFunc_GetUniqueMuzzleSocketNames_Names;
	Parms.CallFunc_GetUniqueMuzzleSocketNames_Names_1 = CallFunc_GetUniqueMuzzleSocketNames_Names_1;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.Temp_struct_Variable = Temp_struct_Variable;
	Parms.Temp_struct_Variable_1 = Temp_struct_Variable_1;
	Parms.CallFunc_AddComponent_ReturnValue = CallFunc_AddComponent_ReturnValue;
	Parms.CallFunc_AddComponent_ReturnValue_1 = CallFunc_AddComponent_ReturnValue_1;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue = CallFunc_Array_IsValidIndex_ReturnValue;
	Parms.CallFunc_GetMuzzleSocketName_ReturnValue = CallFunc_GetMuzzleSocketName_ReturnValue;
	Parms.CallFunc_Array_IsValidIndex_ReturnValue_1 = CallFunc_Array_IsValidIndex_ReturnValue_1;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_Greater_DoubleDouble_A_ImplicitCast = CallFunc_Greater_DoubleDouble_A_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.AnimateScopePostProcess__FinishedFunc
// (BlueprintEvent)
// Parameters:

void UB_Ranged_Generic_C::AnimateScopePostProcess__FinishedFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Generic_C", "AnimateScopePostProcess__FinishedFunc");

	Params::UB_Ranged_Generic_C_AnimateScopePostProcess__FinishedFunc_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.AnimateScopePostProcess__UpdateFunc
// (BlueprintEvent)
// Parameters:

void UB_Ranged_Generic_C::AnimateScopePostProcess__UpdateFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Generic_C", "AnimateScopePostProcess__UpdateFunc");

	Params::UB_Ranged_Generic_C_AnimateScopePostProcess__UpdateFunc_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.AnimateScopePostProcess__Toggle Scope__EventFunc
// (BlueprintEvent)
// Parameters:

void UB_Ranged_Generic_C::AnimateScopePostProcess__Toggle_Scope__EventFunc()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Generic_C", "AnimateScopePostProcess__Toggle Scope__EventFunc");

	Params::UB_Ranged_Generic_C_AnimateScopePostProcess__Toggle_Scope__EventFunc_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnLoaded_4D1409A247BFDB4C074B628406FC7A72
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UB_Ranged_Generic_C::OnLoaded_4D1409A247BFDB4C074B628406FC7A72(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Generic_C", "OnLoaded_4D1409A247BFDB4C074B628406FC7A72");

	Params::UB_Ranged_Generic_C_OnLoaded_4D1409A247BFDB4C074B628406FC7A72_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnLoaded_3A9BBE884A5C5966375089938B7DC0CA
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UB_Ranged_Generic_C::OnLoaded_3A9BBE884A5C5966375089938B7DC0CA(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Generic_C", "OnLoaded_3A9BBE884A5C5966375089938B7DC0CA");

	Params::UB_Ranged_Generic_C_OnLoaded_3A9BBE884A5C5966375089938B7DC0CA_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnLoaded_83457BA843174AC6288682A342EBEAD9
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UB_Ranged_Generic_C::OnLoaded_83457BA843174AC6288682A342EBEAD9(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Generic_C", "OnLoaded_83457BA843174AC6288682A342EBEAD9");

	Params::UB_Ranged_Generic_C_OnLoaded_83457BA843174AC6288682A342EBEAD9_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnLoaded_5B08633343C4DA6FF40449A8A36357E4
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// class UObject*                     Loaded                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UB_Ranged_Generic_C::OnLoaded_5B08633343C4DA6FF40449A8A36357E4(class UObject* Loaded)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Generic_C", "OnLoaded_5B08633343C4DA6FF40449A8A36357E4");

	Params::UB_Ranged_Generic_C_OnLoaded_5B08633343C4DA6FF40449A8A36357E4_Params Parms{};

	Parms.Loaded = Loaded;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnPlayWeaponFireFX
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bPersistentFire                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bSecondaryFire                                                   (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_Ranged_Generic_C::OnPlayWeaponFireFX(bool bPersistentFire, bool bSecondaryFire)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Generic_C", "OnPlayWeaponFireFX");

	Params::UB_Ranged_Generic_C_OnPlayWeaponFireFX_Params Parms{};

	Parms.bPersistentFire = bPersistentFire;
	Parms.bSecondaryFire = bSecondaryFire;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnStopWeaponFireFX
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:

void UB_Ranged_Generic_C::OnStopWeaponFireFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Generic_C", "OnStopWeaponFireFX");

	Params::UB_Ranged_Generic_C_OnStopWeaponFireFX_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnPlayReloadFX
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:
// enum class EFortReloadFXState      ReloadStage                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_Ranged_Generic_C::OnPlayReloadFX(enum class EFortReloadFXState ReloadStage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Generic_C", "OnPlayReloadFX");

	Params::UB_Ranged_Generic_C_OnPlayReloadFX_Params Parms{};

	Parms.ReloadStage = ReloadStage;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnSetTargeting
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bNewIsTargeting                                                  (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_Ranged_Generic_C::OnSetTargeting(bool bNewIsTargeting)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Generic_C", "OnSetTargeting");

	Params::UB_Ranged_Generic_C_OnSetTargeting_Params Parms{};

	Parms.bNewIsTargeting = bNewIsTargeting;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.K2_OnUnEquip
// (Event, Public, BlueprintEvent)
// Parameters:

void UB_Ranged_Generic_C::K2_OnUnEquip()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Generic_C", "K2_OnUnEquip");

	Params::UB_Ranged_Generic_C_K2_OnUnEquip_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.InitializeScopeVariables
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UB_Ranged_Generic_C::InitializeScopeVariables()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Generic_C", "InitializeScopeVariables");

	Params::UB_Ranged_Generic_C_InitializeScopeVariables_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.Update Enemy Custom Depths
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable_Or_Disable                                                (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              StencilBufferValue                                               (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_Ranged_Generic_C::Update_Enemy_Custom_Depths(bool Enable_Or_Disable, int32 StencilBufferValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Generic_C", "Update Enemy Custom Depths");

	Params::UB_Ranged_Generic_C_Update_Enemy_Custom_Depths_Params Parms{};

	Parms.Enable_Or_Disable = Enable_Or_Disable;
	Parms.StencilBufferValue = StencilBufferValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnWeaponAttached
// (Event, Public, BlueprintEvent)
// Parameters:

void UB_Ranged_Generic_C::OnWeaponAttached()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Generic_C", "OnWeaponAttached");

	Params::UB_Ranged_Generic_C_OnWeaponAttached_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnInitAlteration
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortAlterationItemDefinition*NewAlteration                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UB_Ranged_Generic_C::OnInitAlteration(class UFortAlterationItemDefinition* NewAlteration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Generic_C", "OnInitAlteration");

	Params::UB_Ranged_Generic_C_OnInitAlteration_Params Parms{};

	Parms.NewAlteration = NewAlteration;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnInitCosmeticAlterations
// (Event, Protected, BlueprintEvent)
// Parameters:
// struct FFortCosmeticModification   CosmeticMod                                                      (BlueprintVisible, BlueprintReadOnly, Parm)

void UB_Ranged_Generic_C::OnInitCosmeticAlterations(const struct FFortCosmeticModification& CosmeticMod)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Generic_C", "OnInitCosmeticAlterations");

	Params::UB_Ranged_Generic_C_OnInitCosmeticAlterations_Params Parms{};

	Parms.CosmeticMod = CosmeticMod;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.ShellsON_(onPump)
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UB_Ranged_Generic_C::ShellsON__onPump_()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Generic_C", "ShellsON_(onPump)");

	Params::UB_Ranged_Generic_C_ShellsON__onPump__Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnEquippedWeaponDestory
// (BlueprintCosmetic, Event, Protected, BlueprintEvent)
// Parameters:

void UB_Ranged_Generic_C::OnEquippedWeaponDestory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Generic_C", "OnEquippedWeaponDestory");

	Params::UB_Ranged_Generic_C_OnEquippedWeaponDestory_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.SetWeaponPierceThrough
// (Net, NetReliable, NetServer, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TargetLimit                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_Ranged_Generic_C::SetWeaponPierceThrough(bool Enable, int32 TargetLimit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Generic_C", "SetWeaponPierceThrough");

	Params::UB_Ranged_Generic_C_SetWeaponPierceThrough_Params Parms{};

	Parms.Enable = Enable;
	Parms.TargetLimit = TargetLimit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.SetWeaponPierceThrough_ClientRep
// (Net, NetReliable, NetClient, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Enable                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              TargetLimit                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_Ranged_Generic_C::SetWeaponPierceThrough_ClientRep(bool Enable, int32 TargetLimit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Generic_C", "SetWeaponPierceThrough_ClientRep");

	Params::UB_Ranged_Generic_C_SetWeaponPierceThrough_ClientRep_Params Parms{};

	Parms.Enable = Enable;
	Parms.TargetLimit = TargetLimit;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.ReceiveBeginPlay
// (Event, Protected, BlueprintEvent)
// Parameters:

void UB_Ranged_Generic_C::ReceiveBeginPlay()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Generic_C", "ReceiveBeginPlay");

	Params::UB_Ranged_Generic_C_ReceiveBeginPlay_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnWeaponVisibilityChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bVisible                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               bSetForLocalControllerOnly                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_Ranged_Generic_C::OnWeaponVisibilityChanged(bool bVisible, bool bSetForLocalControllerOnly)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Generic_C", "OnWeaponVisibilityChanged");

	Params::UB_Ranged_Generic_C_OnWeaponVisibilityChanged_Params Parms{};

	Parms.bVisible = bVisible;
	Parms.bSetForLocalControllerOnly = bSetForLocalControllerOnly;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.HideWeaponMesh
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UB_Ranged_Generic_C::HideWeaponMesh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Generic_C", "HideWeaponMesh");

	Params::UB_Ranged_Generic_C_HideWeaponMesh_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.ShowWeaponMesh
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UB_Ranged_Generic_C::ShowWeaponMesh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Generic_C", "ShowWeaponMesh");

	Params::UB_Ranged_Generic_C_ShowWeaponMesh_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.HideWeapon
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UB_Ranged_Generic_C::HideWeapon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Generic_C", "HideWeapon");

	Params::UB_Ranged_Generic_C_HideWeapon_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.ShowWeapon
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UB_Ranged_Generic_C::ShowWeapon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Generic_C", "ShowWeapon");

	Params::UB_Ranged_Generic_C_ShowWeapon_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.ReverseScopePP
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UB_Ranged_Generic_C::ReverseScopePP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Generic_C", "ReverseScopePP");

	Params::UB_Ranged_Generic_C_ReverseScopePP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.ResetDoonceScopeSound
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UB_Ranged_Generic_C::ResetDoonceScopeSound()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Generic_C", "ResetDoonceScopeSound");

	Params::UB_Ranged_Generic_C_ResetDoonceScopeSound_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.UnhideThirdPersonStuff
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UB_Ranged_Generic_C::UnhideThirdPersonStuff()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Generic_C", "UnhideThirdPersonStuff");

	Params::UB_Ranged_Generic_C_UnhideThirdPersonStuff_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.PlayScopePP
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UB_Ranged_Generic_C::PlayScopePP()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Generic_C", "PlayScopePP");

	Params::UB_Ranged_Generic_C_PlayScopePP_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.HideFirstPersonStuff
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UB_Ranged_Generic_C::HideFirstPersonStuff()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Generic_C", "HideFirstPersonStuff");

	Params::UB_Ranged_Generic_C_HideFirstPersonStuff_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.AbortScopeFX
// (Event, Public, BlueprintEvent)
// Parameters:

void UB_Ranged_Generic_C::AbortScopeFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Generic_C", "AbortScopeFX");

	Params::UB_Ranged_Generic_C_AbortScopeFX_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.HideThirdPersonStuff
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UB_Ranged_Generic_C::HideThirdPersonStuff()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Generic_C", "HideThirdPersonStuff");

	Params::UB_Ranged_Generic_C_HideThirdPersonStuff_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.UnhideFirstPersonStuffPart2
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// int32                              Which_Call                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_Ranged_Generic_C::UnhideFirstPersonStuffPart2(int32 Which_Call)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Generic_C", "UnhideFirstPersonStuffPart2");

	Params::UB_Ranged_Generic_C_UnhideFirstPersonStuffPart2_Params Parms{};

	Parms.Which_Call = Which_Call;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.UnhideFirstPersonStuffPart1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UB_Ranged_Generic_C::UnhideFirstPersonStuffPart1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Generic_C", "UnhideFirstPersonStuffPart1");

	Params::UB_Ranged_Generic_C_UnhideFirstPersonStuffPart1_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.ForceScopeFX
// (Event, Public, BlueprintEvent)
// Parameters:

void UB_Ranged_Generic_C::ForceScopeFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Generic_C", "ForceScopeFX");

	Params::UB_Ranged_Generic_C_ForceScopeFX_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.BindFireRateChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UB_Ranged_Generic_C::BindFireRateChange()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Generic_C", "BindFireRateChange");

	Params::UB_Ranged_Generic_C_BindFireRateChange_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.PitchUpOnRateOfFireChange
// (BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              NewRateOfFire                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_Ranged_Generic_C::PitchUpOnRateOfFireChange(float NewRateOfFire)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Generic_C", "PitchUpOnRateOfFireChange");

	Params::UB_Ranged_Generic_C_PitchUpOnRateOfFireChange_Params Parms{};

	Parms.NewRateOfFire = NewRateOfFire;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.ShellEjectionFixOn
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UB_Ranged_Generic_C::ShellEjectionFixOn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Generic_C", "ShellEjectionFixOn");

	Params::UB_Ranged_Generic_C_ShellEjectionFixOn_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.Bind on Effects Quality
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UB_Ranged_Generic_C::Bind_on_Effects_Quality()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Generic_C", "Bind on Effects Quality");

	Params::UB_Ranged_Generic_C_Bind_on_Effects_Quality_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.ShellEjectionOff
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UB_Ranged_Generic_C::ShellEjectionOff()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Generic_C", "ShellEjectionOff");

	Params::UB_Ranged_Generic_C_ShellEjectionOff_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.ForceScopeBackImmediatly
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UB_Ranged_Generic_C::ForceScopeBackImmediatly()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Generic_C", "ForceScopeBackImmediatly");

	Params::UB_Ranged_Generic_C_ForceScopeBackImmediatly_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnPlayImpactFX
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FHitResult                  HitResult                                                        (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// enum class EPhysicalSurface        ImpactPhysicalSurface                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFXSystemComponent*          SpawnedPSC                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UB_Ranged_Generic_C::OnPlayImpactFX(struct FHitResult& HitResult, enum class EPhysicalSurface ImpactPhysicalSurface, class UFXSystemComponent* SpawnedPSC)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Generic_C", "OnPlayImpactFX");

	Params::UB_Ranged_Generic_C_OnPlayImpactFX_Params Parms{};

	Parms.HitResult = HitResult;
	Parms.ImpactPhysicalSurface = ImpactPhysicalSurface;
	Parms.SpawnedPSC = SpawnedPSC;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnStartOverheated
// (Event, Protected, BlueprintEvent)
// Parameters:

void UB_Ranged_Generic_C::OnStartOverheated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Generic_C", "OnStartOverheated");

	Params::UB_Ranged_Generic_C_OnStartOverheated_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.LoadNiagaraMuzzleSoftObject
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UB_Ranged_Generic_C::LoadNiagaraMuzzleSoftObject()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Generic_C", "LoadNiagaraMuzzleSoftObject");

	Params::UB_Ranged_Generic_C_LoadNiagaraMuzzleSoftObject_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnApplyFireModeData
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortWeaponFireModeData*     FireModeData                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UB_Ranged_Generic_C::OnApplyFireModeData(class UFortWeaponFireModeData* FireModeData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Generic_C", "OnApplyFireModeData");

	Params::UB_Ranged_Generic_C_OnApplyFireModeData_Params Parms{};

	Parms.FireModeData = FireModeData;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.ScopeEffectDelay2
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UB_Ranged_Generic_C::ScopeEffectDelay2()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Generic_C", "ScopeEffectDelay2");

	Params::UB_Ranged_Generic_C_ScopeEffectDelay2_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.ScopeEffectDelay1
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void UB_Ranged_Generic_C::ScopeEffectDelay1()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Generic_C", "ScopeEffectDelay1");

	Params::UB_Ranged_Generic_C_ScopeEffectDelay1_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.ExecuteUbergraph_B_Ranged_Generic
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetPI_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MultiplyMultiply_FloatFloat_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue                         (NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bPersistentFire                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bSecondaryFire                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPawn*                       CallFunc_GetInstigator_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EFortReloadFXState      K2Node_Event_ReloadStage                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_GetGameTimeInSeconds_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             K2Node_MathExpression_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTimerHandle                CallFunc_K2_SetTimerDelegate_ReturnValue_1                       (NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_MathExpression_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bNewIsTargeting                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPawn*                       CallFunc_GetInstigator_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetHiddenInGameControllerOnly_ReturnValue               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInVehicle_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_IsClosed_Variable                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UFortAIPawn*>         CallFunc_GetAllActorsOfClass_OutActors                           (ReferenceParm)
// bool                               K2Node_CustomEvent_Enable_Or_Disable                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_StencilBufferValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPawn*                       CallFunc_GetInstigator_ReturnValue_2                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerPawn*             K2Node_DynamicCast_AsFort_Player_Pawn_1                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_1                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInVehicle_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_3                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPawn*                       CallFunc_GetInstigator_ReturnValue_3                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortPawn*                   K2Node_DynamicCast_AsFort_Pawn                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_2                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_4                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAlterationItemDefinition*K2Node_Event_NewAlteration                                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FFortCosmeticModification   K2Node_Event_CosmeticMod                                         (None)
// TSoftObjectPtr<class UFXSystemAsset>CallFunc_SelectAltSystemAsset_ReturnValue                        (UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_IsAssetNull_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAssetNull_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UFXSystemAsset>CallFunc_SelectAltSystemAsset_ReturnValue_1                      (UObjectWrapper, HasGetValueTypeHash)
// bool                               CallFunc_IsAssetNull_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAssetNull_ReturnValue_3                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UseScopeTargeting_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               Temp_bool_Has_Been_Initd_Variable                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAtLocation_ReturnValue                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Enable_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_TargetLimit_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_CustomEvent_Enable                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_TargetLimit                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsUsingFirstPersonCamera_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_SelectInt_ReturnValue_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UController*                 CallFunc_GetInstigatorController_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortPlayerControllerZone*   K2Node_DynamicCast_AsFort_Player_Controller_Zone                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_3                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortWindManager*            CallFunc_GetWindManager_ReturnValue                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Loop_Counter_Variable_1                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UseScopeTargeting_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_UseScopeTargeting_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bVisible                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_Event_bSetForLocalControllerOnly                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPawn*                       CallFunc_GetInstigator_ReturnValue_4                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortPawn*                   K2Node_DynamicCast_AsFort_Pawn_1                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_4                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_5                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetLocalViewingPlayerController_ReturnValue             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_6                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetRenderingDetailMode_ReturnValue                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Greater_IntInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_7                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetHiddenInGameControllerOnly_ReturnValue_1             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              K2Node_CustomEvent_Which_Call                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable                                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_CustomEvent_NewRateOfFire                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetWeaponRateOfFireModifier_ReturnValue                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFloatValue_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsInAthena_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPawn*                       CallFunc_GetInstigator_ReturnValue_5                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortPawn*                   K2Node_DynamicCast_AsFort_Pawn_2                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_5                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_8                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortGameUserSettings*       CallFunc_GetFortGameUserSettings_ReturnValue                     (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FHitResult                  K2Node_Event_HitResult                                           (ConstParm, IsPlainOldData, NoDestructor, ContainsInstancedReference)
// enum class EPhysicalSurface        K2Node_Event_ImpactPhysicalSurface                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFXSystemComponent*          K2Node_Event_SpawnedPSC                                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Loaded_3                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_getScopeComp_scopeComponent                             (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetHiddenInGameOtherLocalControllersOnly_ReturnValue    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_9                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPawn*                       CallFunc_GetInstigator_ReturnValue_6                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortPawn*                   K2Node_DynamicCast_AsFort_Pawn_3                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_6                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_10                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetLocalViewingPlayerController_ReturnValue_1           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_11                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPawn*                       CallFunc_GetInstigator_ReturnValue_7                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsTargeting_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPawn*                   K2Node_DynamicCast_AsFort_Pawn_4                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_7                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerController*           CallFunc_GetLocalViewingPlayerController_ReturnValue_2           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_12                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_13                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsTargeting_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetIsTargeting_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 CallFunc_GetWeaponDataSmallPreviewImageBrush_ReturnValue         (None)
// enum class EFortWeaponTriggerType  CallFunc_GetWeaponDataTriggerType_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UTexture2D*                  K2Node_DynamicCast_AsTexture_2D                                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_8                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldPlayPersistentFireFX_ReturnValue                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_3                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Variable                                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortAIPawn*                 CallFunc_Array_Get_Item                                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Add_IntInt_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_14                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Loaded_2                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_getScopeComp_scopeComponent_1                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_K2_GetComponentToWorld_ReturnValue                      (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue_1                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_InverseTransformLocation_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_InverseTransformLocation_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FLinearColor                CallFunc_Conv_VectorToLinearColor_ReturnValue_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_15                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_ShouldPlayShellFX_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortWeaponFireModeData*     K2Node_Event_FireModeData                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_16                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_17                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_1                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_ByteByte_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UStaticMeshComponent*        CallFunc_getScopeComp_scopeComponent_2                           (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_18                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_19                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_20                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              Temp_int_Array_Index_Variable_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable_1                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_Array_Get_Item_1                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UNiagaraSystem*              K2Node_DynamicCast_AsNiagara_System                              (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_9                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraSystem*              CallFunc_SetBeamNiagaraSystem_ReturnValue                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             K2Node_DynamicCast_AsParticle_System                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_10                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             CallFunc_SetBeamParticleSystem_ReturnValue                       (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetValueAsBool_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TSoftObjectPtr<class UNiagaraSystem>CallFunc_GetCorrectMuzzleNiagaraSystem_OutNiagaraSystem          (HasGetValueTypeHash)
// class UObject*                     CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAssetNull_ReturnValue_4                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UNiagaraSystem*              K2Node_DynamicCast_AsNiagara_System_1                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_11                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_21                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Not_PreBool_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_2                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_4                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Loaded_1                                      (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EFortWeaponCoreAnimationCallFunc_GetCoreAnimation_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Conv_ByteToInt_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_22                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPawn*                       CallFunc_GetInstigator_ReturnValue_8                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// TArray<class UFXSystemComponent*>  CallFunc_GetActiveMuzzleComponents_NewParam                      (ReferenceParm, ContainsInstancedReference)
// class UFortPawn*                   K2Node_DynamicCast_AsFort_Pawn_5                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_12                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFXSystemComponent*          CallFunc_Array_Get_Item_2                                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Length_ReturnValue_2                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue                        (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_Less_IntInt_ReturnValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_CreateDynamicMaterialInstance_ReturnValue               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue_23                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_GetBeamPSC_ReturnValue                                  (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetUseBeamParticles_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPawn*                       CallFunc_GetInstigator_ReturnValue_9                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetNumericCVar_OutValue                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetNumericCVar_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UPlayerPawn_Generic_Parent_C*K2Node_DynamicCast_AsPlayer_Pawn_Generic_Parent                  (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_13                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMax_ReturnValue                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasAuthority_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_5                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetNumericCVar_OutValue_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetNumericCVar_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMax_ReturnValue_1                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetNumericCVar_OutValue_2                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_GetNumericCVar_ReturnValue_2                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_1                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMax_ReturnValue_2                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_2                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_6                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_1                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_2                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_3                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable_2                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     K2Node_CustomEvent_Loaded                                        (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             K2Node_DynamicCast_AsParticle_System_1                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_14                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UObject*                     Temp_object_Variable_3                                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_7                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UNiagaraSystem*              K2Node_DynamicCast_AsNiagara_System_2                            (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_15                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystem*             K2Node_DynamicCast_AsParticle_System_2                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess_16                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsDedicatedServer_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate_8                           (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue                          (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTransform                  CallFunc_GetSocketTransform_ReturnValue_1                        (IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location                                 (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation                                 (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale                                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_BreakTransform_Location_1                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_BreakTransform_Rotation_1                               (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FVector                     CallFunc_BreakTransform_Scale_1                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_X_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Y_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_BreakVector_Z_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Add_DoubleDouble_ReturnValue                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue_3                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_3                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_GetSocketLocation_ReturnValue_4                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_4                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_Subtract_VectorVector_ReturnValue                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UParticleSystemComponent*    CallFunc_SpawnEmitterAttached_ReturnValue_1                      (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// struct FRotator                    CallFunc_Conv_VectorToRotator_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FHitResult                  CallFunc_K2_SetWorldRotation_SweepHitResult                      (IsPlainOldData, NoDestructor, ContainsInstancedReference)
// double                             CallFunc_VSize_ReturnValue                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSocketExist_ReturnValue                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Multiply_DoubleDouble_ReturnValue_5                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_4                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_5                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_6                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_Divide_DoubleDouble_ReturnValue_7                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_1                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector                     CallFunc_MakeVector_ReturnValue_2                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_DoesSocketExist_ReturnValue_1                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_BooleanAND_ReturnValue_3                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_RetriggerableDelay_Duration_ImplicitCast                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SetPostProcessParams_InputPin_ImplicitCast              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMax_A_ImplicitCast                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMax_A_ImplicitCast_1                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_FMax_A_ImplicitCast_2                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetCullDistance_NewCullDistance_ImplicitCast            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetCullDistance_NewCullDistance_ImplicitCast_1          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetCullDistance_NewCullDistance_ImplicitCast_2          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast                    (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast_1                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_Param_ImplicitCast_2                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_Ranged_Generic_C::ExecuteUbergraph_B_Ranged_Generic(int32 EntryPoint, double CallFunc_GetPI_ReturnValue, double CallFunc_MultiplyMultiply_FloatFloat_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool K2Node_Event_bPersistentFire, bool K2Node_Event_bSecondaryFire, class UPawn* CallFunc_GetInstigator_ReturnValue, enum class EFortReloadFXState K2Node_Event_ReloadStage, bool CallFunc_IsValid_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue, double CallFunc_GetGameTimeInSeconds_ReturnValue, double K2Node_MathExpression_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, bool K2Node_MathExpression_ReturnValue_1, bool K2Node_Event_bNewIsTargeting, class UPawn* CallFunc_GetInstigator_ReturnValue_1, class UFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn, bool K2Node_DynamicCast_bSuccess, bool CallFunc_SetHiddenInGameControllerOnly_ReturnValue, bool CallFunc_IsInVehicle_ReturnValue, bool CallFunc_IsValid_ReturnValue_1, bool Temp_bool_IsClosed_Variable, TArray<class UFortAIPawn*>& CallFunc_GetAllActorsOfClass_OutActors, bool K2Node_CustomEvent_Enable_Or_Disable, int32 K2Node_CustomEvent_StencilBufferValue, class UPawn* CallFunc_GetInstigator_ReturnValue_2, class UFortPlayerPawn* K2Node_DynamicCast_AsFort_Player_Pawn_1, bool K2Node_DynamicCast_bSuccess_1, bool CallFunc_IsValid_ReturnValue_2, bool CallFunc_IsInVehicle_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_3, class UPawn* CallFunc_GetInstigator_ReturnValue_3, class UFortPawn* K2Node_DynamicCast_AsFort_Pawn, bool K2Node_DynamicCast_bSuccess_2, bool CallFunc_IsValid_ReturnValue_4, class UFortAlterationItemDefinition* K2Node_Event_NewAlteration, const struct FFortCosmeticModification& K2Node_Event_CosmeticMod, TSoftObjectPtr<class UFXSystemAsset> CallFunc_SelectAltSystemAsset_ReturnValue, bool CallFunc_IsAssetNull_ReturnValue, bool CallFunc_IsAssetNull_ReturnValue_1, bool CallFunc_Not_PreBool_ReturnValue, TSoftObjectPtr<class UFXSystemAsset> CallFunc_SelectAltSystemAsset_ReturnValue_1, bool CallFunc_IsAssetNull_ReturnValue_2, bool CallFunc_IsAssetNull_ReturnValue_3, bool CallFunc_UseScopeTargeting_ReturnValue, bool Temp_bool_Has_Been_Initd_Variable, const struct FVector& CallFunc_GetSocketLocation_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAtLocation_ReturnValue, bool CallFunc_IsDedicatedServer_ReturnValue_1, bool K2Node_CustomEvent_Enable_1, int32 K2Node_CustomEvent_TargetLimit_1, int32 Temp_int_Loop_Counter_Variable, int32 CallFunc_SelectInt_ReturnValue, int32 CallFunc_Add_IntInt_ReturnValue, bool K2Node_CustomEvent_Enable, int32 K2Node_CustomEvent_TargetLimit, bool CallFunc_IsUsingFirstPersonCamera_ReturnValue, int32 CallFunc_SelectInt_ReturnValue_1, class UController* CallFunc_GetInstigatorController_ReturnValue, class UFortPlayerControllerZone* K2Node_DynamicCast_AsFort_Player_Controller_Zone, bool K2Node_DynamicCast_bSuccess_3, class UFortWindManager* CallFunc_GetWindManager_ReturnValue, int32 Temp_int_Loop_Counter_Variable_1, int32 CallFunc_Add_IntInt_ReturnValue_1, bool CallFunc_UseScopeTargeting_ReturnValue_1, bool CallFunc_UseScopeTargeting_ReturnValue_2, bool K2Node_Event_bVisible, bool K2Node_Event_bSetForLocalControllerOnly, class UPawn* CallFunc_GetInstigator_ReturnValue_4, class UFortPawn* K2Node_DynamicCast_AsFort_Pawn_1, bool K2Node_DynamicCast_bSuccess_4, bool CallFunc_IsValid_ReturnValue_5, class UPlayerController* CallFunc_GetLocalViewingPlayerController_ReturnValue, bool CallFunc_IsValid_ReturnValue_6, int32 CallFunc_GetRenderingDetailMode_ReturnValue, bool CallFunc_Greater_IntInt_ReturnValue, bool CallFunc_BooleanAND_ReturnValue, bool CallFunc_IsValid_ReturnValue_7, bool CallFunc_SetHiddenInGameControllerOnly_ReturnValue_1, int32 K2Node_CustomEvent_Which_Call, class UObject* Temp_object_Variable, float K2Node_CustomEvent_NewRateOfFire, float CallFunc_GetWeaponRateOfFireModifier_ReturnValue, float CallFunc_GetFloatValue_ReturnValue, bool CallFunc_IsInAthena_ReturnValue, class UPawn* CallFunc_GetInstigator_ReturnValue_5, class UFortPawn* K2Node_DynamicCast_AsFort_Pawn_2, bool K2Node_DynamicCast_bSuccess_5, bool CallFunc_IsValid_ReturnValue_8, class UFortGameUserSettings* CallFunc_GetFortGameUserSettings_ReturnValue, const struct FHitResult& K2Node_Event_HitResult, enum class EPhysicalSurface K2Node_Event_ImpactPhysicalSurface, class UFXSystemComponent* K2Node_Event_SpawnedPSC, class UObject* K2Node_CustomEvent_Loaded_3, int32 CallFunc_Conv_ByteToInt_ReturnValue, class UStaticMeshComponent* CallFunc_getScopeComp_scopeComponent, bool CallFunc_SetHiddenInGameOtherLocalControllersOnly_ReturnValue, bool CallFunc_IsValid_ReturnValue_9, class UPawn* CallFunc_GetInstigator_ReturnValue_6, class UFortPawn* K2Node_DynamicCast_AsFort_Pawn_3, bool K2Node_DynamicCast_bSuccess_6, bool CallFunc_IsValid_ReturnValue_10, class UPlayerController* CallFunc_GetLocalViewingPlayerController_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_11, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_2, int32 Temp_int_Array_Index_Variable, class UPawn* CallFunc_GetInstigator_ReturnValue_7, bool CallFunc_GetIsTargeting_ReturnValue, class UFortPawn* K2Node_DynamicCast_AsFort_Pawn_4, bool K2Node_DynamicCast_bSuccess_7, class UPlayerController* CallFunc_GetLocalViewingPlayerController_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_12, bool CallFunc_IsValid_ReturnValue_13, bool CallFunc_GetIsTargeting_ReturnValue_1, bool CallFunc_GetIsTargeting_ReturnValue_2, const struct FSlateBrush& CallFunc_GetWeaponDataSmallPreviewImageBrush_ReturnValue, enum class EFortWeaponTriggerType CallFunc_GetWeaponDataTriggerType_ReturnValue, bool K2Node_SwitchEnum_CmpSuccess, class UTexture2D* K2Node_DynamicCast_AsTexture_2D, bool K2Node_DynamicCast_bSuccess_8, bool CallFunc_ShouldPlayPersistentFireFX_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_3, int32 Temp_int_Variable, class UFortAIPawn* CallFunc_Array_Get_Item, int32 CallFunc_Add_IntInt_ReturnValue_2, bool CallFunc_IsValid_ReturnValue_14, int32 CallFunc_Array_Length_ReturnValue, class UObject* K2Node_CustomEvent_Loaded_2, bool CallFunc_Less_IntInt_ReturnValue, class UStaticMeshComponent* CallFunc_getScopeComp_scopeComponent_1, const struct FTransform& CallFunc_K2_GetComponentToWorld_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_1, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_2, const struct FVector& CallFunc_InverseTransformLocation_ReturnValue, const struct FVector& CallFunc_InverseTransformLocation_ReturnValue_1, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue, const struct FLinearColor& CallFunc_Conv_VectorToLinearColor_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_15, bool CallFunc_ShouldPlayShellFX_ReturnValue, class UFortWeaponFireModeData* K2Node_Event_FireModeData, bool CallFunc_IsValid_ReturnValue_16, bool CallFunc_IsValid_ReturnValue_17, int32 CallFunc_Array_Length_ReturnValue_1, bool CallFunc_Less_IntInt_ReturnValue_1, bool CallFunc_EqualEqual_ByteByte_ReturnValue, class UStaticMeshComponent* CallFunc_getScopeComp_scopeComponent_2, bool CallFunc_IsValid_ReturnValue_18, bool CallFunc_IsValid_ReturnValue_19, bool CallFunc_IsValid_ReturnValue_20, int32 Temp_int_Array_Index_Variable_1, class UObject* Temp_object_Variable_1, class UParticleSystemComponent* CallFunc_Array_Get_Item_1, class UNiagaraSystem* K2Node_DynamicCast_AsNiagara_System, bool K2Node_DynamicCast_bSuccess_9, class UNiagaraSystem* CallFunc_SetBeamNiagaraSystem_ReturnValue, class UParticleSystem* K2Node_DynamicCast_AsParticle_System, bool K2Node_DynamicCast_bSuccess_10, class UParticleSystem* CallFunc_SetBeamParticleSystem_ReturnValue, bool CallFunc_GetValueAsBool_ReturnValue, TSoftObjectPtr<class UNiagaraSystem> CallFunc_GetCorrectMuzzleNiagaraSystem_OutNiagaraSystem, class UObject* CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue, bool CallFunc_IsAssetNull_ReturnValue_4, class UNiagaraSystem* K2Node_DynamicCast_AsNiagara_System_1, bool K2Node_DynamicCast_bSuccess_11, bool CallFunc_Not_PreBool_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_21, bool CallFunc_Not_PreBool_ReturnValue_2, bool CallFunc_BooleanAND_ReturnValue_1, bool CallFunc_IsDedicatedServer_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_4, class UObject* K2Node_CustomEvent_Loaded_1, enum class EFortWeaponCoreAnimation CallFunc_GetCoreAnimation_ReturnValue, int32 CallFunc_Conv_ByteToInt_ReturnValue_1, bool CallFunc_IsValid_ReturnValue_22, class UPawn* CallFunc_GetInstigator_ReturnValue_8, TArray<class UFXSystemComponent*>& CallFunc_GetActiveMuzzleComponents_NewParam, class UFortPawn* K2Node_DynamicCast_AsFort_Pawn_5, bool K2Node_DynamicCast_bSuccess_12, class UFXSystemComponent* CallFunc_Array_Get_Item_2, int32 CallFunc_Array_Length_ReturnValue_2, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue, bool CallFunc_Less_IntInt_ReturnValue_2, class UMaterialInstanceDynamic* CallFunc_CreateDynamicMaterialInstance_ReturnValue, bool CallFunc_IsValid_ReturnValue_23, class UParticleSystemComponent* CallFunc_GetBeamPSC_ReturnValue, bool CallFunc_GetUseBeamParticles_ReturnValue, bool CallFunc_BooleanAND_ReturnValue_2, class UPawn* CallFunc_GetInstigator_ReturnValue_9, float CallFunc_GetNumericCVar_OutValue, bool CallFunc_GetNumericCVar_ReturnValue, class UPlayerPawn_Generic_Parent_C* K2Node_DynamicCast_AsPlayer_Pawn_Generic_Parent, bool K2Node_DynamicCast_bSuccess_13, double CallFunc_FMax_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue, bool CallFunc_HasAuthority_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_5, float CallFunc_GetNumericCVar_OutValue_1, bool CallFunc_GetNumericCVar_ReturnValue_1, double CallFunc_FMax_ReturnValue_1, float CallFunc_GetNumericCVar_OutValue_2, bool CallFunc_GetNumericCVar_ReturnValue_2, double CallFunc_Divide_DoubleDouble_ReturnValue_1, double CallFunc_FMax_ReturnValue_2, double CallFunc_Divide_DoubleDouble_ReturnValue_2, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_6, double CallFunc_Multiply_DoubleDouble_ReturnValue_1, double CallFunc_Multiply_DoubleDouble_ReturnValue_2, double CallFunc_Multiply_DoubleDouble_ReturnValue_3, class UObject* Temp_object_Variable_2, class UObject* K2Node_CustomEvent_Loaded, class UParticleSystem* K2Node_DynamicCast_AsParticle_System_1, bool K2Node_DynamicCast_bSuccess_14, class UObject* Temp_object_Variable_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_7, class UNiagaraSystem* K2Node_DynamicCast_AsNiagara_System_2, bool K2Node_DynamicCast_bSuccess_15, class UParticleSystem* K2Node_DynamicCast_AsParticle_System_2, bool K2Node_DynamicCast_bSuccess_16, bool CallFunc_IsDedicatedServer_ReturnValue_3, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_8, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue, const struct FTransform& CallFunc_GetSocketTransform_ReturnValue_1, const struct FVector& CallFunc_BreakTransform_Location, const struct FRotator& CallFunc_BreakTransform_Rotation, const struct FVector& CallFunc_BreakTransform_Scale, const struct FVector& CallFunc_BreakTransform_Location_1, const struct FRotator& CallFunc_BreakTransform_Rotation_1, const struct FVector& CallFunc_BreakTransform_Scale_1, double CallFunc_BreakVector_X, double CallFunc_BreakVector_Y, double CallFunc_BreakVector_Z, double CallFunc_BreakVector_X_1, double CallFunc_BreakVector_Y_1, double CallFunc_BreakVector_Z_1, double CallFunc_Add_DoubleDouble_ReturnValue, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_3, double CallFunc_Divide_DoubleDouble_ReturnValue_3, const struct FVector& CallFunc_GetSocketLocation_ReturnValue_4, double CallFunc_Multiply_DoubleDouble_ReturnValue_4, const struct FVector& CallFunc_Subtract_VectorVector_ReturnValue, class UParticleSystemComponent* CallFunc_SpawnEmitterAttached_ReturnValue_1, const struct FRotator& CallFunc_Conv_VectorToRotator_ReturnValue, const struct FHitResult& CallFunc_K2_SetWorldRotation_SweepHitResult, double CallFunc_VSize_ReturnValue, bool CallFunc_DoesSocketExist_ReturnValue, double CallFunc_Multiply_DoubleDouble_ReturnValue_5, double CallFunc_Divide_DoubleDouble_ReturnValue_4, double CallFunc_Divide_DoubleDouble_ReturnValue_5, const struct FVector& CallFunc_MakeVector_ReturnValue, double CallFunc_Divide_DoubleDouble_ReturnValue_6, double CallFunc_Divide_DoubleDouble_ReturnValue_7, const struct FVector& CallFunc_MakeVector_ReturnValue_1, const struct FVector& CallFunc_MakeVector_ReturnValue_2, bool CallFunc_DoesSocketExist_ReturnValue_1, bool CallFunc_BooleanAND_ReturnValue_3, float CallFunc_RetriggerableDelay_Duration_ImplicitCast, double CallFunc_SetPostProcessParams_InputPin_ImplicitCast, double CallFunc_FMax_A_ImplicitCast, double CallFunc_FMax_A_ImplicitCast_1, double CallFunc_FMax_A_ImplicitCast_2, float CallFunc_SetCullDistance_NewCullDistance_ImplicitCast, float CallFunc_SetCullDistance_NewCullDistance_ImplicitCast_1, float CallFunc_SetCullDistance_NewCullDistance_ImplicitCast_2, float CallFunc_SetFloatParameter_Param_ImplicitCast, float CallFunc_SetFloatParameter_Param_ImplicitCast_1, float CallFunc_SetFloatParameter_Param_ImplicitCast_2)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Generic_C", "ExecuteUbergraph_B_Ranged_Generic");

	Params::UB_Ranged_Generic_C_ExecuteUbergraph_B_Ranged_Generic_Params Parms{};

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_GetPI_ReturnValue = CallFunc_GetPI_ReturnValue;
	Parms.CallFunc_MultiplyMultiply_FloatFloat_ReturnValue = CallFunc_MultiplyMultiply_FloatFloat_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue = CallFunc_Multiply_DoubleDouble_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue = CallFunc_K2_SetTimerDelegate_ReturnValue;
	Parms.K2Node_Event_bPersistentFire = K2Node_Event_bPersistentFire;
	Parms.K2Node_Event_bSecondaryFire = K2Node_Event_bSecondaryFire;
	Parms.CallFunc_GetInstigator_ReturnValue = CallFunc_GetInstigator_ReturnValue;
	Parms.K2Node_Event_ReloadStage = K2Node_Event_ReloadStage;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue = CallFunc_IsDedicatedServer_ReturnValue;
	Parms.CallFunc_GetGameTimeInSeconds_ReturnValue = CallFunc_GetGameTimeInSeconds_ReturnValue;
	Parms.K2Node_MathExpression_ReturnValue = K2Node_MathExpression_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_1 = K2Node_CreateDelegate_OutputDelegate_1;
	Parms.CallFunc_K2_SetTimerDelegate_ReturnValue_1 = CallFunc_K2_SetTimerDelegate_ReturnValue_1;
	Parms.K2Node_MathExpression_ReturnValue_1 = K2Node_MathExpression_ReturnValue_1;
	Parms.K2Node_Event_bNewIsTargeting = K2Node_Event_bNewIsTargeting;
	Parms.CallFunc_GetInstigator_ReturnValue_1 = CallFunc_GetInstigator_ReturnValue_1;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn = K2Node_DynamicCast_AsFort_Player_Pawn;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_SetHiddenInGameControllerOnly_ReturnValue = CallFunc_SetHiddenInGameControllerOnly_ReturnValue;
	Parms.CallFunc_IsInVehicle_ReturnValue = CallFunc_IsInVehicle_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_1 = CallFunc_IsValid_ReturnValue_1;
	Parms.Temp_bool_IsClosed_Variable = Temp_bool_IsClosed_Variable;
	Parms.CallFunc_GetAllActorsOfClass_OutActors = CallFunc_GetAllActorsOfClass_OutActors;
	Parms.K2Node_CustomEvent_Enable_Or_Disable = K2Node_CustomEvent_Enable_Or_Disable;
	Parms.K2Node_CustomEvent_StencilBufferValue = K2Node_CustomEvent_StencilBufferValue;
	Parms.CallFunc_GetInstigator_ReturnValue_2 = CallFunc_GetInstigator_ReturnValue_2;
	Parms.K2Node_DynamicCast_AsFort_Player_Pawn_1 = K2Node_DynamicCast_AsFort_Player_Pawn_1;
	Parms.K2Node_DynamicCast_bSuccess_1 = K2Node_DynamicCast_bSuccess_1;
	Parms.CallFunc_IsValid_ReturnValue_2 = CallFunc_IsValid_ReturnValue_2;
	Parms.CallFunc_IsInVehicle_ReturnValue_1 = CallFunc_IsInVehicle_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_3 = CallFunc_IsValid_ReturnValue_3;
	Parms.CallFunc_GetInstigator_ReturnValue_3 = CallFunc_GetInstigator_ReturnValue_3;
	Parms.K2Node_DynamicCast_AsFort_Pawn = K2Node_DynamicCast_AsFort_Pawn;
	Parms.K2Node_DynamicCast_bSuccess_2 = K2Node_DynamicCast_bSuccess_2;
	Parms.CallFunc_IsValid_ReturnValue_4 = CallFunc_IsValid_ReturnValue_4;
	Parms.K2Node_Event_NewAlteration = K2Node_Event_NewAlteration;
	Parms.K2Node_Event_CosmeticMod = K2Node_Event_CosmeticMod;
	Parms.CallFunc_SelectAltSystemAsset_ReturnValue = CallFunc_SelectAltSystemAsset_ReturnValue;
	Parms.CallFunc_IsAssetNull_ReturnValue = CallFunc_IsAssetNull_ReturnValue;
	Parms.CallFunc_IsAssetNull_ReturnValue_1 = CallFunc_IsAssetNull_ReturnValue_1;
	Parms.CallFunc_Not_PreBool_ReturnValue = CallFunc_Not_PreBool_ReturnValue;
	Parms.CallFunc_SelectAltSystemAsset_ReturnValue_1 = CallFunc_SelectAltSystemAsset_ReturnValue_1;
	Parms.CallFunc_IsAssetNull_ReturnValue_2 = CallFunc_IsAssetNull_ReturnValue_2;
	Parms.CallFunc_IsAssetNull_ReturnValue_3 = CallFunc_IsAssetNull_ReturnValue_3;
	Parms.CallFunc_UseScopeTargeting_ReturnValue = CallFunc_UseScopeTargeting_ReturnValue;
	Parms.Temp_bool_Has_Been_Initd_Variable = Temp_bool_Has_Been_Initd_Variable;
	Parms.CallFunc_GetSocketLocation_ReturnValue = CallFunc_GetSocketLocation_ReturnValue;
	Parms.CallFunc_SpawnEmitterAtLocation_ReturnValue = CallFunc_SpawnEmitterAtLocation_ReturnValue;
	Parms.CallFunc_IsDedicatedServer_ReturnValue_1 = CallFunc_IsDedicatedServer_ReturnValue_1;
	Parms.K2Node_CustomEvent_Enable_1 = K2Node_CustomEvent_Enable_1;
	Parms.K2Node_CustomEvent_TargetLimit_1 = K2Node_CustomEvent_TargetLimit_1;
	Parms.Temp_int_Loop_Counter_Variable = Temp_int_Loop_Counter_Variable;
	Parms.CallFunc_SelectInt_ReturnValue = CallFunc_SelectInt_ReturnValue;
	Parms.CallFunc_Add_IntInt_ReturnValue = CallFunc_Add_IntInt_ReturnValue;
	Parms.K2Node_CustomEvent_Enable = K2Node_CustomEvent_Enable;
	Parms.K2Node_CustomEvent_TargetLimit = K2Node_CustomEvent_TargetLimit;
	Parms.CallFunc_IsUsingFirstPersonCamera_ReturnValue = CallFunc_IsUsingFirstPersonCamera_ReturnValue;
	Parms.CallFunc_SelectInt_ReturnValue_1 = CallFunc_SelectInt_ReturnValue_1;
	Parms.CallFunc_GetInstigatorController_ReturnValue = CallFunc_GetInstigatorController_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Player_Controller_Zone = K2Node_DynamicCast_AsFort_Player_Controller_Zone;
	Parms.K2Node_DynamicCast_bSuccess_3 = K2Node_DynamicCast_bSuccess_3;
	Parms.CallFunc_GetWindManager_ReturnValue = CallFunc_GetWindManager_ReturnValue;
	Parms.Temp_int_Loop_Counter_Variable_1 = Temp_int_Loop_Counter_Variable_1;
	Parms.CallFunc_Add_IntInt_ReturnValue_1 = CallFunc_Add_IntInt_ReturnValue_1;
	Parms.CallFunc_UseScopeTargeting_ReturnValue_1 = CallFunc_UseScopeTargeting_ReturnValue_1;
	Parms.CallFunc_UseScopeTargeting_ReturnValue_2 = CallFunc_UseScopeTargeting_ReturnValue_2;
	Parms.K2Node_Event_bVisible = K2Node_Event_bVisible;
	Parms.K2Node_Event_bSetForLocalControllerOnly = K2Node_Event_bSetForLocalControllerOnly;
	Parms.CallFunc_GetInstigator_ReturnValue_4 = CallFunc_GetInstigator_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsFort_Pawn_1 = K2Node_DynamicCast_AsFort_Pawn_1;
	Parms.K2Node_DynamicCast_bSuccess_4 = K2Node_DynamicCast_bSuccess_4;
	Parms.CallFunc_IsValid_ReturnValue_5 = CallFunc_IsValid_ReturnValue_5;
	Parms.CallFunc_GetLocalViewingPlayerController_ReturnValue = CallFunc_GetLocalViewingPlayerController_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_6 = CallFunc_IsValid_ReturnValue_6;
	Parms.CallFunc_GetRenderingDetailMode_ReturnValue = CallFunc_GetRenderingDetailMode_ReturnValue;
	Parms.CallFunc_Greater_IntInt_ReturnValue = CallFunc_Greater_IntInt_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue = CallFunc_BooleanAND_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_7 = CallFunc_IsValid_ReturnValue_7;
	Parms.CallFunc_SetHiddenInGameControllerOnly_ReturnValue_1 = CallFunc_SetHiddenInGameControllerOnly_ReturnValue_1;
	Parms.K2Node_CustomEvent_Which_Call = K2Node_CustomEvent_Which_Call;
	Parms.Temp_object_Variable = Temp_object_Variable;
	Parms.K2Node_CustomEvent_NewRateOfFire = K2Node_CustomEvent_NewRateOfFire;
	Parms.CallFunc_GetWeaponRateOfFireModifier_ReturnValue = CallFunc_GetWeaponRateOfFireModifier_ReturnValue;
	Parms.CallFunc_GetFloatValue_ReturnValue = CallFunc_GetFloatValue_ReturnValue;
	Parms.CallFunc_IsInAthena_ReturnValue = CallFunc_IsInAthena_ReturnValue;
	Parms.CallFunc_GetInstigator_ReturnValue_5 = CallFunc_GetInstigator_ReturnValue_5;
	Parms.K2Node_DynamicCast_AsFort_Pawn_2 = K2Node_DynamicCast_AsFort_Pawn_2;
	Parms.K2Node_DynamicCast_bSuccess_5 = K2Node_DynamicCast_bSuccess_5;
	Parms.CallFunc_IsValid_ReturnValue_8 = CallFunc_IsValid_ReturnValue_8;
	Parms.CallFunc_GetFortGameUserSettings_ReturnValue = CallFunc_GetFortGameUserSettings_ReturnValue;
	Parms.K2Node_Event_HitResult = K2Node_Event_HitResult;
	Parms.K2Node_Event_ImpactPhysicalSurface = K2Node_Event_ImpactPhysicalSurface;
	Parms.K2Node_Event_SpawnedPSC = K2Node_Event_SpawnedPSC;
	Parms.K2Node_CustomEvent_Loaded_3 = K2Node_CustomEvent_Loaded_3;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue = CallFunc_Conv_ByteToInt_ReturnValue;
	Parms.CallFunc_getScopeComp_scopeComponent = CallFunc_getScopeComp_scopeComponent;
	Parms.CallFunc_SetHiddenInGameOtherLocalControllersOnly_ReturnValue = CallFunc_SetHiddenInGameOtherLocalControllersOnly_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_9 = CallFunc_IsValid_ReturnValue_9;
	Parms.CallFunc_GetInstigator_ReturnValue_6 = CallFunc_GetInstigator_ReturnValue_6;
	Parms.K2Node_DynamicCast_AsFort_Pawn_3 = K2Node_DynamicCast_AsFort_Pawn_3;
	Parms.K2Node_DynamicCast_bSuccess_6 = K2Node_DynamicCast_bSuccess_6;
	Parms.CallFunc_IsValid_ReturnValue_10 = CallFunc_IsValid_ReturnValue_10;
	Parms.CallFunc_GetLocalViewingPlayerController_ReturnValue_1 = CallFunc_GetLocalViewingPlayerController_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_11 = CallFunc_IsValid_ReturnValue_11;
	Parms.K2Node_CreateDelegate_OutputDelegate_2 = K2Node_CreateDelegate_OutputDelegate_2;
	Parms.Temp_int_Array_Index_Variable = Temp_int_Array_Index_Variable;
	Parms.CallFunc_GetInstigator_ReturnValue_7 = CallFunc_GetInstigator_ReturnValue_7;
	Parms.CallFunc_GetIsTargeting_ReturnValue = CallFunc_GetIsTargeting_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Pawn_4 = K2Node_DynamicCast_AsFort_Pawn_4;
	Parms.K2Node_DynamicCast_bSuccess_7 = K2Node_DynamicCast_bSuccess_7;
	Parms.CallFunc_GetLocalViewingPlayerController_ReturnValue_2 = CallFunc_GetLocalViewingPlayerController_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_12 = CallFunc_IsValid_ReturnValue_12;
	Parms.CallFunc_IsValid_ReturnValue_13 = CallFunc_IsValid_ReturnValue_13;
	Parms.CallFunc_GetIsTargeting_ReturnValue_1 = CallFunc_GetIsTargeting_ReturnValue_1;
	Parms.CallFunc_GetIsTargeting_ReturnValue_2 = CallFunc_GetIsTargeting_ReturnValue_2;
	Parms.CallFunc_GetWeaponDataSmallPreviewImageBrush_ReturnValue = CallFunc_GetWeaponDataSmallPreviewImageBrush_ReturnValue;
	Parms.CallFunc_GetWeaponDataTriggerType_ReturnValue = CallFunc_GetWeaponDataTriggerType_ReturnValue;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;
	Parms.K2Node_DynamicCast_AsTexture_2D = K2Node_DynamicCast_AsTexture_2D;
	Parms.K2Node_DynamicCast_bSuccess_8 = K2Node_DynamicCast_bSuccess_8;
	Parms.CallFunc_ShouldPlayPersistentFireFX_ReturnValue = CallFunc_ShouldPlayPersistentFireFX_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_3 = K2Node_CreateDelegate_OutputDelegate_3;
	Parms.Temp_int_Variable = Temp_int_Variable;
	Parms.CallFunc_Array_Get_Item = CallFunc_Array_Get_Item;
	Parms.CallFunc_Add_IntInt_ReturnValue_2 = CallFunc_Add_IntInt_ReturnValue_2;
	Parms.CallFunc_IsValid_ReturnValue_14 = CallFunc_IsValid_ReturnValue_14;
	Parms.CallFunc_Array_Length_ReturnValue = CallFunc_Array_Length_ReturnValue;
	Parms.K2Node_CustomEvent_Loaded_2 = K2Node_CustomEvent_Loaded_2;
	Parms.CallFunc_Less_IntInt_ReturnValue = CallFunc_Less_IntInt_ReturnValue;
	Parms.CallFunc_getScopeComp_scopeComponent_1 = CallFunc_getScopeComp_scopeComponent_1;
	Parms.CallFunc_K2_GetComponentToWorld_ReturnValue = CallFunc_K2_GetComponentToWorld_ReturnValue;
	Parms.CallFunc_GetSocketLocation_ReturnValue_1 = CallFunc_GetSocketLocation_ReturnValue_1;
	Parms.CallFunc_GetSocketLocation_ReturnValue_2 = CallFunc_GetSocketLocation_ReturnValue_2;
	Parms.CallFunc_InverseTransformLocation_ReturnValue = CallFunc_InverseTransformLocation_ReturnValue;
	Parms.CallFunc_InverseTransformLocation_ReturnValue_1 = CallFunc_InverseTransformLocation_ReturnValue_1;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue = CallFunc_Conv_VectorToLinearColor_ReturnValue;
	Parms.CallFunc_Conv_VectorToLinearColor_ReturnValue_1 = CallFunc_Conv_VectorToLinearColor_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_15 = CallFunc_IsValid_ReturnValue_15;
	Parms.CallFunc_ShouldPlayShellFX_ReturnValue = CallFunc_ShouldPlayShellFX_ReturnValue;
	Parms.K2Node_Event_FireModeData = K2Node_Event_FireModeData;
	Parms.CallFunc_IsValid_ReturnValue_16 = CallFunc_IsValid_ReturnValue_16;
	Parms.CallFunc_IsValid_ReturnValue_17 = CallFunc_IsValid_ReturnValue_17;
	Parms.CallFunc_Array_Length_ReturnValue_1 = CallFunc_Array_Length_ReturnValue_1;
	Parms.CallFunc_Less_IntInt_ReturnValue_1 = CallFunc_Less_IntInt_ReturnValue_1;
	Parms.CallFunc_EqualEqual_ByteByte_ReturnValue = CallFunc_EqualEqual_ByteByte_ReturnValue;
	Parms.CallFunc_getScopeComp_scopeComponent_2 = CallFunc_getScopeComp_scopeComponent_2;
	Parms.CallFunc_IsValid_ReturnValue_18 = CallFunc_IsValid_ReturnValue_18;
	Parms.CallFunc_IsValid_ReturnValue_19 = CallFunc_IsValid_ReturnValue_19;
	Parms.CallFunc_IsValid_ReturnValue_20 = CallFunc_IsValid_ReturnValue_20;
	Parms.Temp_int_Array_Index_Variable_1 = Temp_int_Array_Index_Variable_1;
	Parms.Temp_object_Variable_1 = Temp_object_Variable_1;
	Parms.CallFunc_Array_Get_Item_1 = CallFunc_Array_Get_Item_1;
	Parms.K2Node_DynamicCast_AsNiagara_System = K2Node_DynamicCast_AsNiagara_System;
	Parms.K2Node_DynamicCast_bSuccess_9 = K2Node_DynamicCast_bSuccess_9;
	Parms.CallFunc_SetBeamNiagaraSystem_ReturnValue = CallFunc_SetBeamNiagaraSystem_ReturnValue;
	Parms.K2Node_DynamicCast_AsParticle_System = K2Node_DynamicCast_AsParticle_System;
	Parms.K2Node_DynamicCast_bSuccess_10 = K2Node_DynamicCast_bSuccess_10;
	Parms.CallFunc_SetBeamParticleSystem_ReturnValue = CallFunc_SetBeamParticleSystem_ReturnValue;
	Parms.CallFunc_GetValueAsBool_ReturnValue = CallFunc_GetValueAsBool_ReturnValue;
	Parms.CallFunc_GetCorrectMuzzleNiagaraSystem_OutNiagaraSystem = CallFunc_GetCorrectMuzzleNiagaraSystem_OutNiagaraSystem;
	Parms.CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue = CallFunc_Conv_SoftObjectReferenceToObject_ReturnValue;
	Parms.CallFunc_IsAssetNull_ReturnValue_4 = CallFunc_IsAssetNull_ReturnValue_4;
	Parms.K2Node_DynamicCast_AsNiagara_System_1 = K2Node_DynamicCast_AsNiagara_System_1;
	Parms.K2Node_DynamicCast_bSuccess_11 = K2Node_DynamicCast_bSuccess_11;
	Parms.CallFunc_Not_PreBool_ReturnValue_1 = CallFunc_Not_PreBool_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_21 = CallFunc_IsValid_ReturnValue_21;
	Parms.CallFunc_Not_PreBool_ReturnValue_2 = CallFunc_Not_PreBool_ReturnValue_2;
	Parms.CallFunc_BooleanAND_ReturnValue_1 = CallFunc_BooleanAND_ReturnValue_1;
	Parms.CallFunc_IsDedicatedServer_ReturnValue_2 = CallFunc_IsDedicatedServer_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_4 = K2Node_CreateDelegate_OutputDelegate_4;
	Parms.K2Node_CustomEvent_Loaded_1 = K2Node_CustomEvent_Loaded_1;
	Parms.CallFunc_GetCoreAnimation_ReturnValue = CallFunc_GetCoreAnimation_ReturnValue;
	Parms.CallFunc_Conv_ByteToInt_ReturnValue_1 = CallFunc_Conv_ByteToInt_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue_22 = CallFunc_IsValid_ReturnValue_22;
	Parms.CallFunc_GetInstigator_ReturnValue_8 = CallFunc_GetInstigator_ReturnValue_8;
	Parms.CallFunc_GetActiveMuzzleComponents_NewParam = CallFunc_GetActiveMuzzleComponents_NewParam;
	Parms.K2Node_DynamicCast_AsFort_Pawn_5 = K2Node_DynamicCast_AsFort_Pawn_5;
	Parms.K2Node_DynamicCast_bSuccess_12 = K2Node_DynamicCast_bSuccess_12;
	Parms.CallFunc_Array_Get_Item_2 = CallFunc_Array_Get_Item_2;
	Parms.CallFunc_Array_Length_ReturnValue_2 = CallFunc_Array_Length_ReturnValue_2;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue = CallFunc_SpawnEmitterAttached_ReturnValue;
	Parms.CallFunc_Less_IntInt_ReturnValue_2 = CallFunc_Less_IntInt_ReturnValue_2;
	Parms.CallFunc_CreateDynamicMaterialInstance_ReturnValue = CallFunc_CreateDynamicMaterialInstance_ReturnValue;
	Parms.CallFunc_IsValid_ReturnValue_23 = CallFunc_IsValid_ReturnValue_23;
	Parms.CallFunc_GetBeamPSC_ReturnValue = CallFunc_GetBeamPSC_ReturnValue;
	Parms.CallFunc_GetUseBeamParticles_ReturnValue = CallFunc_GetUseBeamParticles_ReturnValue;
	Parms.CallFunc_BooleanAND_ReturnValue_2 = CallFunc_BooleanAND_ReturnValue_2;
	Parms.CallFunc_GetInstigator_ReturnValue_9 = CallFunc_GetInstigator_ReturnValue_9;
	Parms.CallFunc_GetNumericCVar_OutValue = CallFunc_GetNumericCVar_OutValue;
	Parms.CallFunc_GetNumericCVar_ReturnValue = CallFunc_GetNumericCVar_ReturnValue;
	Parms.K2Node_DynamicCast_AsPlayer_Pawn_Generic_Parent = K2Node_DynamicCast_AsPlayer_Pawn_Generic_Parent;
	Parms.K2Node_DynamicCast_bSuccess_13 = K2Node_DynamicCast_bSuccess_13;
	Parms.CallFunc_FMax_ReturnValue = CallFunc_FMax_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue = CallFunc_Divide_DoubleDouble_ReturnValue;
	Parms.CallFunc_HasAuthority_ReturnValue = CallFunc_HasAuthority_ReturnValue;
	Parms.K2Node_CreateDelegate_OutputDelegate_5 = K2Node_CreateDelegate_OutputDelegate_5;
	Parms.CallFunc_GetNumericCVar_OutValue_1 = CallFunc_GetNumericCVar_OutValue_1;
	Parms.CallFunc_GetNumericCVar_ReturnValue_1 = CallFunc_GetNumericCVar_ReturnValue_1;
	Parms.CallFunc_FMax_ReturnValue_1 = CallFunc_FMax_ReturnValue_1;
	Parms.CallFunc_GetNumericCVar_OutValue_2 = CallFunc_GetNumericCVar_OutValue_2;
	Parms.CallFunc_GetNumericCVar_ReturnValue_2 = CallFunc_GetNumericCVar_ReturnValue_2;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_1 = CallFunc_Divide_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_FMax_ReturnValue_2 = CallFunc_FMax_ReturnValue_2;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_2 = CallFunc_Divide_DoubleDouble_ReturnValue_2;
	Parms.K2Node_CreateDelegate_OutputDelegate_6 = K2Node_CreateDelegate_OutputDelegate_6;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_1 = CallFunc_Multiply_DoubleDouble_ReturnValue_1;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_2 = CallFunc_Multiply_DoubleDouble_ReturnValue_2;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_3 = CallFunc_Multiply_DoubleDouble_ReturnValue_3;
	Parms.Temp_object_Variable_2 = Temp_object_Variable_2;
	Parms.K2Node_CustomEvent_Loaded = K2Node_CustomEvent_Loaded;
	Parms.K2Node_DynamicCast_AsParticle_System_1 = K2Node_DynamicCast_AsParticle_System_1;
	Parms.K2Node_DynamicCast_bSuccess_14 = K2Node_DynamicCast_bSuccess_14;
	Parms.Temp_object_Variable_3 = Temp_object_Variable_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_7 = K2Node_CreateDelegate_OutputDelegate_7;
	Parms.K2Node_DynamicCast_AsNiagara_System_2 = K2Node_DynamicCast_AsNiagara_System_2;
	Parms.K2Node_DynamicCast_bSuccess_15 = K2Node_DynamicCast_bSuccess_15;
	Parms.K2Node_DynamicCast_AsParticle_System_2 = K2Node_DynamicCast_AsParticle_System_2;
	Parms.K2Node_DynamicCast_bSuccess_16 = K2Node_DynamicCast_bSuccess_16;
	Parms.CallFunc_IsDedicatedServer_ReturnValue_3 = CallFunc_IsDedicatedServer_ReturnValue_3;
	Parms.K2Node_CreateDelegate_OutputDelegate_8 = K2Node_CreateDelegate_OutputDelegate_8;
	Parms.CallFunc_GetSocketTransform_ReturnValue = CallFunc_GetSocketTransform_ReturnValue;
	Parms.CallFunc_GetSocketTransform_ReturnValue_1 = CallFunc_GetSocketTransform_ReturnValue_1;
	Parms.CallFunc_BreakTransform_Location = CallFunc_BreakTransform_Location;
	Parms.CallFunc_BreakTransform_Rotation = CallFunc_BreakTransform_Rotation;
	Parms.CallFunc_BreakTransform_Scale = CallFunc_BreakTransform_Scale;
	Parms.CallFunc_BreakTransform_Location_1 = CallFunc_BreakTransform_Location_1;
	Parms.CallFunc_BreakTransform_Rotation_1 = CallFunc_BreakTransform_Rotation_1;
	Parms.CallFunc_BreakTransform_Scale_1 = CallFunc_BreakTransform_Scale_1;
	Parms.CallFunc_BreakVector_X = CallFunc_BreakVector_X;
	Parms.CallFunc_BreakVector_Y = CallFunc_BreakVector_Y;
	Parms.CallFunc_BreakVector_Z = CallFunc_BreakVector_Z;
	Parms.CallFunc_BreakVector_X_1 = CallFunc_BreakVector_X_1;
	Parms.CallFunc_BreakVector_Y_1 = CallFunc_BreakVector_Y_1;
	Parms.CallFunc_BreakVector_Z_1 = CallFunc_BreakVector_Z_1;
	Parms.CallFunc_Add_DoubleDouble_ReturnValue = CallFunc_Add_DoubleDouble_ReturnValue;
	Parms.CallFunc_GetSocketLocation_ReturnValue_3 = CallFunc_GetSocketLocation_ReturnValue_3;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_3 = CallFunc_Divide_DoubleDouble_ReturnValue_3;
	Parms.CallFunc_GetSocketLocation_ReturnValue_4 = CallFunc_GetSocketLocation_ReturnValue_4;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_4 = CallFunc_Multiply_DoubleDouble_ReturnValue_4;
	Parms.CallFunc_Subtract_VectorVector_ReturnValue = CallFunc_Subtract_VectorVector_ReturnValue;
	Parms.CallFunc_SpawnEmitterAttached_ReturnValue_1 = CallFunc_SpawnEmitterAttached_ReturnValue_1;
	Parms.CallFunc_Conv_VectorToRotator_ReturnValue = CallFunc_Conv_VectorToRotator_ReturnValue;
	Parms.CallFunc_K2_SetWorldRotation_SweepHitResult = CallFunc_K2_SetWorldRotation_SweepHitResult;
	Parms.CallFunc_VSize_ReturnValue = CallFunc_VSize_ReturnValue;
	Parms.CallFunc_DoesSocketExist_ReturnValue = CallFunc_DoesSocketExist_ReturnValue;
	Parms.CallFunc_Multiply_DoubleDouble_ReturnValue_5 = CallFunc_Multiply_DoubleDouble_ReturnValue_5;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_4 = CallFunc_Divide_DoubleDouble_ReturnValue_4;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_5 = CallFunc_Divide_DoubleDouble_ReturnValue_5;
	Parms.CallFunc_MakeVector_ReturnValue = CallFunc_MakeVector_ReturnValue;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_6 = CallFunc_Divide_DoubleDouble_ReturnValue_6;
	Parms.CallFunc_Divide_DoubleDouble_ReturnValue_7 = CallFunc_Divide_DoubleDouble_ReturnValue_7;
	Parms.CallFunc_MakeVector_ReturnValue_1 = CallFunc_MakeVector_ReturnValue_1;
	Parms.CallFunc_MakeVector_ReturnValue_2 = CallFunc_MakeVector_ReturnValue_2;
	Parms.CallFunc_DoesSocketExist_ReturnValue_1 = CallFunc_DoesSocketExist_ReturnValue_1;
	Parms.CallFunc_BooleanAND_ReturnValue_3 = CallFunc_BooleanAND_ReturnValue_3;
	Parms.CallFunc_RetriggerableDelay_Duration_ImplicitCast = CallFunc_RetriggerableDelay_Duration_ImplicitCast;
	Parms.CallFunc_SetPostProcessParams_InputPin_ImplicitCast = CallFunc_SetPostProcessParams_InputPin_ImplicitCast;
	Parms.CallFunc_FMax_A_ImplicitCast = CallFunc_FMax_A_ImplicitCast;
	Parms.CallFunc_FMax_A_ImplicitCast_1 = CallFunc_FMax_A_ImplicitCast_1;
	Parms.CallFunc_FMax_A_ImplicitCast_2 = CallFunc_FMax_A_ImplicitCast_2;
	Parms.CallFunc_SetCullDistance_NewCullDistance_ImplicitCast = CallFunc_SetCullDistance_NewCullDistance_ImplicitCast;
	Parms.CallFunc_SetCullDistance_NewCullDistance_ImplicitCast_1 = CallFunc_SetCullDistance_NewCullDistance_ImplicitCast_1;
	Parms.CallFunc_SetCullDistance_NewCullDistance_ImplicitCast_2 = CallFunc_SetCullDistance_NewCullDistance_ImplicitCast_2;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast = CallFunc_SetFloatParameter_Param_ImplicitCast;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast_1 = CallFunc_SetFloatParameter_Param_ImplicitCast_1;
	Parms.CallFunc_SetFloatParameter_Param_ImplicitCast_2 = CallFunc_SetFloatParameter_Param_ImplicitCast_2;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnPersistentFireStopped__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UB_Ranged_Generic_C::OnPersistentFireStopped__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Generic_C", "OnPersistentFireStopped__DelegateSignature");

	Params::UB_Ranged_Generic_C_OnPersistentFireStopped__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.OnStartFiring__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void UB_Ranged_Generic_C::OnStartFiring__DelegateSignature()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Generic_C", "OnStartFiring__DelegateSignature");

	Params::UB_Ranged_Generic_C_OnStartFiring__DelegateSignature_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function B_Ranged_Generic.B_Ranged_Generic_C.onAimDownSightsChanged__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               AimDownsights                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_Ranged_Generic_C::OnAimDownSightsChanged__DelegateSignature(bool AimDownsights)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_Ranged_Generic_C", "onAimDownSightsChanged__DelegateSignature");

	Params::UB_Ranged_Generic_C_OnAimDownSightsChanged__DelegateSignature_Params Parms{};

	Parms.AimDownsights = AimDownsights;

	UObject::ProcessEvent(Func, &Parms);

}

}


