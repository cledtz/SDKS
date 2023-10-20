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

// 0x10 (0x48 - 0x38)
// ScriptStruct MediaCompositing.MovieSceneMediaPlayerPropertySectionTemplate
struct FMovieSceneMediaPlayerPropertySectionTemplate : public FMovieScenePropertySectionTemplate
{
public:
	class UMediaSource*                          MediaSource;                                       // 0x38(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FFrameNumber                          SectionStartFrame;                                 // 0x40(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bLoop;                                             // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1AF1[0x3];                                     // Fixing Size Of Struct
};

// 0x160 (0x160 - 0x0)
// ScriptStruct MediaCompositing.MovieSceneMediaSectionParams
struct FMovieSceneMediaSectionParams
{
public:
	class UMediaSoundComponent*                  MediaSoundComponent;                               // 0x0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMediaSource*                          MediaSource;                                       // 0x8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneObjectBindingID            MediaSourceProxy;                                  // 0x10(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MediaSourceProxyIndex;                             // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AF5[0x4];                                     // Fixing Size After Last Property 
	class UMediaTexture*                         MediaTexture;                                      // 0x30(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMediaPlayer*                          MediaPlayer;                                       // 0x38(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                          SectionStartFrame;                                 // 0x40(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                          SectionEndFrame;                                   // 0x44(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLooping;                                          // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1AF9[0x3];                                     // Fixing Size After Last Property 
	struct FFrameNumber                          StartFrameOffset;                                  // 0x4C(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneFloatChannel               ProxyTextureBlend;                                 // 0x50(0x110)(NativeAccessSpecifierPublic)
};

// 0x168 (0x188 - 0x20)
// ScriptStruct MediaCompositing.MovieSceneMediaSectionTemplate
struct FMovieSceneMediaSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FMovieSceneMediaSectionParams         Params;                                            // 0x20(0x160)(ContainsInstancedReference, NativeAccessSpecifierPrivate)
	class UMovieSceneMediaSection*               MediaSection;                                      // 0x180(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

}


