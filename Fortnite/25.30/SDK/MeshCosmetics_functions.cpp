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


// Function MeshCosmetics.FortCustomizableObjectParameterVariant.ApplyVariants
// (Final, Native, Static, Private, HasOutParams, BlueprintCallable)
// Parameters:
// class UActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFortAthenaLoadout          Loadout                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortCustomizableObjectParameterVariant::ApplyVariants(class UActor* Actor, struct FFortAthenaLoadout& Loadout)
{
	static auto Func = Class->GetFunction("FortCustomizableObjectParameterVariant", "ApplyVariants");

	Params::UFortCustomizableObjectParameterVariant_ApplyVariants_Params Parms;

	Parms.Actor = Actor;
	Parms.Loadout = Loadout;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MeshCosmetics.MeshCosmeticTagInterface.OnPostCustomizationAnimGameplayTags_BP
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayTagContainer       GameplayTags                                                     (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UMeshCosmeticTagInterface::OnPostCustomizationAnimGameplayTags_BP(struct FGameplayTagContainer& GameplayTags)
{
	static auto Func = Class->GetFunction("MeshCosmeticTagInterface", "OnPostCustomizationAnimGameplayTags_BP");

	Params::UMeshCosmeticTagInterface_OnPostCustomizationAnimGameplayTags_BP_Params Parms;

	Parms.GameplayTags = GameplayTags;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
