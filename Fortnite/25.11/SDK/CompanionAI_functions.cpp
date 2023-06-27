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


// Function CompanionAI.PingComponentBase.HandleOnNPCUnconvertedEvent
// (Final, Native, Private)
// Parameters:
// class AFortPawn*                   UnconvertedFortPawn                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EUnconvertReason        UnconvertReason                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPingComponentBase::HandleOnNPCUnconvertedEvent(class AFortPawn* UnconvertedFortPawn, enum class EUnconvertReason UnconvertReason)
{
	static auto Func = Class->GetFunction("PingComponentBase", "HandleOnNPCUnconvertedEvent");

	Params::UPingComponentBase_HandleOnNPCUnconvertedEvent_Params Parms;

	Parms.UnconvertedFortPawn = UnconvertedFortPawn;
	Parms.UnconvertReason = UnconvertReason;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function CompanionAI.PingComponentBase.HandleOnNPCConvertedEvent
// (Final, Native, Private)
// Parameters:
// class AFortPawn*                   InstigatorPawn                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AFortPawn*                   ConvertedPawn                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UPingComponentBase::HandleOnNPCConvertedEvent(class AFortPawn* InstigatorPawn, class AFortPawn* ConvertedPawn)
{
	static auto Func = Class->GetFunction("PingComponentBase", "HandleOnNPCConvertedEvent");

	Params::UPingComponentBase_HandleOnNPCConvertedEvent_Params Parms;

	Parms.InstigatorPawn = InstigatorPawn;
	Parms.ConvertedPawn = ConvertedPawn;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
