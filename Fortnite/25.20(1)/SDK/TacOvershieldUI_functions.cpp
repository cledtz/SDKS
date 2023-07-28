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


// Function TacOvershieldUI.TacOvershieldPlayerInfoWidget.OnPlayerStateSet
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortPlayerStateAthena*      InPlayerState                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTacOvershieldPlayerInfoWidget::OnPlayerStateSet(class UFortPlayerStateAthena* InPlayerState)
{
	static auto Func = Class->GetFunction("TacOvershieldPlayerInfoWidget", "OnPlayerStateSet");

	Params::UTacOvershieldPlayerInfoWidget_OnPlayerStateSet_Params Parms;

	Parms.InPlayerState = InPlayerState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function TacOvershieldUI.TacOvershieldPlayerInfoWidget.OnOvershieldStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// float                              Overshield                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OvershieldMax                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTacOvershieldPlayerInfoWidget::OnOvershieldStateChanged(float Overshield, float OvershieldMax)
{
	static auto Func = Class->GetFunction("TacOvershieldPlayerInfoWidget", "OnOvershieldStateChanged");

	Params::UTacOvershieldPlayerInfoWidget_OnOvershieldStateChanged_Params Parms;

	Parms.Overshield = Overshield;
	Parms.OvershieldMax = OvershieldMax;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
