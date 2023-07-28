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

// 0x9 (0x501 - 0x4F8)
// BlueprintGeneratedClass ItemPreviewPedestal.ItemPreviewPedestal_C
class UItemPreviewPedestal_C : public UFortCameraTargetPedestal
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x4F8(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	bool                                         Floor_Enabled;                                     // 0x500(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ItemPreviewPedestal_C");
		return Clss;
	}

	void Remove_Floor(class UFortItemPreviewActor* Preview, class UWrapPreview_C* K2Node_DynamicCast_AsWrap_Preview, bool K2Node_DynamicCast_bSuccess, class UItemOnPawnPreview_C* K2Node_DynamicCast_AsItem_on_Pawn_Preview, bool K2Node_DynamicCast_bSuccess_1);
	void OnItemDisplayed(enum class EFortItemType ItemType);
	void ExecuteUbergraph_ItemPreviewPedestal(int32 EntryPoint, enum class EFortItemType K2Node_Event_ItemType);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
