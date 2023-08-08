#pragma once

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

// 0x18 (0x18 - 0x0)
// ScriptStruct MeshCosmeticsUI.FortVariantSprayCustomizerChannelOptions
struct FFortVariantSprayCustomizerChannelOptions
{
public:
	struct FRotator                              RotationOffset;                                    // 0x0(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct MeshCosmeticsUI.FortVariantSprayCustomizerCosmeticOptions
struct FFortVariantSprayCustomizerCosmeticOptions
{
public:
	TArray<TSoftObjectPtr<class UFortItemDefinition>> ItemShopPreviewStyles;                             // 0x0(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TMap<struct FGameplayTag, struct FFortVariantSprayCustomizerChannelOptions> ChannelOptions;                                    // 0x10(0x50)(Edit, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct MeshCosmeticsUI.FortVariantRedirectorTileLoadedEmoteToRandomize
struct FFortVariantRedirectorTileLoadedEmoteToRandomize
{
public:
	class UFortItemDefinition*                   LoadedEmote;                                       // 0x0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_52CF[0x8];                                     // Fixing Size Of Struct
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
