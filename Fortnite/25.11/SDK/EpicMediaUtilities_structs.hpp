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

// 0x30 (0x30 - 0x0)
// ScriptStruct EpicMediaUtilities.EpicMediaImageDataExt
struct FEpicMediaImageDataExt
{
public:
	class FString                                URL;                                               // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FullUrl;                                           // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Width;                                             // 0x20(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Height;                                            // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        AspectRatio;                                       // 0x28(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3712[0x4];                                     // Fixing Size Of Struct..
};

// 0x28 (0x28 - 0x0)
// ScriptStruct EpicMediaUtilities.EpicMediaAudioOnlyPeriodDataExt
struct FEpicMediaAudioOnlyPeriodDataExt
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bColorSet;                                         // 0x10(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3713[0x7];                                     // Fixing Size After Last Property..
	double                                       StartFrame;                                        // 0x18(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       EndFrame;                                          // 0x20(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct EpicMediaUtilities.EpicMediaVolumeChangeDataExt
struct FEpicMediaVolumeChangeDataExt
{
public:
	double                                       Frame;                                             // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Level;                                             // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Lerp;                                              // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3714[0x10];                                    // Fixing Size Of Struct..
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct EpicMediaUtilities.EpicMediaPlaylistExt
struct FEpicMediaPlaylistExt
{
public:
	class FString                                Language;                                          // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Type;                                              // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                URL;                                               // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                RelUrl;                                            // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Data;                                              // 0x40(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       Duration;                                          // 0x50(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       FPS;                                               // 0x58(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FEpicMediaImageDataExt>        Images;                                            // 0x60(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FEpicMediaAudioOnlyPeriodDataExt> AudioOnlyPeriods;                                  // 0x70(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FEpicMediaVolumeChangeDataExt> VolumeChanges;                                     // 0x80(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	double                                       SkipBoundaryTime;                                  // 0x90(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       PreEndEventTime;                                   // 0x98(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct EpicMediaUtilities.EpicMediaRegionLockExt
struct FEpicMediaRegionLockExt
{
public:
	bool                                         AllowOnError;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3715[0x7];                                     // Fixing Size After Last Property..
	class FString                                Type;                                              // 0x8(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        AllowList;                                         // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        DenyList;                                          // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<class FString, class FString>           Limits;                                            // 0x38(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	class FString                                ContentId;                                         // 0x88(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3716[0x10];                                    // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// ScriptStruct EpicMediaUtilities.EpicMediaAudioMetadataTrackIndicesExt
struct FEpicMediaAudioMetadataTrackIndicesExt
{
public:
	TArray<int32>                                Indices;                                           // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct EpicMediaUtilities.EpicMediaAudioMetadataTrackExt
struct FEpicMediaAudioMetadataTrackExt
{
public:
	TMap<class FString, struct FEpicMediaAudioMetadataTrackIndicesExt> TrackData;                                         // 0x0(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct EpicMediaUtilities.EpicMediaAudioMetadataDataExt
struct FEpicMediaAudioMetadataDataExt
{
public:
	class FString                                ShortName;                                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SongID;                                            // 0x10(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3717[0x4];                                     // Fixing Size After Last Property..
	class FString                                Title;                                             // 0x18(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Artist;                                            // 0x28(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Album;                                             // 0x38(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Genre;                                             // 0x48(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Year;                                              // 0x58(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3718[0x4];                                     // Fixing Size After Last Property..
	TMap<class FString, int32>                   Difficulty;                                        // 0x60(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x130 (0x130 - 0x0)
// ScriptStruct EpicMediaUtilities.EpicMediaAudioMetadataExt
struct FEpicMediaAudioMetadataExt
{
public:
	TMap<class FString, struct FEpicMediaAudioMetadataTrackIndicesExt> Tracks;                                            // 0x0(0x50)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	TArray<float>                                Pans;                                              // 0x50(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                Volumes;                                           // 0x60(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<uint8>                                Midi;                                              // 0x70(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FEpicMediaAudioMetadataDataExt        MetadataData;                                      // 0x80(0xB0)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

// 0x278 (0x278 - 0x0)
// ScriptStruct EpicMediaUtilities.EpicMediaMetadataExt
struct FEpicMediaMetadataExt
{
public:
	TArray<struct FEpicMediaPlaylistExt>         Playlists;                                         // 0x0(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FEpicMediaPlaylistExt>         StateStreamPlaylists;                              // 0x10(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FEpicMediaPlaylistExt>         SelectedPlaylists;                                 // 0x20(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                Type;                                              // 0x30(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Envelope;                                          // 0x40(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Limits;                                            // 0x50(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Subtitles;                                         // 0x60(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                UserContentProtection;                             // 0x70(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Sharelock;                                         // 0x80(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         AudioOnly;                                         // 0x81(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3719[0x2];                                     // Fixing Size After Last Property..
	float                                        AspectRatio;                                       // 0x84(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         PartySync;                                         // 0x88(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Live;                                              // 0x89(0x1)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_371A[0x6];                                     // Fixing Size After Last Property..
	class FString                                DenyHTTPCode;                                      // 0x90(0x10)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FEpicMediaRegionLockExt               RegionLockData;                                    // 0xA0(0xA8)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
	struct FEpicMediaAudioMetadataExt            AudioMetadata;                                     // 0x148(0x130)(BlueprintVisible, BlueprintReadOnly, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
