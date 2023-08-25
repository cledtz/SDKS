#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EVerseDigestVariant : uint8
{
	PublicOnly                     = 0,
	PublicAndEpicInternal          = 1,
	EVerseDigestVariant_MAX        = 2,
};

enum class EVerseEnumFlags : uint32
{
	None                           = 0,
	NativeBound                    = 1,
	EVerseEnumFlags_MAX            = 2,
};

enum class EVersePackageScope : uint8
{
	InternalAPI                    = 0,
	PublicAPI                      = 1,
	User                           = 2,
	EVersePackageScope_MAX         = 3,
};

enum class EVersePackageType : uint8
{
	VNI                            = 0,
	Content                        = 1,
	PublishedContent               = 2,
	Assets                         = 3,
	EVersePackageType_MAX          = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x1 (0x1 - 0x0)
// ScriptStruct Solaris.GenericKeyType
struct FGenericKeyType
{
public:
	uint8                                        Pad_1903[0x1];                                     // Fixing Size Of Struct
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Solaris.GenericValueType
struct FGenericValueType
{
public:
	uint8                                        Pad_1904[0x1];                                     // Fixing Size Of Struct
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Solaris.VersePackageContainerSettings
struct FVersePackageContainerSettings
{
public:
	class FString                                VersePath;                                         // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVersePackageScope                VerseScope;                                        // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1905[0x7];                                     // Fixing Size After Last Property 
	TArray<class FString>                        DependencyPackages;                                // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	class FString                                VniDestDir;                                        // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Solaris.VerseSourceCode
struct FVerseSourceCode
{
public:
	TArray<uint8>                                Code;                                              // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Solaris.VerseSourceFile
struct FVerseSourceFile
{
public:
	class FString                                Filename;                                          // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FVerseSourceCode>              CodeChunks;                                        // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct Solaris.VersePackageContainer
struct FVersePackageContainer
{
public:
	class FString                                Name;                                              // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DirPath;                                           // 0x10(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVersePackageType                 PackageType;                                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableVerseAssetReflection;                       // 0x21(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1909[0x6];                                     // Fixing Size After Last Property 
	struct FVersePackageContainerSettings        Settings;                                          // 0x28(0x38)(NativeAccessSpecifierPublic)
	TArray<struct FVerseSourceFile>              SourceFiles;                                       // 0x60(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<uint8>                                AssetDigest;                                       // 0x70(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        AssetDependencies;                                 // 0x80(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_190B[0x10];                                    // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Solaris.VerseProjectContainer
struct FVerseProjectContainer
{
public:
	TArray<struct FVersePackageContainer>        Packages;                                          // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Solaris.GenericElementType
struct FGenericElementType
{
public:
	uint8                                        Pad_190E[0x1];                                     // Fixing Size Of Struct
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Solaris.VersePersistentVar
struct FVersePersistentVar
{
public:
	class FString                                Path;                                              // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FFieldPathProperty_                          Property;                                          // 0x10(0x20)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Solaris.VerseSessionVar
struct FVerseSessionVar
{
public:
	FFieldPathProperty_                          Property;                                          // 0x0(0x20)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


