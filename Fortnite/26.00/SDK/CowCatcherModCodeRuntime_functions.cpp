#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class CowCatcherModCodeRuntime.CowCatcherBarricadeBase
// (Actor)

class UClass* UCowCatcherBarricadeBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CowCatcherBarricadeBase");

	return Clss;
}


// CowCatcherBarricadeBase CowCatcherModCodeRuntime.Default__CowCatcherBarricadeBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UCowCatcherBarricadeBase* UCowCatcherBarricadeBase::GetDefaultObj()
{
	static class UCowCatcherBarricadeBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UCowCatcherBarricadeBase*>(UCowCatcherBarricadeBase::StaticClass()->DefaultObject);

	return Default;
}


// Function CowCatcherModCodeRuntime.CowCatcherBarricadeBase.OnPlacementBlockedByPawnChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// bool                               bBlockedByPawn                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UCowCatcherBarricadeBase::OnPlacementBlockedByPawnChanged(bool bBlockedByPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CowCatcherBarricadeBase", "OnPlacementBlockedByPawnChanged");

	Params::UCowCatcherBarricadeBase_OnPlacementBlockedByPawnChanged_Params Parms{};

	Parms.bBlockedByPawn = bBlockedByPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function CowCatcherModCodeRuntime.CowCatcherBarricadeBase.BeginCheckingForTouchingPawns
// (Final, BlueprintAuthorityOnly, Native, Protected, BlueprintCallable)
// Parameters:

void UCowCatcherBarricadeBase::BeginCheckingForTouchingPawns()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CowCatcherBarricadeBase", "BeginCheckingForTouchingPawns");

	Params::UCowCatcherBarricadeBase_BeginCheckingForTouchingPawns_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


