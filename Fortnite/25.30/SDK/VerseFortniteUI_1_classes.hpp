#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// VerseClass VerseFortniteUI.$SolarisSignatureFunctionOuter
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
// VerseClass VerseFortniteUI.UI
class UUI : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI");
		return Clss;
	}

	void _L_2fFortnite_2ecom_2fUI_N_Roperator_U_2eShowHUDElements_U_L_Nplayer__ui_M_Ntuple_L_R_M_N_Khud__element__identifier_R(const struct FTuple_Lplayer__ui_Mtuple_L_R_M_Khud__element__identifier_R& __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fUI_N_Roperator_U_2eResetHUDElementVisibility_U_L_Nplayer__ui_M_Ntuple_L_R_M_N_Khud__element__identifier_R(const struct FTuple_Lplayer__ui_Mtuple_L_R_M_Khud__element__identifier_R& __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fUI_N_Roperator_U_2eHideHUDElements_U_L_Nplayer__ui_M_Ntuple_L_R_M_N_Khud__element__identifier_R(const struct FTuple_Lplayer__ui_Mtuple_L_R_M_Khud__element__identifier_R& __verse_0xB2CDDD72_Argument);
	class UObject* _L_2fFortnite_2ecom_2fUI_N_Roperator_U_2eGetHUDController_U_L_Nfort__playspace_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lfort__playspace_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument);
	void _InitCDO();
};

// 0xB0 (0x218 - 0x168)
// VerseClass VerseFortniteUI.UI_editable_text_base
class UUI_editable_text_base : public UUI_text_base
{
public:
	uint8                                        Pad_675E[0x98];                                    // Fixing Size After Last Property
	FVerseFunctionProperty_                      __verse_0x2B80154C__L_2fFortnite_2ecom_2fUI_2feditable__text__base_N_ROnTextCommitted; // 0x200(0x10)(InstancedReference, HasGetValueTypeHash)
	class UVerseEngine_subscribable_event*       __verse_0x90B514C1_OnTextCommittedInternal;        // 0x210(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_editable_text_base");
		return Clss;
	}

	class UObject* _L_2fFortnite_2ecom_2fUI_2feditable__text__base_N_ROnTextCommitted(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO(class UVerseEngine_subscribable_event* _ExprResult_0, uint64 _InstancingGraph_1);
};

