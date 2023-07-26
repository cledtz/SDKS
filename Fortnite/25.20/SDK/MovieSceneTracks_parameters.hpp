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

// 0x60 (0x60 - 0x0)
// Function MovieSceneTracks.MovieSceneTransformOrigin.BP_GetTransformOrigin
struct UMovieSceneTransformOrigin_BP_GetTransformOrigin_Params
{
public:
	struct FTransform                            ReturnValue;                                       // 0x0(0x60)(Parm, OutParm, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function MovieSceneTracks.MovieScene3DConstraintSection.SetConstraintBindingID
struct UMovieScene3DConstraintSection_SetConstraintBindingID_Params
{
public:
	struct FMovieSceneObjectBindingID            InConstraintBindingID;                             // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function MovieSceneTracks.MovieScene3DConstraintSection.GetConstraintBindingID
struct UMovieScene3DConstraintSection_GetConstraintBindingID_Params
{
public:
	struct FMovieSceneObjectBindingID            ReturnValue;                                       // 0x0(0x18)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MovieSceneTracks.MovieSceneAudioSection.SetSuppressSubtitles
struct UMovieSceneAudioSection_SetSuppressSubtitles_Params
{
public:
	bool                                         bInSuppressSubtitles;                              // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function MovieSceneTracks.MovieSceneAudioSection.SetStartOffset
struct UMovieSceneAudioSection_SetStartOffset_Params
{
public:
	struct FFrameNumber                          InStartOffset;                                     // 0x0(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MovieSceneTracks.MovieSceneAudioSection.SetSound
struct UMovieSceneAudioSection_SetSound_Params
{
public:
	class USoundBase*                            InSound;                                           // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MovieSceneTracks.MovieSceneAudioSection.SetOverrideAttenuation
struct UMovieSceneAudioSection_SetOverrideAttenuation_Params
{
public:
	bool                                         bInOverrideAttenuation;                            // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MovieSceneTracks.MovieSceneAudioSection.SetLooping
struct UMovieSceneAudioSection_SetLooping_Params
{
public:
	bool                                         bInLooping;                                        // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MovieSceneTracks.MovieSceneAudioSection.SetAttenuationSettings
struct UMovieSceneAudioSection_SetAttenuationSettings_Params
{
public:
	class USoundAttenuation*                     InAttenuationSettings;                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MovieSceneTracks.MovieSceneAudioSection.GetSuppressSubtitles
struct UMovieSceneAudioSection_GetSuppressSubtitles_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// Function MovieSceneTracks.MovieSceneAudioSection.GetStartOffset
struct UMovieSceneAudioSection_GetStartOffset_Params
{
public:
	struct FFrameNumber                          ReturnValue;                                       // 0x0(0x4)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MovieSceneTracks.MovieSceneAudioSection.GetSound
struct UMovieSceneAudioSection_GetSound_Params
{
public:
	class USoundBase*                            ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MovieSceneTracks.MovieSceneAudioSection.GetOverrideAttenuation
struct UMovieSceneAudioSection_GetOverrideAttenuation_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MovieSceneTracks.MovieSceneAudioSection.GetLooping
struct UMovieSceneAudioSection_GetLooping_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MovieSceneTracks.MovieSceneAudioSection.GetAttenuationSettings
struct UMovieSceneAudioSection_GetAttenuationSettings_Params
{
public:
	class USoundAttenuation*                     ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function MovieSceneTracks.MovieSceneCameraCutSection.SetCameraBindingID
struct UMovieSceneCameraCutSection_SetCameraBindingID_Params
{
public:
	struct FMovieSceneObjectBindingID            InCameraBindingID;                                 // 0x0(0x18)(ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function MovieSceneTracks.MovieSceneCameraCutSection.GetCameraBindingID
struct UMovieSceneCameraCutSection_GetCameraBindingID_Params
{
public:
	struct FMovieSceneObjectBindingID            ReturnValue;                                       // 0x0(0x18)(ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MovieSceneTracks.MovieSceneCinematicShotSection.SetShotDisplayName
struct UMovieSceneCinematicShotSection_SetShotDisplayName_Params
{
public:
	class FString                                InShotDisplayName;                                 // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MovieSceneTracks.MovieSceneCinematicShotSection.GetShotDisplayName
struct UMovieSceneCinematicShotSection_GetShotDisplayName_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MovieSceneTracks.MovieSceneCVarSection.SetFromString
struct UMovieSceneCVarSection_SetFromString_Params
{
public:
	class FString                                InString;                                          // 0x0(0x10)(Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MovieSceneTracks.MovieSceneCVarSection.GetString
struct UMovieSceneCVarSection_GetString_Params
{
public:
	class FString                                ReturnValue;                                       // 0x0(0x10)(Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MovieSceneTracks.MovieSceneDataLayerSection.SetPrerollState
struct UMovieSceneDataLayerSection_SetPrerollState_Params
{
public:
	enum class EDataLayerRuntimeState            InPrerollState;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MovieSceneTracks.MovieSceneDataLayerSection.SetFlushOnUnload
struct UMovieSceneDataLayerSection_SetFlushOnUnload_Params
{
public:
	bool                                         bFlushOnUnload;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MovieSceneTracks.MovieSceneDataLayerSection.SetDesiredState
struct UMovieSceneDataLayerSection_SetDesiredState_Params
{
public:
	enum class EDataLayerRuntimeState            InDesiredState;                                    // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MovieSceneTracks.MovieSceneDataLayerSection.SetDataLayers
struct UMovieSceneDataLayerSection_SetDataLayers_Params
{
public:
	TArray<struct FActorDataLayer>               InDataLayers;                                      // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MovieSceneTracks.MovieSceneDataLayerSection.SetDataLayerAssets
struct UMovieSceneDataLayerSection_SetDataLayerAssets_Params
{
public:
	TArray<class UDataLayerAsset*>               InDataLayerAssets;                                 // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MovieSceneTracks.MovieSceneDataLayerSection.GetPrerollState
struct UMovieSceneDataLayerSection_GetPrerollState_Params
{
public:
	enum class EDataLayerRuntimeState            ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MovieSceneTracks.MovieSceneDataLayerSection.GetFlushOnUnload
struct UMovieSceneDataLayerSection_GetFlushOnUnload_Params
{
public:
	bool                                         ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MovieSceneTracks.MovieSceneDataLayerSection.GetDesiredState
struct UMovieSceneDataLayerSection_GetDesiredState_Params
{
public:
	enum class EDataLayerRuntimeState            ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MovieSceneTracks.MovieSceneDataLayerSection.GetDataLayers
struct UMovieSceneDataLayerSection_GetDataLayers_Params
{
public:
	TArray<struct FActorDataLayer>               ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MovieSceneTracks.MovieSceneDataLayerSection.GetDataLayerAssets
struct UMovieSceneDataLayerSection_GetDataLayerAssets_Params
{
public:
	TArray<class UDataLayerAsset*>               ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetVisibility
struct UMovieSceneLevelVisibilitySection_SetVisibility_Params
{
public:
	enum class ELevelVisibility                  InVisibility;                                      // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MovieSceneTracks.MovieSceneLevelVisibilitySection.SetLevelNames
struct UMovieSceneLevelVisibilitySection_SetLevelNames_Params
{
public:
	TArray<class FName>                          InLevelNames;                                      // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetVisibility
struct UMovieSceneLevelVisibilitySection_GetVisibility_Params
{
public:
	enum class ELevelVisibility                  ReturnValue;                                       // 0x0(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function MovieSceneTracks.MovieSceneLevelVisibilitySection.GetLevelNames
struct UMovieSceneLevelVisibilitySection_GetLevelNames_Params
{
public:
	TArray<class FName>                          ReturnValue;                                       // 0x0(0x10)(ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function MovieSceneTracks.MovieSceneParameterSection.RemoveVectorParameter
struct UMovieSceneParameterSection_RemoveVectorParameter_Params
{
public:
	class FName                                  InParameterName;                                   // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B5[0x3];                                       // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// Function MovieSceneTracks.MovieSceneParameterSection.RemoveVector2DParameter
struct UMovieSceneParameterSection_RemoveVector2DParameter_Params
{
public:
	class FName                                  InParameterName;                                   // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B6[0x3];                                       // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// Function MovieSceneTracks.MovieSceneParameterSection.RemoveTransformParameter
struct UMovieSceneParameterSection_RemoveTransformParameter_Params
{
public:
	class FName                                  InParameterName;                                   // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B7[0x3];                                       // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// Function MovieSceneTracks.MovieSceneParameterSection.RemoveScalarParameter
struct UMovieSceneParameterSection_RemoveScalarParameter_Params
{
public:
	class FName                                  InParameterName;                                   // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B8[0x3];                                       // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// Function MovieSceneTracks.MovieSceneParameterSection.RemoveColorParameter
struct UMovieSceneParameterSection_RemoveColorParameter_Params
{
public:
	class FName                                  InParameterName;                                   // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_B9[0x3];                                       // Fixing Size Of Struct..
};

// 0x8 (0x8 - 0x0)
// Function MovieSceneTracks.MovieSceneParameterSection.RemoveBoolParameter
struct UMovieSceneParameterSection_RemoveBoolParameter_Params
{
public:
	class FName                                  InParameterName;                                   // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BA[0x3];                                       // Fixing Size Of Struct..
};

// 0x50 (0x50 - 0x0)
// Function MovieSceneTracks.MovieSceneParameterSection.GetParameterNames
struct UMovieSceneParameterSection_GetParameterNames_Params
{
public:
	TSet<class FName>                            ParameterNames;                                    // 0x0(0x50)(Parm, OutParm, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function MovieSceneTracks.MovieSceneParameterSection.AddVectorParameterKey
struct UMovieSceneParameterSection_AddVectorParameterKey_Params
{
public:
	class FName                                  InParameterName;                                   // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                          InTime;                                            // 0x4(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               InValue;                                           // 0x8(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function MovieSceneTracks.MovieSceneParameterSection.AddVector2DParameterKey
struct UMovieSceneParameterSection_AddVector2DParameterKey_Params
{
public:
	class FName                                  InParameterName;                                   // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                          InTime;                                            // 0x4(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             InValue;                                           // 0x8(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// Function MovieSceneTracks.MovieSceneParameterSection.AddTransformParameterKey
struct UMovieSceneParameterSection_AddTransformParameterKey_Params
{
public:
	class FName                                  InParameterName;                                   // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                          InTime;                                            // 0x4(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BB[0x8];                                       // Fixing Size After Last Property..
	struct FTransform                            InValue;                                           // 0x10(0x60)(ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function MovieSceneTracks.MovieSceneParameterSection.AddScalarParameterKey
struct UMovieSceneParameterSection_AddScalarParameterKey_Params
{
public:
	class FName                                  InParameterName;                                   // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                          InTime;                                            // 0x4(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InValue;                                           // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// Function MovieSceneTracks.MovieSceneParameterSection.AddColorParameterKey
struct UMovieSceneParameterSection_AddColorParameterKey_Params
{
public:
	class FName                                  InParameterName;                                   // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                          InTime;                                            // 0x4(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          InValue;                                           // 0x8(0x10)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// Function MovieSceneTracks.MovieSceneParameterSection.AddBoolParameterKey
struct UMovieSceneParameterSection_AddBoolParameterKey_Params
{
public:
	class FName                                  InParameterName;                                   // 0x0(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameNumber                          InTime;                                            // 0x4(0x4)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         InValue;                                           // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_BC[0x3];                                       // Fixing Size Of Struct..
};

// 0x20 (0x20 - 0x0)
// Function MovieSceneTracks.MovieSceneAsyncAction_SequencePrediction.PredictWorldTransformAtTime
struct UMovieSceneAsyncAction_SequencePrediction_PredictWorldTransformAtTime_Params
{
public:
	class UMovieSceneSequencePlayer*             Player;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       TargetComponent;                                   // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeInSeconds;                                     // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DB[0x4];                                       // Fixing Size After Last Property..
	class UMovieSceneAsyncAction_SequencePrediction* ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function MovieSceneTracks.MovieSceneAsyncAction_SequencePrediction.PredictWorldTransformAtFrame
struct UMovieSceneAsyncAction_SequencePrediction_PredictWorldTransformAtFrame_Params
{
public:
	class UMovieSceneSequencePlayer*             Player;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       TargetComponent;                                   // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameTime                            FrameTime;                                         // 0x10(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMovieSceneAsyncAction_SequencePrediction* ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function MovieSceneTracks.MovieSceneAsyncAction_SequencePrediction.PredictLocalTransformAtTime
struct UMovieSceneAsyncAction_SequencePrediction_PredictLocalTransformAtTime_Params
{
public:
	class UMovieSceneSequencePlayer*             Player;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       TargetComponent;                                   // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TimeInSeconds;                                     // 0x10(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_DC[0x4];                                       // Fixing Size After Last Property..
	class UMovieSceneAsyncAction_SequencePrediction* ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// Function MovieSceneTracks.MovieSceneAsyncAction_SequencePrediction.PredictLocalTransformAtFrame
struct UMovieSceneAsyncAction_SequencePrediction_PredictLocalTransformAtFrame_Params
{
public:
	class UMovieSceneSequencePlayer*             Player;                                            // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       TargetComponent;                                   // 0x8(0x8)(Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FFrameTime                            FrameTime;                                         // 0x10(0x8)(Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMovieSceneAsyncAction_SequencePrediction* ReturnValue;                                       // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
