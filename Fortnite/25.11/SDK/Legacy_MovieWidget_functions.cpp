#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function Legacy_MovieWidget.Legacy_MovieWidget_C.SetDelayedContentValues
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               Temp_bool_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EStretch                Temp_byte_Variable                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EStretch                Temp_byte_Variable_1                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EStretch                K2Node_Select_Default                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UMaterialInstanceDynamic*    CallFunc_GetDynamicMaterial_ReturnValue                          (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMediaTexture*               CallFunc_GetMediaTexture_ReturnValue                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ULegacy_MovieWidget_C::SetDelayedContentValues(bool Temp_bool_Variable, enum class EStretch Temp_byte_Variable, enum class EStretch Temp_byte_Variable_1, enum class EStretch K2Node_Select_Default, class UMaterialInstanceDynamic* CallFunc_GetDynamicMaterial_ReturnValue, class UMediaTexture* CallFunc_GetMediaTexture_ReturnValue)
{
	static auto Func = Class->GetFunction("Legacy_MovieWidget_C", "SetDelayedContentValues");

	Params::ULegacy_MovieWidget_C_SetDelayedContentValues_Params Parms;

	Parms.Temp_bool_Variable = Temp_bool_Variable;
	Parms.Temp_byte_Variable = Temp_byte_Variable;
	Parms.Temp_byte_Variable_1 = Temp_byte_Variable_1;
	Parms.K2Node_Select_Default = K2Node_Select_Default;
	Parms.CallFunc_GetDynamicMaterial_ReturnValue = CallFunc_GetDynamicMaterial_ReturnValue;
	Parms.CallFunc_GetMediaTexture_ReturnValue = CallFunc_GetMediaTexture_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Legacy_MovieWidget.Legacy_MovieWidget_C.Play
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ShouldRewind                                                     (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULegacy_MovieWidget_C::Play(bool ShouldRewind)
{
	static auto Func = Class->GetFunction("Legacy_MovieWidget_C", "Play");

	Params::ULegacy_MovieWidget_C_Play_Params Parms;

	Parms.ShouldRewind = ShouldRewind;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Legacy_MovieWidget.Legacy_MovieWidget_C.StopPlaying
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void ULegacy_MovieWidget_C::StopPlaying()
{
	static auto Func = Class->GetFunction("Legacy_MovieWidget_C", "StopPlaying");

	Params::ULegacy_MovieWidget_C_StopPlaying_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Legacy_MovieWidget.Legacy_MovieWidget_C.Init
// (Public, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UMediaPlayer*                InMediaPlayer                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UMediaSource*                InMediaSource                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UObject*                     InMediaSoundWave                                                 (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// int32                              AudioTrack                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMediaPlayerTrackOptions    K2Node_MakeStruct_MediaPlayerTrackOptions                        (NoDestructor)
// bool                               CallFunc_HasPlayerForSource_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FMediaPlayerOptions         K2Node_MakeStruct_MediaPlayerOptions                             (NoDestructor)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetMediaSource_ReturnValue                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_SetMediaSource_ReturnValue_1                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULegacy_MovieWidget_C::Init(class UMediaPlayer* InMediaPlayer, class UMediaSource* InMediaSource, class UObject* InMediaSoundWave, int32 AudioTrack, const struct FMediaPlayerTrackOptions& K2Node_MakeStruct_MediaPlayerTrackOptions, bool CallFunc_HasPlayerForSource_ReturnValue, const struct FMediaPlayerOptions& K2Node_MakeStruct_MediaPlayerOptions, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, bool CallFunc_SetMediaSource_ReturnValue, bool CallFunc_SetMediaSource_ReturnValue_1)
{
	static auto Func = Class->GetFunction("Legacy_MovieWidget_C", "Init");

	Params::ULegacy_MovieWidget_C_Init_Params Parms;

	Parms.InMediaPlayer = InMediaPlayer;
	Parms.InMediaSource = InMediaSource;
	Parms.InMediaSoundWave = InMediaSoundWave;
	Parms.AudioTrack = AudioTrack;
	Parms.K2Node_MakeStruct_MediaPlayerTrackOptions = K2Node_MakeStruct_MediaPlayerTrackOptions;
	Parms.CallFunc_HasPlayerForSource_ReturnValue = CallFunc_HasPlayerForSource_ReturnValue;
	Parms.K2Node_MakeStruct_MediaPlayerOptions = K2Node_MakeStruct_MediaPlayerOptions;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.CallFunc_SetMediaSource_ReturnValue = CallFunc_SetMediaSource_ReturnValue;
	Parms.CallFunc_SetMediaSource_ReturnValue_1 = CallFunc_SetMediaSource_ReturnValue_1;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Legacy_MovieWidget.Legacy_MovieWidget_C.Destruct
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:

void ULegacy_MovieWidget_C::Destruct()
{
	static auto Func = Class->GetFunction("Legacy_MovieWidget_C", "Destruct");

	Params::ULegacy_MovieWidget_C_Destruct_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Legacy_MovieWidget.Legacy_MovieWidget_C.MediaDimensionsUpdated
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              NewWidth                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              NewHeight                                                        (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void ULegacy_MovieWidget_C::MediaDimensionsUpdated(float NewWidth, float NewHeight)
{
	static auto Func = Class->GetFunction("Legacy_MovieWidget_C", "MediaDimensionsUpdated");

	Params::ULegacy_MovieWidget_C_MediaDimensionsUpdated_Params Parms;

	Parms.NewWidth = NewWidth;
	Parms.NewHeight = NewHeight;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Legacy_MovieWidget.Legacy_MovieWidget_C.OnMediaLoaded
// (BlueprintCallable, BlueprintEvent)
// Parameters:

void ULegacy_MovieWidget_C::OnMediaLoaded()
{
	static auto Func = Class->GetFunction("Legacy_MovieWidget_C", "OnMediaLoaded");

	Params::ULegacy_MovieWidget_C_OnMediaLoaded_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Legacy_MovieWidget.Legacy_MovieWidget_C.ExecuteUbergraph_Legacy_MovieWidget
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FDelegateProperty_                 K2Node_CreateDelegate_OutputDelegate                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_NewWidth                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// float                              K2Node_Event_NewHeight                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVector2D                   CallFunc_MakeVector2D_ReturnValue                                (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSlateBrush                 K2Node_MakeStruct_SlateBrush                                     ()
// double                             CallFunc_MakeVector2D_X_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// double                             CallFunc_MakeVector2D_Y_ImplicitCast                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FDeprecateSlateVector2D     K2Node_MakeStruct_ImageSize_ImplicitCast                         (NoDestructor, HasGetValueTypeHash)

void ULegacy_MovieWidget_C::ExecuteUbergraph_Legacy_MovieWidget(int32 EntryPoint, FDelegateProperty_ K2Node_CreateDelegate_OutputDelegate, float K2Node_Event_NewWidth, float K2Node_Event_NewHeight, const struct FVector2D& CallFunc_MakeVector2D_ReturnValue, const struct FSlateBrush& K2Node_MakeStruct_SlateBrush, double CallFunc_MakeVector2D_X_ImplicitCast, double CallFunc_MakeVector2D_Y_ImplicitCast, const struct FDeprecateSlateVector2D& K2Node_MakeStruct_ImageSize_ImplicitCast)
{
	static auto Func = Class->GetFunction("Legacy_MovieWidget_C", "ExecuteUbergraph_Legacy_MovieWidget");

	Params::ULegacy_MovieWidget_C_ExecuteUbergraph_Legacy_MovieWidget_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_CreateDelegate_OutputDelegate = K2Node_CreateDelegate_OutputDelegate;
	Parms.K2Node_Event_NewWidth = K2Node_Event_NewWidth;
	Parms.K2Node_Event_NewHeight = K2Node_Event_NewHeight;
	Parms.CallFunc_MakeVector2D_ReturnValue = CallFunc_MakeVector2D_ReturnValue;
	Parms.K2Node_MakeStruct_SlateBrush = K2Node_MakeStruct_SlateBrush;
	Parms.CallFunc_MakeVector2D_X_ImplicitCast = CallFunc_MakeVector2D_X_ImplicitCast;
	Parms.CallFunc_MakeVector2D_Y_ImplicitCast = CallFunc_MakeVector2D_Y_ImplicitCast;
	Parms.K2Node_MakeStruct_ImageSize_ImplicitCast = K2Node_MakeStruct_ImageSize_ImplicitCast;

	UObject::ProcessEvent(Func, &Parms);

}


// Function Legacy_MovieWidget.Legacy_MovieWidget_C.OnMediaFailedToOpen__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ULegacy_MovieWidget_C::OnMediaFailedToOpen__DelegateSignature()
{
	static auto Func = Class->GetFunction("Legacy_MovieWidget_C", "OnMediaFailedToOpen__DelegateSignature");

	Params::ULegacy_MovieWidget_C_OnMediaFailedToOpen__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function Legacy_MovieWidget.Legacy_MovieWidget_C.OnMediaReadyToPlay__DelegateSignature
// (Public, Delegate, BlueprintCallable, BlueprintEvent)
// Parameters:

void ULegacy_MovieWidget_C::OnMediaReadyToPlay__DelegateSignature()
{
	static auto Func = Class->GetFunction("Legacy_MovieWidget_C", "OnMediaReadyToPlay__DelegateSignature");

	Params::ULegacy_MovieWidget_C_OnMediaReadyToPlay__DelegateSignature_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