// 0x0 (0x218 - 0x218)
// VerseClass VerseFortniteUI.UI_editable_text
class UUI_editable_text : public UUI_editable_text_base
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_editable_text");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x218 - 0x218)
// VerseClass VerseFortniteUI.UI_editable_text_box
class UUI_editable_text_box : public UUI_editable_text_base
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_editable_text_box");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseFortniteUI.UI_fort_hud_controller
class UUI_fort_hud_controller : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_fort_hud_controller");
		return Clss;
	}

	void _L_2fFortnite_2ecom_2fUI_2ffort__hud__controller_N_RShowElements_L_N_Khud__element__identifier_R(const TArray<class UUI_hud_element_identifier*>& __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fUI_2ffort__hud__controller_N_RResetElementVisibility_L_N_Khud__element__identifier_R(const TArray<class UUI_hud_element_identifier*>& __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fUI_2ffort__hud__controller_N_RHideElements_L_N_Khud__element__identifier_R(const TArray<class UUI_hud_element_identifier*>& __verse_0xB2CDDD72_Argument);
};

// 0x30 (0xE0 - 0xB0)
// VerseClass VerseFortniteUI.UI_fort_playspace_hud_controller_impl
class UUI_fort_playspace_hud_controller_impl : public UVerseFortnitePlayspaceHUDController
{
public:
	FVerseFunctionProperty_                      __verse_0x15C84EF2__L_2fFortnite_2ecom_2fUI_2ffort__hud__controller_N_RShowElements_L_N_Khud__element__identifier_R; // 0xB0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x707D0B10__L_2fFortnite_2ecom_2fUI_2ffort__hud__controller_N_RHideElements_L_N_Khud__element__identifier_R; // 0xC0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xA37CD83C__L_2fFortnite_2ecom_2fUI_2ffort__hud__controller_N_RResetElementVisibility_L_N_Khud__element__identifier_R; // 0xD0(0x10)(InstancedReference, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_fort_playspace_hud_controller_impl");
		return Clss;
	}

	void _L_2fFortnite_2ecom_2fUI_2ffort__hud__controller_N_RShowElements_L_N_Khud__element__identifier_R(const TArray<class UUI_hud_element_identifier*>& __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fUI_2ffort__hud__controller_N_RResetElementVisibility_L_N_Khud__element__identifier_R(const TArray<class UUI_hud_element_identifier*>& __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fUI_2ffort__hud__controller_N_RHideElements_L_N_Khud__element__identifier_R(const TArray<class UUI_hud_element_identifier*>& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseFortniteUI.UI_hud_element_identifier
class UUI_hud_element_identifier : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_hud_element_identifier");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x8 (0x30 - 0x28)
// VerseClass VerseFortniteUI.UI_hud_element_game_phase_identifier_base
class UUI_hud_element_game_phase_identifier_base : public UUI_hud_element_identifier
{
public:
	int64                                        __verse_0xFD438257_InternalIndex;                  // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_hud_element_game_phase_identifier_base");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x38 (0x60 - 0x28)
// VerseClass VerseFortniteUI.UI_hud_element_gameplay_tag_identifier_base
class UUI_hud_element_gameplay_tag_identifier_base : public UUI_hud_element_identifier
{
public:
	FVerseStringProperty_                        __verse_0xEC7CD645_InternalTag;                    // 0x28(0x10)(InstancedReference, HasGetValueTypeHash)
	uint8                                        __verse_0xAD653F0E_TreatAsChildTagCollection : 1;  // Mask: 0x1, PropSize: 0x10x38(0x1)(InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6782[0x27];                                    // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_hud_element_gameplay_tag_identifier_base");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x60 - 0x60)
// VerseClass VerseFortniteUI.UI_creative_hud_identifier_all
class UUI_creative_hud_identifier_all : public UUI_hud_element_gameplay_tag_identifier_base
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_creative_hud_identifier_all");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO(FVerseStringProperty_ _ExprResult_0);
};

// 0x0 (0x60 - 0x60)
// VerseClass VerseFortniteUI.UI_creative_hud_identifier_build_menu
class UUI_creative_hud_identifier_build_menu : public UUI_hud_element_gameplay_tag_identifier_base
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_creative_hud_identifier_build_menu");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO(FVerseStringProperty_ _ExprResult_0);
};

// 0x0 (0x60 - 0x60)
// VerseClass VerseFortniteUI.UI_creative_hud_identifier_crafting_resources
class UUI_creative_hud_identifier_crafting_resources : public UUI_hud_element_gameplay_tag_identifier_base
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_creative_hud_identifier_crafting_resources");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO(FVerseStringProperty_ _ExprResult_0);
};

// 0x0 (0x60 - 0x60)
// VerseClass VerseFortniteUI.UI_creative_hud_identifier_elimination_counter
class UUI_creative_hud_identifier_elimination_counter : public UUI_hud_element_gameplay_tag_identifier_base
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_creative_hud_identifier_elimination_counter");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO(FVerseStringProperty_ _ExprResult_0);
};

// 0x0 (0x60 - 0x60)
// VerseClass VerseFortniteUI.UI_creative_hud_identifier_equipped_item
class UUI_creative_hud_identifier_equipped_item : public UUI_hud_element_gameplay_tag_identifier_base
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_creative_hud_identifier_equipped_item");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO(FVerseStringProperty_ _ExprResult_0);
};

// 0x0 (0x60 - 0x60)
// VerseClass VerseFortniteUI.UI_creative_hud_identifier_experience_level
class UUI_creative_hud_identifier_experience_level : public UUI_hud_element_gameplay_tag_identifier_base
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_creative_hud_identifier_experience_level");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO(FVerseStringProperty_ _ExprResult_0);
};

// 0x0 (0x60 - 0x60)
// VerseClass VerseFortniteUI.UI_creative_hud_identifier_experience_supercharged
class UUI_creative_hud_identifier_experience_supercharged : public UUI_hud_element_gameplay_tag_identifier_base
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_creative_hud_identifier_experience_supercharged");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO(FVerseStringProperty_ _ExprResult_0);
};

