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


// Function CRDPlayerTracker.CRDPlayerTrackerMarker.DestroyPlayerTrackerWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AFortPlayerControllerGameplay*InFortPlayerControllerGameplay                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool ACRDPlayerTrackerMarker::DestroyPlayerTrackerWidget(class AFortPlayerControllerGameplay* InFortPlayerControllerGameplay)
{
	static auto Func = Class->GetFunction("CRDPlayerTrackerMarker", "DestroyPlayerTrackerWidget");

	Params::ACRDPlayerTrackerMarker_DestroyPlayerTrackerWidget_Params Parms;

	Parms.InFortPlayerControllerGameplay = InFortPlayerControllerGameplay;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function CRDPlayerTracker.CRDPlayerTrackerMarker.CreatePlayerTrackerWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class AFortPlayerControllerGameplay*InFortPlayerControllerGameplay                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class AFortPlayerStateAthena*      AssociatedPSA                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UUserWidget*                 ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UUserWidget* ACRDPlayerTrackerMarker::CreatePlayerTrackerWidget(class AFortPlayerControllerGameplay* InFortPlayerControllerGameplay, class AFortPlayerStateAthena* AssociatedPSA)
{
	static auto Func = Class->GetFunction("CRDPlayerTrackerMarker", "CreatePlayerTrackerWidget");

	Params::ACRDPlayerTrackerMarker_CreatePlayerTrackerWidget_Params Parms;

	Parms.InFortPlayerControllerGameplay = InFortPlayerControllerGameplay;
	Parms.AssociatedPSA = AssociatedPSA;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
