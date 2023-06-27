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


// Function JoinRequestUserListEntry.JoinRequestUserListEntry_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UJoinRequestUserListEntry_C::BP_OnUnhovered()
{
	static auto Func = Class->GetFunction("JoinRequestUserListEntry_C", "BP_OnUnhovered");

	Params::UJoinRequestUserListEntry_C_BP_OnUnhovered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function JoinRequestUserListEntry.JoinRequestUserListEntry_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bIsOpen                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UJoinRequestUserListEntry_C::BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen)
{
	static auto Func = Class->GetFunction("JoinRequestUserListEntry_C", "BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature");

	Params::UJoinRequestUserListEntry_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature_Params Parms;

	Parms.bIsOpen = bIsOpen;

	UObject::ProcessEvent(Func, &Parms);

}


// Function JoinRequestUserListEntry.JoinRequestUserListEntry_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UJoinRequestUserListEntry_C::BP_OnHovered()
{
	static auto Func = Class->GetFunction("JoinRequestUserListEntry_C", "BP_OnHovered");

	Params::UJoinRequestUserListEntry_C_BP_OnHovered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function JoinRequestUserListEntry.JoinRequestUserListEntry_C.OnFocusLost
// (BlueprintCosmetic, Event, Public, BlueprintEvent)
// Parameters:
// struct FFocusEvent                 InFocusEvent                                                     (BlueprintVisible, BlueprintReadOnly, Parm, NoDestructor)

void UJoinRequestUserListEntry_C::OnFocusLost(const struct FFocusEvent& InFocusEvent)
{
	static auto Func = Class->GetFunction("JoinRequestUserListEntry_C", "OnFocusLost");

	Params::UJoinRequestUserListEntry_C_OnFocusLost_Params Parms;

	Parms.InFocusEvent = InFocusEvent;

	UObject::ProcessEvent(Func, &Parms);

}


// Function JoinRequestUserListEntry.JoinRequestUserListEntry_C.ExecuteUbergraph_JoinRequestUserListEntry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FFocusEvent                 K2Node_Event_InFocusEvent                                        (NoDestructor)
// bool                               K2Node_ComponentBoundEvent_bIsOpen                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_3                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UJoinRequestUserListEntry_C::ExecuteUbergraph_JoinRequestUserListEntry(int32 EntryPoint, const struct FFocusEvent& K2Node_Event_InFocusEvent, bool K2Node_ComponentBoundEvent_bIsOpen, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, bool CallFunc_IsAnimationPlaying_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3)
{
	static auto Func = Class->GetFunction("JoinRequestUserListEntry_C", "ExecuteUbergraph_JoinRequestUserListEntry");

	Params::UJoinRequestUserListEntry_C_ExecuteUbergraph_JoinRequestUserListEntry_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_InFocusEvent = K2Node_Event_InFocusEvent;
	Parms.K2Node_ComponentBoundEvent_bIsOpen = K2Node_ComponentBoundEvent_bIsOpen;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_3 = CallFunc_PlayAnimation_ReturnValue_3;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
