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
// Class PhaseCommits.PhaseCommitFlow_Coordinator
class UPhaseCommitFlow_Coordinator : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PhaseCommitFlow_Coordinator");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class PhaseCommits.PhaseCommitFlow_Participant
class UPhaseCommitFlow_Participant : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("PhaseCommitFlow_Participant");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
