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


// Function MultiFriendActionListEntry.MultiFriendActionListEntry_C.GetText
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure)
// Parameters:
// enum class EMultiFriendAction      InAction                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        Text                                                             (Parm, OutParm)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMultiFriendActionListEntry_C::GetText(enum class EMultiFriendAction InAction, class FText* Text, bool K2Node_SwitchEnum_CmpSuccess)
{
	static auto Func = Class->GetFunction("MultiFriendActionListEntry_C", "GetText");

	Params::UMultiFriendActionListEntry_C_GetText_Params Parms;

	Parms.InAction = InAction;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

	if (Text != nullptr)
		*Text = Parms.Text;

}


// Function MultiFriendActionListEntry.MultiFriendActionListEntry_C.BP_OnUnhovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UMultiFriendActionListEntry_C::BP_OnUnhovered()
{
	static auto Func = Class->GetFunction("MultiFriendActionListEntry_C", "BP_OnUnhovered");

	Params::UMultiFriendActionListEntry_C_BP_OnUnhovered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function MultiFriendActionListEntry.MultiFriendActionListEntry_C.BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature
// (BlueprintEvent)
// Parameters:
// bool                               bIsOpen                                                          (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMultiFriendActionListEntry_C::BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature(bool bIsOpen)
{
	static auto Func = Class->GetFunction("MultiFriendActionListEntry_C", "BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature");

	Params::UMultiFriendActionListEntry_C_BndEvt__MenuAnchor_Actions_K2Node_ComponentBoundEvent_0_OnMenuOpenChangedEvent__DelegateSignature_Params Parms;

	Parms.bIsOpen = bIsOpen;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MultiFriendActionListEntry.MultiFriendActionListEntry_C.BP_OnHovered
// (Event, Protected, BlueprintEvent)
// Parameters:

void UMultiFriendActionListEntry_C::BP_OnHovered()
{
	static auto Func = Class->GetFunction("MultiFriendActionListEntry_C", "BP_OnHovered");

	Params::UMultiFriendActionListEntry_C_BP_OnHovered_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function MultiFriendActionListEntry.MultiFriendActionListEntry_C.OnActionUpdated
// (Event, Protected, BlueprintEvent)
// Parameters:
// enum class EMultiFriendAction      InAction                                                         (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UMultiFriendActionListEntry_C::OnActionUpdated(enum class EMultiFriendAction InAction)
{
	static auto Func = Class->GetFunction("MultiFriendActionListEntry_C", "OnActionUpdated");

	Params::UMultiFriendActionListEntry_C_OnActionUpdated_Params Parms;

	Parms.InAction = InAction;

	UObject::ProcessEvent(Func, &Parms);

}


// Function MultiFriendActionListEntry.MultiFriendActionListEntry_C.ExecuteUbergraph_MultiFriendActionListEntry
// (Final, UbergraphFunction, HasDefaults)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_ComponentBoundEvent_bIsOpen                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_1                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_2                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// bool                               CallFunc_IsAnimationPlaying_ReturnValue                          (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue_3                             (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// enum class EMultiFriendAction      K2Node_Event_InAction                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class FText                        CallFunc_GetText_Text                                            ()

void UMultiFriendActionListEntry_C::ExecuteUbergraph_MultiFriendActionListEntry(int32 EntryPoint, bool K2Node_ComponentBoundEvent_bIsOpen, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_1, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_2, bool CallFunc_IsAnimationPlaying_ReturnValue, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue_3, enum class EMultiFriendAction K2Node_Event_InAction, class FText CallFunc_GetText_Text)
{
	static auto Func = Class->GetFunction("MultiFriendActionListEntry_C", "ExecuteUbergraph_MultiFriendActionListEntry");

	Params::UMultiFriendActionListEntry_C_ExecuteUbergraph_MultiFriendActionListEntry_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_ComponentBoundEvent_bIsOpen = K2Node_ComponentBoundEvent_bIsOpen;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_1 = CallFunc_PlayAnimation_ReturnValue_1;
	Parms.CallFunc_PlayAnimation_ReturnValue_2 = CallFunc_PlayAnimation_ReturnValue_2;
	Parms.CallFunc_IsAnimationPlaying_ReturnValue = CallFunc_IsAnimationPlaying_ReturnValue;
	Parms.CallFunc_PlayAnimation_ReturnValue_3 = CallFunc_PlayAnimation_ReturnValue_3;
	Parms.K2Node_Event_InAction = K2Node_Event_InAction;
	Parms.CallFunc_GetText_Text = CallFunc_GetText_Text;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
