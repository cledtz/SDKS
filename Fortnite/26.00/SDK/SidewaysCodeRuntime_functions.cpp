#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class SidewaysCodeRuntime.SidewaysCheatManager
// (None)

class UClass* USidewaysCheatManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SidewaysCheatManager");

	return Clss;
}


// SidewaysCheatManager SidewaysCodeRuntime.Default__SidewaysCheatManager
// (Public, ClassDefaultObject, ArchetypeObject)

class USidewaysCheatManager* USidewaysCheatManager::GetDefaultObj()
{
	static class USidewaysCheatManager* Default = nullptr;

	if (!Default)
		Default = static_cast<USidewaysCheatManager*>(USidewaysCheatManager::StaticClass()->DefaultObject);

	return Default;
}


// Function SidewaysCodeRuntime.SidewaysCheatManager.SetSidewaysState
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:
// enum class ESidewaysState          SidewaysState                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USidewaysCheatManager::SetSidewaysState(enum class ESidewaysState SidewaysState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SidewaysCheatManager", "SetSidewaysState");

	Params::USidewaysCheatManager_SetSidewaysState_Params Parms{};

	Parms.SidewaysState = SidewaysState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SidewaysCodeRuntime.FortControllerComponent_Sideways
// (None)

class UClass* UFortControllerComponent_Sideways::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortControllerComponent_Sideways");

	return Clss;
}


// FortControllerComponent_Sideways SidewaysCodeRuntime.Default__FortControllerComponent_Sideways
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortControllerComponent_Sideways* UFortControllerComponent_Sideways::GetDefaultObj()
{
	static class UFortControllerComponent_Sideways* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortControllerComponent_Sideways*>(UFortControllerComponent_Sideways::StaticClass()->DefaultObject);

	return Default;
}


// Class SidewaysCodeRuntime.PlayspaceComponent_SidewaysDimension
// (None)

class UClass* UPlayspaceComponent_SidewaysDimension::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayspaceComponent_SidewaysDimension");

	return Clss;
}


// PlayspaceComponent_SidewaysDimension SidewaysCodeRuntime.Default__PlayspaceComponent_SidewaysDimension
// (Public, ClassDefaultObject, ArchetypeObject)

class UPlayspaceComponent_SidewaysDimension* UPlayspaceComponent_SidewaysDimension::GetDefaultObj()
{
	static class UPlayspaceComponent_SidewaysDimension* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayspaceComponent_SidewaysDimension*>(UPlayspaceComponent_SidewaysDimension::StaticClass()->DefaultObject);

	return Default;
}


// Class SidewaysCodeRuntime.PlayspaceComponent_SidewaysEncounter
// (None)

class UClass* UPlayspaceComponent_SidewaysEncounter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PlayspaceComponent_SidewaysEncounter");

	return Clss;
}


// PlayspaceComponent_SidewaysEncounter SidewaysCodeRuntime.Default__PlayspaceComponent_SidewaysEncounter
// (Public, ClassDefaultObject, ArchetypeObject)

class UPlayspaceComponent_SidewaysEncounter* UPlayspaceComponent_SidewaysEncounter::GetDefaultObj()
{
	static class UPlayspaceComponent_SidewaysEncounter* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayspaceComponent_SidewaysEncounter*>(UPlayspaceComponent_SidewaysEncounter::StaticClass()->DefaultObject);

	return Default;
}


// Class SidewaysCodeRuntime.SidewaysStateComponent
// (None)

class UClass* USidewaysStateComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SidewaysStateComponent");

	return Clss;
}


