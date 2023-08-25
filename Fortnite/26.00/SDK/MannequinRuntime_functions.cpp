#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class MannequinRuntime.MannequinAnalyticsComponent
// (None)

class UClass* UMannequinAnalyticsComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("MannequinAnalyticsComponent");

	return Clss;
}


// MannequinAnalyticsComponent MannequinRuntime.Default__MannequinAnalyticsComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UMannequinAnalyticsComponent* UMannequinAnalyticsComponent::GetDefaultObj()
{
	static class UMannequinAnalyticsComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UMannequinAnalyticsComponent*>(UMannequinAnalyticsComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function MannequinRuntime.MannequinAnalyticsComponent.FireMannequinAnalytics_Interact
// (Native, Public, BlueprintCallable, Const)
// Parameters:
// class UFortPlayerController*       Controller                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ECreativeMannequinAnalyticsInteractTypeInteractType                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortItemDefinition*         Character                                                        (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortItemDefinition*         BackBling                                                        (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMannequinAnalyticsComponent::FireMannequinAnalytics_Interact(class UFortPlayerController* Controller, enum class ECreativeMannequinAnalyticsInteractType InteractType, class UFortItemDefinition* Character, class UFortItemDefinition* BackBling)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("MannequinAnalyticsComponent", "FireMannequinAnalytics_Interact");

	Params::UMannequinAnalyticsComponent_FireMannequinAnalytics_Interact_Params Parms{};

	Parms.Controller = Controller;
	Parms.InteractType = InteractType;
	Parms.Character = Character;
	Parms.BackBling = BackBling;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


