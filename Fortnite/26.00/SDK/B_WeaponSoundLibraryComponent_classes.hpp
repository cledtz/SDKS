#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x4 (0x18C - 0x188)
// BlueprintGeneratedClass B_WeaponSoundLibraryComponent.B_WeaponSoundLibraryComponent_C
class UB_WeaponSoundLibraryComponent_C : public UFortWeaponSoundLibraryComponent
{
public:
	struct FGameplayTag                          FireEvent;                                         // 0x188(0x4)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UB_WeaponSoundLibraryComponent_C* GetDefaultObj();

	void OnSoundPlayed(const struct FGameplayTag& InEventName, class UAudioComponent* InComponent);
	void OnSoundStopped(const struct FGameplayTag& InEventName, class UAudioComponent* InComponent, bool* bStopped, TScriptInterface<class UAudioParameterControllerInterface> CallFunc_SetTriggerParameter_self_CastInput, bool CallFunc_MatchesTag_ReturnValue);
	void TryHandleFireEvent(const struct FGameplayTag& Event, class UAudioComponent* Component, class UActor* CallFunc_GetOwner_ReturnValue, class UFortWeapon* K2Node_DynamicCast_AsFort_Weapon, bool K2Node_DynamicCast_bSuccess, bool CallFunc_MatchesTag_ReturnValue, int32 CallFunc_GetMagazineAmmoCount_ReturnValue, TScriptInterface<class UAudioParameterControllerInterface> CallFunc_SetIntParameter_self_CastInput, float CallFunc_GetFiringRate_ReturnValue, double CallFunc_SafeDivide_ReturnValue, TScriptInterface<class UAudioParameterControllerInterface> CallFunc_SetFloatParameter_self_CastInput, double CallFunc_SafeDivide_B_ImplicitCast, float CallFunc_SetFloatParameter_InFloat_ImplicitCast);
};

}


