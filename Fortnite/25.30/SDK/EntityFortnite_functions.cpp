#pragma once

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Function EntityFortnite.EntityFortniteStormSpawner.Stop
// (Event, Public, BlueprintEvent)
// Parameters:

void UEntityFortniteStormSpawner::Stop()
{
	static auto Func = Class->GetFunction("EntityFortniteStormSpawner", "Stop");

	Params::UEntityFortniteStormSpawner_Stop_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function EntityFortnite.EntityFortniteStormSpawner.Start
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// float                              StartRadius                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              BoundsRadius                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FEntityFortniteStormPhase>Phases                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UEntityFortniteStormSpawner::Start(float StartRadius, float BoundsRadius, TArray<struct FEntityFortniteStormPhase>& Phases)
{
	static auto Func = Class->GetFunction("EntityFortniteStormSpawner", "Start");

	Params::UEntityFortniteStormSpawner_Start_Params Parms;

	Parms.StartRadius = StartRadius;
	Parms.BoundsRadius = BoundsRadius;
	Parms.Phases = Phases;

	UObject::ProcessEvent(Func, &Parms);

}


// Function EntityFortnite.EntityFortniteStormSpawner.Pause
// (Event, Public, BlueprintEvent)
// Parameters:

void UEntityFortniteStormSpawner::Pause()
{
	static auto Func = Class->GetFunction("EntityFortniteStormSpawner", "Pause");

	Params::UEntityFortniteStormSpawner_Pause_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function EntityFortnite.EntityFortniteStormSpawner.Exists
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UEntityFortniteStormSpawner::Exists()
{
	static auto Func = Class->GetFunction("EntityFortniteStormSpawner", "Exists");

	Params::UEntityFortniteStormSpawner_Exists_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
