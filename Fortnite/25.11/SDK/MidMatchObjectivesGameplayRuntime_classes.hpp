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

// 0x8 (0xA8 - 0xA0)
// Class MidMatchObjectivesGameplayRuntime.FortGameStateComponent_MidMatchObjectiveParent
class UFortGameStateComponent_MidMatchObjectiveParent : public UFortGameStateComponent
{
public:
	class FName                                  ObjectiveCompletedStatName;                        // 0xA0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A52[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortGameStateComponent_MidMatchObjectiveParent");
		return Clss;
	}

	void SetObjectiveCompletedStat(uint8 SquadId);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
