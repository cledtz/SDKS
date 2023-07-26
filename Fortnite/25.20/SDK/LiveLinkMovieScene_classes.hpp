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

// 0x140 (0x230 - 0xF0)
// Class LiveLinkMovieScene.MovieSceneLiveLinkSection
class UMovieSceneLiveLinkSection : public UMovieSceneSection
{
public:
	struct FLiveLinkSubjectPreset                SubjectPreset;                                     // 0xF0(0x38)(NoDestructor, NativeAccessSpecifierPublic)
	TArray<bool>                                 ChannelMask;                                       // 0x128(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class UMovieSceneLiveLinkSubSection*> Subsections;                                       // 0x138(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F53[0x10];                                    // Fixing Size After Last Property..
	class FName                                  SubjectName;                                       // 0x158(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F54[0x4];                                     // Fixing Size After Last Property..
	struct FLiveLinkFrameData                    TemplateToPush;                                    // 0x160(0x90)(Deprecated, NativeAccessSpecifierPublic)
	struct FLiveLinkRefSkeleton                  RefSkeleton;                                       // 0x1F0(0x20)(Deprecated, NativeAccessSpecifierPublic)
	TArray<class FName>                          CurveNames;                                        // 0x210(0x10)(ZeroConstructor, Deprecated, NativeAccessSpecifierPublic)
	TArray<struct FMovieSceneFloatChannel>       PropertyFloatChannels;                             // 0x220(0x10)(ZeroConstructor, Deprecated, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneLiveLinkSection");
		return Clss;
	}

};

// 0x28 (0x50 - 0x28)
// Class LiveLinkMovieScene.MovieSceneLiveLinkSubSection
class UMovieSceneLiveLinkSubSection : public UObject
{
public:
	struct FLiveLinkSubSectionData               SubSectionData;                                    // 0x28(0x10)(NativeAccessSpecifierPublic)
	TSubclassOf<class ULiveLinkRole>             SubjectRole;                                       // 0x38(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F55[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneLiveLinkSubSection");
		return Clss;
	}

};

// 0x10 (0x60 - 0x50)
// Class LiveLinkMovieScene.MovieSceneLiveLinkSubSectionAnimation
class UMovieSceneLiveLinkSubSectionAnimation : public UMovieSceneLiveLinkSubSection
{
public:
	uint8                                        Pad_1F56[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneLiveLinkSubSectionAnimation");
		return Clss;
	}

};

// 0x10 (0x60 - 0x50)
// Class LiveLinkMovieScene.MovieSceneLiveLinkSubSectionBasicRole
class UMovieSceneLiveLinkSubSectionBasicRole : public UMovieSceneLiveLinkSubSection
{
public:
	uint8                                        Pad_1F57[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneLiveLinkSubSectionBasicRole");
		return Clss;
	}

};

// 0x10 (0x60 - 0x50)
// Class LiveLinkMovieScene.MovieSceneLiveLinkSubSectionProperties
class UMovieSceneLiveLinkSubSectionProperties : public UMovieSceneLiveLinkSubSection
{
public:
	uint8                                        Pad_1F58[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneLiveLinkSubSectionProperties");
		return Clss;
	}

};

// 0x10 (0xD0 - 0xC0)
// Class LiveLinkMovieScene.MovieSceneLiveLinkTrack
class UMovieSceneLiveLinkTrack : public UMovieScenePropertyTrack
{
public:
	uint8                                        Pad_1F59[0x8];                                     // Fixing Size After Last Property..
	TSubclassOf<class ULiveLinkRole>             TrackRole;                                         // 0xC8(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneLiveLinkTrack");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
