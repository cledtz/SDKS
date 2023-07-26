#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x2A8 - 0x290)
// Class EpicMediaUtilities.EpicMediaServerTime
class AEpicMediaServerTime : public AActor
{
public:
	uint8                                        Pad_414B[0x18];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("EpicMediaServerTime");
		return Clss;
	}

	void ServerRequestServerTime(double RequestUtcTime);
	bool GetTimeUtc(struct FDateTime& OutDateTime);
	void ClientReportServerTime(double RequestUtcTime, double ServerUtcTime);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
