#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class OnlineSubsystem.NamedInterfaces
// (None)

class UClass* UNamedInterfaces::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NamedInterfaces");

	return Clss;
}


// NamedInterfaces OnlineSubsystem.Default__NamedInterfaces
// (Public, ClassDefaultObject, ArchetypeObject)

class UNamedInterfaces* UNamedInterfaces::GetDefaultObj()
{
	static class UNamedInterfaces* Default = nullptr;

	if (!Default)
		Default = static_cast<UNamedInterfaces*>(UNamedInterfaces::StaticClass()->DefaultObject);

	return Default;
}


// Class OnlineSubsystem.TurnBasedMatchInterface
// (None)

class UClass* UTurnBasedMatchInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("TurnBasedMatchInterface");

	return Clss;
}


// TurnBasedMatchInterface OnlineSubsystem.Default__TurnBasedMatchInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class UTurnBasedMatchInterface* UTurnBasedMatchInterface::GetDefaultObj()
{
	static class UTurnBasedMatchInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<UTurnBasedMatchInterface*>(UTurnBasedMatchInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function OnlineSubsystem.TurnBasedMatchInterface.OnMatchReceivedTurn
// (Event, Public, BlueprintEvent)
// Parameters:
// class FString                      Match                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bDidBecomeActive                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTurnBasedMatchInterface::OnMatchReceivedTurn(const class FString& Match, bool bDidBecomeActive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TurnBasedMatchInterface", "OnMatchReceivedTurn");

	Params::UTurnBasedMatchInterface_OnMatchReceivedTurn_Params Parms{};

	Parms.Match = Match;
	Parms.bDidBecomeActive = bDidBecomeActive;

	UObject::ProcessEvent(Func, &Parms);

}


// Function OnlineSubsystem.TurnBasedMatchInterface.OnMatchEnded
// (Event, Public, BlueprintEvent)
// Parameters:
// class FString                      Match                                                            (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UTurnBasedMatchInterface::OnMatchEnded(const class FString& Match)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("TurnBasedMatchInterface", "OnMatchEnded");

	Params::UTurnBasedMatchInterface_OnMatchEnded_Params Parms{};

	Parms.Match = Match;

	UObject::ProcessEvent(Func, &Parms);

}

}


