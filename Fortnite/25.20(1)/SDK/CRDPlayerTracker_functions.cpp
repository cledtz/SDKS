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
// class UFortPlayerControllerGameplay*InFortPlayerControllerGameplay                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCRDPlayerTrackerMarker::DestroyPlayerTrackerWidget(class UFortPlayerControllerGameplay* InFortPlayerControllerGameplay)
{
	static auto Func = Class->GetFunction("CRDPlayerTrackerMarker", "DestroyPlayerTrackerWidget");

	Params::UCRDPlayerTrackerMarker_DestroyPlayerTrackerWidget_Params Parms;

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
// class UFortPlayerControllerGameplay*InFortPlayerControllerGameplay                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPlayerStateAthena*      AssociatedPSA                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UUserWidget*                 ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UUserWidget* UCRDPlayerTrackerMarker::CreatePlayerTrackerWidget(class UFortPlayerControllerGameplay* InFortPlayerControllerGameplay, class UFortPlayerStateAthena* AssociatedPSA)
{
	static auto Func = Class->GetFunction("CRDPlayerTrackerMarker", "CreatePlayerTrackerWidget");

	Params::UCRDPlayerTrackerMarker_CreatePlayerTrackerWidget_Params Parms;

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
