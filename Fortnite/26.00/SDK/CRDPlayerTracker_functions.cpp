#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class CRDPlayerTracker.CRDPlayerTrackerComponent
// (None)

class UClass* UCRDPlayerTrackerComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CRDPlayerTrackerComponent");

	return Clss;
}


// CRDPlayerTrackerComponent CRDPlayerTracker.Default__CRDPlayerTrackerComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UCRDPlayerTrackerComponent* UCRDPlayerTrackerComponent::GetDefaultObj()
{
	static class UCRDPlayerTrackerComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UCRDPlayerTrackerComponent*>(UCRDPlayerTrackerComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class CRDPlayerTracker.CRDPlayerTrackerMarker
// (Actor)

class UClass* UCRDPlayerTrackerMarker::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CRDPlayerTrackerMarker");

	return Clss;
}


// CRDPlayerTrackerMarker CRDPlayerTracker.Default__CRDPlayerTrackerMarker
// (Public, ClassDefaultObject, ArchetypeObject)

class UCRDPlayerTrackerMarker* UCRDPlayerTrackerMarker::GetDefaultObj()
{
	static class UCRDPlayerTrackerMarker* Default = nullptr;

	if (!Default)
		Default = static_cast<UCRDPlayerTrackerMarker*>(UCRDPlayerTrackerMarker::StaticClass()->DefaultObject);

	return Default;
}


// Function CRDPlayerTracker.CRDPlayerTrackerMarker.DestroyPlayerTrackerWidget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortPlayerControllerGameplay*InFortPlayerControllerGameplay                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UCRDPlayerTrackerMarker::DestroyPlayerTrackerWidget(class UFortPlayerControllerGameplay* InFortPlayerControllerGameplay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CRDPlayerTrackerMarker", "DestroyPlayerTrackerWidget");

	Params::UCRDPlayerTrackerMarker_DestroyPlayerTrackerWidget_Params Parms{};

	Parms.InFortPlayerControllerGameplay = InFortPlayerControllerGameplay;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("CRDPlayerTrackerMarker", "CreatePlayerTrackerWidget");

	Params::UCRDPlayerTrackerMarker_CreatePlayerTrackerWidget_Params Parms{};

	Parms.InFortPlayerControllerGameplay = InFortPlayerControllerGameplay;
	Parms.AssociatedPSA = AssociatedPSA;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


