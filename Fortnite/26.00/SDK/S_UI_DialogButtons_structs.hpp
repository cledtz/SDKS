#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x64 (0x64 - 0x0)
// UserDefinedStruct S_UI_DialogButtons.S_UI_DialogButtons
struct FS_UI_DialogButtons
{
public:
	struct FS_UI_Placement                       GroupPlacement_71_A94CBD4C4E96C298CF51F6B49895AE3D; // 0x0(0x40)(Edit, BlueprintVisible, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       SpaceBetweenButtons_62_39091237442DEAE1CAFAE3AB75A757F1; // 0x40(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EModularButtonSize                EachButtonSize_74_7A1E34E243F1F10533E9EA910463B328; // 0x48(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EHorizontalAlignment              EachButtonHorizontalAlignment_67_3A1B89E0481CE49778D5E39C0BD7E90C; // 0x49(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EVerticalAlignment                EachButtonVerticalAlignment_68_68D332304FA9E9F9D60D0E8B410EE23F; // 0x4A(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8B13[0x1];                                     // Fixing Size After Last Property 
	int32                                        EachButtonMinWidth_77_CA4A0FEF4CF6FF0700E0DB8F95AC917B; // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<enum class E_UI_ButtonVisualType>     CTAButtonstypes_81_963DA1ED40E4193862297D976DA12A11; // 0x50(0x10)(Edit, BlueprintVisible)
	int32                                        FocuseButton_85_CC6A212C4012DDFDC810689A87324E54;  // 0x60(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


