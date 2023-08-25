#pragma once

// Dumped with Dumper-7!


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

	static class UClass* StaticClass();
	static class UCreativeDataChannelAnalytics* GetDefaultObj();

};

// 0x50 (0x358 - 0x308)
// Class CreativeDataChannelTriggerRuntime.CreativeDataChannelTarget
class UCreativeDataChannelTarget : public UElectraDataChannelTarget
{
public:
	uint8                                        Pad_3FF4[0x8];                                     // Fixing Size After Last Property 
	int8                                         VersionByte;                                       // 0x310(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3FF6[0x7];                                     // Fixing Size After Last Property 
	struct FCreativeDataChannelEvents            Events;                                            // 0x318(0x10)(BlueprintVisible, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnEventsRep;                                       // 0x328(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FCreativeDataChannelEvents            EventsCache;                                       // 0x338(0x10)(NativeAccessSpecifierPublic)
	uint8                                        Pad_3FF7[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UCreativeDataChannelTarget* GetDefaultObj();

	void TestCreativeDataChannelTarget(const struct FCreativeDataChannelEvents& TestEvents);
	void OnRep_Events();
	void FireEvent(class FName EventName);
};

// 0x2B8 (0x5C0 - 0x308)
// Class CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetFN
class UCreativeDataChannelTargetFN : public UElectraDataChannelTarget
{
public:
	uint8                                        Pad_3FFD[0x8];                                     // Fixing Size After Last Property 
	int32                                        VersionByte;                                       // 0x310(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCDCInt                               VersionByteTracker;                                // 0x314(0x4)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            VersionByteEvent;                                  // 0x318(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class FString                                LeaderBoard;                                       // 0x328(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        StormCircleSize;                                   // 0x338(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCDCLargeInt                          StormCircleSizeTracker;                            // 0x340(0x8)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            StormCircleSizeEvent;                              // 0x348(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TArray<float>                                StormCircleLocation;                               // 0x358(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FCDCFloatArray                        StormCircleLocationTracker;                        // 0x368(0x10)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            StormCircleLocationEvent;                          // 0x378(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class FString                                PlayerLocation;                                    // 0x388(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCDCStringFloatArrayMap               PlayerLocationTracker;                             // 0x398(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            PlayerLocationEvent;                               // 0x3E8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class FString                                ArenaPointLeaderBoard;                             // 0x3F8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCDCStringStringMap                   ArenaPointLeaderBoardTracker;                      // 0x408(0xA0)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            ArenaPointLeaderBoardEvent;                        // 0x4A8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class FString                                CashCupDataAllTimeEarners;                         // 0x4B8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCDCStringFloatMap                    CashCupDataAllTimeEanersTracker;                   // 0x4C8(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            CashCupDataAllTimeEarnersEvent;                    // 0x518(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class FString                                MythicBossEliminatedPlayer;                        // 0x528(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCDCString                            MythicBossEliminatedPlayerTracker;                 // 0x538(0x10)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            MythicBossEliminatedPlayerEvent;                   // 0x548(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class FString                                MythicWeaponPlayer;                                // 0x558(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCDCString                            MythicWeaponPlayerTracker;                         // 0x568(0x10)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            MythicWeaponPlayerEvent;                           // 0x578(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class FString                                PlayerInfo;                                        // 0x588(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCDCStringArray                       PlayerInfoTracker;                                 // 0x598(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            PlayerInfoEvent;                                   // 0x5B0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UCreativeDataChannelTargetFN* GetDefaultObj();

};

// 0x4C0 (0x7C8 - 0x308)
// Class CreativeDataChannelTriggerRuntime.CreativeDataChannelTargetRL
class UCreativeDataChannelTargetRL : public UElectraDataChannelTarget
{
public:
	uint8                                        Pad_4022[0x8];                                     // Fixing Size After Last Property 
	int32                                        VersionByte;                                       // 0x310(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCDCInt                               VersionByteTracker;                                // 0x314(0x4)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            VersionByteEvent;                                  // 0x318(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	int32                                        ScoreTeam;                                         // 0x328(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4023[0x4];                                     // Fixing Size After Last Property 
	struct FCDCString                            ScoreTeamTracker;                                  // 0x330(0x10)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            ScoreTeamEvent;                                    // 0x340(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class FString                                ScoreTotal;                                        // 0x350(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCDCStringIntMap                      ScoreTotalTracker;                                 // 0x360(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            ScoreTotalEvent;                                   // 0x3B0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	int64                                        ScoreboardTimeLeft;                                // 0x3C0(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCDCLargeInt                          ScoreboardTimeLeftTracker;                         // 0x3C8(0x8)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            ScoreboardTimeLeftEvent;                           // 0x3D0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class FString                                ScoreboardBestOf;                                  // 0x3E0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCDCStringIntMap                      ScoreboardBestOfTracker;                           // 0x3F0(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            ScoreboardBestOfEvent;                             // 0x440(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	int32                                        OverTime;                                          // 0x450(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCDCInt                               OvertimeTracker;                                   // 0x454(0x4)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OvertimeEvent;                                     // 0x458(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class FString                                TeamNames;                                         // 0x468(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCDCStringArray                       TeamNamesTracker;                                  // 0x478(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            TeamNamesEvent;                                    // 0x490(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class FString                                PlayerNames;                                       // 0x4A0(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCDCStringArray                       PlayerNamesTracker;                                // 0x4B0(0x18)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            PlayerNamesEvent;                                  // 0x4C8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class FString                                PlayerBoost;                                       // 0x4D8(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCDCStringIntMap                      PlayerBoostTracker;                                // 0x4E8(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            PlayerBoostEvent;                                  // 0x538(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class FString                                PlayerBoostCollected;                              // 0x548(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCDCStringStringMap                   PlayerBoostCollectedTracker;                       // 0x558(0xA0)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            PlayerBoostCollectedEvent;                         // 0x5F8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class FString                                PlayerCoords;                                      // 0x608(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCDCStringFloatArrayMap               PlayerCoordsTracker;                               // 0x618(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            PlayerCoordsEvent;                                 // 0x668(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class FString                                BallCoords;                                        // 0x678(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCDCFloatArray                        BallCoordsTracker;                                 // 0x688(0x10)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            BallCoordsEvent;                                   // 0x698(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	class FString                                MediaStart;                                        // 0x6A8(0x10)(BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCDCStringStringMap                   MediaStartTracker;                                 // 0x6B8(0xA0)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            MediaStartEvent;                                   // 0x758(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	int32                                        MediaStop;                                         // 0x768(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCDCInt                               MediaStopTracker;                                  // 0x76C(0x4)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            MediaStopEvent;                                    // 0x770(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	int32                                        SeriesState;                                       // 0x780(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCDCInt                               SeriesStateTracker;                                // 0x784(0x4)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            SeriesStateEvent;                                  // 0x788(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	int32                                        MatchState;                                        // 0x798(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCDCInt                               MatchStateTracker;                                 // 0x79C(0x4)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            MatchStateEvent;                                   // 0x7A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	int32                                        FinaleState;                                       // 0x7B0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCDCInt                               FinaleStateTracker;                                // 0x7B4(0x4)(BlueprintVisible, BlueprintReadOnly, NoDestructor, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            FinaleStateEvent;                                  // 0x7B8(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UCreativeDataChannelTargetRL* GetDefaultObj();

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


