#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class RealTimeClock.RealTimeClockBlueprintLibrary
class URealTimeClockBlueprintLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("RealTimeClockBlueprintLibrary");
		return Clss;
	}

	struct FDateTime AddTimeToDate(struct FDateTime& DateTime, struct FTimespan& Timespan);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
