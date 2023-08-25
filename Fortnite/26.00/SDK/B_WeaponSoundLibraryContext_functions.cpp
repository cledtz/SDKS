#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass B_WeaponSoundLibraryContext.B_WeaponSoundLibraryContext_C
// (None)

class UClass* UB_WeaponSoundLibraryContext_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("B_WeaponSoundLibraryContext_C");

	return Clss;
}


// B_WeaponSoundLibraryContext_C B_WeaponSoundLibraryContext.Default__B_WeaponSoundLibraryContext_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UB_WeaponSoundLibraryContext_C* UB_WeaponSoundLibraryContext_C::GetDefaultObj()
{
	static class UB_WeaponSoundLibraryContext_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UB_WeaponSoundLibraryContext_C*>(UB_WeaponSoundLibraryContext_C::StaticClass()->DefaultObject);

	return Default;
}


// Function B_WeaponSoundLibraryContext.B_WeaponSoundLibraryContext_C.GetRootComponent
// (Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// class UActor*                      Actor                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FGameplayTag                EventTag                                                         (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             RootComponent                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// struct FGameplayTagContainer       EquipTags                                                        (Edit, BlueprintVisible)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue                         (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// class UActor*                      CallFunc_GetOwner_ReturnValue                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_K2_GetRootComponent_ReturnValue_1                       (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsValid_ReturnValue                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_HasTag_ReturnValue                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UB_WeaponSoundLibraryContext_C::GetRootComponent(class UActor* Actor, const struct FGameplayTag& EventTag, class USceneComponent** RootComponent, const struct FGameplayTagContainer& EquipTags, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue, class UActor* CallFunc_GetOwner_ReturnValue, class USceneComponent* CallFunc_K2_GetRootComponent_ReturnValue_1, bool CallFunc_IsValid_ReturnValue, bool CallFunc_HasTag_ReturnValue)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_WeaponSoundLibraryContext_C", "GetRootComponent");

	Params::UB_WeaponSoundLibraryContext_C_GetRootComponent_Params Parms{};

	Parms.Actor = Actor;
	Parms.EventTag = EventTag;
	Parms.EquipTags = EquipTags;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue = CallFunc_K2_GetRootComponent_ReturnValue;
	Parms.CallFunc_GetOwner_ReturnValue = CallFunc_GetOwner_ReturnValue;
	Parms.CallFunc_K2_GetRootComponent_ReturnValue_1 = CallFunc_K2_GetRootComponent_ReturnValue_1;
	Parms.CallFunc_IsValid_ReturnValue = CallFunc_IsValid_ReturnValue;
	Parms.CallFunc_HasTag_ReturnValue = CallFunc_HasTag_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	if (RootComponent != nullptr)
		*RootComponent = Parms.RootComponent;

}


// Function B_WeaponSoundLibraryContext.B_WeaponSoundLibraryContext_C.Play
// (Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FSoundLibraryContextEventInputInEventData                                                      (ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
// TArray<class UAudioComponent*>     OutComponents                                                    (Parm, OutParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_GetRootComponent_RootComponent                          (ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// TArray<class UAudioComponent*>     K2Node_MakeArray_Array                                           (ReferenceParm, ContainsInstancedReference)

bool UB_WeaponSoundLibraryContext_C::Play(struct FSoundLibraryContextEventInput& InEventData, TArray<class UAudioComponent*>* OutComponents, class USceneComponent* CallFunc_GetRootComponent_RootComponent, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, TArray<class UAudioComponent*>& K2Node_MakeArray_Array)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("B_WeaponSoundLibraryContext_C", "Play");

	Params::UB_WeaponSoundLibraryContext_C_Play_Params Parms{};

	Parms.InEventData = InEventData;
	Parms.CallFunc_GetRootComponent_RootComponent = CallFunc_GetRootComponent_RootComponent;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;
	Parms.K2Node_MakeArray_Array = K2Node_MakeArray_Array;

	UObject::ProcessEvent(Func, &Parms);

	if (OutComponents != nullptr)
		*OutComponents = Parms.OutComponents;

	return Parms.ReturnValue;

}

}


