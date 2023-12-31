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

// 0x61 (0x61 - 0x0)
// UserDefinedStruct FluidForceImpulsePerInstanceData.FluidForceImpulsePerInstanceData
struct FFluidForceImpulsePerInstanceData
{
public:
	struct FFluidForceImpulse                    ImpulseSettings_41_C9A94C02422D8BF40DF6B1BB2A0D8CBC; // 0x0(0x58)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	float                                        ElapsedTime_44_12C387C1450456E47FC74BBD11EEAE4F;   // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StartOffset_48_78EF0E3F4B05F70C5679F9B9F41D590F;   // 0x5C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         IsSplashEffect_54_4A5B178940D26E71D6FCDF84584A5284; // 0x60(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
