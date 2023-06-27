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

// 0xC (0xC - 0x0)
// ScriptStruct AudioClustersRuntime.AudioClusterActorInfo
struct FAudioClusterActorInfo
{
public:
	TWeakObjectPtr<class AActor>                 Actor;                                             // 0x0(0x8)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTag                          Tag;                                               // 0x8(0x4)(BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct AudioClustersRuntime.AudioClusterOneShotInfo
struct FAudioClusterOneShotInfo
{
public:
	struct FGameplayTag                          Tag;                                               // 0x0(0x4)(BlueprintVisible, Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_78B1[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               Position;                                          // 0x8(0x18)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LifetimeSeconds;                                   // 0x20(0x4)(BlueprintVisible, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeRemainingSeconds;                              // 0x24(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