// 0x0 (0x60 - 0x60)
// VerseClass VerseFortniteUI.UI_creative_hud_identifier_experience_ui
class UUI_creative_hud_identifier_experience_ui : public UUI_hud_element_gameplay_tag_identifier_base
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_creative_hud_identifier_experience_ui");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO(FVerseStringProperty_ _ExprResult_0);
};

// 0x0 (0x60 - 0x60)
// VerseClass VerseFortniteUI.UI_creative_hud_identifier_health
class UUI_creative_hud_identifier_health : public UUI_hud_element_gameplay_tag_identifier_base
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_creative_hud_identifier_health");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO(FVerseStringProperty_ _ExprResult_0);
};

// 0x0 (0x60 - 0x60)
// VerseClass VerseFortniteUI.UI_creative_hud_identifier_health_numbers
class UUI_creative_hud_identifier_health_numbers : public UUI_hud_element_gameplay_tag_identifier_base
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_creative_hud_identifier_health_numbers");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO(FVerseStringProperty_ _ExprResult_0);
};

// 0x0 (0x60 - 0x60)
// VerseClass VerseFortniteUI.UI_creative_hud_identifier_hud_info
class UUI_creative_hud_identifier_hud_info : public UUI_hud_element_gameplay_tag_identifier_base
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_creative_hud_identifier_hud_info");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO(FVerseStringProperty_ _ExprResult_0);
};

// 0x0 (0x60 - 0x60)
// VerseClass VerseFortniteUI.UI_creative_hud_identifier_interaction_prompts
class UUI_creative_hud_identifier_interaction_prompts : public UUI_hud_element_gameplay_tag_identifier_base
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_creative_hud_identifier_interaction_prompts");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO(FVerseStringProperty_ _ExprResult_0);
};

// 0x0 (0x60 - 0x60)
// VerseClass VerseFortniteUI.UI_creative_hud_identifier_map_prompts
class UUI_creative_hud_identifier_map_prompts : public UUI_hud_element_gameplay_tag_identifier_base
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_creative_hud_identifier_map_prompts");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO(FVerseStringProperty_ _ExprResult_0);
};

// 0x0 (0x60 - 0x60)
// VerseClass VerseFortniteUI.UI_creative_hud_identifier_mimimap
class UUI_creative_hud_identifier_mimimap : public UUI_hud_element_gameplay_tag_identifier_base
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_creative_hud_identifier_mimimap");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO(FVerseStringProperty_ _ExprResult_0);
};

// 0x0 (0x60 - 0x60)
// VerseClass VerseFortniteUI.UI_creative_hud_identifier_minimap
class UUI_creative_hud_identifier_minimap : public UUI_hud_element_gameplay_tag_identifier_base
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_creative_hud_identifier_minimap");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO(FVerseStringProperty_ _ExprResult_0);
};

// 0x0 (0x60 - 0x60)
// VerseClass VerseFortniteUI.UI_creative_hud_identifier_pickup_stream
class UUI_creative_hud_identifier_pickup_stream : public UUI_hud_element_gameplay_tag_identifier_base
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_creative_hud_identifier_pickup_stream");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO(FVerseStringProperty_ _ExprResult_0);
};

// 0x0 (0x60 - 0x60)
// VerseClass VerseFortniteUI.UI_creative_hud_identifier_player_count
class UUI_creative_hud_identifier_player_count : public UUI_hud_element_gameplay_tag_identifier_base
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_creative_hud_identifier_player_count");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO(FVerseStringProperty_ _ExprResult_0);
};

// 0x0 (0x60 - 0x60)
// VerseClass VerseFortniteUI.UI_creative_hud_identifier_player_inventory
class UUI_creative_hud_identifier_player_inventory : public UUI_hud_element_gameplay_tag_identifier_base
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_creative_hud_identifier_player_inventory");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO(FVerseStringProperty_ _ExprResult_0);
};

