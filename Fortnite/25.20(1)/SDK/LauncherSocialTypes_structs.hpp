#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x50 - 0x0)
// ScriptStruct LauncherSocialTypes.ChatChromeColorScheme
struct FChatChromeColorScheme
{
public:
	struct FLinearColor                          ChatEntryBackgroundColor;                          // 0x0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          NoneActiveTabColor;                                // 0x10(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          TabFontColor;                                      // 0x20(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          TabFontColorInverted;                              // 0x30(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ChatBackgroundColor;                               // 0x40(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x64 (0x64 - 0x0)
// ScriptStruct LauncherSocialTypes.ChatChromeMargins
struct FChatChromeMargins
{
public:
	float                                        TabWidth;                                          // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                               TabPadding;                                        // 0x4(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               ChatWindowPadding;                                 // 0x14(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               ChatWindowToEntryMargin;                           // 0x24(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               ChatChannelPadding;                                // 0x34(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               UserListButtonPadding;                             // 0x44(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               UserListIconPadding;                               // 0x54(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xB50 (0xB50 - 0x0)
// ScriptStruct LauncherSocialTypes.ChatChromeStyle
struct FChatChromeStyle
{
public:
	struct FSlateBrush                           UserListBrush;                                     // 0x0(0xC0)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ChatBackgroundBrush;                               // 0xC0(0xC0)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ChatEntryBackgroundBrush;                          // 0x180(0xC0)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ChannelBackgroundBrush;                            // 0x240(0xC0)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           TabBackgroundBrush;                                // 0x300(0xC0)(Edit, NativeAccessSpecifierPublic)
	struct FButtonStyle                          TabSelectorButtonStyle;                            // 0x3C0(0x3B0)(Edit, NativeAccessSpecifierPublic)
	struct FMargin                               TabOptionPadding;                                  // 0x770(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               TabContentPadding;                                 // 0x780(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               TabClosePadding;                                   // 0x790(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FButtonStyle                          UserListButtonStyle;                               // 0x7A0(0x3B0)(Edit, NativeAccessSpecifierPublic)
};

// 0x120 (0x120 - 0x0)
// ScriptStruct LauncherSocialTypes.ChatColorScheme
struct FChatColorScheme
{
public:
	struct FLinearColor                          TimeStampColor;                                    // 0x0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          DefaultChatColor;                                  // 0x10(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          WhisperChatColor;                                  // 0x20(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          GlobalChatColor;                                   // 0x30(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          FounderChatColor;                                  // 0x40(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          GameChatColor;                                     // 0x50(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          TeamChatColor;                                     // 0x60(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          PartyChatColor;                                    // 0x70(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          AdminChatColor;                                    // 0x80(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          GameAdminChatColor;                                // 0x90(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          WhisperHyperlinkChatColor;                         // 0xA0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          GlobalHyperlinkChatColor;                          // 0xB0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          FounderHyperlinkChatColor;                         // 0xC0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          GameHyperlinkChatColor;                            // 0xD0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          TeamHyperlinkChatColor;                            // 0xE0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          PartyHyperlinkChatColor;                           // 0xF0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          EnemyColor;                                        // 0x100(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          FriendlyColor;                                     // 0x110(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8B0 (0x8B0 - 0x0)
// ScriptStruct LauncherSocialTypes.ChatMarkupStyle
struct FChatMarkupStyle
{
public:
	struct FButtonStyle                          MarkupButtonStyle;                                 // 0x0(0x3B0)(Edit, NativeAccessSpecifierPublic)
	struct FTextBlockStyle                       MarkupTextStyle;                                   // 0x3B0(0x310)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           MarkupBackground;                                  // 0x6C0(0xC0)(Edit, NativeAccessSpecifierPublic)
	struct FSlateColor                           ButtonColor;                                       // 0x780(0x14)(Edit, NativeAccessSpecifierPublic)
	struct FSlateColor                           ButtonHoverColor;                                  // 0x794(0x14)(Edit, NativeAccessSpecifierPublic)
	struct FSlateColor                           TipColor;                                          // 0x7A8(0x14)(Edit, NativeAccessSpecifierPublic)
	uint8                                        Pad_882C[0x4];                                     // Fixing Size After Last Property..
	struct FSlateBrush                           SeperatorBrush;                                    // 0x7C0(0xC0)(Edit, NativeAccessSpecifierPublic)
	float                                        SeperatorThickness;                                // 0x880(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                               MarkupPadding;                                     // 0x884(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               ButtonPadding;                                     // 0x894(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_882D[0xC];                                     // Fixing Size Of Struct..
};

// 0x2000 (0x2000 - 0x0)
// ScriptStruct LauncherSocialTypes.ChatStyle
struct FChatStyle
{
public:
	struct FEditableTextBoxStyle                 ChatEntryTextStyle;                                // 0x0(0xD80)(Edit, NativeAccessSpecifierPublic)
	struct FEditableTextBoxStyle                 ChatDisplayTextStyle;                              // 0xD80(0xD80)(Edit, NativeAccessSpecifierPublic)
	struct FScrollBoxStyle                       ScrollBorderStyle;                                 // 0x1B00(0x330)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           MessageNotificationBrush;                          // 0x1E30(0xC0)(Edit, NativeAccessSpecifierPublic)
	struct FMargin                               ChatEntryPadding;                                  // 0x1EF0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        ChatEntryHeight;                                   // 0x1F00(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_882E[0xC];                                     // Fixing Size After Last Property..
	struct FSlateBrush                           ChatMenuBackgroundBrush;                           // 0x1F10(0xC0)(Edit, NativeAccessSpecifierPublic)
	struct FMargin                               FriendActionPadding;                               // 0x1FD0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               FriendActionHeaderPadding;                         // 0x1FE0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               FriendActionStatusMargin;                          // 0x1FF0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x240 (0x240 - 0x0)
// ScriptStruct LauncherSocialTypes.SocialFontStyle
struct FSocialFontStyle
{
public:
	struct FSlateFontInfo                        FontSmall;                                         // 0x0(0x58)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                        FontSmallBold;                                     // 0x58(0x58)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                        FontNormal;                                        // 0xB0(0x58)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                        FontNormalBold;                                    // 0x108(0x58)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                        FontLarge;                                         // 0x160(0x58)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateFontInfo                        FontLargeBold;                                     // 0x1B8(0x58)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          DefaultFontColor;                                  // 0x210(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          InvertedFontColor;                                 // 0x220(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          DefaultDullFontColor;                              // 0x230(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x210 (0x210 - 0x0)
// ScriptStruct LauncherSocialTypes.SocialListMargins
struct FSocialListMargins
{
public:
	struct FVector2D                             UserPresenceImageSize;                             // 0x0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                               HeaderButtonMargin;                                // 0x10(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               FriendsListMargin;                                 // 0x20(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               FriendsListNoFriendsMargin;                        // 0x30(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               FriendsListHeaderMargin;                           // 0x40(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               FriendsListHeaderCountMargin;                      // 0x50(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               HeaderButtonContentMargin;                         // 0x60(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               FriendItemMargin;                                  // 0x70(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               FriendItemStatusMargin;                            // 0x80(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               FriendTipStatusMargin;                             // 0x90(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               FriendItemPresenceMargin;                          // 0xA0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               FriendItemPlatformMargin;                          // 0xB0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               FriendItemTextScrollerMargin;                      // 0xC0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               ConfirmationBorderMargin;                          // 0xD0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               ConfirmationButtonMargin;                          // 0xE0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               ConfirmationButtonContentMargin;                   // 0xF0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               NoneFriendContentMargin;                           // 0x100(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        NoneFriendContentHeight;                           // 0x110(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NoneFriendIconWidth;                               // 0x114(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                               SubMenuBackIconMargin;                             // 0x118(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               SubMenuPageIconMargin;                             // 0x128(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               RadioSettingTitleMargin;                           // 0x138(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               SubMenuSearchIconMargin;                           // 0x148(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               SubMenuSearchTextMargin;                           // 0x158(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               SubMenuBackButtonMargin;                           // 0x168(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               SubMenuSettingButtonMargin;                        // 0x178(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               SubMenuListMargin;                                 // 0x188(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        SubMenuSeperatorThickness;                         // 0x198(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PresenceSeperatorThickness;                        // 0x19C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMargin                               FriendTipMargin;                                   // 0x1A0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               FriendTipPresenceMargin;                           // 0x1B0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               FriendTipSeperatorMargin;                          // 0x1C0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               ToolTipMargin;                                     // 0x1D0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               TipStatusMargin;                                   // 0x1E0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FMargin                               AddButtonMargin;                                   // 0x1F0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector2D                             AddButtonSpacing;                                  // 0x200(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x3A60 (0x3A60 - 0x0)
// ScriptStruct LauncherSocialTypes.SocialListStyle
struct FSocialListStyle
{
public:
	struct FButtonStyle                          GlobalChatButtonStyle;                             // 0x0(0x3B0)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           GlobalChatIcon;                                    // 0x3B0(0xC0)(Edit, NativeAccessSpecifierPublic)
	struct FButtonStyle                          FriendItemButtonStyle;                             // 0x470(0x3B0)(Edit, NativeAccessSpecifierPublic)
	struct FButtonStyle                          ConfirmButtonStyle;                                // 0x820(0x3B0)(Edit, NativeAccessSpecifierPublic)
	struct FButtonStyle                          CancelButtonStyle;                                 // 0xBD0(0x3B0)(Edit, NativeAccessSpecifierPublic)
	struct FSlateColor                           ButtonContentColor;                                // 0xF80(0x14)(Edit, NativeAccessSpecifierPublic)
	struct FSlateColor                           ButtonHoverContentColor;                           // 0xF94(0x14)(Edit, NativeAccessSpecifierPublic)
	uint8                                        Pad_882F[0x8];                                     // Fixing Size After Last Property..
	struct FSlateBrush                           ActionMenuArrowBrush;                              // 0xFB0(0xC0)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ActionMenuArrowRightBrush;                         // 0x1070(0xC0)(Edit, NativeAccessSpecifierPublic)
	struct FSlateColor                           ActionMenuBackgroundColor;                         // 0x1130(0x14)(Edit, NativeAccessSpecifierPublic)
	uint8                                        Pad_8830[0xC];                                     // Fixing Size After Last Property..
	struct FSlateBrush                           ToolTipArrowBrush;                                 // 0x1150(0xC0)(Edit, NativeAccessSpecifierPublic)
	struct FButtonStyle                          BackButtonStyle;                                   // 0x1210(0x3B0)(Edit, NativeAccessSpecifierPublic)
	struct FButtonStyle                          HeaderButtonStyle;                                 // 0x15C0(0x3B0)(Edit, NativeAccessSpecifierPublic)
	struct FButtonStyle                          FriendListActionButtonStyle;                       // 0x1970(0x3B0)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           AddFriendButtonContentBrush;                       // 0x1D20(0xC0)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           StatusIconBrush;                                   // 0x1DE0(0xC0)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           PCIconBrush;                                       // 0x1EA0(0xC0)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           ConsoleIconBrush;                                  // 0x1F60(0xC0)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           MobileIconBrush;                                   // 0x2020(0xC0)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           FacebookIconBrush;                                 // 0x20E0(0xC0)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           EpicIconBrush;                                     // 0x21A0(0xC0)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           FriendImageBrush;                                  // 0x2260(0xC0)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           OfflineBrush;                                      // 0x2320(0xC0)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           OnlineBrush;                                       // 0x23E0(0xC0)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           AwayBrush;                                         // 0x24A0(0xC0)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           SpectateBrush;                                     // 0x2560(0xC0)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           FriendsContainerBackground;                        // 0x2620(0xC0)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           FriendsListBackground;                             // 0x26E0(0xC0)(Edit, NativeAccessSpecifierPublic)
	struct FEditableTextBoxStyle                 AddFriendEditableTextStyle;                        // 0x27A0(0xD80)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           BackBrush;                                         // 0x3520(0xC0)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           SelectedOptionBrush;                               // 0x35E0(0xC0)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           SettingsBrush;                                     // 0x36A0(0xC0)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           SeperatorBrush;                                    // 0x3760(0xC0)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           PresenceSeperatorBrush;                            // 0x3820(0xC0)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           FontSizeBrush;                                     // 0x38E0(0xC0)(Edit, NativeAccessSpecifierPublic)
	struct FSlateBrush                           SearchBrush;                                       // 0x39A0(0xC0)(Edit, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct LauncherSocialTypes.ProfanityData
struct FProfanityData
{
public:
	class FString                                CountryCode;                                       // 0x0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ProfanityList;                                     // 0x10(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                WhiteList;                                         // 0x20(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAutoAdd;                                          // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_8831[0x7];                                     // Fixing Size Of Struct..
};

// 0x48 (0x48 - 0x0)
// ScriptStruct LauncherSocialTypes.SocialSoundSchema
struct FSocialSoundSchema
{
public:
	struct FSlateSound                           MessageReceivedSound;                              // 0x0(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateSound                           PartyInviteReceivedSound;                          // 0x18(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateSound                           FriendInviteReceivedSound;                         // 0x30(0x18)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x9A50 (0x9A50 - 0x0)
// ScriptStruct LauncherSocialTypes.SocialStyle
struct FSocialStyle
{
public:
	struct FScrollBarStyle                       ScrollBarStyle;                                    // 0x0(0x6E0)(Edit, NativeAccessSpecifierPublic)
	struct FButtonStyle                          ActionButtonStyle;                                 // 0x6E0(0x3B0)(Edit, NativeAccessSpecifierPublic)
	struct FSocialFontStyle                      SmallFontStyle;                                    // 0xA90(0x240)(Edit, NativeAccessSpecifierPublic)
	struct FSocialFontStyle                      NormalFontStyle;                                   // 0xCD0(0x240)(Edit, NativeAccessSpecifierPublic)
	struct FSocialFontStyle                      LargeFontStyle;                                    // 0xF10(0x240)(Edit, NativeAccessSpecifierPublic)
	struct FSocialFontStyle                      ChatFontStyle;                                     // 0x1150(0x240)(Edit, NativeAccessSpecifierPublic)
	struct FCheckBoxStyle                        CheckBoxStyle;                                     // 0x1390(0xA10)(Edit, NativeAccessSpecifierPublic)
	struct FCheckBoxStyle                        RadioBoxStyle;                                     // 0x1DA0(0xA10)(Edit, NativeAccessSpecifierPublic)
	struct FSocialListStyle                      SocialListStyle;                                   // 0x27B0(0x3A60)(Edit, NativeAccessSpecifierPublic)
	struct FSocialListMargins                    SocialListMargins;                                 // 0x6210(0x210)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FChatStyle                            ChatStyle;                                         // 0x6420(0x2000)(Edit, NativeAccessSpecifierPublic)
	struct FChatColorScheme                      ChatColorScheme;                                   // 0x8420(0x120)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FChatChromeStyle                      ChatChromeStyle;                                   // 0x8540(0xB50)(Edit, NativeAccessSpecifierPublic)
	struct FChatChromeMargins                    ChatChromeMargins;                                 // 0x9090(0x64)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FChatChromeColorScheme                ChatChromeColorScheme;                             // 0x90F4(0x50)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_8832[0xC];                                     // Fixing Size After Last Property..
	struct FChatMarkupStyle                      ChatMarkupStyle;                                   // 0x9150(0x8B0)(Edit, NativeAccessSpecifierPublic)
	struct FSocialSoundSchema                    SoundSchema;                                       // 0x9A00(0x48)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_8833[0x8];                                     // Fixing Size Of Struct..
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
