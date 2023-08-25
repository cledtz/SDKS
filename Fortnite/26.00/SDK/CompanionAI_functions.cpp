#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class CompanionAI.PingComponentBase
// (None)

class UClass* UPingComponentBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PingComponentBase");

	return Clss;
}


// PingComponentBase CompanionAI.Default__PingComponentBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UPingComponentBase* UPingComponentBase::GetDefaultObj()
{
	static class UPingComponentBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UPingComponentBase*>(UPingComponentBase::StaticClass()->DefaultObject);

	return Default;
}


// Function CompanionAI.PingComponentBase.HandleOnNPCUnconvertedEvent
// (Final, Native, Private)
// Parameters:
// class UFortPawn*                   UnconvertedFortPawn                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EUnconvertReason        UnconvertReason                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPingComponentBase::HandleOnNPCUnconvertedEvent(class UFortPawn* UnconvertedFortPawn, enum class EUnconvertReason UnconvertReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PingComponentBase", "HandleOnNPCUnconvertedEvent");

	Params::UPingComponentBase_HandleOnNPCUnconvertedEvent_Params Parms{};

	Parms.UnconvertedFortPawn = UnconvertedFortPawn;
	Parms.UnconvertReason = UnconvertReason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function CompanionAI.PingComponentBase.HandleOnNPCConvertedEvent
// (Final, Native, Private)
// Parameters:
// class UFortPawn*                   InstigatorPawn                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPawn*                   ConvertedPawn                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPingComponentBase::HandleOnNPCConvertedEvent(class UFortPawn* InstigatorPawn, class UFortPawn* ConvertedPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("PingComponentBase", "HandleOnNPCConvertedEvent");

	Params::UPingComponentBase_HandleOnNPCConvertedEvent_Params Parms{};

	Parms.InstigatorPawn = InstigatorPawn;
	Parms.ConvertedPawn = ConvertedPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


