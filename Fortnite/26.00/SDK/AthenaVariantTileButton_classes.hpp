#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x1578 - 0x1560)
// WidgetBlueprintGeneratedClass AthenaVariantTileButton.AthenaVariantTileButton_C
class UAthenaVariantTileButton_C : public UFortVariantTileButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1560(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      WarningPulse;                                      // 0x1568(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Image_Conflict;                                    // 0x1570(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UAthenaVariantTileButton_C* GetDefaultObj();

	void OnListItemObjectSet(class UObject* ListItemObject);
	void BP_OnClicked();
	void Construct();
	void ExecuteUbergraph_AthenaVariantTileButton(int32 EntryPoint, bool Temp_bool_Variable, const struct FVector2D& Temp_struct_Variable, const struct FVector2D& Temp_struct_Variable_1, class UObject* K2Node_Event_ListItemObject, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, bool CallFunc_IsVisible_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, bool CallFunc_IsMobileGame_ReturnValue, const struct FVector2D& K2Node_Select_Default);
};

}


