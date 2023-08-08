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

// 0x5C (0x5C - 0x0)
// UserDefinedStruct ClothSettingStruct.ClothSettingStruct
struct FClothSettingStruct
{
public:
	struct FVector                               LinearVelocityScale_7_9CBE863E417FC965C07809A2FE55ADFD; // 0x0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        AngularVelocityScale_6_6A3DFE4A481AD4D7CB18D79F95CC88E8; // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FictitiousAngularScale_10_C5F4D16F48D0BEDC3F0FA38B2648511B; // 0x1C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               GravityOverride_15_9C3CF2B14934A1AC917C4C99F03AFC6E; // 0x20(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             DragCoefficient_23_FE68F666411FF9F29BA84CB4BE726A52; // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             LiftCoefficient_24_BB285D994A5B3AFF167F4793D7ECA837; // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  JointName_27_C74F3B2245EA319DE82A629FF3C17CCA;     // 0x58(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
