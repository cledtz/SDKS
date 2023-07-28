#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// ScriptStruct MidMatchAssignedGameplayRuntime.FortAssignedObjectiveSquadData
struct FFortAssignedObjectiveSquadData
{
public:
	uint8                                        SquadId;                                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_81D6[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               CachedSquadAvgLocation;                            // 0x8(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct MidMatchAssignedGameplayRuntime.FortAssignedObjectiveData
struct FFortAssignedObjectiveData
{
public:
	TArray<struct FFortAssignedObjectiveSquadData> AssignedSquadDataArray;                            // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NativeAccessSpecifierPublic)
	struct FVector                               ObjectiveLocation;                                 // 0x10(0x18)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
