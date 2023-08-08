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


// Function WarEffortRuntime.FundingManager.BroadcaseUpdatedFundsMessage
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FItemFundingUpdatedFundingDataPayload                                                          (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UFundingManager::BroadcaseUpdatedFundsMessage(struct FItemFundingUpdatedFundingData& Payload)
{
	static auto Func = Class->GetFunction("FundingManager", "BroadcaseUpdatedFundsMessage");

	Params::UFundingManager_BroadcaseUpdatedFundsMessage_Params Parms;

	Parms.Payload = Payload;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