// SidewaysStateComponent SidewaysCodeRuntime.Default__SidewaysStateComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class USidewaysStateComponent* USidewaysStateComponent::GetDefaultObj()
{
	static class USidewaysStateComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<USidewaysStateComponent*>(USidewaysStateComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function SidewaysCodeRuntime.SidewaysStateComponent.SetSidewaysState
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// enum class ESidewaysState          NewState                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USidewaysPlayspace*          NewSidewaysPlayspace                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USidewaysStateComponent::SetSidewaysState(enum class ESidewaysState NewState, class USidewaysPlayspace* NewSidewaysPlayspace)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SidewaysStateComponent", "SetSidewaysState");

	Params::USidewaysStateComponent_SetSidewaysState_Params Parms{};

	Parms.NewState = NewState;
	Parms.NewSidewaysPlayspace = NewSidewaysPlayspace;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SidewaysCodeRuntime.SidewaysStateComponent.OnRep_SidewaysState
// (Final, Native, Protected)
// Parameters:
// enum class ESidewaysState          LastSidewaysState                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USidewaysStateComponent::OnRep_SidewaysState(enum class ESidewaysState LastSidewaysState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SidewaysStateComponent", "OnRep_SidewaysState");

	Params::USidewaysStateComponent_OnRep_SidewaysState_Params Parms{};

	Parms.LastSidewaysState = LastSidewaysState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SidewaysCodeRuntime.SidewaysStateComponent.OnRep_SidewaysPlayspace
// (Final, Native, Protected)
// Parameters:
// class USidewaysPlayspace*          NewSidewaysPlayspace                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USidewaysStateComponent::OnRep_SidewaysPlayspace(class USidewaysPlayspace* NewSidewaysPlayspace)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SidewaysStateComponent", "OnRep_SidewaysPlayspace");

	Params::USidewaysStateComponent_OnRep_SidewaysPlayspace_Params Parms{};

	Parms.NewSidewaysPlayspace = NewSidewaysPlayspace;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SidewaysCodeRuntime.SidewaysStateComponent.HandleSidewaysStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class USidewaysPlayspace*          NewSidewaysPlayspace                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESidewaysState          OldState                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESidewaysState          NewState                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USidewaysStateComponent::HandleSidewaysStateChanged(class USidewaysPlayspace* NewSidewaysPlayspace, enum class ESidewaysState OldState, enum class ESidewaysState NewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SidewaysStateComponent", "HandleSidewaysStateChanged");

	Params::USidewaysStateComponent_HandleSidewaysStateChanged_Params Parms{};

	Parms.NewSidewaysPlayspace = NewSidewaysPlayspace;
	Parms.OldState = OldState;
	Parms.NewState = NewState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SidewaysCodeRuntime.SidewaysStateComponent.GetSidewaysState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ESidewaysState          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ESidewaysState USidewaysStateComponent::GetSidewaysState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SidewaysStateComponent", "GetSidewaysState");

	Params::USidewaysStateComponent_GetSidewaysState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SidewaysCodeRuntime.SidewaysStateComponent_Player
// (None)

class UClass* USidewaysStateComponent_Player::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SidewaysStateComponent_Player");

	return Clss;
}


// SidewaysStateComponent_Player SidewaysCodeRuntime.Default__SidewaysStateComponent_Player
// (Public, ClassDefaultObject, ArchetypeObject)

class USidewaysStateComponent_Player* USidewaysStateComponent_Player::GetDefaultObj()
{
	static class USidewaysStateComponent_Player* Default = nullptr;

	if (!Default)
		Default = static_cast<USidewaysStateComponent_Player*>(USidewaysStateComponent_Player::StaticClass()->DefaultObject);

	return Default;
}


// Class SidewaysCodeRuntime.SidewaysFeatureAction_HoldGlobalData
// (None)

class UClass* USidewaysFeatureAction_HoldGlobalData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SidewaysFeatureAction_HoldGlobalData");

	return Clss;
}


// SidewaysFeatureAction_HoldGlobalData SidewaysCodeRuntime.Default__SidewaysFeatureAction_HoldGlobalData
// (Public, ClassDefaultObject, ArchetypeObject)

class USidewaysFeatureAction_HoldGlobalData* USidewaysFeatureAction_HoldGlobalData::GetDefaultObj()
{
	static class USidewaysFeatureAction_HoldGlobalData* Default = nullptr;

	if (!Default)
		Default = static_cast<USidewaysFeatureAction_HoldGlobalData*>(USidewaysFeatureAction_HoldGlobalData::StaticClass()->DefaultObject);

	return Default;
}


// Class SidewaysCodeRuntime.SidewaysLibrary
// (None)

class UClass* USidewaysLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SidewaysLibrary");

	return Clss;
}


// SidewaysLibrary SidewaysCodeRuntime.Default__SidewaysLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class USidewaysLibrary* USidewaysLibrary::GetDefaultObj()
{
	static class USidewaysLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<USidewaysLibrary*>(USidewaysLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function SidewaysCodeRuntime.SidewaysLibrary.GetSidewaysStateComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UActor*                      Owner                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USidewaysStateComponent*     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USidewaysStateComponent* USidewaysLibrary::GetSidewaysStateComponent(class UActor* Owner)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SidewaysLibrary", "GetSidewaysStateComponent");

	Params::USidewaysLibrary_GetSidewaysStateComponent_Params Parms{};

	Parms.Owner = Owner;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class SidewaysCodeRuntime.SidewaysPlayspace
// (Actor)

class UClass* USidewaysPlayspace::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SidewaysPlayspace");

	return Clss;
}


// SidewaysPlayspace SidewaysCodeRuntime.Default__SidewaysPlayspace
// (Public, ClassDefaultObject, ArchetypeObject)

class USidewaysPlayspace* USidewaysPlayspace::GetDefaultObj()
{
	static class USidewaysPlayspace* Default = nullptr;

	if (!Default)
		Default = static_cast<USidewaysPlayspace*>(USidewaysPlayspace::StaticClass()->DefaultObject);

	return Default;
}


// Function SidewaysCodeRuntime.SidewaysPlayspace.RefreshActorsInSideways
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USidewaysPlayspace::RefreshActorsInSideways()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SidewaysPlayspace", "RefreshActorsInSideways");

	Params::USidewaysPlayspace_RefreshActorsInSideways_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function SidewaysCodeRuntime.SidewaysPlayspace.NotifySizeChanged
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USidewaysPlayspace::NotifySizeChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("SidewaysPlayspace", "NotifySizeChanged");

	Params::USidewaysPlayspace_NotifySizeChanged_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class SidewaysCodeRuntime.SidewaysVolume
// (Actor)

class UClass* USidewaysVolume::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SidewaysVolume");

	return Clss;
}


// SidewaysVolume SidewaysCodeRuntime.Default__SidewaysVolume
// (Public, ClassDefaultObject, ArchetypeObject)

class USidewaysVolume* USidewaysVolume::GetDefaultObj()
{
	static class USidewaysVolume* Default = nullptr;

	if (!Default)
		Default = static_cast<USidewaysVolume*>(USidewaysVolume::StaticClass()->DefaultObject);

	return Default;
}

}


