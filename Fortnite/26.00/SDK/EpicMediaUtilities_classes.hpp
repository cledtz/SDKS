#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x2A8 - 0x290)
// Class EpicMediaUtilities.EpicMediaServerTime
class UEpicMediaServerTime : public UActor
{
public:
	uint8                                        Pad_1E84[0x18];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UEpicMediaServerTime* GetDefaultObj();

	void ServerRequestServerTime(double RequestUtcTime);
	bool GetTimeUtc(struct FDateTime& OutDateTime);
	void ClientReportServerTime(double RequestUtcTime, double ServerUtcTime);
};

}


