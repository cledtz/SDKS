#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0xB0 (0xD8 - 0x28)
// Class SidecarSys.SidecarDss
class USidecarDss : public UObject
{
public:
	TMap<class FString, struct FSidecarFileInfo> FileInfoMap;                                       // 0x28(0x50)(NativeAccessSpecifierPrivate)
	class FString                                DssDownloadUrl;                                    // 0x78(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                DssCheckoutUrl;                                    // 0x88(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                DssUploadUrl;                                      // 0x98(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                DssRestoreUrl;                                     // 0xA8(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                DssCheckinUrl;                                     // 0xB8(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                DssListFilesUrl;                                   // 0xC8(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class USidecarDss* GetDefaultObj();

};

// 0xB8 (0xE0 - 0x28)
// Class SidecarSys.SidecarInventorySys
class USidecarInventorySys : public UObject
{
public:
	uint8                                        Pad_1B61[0x8];                                     // Fixing Size After Last Property 
	class FString                                InventoryDownloadUrl;                              // 0x30(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                InventoryLockUrl;                                  // 0x40(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FString                                ItemUpdateUrl;                                     // 0x50(0x10)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1B62[0x80];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class USidecarInventorySys* GetDefaultObj();

};

// 0x30 (0x58 - 0x28)
// Class SidecarSys.SidecarSys
class USidecarSys : public UObject
{
public:
	uint8                                        Pad_1B63[0x10];                                    // Fixing Size After Last Property 
	class USidecarDss*                           SidecarDss;                                        // 0x38(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USidecarInventorySys*                  SidecarInventory;                                  // 0x40(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1B64[0x10];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class USidecarSys* GetDefaultObj();

};

}


