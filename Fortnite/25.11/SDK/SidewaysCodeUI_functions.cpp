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


// Function SidewaysCodeUI.SidewaysWidgetBase.OnSidewaysStateChanged
// (Final, Native, Protected)
// Parameters:
// class USidewaysStateComponent*     SidewaysStateComponent                                           (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class ASidewaysPlayspace*          NewPlayspace                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESidewaysState          OldState                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class ESidewaysState          NewState                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USidewaysWidgetBase::OnSidewaysStateChanged(class USidewaysStateComponent* SidewaysStateComponent, class ASidewaysPlayspace* NewPlayspace, enum class ESidewaysState OldState, enum class ESidewaysState NewState)
{
	static auto Func = Class->GetFunction("SidewaysWidgetBase", "OnSidewaysStateChanged");

	Params::USidewaysWidgetBase_OnSidewaysStateChanged_Params Parms;

	Parms.SidewaysStateComponent = SidewaysStateComponent;
	Parms.NewPlayspace = NewPlayspace;
	Parms.OldState = OldState;
	Parms.NewState = NewState;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SidewaysCodeUI.SidewaysWidgetBase.OnParamUpdated
// (Event, Protected, HasOutParams, BlueprintEvent)
// Parameters:
// struct FGameplayTag                UpdatedParam                                                     (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USidewaysWidgetBase::OnParamUpdated(struct FGameplayTag& UpdatedParam)
{
	static auto Func = Class->GetFunction("SidewaysWidgetBase", "OnParamUpdated");

	Params::USidewaysWidgetBase_OnParamUpdated_Params Parms;

	Parms.UpdatedParam = UpdatedParam;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SidewaysCodeUI.SidewaysWidgetBase.OnExitSideways
// (Event, Protected, BlueprintEvent)
// Parameters:

void USidewaysWidgetBase::OnExitSideways()
{
	static auto Func = Class->GetFunction("SidewaysWidgetBase", "OnExitSideways");

	Params::USidewaysWidgetBase_OnExitSideways_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function SidewaysCodeUI.SidewaysWidgetBase.OnEnterSideways
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ASidewaysPlayspace*          Playspace                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USidewaysWidgetBase::OnEnterSideways(class ASidewaysPlayspace* Playspace)
{
	static auto Func = Class->GetFunction("SidewaysWidgetBase", "OnEnterSideways");

	Params::USidewaysWidgetBase_OnEnterSideways_Params Parms;

	Parms.Playspace = Playspace;

	UObject::ProcessEvent(Func, &Parms);

}


// Function SidewaysCodeUI.SidewaysWidgetBase.IsValidPlayspace
// (Event, Protected, BlueprintEvent, Const)
// Parameters:
// class ASidewaysPlayspace*          Playspace                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool USidewaysWidgetBase::IsValidPlayspace(class ASidewaysPlayspace* Playspace)
{
	static auto Func = Class->GetFunction("SidewaysWidgetBase", "IsValidPlayspace");

	Params::USidewaysWidgetBase_IsValidPlayspace_Params Parms;

	Parms.Playspace = Playspace;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function SidewaysCodeUI.SidewaysWidgetBase.InitializeVariables
// (Event, Protected, BlueprintEvent)
// Parameters:

void USidewaysWidgetBase::InitializeVariables()
{
	static auto Func = Class->GetFunction("SidewaysWidgetBase", "InitializeVariables");

	Params::USidewaysWidgetBase_InitializeVariables_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function SidewaysCodeUI.SidewaysWidgetBase.HandleFortPawnChanged
// (Final, Native, Protected)
// Parameters:
// class AFortPawn*                   PossessedPawn                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USidewaysWidgetBase::HandleFortPawnChanged(class AFortPawn* PossessedPawn)
{
	static auto Func = Class->GetFunction("SidewaysWidgetBase", "HandleFortPawnChanged");

	Params::USidewaysWidgetBase_HandleFortPawnChanged_Params Parms;

	Parms.PossessedPawn = PossessedPawn;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function SidewaysCodeUI.SidewaysWidgetBase.ConfigureUIFromPlayspace
// (Event, Protected, BlueprintEvent)
// Parameters:
// class ASidewaysPlayspace*          Playspace                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void USidewaysWidgetBase::ConfigureUIFromPlayspace(class ASidewaysPlayspace* Playspace)
{
	static auto Func = Class->GetFunction("SidewaysWidgetBase", "ConfigureUIFromPlayspace");

	Params::USidewaysWidgetBase_ConfigureUIFromPlayspace_Params Parms;

	Parms.Playspace = Playspace;

	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
