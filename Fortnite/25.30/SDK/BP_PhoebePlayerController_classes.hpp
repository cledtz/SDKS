#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x1410 - 0x13F0)
// BlueprintGeneratedClass BP_PhoebePlayerController.BP_PhoebePlayerController_C
class UBP_PhoebePlayerController_C : public UFortAthenaAIBotController
{
public:
	class UFortControllerComponent_RechargeWeapons* RechargingWeaponsComponent;                        // 0x13F0(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortBlackboardComponent*              Blackboard1;                                       // 0x13F8(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortAthenaAIBotBuildingComponent*     FortAthenaAIBotBuilding;                           // 0x1400(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAIPerceptionComponent*                AIPerception;                                      // 0x1408(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

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
