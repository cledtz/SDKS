#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x1570 - 0x1520)
// WidgetBlueprintGeneratedClass BelongTreatyCustomTab.BelongTreatyCustomTab_C
class UBelongTreatyCustomTab_C : public UFortTopBarTabButton
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1520(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      OnDeselected_Mobile;                               // 0x1528(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      OnSelected_Mobile;                                 // 0x1530(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      OnDeselected;                                      // 0x1538(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      OnSelected;                                        // 0x1540(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      OnUnhover;                                         // 0x1548(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      OnHover;                                           // 0x1550(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                Image_StaminaIcon_Base;                            // 0x1558(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              SizeBox_Mobile;                                    // 0x1560(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UWBP_BelongTreaty_FlameFX_C*           WBP_BelongTreaty_FlameFX;                          // 0x1568(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BelongTreatyCustomTab_C");
		return Clss;
	}

	void PreConstruct(bool IsDesignTime);
	void BP_OnHovered();
	void BP_OnDeselected();
	void BP_OnSelected();
	void Construct();
	void BP_OnUnhovered();
	void ExecuteUbergraph_BelongTreatyCustomTab(int32 EntryPoint, bool Temp_bool_Variable, const struct FVector2D& Temp_struct_Variable, const struct FVector2D& Temp_struct_Variable_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_1, bool CallFunc_GetSelected_ReturnValue, bool K2Node_Event_IsDesignTime, bool CallFunc_Not_PreBool_ReturnValue, bool CallFunc_IsMobileGame_ReturnValue, const struct FVector2D& K2Node_Select_Default, class UClass* Temp_class_Variable, class UClass* Temp_class_Variable_1, bool Temp_bool_Variable_1, class UClass* K2Node_Select_Default_1, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_2, class UUMGSequencePlayer* CallFunc_PlayAnimationForward_ReturnValue_3);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
