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

// 0x3C0 (0x510 - 0x150)
// Class VotingFramework.VoteBroadcasterComponent
class UVoteBroadcasterComponent : public UMeshNetworkComponent
{
public:
	TArray<struct FVoteSessionSettings>          VoteSessionSettingsList;                           // 0x150(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	struct FVoteSessionRuntimeArray              VoteSessionRuntimeList;                            // 0x160(0x120)(Net, Transient, Protected, NativeAccessSpecifierProtected)
	struct FVoteRuntimeArray                     VoteRuntimeList;                                   // 0x280(0x120)(Net, Transient, Protected, NativeAccessSpecifierProtected)
	struct FVoteSelectionResultsArray            VoteResultsList;                                   // 0x3A0(0x120)(Net, Transient, Protected, NativeAccessSpecifierProtected)
	TMap<struct FUniqueNetIdRepl, struct FCastedVote> PlayerCastedVotesMap;                              // 0x4C0(0x50)(Transient, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VoteBroadcasterComponent");
		return Clss;
	}

	void VoteStart(class FName VoteSessionId, class FName VoteId);
	void VoteSetup(class FName VoteSessionId, class FName VoteId);
	void VoteSessionShutdown(class FName VoteSessionId);
	void VoteSessionSetup(class FName VoteSessionId, class FName StartingVoteId, enum class EVoteSessionNetworkType NetworkType);
	void VoteSessionComplete(class FName VoteSessionId);
	void VoteEnd(class FName VoteSessionId, class FName VoteId, class FName WinningVoteSelectionId);
	void ServerSubmitVotesAggregated(class FName VoteSessionId, class FName VoteId, class FName VoteSelectionId, int32 VoteDelta);
	void OnVoteCasted(struct FUniqueNetIdRepl& UserNetId, struct FGameplayTag& VoteSessionId, struct FGameplayTag& VoteId, struct FGameplayTag& VoteSelectionId);
};

// 0xA0 (0xD0 - 0x30)
// Class VotingFramework.VoteDispatchSubsystem
class UVoteDispatchSubsystem : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_1693[0x90];                                    // Fixing Size After Last Property..
	TArray<struct FVoteSelectionResults>         VotingResults;                                     // 0xC0(0x10)(ZeroConstructor, Transient, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VoteDispatchSubsystem");
		return Clss;
	}

};

// 0x10 (0x2A0 - 0x290)
// Class VotingFramework.VoteInitiationActor
class AVoteInitiationActor : public AInfo
{
public:
	uint8                                        Pad_1694[0x8];                                     // Fixing Size After Last Property..
	class UVoteBroadcasterComponent*             VoteBroadcasterComponent;                          // 0x298(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VoteInitiationActor");
		return Clss;
	}

};

// 0xE0 (0x180 - 0xA0)
// Class VotingFramework.VoteListenerComponent
class UVoteListenerComponent : public UActorComponent
{
public:
	FMulticastInlineDelegateProperty_            OnVoteSessionSetupEvent;                           // 0xA0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnVoteSessionVotingEvent;                          // 0xB0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnVoteSetupEvent;                                  // 0xC0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnVoteStartEvent;                                  // 0xD0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnVoteChangeEvent;                                 // 0xE0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnVoteEndEvent;                                    // 0xF0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnVoteSessionCompleteEvent;                        // 0x100(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            OnVoteSessionShutdownEvent;                        // 0x110(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 RequestedVoteSessionIds;                           // 0x120(0x20)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 RequestedVoteIds;                                  // 0x140(0x20)(Edit, Protected, NativeAccessSpecifierProtected)
	struct FGameplayTagContainer                 RequestedVoteSelectionIds;                         // 0x160(0x20)(Edit, Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VoteListenerComponent");
		return Clss;
	}

	void OnVoteStart(struct FGameplayTag& VoteSessionId, struct FGameplayTag& VoteId, enum class EVoteState VoteState);
	void OnVoteSetup(struct FGameplayTag& VoteSessionId, struct FGameplayTag& VoteId, enum class EVoteState VoteState);
	void OnVoteSessionVoting(struct FGameplayTag& VoteSessionId, struct FGameplayTag& StartingVoteId, enum class EVoteSessionState SessionState);
	void OnVoteSessionShutdown(struct FGameplayTag& VoteSessionId);
	void OnVoteSessionSetup(struct FGameplayTag& VoteSessionId, struct FGameplayTag& StartingVoteId, enum class EVoteSessionNetworkType NetworkType, enum class EVoteSessionState SessionState);
	void OnVoteSessionComplete(struct FGameplayTag& VoteSessionId);
	void OnVoteEnd(struct FGameplayTag& VoteSessionId, struct FGameplayTag& VoteId, struct FGameplayTag& WinningVoteSelectionId, enum class EVoteState VoteState);
	void OnVoteChange(struct FGameplayTag& VoteSessionId, struct FGameplayTag& VoteId, struct FGameplayTag& VoteSelectionId, int32 ServerVoteTotal, int32 AllServersVoteTotal);
};

// 0x70 (0x1F0 - 0x180)
// Class VotingFramework.VoteResponderComponent
class UVoteResponderComponent : public UVoteListenerComponent
{
public:
	TArray<struct FVoteSelection>                SupportedVoteSelections;                           // 0x180(0x10)(Edit, Net, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	bool                                         bShouldLockVotingAfterCasted;                      // 0x190(0x1)(Edit, Net, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_169D[0x7];                                     // Fixing Size After Last Property..
	TMap<struct FUniqueNetIdRepl, struct FCastedVote> PlayerCastedVotesMap;                              // 0x198(0x50)(Transient, Protected, NativeAccessSpecifierProtected)
	class FName                                  ActiveVoteSessionId;                               // 0x1E8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  ActiveVoteId;                                      // 0x1EC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VoteResponderComponent");
		return Clss;
	}

	void ServerCastVoteSelection(struct FUniqueNetIdRepl& InUserId, struct FCastedVote& CastedVote);
	void CastManualVoteSelectionAtIndex(class APlayerState* InPlayerState, int32 SelectionIndex);
	void CastManualVoteSelection(class APlayerState* InPlayerState, struct FGameplayTag& VoteSelection);
	void CastDefaultVoteSelection(class APlayerState* InPlayerState);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
