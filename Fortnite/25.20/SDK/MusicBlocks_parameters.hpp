#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x28 (0x28 - 0x0)
// Function MusicBlocks.MusicSequencerHitComponent.ReplicateMusicSequencerHit
struct UMusicSequencerHitComponent_ReplicateMusicSequencerHit_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FInterfaceProperty_                          HitInterface;                                      // 0x8(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AController*                           Instigator;                                        // 0x18(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x20(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_80D0[0x7];                                     // Fixing Size Of Struct..
};

// 0x20 (0x20 - 0x0)
// Function MusicBlocks.MusicSequencerHitComponent.RegisterMusicSequencerActor
struct UMusicSequencerHitComponent_RegisterMusicSequencerActor_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FInterfaceProperty_                          Actor;                                             // 0x8(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_80D1[0x7];                                     // Fixing Size Of Struct..
};

// 0x68 (0x68 - 0x0)
// Function MusicBlocks.MusicSequencerHitComponent.ProcessSequenceHitEvent
struct UMusicSequencerHitComponent_ProcessSequenceHitEvent_Params
{
public:
	struct FMusicSequencerHitEntry               Event;                                             // 0x0(0x60)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x60(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_80D2[0x7];                                     // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// Function MusicBlocks.MusicSequencerHitComponent.OnSequenceHitEventExpired
struct UMusicSequencerHitComponent_OnSequenceHitEventExpired_Params
{
public:
	struct FMusicSequencerHitHandle              ExpiredHandle;                                     // 0x0(0x8)(Parm, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function MusicBlocks.MusicSequencerHitComponent.AddSequenceHitEvent
struct UMusicSequencerHitComponent_AddSequenceHitEvent_Params
{
public:
	FInterfaceProperty_                          HitInterface;                                      // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class AController*                           Instigator;                                        // 0x10(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x18(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_80D3[0x7];                                     // Fixing Size Of Struct..
};

// 0x18 (0x18 - 0x0)
// Function MusicBlocks.MusicSequencerHitComponent.AddMusicSequencerActor
struct UMusicSequencerHitComponent_AddMusicSequencerActor_Params
{
public:
	FInterfaceProperty_                          HitInterface;                                      // 0x0(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_80D4[0x7];                                     // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// Function MusicBlocks.MusicSequencerHitActor.GetMusicSequencerHitComponent
struct AMusicSequencerHitActor_GetMusicSequencerHitComponent_Params
{
public:
	class UMusicSequencerHitComponent*           ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MusicBlocks.MusicSequencerHitAdderComponent.GetMusicSequencerHitActor
struct UMusicSequencerHitAdderComponent_GetMusicSequencerHitActor_Params
{
public:
	class AMusicSequencerHitActor*               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
