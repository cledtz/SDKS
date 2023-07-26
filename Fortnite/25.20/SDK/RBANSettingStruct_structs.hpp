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

// 0x90 (0x90 - 0x0)
// UserDefinedStruct RBANSettingStruct.RBANSettingStruct
struct FRBANSettingStruct
{
public:
	struct FVector                               ComponentLinearAccScale_28_9CBE863E417FC965C07809A2FE55ADFD; // 0x0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector                               ComponentLinearVelScale_31_6A3DFE4A481AD4D7CB18D79F95CC88E8; // 0x18(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSimSpaceSettings                     SimSpaceSettings_34_FE68F666411FF9F29BA84CB4BE726A52; // 0x30(0x60)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
