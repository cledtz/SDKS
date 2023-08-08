#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EUI_horizontal_alignment : uint8
{
	Center                         = 0,
	Left                           = 1,
	Right                          = 2,
	Fill                           = 3,
	UI_horizontal_MAX              = 4,
};

enum class EUI_image_tiling : uint8
{
	Stretch                        = 0,
	Repeat                         = 1,
	UI_image_MAX                   = 2,
};

enum class EUI_orientation : uint8
{
	Horizontal                     = 0,
	Vertical                       = 1,
	UI_MAX                         = 2,
};

enum class EUI_text_justification : uint8
{
	Left                           = 0,
	Center                         = 1,
	Right                          = 2,
	UI_text_MAX                    = 3,
};

enum class EUI_text_overflow_policy : uint8
{
	Clip                           = 0,
	Ellipsis                       = 1,
	UI_text_overflow_MAX           = 2,
};

enum class EUI_ui_input_mode : uint8
{
	None                           = 0,
	All                            = 1,
	UI_ui_input_MAX                = 2,
};

enum class EUI_vertical_alignment : uint8
{
	Center                         = 0,
	Top                            = 1,
	Bottom                         = 2,
	Fill                           = 3,
	UI_vertical_MAX                = 4,
};

enum class EUI_widget_visibility : uint8
{
	Visible                        = 0,
	Collapsed                      = 1,
	Hidden                         = 2,
	UI_widget_MAX                  = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x70 (0x70 - 0x0)
// VerseStruct VerseUI.tuple_L_Kchar_M_Kchar_M_5b_Kchar_5dlocalizable__value_R
struct FTuple_L_Kchar_M_Kchar_M_5b_Kchar_5dlocalizable__value_R
{
public:
	FVerseStringProperty_                        __verse_0x18E3F084_Elem0;                          // 0x0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseStringProperty_                        __verse_0x7D844C3C_Elem1;                          // 0x10(0x10)(InstancedReference, HasGetValueTypeHash)
	TMap<FVerseStringProperty_, class UVerse_localizable_value*> __verse_0x932BF92E_Elem2;                          // 0x20(0x50)(InstancedReference, ContainsInstancedReference)
};

// 0x1 (0x1 - 0x0)
// VerseStruct VerseUI.tuple_L_R
struct FTuple_L_R
{
public:
	uint8                                        _StructPaddingDummy;                               // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// VerseStruct VerseUI.tuple_Limage__tiling_Mimage__tiling_R
struct FTuple_Limage__tiling_Mimage__tiling_R
{
public:
	enum class EUI_image_tiling                  __verse_0x18E3F084_Elem0;                          // 0x0(0x1)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EUI_image_tiling                  __verse_0x7D844C3C_Elem1;                          // 0x1(0x1)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// VerseStruct VerseUI.UI_player_ui_slot
struct FUI_player_ui_slot
{
public:
	int64                                        __verse_0xEB688892_ZOrder;                         // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EUI_ui_input_mode                 __verse_0xF0FC54F2_InputMode;                      // 0x8(0x1)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_672B[0x7];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// VerseStruct VerseUI.tuple_Lwidget_Mplayer__ui__slot_R
struct FTuple_Lwidget_Mplayer__ui__slot_R
{
public:
	class UUI_widget*                            __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FUI_player_ui_slot                    __verse_0x7D844C3C_Elem1;                          // 0x8(0x10)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
};

// 0x58 (0x58 - 0x0)
// VerseStruct VerseUI.tuple_Lwidget_Mvector2_M_QSize_Nvector2_20_3d_20_2e_2e_2e_M_QZOrder_Ntype_7b__X_Nint_20where_200_20_3c_3d_20__X_M_20__X_20_3c_3d_202147483647_7d_20_3d_20_2e_2e_2e_M_QAlignment_Nvector2_20_3d_20_2e_2e_2e_R
struct FTuple_Lwidget_Mvector2_M_QSize_Nvector2_20_3d_20_2e_2e_2e_M_QZOrder_Ntype_7b__X_Nint_20where_200_20_3c_3d_20__X_M_20__X_20_3c_3d_202147483647_7d_20_3d_20_2e_2e_2e_M_QAlignment_Nvector2_20_3d_20_2e_2e_2e_R
{
public:
	class UUI_widget*                            __verse_0x18E3F084_Elem0;                          // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FSpatialMath_vector2                  __verse_0x7D844C3C_Elem1;                          // 0x8(0x10)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	FOptionProperty_                             __verse_0x932BF92E_Elem2;                          // 0x18(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	FOptionProperty_                             __verse_0xF64C4596_Elem3;                          // 0x30(0x10)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x4F74920B_Elem4;                          // 0x40(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ContainsInstancedReference)
};

// 0x20 (0x20 - 0x0)
// VerseStruct VerseUI.UI_anchors
struct FUI_anchors
{
public:
	struct FSpatialMath_vector2                  __verse_0x91692725_Minimum;                        // 0x0(0x10)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FSpatialMath_vector2                  __verse_0xDF63CF93_Maximum;                        // 0x10(0x10)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// VerseStruct VerseUI.UI_margin
struct FUI_margin
{
public:
	double                                       __verse_0x88EBCF27_Left;                           // 0x0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __verse_0x97B55C26_Top;                            // 0x8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __verse_0x296C864F_Right;                          // 0x10(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __verse_0x7AA421E3_Bottom;                         // 0x18(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// VerseStruct VerseUI.UI_button_slot
struct FUI_button_slot
{
public:
	class UUI_widget*                            __verse_0xA5B83AD1_Widget;                         // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EUI_horizontal_alignment          __verse_0xF13651F1_HorizontalAlignment;            // 0x8(0x1)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EUI_vertical_alignment            __verse_0xA83057DE_VerticalAlignment;              // 0x9(0x1)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_672E[0x6];                                     // Fixing Size After Last Property
	struct FUI_margin                            __verse_0x7F718DF5_Padding;                        // 0x10(0x20)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
};

// 0x68 (0x68 - 0x0)
// VerseStruct VerseUI.UI_canvas_slot
struct FUI_canvas_slot
{
public:
	struct FUI_anchors                           __verse_0x6C624651_Anchors;                        // 0x0(0x20)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FUI_margin                            __verse_0xAE9C7630_Offsets;                        // 0x20(0x20)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	uint8                                        __verse_0x270727B9_SizeToContent : 1;              // Mask: 0x1, PropSize: 0x10x40(0x1)(InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_41F : 7;                                    // Fixing Bit-Field Size
	uint8                                        Pad_6730[0x7];                                     // Fixing Size After Last Property
	struct FSpatialMath_vector2                  __verse_0xE9839A38_Alignment;                      // 0x48(0x10)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	int64                                        __verse_0xEB688892_ZOrder;                         // 0x58(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UUI_widget*                            __verse_0xA5B83AD1_Widget;                         // 0x60(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// VerseStruct VerseUI.UI_overlay_slot
struct FUI_overlay_slot
{
public:
	class UUI_widget*                            __verse_0xA5B83AD1_Widget;                         // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EUI_horizontal_alignment          __verse_0xF13651F1_HorizontalAlignment;            // 0x8(0x1)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EUI_vertical_alignment            __verse_0xA83057DE_VerticalAlignment;              // 0x9(0x1)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6733[0x6];                                     // Fixing Size After Last Property
	struct FUI_margin                            __verse_0x7F718DF5_Padding;                        // 0x10(0x20)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
};

// 0x40 (0x40 - 0x0)
// VerseStruct VerseUI.UI_stack_box_slot
struct FUI_stack_box_slot
{
public:
	class UUI_widget*                            __verse_0xA5B83AD1_Widget;                         // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EUI_horizontal_alignment          __verse_0xF13651F1_HorizontalAlignment;            // 0x8(0x1)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EUI_vertical_alignment            __verse_0xA83057DE_VerticalAlignment;              // 0x9(0x1)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6735[0x6];                                     // Fixing Size After Last Property
	struct FUI_margin                            __verse_0x7F718DF5_Padding;                        // 0x10(0x20)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	FOptionProperty_                             __verse_0x3F3ECCC9_Distribution;                   // 0x30(0x10)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// VerseStruct VerseUI.UI_user_widget_slot
struct FUI_user_widget_slot
{
public:
	class UUI_widget*                            __verse_0xA5B83AD1_Widget;                         // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseStringProperty_                        __verse_0x38D9A616_Name;                           // 0x8(0x10)(InstancedReference, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// VerseStruct VerseUI.UI_widget_message
struct FUI_widget_message
{
public:
	class USimulation_player*                    __verse_0xE5E3B371_Player;                         // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UUI_widget*                            __verse_0xB1B721CE_Source;                         // 0x8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
