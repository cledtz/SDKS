#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class EpicGamesEngine.VerseUEInputComponentBase
// (None)

class UClass* UVerseUEInputComponentBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseUEInputComponentBase");

	return Clss;
}


// VerseUEInputComponentBase EpicGamesEngine.Default__VerseUEInputComponentBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UVerseUEInputComponentBase* UVerseUEInputComponentBase::GetDefaultObj()
{
	static class UVerseUEInputComponentBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseUEInputComponentBase*>(UVerseUEInputComponentBase::StaticClass()->DefaultObject);

	return Default;
}


// Function EpicGamesEngine.VerseUEInputComponentBase.ServerTriggerAxis
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// class FName                        AxisName                                                         (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVerseUEInputComponentBase::ServerTriggerAxis(class FName& AxisName, float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseUEInputComponentBase", "ServerTriggerAxis");

	Params::UVerseUEInputComponentBase_ServerTriggerAxis_Params Parms{};

	Parms.AxisName = AxisName;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function EpicGamesEngine.VerseUEInputComponentBase.ServerTriggerAction
// (Final, Net, NetReliable, Native, Event, Private, NetServer, NetValidate)
// Parameters:
// class FName                        ActionName                                                       (ConstParm, Parm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EInputEvent             InputEvent                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVerseUEInputComponentBase::ServerTriggerAction(class FName& ActionName, enum class EInputEvent InputEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseUEInputComponentBase", "ServerTriggerAction");

	Params::UVerseUEInputComponentBase_ServerTriggerAction_Params Parms{};

	Parms.ActionName = ActionName;
	Parms.InputEvent = InputEvent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


