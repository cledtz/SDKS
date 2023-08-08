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

// 0x58 (0x58 - 0x0)
// UserDefinedStruct FluidForceImpulse.FluidForceImpulse
struct FFluidForceImpulse
{
public:
	struct FVector                               WorldPosition_32_C9A94C02422D8BF40DF6B1BB2A0D8CBC; // 0x0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ForceRadius_31_C31B527C4C367A5CA5E1DF8E49E76234;   // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        ForceStrength_30_2CAA30794D1EFF60AE1C3491D011CECF; // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInterface*                    MaterialOverride_24_5A792CE8489A59E5D9B24F9E4DCFE94A; // 0x20(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        Lifetime_34_C2749C1449C41D4F236BCBAF6ED34113;      // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        StrengthoverLifePower_41_85B52C994A7ED323A34BF4BBCB0DFA0F; // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FFluidForceImpulseTimedEffects        TimedWaterDropSplashes_38_2CB1456B483AEF3A52677AAF4152E31E; // 0x30(0x28)(Edit, BlueprintVisible, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
