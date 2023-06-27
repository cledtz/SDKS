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

// 0x18 (0x13F8 - 0x13E0)
// BlueprintGeneratedClass BP_PhoebePlayerController.BP_PhoebePlayerController_C
class ABP_PhoebePlayerController_C : public AFortAthenaAIBotController
{
public:
	class UFortBlackboardComponent*              Blackboard1;                                       // 0x13E0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortAthenaAIBotBuildingComponent*     FortAthenaAIBotBuilding;                           // 0x13E8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAIPerceptionComponent*                AIPerception;                                      // 0x13F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BP_PhoebePlayerController_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
