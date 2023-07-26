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

// 0x18 (0x18 - 0x0)
// ScriptStruct FortAudioClustersRuntime.GameFeatureAudioClusterEntry
struct FGameFeatureAudioClusterEntry
{
public:
	struct FGameplayTag                          ClusterTag;                                        // 0x0(0x4)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_43D9[0x4];                                     // Fixing Size After Last Property..
	TArray<TSoftClassPtr<class AActor>>          ActorClasses;                                      // 0x8(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
