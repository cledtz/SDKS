#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// VerseClass VerseUI.$SolarisSignatureFunctionOuter
class U_SolarisSignatureFunctionOuter : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("$SolarisSignatureFunctionOuter");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// VerseClass VerseUI.UI
class UUI : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI");
		return Clss;
	}

	struct FUI_canvas_slot _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_N_RMakeCanvasSlot_L_Nwidget_M_Nvector2_M_Nvector2_M_Ntype_7b__X_Nint_20where_200_20_3c_3d_20__X_M_20__X_20_3c_3d_202147483647_7d_M_Nvector2_R(const struct FTuple_Lwidget_Mvector2_M_QSize_Nvector2_20_3d_20_2e_2e_2e_M_QZOrder_Ntype_7b__X_Nint_20where_200_20_3c_3d_20__X_M_20__X_20_3c_3d_202147483647_7d_20_3d_20_2e_2e_2e_M_QAlignment_Nvector2_20_3d_20_2e_2e_2e_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_N_RGetPlayerUI_L_Nplayer_R(class USimulation_player* __verse_0xB2CDDD72_Argument);
	struct FUI_user_widget_slot UI_user_widget_slot_OverrideFactory(TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap);
	struct FUI_user_widget_slot UI_user_widget_slot_Factory();
	struct FUI_stack_box_slot UI_stack_box_slot_OverrideFactory(TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap, FVerseStringProperty_ _ExprResultStack_0, FOptionProperty_ _ExprResult_1, FVerseStringProperty_ _ExprResultStack_2, FOptionProperty_ _ExprResult_3, FVerseStringProperty_ _ExprResultStack_4, FOptionProperty_ _ExprResult_5, const struct FUI_margin& _ExprResult_6, FVerseStringProperty_ _ExprResultStack_7, FOptionProperty_ _ExprResult_8, FOptionProperty_ _ExprResult_9, FOptionProperty_ __verse_0x00000000__1, uint8 _ExprResult_10, FOptionProperty_ _ExprResultStack_11);
	struct FUI_stack_box_slot UI_stack_box_slot_Factory(const struct FUI_margin& _ExprResult_0, FOptionProperty_ _ExprResult_1, FOptionProperty_ __verse_0x00000000__1, uint8 _ExprResult_2, FOptionProperty_ _ExprResultStack_3);
	struct FUI_overlay_slot UI_overlay_slot_OverrideFactory(TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap, FVerseStringProperty_ _ExprResultStack_0, FOptionProperty_ _ExprResult_1, FVerseStringProperty_ _ExprResultStack_2, FOptionProperty_ _ExprResult_3, FVerseStringProperty_ _ExprResultStack_4, FOptionProperty_ _ExprResult_5, const struct FUI_margin& _ExprResult_6);
	struct FUI_overlay_slot UI_overlay_slot_Factory(const struct FUI_margin& _ExprResult_0);
	struct FUI_canvas_slot UI_canvas_slot_OverrideFactory(TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap, FVerseStringProperty_ _ExprResultStack_0, FOptionProperty_ _ExprResult_1, const struct FUI_anchors& _ExprResult_2, FVerseStringProperty_ _ExprResultStack_3, FOptionProperty_ _ExprResult_4, const struct FUI_margin& _ExprResult_5, FVerseStringProperty_ _ExprResultStack_6, FOptionProperty_ _ExprResult_7, FVerseStringProperty_ _ExprResultStack_8, FOptionProperty_ _ExprResult_9, const struct FSpatialMath_vector2& _ExprResult_10, TMap<FVerseStringProperty_, uint8> _ExprResultStack_11, FVerseStringProperty_ _ExprResult_12, FVerseStringProperty_ _ExprResult_13, FVerseStringProperty_ _ExprResultStack_14, FOptionProperty_ _ExprResult_15);
	struct FUI_canvas_slot UI_canvas_slot_Factory(const struct FUI_anchors& _ExprResult_0, const struct FUI_margin& _ExprResult_1, const struct FSpatialMath_vector2& _ExprResult_2, TMap<FVerseStringProperty_, uint8> _ExprResultStack_3, FVerseStringProperty_ _ExprResult_4, FVerseStringProperty_ _ExprResult_5);
	struct FUI_button_slot UI_button_slot_OverrideFactory(TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap, FVerseStringProperty_ _ExprResultStack_0, FOptionProperty_ _ExprResult_1, FVerseStringProperty_ _ExprResultStack_2, FOptionProperty_ _ExprResult_3, FVerseStringProperty_ _ExprResultStack_4, FOptionProperty_ _ExprResult_5, const struct FUI_margin& _ExprResult_6);
	struct FUI_button_slot UI_button_slot_Factory(const struct FUI_margin& _ExprResult_0);
	struct FUI_margin UI_margin_OverrideFactory(TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap, FVerseStringProperty_ _ExprResultStack_0, FOptionProperty_ _ExprResult_1, FVerseStringProperty_ _ExprResultStack_2, FOptionProperty_ _ExprResult_3, FVerseStringProperty_ _ExprResultStack_4, FOptionProperty_ _ExprResult_5, FVerseStringProperty_ _ExprResultStack_6, FOptionProperty_ _ExprResult_7);
	struct FUI_margin UI_margin_Factory();
	struct FUI_anchors UI_anchors_OverrideFactory(TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap, FVerseStringProperty_ _ExprResultStack_0, FOptionProperty_ _ExprResult_1, const struct FSpatialMath_vector2& _ExprResult_2, TMap<FVerseStringProperty_, uint8> _ExprResultStack_3, FVerseStringProperty_ _ExprResult_4, FVerseStringProperty_ _ExprResult_5, FVerseStringProperty_ _ExprResultStack_6, FOptionProperty_ _ExprResult_7, const struct FSpatialMath_vector2& _ExprResult_8, TMap<FVerseStringProperty_, uint8> _ExprResultStack_9, FVerseStringProperty_ _ExprResult_10, FVerseStringProperty_ _ExprResult_11);
	struct FUI_anchors UI_anchors_Factory(const struct FSpatialMath_vector2& _ExprResult_0, TMap<FVerseStringProperty_, uint8> _ExprResultStack_1, FVerseStringProperty_ _ExprResult_2, FVerseStringProperty_ _ExprResult_3, const struct FSpatialMath_vector2& _ExprResult_4, TMap<FVerseStringProperty_, uint8> _ExprResultStack_5, FVerseStringProperty_ _ExprResult_6, FVerseStringProperty_ _ExprResult_7);
	struct FUI_widget_message UI_widget_message_OverrideFactory(TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap);
	struct FUI_widget_message UI_widget_message_Factory();
	struct FUI_player_ui_slot UI_player_ui_slot_OverrideFactory(TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap, FVerseStringProperty_ _ExprResultStack_0, FOptionProperty_ _ExprResult_1, FVerseStringProperty_ _ExprResultStack_2, FOptionProperty_ _ExprResult_3);
	struct FUI_player_ui_slot UI_player_ui_slot_Factory();
	void _InitCDO();
};

