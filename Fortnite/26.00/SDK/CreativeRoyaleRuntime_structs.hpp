#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class EFortPoiSwapUserContentState : uint8
{
	Unloaded                       = 0,
	Loading                        = 1,
	Loaded                         = 2,
	Unloading                      = 3,
	EFortPoiSwapUserContentState_MAX = 4,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x10 (0x10 - 0x0)
// ScriptStruct CreativeRoyaleRuntime.AttachedBuildingActorGuids
struct FAttachedBuildingActorGuids
{
public:
	TArray<struct FGuid>                         AttachedBuildingActorGuids;                        // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct CreativeRoyaleRuntime.SpawnBuildingActorParameters
struct FSpawnBuildingActorParameters
{
public:
	class UClass*                                SpawnClass;                                        // 0x0(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class ULevel>                 SpawnLevel;                                        // 0x8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FTransform                            SpawnTransform;                                    // 0x10(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}


