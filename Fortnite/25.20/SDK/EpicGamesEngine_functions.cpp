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


// Function EpicGamesEngine.VerseUEInputComponentBase.ServerTriggerAxis
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// class FName                        AxisName                                                         (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVerseUEInputComponentBase::ServerTriggerAxis(class FName& AxisName, float Value)
{
	static auto Func = Class->GetFunction("VerseUEInputComponentBase", "ServerTriggerAxis");

	Params::UVerseUEInputComponentBase_ServerTriggerAxis_Params Parms;

	Parms.AxisName = AxisName;
	Parms.Value = Value;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function EpicGamesEngine.VerseUEInputComponentBase.ServerTriggerAction
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// class FName                        ActionName                                                       (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EInputEvent             InputEvent                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVerseUEInputComponentBase::ServerTriggerAction(class FName& ActionName, enum class EInputEvent InputEvent)
{
	static auto Func = Class->GetFunction("VerseUEInputComponentBase", "ServerTriggerAction");

	Params::UVerseUEInputComponentBase_ServerTriggerAction_Params Parms;

	Parms.ActionName = ActionName;
	Parms.InputEvent = InputEvent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
