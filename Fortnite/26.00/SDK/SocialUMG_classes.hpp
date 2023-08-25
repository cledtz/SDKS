#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x150 - 0xE8)
// Class SocialUMG.DesignerPreviewChatChannel
class UDesignerPreviewChatChannel : public USocialChatChannel
{
public:
	uint8                                        Pad_D23[0x68];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UDesignerPreviewChatChannel* GetDefaultObj();

};

// 0x10 (0x14D0 - 0x14C0)
// Class SocialUMG.SocialChatChannelTab
class USocialChatChannelTab : public UCommonButtonLegacy
{
public:
	class USocialChatChannel*                    ChatChannel;                                       // 0x14C0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      CommonText_ChannelName;                            // 0x14C8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class USocialChatChannelTab* GetDefaultObj();

};

// 0x58 (0x300 - 0x2A8)
// Class SocialUMG.SocialChatContainer
class USocialChatContainer : public UUserWidget
{
public:
	class USocialChatManager*                    ChatManager;                                       // 0x2A8(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class USocialChatChannel*>            JoinedChannels;                                    // 0x2B0(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	class USocialChatChannel*                    ActiveChannel;                                     // 0x2C0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonButtonGroupLegacy*              TabButtonGroup;                                    // 0x2C8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_D2F[0x8];                                      // Fixing Size After Last Property 
	class USocialChatMessageList*                ChatList_Messages;                                 // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USocialChatEditableText*               ChatEditableText_MessageEntry;                     // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonBase*                     Button_SendMessage;                                // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDynamicEntryBox*                      EntryBox_JoinedChannels;                           // 0x2F0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UScrollBox*                            ScrollBox_Channels;                                // 0x2F8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class USocialChatContainer* GetDefaultObj();

	void SendCurrentMessage();
	void OnChatOpenChanged(bool bShouldBeOpen);
	void HandleRightTabPressed();
	void HandleLeftTabPressed();
	void FocusEditableText();
	void DynamicHandleMessageTextCommitted(class FText& MessageText, enum class ETextCommit CommitMethod);
};

// 0x160 (0x408 - 0x2A8)
// Class SocialUMG.SocialChatMessageEntry
class USocialChatMessageEntry : public UUserWidget
{
public:
	uint8                                        Pad_D37[0x18];                                     // Fixing Size After Last Property 
	struct FSocialChatMessageEntryStyle          DefaultStyle;                                      // 0x2C0(0x138)(Edit, Protected, NativeAccessSpecifierProtected)
	class UCommonRichTextBlock*                  RichText_Message;                                  // 0x3F8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UButton*                               Button_MessageButton;                              // 0x400(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class USocialChatMessageEntry* GetDefaultObj();

	void OnMessageSet();
	bool CanInteract();
};

// 0x118 (0x3A8 - 0x290)
// Class SocialUMG.SocialChatMessageList
class USocialChatMessageList : public UListViewBase
{
public:
	uint8                                        Pad_D3A[0xE8];                                     // Fixing Size After Last Property 
	bool                                         bIsFocusable;                                      // 0x378(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_D3B[0x7];                                      // Fixing Size After Last Property 
	class USocialChatChannel*                    ActiveChannel;                                     // 0x380(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_D3D[0x20];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class USocialChatMessageList* GetDefaultObj();

};

// 0x30 (0x14F0 - 0x14C0)
// Class SocialUMG.SocialGroupListEntry
class USocialGroupListEntry : public UCommonButtonLegacy
{
public:
	uint8                                        Pad_D41[0x8];                                      // Fixing Size After Last Property 
	TSubclassOf<class USocialActionMenu>         ActionMenuClass;                                   // 0x14C8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialGroupChannel*                   SocialGroup;                                       // 0x14D0(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            Text_GroupName;                                    // 0x14D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMenuAnchor*                           MenuAnchor_Actions;                                // 0x14E0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_D45[0x8];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class USocialGroupListEntry* GetDefaultObj();

	class UUserWidget* HandleGetMenuContent();
};

// 0x28 (0xC50 - 0xC28)
// Class SocialUMG.SocialGroupTreeView
class USocialGroupTreeView : public UTreeView
{
public:
	TSubclassOf<class USocialGroupListEntry>     GroupEntryWidgetClass;                             // 0xC28(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class USocialListUserEntryBase>  UserEntryWidgetClass;                              // 0xC30(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class USocialInteractionMenu>    ActionMenuClass;                                   // 0xC38(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USocialInteractionMenu*                ActionMenu;                                        // 0xC40(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_D48[0x8];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class USocialGroupTreeView* GetDefaultObj();

};

// 0xB0 (0x1570 - 0x14C0)
// Class SocialUMG.SocialInteractionButton
class USocialInteractionButton : public UCommonButtonLegacy
{
public:
	struct FLinearColor                          DefaultIndicatorColor;                             // 0x14C0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          AlertingIndicatorColor;                            // 0x14D0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_D4E[0x80];                                     // Fixing Size After Last Property 
	class UCommonTextBlock*                      Text_InteractionName;                              // 0x1560(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBorder*                               Border_InteractionIndicator;                       // 0x1568(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class USocialInteractionButton* GetDefaultObj();

	void OnInteractionSet();
	bool IsPlatformOnlyFriend();
	class FName GetInteractionName();
};

// 0x40 (0x428 - 0x3E8)
// Class SocialUMG.SocialActionMenu
class USocialActionMenu : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_D51[0x40];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class USocialActionMenu* GetDefaultObj();

	void OnOpened();
	void HandleMenuAnchorOpenChanged(bool bIsOpen);
};

