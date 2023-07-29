#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x308 - 0x2F0)
// WidgetBlueprintGeneratedClass DefaultKeyLabel.DefaultKeyLabel_C
class UDefaultKeyLabel_C : public UKeyLabel
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x2F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                IconImage;                                         // 0x2F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UTextBlock*                            LabelText;                                         // 0x300(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DefaultKeyLabel_C");
		return Clss;
	}

	void UpdateKeyLabel();
	void ExecuteUbergraph_DefaultKeyLabel(int32 EntryPoint, class FText CallFunc_GetDisplayName_ReturnValue, bool CallFunc_HasIcon_ReturnValue, const struct FSlateBrush& CallFunc_GetIconBrush_ReturnValue, enum class ESlateVisibility CallFunc_GetIconVisibility_ReturnValue, enum class ESlateVisibility CallFunc_GetDisplayNameVisibility_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
