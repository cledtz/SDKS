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


// Function Campfire_Interface.Campfire_Interface_C.GetWoodComponent
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UStaticMeshComponent*        WoodComponent                                                    (Parm, OutParm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)

void UCampfire_Interface_C::GetWoodComponent(class UStaticMeshComponent** WoodComponent)
{
	static auto Func = Class->GetFunction("Campfire_Interface_C", "GetWoodComponent");

	Params::UCampfire_Interface_C_GetWoodComponent_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (WoodComponent != nullptr)
		*WoodComponent = Parms.WoodComponent;

}


// Function Campfire_Interface.Campfire_Interface_C.IsStoked
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsStoked                                                         (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCampfire_Interface_C::IsStoked(bool* IsStoked)
{
	static auto Func = Class->GetFunction("Campfire_Interface_C", "IsStoked");

	Params::UCampfire_Interface_C_IsStoked_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (IsStoked != nullptr)
		*IsStoked = Parms.IsStoked;

}


// Function Campfire_Interface.Campfire_Interface_C.GetLocationToSpawnFireVFX
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FVector                     WorldLocation                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCampfire_Interface_C::GetLocationToSpawnFireVFX(struct FVector* WorldLocation)
{
	static auto Func = Class->GetFunction("Campfire_Interface_C", "GetLocationToSpawnFireVFX");

	Params::UCampfire_Interface_C_GetLocationToSpawnFireVFX_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (WorldLocation != nullptr)
		*WorldLocation = Parms.WorldLocation;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
