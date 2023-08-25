#pragma once

// Dumped with Dumper-7!


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

	static class UClass* StaticClass();
	static class URealTimeClockBlueprintLibrary* GetDefaultObj();

	struct FDateTime AddTimeToDate(struct FDateTime& DateTime, struct FTimespan& Timespan);
};

}


