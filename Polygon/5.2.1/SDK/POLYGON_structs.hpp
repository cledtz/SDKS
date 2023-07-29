#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EAccrualTypeGameScore : uint8
{
	NONE                           = 0,
	KILL                           = 1,
	HEADSHOT                       = 2,
	KILL_ASSIST                    = 3,
	KILL_CONQUEST_DEFENCE          = 4,
	KILL_CONQUEST_ATTACK           = 5,
	CONQUEST_CAPTURE               = 6,
	CONQUEST_CAPTURING             = 7,
	EAccrualTypeGameScore_MAX      = 8,
};

enum class EModifiedData : uint8
{
	NONE                           = 0,
	WEAPONS                        = 1,
	GEAR                           = 2,
	STATISTICS                     = 3,
	EModifiedData_MAX              = 4,
};

enum class EPenetrationTraceType : uint8
{
	BACK_TRACE                     = 0,
	BY_COMPONENT                   = 1,
	TWO_SIDED_GEOMETRY             = 2,
	EPenetrationTraceType_MAX      = 3,
};

enum class EAtmosphereType : uint8
{
	CONSTANT                       = 0,
	CURVE                          = 1,
	EARTH                          = 2,
	EAtmosphereType_MAX            = 3,
};

enum class ECameraViewMode : uint8
{
	FIRST_PERSON                   = 0,
	THIRD_PERSON                   = 1,
	ECameraViewMode_MAX            = 2,
};

enum class ECharacterPoseState : uint8
{
	NONE                           = 0,
	STAND                          = 1,
	CROUCN                         = 2,
	LIE                            = 3,
	AIR                            = 4,
	ECharacterPoseState_MAX        = 5,
};

enum class EControlPoint : uint8
{
	NONE_                          = 0,
	ALPHA_                         = 1,
	BRAVO_                         = 2,
	CHARLIE_                       = 3,
	DELTA_                         = 4,
	ECHO_                          = 5,
	FOXTROT_                       = 6,
	EControlPoint_MAX              = 7,
};

enum class EPG_GameState : uint8
{
	NONE                           = 0,
	WAITING_PLAYERS                = 1,
	PAUSE                          = 2,
	COUNTDOWN                      = 3,
	GAME                           = 4,
	ENDED                          = 5,
	EPG_MAX                        = 6,
};

enum class EGunClass : uint8
{
	NONE                           = 0,
	ASSAULT                        = 1,
	SMG                            = 2,
	MARKSMAN                       = 3,
	LMG                            = 4,
	SHOTGUN                        = 5,
	SNIPER                         = 6,
	PISTOL                         = 7,
	REVOLVER                       = 8,
	EGunClass_MAX                  = 9,
};

enum class EGunModuleType : uint8
{
	NONE                           = 0,
	OPTIC                          = 1,
	BARREL                         = 2,
	UNDERBARREL                    = 3,
	MAGAZINE                       = 4,
	ACCESSORY                      = 5,
	SKIN                           = 6,
	STRAP                          = 7,
	EGunModuleType_MAX             = 8,
};

enum class EGunShootingType : uint8
{
	BOLT                           = 0,
	SEMI_AUTO                      = 1,
	AUTO                           = 2,
	EGunShootingType_MAX           = 3,
};

enum class EGunSlot : uint8
{
	PRIMARY                        = 0,
	SECONDARY                      = 1,
	EGunSlot_MAX                   = 2,
};

enum class EStaminaState : uint8
{
	IDLE                           = 0,
	INCREASE                       = 1,
	DECREASE                       = 2,
	EStaminaState_MAX              = 3,
};

enum class EItemRareType : uint8
{
	NONE                           = 0,
	COMMON                         = 1,
	RARE                           = 2,
	EPIC                           = 3,
	LEGENDARY                      = 4,
	MYTHICAL                       = 5,
	RELIC                          = 6,
	EItemRareType_MAX              = 7,
};