// 0x30 (0x120 - 0xF0)
// VerseClass VerseUI.UI_player_ui
class UUI_player_ui : public UVersePlayerUIEntityComponent
{
public:
	FVerseFunctionProperty_                      __verse_0xE8471EC0__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fplayer__ui_N_RAddWidget_L_Nwidget_R; // 0xF0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x9CAF6A3C__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fplayer__ui_N_RAddWidget_L_Nwidget_M_Nplayer__ui__slot_R; // 0x100(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x500B452A__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fplayer__ui_N_RRemoveWidget_L_Nwidget_R; // 0x110(0x10)(InstancedReference, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_player_ui");
		return Clss;
	}

	void _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fplayer__ui_N_RRemoveWidget_L_Nwidget_R(class UUI_widget* __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fplayer__ui_N_RAddWidget_L_Nwidget_R(class UUI_widget* __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fplayer__ui_N_RAddWidget_L_Nwidget_M_Nplayer__ui__slot_R(const struct FTuple_Lwidget_Mplayer__ui__slot_R& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x60 (0x98 - 0x38)
// VerseClass VerseUI.UI_widget
class UUI_widget : public UVerseWidgetNativeBase
{
public:
	FVerseFunctionProperty_                      __verse_0x0D44E5E4__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fwidget_N_RSetVisibility_L_Nwidget__visibility_R; // 0x38(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x865377A1__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fwidget_N_RGetVisibility; // 0x48(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xBCEF040C__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fwidget_N_RSetEnabled_L_Nlogic_R; // 0x58(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x162E45CB__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fwidget_N_RIsEnabled; // 0x68(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xB06CF1AE__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fwidget_N_RGetParentWidget; // 0x78(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x6548A497__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fwidget_N_RGetRootWidget; // 0x88(0x10)(InstancedReference, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_widget");
		return Clss;
	}

	void _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fwidget_N_RSetVisibility_L_Nwidget__visibility_R(enum class EUI_widget_visibility __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fwidget_N_RSetEnabled_L_Nlogic_R(uint8 __verse_0xB2CDDD72_Argument);
	uint8 _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fwidget_N_RIsEnabled(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	enum class EUI_widget_visibility _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fwidget_N_RGetVisibility(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fwidget_N_RGetRootWidget(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fwidget_N_RGetParentWidget(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x58 (0xF0 - 0x98)
// VerseClass VerseUI.UI_button
class UUI_button : public UUI_widget
{
public:
	FVerseFunctionProperty_                      __verse_0x3902EF20__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fbutton_N_RSetWidget_L_Nbutton__slot_R; // 0x98(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x337F5016__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fbutton_N_ROnClick; // 0xA8(0x10)(InstancedReference, HasGetValueTypeHash)
	struct FUI_button_slot                       __verse_0x9693E4CD_Slot;                           // 0xB8(0x30)(InstancedReference, NoDestructor)
	class UVerseEngine_subscribable_event*       __verse_0x6B2BB37E_OnClickInternal;                // 0xE8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_button");
		return Clss;
	}

	void _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fbutton_N_RSetWidget_L_Nbutton__slot_R(const struct FUI_button_slot& __verse_0xB2CDDD72_Argument);
	class UObject* _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fbutton_N_ROnClick(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO(class UVerseEngine_subscribable_event* _ExprResult_0, uint64 _InstancingGraph_1);
};

// 0x30 (0xC8 - 0x98)
// VerseClass VerseUI.UI_canvas
class UUI_canvas : public UUI_widget
{
public:
	FVerseFunctionProperty_                      __verse_0x5E20D1F1__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcanvas_N_RAddWidget_L_Ncanvas__slot_R; // 0x98(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x76C2E6B2__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcanvas_N_RRemoveWidget_L_Nwidget_R; // 0xA8(0x10)(InstancedReference, HasGetValueTypeHash)
	TArray<struct FUI_canvas_slot>               __verse_0x5AE077E0_Slots;                          // 0xB8(0x10)(InstancedReference, ContainsInstancedReference)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_canvas");
		return Clss;
	}

	void _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcanvas_N_RRemoveWidget_L_Nwidget_R(class UUI_widget* __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcanvas_N_RAddWidget_L_Ncanvas__slot_R(const struct FUI_canvas_slot& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO(const TArray<struct FUI_canvas_slot>& _ExprResult_0, const TArray<enum class EVerseFalse>& __verse_0xFFC68BC5_Array_1, const TArray<struct FUI_canvas_slot>& _ForResult_1, int64 _ForIndex_2, int64 _ForLength_3, enum class EVerseFalse __verse_0xFB88B569_Item_3, uint8 _ExprResult_4);
};

// 0x90 (0x128 - 0x98)
// VerseClass VerseUI.UI_color_block
class UUI_color_block : public UUI_widget
{
public:
	FVerseFunctionProperty_                      __verse_0xCAEFE031__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcolor__block_N_RSetColor_L_Ncolor_R; // 0x98(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x67ABD452__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcolor__block_N_RGetColor; // 0xA8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xAD1CAB99__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcolor__block_N_RSetOpacity_L_Ntype_7b__X_Nfloat_20where_200_2e000000_20_3c_3d_20__X_M_20__X_20_3c_3d_201_2e000000_7d_R; // 0xB8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x4EB70EF4__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcolor__block_N_RGetOpacity; // 0xC8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xCB251B4C__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcolor__block_N_RSetDesiredSize_L_Nvector2_R; // 0xD8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xFDF14587__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcolor__block_N_RGetDesiredSize; // 0xE8(0x10)(InstancedReference, HasGetValueTypeHash)
	struct FColors_color                         __verse_0xA0FC371C_DefaultColor;                   // 0xF8(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	double                                       __verse_0x5DA10C15_DefaultOpacity;                 // 0x110(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSpatialMath_vector2                  __verse_0x4DD253BC_DefaultDesiredSize;             // 0x118(0x10)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_color_block");
		return Clss;
	}

	void _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcolor__block_N_RSetOpacity_L_Ntype_7b__X_Nfloat_20where_200_2e000000_20_3c_3d_20__X_M_20__X_20_3c_3d_201_2e000000_7d_R(double __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcolor__block_N_RSetDesiredSize_L_Nvector2_R(const struct FSpatialMath_vector2& __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcolor__block_N_RSetColor_L_Ncolor_R(const struct FColors_color& __verse_0xB2CDDD72_Argument);
	double _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcolor__block_N_RGetOpacity(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	struct FSpatialMath_vector2 _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcolor__block_N_RGetDesiredSize(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	struct FColors_color _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fcolor__block_N_RGetColor(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO(const struct FSpatialMath_vector2& _ExprResult_0, TMap<FVerseStringProperty_, uint8> _ExprResultStack_1, FVerseStringProperty_ _ExprResult_2, FVerseStringProperty_ _ExprResult_3);
};

// 0x90 (0x128 - 0x98)
// VerseClass VerseUI.UI_material_block
class UUI_material_block : public UUI_widget
{
public:
	FVerseFunctionProperty_                      __verse_0x3E0643A9__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fmaterial__block_N_RSetImage_L_Nmaterial_R; // 0x98(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x27C1539A__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fmaterial__block_N_RGetImage; // 0xA8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x4706072B__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fmaterial__block_N_RSetTint_L_Ncolor_R; // 0xB8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xC1A3BE6B__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fmaterial__block_N_RGetTint; // 0xC8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xA495D8AC__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fmaterial__block_N_RSetDesiredSize_L_Nvector2_R; // 0xD8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x259457F8__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fmaterial__block_N_RGetDesiredSize; // 0xE8(0x10)(InstancedReference, HasGetValueTypeHash)
	class UAssets_material*                      __verse_0x800C064C_DefaultImage;                   // 0xF8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FColors_color                         __verse_0xC0C585F9_DefaultTint;                    // 0x100(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FSpatialMath_vector2                  __verse_0x4DD253BC_DefaultDesiredSize;             // 0x118(0x10)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_material_block");
		return Clss;
	}

	void _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fmaterial__block_N_RSetTint_L_Ncolor_R(const struct FColors_color& __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fmaterial__block_N_RSetImage_L_Nmaterial_R(class UAssets_material* __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fmaterial__block_N_RSetDesiredSize_L_Nvector2_R(const struct FSpatialMath_vector2& __verse_0xB2CDDD72_Argument);
	struct FColors_color _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fmaterial__block_N_RGetTint(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	class UAssets_material* _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fmaterial__block_N_RGetImage(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	struct FSpatialMath_vector2 _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fmaterial__block_N_RGetDesiredSize(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO(const struct FSpatialMath_vector2& _ExprResult_0, TMap<FVerseStringProperty_, uint8> _ExprResultStack_1, FVerseStringProperty_ _ExprResult_2, FVerseStringProperty_ _ExprResult_3);
};

// 0x30 (0xC8 - 0x98)
// VerseClass VerseUI.UI_overlay
class UUI_overlay : public UUI_widget
{
public:
	FVerseFunctionProperty_                      __verse_0xA6255407__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2foverlay_N_RAddWidget_L_Noverlay__slot_R; // 0x98(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x8C9DA1CF__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2foverlay_N_RRemoveWidget_L_Nwidget_R; // 0xA8(0x10)(InstancedReference, HasGetValueTypeHash)
	TArray<struct FUI_overlay_slot>              __verse_0x5AE077E0_Slots;                          // 0xB8(0x10)(InstancedReference, ContainsInstancedReference)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_overlay");
		return Clss;
	}

	void _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2foverlay_N_RRemoveWidget_L_Nwidget_R(class UUI_widget* __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2foverlay_N_RAddWidget_L_Noverlay__slot_R(const struct FUI_overlay_slot& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO(const TArray<struct FUI_overlay_slot>& _ExprResult_0, const TArray<enum class EVerseFalse>& __verse_0xFFC68BC5_Array_1, const TArray<struct FUI_overlay_slot>& _ForResult_1, int64 _ForIndex_2, int64 _ForLength_3, enum class EVerseFalse __verse_0xFB88B569_Item_3, uint8 _ExprResult_4);
};

// 0x30 (0xC8 - 0x98)
// VerseClass VerseUI.UI_simple_button_internal
class UUI_simple_button_internal : public UUI_widget
{
public:
	FVerseFunctionProperty_                      __verse_0x7A4CBAF8__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fsimple__button__internal_N_RSetText_L_Nmessage_R; // 0x98(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xF7FC2FF5__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fsimple__button__internal_N_ROnClick; // 0xA8(0x10)(InstancedReference, HasGetValueTypeHash)
	class UVerse_message*                        __verse_0xEDB05B46_DefaultText;                    // 0xB8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerseEngine_subscribable_event*       __verse_0x6B2BB37E_OnClickInternal;                // 0xC0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_simple_button_internal");
		return Clss;
	}

	void _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fsimple__button__internal_N_RSetText_L_Nmessage_R(class UVerse_message* __verse_0xB2CDDD72_Argument);
	class UObject* _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fsimple__button__internal_N_ROnClick(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO(class UVerse_message* _ExprResultStack_0, FVerseFunctionProperty_ _Callee_1, const struct FTuple_L_Kchar_M_Kchar_M_5b_Kchar_5dlocalizable__value_R& _ExprResult_2, FVerseStringProperty_ _ExprResult_3, FVerseStringProperty_ _ExprResult_4, TMap<FVerseStringProperty_, class UVerse_localizable_value*> _ExprResult_5, TMap<enum class EVerseFalse, enum class EVerseFalse> __verse_0xC87067A2_Map_1, TMap<FVerseStringProperty_, class UVerse_localizable_value*> _ForResult_6, int64 _ForIndex_7, enum class EVerseFalse __verse_0x589418B4_Key_3, enum class EVerseFalse __verse_0x31A8F10C_Value_3, uint8 _ExprResult_8, uint8 _ExprResult_9, class UVerseEngine_subscribable_event* _ExprResult_10, uint64 _InstancingGraph_11);
};

// 0x38 (0xD0 - 0x98)
// VerseClass VerseUI.UI_stack_box
class UUI_stack_box : public UUI_widget
{
public:
	FVerseFunctionProperty_                      __verse_0xA38332DB__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fstack__box_N_RAddWidget_L_Nstack__box__slot_R; // 0x98(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xA1994F42__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fstack__box_N_RRemoveWidget_L_Nwidget_R; // 0xA8(0x10)(InstancedReference, HasGetValueTypeHash)
	TArray<struct FUI_stack_box_slot>            __verse_0x5AE077E0_Slots;                          // 0xB8(0x10)(InstancedReference, ContainsInstancedReference)
	enum class EUI_orientation                   __verse_0x4DFAB8C8_Orientation;                    // 0xC8(0x1)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7CC5[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_stack_box");
		return Clss;
	}

	void _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fstack__box_N_RRemoveWidget_L_Nwidget_R(class UUI_widget* __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fstack__box_N_RAddWidget_L_Nstack__box__slot_R(const struct FUI_stack_box_slot& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO(const TArray<struct FUI_stack_box_slot>& _ExprResult_0, const TArray<enum class EVerseFalse>& __verse_0xFFC68BC5_Array_1, const TArray<struct FUI_stack_box_slot>& _ForResult_1, int64 _ForIndex_2, int64 _ForLength_3, enum class EVerseFalse __verse_0xFB88B569_Item_3, uint8 _ExprResult_4);
};

// 0xD0 (0x168 - 0x98)
// VerseClass VerseUI.UI_text_base
class UUI_text_base : public UUI_widget
{
public:
	FVerseFunctionProperty_                      __verse_0x62A68F6D__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RSetText_L_Nmessage_R; // 0x98(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x0FA1D51C__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RGetText; // 0xA8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x54FF9ADE__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RSetJustification_L_Ntext__justification_R; // 0xB8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xBDD9B245__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RGetJustification; // 0xC8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x6A27BF3C__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RSetOverflowPolicy_L_Ntext__overflow__policy_R; // 0xD8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xE154BECE__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RGetOverflowPolicy; // 0xE8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x8E631792__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RSetTextColor_L_Ncolor_R; // 0xF8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x6A63948C__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RGetTextColor; // 0x108(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x184A045A__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RSetTextOpacity_L_Ntype_7b__X_Nfloat_20where_200_2e000000_20_3c_3d_20__X_M_20__X_20_3c_3d_201_2e000000_7d_R; // 0x118(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x27B864A9__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RGetTextOpacity; // 0x128(0x10)(InstancedReference, HasGetValueTypeHash)
	class UVerse_message*                        __verse_0xEDB05B46_DefaultText;                    // 0x138(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FColors_color                         __verse_0x5DC97209_DefaultTextColor;               // 0x140(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	double                                       __verse_0x1EA9AC7C_DefaultTextOpacity;             // 0x158(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EUI_text_justification            __verse_0x616A37A2_DefaultJustification;           // 0x160(0x1)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EUI_text_overflow_policy          __verse_0x5C09BE1D_DefaultOverflowPolicy;          // 0x161(0x1)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7CC9[0x6];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_text_base");
		return Clss;
	}

	void _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RSetTextOpacity_L_Ntype_7b__X_Nfloat_20where_200_2e000000_20_3c_3d_20__X_M_20__X_20_3c_3d_201_2e000000_7d_R(double __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RSetTextColor_L_Ncolor_R(const struct FColors_color& __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RSetText_L_Nmessage_R(class UVerse_message* __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RSetOverflowPolicy_L_Ntext__overflow__policy_R(enum class EUI_text_overflow_policy __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RSetJustification_L_Ntext__justification_R(enum class EUI_text_justification __verse_0xB2CDDD72_Argument);
	double _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RGetTextOpacity(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	struct FColors_color _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RGetTextColor(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	FVerseStringProperty_ _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RGetText(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	enum class EUI_text_overflow_policy _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RGetOverflowPolicy(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	enum class EUI_text_justification _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftext__base_N_RGetJustification(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO(class UVerse_message* _ExprResultStack_0, FVerseFunctionProperty_ _Callee_1, const struct FTuple_L_Kchar_M_Kchar_M_5b_Kchar_5dlocalizable__value_R& _ExprResult_2, FVerseStringProperty_ _ExprResult_3, FVerseStringProperty_ _ExprResult_4, TMap<FVerseStringProperty_, class UVerse_localizable_value*> _ExprResult_5, TMap<enum class EVerseFalse, enum class EVerseFalse> __verse_0xC87067A2_Map_1, TMap<FVerseStringProperty_, class UVerse_localizable_value*> _ForResult_6, int64 _ForIndex_7, enum class EVerseFalse __verse_0x589418B4_Key_3, enum class EVerseFalse __verse_0x31A8F10C_Value_3, uint8 _ExprResult_8, uint8 _ExprResult_9);
};

// 0x0 (0x168 - 0x168)
// VerseClass VerseUI.UI_text_block_internal
class UUI_text_block_internal : public UUI_text_base
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_text_block_internal");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0xB8 (0x150 - 0x98)
// VerseClass VerseUI.UI_texture_block
class UUI_texture_block : public UUI_widget
{
public:
	FVerseFunctionProperty_                      __verse_0x2E2BFF09__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RSetImage_L_Ntexture__2d_R; // 0x98(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x6D457009__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RGetImage; // 0xA8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x529AC274__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RSetTint_L_Ncolor_R; // 0xB8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xDBC5F34C__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RGetTint; // 0xC8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x4E2F72CD__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RSetDesiredSize_L_Nvector2_R; // 0xD8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xFD3FDB6D__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RGetDesiredSize; // 0xE8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x735C6B82__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RSetTiling_L_Nimage__tile_R; // 0xF8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xB26FF2D8__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RGetTiling; // 0x108(0x10)(InstancedReference, HasGetValueTypeHash)
	class UAssets_texture_2d*                    __verse_0x800C064C_DefaultImage;                   // 0x118(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FColors_color                         __verse_0xC0C585F9_DefaultTint;                    // 0x120(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	struct FSpatialMath_vector2                  __verse_0x4DD253BC_DefaultDesiredSize;             // 0x138(0x10)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	enum class EUI_image_tile                    __verse_0x772B7FFC_DefaultTiling;                  // 0x148(0x1)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7CCD[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_texture_block");
		return Clss;
	}

	void _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RSetTint_L_Ncolor_R(const struct FColors_color& __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RSetTiling_L_Nimage__tile_R(enum class EUI_image_tile __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RSetImage_L_Ntexture__2d_R(class UAssets_texture_2d* __verse_0xB2CDDD72_Argument);
	void _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RSetDesiredSize_L_Nvector2_R(const struct FSpatialMath_vector2& __verse_0xB2CDDD72_Argument);
	struct FColors_color _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RGetTint(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	enum class EUI_image_tile _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RGetTiling(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	class UAssets_texture_2d* _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RGetImage(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	struct FSpatialMath_vector2 _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2ftexture__block_N_RGetDesiredSize(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO(const struct FSpatialMath_vector2& _ExprResult_0, TMap<FVerseStringProperty_, uint8> _ExprResultStack_1, FVerseStringProperty_ _ExprResult_2, FVerseStringProperty_ _ExprResult_3);
};

// 0x28 (0xC0 - 0x98)
// VerseClass VerseUI.UI_user_widget
class UUI_user_widget : public UUI_widget
{
public:
	FVerseFunctionProperty_                      __verse_0xCF873285__L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fuser__widget_N_RSetWidget_L_Nuser__widget__slot_R; // 0x98(0x10)(InstancedReference, HasGetValueTypeHash)
	class UUI_widget_class*                      __verse_0x26CD6686_Asset;                          // 0xA8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<struct FUI_user_widget_slot>          __verse_0x5AE077E0_Slots;                          // 0xB0(0x10)(InstancedReference, ContainsInstancedReference)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_user_widget");
		return Clss;
	}

	void _L_2fUnrealEngine_2ecom_2fTemporary_2fUI_2fuser__widget_N_RSetWidget_L_Nuser__widget__slot_R(const struct FUI_user_widget_slot& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO(const TArray<struct FUI_user_widget_slot>& _ExprResult_0, const TArray<enum class EVerseFalse>& __verse_0xFFC68BC5_Array_1, const TArray<struct FUI_user_widget_slot>& _ForResult_1, int64 _ForIndex_2, int64 _ForLength_3, enum class EVerseFalse __verse_0xFB88B569_Item_3, uint8 _ExprResult_4);
};

// 0x0 (0xD8 - 0xD8)
// VerseClass VerseUI.UI_widget_class
class UUI_widget_class : public UAssets_client_asset
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_widget_class");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
