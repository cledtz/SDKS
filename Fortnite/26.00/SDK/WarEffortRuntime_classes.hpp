#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x290 - 0x290)
// Class WarEffortRuntime.FundingManager
class UFundingManager : public UActor
{
public:

	static class UClass* StaticClass();
	static class UFundingManager* GetDefaultObj();

	void BroadcaseUpdatedFundsMessage(struct FItemFundingUpdatedFundingData& Payload);
};

}


