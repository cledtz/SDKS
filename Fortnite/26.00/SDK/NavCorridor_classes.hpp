#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x118 (0x6D0 - 0x5B8)
// Class NavCorridor.NavCorridorTestingComponent
class UNavCorridorTestingComponent : public UDebugDrawComponent
{
public:
	struct FNavAgentProperties                   NavAgentProps;                                     // 0x5B8(0x30)(Edit, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class UNavigationQueryFilter>    FilterClass;                                       // 0x5E8(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bFindCorridorToGoal;                               // 0x5F0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bFollowPathOnGoalCorridor;                         // 0x5F1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1536[0x2];                                     // Fixing Size After Last Property 
	float                                        FollowLookAheadDistance;                           // 0x5F4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UActor*                                GoalActor;                                         // 0x5F8(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNavigationData*                       NavData;                                           // 0x600(0x8)(ZeroConstructor, Transient, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FNavCorridorParams                    CorridorParams;                                    // 0x608(0x18)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                         bUpdateParametersFromWidth;                        // 0x620(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_153C[0x3];                                     // Fixing Size After Last Property 
	float                                        PathOffset;                                        // 0x624(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        PathfindingTimeUs;                                 // 0x628(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        CorridorTimeUs;                                    // 0x62C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, EditConst, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_153E[0xA0];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UNavCorridorTestingComponent* GetDefaultObj();

};

// 0x8 (0x298 - 0x290)
// Class NavCorridor.NavCorridorTestingActor
class UNavCorridorTestingActor : public UActor
{
public:
	class UNavCorridorTestingComponent*          DebugComp;                                         // 0x290(0x8)(Edit, ExportObject, ZeroConstructor, EditConst, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UNavCorridorTestingActor* GetDefaultObj();

};

}


