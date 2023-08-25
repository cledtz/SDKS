#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x4E8 - 0x498)
// Class StoreSelectionUI.FortStoreSelectionData
class UFortStoreSelectionData : public UFortGameFeatureData
{
public:
	TSoftClassPtr<class UFortStoreSelectionScreen> StoreSelectionScreenClass;                         // 0x498(0x20)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  RegularStoreSelectedText;                          // 0x4B8(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  NonRegularStoreSelectedText;                       // 0x4D0(0x18)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UFortStoreSelectionData* GetDefaultObj();

};

// 0x20 (0x14E0 - 0x14C0)
// Class StoreSelectionUI.FortStoreSelectionOptionEntry
class UFortStoreSelectionOptionEntry : public UCommonButtonLegacy
{
public:
	class UFortLazyImage*                        Image_Icon;                                        // 0x14C0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_Description;                                  // 0x14C8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_Price;                                        // 0x14D0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonRichTextBlock*                  RichText_Label;                                    // 0x14D8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortStoreSelectionOptionEntry* GetDefaultObj();

};

// 0x3B8 (0x8D8 - 0x520)
// Class StoreSelectionUI.FortStoreSelectionScreen
class UFortStoreSelectionScreen : public UCommonActivatablePanelLegacy
{
public:
	uint8                                        Pad_3AC0[0x8];                                     // Fixing Size After Last Property 
	class UCommonButtonGroupLegacy*              EntryBoxButtonGroup;                               // 0x528(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortRealMoneyOffer*                   StoreOffer;                                        // 0x530(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonLoadGuard*                      StoreOfferLoadGuard;                               // 0x538(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_Header;                                       // 0x540(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDynamicEntryBox*                      DynamicEntryBox_Options;                           // 0x548(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonLegacy*                   Button_Continue;                                   // 0x550(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonLegacy*                   Button_Cancel;                                     // 0x558(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonRichTextBlock*                  RichText_InitiallySelectedHint;                    // 0x560(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TScriptInterface<class UPurchaseChoiceRequesterInterface> PurchaseChoiceOwner;                               // 0x568(0x10)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FItemData>                     StoreOptions;                                      // 0x578(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class UFortMtxOfferData>      SoftDisplayAsset;                                  // 0x588(0x20)(Transient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FItemData                             ItemData[0xC];                                     // 0x5A8(0x300)(Edit, NativeAccessSpecifierPrivate)
	class FText                                  OptionalLabels[0x2];                               // 0x8A8(0x30)(Edit, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UFortStoreSelectionScreen* GetDefaultObj();

};

}


