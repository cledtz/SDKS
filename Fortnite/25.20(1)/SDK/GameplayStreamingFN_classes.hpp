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

// 0x28 (0x50 - 0x28)
// Class GameplayStreamingFN.FortLocalPlayerAccountHelper
class UFortLocalPlayerAccountHelper : public UObject
{
public:
	uint8                                        Pad_856F[0x28];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortLocalPlayerAccountHelper");
		return Clss;
	}

};

// 0x38 (0xB0 - 0x78)
// Class GameplayStreamingFN.FortGFNGameplayStreamingHandler
class UFortGFNGameplayStreamingHandler : public UGFNGameplayStreamingHandler
{
public:
	uint8                                        Pad_8570[0x8];                                     // Fixing Size After Last Property..
	class UFortLocalPlayerAccountHelper*         FortLocalPlayerAccountHelper;                      // 0x80(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UFortOnlineAccount*                    FortOnlineAccount;                                 // 0x88(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_8571[0x20];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortGFNGameplayStreamingHandler");
		return Clss;
	}

};

// 0x40 (0xB8 - 0x78)
// Class GameplayStreamingFN.FortLunaGameplayStreamingHandler
class UFortLunaGameplayStreamingHandler : public ULunaGameplayStreamingHandler
{
public:
	uint8                                        Pad_8572[0x40];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortLunaGameplayStreamingHandler");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class GameplayStreamingFN.FortGameplayStreamingHandler
class UFortGameplayStreamingHandler : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortGameplayStreamingHandler");
		return Clss;
	}

};

// 0x8 (0x38 - 0x30)
// Class GameplayStreamingFN.FortGameplayStreamingService
class UFortGameplayStreamingService : public UGameplayStreamingService
{
public:
	uint8                                        Pad_8573[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortGameplayStreamingService");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
