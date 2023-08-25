#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x130 (0x1D0 - 0xA0)
// Class VKDownloadOnDemandGameplay.DownloadOnDemandComponent
class UDownloadOnDemandComponent : public UControllerComponent
{
public:
	uint8                                        Pad_498C[0x108];                                   // Fixing Size After Last Property 
	class UDownloadOnDemandPlot*                 Plot;                                              // 0x1A8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UDownloadOnDemandProject*>      UserOwnedProjects;                                 // 0x1B0(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<class UDownloadOnDemandProjectContent*> ShelvedContents;                                   // 0x1C0(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UDownloadOnDemandComponent* GetDefaultObj();

	void HandleMnemonicsFromValkyriePaletteProviderReceived(TArray<class FString>& Mnemonics);
};

// 0x98 (0xC0 - 0x28)
// Class VKDownloadOnDemandGameplay.DownloadOnDemandPlot
class UDownloadOnDemandPlot : public UObject
{
public:
	uint8                                        Pad_4994[0x78];                                    // Fixing Size After Last Property 
	TArray<class UDownloadOnDemandProject*>      ActiveProjects;                                    // 0xA0(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<class UDownloadOnDemandProject*>      PendingProjects;                                   // 0xB0(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UDownloadOnDemandPlot* GetDefaultObj();

};

// 0x108 (0x130 - 0x28)
// Class VKDownloadOnDemandGameplay.DownloadOnDemandProject
class UDownloadOnDemandProject : public UObject
{
public:
	uint8                                        Pad_49A5[0x90];                                    // Fixing Size After Last Property 
	class UDownloadOnDemandProjectDescriptor*    Descriptor;                                        // 0xB8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TMap<class FString, class UDownloadOnDemandProjectContent*> Contents;                                          // 0xC0(0x50)(Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_49A7[0x20];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UDownloadOnDemandProject* GetDefaultObj();

};

// 0x78 (0xA0 - 0x28)
// Class VKDownloadOnDemandGameplay.DownloadOnDemandProjectContent
class UDownloadOnDemandProjectContent : public UObject
{
public:
	uint8                                        Pad_49AD[0x48];                                    // Fixing Size After Last Property 
	TArray<class UFortItemDefinition*>           ContentItemDefinitions;                            // 0x70(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<struct FSoftObjectPath>               ContentSoftObjectPaths;                            // 0x80(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<struct FSoftObjectPath>               LoadFailedContentObjectPaths;                      // 0x90(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UDownloadOnDemandProjectContent* GetDefaultObj();

};

// 0x58 (0x80 - 0x28)
// Class VKDownloadOnDemandGameplay.DownloadOnDemandProjectDescriptor
class UDownloadOnDemandProjectDescriptor : public UObject
{
public:
	uint8                                        Pad_49BC[0x48];                                    // Fixing Size After Last Property 
	class UDownloadOnDemandProjectImage*         Image;                                             // 0x70(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_49BD[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UDownloadOnDemandProjectDescriptor* GetDefaultObj();

};

// 0x38 (0x60 - 0x28)
// Class VKDownloadOnDemandGameplay.DownloadOnDemandProjectImage
class UDownloadOnDemandProjectImage : public UObject
{
public:
	uint8                                        Pad_49C2[0x30];                                    // Fixing Size After Last Property 
	class UTexture2DDynamic*                     PreviewTexture;                                    // 0x58(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UDownloadOnDemandProjectImage* GetDefaultObj();

};

}


