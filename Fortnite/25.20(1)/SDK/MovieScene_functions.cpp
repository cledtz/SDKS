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


// Function MovieScene.MovieSceneEasingFunction.OnEvaluate
// (Event, Protected, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                              Interp                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UMovieSceneEasingFunction::OnEvaluate(float Interp)
{
	static auto Func = Class->GetFunction("MovieSceneEasingFunction", "OnEvaluate");

	Params::UMovieSceneEasingFunction_OnEvaluate_Params Parms;

	Parms.Interp = Interp;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function MovieScene.MovieSceneCustomClockSource.OnTick
// (Native, Public)
// Parameters:
// float                              DeltaSeconds                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InPlayRate                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneCustomClockSource::OnTick(float DeltaSeconds, float InPlayRate)
{
	static auto Func = Class->GetFunction("MovieSceneCustomClockSource", "OnTick");

	Params::UMovieSceneCustomClockSource_OnTick_Params Parms;

	Parms.DeltaSeconds = DeltaSeconds;
	Parms.InPlayRate = InPlayRate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MovieScene.MovieSceneCustomClockSource.OnStopPlaying
// (Native, Public, HasOutParams)
// Parameters:
// struct FQualifiedFrameTime         InStopTime                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneCustomClockSource::OnStopPlaying(struct FQualifiedFrameTime& InStopTime)
{
	static auto Func = Class->GetFunction("MovieSceneCustomClockSource", "OnStopPlaying");

	Params::UMovieSceneCustomClockSource_OnStopPlaying_Params Parms;

	Parms.InStopTime = InStopTime;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MovieScene.MovieSceneCustomClockSource.OnStartPlaying
// (Native, Public, HasOutParams)
// Parameters:
// struct FQualifiedFrameTime         InStartTime                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneCustomClockSource::OnStartPlaying(struct FQualifiedFrameTime& InStartTime)
{
	static auto Func = Class->GetFunction("MovieSceneCustomClockSource", "OnStartPlaying");

	Params::UMovieSceneCustomClockSource_OnStartPlaying_Params Parms;

	Parms.InStartTime = InStartTime;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MovieScene.MovieSceneCustomClockSource.OnRequestCurrentTime
// (Native, Public, HasOutParams)
// Parameters:
// struct FQualifiedFrameTime         InCurrentTime                                                    (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InPlayRate                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFrameTime                  ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FFrameTime UMovieSceneCustomClockSource::OnRequestCurrentTime(struct FQualifiedFrameTime& InCurrentTime, float InPlayRate)
{
	static auto Func = Class->GetFunction("MovieSceneCustomClockSource", "OnRequestCurrentTime");

	Params::UMovieSceneCustomClockSource_OnRequestCurrentTime_Params Parms;

	Parms.InCurrentTime = InCurrentTime;
	Parms.InPlayRate = InPlayRate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieScene.MovieSceneMetaData.SetNotes
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InNotes                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneMetaData::SetNotes(const class FString& InNotes)
{
	static auto Func = Class->GetFunction("MovieSceneMetaData", "SetNotes");

	Params::UMovieSceneMetaData_SetNotes_Params Parms;

	Parms.InNotes = InNotes;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MovieScene.MovieSceneMetaData.SetCreated
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FDateTime                   InCreated                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneMetaData::SetCreated(const struct FDateTime& InCreated)
{
	static auto Func = Class->GetFunction("MovieSceneMetaData", "SetCreated");

	Params::UMovieSceneMetaData_SetCreated_Params Parms;

	Parms.InCreated = InCreated;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MovieScene.MovieSceneMetaData.SetAuthor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InAuthor                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneMetaData::SetAuthor(const class FString& InAuthor)
{
	static auto Func = Class->GetFunction("MovieSceneMetaData", "SetAuthor");

	Params::UMovieSceneMetaData_SetAuthor_Params Parms;

	Parms.InAuthor = InAuthor;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MovieScene.MovieSceneMetaData.GetNotes
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UMovieSceneMetaData::GetNotes()
{
	static auto Func = Class->GetFunction("MovieSceneMetaData", "GetNotes");

	Params::UMovieSceneMetaData_GetNotes_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieScene.MovieSceneMetaData.GetCreated
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FDateTime                   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FDateTime UMovieSceneMetaData::GetCreated()
{
	static auto Func = Class->GetFunction("MovieSceneMetaData", "GetCreated");

	Params::UMovieSceneMetaData_GetCreated_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieScene.MovieSceneMetaData.GetAuthor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UMovieSceneMetaData::GetAuthor()
{
	static auto Func = Class->GetFunction("MovieSceneMetaData", "GetAuthor");

	Params::UMovieSceneMetaData_GetAuthor_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSection.SetRowIndex
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// int32                              NewRowIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneSection::SetRowIndex(int32 NewRowIndex)
{
	static auto Func = Class->GetFunction("MovieSceneSection", "SetRowIndex");

	Params::UMovieSceneSection_SetRowIndex_Params Parms;

	Parms.NewRowIndex = NewRowIndex;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MovieScene.MovieSceneSection.SetPreRollFrames
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InPreRollFrames                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneSection::SetPreRollFrames(int32 InPreRollFrames)
{
	static auto Func = Class->GetFunction("MovieSceneSection", "SetPreRollFrames");

	Params::UMovieSceneSection_SetPreRollFrames_Params Parms;

	Parms.InPreRollFrames = InPreRollFrames;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MovieScene.MovieSceneSection.SetPostRollFrames
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InPostRollFrames                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneSection::SetPostRollFrames(int32 InPostRollFrames)
{
	static auto Func = Class->GetFunction("MovieSceneSection", "SetPostRollFrames");

	Params::UMovieSceneSection_SetPostRollFrames_Params Parms;

	Parms.InPostRollFrames = InPostRollFrames;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MovieScene.MovieSceneSection.SetOverlapPriority
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              NewPriority                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneSection::SetOverlapPriority(int32 NewPriority)
{
	static auto Func = Class->GetFunction("MovieSceneSection", "SetOverlapPriority");

	Params::UMovieSceneSection_SetOverlapPriority_Params Parms;

	Parms.NewPriority = NewPriority;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MovieScene.MovieSceneSection.SetIsLocked
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInIsLocked                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneSection::SetIsLocked(bool bInIsLocked)
{
	static auto Func = Class->GetFunction("MovieSceneSection", "SetIsLocked");

	Params::UMovieSceneSection_SetIsLocked_Params Parms;

	Parms.bInIsLocked = bInIsLocked;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MovieScene.MovieSceneSection.SetIsActive
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInIsActive                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneSection::SetIsActive(bool bInIsActive)
{
	static auto Func = Class->GetFunction("MovieSceneSection", "SetIsActive");

	Params::UMovieSceneSection_SetIsActive_Params Parms;

	Parms.bInIsActive = bInIsActive;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MovieScene.MovieSceneSection.SetCompletionMode
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EMovieSceneCompletionModeInCompletionMode                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneSection::SetCompletionMode(enum class EMovieSceneCompletionMode InCompletionMode)
{
	static auto Func = Class->GetFunction("MovieSceneSection", "SetCompletionMode");

	Params::UMovieSceneSection_SetCompletionMode_Params Parms;

	Parms.InCompletionMode = InCompletionMode;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MovieScene.MovieSceneSection.SetColorTint
// (Final, RequiredAPI, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FColor                      InColorTint                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneSection::SetColorTint(struct FColor& InColorTint)
{
	static auto Func = Class->GetFunction("MovieSceneSection", "SetColorTint");

	Params::UMovieSceneSection_SetColorTint_Params Parms;

	Parms.InColorTint = InColorTint;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MovieScene.MovieSceneSection.SetBlendType
// (RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// enum class EMovieSceneBlendType    InBlendType                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneSection::SetBlendType(enum class EMovieSceneBlendType InBlendType)
{
	static auto Func = Class->GetFunction("MovieSceneSection", "SetBlendType");

	Params::UMovieSceneSection_SetBlendType_Params Parms;

	Parms.InBlendType = InBlendType;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MovieScene.MovieSceneSection.IsLocked
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovieSceneSection::IsLocked()
{
	static auto Func = Class->GetFunction("MovieSceneSection", "IsLocked");

	Params::UMovieSceneSection_IsLocked_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSection.IsActive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovieSceneSection::IsActive()
{
	static auto Func = Class->GetFunction("MovieSceneSection", "IsActive");

	Params::UMovieSceneSection_IsActive_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSection.GetRowIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMovieSceneSection::GetRowIndex()
{
	static auto Func = Class->GetFunction("MovieSceneSection", "GetRowIndex");

	Params::UMovieSceneSection_GetRowIndex_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSection.GetPreRollFrames
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMovieSceneSection::GetPreRollFrames()
{
	static auto Func = Class->GetFunction("MovieSceneSection", "GetPreRollFrames");

	Params::UMovieSceneSection_GetPreRollFrames_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSection.GetPostRollFrames
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMovieSceneSection::GetPostRollFrames()
{
	static auto Func = Class->GetFunction("MovieSceneSection", "GetPostRollFrames");

	Params::UMovieSceneSection_GetPostRollFrames_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSection.GetOverlapPriority
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMovieSceneSection::GetOverlapPriority()
{
	static auto Func = Class->GetFunction("MovieSceneSection", "GetOverlapPriority");

	Params::UMovieSceneSection_GetOverlapPriority_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSection.GetCompletionMode
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EMovieSceneCompletionModeReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EMovieSceneCompletionMode UMovieSceneSection::GetCompletionMode()
{
	static auto Func = Class->GetFunction("MovieSceneSection", "GetCompletionMode");

	Params::UMovieSceneSection_GetCompletionMode_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSection.GetColorTint
// (Final, RequiredAPI, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FColor                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FColor UMovieSceneSection::GetColorTint()
{
	static auto Func = Class->GetFunction("MovieSceneSection", "GetColorTint");

	Params::UMovieSceneSection_GetColorTint_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSection.GetBlendType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FOptionalMovieSceneBlendTypeReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FOptionalMovieSceneBlendType UMovieSceneSection::GetBlendType()
{
	static auto Func = Class->GetFunction("MovieSceneSection", "GetBlendType");

	Params::UMovieSceneSection_GetBlendType_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSequence.GetEarliestTimecodeSource
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FMovieSceneTimecodeSource   ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FMovieSceneTimecodeSource UMovieSceneSequence::GetEarliestTimecodeSource()
{
	static auto Func = Class->GetFunction("MovieSceneSequence", "GetEarliestTimecodeSource");

	Params::UMovieSceneSequence_GetEarliestTimecodeSource_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSequence.FindBindingsByTag
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        InBindingName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FMovieSceneObjectBindingID>ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<struct FMovieSceneObjectBindingID> UMovieSceneSequence::FindBindingsByTag(class FName InBindingName)
{
	static auto Func = Class->GetFunction("MovieSceneSequence", "FindBindingsByTag");

	Params::UMovieSceneSequence_FindBindingsByTag_Params Parms;

	Parms.InBindingName = InBindingName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSequence.FindBindingByTag
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class FName                        InBindingName                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FMovieSceneObjectBindingID  ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FMovieSceneObjectBindingID UMovieSceneSequence::FindBindingByTag(class FName InBindingName)
{
	static auto Func = Class->GetFunction("MovieSceneSequence", "FindBindingByTag");

	Params::UMovieSceneSequence_FindBindingByTag_Params Parms;

	Parms.InBindingName = InBindingName;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSequencePlayer.StopAtCurrentTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMovieSceneSequencePlayer::StopAtCurrentTime()
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "StopAtCurrentTime");

	Params::UMovieSceneSequencePlayer_StopAtCurrentTime_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MovieScene.MovieSceneSequencePlayer.Stop
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMovieSceneSequencePlayer::Stop()
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "Stop");

	Params::UMovieSceneSequencePlayer_Stop_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MovieScene.MovieSceneSequencePlayer.SetWeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// double                             InWeight                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneSequencePlayer::SetWeight(double InWeight)
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "SetWeight");

	Params::UMovieSceneSequencePlayer_SetWeight_Params Parms;

	Parms.InWeight = InWeight;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MovieScene.MovieSceneSequencePlayer.SetTimeRange
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              StartTime                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Duration                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneSequencePlayer::SetTimeRange(float StartTime, float Duration)
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "SetTimeRange");

	Params::UMovieSceneSequencePlayer_SetTimeRange_Params Parms;

	Parms.StartTime = StartTime;
	Parms.Duration = Duration;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MovieScene.MovieSceneSequencePlayer.SetPlayRate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              PlayRate                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneSequencePlayer::SetPlayRate(float PlayRate)
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "SetPlayRate");

	Params::UMovieSceneSequencePlayer_SetPlayRate_Params Parms;

	Parms.PlayRate = PlayRate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MovieScene.MovieSceneSequencePlayer.SetPlaybackPosition
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMovieSceneSequencePlaybackParamsPlaybackParams                                                   (Parm, NativeAccessSpecifierPublic)

void UMovieSceneSequencePlayer::SetPlaybackPosition(const struct FMovieSceneSequencePlaybackParams& PlaybackParams)
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "SetPlaybackPosition");

	Params::UMovieSceneSequencePlayer_SetPlaybackPosition_Params Parms;

	Parms.PlaybackParams = PlaybackParams;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MovieScene.MovieSceneSequencePlayer.SetFrameRate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FFrameRate                  FrameRate                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneSequencePlayer::SetFrameRate(const struct FFrameRate& FrameRate)
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "SetFrameRate");

	Params::UMovieSceneSequencePlayer_SetFrameRate_Params Parms;

	Parms.FrameRate = FrameRate;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MovieScene.MovieSceneSequencePlayer.SetFrameRange
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              StartFrame                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Duration                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              SubFrames                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneSequencePlayer::SetFrameRange(int32 StartFrame, int32 Duration, float SubFrames)
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "SetFrameRange");

	Params::UMovieSceneSequencePlayer_SetFrameRange_Params Parms;

	Parms.StartFrame = StartFrame;
	Parms.Duration = Duration;
	Parms.SubFrames = SubFrames;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MovieScene.MovieSceneSequencePlayer.SetDisableCameraCuts
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInDisableCameraCuts                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneSequencePlayer::SetDisableCameraCuts(bool bInDisableCameraCuts)
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "SetDisableCameraCuts");

	Params::UMovieSceneSequencePlayer_SetDisableCameraCuts_Params Parms;

	Parms.bInDisableCameraCuts = bInDisableCameraCuts;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MovieScene.MovieSceneSequencePlayer.ScrubToSeconds
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              TimeInSeconds                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneSequencePlayer::ScrubToSeconds(float TimeInSeconds)
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "ScrubToSeconds");

	Params::UMovieSceneSequencePlayer_ScrubToSeconds_Params Parms;

	Parms.TimeInSeconds = TimeInSeconds;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MovieScene.MovieSceneSequencePlayer.ScrubToMarkedFrame
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InLabel                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovieSceneSequencePlayer::ScrubToMarkedFrame(const class FString& InLabel)
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "ScrubToMarkedFrame");

	Params::UMovieSceneSequencePlayer_ScrubToMarkedFrame_Params Parms;

	Parms.InLabel = InLabel;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSequencePlayer.ScrubToFrame
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FFrameTime                  NewPosition                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneSequencePlayer::ScrubToFrame(const struct FFrameTime& NewPosition)
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "ScrubToFrame");

	Params::UMovieSceneSequencePlayer_ScrubToFrame_Params Parms;

	Parms.NewPosition = NewPosition;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MovieScene.MovieSceneSequencePlayer.Scrub
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMovieSceneSequencePlayer::Scrub()
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "Scrub");

	Params::UMovieSceneSequencePlayer_Scrub_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MovieScene.MovieSceneSequencePlayer.RPC_OnStopEvent
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// struct FFrameTime                  StoppedTime                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneSequencePlayer::RPC_OnStopEvent(const struct FFrameTime& StoppedTime)
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "RPC_OnStopEvent");

	Params::UMovieSceneSequencePlayer_RPC_OnStopEvent_Params Parms;

	Parms.StoppedTime = StoppedTime;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MovieScene.MovieSceneSequencePlayer.RPC_OnFinishPlaybackEvent
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// struct FFrameTime                  StoppedTime                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneSequencePlayer::RPC_OnFinishPlaybackEvent(const struct FFrameTime& StoppedTime)
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "RPC_OnFinishPlaybackEvent");

	Params::UMovieSceneSequencePlayer_RPC_OnFinishPlaybackEvent_Params Parms;

	Parms.StoppedTime = StoppedTime;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MovieScene.MovieSceneSequencePlayer.RPC_ExplicitServerUpdateEvent
// (Final, Net, NetReliable, Native, Event, NetMulticast, Private)
// Parameters:
// enum class EUpdatePositionMethod   Method                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFrameTime                  RelevantTime                                                     (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneSequencePlayer::RPC_ExplicitServerUpdateEvent(enum class EUpdatePositionMethod Method, const struct FFrameTime& RelevantTime)
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "RPC_ExplicitServerUpdateEvent");

	Params::UMovieSceneSequencePlayer_RPC_ExplicitServerUpdateEvent_Params Parms;

	Parms.Method = Method;
	Parms.RelevantTime = RelevantTime;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MovieScene.MovieSceneSequencePlayer.RestoreState
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMovieSceneSequencePlayer::RestoreState()
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "RestoreState");

	Params::UMovieSceneSequencePlayer_RestoreState_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MovieScene.MovieSceneSequencePlayer.RemoveWeight
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMovieSceneSequencePlayer::RemoveWeight()
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "RemoveWeight");

	Params::UMovieSceneSequencePlayer_RemoveWeight_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MovieScene.MovieSceneSequencePlayer.PlayToSeconds
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              TimeInSeconds                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneSequencePlayer::PlayToSeconds(float TimeInSeconds)
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "PlayToSeconds");

	Params::UMovieSceneSequencePlayer_PlayToSeconds_Params Parms;

	Parms.TimeInSeconds = TimeInSeconds;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MovieScene.MovieSceneSequencePlayer.PlayToMarkedFrame
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InLabel                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovieSceneSequencePlayer::PlayToMarkedFrame(const class FString& InLabel)
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "PlayToMarkedFrame");

	Params::UMovieSceneSequencePlayer_PlayToMarkedFrame_Params Parms;

	Parms.InLabel = InLabel;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSequencePlayer.PlayToFrame
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FFrameTime                  NewPosition                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneSequencePlayer::PlayToFrame(const struct FFrameTime& NewPosition)
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "PlayToFrame");

	Params::UMovieSceneSequencePlayer_PlayToFrame_Params Parms;

	Parms.NewPosition = NewPosition;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MovieScene.MovieSceneSequencePlayer.PlayTo
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMovieSceneSequencePlaybackParamsPlaybackParams                                                   (Parm, NativeAccessSpecifierPublic)
// struct FMovieSceneSequencePlayToParamsPlayToParams                                                     (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UMovieSceneSequencePlayer::PlayTo(const struct FMovieSceneSequencePlaybackParams& PlaybackParams, const struct FMovieSceneSequencePlayToParams& PlayToParams)
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "PlayTo");

	Params::UMovieSceneSequencePlayer_PlayTo_Params Parms;

	Parms.PlaybackParams = PlaybackParams;
	Parms.PlayToParams = PlayToParams;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MovieScene.MovieSceneSequencePlayer.PlayReverse
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMovieSceneSequencePlayer::PlayReverse()
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "PlayReverse");

	Params::UMovieSceneSequencePlayer_PlayReverse_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MovieScene.MovieSceneSequencePlayer.PlayLooping
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              NumLoops                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneSequencePlayer::PlayLooping(int32 NumLoops)
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "PlayLooping");

	Params::UMovieSceneSequencePlayer_PlayLooping_Params Parms;

	Parms.NumLoops = NumLoops;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MovieScene.MovieSceneSequencePlayer.Play
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMovieSceneSequencePlayer::Play()
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "Play");

	Params::UMovieSceneSequencePlayer_Play_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MovieScene.MovieSceneSequencePlayer.Pause
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMovieSceneSequencePlayer::Pause()
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "Pause");

	Params::UMovieSceneSequencePlayer_Pause_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MovieScene.MovieSceneSequencePlayer.JumpToSeconds
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              TimeInSeconds                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneSequencePlayer::JumpToSeconds(float TimeInSeconds)
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "JumpToSeconds");

	Params::UMovieSceneSequencePlayer_JumpToSeconds_Params Parms;

	Parms.TimeInSeconds = TimeInSeconds;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MovieScene.MovieSceneSequencePlayer.JumpToMarkedFrame
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      InLabel                                                          (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovieSceneSequencePlayer::JumpToMarkedFrame(const class FString& InLabel)
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "JumpToMarkedFrame");

	Params::UMovieSceneSequencePlayer_JumpToMarkedFrame_Params Parms;

	Parms.InLabel = InLabel;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSequencePlayer.JumpToFrame
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FFrameTime                  NewPosition                                                      (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneSequencePlayer::JumpToFrame(const struct FFrameTime& NewPosition)
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "JumpToFrame");

	Params::UMovieSceneSequencePlayer_JumpToFrame_Params Parms;

	Parms.NewPosition = NewPosition;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MovieScene.MovieSceneSequencePlayer.IsReversed
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovieSceneSequencePlayer::IsReversed()
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "IsReversed");

	Params::UMovieSceneSequencePlayer_IsReversed_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSequencePlayer.IsPlaying
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovieSceneSequencePlayer::IsPlaying()
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "IsPlaying");

	Params::UMovieSceneSequencePlayer_IsPlaying_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSequencePlayer.IsPaused
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovieSceneSequencePlayer::IsPaused()
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "IsPaused");

	Params::UMovieSceneSequencePlayer_IsPaused_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSequencePlayer.GoToEndAndStop
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMovieSceneSequencePlayer::GoToEndAndStop()
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "GoToEndAndStop");

	Params::UMovieSceneSequencePlayer_GoToEndAndStop_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MovieScene.MovieSceneSequencePlayer.GetStartTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FQualifiedFrameTime         ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FQualifiedFrameTime UMovieSceneSequencePlayer::GetStartTime()
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "GetStartTime");

	Params::UMovieSceneSequencePlayer_GetStartTime_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSequencePlayer.GetSequenceName
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               bAddClientInfo                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class FString UMovieSceneSequencePlayer::GetSequenceName(bool bAddClientInfo)
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "GetSequenceName");

	Params::UMovieSceneSequencePlayer_GetSequenceName_Params Parms;

	Parms.bAddClientInfo = bAddClientInfo;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSequencePlayer.GetSequence
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMovieSceneSequence*         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMovieSceneSequence* UMovieSceneSequencePlayer::GetSequence()
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "GetSequence");

	Params::UMovieSceneSequencePlayer_GetSequence_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSequencePlayer.GetPlayRate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UMovieSceneSequencePlayer::GetPlayRate()
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "GetPlayRate");

	Params::UMovieSceneSequencePlayer_GetPlayRate_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSequencePlayer.GetObjectBindings
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     InObject                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FMovieSceneObjectBindingID>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FMovieSceneObjectBindingID> UMovieSceneSequencePlayer::GetObjectBindings(class UObject* InObject)
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "GetObjectBindings");

	Params::UMovieSceneSequencePlayer_GetObjectBindings_Params Parms;

	Parms.InObject = InObject;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSequencePlayer.GetFrameRate
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FFrameRate                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FFrameRate UMovieSceneSequencePlayer::GetFrameRate()
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "GetFrameRate");

	Params::UMovieSceneSequencePlayer_GetFrameRate_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSequencePlayer.GetFrameDuration
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UMovieSceneSequencePlayer::GetFrameDuration()
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "GetFrameDuration");

	Params::UMovieSceneSequencePlayer_GetFrameDuration_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSequencePlayer.GetEndTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FQualifiedFrameTime         ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FQualifiedFrameTime UMovieSceneSequencePlayer::GetEndTime()
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "GetEndTime");

	Params::UMovieSceneSequencePlayer_GetEndTime_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSequencePlayer.GetDuration
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FQualifiedFrameTime         ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FQualifiedFrameTime UMovieSceneSequencePlayer::GetDuration()
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "GetDuration");

	Params::UMovieSceneSequencePlayer_GetDuration_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSequencePlayer.GetDisableCameraCuts
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UMovieSceneSequencePlayer::GetDisableCameraCuts()
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "GetDisableCameraCuts");

	Params::UMovieSceneSequencePlayer_GetDisableCameraCuts_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSequencePlayer.GetCurrentTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FQualifiedFrameTime         ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FQualifiedFrameTime UMovieSceneSequencePlayer::GetCurrentTime()
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "GetCurrentTime");

	Params::UMovieSceneSequencePlayer_GetCurrentTime_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSequencePlayer.GetBoundObjects
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FMovieSceneObjectBindingID  ObjectBinding                                                    (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UObject*>             ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UObject*> UMovieSceneSequencePlayer::GetBoundObjects(const struct FMovieSceneObjectBindingID& ObjectBinding)
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "GetBoundObjects");

	Params::UMovieSceneSequencePlayer_GetBoundObjects_Params Parms;

	Parms.ObjectBinding = ObjectBinding;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function MovieScene.MovieSceneSequencePlayer.ChangePlaybackDirection
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UMovieSceneSequencePlayer::ChangePlaybackDirection()
{
	static auto Func = Class->GetFunction("MovieSceneSequencePlayer", "ChangePlaybackDirection");

	Params::UMovieSceneSequencePlayer_ChangePlaybackDirection_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MovieScene.MovieSceneSubSection.SetSequence
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UMovieSceneSequence*         Sequence                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UMovieSceneSubSection::SetSequence(class UMovieSceneSequence* Sequence)
{
	static auto Func = Class->GetFunction("MovieSceneSubSection", "SetSequence");

	Params::UMovieSceneSubSection_SetSequence_Params Parms;

	Parms.Sequence = Sequence;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function MovieScene.MovieSceneSubSection.GetSequence
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UMovieSceneSequence*         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UMovieSceneSequence* UMovieSceneSubSection::GetSequence()
{
	static auto Func = Class->GetFunction("MovieSceneSubSection", "GetSequence");

	Params::UMovieSceneSubSection_GetSequence_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
