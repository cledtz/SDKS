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

// 0x0 (0x28 - 0x28)
// Class CreativeDataChannelTriggerRuntime.CreativeDataChannelAnalytics
class UCreativeDataChannelAnalytics : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CreativeDataChannelAnalytics");
		return Clss;
	}

};

// 0x50 (0x350 - 0x300)
// Class CreativeDataChannelTriggerRuntime.CreativeDataChannelTarget
class ACreativeDataChannelTarget : public AElectraDataChannelTarget
{
public:
	uint8                                        Pad_817A[0x8];                                     // Fixing Size After Last Property..
	int8                                         VersionByte;                                       // 0x308(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_817B[0x7];                                     // Fixing Size After Last Property..
	struct FCreativeDataChannelEvents            Events;                                            // 0x310(0x10)(BlueprintVisible, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnEventsRep;                                       // 0x320(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FCreativeDataChannelEvents            EventsCache;                                       // 0x330(0x10)(NativeAccessSpecifierPublic)
	uint8                                        Pad_817C[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CreativeDataChannelTarget");
		return Clss;
	}

	void TestCreativeDataChannelTarget(const struct FCreativeDataChannelEvents& TestEvents);
	void OnRep_Events();
	void FireEvent(class FName EventName);
};

// 0x2B8 (0x5B8 - 0x300)
// Class CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetFN
class ACreativeDataChannelTargetFN : public AElectraDataChannelTarget
{
public:
	uint8                                        Pad_817D[0x8];                                     // Fixing Size After Last Property..
	int32                                        VersionByte;                                       // 0x308(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCDCInt                               VersionByteTracker;                                // 0x30C(0x4)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            VersionByteEvent;                                  // 0x310(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class FString                                LeaderBoard;                                       // 0x320(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        StormCircleSize;                                   // 0x330(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCDCLargeInt                          StormCircleSizeTracker;                            // 0x338(0x8)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            StormCircleSizeEvent;                              // 0x340(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<float>                                StormCircleLocation;                               // 0x350(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FCDCFloatArray                        StormCircleLocationTracker;                        // 0x360(0x10)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            StormCircleLocationEvent;                          // 0x370(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class FString                                PlayerLocation;                                    // 0x380(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCDCStringFloatArrayMap               PlayerLocationTracker;                             // 0x390(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            PlayerLocationEvent;                               // 0x3E0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class FString                                ArenaPointLeaderBoard;                             // 0x3F0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCDCStringStringMap                   ArenaPointLeaderBoardTracker;                      // 0x400(0xA0)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            ArenaPointLeaderBoardEvent;                        // 0x4A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class FString                                CashCupDataAllTimeEarners;                         // 0x4B0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCDCStringFloatMap                    CashCupDataAllTimeEanersTracker;                   // 0x4C0(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            CashCupDataAllTimeEarnersEvent;                    // 0x510(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class FString                                MythicBossEliminatedPlayer;                        // 0x520(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCDCString                            MythicBossEliminatedPlayerTracker;                 // 0x530(0x10)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            MythicBossEliminatedPlayerEvent;                   // 0x540(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class FString                                MythicWeaponPlayer;                                // 0x550(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCDCString                            MythicWeaponPlayerTracker;                         // 0x560(0x10)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            MythicWeaponPlayerEvent;                           // 0x570(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class FString                                PlayerInfo;                                        // 0x580(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCDCStringArray                       PlayerInfoTracker;                                 // 0x590(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            PlayerInfoEvent;                                   // 0x5A8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CreativeDataChannelTargetFN");
		return Clss;
	}

};

