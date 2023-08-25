#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x600 - 0x5F0)
// BlueprintGeneratedClass NPC_Wildlife_Controller_Parent.NPC_Wildlife_Controller_Parent_C
class UNPC_Wildlife_Controller_Parent_C : public UAthenaAIController
{
public:
	class UAthenaMarkerComponent*                AthenaMarker;                                      // 0x5F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortAthenaNpcPatrollingComponent*     FortAthenaNpcPatrolling;                           // 0x5F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UNPC_Wildlife_Controller_Parent_C* GetDefaultObj();

};

}


