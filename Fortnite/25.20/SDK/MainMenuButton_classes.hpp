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

// 0x11 (0x1601 - 0x15F0)
// WidgetBlueprintGeneratedClass MainMenuButton.MainMenuButton_C
class UMainMenuButton_C : public UFortMainMenuButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x15F0(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UImage*                                Image_Icon_RightSide;                              // 0x15F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	bool                                         ShowExternalLinkIcon;                              // 0x1600(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MainMenuButton_C");
		return Clss;
	}

	void UpdateRightSideIcon(TSoftObjectPtr<class UMaterialInterface> SoftMaterial);
	void PreConstruct(bool IsDesignTime);
	void UpdateRightSideIconColor(const struct FLinearColor& Color);
	void BP_OnHovered();
	void BP_OnSelected();
	void BP_OnUnhovered();
	void ExecuteUbergraph_MainMenuButton(int32 EntryPoint, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, TSoftObjectPtr<class UMaterialInterface> K2Node_CustomEvent_SoftMaterial, bool K2Node_Event_IsDesignTime, const struct FLinearColor& K2Node_CustomEvent_Color, enum class ESlateVisibility K2Node_Select_Default);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
