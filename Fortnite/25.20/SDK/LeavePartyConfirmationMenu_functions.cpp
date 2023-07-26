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


// Function LeavePartyConfirmationMenu.LeavePartyConfirmationMenu_C.OnOpened
// (Event, Protected, BlueprintEvent)
// Parameters:

void ULeavePartyConfirmationMenu_C::OnOpened()
{
	static auto Func = Class->GetFunction("LeavePartyConfirmationMenu_C", "OnOpened");

	Params::ULeavePartyConfirmationMenu_C_OnOpened_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function LeavePartyConfirmationMenu.LeavePartyConfirmationMenu_C.ExecuteUbergraph_LeavePartyConfirmationMenu
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void ULeavePartyConfirmationMenu_C::ExecuteUbergraph_LeavePartyConfirmationMenu(int32 EntryPoint, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static auto Func = Class->GetFunction("LeavePartyConfirmationMenu_C", "ExecuteUbergraph_LeavePartyConfirmationMenu");

	Params::ULeavePartyConfirmationMenu_C_ExecuteUbergraph_LeavePartyConfirmationMenu_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
