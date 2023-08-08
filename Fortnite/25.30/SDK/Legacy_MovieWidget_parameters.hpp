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

// 0x18 (0x18 - 0x0)
// Function Legacy_MovieWidget.Legacy_MovieWidget_C.SetDelayedContentValues
struct ULegacy_MovieWidget_C_SetDelayedContentValues_Params
{
public:
	bool                                         Temp_bool_Variable;                                // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EStretch                          Temp_byte_Variable;                                // 0x1(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EStretch                          Temp_byte_Variable_1;                              // 0x2(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EStretch                          K2Node_Select_Default;                             // 0x3(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_D2[0x4];                                       // Fixing Size After Last Property
	class UMaterialInstanceDynamic*              CallFunc_GetDynamicMaterial_ReturnValue;           // 0x8(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMediaTexture*                         CallFunc_GetMediaTexture_ReturnValue;              // 0x10(0x8)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function Legacy_MovieWidget.Legacy_MovieWidget_C.Play
struct ULegacy_MovieWidget_C_Play_Params
{
public:
	bool                                         ShouldRewind;                                      // 0x0(0x1)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function Legacy_MovieWidget.Legacy_MovieWidget_C.StopPlaying
struct ULegacy_MovieWidget_C_StopPlaying_Params
{
public:
};

// 0x7E (0x7E - 0x0)
// Function Legacy_MovieWidget.Legacy_MovieWidget_C.Init
struct ULegacy_MovieWidget_C_Init_Params
{
public:
	class UMediaPlayer*                          InMediaPlayer;                                     // 0x0(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UMediaSource*                          InMediaSource;                                     // 0x8(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	class UObject*                               InMediaSoundWave;                                  // 0x10(0x8)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	int32                                        AudioTrack;                                        // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FMediaPlayerTrackOptions              K2Node_MakeStruct_MediaPlayerTrackOptions;         // 0x1C(0x1C)(NoDestructor)
	bool                                         CallFunc_HasPlayerForSource_ReturnValue;           // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_DA[0x7];                                       // Fixing Size After Last Property
	struct FMediaPlayerOptions                   K2Node_MakeStruct_MediaPlayerOptions;              // 0x40(0x30)(NoDestructor)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x70(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetMediaSource_ReturnValue;               // 0x7C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	bool                                         CallFunc_SetMediaSource_ReturnValue_1;             // 0x7D(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function Legacy_MovieWidget.Legacy_MovieWidget_C.Destruct
struct ULegacy_MovieWidget_C_Destruct_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function Legacy_MovieWidget.Legacy_MovieWidget_C.MediaDimensionsUpdated
struct ULegacy_MovieWidget_C_MediaDimensionsUpdated_Params
{
public:
	float                                        NewWidth;                                          // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        NewHeight;                                         // 0x4(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function Legacy_MovieWidget.Legacy_MovieWidget_C.OnMediaLoaded
struct ULegacy_MovieWidget_C_OnMediaLoaded_Params
{
public:
};

// 0x108 (0x108 - 0x0)
// Function Legacy_MovieWidget.Legacy_MovieWidget_C.ExecuteUbergraph_Legacy_MovieWidget
struct ULegacy_MovieWidget_C_ExecuteUbergraph_Legacy_MovieWidget_Params
{
public:
	int32                                        EntryPoint;                                        // 0x0(0x4)(BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FDelegateProperty_                           K2Node_CreateDelegate_OutputDelegate;              // 0x4(0xC)(ZeroConstructor, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_NewWidth;                             // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	float                                        K2Node_Event_NewHeight;                            // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FVector2D                             CallFunc_MakeVector2D_ReturnValue;                 // 0x18(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_E0[0x8];                                       // Fixing Size After Last Property
	struct FSlateBrush                           K2Node_MakeStruct_SlateBrush;                      // 0x30(0xC0)()
	double                                       CallFunc_MakeVector2D_X_ImplicitCast;              // 0xF0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	double                                       CallFunc_MakeVector2D_Y_ImplicitCast;              // 0xF8(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FDeprecateSlateVector2D               K2Node_MakeStruct_ImageSize_ImplicitCast;          // 0x100(0x8)(NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function Legacy_MovieWidget.Legacy_MovieWidget_C.OnMediaFailedToOpen__DelegateSignature
struct ULegacy_MovieWidget_C_OnMediaFailedToOpen__DelegateSignature_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function Legacy_MovieWidget.Legacy_MovieWidget_C.OnMediaReadyToPlay__DelegateSignature
struct ULegacy_MovieWidget_C_OnMediaReadyToPlay__DelegateSignature_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
