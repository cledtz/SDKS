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

// 0x148 (0x148 - 0x0)
// UserDefinedStruct FluidForceDynamicPerInstanceData.FluidForceDynamicPerInstanceData
struct FFluidForceDynamicPerInstanceData
{
public:
	struct FFluidForceDynamic                    ForceInfo_2_A6A35E3243FAF59D161A5FBAA2F6F2B1;      // 0x0(0x70)(Edit, BlueprintVisible, ContainsInstancedReference, HasGetValueTypeHash)
	struct FVector                               ComponentLocation_13_959307184C8E5CCACA55FC8378D92CFD; // 0x70(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               ComponentVelocity_5_4F6589474918826DF8A6468CF0F2C361; // 0x88(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        BoundsRadius_30_ADFF818743BE39AC4A481D995CB50D03;  // 0xA0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        WaterLevel_34_A4E505D148073B883CA7B1B09A3E34A8;    // 0xA4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TMap<class FName, struct FVector>            SocketLocationMap_21_ABF6AA244A5F84728A5E83BE2328C7FA; // 0xA8(0x50)(Edit, BlueprintVisible)
	TMap<class FName, struct FVector>            SocketVelocityMap_26_82B0E24B45935A12E1949F918A59A537; // 0xF8(0x50)(Edit, BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
