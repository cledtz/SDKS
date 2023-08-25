#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// VerseClass VerseFortniteInternal.$SolarisSignatureFunctionOuter
class U_SolarisSignatureFunctionOuter : public UObject
{
public:

	static class UClass* StaticClass();
	static class U_SolarisSignatureFunctionOuter* GetDefaultObj();

};

// 0x50 (0xD8 - 0x88)
// VerseClass VerseFortniteInternal.Game_fort_building_settings_component
class UGame_fort_building_settings_component : public UFortBuildingSettingsComponentBase
{
public:
	FVerseFunctionProperty_                      __verse_0x4AEE10CB__L_2fFortnite_2ecom_2fGame_2ffort__building__settings__component_N_RsetBuilding_L_NPlayerSettingState_R; // 0x88(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x59E03D8E__L_2fFortnite_2ecom_2fGame_2ffort__building__settings__component_N_RsetBuildingOnWater_L_NPlayerSettingState_R; // 0x98(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xAEABD061__L_2fFortnite_2ecom_2fGame_2ffort__building__settings__component_N_RsetEditing_L_NPlayerSettingState_R; // 0xA8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x5073BE0E__L_2fFortnite_2ecom_2fGame_2ffort__building__settings__component_N_RsetEditingHostile_L_NPlayerSettingState_R; // 0xB8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x5FED9001__L_2fFortnite_2ecom_2fGame_2ffort__building__settings__component_N_RsetTrapPlacement_L_NPlayerSettingState_R; // 0xC8(0x10)(InstancedReference, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGame_fort_building_settings_component* GetDefaultObj();

