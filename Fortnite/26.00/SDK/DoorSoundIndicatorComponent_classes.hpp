#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x150 - 0x150)
// BlueprintGeneratedClass DoorSoundIndicatorComponent.DoorSoundIndicatorComponent_C
class UDoorSoundIndicatorComponent_C : public UFortSoundIndicatorComponent
{
public:

	static class UClass* StaticClass();
	static class UDoorSoundIndicatorComponent_C* GetDefaultObj();

	TArray<enum class EFortTeamAffiliation> GetAffiliationsToShowFor(TArray<enum class EFortTeamAffiliation>& K2Node_MakeArray_Array);
	bool ShouldShowSoundIndicator(class UFortPlayerController* PlayerController, class UFortPlayerPawn* CallFunc_GetPlayerPawn_ReturnValue, class UActor* CallFunc_GetOwner_ReturnValue, bool CallFunc_NotEqual_ObjectObject_ReturnValue, class UBuildingWall* K2Node_DynamicCast_AsBuilding_Wall, bool K2Node_DynamicCast_bSuccess);
};

}


