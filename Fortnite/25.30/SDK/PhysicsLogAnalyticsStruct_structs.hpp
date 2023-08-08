#pragma once

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

// 0x6C (0x6C - 0x0)
// UserDefinedStruct PhysicsLogAnalyticsStruct.PhysicsLogAnalyticsStruct
struct FPhysicsLogAnalyticsStruct
{
public:
	class FString                                InstanceName_29_E13A3CF84B9151E7004D9B8C51FD00B9;  // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	class FString                                FelledBy_2_076924F44337FDE90F8B5C9C7645CDF2;       // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash)
	struct FVector                               FelledAtLocation_7_87D469DB42BC3085780226AC3B154AD1; // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FelledAtMatchTime_17_701A35DB42F8DA247CDC50AC58CCCD4E; // 0x38(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_156A[0x4];                                     // Fixing Size After Last Property
	struct FVector                               DestroyedAtLocation_33_93747681485FCEB2F9D50B8F2C9BA72B; // 0x40(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DestroyedAtMatchTime_31_1DCF4002426A45C86050D4B13C85632F; // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DamageToPlayers_20_F701392440AAC7AC33A8B2BCAEB3C5D0; // 0x5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DamageToStructures_22_636FABDE409E1A51BAF808863B05D213; // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DamageToVehicles_24_69A07F714B43DF853CA180B441A6A29C; // 0x64(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DamageToAI_26_9671D0A943425BB2EC73159C0B19C99D;    // 0x68(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
