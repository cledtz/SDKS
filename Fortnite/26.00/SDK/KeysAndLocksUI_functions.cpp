#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class KeysAndLocksUI.KeyPlayerInfoWidget
// (None)

class UClass* UKeyPlayerInfoWidget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("KeyPlayerInfoWidget");

	return Clss;
}


// KeyPlayerInfoWidget KeysAndLocksUI.Default__KeyPlayerInfoWidget
// (Public, ClassDefaultObject, ArchetypeObject)

class UKeyPlayerInfoWidget* UKeyPlayerInfoWidget::GetDefaultObj()
{
	static class UKeyPlayerInfoWidget* Default = nullptr;

	if (!Default)
		Default = static_cast<UKeyPlayerInfoWidget*>(UKeyPlayerInfoWidget::StaticClass()->DefaultObject);

	return Default;
}


// Function KeysAndLocksUI.KeyPlayerInfoWidget.OnKeyStatusActivated
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortPlayerStateAthena*      InPlayerState                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bActivated                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UKeyPlayerInfoWidget::OnKeyStatusActivated(class UFortPlayerStateAthena* InPlayerState, bool bActivated)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KeyPlayerInfoWidget", "OnKeyStatusActivated");

	Params::UKeyPlayerInfoWidget_OnKeyStatusActivated_Params Parms{};

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("KeyPlayerInfoWidget", "HandleGameplayTagEvent");

	Params::UKeyPlayerInfoWidget_HandleGameplayTagEvent_Params Parms{};

	Parms.UpdatedTag = UpdatedTag;
	Parms.TagCount = TagCount;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


