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


// Function VerseFortniteGameplayAbilities.FortGameplayAbility_PlayAnim.OnInterrupted
// (Final, Native, Private)
// Parameters:

void UFortGameplayAbility_PlayAnim::OnInterrupted()
{
	static auto Func = Class->GetFunction("FortGameplayAbility_PlayAnim", "OnInterrupted");

	Params::UFortGameplayAbility_PlayAnim_OnInterrupted_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VerseFortniteGameplayAbilities.FortGameplayAbility_PlayAnim.OnCompleted
// (Final, Native, Private)
// Parameters:

void UFortGameplayAbility_PlayAnim::OnCompleted()
{
	static auto Func = Class->GetFunction("FortGameplayAbility_PlayAnim", "OnCompleted");

	Params::UFortGameplayAbility_PlayAnim_OnCompleted_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VerseFortniteGameplayAbilities.FortGameplayAbility_PlayAnim.OnCancelled
// (Final, Native, Private)
// Parameters:

void UFortGameplayAbility_PlayAnim::OnCancelled()
{
	static auto Func = Class->GetFunction("FortGameplayAbility_PlayAnim", "OnCancelled");

	Params::UFortGameplayAbility_PlayAnim_OnCancelled_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VerseFortniteGameplayAbilities.FortGameplayAbility_PlayAnim.OnBlendOut
// (Final, Native, Private)
// Parameters:

void UFortGameplayAbility_PlayAnim::OnBlendOut()
{
	static auto Func = Class->GetFunction("FortGameplayAbility_PlayAnim", "OnBlendOut");

	Params::UFortGameplayAbility_PlayAnim_OnBlendOut_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
