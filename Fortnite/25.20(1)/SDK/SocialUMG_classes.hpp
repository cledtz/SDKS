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

// 0x68 (0x150 - 0xE8)
// Class SocialUMG.DesignerPreviewChatChannel
class UDesignerPreviewChatChannel : public USocialChatChannel
{
public:
	uint8                                        Pad_445B[0x68];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("DesignerPreviewChatChannel");
		return Clss;
	}

};

// 0x10 (0x14D0 - 0x14C0)
// Class SocialUMG.SocialChatChannelTab
class USocialChatChannelTab : public UCommonButtonLegacy
{
public:
	class USocialChatChannel*                    ChatChannel;                                       // 0x14C0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UCommonTextBlock*                      CommonText_ChannelName;                            // 0x14C8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SocialChatChannelTab");
		return Clss;
	}

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
	uint8                                        Pad_445D[0x8];                                     // Fixing Size After Last Property..
	class USocialChatMessageList*                ChatList_Messages;                                 // 0x2D8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USocialChatEditableText*               ChatEditableText_MessageEntry;                     // 0x2E0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonBase*                     Button_SendMessage;                                // 0x2E8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UDynamicEntryBox*                      EntryBox_JoinedChannels;                           // 0x2F0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UScrollBox*                            ScrollBox_Channels;                                // 0x2F8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SocialChatContainer");
		return Clss;
	}

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
	uint8                                        Pad_445E[0x18];                                    // Fixing Size After Last Property..
	struct FSocialChatMessageEntryStyle          DefaultStyle;                                      // 0x2C0(0x138)(Edit, Protected, NativeAccessSpecifierProtected)
	class UCommonRichTextBlock*                  RichText_Message;                                  // 0x3F8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UButton*                               Button_MessageButton;                              // 0x400(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SocialChatMessageEntry");
		return Clss;
	}

	void OnMessageSet();
	bool CanInteract();
};

// 0x118 (0x3A8 - 0x290)
// Class SocialUMG.SocialChatMessageList
class USocialChatMessageList : public UListViewBase
{
public:
	uint8                                        Pad_445F[0xE8];                                    // Fixing Size After Last Property..
	bool                                         bIsFocusable;                                      // 0x378(0x1)(Edit, ZeroConstructor, DisableEditOnTemplate, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4460[0x7];                                     // Fixing Size After Last Property..
	class USocialChatChannel*                    ActiveChannel;                                     // 0x380(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4461[0x20];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SocialChatMessageList");
		return Clss;
	}

};

// 0x30 (0x14F0 - 0x14C0)
// Class SocialUMG.SocialGroupListEntry
class USocialGroupListEntry : public UCommonButtonLegacy
{
public:
	uint8                                        Pad_4462[0x8];                                     // Fixing Size After Last Property..
	TSubclassOf<class USocialActionMenu>         ActionMenuClass;                                   // 0x14C8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialGroupChannel*                   SocialGroup;                                       // 0x14D0(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            Text_GroupName;                                    // 0x14D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMenuAnchor*                           MenuAnchor_Actions;                                // 0x14E0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4463[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SocialGroupListEntry");
		return Clss;
	}

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
	uint8                                        Pad_4464[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SocialGroupTreeView");
		return Clss;
	}

};

// 0xB0 (0x1570 - 0x14C0)
// Class SocialUMG.SocialInteractionButton
class USocialInteractionButton : public UCommonButtonLegacy
{
public:
	struct FLinearColor                          DefaultIndicatorColor;                             // 0x14C0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FLinearColor                          AlertingIndicatorColor;                            // 0x14D0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4465[0x80];                                    // Fixing Size After Last Property..
	class UCommonTextBlock*                      Text_InteractionName;                              // 0x1560(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UBorder*                               Border_InteractionIndicator;                       // 0x1568(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SocialInteractionButton");
		return Clss;
	}

	void OnInteractionSet();
	bool IsPlatformOnlyFriend();
	class FName GetInteractionName();
};

// 0x40 (0x438 - 0x3F8)
// Class SocialUMG.SocialActionMenu
class USocialActionMenu : public UCommonActivatableWidget
{
public:
	uint8                                        Pad_4466[0x40];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SocialActionMenu");
		return Clss;
	}

	void OnOpened();
	void HandleMenuAnchorOpenChanged(bool bIsOpen);
};

