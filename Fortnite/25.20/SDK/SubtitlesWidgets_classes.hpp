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

// 0x170 (0x1A0 - 0x30)
// Class SubtitlesWidgets.SubtitleDisplayOptions
class USubtitleDisplayOptions : public UDataAsset
{
public:
	struct FSlateFontInfo                        Font;                                              // 0x30(0x58)(Edit, DisableEditOnInstance, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DisplayTextSizes[0x5];                             // 0x88(0x14)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          DisplayTextColors[0x2];                            // 0x9C(0x20)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DisplayBorderSize[0x3];                            // 0xBC(0xC)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DisplayBackgroundOpacity[0x5];                     // 0xC8(0x14)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_43E3[0x4];                                     // Fixing Size After Last Property..
	struct FSlateBrush                           BackgroundBrush;                                   // 0xE0(0xC0)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SubtitleDisplayOptions");
		return Clss;
	}

};

// 0x418 (0x590 - 0x178)
// Class SubtitlesWidgets.SubtitleDisplay
class USubtitleDisplay : public UWidget
{
public:
	struct FSubtitleFormat                       Format;                                            // 0x178(0x4)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_43E4[0x4];                                     // Fixing Size After Last Property..
	class USubtitleDisplayOptions*               Options;                                           // 0x180(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        WrapTextAt;                                        // 0x188(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPreviewMode;                                      // 0x18C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_43E5[0x3];                                     // Fixing Size After Last Property..
	class FText                                  PreviewText;                                       // 0x190(0x18)(Edit, NativeAccessSpecifierPublic)
	uint8                                        Pad_43E6[0x8];                                     // Fixing Size After Last Property..
	struct FTextBlockStyle                       GeneratedStyle;                                    // 0x1B0(0x310)(Transient, NativeAccessSpecifierPrivate)
	struct FSlateBrush                           GeneratedBackgroundBorder;                         // 0x4C0(0xC0)(Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_43E7[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SubtitleDisplay");
		return Clss;
	}

	bool HasSubtitles();
};

// 0x3F8 (0x420 - 0x28)
// Class SubtitlesWidgets.SubtitleDisplayNative
class USubtitleDisplayNative : public UObject
{
public:
	uint8                                        Pad_43E8[0x8];                                     // Fixing Size After Last Property..
	class USubtitleDisplayOptions*               Options;                                           // 0x30(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_43E9[0x8];                                     // Fixing Size After Last Property..
	struct FTextBlockStyle                       GeneratedStyle;                                    // 0x40(0x310)(Transient, NativeAccessSpecifierPrivate)
	struct FSlateBrush                           GeneratedBackgroundBorder;                         // 0x350(0xC0)(Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_43EA[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SubtitleDisplayNative");
		return Clss;
	}

};

// 0x30 (0x58 - 0x28)
// Class SubtitlesWidgets.FortMediaSubtitlesPlayer
class UFortMediaSubtitlesPlayer : public UObject
{
public:
	uint8                                        Pad_43EB[0x8];                                     // Fixing Size After Last Property..
	class UOverlays*                             SourceSubtitles;                                   // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_43EC[0x20];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortMediaSubtitlesPlayer");
		return Clss;
	}

	void Stop();
	void SetSubtitles(class UOverlays* Subtitles);
	void Play();
	void BindToMediaPlayer(class UMediaPlayer* InMediaPlayer);
};

// 0x20 (0x50 - 0x30)
// Class SubtitlesWidgets.SubtitleDisplaySubsystem
class USubtitleDisplaySubsystem : public UGameInstanceSubsystem
{
public:
	uint8                                        Pad_43ED[0x18];                                    // Fixing Size After Last Property..
	struct FSubtitleFormat                       SubtitleFormat;                                    // 0x48(0x4)(NoDestructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_43EE[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("SubtitleDisplaySubsystem");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
