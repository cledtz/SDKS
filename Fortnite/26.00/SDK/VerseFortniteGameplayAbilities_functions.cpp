#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class VerseFortniteGameplayAbilities.FortAnimNotify_UEFNGameplayTag
// (None)

class UClass* UFortAnimNotify_UEFNGameplayTag::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAnimNotify_UEFNGameplayTag");

	return Clss;
}


// FortAnimNotify_UEFNGameplayTag VerseFortniteGameplayAbilities.Default__FortAnimNotify_UEFNGameplayTag
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAnimNotify_UEFNGameplayTag* UFortAnimNotify_UEFNGameplayTag::GetDefaultObj()
{
	static class UFortAnimNotify_UEFNGameplayTag* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAnimNotify_UEFNGameplayTag*>(UFortAnimNotify_UEFNGameplayTag::StaticClass()->DefaultObject);

	return Default;
}


// Class VerseFortniteGameplayAbilities.FortGameplayAbility_PlayAnim
// (None)

class UClass* UFortGameplayAbility_PlayAnim::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortGameplayAbility_PlayAnim");

	return Clss;
}


// FortGameplayAbility_PlayAnim VerseFortniteGameplayAbilities.Default__FortGameplayAbility_PlayAnim
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortGameplayAbility_PlayAnim* UFortGameplayAbility_PlayAnim::GetDefaultObj()
{
	static class UFortGameplayAbility_PlayAnim* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortGameplayAbility_PlayAnim*>(UFortGameplayAbility_PlayAnim::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteGameplayAbilities.FortGameplayAbility_PlayAnim.OnInterrupted
// (Final, Native, Private)
// Parameters:

void UFortGameplayAbility_PlayAnim::OnInterrupted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGameplayAbility_PlayAnim", "OnInterrupted");

	Params::UFortGameplayAbility_PlayAnim_OnInterrupted_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortniteGameplayAbilities.FortGameplayAbility_PlayAnim.OnCompleted
// (Final, Native, Private)
// Parameters:

void UFortGameplayAbility_PlayAnim::OnCompleted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGameplayAbility_PlayAnim", "OnCompleted");

	Params::UFortGameplayAbility_PlayAnim_OnCompleted_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortniteGameplayAbilities.FortGameplayAbility_PlayAnim.OnCancelled
// (Final, Native, Private)
// Parameters:

void UFortGameplayAbility_PlayAnim::OnCancelled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGameplayAbility_PlayAnim", "OnCancelled");

	Params::UFortGameplayAbility_PlayAnim_OnCancelled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortniteGameplayAbilities.FortGameplayAbility_PlayAnim.OnBlendOut
// (Final, Native, Private)
// Parameters:

void UFortGameplayAbility_PlayAnim::OnBlendOut()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGameplayAbility_PlayAnim", "OnBlendOut");

	Params::UFortGameplayAbility_PlayAnim_OnBlendOut_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class VerseFortniteGameplayAbilities.FortGameplayAbility_PlayAnimAndApplyEffect
// (None)

class UClass* UFortGameplayAbility_PlayAnimAndApplyEffect::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortGameplayAbility_PlayAnimAndApplyEffect");

	return Clss;
}


// FortGameplayAbility_PlayAnimAndApplyEffect VerseFortniteGameplayAbilities.Default__FortGameplayAbility_PlayAnimAndApplyEffect
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortGameplayAbility_PlayAnimAndApplyEffect* UFortGameplayAbility_PlayAnimAndApplyEffect::GetDefaultObj()
{
	static class UFortGameplayAbility_PlayAnimAndApplyEffect* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortGameplayAbility_PlayAnimAndApplyEffect*>(UFortGameplayAbility_PlayAnimAndApplyEffect::StaticClass()->DefaultObject);

	return Default;
}


// Class VerseFortniteGameplayAbilities.VerseFortniteAbilityComponentBase
// (None)

class UClass* UVerseFortniteAbilityComponentBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseFortniteAbilityComponentBase");

	return Clss;
}


// VerseFortniteAbilityComponentBase VerseFortniteGameplayAbilities.Default__VerseFortniteAbilityComponentBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UVerseFortniteAbilityComponentBase* UVerseFortniteAbilityComponentBase::GetDefaultObj()
{
	static class UVerseFortniteAbilityComponentBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseFortniteAbilityComponentBase*>(UVerseFortniteAbilityComponentBase::StaticClass()->DefaultObject);

	return Default;
}

}


