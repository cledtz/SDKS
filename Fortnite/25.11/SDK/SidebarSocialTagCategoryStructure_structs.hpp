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

// 0x6C (0x6C - 0x0)
// UserDefinedStruct SidebarSocialTagCategoryStructure.SidebarSocialTagCategoryStructure
struct FSidebarSocialTagCategoryStructure
{
public:
	struct FLinearColor                          TagSkewBoxInnerColor_48_C74E0AB74864DE4E29C3AEBA2ECC7DA4; // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          TagSkewBoxInnerColorHovered_42_7C212CFC4A6078EEE7C986B14E3FEB49; // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          TagSkewBoxInnerColorSelected_45_E34FF8A8455FE97079F6B0A6A31A05AB; // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          TagSkewBoxOuterColor_41_98DDEF0940105128E6C274B11D3A3D5D; // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          TagSkewBoxOuterColorSelected_47_9B952DE4402DE9AFF112F2A20DC4F48C; // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstance*                     TagCategoryIconMaterial_7_8991D63341121885D70AE09CB10AE389; // 0x50(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FSlateColor                           TagCategoryBaseColor_19_47DC015C4160F77A7C6E66AEEA302F6A; // 0x58(0x14)(Edit, BlueprintVisible)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
