#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x50 (0x50 - 0x0)
// ScriptStruct RandomPrefabSpawningRuntime.FortRandomPrefabData
struct FFortRandomPrefabData
{
public:
	TSubclassOf<class AFortLevelInstancePrefab>  Prefab;                                            // 0x0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 Tags;                                              // 0x8(0x20)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
	struct FScalableFloat                        bEnabled;                                          // 0x28(0x28)(Edit, DisableEditOnInstance, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
