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

// 0x8 (0x8 - 0x0)
// ScriptStruct MusicBlocks.MusicSequencerHitHandle
struct FMusicSequencerHitHandle
{
public:
	uint64                                       Handle;                                            // 0x0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x54 (0x60 - 0xC)
// ScriptStruct MusicBlocks.MusicSequencerHitEntry
struct FMusicSequencerHitEntry : public FFastArraySerializerItem
{
public:
	uint8                                        Pad_3E70[0x4];                                     // Fixing Size After Last Property 
	struct FMusicSequencerHitHandle              Handle;                                            // 0x10(0x8)(NoDestructor, Protected, NativeAccessSpecifierProtected)
	float                                        ServerWorldTimeStart;                              // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3E72[0x4];                                     // Fixing Size After Last Property 
	TSubclassOf<class UActor>                    ActorClass;                                        // 0x20(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UActor>                 Actor;                                             // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UPlayerState>           InstigatorPlayerState;                             // 0x30(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FVector_NetQuantize                   SoundLocation;                                     // 0x38(0x18)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        SoundIndex;                                        // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_3E73[0x4];                                     // Fixing Size After Last Property 
	struct FTimerHandle                          TimerHandle;                                       // 0x58(0x8)(RepSkip, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

// 0x18 (0x120 - 0x108)
// ScriptStruct MusicBlocks.MusicSequencerHitArray
struct FMusicSequencerHitArray : public FFastArraySerializer
{
public:
	TArray<struct FMusicSequencerHitEntry>       Items;                                             // 0x108(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TWeakObjectPtr<class UMusicSequencerHitComponent> OwningComponent;                                   // 0x118(0x8)(ExportObject, ZeroConstructor, InstancedReference, IsPlainOldData, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
};

}


