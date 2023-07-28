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


// Function ReferAFriendActionMenu.ReferAFriendActionMenu_C.Set QRt Image
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// enum class EReferFriendOrigin      Origin                                                           (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// bool                               K2Node_SwitchEnum_CmpSuccess                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UReferAFriendActionMenu_C::Set_QRt_Image(enum class EReferFriendOrigin Origin, bool K2Node_SwitchEnum_CmpSuccess)
{
	static auto Func = Class->GetFunction("ReferAFriendActionMenu_C", "Set QRt Image");

	Params::UReferAFriendActionMenu_C_Set_QRt_Image_Params Parms;

	Parms.Origin = Origin;
	Parms.K2Node_SwitchEnum_CmpSuccess = K2Node_SwitchEnum_CmpSuccess;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReferAFriendActionMenu.ReferAFriendActionMenu_C.OnKeyUp
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGeometry                   MyGeometry                                                       (BlueprintVisible, BlueprintReadOnly, Parm, IsPlainOldData, NoDestructor)
// struct FKeyEvent                   InKeyEvent                                                       (BlueprintVisible, BlueprintReadOnly, Parm)
// struct FEventReply                 ReturnValue                                                      (Parm, OutParm, ReturnParm)
// struct FEventReply                 CallFunc_Unhandled_ReturnValue                                   ()
// struct FKey                        CallFunc_GetKey_ReturnValue                                      (HasGetValueTypeHash)
// bool                               CallFunc_EqualEqual_KeyKey_ReturnValue                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FEventReply                 CallFunc_Handled_ReturnValue                                     ()

struct FEventReply UReferAFriendActionMenu_C::OnKeyUp(const struct FGeometry& MyGeometry, const struct FKeyEvent& InKeyEvent, const struct FEventReply& CallFunc_Unhandled_ReturnValue, const struct FKey& CallFunc_GetKey_ReturnValue, bool CallFunc_EqualEqual_KeyKey_ReturnValue, const struct FEventReply& CallFunc_Handled_ReturnValue)
{
	static auto Func = Class->GetFunction("ReferAFriendActionMenu_C", "OnKeyUp");

	Params::UReferAFriendActionMenu_C_OnKeyUp_Params Parms;

	Parms.MyGeometry = MyGeometry;
	Parms.InKeyEvent = InKeyEvent;
	Parms.CallFunc_Unhandled_ReturnValue = CallFunc_Unhandled_ReturnValue;
	Parms.CallFunc_GetKey_ReturnValue = CallFunc_GetKey_ReturnValue;
	Parms.CallFunc_EqualEqual_KeyKey_ReturnValue = CallFunc_EqualEqual_KeyKey_ReturnValue;
	Parms.CallFunc_Handled_ReturnValue = CallFunc_Handled_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function ReferAFriendActionMenu.ReferAFriendActionMenu_C.OnOpened
// (Event, Protected, BlueprintEvent)
// Parameters:

void UReferAFriendActionMenu_C::OnOpened()
{
	static auto Func = Class->GetFunction("ReferAFriendActionMenu_C", "OnOpened");

	Params::UReferAFriendActionMenu_C_OnOpened_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function ReferAFriendActionMenu.ReferAFriendActionMenu_C.OnRequestOriginChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EReferFriendOrigin      RequestOrigin                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UReferAFriendActionMenu_C::OnRequestOriginChanged(enum class EReferFriendOrigin RequestOrigin)
{
	static auto Func = Class->GetFunction("ReferAFriendActionMenu_C", "OnRequestOriginChanged");

	Params::UReferAFriendActionMenu_C_OnRequestOriginChanged_Params Parms;

	Parms.RequestOrigin = RequestOrigin;

	UObject::ProcessEvent(Func, &Parms);

}


// Function ReferAFriendActionMenu.ReferAFriendActionMenu_C.ExecuteUbergraph_ReferAFriendActionMenu
// (Final, UbergraphFunction)
// Parameters:
// int32                              EntryPoint                                                       (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EReferFriendOrigin      K2Node_Event_RequestOrigin                                       (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UUMGSequencePlayer*          CallFunc_PlayAnimation_ReturnValue                               (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UReferAFriendActionMenu_C::ExecuteUbergraph_ReferAFriendActionMenu(int32 EntryPoint, enum class EReferFriendOrigin K2Node_Event_RequestOrigin, class UUMGSequencePlayer* CallFunc_PlayAnimation_ReturnValue)
{
	static auto Func = Class->GetFunction("ReferAFriendActionMenu_C", "ExecuteUbergraph_ReferAFriendActionMenu");

	Params::UReferAFriendActionMenu_C_ExecuteUbergraph_ReferAFriendActionMenu_Params Parms;

	Parms.EntryPoint = EntryPoint;
	Parms.K2Node_Event_RequestOrigin = K2Node_Event_RequestOrigin;
	Parms.CallFunc_PlayAnimation_ReturnValue = CallFunc_PlayAnimation_ReturnValue;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
