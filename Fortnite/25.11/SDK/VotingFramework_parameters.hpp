#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0x8 - 0x0)
// Function VotingFramework.VoteBroadcasterComponent.VoteStart
struct UVoteBroadcasterComponent_VoteStart_Params
{
public:
	class FName                                  VoteSessionId;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  VoteId;                                            // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function VotingFramework.VoteBroadcasterComponent.VoteSetup
struct UVoteBroadcasterComponent_VoteSetup_Params
{
public:
	class FName                                  VoteSessionId;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  VoteId;                                            // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function VotingFramework.VoteBroadcasterComponent.VoteSessionShutdown
struct UVoteBroadcasterComponent_VoteSessionShutdown_Params
{
public:
	class FName                                  VoteSessionId;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function VotingFramework.VoteBroadcasterComponent.VoteSessionSetup
struct UVoteBroadcasterComponent_VoteSessionSetup_Params
{
public:
	class FName                                  VoteSessionId;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  StartingVoteId;                                    // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVoteSessionNetworkType           NetworkType;                                       // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7D01[0x3];                                     // Fixing Size Of Struct..
};

// 0x4 (0x4 - 0x0)
// Function VotingFramework.VoteBroadcasterComponent.VoteSessionComplete
struct UVoteBroadcasterComponent_VoteSessionComplete_Params
{
public:
	class FName                                  VoteSessionId;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function VotingFramework.VoteBroadcasterComponent.VoteEnd
struct UVoteBroadcasterComponent_VoteEnd_Params
{
public:
	class FName                                  VoteSessionId;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  VoteId;                                            // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  WinningVoteSelectionId;                            // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function VotingFramework.VoteBroadcasterComponent.ServerSubmitVotesAggregated
struct UVoteBroadcasterComponent_ServerSubmitVotesAggregated_Params
{
public:
	class FName                                  VoteSessionId;                                     // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  VoteId;                                            // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  VoteSelectionId;                                   // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        VoteDelta;                                         // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function VotingFramework.VoteBroadcasterComponent.OnVoteCasted
struct UVoteBroadcasterComponent_OnVoteCasted_Params
{
public:
	struct FUniqueNetIdRepl                      UserNetId;                                         // 0x0(0x30)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          VoteSessionId;                                     // 0x30(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          VoteId;                                            // 0x34(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          VoteSelectionId;                                   // 0x38(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7D02[0x4];                                     // Fixing Size Of Struct..
};

// 0xC (0xC - 0x0)
// Function VotingFramework.VoteListenerComponent.OnVoteStart
struct UVoteListenerComponent_OnVoteStart_Params
{
public:
	struct FGameplayTag                          VoteSessionId;                                     // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          VoteId;                                            // 0x4(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVoteState                        VoteState;                                         // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7D05[0x3];                                     // Fixing Size Of Struct..
};

// 0xC (0xC - 0x0)
// Function VotingFramework.VoteListenerComponent.OnVoteSetup
struct UVoteListenerComponent_OnVoteSetup_Params
{
public:
	struct FGameplayTag                          VoteSessionId;                                     // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          VoteId;                                            // 0x4(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVoteState                        VoteState;                                         // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7D06[0x3];                                     // Fixing Size Of Struct..
};

// 0xC (0xC - 0x0)
// Function VotingFramework.VoteListenerComponent.OnVoteSessionVoting
struct UVoteListenerComponent_OnVoteSessionVoting_Params
{
public:
	struct FGameplayTag                          VoteSessionId;                                     // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          StartingVoteId;                                    // 0x4(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVoteSessionState                 SessionState;                                      // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7D07[0x3];                                     // Fixing Size Of Struct..
};

// 0x4 (0x4 - 0x0)
// Function VotingFramework.VoteListenerComponent.OnVoteSessionShutdown
struct UVoteListenerComponent_OnVoteSessionShutdown_Params
{
public:
	struct FGameplayTag                          VoteSessionId;                                     // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function VotingFramework.VoteListenerComponent.OnVoteSessionSetup
struct UVoteListenerComponent_OnVoteSessionSetup_Params
{
public:
	struct FGameplayTag                          VoteSessionId;                                     // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          StartingVoteId;                                    // 0x4(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVoteSessionNetworkType           NetworkType;                                       // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVoteSessionState                 SessionState;                                      // 0x9(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7D08[0x2];                                     // Fixing Size Of Struct..
};

// 0x4 (0x4 - 0x0)
// Function VotingFramework.VoteListenerComponent.OnVoteSessionComplete
struct UVoteListenerComponent_OnVoteSessionComplete_Params
{
public:
	struct FGameplayTag                          VoteSessionId;                                     // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function VotingFramework.VoteListenerComponent.OnVoteEnd
struct UVoteListenerComponent_OnVoteEnd_Params
{
public:
	struct FGameplayTag                          VoteSessionId;                                     // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          VoteId;                                            // 0x4(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          WinningVoteSelectionId;                            // 0x8(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVoteState                        VoteState;                                         // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7D09[0x3];                                     // Fixing Size Of Struct..
};

// 0x14 (0x14 - 0x0)
// Function VotingFramework.VoteListenerComponent.OnVoteChange
struct UVoteListenerComponent_OnVoteChange_Params
{
public:
	struct FGameplayTag                          VoteSessionId;                                     // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          VoteId;                                            // 0x4(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          VoteSelectionId;                                   // 0x8(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ServerVoteTotal;                                   // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AllServersVoteTotal;                               // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function VotingFramework.VoteResponderComponent.ServerCastVoteSelection
struct UVoteResponderComponent_ServerCastVoteSelection_Params
{
public:
	struct FUniqueNetIdRepl                      InUserId;                                          // 0x0(0x30)(ConstParm, Parm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FCastedVote                           CastedVote;                                        // 0x30(0xC)(ConstParm, Parm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_7D0A[0x4];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function VotingFramework.VoteResponderComponent.CastManualVoteSelectionAtIndex
struct UVoteResponderComponent_CastManualVoteSelectionAtIndex_Params
{
public:
	class APlayerState*                          InPlayerState;                                     // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SelectionIndex;                                    // 0x8(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7D0B[0x4];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function VotingFramework.VoteResponderComponent.CastManualVoteSelection
struct UVoteResponderComponent_CastManualVoteSelection_Params
{
public:
	class APlayerState*                          InPlayerState;                                     // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          VoteSelection;                                     // 0x8(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_7D0C[0x4];                                     // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// Function VotingFramework.VoteResponderComponent.CastDefaultVoteSelection
struct UVoteResponderComponent_CastDefaultVoteSelection_Params
{
public:
	class APlayerState*                          InPlayerState;                                     // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
