#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x68 - 0x0)
// ScriptStruct SocialUMG.SocialChatMessageEntryTextStyle
struct FSocialChatMessageEntryTextStyle
{
public:
	struct FSlateFontInfo                        FontInfo;                                          // 0x0(0x58)(Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          ColorAndOpacity;                                   // 0x58(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x138 (0x138 - 0x0)
// ScriptStruct SocialUMG.SocialChatMessageEntryStyle
struct FSocialChatMessageEntryStyle
{
public:
	struct FSocialChatMessageEntryTextStyle      SenderNameStyle;                                   // 0x0(0x68)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSocialChatMessageEntryTextStyle      ChannelNameStyle;                                  // 0x68(0x68)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FSocialChatMessageEntryTextStyle      MessageTextStyle;                                  // 0xD0(0x68)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

}


