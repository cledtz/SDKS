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


// Function KeysAndLocksUI.KeyPlayerInfoWidget.OnKeyStatusActivated
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortPlayerStateAthena*      InPlayerState                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bActivated                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKeyPlayerInfoWidget::OnKeyStatusActivated(class UFortPlayerStateAthena* InPlayerState, bool bActivated)
{
	static auto Func = Class->GetFunction("KeyPlayerInfoWidget", "OnKeyStatusActivated");

	Params::UKeyPlayerInfoWidget_OnKeyStatusActivated_Params Parms;

	Parms.InPlayerState = InPlayerState;
	Parms.bActivated = bActivated;

	UObject::ProcessEvent(Func, &Parms);

}


// Function KeysAndLocksUI.KeyPlayerInfoWidget.HandleGameplayTagEvent
// (Final, Native, Protected)
// Parameters:
// struct FGameplayTag                UpdatedTag                                                       (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              TagCount                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKeyPlayerInfoWidget::HandleGameplayTagEvent(const struct FGameplayTag& UpdatedTag, int32 TagCount)
{
	static auto Func = Class->GetFunction("KeyPlayerInfoWidget", "HandleGameplayTagEvent");

	Params::UKeyPlayerInfoWidget_HandleGameplayTagEvent_Params Parms;

	Parms.UpdatedTag = UpdatedTag;
	Parms.TagCount = TagCount;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
