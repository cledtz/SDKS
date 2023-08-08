#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

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

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FundingManager");
		return Clss;
	}

	void BroadcaseUpdatedFundsMessage(struct FItemFundingUpdatedFundingData& Payload);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
