#pragma once

// Dumped with Dumper-7!


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
	uint8                                        Pad_390E[0x4];                                     // Fixing Size After Last Property 
	TArray<TSoftClassPtr<class UActor>>          ActorClasses;                                      // 0x8(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
};

}


