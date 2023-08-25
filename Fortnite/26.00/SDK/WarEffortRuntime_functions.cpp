#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class WarEffortRuntime.FundingManager
// (Actor)

class UClass* UFundingManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FundingManager");

	return Clss;
}


// FundingManager WarEffortRuntime.Default__FundingManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UFundingManager* UFundingManager::GetDefaultObj()
{
	static class UFundingManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UFundingManager*>(UFundingManager::StaticClass()->DefaultObject);

	return Default;
}


// Function WarEffortRuntime.FundingManager.BroadcaseUpdatedFundsMessage
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FItemFundingUpdatedFundingDataPayload                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UFundingManager::BroadcaseUpdatedFundsMessage(struct FItemFundingUpdatedFundingData& Payload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FundingManager", "BroadcaseUpdatedFundsMessage");

	Params::UFundingManager_BroadcaseUpdatedFundsMessage_Params Parms{};

	Parms.Payload = Payload;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