enum class EItemType : uint8
{
	NONE                           = 0,
	GUN                            = 1,
	GRENADE                        = 2,
	MODULE                         = 3,
	WATCH                          = 4,
	EItemType_MAX                  = 5,
};

enum class EGameMode : uint8
{
	NONE                           = 0,
	CONQUEST                       = 1,
	KING_OF_HILL                   = 2,
	EGameMode_MAX                  = 3,
};

enum class EMessageType : uint8
{
	ALL                            = 0,
	TEAM                           = 1,
	SQUAD                          = 2,
	PRIVATE                        = 3,
	SYSTEM                         = 4,
	EMessageType_MAX               = 5,
};

enum class EPlayerAction : uint8
{
	NONE                           = 0,
	RELOADING                      = 1,
	BOLTING                        = 2,
	CHANGING                       = 3,
	THROW_GRENADE                  = 4,
	EPlayerAction_MAX              = 5,
};

enum class EPlayerDeathType : uint8
{
	NONE                           = 0,
	HEADSHOT                       = 1,
	GRENADE                        = 2,
	EPlayerDeathType_MAX           = 3,
};

enum class ETeam : uint8
{
	NONE                           = 0,
	NOBODY                         = 1,
	ALPHA                          = 2,
	BRAVO                          = 3,
	ETeam_MAX                      = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct POLYGON.ScoreInfoBlueprint
struct FScoreInfoBlueprint
{
public:
	int32                                        Score;                                             // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAccrualTypeGameScore             ScoreType;                                         // 0x4(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2199[0x3];                                     // Fixing Size After Last Property
	class UObject*                               Giver;                                             // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x34 (0x34 - 0x0)
// ScriptStruct POLYGON.BallisticMaterialResponseMapEntry
struct FBallisticMaterialResponseMapEntry
{
public:
	enum class EPenetrationTraceType             PenTraceType;                                      // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         NeverPenetrate;                                    // 0x1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21A3[0x2];                                     // Fixing Size After Last Property
	float                                        PenetrationDepthMultiplier;                        // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PenetrationNormalization;                          // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PenetrationNormalizationGrazing;                   // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PenetrationEntryAngleSpread;                       // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PenetrationExitAngleSpread;                        // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         NeverRicochet;                                     // 0x18(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21A8[0x3];                                     // Fixing Size After Last Property
	float                                        RicochetProbabilityMultiplier;                     // 0x1C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RicochetRestitution;                               // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RicochetRestitutionInfluence;                      // 0x24(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RicochetFriction;                                  // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RicochetFrictionInfluence;                         // 0x2C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RicochetSpread;                                    // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB8 (0xC0 - 0x8)
// ScriptStruct POLYGON.BattlePassReward
struct FBattlePassReward : public FTableRowBase
{
public:
	int32                                        Level;                                             // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RequiredExperience;                                // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsFree;                                           // 0x10(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21AD[0x3];                                     // Fixing Size After Last Property
	class FName                                  ID;                                                // 0x14(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Class;                                             // 0x1C(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21AF[0x4];                                     // Fixing Size After Last Property
	class FText                                  Name;                                              // 0x28(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	int32                                        Number;                                            // 0x40(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21B0[0x4];                                     // Fixing Size After Last Property
	TSoftObjectPtr<class UTexture2D>             Image;                                             // 0x48(0x30)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             Icon;                                              // 0x78(0x30)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Color;                                             // 0xA8(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EItemRareType                     Rare;                                              // 0xB8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21B1[0x7];                                     // Fixing Size Of Struct
};

// 0x20 (0x20 - 0x0)
// ScriptStruct POLYGON.BeaconSlotRequest
struct FBeaconSlotRequest
{
public:
	class UPG_BeaconClient*                      BeaconClient;                                      // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FUniqueNetIdRepl>              UserIds;                                           // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_21B6[0x8];                                     // Fixing Size Of Struct
};

// 0x20 (0x20 - 0x0)
// ScriptStruct POLYGON.GameChatMessage
struct FGameChatMessage
{
public:
	class UPG_PlayerState_Game*                  Sender;                                            // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EMessageType                      MessageType;                                       // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21B8[0x7];                                     // Fixing Size After Last Property
	class FString                                Message;                                           // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct POLYGON.DataTableReference
struct FDataTableReference : public FTableRowBase
{
public:
	class UDataTable*                            DataTable;                                         // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct POLYGON.GunModuleInfo
struct FGunModuleInfo
{
public:
	TSubclassOf<class UItem_Module_General>      ModuleClass;                                       // 0x0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class UItem_Module_General>> Parents;                                           // 0x8(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class UItem_Module_General>> Children;                                          // 0x18(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	int32                                        RequiredExperience;                                // 0x28(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RequiredLevel;                                     // 0x2C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RequiredCredits;                                   // 0x30(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RequiredCrowns;                                    // 0x34(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDataContainerObjectWrapper           CustomData;                                        // 0x38(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct POLYGON.PlayerAssist
struct FPlayerAssist
{
public:
	class UPG_PlayerState_Game*                  PlayerAssist;                                      // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class UActor*, int32>                   DamageCausers;                                     // 0x8(0x50)(NativeAccessSpecifierPublic)
	struct FTimerHandle                          TimerResetAssist;                                  // 0x58(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x10 - 0x8)
// ScriptStruct POLYGON.ItemEntry
struct FItemEntry : public FTableRowBase
{
public:
	TSubclassOf<class UItem_General>             Item;                                              // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct POLYGON.GunShot
struct FGunShot
{
public:
	struct FVector_NetQuantizeNormal             ShotDirection;                                     // 0x0(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        RandomSeed;                                        // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21C1[0x7];                                     // Fixing Size Of Struct
};

// 0x28 (0x28 - 0x0)
// ScriptStruct POLYGON.GunHitOnCharacter
struct FGunHitOnCharacter
{
public:
	struct FVector_NetQuantize                   Location;                                          // 0x0(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class UActor>                 Actor;                                             // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BoneIndex;                                         // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPhysicalSurface                  PhysSurfaceType;                                   // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21C2[0x6];                                     // Fixing Size Of Struct
};

// 0x40 (0x48 - 0x8)
// ScriptStruct POLYGON.LevelInfo
struct FLevelInfo : public FTableRowBase
{
public:
	class FName                                  LevelID;                                           // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Level;                                             // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ProgressRequired;                                  // 0x14(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             LevelIcon;                                         // 0x18(0x30)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xD8 (0xE0 - 0x8)
// ScriptStruct POLYGON.MapInfo
struct FMapInfo : public FTableRowBase
{
public:
	class FName                                  MapRowName;                                        // 0x8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MapName;                                           // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  MapDisplayName;                                    // 0x20(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	TArray<enum class EGameMode>                 GameModes;                                         // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        MaxPlayers;                                        // 0x48(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxScoreForWin;                                    // 0x4C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        HealthProtectionDuration;                          // 0x50(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GrenadeDamageRadiusMultiplier;                     // 0x54(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             MapPreview;                                        // 0x58(0x30)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             MinimapImage;                                      // 0x88(0x30)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Dimension;                                         // 0xB8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21C7[0x4];                                     // Fixing Size After Last Property
	struct FVector                               CameraPosition;                                    // 0xC0(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CameraRotate;                                      // 0xD8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsNew;                                            // 0xDC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsDevelopment;                                     // 0xDD(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21C8[0x2];                                     // Fixing Size Of Struct
};

// 0x20 (0x20 - 0x0)
// ScriptStruct POLYGON.PlayerId
struct FPlayerId
{
public:
	class FString                                PlayerMasterId;                                    // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                PlayerTitleId;                                     // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct POLYGON.ScoreInfo
struct FScoreInfo
{
public:
	uint16                                       Score;                                             // 0x0(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAccrualTypeGameScore             ScoreType;                                         // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_21CB[0x5];                                     // Fixing Size After Last Property
	class UObject*                               Giver;                                             // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