	void _L_2fFortnite_2ecom_2fGame_2ffort__building__settings__component_N_RsetTrapPlacement_L_NPlayerSettingState_R(enum class EGame_PlayerSettingState __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fGame_2ffort__building__settings__component_N_RsetEditingHostile_L_NPlayerSettingState_R(enum class EGame_PlayerSettingState __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fGame_2ffort__building__settings__component_N_RsetEditing_L_NPlayerSettingState_R(enum class EGame_PlayerSettingState __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fGame_2ffort__building__settings__component_N_RsetBuildingOnWater_L_NPlayerSettingState_R(enum class EGame_PlayerSettingState __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fGame_2ffort__building__settings__component_N_RsetBuilding_L_NPlayerSettingState_R(enum class EGame_PlayerSettingState __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0xC8 - 0xC8)
// VerseClass VerseFortniteInternal.Game_fort_item_definition
class UGame_fort_item_definition : public UAssets_asset
{
public:

	static class UClass* StaticClass();
	static class UGame_fort_item_definition* GetDefaultObj();

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x38 (0x170 - 0x138)
// VerseClass VerseFortniteInternal.Game_fort_playspace_component
class UGame_fort_playspace_component : public UPlayspace_playspace_component
{
public:
	FVerseFunctionProperty_                      __verse_0x43E273F3___WaitForPlayerEliminated;      // 0x138(0x10)(InstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_4134[0x28];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UGame_fort_playspace_component* GetDefaultObj();

	class UConcurrency_task* __WaitForPlayerEliminated(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x58 (0xB0 - 0x58)
// VerseClass VerseFortniteInternal.Game_fortnite_building_component
class UGame_fortnite_building_component : public UEntityComponent
{
public:
	FVerseFunctionProperty_                      __verse_0xAD9C3374__L_2fFortnite_2ecom_2fGame_2ffortnite__building__component_N_RwasPlayerBuilt; // 0x58(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x9298102F__L_2fFortnite_2ecom_2fGame_2ffortnite__building__component_N_RcanBeDamaged; // 0x68(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x49AF8941__L_2fFortnite_2ecom_2fGame_2ffortnite__building__component_N_RcanBeReplaced; // 0x78(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xA0138077__L_2fFortnite_2ecom_2fGame_2ffortnite__building__component_N_RsetCanBeDamaged_L_Nlogic_R; // 0x88(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x63EC639A__L_2fFortnite_2ecom_2fGame_2ffortnite__building__component_N_RsetCanBeReplaced_L_Nlogic_R; // 0x98(0x10)(InstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_416E[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UGame_fortnite_building_component* GetDefaultObj();

	uint8 _L_2fFortnite_2ecom_2fGame_2ffortnite__building__component_N_RwasPlayerBuilt(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fGame_2ffortnite__building__component_N_RsetCanBeReplaced_L_Nlogic_R(uint8 __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fGame_2ffortnite__building__component_N_RsetCanBeDamaged_L_Nlogic_R(uint8 __verse_0xB2CDDD72_Argument);
	uint8 _L_2fFortnite_2ecom_2fGame_2ffortnite__building__component_N_RcanBeReplaced(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	uint8 _L_2fFortnite_2ecom_2fGame_2ffortnite__building__component_N_RcanBeDamaged(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x8 (0x30 - 0x28)
// VerseClass VerseFortniteInternal.Game_Item_item_type
class UGame_Item_item_type : public UObject
{
public:
	uint8                                        Pad_4184[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UGame_Item_item_type* GetDefaultObj();

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x58 (0xB0 - 0x58)
// VerseClass VerseFortniteInternal.Game_Item_player_pickup_component
class UGame_Item_player_pickup_component : public UEntityComponent
{
public:
	FVerseFunctionProperty_                      __verse_0x89400523__L_2fFortnite_2ecom_2fGame_2fItem_2fplayer__pickup__component_N_RgivePickupTo_L_Nplayer__component_R; // 0x58(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xC3A81506__L_2fFortnite_2ecom_2fGame_2fItem_2fplayer__pickup__component_N_RtossPickup_L_Nvector3_M_N_Qplayer__component_R; // 0x68(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xF4552B58__L_2fFortnite_2ecom_2fGame_2fItem_2fplayer__pickup__component_N_RgetNumOfItemType_L_Nitem__type_R; // 0x78(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xCBCBC029__L_2fFortnite_2ecom_2fGame_2fItem_2fplayer__pickup__component_N_RattemptPartialCollect_L_Nitem__type_M_Nint_M_Nplayer__component_R; // 0x88(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x92CBECB5__L_2fFortnite_2ecom_2fGame_2fItem_2fplayer__pickup__component_N_RgetPrimaryItemType; // 0x98(0x10)(InstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_41B2[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UGame_Item_player_pickup_component* GetDefaultObj();

	void _L_2fFortnite_2ecom_2fGame_2fItem_2fplayer__pickup__component_N_RtossPickup_L_Nvector3_M_N_Qplayer__component_R(const struct FTuple_Lvector3_M_Qplayer__component_R& __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fGame_2fItem_2fplayer__pickup__component_N_RgivePickupTo_L_Nplayer__component_R(class USimulation_player_component* __verse_0xB2CDDD72_Argument);
	class UGame_Item_item_type* _L_2fFortnite_2ecom_2fGame_2fItem_2fplayer__pickup__component_N_RgetPrimaryItemType(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	int64 _L_2fFortnite_2ecom_2fGame_2fItem_2fplayer__pickup__component_N_RgetNumOfItemType_L_Nitem__type_R(class UGame_Item_item_type* __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fGame_2fItem_2fplayer__pickup__component_N_RattemptPartialCollect_L_Nitem__type_M_Nint_M_Nplayer__component_R(const struct FTuple_Litem__type_Mint_Mplayer__component_R& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseFortniteInternal.Game_Item_PlayerPickupComponent
class UGame_Item_PlayerPickupComponent : public UObject
{
public:

	static class UClass* StaticClass();
	static class UGame_Item_PlayerPickupComponent* GetDefaultObj();

	FOptionalProperty_ _L_2fFortnite_2ecom_2fGame_2fItem_2fPlayerPickupComponent_N_RcreatePickup_L_Ncomponent_M_Nfort__item__definition_M_Nint_M_Nvector3_R(const struct FTuple_Lcomponent_Mfort__item__definition_Mint_Mvector3_R& __verse_0xB2CDDD72_Argument);
	void _InitCDO();
};

// 0x60 (0xE8 - 0x88)
// VerseClass VerseFortniteInternal.Game_Movement_projectile_movement_component
class UGame_Movement_projectile_movement_component : public UVerseFortniteMovementComponentBase
{
public:
	FVerseFunctionProperty_                      __verse_0x0B25997B__L_2fFortnite_2ecom_2fGame_2fMovement_2fprojectile__movement__component_N_RSetDirection_L_Nvector3_R; // 0x88(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x6C4C17DB__L_2fFortnite_2ecom_2fGame_2fMovement_2fprojectile__movement__component_N_RSetSpeed_L_Nfloat_R; // 0x98(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x7B2D42E9__L_2fFortnite_2ecom_2fGame_2fMovement_2fprojectile__movement__component_N_RSetGravity_L_Nfloat_R; // 0xA8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xF24F59C9__L_2fFortnite_2ecom_2fGame_2fMovement_2fprojectile__movement__component_N_RSetShouldBounce_L_Nlogic_R; // 0xB8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x8040185E__L_2fFortnite_2ecom_2fGame_2fMovement_2fprojectile__movement__component_N_RSetBounciness_L_Nfloat_R; // 0xC8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x68515442__L_2fFortnite_2ecom_2fGame_2fMovement_2fprojectile__movement__component_N_RSetFriction_L_Nfloat_R; // 0xD8(0x10)(InstancedReference, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGame_Movement_projectile_movement_component* GetDefaultObj();

	void _L_2fFortnite_2ecom_2fGame_2fMovement_2fprojectile__movement__component_N_RSetSpeed_L_Nfloat_R(double __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fGame_2fMovement_2fprojectile__movement__component_N_RSetShouldBounce_L_Nlogic_R(uint8 __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fGame_2fMovement_2fprojectile__movement__component_N_RSetGravity_L_Nfloat_R(double __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fGame_2fMovement_2fprojectile__movement__component_N_RSetFriction_L_Nfloat_R(double __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fGame_2fMovement_2fprojectile__movement__component_N_RSetDirection_L_Nvector3_R(const struct FSpatialMath_vector3& __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fGame_2fMovement_2fprojectile__movement__component_N_RSetBounciness_L_Nfloat_R(double __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseFortniteInternal.Game_Player
class UGame_Player : public UObject
{
public:

	static class UClass* StaticClass();
	static class UGame_Player* GetDefaultObj();

	struct FGame_Player_player_team Game_Player_player_team_OverrideFactory(TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap);
	struct FGame_Player_player_team Game_Player_player_team_Factory();
	void _InitCDO();
};

// 0x10 (0x38 - 0x28)
// VerseClass VerseFortniteInternal.Game_player_eliminated_result
class UGame_player_eliminated_result : public UObject
{
public:
	class USimulation_player_component*          __verse_0x7C71103B_EliminatedPlayer;               // 0x28(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionalProperty_                           __verse_0xB989E158_Eliminator;                     // 0x30(0x8)(ZeroConstructor, InstancedReference, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGame_player_eliminated_result* GetDefaultObj();

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x40 (0x120 - 0xE0)
// VerseClass VerseFortniteInternal.Game_Player_fort_player_component
class UGame_Player_fort_player_component : public USimulation_player_component
{
public:
	FVerseFunctionProperty_                      __verse_0x3DB6B216__L_2fFortnite_2ecom_2fGame_2fPlayer_2ffort__player__component_N_RPushActiveState_L_N_Kchar_R; // 0xE0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xB834237F__L_2fFortnite_2ecom_2fGame_2fPlayer_2ffort__player__component_N_RPopActiveState_L_N_Kchar_R; // 0xF0(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xFF6DF990__L_2fFortnite_2ecom_2fGame_2fPlayer_2ffort__player__component_N_RIsActive_L_N_Kchar_R; // 0x100(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xD2D3E7C6__L_2fFortnite_2ecom_2fGame_2fPlayer_2ffort__player__component_N_RGetUniqueID; // 0x110(0x10)(InstancedReference, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGame_Player_fort_player_component* GetDefaultObj();

	uint8 _L_2fFortnite_2ecom_2fGame_2fPlayer_2ffort__player__component_N_RPushActiveState_L_N_Kchar_R(FVerseStringProperty_ __verse_0xB2CDDD72_Argument);
	uint8 _L_2fFortnite_2ecom_2fGame_2fPlayer_2ffort__player__component_N_RPopActiveState_L_N_Kchar_R(FVerseStringProperty_ __verse_0xB2CDDD72_Argument);
	uint8 _L_2fFortnite_2ecom_2fGame_2fPlayer_2ffort__player__component_N_RIsActive_L_N_Kchar_R(FVerseStringProperty_ __verse_0xB2CDDD72_Argument);
	FVerseStringProperty_ _L_2fFortnite_2ecom_2fGame_2fPlayer_2ffort__player__component_N_RGetUniqueID(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x30 (0x88 - 0x58)
// VerseClass VerseFortniteInternal.Game_Player_player_start_component
class UGame_Player_player_start_component : public UEntityComponent
{
public:
	FVerseFunctionProperty_                      __verse_0xCC113DCA__L_2fFortnite_2ecom_2fGame_2fPlayer_2fplayer__start__component_N_RaddTags_L_N_K_Kchar_R; // 0x58(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xC6B8FBBB__L_2fFortnite_2ecom_2fGame_2fPlayer_2fplayer__start__component_N_RgetPosition; // 0x68(0x10)(InstancedReference, HasGetValueTypeHash)
	TArray<FVerseStringProperty_>                __verse_0x7C32BFF7_tags;                           // 0x78(0x10)(Edit, InstancedReference, SaveGame, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UGame_Player_player_start_component* GetDefaultObj();

	struct FSpatialMath_vector3 _L_2fFortnite_2ecom_2fGame_2fPlayer_2fplayer__start__component_N_RgetPosition(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fGame_2fPlayer_2fplayer__start__component_N_RaddTags_L_N_K_Kchar_R(const TArray<FVerseStringProperty_>& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseFortniteInternal.Game_Player_PlayerAttributes
class UGame_Player_PlayerAttributes : public UObject
{
public:

	static class UClass* StaticClass();
	static class UGame_Player_PlayerAttributes* GetDefaultObj();

	void _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerAttributes_N_RModifyNumericAttribute_L_Nplayer_M_NPlayerAttribute_M_NPlayerAttributeOperation_M_Nfloat_R(const struct FTuple_Lplayer_MPlayerAttribute_MPlayerAttributeOperation_Mfloat_R& __verse_0xB2CDDD72_Argument);
	double _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerAttributes_N_RGetNumericAttributeValue_L_Nplayer_M_NPlayerAttribute_R(const struct FTuple_Lplayer_MPlayerAttribute_R& __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerAttributes_N_RAddToNumericAttribute_L_Nplayer_M_NPlayerAttribute_M_Nfloat_R(const struct FTuple_Lplayer_MPlayerAttribute_Mfloat_R& __verse_0xB2CDDD72_Argument);
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseFortniteInternal.Game_Player_PlayerInventory
class UGame_Player_PlayerInventory : public UObject
{
public:

	static class UClass* StaticClass();
	static class UGame_Player_PlayerInventory* GetDefaultObj();

	void _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerInventory_N_RTryAddToInventory_L_Nplayer_M_N_Kchar_M_Nint_M_Nlogic_R(const struct FTuple_Lplayer_M_Kchar_Mint_Mlogic_R& __verse_0xB2CDDD72_Argument);
	FOptionalProperty_ _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerInventory_N_RTryAddItemToInventory_L_Nplayer_M_Nfort__item__definition_M_Nint_M_Nlogic_R(const struct FTuple_Lplayer_Mfort__item__definition_Mint_Mlogic_R& __verse_0xB2CDDD72_Argument);
	uint8 _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerInventory_N_RRemoveFromInventory_L_Nplayer_M_N_Kchar_M_Nint_R(const struct FTuple_Lplayer_M_Kchar_Mint_R& __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerInventory_N_RClearDroppableItems_L_Nplayer_R(class USimulation_player* __verse_0xB2CDDD72_Argument);
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseFortniteInternal.Game_Player_PlayerInvulnerable
class UGame_Player_PlayerInvulnerable : public UObject
{
public:

	static class UClass* StaticClass();
	static class UGame_Player_PlayerInvulnerable* GetDefaultObj();

	void _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerInvulnerable_N_RSetPlayerInvulnerability_L_Nplayer_M_Nlogic_R(const struct FTuple_Lplayer_Mlogic_R& __verse_0xB2CDDD72_Argument);
	FOptionalProperty_ _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerInvulnerable_N_RIsPlayerInvulnerable_L_Nplayer_R(class USimulation_player* __verse_0xB2CDDD72_Argument);
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseFortniteInternal.Game_Player_PlayerSpectator
class UGame_Player_PlayerSpectator : public UObject
{
public:

	static class UClass* StaticClass();
	static class UGame_Player_PlayerSpectator* GetDefaultObj();

	FOptionalProperty_ _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerSpectator_N_RSpectatePlayer_L_Nplayer_M_Nplayer_R(const struct FTuple_Lplayer_Mplayer_R& __verse_0xB2CDDD72_Argument);
	FOptionalProperty_ _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerSpectator_N_RSpectateEliminator_L_Nplayer_R(class USimulation_player* __verse_0xB2CDDD72_Argument);
	FOptionalProperty_ _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerSpectator_N_RSetSpectator_L_Nplayer_R(class USimulation_player* __verse_0xB2CDDD72_Argument);
	FOptionalProperty_ _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerSpectator_N_RIsSpectator_L_Nplayer_R(class USimulation_player* __verse_0xB2CDDD72_Argument);
	TArray<class USimulation_player*> _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerSpectator_N_RGetPlayersSpectatingTarget_L_Nplayer_R(class USimulation_player* __verse_0xB2CDDD72_Argument);
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseFortniteInternal.Game_Player_PlayerStartComponent
class UGame_Player_PlayerStartComponent : public UObject
{
public:

	static class UClass* StaticClass();
	static class UGame_Player_PlayerStartComponent* GetDefaultObj();

	TArray<class UGame_Player_player_start_component*> _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerStartComponent_N_RfindAllInPlayspaceWithTags_L_Ncomponent_M_N_K_Kchar_R(const struct FTuple_Lcomponent_M_K_Kchar_R& __verse_0xB2CDDD72_Argument);
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseFortniteInternal.Game_Player_PlayerStasis
class UGame_Player_PlayerStasis : public UObject
{
public:

	static class UClass* StaticClass();
	static class UGame_Player_PlayerStasis* GetDefaultObj();

	void _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerStasis_N_RReleaseFromStasis_L_Nplayer_R(class USimulation_player* __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerStasis_N_RPutInStasisAdvanced_L_Nplayer_M_Nlogic_M_Nlogic_M_Nlogic_R(const struct FTuple_Lplayer_Mlogic_Mlogic_Mlogic_R& __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerStasis_N_RPutInStasis_L_Nplayer_R(class USimulation_player* __verse_0xB2CDDD72_Argument);
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseFortniteInternal.Game_Player_PlayerStatus
class UGame_Player_PlayerStatus : public UObject
{
public:

	static class UClass* StaticClass();
	static class UGame_Player_PlayerStatus* GetDefaultObj();

	uint8 _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerStatus_N_RgetStatus_L_Nplayer__component_M_Nplayer__status__type_R(const struct FTuple_Lplayer__component_Mplayer__status__type_R& __verse_0xB2CDDD72_Argument);
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseFortniteInternal.Game_Player_PlayerTeam
class UGame_Player_PlayerTeam : public UObject
{
public:

	static class UClass* StaticClass();
	static class UGame_Player_PlayerTeam* GetDefaultObj();

	uint8 _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RSetTeam_L_Nplayer_M_Nplayer__team_R(const struct FTuple_Lplayer_Mplayer__team_R& __verse_0xB2CDDD72_Argument);
	struct FGame_Player_player_team _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RPickTeam_L_Nplayer_M_Nplayer__team_R(const struct FTuple_Lplayer_Mplayer__team_R& __verse_0xB2CDDD72_Argument);
	int64 _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RGetTeamSize_L_Nplayer__team_R(const struct FGame_Player_player_team& __verse_0xB2CDDD72_Argument);
	TArray<class USimulation_player*> _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RGetTeamMembers_L_Nplayer__team_R(const struct FGame_Player_player_team& __verse_0xB2CDDD72_Argument);
	struct FColors_color _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RGetTeamColor_L_Nplayer__team_R(const struct FGame_Player_player_team& __verse_0xB2CDDD72_Argument);
	struct FGame_Player_player_team _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RGetTeam_L_Nplayer_R(class USimulation_player* __verse_0xB2CDDD72_Argument);
	struct FGame_Player_player_team _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RGetNextTeam_L_Nplayer__team_R(const struct FGame_Player_player_team& __verse_0xB2CDDD72_Argument);
	struct FGame_Player_player_team _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RGetInvalidTeam(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	struct FGame_Player_player_team _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RGetFirstTeam(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	uint8 _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_REquals_L_Nplayer__team_M_Nplayer__team_R(const struct FTuple_Lplayer__team_Mplayer__team_R& __verse_0xB2CDDD72_Argument);
	FOptionalProperty_ _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RContainsHumanPlayers_L_Nplayer__team_R(const struct FGame_Player_player_team& __verse_0xB2CDDD72_Argument);
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseFortniteInternal.Game_Player_PlayerTravel
class UGame_Player_PlayerTravel : public UObject
{
public:

	static class UClass* StaticClass();
	static class UGame_Player_PlayerTravel* GetDefaultObj();

	void _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTravel_N_RSendToLobby_L_Nplayer_R(class USimulation_player* __verse_0xB2CDDD72_Argument);
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseFortniteInternal.Game_Player_PlayerVisibility
class UGame_Player_PlayerVisibility : public UObject
{
public:

	static class UClass* StaticClass();
	static class UGame_Player_PlayerVisibility* GetDefaultObj();

	void _L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerVisibility_N_RSetIsHidden_L_Nplayer_M_Nlogic_R(const struct FTuple_Lplayer_Mlogic_R& __verse_0xB2CDDD72_Argument);
	void _InitCDO();
};

// 0x40 (0x68 - 0x28)
// VerseClass VerseFortniteInternal.Game_stat_container
class UGame_stat_container : public UObject
{
public:
	FVerseFunctionProperty_                      __verse_0xBD62F3AE__L_2fFortnite_2ecom_2fGame_2fstat__container_N_RGetStatValue_L_Nint_R; // 0x28(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x15ECECB2__L_2fFortnite_2ecom_2fGame_2fstat__container_N_RSetStatValue_L_Nint_M_Nint_R; // 0x38(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xF8339FFD__L_2fFortnite_2ecom_2fGame_2fstat__container_N_RIncrementStat_L_Nint_M_Nint_R; // 0x48(0x10)(InstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_4282[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UGame_stat_container* GetDefaultObj();

	uint8 _L_2fFortnite_2ecom_2fGame_2fstat__container_N_RSetStatValue_L_Nint_M_Nint_R(const struct FTuple_Lint_Mint_R& __verse_0xB2CDDD72_Argument);
	uint8 _L_2fFortnite_2ecom_2fGame_2fstat__container_N_RIncrementStat_L_Nint_M_Nint_R(const struct FTuple_Lint_Mint_R& __verse_0xB2CDDD72_Argument);
	int64 _L_2fFortnite_2ecom_2fGame_2fstat__container_N_RGetStatValue_L_Nint_R(int64 __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0xF0 (0x158 - 0x68)
// VerseClass VerseFortniteInternal.Game_match_stats
class UGame_match_stats : public UGame_stat_container
{
public:
	FVerseFunctionProperty_                      __verse_0x822BA24C__L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RSetPlayerStat_L_Nplayer_M_Nint_M_Nint_R; // 0x68(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x1F493C56__L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RGetPlayerStat_L_Nplayer_M_Nint_R; // 0x78(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xF099193F__L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RIncrementPlayerStat_L_Nplayer_M_Nint_M_Nint_R; // 0x88(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xAD5EC947__L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RSetTeamStat_L_Nplayer__team_M_Nint_M_Nint_R; // 0x98(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x384BE6C0__L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RGetTeamStat_L_Nplayer__team_M_Nint_R; // 0xA8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xDDA80A55__L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RIncrementTeamStat_L_Nplayer__team_M_Nint_M_Nint_R; // 0xB8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xC5F988D4__L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RSetMatchStat_L_Nint_M_Nint_R; // 0xC8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xD6C53453__L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RGetMatchStat_L_Nint_R; // 0xD8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xAB54707E__L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RIncrementMatchStat_L_Nint_M_Nint_R; // 0xE8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x0F1148C3__L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RReset; // 0xF8(0x10)(InstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_4298[0x50];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UGame_match_stats* GetDefaultObj();

	void _L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RSetTeamStat_L_Nplayer__team_M_Nint_M_Nint_R(const struct FTuple_Lplayer__team_Mint_Mint_R& __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RSetPlayerStat_L_Nplayer_M_Nint_M_Nint_R(const struct FTuple_Lplayer_Mint_Mint_R& __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RSetMatchStat_L_Nint_M_Nint_R(const struct FTuple_Lint_Mint_R& __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RReset(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	uint8 _L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RIncrementTeamStat_L_Nplayer__team_M_Nint_M_Nint_R(const struct FTuple_Lplayer__team_Mint_Mint_R& __verse_0xB2CDDD72_Argument);
	uint8 _L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RIncrementPlayerStat_L_Nplayer_M_Nint_M_Nint_R(const struct FTuple_Lplayer_Mint_Mint_R& __verse_0xB2CDDD72_Argument);
	uint8 _L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RIncrementMatchStat_L_Nint_M_Nint_R(const struct FTuple_Lint_Mint_R& __verse_0xB2CDDD72_Argument);
	int64 _L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RGetTeamStat_L_Nplayer__team_M_Nint_R(const struct FTuple_Lplayer__team_Mint_R& __verse_0xB2CDDD72_Argument);
	int64 _L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RGetPlayerStat_L_Nplayer_M_Nint_R(const struct FTuple_Lplayer_Mint_R& __verse_0xB2CDDD72_Argument);
	int64 _L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RGetMatchStat_L_Nint_R(int64 __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x8 (0x70 - 0x68)
// VerseClass VerseFortniteInternal.Game_player_stat_values
class UGame_player_stat_values : public UGame_stat_container
{
public:
	class USimulation_player*                    __verse_0xDEE8E111_OwningPlayer;                   // 0x68(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UGame_player_stat_values* GetDefaultObj();

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x80 (0xE8 - 0x68)
// VerseClass VerseFortniteInternal.Game_StormController_storm_controller_component
class UGame_StormController_storm_controller_component : public UEntityFortniteStormControllerComponent
{
public:
	FVerseFunctionProperty_                      __verse_0x7675A710__L_2fFortnite_2ecom_2fGame_2fStormController_2fstorm__controller__component_N_Rbegin; // 0x68(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x4D705B14__L_2fFortnite_2ecom_2fGame_2fStormController_2fstorm__controller__component_N_Rend; // 0x78(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xD93DC734__L_2fFortnite_2ecom_2fGame_2fStormController_2fstorm__controller__component_N_Rpause; // 0x88(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0x64AA7497__L_2fFortnite_2ecom_2fGame_2fStormController_2fstorm__controller__component_N_Rreset; // 0x98(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xD763A2FA__L_2fFortnite_2ecom_2fGame_2fStormController_2fstorm__controller__component_N_RsetBattleRoyalePhases; // 0xA8(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xF5FB08F4__L_2fFortnite_2ecom_2fGame_2fStormController_2fstorm__controller__component_N_Rexists; // 0xB8(0x10)(InstancedReference, HasGetValueTypeHash)
	double                                       __verse_0xA5122212_startRadius;                    // 0xC8(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __verse_0xE6BD5D91_boundsRadius;                   // 0xD0(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	TArray<class UGame_StormController_storm_phase*> __verse_0xC2790393_phases;                         // 0xD8(0x10)(InstancedReference, ContainsInstancedReference)

	static class UClass* StaticClass();
	static class UGame_StormController_storm_controller_component* GetDefaultObj();

	void _L_2fFortnite_2ecom_2fGame_2fStormController_2fstorm__controller__component_N_RsetBattleRoyalePhases(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, const TArray<class UGame_StormController_storm_phase*>& _ExprResult_0, class UGame_StormController_storm_phase* _ExprResult_1, uint64 _InstancingGraph_2, const struct FSpatialMath_vector3& _ExprResult_3, TMap<FVerseStringProperty_, uint8> _ExprResultStack_4, FVerseStringProperty_ _ExprResult_5, FVerseStringProperty_ _ExprResult_6, FVerseStringProperty_ _ExprResult_7, class UGame_StormController_storm_phase* _ExprResult_8, uint64 _InstancingGraph_9, const struct FSpatialMath_vector3& _ExprResult_10, TMap<FVerseStringProperty_, uint8> _ExprResultStack_11, FVerseStringProperty_ _ExprResult_12, FVerseStringProperty_ _ExprResult_13, FVerseStringProperty_ _ExprResult_14, class UGame_StormController_storm_phase* _ExprResult_15, uint64 _InstancingGraph_16, const struct FSpatialMath_vector3& _ExprResult_17, TMap<FVerseStringProperty_, uint8> _ExprResultStack_18, FVerseStringProperty_ _ExprResult_19, FVerseStringProperty_ _ExprResult_20, FVerseStringProperty_ _ExprResult_21, class UGame_StormController_storm_phase* _ExprResult_22, uint64 _InstancingGraph_23, const struct FSpatialMath_vector3& _ExprResult_24, TMap<FVerseStringProperty_, uint8> _ExprResultStack_25, FVerseStringProperty_ _ExprResult_26, FVerseStringProperty_ _ExprResult_27, FVerseStringProperty_ _ExprResult_28, class UGame_StormController_storm_phase* _ExprResult_29, uint64 _InstancingGraph_30, const struct FSpatialMath_vector3& _ExprResult_31, TMap<FVerseStringProperty_, uint8> _ExprResultStack_32, FVerseStringProperty_ _ExprResult_33, FVerseStringProperty_ _ExprResult_34, FVerseStringProperty_ _ExprResult_35, class UGame_StormController_storm_phase* _ExprResult_36, uint64 _InstancingGraph_37, const struct FSpatialMath_vector3& _ExprResult_38, TMap<FVerseStringProperty_, uint8> _ExprResultStack_39, FVerseStringProperty_ _ExprResult_40, FVerseStringProperty_ _ExprResult_41, FVerseStringProperty_ _ExprResult_42, class UGame_StormController_storm_phase* _ExprResult_43, uint64 _InstancingGraph_44, const struct FSpatialMath_vector3& _ExprResult_45, TMap<FVerseStringProperty_, uint8> _ExprResultStack_46, FVerseStringProperty_ _ExprResult_47, FVerseStringProperty_ _ExprResult_48, FVerseStringProperty_ _ExprResult_49, class UGame_StormController_storm_phase* _ExprResult_50, uint64 _InstancingGraph_51, const struct FSpatialMath_vector3& _ExprResult_52, TMap<FVerseStringProperty_, uint8> _ExprResultStack_53, FVerseStringProperty_ _ExprResult_54, FVerseStringProperty_ _ExprResult_55, FVerseStringProperty_ _ExprResult_56, class UGame_StormController_storm_phase* _ExprResult_57, uint64 _InstancingGraph_58, const struct FSpatialMath_vector3& _ExprResult_59, TMap<FVerseStringProperty_, uint8> _ExprResultStack_60, FVerseStringProperty_ _ExprResult_61, FVerseStringProperty_ _ExprResult_62, FVerseStringProperty_ _ExprResult_63, const TArray<class UGame_StormController_storm_phase*>& _ExprResult_64, class UGame_StormController_storm_phase* _ExprResult_65, uint64 _InstancingGraph_66, const struct FSpatialMath_vector3& _ExprResult_67, TMap<FVerseStringProperty_, uint8> _ExprResultStack_68, FVerseStringProperty_ _ExprResult_69, FVerseStringProperty_ _ExprResult_70, FVerseStringProperty_ _ExprResult_71, class UGame_StormController_storm_phase* _ExprResult_72, uint64 _InstancingGraph_73, const struct FSpatialMath_vector3& _ExprResult_74, TMap<FVerseStringProperty_, uint8> _ExprResultStack_75, FVerseStringProperty_ _ExprResult_76, FVerseStringProperty_ _ExprResult_77, FVerseStringProperty_ _ExprResult_78, class UGame_StormController_storm_phase* _ExprResult_79, uint64 _InstancingGraph_80, const struct FSpatialMath_vector3& _ExprResult_81, TMap<FVerseStringProperty_, uint8> _ExprResultStack_82, FVerseStringProperty_ _ExprResult_83, FVerseStringProperty_ _ExprResult_84, FVerseStringProperty_ _ExprResult_85, class UGame_StormController_storm_phase* _ExprResult_86, uint64 _InstancingGraph_87, const struct FSpatialMath_vector3& _ExprResult_88, TMap<FVerseStringProperty_, uint8> _ExprResultStack_89, FVerseStringProperty_ _ExprResult_90, FVerseStringProperty_ _ExprResult_91, FVerseStringProperty_ _ExprResult_92, class UGame_StormController_storm_phase* _ExprResult_93, uint64 _InstancingGraph_94, const struct FSpatialMath_vector3& _ExprResult_95, TMap<FVerseStringProperty_, uint8> _ExprResultStack_96, FVerseStringProperty_ _ExprResult_97, FVerseStringProperty_ _ExprResult_98, FVerseStringProperty_ _ExprResult_99, class UGame_StormController_storm_phase* _ExprResult_100, uint64 _InstancingGraph_101, const struct FSpatialMath_vector3& _ExprResult_102, TMap<FVerseStringProperty_, uint8> _ExprResultStack_103, FVerseStringProperty_ _ExprResult_104, FVerseStringProperty_ _ExprResult_105, FVerseStringProperty_ _ExprResult_106, class UGame_StormController_storm_phase* _ExprResult_107, uint64 _InstancingGraph_108, const struct FSpatialMath_vector3& _ExprResult_109, TMap<FVerseStringProperty_, uint8> _ExprResultStack_110, FVerseStringProperty_ _ExprResult_111, FVerseStringProperty_ _ExprResult_112, FVerseStringProperty_ _ExprResult_113, class UGame_StormController_storm_phase* _ExprResult_114, uint64 _InstancingGraph_115, const struct FSpatialMath_vector3& _ExprResult_116, TMap<FVerseStringProperty_, uint8> _ExprResultStack_117, FVerseStringProperty_ _ExprResult_118, FVerseStringProperty_ _ExprResult_119, FVerseStringProperty_ _ExprResult_120, class UGame_StormController_storm_phase* _ExprResult_121, uint64 _InstancingGraph_122, const struct FSpatialMath_vector3& _ExprResult_123, TMap<FVerseStringProperty_, uint8> _ExprResultStack_124, FVerseStringProperty_ _ExprResult_125, FVerseStringProperty_ _ExprResult_126, FVerseStringProperty_ _ExprResult_127);
	void _L_2fFortnite_2ecom_2fGame_2fStormController_2fstorm__controller__component_N_Rreset(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, enum class EVerseTrue _InvokeSureResultDummy_0, FVerseFunctionProperty_ _Callee_1, const struct FTuple_L_R& _ExprResult_2, enum class EVerseTrue _InvokeSureResultDummy_3, FVerseFunctionProperty_ _Callee_4, const struct FTuple_L_R& _ExprResult_5, enum class EVerseTrue _InvokeSureResultDummy_6, FVerseFunctionProperty_ _Callee_7, const struct FTuple_L_R& _ExprResult_8, enum class EVerseTrue _InvokeSureResultDummy_9, FVerseFunctionProperty_ _Callee_10, const struct FTuple_L_R& _ExprResult_11);
	void _L_2fFortnite_2ecom_2fGame_2fStormController_2fstorm__controller__component_N_Rpause(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	uint8 _L_2fFortnite_2ecom_2fGame_2fStormController_2fstorm__controller__component_N_Rexists(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fGame_2fStormController_2fstorm__controller__component_N_Rend(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fGame_2fStormController_2fstorm__controller__component_N_Rbegin(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x68 (0x90 - 0x28)
// VerseClass VerseFortniteInternal.Game_StormController_storm_phase
class UGame_StormController_storm_phase : public UObject
{
public:
	double                                       __verse_0x4CDBEC4D_waitTime;                       // 0x28(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __verse_0xDFEF9A4E_shrinkTime;                     // 0x30(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __verse_0x96A9475A_endRadius;                      // 0x38(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __verse_0x61AAA523_endRadiusPercentage;            // 0x40(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        __verse_0x7781DBF3_damageIndex;                    // 0x48(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        __verse_0x3902DD0B_moves : 1;                      // Mask: 0x1, PropSize: 0x10x50(0x1)(InstancedReference, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_26A : 7;                                    // Fixing Bit-Field Size 
	uint8                                        Pad_4310[0x7];                                     // Fixing Size After Last Property 
	double                                       __verse_0xA376E20D_minMovementDistance;            // 0x58(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __verse_0x2C327F1D_maxMovementDistance;            // 0x60(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __verse_0xDA5EE7C4_minMovementDistancePercentage;  // 0x68(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       __verse_0x7B63CDBA_maxMovementDistancePercentage;  // 0x70(0x8)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FSpatialMath_vector3                  __verse_0xD6F5A7B7_endLocation;                    // 0x78(0x18)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)

	static class UClass* StaticClass();
	static class UGame_StormController_storm_phase* GetDefaultObj();

	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x88 (0xF0 - 0x68)
// VerseClass VerseFortniteInternal.Game_team_stat_values
class UGame_team_stat_values : public UGame_stat_container
{
public:
	FVerseFunctionProperty_                      __verse_0xE0516D12__L_2fFortnite_2ecom_2fGame_2fteam__stat__values_N_RSetPlayerStat_L_Nplayer_M_Nint_M_Nint_R; // 0x68(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xFFA43169__L_2fFortnite_2ecom_2fGame_2fteam__stat__values_N_RGetPlayerStat_L_Nplayer_M_Nint_R; // 0x78(0x10)(InstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      __verse_0xFE7BA9E0__L_2fFortnite_2ecom_2fGame_2fteam__stat__values_N_RIncrementPlayerStat_L_Nplayer_M_Nint_M_Nint_R; // 0x88(0x10)(InstancedReference, HasGetValueTypeHash)
	uint8                                        Pad_4318[0x50];                                    // Fixing Size After Last Property 
	struct FGame_Player_player_team              __verse_0x555B2F95_Team;                           // 0xE8(0x4)(ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor)
	uint8                                        Pad_4319[0x4];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UGame_team_stat_values* GetDefaultObj();

	void _L_2fFortnite_2ecom_2fGame_2fteam__stat__values_N_RSetPlayerStat_L_Nplayer_M_Nint_M_Nint_R(const struct FTuple_Lplayer_Mint_Mint_R& __verse_0xB2CDDD72_Argument);
	uint8 _L_2fFortnite_2ecom_2fGame_2fteam__stat__values_N_RIncrementPlayerStat_L_Nplayer_M_Nint_M_Nint_R(const struct FTuple_Lplayer_Mint_Mint_R& __verse_0xB2CDDD72_Argument);
	int64 _L_2fFortnite_2ecom_2fGame_2fteam__stat__values_N_RGetPlayerStat_L_Nplayer_M_Nint_R(const struct FTuple_Lplayer_Mint_R& __verse_0xB2CDDD72_Argument);
	void _InitInstance();
	void _Block();
	void _InitCDO();
};

// 0x0 (0x28 - 0x28)
// VerseClass VerseFortniteInternal.Game_VerseFortniteHacks
class UGame_VerseFortniteHacks : public UObject
{
public:

	static class UClass* StaticClass();
	static class UGame_VerseFortniteHacks* GetDefaultObj();

	void _L_2fFortnite_2ecom_2fGame_2fVerseFortniteHacks_N_RsetAutoRespawnEnabled_L_Ncomponent_M_Nlogic_R(const struct FTuple_Lcomponent_Mlogic_R& __verse_0xB2CDDD72_Argument);
	void _L_2fFortnite_2ecom_2fGame_2fVerseFortniteHacks_N_RrespawnPlayer_L_Nplayer__component_M_Nplayer__start__component_R(const struct FTuple_Lplayer__component_Mplayer__start__component_R& __verse_0xB2CDDD72_Argument);
	TArray<class UEntityComponent*> _L_2fFortnite_2ecom_2fGame_2fVerseFortniteHacks_N_RgetAllComponentsOfType_L_Ncomponent_M_NType_20where_20Type_R(const struct FTuple_Lcomponent_Mcomponent_R& __verse_0xB2CDDD72_Argument);
	int64 _L_2fFortnite_2ecom_2fGame_2fVerseFortniteHacks_N_RGetPawnCollisionEntityID_L_Nplayer__component_R(class USimulation_player_component* __verse_0xB2CDDD72_Argument);
	void _InitCDO();
};

// 0x18 (0x158 - 0x140)
// VerseClass VerseFortniteInternal.task_Game_fort_playspace_component$__WaitForPlayerEliminated
class UTask_Game_fort_playspace_component___WaitForPlayerEliminated : public UConcurrency_task
{
public:
	class UGame_fort_playspace_component*        _Self;                                             // 0x140(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x148(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_4347[0x7];                                     // Fixing Size After Last Property 
	class UGame_player_eliminated_result*        _RetVal;                                           // 0x150(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UTask_Game_fort_playspace_component___WaitForPlayerEliminated* GetDefaultObj();

	int64 Update();
};

}


