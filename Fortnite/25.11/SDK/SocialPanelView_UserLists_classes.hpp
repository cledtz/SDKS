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

// 0xC0 (0x6C0 - 0x600)
// WidgetBlueprintGeneratedClass SocialPanelView_UserLists.SocialPanelView_UserLists_C
class USocialPanelView_UserLists_C : public UFortSocialPanelView_UserLists
{
public:
	struct FPointerToUberGraphFrame              UberGraphFrame;                                    // 0x600(0x8)(ZeroConstructor, Transient, DuplicateTransient)
	class UWidgetAnimation*                      WeGameButtonHovered;                               // 0x608(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      SwitcherTransition;                                // 0x610(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      NoFriendsArrowBounce;                              // 0x618(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      MenuAnchorItemOpen;                                // 0x620(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Open_0;                                            // 0x628(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UWidgetAnimation*                      Open;                                              // 0x630(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, RepSkip, NoDestructor, HasGetValueTypeHash)
	class UImage*                                bckgrnd;                                           // 0x638(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                CircularThrobber_UserSearch;                       // 0x640(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonRichTextBlock*                  CommonRichTextBlock_97;                            // 0x648(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortMobileImage*                      FortMobileImage_127;                               // 0x650(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_MicDisabled;                                 // 0x658(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortMobileImage*                      Image_MicIcon;                                     // 0x660(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortMobileImage*                      Image_MicIcon_1;                                   // 0x668(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortMobileImage*                      Image_MicIcon_2;                                   // 0x670(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UImage*                                Image_MicIcon_3;                                   // 0x678(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UFortMobileImage*                      Image_TitleIcon;                                   // 0x680(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonRichTextBlock*                  RichText_LeavePlatformPartyTitle;                  // 0x688(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonRichTextBlock*                  RichText_VoiceChatDisabled;                        // 0x690(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonRichTextBlock*                  RichText_VoiceChatDisabledHeader;                  // 0x698(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonRichTextBlock*                  RichText_VoiceChatDisabledWarningMessage;          // 0x6A0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class URichTextBlock*                        RichTextBlock_0;                                   // 0x6A8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class USocialPanel_FriendLinkButton_C*       SocialPanel_FriendLinkButton;                      // 0x6B0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	class UCommonTextBlock*                      Text_LowPowerMode;                                 // 0x6B8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, DisableEditOnInstance, InstancedReference, RepSkip, NoDestructor, PersistentInstance, HasGetValueTypeHash)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SocialPanelView_UserLists_C");
		return Clss;
	}

	void BndEvt__Switcher_UserLists_K2Node_ComponentBoundEvent_0_OnActiveWidgetChanged__DelegateSignature(class UWidget* ActiveWidget, int32 ActiveWidgetIndex);
	void OnSetVoiceChannelButtonText(class FText& ButtonText);
	void Construct();
	void PreConstruct(bool IsDesignTime);
	void ExecuteUbergraph_SocialPanelView_UserLists(int32 EntryPoint, bool K2Node_Event_IsDesignTime, class UWidget* K2Node_ComponentBoundEvent_ActiveWidget, int32 K2Node_ComponentBoundEvent_ActiveWidgetIndex, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class FText K2Node_Event_ButtonText, class ULeavePlatformPartyButton_C* K2Node_DynamicCast_AsLeave_Platform_Party_Button, bool K2Node_DynamicCast_bSuccess, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue);
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
