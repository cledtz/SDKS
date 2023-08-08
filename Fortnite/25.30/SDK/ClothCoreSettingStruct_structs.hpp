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

// 0x80 (0x80 - 0x0)
// UserDefinedStruct ClothCoreSettingStruct.ClothCoreSettingStruct
struct FClothCoreSettingStruct
{
public:
	struct FVector2D                             EdgeStiffness_28_9A24DA0842E21D5736699499F1DE1171; // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             BendingStiffness_29_6CD0864B4078D8378C061197E9B1B094; // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             AreaStiffness_30_0D981B4E4039D5A0C6A4C78D6F09D510; // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             TetherStiffness_24_A5C4B017498D3154D76CECAB9AE7BDF2; // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CollisionThickness_14_DACF320B4C03C6BD248A8E9B7B867FC7; // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        FrictionCoefficient_15_E5761CE84E8E52EEBD663B9DC3A0906F; // 0x44(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        SelfCollisionThickness_16_98974B1C4B5ABE4EA1CFF7A791319392; // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        DampingCoefficient_17_A343D5A54D704F5B249C8E907DA80101; // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        LocalDampingCoefficient_33_993AFAEA430EEBF424A7D0B8BB57CFB5; // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1FCA[0x4];                                     // Fixing Size After Last Property
	struct FVector2D                             AnimDriveStiffness_27_E54C28B348B4C35A1D0817AFA9FF0423; // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             AnimDriveDamping_26_F9EDBF5240E75A4905AFA1A8240922C8; // 0x68(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NumberIterations_21_8E04A8E94B2040C7DBF93194733AC36A; // 0x78(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int32                                        NumberSubsteps_23_5108D5FA40140A1AAD38459100B14261; // 0x7C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
