#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x50 - 0x28)
// Class GameplayStreamingFN.FortLocalPlayerAccountHelper
class UFortLocalPlayerAccountHelper : public UObject
{
public:
	uint8                                        Pad_4D67[0x28];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortLocalPlayerAccountHelper* GetDefaultObj();

};

// 0x38 (0xB0 - 0x78)
// Class GameplayStreamingFN.FortGFNGameplayStreamingHandler
class UFortGFNGameplayStreamingHandler : public UGFNGameplayStreamingHandler
{
public:
	uint8                                        Pad_4D6D[0x8];                                     // Fixing Size After Last Property 
	class UFortLocalPlayerAccountHelper*         FortLocalPlayerAccountHelper;                      // 0x80(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortOnlineAccount*                    FortOnlineAccount;                                 // 0x88(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4D6E[0x20];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortGFNGameplayStreamingHandler* GetDefaultObj();

};

// 0x30 (0xA8 - 0x78)
// Class GameplayStreamingFN.FortLunaGameplayStreamingHandler
class UFortLunaGameplayStreamingHandler : public ULunaGameplayStreamingHandler
{
public:
	uint8                                        Pad_4D6F[0x30];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortLunaGameplayStreamingHandler* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class GameplayStreamingFN.FortGameplayStreamingHandler
class UFortGameplayStreamingHandler : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UFortGameplayStreamingHandler* GetDefaultObj();

};

// 0x8 (0x38 - 0x30)
// Class GameplayStreamingFN.FortGameplayStreamingService
class UFortGameplayStreamingService : public UGameplayStreamingService
{
public:
	uint8                                        Pad_4D72[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UFortGameplayStreamingService* GetDefaultObj();

};

}


