#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_WeaponSoundLibraryComponent.B_WeaponSoundLibraryComponent_C
// (None)

class UClass* UB_WeaponSoundLibraryComponent_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_WeaponSoundLibraryComponent_C");

	return Clss;
}


// B_WeaponSoundLibraryComponent_C B_WeaponSoundLibraryComponent.Default__B_WeaponSoundLibraryComponent_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UB_WeaponSoundLibraryComponent_C* UB_WeaponSoundLibraryComponent_C::GetDefaultObj()
{
	static class UB_WeaponSoundLibraryComponent_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UB_WeaponSoundLibraryComponent_C*>(UB_WeaponSoundLibraryComponent_C::StaticClass()->DefaultObject);

	return Default;
}


// Function B_WeaponSoundLibraryComponent.B_WeaponSoundLibraryComponent_C.OnSoundPlayed
// (Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                InEventName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             InComponent                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UB_WeaponSoundLibraryComponent_C::OnSoundPlayed(const struct FGameplayTag& InEventName, class UAudioComponent* InComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_WeaponSoundLibraryComponent_C", "OnSoundPlayed");

	Params::UB_WeaponSoundLibraryComponent_C_OnSoundPlayed_Params Parms{};

	Parms.InEventName = InEventName;
	Parms.InComponent = InComponent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function B_WeaponSoundLibraryComponent.B_WeaponSoundLibraryComponent_C.OnSoundStopped
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                InEventName                                                      (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             InComponent                                                      (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               bStopped                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class UAudioParameterControllerInterface>CallFunc_SetTriggerParameter_self_CastInput                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MatchesTag_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_WeaponSoundLibraryComponent_C::OnSoundStopped(const struct FGameplayTag& InEventName, class UAudioComponent* InComponent, bool* bStopped, TScriptInterface<class UAudioParameterControllerInterface> CallFunc_SetTriggerParameter_self_CastInput, bool CallFunc_MatchesTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_WeaponSoundLibraryComponent_C", "OnSoundStopped");

	Params::UB_WeaponSoundLibraryComponent_C_OnSoundStopped_Params Parms{};

	Parms.InEventName = InEventName;
	Parms.InComponent = InComponent;
	Parms.CallFunc_SetTriggerParameter_self_CastInput = CallFunc_SetTriggerParameter_self_CastInput;
	Parms.CallFunc_MatchesTag_ReturnValue = CallFunc_MatchesTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (bStopped != nullptr)
		*bStopped = Parms.bStopped;

}


// Function B_WeaponSoundLibraryComponent.B_WeaponSoundLibraryComponent_C.TryHandleFireEvent
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                Event                                                            (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class UAudioComponent*             Component                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UFortWeapon*                 K2Node_DynamicCast_AsFort_Weapon                                 (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_DynamicCast_bSuccess                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_MatchesTag_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_GetMagazineAmmoCount_ReturnValue                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class UAudioParameterControllerInterface>CallFunc_SetIntParameter_self_CastInput                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_GetFiringRate_ReturnValue                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SafeDivide_ReturnValue                                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TScriptInterface<class UAudioParameterControllerInterface>CallFunc_SetFloatParameter_self_CastInput                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_SafeDivide_B_ImplicitCast                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              CallFunc_SetFloatParameter_InFloat_ImplicitCast                  (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_WeaponSoundLibraryComponent_C::TryHandleFireEvent(const struct FGameplayTag& Event, class UAudioComponent* Component, class UActor* CallFunc_GetOwner_ReturnValue, class UFortWeapon* K2Node_DynamicCast_AsFort_Weapon, bool K2Node_DynamicCast_bSuccess, bool CallFunc_MatchesTag_ReturnValue, int32 CallFunc_GetMagazineAmmoCount_ReturnValue, TScriptInterface<class UAudioParameterControllerInterface> CallFunc_SetIntParameter_self_CastInput, float CallFunc_GetFiringRate_ReturnValue, double CallFunc_SafeDivide_ReturnValue, TScriptInterface<class UAudioParameterControllerInterface> CallFunc_SetFloatParameter_self_CastInput, double CallFunc_SafeDivide_B_ImplicitCast, float CallFunc_SetFloatParameter_InFloat_ImplicitCast)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_WeaponSoundLibraryComponent_C", "TryHandleFireEvent");

	Params::UB_WeaponSoundLibraryComponent_C_TryHandleFireEvent_Params Parms{};

	Parms.Event = Event;
	Parms.Component = Component;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.K2Node_DynamicCast_AsFort_Weapon = K2Node_DynamicCast_AsFort_Weapon;
	Parms.K2Node_DynamicCast_bSuccess = K2Node_DynamicCast_bSuccess;
	Parms.CallFunc_MatchesTag_ReturnValue = CallFunc_MatchesTag_ReturnValue;
	Parms.CallFunc_GetMagazineAmmoCount_ReturnValue = CallFunc_GetMagazineAmmoCount_ReturnValue;
	Parms.CallFunc_SetIntParameter_self_CastInput = CallFunc_SetIntParameter_self_CastInput;
	Parms.CallFunc_GetFiringRate_ReturnValue = CallFunc_GetFiringRate_ReturnValue;
	Parms.CallFunc_SafeDivide_ReturnValue = CallFunc_SafeDivide_ReturnValue;
	Parms.CallFunc_SetFloatParameter_self_CastInput = CallFunc_SetFloatParameter_self_CastInput;
	Parms.CallFunc_SafeDivide_B_ImplicitCast = CallFunc_SafeDivide_B_ImplicitCast;
	Parms.CallFunc_SetFloatParameter_InFloat_ImplicitCast = CallFunc_SetFloatParameter_InFloat_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}

}


