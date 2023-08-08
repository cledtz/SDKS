#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x58 (0x578 - 0x520)
// Class StoreSelectionUI.FortStoreSelectionData
class UFortStoreSelectionData : public UFortGameFeatureData
{
public:
	TSoftClassPtr<class UFortStoreSelectionScreen> StoreSelectionScreenClass;                         // 0x520(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  RegularStoreSelectedText;                          // 0x548(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  NonRegularStoreSelectedText;                       // 0x560(0x18)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortStoreSelectionData");
		return Clss;
	}

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

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortStoreSelectionOptionEntry");
		return Clss;
	}

};

// 0x420 (0x950 - 0x530)
// Class StoreSelectionUI.FortStoreSelectionScreen
class UFortStoreSelectionScreen : public UCommonActivatablePanelLegacy
{
public:
	uint8                                        Pad_5630[0x8];                                     // Fixing Size After Last Property
	class UCommonButtonGroupLegacy*              EntryBoxButtonGroup;                               // 0x538(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortRealMoneyOffer*                   StoreOffer;                                        // 0x540(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonLoadGuard*                      StoreOfferLoadGuard;                               // 0x548(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      Text_Header;                                       // 0x550(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDynamicEntryBox*                      DynamicEntryBox_Options;                           // 0x558(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonLegacy*                   Button_Continue;                                   // 0x560(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonLegacy*                   Button_Cancel;                                     // 0x568(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonRichTextBlock*                  RichText_InitiallySelectedHint;                    // 0x570(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TScriptInterface<class UPurchaseChoiceRequesterInterface> PurchaseChoiceOwner;                               // 0x578(0x10)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FItemData>                     StoreOptions;                                      // 0x588(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class UFortMtxOfferData>      SoftDisplayAsset;                                  // 0x598(0x28)(Transient, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FItemData                             ItemData[0xC];                                     // 0x5C0(0x360)(Edit, NativeAccessSpecifierPrivate)
	class FText                                  OptionalLabels[0x2];                               // 0x920(0x30)(Edit, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortStoreSelectionScreen");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