// 0x0 (0x60 - 0x60)
// VerseClass VerseFortniteUI.UI_creative_hud_identifier_round_info
class UUI_creative_hud_identifier_round_info : public UUI_hud_element_gameplay_tag_identifier_base
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_creative_hud_identifier_round_info");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO(FVerseStringProperty_ _ExprResult_0);
};

// 0x0 (0x60 - 0x60)
// VerseClass VerseFortniteUI.UI_creative_hud_identifier_round_timer
class UUI_creative_hud_identifier_round_timer : public UUI_hud_element_gameplay_tag_identifier_base
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_creative_hud_identifier_round_timer");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO(FVerseStringProperty_ _ExprResult_0);
};

// 0x0 (0x60 - 0x60)
// VerseClass VerseFortniteUI.UI_creative_hud_identifier_shield_numbers
class UUI_creative_hud_identifier_shield_numbers : public UUI_hud_element_gameplay_tag_identifier_base
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_creative_hud_identifier_shield_numbers");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO(FVerseStringProperty_ _ExprResult_0);
};

// 0x0 (0x60 - 0x60)
// VerseClass VerseFortniteUI.UI_creative_hud_identifier_shields
class UUI_creative_hud_identifier_shields : public UUI_hud_element_gameplay_tag_identifier_base
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_creative_hud_identifier_shields");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO(FVerseStringProperty_ _ExprResult_0);
};

// 0x0 (0x60 - 0x60)
// VerseClass VerseFortniteUI.UI_creative_hud_identifier_shileds
class UUI_creative_hud_identifier_shileds : public UUI_hud_element_gameplay_tag_identifier_base
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_creative_hud_identifier_shileds");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO(FVerseStringProperty_ _ExprResult_0);
};

// 0x0 (0x60 - 0x60)
// VerseClass VerseFortniteUI.UI_creative_hud_identifier_storm_notifications
class UUI_creative_hud_identifier_storm_notifications : public UUI_hud_element_gameplay_tag_identifier_base
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_creative_hud_identifier_storm_notifications");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO(FVerseStringProperty_ _ExprResult_0);
};

// 0x0 (0x60 - 0x60)
// VerseClass VerseFortniteUI.UI_creative_hud_identifier_storm_timer
class UUI_creative_hud_identifier_storm_timer : public UUI_hud_element_gameplay_tag_identifier_base
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_creative_hud_identifier_storm_timer");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO(FVerseStringProperty_ _ExprResult_0);
};

// 0x0 (0x60 - 0x60)
// VerseClass VerseFortniteUI.UI_creative_hud_identifier_team_info
class UUI_creative_hud_identifier_team_info : public UUI_hud_element_gameplay_tag_identifier_base
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_creative_hud_identifier_team_info");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO(FVerseStringProperty_ _ExprResult_0);
};

