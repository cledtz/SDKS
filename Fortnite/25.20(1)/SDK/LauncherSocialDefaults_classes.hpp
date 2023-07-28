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

// 0x120 (0x150 - 0x30)
// Class LauncherSocialDefaults.ChatColorSchemeDataAsset
class UChatColorSchemeDataAsset : public UDataAsset
{
public:
	struct FChatColorScheme                      ChatColorData;                                     // 0x30(0x120)(Edit, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("ChatColorSchemeDataAsset");
		return Clss;
	}

};

// 0x3B0 (0x3E0 - 0x30)
// Class LauncherSocialDefaults.SocialActionButtonStyleDataAsset
class USocialActionButtonStyleDataAsset : public UDataAsset
{
public:
	struct FButtonStyle                          Style;                                             // 0x30(0x3B0)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SocialActionButtonStyleDataAsset");
		return Clss;
	}

};

// 0x50 (0x80 - 0x30)
// Class LauncherSocialDefaults.SocialChatChromeColorSchemeDataAsset
class USocialChatChromeColorSchemeDataAsset : public UDataAsset
{
public:
	struct FChatChromeColorScheme                Style;                                             // 0x30(0x50)(Edit, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SocialChatChromeColorSchemeDataAsset");
		return Clss;
	}

};

// 0x68 (0x98 - 0x30)
// Class LauncherSocialDefaults.SocialChatChromeMarginsDataAsset
class USocialChatChromeMarginsDataAsset : public UDataAsset
{
public:
	struct FChatChromeMargins                    Style;                                             // 0x30(0x64)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FDB[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SocialChatChromeMarginsDataAsset");
		return Clss;
	}

};

// 0xB50 (0xB80 - 0x30)
// Class LauncherSocialDefaults.SocialChatChromeStyleDataAsset
class USocialChatChromeStyleDataAsset : public UDataAsset
{
public:
	struct FChatChromeStyle                      Style;                                             // 0x30(0xB50)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SocialChatChromeStyleDataAsset");
		return Clss;
	}

};

// 0x8B0 (0x8E0 - 0x30)
// Class LauncherSocialDefaults.SocialChatMarkupStyleDataAsset
class USocialChatMarkupStyleDataAsset : public UDataAsset
{
public:
	struct FChatMarkupStyle                      Style;                                             // 0x30(0x8B0)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SocialChatMarkupStyleDataAsset");
		return Clss;
	}

};

// 0x2000 (0x2030 - 0x30)
// Class LauncherSocialDefaults.SocialChatStyleDataAsset
class USocialChatStyleDataAsset : public UDataAsset
{
public:
	struct FChatStyle                            Style;                                             // 0x30(0x2000)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SocialChatStyleDataAsset");
		return Clss;
	}

};

// 0xA10 (0xA40 - 0x30)
// Class LauncherSocialDefaults.SocialCheckBoxStyleDataAsset
class USocialCheckBoxStyleDataAsset : public UDataAsset
{
public:
	struct FCheckBoxStyle                        Style;                                             // 0x30(0xA10)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SocialCheckBoxStyleDataAsset");
		return Clss;
	}

};

// 0x240 (0x270 - 0x30)
// Class LauncherSocialDefaults.SocialFontStyleDataAsset
class USocialFontStyleDataAsset : public UDataAsset
{
public:
	struct FSocialFontStyle                      Style;                                             // 0x30(0x240)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SocialFontStyleDataAsset");
		return Clss;
	}

};

// 0x210 (0x240 - 0x30)
// Class LauncherSocialDefaults.SocialListMarginsDataAsset
class USocialListMarginsDataAsset : public UDataAsset
{
public:
	struct FSocialListMargins                    Style;                                             // 0x30(0x210)(Edit, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SocialListMarginsDataAsset");
		return Clss;
	}

};

// 0x3A60 (0x3A90 - 0x30)
// Class LauncherSocialDefaults.SocialListStyleDataAsset
class USocialListStyleDataAsset : public UDataAsset
{
public:
	struct FSocialListStyle                      Style;                                             // 0x30(0x3A60)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SocialListStyleDataAsset");
		return Clss;
	}

};

// 0x10 (0x40 - 0x30)
// Class LauncherSocialDefaults.SocialProfanityDataAsset
class USocialProfanityDataAsset : public UDataAsset
{
public:
	TArray<struct FProfanityData>                ProfanityData;                                     // 0x30(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SocialProfanityDataAsset");
		return Clss;
	}

};

// 0xA10 (0xA40 - 0x30)
// Class LauncherSocialDefaults.SocialRadioBoxStyleDataAsset
class USocialRadioBoxStyleDataAsset : public UDataAsset
{
public:
	struct FCheckBoxStyle                        Style;                                             // 0x30(0xA10)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SocialRadioBoxStyleDataAsset");
		return Clss;
	}

};

// 0x6E0 (0x710 - 0x30)
// Class LauncherSocialDefaults.SocialScrollBarStyleDataAsset
class USocialScrollBarStyleDataAsset : public UDataAsset
{
public:
	struct FScrollBarStyle                       Style;                                             // 0x30(0x6E0)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SocialScrollBarStyleDataAsset");
		return Clss;
	}

};

// 0x48 (0x78 - 0x30)
// Class LauncherSocialDefaults.SocialSoundSchemaDataAsset
class USocialSoundSchemaDataAsset : public UDataAsset
{
public:
	struct FSocialSoundSchema                    SoundSchema;                                       // 0x30(0x48)(Edit, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SocialSoundSchemaDataAsset");
		return Clss;
	}

};

// 0x9AE0 (0x9B10 - 0x30)
// Class LauncherSocialDefaults.SocialStyleDataAsset
class USocialStyleDataAsset : public UDataAsset
{
public:
	class USocialFontStyleDataAsset*             SmallFontStyle;                                    // 0x30(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialFontStyleDataAsset*             NormalFontStyle;                                   // 0x38(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialFontStyleDataAsset*             LargeFontStyle;                                    // 0x40(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialFontStyleDataAsset*             ChatFontStyle;                                     // 0x48(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialListStyleDataAsset*             SocialListStyle;                                   // 0x50(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialListMarginsDataAsset*           SocialListMargins;                                 // 0x58(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialChatStyleDataAsset*             ChatStyle;                                         // 0x60(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialChatChromeStyleDataAsset*       ChatChromeStyle;                                   // 0x68(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialChatChromeMarginsDataAsset*     ChatChromeMargins;                                 // 0x70(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialChatChromeColorSchemeDataAsset* ChatChromeColorScheme;                             // 0x78(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UChatColorSchemeDataAsset*             ChatColorScheme;                                   // 0x80(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialSoundSchemaDataAsset*           SoundSchema;                                       // 0x88(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialActionButtonStyleDataAsset*     ActionButtonStyle;                                 // 0x90(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialCheckBoxStyleDataAsset*         CheckBoxStyle;                                     // 0x98(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialRadioBoxStyleDataAsset*         RadioBoxStyle;                                     // 0xA0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialScrollBarStyleDataAsset*        ScrollBoxStyle;                                    // 0xA8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialChatMarkupStyleDataAsset*       MarkupStyle;                                       // 0xB0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USocialProfanityDataAsset*             ProfanityDataAsset;                                // 0xB8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FDC[0x9A50];                                  // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SocialStyleDataAsset");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
