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

enum class EValkyrieProjectDescriptorFileVersion : uint8
{
	Invalid                        = 0,
	Initial                        = 1,
	AddProjectMetadata             = 2,
	AddedCompatibilityLabel        = 3,
	AddBindings                    = 4,
	AddEditorPermissions           = 5,
	AddEpicApp                     = 6,
	AddDataSets                    = 7,
	AddVersionSuffix               = 8,
	AddProjectKind                 = 9,
	AddMetaDataTags                = 10,
	RevertMetaDataTags             = 11,
	AddDocsUrl                     = 12,
	AddTemplateCategory            = 13,
	BranchDependencies             = 14,
	LatestPlusOne                  = 15,
	Latest                         = 14,
	EValkyrieProjectDescriptorFileVersion_MAX = 16,
};

enum class EValkyrieProjectReferenceDescriptorFileVersion : uint8
{
	Invalid                        = 0,
	Initial                        = 1,
	AddLinkCode                    = 2,
	LatestPlusOne                  = 3,
	Latest                         = 2,
	EValkyrieProjectReferenceDescriptorFileVersion_MAX = 4,
};

enum class EValkyrieProjectKind : uint8
{
	Island                         = 0,
	Library                        = 1,
	Count                          = 2,
	Unspecified                    = 3,
	Default                        = 0,
	EValkyrieProjectKind_MAX       = 4,
};

enum class EValkyrieProjectTemplateCategory : uint8
{
	UserGenerated                  = 0,
	FeatureExample                 = 1,
	SampleProject                  = 2,
	Count                          = 3,
	Default                        = 0,
	EValkyrieProjectTemplateCategory_MAX = 4,
};

enum class EConsumerRole : uint8
{
	Server                         = 0,
	Client                         = 1,
	Editor                         = 2,
	EConsumerRole_MAX              = 3,
};

enum class EVkLinkPublishMode : uint8
{
	Live                           = 0,
	Playtest                       = 1,
	EVkLinkPublishMode_MAX         = 2,
};

enum class EVkIdType : uint8
{
	Account                        = 0,
	Team                           = 1,
	EVkIdType_MAX                  = 2,
};

enum class EVkTicketStatus : uint8
{
	None                           = 0,
	Succeeded                      = 1,
	Running                        = 2,
	Failed                         = 3,
	EVkTicketStatus_MAX            = 4,
};

enum class EVkModuleAccess : uint8
{
	Private                        = 0,
	Protected                      = 1,
	Public                         = 2,
	EVkModuleAccess_MAX            = 3,
};

