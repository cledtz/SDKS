#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x28 - 0x28)
// Class WidgetFunctionLibrary.WidgetFunctionLibrary
class UWidgetFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("WidgetFunctionLibrary");
		return Clss;
	}

	class UWidget* GetSlotContent(class UPanelSlot* Slot);
	class UWidget* GetRootWidget(class UUserWidget* Widget);
	TArray<class UWidget*> GetAllWidgetsInTree(class UUserWidget* Widget);
	void DrawLineUnder(struct FPaintContext& Context, const struct FVector2D& PositionA, const struct FVector2D& PositionB, const struct FLinearColor& Tint, bool bAntiAlias, float Thickness);
	bool CheckWidgetIsActive(class UWidget* Widget);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