// 0x8 (0x30 - 0x28)
// VerseClass VerseFortniteUI.UI_hud_element_world_resource_identifier_base
class UUI_hud_element_world_resource_identifier_base : public UUI_hud_element_identifier
{
public:
	int64                                        __verse_0xFD438257_InternalIndex;                  // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_hud_element_world_resource_identifier_base");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x30 - 0x30)
// VerseClass VerseFortniteUI.UI_hud_identifier_game_phase_bus_flying
class UUI_hud_identifier_game_phase_bus_flying : public UUI_hud_element_game_phase_identifier_base
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_hud_identifier_game_phase_bus_flying");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x30 - 0x30)
// VerseClass VerseFortniteUI.UI_hud_identifier_game_phase_bus_locked
class UUI_hud_identifier_game_phase_bus_locked : public UUI_hud_element_game_phase_identifier_base
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_hud_identifier_game_phase_bus_locked");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x30 - 0x30)
// VerseClass VerseFortniteUI.UI_hud_identifier_game_phase_countdown
class UUI_hud_identifier_game_phase_countdown : public UUI_hud_element_game_phase_identifier_base
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_hud_identifier_game_phase_countdown");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x30 - 0x30)
// VerseClass VerseFortniteUI.UI_hud_identifier_game_phase_end_game
class UUI_hud_identifier_game_phase_end_game : public UUI_hud_element_game_phase_identifier_base
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_hud_identifier_game_phase_end_game");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x30 - 0x30)
// VerseClass VerseFortniteUI.UI_hud_identifier_game_phase_final_countdown
class UUI_hud_identifier_game_phase_final_countdown : public UUI_hud_element_game_phase_identifier_base
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_hud_identifier_game_phase_final_countdown");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x30 - 0x30)
// VerseClass VerseFortniteUI.UI_hud_identifier_game_phase_none
class UUI_hud_identifier_game_phase_none : public UUI_hud_element_game_phase_identifier_base
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_hud_identifier_game_phase_none");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x30 - 0x30)
// VerseClass VerseFortniteUI.UI_hud_identifier_game_phase_setup
class UUI_hud_identifier_game_phase_setup : public UUI_hud_element_game_phase_identifier_base
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_hud_identifier_game_phase_setup");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x30 - 0x30)
// VerseClass VerseFortniteUI.UI_hud_identifier_game_phase_storm_forming
class UUI_hud_identifier_game_phase_storm_forming : public UUI_hud_element_game_phase_identifier_base
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_hud_identifier_game_phase_storm_forming");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x30 - 0x30)
// VerseClass VerseFortniteUI.UI_hud_identifier_game_phase_storm_holding
class UUI_hud_identifier_game_phase_storm_holding : public UUI_hud_element_game_phase_identifier_base
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_hud_identifier_game_phase_storm_holding");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x30 - 0x30)
// VerseClass VerseFortniteUI.UI_hud_identifier_game_phase_storm_shrinking
class UUI_hud_identifier_game_phase_storm_shrinking : public UUI_hud_element_game_phase_identifier_base
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_hud_identifier_game_phase_storm_shrinking");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x30 - 0x30)
// VerseClass VerseFortniteUI.UI_hud_identifier_game_phase_warmup
class UUI_hud_identifier_game_phase_warmup : public UUI_hud_element_game_phase_identifier_base
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_hud_identifier_game_phase_warmup");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x30 - 0x30)
// VerseClass VerseFortniteUI.UI_hud_identifier_world_resource_gold_currency
class UUI_hud_identifier_world_resource_gold_currency : public UUI_hud_element_world_resource_identifier_base
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_hud_identifier_world_resource_gold_currency");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x30 - 0x30)
// VerseClass VerseFortniteUI.UI_hud_identifier_world_resource_ingredient
class UUI_hud_identifier_world_resource_ingredient : public UUI_hud_element_world_resource_identifier_base
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_hud_identifier_world_resource_ingredient");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x30 - 0x30)
// VerseClass VerseFortniteUI.UI_hud_identifier_world_resource_metal
class UUI_hud_identifier_world_resource_metal : public UUI_hud_element_world_resource_identifier_base
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_hud_identifier_world_resource_metal");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x30 - 0x30)
// VerseClass VerseFortniteUI.UI_hud_identifier_world_resource_permanite
class UUI_hud_identifier_world_resource_permanite : public UUI_hud_element_world_resource_identifier_base
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_hud_identifier_world_resource_permanite");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x30 - 0x30)
// VerseClass VerseFortniteUI.UI_hud_identifier_world_resource_stone
class UUI_hud_identifier_world_resource_stone : public UUI_hud_element_world_resource_identifier_base
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_hud_identifier_world_resource_stone");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x30 - 0x30)
// VerseClass VerseFortniteUI.UI_hud_identifier_world_resource_wood
class UUI_hud_identifier_world_resource_wood : public UUI_hud_element_world_resource_identifier_base
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_hud_identifier_world_resource_wood");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x60 - 0x60)
// VerseClass VerseFortniteUI.UI_player_hud_identifier_all
class UUI_player_hud_identifier_all : public UUI_hud_element_gameplay_tag_identifier_base
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_player_hud_identifier_all");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO(FVerseStringProperty_ _ExprResult_0);
};

