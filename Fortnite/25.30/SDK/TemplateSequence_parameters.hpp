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

// 0x8 (0x8 - 0x0)
// Function TemplateSequence.TemplateSequenceActor.SetSequence
struct UTemplateSequenceActor_SetSequence_Params
{
public:
	class UTemplateSequence*                     InSequence;                                        // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// Function TemplateSequence.TemplateSequenceActor.SetBinding
struct UTemplateSequenceActor_SetBinding_Params
{
public:
	class UActor*                                Actor;                                             // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverridesDefault;                                 // 0x8(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2816[0x7];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function TemplateSequence.TemplateSequenceActor.LoadSequence
struct UTemplateSequenceActor_LoadSequence_Params
{
public:
	class UTemplateSequence*                     ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function TemplateSequence.TemplateSequenceActor.GetSequencePlayer
struct UTemplateSequenceActor_GetSequencePlayer_Params
{
public:
	class UTemplateSequencePlayer*               ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function TemplateSequence.TemplateSequenceActor.GetSequence
struct UTemplateSequenceActor_GetSequence_Params
{
public:
	class UTemplateSequence*                     ReturnValue;                                       // 0x0(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// Function TemplateSequence.TemplateSequencePlayer.CreateTemplateSequencePlayer
struct UTemplateSequencePlayer_CreateTemplateSequencePlayer_Params
{
public:
	class UObject*                               WorldContextObject;                                // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTemplateSequence*                     TemplateSequence;                                  // 0x8(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FMovieSceneSequencePlaybackSettings   Settings;                                          // 0x10(0x20)(Parm, NoDestructor, NativeAccessSpecifierPublic)
	class UTemplateSequenceActor*                OutActor;                                          // 0x30(0x8)(Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTemplateSequencePlayer*               ReturnValue;                                       // 0x38(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x700 (0x700 - 0x0)
// Function TemplateSequence.SequenceCameraShakeTestUtil.GetPostProcessBlendCache
struct USequenceCameraShakeTestUtil_GetPostProcessBlendCache_Params
{
public:
	class UPlayerController*                     PlayerController;                                  // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PPIndex;                                           // 0x8(0x4)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_282C[0x4];                                     // Fixing Size After Last Property
	struct FPostProcessSettings                  OutPPSettings;                                     // 0x10(0x6E0)(Parm, OutParm, NativeAccessSpecifierPublic)
	float                                        OutPPBlendWeight;                                  // 0x6F0(0x4)(Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         ReturnValue;                                       // 0x6F4(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_282E[0xB];                                     // Fixing Size Of Struct
};

// 0x7D0 (0x7D0 - 0x0)
// Function TemplateSequence.SequenceCameraShakeTestUtil.GetLastFrameCameraCachePOV
struct USequenceCameraShakeTestUtil_GetLastFrameCameraCachePOV_Params
{
public:
	class UPlayerController*                     PlayerController;                                  // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2837[0x8];                                     // Fixing Size After Last Property
	struct FMinimalViewInfo                      ReturnValue;                                       // 0x10(0x7C0)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

// 0x7D0 (0x7D0 - 0x0)
// Function TemplateSequence.SequenceCameraShakeTestUtil.GetCameraCachePOV
struct USequenceCameraShakeTestUtil_GetCameraCachePOV_Params
{
public:
	class UPlayerController*                     PlayerController;                                  // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_283C[0x8];                                     // Fixing Size After Last Property
	struct FMinimalViewInfo                      ReturnValue;                                       // 0x10(0x7C0)(Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