// 0x68 (0x490 - 0x428)
// Class SocialUMG.SocialInteractionMenu
class USocialInteractionMenu : public USocialActionMenu
{
public:
	uint8                                        Pad_D57[0x30];                                     // Fixing Size After Last Property 
	class UDynamicEntryBox*                      EntryBox_PositiveInteractions;                     // 0x458(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDynamicEntryBox*                      EntryBox_NegativeInteractions;                     // 0x460(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USpacer*                               Spacer_InteractionSeparator;                       // 0x468(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonWidgetSwitcherLegacy*           Switcher_Confirmation;                             // 0x470(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            Text_ConfirmationLabel;                            // 0x478(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonLegacy*                   Button_Confirm;                                    // 0x480(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonLegacy*                   Button_Decline;                                    // 0x488(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class USocialInteractionMenu* GetDefaultObj();

	void OnToggleConfirmation(bool bIsVisible);
	class UWidget* GetFirstEntryToCenter();
};

// 0x28 (0x890 - 0x868)
// Class SocialUMG.SocialNameTextBlock
class USocialNameTextBlock : public UCommonRichTextBlock
{
public:
	class USocialUser*                           SocialUser;                                        // 0x868(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MinDesiredSize;                                    // 0x870(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        MaxDesiredSize;                                    // 0x874(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bShowSecondName;                                   // 0x878(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class EPlatformIconDisplayRule          PlatformIconDisplayRule;                           // 0x879(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bWrapToNextLine;                                   // 0x87A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_D5A[0x1];                                      // Fixing Size After Last Property 
	struct FColor                                SecondNameColor;                                   // 0x87C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        SecondNameFontSize;                                // 0x880(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_D5B[0xC];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class USocialNameTextBlock* GetDefaultObj();

};

// 0x18 (0x14D8 - 0x14C0)
// Class SocialUMG.SocialListEntryBase
class USocialListEntryBase : public UCommonButtonLegacy
{
public:
	uint8                                        Pad_D5C[0x18];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class USocialListEntryBase* GetDefaultObj();

};

// 0x10 (0x14E8 - 0x14D8)
// Class SocialUMG.SocialListInteractableEntryBase
class USocialListInteractableEntryBase : public USocialListEntryBase
{
public:
	TSubclassOf<class USocialActionMenu>         ActionMenuClass;                                   // 0x14D8(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMenuAnchor*                           MenuAnchor_Actions;                                // 0x14E0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class USocialListInteractableEntryBase* GetDefaultObj();

	void HandleMenuOpenChanged(bool bIsMenuOpen);
	class UUserWidget* HandleGetMenuContent();
};

// 0x28 (0x1510 - 0x14E8)
// Class SocialUMG.SocialListUserEntryBase
class USocialListUserEntryBase : public USocialListInteractableEntryBase
{
public:
	uint8                                        Pad_D63[0x8];                                      // Fixing Size After Last Property 
	class USocialNameTextBlock*                  Text_SocialName;                                   // 0x14F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USocialNameTextBlock*                  Text_SocialName_Hover;                             // 0x14F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonRichTextBlock*                  Text_RichPresence;                                 // 0x1500(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonRichTextBlock*                  Text_RichPresence_Hover;                           // 0x1508(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class USocialListUserEntryBase* GetDefaultObj();

};

// 0x10 (0x14E8 - 0x14D8)
// Class SocialUMG.SocialUserListHeaderEntry
class USocialUserListHeaderEntry : public USocialListEntryBase
{
public:
	class UTextBlock*                            Text_ListName;                                     // 0x14D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTextBlock*                            Text_NumEntries;                                   // 0x14E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class USocialUserListHeaderEntry* GetDefaultObj();

};

// 0x110 (0x3A0 - 0x290)
// Class SocialUMG.SocialUserListViewBase
class USocialUserListViewBase : public UListViewBase
{
public:
	uint8                                        Pad_D67[0x108];                                    // Fixing Size After Last Property 
	float                                        EntrySpacing;                                      // 0x398(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_D68[0x4];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class USocialUserListViewBase* GetDefaultObj();

};

// 0xA0 (0x440 - 0x3A0)
// Class SocialUMG.SocialUserListView
class USocialUserListView : public USocialUserListViewBase
{
public:
	uint8                                        Pad_D69[0x48];                                     // Fixing Size After Last Property 
	class USocialActionMenu*                     ActiveActionMenu;                                  // 0x3E8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<TSubclassOf<class USocialActionMenu>, class USocialActionMenu*> CachedActionMenuPool;                              // 0x3F0(0x50)(ExportObject, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class USocialUserListView* GetDefaultObj();

};

// 0xA0 (0x4E0 - 0x440)
// Class SocialUMG.SocialUserTreeView
class USocialUserTreeView : public USocialUserListView
{
public:
	uint8                                        Pad_D6B[0x70];                                     // Fixing Size After Last Property 
	TSubclassOf<class USocialListUserEntryBase>  UserEntryWidgetClass;                              // 0x4B0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class USocialListUserEntryBase>  InviteEntryWidgetClass;                            // 0x4B8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_D6E[0x20];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class USocialUserTreeView* GetDefaultObj();

};

// 0x638 (0x7B0 - 0x178)
// Class SocialUMG.SocialChatEditableText
class USocialChatEditableText : public UWidget
{
public:
	uint8                                        Pad_D71[0x28];                                     // Fixing Size After Last Property 
	struct FEditableTextStyle                    EditableTextStyle;                                 // 0x1A0(0x2C0)(Edit, NativeAccessSpecifierPrivate)
	struct FTextBlockStyle                       AutoCompleteStyle;                                 // 0x460(0x310)(Edit, NativeAccessSpecifierPrivate)
	uint8                                        Pad_D72[0x40];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class USocialChatEditableText* GetDefaultObj();

};

}


