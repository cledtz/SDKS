#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

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
	uint8                                        Pad_44A9[0x50];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("BaseGameplayStreamingHandler");
		return Clss;
	}

};

// 0x0 (0x78 - 0x78)
// Class GameplayStreaming.GFNGameplayStreamingHandler
class UGFNGameplayStreamingHandler : public UBaseGameplayStreamingHandler
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GFNGameplayStreamingHandler");
		return Clss;
	}

};

// 0x0 (0x78 - 0x78)
// Class GameplayStreaming.LunaGameplayStreamingHandler
class ULunaGameplayStreamingHandler : public UBaseGameplayStreamingHandler
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("LunaGameplayStreamingHandler");
		return Clss;
	}

};

// 0x20 (0x48 - 0x28)
// Class GameplayStreaming.GameplayStreamingClassLoader
class UGameplayStreamingClassLoader : public UObject
{
public:
	struct FSoftClassPath                        GameplayStreamingServiceClassName;                 // 0x28(0x18)(ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_44AA[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayStreamingClassLoader");
		return Clss;
	}

};

// 0x8 (0x30 - 0x28)
// Class GameplayStreaming.GameplayStreamingService
class UGameplayStreamingService : public UObject
{
public:
	class UBaseGameplayStreamingHandler*         ActiveHandler;                                     // 0x28(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("GameplayStreamingService");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
