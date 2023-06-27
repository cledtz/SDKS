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

// 0x30 (0x2B8 - 0x288)
// Class RandomPrefabSpawningRuntime.FortPrefabSpawner
class AFortPrefabSpawner : public AActor
{
public:
	uint8                                        Pad_7FE1[0x8];                                     // Fixing Size After Last Property..
	struct FGameplayTagContainer                 RequiredProperties;                                // 0x290(0x20)(Edit, NativeAccessSpecifierPrivate)
	bool                                         bWorldReadyCalled;                                 // 0x2B0(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7FE2[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortPrefabSpawner");
		return Clss;
	}

};

// 0x60 (0x100 - 0xA0)
// Class RandomPrefabSpawningRuntime.FortRandomPrefabSpawnHelper
class UFortRandomPrefabSpawnHelper : public UGameStateComponent
{
public:
	uint8                                        Pad_7FE3[0x10];                                    // Fixing Size After Last Property..
	TArray<struct FFortRandomPrefabData>         AllPrefabs;                                        // 0xB0(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, NativeAccessSpecifierPrivate)
	TArray<struct FFortRandomPrefabData>         PrefabPool;                                        // 0xC0(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_7FE4[0x8];                                     // Fixing Size After Last Property..
	struct FScalableFloat                        bAcceptDuplicatesWhenOutOfUniquePrefabs;           // 0xD8(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortRandomPrefabSpawnHelper");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
