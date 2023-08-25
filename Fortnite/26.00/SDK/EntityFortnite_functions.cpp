#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class EntityFortnite.EntityFortniteInterface
// (None)

class UClass* UEntityFortniteInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EntityFortniteInterface");

	return Clss;
}


// EntityFortniteInterface EntityFortnite.Default__EntityFortniteInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class UEntityFortniteInterface* UEntityFortniteInterface::GetDefaultObj()
{
	static class UEntityFortniteInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<UEntityFortniteInterface*>(UEntityFortniteInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class EntityFortnite.EntityFortnitePlayerComponent
// (None)

class UClass* UEntityFortnitePlayerComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EntityFortnitePlayerComponent");

	return Clss;
}


// EntityFortnitePlayerComponent EntityFortnite.Default__EntityFortnitePlayerComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UEntityFortnitePlayerComponent* UEntityFortnitePlayerComponent::GetDefaultObj()
{
	static class UEntityFortnitePlayerComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UEntityFortnitePlayerComponent*>(UEntityFortnitePlayerComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class EntityFortnite.EntityFortniteStormControllerComponent
// (None)

class UClass* UEntityFortniteStormControllerComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EntityFortniteStormControllerComponent");

	return Clss;
}


// EntityFortniteStormControllerComponent EntityFortnite.Default__EntityFortniteStormControllerComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UEntityFortniteStormControllerComponent* UEntityFortniteStormControllerComponent::GetDefaultObj()
{
	static class UEntityFortniteStormControllerComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UEntityFortniteStormControllerComponent*>(UEntityFortniteStormControllerComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class EntityFortnite.EntityFortniteStormSpawner
// (Actor)

class UClass* UEntityFortniteStormSpawner::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EntityFortniteStormSpawner");

	return Clss;
}


// EntityFortniteStormSpawner EntityFortnite.Default__EntityFortniteStormSpawner
// (Public, ClassDefaultObject, ArchetypeObject)

class UEntityFortniteStormSpawner* UEntityFortniteStormSpawner::GetDefaultObj()
{
	static class UEntityFortniteStormSpawner* Default = nullptr;

	if (!Default)
		Default = static_cast<UEntityFortniteStormSpawner*>(UEntityFortniteStormSpawner::StaticClass()->DefaultObject);

	return Default;
}


// Function EntityFortnite.EntityFortniteStormSpawner.Stop
// (Event, Public, BlueprintEvent)
// Parameters:

void UEntityFortniteStormSpawner::Stop()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EntityFortniteStormSpawner", "Stop");

	Params::UEntityFortniteStormSpawner_Stop_Params Parms{};


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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EntityFortniteStormSpawner", "Start");

	Params::UEntityFortniteStormSpawner_Start_Params Parms{};

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
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EntityFortniteStormSpawner", "Pause");

	Params::UEntityFortniteStormSpawner_Pause_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function EntityFortnite.EntityFortniteStormSpawner.Exists
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UEntityFortniteStormSpawner::Exists()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("EntityFortniteStormSpawner", "Exists");

	Params::UEntityFortniteStormSpawner_Exists_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}

}