// 0xB8 (0x150 - 0x98)
// VerseClass VerseFortniteUI.UI_slider_regular
class UUI_slider_regular : public UUI_widget
{
public:
	FVerseFunctionProperty_                      __verse_0xBB361635__L_2fFortnite_2ecom_2fUI_2fslider__regular_N_RSetValue_L_Nfloat_R; // 0x98(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x159977E6__L_2fFortnite_2ecom_2fUI_2fslider__regular_N_RGetValue; // 0xA8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x8D6ED519__L_2fFortnite_2ecom_2fUI_2fslider__regular_N_RSetMinValue_L_Nfloat_R; // 0xB8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x3D6B3F57__L_2fFortnite_2ecom_2fUI_2fslider__regular_N_RGetMinValue; // 0xC8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x022A4809__L_2fFortnite_2ecom_2fUI_2fslider__regular_N_RSetMaxValue_L_Nfloat_R; // 0xD8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xB8AEC695__L_2fFortnite_2ecom_2fUI_2fslider__regular_N_RGetMaxValue; // 0xE8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x9CA36534__L_2fFortnite_2ecom_2fUI_2fslider__regular_N_RSetStepSize_L_Nfloat_R; // 0xF8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x9A4B58D2__L_2fFortnite_2ecom_2fUI_2fslider__regular_N_RGetStepSize; // 0x108(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x4C26D8D8__L_2fFortnite_2ecom_2fUI_2fslider__regular_N_ROnValueChanged; // 0x118(0x10)(InstancedReference, HasGetValueTypeHash)
	double                                       __verse_0xF4334CD7_DefaultValue;                   // 0x128(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __verse_0x286B843E_DefaultMinValue;                // 0x130(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __verse_0xADAE7DFC_DefaultMaxValue;                // 0x138(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __verse_0x8F4BE3BB_DefaultStepSize;                // 0x140(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	class UVerseEngine_subscribable_event*       __verse_0xDA7EA268_OnValueChangedInternal;         // 0x148(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_slider_regular");
		return Clss;
	}

	void _L_2fFortnite_2ecom_2fUI_2fslider__regular_N_RSetValue_L_Nfloat_R(double __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fUI_2fslider__regular_N_RSetStepSize_L_Nfloat_R(double __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fUI_2fslider__regular_N_RSetMinValue_L_Nfloat_R(double __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fUI_2fslider__regular_N_RSetMaxValue_L_Nfloat_R(double __verse_0xB2CDDD72_Argument);
	class UObject* _L_2fFortnite_2ecom_2fUI_2fslider__regular_N_ROnValueChanged(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	double _L_2fFortnite_2ecom_2fUI_2fslider__regular_N_RGetValue(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	double _L_2fFortnite_2ecom_2fUI_2fslider__regular_N_RGetStepSize(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	double _L_2fFortnite_2ecom_2fUI_2fslider__regular_N_RGetMinValue(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	double _L_2fFortnite_2ecom_2fUI_2fslider__regular_N_RGetMaxValue(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO(class UVerseEngine_subscribable_event* _ExprResult_0, uint64 _InstancingGraph_1);
};

// 0x98 (0x200 - 0x168)
// VerseClass VerseFortniteUI.UI_text_block
class UUI_text_block : public UUI_text_base
{
public:
	FVerseFunctionProperty_                      __verse_0x4DC33A52__L_2fFortnite_2ecom_2fUI_2ftext__block_N_RSetShadowOffset_L_N_Qvector2_R; // 0x168(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xD3655B6E__L_2fFortnite_2ecom_2fUI_2ftext__block_N_RGetShadowOffset; // 0x178(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xE5A18482__L_2fFortnite_2ecom_2fUI_2ftext__block_N_RSetShadowColor_L_Ncolor_R; // 0x188(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xEF5E6E05__L_2fFortnite_2ecom_2fUI_2ftext__block_N_RGetShadowColor; // 0x198(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x26D78218__L_2fFortnite_2ecom_2fUI_2ftext__block_N_RSetShadowOpacity_L_Ntype_7b__X_Nfloat_20where_200_2e000000_20_3c_3d_20__X_M_20__X_20_3c_3d_201_2e000000_7d_R; // 0x1A8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x971FF473__L_2fFortnite_2ecom_2fUI_2ftext__block_N_RGetShadowOpacity; // 0x1B8(0x10)(InstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x084CFAD8_DefaultShadowOffset;            // 0x1C8(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, ContainsInstancedReference)
	struct FColors_color                         __verse_0xAD85CEA8_DefaultShadowColor;             // 0x1E0(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	uint8                                        Pad_682D[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_text_block");
		return Clss;
	}

	void _L_2fFortnite_2ecom_2fUI_2ftext__block_N_RSetShadowOpacity_L_Ntype_7b__X_Nfloat_20where_200_2e000000_20_3c_3d_20__X_M_20__X_20_3c_3d_201_2e000000_7d_R(double __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fUI_2ftext__block_N_RSetShadowOffset_L_N_Qvector2_R(FOptionProperty_ __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fUI_2ftext__block_N_RSetShadowColor_L_Ncolor_R(const struct FColors_color& __verse_0xB2CDDD72_Argument);
	double _L_2fFortnite_2ecom_2fUI_2ftext__block_N_RGetShadowOpacity(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	FOptionProperty_ _L_2fFortnite_2ecom_2fUI_2ftext__block_N_RGetShadowOffset(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	struct FColors_color _L_2fFortnite_2ecom_2fUI_2ftext__block_N_RGetShadowColor(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO(FOptionProperty_ _ExprResult_0, FOptionProperty_ __verse_0x00000000__1, uint8 _ExprResult_1, FOptionProperty_ _ExprResultStack_2);
};

// 0x40 (0xD8 - 0x98)
// VerseClass VerseFortniteUI.UI_text_button_base
class UUI_text_button_base : public UUI_widget
{
public:
	FVerseFunctionProperty_                      __verse_0xF41128C8__L_2fFortnite_2ecom_2fUI_2ftext__button__base_N_ROnClick; // 0x98(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x3E269A04__L_2fFortnite_2ecom_2fUI_2ftext__button__base_N_RSetText_L_Nmessage_R; // 0xA8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xAECC40FA__L_2fFortnite_2ecom_2fUI_2ftext__button__base_N_RGetText; // 0xB8(0x10)(InstancedReference, HasGetValueTypeHash)
	class UVerse_message*                        __verse_0xEDB05B46_DefaultText;                    // 0xC8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerseEngine_subscribable_event*       __verse_0x6B2BB37E_OnClickInternal;                // 0xD0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_text_button_base");
		return Clss;
	}

	void _L_2fFortnite_2ecom_2fUI_2ftext__button__base_N_RSetText_L_Nmessage_R(class UVerse_message* __verse_0xB2CDDD72_Argument);
	class UObject* _L_2fFortnite_2ecom_2fUI_2ftext__button__base_N_ROnClick(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	FVerseStringProperty_ _L_2fFortnite_2ecom_2fUI_2ftext__button__base_N_RGetText(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO(class UVerse_message* _ExprResultStack_0, FVerseFunctionProperty_ _Callee_1, const struct FTuple_L_Kchar_M_Kchar_M_5b_Kchar_5dlocalizable__value_R& _ExprResult_2, FVerseStringProperty_ _ExprResult_3, FVerseStringProperty_ _ExprResult_4, TMap<FVerseStringProperty_, class UVerse_localizable_value*> _ExprResult_5, TMap<enum class EVerseFalse, enum class EVerseFalse> __verse_0xC87067A2_Map_1, TMap<FVerseStringProperty_, class UVerse_localizable_value*> _ForResult_6, int64 _ForIndex_7, enum class EVerseFalse __verse_0x589418B4_Key_3, enum class EVerseFalse __verse_0x31A8F10C_Value_3, uint8 _ExprResult_8, uint8 _ExprResult_9, class UVerseEngine_subscribable_event* _ExprResult_10, uint64 _InstancingGraph_11);
};

// 0x0 (0xD8 - 0xD8)
// VerseClass VerseFortniteUI.UI_button_loud
class UUI_button_loud : public UUI_text_button_base
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_button_loud");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0xD8 - 0xD8)
// VerseClass VerseFortniteUI.UI_button_quiet
class UUI_button_quiet : public UUI_text_button_base
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_button_quiet");
		return Clss;
	}

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0xD8 - 0xD8)
// VerseClass VerseFortniteUI.UI_button_regular
class UUI_button_regular : public UUI_text_button_base
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("UI_button_regular");
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
