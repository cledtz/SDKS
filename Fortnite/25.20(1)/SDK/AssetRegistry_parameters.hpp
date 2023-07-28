#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x50 - 0x0)
// Function AssetRegistry.AssetRegistryHelpers.ToSoftObjectPath
struct UAssetRegistryHelpers_ToSoftObjectPath_Params
{
public:
	struct FAssetData                            InAssetData;                                       // 0x0(0x38)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                       ReturnValue;                                       // 0x38(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x2B0 (0x2B0 - 0x0)
// Function AssetRegistry.AssetRegistryHelpers.SetFilterTagsAndValues
struct UAssetRegistryHelpers_SetFilterTagsAndValues_Params
{
public:
	struct FARFilter                             InFilter;                                          // 0x0(0x150)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FTagAndValue>                  InTagsAndValues;                                   // 0x150(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FARFilter                             ReturnValue;                                       // 0x160(0x150)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function AssetRegistry.AssetRegistryHelpers.IsValid
struct UAssetRegistryHelpers_IsValid_Params
{
public:
	struct FAssetData                            InAssetData;                                       // 0x0(0x38)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x38(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D57[0x7];                                     // Fixing Size Of Struct..
};

// 0x40 (0x40 - 0x0)
// Function AssetRegistry.AssetRegistryHelpers.IsUAsset
struct UAssetRegistryHelpers_IsUAsset_Params
{
public:
	struct FAssetData                            InAssetData;                                       // 0x0(0x38)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x38(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D58[0x7];                                     // Fixing Size Of Struct..
};

// 0x40 (0x40 - 0x0)
// Function AssetRegistry.AssetRegistryHelpers.IsRedirector
struct UAssetRegistryHelpers_IsRedirector_Params
{
public:
	struct FAssetData                            InAssetData;                                       // 0x0(0x38)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x38(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D59[0x7];                                     // Fixing Size Of Struct..
};

// 0x40 (0x40 - 0x0)
// Function AssetRegistry.AssetRegistryHelpers.IsAssetLoaded
struct UAssetRegistryHelpers_IsAssetLoaded_Params
{
public:
	struct FAssetData                            InAssetData;                                       // 0x0(0x38)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x38(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D5A[0x7];                                     // Fixing Size Of Struct..
};

// 0x58 (0x58 - 0x0)
// Function AssetRegistry.AssetRegistryHelpers.GetTagValue
struct UAssetRegistryHelpers_GetTagValue_Params
{
public:
	struct FAssetData                            InAssetData;                                       // 0x0(0x38)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  InTagName;                                         // 0x38(0x4)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D5B[0x4];                                     // Fixing Size After Last Property..
	class FString                                OutTagValue;                                       // 0x40(0x10)(Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x50(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D5C[0x7];                                     // Fixing Size Of Struct..
};

// 0x48 (0x48 - 0x0)
// Function AssetRegistry.AssetRegistryHelpers.GetFullName
struct UAssetRegistryHelpers_GetFullName_Params
{
public:
	struct FAssetData                            InAssetData;                                       // 0x0(0x38)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x38(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function AssetRegistry.AssetRegistryHelpers.GetExportTextName
struct UAssetRegistryHelpers_GetExportTextName_Params
{
public:
	struct FAssetData                            InAssetData;                                       // 0x0(0x38)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ReturnValue;                                       // 0x38(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function AssetRegistry.AssetRegistryHelpers.GetClass
struct UAssetRegistryHelpers_GetClass_Params
{
public:
	struct FAssetData                            InAssetData;                                       // 0x0(0x38)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                ReturnValue;                                       // 0x38(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x160 (0x160 - 0x0)
// Function AssetRegistry.AssetRegistryHelpers.GetBlueprintAssets
struct UAssetRegistryHelpers_GetBlueprintAssets_Params
{
public:
	struct FARFilter                             InFilter;                                          // 0x0(0x150)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FAssetData>                    OutAssetData;                                      // 0x150(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AssetRegistry.AssetRegistryHelpers.GetAssetRegistry
struct UAssetRegistryHelpers_GetAssetRegistry_Params
{
public:
	FInterfaceProperty_                          ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function AssetRegistry.AssetRegistryHelpers.GetAsset
struct UAssetRegistryHelpers_GetAsset_Params
{
public:
	struct FAssetData                            InAssetData;                                       // 0x0(0x38)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               ReturnValue;                                       // 0x38(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function AssetRegistry.AssetRegistryHelpers.FindAssetNativeClass
struct UAssetRegistryHelpers_FindAssetNativeClass_Params
{
public:
	struct FAssetData                            AssetData;                                         // 0x0(0x38)(ConstParm, Parm, OutParm, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UClass*                                ReturnValue;                                       // 0x38(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// Function AssetRegistry.AssetRegistryHelpers.CreateAssetData
struct UAssetRegistryHelpers_CreateAssetData_Params
{
public:
	class UObject*                               InAsset;                                           // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowBlueprintClass;                              // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D5D[0x7];                                     // Fixing Size After Last Property..
	struct FAssetData                            ReturnValue;                                       // 0x10(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AssetRegistry.AssetRegistry.WaitForPackage
struct UAssetRegistry_WaitForPackage_Params
{
public:
	class FString                                PackageName;                                       // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function AssetRegistry.AssetRegistry.WaitForCompletion
struct UAssetRegistry_WaitForCompletion_Params
{
public:
};

// 0x160 (0x160 - 0x0)
// Function AssetRegistry.AssetRegistry.UseFilterToExcludeAssets
struct UAssetRegistry_UseFilterToExcludeAssets_Params
{
public:
	TArray<struct FAssetData>                    AssetDataList;                                     // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FARFilter                             Filter;                                            // 0x10(0x150)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AssetRegistry.AssetRegistry.SearchAllAssets
struct UAssetRegistry_SearchAllAssets_Params
{
public:
	bool                                         bSynchronousSearch;                                // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AssetRegistry.AssetRegistry.ScanPathsSynchronous
struct UAssetRegistry_ScanPathsSynchronous_Params
{
public:
	TArray<class FString>                        InPaths;                                           // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bForceRescan;                                      // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIgnoreDenyListScanFilters;                        // 0x11(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D5E[0x6];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function AssetRegistry.AssetRegistry.ScanModifiedAssetFiles
struct UAssetRegistry_ScanModifiedAssetFiles_Params
{
public:
	TArray<class FString>                        InFilePaths;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AssetRegistry.AssetRegistry.ScanFilesSynchronous
struct UAssetRegistry_ScanFilesSynchronous_Params
{
public:
	TArray<class FString>                        InFilePaths;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         bForceRescan;                                      // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D5F[0x7];                                     // Fixing Size Of Struct..
};

// 0x160 (0x160 - 0x0)
// Function AssetRegistry.AssetRegistry.RunAssetsThroughFilter
struct UAssetRegistry_RunAssetsThroughFilter_Params
{
public:
	TArray<struct FAssetData>                    AssetDataList;                                     // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	struct FARFilter                             Filter;                                            // 0x10(0x150)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function AssetRegistry.AssetRegistry.PrioritizeSearchPath
struct UAssetRegistry_PrioritizeSearchPath_Params
{
public:
	class FString                                PathToPrioritize;                                  // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function AssetRegistry.AssetRegistry.K2_GetReferencers
struct UAssetRegistry_K2_GetReferencers_Params
{
public:
	class FName                                  PackageName;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAssetRegistryDependencyOptions       ReferenceOptions;                                  // 0x4(0x5)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D60[0x7];                                     // Fixing Size After Last Property..
	TArray<class FName>                          OutReferencers;                                    // 0x10(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D61[0x7];                                     // Fixing Size Of Struct..
};

// 0x28 (0x28 - 0x0)
// Function AssetRegistry.AssetRegistry.K2_GetDependencies
struct UAssetRegistry_K2_GetDependencies_Params
{
public:
	class FName                                  PackageName;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FAssetRegistryDependencyOptions       DependencyOptions;                                 // 0x4(0x5)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D62[0x7];                                     // Fixing Size After Last Property..
	TArray<class FName>                          OutDependencies;                                   // 0x10(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D63[0x7];                                     // Fixing Size Of Struct..
};

// 0x58 (0x58 - 0x0)
// Function AssetRegistry.AssetRegistry.K2_GetAssetByObjectPath
struct UAssetRegistry_K2_GetAssetByObjectPath_Params
{
public:
	struct FSoftObjectPath                       ObjectPath;                                        // 0x0(0x18)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIncludeOnlyOnDiskAssets;                          // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSkipARFilteredAssets;                             // 0x19(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D64[0x6];                                     // Fixing Size After Last Property..
	struct FAssetData                            ReturnValue;                                       // 0x20(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AssetRegistry.AssetRegistry.IsSearchAsync
struct UAssetRegistry_IsSearchAsync_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AssetRegistry.AssetRegistry.IsSearchAllAssets
struct UAssetRegistry_IsSearchAllAssets_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function AssetRegistry.AssetRegistry.IsLoadingAssets
struct UAssetRegistry_IsLoadingAssets_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function AssetRegistry.AssetRegistry.HasAssets
struct UAssetRegistry_HasAssets_Params
{
public:
	class FName                                  PackagePath;                                       // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRecursive;                                        // 0x4(0x1)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x5(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D65[0x2];                                     // Fixing Size Of Struct..
};

// 0x28 (0x28 - 0x0)
// Function AssetRegistry.AssetRegistry.GetSubPaths
struct UAssetRegistry_GetSubPaths_Params
{
public:
	class FString                                InBasePath;                                        // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        OutPathList;                                       // 0x10(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bInRecurse;                                        // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D66[0x7];                                     // Fixing Size Of Struct..
};

// 0xB0 (0xB0 - 0x0)
// Function AssetRegistry.AssetRegistry.GetDerivedClassNames
struct UAssetRegistry_GetDerivedClassNames_Params
{
public:
	TArray<struct FTopLevelAssetPath>            ClassNames;                                        // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	TSet<struct FTopLevelAssetPath>              ExcludedClassNames;                                // 0x10(0x50)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TSet<struct FTopLevelAssetPath>              OutDerivedClassNames;                              // 0x60(0x50)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function AssetRegistry.AssetRegistry.GetAssetsByPaths
struct UAssetRegistry_GetAssetsByPaths_Params
{
public:
	TArray<class FName>                          PackagePaths;                                      // 0x0(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FAssetData>                    OutAssetData;                                      // 0x10(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bRecursive;                                        // 0x20(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIncludeOnlyOnDiskAssets;                          // 0x21(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x22(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D67[0x5];                                     // Fixing Size Of Struct..
};

// 0x20 (0x20 - 0x0)
// Function AssetRegistry.AssetRegistry.GetAssetsByPath
struct UAssetRegistry_GetAssetsByPath_Params
{
public:
	class FName                                  PackagePath;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D68[0x4];                                     // Fixing Size After Last Property..
	TArray<struct FAssetData>                    OutAssetData;                                      // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bRecursive;                                        // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIncludeOnlyOnDiskAssets;                          // 0x19(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1A(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D69[0x5];                                     // Fixing Size Of Struct..
};

// 0x20 (0x20 - 0x0)
// Function AssetRegistry.AssetRegistry.GetAssetsByPackageName
struct UAssetRegistry_GetAssetsByPackageName_Params
{
public:
	class FName                                  PackageName;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D6A[0x4];                                     // Fixing Size After Last Property..
	TArray<struct FAssetData>                    OutAssetData;                                      // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bIncludeOnlyOnDiskAssets;                          // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSkipARFilteredAssets;                             // 0x19(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x1A(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D6B[0x5];                                     // Fixing Size Of Struct..
};

// 0x20 (0x20 - 0x0)
// Function AssetRegistry.AssetRegistry.GetAssetsByClass
struct UAssetRegistry_GetAssetsByClass_Params
{
public:
	struct FTopLevelAssetPath                    ClassPathName;                                     // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FAssetData>                    OutAssetData;                                      // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bSearchSubClasses;                                 // 0x18(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x19(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D6C[0x6];                                     // Fixing Size Of Struct..
};

// 0x168 (0x168 - 0x0)
// Function AssetRegistry.AssetRegistry.GetAssets
struct UAssetRegistry_GetAssets_Params
{
public:
	struct FARFilter                             Filter;                                            // 0x0(0x150)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
	TArray<struct FAssetData>                    OutAssetData;                                      // 0x150(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bSkipARFilteredAssets;                             // 0x160(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x161(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D6D[0x6];                                     // Fixing Size Of Struct..
};

// 0x40 (0x40 - 0x0)
// Function AssetRegistry.AssetRegistry.GetAssetByObjectPath
struct UAssetRegistry_GetAssetByObjectPath_Params
{
public:
	class FName                                  ObjectPath;                                        // 0x0(0x4)(ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIncludeOnlyOnDiskAssets;                          // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D6E[0x3];                                     // Fixing Size After Last Property..
	struct FAssetData                            ReturnValue;                                       // 0x8(0x38)(Parm, OutParm, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function AssetRegistry.AssetRegistry.GetAncestorClassNames
struct UAssetRegistry_GetAncestorClassNames_Params
{
public:
	struct FTopLevelAssetPath                    ClassPathName;                                     // 0x0(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FTopLevelAssetPath>            OutAncestorClassNames;                             // 0x8(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D6F[0x7];                                     // Fixing Size Of Struct..
};

// 0x10 (0x10 - 0x0)
// Function AssetRegistry.AssetRegistry.GetAllCachedPaths
struct UAssetRegistry_GetAllCachedPaths_Params
{
public:
	TArray<class FString>                        OutPathList;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function AssetRegistry.AssetRegistry.GetAllAssets
struct UAssetRegistry_GetAllAssets_Params
{
public:
	TArray<struct FAssetData>                    OutAssetData;                                      // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bIncludeOnlyOnDiskAssets;                          // 0x10(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x11(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D70[0x6];                                     // Fixing Size Of Struct..
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
