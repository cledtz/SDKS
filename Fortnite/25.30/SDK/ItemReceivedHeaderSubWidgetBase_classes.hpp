#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x31 (0x2F1 - 0x2C0)
// WidgetBlueprintGeneratedClass ItemReceivedHeaderSubWidgetBase.ItemReceivedHeaderSubWidgetBase_C
class UItemReceivedHeaderSubWidgetBase_C : public UItemReceivedHeaderBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2C0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UFortGiftBoxItem*                      GiftBoxItem_BP;                                    // 0x2C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)
	class FString                                FromUserName_BP;                                   // 0x2D0(0x10)(Edit, BlueprintVisible, ZeroConstructor, ExposeOnSpawn, HasGetValueTypeHash)
	TArray<struct FFortReceivedItemLootInfo>     ItemDefs;                                          // 0x2E0(0x10)(Edit, BlueprintVisible)
	bool                                         bSelfGift;                                         // 0x2F0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, ExposeOnSpawn, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ItemReceivedHeaderSubWidgetBase_C");
		return Clss;
	}

	void SetBlueprintGiftBoxItem(class UFortGiftBoxItem* GiftBox, const class FString& FromUser, TArray<struct FFortReceivedItemLootInfo>& ItemDefs, bool bSelfGift);
	void InitFromGiftBoxItem_BP();
	void ExecuteUbergraph_ItemReceivedHeaderSubWidgetBase(int32 EntryPoint);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
