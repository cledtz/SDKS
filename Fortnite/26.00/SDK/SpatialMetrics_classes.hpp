#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB8 (0xF8 - 0x40)
// Class SpatialMetrics.ActorCountMetric
class UActorCountMetric : public USpatialMetric
{
public:
	uint8                                        Pad_217A[0xB8];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UActorCountMetric* GetDefaultObj();

};

}


