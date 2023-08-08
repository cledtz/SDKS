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

// 0x0 (0x0 - 0x0)
// Function DaySequence.DaySequenceModifierComponent.UnbindFromDaySequenceActor
struct UDaySequenceModifierComponent_UnbindFromDaySequenceActor_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function DaySequence.DaySequenceModifierComponent.SetUserDaySequence
struct UDaySequenceModifierComponent_SetUserDaySequence_Params
{
public:
	class UDaySequence*                          InDaySequence;                                     // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function DaySequence.DaySequenceModifierComponent.ResetOverrides
struct UDaySequenceModifierComponent_ResetOverrides_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function DaySequence.DaySequenceModifierComponent.MuteNamedSequence
struct UDaySequenceModifierComponent_MuteNamedSequence_Params
{
public:
	class FName                                  SequenceKey;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bState;                                            // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_31F3[0x3];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function DaySequence.DaySequenceModifierComponent.GetShapeVolumeComponent
struct UDaySequenceModifierComponent_GetShapeVolumeComponent_Params
{
public:
	class UShapeComponent*                       ReturnValue;                                       // 0x0(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function DaySequence.DaySequenceModifierComponent.EnableModifier
struct UDaySequenceModifierComponent_EnableModifier_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function DaySequence.DaySequenceModifierComponent.EnableDistanceVolumeBlends
struct UDaySequenceModifierComponent_EnableDistanceVolumeBlends_Params
{
public:
	class UActor*                                InActor;                                           // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function DaySequence.DaySequenceModifierComponent.DisableModifier
struct UDaySequenceModifierComponent_DisableModifier_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function DaySequence.DaySequenceModifierComponent.BindToDaySequenceActor
struct UDaySequenceModifierComponent_BindToDaySequenceActor_Params
{
public:
	class UDaySequenceActor*                     DaySequenceActor;                                  // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function DaySequence.DaySequenceModifierComponent.AddVisibilityOverride
struct UDaySequenceModifierComponent_AddVisibilityOverride_Params
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bValue;                                            // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_31FD[0x7];                                     // Fixing Size Of Struct
};

// 0x28 (0x28 - 0x0)
// Function DaySequence.DaySequenceModifierComponent.AddVectorOverride
struct UDaySequenceModifierComponent_AddVectorOverride_Params
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  PropertyName;                                      // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3203[0x4];                                     // Fixing Size After Last Property
	struct FVector                               Value;                                             // 0x10(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function DaySequence.DaySequenceModifierComponent.AddTransformOverride
struct UDaySequenceModifierComponent_AddTransformOverride_Params
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3209[0x8];                                     // Fixing Size After Last Property
	struct FTransform                            Value;                                             // 0x10(0x60)(Parm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function DaySequence.DaySequenceModifierComponent.AddStaticTimeOfDayOverride
struct UDaySequenceModifierComponent_AddStaticTimeOfDayOverride_Params
{
public:
	class UDaySequenceActor*                     Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Hours;                                             // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_320E[0x4];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function DaySequence.DaySequenceModifierComponent.AddScalarOverride
struct UDaySequenceModifierComponent_AddScalarOverride_Params
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  PropertyName;                                      // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3219[0x4];                                     // Fixing Size After Last Property
	double                                       Value;                                             // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function DaySequence.DaySequenceModifierComponent.AddScalarMaterialParameterOverride
struct UDaySequenceModifierComponent_AddScalarMaterialParameterOverride_Params
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaterialIndex;                                     // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ParameterName;                                     // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3223[0x4];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// Function DaySequence.DaySequenceModifierComponent.AddMaterialOverride
struct UDaySequenceModifierComponent_AddMaterialOverride_Params
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaterialIndex;                                     // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3229[0x4];                                     // Fixing Size After Last Property
	class UMaterialInterface*                    Value;                                             // 0x10(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function DaySequence.DaySequenceModifierComponent.AddColorOverride
struct UDaySequenceModifierComponent_AddColorOverride_Params
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  PropertyName;                                      // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Value;                                             // 0xC(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3232[0x4];                                     // Fixing Size Of Struct
};

// 0x20 (0x20 - 0x0)
// Function DaySequence.DaySequenceModifierComponent.AddColorMaterialParameterOverride
struct UDaySequenceModifierComponent_AddColorMaterialParameterOverride_Params
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaterialIndex;                                     // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ParameterName;                                     // 0xC(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Value;                                             // 0x10(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function DaySequence.DaySequenceModifierComponent.AddBoolOverride
struct UDaySequenceModifierComponent_AddBoolOverride_Params
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  PropertyName;                                      // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bValue;                                            // 0xC(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3241[0x3];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function DaySequence.DaySequenceActor.SetTimeOfDay
struct UDaySequenceActor_SetTimeOfDay_Params
{
public:
	float                                        InHours;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3256[0x3];                                     // Fixing Size Of Struct
};

// 0x4 (0x4 - 0x0)
// Function DaySequence.DaySequenceActor.SetStaticTimeOfDay
struct UDaySequenceActor_SetStaticTimeOfDay_Params
{
public:
	float                                        InHours;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function DaySequence.DaySequenceActor.SetReplicatePlayback
struct UDaySequenceActor_SetReplicatePlayback_Params
{
public:
	bool                                         ReplicatePlayback;                                 // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function DaySequence.DaySequenceActor.SetDaySequence
struct UDaySequenceActor_SetDaySequence_Params
{
public:
	class FName                                  SequenceName;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3261[0x4];                                     // Fixing Size After Last Property
	class UDaySequence*                          InDaySequence;                                     // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function DaySequence.DaySequenceActor.SetBias
struct UDaySequenceActor_SetBias_Params
{
public:
	class FName                                  SequenceKey;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Bias;                                              // 0x4(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function DaySequence.DaySequenceActor.RemoveStaticTimeOfDay
struct UDaySequenceActor_RemoveStaticTimeOfDay_Params
{
public:
	bool                                         bResumeFromStaticTime;                             // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function DaySequence.DaySequenceActor.Play
struct UDaySequenceActor_Play_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function DaySequence.DaySequenceActor.Pause
struct UDaySequenceActor_Pause_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function DaySequence.DaySequenceActor.MuteSequence
struct UDaySequenceActor_MuteSequence_Params
{
public:
	class FName                                  SequenceKey;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bState;                                            // 0x4(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_326D[0x3];                                     // Fixing Size Of Struct
};

// 0x4 (0x4 - 0x0)
// Function DaySequence.DaySequenceActor.Multicast_SetTimePerCycle
struct UDaySequenceActor_Multicast_SetTimePerCycle_Params
{
public:
	float                                        InHours;                                           // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function DaySequence.DaySequenceActor.IsPlaying
struct UDaySequenceActor_IsPlaying_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function DaySequence.DaySequenceActor.IsPaused
struct UDaySequenceActor_IsPaused_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function DaySequence.DaySequenceActor.IsMuteSequence
struct UDaySequenceActor_IsMuteSequence_Params
{
public:
	class FName                                  SequenceKey;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_327A[0x3];                                     // Fixing Size Of Struct
};

// 0x1 (0x1 - 0x0)
// Function DaySequence.DaySequenceActor.HasStaticTimeOfDay
struct UDaySequenceActor_HasStaticTimeOfDay_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function DaySequence.DaySequenceActor.GetTimePerCycle
struct UDaySequenceActor_GetTimePerCycle_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function DaySequence.DaySequenceActor.GetTimeOfDay
struct UDaySequenceActor_GetTimeOfDay_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function DaySequence.DaySequenceActor.GetStaticTimeOfDay
struct UDaySequenceActor_GetStaticTimeOfDay_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function DaySequence.DaySequenceActor.GetSequencePlayer
struct UDaySequenceActor_GetSequencePlayer_Params
{
public:
	class UDaySequencePlayer*                    ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function DaySequence.DaySequenceActor.GetInitialTimeOfDay
struct UDaySequenceActor_GetInitialTimeOfDay_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function DaySequence.DaySequenceActor.GetFirstDaySequence
struct UDaySequenceActor_GetFirstDaySequence_Params
{
public:
	class UDaySequence*                          ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function DaySequence.DaySequenceActor.GetDaySequence
struct UDaySequenceActor_GetDaySequence_Params
{
public:
	class FName                                  SequenceName;                                      // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_328D[0x4];                                     // Fixing Size After Last Property
	class UDaySequence*                          ReturnValue;                                       // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function DaySequence.DaySequenceActor.GetDayLength
struct UDaySequenceActor_GetDayLength_Params
{
public:
	float                                        ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function DaySequence.DaySequenceActor.GetBias
struct UDaySequenceActor_GetBias_Params
{
public:
	class FName                                  SequenceKey;                                       // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ReturnValue;                                       // 0x4(0x4)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function DaySequence.DaySequenceActor.ContainsDaySequence
struct UDaySequenceActor_ContainsDaySequence_Params
{
public:
	class UDaySequence*                          InDaySequence;                                     // 0x0(0x8)(ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x8(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3294[0x7];                                     // Fixing Size Of Struct
};

// 0x0 (0x0 - 0x0)
// Function DaySequence.DaySequenceDirector.OnCreated
struct UDaySequenceDirector_OnCreated_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function DaySequence.DaySequenceDirector.GetSequence
struct UDaySequenceDirector_GetSequence_Params
{
public:
	class UMovieSceneSequence*                   ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function DaySequence.DaySequenceDirector.GetRootSequenceTime
struct UDaySequenceDirector_GetRootSequenceTime_Params
{
public:
	struct FQualifiedFrameTime                   ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function DaySequence.DaySequenceDirector.GetMasterSequenceTime
struct UDaySequenceDirector_GetMasterSequenceTime_Params
{
public:
	struct FQualifiedFrameTime                   ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function DaySequence.DaySequenceDirector.GetCurrentTime
struct UDaySequenceDirector_GetCurrentTime_Params
{
public:
	struct FQualifiedFrameTime                   ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function DaySequence.DaySequenceDirector.GetBoundObjects
struct UDaySequenceDirector_GetBoundObjects_Params
{
public:
	struct FMovieSceneObjectBindingID            ObjectBinding;                                     // 0x0(0x18)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UObject*>                       ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function DaySequence.DaySequenceDirector.GetBoundObject
struct UDaySequenceDirector_GetBoundObject_Params
{
public:
	struct FMovieSceneObjectBindingID            ObjectBinding;                                     // 0x0(0x18)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// Function DaySequence.DaySequenceDirector.GetBoundActors
struct UDaySequenceDirector_GetBoundActors_Params
{
public:
	struct FMovieSceneObjectBindingID            ObjectBinding;                                     // 0x0(0x18)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UActor*>                        ReturnValue;                                       // 0x18(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function DaySequence.DaySequenceDirector.GetBoundActor
struct UDaySequenceDirector_GetBoundActor_Params
{
public:
	struct FMovieSceneObjectBindingID            ObjectBinding;                                     // 0x0(0x18)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UActor*                                ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function DaySequence.DaySequenceSubsystem.GetDaySequenceActor
struct UDaySequenceSubsystem_GetDaySequenceActor_Params
{
public:
	class UDaySequenceActor*                     ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
