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

// 0x78 (0x78 - 0x0)
// UserDefinedStruct WindGustSettingStruct.WindGustSettingStruct
struct FWindGustSettingStruct
{
public:
	float                                        MinTimeBetweenGusts_25_6CD0864B4078D8378C061197E9B1B094; // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxTimeBetweenGusts_28_0D981B4E4039D5A0C6A4C78D6F09D510; // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MinGustStrength_26_A5C4B017498D3154D76CECAB9AE7BDF2; // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxGustStrength_29_DACF320B4C03C6BD248A8E9B7B867FC7; // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MinGustDuration_27_E5761CE84E8E52EEBD663B9DC3A0906F; // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxGustDuration_30_98974B1C4B5ABE4EA1CFF7A791319392; // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        WindTurbulenceScalarA_48_A343D5A54D704F5B249C8E907DA80101; // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        WindTurbulenceScalarB_47_E54C28B348B4C35A1D0817AFA9FF0423; // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MinUpInterpSpeed_36_8E04A8E94B2040C7DBF93194733AC36A; // 0x20(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxUpInterpSpeed_37_5108D5FA40140A1AAD38459100B14261; // 0x24(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MinDownInterpSpeed_40_C3AD555846C2AEB9625C4E93B6758BB8; // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        MaxDownInterpSpeed_41_394B2B66448D9D21249A288C7DEC98F1; // 0x2C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               WindFrequency_51_9F209DFA4F7AB96CE220578516F0B4CF; // 0x30(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               WindAmplitude_54_E174BDEC415CE55F6A1475B799695475; // 0x48(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               WindOffset_55_91DD775940222EE47FDA3BA8695E8FE9;    // 0x60(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
