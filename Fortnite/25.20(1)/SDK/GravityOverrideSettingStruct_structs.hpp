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

// 0x64 (0x64 - 0x0)
// UserDefinedStruct GravityOverrideSettingStruct.GravityOverrideSettingStruct
struct FGravityOverrideSettingStruct
{
public:
	struct FVector                               WindFrequency_28_9CBE863E417FC965C07809A2FE55ADFD; // 0x0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               WindAmplitude_31_6A3DFE4A481AD4D7CB18D79F95CC88E8; // 0x18(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               WindOffset_32_C5F4D16F48D0BEDC3F0FA38B2648511B;    // 0x30(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               GravityOverride_15_9C3CF2B14934A1AC917C4C99F03AFC6E; // 0x48(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  JointName_27_C74F3B2245EA319DE82A629FF3C17CCA;     // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
