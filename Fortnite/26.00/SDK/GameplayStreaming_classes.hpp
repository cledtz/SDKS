#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x78 - 0x28)
// Class GameplayStreaming.BaseGameplayStreamingHandler
class UBaseGameplayStreamingHandler : public UObject
{
public:
	uint8                                        Pad_2501[0x50];                                    // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UBaseGameplayStreamingHandler* GetDefaultObj();

};

// 0x0 (0x78 - 0x78)
// Class GameplayStreaming.GFNGameplayStreamingHandler
class UGFNGameplayStreamingHandler : public UBaseGameplayStreamingHandler
{
public:

	static class UClass* StaticClass();
	static class UGFNGameplayStreamingHandler* GetDefaultObj();

};

// 0x0 (0x78 - 0x78)
// Class GameplayStreaming.LunaGameplayStreamingHandler
class ULunaGameplayStreamingHandler : public UBaseGameplayStreamingHandler
{
public:

	static class UClass* StaticClass();
	static class ULunaGameplayStreamingHandler* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class GameplayStreaming.GameplayStreamingClassLoader
class UGameplayStreamingClassLoader : public UObject
{
public:
	struct FSoftClassPath                        GameplayStreamingServiceClassName;                 // 0x28(0x18)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2509[0x8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UGameplayStreamingClassLoader* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class GameplayStreaming.GameplayStreamingService
class UGameplayStreamingService : public UObject
{
public:
	class UBaseGameplayStreamingHandler*         ActiveHandler;                                     // 0x28(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UGameplayStreamingService* GetDefaultObj();

};

}


