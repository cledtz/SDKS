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


// Function MannequinRuntime.MannequinAnalyticsComponent.FireMannequinAnalytics_Interact
// (Native, Public, BlueprintCallable, Const)
// Parameters:
// class UFortPlayerController*       Controller                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ECreativeMannequinAnalyticsInteractTypeInteractType                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortItemDefinition*         Character                                                        (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortItemDefinition*         BackBling                                                        (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMannequinAnalyticsComponent::FireMannequinAnalytics_Interact(class UFortPlayerController* Controller, enum class ECreativeMannequinAnalyticsInteractType InteractType, class UFortItemDefinition* Character, class UFortItemDefinition* BackBling)
{
	static auto Func = Class->GetFunction("MannequinAnalyticsComponent", "FireMannequinAnalytics_Interact");

	Params::UMannequinAnalyticsComponent_FireMannequinAnalytics_Interact_Params Parms;

	Parms.Controller = Controller;
	Parms.InteractType = InteractType;
	Parms.Character = Character;
	Parms.BackBling = BackBling;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
