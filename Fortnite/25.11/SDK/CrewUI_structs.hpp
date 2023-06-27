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

enum class EBattlePassCrewContentState : uint8
{
	BattlePass                     = 0,
	Crew                           = 1,
	CrewSubscribed                 = 2,
	EBattlePassCrewContentState_MAX = 3,
};

enum class EFortProgressiveContentInterfaceCloseReason : uint8
{
	Normal                         = 0,
	SubscriptionPurchased          = 1,
	EFortProgressiveContentInterfaceCloseReason_MAX = 2,
};

enum class EFortProgressiveContentType : uint8
{
	ProgressiveTableOfContentsScreen = 0,
	ProgressiveItemScreen          = 1,
	EFortProgressiveContentType_MAX = 2,
};

enum class EBattlePassPurchaseButtonCurrencyType : uint8
{
	None                           = 0,
	Mtx                            = 1,
	RealMoney                      = 2,
	EBattlePassPurchaseButtonCurrencyType_MAX = 3,
};

enum class EBattlePassPurchaseState : uint8
{
	Purchase                       = 0,
	Confirm                        = 1,
	EBattlePassPurchaseState_MAX   = 2,
};

enum class ECrewPurchaseButtonState : uint8
{
	None                           = 0,
	Purchase                       = 1,
	Rejoin                         = 2,
	ECrewPurchaseButtonState_MAX   = 3,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x20 (0x20 - 0x0)
// ScriptStruct CrewUI.CrewSubscriptionContentTabData
struct FCrewSubscriptionContentTabData
{
public:
	class FText                                  TabName;                                           // 0x0(0x18)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	enum class ESubscriptionContentTab           TabType;                                           // 0x18(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8239[0x7];                                     // Fixing Size Of Struct..
};

// 0x68 (0x68 - 0x0)
// ScriptStruct CrewUI.FortProgressiveVariant
struct FFortProgressiveVariant
{
public:
	TArray<struct FCosmeticVariantInfo>          DefaultVariantPreviewOverrides;                    // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterialInterface>     TileMaterial;                                      // 0x10(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHidden;                                           // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowPreviewStyles;                               // 0x39(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_823A[0x6];                                     // Fixing Size After Last Property..
	TSoftObjectPtr<class UFortVariantTokenType>  VariantToken;                                      // 0x40(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct CrewUI.FortProgressiveStageOverrideDisplayData
struct FFortProgressiveStageOverrideDisplayData
{
public:
	TArray<struct FCosmeticVariantInfo>          DefaultVariantPreviewOverrides;                    // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	class FText                                  DisplayName;                                       // 0x10(0x18)(Edit, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterialInterface>     TileMaterial;                                      // 0x28(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowPreviewStyles;                               // 0x50(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_823B[0x7];                                     // Fixing Size Of Struct..
};

// 0x70 (0x70 - 0x0)
// ScriptStruct CrewUI.FortProgressiveUIStage
struct FFortProgressiveUIStage
{
public:
	TArray<struct FFortProgressiveVariant>       Variants;                                          // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bUseOverrideDisplayData;                           // 0x10(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_823C[0x7];                                     // Fixing Size After Last Property..
	struct FFortProgressiveStageOverrideDisplayData OverrideDisplayData;                               // 0x18(0x58)(Edit, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct CrewUI.FortProgressiveSet
struct FFortProgressiveSet
{
public:
	class FString                                FulfillmentId;                                     // 0x0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  SetName;                                           // 0x10(0x18)(Edit, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterialInterface>     TileMaterial;                                      // 0x28(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FFortProgressiveUIStage>       Stages;                                            // 0x50(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct CrewUI.FortProgressiveSetVariantData
struct FFortProgressiveSetVariantData
{
public:
	class UFortVariantTokenType*                 VariantToken;                                      // 0x0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_823D[0x10];                                    // Fixing Size Of Struct..
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
