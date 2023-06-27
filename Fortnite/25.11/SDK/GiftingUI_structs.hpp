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

enum class EGiftingPresentationMode : uint8
{
	ConfirmPurchase                = 0,
	WrapOptions                    = 1,
	GiftingProcess                 = 2,
	GiftingError                   = 3,
	GiftConfirmed                  = 4,
	None                           = 5,
	EGiftingPresentationMode_MAX   = 6,
};

enum class EGiftingPricePresentationMode : uint8
{
	MtxCurrency                    = 0,
	RealMoney                      = 1,
	Hidden                         = 2,
	EGiftingPricePresentationMode_MAX = 3,
};

enum class EFilterType : uint8
{
	All                            = 0,
	Party                          = 1,
	EFilterType_MAX                = 2,
};

enum class EGiftingScreenPresentationMode : uint8
{
	ItemList                       = 0,
	NoContent                      = 1,
	EGiftingScreenPresentationMode_MAX = 2,
};

enum class ERecipientPresentationMode : uint8
{
	Loading                        = 0,
	GiftPrice                      = 1,
	AlreadyOwned                   = 2,
	Unavailable                    = 3,
	ERecipientPresentationMode_MAX = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x88 (0x88 - 0x0)
// ScriptStruct GiftingUI.FortGiftingRecipientState
struct FFortGiftingRecipientState
{
public:
	struct FCatalogItemPrice                     Price;                                             // 0x0(0x50)(NativeAccessSpecifierPublic)
	TArray<struct FItemQuantity>                 Items;                                             // 0x50(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_825E[0x28];                                    // Fixing Size Of Struct..
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
