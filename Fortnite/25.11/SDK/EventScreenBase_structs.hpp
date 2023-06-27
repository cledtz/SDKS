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

enum class EEventScreenView : uint8
{
	None                           = 0,
	LandingPage                    = 1,
	RewardPreview                  = 2,
	MoreInfo                       = 3,
	PurchaseLevels                 = 4,
	PurchasePremiumTrack           = 5,
	LoadError                      = 6,
	EEventScreenView_MAX           = 7,
};

enum class EEventScreenRewardPreviewType : uint8
{
	None                           = 0,
	RewardTrack                    = 1,
	SpecialItem                    = 2,
	SpecialPremiumItem             = 3,
	EEventScreenRewardPreviewType_MAX = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x80 (0x80 - 0x0)
// ScriptStruct EventScreenBase.EventItemOverride
struct FEventItemOverride
{
public:
	TSoftObjectPtr<class UFortItemDefinition>    ItemDefinition;                                    // 0x0(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class UTexture2D>             CustomItemTexture;                                 // 0x28(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class UTexture2D>             CustomItemTextureMobile;                           // 0x50(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsDoubleWidth;                                    // 0x78(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_405B[0x7];                                     // Fixing Size Of Struct..
};

// 0x20 (0x20 - 0x0)
// ScriptStruct EventScreenBase.EventScreenTrackData
struct FEventScreenTrackData
{
public:
	struct FLinearColor                          TrackColorPrimary;                                 // 0x0(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          TrackColorSecondary;                               // 0x10(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct EventScreenBase.EventScreenMoreInfoGroup
struct FEventScreenMoreInfoGroup
{
public:
	class FText                                  Header;                                            // 0x0(0x18)(NativeAccessSpecifierPublic)
	class FText                                  Body;                                              // 0x18(0x18)(NativeAccessSpecifierPublic)
	class FString                                IconURL;                                           // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct EventScreenBase.EventScreenCMSResourceGroupOverride
struct FEventScreenCMSResourceGroupOverride
{
public:
	int32                                        ResourceValue;                                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_405C[0x4];                                     // Fixing Size After Last Property..
	class FString                                KeyArtOverrideURL;                                 // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2A8 (0x2A8 - 0x0)
// ScriptStruct EventScreenBase.EventScreenCMSData
struct FEventScreenCMSData
{
public:
	class FString                                EventCMSId;                                        // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  EventName;                                         // 0x10(0x18)(NativeAccessSpecifierPublic)
	class FText                                  EventDescription;                                  // 0x28(0x18)(NativeAccessSpecifierPublic)
	class FText                                  ResourceHeader;                                    // 0x40(0x18)(NativeAccessSpecifierPublic)
	class FText                                  StarterHeader;                                     // 0x58(0x18)(NativeAccessSpecifierPublic)
	class FText                                  CompletionHeader;                                  // 0x70(0x18)(NativeAccessSpecifierPublic)
	class FText                                  EventCTA;                                          // 0x88(0x18)(NativeAccessSpecifierPublic)
	class FText                                  EventCTACompleted;                                 // 0xA0(0x18)(NativeAccessSpecifierPublic)
	class FText                                  HeaderCTA;                                         // 0xB8(0x18)(NativeAccessSpecifierPublic)
	class FText                                  ItemShopCallout;                                   // 0xD0(0x18)(NativeAccessSpecifierPublic)
	class FString                                CTAIconURL;                                        // 0xE8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                KeyArtURL;                                         // 0xF8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  MoreInfoHeader;                                    // 0x108(0x18)(NativeAccessSpecifierPublic)
	class FText                                  MoreInfoSubHeader;                                 // 0x120(0x18)(NativeAccessSpecifierPublic)
	class FText                                  MoreInfoLegal;                                     // 0x138(0x18)(NativeAccessSpecifierPublic)
	TArray<struct FEventScreenMoreInfoGroup>     MoreInfoGroups;                                    // 0x150(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	class FText                                  PurchaseLegal;                                     // 0x160(0x18)(NativeAccessSpecifierPublic)
	class FText                                  RewardTrackLegal;                                  // 0x178(0x18)(NativeAccessSpecifierPublic)
	class FString                                ItemShopOfferId;                                   // 0x190(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  PremiumUpsellUnownedHeader;                        // 0x1A0(0x18)(NativeAccessSpecifierPublic)
	class FText                                  PremiumUpsellUnownedBody;                          // 0x1B8(0x18)(NativeAccessSpecifierPublic)
	class FText                                  PremiumUpsellOwnedHeader;                          // 0x1D0(0x18)(NativeAccessSpecifierPublic)
	class FText                                  PremiumUpsellOwnedBody;                            // 0x1E8(0x18)(NativeAccessSpecifierPublic)
	class FString                                PremiumUpsellIconURL;                              // 0x200(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  PurchasePremiumTrackHeader;                        // 0x210(0x18)(NativeAccessSpecifierPublic)
	TArray<class FText>                          PurchasePremiumTrackBodyList;                      // 0x228(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	class FText                                  InspectSpecialItemUnowned;                         // 0x238(0x18)(NativeAccessSpecifierPublic)
	class FText                                  InspectSpecialItemOwned;                           // 0x250(0x18)(NativeAccessSpecifierPublic)
	class FText                                  InspectSpecialPremiumItemUnowned;                  // 0x268(0x18)(NativeAccessSpecifierPublic)
	class FText                                  InspectSpecialPremiumItemOwned;                    // 0x280(0x18)(NativeAccessSpecifierPublic)
	TArray<struct FEventScreenCMSResourceGroupOverride> ResourceGroupOverrides;                            // 0x298(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct EventScreenBase.EventScreenCMSGroup
struct FEventScreenCMSGroup
{
public:
	TArray<struct FEventScreenCMSData>           EventScreens;                                      // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
