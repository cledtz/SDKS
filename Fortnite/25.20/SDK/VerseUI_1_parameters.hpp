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

// 0xC0 (0xC0 - 0x0)
// Function VerseUI.UI._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_N_RMakeCanvasSlot_L_Nwidget_M_Nvector2_M_N_QSize_Nvector2_20_3d_20_2e_2e_2e_M_N_QZOrder_Ntype_7b__X_Nint_20where_200_20_3c_3d_20__X_M_20__X_20_3c_3d_202147483647_7d_20_3d_20_2e_2e_2e_M_N_QAlignment_Nvector2_20_3d_20_2e_2e_2e_R
struct UUI__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_N_RMakeCanvasSlot_L_Nwidget_M_Nvector2_M_N_QSize_Nvector2_20_3d_20_2e_2e_2e_M_N_QZOrder_Ntype_7b__X_Nint_20where_200_20_3c_3d_20__X_M_20__X_20_3c_3d_202147483647_7d_20_3d_20_2e_2e_2e_M_N_QAlignment_Nvector2_20_3d_20_2e_2e_2e_R_Params
{
public:
	struct FTuple_Lwidget_Mvector2_M_QSize_Nvector2_20_3d_20_2e_2e_2e_M_QZOrder_Ntype_7b__X_Nint_20where_200_20_3c_3d_20__X_M_20__X_20_3c_3d_202147483647_7d_20_3d_20_2e_2e_2e_M_QAlignment_Nvector2_20_3d_20_2e_2e_2e_R __verse_0xB2CDDD72_Argument;                       // 0x0(0x58)(Parm, HasGetValueTypeHash)
	struct FUI_canvas_slot                       RetVal;                                            // 0x58(0x68)(Parm, OutParm, ReturnParm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function VerseUI.UI._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_N_RGetPlayerUI_L_Nplayer_R
struct UUI__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_N_RGetPlayerUI_L_Nplayer_R_Params
{
public:
	class USimulation_player*                    __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             RetVal;                                            // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x68 (0x68 - 0x0)
// Function VerseUI.UI.UI_user_widget_slot$OverrideFactory
struct UUI_UI_user_widget_slot_OverrideFactory_Params
{
public:
	struct FUI_user_widget_slot                  RetVal;                                            // 0x0(0x18)(Parm, OutParm, ReturnParm)
	TMap<FVerseStringProperty_, uint8>           __verse_0xFB48ED96__InitOverrideMap;               // 0x18(0x50)(ConstParm, Parm, ContainsInstancedReference)
};

// 0x18 (0x18 - 0x0)
// Function VerseUI.UI.UI_user_widget_slot$Factory
struct UUI_UI_user_widget_slot_Factory_Params
{
public:
	struct FUI_user_widget_slot                  RetVal;                                            // 0x0(0x18)(Parm, OutParm, ReturnParm)
};

// 0x125 (0x125 - 0x0)
// Function VerseUI.UI.UI_stack_box_slot$OverrideFactory
struct UUI_UI_stack_box_slot_OverrideFactory_Params
{
public:
	struct FUI_stack_box_slot                    RetVal;                                            // 0x0(0x40)(Parm, OutParm, ReturnParm)
	TMap<FVerseStringProperty_, uint8>           __verse_0xFB48ED96__InitOverrideMap;               // 0x40(0x50)(ConstParm, Parm, ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResultStack_0;                                // 0x90(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_1;                                     // 0xA0(0x2)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8BBC[0x6];                                     // Fixing Size After Last Property..
	FVerseStringProperty_                        _ExprResultStack_2;                                // 0xA8(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_3;                                     // 0xB8(0x2)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8BBD[0x6];                                     // Fixing Size After Last Property..
	FVerseStringProperty_                        _ExprResultStack_4;                                // 0xC0(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_5;                                     // 0xD0(0x2)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8BBE[0x6];                                     // Fixing Size After Last Property..
	struct FUI_margin                            _ExprResult_6;                                     // 0xD8(0x20)(ZeroConstructor, IsPlainOldData, NoDestructor)
	FVerseStringProperty_                        _ExprResultStack_7;                                // 0xF8(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_8;                                     // 0x108(0x2)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8BBF[0x6];                                     // Fixing Size After Last Property..
	FOptionProperty_                             _ExprResult_9;                                     // 0x110(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x00000000__1;                             // 0x120(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _ExprResult_10 : 1;                                // Mask: 0x1, PropSize: 0x10x122(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_47A : 7;                                    // Fixing Bit-Field Size..
	FOptionProperty_                             _ExprResultStack_11;                               // 0x123(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x75 (0x75 - 0x0)
// Function VerseUI.UI.UI_stack_box_slot$Factory
struct UUI_UI_stack_box_slot_Factory_Params
{
public:
	struct FUI_stack_box_slot                    RetVal;                                            // 0x0(0x40)(Parm, OutParm, ReturnParm)
	struct FUI_margin                            _ExprResult_0;                                     // 0x40(0x20)(ZeroConstructor, IsPlainOldData, NoDestructor)
	FOptionProperty_                             _ExprResult_1;                                     // 0x60(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x00000000__1;                             // 0x70(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _ExprResult_2 : 1;                                 // Mask: 0x1, PropSize: 0x10x72(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_47B : 7;                                    // Fixing Bit-Field Size..
	FOptionProperty_                             _ExprResultStack_3;                                // 0x73(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xE8 (0xE8 - 0x0)
// Function VerseUI.UI.UI_overlay_slot$OverrideFactory
struct UUI_UI_overlay_slot_OverrideFactory_Params
{
public:
	struct FUI_overlay_slot                      RetVal;                                            // 0x0(0x30)(Parm, OutParm, ReturnParm, NoDestructor)
	TMap<FVerseStringProperty_, uint8>           __verse_0xFB48ED96__InitOverrideMap;               // 0x30(0x50)(ConstParm, Parm, ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResultStack_0;                                // 0x80(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_1;                                     // 0x90(0x2)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8BC0[0x6];                                     // Fixing Size After Last Property..
	FVerseStringProperty_                        _ExprResultStack_2;                                // 0x98(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_3;                                     // 0xA8(0x2)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8BC1[0x6];                                     // Fixing Size After Last Property..
	FVerseStringProperty_                        _ExprResultStack_4;                                // 0xB0(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_5;                                     // 0xC0(0x2)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8BC2[0x6];                                     // Fixing Size After Last Property..
	struct FUI_margin                            _ExprResult_6;                                     // 0xC8(0x20)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x50 (0x50 - 0x0)
// Function VerseUI.UI.UI_overlay_slot$Factory
struct UUI_UI_overlay_slot_Factory_Params
{
public:
	struct FUI_overlay_slot                      RetVal;                                            // 0x0(0x30)(Parm, OutParm, ReturnParm, NoDestructor)
	struct FUI_margin                            _ExprResult_0;                                     // 0x30(0x20)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x1EA (0x1EA - 0x0)
// Function VerseUI.UI.UI_canvas_slot$OverrideFactory
struct UUI_UI_canvas_slot_OverrideFactory_Params
{
public:
	struct FUI_canvas_slot                       RetVal;                                            // 0x0(0x68)(Parm, OutParm, ReturnParm, NoDestructor)
	TMap<FVerseStringProperty_, uint8>           __verse_0xFB48ED96__InitOverrideMap;               // 0x68(0x50)(ConstParm, Parm, ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResultStack_0;                                // 0xB8(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_1;                                     // 0xC8(0x2)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8BC3[0x6];                                     // Fixing Size After Last Property..
	struct FUI_anchors                           _ExprResult_2;                                     // 0xD0(0x20)(ZeroConstructor, IsPlainOldData, NoDestructor)
	FVerseStringProperty_                        _ExprResultStack_3;                                // 0xF0(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_4;                                     // 0x100(0x2)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8BC4[0x6];                                     // Fixing Size After Last Property..
	struct FUI_margin                            _ExprResult_5;                                     // 0x108(0x20)(ZeroConstructor, IsPlainOldData, NoDestructor)
	FVerseStringProperty_                        _ExprResultStack_6;                                // 0x128(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_7;                                     // 0x138(0x2)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8BC5[0x6];                                     // Fixing Size After Last Property..
	FVerseStringProperty_                        _ExprResultStack_8;                                // 0x140(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_9;                                     // 0x150(0x2)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8BC6[0x6];                                     // Fixing Size After Last Property..
	struct FSpatialMath_vector2                  _ExprResult_10;                                    // 0x158(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TMap<FVerseStringProperty_, uint8>           _ExprResultStack_11;                               // 0x168(0x50)(ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResult_12;                                    // 0x1B8(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_13;                                    // 0x1C8(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResultStack_14;                               // 0x1D8(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_15;                                    // 0x1E8(0x2)(NoDestructor, HasGetValueTypeHash)
};

// 0x128 (0x128 - 0x0)
// Function VerseUI.UI.UI_canvas_slot$Factory
struct UUI_UI_canvas_slot_Factory_Params
{
public:
	struct FUI_canvas_slot                       RetVal;                                            // 0x0(0x68)(Parm, OutParm, ReturnParm, NoDestructor)
	struct FUI_anchors                           _ExprResult_0;                                     // 0x68(0x20)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FUI_margin                            _ExprResult_1;                                     // 0x88(0x20)(ZeroConstructor, IsPlainOldData, NoDestructor)
	struct FSpatialMath_vector2                  _ExprResult_2;                                     // 0xA8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TMap<FVerseStringProperty_, uint8>           _ExprResultStack_3;                                // 0xB8(0x50)(ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResult_4;                                     // 0x108(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_5;                                     // 0x118(0x10)(HasGetValueTypeHash)
};

// 0xE8 (0xE8 - 0x0)
// Function VerseUI.UI.UI_button_slot$OverrideFactory
struct UUI_UI_button_slot_OverrideFactory_Params
{
public:
	struct FUI_button_slot                       RetVal;                                            // 0x0(0x30)(Parm, OutParm, ReturnParm, NoDestructor)
	TMap<FVerseStringProperty_, uint8>           __verse_0xFB48ED96__InitOverrideMap;               // 0x30(0x50)(ConstParm, Parm, ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResultStack_0;                                // 0x80(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_1;                                     // 0x90(0x2)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8BC7[0x6];                                     // Fixing Size After Last Property..
	FVerseStringProperty_                        _ExprResultStack_2;                                // 0x98(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_3;                                     // 0xA8(0x2)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8BC8[0x6];                                     // Fixing Size After Last Property..
	FVerseStringProperty_                        _ExprResultStack_4;                                // 0xB0(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_5;                                     // 0xC0(0x2)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8BC9[0x6];                                     // Fixing Size After Last Property..
	struct FUI_margin                            _ExprResult_6;                                     // 0xC8(0x20)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x50 (0x50 - 0x0)
// Function VerseUI.UI.UI_button_slot$Factory
struct UUI_UI_button_slot_Factory_Params
{
public:
	struct FUI_button_slot                       RetVal;                                            // 0x0(0x30)(Parm, OutParm, ReturnParm, NoDestructor)
	struct FUI_margin                            _ExprResult_0;                                     // 0x30(0x20)(ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0xCA (0xCA - 0x0)
// Function VerseUI.UI.UI_margin$OverrideFactory
struct UUI_UI_margin_OverrideFactory_Params
{
public:
	struct FUI_margin                            RetVal;                                            // 0x0(0x20)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	TMap<FVerseStringProperty_, uint8>           __verse_0xFB48ED96__InitOverrideMap;               // 0x20(0x50)(ConstParm, Parm, ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResultStack_0;                                // 0x70(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_1;                                     // 0x80(0x2)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8BCA[0x6];                                     // Fixing Size After Last Property..
	FVerseStringProperty_                        _ExprResultStack_2;                                // 0x88(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_3;                                     // 0x98(0x2)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8BCB[0x6];                                     // Fixing Size After Last Property..
	FVerseStringProperty_                        _ExprResultStack_4;                                // 0xA0(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_5;                                     // 0xB0(0x2)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8BCC[0x6];                                     // Fixing Size After Last Property..
	FVerseStringProperty_                        _ExprResultStack_6;                                // 0xB8(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_7;                                     // 0xC8(0x2)(NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function VerseUI.UI.UI_margin$Factory
struct UUI_UI_margin_Factory_Params
{
public:
	struct FUI_margin                            RetVal;                                            // 0x0(0x20)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x1A0 (0x1A0 - 0x0)
// Function VerseUI.UI.UI_anchors$OverrideFactory
struct UUI_UI_anchors_OverrideFactory_Params
{
public:
	struct FUI_anchors                           RetVal;                                            // 0x0(0x20)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	TMap<FVerseStringProperty_, uint8>           __verse_0xFB48ED96__InitOverrideMap;               // 0x20(0x50)(ConstParm, Parm, ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResultStack_0;                                // 0x70(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_1;                                     // 0x80(0x2)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8BCD[0x6];                                     // Fixing Size After Last Property..
	struct FSpatialMath_vector2                  _ExprResult_2;                                     // 0x88(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TMap<FVerseStringProperty_, uint8>           _ExprResultStack_3;                                // 0x98(0x50)(ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResult_4;                                     // 0xE8(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_5;                                     // 0xF8(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResultStack_6;                                // 0x108(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_7;                                     // 0x118(0x2)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8BCE[0x6];                                     // Fixing Size After Last Property..
	struct FSpatialMath_vector2                  _ExprResult_8;                                     // 0x120(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TMap<FVerseStringProperty_, uint8>           _ExprResultStack_9;                                // 0x130(0x50)(ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResult_10;                                    // 0x180(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_11;                                    // 0x190(0x10)(HasGetValueTypeHash)
};

// 0x120 (0x120 - 0x0)
// Function VerseUI.UI.UI_anchors$Factory
struct UUI_UI_anchors_Factory_Params
{
public:
	struct FUI_anchors                           RetVal;                                            // 0x0(0x20)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	struct FSpatialMath_vector2                  _ExprResult_0;                                     // 0x20(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TMap<FVerseStringProperty_, uint8>           _ExprResultStack_1;                                // 0x30(0x50)(ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResult_2;                                     // 0x80(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_3;                                     // 0x90(0x10)(HasGetValueTypeHash)
	struct FSpatialMath_vector2                  _ExprResult_4;                                     // 0xA0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TMap<FVerseStringProperty_, uint8>           _ExprResultStack_5;                                // 0xB0(0x50)(ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResult_6;                                     // 0x100(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_7;                                     // 0x110(0x10)(HasGetValueTypeHash)
};

// 0x60 (0x60 - 0x0)
// Function VerseUI.UI.UI_widget_message$OverrideFactory
struct UUI_UI_widget_message_OverrideFactory_Params
{
public:
	struct FUI_widget_message                    RetVal;                                            // 0x0(0x10)(Parm, OutParm, ReturnParm, NoDestructor)
	TMap<FVerseStringProperty_, uint8>           __verse_0xFB48ED96__InitOverrideMap;               // 0x10(0x50)(ConstParm, Parm, ContainsInstancedReference)
};

// 0x10 (0x10 - 0x0)
// Function VerseUI.UI.UI_widget_message$Factory
struct UUI_UI_widget_message_Factory_Params
{
public:
	struct FUI_widget_message                    RetVal;                                            // 0x0(0x10)(Parm, OutParm, ReturnParm, NoDestructor)
};

// 0x8A (0x8A - 0x0)
// Function VerseUI.UI.UI_player_ui_slot$OverrideFactory
struct UUI_UI_player_ui_slot_OverrideFactory_Params
{
public:
	struct FUI_player_ui_slot                    RetVal;                                            // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	TMap<FVerseStringProperty_, uint8>           __verse_0xFB48ED96__InitOverrideMap;               // 0x10(0x50)(ConstParm, Parm, ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResultStack_0;                                // 0x60(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_1;                                     // 0x70(0x2)(NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8BCF[0x6];                                     // Fixing Size After Last Property..
	FVerseStringProperty_                        _ExprResultStack_2;                                // 0x78(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_3;                                     // 0x88(0x2)(NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function VerseUI.UI.UI_player_ui_slot$Factory
struct UUI_UI_player_ui_slot_Factory_Params
{
public:
	struct FUI_player_ui_slot                    RetVal;                                            // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function VerseUI.UI.$InitCDO
struct UUI__InitCDO_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function VerseUI.UI_player_ui._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fplayer__ui_N_RRemoveWidget_L_Nwidget_R
struct UUI_player_ui__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fplayer__ui_N_RRemoveWidget_L_Nwidget_R_Params
{
public:
	class UUI_widget*                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function VerseUI.UI_player_ui._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fplayer__ui_N_RAddWidget_L_Nwidget_R
struct UUI_player_ui__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fplayer__ui_N_RAddWidget_L_Nwidget_R_Params
{
public:
	class UUI_widget*                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function VerseUI.UI_player_ui._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fplayer__ui_N_RAddWidget_L_Nwidget_M_Nplayer__ui__slot_R
struct UUI_player_ui__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fplayer__ui_N_RAddWidget_L_Nwidget_M_Nplayer__ui__slot_R_Params
{
public:
	struct FTuple_Lwidget_Mplayer__ui__slot_R    __verse_0xB2CDDD72_Argument;                       // 0x0(0x18)(Parm, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function VerseUI.UI_player_ui.$InitInstance
struct UUI_player_ui__InitInstance_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VerseUI.UI_player_ui.$Block
struct UUI_player_ui__Block_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VerseUI.UI_player_ui.$InitCDO
struct UUI_player_ui__InitCDO_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function VerseUI.UI_widget._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fwidget_N_RSetVisibility_L_Nwidget__visibility_R
struct UUI_widget__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fwidget_N_RSetVisibility_L_Nwidget__visibility_R_Params
{
public:
	enum class EUI_widget_visibility             __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function VerseUI.UI_widget._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fwidget_N_RSetEnabled_L_Nlogic_R
struct UUI_widget__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fwidget_N_RSetEnabled_L_Nlogic_R_Params
{
public:
	uint8                                        __verse_0xB2CDDD72_Argument : 1;                   // Mask: 0x1, PropSize: 0x10x0(0x1)(Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function VerseUI.UI_widget._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fwidget_N_RIsEnabled
struct UUI_widget__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fwidget_N_RIsEnabled_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        RetVal : 1;                                        // Mask: 0x1, PropSize: 0x10x1(0x1)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function VerseUI.UI_widget._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fwidget_N_RGetVisibility
struct UUI_widget__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fwidget_N_RGetVisibility_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	enum class EUI_widget_visibility             RetVal;                                            // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function VerseUI.UI_widget._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fwidget_N_RGetRootWidget
struct UUI_widget__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fwidget_N_RGetRootWidget_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8BD0[0x7];                                     // Fixing Size After Last Property..
	FOptionProperty_                             RetVal;                                            // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function VerseUI.UI_widget._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fwidget_N_RGetParentWidget
struct UUI_widget__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fwidget_N_RGetParentWidget_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8BD1[0x7];                                     // Fixing Size After Last Property..
	FOptionProperty_                             RetVal;                                            // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function VerseUI.UI_widget.$InitInstance
struct UUI_widget__InitInstance_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VerseUI.UI_widget.$Block
struct UUI_widget__Block_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VerseUI.UI_widget.$InitCDO
struct UUI_widget__InitCDO_Params
{
public:
};

// 0x30 (0x30 - 0x0)
// Function VerseUI.UI_button._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fbutton_N_RSetWidget_L_Nbutton__slot_R
struct UUI_button__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fbutton_N_RSetWidget_L_Nbutton__slot_R_Params
{
public:
	struct FUI_button_slot                       __verse_0xB2CDDD72_Argument;                       // 0x0(0x30)(Parm, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function VerseUI.UI_button._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fbutton_N_ROnClick
struct UUI_button__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fbutton_N_ROnClick_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8BD2[0x7];                                     // Fixing Size After Last Property..
	class UObject*                               RetVal;                                            // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function VerseUI.UI_button.$InitInstance
struct UUI_button__InitInstance_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VerseUI.UI_button.$Block
struct UUI_button__Block_Params
{
public:
};

// 0x10 (0x10 - 0x0)
// Function VerseUI.UI_button.$InitCDO
struct UUI_button__InitCDO_Params
{
public:
	class UVerseEngine_subscribable_event*       _ExprResult_0;                                     // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	uint64                                       _InstancingGraph_1;                                // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function VerseUI.UI_canvas._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcanvas_N_RRemoveWidget_L_Nwidget_R
struct UUI_canvas__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcanvas_N_RRemoveWidget_L_Nwidget_R_Params
{
public:
	class UUI_widget*                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x68 (0x68 - 0x0)
// Function VerseUI.UI_canvas._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcanvas_N_RAddWidget_L_Ncanvas__slot_R
struct UUI_canvas__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcanvas_N_RAddWidget_L_Ncanvas__slot_R_Params
{
public:
	struct FUI_canvas_slot                       __verse_0xB2CDDD72_Argument;                       // 0x0(0x68)(Parm, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function VerseUI.UI_canvas.$InitInstance
struct UUI_canvas__InitInstance_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VerseUI.UI_canvas.$Block
struct UUI_canvas__Block_Params
{
public:
};

// 0x42 (0x42 - 0x0)
// Function VerseUI.UI_canvas.$InitCDO
struct UUI_canvas__InitCDO_Params
{
public:
	TArray<struct FUI_canvas_slot>               _ExprResult_0;                                     // 0x0(0x10)(ContainsInstancedReference)
	TArray<enum class EVerseFalse>               __verse_0xFFC68BC5_Array_1;                        // 0x10(0x10)(ContainsInstancedReference)
	TArray<struct FUI_canvas_slot>               _ForResult_1;                                      // 0x20(0x10)(ContainsInstancedReference)
	int64                                        _ForIndex_2;                                       // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        _ForLength_3;                                      // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EVerseFalse                       __verse_0xFB88B569_Item_3;                         // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _ExprResult_4 : 1;                                 // Mask: 0x1, PropSize: 0x10x41(0x1)(NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function VerseUI.UI_color_block._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcolor__block_N_RSetOpacity_L_Ntype_7b__X_Nfloat_20where_200_2e000000_20_3c_3d_20__X_M_20__X_20_3c_3d_201_2e000000_7d_R
struct UUI_color_block__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcolor__block_N_RSetOpacity_L_Ntype_7b__X_Nfloat_20where_200_2e000000_20_3c_3d_20__X_M_20__X_20_3c_3d_201_2e000000_7d_R_Params
{
public:
	double                                       __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function VerseUI.UI_color_block._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcolor__block_N_RSetDesiredSize_L_Nvector2_R
struct UUI_color_block__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcolor__block_N_RSetDesiredSize_L_Nvector2_R_Params
{
public:
	struct FSpatialMath_vector2                  __verse_0xB2CDDD72_Argument;                       // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function VerseUI.UI_color_block._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcolor__block_N_RSetColor_L_Ncolor_R
struct UUI_color_block__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcolor__block_N_RSetColor_L_Ncolor_R_Params
{
public:
	struct FColors_color                         __verse_0xB2CDDD72_Argument;                       // 0x0(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function VerseUI.UI_color_block._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcolor__block_N_RGetOpacity
struct UUI_color_block__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcolor__block_N_RGetOpacity_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8BD3[0x7];                                     // Fixing Size After Last Property..
	double                                       RetVal;                                            // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function VerseUI.UI_color_block._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcolor__block_N_RGetDesiredSize
struct UUI_color_block__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcolor__block_N_RGetDesiredSize_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8BD4[0x7];                                     // Fixing Size After Last Property..
	struct FSpatialMath_vector2                  RetVal;                                            // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function VerseUI.UI_color_block._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcolor__block_N_RGetColor
struct UUI_color_block__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcolor__block_N_RGetColor_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8BD5[0x7];                                     // Fixing Size After Last Property..
	struct FColors_color                         RetVal;                                            // 0x8(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function VerseUI.UI_color_block.$InitInstance
struct UUI_color_block__InitInstance_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VerseUI.UI_color_block.$Block
struct UUI_color_block__Block_Params
{
public:
};

// 0x80 (0x80 - 0x0)
// Function VerseUI.UI_color_block.$InitCDO
struct UUI_color_block__InitCDO_Params
{
public:
	struct FSpatialMath_vector2                  _ExprResult_0;                                     // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TMap<FVerseStringProperty_, uint8>           _ExprResultStack_1;                                // 0x10(0x50)(ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResult_2;                                     // 0x60(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_3;                                     // 0x70(0x10)(HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function VerseUI.UI_material_block._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fmaterial__block_N_RSetTint_L_Ncolor_R
struct UUI_material_block__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fmaterial__block_N_RSetTint_L_Ncolor_R_Params
{
public:
	struct FColors_color                         __verse_0xB2CDDD72_Argument;                       // 0x0(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function VerseUI.UI_material_block._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fmaterial__block_N_RSetImage_L_Nmaterial_R
struct UUI_material_block__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fmaterial__block_N_RSetImage_L_Nmaterial_R_Params
{
public:
	class UAssets_material*                      __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function VerseUI.UI_material_block._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fmaterial__block_N_RSetDesiredSize_L_Nvector2_R
struct UUI_material_block__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fmaterial__block_N_RSetDesiredSize_L_Nvector2_R_Params
{
public:
	struct FSpatialMath_vector2                  __verse_0xB2CDDD72_Argument;                       // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function VerseUI.UI_material_block._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fmaterial__block_N_RGetTint
struct UUI_material_block__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fmaterial__block_N_RGetTint_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8BD6[0x7];                                     // Fixing Size After Last Property..
	struct FColors_color                         RetVal;                                            // 0x8(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function VerseUI.UI_material_block._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fmaterial__block_N_RGetImage
struct UUI_material_block__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fmaterial__block_N_RGetImage_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8BD7[0x7];                                     // Fixing Size After Last Property..
	class UAssets_material*                      RetVal;                                            // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function VerseUI.UI_material_block._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fmaterial__block_N_RGetDesiredSize
struct UUI_material_block__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fmaterial__block_N_RGetDesiredSize_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8BD8[0x7];                                     // Fixing Size After Last Property..
	struct FSpatialMath_vector2                  RetVal;                                            // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function VerseUI.UI_material_block.$InitInstance
struct UUI_material_block__InitInstance_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VerseUI.UI_material_block.$Block
struct UUI_material_block__Block_Params
{
public:
};

// 0x80 (0x80 - 0x0)
// Function VerseUI.UI_material_block.$InitCDO
struct UUI_material_block__InitCDO_Params
{
public:
	struct FSpatialMath_vector2                  _ExprResult_0;                                     // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TMap<FVerseStringProperty_, uint8>           _ExprResultStack_1;                                // 0x10(0x50)(ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResult_2;                                     // 0x60(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_3;                                     // 0x70(0x10)(HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function VerseUI.UI_overlay._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2foverlay_N_RRemoveWidget_L_Nwidget_R
struct UUI_overlay__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2foverlay_N_RRemoveWidget_L_Nwidget_R_Params
{
public:
	class UUI_widget*                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function VerseUI.UI_overlay._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2foverlay_N_RAddWidget_L_Noverlay__slot_R
struct UUI_overlay__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2foverlay_N_RAddWidget_L_Noverlay__slot_R_Params
{
public:
	struct FUI_overlay_slot                      __verse_0xB2CDDD72_Argument;                       // 0x0(0x30)(Parm, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function VerseUI.UI_overlay.$InitInstance
struct UUI_overlay__InitInstance_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VerseUI.UI_overlay.$Block
struct UUI_overlay__Block_Params
{
public:
};

// 0x42 (0x42 - 0x0)
// Function VerseUI.UI_overlay.$InitCDO
struct UUI_overlay__InitCDO_Params
{
public:
	TArray<struct FUI_overlay_slot>              _ExprResult_0;                                     // 0x0(0x10)(ContainsInstancedReference)
	TArray<enum class EVerseFalse>               __verse_0xFFC68BC5_Array_1;                        // 0x10(0x10)(ContainsInstancedReference)
	TArray<struct FUI_overlay_slot>              _ForResult_1;                                      // 0x20(0x10)(ContainsInstancedReference)
	int64                                        _ForIndex_2;                                       // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        _ForLength_3;                                      // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EVerseFalse                       __verse_0xFB88B569_Item_3;                         // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _ExprResult_4 : 1;                                 // Mask: 0x1, PropSize: 0x10x41(0x1)(NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function VerseUI.UI_simple_button_internal._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fsimple__button__internal_N_RSetText_L_Nmessage_R
struct UUI_simple_button_internal__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fsimple__button__internal_N_RSetText_L_Nmessage_R_Params
{
public:
	class UVerse_message*                        __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function VerseUI.UI_simple_button_internal._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fsimple__button__internal_N_ROnClick
struct UUI_simple_button_internal__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fsimple__button__internal_N_ROnClick_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8BD9[0x7];                                     // Fixing Size After Last Property..
	class UObject*                               RetVal;                                            // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function VerseUI.UI_simple_button_internal.$InitInstance
struct UUI_simple_button_internal__InitInstance_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VerseUI.UI_simple_button_internal.$Block
struct UUI_simple_button_internal__Block_Params
{
public:
};

// 0x1B8 (0x1B8 - 0x0)
// Function VerseUI.UI_simple_button_internal.$InitCDO
struct UUI_simple_button_internal__InitCDO_Params
{
public:
	class UVerse_message*                        _ExprResultStack_0;                                // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_1;                                         // 0x8(0x10)(HasGetValueTypeHash)
	struct FTuple_L_Kchar_M_Kchar_M_5b_Kchar_5dlocalizable__value_R _ExprResult_2;                                     // 0x18(0x70)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_3;                                     // 0x88(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_4;                                     // 0x98(0x10)(HasGetValueTypeHash)
	TMap<FVerseStringProperty_, class UVerse_localizable_value*> _ExprResult_5;                                     // 0xA8(0x50)(ContainsInstancedReference)
	TMap<enum class EVerseFalse, enum class EVerseFalse> __verse_0xC87067A2_Map_1;                          // 0xF8(0x50)(ContainsInstancedReference)
	TMap<FVerseStringProperty_, class UVerse_localizable_value*> _ForResult_6;                                      // 0x148(0x50)(ContainsInstancedReference)
	int64                                        _ForIndex_7;                                       // 0x198(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EVerseFalse                       __verse_0x589418B4_Key_3;                          // 0x1A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EVerseFalse                       __verse_0x31A8F10C_Value_3;                        // 0x1A1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _ExprResult_8 : 1;                                 // Mask: 0x1, PropSize: 0x10x1A2(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_47C : 7;                                    // Fixing Bit-Field Size..
	uint8                                        _ExprResult_9 : 1;                                 // Mask: 0x1, PropSize: 0x10x1A3(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_47D : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_8BDA[0x4];                                     // Fixing Size After Last Property..
	class UVerseEngine_subscribable_event*       _ExprResult_10;                                    // 0x1A8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	uint64                                       _InstancingGraph_11;                               // 0x1B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function VerseUI.UI_stack_box._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fstack__box_N_RRemoveWidget_L_Nwidget_R
struct UUI_stack_box__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fstack__box_N_RRemoveWidget_L_Nwidget_R_Params
{
public:
	class UUI_widget*                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function VerseUI.UI_stack_box._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fstack__box_N_RAddWidget_L_Nstack__box__slot_R
struct UUI_stack_box__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fstack__box_N_RAddWidget_L_Nstack__box__slot_R_Params
{
public:
	struct FUI_stack_box_slot                    __verse_0xB2CDDD72_Argument;                       // 0x0(0x40)(Parm)
};

// 0x0 (0x0 - 0x0)
// Function VerseUI.UI_stack_box.$InitInstance
struct UUI_stack_box__InitInstance_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VerseUI.UI_stack_box.$Block
struct UUI_stack_box__Block_Params
{
public:
};

// 0x42 (0x42 - 0x0)
// Function VerseUI.UI_stack_box.$InitCDO
struct UUI_stack_box__InitCDO_Params
{
public:
	TArray<struct FUI_stack_box_slot>            _ExprResult_0;                                     // 0x0(0x10)(ContainsInstancedReference)
	TArray<enum class EVerseFalse>               __verse_0xFFC68BC5_Array_1;                        // 0x10(0x10)(ContainsInstancedReference)
	TArray<struct FUI_stack_box_slot>            _ForResult_1;                                      // 0x20(0x10)(ContainsInstancedReference)
	int64                                        _ForIndex_2;                                       // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        _ForLength_3;                                      // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EVerseFalse                       __verse_0xFB88B569_Item_3;                         // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _ExprResult_4 : 1;                                 // Mask: 0x1, PropSize: 0x10x41(0x1)(NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function VerseUI.UI_text_base._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RSetTextOpacity_L_Ntype_7b__X_Nfloat_20where_200_2e000000_20_3c_3d_20__X_M_20__X_20_3c_3d_201_2e000000_7d_R
struct UUI_text_base__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RSetTextOpacity_L_Ntype_7b__X_Nfloat_20where_200_2e000000_20_3c_3d_20__X_M_20__X_20_3c_3d_201_2e000000_7d_R_Params
{
public:
	double                                       __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function VerseUI.UI_text_base._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RSetTextColor_L_Ncolor_R
struct UUI_text_base__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RSetTextColor_L_Ncolor_R_Params
{
public:
	struct FColors_color                         __verse_0xB2CDDD72_Argument;                       // 0x0(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function VerseUI.UI_text_base._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RSetText_L_Nmessage_R
struct UUI_text_base__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RSetText_L_Nmessage_R_Params
{
public:
	class UVerse_message*                        __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function VerseUI.UI_text_base._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RSetOverflowPolicy_L_Ntext__overflow__policy_R
struct UUI_text_base__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RSetOverflowPolicy_L_Ntext__overflow__policy_R_Params
{
public:
	enum class EUI_text_overflow_policy          __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function VerseUI.UI_text_base._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RSetJustification_L_Ntext__justification_R
struct UUI_text_base__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RSetJustification_L_Ntext__justification_R_Params
{
public:
	enum class EUI_text_justification            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function VerseUI.UI_text_base._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RGetTextOpacity
struct UUI_text_base__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RGetTextOpacity_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8BDC[0x7];                                     // Fixing Size After Last Property..
	double                                       RetVal;                                            // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function VerseUI.UI_text_base._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RGetTextColor
struct UUI_text_base__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RGetTextColor_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8BDD[0x7];                                     // Fixing Size After Last Property..
	struct FColors_color                         RetVal;                                            // 0x8(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function VerseUI.UI_text_base._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RGetText
struct UUI_text_base__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RGetText_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8BDE[0x7];                                     // Fixing Size After Last Property..
	FVerseStringProperty_                        RetVal;                                            // 0x8(0x10)(Parm, OutParm, ReturnParm, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function VerseUI.UI_text_base._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RGetOverflowPolicy
struct UUI_text_base__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RGetOverflowPolicy_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	enum class EUI_text_overflow_policy          RetVal;                                            // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function VerseUI.UI_text_base._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RGetJustification
struct UUI_text_base__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RGetJustification_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	enum class EUI_text_justification            RetVal;                                            // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function VerseUI.UI_text_base.$InitInstance
struct UUI_text_base__InitInstance_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VerseUI.UI_text_base.$Block
struct UUI_text_base__Block_Params
{
public:
};

// 0x1A4 (0x1A4 - 0x0)
// Function VerseUI.UI_text_base.$InitCDO
struct UUI_text_base__InitCDO_Params
{
public:
	class UVerse_message*                        _ExprResultStack_0;                                // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_1;                                         // 0x8(0x10)(HasGetValueTypeHash)
	struct FTuple_L_Kchar_M_Kchar_M_5b_Kchar_5dlocalizable__value_R _ExprResult_2;                                     // 0x18(0x70)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_3;                                     // 0x88(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_4;                                     // 0x98(0x10)(HasGetValueTypeHash)
	TMap<FVerseStringProperty_, class UVerse_localizable_value*> _ExprResult_5;                                     // 0xA8(0x50)(ContainsInstancedReference)
	TMap<enum class EVerseFalse, enum class EVerseFalse> __verse_0xC87067A2_Map_1;                          // 0xF8(0x50)(ContainsInstancedReference)
	TMap<FVerseStringProperty_, class UVerse_localizable_value*> _ForResult_6;                                      // 0x148(0x50)(ContainsInstancedReference)
	int64                                        _ForIndex_7;                                       // 0x198(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EVerseFalse                       __verse_0x589418B4_Key_3;                          // 0x1A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EVerseFalse                       __verse_0x31A8F10C_Value_3;                        // 0x1A1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _ExprResult_8 : 1;                                 // Mask: 0x1, PropSize: 0x10x1A2(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_47E : 7;                                    // Fixing Bit-Field Size..
	uint8                                        _ExprResult_9 : 1;                                 // Mask: 0x1, PropSize: 0x10x1A3(0x1)(NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function VerseUI.UI_text_block_internal.$InitInstance
struct UUI_text_block_internal__InitInstance_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VerseUI.UI_text_block_internal.$Block
struct UUI_text_block_internal__Block_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VerseUI.UI_text_block_internal.$InitCDO
struct UUI_text_block_internal__InitCDO_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function VerseUI.UI_texture_block._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RSetTint_L_Ncolor_R
struct UUI_texture_block__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RSetTint_L_Ncolor_R_Params
{
public:
	struct FColors_color                         __verse_0xB2CDDD72_Argument;                       // 0x0(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function VerseUI.UI_texture_block._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RSetTiling_L_Nimage__tiling_M_Nimage__tiling_R
struct UUI_texture_block__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RSetTiling_L_Nimage__tiling_M_Nimage__tiling_R_Params
{
public:
	struct FTuple_Limage__tiling_Mimage__tiling_R __verse_0xB2CDDD72_Argument;                       // 0x0(0x2)(Parm, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function VerseUI.UI_texture_block._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RSetImage_L_Ntexture_R
struct UUI_texture_block__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RSetImage_L_Ntexture_R_Params
{
public:
	class UAssets_texture*                       __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function VerseUI.UI_texture_block._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RSetDesiredSize_L_Nvector2_R
struct UUI_texture_block__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RSetDesiredSize_L_Nvector2_R_Params
{
public:
	struct FSpatialMath_vector2                  __verse_0xB2CDDD72_Argument;                       // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function VerseUI.UI_texture_block._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RGetTint
struct UUI_texture_block__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RGetTint_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8BE0[0x7];                                     // Fixing Size After Last Property..
	struct FColors_color                         RetVal;                                            // 0x8(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x3 (0x3 - 0x0)
// Function VerseUI.UI_texture_block._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RGetTiling
struct UUI_texture_block__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RGetTiling_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	struct FTuple_Limage__tiling_Mimage__tiling_R RetVal;                                            // 0x1(0x2)(Parm, OutParm, ReturnParm, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function VerseUI.UI_texture_block._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RGetImage
struct UUI_texture_block__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RGetImage_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8BE1[0x7];                                     // Fixing Size After Last Property..
	class UAssets_texture*                       RetVal;                                            // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function VerseUI.UI_texture_block._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RGetDesiredSize
struct UUI_texture_block__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RGetDesiredSize_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8BE2[0x7];                                     // Fixing Size After Last Property..
	struct FSpatialMath_vector2                  RetVal;                                            // 0x8(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function VerseUI.UI_texture_block.$InitInstance
struct UUI_texture_block__InitInstance_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VerseUI.UI_texture_block.$Block
struct UUI_texture_block__Block_Params
{
public:
};

// 0x80 (0x80 - 0x0)
// Function VerseUI.UI_texture_block.$InitCDO
struct UUI_texture_block__InitCDO_Params
{
public:
	struct FSpatialMath_vector2                  _ExprResult_0;                                     // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TMap<FVerseStringProperty_, uint8>           _ExprResultStack_1;                                // 0x10(0x50)(ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResult_2;                                     // 0x60(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_3;                                     // 0x70(0x10)(HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function VerseUI.UI_user_widget._L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fuser__widget_N_RSetWidget_L_Nuser__widget__slot_R
struct UUI_user_widget__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fuser__widget_N_RSetWidget_L_Nuser__widget__slot_R_Params
{
public:
	struct FUI_user_widget_slot                  __verse_0xB2CDDD72_Argument;                       // 0x0(0x18)(Parm)
};

// 0x0 (0x0 - 0x0)
// Function VerseUI.UI_user_widget.$InitInstance
struct UUI_user_widget__InitInstance_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VerseUI.UI_user_widget.$Block
struct UUI_user_widget__Block_Params
{
public:
};

// 0x42 (0x42 - 0x0)
// Function VerseUI.UI_user_widget.$InitCDO
struct UUI_user_widget__InitCDO_Params
{
public:
	TArray<struct FUI_user_widget_slot>          _ExprResult_0;                                     // 0x0(0x10)(ContainsInstancedReference)
	TArray<enum class EVerseFalse>               __verse_0xFFC68BC5_Array_1;                        // 0x10(0x10)(ContainsInstancedReference)
	TArray<struct FUI_user_widget_slot>          _ForResult_1;                                      // 0x20(0x10)(ContainsInstancedReference)
	int64                                        _ForIndex_2;                                       // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        _ForLength_3;                                      // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EVerseFalse                       __verse_0xFB88B569_Item_3;                         // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _ExprResult_4 : 1;                                 // Mask: 0x1, PropSize: 0x10x41(0x1)(NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function VerseUI.UI_widget_class.$InitInstance
struct UUI_widget_class__InitInstance_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VerseUI.UI_widget_class.$Block
struct UUI_widget_class__Block_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VerseUI.UI_widget_class.$InitCDO
struct UUI_widget_class__InitCDO_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
