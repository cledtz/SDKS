#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ECoordinatorFlowState : uint8
{
	NONE                           = 0,
	Initializing                   = 1,
	WaitingForRequest              = 2,
	WaitingForConsensus_BeginChange = 3,
	WaitingForConsensus_Precommit  = 4,
	Consensus_Success              = 5,
	Consensus_Failed               = 6,
	ECoordinatorFlowState_MAX      = 7,
};

enum class EParticipantFlowState : uint8
{
	NONE                           = 0,
	Initializing                   = 1,
	WaitingFor_BroadcastBeginChange = 2,
	WaitingFor_Precommit           = 3,
	WaitingFor_Commit              = 4,
	EParticipantFlowState_MAX      = 5,
};

enum class EPhaseCommit : uint8
{
	One                            = 0,
	Two                            = 1,
	Three                          = 2,
	EPhaseCommit_MAX               = 3,
};

enum class ECoordinatorBroadcasts : uint8
{
	ReadyForRequests               = 0,
	BeginStateChange_TwoPhase      = 1,
	BeginStateChange_ThreePhase    = 2,
	PreCommit                      = 3,
	Success                        = 4,
	Aborted                        = 5,
	ECoordinatorBroadcasts_MAX     = 6,
};

enum class EParticipantResponses : uint8
{
	NONE                           = 0,
	AcceptedBegin                  = 1,
	RejectedBegin                  = 2,
	AcceptedPreCommit              = 3,
	RejectedPreCommit              = 4,
	ReceivedSuccess                = 5,
	ReceivedAbort                  = 6,
	EParticipantResponses_MAX      = 7,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
