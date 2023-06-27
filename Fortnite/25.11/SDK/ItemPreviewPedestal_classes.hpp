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

// 0x9 (0x4F9 - 0x4F0)
// BlueprintGeneratedClass ItemPreviewPedestal.ItemPreviewPedestal_C
class AItemPreviewPedestal_C : public AFortCameraTargetPedestal
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         Floor_Enabled;                                     // 0x4F8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ItemPreviewPedestal_C");
		return Clss;
	}

	void Remove_Floor(class AFortItemPreviewActor* Preview, class AWrapPreview_C* K2Node_DynamicCast_AsWrap_Preview, bool K2Node_DynamicCast_bSuccess, class AItemOnPawnPreview_C* K2Node_DynamicCast_AsItem_on_Pawn_Preview, bool K2Node_DynamicCast_bSuccess_1);
	void OnItemDisplayed(enum class EFortItemType ItemType);
	void ExecuteUbergraph_ItemPreviewPedestal(int32 EntryPoint, enum class EFortItemType K2Node_Event_ItemType);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