// 0x68 (0x4A0 - 0x438)
// Class SocialUMG.SocialInteractionMenu
class USocialInteractionMenu : public USocialActionMenu
{
public:
	uint8                                        Pad_4467[0x30];                                    // Fixing Size After Last Property..
	class UDynamicEntryBox*                      EntryBox_PositiveInteractions;                     // 0x468(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UDynamicEntryBox*                      EntryBox_NegativeInteractions;                     // 0x470(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USpacer*                               Spacer_InteractionSeparator;                       // 0x478(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonWidgetSwitcherLegacy*           Switcher_Confirmation;                             // 0x480(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UTextBlock*                            Text_ConfirmationLabel;                            // 0x488(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonLegacy*                   Button_Confirm;                                    // 0x490(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonButtonLegacy*                   Button_Decline;                                    // 0x498(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SocialInteractionMenu");
		return Clss;
	}

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
	uint8                                        Pad_4468[0x1];                                     // Fixing Size After Last Property..
	struct FColor                                SecondNameColor;                                   // 0x87C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        SecondNameFontSize;                                // 0x880(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4469[0xC];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SocialNameTextBlock");
		return Clss;
	}

};

// 0x20 (0x14E0 - 0x14C0)
// Class SocialUMG.SocialListEntryBase
class USocialListEntryBase : public UCommonButtonLegacy
{
public:
	uint8                                        Pad_446A[0x20];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SocialListEntryBase");
		return Clss;
	}

};

// 0x10 (0x14F0 - 0x14E0)
// Class SocialUMG.SocialListInteractableEntryBase
class USocialListInteractableEntryBase : public USocialListEntryBase
{
public:
	TSubclassOf<class USocialActionMenu>         ActionMenuClass;                                   // 0x14D8(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UMenuAnchor*                           MenuAnchor_Actions;                                // 0x14E0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_446B[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SocialListInteractableEntryBase");
		return Clss;
	}

	void HandleMenuOpenChanged(bool bIsMenuOpen);
	class UUserWidget* HandleGetMenuContent();
};

// 0x20 (0x1510 - 0x14F0)
// Class SocialUMG.SocialListUserEntryBase
class USocialListUserEntryBase : public USocialListInteractableEntryBase
{
public:
	class USocialNameTextBlock*                  Text_SocialName;                                   // 0x14F0(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class USocialNameTextBlock*                  Text_SocialName_Hover;                             // 0x14F8(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonRichTextBlock*                  Text_RichPresence;                                 // 0x1500(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UCommonRichTextBlock*                  Text_RichPresence_Hover;                           // 0x1508(0x8)(BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SocialListUserEntryBase");
		return Clss;
	}

};

// 0x10 (0x14F0 - 0x14E0)
// Class SocialUMG.SocialUserListHeaderEntry
class USocialUserListHeaderEntry : public USocialListEntryBase
{
public:
	class UTextBlock*                            Text_ListName;                                     // 0x14D8(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTextBlock*                            Text_NumEntries;                                   // 0x14E0(0x8)(BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_446C[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SocialUserListHeaderEntry");
		return Clss;
	}

};

// 0x110 (0x3A0 - 0x290)
// Class SocialUMG.SocialUserListViewBase
class USocialUserListViewBase : public UListViewBase
{
public:
	uint8                                        Pad_446D[0x108];                                   // Fixing Size After Last Property..
	float                                        EntrySpacing;                                      // 0x398(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_446E[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SocialUserListViewBase");
		return Clss;
	}

};

// 0xA0 (0x440 - 0x3A0)
// Class SocialUMG.SocialUserListView
class USocialUserListView : public USocialUserListViewBase
{
public:
	uint8                                        Pad_446F[0x48];                                    // Fixing Size After Last Property..
	class USocialActionMenu*                     ActiveActionMenu;                                  // 0x3E8(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<TSubclassOf<class USocialActionMenu>, class USocialActionMenu*> CachedActionMenuPool;                              // 0x3F0(0x50)(ExportObject, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SocialUserListView");
		return Clss;
	}

};

// 0xA0 (0x4E0 - 0x440)
// Class SocialUMG.SocialUserTreeView
class USocialUserTreeView : public USocialUserListView
{
public:
	uint8                                        Pad_4470[0x70];                                    // Fixing Size After Last Property..
	TSubclassOf<class USocialListUserEntryBase>  UserEntryWidgetClass;                              // 0x4B0(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TSubclassOf<class USocialListUserEntryBase>  InviteEntryWidgetClass;                            // 0x4B8(0x8)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_4471[0x20];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SocialUserTreeView");
		return Clss;
	}

};

// 0x638 (0x7B0 - 0x178)
// Class SocialUMG.SocialChatEditableText
class USocialChatEditableText : public UWidget
{
public:
	uint8                                        Pad_4472[0x28];                                    // Fixing Size After Last Property..
	struct FEditableTextStyle                    EditableTextStyle;                                 // 0x1A0(0x2C0)(Edit, NativeAccessSpecifierPrivate)
	struct FTextBlockStyle                       AutoCompleteStyle;                                 // 0x460(0x310)(Edit, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4473[0x40];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SocialChatEditableText");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
