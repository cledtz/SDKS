#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x1740 - 0x1720)
// BlueprintGeneratedClass BP_PhoebePlayerController.BP_PhoebePlayerController_C
class UBP_PhoebePlayerController_C : public UFortAthenaAIBotController
{
public:
	class UFortControllerComponent_RechargeWeapons* RechargingWeaponsComponent;                        // 0x1720(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortBlackboardComponent*              Blackboard1;                                       // 0x1728(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UFortAthenaAIBotBuildingComponent*     FortAthenaAIBotBuilding;                           // 0x1730(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)
	class UAIPerceptionComponent*                AIPerception;                                      // 0x1738(0x8)(BlueprintVisible, ZeroConstructor, InstancedReference, NonTransactional, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UBP_PhoebePlayerController_C* GetDefaultObj();

};

}


