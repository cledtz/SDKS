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


// Function SidewaysCodeRuntime.SidewaysCheatManager.SetSidewaysState
// (Final, BlueprintAuthorityOnly, Exec, Native, Public)
// Parameters:
// enum class ESidewaysState          SidewaysState                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USidewaysCheatManager::SetSidewaysState(enum class ESidewaysState SidewaysState)
{
	static auto Func = Class->GetFunction("SidewaysCheatManager", "SetSidewaysState");

	Params::USidewaysCheatManager_SetSidewaysState_Params Parms;

	Parms.SidewaysState = SidewaysState;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SidewaysCodeRuntime.SidewaysStateComponent.SetSidewaysState
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// enum class ESidewaysState          NewState                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USidewaysPlayspace*          NewSidewaysPlayspace                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USidewaysStateComponent::SetSidewaysState(enum class ESidewaysState NewState, class USidewaysPlayspace* NewSidewaysPlayspace)
{
	static auto Func = Class->GetFunction("SidewaysStateComponent", "SetSidewaysState");

	Params::USidewaysStateComponent_SetSidewaysState_Params Parms;

	Parms.NewState = NewState;
	Parms.NewSidewaysPlayspace = NewSidewaysPlayspace;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SidewaysCodeRuntime.SidewaysStateComponent.OnRep_SidewaysState
// (Final, Native, Protected)
// Parameters:
// enum class ESidewaysState          LastSidewaysState                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USidewaysStateComponent::OnRep_SidewaysState(enum class ESidewaysState LastSidewaysState)
{
	static auto Func = Class->GetFunction("SidewaysStateComponent", "OnRep_SidewaysState");

	Params::USidewaysStateComponent_OnRep_SidewaysState_Params Parms;

	Parms.LastSidewaysState = LastSidewaysState;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SidewaysCodeRuntime.SidewaysStateComponent.OnRep_SidewaysPlayspace
// (Final, Native, Protected)
// Parameters:
// class USidewaysPlayspace*          NewSidewaysPlayspace                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USidewaysStateComponent::OnRep_SidewaysPlayspace(class USidewaysPlayspace* NewSidewaysPlayspace)
{
	static auto Func = Class->GetFunction("SidewaysStateComponent", "OnRep_SidewaysPlayspace");

	Params::USidewaysStateComponent_OnRep_SidewaysPlayspace_Params Parms;

	Parms.NewSidewaysPlayspace = NewSidewaysPlayspace;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SidewaysCodeRuntime.SidewaysStateComponent.HandleSidewaysStateChanged
// (Event, Protected, BlueprintEvent)
// Parameters:
// class USidewaysPlayspace*          NewSidewaysPlayspace                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESidewaysState          OldState                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESidewaysState          NewState                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USidewaysStateComponent::HandleSidewaysStateChanged(class USidewaysPlayspace* NewSidewaysPlayspace, enum class ESidewaysState OldState, enum class ESidewaysState NewState)
{
	static auto Func = Class->GetFunction("SidewaysStateComponent", "HandleSidewaysStateChanged");

	Params::USidewaysStateComponent_HandleSidewaysStateChanged_Params Parms;

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
	static auto Func = Class->GetFunction("SidewaysStateComponent", "GetSidewaysState");

	Params::USidewaysStateComponent_GetSidewaysState_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SidewaysCodeRuntime.SidewaysLibrary.GetSidewaysStateComponent
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UActor*                      Owner                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class USidewaysStateComponent*     ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class USidewaysStateComponent* USidewaysLibrary::GetSidewaysStateComponent(class UActor* Owner)
{
	static auto Func = Class->GetFunction("SidewaysLibrary", "GetSidewaysStateComponent");

	Params::USidewaysLibrary_GetSidewaysStateComponent_Params Parms;

	Parms.Owner = Owner;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function SidewaysCodeRuntime.SidewaysPlayspace.RefreshActorsInSideways
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USidewaysPlayspace::RefreshActorsInSideways()
{
	static auto Func = Class->GetFunction("SidewaysPlayspace", "RefreshActorsInSideways");

	Params::USidewaysPlayspace_RefreshActorsInSideways_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SidewaysCodeRuntime.SidewaysPlayspace.NotifySizeChanged
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void USidewaysPlayspace::NotifySizeChanged()
{
	static auto Func = Class->GetFunction("SidewaysPlayspace", "NotifySizeChanged");

	Params::USidewaysPlayspace_NotifySizeChanged_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
