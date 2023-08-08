#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x1540 - 0x1500)
// WidgetBlueprintGeneratedClass TeamMemberBanner.TeamMemberBanner_C
class UTeamMemberBanner_C : public UFortCampaignTeamMemberBanner
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x1500(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UIconTextButton_C*                     ButtonPartyFinder;                                 // 0x1508(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Connected;                                         // 0x1510(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USizeBox*                              Connecting;                                        // 0x1518(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_571;                                         // 0x1520(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UOverlay*                              Open;                                              // 0x1528(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                OpenImage;                                         // 0x1530(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonWidgetSwitcherLegacy*           Switcher_MemberState;                              // 0x1538(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("TeamMemberBanner_C");
		return Clss;
	}

	void OpenPartyFinder(class UUserWidget* CallFunc_GetCachedWidget_ReturnValue, class USocialPanel_C* K2Node_DynamicCast_AsSocial_Panel, bool K2Node_DynamicCast_bSuccess, bool CallFunc_IsActivated_ReturnValue);
	void HandleMouseHoverVisualState(bool Hover, bool Temp_bool_Variable, class UObject* Temp_object_Variable, class UObject* Temp_object_Variable_1, class UObject* K2Node_Select_Default, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush);
	void BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_0_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_1_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void BndEvt__ButtonPartyFinder_K2Node_ComponentBoundEvent_3_CommonButtonClicked__DelegateSignature(class UCommonButtonLegacy* Button);
	void OnTeamMemberConnectionStateChanged(enum class EFortMemberConnectionState NewConnectionState);
	void ExecuteUbergraph_TeamMemberBanner(int32 EntryPoint, enum class EFortMemberConnectionState Temp_byte_Variable, class UCommonButtonLegacy* K2Node_ComponentBoundEvent_Button_2, class UCommonButtonLegacy* K2Node_ComponentBoundEvent_Button_1, class UCommonButtonLegacy* K2Node_ComponentBoundEvent_Button, enum class EFortMemberConnectionState K2Node_Event_NewConnectionState, class UWidget* K2Node_Select_Default);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
