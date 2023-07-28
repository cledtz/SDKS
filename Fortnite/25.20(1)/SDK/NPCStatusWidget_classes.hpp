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

// 0x68 (0x3E8 - 0x380)
// WidgetBlueprintGeneratedClass NPCStatusWidget.NPCStatusWidget_C
class UNPCStatusWidget_C : public UNPCStatusWidgetBase
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x380(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UNPCStatusWidgetBar_C*                 Bar_Health;                                        // 0x388(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UNPCStatusWidgetBar_C*                 Bar_Shield;                                        // 0x390(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Overlay_BarsPrefix;                                // 0x398(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UVerticalBox*                          VerticalBox_BarExtensions;                         // 0x3A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	struct FTimerHandle                          VisibiltyTimer;                                    // 0x3A8(0x8)(Edit, BlueprintVisible, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)
	FMulticastInlineDelegateProperty_            VisibilityChanged;                                 // 0x3B0(0x10)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, BlueprintAssignable, BlueprintCallable)
	double                                       StatusWidgetVisibleDuration;                       // 0x3C0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CurrentHealthPercent;                              // 0x3C8(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CurrentShieldPercent;                              // 0x3D0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         KeepVisibilityOn;                                  // 0x3D8(0x1)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8D0E[0x7];                                     // Fixing Size After Last Property..
	class UFortPawn*                             FortPawn;                                          // 0x3E0(0x8)(Edit, BlueprintVisible, ZeroConstructor, DisableEditOnTemplate, DisableEditOnInstance, NoDestructor, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NPCStatusWidget_C");
		return Clss;
	}

	void EventUpdateStatus(double Health, double Shield, bool ShowShield);
	void EventHideStatus();
	void ChangeWidgetVisibleDuration(double StatusWidgetVisibleDuration);
	void SetKeepVisibilityOn(bool KeepVisibilityOn);
	void TryCallEventHideByTimer();
	void BP_HandlePlaylistExtensionWidgetCreated(class UUserWidget* Widget, enum class EUIExtensionSlot SlotType);
	void Construct();
	void OnPawnFocused();
	void ExecuteUbergraph_NPCStatusWidget(int32 EntryPoint, double K2Node_CustomEvent_StatusWidgetVisibleDuration, bool CallFunc_K2_IsValidTimerHandle_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue, bool CallFunc_BooleanOR_ReturnValue, bool K2Node_CustomEvent_KeepVisibilityOn, bool CallFunc_K2_IsValidTimerHandle_ReturnValue_1, class UUserWidget* K2Node_Event_Widget, enum class EUIExtensionSlot K2Node_Event_SlotType, bool K2Node_SwitchEnum_CmpSuccess, class UVerticalBoxSlot* CallFunc_AddChildToVerticalBox_ReturnValue, class UNPCStatusWidgetExtensionBase* K2Node_DynamicCast_AsNPCStatus_Widget_Extension_Base, bool K2Node_DynamicCast_bSuccess, class UOverlaySlot* CallFunc_AddChildToOverlay_ReturnValue, double K2Node_CustomEvent_health, double K2Node_CustomEvent_shield, bool K2Node_CustomEvent_ShowShield, bool CallFunc_BooleanNAND_ReturnValue, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate_1, const struct FTimerHandle& CallFunc_K2_SetTimerDelegate_ReturnValue_1, bool CallFunc_NotEqual_DoubleDouble_ReturnValue, bool CallFunc_NotEqual_DoubleDouble_ReturnValue_1, bool CallFunc_BooleanOR_ReturnValue_1, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast, float CallFunc_K2_SetTimerDelegate_Time_ImplicitCast_1);
	void VisibilityChanged__DelegateSignature(bool bVisible);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
