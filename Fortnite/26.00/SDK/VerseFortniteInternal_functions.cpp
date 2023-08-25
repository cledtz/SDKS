#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class VerseFortniteInternal.BuildingActorEntityInteropComponent
// (None)

class UClass* UBuildingActorEntityInteropComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BuildingActorEntityInteropComponent");

	return Clss;
}


// BuildingActorEntityInteropComponent VerseFortniteInternal.Default__BuildingActorEntityInteropComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UBuildingActorEntityInteropComponent* UBuildingActorEntityInteropComponent::GetDefaultObj()
{
	static class UBuildingActorEntityInteropComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UBuildingActorEntityInteropComponent*>(UBuildingActorEntityInteropComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class VerseFortniteInternal.VerseFortniteMovementComponentBase
// (None)

class UClass* UVerseFortniteMovementComponentBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseFortniteMovementComponentBase");

	return Clss;
}


// VerseFortniteMovementComponentBase VerseFortniteInternal.Default__VerseFortniteMovementComponentBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UVerseFortniteMovementComponentBase* UVerseFortniteMovementComponentBase::GetDefaultObj()
{
	static class UVerseFortniteMovementComponentBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseFortniteMovementComponentBase*>(UVerseFortniteMovementComponentBase::StaticClass()->DefaultObject);

	return Default;
}


// Class VerseFortniteInternal.FortControllerStateHandlerComponent
// (None)

class UClass* UFortControllerStateHandlerComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortControllerStateHandlerComponent");

	return Clss;
}


// FortControllerStateHandlerComponent VerseFortniteInternal.Default__FortControllerStateHandlerComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortControllerStateHandlerComponent* UFortControllerStateHandlerComponent::GetDefaultObj()
{
	static class UFortControllerStateHandlerComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortControllerStateHandlerComponent*>(UFortControllerStateHandlerComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteInternal.FortControllerStateHandlerComponent.NotifyOfStateChange
// (Final, Native, Public, HasOutParams)
// Parameters:
// class FString                      State                                                            (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               Active                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortControllerStateHandlerComponent::NotifyOfStateChange(class FString* State, bool Active)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortControllerStateHandlerComponent", "NotifyOfStateChange");

	Params::UFortControllerStateHandlerComponent_NotifyOfStateChange_Params Parms{};

	Parms.Active = Active;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (State != nullptr)
		*State = Parms.State;

}


// Class VerseFortniteInternal.FortAthenaMutator_BuildingSettings
// (Actor)

class UClass* UFortAthenaMutator_BuildingSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaMutator_BuildingSettings");

	return Clss;
}


// FortAthenaMutator_BuildingSettings VerseFortniteInternal.Default__FortAthenaMutator_BuildingSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaMutator_BuildingSettings* UFortAthenaMutator_BuildingSettings::GetDefaultObj()
{
	static class UFortAthenaMutator_BuildingSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaMutator_BuildingSettings*>(UFortAthenaMutator_BuildingSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class VerseFortniteInternal.FortBuildingSettingsComponentBase
// (None)

class UClass* UFortBuildingSettingsComponentBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortBuildingSettingsComponentBase");

	return Clss;
}


// FortBuildingSettingsComponentBase VerseFortniteInternal.Default__FortBuildingSettingsComponentBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortBuildingSettingsComponentBase* UFortBuildingSettingsComponentBase::GetDefaultObj()
{
	static class UFortBuildingSettingsComponentBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortBuildingSettingsComponentBase*>(UFortBuildingSettingsComponentBase::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteInternal.FortBuildingSettingsComponentBase.OnRep_Settings
// (Final, Native, Private)
// Parameters:

void UFortBuildingSettingsComponentBase::OnRep_Settings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBuildingSettingsComponentBase", "OnRep_Settings");

	Params::UFortBuildingSettingsComponentBase_OnRep_Settings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class VerseFortniteInternal.FortPlayspaceComponentHelper
// (None)

class UClass* UFortPlayspaceComponentHelper::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortPlayspaceComponentHelper");

	return Clss;
}


// FortPlayspaceComponentHelper VerseFortniteInternal.Default__FortPlayspaceComponentHelper
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortPlayspaceComponentHelper* UFortPlayspaceComponentHelper::GetDefaultObj()
{
	static class UFortPlayspaceComponentHelper* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortPlayspaceComponentHelper*>(UFortPlayspaceComponentHelper::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteInternal.FortPlayspaceComponentHelper.HandlePlayerPawnPossessed
// (Final, Native, Public)
// Parameters:
// class UPawn*                       Pawn                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPlayspaceComponentHelper::HandlePlayerPawnPossessed(class UPawn* Pawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayspaceComponentHelper", "HandlePlayerPawnPossessed");

	Params::UFortPlayspaceComponentHelper_HandlePlayerPawnPossessed_Params Parms{};

	Parms.Pawn = Pawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortniteInternal.FortPlayspaceComponentHelper.HandlePlayerDied
// (Final, Native, Public)
// Parameters:
// class UFortPlayerPawnAthena*       FortPlayerPawnAthena                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPlayspaceComponentHelper::HandlePlayerDied(class UFortPlayerPawnAthena* FortPlayerPawnAthena)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayspaceComponentHelper", "HandlePlayerDied");

	Params::UFortPlayspaceComponentHelper_HandlePlayerDied_Params Parms{};

	Parms.FortPlayerPawnAthena = FortPlayerPawnAthena;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class VerseFortniteInternal.VerseFortniteEntitySubsystem
// (None)

class UClass* UVerseFortniteEntitySubsystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseFortniteEntitySubsystem");

	return Clss;
}


// VerseFortniteEntitySubsystem VerseFortniteInternal.Default__VerseFortniteEntitySubsystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UVerseFortniteEntitySubsystem* UVerseFortniteEntitySubsystem::GetDefaultObj()
{
	static class UVerseFortniteEntitySubsystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseFortniteEntitySubsystem*>(UVerseFortniteEntitySubsystem::StaticClass()->DefaultObject);

	return Default;
}

}