// 0x4C0 (0x7C0 - 0x300)
// Class CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL
class ACreativeDataChannelTargetRL : public AElectraDataChannelTarget
{
public:
	uint8                                        Pad_817E[0x8];                                     // Fixing Size After Last Property..
	int32                                        VersionByte;                                       // 0x308(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCDCInt                               VersionByteTracker;                                // 0x30C(0x4)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            VersionByteEvent;                                  // 0x310(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	int32                                        ScoreTeam;                                         // 0x320(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_817F[0x4];                                     // Fixing Size After Last Property..
	struct FCDCString                            ScoreTeamTracker;                                  // 0x328(0x10)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            ScoreTeamEvent;                                    // 0x338(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class FString                                ScoreTotal;                                        // 0x348(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCDCStringIntMap                      ScoreTotalTracker;                                 // 0x358(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            ScoreTotalEvent;                                   // 0x3A8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	int64                                        ScoreboardTimeLeft;                                // 0x3B8(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCDCLargeInt                          ScoreboardTimeLeftTracker;                         // 0x3C0(0x8)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            ScoreboardTimeLeftEvent;                           // 0x3C8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class FString                                ScoreboardBestOf;                                  // 0x3D8(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCDCStringIntMap                      ScoreboardBestOfTracker;                           // 0x3E8(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            ScoreboardBestOfEvent;                             // 0x438(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	int32                                        OverTime;                                          // 0x448(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCDCInt                               OvertimeTracker;                                   // 0x44C(0x4)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OvertimeEvent;                                     // 0x450(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class FString                                TeamNames;                                         // 0x460(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCDCStringArray                       TeamNamesTracker;                                  // 0x470(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            TeamNamesEvent;                                    // 0x488(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class FString                                PlayerNames;                                       // 0x498(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCDCStringArray                       PlayerNamesTracker;                                // 0x4A8(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            PlayerNamesEvent;                                  // 0x4C0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class FString                                PlayerBoost;                                       // 0x4D0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCDCStringIntMap                      PlayerBoostTracker;                                // 0x4E0(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            PlayerBoostEvent;                                  // 0x530(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class FString                                PlayerBoostCollected;                              // 0x540(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCDCStringStringMap                   PlayerBoostCollectedTracker;                       // 0x550(0xA0)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            PlayerBoostCollectedEvent;                         // 0x5F0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class FString                                PlayerCoords;                                      // 0x600(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCDCStringFloatArrayMap               PlayerCoordsTracker;                               // 0x610(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            PlayerCoordsEvent;                                 // 0x660(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class FString                                BallCoords;                                        // 0x670(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCDCFloatArray                        BallCoordsTracker;                                 // 0x680(0x10)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            BallCoordsEvent;                                   // 0x690(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class FString                                MediaStart;                                        // 0x6A0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCDCStringStringMap                   MediaStartTracker;                                 // 0x6B0(0xA0)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            MediaStartEvent;                                   // 0x750(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	int32                                        MediaStop;                                         // 0x760(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCDCInt                               MediaStopTracker;                                  // 0x764(0x4)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            MediaStopEvent;                                    // 0x768(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	int32                                        SeriesState;                                       // 0x778(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCDCInt                               SeriesStateTracker;                                // 0x77C(0x4)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            SeriesStateEvent;                                  // 0x780(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	int32                                        MatchState;                                        // 0x790(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCDCInt                               MatchStateTracker;                                 // 0x794(0x4)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            MatchStateEvent;                                   // 0x798(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	int32                                        FinaleState;                                       // 0x7A8(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCDCInt                               FinaleStateTracker;                                // 0x7AC(0x4)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            FinaleStateEvent;                                  // 0x7B0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("CreativeDataChannelTargetRL");
		return Clss;
	}

	void ReportServerStateStreamError(const class FString& Error, const class FString& UID, const class FString& URL);
	void OnRep_VersionByte();
	void OnRep_TeamNames();
	void OnRep_SeriesState();
	void OnRep_ScoreTotal();
	void OnRep_ScoreTeam();
	void OnRep_ScoreboardTimeLeft();
	void OnRep_ScoreboardBestOf();
	void OnRep_PlayerNames();
	void OnRep_PlayerCoords();
	void OnRep_PlayerBoostCollected();
	void OnRep_PlayerBoost();
	void OnRep_Overtime();
	void OnRep_MediaStop();
	void OnRep_MediaStart();
	void OnRep_MatchState();
	void OnRep_FinaleState();
	void OnRep_BallCoords();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
