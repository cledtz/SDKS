#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EOpenIconSource : uint8
{
	FontAwesome                    = 0,
	ForkAwesome                    = 1,
	MaterialDesign                 = 2,
	FontAudio                      = 3,
	KenneyIcons                    = 4,
	Count                          = 5,
	EOpenIconSource_MAX            = 6,
};

enum class EOpenIconTextureSize : uint8
{
	Size1                          = 0,
	Size2                          = 1,
	Size3                          = 2,
	Size4                          = 3,
	Size5                          = 4,
	EOpenIconTextureSize_MAX       = 5,
};

enum class EFA_Category : uint8
{
	All                            = 0,
	Brands                         = 1,
	Regular                        = 2,
	Solid                          = 3,
	EFA_MAX                        = 4,
};

enum class EMD_Category : uint8
{
	All                            = 0,
	Action                         = 1,
	Alert                          = 2,
	Av                             = 3,
	Communication                  = 4,
	Content                        = 5,
	Device                         = 6,
	Editor                         = 7,
	File                           = 8,
	Home                           = 9,
	Hardware                       = 10,
	Image                          = 11,
	Maps                           = 12,
	Navigation                     = 13,
	Notification                   = 14,
	Places                         = 15,
	Social                         = 16,
	Toggle                         = 17,
	EMD_MAX                        = 18,
};

enum class EFK_Category : uint8
{
	All                            = 0,
	Accessibility                  = 1,
	Chart                          = 2,
	Currency                       = 3,
	FileType                       = 4,
	FormControl                    = 5,
	Gender                         = 6,
	Hand                           = 7,
	Medical                        = 8,
	Payment                        = 9,
	Spinner                        = 10,
	TextEditor                     = 11,
	Transportation                 = 12,
	VideoPlayer                    = 13,
	WebApplication                 = 14,
	EFK_MAX                        = 15,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x38 (0x40 - 0x8)
// ScriptStruct OpenIcon.OpenIconData
struct FOpenIconData : public FTableRowBase
{
public:
	enum class EOpenIconSource                   Source;                                            // 0x8(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1123[0x7];                                     // Fixing Size After Last Property 
	class FString                                IconName;                                          // 0x10(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                IconCategory;                                      // 0x20(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                IconUcode;                                         // 0x30(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x48 - 0x8)
// ScriptStruct OpenIcon.CustomIconData
struct FCustomIconData : public FTableRowBase
{
public:
	class FString                                IconPack;                                          // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                IconName;                                          // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                IconCategory;                                      // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                IconUcode;                                         // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


