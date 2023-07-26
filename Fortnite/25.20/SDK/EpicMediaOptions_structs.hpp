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

// 0x108 (0x108 - 0x0)
// ScriptStruct EpicMediaOptions.EpicMediaOptions
struct FEpicMediaOptions
{
public:
	uint8                                        Pad_80B6[0x4];                                     // Fixing Size After Last Property..
	int32                                        FrameRate;                                         // 0x4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxResolutionForMediaStreaming;                    // 0x8(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxElectraVerticalResolutionOf60fpsVideos;         // 0xC(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxElectraVerticalResolutionOfWindowsSWD;          // 0x10(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bElectraLiveUseConservativePresentationOffset;     // 0x14(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bElectraUseDedicatedMediaSegmentDownloadThreads;   // 0x15(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_80B7[0x2];                                     // Fixing Size After Last Property..
	double                                       ElectraLivePresentationOffset;                     // 0x18(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       ElectraLiveAudioPresentationOffset;                // 0x20(0x8)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDisableBlastURLStreamSource;                      // 0x28(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsCN;                                             // 0x29(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_80B8[0x6];                                     // Fixing Size After Last Property..
	TArray<class FString>                        VideoEVMap;                                        // 0x30(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<float>                                CDNDistribution;                                   // 0x40(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        VODHostNames;                                      // 0x50(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        VODHostNamesCN;                                    // 0x60(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        LiveHostNames;                                     // 0x70(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        LiveHostNamesCN;                                   // 0x80(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        VODHostNamesDev;                                   // 0x90(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        LiveHostNamesDev;                                  // 0xA0(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        VODHostNamesHF;                                    // 0xB0(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        LiveHostNamesHF;                                   // 0xC0(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        VODHostNamesCNHF;                                  // 0xD0(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        LiveHostNamesCNHF;                                 // 0xE0(0x10)(BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bUseQuicksilverEntryPoint;                         // 0xF0(0x1)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_80B9[0x17];                                    // Fixing Size Of Struct..
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
