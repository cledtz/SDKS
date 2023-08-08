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
	static auto Func = Class->GetFunction("B_WeaponSoundLibraryContext_C", "GetRootComponent");

	Params::UB_WeaponSoundLibraryContext_C_GetRootComponent_Params Parms;

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
// (Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class USoundBase*                  Sound                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UActor*                      Owner                                                            (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// struct FSoundLibraryPlayResult     OutResults                                                       (BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, ContainsInstancedReference)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USceneComponent*             CallFunc_GetRootComponent_RootComponent                          (ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
// class UAudioComponent*             CallFunc_SpawnSoundAttached_ReturnValue                          (ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
// int32                              CallFunc_Array_Add_ReturnValue                                   (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

bool UB_WeaponSoundLibraryContext_C::Play(class USoundBase* Sound, class UActor* Owner, struct FSoundLibraryPlayResult& OutResults, class USceneComponent* CallFunc_GetRootComponent_RootComponent, class UAudioComponent* CallFunc_SpawnSoundAttached_ReturnValue, int32 CallFunc_Array_Add_ReturnValue)
{
	static auto Func = Class->GetFunction("B_WeaponSoundLibraryContext_C", "Play");

	Params::UB_WeaponSoundLibraryContext_C_Play_Params Parms;

	Parms.Sound = Sound;
	Parms.Owner = Owner;
	Parms.OutResults = OutResults;
	Parms.CallFunc_GetRootComponent_RootComponent = CallFunc_GetRootComponent_RootComponent;
	Parms.CallFunc_SpawnSoundAttached_ReturnValue = CallFunc_SpawnSoundAttached_ReturnValue;
	Parms.CallFunc_Array_Add_ReturnValue = CallFunc_Array_Add_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
