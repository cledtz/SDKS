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

// 0x40 (0x40 - 0x0)
// UserDefinedStruct S_UI_Placement.S_UI_Placement
struct FS_UI_Placement
{
public:
	enum class EHorizontalAlignment              HorizontalAlignment_4_A94CBD4C4E96C298CF51F6B49895AE3D; // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EVerticalAlignment                VerticalAlignment_5_BC3E4CD143DBC026850F4BAE098F6937; // 0x1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_827A[0x2];                                     // Fixing Size After Last Property 
	struct FMargin                               Padding_8_030D86C14EBE7996733C89A951279A61;        // 0x4(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor)
	uint8                                        Pad_827B[0x4];                                     // Fixing Size After Last Property 
	struct FS_UI_GridCell                        Grid_19_3148B55D43C5889FC5D1FF82667A7D01;          // 0x18(0x28)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}


