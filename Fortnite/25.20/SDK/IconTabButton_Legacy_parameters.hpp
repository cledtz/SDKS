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

// 0x44 (0x44 - 0x0)
// Function IconTabButton_Legacy.IconTabButton_Legacy_C.Play Hover Sound
struct UIconTabButton_Legacy_C_Play_Hover_Sound_Params
{
public:
	bool                                         CallFunc_GetSelected_ReturnValue;                  // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9A7B[0x7];                                     // Fixing Size After Last Property..
	class FText                                  CallFunc_Conv_StringToText_ReturnValue;            // 0x8(0x18)()
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9A7C[0x7];                                     // Fixing Size After Last Property..
	class FText                                  CallFunc_Conv_StringToText_ReturnValue_1;          // 0x28(0x18)()
	bool                                         CallFunc_EqualEqual_TextText_ReturnValue;          // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_EqualEqual_TextText_ReturnValue_1;        // 0x41(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanOR_ReturnValue;                    // 0x42(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x43(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x44 (0x44 - 0x0)
// Function IconTabButton_Legacy.IconTabButton_Legacy_C.SetChangeIconColorWhenSelected
struct UIconTabButton_Legacy_C_SetChangeIconColorWhenSelected_Params
{
public:
	bool                                         ChangeColorWhenSelected;                           // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9A7D[0x3];                                     // Fixing Size After Last Property..
	struct FSlateColor                           SelectedColor;                                     // 0x4(0x14)(BlueprintVisible, BlueprintReadOnly, Parm)
	struct FSlateColor                           UnselectedColor;                                   // 0x18(0x14)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         Temp_bool_Variable;                                // 0x2C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetSelected_ReturnValue;                  // 0x2D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9A7E[0x2];                                     // Fixing Size After Last Property..
	struct FSlateColor                           K2Node_Select_Default;                             // 0x30(0x14)()
};

// 0xC (0xC - 0x0)
// Function IconTabButton_Legacy.IconTabButton_Legacy_C.Update Bang State
struct UIconTabButton_Legacy_C_Update_Bang_State_Params
{
public:
	bool                                         bBangEnabled;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9A7F[0x3];                                     // Fixing Size After Last Property..
	int32                                        Count;                                             // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetIsEnabled_ReturnValue;                 // 0x8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetIsEnabled_ReturnValue_1;               // 0x9(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0xA(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue_1;                 // 0xB(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function IconTabButton_Legacy.IconTabButton_Legacy_C.SetTutorialBorderStyle
struct UIconTabButton_Legacy_C_SetTutorialBorderStyle_Params
{
public:
	class UClass*                                BorderStyle;                                       // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function IconTabButton_Legacy.IconTabButton_Legacy_C.ShowText
struct UIconTabButton_Legacy_C_ShowText_Params
{
public:
};

// 0xC0 (0xC0 - 0x0)
// Function IconTabButton_Legacy.IconTabButton_Legacy_C.Set Icon
struct UIconTabButton_Legacy_C_Set_Icon_Params
{
public:
	struct FSlateBrush                           IconBrush;                                         // 0x0(0xC0)(BlueprintVisible, BlueprintReadOnly, Parm)
};

// 0x38 (0x38 - 0x0)
// Function IconTabButton_Legacy.IconTabButton_Legacy_C.Set Text
struct UIconTabButton_Legacy_C_Set_Text_Params
{
public:
	class FText                                  ButtonText;                                        // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, Parm)
	bool                                         CallFunc_TextIsEmpty_ReturnValue;                  // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_Not_PreBool_ReturnValue;                  // 0x19(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9A80[0x6];                                     // Fixing Size After Last Property..
	class APlayerController*                     CallFunc_GetOwningPlayer_ReturnValue;              // 0x20(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9A81[0x7];                                     // Fixing Size After Last Property..
	class UUserWidget*                           CallFunc_Create_Basic_Tooltip_Output;              // 0x30(0x8)(ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function IconTabButton_Legacy.IconTabButton_Legacy_C.PreConstruct
struct UIconTabButton_Legacy_C_PreConstruct_Params
{
public:
	bool                                         IsDesignTime;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xF0 (0xF0 - 0x0)
// Function IconTabButton_Legacy.IconTabButton_Legacy_C.SetTabLabelInfo
struct UIconTabButton_Legacy_C_SetTabLabelInfo_Params
{
public:
	struct FFortTabButtonLabelInfo               TabLabelInfo;                                      // 0x0(0xF0)(ConstParm, BlueprintVisible, BlueprintReadOnly, Parm, OutParm, ReferenceParm)
};

// 0x0 (0x0 - 0x0)
// Function IconTabButton_Legacy.IconTabButton_Legacy_C.BP_OnSelected
struct UIconTabButton_Legacy_C_BP_OnSelected_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function IconTabButton_Legacy.IconTabButton_Legacy_C.BP_OnDeselected
struct UIconTabButton_Legacy_C_BP_OnDeselected_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function IconTabButton_Legacy.IconTabButton_Legacy_C.Construct
struct UIconTabButton_Legacy_C_Construct_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function IconTabButton_Legacy.IconTabButton_Legacy_C.BP_OnHovered
struct UIconTabButton_Legacy_C_BP_OnHovered_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function IconTabButton_Legacy.IconTabButton_Legacy_C.BP_OnUnhovered
struct UIconTabButton_Legacy_C_BP_OnUnhovered_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function IconTabButton_Legacy.IconTabButton_Legacy_C.BP_OnEnabled
struct UIconTabButton_Legacy_C_BP_OnEnabled_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function IconTabButton_Legacy.IconTabButton_Legacy_C.BP_OnDisabled
struct UIconTabButton_Legacy_C_BP_OnDisabled_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function IconTabButton_Legacy.IconTabButton_Legacy_C.OnCurrentTextStyleChanged
struct UIconTabButton_Legacy_C_OnCurrentTextStyleChanged_Params
{
public:
};

// 0x2B4 (0x2B4 - 0x0)
// Function IconTabButton_Legacy.IconTabButton_Legacy_C.ExecuteUbergraph_IconTabButton_Legacy
struct UIconTabButton_Legacy_C_ExecuteUbergraph_IconTabButton_Legacy_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9A82[0x4];                                     // Fixing Size After Last Property..
	TSubclassOf<class UCommonTextStyle>          CallFunc_GetCurrentTextStyleClass_ReturnValue;     // 0x8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	bool                                         K2Node_Event_IsDesignTime;                         // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9A83[0x7];                                     // Fixing Size After Last Property..
	TSubclassOf<class UCommonTextStyle>          CallFunc_GetCurrentTextStyleClass_ReturnValue_1;   // 0x18(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash)
	struct FFortTabButtonLabelInfo               K2Node_Event_TabLabelInfo;                         // 0x20(0xF0)(ConstParm)
	bool                                         CallFunc_EqualEqual_ByteByte_ReturnValue;          // 0x110(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetSelected_ReturnValue;                  // 0x111(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_GetSelected_ReturnValue_1;                // 0x112(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9A84[0xD];                                     // Fixing Size After Last Property..
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x120(0xC0)()
	class UCommonInputSubsystem*                 CallFunc_GetContext_ReturnValue;                   // 0x1E0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_9A85[0x8];                                     // Fixing Size After Last Property..
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush_1;                    // 0x1F0(0xC0)()
	enum class ECommonInputType                  CallFunc_GetCurrentInputType_ReturnValue;          // 0x2B0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_NotEqual_ByteByte_ReturnValue;            // 0x2B1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_IsMobileGame_ReturnValue;                 // 0x2B2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_BooleanAND_ReturnValue;                   // 0x2B3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
