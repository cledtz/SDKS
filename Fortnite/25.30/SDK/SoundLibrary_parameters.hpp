#pragma once

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

// 0x30 (0x30 - 0x0)
// Function SoundLibrary.SoundLibraryContext.Play
struct USoundLibraryContext_Play_Params
{
public:
	class USoundBase*                            Sound;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                Owner;                                             // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoundLibraryPlayResult               OutResults;                                        // 0x10(0x18)(Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x28(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CDF[0x7];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function SoundLibrary.SoundLibraryContext.OnRemovedFromActor
struct USoundLibraryContext_OnRemovedFromActor_Params
{
public:
	class UActor*                                InActor;                                           // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SoundLibrary.SoundLibraryContext.OnAddedToActor
struct USoundLibraryContext_OnAddedToActor_Params
{
public:
	class UActor*                                InActor;                                           // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SoundLibrary.SoundLibraryContext.GatherActorTargets
struct USoundLibraryContext_GatherActorTargets_Params
{
public:
	TArray<class UActor*>                        OutActors;                                         // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CED[0x7];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function SoundLibrary.SoundLibraryContext.CreateEventName
struct USoundLibraryContext_CreateEventName_Params
{
public:
	struct FGameplayTag                          OutEventName;                                      // 0x0(0x4)(Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CEE[0x3];                                     // Fixing Size Of Struct
};

// 0x38 (0x38 - 0x0)
// Function SoundLibrary.SoundLibraryAnimContext.ConfigureContext
struct USoundLibraryAnimContext_ConfigureContext_Params
{
public:
	class UActor*                                OwningActor;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UAnimSequenceBase*                     InAnimation;                                       // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoundLibraryAnimContextSettings      InSettings;                                        // 0x10(0x24)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1CFA[0x4];                                     // Fixing Size Of Struct
};

// 0x4 (0x4 - 0x0)
// Function SoundLibrary.SoundLibrary.SetPriority
struct USoundLibrary_SetPriority_Params
{
public:
	int32                                        InPriority;                                        // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function SoundLibrary.SoundLibrary.SetChannel
struct USoundLibrary_SetChannel_Params
{
public:
	struct FGameplayTag                          InTag;                                             // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SoundLibrary.SoundLibrary.FindSound
struct USoundLibrary_FindSound_Params
{
public:
	struct FGameplayTag                          InTag;                                             // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D07[0x4];                                     // Fixing Size After Last Property
	class USoundBase*                            ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SoundLibrary.SoundLibrary.AddSound
struct USoundLibrary_AddSound_Params
{
public:
	struct FGameplayTag                          InTag;                                             // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D0D[0x4];                                     // Fixing Size After Last Property
	class USoundBase*                            InSound;                                           // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SoundLibrary.SoundLibraryComponent.StopEvent
struct USoundLibraryComponent_StopEvent_Params
{
public:
	struct FGameplayTag                          InEventName;                                       // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D17[0x3];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function SoundLibrary.SoundLibraryComponent.RemoveLibrary
struct USoundLibraryComponent_RemoveLibrary_Params
{
public:
	class USoundLibrary*                         InLibrary;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SoundLibrary.SoundLibraryComponent.RemoveLibraries
struct USoundLibraryComponent_RemoveLibraries_Params
{
public:
	TArray<class USoundLibrary*>                 InLibraries;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SoundLibrary.SoundLibraryComponent.PlayEvent
struct USoundLibraryComponent_PlayEvent_Params
{
public:
	struct FGameplayTag                          InEventName;                                       // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D2C[0x4];                                     // Fixing Size After Last Property
	struct FSoundLibraryPlayResult               ReturnValue;                                       // 0x8(0x18)(Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SoundLibrary.SoundLibraryComponent.OnSoundStoppedBP
struct USoundLibraryComponent_OnSoundStoppedBP_Params
{
public:
	struct FGameplayTag                          InEventName;                                       // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D2F[0x4];                                     // Fixing Size After Last Property
	class UAudioComponent*                       InComponent;                                       // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHandledInBlueprint;                               // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D31[0x7];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function SoundLibrary.SoundLibraryComponent.OnSoundStopped
struct USoundLibraryComponent_OnSoundStopped_Params
{
public:
	struct FGameplayTag                          InEventName;                                       // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D39[0x4];                                     // Fixing Size After Last Property
	class UAudioComponent*                       InComponent;                                       // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStopped;                                          // 0x10(0x1)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D3B[0x7];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// Function SoundLibrary.SoundLibraryComponent.OnSoundPlayedBP
struct USoundLibraryComponent_OnSoundPlayedBP_Params
{
public:
	struct FGameplayTag                          InEventName;                                       // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D48[0x4];                                     // Fixing Size After Last Property
	class UAudioComponent*                       InComponent;                                       // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SoundLibrary.SoundLibraryComponent.OnSoundPlayed
struct USoundLibraryComponent_OnSoundPlayed_Params
{
public:
	struct FGameplayTag                          InEventName;                                       // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D4B[0x4];                                     // Fixing Size After Last Property
	class UAudioComponent*                       InComponent;                                       // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SoundLibrary.SoundLibraryComponent.IsEventActive
struct USoundLibraryComponent_IsEventActive_Params
{
public:
	struct FGameplayTag                          InEventName;                                       // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D4F[0x3];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function SoundLibrary.SoundLibraryComponent.GetContext
struct USoundLibraryComponent_GetContext_Params
{
public:
	class USoundLibraryContext*                  ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SoundLibrary.SoundLibraryComponent.AddLibrary
struct USoundLibraryComponent_AddLibrary_Params
{
public:
	class USoundLibrary*                         InLibrary;                                         // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SoundLibrary.SoundLibraryComponent.AddLibraries
struct USoundLibraryComponent_AddLibraries_Params
{
public:
	TArray<class USoundLibrary*>                 InLibraries;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// Function SoundLibrary.SoundLibrarySimpleContext.ConfigureContext
struct USoundLibrarySimpleContext_ConfigureContext_Params
{
public:
	class UActor*                                OwningActor;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoundLibrarySimpleContextSettings    InSettings;                                        // 0x8(0x58)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SoundLibrary.SoundLibrarySubsystem.RemoveLibrary
struct USoundLibrarySubsystem_RemoveLibrary_Params
{
public:
	class UActor*                                Actor;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundLibrary*                         Library;                                           // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function SoundLibrary.SoundLibrarySubsystem.RemoveLibrariesFromCollections
struct USoundLibrarySubsystem_RemoveLibrariesFromCollections_Params
{
public:
	class UActor*                                Actor;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 CollectionTags;                                    // 0x8(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SoundLibrary.SoundLibrarySubsystem.RemoveLibraries
struct USoundLibrarySubsystem_RemoveLibraries_Params
{
public:
	class UActor*                                Actor;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class USoundLibrary*>                 Libraries;                                         // 0x8(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SoundLibrary.SoundLibrarySubsystem.RemoveContext
struct USoundLibrarySubsystem_RemoveContext_Params
{
public:
	class UActor*                                Actor;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class USoundLibraryContext>      ContextClass;                                      // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x10(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1D6F[0x7];                                     // Fixing Size Of Struct
};

// 0x78 (0x78 - 0x0)
// Function SoundLibrary.SoundLibrarySubsystem.PlaySoundSimple
struct USoundLibrarySubsystem_PlaySoundSimple_Params
{
public:
	class UActor*                                OwningActor;                                       // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoundLibrarySimpleContextSettings    InSettings;                                        // 0x8(0x58)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)
	struct FSoundLibraryPlayResult               ReturnValue;                                       // 0x60(0x18)(Parm, OutParm, ReturnParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function SoundLibrary.SoundLibrarySubsystem.PlaySound
struct USoundLibrarySubsystem_PlaySound_Params
{
public:
	class USoundLibraryContext*                  Context;                                           // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoundLibraryPlayResult               OutResults;                                        // 0x8(0x18)(Parm, OutParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SoundLibrary.SoundLibrarySubsystem.GetContext
struct USoundLibrarySubsystem_GetContext_Params
{
public:
	class UActor*                                Actor;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class USoundLibraryContext>      ContextClass;                                      // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundLibraryContext*                  ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SoundLibrary.SoundLibrarySubsystem.EnableEventsForActor
struct USoundLibrarySubsystem_EnableEventsForActor_Params
{
public:
	class UActor*                                Actor;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SoundLibrary.SoundLibrarySubsystem.DisableEventsForActor
struct USoundLibrarySubsystem_DisableEventsForActor_Params
{
public:
	class UActor*                                Actor;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function SoundLibrary.SoundLibrarySubsystem.AddLibrary
struct USoundLibrarySubsystem_AddLibrary_Params
{
public:
	class UActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundLibrary*                         Library;                                           // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function SoundLibrary.SoundLibrarySubsystem.AddLibrariesFromCollections
struct USoundLibrarySubsystem_AddLibrariesFromCollections_Params
{
public:
	class UActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGameplayTagContainer                 CollectionTags;                                    // 0x8(0x20)(ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SoundLibrary.SoundLibrarySubsystem.AddLibraries
struct USoundLibrarySubsystem_AddLibraries_Params
{
public:
	class UActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class USoundLibrary*>                 Libraries;                                         // 0x8(0x10)(Parm, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function SoundLibrary.SoundLibrarySubsystem.AddContext
struct USoundLibrarySubsystem_AddContext_Params
{
public:
	class UActor*                                Actor;                                             // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class USoundLibraryContext>      ContextClass;                                      // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundLibraryContext*                  ReturnValue;                                       // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function SoundLibrary.SoundLibraryTagHelperFunctions.MakeSoundLibraryTag
struct USoundLibraryTagHelperFunctions_MakeSoundLibraryTag_Params
{
public:
	struct FGameplayTag                          Tag;                                               // 0x0(0x4)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoundLibraryTag                      ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