enum class EVkValidationFlags : uint8
{
	None                           = 0,
	VF_IgnoreValidation            = 1,
	VF_AllowMissingGameFeatureDataAsset = 2,
	VF_AllowEngineContent          = 4,
	VF_AllowGameContent            = 8,
	VF_NoPreCheckVerse             = 16,
	EVkValidationFlags_MAX         = 17,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x40 (0x40 - 0x0)
// ScriptStruct VkEngineTypes.VkPublishedLink
struct FVkPublishedLink
{
public:
	class FString                                LinkCode;                                          // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LinkVersion;                                       // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_35F8[0x4];                                     // Fixing Size After Last Property..
	struct FDateTime                             LastPublished;                                     // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Base;                                              // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CommitMessage;                                     // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct VkEngineTypes.VkLaunchData_JoinMatchmakingSession
struct FVkLaunchData_JoinMatchmakingSession
{
public:
	class FString                                SessionId;                                         // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct VkEngineTypes.ValkyrieProjectDescriptorIOContext
struct FValkyrieProjectDescriptorIOContext
{
public:
	uint8                                        Pad_35F9[0x40];                                    // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// ScriptStruct VkEngineTypes.ValkyriePluginReferenceDescriptor
struct FValkyriePluginReferenceDescriptor
{
public:
	class FString                                Name;                                              // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsRoot;                                           // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsPublic;                                         // 0x11(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bEnabled;                                          // 0x12(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_35FA[0x5];                                     // Fixing Size Of Struct..
};

// 0x38 (0x38 - 0x0)
// ScriptStruct VkEngineTypes.ValkyrieProjectReferenceDescriptor
struct FValkyrieProjectReferenceDescriptor
{
public:
	uint8                                        FileVersion;                                       // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_35FB[0x7];                                     // Fixing Size After Last Property..
	class FString                                ID;                                                // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FOnlineLinkId                         LinkCode;                                          // 0x18(0x18)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bEnabled;                                          // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_35FC[0x7];                                     // Fixing Size Of Struct..
};

// 0x60 (0x60 - 0x0)
// ScriptStruct VkEngineTypes.ValkyrieProjectBindingsDescriptor
struct FValkyrieProjectBindingsDescriptor
{
public:
	class FString                                ProjectID;                                         // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, class FString>           Modules;                                           // 0x10(0x50)(NativeAccessSpecifierPublic)
};

// 0x240 (0x240 - 0x0)
// ScriptStruct VkEngineTypes.ValkyrieProjectDescriptor
struct FValkyrieProjectDescriptor
{
public:
	uint8                                        FileVersion;                                       // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_35FD[0x7];                                     // Fixing Size After Last Property..
	class FString                                VersionSuffix;                                     // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                Title;                                             // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                Description;                                       // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                KeyArt;                                            // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                DocsUrl;                                           // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class FString>                        Attributions;                                      // 0x58(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	enum class EValkyrieProjectKind              Kind;                                              // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class EValkyrieProjectTemplateCategory  TemplateCategory;                                  // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                CompatibilityVersion;                              // 0x70(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class FString>                        EditorPermissions;                                 // 0x80(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	class FString                                EpicApp;                                           // 0x90(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        SortPriority;                                      // 0xA0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_35FE[0x4];                                     // Fixing Size After Last Property..
	TArray<struct FValkyriePluginReferenceDescriptor> Plugins;                                           // 0xA8(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FValkyrieProjectReferenceDescriptor> Dependencies;                                      // 0xB8(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TMap<class FString, struct FJsonObjectWrapper> DataSets;                                          // 0xC8(0x50)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_35FF[0xC8];                                    // Fixing Size After Last Property..
	struct FValkyrieProjectBindingsDescriptor    Bindings;                                          // 0x1E0(0x60)(NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct VkEngineTypes.VkNamedId
struct FVkNamedId
{
public:
	class FString                                Name;                                              // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ID;                                                // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct VkEngineTypes.VkTypedId
struct FVkTypedId
{
public:
	class FString                                ID;                                                // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVkIdType                         Type;                                              // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3600[0x7];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// ScriptStruct VkEngineTypes.VkVersionedLinkCode
struct FVkVersionedLinkCode
{
public:
	class FString                                Mnemonic;                                          // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Version;                                           // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3601[0x4];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// ScriptStruct VkEngineTypes.VkContentFilter
struct FVkContentFilter
{
public:
	class FString                                Platform;                                          // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct VkEngineTypes.VkArtifactOption
struct FVkArtifactOption
{
public:
	class FString                                ArtifactId;                                        // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EConsumerRole                     Role;                                              // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3602[0x7];                                     // Fixing Size After Last Property..
	struct FVkContentFilter                      Filter;                                            // 0x18(0x10)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct VkEngineTypes.VkFoundMatchingArtifact
struct FVkFoundMatchingArtifact
{
public:
	class FString                                ArtifactId;                                        // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Name;                                              // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVkContentFilter                      Filter;                                            // 0x20(0x10)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct VkEngineTypes.VkModuleVersion
struct FVkModuleVersion
{
public:
	class FString                                ModuleId;                                          // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Version;                                           // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3603[0x4];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// ScriptStruct VkEngineTypes.VkModuleVersionRef
struct FVkModuleVersionRef
{
public:
	class FString                                ModuleId;                                          // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Version;                                           // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3604[0x4];                                     // Fixing Size Of Struct..
};

// 0x10 (0x28 - 0x18)
// ScriptStruct VkEngineTypes.VkModuleVersionWithArtifacts
struct FVkModuleVersionWithArtifacts : public FVkModuleVersion
{
public:
	TArray<struct FVkArtifactOption>             Artifacts;                                         // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xF0 (0xF0 - 0x0)
// ScriptStruct VkEngineTypes.VkModuleDoc
struct FVkModuleDoc
{
public:
	class FString                                ModuleId;                                          // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             Created;                                           // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             Updated;                                           // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVkTypedId                            Author;                                            // 0x20(0x18)(NativeAccessSpecifierPublic)
	class FString                                ProjectID;                                         // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ModuleName;                                        // 0x48(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ContentType;                                       // 0x58(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<enum class EConsumerRole, bool>         Relevance;                                         // 0x68(0x50)(NativeAccessSpecifierPublic)
	class FString                                AliasForModuleId;                                  // 0xB8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FJsonObjectWrapper                    Meta;                                              // 0xC8(0x20)(NativeAccessSpecifierPublic)
	int32                                        LatestVersion;                                     // 0xE8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3605[0x4];                                     // Fixing Size Of Struct..
};

// 0x70 (0x70 - 0x0)
// ScriptStruct VkEngineTypes.VkContentPackage
struct FVkContentPackage
{
public:
	class FString                                ProjectID;                                         // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, class FString>           ProjectFlags;                                      // 0x10(0x50)(NativeAccessSpecifierPublic)
	TArray<struct FVkModuleVersionWithArtifacts> Content;                                           // 0x60(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct VkEngineTypes.VkModuleBinaries
struct FVkModuleBinaries
{
public:
	class FString                                BaseUrl;                                           // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Manifest;                                          // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        Files;                                             // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	double                                       TotalSizeKb;                                       // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       ManifestSizeKb;                                    // 0x38(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       ManifestDiskSizeKb;                                // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       ManifestDownloadSizeKb;                            // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// ScriptStruct VkEngineTypes.VkResolvedModule
struct FVkResolvedModule
{
public:
	class FString                                ModuleId;                                          // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Version;                                           // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3606[0x4];                                     // Fixing Size After Last Property..
	class FString                                ArtifactId;                                        // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CookJobId;                                         // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVkModuleBinaries                     Binaries;                                          // 0x38(0x50)(NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct VkEngineTypes.VkFileSize
struct FVkFileSize
{
public:
	TArray<class FString>                        Types;                                             // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int64                                        SourceSize;                                        // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        UncompressedSize;                                  // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        CompressedSize;                                    // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct VkEngineTypes.VkFileSizes
struct FVkFileSizes
{
public:
	TMap<class FString, struct FVkFileSize>      FileSizeMap;                                       // 0x0(0x50)(NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct VkEngineTypes.VkExtendedErrorParam
struct FVkExtendedErrorParam
{
public:
	class FString                                Key;                                               // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Value;                                             // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct VkEngineTypes.VkExtendedError
struct FVkExtendedError
{
public:
	class FString                                FormatKey;                                         // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FormatNs;                                          // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Message;                                           // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVkExtendedErrorParam>         Params;                                            // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct VkEngineTypes.VkExtendedErrorInformation
struct FVkExtendedErrorInformation
{
public:
	class FString                                ErrorCode;                                         // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ErrorMessage;                                      // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVkExtendedError>              AdditionalErrors;                                  // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct VkEngineTypes.VkTicketDetails
struct FVkTicketDetails
{
public:
	enum class EVkTicketStatus                   Status;                                            // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3607[0x7];                                     // Fixing Size After Last Property..
	struct FDateTime                             StartDate;                                         // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             EndDate;                                           // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVkExtendedErrorInformation           Error;                                             // 0x18(0x30)(NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct VkEngineTypes.VkVersePath
struct FVkVersePath
{
public:
	class FString                                VersePath;                                         // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                URL;                                               // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct VkEngineTypes.VkVersePathTarget
struct FVkVersePathTarget
{
public:
	class FString                                ProjectID;                                         // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVkVersionedLinkCode                  LinkCode;                                          // 0x10(0x18)(NativeAccessSpecifierPublic)
};

// 0x28 (0x48 - 0x20)
// ScriptStruct VkEngineTypes.VkResolvedVersePath
struct FVkResolvedVersePath : public FVkVersePath
{
public:
	struct FVkVersePathTarget                    Target;                                            // 0x20(0x28)(NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct VkEngineTypes.VkContentManifest
struct FVkContentManifest
{
public:
	TArray<struct FVkResolvedModule>             Content;                                           // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct VkEngineTypes.VkBuildVersion
struct FVkBuildVersion
{
public:
	class FString                                Major;                                             // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Minor;                                             // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Patch;                                             // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct VkEngineTypes.VkJobOutput
struct FVkJobOutput
{
public:
	class FString                                BaseUrl;                                           // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       TotalSizeKb;                                       // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	double                                       UserContentTotalSizeKb;                            // 0x18(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        Files;                                             // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                Manifest;                                          // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x168 (0x168 - 0x0)
// ScriptStruct VkEngineTypes.VkModuleVersionDoc
struct FVkModuleVersionDoc
{
public:
	class FString                                ModuleId;                                          // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Version;                                           // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3608[0x4];                                     // Fixing Size After Last Property..
	class FString                                ProjectID;                                         // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVkModuleAccess                   Access;                                            // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3609[0x7];                                     // Fixing Size After Last Property..
	struct FDateTime                             Created;                                           // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVkTypedId                            Author;                                            // 0x38(0x18)(NativeAccessSpecifierPublic)
	struct FJsonObjectWrapper                    Meta;                                              // 0x50(0x20)(NativeAccessSpecifierPublic)
	TArray<struct FVkModuleVersionRef>           Dependencies;                                      // 0x70(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FVkJobOutput                          StagedFiles;                                       // 0x80(0x40)(NativeAccessSpecifierPublic)
	struct FVkBuildVersion                       SourceVersion;                                     // 0xC0(0x18)(NativeAccessSpecifierPublic)
	class FString                                ContentType;                                       // 0xD8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<enum class EConsumerRole, bool>         Relevance;                                         // 0xE8(0x50)(NativeAccessSpecifierPublic)
	class FString                                ArtifactKey;                                       // 0x138(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Checksum;                                          // 0x148(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVkArtifactOption>             Artifacts;                                         // 0x158(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xC8 (0xC8 - 0x0)
// ScriptStruct VkEngineTypes.VkProjectDoc
struct FVkProjectDoc
{
public:
	class FString                                ProjectID;                                         // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             Created;                                           // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVkTypedId                            Author;                                            // 0x18(0x18)(NativeAccessSpecifierPublic)
	struct FVkTypedId                            Owner;                                             // 0x30(0x18)(NativeAccessSpecifierPublic)
	struct FJsonObjectWrapper                    Meta;                                              // 0x48(0x20)(NativeAccessSpecifierPublic)
	struct FJsonObjectWrapper                    SysMeta;                                           // 0x68(0x20)(NativeAccessSpecifierPublic)
	struct FVkPublishedLink                      LiveLink;                                          // 0x88(0x40)(NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct VkEngineTypes.VkProjectLimitsDoc
struct FVkProjectLimitsDoc
{
public:
	int64                                        PublishingMemorySize;                              // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        PublishingDownloadSize;                            // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        ProjectUploadSize;                                 // 0x10(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ModuleUploadConcurrencyLimit;                      // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_360A[0x4];                                     // Fixing Size After Last Property..
	int64                                        FileCount;                                         // 0x20(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        IndividualFileSizeKb;                              // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct VkEngineTypes.VkProjectUserInfo
struct FVkProjectUserInfo
{
public:
	class FString                                ProjectID;                                         // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AccountId;                                         // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Title;                                             // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         HasStar;                                           // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         IsNew;                                             // 0x31(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_360B[0x6];                                     // Fixing Size After Last Property..
	TMap<class FString, bool>                    Access;                                            // 0x38(0x50)(NativeAccessSpecifierPublic)
	TArray<class FString>                        Permissions;                                       // 0x88(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct VkEngineTypes.VkCreateProjectRequest
struct FVkCreateProjectRequest
{
public:
	class FString                                DesiredProjectId;                                  // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FJsonObjectWrapper                    Meta;                                              // 0x10(0x20)(NativeAccessSpecifierPublic)
	struct FJsonObjectWrapper                    SysMeta;                                           // 0x30(0x20)(NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct VkEngineTypes.VkTransferProjectRequest
struct FVkTransferProjectRequest
{
public:
	class FString                                TeamId;                                            // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct VkEngineTypes.VkCreateModuleRequest
struct FVkCreateModuleRequest
{
public:
	class FString                                ModuleName;                                        // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FJsonObjectWrapper                    Meta;                                              // 0x10(0x20)(NativeAccessSpecifierPublic)
	class FString                                ContentType;                                       // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<enum class EConsumerRole, bool>         Relevance;                                         // 0x40(0x50)(NativeAccessSpecifierPublic)
	class FString                                DesiredModuleId;                                   // 0x90(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct VkEngineTypes.VkCreateModuleVersionRequest
struct FVkCreateModuleVersionRequest
{
public:
	TMap<class FString, class FString>           RawFiles;                                          // 0x0(0x50)(NativeAccessSpecifierPublic)
	TArray<struct FVkModuleVersionRef>           Dependencies;                                      // 0x50(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FJsonObjectWrapper                    Meta;                                              // 0x60(0x20)(NativeAccessSpecifierPublic)
	class FString                                Checksum;                                          // 0x80(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ManifestLink;                                      // 0x90(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct VkEngineTypes.VkResolvedContent
struct FVkResolvedContent
{
public:
	struct FVkModuleVersionRef                   Root;                                              // 0x0(0x18)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, int32>                   Resolutions;                                       // 0x18(0x50)(NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct VkEngineTypes.VkSnapshotSaveRequest
struct FVkSnapshotSaveRequest
{
public:
	struct FVkResolvedContent                    Content;                                           // 0x0(0x68)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVkVersionedLinkCode>          Palette;                                           // 0x68(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                MapPath;                                           // 0x78(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FJsonObjectWrapper                    MatchmakingConfig;                                 // 0x88(0x20)(NativeAccessSpecifierPublic)
};

// 0xE8 (0xE8 - 0x0)
// ScriptStruct VkEngineTypes.VkProjectSnapshot
struct FVkProjectSnapshot
{
public:
	class FString                                UniqueId;                                          // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ProjectID;                                         // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AccountId;                                         // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             CreatedAt;                                         // 0x30(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DeltaFileIndex;                                    // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_360C[0x4];                                     // Fixing Size After Last Property..
	struct FVkResolvedContent                    Content;                                           // 0x40(0x68)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVkVersionedLinkCode>          Palette;                                           // 0xA8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                MapPath;                                           // 0xB8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FJsonObjectWrapper                    MatchmakingConfig;                                 // 0xC8(0x20)(NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct VkEngineTypes.VkGenerateTestcodeRequest
struct FVkGenerateTestcodeRequest
{
public:
	struct FVkResolvedContent                    Content;                                           // 0x0(0x68)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                CommitMessage;                                     // 0x68(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FJsonObjectWrapper                    MatchmakingConfig;                                 // 0x78(0x20)(NativeAccessSpecifierPublic)
	class FString                                SourceControlBase;                                 // 0x98(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct VkEngineTypes.VkProjectSearchResult
struct FVkProjectSearchResult
{
public:
	class FString                                ProjectID;                                         // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             Created;                                           // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             Accessed;                                          // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FJsonObjectWrapper                    Meta;                                              // 0x20(0x20)(NativeAccessSpecifierPublic)
	struct FJsonObjectWrapper                    SysMeta;                                           // 0x40(0x20)(NativeAccessSpecifierPublic)
	class FString                                LinkCode;                                          // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct VkEngineTypes.VkProjectInfoSlim
struct FVkProjectInfoSlim
{
public:
	struct FVkTypedId                            Owner;                                             // 0x0(0x18)(NativeAccessSpecifierPublic)
	class FString                                Title;                                             // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Description;                                       // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                RcsProvider;                                       // 0x38(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FJsonObjectWrapper                    SysMeta;                                           // 0x48(0x20)(NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// ScriptStruct VkEngineTypes.VkProjectSearchResultSlim
struct FVkProjectSearchResultSlim
{
public:
	class FString                                ProjectID;                                         // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             Date;                                              // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVkProjectInfoSlim                    Info;                                              // 0x18(0x68)(NativeAccessSpecifierPublic)
	bool                                         Is_starred;                                        // 0x80(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Is_new;                                            // 0x81(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_360D[0x6];                                     // Fixing Size Of Struct..
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct VkEngineTypes.VkTeamMembershipResult
struct FVkTeamMembershipResult
{
public:
	class FString                                Name;                                              // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, bool>                    Access;                                            // 0x10(0x50)(NativeAccessSpecifierPublic)
	class FString                                Status;                                            // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                MembershipId;                                      // 0x70(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                TeamId;                                            // 0x80(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                AccountId;                                         // 0x90(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             Updated;                                           // 0xA0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct VkEngineTypes.VkTeamAccessControl
struct FVkTeamAccessControl
{
public:
	bool                                         Admin;                                             // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Edit;                                              // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Operate;                                           // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Publish;                                           // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct VkEngineTypes.VkTeamAuthorizedEmailDomain
struct FVkTeamAuthorizedEmailDomain
{
public:
	class FString                                Domain;                                            // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVkTeamAccessControl                  Access;                                            // 0x10(0x4)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_360E[0x4];                                     // Fixing Size Of Struct..
};

// 0x30 (0x30 - 0x0)
// ScriptStruct VkEngineTypes.VkTeamPublicProperties
struct FVkTeamPublicProperties
{
public:
	class FString                                Name;                                              // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Description;                                       // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVkTeamAuthorizedEmailDomain>  EmailDomains;                                      // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct VkEngineTypes.VkTeamDoc
struct FVkTeamDoc
{
public:
	class FString                                TeamId;                                            // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             Created;                                           // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             Updated;                                           // 0x18(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVkTypedId                            Owner;                                             // 0x20(0x18)(NativeAccessSpecifierPublic)
	struct FVkTeamPublicProperties               PublicProps;                                       // 0x38(0x30)(NativeAccessSpecifierPublic)
	int32                                        MemberCount;                                       // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_360F[0x4];                                     // Fixing Size After Last Property..
	struct FJsonObjectWrapper                    SysMeta;                                           // 0x70(0x20)(NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct VkEngineTypes.VkLaunchData_Link
struct FVkLaunchData_Link
{
public:
	class FString                                LinkCode;                                          // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Version;                                           // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3610[0x4];                                     // Fixing Size Of Struct..
};

// 0x20 (0x20 - 0x0)
// ScriptStruct VkEngineTypes.VkProjectPlaytestAccessRequest
struct FVkProjectPlaytestAccessRequest
{
public:
	TArray<class FString>                        Users;                                             // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                PlaytestGroupId;                                   // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x5 (0x5 - 0x0)
// ScriptStruct VkEngineTypes.VkProjectAccessControl
struct FVkProjectAccessControl
{
public:
	bool                                         Read;                                              // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Edit;                                              // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Operate;                                           // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Publish;                                           // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Admin;                                             // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct VkEngineTypes.VkProjectPlaytestAccessResult
struct FVkProjectPlaytestAccessResult
{
public:
	struct FVkNamedId                            Owner;                                             // 0x0(0x20)(NativeAccessSpecifierPublic)
	class FString                                OwnerType;                                         // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, struct FVkProjectAccessControl> Playtesters;                                       // 0x30(0x50)(NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct VkEngineTypes.VkSnapshotDeltaFiles
struct FVkSnapshotDeltaFiles
{
public:
	class FString                                SnapshotId;                                        // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, class FString>           DeltaFileLinks;                                    // 0x10(0x50)(NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct VkEngineTypes.VkProfileBuildResult_Duration
struct FVkProfileBuildResult_Duration
{
public:
	struct FDateTime                             Start;                                             // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FDateTime                             End;                                               // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct VkEngineTypes.VkProfileBuildResult_Server
struct FVkProfileBuildResult_Server
{
public:
	class FString                                BuildId;                                           // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Platform;                                          // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, float>                   Stat;                                              // 0x20(0x50)(NativeAccessSpecifierPublic)
};

// 0x80 (0x80 - 0x0)
// ScriptStruct VkEngineTypes.VkProfileBuildResult_Client
struct FVkProfileBuildResult_Client
{
public:
	class FString                                AccountId;                                         // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                BuildId;                                           // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                Platform;                                          // 0x20(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FString, float>                   Stat;                                              // 0x30(0x50)(NativeAccessSpecifierPublic)
};

// 0xA8 (0xA8 - 0x0)
// ScriptStruct VkEngineTypes.VkProfileBuildResult
struct FVkProfileBuildResult
{
public:
	float                                        Score;                                             // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3611[0x4];                                     // Fixing Size After Last Property..
	class FString                                SessionId;                                         // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVkProfileBuildResult_Duration        Duration;                                          // 0x18(0x10)(NoDestructor, NativeAccessSpecifierPublic)
	struct FVkProfileBuildResult_Server          Server;                                            // 0x28(0x70)(NativeAccessSpecifierPublic)
	TArray<struct FVkProfileBuildResult_Client>  Clients;                                           // 0x98(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct VkEngineTypes.VkMetaDataFlags
struct FVkMetaDataFlags
{
public:
	TMap<class FString, class FString>           _validation_flags;                                 // 0x0(0x50)(NativeAccessSpecifierPrivate)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
