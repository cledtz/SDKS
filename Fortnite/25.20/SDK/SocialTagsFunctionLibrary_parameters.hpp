#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x84 (0x84 - 0x0)
// Function SocialTagsFunctionLibrary.SocialTagsFunctionLibrary_C.InterpolateTagContentColors
struct USocialTagsFunctionLibrary_C_InterpolateTagContentColors_Params
{
public:
	class UTextBlock*                            TagName;                                           // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UImage*                                CheckMark;                                         // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CurrentTagContentColor;                            // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          TargetTagContentColor;                             // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       HoveredTagContentLerpAlpha;                        // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1753[0x3];                                     // Fixing Size After Last Property..
	struct FLinearColor                          CallFunc_LinearColorLerp_ReturnValue;              // 0x44(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_LinearColorLerp_ReturnValue_1;            // 0x54(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue_1;                    // 0x64(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1754[0x3];                                     // Fixing Size After Last Property..
	struct FSlateColor                           K2Node_MakeStruct_SlateColor;                      // 0x68(0x14)()
	float                                        CallFunc_LinearColorLerp_Alpha_ImplicitCast;       // 0x7C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_LinearColorLerp_Alpha_ImplicitCast_1;     // 0x80(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x70 (0x70 - 0x0)
// Function SocialTagsFunctionLibrary.SocialTagsFunctionLibrary_C.InterpolateTagBorderColors
struct USocialTagsFunctionLibrary_C_InterpolateTagBorderColors_Params
{
public:
	class UMaterialInstanceDynamic*              TagBorderMaterial;                                 // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                  NameInnerColor;                                    // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CurrentInnerColor;                                 // 0xC(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          TargetInnerColor;                                  // 0x1C(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  NameOuterColor;                                    // 0x2C(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CurrentOuterColor;                                 // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          TargetOuterColor;                                  // 0x40(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       HoveredBorderColorLerpAlpha;                       // 0x50(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          ColorLerpTimeHandle;                               // 0x58(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	class UObject*                               WorldContext;                                      // 0x60(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x68(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x19 (0x19 - 0x0)
// Function SocialTagsFunctionLibrary.SocialTagsFunctionLibrary_C.ClearLerpColorTimer
struct USocialTagsFunctionLibrary_C_ClearLerpColorTimer_Params
{
public:
	double                                       ColorLerpAlpha;                                    // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          ColorLerpTimeHandle;                               // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x54 (0x54 - 0x0)
// Function SocialTagsFunctionLibrary.SocialTagsFunctionLibrary_C.InterpolateMaterialColor
struct USocialTagsFunctionLibrary_C_InterpolateMaterialColor_Params
{
public:
	class UMaterialInstanceDynamic*              Material;                                          // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class FName                                  ColorParameterName;                                // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CurrentColor;                                      // 0xC(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          TargetColor;                                       // 0x1C(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1755[0x4];                                     // Fixing Size After Last Property..
	double                                       ColorLerpAlpha;                                    // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_LinearColorLerp_ReturnValue;              // 0x40(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_LinearColorLerp_Alpha_ImplicitCast;       // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD8 (0xD8 - 0x0)
// Function SocialTagsFunctionLibrary.SocialTagsFunctionLibrary_C.InterpolateTagBorderOuterStrokeColor
struct USocialTagsFunctionLibrary_C_InterpolateTagBorderOuterStrokeColor_Params
{
public:
	class UBorder*                               TagBorder;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                  TagOuterStrokeColor;                               // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1756[0x4];                                     // Fixing Size After Last Property..
	struct FSidebarSocialTagCategoryStructure    SidebarSocialTagCategoryStructure;                 // 0x10(0x6C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	uint8                                        Pad_1757[0x4];                                     // Fixing Size After Last Property..
	double                                       TagBorderInnerColorHoveredLerpValue;               // 0x80(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          TagBorderInnerColorHoveredLerpTimeHandle;          // 0x88(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               TagWidgetReference;                                // 0x90(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          TagOuterStrokeColorUnhovered;                      // 0x98(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0xA8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsHovered_ReturnValue;                    // 0xB0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0xB1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xB2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_DoubleDouble_ReturnValue_1;    // 0xB3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xB4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0xB5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0xB6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1758[0x1];                                     // Fixing Size After Last Property..
	struct FLinearColor                          CallFunc_LinearColorLerp_ReturnValue;              // 0xB8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0xC8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1759[0x3];                                     // Fixing Size After Last Property..
	float                                        CallFunc_LinearColorLerp_Alpha_ImplicitCast;       // 0xD4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xDC (0xDC - 0x0)
// Function SocialTagsFunctionLibrary.SocialTagsFunctionLibrary_C.InterpolateTagBorderGradientColor
struct USocialTagsFunctionLibrary_C_InterpolateTagBorderGradientColor_Params
{
public:
	class UBorder*                               TagBorder;                                         // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class FName                                  TagInnerColorGradient_1;                           // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class FName                                  TagInnerColorGradient_2;                           // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSidebarSocialTagCategoryStructure    SidebarSocialTagCategoryStructure;                 // 0x10(0x6C)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, HasGetValueTypeHash)
	uint8                                        Pad_175A[0x4];                                     // Fixing Size After Last Property..
	double                                       TagBorderInnerColorHoveredLerpValue;               // 0x80(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTimerHandle                          TagBorderInnerColorHoveredLerpTimeHandle;          // 0x88(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash)
	class UWidget*                               TagWidgetReference;                                // 0x90(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x98(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsHovered_ReturnValue;                    // 0xA0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_DoubleDouble_ReturnValue;      // 0xA1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0xA2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_DoubleDouble_ReturnValue_1;    // 0xA3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xA4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0xA5(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0xA6(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_175B[0x1];                                     // Fixing Size After Last Property..
	struct FLinearColor                          CallFunc_LinearColorLerp_ReturnValue;              // 0xA8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FLinearColor                          CallFunc_LinearColorLerp_ReturnValue_1;            // 0xB8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0xC8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsValid_ReturnValue;                      // 0xD0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_175C[0x3];                                     // Fixing Size After Last Property..
	float                                        CallFunc_LinearColorLerp_Alpha_ImplicitCast;       // 0xD4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        CallFunc_LinearColorLerp_Alpha_ImplicitCast_1;     // 0xD8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1F9 (0x1F9 - 0x0)
// Function SocialTagsFunctionLibrary.SocialTagsFunctionLibrary_C.Get Sidebar Social Tag Category Structure
struct USocialTagsFunctionLibrary_C_Get_Sidebar_Social_Tag_Category_Structure_Params
{
public:
	class FString                                TagCategory;                                       // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, HasGetValueTypeHash)
	class UObject*                               __WorldContext;                                    // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FSidebarSocialTagCategoryStructure    SidebarSocialTagCategoryStructure;                 // 0x18(0x6C)(Parm, OutParm, HasGetValueTypeHash)
	uint8                                        Pad_175D[0x4];                                     // Fixing Size After Last Property..
	struct FSidebarSocialTagCategoryStructure    LocalSidebarSocialTagCategoryStructure;            // 0x88(0x6C)(Edit, BlueprintVisible, HasGetValueTypeHash)
	uint8                                        Pad_175E[0x4];                                     // Fixing Size After Last Property..
	class FString                                CallFunc_Replace_ReturnValue;                      // 0xF8(0x10)(ZeroConstructor, HasGetValueTypeHash)
	class FName                                  CallFunc_Conv_StringToName_ReturnValue;            // 0x108(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_175F[0x4];                                     // Fixing Size After Last Property..
	struct FSidebarSocialTagCategoryStructure    CallFunc_GetDataTableRowFromName_OutRow;           // 0x110(0x6C)(HasGetValueTypeHash)
	uint8                                        Pad_1760[0x4];                                     // Fixing Size After Last Property..
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue;      // 0x180(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_1761[0x7];                                     // Fixing Size After Last Property..
	struct FSidebarSocialTagCategoryStructure    CallFunc_GetDataTableRowFromName_OutRow_1;         // 0x188(0x6C)(HasGetValueTypeHash)
	uint8                                        Pad_1762[0x4];                                     // Fixing Size After Last Property..
	bool                                         CallFunc_GetDataTableRowFromName_ReturnValue_1;    // 0x1F8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
