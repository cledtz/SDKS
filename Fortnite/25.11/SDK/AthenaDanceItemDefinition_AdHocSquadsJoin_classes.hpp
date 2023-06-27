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

// 0x20 (0xA50 - 0xA30)
// BlueprintGeneratedClass AthenaDanceItemDefinition_AdHocSquadsJoin.AthenaDanceItemDefinition_AdHocSquadsJoin_C
class UAthenaDanceItemDefinition_AdHocSquadsJoin_C : public UAthenaDanceItemDefinition
{
public:
	class UAthenaDanceItemDefinition*            GroupEmoteToStartLeader_AutoSquadUp;               // 0xA30(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAthenaDanceItemDefinition*            GroupEmoteToStartFollower_AdHocSquadUp;            // 0xA38(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAthenaDanceItemDefinition*            GroupEmoteToStartLeaderIfBothOwn_AdHocSquadUp;     // 0xA40(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	class UAthenaDanceItemDefinition*            GroupEmoteToStartFollowerIfBothOwn_AdHocSquadUp;   // 0xA48(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AthenaDanceItemDefinition_AdHocSquadsJoin_C");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
