#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x8 (0xA8 - 0xA0)
// Class MidMatchObjectivesGameplayRuntime.FortGameStateComponent_MidMatchObjectiveParent
class UFortGameStateComponent_MidMatchObjectiveParent : public UFortGameStateComponent
{
public:
	class FName                                  ObjectiveCompletedStatName;                        // 0xA0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_449B[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortGameStateComponent_MidMatchObjectiveParent* GetDefaultObj();

	void SetObjectiveCompletedStat(uint8 SquadId);
};

}


