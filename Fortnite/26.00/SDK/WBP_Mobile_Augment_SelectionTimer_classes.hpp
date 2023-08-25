#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x358 - 0x348)
// WidgetBlueprintGeneratedClass WBP_Mobile_Augment_SelectionTimer.WBP_Mobile_Augment_SelectionTimer_C
class UWBP_Mobile_Augment_SelectionTimer_C : public UFortMobilePlayerAugmentTimer
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x348(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWBP_Augment_SelectionTimer_C*         WBP_Augment_SelectionTimer_34;                     // 0x350(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass();
	static class UWBP_Mobile_Augment_SelectionTimer_C* GetDefaultObj();

	void BP_OnHUDElementVisibilityChanged(struct FGameplayTagContainer& HiddenElementTagContainer, bool bForceCollapse);
	void ExecuteUbergraph_WBP_Mobile_Augment_SelectionTimer(int32 EntryPoint, const struct FGameplayTagContainer& CallFunc_MakeLiteralGameplayTagContainer_ReturnValue, bool Temp_bool_Variable, enum class ESlateVisibility Temp_byte_Variable, enum class ESlateVisibility Temp_byte_Variable_1, const struct FGameplayTagContainer& K2Node_Event_HiddenElementTagContainer, bool K2Node_Event_bForceCollapse, bool CallFunc_HasAnyTags_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool CallFunc_Not_PreBool_ReturnValue, enum class ESlateVisibility K2Node_Select_Default);
};

}


