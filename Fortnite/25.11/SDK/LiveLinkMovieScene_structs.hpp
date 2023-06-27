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

// 0x58 (0x58 - 0x0)
// ScriptStruct LiveLinkMovieScene.LiveLinkPropertyData
struct FLiveLinkPropertyData
{
public:
	class FName                                  PropertyName;                                      // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2707[0x4];                                     // Fixing Size After Last Property..
	TArray<struct FMovieSceneFloatChannel>       FloatChannel;                                      // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMovieSceneStringChannel>      StringChannel;                                     // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMovieSceneIntegerChannel>     IntegerChannel;                                    // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMovieSceneBoolChannel>        BoolChannel;                                       // 0x38(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FMovieSceneByteChannel>        ByteChannel;                                       // 0x48(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct LiveLinkMovieScene.LiveLinkSubSectionData
struct FLiveLinkSubSectionData
{
public:
	TArray<struct FLiveLinkPropertyData>         Properties;                                        // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x80 (0xB8 - 0x38)
// ScriptStruct LiveLinkMovieScene.MovieSceneLiveLinkSectionTemplate
struct FMovieSceneLiveLinkSectionTemplate : public FMovieScenePropertySectionTemplate
{
public:
	struct FLiveLinkSubjectPreset                SubjectPreset;                                     // 0x38(0x38)(NoDestructor, NativeAccessSpecifierPublic)
	TArray<bool>                                 ChannelMask;                                       // 0x70(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FLiveLinkSubSectionData>       SubSectionsData;                                   // 0x80(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2708[0x28];                                    // Fixing Size Of Struct..
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
