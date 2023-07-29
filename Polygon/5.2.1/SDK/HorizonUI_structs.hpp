#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EHorizonDialogueTextOverflowWrapMethod : uint8
{
	Normal                         = 0,
	BreakAll                       = 1,
	EHorizonDialogueTextOverflowWrapMethod_MAX = 2,
};

enum class EHorizonDialogueTextOverflowWarpMethod_DEPRECATED : uint8
{
	Normal                         = 0,
	BreakAll                       = 1,
	Invalidated                    = 2,
	EHorizonDialogueTextOverflowWarpMethod_MAX = 3,
};

enum class EHorizonDialogueSegmentType : uint8
{
	Invalidated                    = 0,
	Text                           = 1,
	NewLine                        = 2,
	NewPage                        = 3,
	Image                          = 4,
	PaperFlipbook                  = 5,
	Material                       = 6,
	HyperText                      = 7,
	Custom                         = 8,
	EHorizonDialogueSegmentType_MAX = 9,
};

enum class EHorizonUIInputMode : uint8
{
	Invalidated                    = 0,
	GameAndUI                      = 1,
	UIOnly                         = 2,
	GameOnly                       = 3,
	EHorizonUIInputMode_MAX        = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x68 (0x68 - 0x0)
// ScriptStruct HorizonUI.HorizonDialogueBlockInfo
struct FHorizonDialogueBlockInfo
{
public:
	class FString                                MsgText;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A6D[0x10];                                     // Fixing Size After Last Property
	class FString                                RubyText;                                          // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A6E[0x8];                                      // Fixing Size After Last Property
	int32                                        CurrentCharIndex;                                  // 0x38(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SegmentReferenceIndex;                             // 0x3C(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Name;                                              // 0x40(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             BlockSize;                                         // 0x48(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             RubyTextBlockSize;                                 // 0x58(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct HorizonUI.HorizonDialogueRubyTextInfo
struct FHorizonDialogueRubyTextInfo
{
public:
	uint8                                        Pad_A6F[0x18];                                     // Fixing Size After Last Property
	struct FSlateColor                           ColorAndOpacity;                                   // 0x18(0x14)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	uint8                                        Pad_A70[0x4];                                      // Fixing Size After Last Property
	struct FSlateFontInfo                        Font;                                              // 0x30(0x58)(BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ShadowOffset;                                      // 0x88(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateColor                           ShadowColorAndOpacity;                             // 0x98(0x14)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FMargin                               PaddingMargin;                                     // 0xAC(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_A71[0x4];                                      // Fixing Size Of Struct
};

// 0x270 (0x270 - 0x0)
// ScriptStruct HorizonUI.HorizonDialogueSegmentInfo
struct FHorizonDialogueSegmentInfo
{
public:
	class FString                                Text;                                              // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateColor                           ColorAndOpacity;                                   // 0x10(0x14)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	uint8                                        Pad_A73[0x4];                                      // Fixing Size After Last Property
	struct FSlateFontInfo                        Font;                                              // 0x28(0x58)(BlueprintVisible, BlueprintReadOnly, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             ShadowOffset;                                      // 0x80(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateColor                           ShadowColorAndOpacity;                             // 0x90(0x14)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	float                                        DialogueMsgSpeed;                                  // 0xA4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DialogueMsgWait;                                   // 0xA8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A75[0x4];                                      // Fixing Size After Last Property
	struct FMargin                               PaddingMargin;                                     // 0xB0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FSlateColor                           HypertextHoveredColor;                             // 0xC0(0x14)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FSlateColor                           HypertextVisitedColor;                             // 0xD4(0x14)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TSubclassOf<class UHorizonButton>            BackgroundButtonClass;                             // 0xE8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DialogueSoundVolumeMultiplier;                     // 0xF0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DialogueSoundPitchMultiplier;                      // 0xF4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DialogueSoundStartTime;                            // 0xF8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A76[0x4];                                      // Fixing Size After Last Property
	class USoundBase*                            DialogueSound;                                     // 0x100(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A77[0x88];                                     // Fixing Size After Last Property
	class FString                                EventPayload;                                      // 0x190(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        Tags;                                              // 0x1A0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FHorizonDialogueRubyTextInfo          RubyTextInfo;                                      // 0x1B0(0xC0)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct HorizonUI.HorizonDialogueDialoguePageResult
struct FHorizonDialogueDialoguePageResult
{
public:
	int32                                        PageIndex;                                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct HorizonUI.HorizonDialogueHypertextResult
struct FHorizonDialogueHypertextResult
{
public:
	class UHorizonDialogueMsgTextBlock*          DialogueMsgTextBlock;                              // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SegmentIndex;                                      // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LineIndex;                                         // 0xC(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        BlockIndex;                                        // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A7B[0x4];                                      // Fixing Size After Last Property
	class FString                                HypertextReference;                                // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, class FString>           UrlEncodeMap;                                      // 0x28(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct HorizonUI.HorizonDialogueSegmentInfoRubyTextStyle
struct FHorizonDialogueSegmentInfoRubyTextStyle
{
public:
	TArray<class FString>                        Text;                                              // 0x0(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FSlateColor>                   ColorAndOpacity;                                   // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FSlateFontInfo>                Font;                                              // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector2D>                     ShadowOffset;                                      // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FSlateColor>                   ShadowColorAndOpacity;                             // 0x40(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMargin>                       PaddingMargin;                                     // 0x50(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x278 (0x278 - 0x0)
// ScriptStruct HorizonUI.HorizonDialogueSegmentInfoStyle
struct FHorizonDialogueSegmentInfoStyle
{
public:
	class FName                                  StyleName;                                         // 0x0(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        Text;                                              // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FSlateColor>                   ColorAndOpacity;                                   // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FSlateFontInfo>                Font;                                              // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                FontSize;                                          // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          TypefaceFontName;                                  // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector2D>                     ShadowOffset;                                      // 0x58(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FSlateColor>                   ShadowColorAndOpacity;                             // 0x68(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                DialogueMsgSpeed;                                  // 0x78(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                DialogueMsgWait;                                   // 0x88(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMargin>                       PaddingMargin;                                     // 0x98(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        HypertextReference;                                // 0xA8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FSlateColor>                   HypertextHoveredColor;                             // 0xB8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FSlateColor>                   HypertextVisitedColor;                             // 0xC8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<TSubclassOf<class UHorizonButton>>    BackgroundButtonClass;                             // 0xD8(0x10)(Edit, BlueprintVisible, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UTexture2D>             Texture2D;                                         // 0xE8(0x30)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UMaterial>              Material;                                          // 0x118(0x30)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UPaperSprite>           PaperSprite;                                       // 0x148(0x30)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class USoundBase>             DialogueSound;                                     // 0x178(0x30)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<float>                                DialogueSoundVolumeMultiplier;                     // 0x1A8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                DialogueSoundPitchMultiplier;                      // 0x1B8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                DialogueSoundStartTime;                            // 0x1C8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UPaperFlipbook>         PaperFlipbook;                                     // 0x1D8(0x30)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVector2D>                     ImageSize;                                         // 0x208(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FHorizonDialogueSegmentInfoRubyTextStyle RubyTextStyleInfo;                                 // 0x218(0x60)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct HorizonUI.HorizonDialogueBlinkingCursorInfo
struct FHorizonDialogueBlinkingCursorInfo
{
public:
	TSoftObjectPtr<class UPaperFlipbook>         Flipbook;                                          // 0x0(0x30)(Edit, BlueprintVisible, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSlateColor                           ColorAndOpacity;                                   // 0x30(0x14)(Edit, BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	bool                                         bUseSize;                                          // 0x44(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A84[0x3];                                      // Fixing Size After Last Property
	struct FVector2D                             Size;                                              // 0x48(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             PaddingPos;                                        // 0x58(0x10)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A85[0x8];                                      // Fixing Size Of Struct
};

// 0x100 (0x100 - 0x0)
// ScriptStruct HorizonUI.HorizonMultiToggleButtonState
struct FHorizonMultiToggleButtonState
{
public:
	class FText                                  Text;                                              // 0x0(0x18)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
	struct FLinearColor                          TextColor;                                         // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A87[0x8];                                      // Fixing Size After Last Property
	struct FSlateBrush                           Brush;                                             // 0x30(0xD0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct HorizonUI.HorizonDialogueLineInfo
struct FHorizonDialogueLineInfo
{
public:
	int32                                        CurrentDialogueBlockIndex;                         // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxLineHeight;                                     // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LineWidth;                                         // 0x8(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A8A[0x4];                                      // Fixing Size After Last Property
	TArray<struct FHorizonDialogueBlockInfo>     DialogueBlockInfoList;                             // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FVector2D                             Position;                                          // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bNewPage;                                          // 0x30(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_A8B[0x7];                                      // Fixing Size Of Struct
};

// 0xC (0xC - 0x0)
// ScriptStruct HorizonUI.HorizonDialoguePageInfo
struct FHorizonDialoguePageInfo
{
public:
	uint8                                        Pad_A8C[0xC];                                      // Fixing Size Of Struct
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
