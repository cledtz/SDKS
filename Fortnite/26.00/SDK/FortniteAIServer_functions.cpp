#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class FortniteAIServer.FortAthenaAIBotEvaluator_Harvest
// (None)

class UClass* UFortAthenaAIBotEvaluator_Harvest::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_Harvest");

	return Clss;
}


// FortAthenaAIBotEvaluator_Harvest FortniteAIServer.Default__FortAthenaAIBotEvaluator_Harvest
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotEvaluator_Harvest* UFortAthenaAIBotEvaluator_Harvest::GetDefaultObj()
{
	static class UFortAthenaAIBotEvaluator_Harvest* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotEvaluator_Harvest*>(UFortAthenaAIBotEvaluator_Harvest::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAIServer.FortAthenaAIBotEvaluator_Harvest.HandleUnconverted
// (Final, Native, Private)
// Parameters:
// class UFortPawn*                   UnconvertedPawn                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EUnconvertReason        UnconvertReason                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotEvaluator_Harvest::HandleUnconverted(class UFortPawn* UnconvertedPawn, enum class EUnconvertReason UnconvertReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotEvaluator_Harvest", "HandleUnconverted");

	Params::UFortAthenaAIBotEvaluator_Harvest_HandleUnconverted_Params Parms{};

	Parms.UnconvertedPawn = UnconvertedPawn;
	Parms.UnconvertReason = UnconvertReason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAIServer.FortAthenaAIBotEvaluator_Harvest.HandleConverted
// (Final, Native, Private)
// Parameters:
// class UFortPawn*                   InstigatorPawn                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPawn*                   ConvertedPawn                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotEvaluator_Harvest::HandleConverted(class UFortPawn* InstigatorPawn, class UFortPawn* ConvertedPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotEvaluator_Harvest", "HandleConverted");

	Params::UFortAthenaAIBotEvaluator_Harvest_HandleConverted_Params Parms{};

	Parms.InstigatorPawn = InstigatorPawn;
	Parms.ConvertedPawn = ConvertedPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FortniteAIServer.FortAthenaAIBotEvaluator_ImitatePlayerEmote
// (None)

class UClass* UFortAthenaAIBotEvaluator_ImitatePlayerEmote::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_ImitatePlayerEmote");

	return Clss;
}


// FortAthenaAIBotEvaluator_ImitatePlayerEmote FortniteAIServer.Default__FortAthenaAIBotEvaluator_ImitatePlayerEmote
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotEvaluator_ImitatePlayerEmote* UFortAthenaAIBotEvaluator_ImitatePlayerEmote::GetDefaultObj()
{
	static class UFortAthenaAIBotEvaluator_ImitatePlayerEmote* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotEvaluator_ImitatePlayerEmote*>(UFortAthenaAIBotEvaluator_ImitatePlayerEmote::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAIServer.FortAthenaAIBotEvaluator_ImitatePlayerEmote.HandlePawnStoppedEmote
// (Final, Native, Protected)
// Parameters:
// class UFortItemDefinition*         MontageItemDef                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPawn*                   PawnEmoting                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotEvaluator_ImitatePlayerEmote::HandlePawnStoppedEmote(class UFortItemDefinition* MontageItemDef, class UFortPawn* PawnEmoting)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotEvaluator_ImitatePlayerEmote", "HandlePawnStoppedEmote");

	Params::UFortAthenaAIBotEvaluator_ImitatePlayerEmote_HandlePawnStoppedEmote_Params Parms{};

	Parms.MontageItemDef = MontageItemDef;
	Parms.PawnEmoting = PawnEmoting;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAIServer.FortAthenaAIBotEvaluator_ImitatePlayerEmote.HandlePawnStartedEmote
// (Final, Native, Protected)
// Parameters:
// class UFortItemDefinition*         MontageItemDef                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPawn*                   PawnEmoting                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotEvaluator_ImitatePlayerEmote::HandlePawnStartedEmote(class UFortItemDefinition* MontageItemDef, class UFortPawn* PawnEmoting)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotEvaluator_ImitatePlayerEmote", "HandlePawnStartedEmote");

	Params::UFortAthenaAIBotEvaluator_ImitatePlayerEmote_HandlePawnStartedEmote_Params Parms{};

	Parms.MontageItemDef = MontageItemDef;
	Parms.PawnEmoting = PawnEmoting;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FortniteAIServer.FortAthenaAIEvaluator_AbovePhysicsObject
// (None)

class UClass* UFortAthenaAIEvaluator_AbovePhysicsObject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIEvaluator_AbovePhysicsObject");

	return Clss;
}


// FortAthenaAIEvaluator_AbovePhysicsObject FortniteAIServer.Default__FortAthenaAIEvaluator_AbovePhysicsObject
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIEvaluator_AbovePhysicsObject* UFortAthenaAIEvaluator_AbovePhysicsObject::GetDefaultObj()
{
	static class UFortAthenaAIEvaluator_AbovePhysicsObject* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIEvaluator_AbovePhysicsObject*>(UFortAthenaAIEvaluator_AbovePhysicsObject::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaBTService_MovementStyle
// (None)

class UClass* UFortAthenaBTService_MovementStyle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaBTService_MovementStyle");

	return Clss;
}


// FortAthenaBTService_MovementStyle FortniteAIServer.Default__FortAthenaBTService_MovementStyle
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaBTService_MovementStyle* UFortAthenaBTService_MovementStyle::GetDefaultObj()
{
	static class UFortAthenaBTService_MovementStyle* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaBTService_MovementStyle*>(UFortAthenaBTService_MovementStyle::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortBTWorldConditionSchema
// (None)

class UClass* UFortBTWorldConditionSchema::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortBTWorldConditionSchema");

	return Clss;
}


// FortBTWorldConditionSchema FortniteAIServer.Default__FortBTWorldConditionSchema
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortBTWorldConditionSchema* UFortBTWorldConditionSchema::GetDefaultObj()
{
	static class UFortBTWorldConditionSchema* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortBTWorldConditionSchema*>(UFortBTWorldConditionSchema::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaBTService_WorldCondition
// (None)

class UClass* UFortAthenaBTService_WorldCondition::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaBTService_WorldCondition");

	return Clss;
}


// FortAthenaBTService_WorldCondition FortniteAIServer.Default__FortAthenaBTService_WorldCondition
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaBTService_WorldCondition* UFortAthenaBTService_WorldCondition::GetDefaultObj()
{
	static class UFortAthenaBTService_WorldCondition* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaBTService_WorldCondition*>(UFortAthenaBTService_WorldCondition::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaBTTask_Harvest
// (None)

class UClass* UFortAthenaBTTask_Harvest::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaBTTask_Harvest");

	return Clss;
}


// FortAthenaBTTask_Harvest FortniteAIServer.Default__FortAthenaBTTask_Harvest
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaBTTask_Harvest* UFortAthenaBTTask_Harvest::GetDefaultObj()
{
	static class UFortAthenaBTTask_Harvest* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaBTTask_Harvest*>(UFortAthenaBTTask_Harvest::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaBTTask_VehicleSwitchSeat
// (None)

class UClass* UFortAthenaBTTask_VehicleSwitchSeat::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaBTTask_VehicleSwitchSeat");

	return Clss;
}


// FortAthenaBTTask_VehicleSwitchSeat FortniteAIServer.Default__FortAthenaBTTask_VehicleSwitchSeat
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaBTTask_VehicleSwitchSeat* UFortAthenaBTTask_VehicleSwitchSeat::GetDefaultObj()
{
	static class UFortAthenaBTTask_VehicleSwitchSeat* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaBTTask_VehicleSwitchSeat*>(UFortAthenaBTTask_VehicleSwitchSeat::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortStateTreeConditionSchema
// (None)

class UClass* UFortStateTreeConditionSchema::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortStateTreeConditionSchema");

	return Clss;
}


// FortStateTreeConditionSchema FortniteAIServer.Default__FortStateTreeConditionSchema
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortStateTreeConditionSchema* UFortStateTreeConditionSchema::GetDefaultObj()
{
	static class UFortStateTreeConditionSchema* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortStateTreeConditionSchema*>(UFortStateTreeConditionSchema::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortBTDecorator_AIBotVehicleSeatStatus
// (None)

class UClass* UFortBTDecorator_AIBotVehicleSeatStatus::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortBTDecorator_AIBotVehicleSeatStatus");

	return Clss;
}


// FortBTDecorator_AIBotVehicleSeatStatus FortniteAIServer.Default__FortBTDecorator_AIBotVehicleSeatStatus
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortBTDecorator_AIBotVehicleSeatStatus* UFortBTDecorator_AIBotVehicleSeatStatus::GetDefaultObj()
{
	static class UFortBTDecorator_AIBotVehicleSeatStatus* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortBTDecorator_AIBotVehicleSeatStatus*>(UFortBTDecorator_AIBotVehicleSeatStatus::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortBTService_AIEvaluatorsInjector
// (None)

class UClass* UFortBTService_AIEvaluatorsInjector::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortBTService_AIEvaluatorsInjector");

	return Clss;
}


// FortBTService_AIEvaluatorsInjector FortniteAIServer.Default__FortBTService_AIEvaluatorsInjector
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortBTService_AIEvaluatorsInjector* UFortBTService_AIEvaluatorsInjector::GetDefaultObj()
{
	static class UFortBTService_AIEvaluatorsInjector* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortBTService_AIEvaluatorsInjector*>(UFortBTService_AIEvaluatorsInjector::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortBTService_ClearGoalAndAssignment
// (None)

class UClass* UFortBTService_ClearGoalAndAssignment::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortBTService_ClearGoalAndAssignment");

	return Clss;
}


// FortBTService_ClearGoalAndAssignment FortniteAIServer.Default__FortBTService_ClearGoalAndAssignment
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortBTService_ClearGoalAndAssignment* UFortBTService_ClearGoalAndAssignment::GetDefaultObj()
{
	static class UFortBTService_ClearGoalAndAssignment* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortBTService_ClearGoalAndAssignment*>(UFortBTService_ClearGoalAndAssignment::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortGameFeatureAction_InjectAIBehavior
// (None)

class UClass* UFortGameFeatureAction_InjectAIBehavior::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortGameFeatureAction_InjectAIBehavior");

	return Clss;
}


// FortGameFeatureAction_InjectAIBehavior FortniteAIServer.Default__FortGameFeatureAction_InjectAIBehavior
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortGameFeatureAction_InjectAIBehavior* UFortGameFeatureAction_InjectAIBehavior::GetDefaultObj()
{
	static class UFortGameFeatureAction_InjectAIBehavior* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortGameFeatureAction_InjectAIBehavior*>(UFortGameFeatureAction_InjectAIBehavior::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortInjectedBehaviorsComponent
// (None)

class UClass* UFortInjectedBehaviorsComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortInjectedBehaviorsComponent");

	return Clss;
}


// FortInjectedBehaviorsComponent FortniteAIServer.Default__FortInjectedBehaviorsComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortInjectedBehaviorsComponent* UFortInjectedBehaviorsComponent::GetDefaultObj()
{
	static class UFortInjectedBehaviorsComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortInjectedBehaviorsComponent*>(UFortInjectedBehaviorsComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryContext_PlayspaceVolume
// (None)

class UClass* UFortQueryContext_PlayspaceVolume::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryContext_PlayspaceVolume");

	return Clss;
}


// FortQueryContext_PlayspaceVolume FortniteAIServer.Default__FortQueryContext_PlayspaceVolume
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryContext_PlayspaceVolume* UFortQueryContext_PlayspaceVolume::GetDefaultObj()
{
	static class UFortQueryContext_PlayspaceVolume* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryContext_PlayspaceVolume*>(UFortQueryContext_PlayspaceVolume::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryGenerator_GridInBox
// (None)

class UClass* UFortQueryGenerator_GridInBox::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryGenerator_GridInBox");

	return Clss;
}


// FortQueryGenerator_GridInBox FortniteAIServer.Default__FortQueryGenerator_GridInBox
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryGenerator_GridInBox* UFortQueryGenerator_GridInBox::GetDefaultObj()
{
	static class UFortQueryGenerator_GridInBox* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryGenerator_GridInBox*>(UFortQueryGenerator_GridInBox::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryGenerator_GridInVolume
// (None)

class UClass* UFortQueryGenerator_GridInVolume::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryGenerator_GridInVolume");

	return Clss;
}


// FortQueryGenerator_GridInVolume FortniteAIServer.Default__FortQueryGenerator_GridInVolume
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryGenerator_GridInVolume* UFortQueryGenerator_GridInVolume::GetDefaultObj()
{
	static class UFortQueryGenerator_GridInVolume* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryGenerator_GridInVolume*>(UFortQueryGenerator_GridInVolume::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortWorldConditionTimeOfDayState
// (None)

class UClass* UFortWorldConditionTimeOfDayState::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortWorldConditionTimeOfDayState");

	return Clss;
}


// FortWorldConditionTimeOfDayState FortniteAIServer.Default__FortWorldConditionTimeOfDayState
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortWorldConditionTimeOfDayState* UFortWorldConditionTimeOfDayState::GetDefaultObj()
{
	static class UFortWorldConditionTimeOfDayState* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortWorldConditionTimeOfDayState*>(UFortWorldConditionTimeOfDayState::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAIServer.FortWorldConditionTimeOfDayState.HandleTimeOfDayPhaseChange
// (Final, Native, Private)
// Parameters:
// enum class EFortDayPhase           CurrentDayPhase                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EFortDayPhase           PreviousDayPhase                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAtCreation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortWorldConditionTimeOfDayState::HandleTimeOfDayPhaseChange(enum class EFortDayPhase CurrentDayPhase, enum class EFortDayPhase PreviousDayPhase, bool bAtCreation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortWorldConditionTimeOfDayState", "HandleTimeOfDayPhaseChange");

	Params::UFortWorldConditionTimeOfDayState_HandleTimeOfDayPhaseChange_Params Parms{};

	Parms.CurrentDayPhase = CurrentDayPhase;
	Parms.PreviousDayPhase = PreviousDayPhase;
	Parms.bAtCreation = bAtCreation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FortniteAIServer.FortGameFeatureAction_InjectAIEvaluators
// (None)

class UClass* UFortGameFeatureAction_InjectAIEvaluators::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortGameFeatureAction_InjectAIEvaluators");

	return Clss;
}


// FortGameFeatureAction_InjectAIEvaluators FortniteAIServer.Default__FortGameFeatureAction_InjectAIEvaluators
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortGameFeatureAction_InjectAIEvaluators* UFortGameFeatureAction_InjectAIEvaluators::GetDefaultObj()
{
	static class UFortGameFeatureAction_InjectAIEvaluators* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortGameFeatureAction_InjectAIEvaluators*>(UFortGameFeatureAction_InjectAIEvaluators::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortEnvQueryGenerator_ProjectedPoints
// (None)

class UClass* UFortEnvQueryGenerator_ProjectedPoints::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortEnvQueryGenerator_ProjectedPoints");

	return Clss;
}


// FortEnvQueryGenerator_ProjectedPoints FortniteAIServer.Default__FortEnvQueryGenerator_ProjectedPoints
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortEnvQueryGenerator_ProjectedPoints* UFortEnvQueryGenerator_ProjectedPoints::GetDefaultObj()
{
	static class UFortEnvQueryGenerator_ProjectedPoints* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortEnvQueryGenerator_ProjectedPoints*>(UFortEnvQueryGenerator_ProjectedPoints::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortEnvQueryGenerator_SimpleGrid
// (None)

class UClass* UFortEnvQueryGenerator_SimpleGrid::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortEnvQueryGenerator_SimpleGrid");

	return Clss;
}


// FortEnvQueryGenerator_SimpleGrid FortniteAIServer.Default__FortEnvQueryGenerator_SimpleGrid
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortEnvQueryGenerator_SimpleGrid* UFortEnvQueryGenerator_SimpleGrid::GetDefaultObj()
{
	static class UFortEnvQueryGenerator_SimpleGrid* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortEnvQueryGenerator_SimpleGrid*>(UFortEnvQueryGenerator_SimpleGrid::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortBTService_ContextOverride
// (None)

class UClass* UFortBTService_ContextOverride::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortBTService_ContextOverride");

	return Clss;
}


// FortBTService_ContextOverride FortniteAIServer.Default__FortBTService_ContextOverride
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortBTService_ContextOverride* UFortBTService_ContextOverride::GetDefaultObj()
{
	static class UFortBTService_ContextOverride* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortBTService_ContextOverride*>(UFortBTService_ContextOverride::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortBTContext_MoveUrgency
// (None)

class UClass* UFortBTContext_MoveUrgency::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortBTContext_MoveUrgency");

	return Clss;
}


// FortBTContext_MoveUrgency FortniteAIServer.Default__FortBTContext_MoveUrgency
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortBTContext_MoveUrgency* UFortBTContext_MoveUrgency::GetDefaultObj()
{
	static class UFortBTContext_MoveUrgency* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortBTContext_MoveUrgency*>(UFortBTContext_MoveUrgency::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortBTContext_SkipNotPerceivedGoals
// (None)

class UClass* UFortBTContext_SkipNotPerceivedGoals::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortBTContext_SkipNotPerceivedGoals");

	return Clss;
}


// FortBTContext_SkipNotPerceivedGoals FortniteAIServer.Default__FortBTContext_SkipNotPerceivedGoals
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortBTContext_SkipNotPerceivedGoals* UFortBTContext_SkipNotPerceivedGoals::GetDefaultObj()
{
	static class UFortBTContext_SkipNotPerceivedGoals* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortBTContext_SkipNotPerceivedGoals*>(UFortBTContext_SkipNotPerceivedGoals::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortBTContext_SuppressGoalUpdate
// (None)

class UClass* UFortBTContext_SuppressGoalUpdate::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortBTContext_SuppressGoalUpdate");

	return Clss;
}


// FortBTContext_SuppressGoalUpdate FortniteAIServer.Default__FortBTContext_SuppressGoalUpdate
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortBTContext_SuppressGoalUpdate* UFortBTContext_SuppressGoalUpdate::GetDefaultObj()
{
	static class UFortBTContext_SuppressGoalUpdate* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortBTContext_SuppressGoalUpdate*>(UFortBTContext_SuppressGoalUpdate::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortBTDecorator_CanBeConsideredAirborne
// (None)

class UClass* UFortBTDecorator_CanBeConsideredAirborne::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortBTDecorator_CanBeConsideredAirborne");

	return Clss;
}


// FortBTDecorator_CanBeConsideredAirborne FortniteAIServer.Default__FortBTDecorator_CanBeConsideredAirborne
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortBTDecorator_CanBeConsideredAirborne* UFortBTDecorator_CanBeConsideredAirborne::GetDefaultObj()
{
	static class UFortBTDecorator_CanBeConsideredAirborne* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortBTDecorator_CanBeConsideredAirborne*>(UFortBTDecorator_CanBeConsideredAirborne::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortBTDecorator_DistanceBetween
// (None)

class UClass* UFortBTDecorator_DistanceBetween::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortBTDecorator_DistanceBetween");

	return Clss;
}


// FortBTDecorator_DistanceBetween FortniteAIServer.Default__FortBTDecorator_DistanceBetween
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortBTDecorator_DistanceBetween* UFortBTDecorator_DistanceBetween::GetDefaultObj()
{
	static class UFortBTDecorator_DistanceBetween* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortBTDecorator_DistanceBetween*>(UFortBTDecorator_DistanceBetween::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortBTDecorator_GameplayAbility_CanActivate
// (None)

class UClass* UFortBTDecorator_GameplayAbility_CanActivate::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortBTDecorator_GameplayAbility_CanActivate");

	return Clss;
}


// FortBTDecorator_GameplayAbility_CanActivate FortniteAIServer.Default__FortBTDecorator_GameplayAbility_CanActivate
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortBTDecorator_GameplayAbility_CanActivate* UFortBTDecorator_GameplayAbility_CanActivate::GetDefaultObj()
{
	static class UFortBTDecorator_GameplayAbility_CanActivate* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortBTDecorator_GameplayAbility_CanActivate*>(UFortBTDecorator_GameplayAbility_CanActivate::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortBTDecorator_GameplayAbility_CanHitTarget
// (None)

class UClass* UFortBTDecorator_GameplayAbility_CanHitTarget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortBTDecorator_GameplayAbility_CanHitTarget");

	return Clss;
}


// FortBTDecorator_GameplayAbility_CanHitTarget FortniteAIServer.Default__FortBTDecorator_GameplayAbility_CanHitTarget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortBTDecorator_GameplayAbility_CanHitTarget* UFortBTDecorator_GameplayAbility_CanHitTarget::GetDefaultObj()
{
	static class UFortBTDecorator_GameplayAbility_CanHitTarget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortBTDecorator_GameplayAbility_CanHitTarget*>(UFortBTDecorator_GameplayAbility_CanHitTarget::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortBTDecorator_GameplayAbility_CompareDistance
// (None)

class UClass* UFortBTDecorator_GameplayAbility_CompareDistance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortBTDecorator_GameplayAbility_CompareDistance");

	return Clss;
}


// FortBTDecorator_GameplayAbility_CompareDistance FortniteAIServer.Default__FortBTDecorator_GameplayAbility_CompareDistance
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortBTDecorator_GameplayAbility_CompareDistance* UFortBTDecorator_GameplayAbility_CompareDistance::GetDefaultObj()
{
	static class UFortBTDecorator_GameplayAbility_CompareDistance* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortBTDecorator_GameplayAbility_CompareDistance*>(UFortBTDecorator_GameplayAbility_CompareDistance::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortBTDecorator_GameplayAbility_DoesTargetHaveProhibitedTags
// (None)

class UClass* UFortBTDecorator_GameplayAbility_DoesTargetHaveProhibitedTags::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortBTDecorator_GameplayAbility_DoesTargetHaveProhibitedTags");

	return Clss;
}


// FortBTDecorator_GameplayAbility_DoesTargetHaveProhibitedTags FortniteAIServer.Default__FortBTDecorator_GameplayAbility_DoesTargetHaveProhibitedTags
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortBTDecorator_GameplayAbility_DoesTargetHaveProhibitedTags* UFortBTDecorator_GameplayAbility_DoesTargetHaveProhibitedTags::GetDefaultObj()
{
	static class UFortBTDecorator_GameplayAbility_DoesTargetHaveProhibitedTags* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortBTDecorator_GameplayAbility_DoesTargetHaveProhibitedTags*>(UFortBTDecorator_GameplayAbility_DoesTargetHaveProhibitedTags::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortBTDecorator_GameplayAbility_HasGameplayAbility
// (None)

class UClass* UFortBTDecorator_GameplayAbility_HasGameplayAbility::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortBTDecorator_GameplayAbility_HasGameplayAbility");

	return Clss;
}


// FortBTDecorator_GameplayAbility_HasGameplayAbility FortniteAIServer.Default__FortBTDecorator_GameplayAbility_HasGameplayAbility
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortBTDecorator_GameplayAbility_HasGameplayAbility* UFortBTDecorator_GameplayAbility_HasGameplayAbility::GetDefaultObj()
{
	static class UFortBTDecorator_GameplayAbility_HasGameplayAbility* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortBTDecorator_GameplayAbility_HasGameplayAbility*>(UFortBTDecorator_GameplayAbility_HasGameplayAbility::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortBTDecorator_GameplayAbility_HasNearbyPawns
// (None)

class UClass* UFortBTDecorator_GameplayAbility_HasNearbyPawns::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortBTDecorator_GameplayAbility_HasNearbyPawns");

	return Clss;
}


// FortBTDecorator_GameplayAbility_HasNearbyPawns FortniteAIServer.Default__FortBTDecorator_GameplayAbility_HasNearbyPawns
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortBTDecorator_GameplayAbility_HasNearbyPawns* UFortBTDecorator_GameplayAbility_HasNearbyPawns::GetDefaultObj()
{
	static class UFortBTDecorator_GameplayAbility_HasNearbyPawns* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortBTDecorator_GameplayAbility_HasNearbyPawns*>(UFortBTDecorator_GameplayAbility_HasNearbyPawns::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortBTDecorator_GameplayAbility_IsClosestPawnInRange
// (None)

class UClass* UFortBTDecorator_GameplayAbility_IsClosestPawnInRange::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortBTDecorator_GameplayAbility_IsClosestPawnInRange");

	return Clss;
}


// FortBTDecorator_GameplayAbility_IsClosestPawnInRange FortniteAIServer.Default__FortBTDecorator_GameplayAbility_IsClosestPawnInRange
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortBTDecorator_GameplayAbility_IsClosestPawnInRange* UFortBTDecorator_GameplayAbility_IsClosestPawnInRange::GetDefaultObj()
{
	static class UFortBTDecorator_GameplayAbility_IsClosestPawnInRange* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortBTDecorator_GameplayAbility_IsClosestPawnInRange*>(UFortBTDecorator_GameplayAbility_IsClosestPawnInRange::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortBTDecorator_GameplayAbility_IsOnCooldown
// (None)

class UClass* UFortBTDecorator_GameplayAbility_IsOnCooldown::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortBTDecorator_GameplayAbility_IsOnCooldown");

	return Clss;
}


// FortBTDecorator_GameplayAbility_IsOnCooldown FortniteAIServer.Default__FortBTDecorator_GameplayAbility_IsOnCooldown
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortBTDecorator_GameplayAbility_IsOnCooldown* UFortBTDecorator_GameplayAbility_IsOnCooldown::GetDefaultObj()
{
	static class UFortBTDecorator_GameplayAbility_IsOnCooldown* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortBTDecorator_GameplayAbility_IsOnCooldown*>(UFortBTDecorator_GameplayAbility_IsOnCooldown::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortBTDecorator_GameplayAbility_IsRotatedToAttackTarget
// (None)

class UClass* UFortBTDecorator_GameplayAbility_IsRotatedToAttackTarget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortBTDecorator_GameplayAbility_IsRotatedToAttackTarget");

	return Clss;
}


// FortBTDecorator_GameplayAbility_IsRotatedToAttackTarget FortniteAIServer.Default__FortBTDecorator_GameplayAbility_IsRotatedToAttackTarget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortBTDecorator_GameplayAbility_IsRotatedToAttackTarget* UFortBTDecorator_GameplayAbility_IsRotatedToAttackTarget::GetDefaultObj()
{
	static class UFortBTDecorator_GameplayAbility_IsRotatedToAttackTarget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortBTDecorator_GameplayAbility_IsRotatedToAttackTarget*>(UFortBTDecorator_GameplayAbility_IsRotatedToAttackTarget::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortBTDecorator_GameplayAbility_IsWithinMaxTargetSelectionRange
// (None)

class UClass* UFortBTDecorator_GameplayAbility_IsWithinMaxTargetSelectionRange::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortBTDecorator_GameplayAbility_IsWithinMaxTargetSelectionRange");

	return Clss;
}


// FortBTDecorator_GameplayAbility_IsWithinMaxTargetSelectionRange FortniteAIServer.Default__FortBTDecorator_GameplayAbility_IsWithinMaxTargetSelectionRange
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortBTDecorator_GameplayAbility_IsWithinMaxTargetSelectionRange* UFortBTDecorator_GameplayAbility_IsWithinMaxTargetSelectionRange::GetDefaultObj()
{
	static class UFortBTDecorator_GameplayAbility_IsWithinMaxTargetSelectionRange* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortBTDecorator_GameplayAbility_IsWithinMaxTargetSelectionRange*>(UFortBTDecorator_GameplayAbility_IsWithinMaxTargetSelectionRange::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortBTDecorator_IsGoalPawn
// (None)

class UClass* UFortBTDecorator_IsGoalPawn::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortBTDecorator_IsGoalPawn");

	return Clss;
}


// FortBTDecorator_IsGoalPawn FortniteAIServer.Default__FortBTDecorator_IsGoalPawn
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortBTDecorator_IsGoalPawn* UFortBTDecorator_IsGoalPawn::GetDefaultObj()
{
	static class UFortBTDecorator_IsGoalPawn* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortBTDecorator_IsGoalPawn*>(UFortBTDecorator_IsGoalPawn::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortBTDecorator_IsInBotEndGame
// (None)

class UClass* UFortBTDecorator_IsInBotEndGame::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortBTDecorator_IsInBotEndGame");

	return Clss;
}


// FortBTDecorator_IsInBotEndGame FortniteAIServer.Default__FortBTDecorator_IsInBotEndGame
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortBTDecorator_IsInBotEndGame* UFortBTDecorator_IsInBotEndGame::GetDefaultObj()
{
	static class UFortBTDecorator_IsInBotEndGame* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortBTDecorator_IsInBotEndGame*>(UFortBTDecorator_IsInBotEndGame::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortBTDecorator_IsMoving
// (None)

class UClass* UFortBTDecorator_IsMoving::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortBTDecorator_IsMoving");

	return Clss;
}


// FortBTDecorator_IsMoving FortniteAIServer.Default__FortBTDecorator_IsMoving
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortBTDecorator_IsMoving* UFortBTDecorator_IsMoving::GetDefaultObj()
{
	static class UFortBTDecorator_IsMoving* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortBTDecorator_IsMoving*>(UFortBTDecorator_IsMoving::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortBTDecorator_IsTakerAirborne
// (None)

class UClass* UFortBTDecorator_IsTakerAirborne::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortBTDecorator_IsTakerAirborne");

	return Clss;
}


// FortBTDecorator_IsTakerAirborne FortniteAIServer.Default__FortBTDecorator_IsTakerAirborne
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortBTDecorator_IsTakerAirborne* UFortBTDecorator_IsTakerAirborne::GetDefaultObj()
{
	static class UFortBTDecorator_IsTakerAirborne* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortBTDecorator_IsTakerAirborne*>(UFortBTDecorator_IsTakerAirborne::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortBTDecorator_WeaponStatus
// (None)

class UClass* UFortBTDecorator_WeaponStatus::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortBTDecorator_WeaponStatus");

	return Clss;
}


// FortBTDecorator_WeaponStatus FortniteAIServer.Default__FortBTDecorator_WeaponStatus
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortBTDecorator_WeaponStatus* UFortBTDecorator_WeaponStatus::GetDefaultObj()
{
	static class UFortBTDecorator_WeaponStatus* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortBTDecorator_WeaponStatus*>(UFortBTDecorator_WeaponStatus::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortBTService_ActivateAbility
// (None)

class UClass* UFortBTService_ActivateAbility::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortBTService_ActivateAbility");

	return Clss;
}


// FortBTService_ActivateAbility FortniteAIServer.Default__FortBTService_ActivateAbility
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortBTService_ActivateAbility* UFortBTService_ActivateAbility::GetDefaultObj()
{
	static class UFortBTService_ActivateAbility* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortBTService_ActivateAbility*>(UFortBTService_ActivateAbility::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortBTService_UpdateBotMissionBuilding
// (None)

class UClass* UFortBTService_UpdateBotMissionBuilding::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortBTService_UpdateBotMissionBuilding");

	return Clss;
}


// FortBTService_UpdateBotMissionBuilding FortniteAIServer.Default__FortBTService_UpdateBotMissionBuilding
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortBTService_UpdateBotMissionBuilding* UFortBTService_UpdateBotMissionBuilding::GetDefaultObj()
{
	static class UFortBTService_UpdateBotMissionBuilding* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortBTService_UpdateBotMissionBuilding*>(UFortBTService_UpdateBotMissionBuilding::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortBTService_UpdateBotMissionGoal
// (None)

class UClass* UFortBTService_UpdateBotMissionGoal::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortBTService_UpdateBotMissionGoal");

	return Clss;
}


// FortBTService_UpdateBotMissionGoal FortniteAIServer.Default__FortBTService_UpdateBotMissionGoal
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortBTService_UpdateBotMissionGoal* UFortBTService_UpdateBotMissionGoal::GetDefaultObj()
{
	static class UFortBTService_UpdateBotMissionGoal* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortBTService_UpdateBotMissionGoal*>(UFortBTService_UpdateBotMissionGoal::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortBTTask_BotMissionBuild
// (None)

class UClass* UFortBTTask_BotMissionBuild::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortBTTask_BotMissionBuild");

	return Clss;
}


// FortBTTask_BotMissionBuild FortniteAIServer.Default__FortBTTask_BotMissionBuild
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortBTTask_BotMissionBuild* UFortBTTask_BotMissionBuild::GetDefaultObj()
{
	static class UFortBTTask_BotMissionBuild* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortBTTask_BotMissionBuild*>(UFortBTTask_BotMissionBuild::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortBTTask_BotMissionInteract
// (None)

class UClass* UFortBTTask_BotMissionInteract::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortBTTask_BotMissionInteract");

	return Clss;
}


// FortBTTask_BotMissionInteract FortniteAIServer.Default__FortBTTask_BotMissionInteract
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortBTTask_BotMissionInteract* UFortBTTask_BotMissionInteract::GetDefaultObj()
{
	static class UFortBTTask_BotMissionInteract* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortBTTask_BotMissionInteract*>(UFortBTTask_BotMissionInteract::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortBTTask_ExecuteGameplayAbility
// (None)

class UClass* UFortBTTask_ExecuteGameplayAbility::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortBTTask_ExecuteGameplayAbility");

	return Clss;
}


// FortBTTask_ExecuteGameplayAbility FortniteAIServer.Default__FortBTTask_ExecuteGameplayAbility
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortBTTask_ExecuteGameplayAbility* UFortBTTask_ExecuteGameplayAbility::GetDefaultObj()
{
	static class UFortBTTask_ExecuteGameplayAbility* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortBTTask_ExecuteGameplayAbility*>(UFortBTTask_ExecuteGameplayAbility::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortBTTask_GameMoveTo
// (None)

class UClass* UFortBTTask_GameMoveTo::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortBTTask_GameMoveTo");

	return Clss;
}


// FortBTTask_GameMoveTo FortniteAIServer.Default__FortBTTask_GameMoveTo
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortBTTask_GameMoveTo* UFortBTTask_GameMoveTo::GetDefaultObj()
{
	static class UFortBTTask_GameMoveTo* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortBTTask_GameMoveTo*>(UFortBTTask_GameMoveTo::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortBTTask_GameMoveDirectlyToward
// (None)

class UClass* UFortBTTask_GameMoveDirectlyToward::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortBTTask_GameMoveDirectlyToward");

	return Clss;
}


// FortBTTask_GameMoveDirectlyToward FortniteAIServer.Default__FortBTTask_GameMoveDirectlyToward
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortBTTask_GameMoveDirectlyToward* UFortBTTask_GameMoveDirectlyToward::GetDefaultObj()
{
	static class UFortBTTask_GameMoveDirectlyToward* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortBTTask_GameMoveDirectlyToward*>(UFortBTTask_GameMoveDirectlyToward::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortBTTask_RequestUndermining
// (None)

class UClass* UFortBTTask_RequestUndermining::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortBTTask_RequestUndermining");

	return Clss;
}


// FortBTTask_RequestUndermining FortniteAIServer.Default__FortBTTask_RequestUndermining
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortBTTask_RequestUndermining* UFortBTTask_RequestUndermining::GetDefaultObj()
{
	static class UFortBTTask_RequestUndermining* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortBTTask_RequestUndermining*>(UFortBTTask_RequestUndermining::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortBTTask_RotateToFaceBBEntryWithTags
// (None)

class UClass* UFortBTTask_RotateToFaceBBEntryWithTags::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortBTTask_RotateToFaceBBEntryWithTags");

	return Clss;
}


// FortBTTask_RotateToFaceBBEntryWithTags FortniteAIServer.Default__FortBTTask_RotateToFaceBBEntryWithTags
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortBTTask_RotateToFaceBBEntryWithTags* UFortBTTask_RotateToFaceBBEntryWithTags::GetDefaultObj()
{
	static class UFortBTTask_RotateToFaceBBEntryWithTags* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortBTTask_RotateToFaceBBEntryWithTags*>(UFortBTTask_RotateToFaceBBEntryWithTags::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortBTTask_SetFrustrationDiscouragement
// (None)

class UClass* UFortBTTask_SetFrustrationDiscouragement::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortBTTask_SetFrustrationDiscouragement");

	return Clss;
}


// FortBTTask_SetFrustrationDiscouragement FortniteAIServer.Default__FortBTTask_SetFrustrationDiscouragement
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortBTTask_SetFrustrationDiscouragement* UFortBTTask_SetFrustrationDiscouragement::GetDefaultObj()
{
	static class UFortBTTask_SetFrustrationDiscouragement* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortBTTask_SetFrustrationDiscouragement*>(UFortBTTask_SetFrustrationDiscouragement::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortBTTask_Sleep
// (None)

class UClass* UFortBTTask_Sleep::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortBTTask_Sleep");

	return Clss;
}


// FortBTTask_Sleep FortniteAIServer.Default__FortBTTask_Sleep
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortBTTask_Sleep* UFortBTTask_Sleep::GetDefaultObj()
{
	static class UFortBTTask_Sleep* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortBTTask_Sleep*>(UFortBTTask_Sleep::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortBTTask_TakerMoveToNavmesh
// (None)

class UClass* UFortBTTask_TakerMoveToNavmesh::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortBTTask_TakerMoveToNavmesh");

	return Clss;
}


// FortBTTask_TakerMoveToNavmesh FortniteAIServer.Default__FortBTTask_TakerMoveToNavmesh
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortBTTask_TakerMoveToNavmesh* UFortBTTask_TakerMoveToNavmesh::GetDefaultObj()
{
	static class UFortBTTask_TakerMoveToNavmesh* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortBTTask_TakerMoveToNavmesh*>(UFortBTTask_TakerMoveToNavmesh::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortEQSPrevisActor
// (Actor)

class UClass* UFortEQSPrevisActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortEQSPrevisActor");

	return Clss;
}


// FortEQSPrevisActor FortniteAIServer.Default__FortEQSPrevisActor
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortEQSPrevisActor* UFortEQSPrevisActor::GetDefaultObj()
{
	static class UFortEQSPrevisActor* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortEQSPrevisActor*>(UFortEQSPrevisActor::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAIServer.FortEQSPrevisActor.SetQueryTemplate
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UEnvQuery*                   InPrevisQueryTemplate                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortEQSPrevisActor::SetQueryTemplate(class UEnvQuery* InPrevisQueryTemplate)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortEQSPrevisActor", "SetQueryTemplate");

	Params::UFortEQSPrevisActor_SetQueryTemplate_Params Parms{};

	Parms.InPrevisQueryTemplate = InPrevisQueryTemplate;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAIServer.FortEQSPrevisActor.PrepForPrevis
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortEQSPrevisActor::PrepForPrevis()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortEQSPrevisActor", "PrepForPrevis");

	Params::UFortEQSPrevisActor_PrepForPrevis_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Class FortniteAIServer.FortQueryContext_AIPawnSpawnLocation
// (None)

class UClass* UFortQueryContext_AIPawnSpawnLocation::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryContext_AIPawnSpawnLocation");

	return Clss;
}


// FortQueryContext_AIPawnSpawnLocation FortniteAIServer.Default__FortQueryContext_AIPawnSpawnLocation
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryContext_AIPawnSpawnLocation* UFortQueryContext_AIPawnSpawnLocation::GetDefaultObj()
{
	static class UFortQueryContext_AIPawnSpawnLocation* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryContext_AIPawnSpawnLocation*>(UFortQueryContext_AIPawnSpawnLocation::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryContext_AllBots
// (None)

class UClass* UFortQueryContext_AllBots::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryContext_AllBots");

	return Clss;
}


// FortQueryContext_AllBots FortniteAIServer.Default__FortQueryContext_AllBots
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryContext_AllBots* UFortQueryContext_AllBots::GetDefaultObj()
{
	static class UFortQueryContext_AllBots* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryContext_AllBots*>(UFortQueryContext_AllBots::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryContext_AllEnemies
// (None)

class UClass* UFortQueryContext_AllEnemies::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryContext_AllEnemies");

	return Clss;
}


// FortQueryContext_AllEnemies FortniteAIServer.Default__FortQueryContext_AllEnemies
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryContext_AllEnemies* UFortQueryContext_AllEnemies::GetDefaultObj()
{
	static class UFortQueryContext_AllEnemies* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryContext_AllEnemies*>(UFortQueryContext_AllEnemies::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryContext_AllGoals
// (None)

class UClass* UFortQueryContext_AllGoals::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryContext_AllGoals");

	return Clss;
}


// FortQueryContext_AllGoals FortniteAIServer.Default__FortQueryContext_AllGoals
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryContext_AllGoals* UFortQueryContext_AllGoals::GetDefaultObj()
{
	static class UFortQueryContext_AllGoals* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryContext_AllGoals*>(UFortQueryContext_AllGoals::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryContext_AllPlayers
// (None)

class UClass* UFortQueryContext_AllPlayers::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryContext_AllPlayers");

	return Clss;
}


// FortQueryContext_AllPlayers FortniteAIServer.Default__FortQueryContext_AllPlayers
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryContext_AllPlayers* UFortQueryContext_AllPlayers::GetDefaultObj()
{
	static class UFortQueryContext_AllPlayers* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryContext_AllPlayers*>(UFortQueryContext_AllPlayers::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryContext_AllPOIVolumes
// (None)

class UClass* UFortQueryContext_AllPOIVolumes::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryContext_AllPOIVolumes");

	return Clss;
}


// FortQueryContext_AllPOIVolumes FortniteAIServer.Default__FortQueryContext_AllPOIVolumes
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryContext_AllPOIVolumes* UFortQueryContext_AllPOIVolumes::GetDefaultObj()
{
	static class UFortQueryContext_AllPOIVolumes* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryContext_AllPOIVolumes*>(UFortQueryContext_AllPOIVolumes::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryContext_AthenaCurrentSafeZoneCenter
// (None)

class UClass* UFortQueryContext_AthenaCurrentSafeZoneCenter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryContext_AthenaCurrentSafeZoneCenter");

	return Clss;
}


// FortQueryContext_AthenaCurrentSafeZoneCenter FortniteAIServer.Default__FortQueryContext_AthenaCurrentSafeZoneCenter
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryContext_AthenaCurrentSafeZoneCenter* UFortQueryContext_AthenaCurrentSafeZoneCenter::GetDefaultObj()
{
	static class UFortQueryContext_AthenaCurrentSafeZoneCenter* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryContext_AthenaCurrentSafeZoneCenter*>(UFortQueryContext_AthenaCurrentSafeZoneCenter::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryContext_AthenaCurrentSafeZoneIndicatorCenter
// (None)

class UClass* UFortQueryContext_AthenaCurrentSafeZoneIndicatorCenter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryContext_AthenaCurrentSafeZoneIndicatorCenter");

	return Clss;
}


// FortQueryContext_AthenaCurrentSafeZoneIndicatorCenter FortniteAIServer.Default__FortQueryContext_AthenaCurrentSafeZoneIndicatorCenter
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryContext_AthenaCurrentSafeZoneIndicatorCenter* UFortQueryContext_AthenaCurrentSafeZoneIndicatorCenter::GetDefaultObj()
{
	static class UFortQueryContext_AthenaCurrentSafeZoneIndicatorCenter* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryContext_AthenaCurrentSafeZoneIndicatorCenter*>(UFortQueryContext_AthenaCurrentSafeZoneIndicatorCenter::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryContext_AthenaSafeZonePredictedLocation
// (None)

class UClass* UFortQueryContext_AthenaSafeZonePredictedLocation::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryContext_AthenaSafeZonePredictedLocation");

	return Clss;
}


// FortQueryContext_AthenaSafeZonePredictedLocation FortniteAIServer.Default__FortQueryContext_AthenaSafeZonePredictedLocation
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryContext_AthenaSafeZonePredictedLocation* UFortQueryContext_AthenaSafeZonePredictedLocation::GetDefaultObj()
{
	static class UFortQueryContext_AthenaSafeZonePredictedLocation* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryContext_AthenaSafeZonePredictedLocation*>(UFortQueryContext_AthenaSafeZonePredictedLocation::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryContext_BlackboardKeyLeader
// (None)

class UClass* UFortQueryContext_BlackboardKeyLeader::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryContext_BlackboardKeyLeader");

	return Clss;
}


// FortQueryContext_BlackboardKeyLeader FortniteAIServer.Default__FortQueryContext_BlackboardKeyLeader
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryContext_BlackboardKeyLeader* UFortQueryContext_BlackboardKeyLeader::GetDefaultObj()
{
	static class UFortQueryContext_BlackboardKeyLeader* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryContext_BlackboardKeyLeader*>(UFortQueryContext_BlackboardKeyLeader::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryContext_BuildingRifts
// (None)

class UClass* UFortQueryContext_BuildingRifts::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryContext_BuildingRifts");

	return Clss;
}


// FortQueryContext_BuildingRifts FortniteAIServer.Default__FortQueryContext_BuildingRifts
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryContext_BuildingRifts* UFortQueryContext_BuildingRifts::GetDefaultObj()
{
	static class UFortQueryContext_BuildingRifts* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryContext_BuildingRifts*>(UFortQueryContext_BuildingRifts::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryContext_EncounterFallbackTarget
// (None)

class UClass* UFortQueryContext_EncounterFallbackTarget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryContext_EncounterFallbackTarget");

	return Clss;
}


// FortQueryContext_EncounterFallbackTarget FortniteAIServer.Default__FortQueryContext_EncounterFallbackTarget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryContext_EncounterFallbackTarget* UFortQueryContext_EncounterFallbackTarget::GetDefaultObj()
{
	static class UFortQueryContext_EncounterFallbackTarget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryContext_EncounterFallbackTarget*>(UFortQueryContext_EncounterFallbackTarget::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryContext_EncounterGoalsCenterLocation
// (None)

class UClass* UFortQueryContext_EncounterGoalsCenterLocation::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryContext_EncounterGoalsCenterLocation");

	return Clss;
}


// FortQueryContext_EncounterGoalsCenterLocation FortniteAIServer.Default__FortQueryContext_EncounterGoalsCenterLocation
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryContext_EncounterGoalsCenterLocation* UFortQueryContext_EncounterGoalsCenterLocation::GetDefaultObj()
{
	static class UFortQueryContext_EncounterGoalsCenterLocation* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryContext_EncounterGoalsCenterLocation*>(UFortQueryContext_EncounterGoalsCenterLocation::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryContext_EncounterGoalsOnGround
// (None)

class UClass* UFortQueryContext_EncounterGoalsOnGround::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryContext_EncounterGoalsOnGround");

	return Clss;
}


// FortQueryContext_EncounterGoalsOnGround FortniteAIServer.Default__FortQueryContext_EncounterGoalsOnGround
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryContext_EncounterGoalsOnGround* UFortQueryContext_EncounterGoalsOnGround::GetDefaultObj()
{
	static class UFortQueryContext_EncounterGoalsOnGround* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryContext_EncounterGoalsOnGround*>(UFortQueryContext_EncounterGoalsOnGround::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryContext_EncounterPrimaryAssignmentGoals
// (None)

class UClass* UFortQueryContext_EncounterPrimaryAssignmentGoals::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryContext_EncounterPrimaryAssignmentGoals");

	return Clss;
}


// FortQueryContext_EncounterPrimaryAssignmentGoals FortniteAIServer.Default__FortQueryContext_EncounterPrimaryAssignmentGoals
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryContext_EncounterPrimaryAssignmentGoals* UFortQueryContext_EncounterPrimaryAssignmentGoals::GetDefaultObj()
{
	static class UFortQueryContext_EncounterPrimaryAssignmentGoals* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryContext_EncounterPrimaryAssignmentGoals*>(UFortQueryContext_EncounterPrimaryAssignmentGoals::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryContext_EncounterProvidedQueryLocations
// (None)

class UClass* UFortQueryContext_EncounterProvidedQueryLocations::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryContext_EncounterProvidedQueryLocations");

	return Clss;
}


// FortQueryContext_EncounterProvidedQueryLocations FortniteAIServer.Default__FortQueryContext_EncounterProvidedQueryLocations
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryContext_EncounterProvidedQueryLocations* UFortQueryContext_EncounterProvidedQueryLocations::GetDefaultObj()
{
	static class UFortQueryContext_EncounterProvidedQueryLocations* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryContext_EncounterProvidedQueryLocations*>(UFortQueryContext_EncounterProvidedQueryLocations::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryContext_EncounterQueryActor
// (None)

class UClass* UFortQueryContext_EncounterQueryActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryContext_EncounterQueryActor");

	return Clss;
}


// FortQueryContext_EncounterQueryActor FortniteAIServer.Default__FortQueryContext_EncounterQueryActor
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryContext_EncounterQueryActor* UFortQueryContext_EncounterQueryActor::GetDefaultObj()
{
	static class UFortQueryContext_EncounterQueryActor* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryContext_EncounterQueryActor*>(UFortQueryContext_EncounterQueryActor::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryContext_EncounterRandomDirection
// (None)

class UClass* UFortQueryContext_EncounterRandomDirection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryContext_EncounterRandomDirection");

	return Clss;
}


// FortQueryContext_EncounterRandomDirection FortniteAIServer.Default__FortQueryContext_EncounterRandomDirection
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryContext_EncounterRandomDirection* UFortQueryContext_EncounterRandomDirection::GetDefaultObj()
{
	static class UFortQueryContext_EncounterRandomDirection* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryContext_EncounterRandomDirection*>(UFortQueryContext_EncounterRandomDirection::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryContext_EncounterTargetObjective
// (None)

class UClass* UFortQueryContext_EncounterTargetObjective::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryContext_EncounterTargetObjective");

	return Clss;
}


// FortQueryContext_EncounterTargetObjective FortniteAIServer.Default__FortQueryContext_EncounterTargetObjective
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryContext_EncounterTargetObjective* UFortQueryContext_EncounterTargetObjective::GetDefaultObj()
{
	static class UFortQueryContext_EncounterTargetObjective* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryContext_EncounterTargetObjective*>(UFortQueryContext_EncounterTargetObjective::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryContext_Goal
// (None)

class UClass* UFortQueryContext_Goal::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryContext_Goal");

	return Clss;
}


// FortQueryContext_Goal FortniteAIServer.Default__FortQueryContext_Goal
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryContext_Goal* UFortQueryContext_Goal::GetDefaultObj()
{
	static class UFortQueryContext_Goal* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryContext_Goal*>(UFortQueryContext_Goal::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryContext_GoalProviderRootAssignmentGoals
// (None)

class UClass* UFortQueryContext_GoalProviderRootAssignmentGoals::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryContext_GoalProviderRootAssignmentGoals");

	return Clss;
}


// FortQueryContext_GoalProviderRootAssignmentGoals FortniteAIServer.Default__FortQueryContext_GoalProviderRootAssignmentGoals
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryContext_GoalProviderRootAssignmentGoals* UFortQueryContext_GoalProviderRootAssignmentGoals::GetDefaultObj()
{
	static class UFortQueryContext_GoalProviderRootAssignmentGoals* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryContext_GoalProviderRootAssignmentGoals*>(UFortQueryContext_GoalProviderRootAssignmentGoals::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryContext_Goal_SpawnLocation
// (None)

class UClass* UFortQueryContext_Goal_SpawnLocation::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryContext_Goal_SpawnLocation");

	return Clss;
}


// FortQueryContext_Goal_SpawnLocation FortniteAIServer.Default__FortQueryContext_Goal_SpawnLocation
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryContext_Goal_SpawnLocation* UFortQueryContext_Goal_SpawnLocation::GetDefaultObj()
{
	static class UFortQueryContext_Goal_SpawnLocation* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryContext_Goal_SpawnLocation*>(UFortQueryContext_Goal_SpawnLocation::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryContext_NearbyAIPawns
// (None)

class UClass* UFortQueryContext_NearbyAIPawns::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryContext_NearbyAIPawns");

	return Clss;
}


// FortQueryContext_NearbyAIPawns FortniteAIServer.Default__FortQueryContext_NearbyAIPawns
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryContext_NearbyAIPawns* UFortQueryContext_NearbyAIPawns::GetDefaultObj()
{
	static class UFortQueryContext_NearbyAIPawns* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryContext_NearbyAIPawns*>(UFortQueryContext_NearbyAIPawns::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryContext_NearbyAIPawnsMoveDestinations
// (None)

class UClass* UFortQueryContext_NearbyAIPawnsMoveDestinations::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryContext_NearbyAIPawnsMoveDestinations");

	return Clss;
}


// FortQueryContext_NearbyAIPawnsMoveDestinations FortniteAIServer.Default__FortQueryContext_NearbyAIPawnsMoveDestinations
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryContext_NearbyAIPawnsMoveDestinations* UFortQueryContext_NearbyAIPawnsMoveDestinations::GetDefaultObj()
{
	static class UFortQueryContext_NearbyAIPawnsMoveDestinations* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryContext_NearbyAIPawnsMoveDestinations*>(UFortQueryContext_NearbyAIPawnsMoveDestinations::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryContext_NearbyFriendlyAIPawns
// (None)

class UClass* UFortQueryContext_NearbyFriendlyAIPawns::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryContext_NearbyFriendlyAIPawns");

	return Clss;
}


// FortQueryContext_NearbyFriendlyAIPawns FortniteAIServer.Default__FortQueryContext_NearbyFriendlyAIPawns
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryContext_NearbyFriendlyAIPawns* UFortQueryContext_NearbyFriendlyAIPawns::GetDefaultObj()
{
	static class UFortQueryContext_NearbyFriendlyAIPawns* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryContext_NearbyFriendlyAIPawns*>(UFortQueryContext_NearbyFriendlyAIPawns::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryContext_NearbyFriendlyAIPawnsAndPlayerPawns
// (None)

class UClass* UFortQueryContext_NearbyFriendlyAIPawnsAndPlayerPawns::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryContext_NearbyFriendlyAIPawnsAndPlayerPawns");

	return Clss;
}


// FortQueryContext_NearbyFriendlyAIPawnsAndPlayerPawns FortniteAIServer.Default__FortQueryContext_NearbyFriendlyAIPawnsAndPlayerPawns
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryContext_NearbyFriendlyAIPawnsAndPlayerPawns* UFortQueryContext_NearbyFriendlyAIPawnsAndPlayerPawns::GetDefaultObj()
{
	static class UFortQueryContext_NearbyFriendlyAIPawnsAndPlayerPawns* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryContext_NearbyFriendlyAIPawnsAndPlayerPawns*>(UFortQueryContext_NearbyFriendlyAIPawnsAndPlayerPawns::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryContext_NearbyFriends
// (None)

class UClass* UFortQueryContext_NearbyFriends::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryContext_NearbyFriends");

	return Clss;
}


// FortQueryContext_NearbyFriends FortniteAIServer.Default__FortQueryContext_NearbyFriends
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryContext_NearbyFriends* UFortQueryContext_NearbyFriends::GetDefaultObj()
{
	static class UFortQueryContext_NearbyFriends* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryContext_NearbyFriends*>(UFortQueryContext_NearbyFriends::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryContext_RandomDirectionXY
// (None)

class UClass* UFortQueryContext_RandomDirectionXY::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryContext_RandomDirectionXY");

	return Clss;
}


// FortQueryContext_RandomDirectionXY FortniteAIServer.Default__FortQueryContext_RandomDirectionXY
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryContext_RandomDirectionXY* UFortQueryContext_RandomDirectionXY::GetDefaultObj()
{
	static class UFortQueryContext_RandomDirectionXY* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryContext_RandomDirectionXY*>(UFortQueryContext_RandomDirectionXY::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryContext_SpawnSpotActorLocationOrAIPawnSpawnLocation
// (None)

class UClass* UFortQueryContext_SpawnSpotActorLocationOrAIPawnSpawnLocation::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryContext_SpawnSpotActorLocationOrAIPawnSpawnLocation");

	return Clss;
}


// FortQueryContext_SpawnSpotActorLocationOrAIPawnSpawnLocation FortniteAIServer.Default__FortQueryContext_SpawnSpotActorLocationOrAIPawnSpawnLocation
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryContext_SpawnSpotActorLocationOrAIPawnSpawnLocation* UFortQueryContext_SpawnSpotActorLocationOrAIPawnSpawnLocation::GetDefaultObj()
{
	static class UFortQueryContext_SpawnSpotActorLocationOrAIPawnSpawnLocation* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryContext_SpawnSpotActorLocationOrAIPawnSpawnLocation*>(UFortQueryContext_SpawnSpotActorLocationOrAIPawnSpawnLocation::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryContext_StWStormShield
// (None)

class UClass* UFortQueryContext_StWStormShield::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryContext_StWStormShield");

	return Clss;
}


// FortQueryContext_StWStormShield FortniteAIServer.Default__FortQueryContext_StWStormShield
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryContext_StWStormShield* UFortQueryContext_StWStormShield::GetDefaultObj()
{
	static class UFortQueryContext_StWStormShield* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryContext_StWStormShield*>(UFortQueryContext_StWStormShield::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryContext_TwoPointSolverPointA
// (None)

class UClass* UFortQueryContext_TwoPointSolverPointA::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryContext_TwoPointSolverPointA");

	return Clss;
}


// FortQueryContext_TwoPointSolverPointA FortniteAIServer.Default__FortQueryContext_TwoPointSolverPointA
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryContext_TwoPointSolverPointA* UFortQueryContext_TwoPointSolverPointA::GetDefaultObj()
{
	static class UFortQueryContext_TwoPointSolverPointA* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryContext_TwoPointSolverPointA*>(UFortQueryContext_TwoPointSolverPointA::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryContext_TwoPointSolverRotationA
// (None)

class UClass* UFortQueryContext_TwoPointSolverRotationA::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryContext_TwoPointSolverRotationA");

	return Clss;
}


// FortQueryContext_TwoPointSolverRotationA FortniteAIServer.Default__FortQueryContext_TwoPointSolverRotationA
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryContext_TwoPointSolverRotationA* UFortQueryContext_TwoPointSolverRotationA::GetDefaultObj()
{
	static class UFortQueryContext_TwoPointSolverRotationA* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryContext_TwoPointSolverRotationA*>(UFortQueryContext_TwoPointSolverRotationA::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryData_CurvesAroundLine
// (None)

class UClass* UFortQueryData_CurvesAroundLine::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryData_CurvesAroundLine");

	return Clss;
}


// FortQueryData_CurvesAroundLine FortniteAIServer.Default__FortQueryData_CurvesAroundLine
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryData_CurvesAroundLine* UFortQueryData_CurvesAroundLine::GetDefaultObj()
{
	static class UFortQueryData_CurvesAroundLine* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryData_CurvesAroundLine*>(UFortQueryData_CurvesAroundLine::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryGenerator_ActorsAround
// (None)

class UClass* UFortQueryGenerator_ActorsAround::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryGenerator_ActorsAround");

	return Clss;
}


// FortQueryGenerator_ActorsAround FortniteAIServer.Default__FortQueryGenerator_ActorsAround
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryGenerator_ActorsAround* UFortQueryGenerator_ActorsAround::GetDefaultObj()
{
	static class UFortQueryGenerator_ActorsAround* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryGenerator_ActorsAround*>(UFortQueryGenerator_ActorsAround::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryGenerator_Allies
// (None)

class UClass* UFortQueryGenerator_Allies::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryGenerator_Allies");

	return Clss;
}


// FortQueryGenerator_Allies FortniteAIServer.Default__FortQueryGenerator_Allies
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryGenerator_Allies* UFortQueryGenerator_Allies::GetDefaultObj()
{
	static class UFortQueryGenerator_Allies* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryGenerator_Allies*>(UFortQueryGenerator_Allies::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryGenerator_AssignmentGoal
// (None)

class UClass* UFortQueryGenerator_AssignmentGoal::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryGenerator_AssignmentGoal");

	return Clss;
}


// FortQueryGenerator_AssignmentGoal FortniteAIServer.Default__FortQueryGenerator_AssignmentGoal
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryGenerator_AssignmentGoal* UFortQueryGenerator_AssignmentGoal::GetDefaultObj()
{
	static class UFortQueryGenerator_AssignmentGoal* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryGenerator_AssignmentGoal*>(UFortQueryGenerator_AssignmentGoal::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryGenerator_BuildingRifts
// (None)

class UClass* UFortQueryGenerator_BuildingRifts::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryGenerator_BuildingRifts");

	return Clss;
}


// FortQueryGenerator_BuildingRifts FortniteAIServer.Default__FortQueryGenerator_BuildingRifts
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryGenerator_BuildingRifts* UFortQueryGenerator_BuildingRifts::GetDefaultObj()
{
	static class UFortQueryGenerator_BuildingRifts* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryGenerator_BuildingRifts*>(UFortQueryGenerator_BuildingRifts::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryGenerator_Buildings
// (None)

class UClass* UFortQueryGenerator_Buildings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryGenerator_Buildings");

	return Clss;
}


// FortQueryGenerator_Buildings FortniteAIServer.Default__FortQueryGenerator_Buildings
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryGenerator_Buildings* UFortQueryGenerator_Buildings::GetDefaultObj()
{
	static class UFortQueryGenerator_Buildings* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryGenerator_Buildings*>(UFortQueryGenerator_Buildings::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryGenerator_BuildingsOnCachedPath
// (None)

class UClass* UFortQueryGenerator_BuildingsOnCachedPath::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryGenerator_BuildingsOnCachedPath");

	return Clss;
}


// FortQueryGenerator_BuildingsOnCachedPath FortniteAIServer.Default__FortQueryGenerator_BuildingsOnCachedPath
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryGenerator_BuildingsOnCachedPath* UFortQueryGenerator_BuildingsOnCachedPath::GetDefaultObj()
{
	static class UFortQueryGenerator_BuildingsOnCachedPath* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryGenerator_BuildingsOnCachedPath*>(UFortQueryGenerator_BuildingsOnCachedPath::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryGenerator_EncounterTargets
// (None)

class UClass* UFortQueryGenerator_EncounterTargets::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryGenerator_EncounterTargets");

	return Clss;
}


// FortQueryGenerator_EncounterTargets FortniteAIServer.Default__FortQueryGenerator_EncounterTargets
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryGenerator_EncounterTargets* UFortQueryGenerator_EncounterTargets::GetDefaultObj()
{
	static class UFortQueryGenerator_EncounterTargets* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryGenerator_EncounterTargets*>(UFortQueryGenerator_EncounterTargets::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryGenerator_Enemies
// (None)

class UClass* UFortQueryGenerator_Enemies::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryGenerator_Enemies");

	return Clss;
}


// FortQueryGenerator_Enemies FortniteAIServer.Default__FortQueryGenerator_Enemies
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryGenerator_Enemies* UFortQueryGenerator_Enemies::GetDefaultObj()
{
	static class UFortQueryGenerator_Enemies* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryGenerator_Enemies*>(UFortQueryGenerator_Enemies::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryGenerator_GoalActorsOfClass
// (None)

class UClass* UFortQueryGenerator_GoalActorsOfClass::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryGenerator_GoalActorsOfClass");

	return Clss;
}


// FortQueryGenerator_GoalActorsOfClass FortniteAIServer.Default__FortQueryGenerator_GoalActorsOfClass
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryGenerator_GoalActorsOfClass* UFortQueryGenerator_GoalActorsOfClass::GetDefaultObj()
{
	static class UFortQueryGenerator_GoalActorsOfClass* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryGenerator_GoalActorsOfClass*>(UFortQueryGenerator_GoalActorsOfClass::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryGenerator_GoalOnCircle
// (None)

class UClass* UFortQueryGenerator_GoalOnCircle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryGenerator_GoalOnCircle");

	return Clss;
}


// FortQueryGenerator_GoalOnCircle FortniteAIServer.Default__FortQueryGenerator_GoalOnCircle
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryGenerator_GoalOnCircle* UFortQueryGenerator_GoalOnCircle::GetDefaultObj()
{
	static class UFortQueryGenerator_GoalOnCircle* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryGenerator_GoalOnCircle*>(UFortQueryGenerator_GoalOnCircle::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryGenerator_GoalPlayerPawns
// (None)

class UClass* UFortQueryGenerator_GoalPlayerPawns::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryGenerator_GoalPlayerPawns");

	return Clss;
}


// FortQueryGenerator_GoalPlayerPawns FortniteAIServer.Default__FortQueryGenerator_GoalPlayerPawns
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryGenerator_GoalPlayerPawns* UFortQueryGenerator_GoalPlayerPawns::GetDefaultObj()
{
	static class UFortQueryGenerator_GoalPlayerPawns* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryGenerator_GoalPlayerPawns*>(UFortQueryGenerator_GoalPlayerPawns::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryGenerator_GoalTrackableAIObjects
// (None)

class UClass* UFortQueryGenerator_GoalTrackableAIObjects::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryGenerator_GoalTrackableAIObjects");

	return Clss;
}


// FortQueryGenerator_GoalTrackableAIObjects FortniteAIServer.Default__FortQueryGenerator_GoalTrackableAIObjects
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryGenerator_GoalTrackableAIObjects* UFortQueryGenerator_GoalTrackableAIObjects::GetDefaultObj()
{
	static class UFortQueryGenerator_GoalTrackableAIObjects* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryGenerator_GoalTrackableAIObjects*>(UFortQueryGenerator_GoalTrackableAIObjects::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryGenerator_HotspotSlots
// (None)

class UClass* UFortQueryGenerator_HotspotSlots::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryGenerator_HotspotSlots");

	return Clss;
}


// FortQueryGenerator_HotspotSlots FortniteAIServer.Default__FortQueryGenerator_HotspotSlots
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryGenerator_HotspotSlots* UFortQueryGenerator_HotspotSlots::GetDefaultObj()
{
	static class UFortQueryGenerator_HotspotSlots* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryGenerator_HotspotSlots*>(UFortQueryGenerator_HotspotSlots::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryGenerator_InfluenceMapPoints
// (None)

class UClass* UFortQueryGenerator_InfluenceMapPoints::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryGenerator_InfluenceMapPoints");

	return Clss;
}


// FortQueryGenerator_InfluenceMapPoints FortniteAIServer.Default__FortQueryGenerator_InfluenceMapPoints
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryGenerator_InfluenceMapPoints* UFortQueryGenerator_InfluenceMapPoints::GetDefaultObj()
{
	static class UFortQueryGenerator_InfluenceMapPoints* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryGenerator_InfluenceMapPoints*>(UFortQueryGenerator_InfluenceMapPoints::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryGenerator_LootGoalsAthena
// (None)

class UClass* UFortQueryGenerator_LootGoalsAthena::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryGenerator_LootGoalsAthena");

	return Clss;
}


// FortQueryGenerator_LootGoalsAthena FortniteAIServer.Default__FortQueryGenerator_LootGoalsAthena
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryGenerator_LootGoalsAthena* UFortQueryGenerator_LootGoalsAthena::GetDefaultObj()
{
	static class UFortQueryGenerator_LootGoalsAthena* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryGenerator_LootGoalsAthena*>(UFortQueryGenerator_LootGoalsAthena::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryGenerator_MissionPlacementActors
// (None)

class UClass* UFortQueryGenerator_MissionPlacementActors::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryGenerator_MissionPlacementActors");

	return Clss;
}


// FortQueryGenerator_MissionPlacementActors FortniteAIServer.Default__FortQueryGenerator_MissionPlacementActors
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryGenerator_MissionPlacementActors* UFortQueryGenerator_MissionPlacementActors::GetDefaultObj()
{
	static class UFortQueryGenerator_MissionPlacementActors* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryGenerator_MissionPlacementActors*>(UFortQueryGenerator_MissionPlacementActors::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryGenerator_MutatorActorQueryResults
// (None)

class UClass* UFortQueryGenerator_MutatorActorQueryResults::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryGenerator_MutatorActorQueryResults");

	return Clss;
}


// FortQueryGenerator_MutatorActorQueryResults FortniteAIServer.Default__FortQueryGenerator_MutatorActorQueryResults
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryGenerator_MutatorActorQueryResults* UFortQueryGenerator_MutatorActorQueryResults::GetDefaultObj()
{
	static class UFortQueryGenerator_MutatorActorQueryResults* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryGenerator_MutatorActorQueryResults*>(UFortQueryGenerator_MutatorActorQueryResults::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryGenerator_MutatorBaseQueryResults
// (None)

class UClass* UFortQueryGenerator_MutatorBaseQueryResults::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryGenerator_MutatorBaseQueryResults");

	return Clss;
}


// FortQueryGenerator_MutatorBaseQueryResults FortniteAIServer.Default__FortQueryGenerator_MutatorBaseQueryResults
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryGenerator_MutatorBaseQueryResults* UFortQueryGenerator_MutatorBaseQueryResults::GetDefaultObj()
{
	static class UFortQueryGenerator_MutatorBaseQueryResults* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryGenerator_MutatorBaseQueryResults*>(UFortQueryGenerator_MutatorBaseQueryResults::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryGenerator_PerceivedActors
// (None)

class UClass* UFortQueryGenerator_PerceivedActors::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryGenerator_PerceivedActors");

	return Clss;
}


// FortQueryGenerator_PerceivedActors FortniteAIServer.Default__FortQueryGenerator_PerceivedActors
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryGenerator_PerceivedActors* UFortQueryGenerator_PerceivedActors::GetDefaultObj()
{
	static class UFortQueryGenerator_PerceivedActors* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryGenerator_PerceivedActors*>(UFortQueryGenerator_PerceivedActors::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryGenerator_PointsAroundLine
// (None)

class UClass* UFortQueryGenerator_PointsAroundLine::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryGenerator_PointsAroundLine");

	return Clss;
}


// FortQueryGenerator_PointsAroundLine FortniteAIServer.Default__FortQueryGenerator_PointsAroundLine
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryGenerator_PointsAroundLine* UFortQueryGenerator_PointsAroundLine::GetDefaultObj()
{
	static class UFortQueryGenerator_PointsAroundLine* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryGenerator_PointsAroundLine*>(UFortQueryGenerator_PointsAroundLine::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryGenerator_PointsFromNavGraph
// (None)

class UClass* UFortQueryGenerator_PointsFromNavGraph::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryGenerator_PointsFromNavGraph");

	return Clss;
}


// FortQueryGenerator_PointsFromNavGraph FortniteAIServer.Default__FortQueryGenerator_PointsFromNavGraph
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryGenerator_PointsFromNavGraph* UFortQueryGenerator_PointsFromNavGraph::GetDefaultObj()
{
	static class UFortQueryGenerator_PointsFromNavGraph* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryGenerator_PointsFromNavGraph*>(UFortQueryGenerator_PointsFromNavGraph::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryGenerator_PointsInVolume
// (None)

class UClass* UFortQueryGenerator_PointsInVolume::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryGenerator_PointsInVolume");

	return Clss;
}


// FortQueryGenerator_PointsInVolume FortniteAIServer.Default__FortQueryGenerator_PointsInVolume
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryGenerator_PointsInVolume* UFortQueryGenerator_PointsInVolume::GetDefaultObj()
{
	static class UFortQueryGenerator_PointsInVolume* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryGenerator_PointsInVolume*>(UFortQueryGenerator_PointsInVolume::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryGenerator_PointsOnBuildingActors
// (None)

class UClass* UFortQueryGenerator_PointsOnBuildingActors::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryGenerator_PointsOnBuildingActors");

	return Clss;
}


// FortQueryGenerator_PointsOnBuildingActors FortniteAIServer.Default__FortQueryGenerator_PointsOnBuildingActors
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryGenerator_PointsOnBuildingActors* UFortQueryGenerator_PointsOnBuildingActors::GetDefaultObj()
{
	static class UFortQueryGenerator_PointsOnBuildingActors* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryGenerator_PointsOnBuildingActors*>(UFortQueryGenerator_PointsOnBuildingActors::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryGenerator_PointsOnBuildingGrid
// (None)

class UClass* UFortQueryGenerator_PointsOnBuildingGrid::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryGenerator_PointsOnBuildingGrid");

	return Clss;
}


// FortQueryGenerator_PointsOnBuildingGrid FortniteAIServer.Default__FortQueryGenerator_PointsOnBuildingGrid
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryGenerator_PointsOnBuildingGrid* UFortQueryGenerator_PointsOnBuildingGrid::GetDefaultObj()
{
	static class UFortQueryGenerator_PointsOnBuildingGrid* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryGenerator_PointsOnBuildingGrid*>(UFortQueryGenerator_PointsOnBuildingGrid::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryGenerator_PointsOnWaterShoreLine
// (None)

class UClass* UFortQueryGenerator_PointsOnWaterShoreLine::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryGenerator_PointsOnWaterShoreLine");

	return Clss;
}


// FortQueryGenerator_PointsOnWaterShoreLine FortniteAIServer.Default__FortQueryGenerator_PointsOnWaterShoreLine
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryGenerator_PointsOnWaterShoreLine* UFortQueryGenerator_PointsOnWaterShoreLine::GetDefaultObj()
{
	static class UFortQueryGenerator_PointsOnWaterShoreLine* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryGenerator_PointsOnWaterShoreLine*>(UFortQueryGenerator_PointsOnWaterShoreLine::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryGenerator_RandomPointsInBoundingVolume
// (None)

class UClass* UFortQueryGenerator_RandomPointsInBoundingVolume::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryGenerator_RandomPointsInBoundingVolume");

	return Clss;
}


// FortQueryGenerator_RandomPointsInBoundingVolume FortniteAIServer.Default__FortQueryGenerator_RandomPointsInBoundingVolume
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryGenerator_RandomPointsInBoundingVolume* UFortQueryGenerator_RandomPointsInBoundingVolume::GetDefaultObj()
{
	static class UFortQueryGenerator_RandomPointsInBoundingVolume* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryGenerator_RandomPointsInBoundingVolume*>(UFortQueryGenerator_RandomPointsInBoundingVolume::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryGenerator_SpecificAssignmentGoals
// (None)

class UClass* UFortQueryGenerator_SpecificAssignmentGoals::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryGenerator_SpecificAssignmentGoals");

	return Clss;
}


// FortQueryGenerator_SpecificAssignmentGoals FortniteAIServer.Default__FortQueryGenerator_SpecificAssignmentGoals
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryGenerator_SpecificAssignmentGoals* UFortQueryGenerator_SpecificAssignmentGoals::GetDefaultObj()
{
	static class UFortQueryGenerator_SpecificAssignmentGoals* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryGenerator_SpecificAssignmentGoals*>(UFortQueryGenerator_SpecificAssignmentGoals::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryGenerator_SquadMembers
// (None)

class UClass* UFortQueryGenerator_SquadMembers::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryGenerator_SquadMembers");

	return Clss;
}


// FortQueryGenerator_SquadMembers FortniteAIServer.Default__FortQueryGenerator_SquadMembers
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryGenerator_SquadMembers* UFortQueryGenerator_SquadMembers::GetDefaultObj()
{
	static class UFortQueryGenerator_SquadMembers* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryGenerator_SquadMembers*>(UFortQueryGenerator_SquadMembers::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryGenerator_TerrainDonut
// (None)

class UClass* UFortQueryGenerator_TerrainDonut::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryGenerator_TerrainDonut");

	return Clss;
}


// FortQueryGenerator_TerrainDonut FortniteAIServer.Default__FortQueryGenerator_TerrainDonut
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryGenerator_TerrainDonut* UFortQueryGenerator_TerrainDonut::GetDefaultObj()
{
	static class UFortQueryGenerator_TerrainDonut* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryGenerator_TerrainDonut*>(UFortQueryGenerator_TerrainDonut::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryGenerator_ValidSpawnRiftActors
// (None)

class UClass* UFortQueryGenerator_ValidSpawnRiftActors::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryGenerator_ValidSpawnRiftActors");

	return Clss;
}


// FortQueryGenerator_ValidSpawnRiftActors FortniteAIServer.Default__FortQueryGenerator_ValidSpawnRiftActors
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryGenerator_ValidSpawnRiftActors* UFortQueryGenerator_ValidSpawnRiftActors::GetDefaultObj()
{
	static class UFortQueryGenerator_ValidSpawnRiftActors* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryGenerator_ValidSpawnRiftActors*>(UFortQueryGenerator_ValidSpawnRiftActors::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryItemType_PointOrSlot
// (None)

class UClass* UFortQueryItemType_PointOrSlot::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryItemType_PointOrSlot");

	return Clss;
}


// FortQueryItemType_PointOrSlot FortniteAIServer.Default__FortQueryItemType_PointOrSlot
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryItemType_PointOrSlot* UFortQueryItemType_PointOrSlot::GetDefaultObj()
{
	static class UFortQueryItemType_PointOrSlot* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryItemType_PointOrSlot*>(UFortQueryItemType_PointOrSlot::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryTest_GoalBase
// (None)

class UClass* UFortQueryTest_GoalBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryTest_GoalBase");

	return Clss;
}


// FortQueryTest_GoalBase FortniteAIServer.Default__FortQueryTest_GoalBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryTest_GoalBase* UFortQueryTest_GoalBase::GetDefaultObj()
{
	static class UFortQueryTest_GoalBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryTest_GoalBase*>(UFortQueryTest_GoalBase::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryTest_AssignmentTypeInterest
// (None)

class UClass* UFortQueryTest_AssignmentTypeInterest::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryTest_AssignmentTypeInterest");

	return Clss;
}


// FortQueryTest_AssignmentTypeInterest FortniteAIServer.Default__FortQueryTest_AssignmentTypeInterest
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryTest_AssignmentTypeInterest* UFortQueryTest_AssignmentTypeInterest::GetDefaultObj()
{
	static class UFortQueryTest_AssignmentTypeInterest* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryTest_AssignmentTypeInterest*>(UFortQueryTest_AssignmentTypeInterest::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryTest_BuildingCriteria
// (None)

class UClass* UFortQueryTest_BuildingCriteria::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryTest_BuildingCriteria");

	return Clss;
}


// FortQueryTest_BuildingCriteria FortniteAIServer.Default__FortQueryTest_BuildingCriteria
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryTest_BuildingCriteria* UFortQueryTest_BuildingCriteria::GetDefaultObj()
{
	static class UFortQueryTest_BuildingCriteria* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryTest_BuildingCriteria*>(UFortQueryTest_BuildingCriteria::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryTest_CanAttackTarget
// (None)

class UClass* UFortQueryTest_CanAttackTarget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryTest_CanAttackTarget");

	return Clss;
}


// FortQueryTest_CanAttackTarget FortniteAIServer.Default__FortQueryTest_CanAttackTarget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryTest_CanAttackTarget* UFortQueryTest_CanAttackTarget::GetDefaultObj()
{
	static class UFortQueryTest_CanAttackTarget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryTest_CanAttackTarget*>(UFortQueryTest_CanAttackTarget::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryTest_CanBeDamaged
// (None)

class UClass* UFortQueryTest_CanBeDamaged::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryTest_CanBeDamaged");

	return Clss;
}


// FortQueryTest_CanBeDamaged FortniteAIServer.Default__FortQueryTest_CanBeDamaged
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryTest_CanBeDamaged* UFortQueryTest_CanBeDamaged::GetDefaultObj()
{
	static class UFortQueryTest_CanBeDamaged* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryTest_CanBeDamaged*>(UFortQueryTest_CanBeDamaged::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryTest_CanHitWithGameplayAbility
// (None)

class UClass* UFortQueryTest_CanHitWithGameplayAbility::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryTest_CanHitWithGameplayAbility");

	return Clss;
}


// FortQueryTest_CanHitWithGameplayAbility FortniteAIServer.Default__FortQueryTest_CanHitWithGameplayAbility
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryTest_CanHitWithGameplayAbility* UFortQueryTest_CanHitWithGameplayAbility::GetDefaultObj()
{
	static class UFortQueryTest_CanHitWithGameplayAbility* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryTest_CanHitWithGameplayAbility*>(UFortQueryTest_CanHitWithGameplayAbility::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryTest_CurieState
// (None)

class UClass* UFortQueryTest_CurieState::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryTest_CurieState");

	return Clss;
}


// FortQueryTest_CurieState FortniteAIServer.Default__FortQueryTest_CurieState
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryTest_CurieState* UFortQueryTest_CurieState::GetDefaultObj()
{
	static class UFortQueryTest_CurieState* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryTest_CurieState*>(UFortQueryTest_CurieState::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryTest_DecoyDistance
// (None)

class UClass* UFortQueryTest_DecoyDistance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryTest_DecoyDistance");

	return Clss;
}


// FortQueryTest_DecoyDistance FortniteAIServer.Default__FortQueryTest_DecoyDistance
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryTest_DecoyDistance* UFortQueryTest_DecoyDistance::GetDefaultObj()
{
	static class UFortQueryTest_DecoyDistance* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryTest_DecoyDistance*>(UFortQueryTest_DecoyDistance::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryTest_DeltaDistance
// (None)

class UClass* UFortQueryTest_DeltaDistance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryTest_DeltaDistance");

	return Clss;
}


// FortQueryTest_DeltaDistance FortniteAIServer.Default__FortQueryTest_DeltaDistance
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryTest_DeltaDistance* UFortQueryTest_DeltaDistance::GetDefaultObj()
{
	static class UFortQueryTest_DeltaDistance* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryTest_DeltaDistance*>(UFortQueryTest_DeltaDistance::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryTest_DistanceToActorBound
// (None)

class UClass* UFortQueryTest_DistanceToActorBound::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryTest_DistanceToActorBound");

	return Clss;
}


// FortQueryTest_DistanceToActorBound FortniteAIServer.Default__FortQueryTest_DistanceToActorBound
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryTest_DistanceToActorBound* UFortQueryTest_DistanceToActorBound::GetDefaultObj()
{
	static class UFortQueryTest_DistanceToActorBound* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryTest_DistanceToActorBound*>(UFortQueryTest_DistanceToActorBound::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryTest_DistanceToIndestructibleBuilding
// (None)

class UClass* UFortQueryTest_DistanceToIndestructibleBuilding::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryTest_DistanceToIndestructibleBuilding");

	return Clss;
}


// FortQueryTest_DistanceToIndestructibleBuilding FortniteAIServer.Default__FortQueryTest_DistanceToIndestructibleBuilding
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryTest_DistanceToIndestructibleBuilding* UFortQueryTest_DistanceToIndestructibleBuilding::GetDefaultObj()
{
	static class UFortQueryTest_DistanceToIndestructibleBuilding* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryTest_DistanceToIndestructibleBuilding*>(UFortQueryTest_DistanceToIndestructibleBuilding::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryTest_EnvironmentalDanger
// (None)

class UClass* UFortQueryTest_EnvironmentalDanger::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryTest_EnvironmentalDanger");

	return Clss;
}


// FortQueryTest_EnvironmentalDanger FortniteAIServer.Default__FortQueryTest_EnvironmentalDanger
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryTest_EnvironmentalDanger* UFortQueryTest_EnvironmentalDanger::GetDefaultObj()
{
	static class UFortQueryTest_EnvironmentalDanger* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryTest_EnvironmentalDanger*>(UFortQueryTest_EnvironmentalDanger::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryTest_GameplayTagsPerDifficulty
// (None)

class UClass* UFortQueryTest_GameplayTagsPerDifficulty::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryTest_GameplayTagsPerDifficulty");

	return Clss;
}


// FortQueryTest_GameplayTagsPerDifficulty FortniteAIServer.Default__FortQueryTest_GameplayTagsPerDifficulty
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryTest_GameplayTagsPerDifficulty* UFortQueryTest_GameplayTagsPerDifficulty::GetDefaultObj()
{
	static class UFortQueryTest_GameplayTagsPerDifficulty* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryTest_GameplayTagsPerDifficulty*>(UFortQueryTest_GameplayTagsPerDifficulty::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryTest_GoalActorDot
// (None)

class UClass* UFortQueryTest_GoalActorDot::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryTest_GoalActorDot");

	return Clss;
}


// FortQueryTest_GoalActorDot FortniteAIServer.Default__FortQueryTest_GoalActorDot
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryTest_GoalActorDot* UFortQueryTest_GoalActorDot::GetDefaultObj()
{
	static class UFortQueryTest_GoalActorDot* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryTest_GoalActorDot*>(UFortQueryTest_GoalActorDot::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryTest_GoalActorTimeSinceSpawn
// (None)

class UClass* UFortQueryTest_GoalActorTimeSinceSpawn::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryTest_GoalActorTimeSinceSpawn");

	return Clss;
}


// FortQueryTest_GoalActorTimeSinceSpawn FortniteAIServer.Default__FortQueryTest_GoalActorTimeSinceSpawn
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryTest_GoalActorTimeSinceSpawn* UFortQueryTest_GoalActorTimeSinceSpawn::GetDefaultObj()
{
	static class UFortQueryTest_GoalActorTimeSinceSpawn* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryTest_GoalActorTimeSinceSpawn*>(UFortQueryTest_GoalActorTimeSinceSpawn::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryTest_GoalDiscouragement
// (None)

class UClass* UFortQueryTest_GoalDiscouragement::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryTest_GoalDiscouragement");

	return Clss;
}


// FortQueryTest_GoalDiscouragement FortniteAIServer.Default__FortQueryTest_GoalDiscouragement
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryTest_GoalDiscouragement* UFortQueryTest_GoalDiscouragement::GetDefaultObj()
{
	static class UFortQueryTest_GoalDiscouragement* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryTest_GoalDiscouragement*>(UFortQueryTest_GoalDiscouragement::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryTest_GoalDistance
// (None)

class UClass* UFortQueryTest_GoalDistance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryTest_GoalDistance");

	return Clss;
}


// FortQueryTest_GoalDistance FortniteAIServer.Default__FortQueryTest_GoalDistance
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryTest_GoalDistance* UFortQueryTest_GoalDistance::GetDefaultObj()
{
	static class UFortQueryTest_GoalDistance* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryTest_GoalDistance*>(UFortQueryTest_GoalDistance::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryTest_GoalDistanceRanges
// (None)

class UClass* UFortQueryTest_GoalDistanceRanges::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryTest_GoalDistanceRanges");

	return Clss;
}


// FortQueryTest_GoalDistanceRanges FortniteAIServer.Default__FortQueryTest_GoalDistanceRanges
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryTest_GoalDistanceRanges* UFortQueryTest_GoalDistanceRanges::GetDefaultObj()
{
	static class UFortQueryTest_GoalDistanceRanges* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryTest_GoalDistanceRanges*>(UFortQueryTest_GoalDistanceRanges::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryTest_GoalFrustrationDiscouragement
// (None)

class UClass* UFortQueryTest_GoalFrustrationDiscouragement::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryTest_GoalFrustrationDiscouragement");

	return Clss;
}


// FortQueryTest_GoalFrustrationDiscouragement FortniteAIServer.Default__FortQueryTest_GoalFrustrationDiscouragement
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryTest_GoalFrustrationDiscouragement* UFortQueryTest_GoalFrustrationDiscouragement::GetDefaultObj()
{
	static class UFortQueryTest_GoalFrustrationDiscouragement* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryTest_GoalFrustrationDiscouragement*>(UFortQueryTest_GoalFrustrationDiscouragement::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryTest_GoalGameplayTags
// (None)

class UClass* UFortQueryTest_GoalGameplayTags::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryTest_GoalGameplayTags");

	return Clss;
}


// FortQueryTest_GoalGameplayTags FortniteAIServer.Default__FortQueryTest_GoalGameplayTags
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryTest_GoalGameplayTags* UFortQueryTest_GoalGameplayTags::GetDefaultObj()
{
	static class UFortQueryTest_GoalGameplayTags* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryTest_GoalGameplayTags*>(UFortQueryTest_GoalGameplayTags::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryTest_GoalMarkedByPlayer
// (None)

class UClass* UFortQueryTest_GoalMarkedByPlayer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryTest_GoalMarkedByPlayer");

	return Clss;
}


// FortQueryTest_GoalMarkedByPlayer FortniteAIServer.Default__FortQueryTest_GoalMarkedByPlayer
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryTest_GoalMarkedByPlayer* UFortQueryTest_GoalMarkedByPlayer::GetDefaultObj()
{
	static class UFortQueryTest_GoalMarkedByPlayer* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryTest_GoalMarkedByPlayer*>(UFortQueryTest_GoalMarkedByPlayer::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryTest_GoalNumberOfAIAssigned
// (None)

class UClass* UFortQueryTest_GoalNumberOfAIAssigned::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryTest_GoalNumberOfAIAssigned");

	return Clss;
}


// FortQueryTest_GoalNumberOfAIAssigned FortniteAIServer.Default__FortQueryTest_GoalNumberOfAIAssigned
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryTest_GoalNumberOfAIAssigned* UFortQueryTest_GoalNumberOfAIAssigned::GetDefaultObj()
{
	static class UFortQueryTest_GoalNumberOfAIAssigned* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryTest_GoalNumberOfAIAssigned*>(UFortQueryTest_GoalNumberOfAIAssigned::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryTest_GoalOverallDamageCaused
// (None)

class UClass* UFortQueryTest_GoalOverallDamageCaused::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryTest_GoalOverallDamageCaused");

	return Clss;
}


// FortQueryTest_GoalOverallDamageCaused FortniteAIServer.Default__FortQueryTest_GoalOverallDamageCaused
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryTest_GoalOverallDamageCaused* UFortQueryTest_GoalOverallDamageCaused::GetDefaultObj()
{
	static class UFortQueryTest_GoalOverallDamageCaused* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryTest_GoalOverallDamageCaused*>(UFortQueryTest_GoalOverallDamageCaused::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryTest_GoalPickupFilter
// (None)

class UClass* UFortQueryTest_GoalPickupFilter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryTest_GoalPickupFilter");

	return Clss;
}


// FortQueryTest_GoalPickupFilter FortniteAIServer.Default__FortQueryTest_GoalPickupFilter
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryTest_GoalPickupFilter* UFortQueryTest_GoalPickupFilter::GetDefaultObj()
{
	static class UFortQueryTest_GoalPickupFilter* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryTest_GoalPickupFilter*>(UFortQueryTest_GoalPickupFilter::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryTest_GoalProject
// (None)

class UClass* UFortQueryTest_GoalProject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryTest_GoalProject");

	return Clss;
}


// FortQueryTest_GoalProject FortniteAIServer.Default__FortQueryTest_GoalProject
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryTest_GoalProject* UFortQueryTest_GoalProject::GetDefaultObj()
{
	static class UFortQueryTest_GoalProject* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryTest_GoalProject*>(UFortQueryTest_GoalProject::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryTest_GoalStickiness
// (None)

class UClass* UFortQueryTest_GoalStickiness::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryTest_GoalStickiness");

	return Clss;
}


// FortQueryTest_GoalStickiness FortniteAIServer.Default__FortQueryTest_GoalStickiness
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryTest_GoalStickiness* UFortQueryTest_GoalStickiness::GetDefaultObj()
{
	static class UFortQueryTest_GoalStickiness* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryTest_GoalStickiness*>(UFortQueryTest_GoalStickiness::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryTest_GoalType
// (None)

class UClass* UFortQueryTest_GoalType::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryTest_GoalType");

	return Clss;
}


// FortQueryTest_GoalType FortniteAIServer.Default__FortQueryTest_GoalType
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryTest_GoalType* UFortQueryTest_GoalType::GetDefaultObj()
{
	static class UFortQueryTest_GoalType* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryTest_GoalType*>(UFortQueryTest_GoalType::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryTest_GoalWithinTetheredBounds
// (None)

class UClass* UFortQueryTest_GoalWithinTetheredBounds::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryTest_GoalWithinTetheredBounds");

	return Clss;
}


// FortQueryTest_GoalWithinTetheredBounds FortniteAIServer.Default__FortQueryTest_GoalWithinTetheredBounds
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryTest_GoalWithinTetheredBounds* UFortQueryTest_GoalWithinTetheredBounds::GetDefaultObj()
{
	static class UFortQueryTest_GoalWithinTetheredBounds* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryTest_GoalWithinTetheredBounds*>(UFortQueryTest_GoalWithinTetheredBounds::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryTest_HasNearbyBuildings
// (None)

class UClass* UFortQueryTest_HasNearbyBuildings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryTest_HasNearbyBuildings");

	return Clss;
}


// FortQueryTest_HasNearbyBuildings FortniteAIServer.Default__FortQueryTest_HasNearbyBuildings
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryTest_HasNearbyBuildings* UFortQueryTest_HasNearbyBuildings::GetDefaultObj()
{
	static class UFortQueryTest_HasNearbyBuildings* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryTest_HasNearbyBuildings*>(UFortQueryTest_HasNearbyBuildings::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryTest_HasNearbyEncounterGoals
// (None)

class UClass* UFortQueryTest_HasNearbyEncounterGoals::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryTest_HasNearbyEncounterGoals");

	return Clss;
}


// FortQueryTest_HasNearbyEncounterGoals FortniteAIServer.Default__FortQueryTest_HasNearbyEncounterGoals
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryTest_HasNearbyEncounterGoals* UFortQueryTest_HasNearbyEncounterGoals::GetDefaultObj()
{
	static class UFortQueryTest_HasNearbyEncounterGoals* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryTest_HasNearbyEncounterGoals*>(UFortQueryTest_HasNearbyEncounterGoals::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryTest_Health
// (None)

class UClass* UFortQueryTest_Health::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryTest_Health");

	return Clss;
}


// FortQueryTest_Health FortniteAIServer.Default__FortQueryTest_Health
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryTest_Health* UFortQueryTest_Health::GetDefaultObj()
{
	static class UFortQueryTest_Health* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryTest_Health*>(UFortQueryTest_Health::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryTest_HealthAndShield
// (None)

class UClass* UFortQueryTest_HealthAndShield::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryTest_HealthAndShield");

	return Clss;
}


// FortQueryTest_HealthAndShield FortniteAIServer.Default__FortQueryTest_HealthAndShield
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryTest_HealthAndShield* UFortQueryTest_HealthAndShield::GetDefaultObj()
{
	static class UFortQueryTest_HealthAndShield* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryTest_HealthAndShield*>(UFortQueryTest_HealthAndShield::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryTest_HotspotSlotOrientation
// (None)

class UClass* UFortQueryTest_HotspotSlotOrientation::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryTest_HotspotSlotOrientation");

	return Clss;
}


// FortQueryTest_HotspotSlotOrientation FortniteAIServer.Default__FortQueryTest_HotspotSlotOrientation
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryTest_HotspotSlotOrientation* UFortQueryTest_HotspotSlotOrientation::GetDefaultObj()
{
	static class UFortQueryTest_HotspotSlotOrientation* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryTest_HotspotSlotOrientation*>(UFortQueryTest_HotspotSlotOrientation::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryTest_HotspotSlotState
// (None)

class UClass* UFortQueryTest_HotspotSlotState::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryTest_HotspotSlotState");

	return Clss;
}


// FortQueryTest_HotspotSlotState FortniteAIServer.Default__FortQueryTest_HotspotSlotState
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryTest_HotspotSlotState* UFortQueryTest_HotspotSlotState::GetDefaultObj()
{
	static class UFortQueryTest_HotspotSlotState* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryTest_HotspotSlotState*>(UFortQueryTest_HotspotSlotState::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryTest_InfluenceScore
// (None)

class UClass* UFortQueryTest_InfluenceScore::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryTest_InfluenceScore");

	return Clss;
}


// FortQueryTest_InfluenceScore FortniteAIServer.Default__FortQueryTest_InfluenceScore
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryTest_InfluenceScore* UFortQueryTest_InfluenceScore::GetDefaultObj()
{
	static class UFortQueryTest_InfluenceScore* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryTest_InfluenceScore*>(UFortQueryTest_InfluenceScore::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryTest_InsideAIBotLeash
// (None)

class UClass* UFortQueryTest_InsideAIBotLeash::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryTest_InsideAIBotLeash");

	return Clss;
}


// FortQueryTest_InsideAIBotLeash FortniteAIServer.Default__FortQueryTest_InsideAIBotLeash
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryTest_InsideAIBotLeash* UFortQueryTest_InsideAIBotLeash::GetDefaultObj()
{
	static class UFortQueryTest_InsideAIBotLeash* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryTest_InsideAIBotLeash*>(UFortQueryTest_InsideAIBotLeash::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryTest_InsideAthenaLeash
// (None)

class UClass* UFortQueryTest_InsideAthenaLeash::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryTest_InsideAthenaLeash");

	return Clss;
}


// FortQueryTest_InsideAthenaLeash FortniteAIServer.Default__FortQueryTest_InsideAthenaLeash
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryTest_InsideAthenaLeash* UFortQueryTest_InsideAthenaLeash::GetDefaultObj()
{
	static class UFortQueryTest_InsideAthenaLeash* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryTest_InsideAthenaLeash*>(UFortQueryTest_InsideAthenaLeash::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryTest_InsideAthenaSafeZone
// (None)

class UClass* UFortQueryTest_InsideAthenaSafeZone::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryTest_InsideAthenaSafeZone");

	return Clss;
}


// FortQueryTest_InsideAthenaSafeZone FortniteAIServer.Default__FortQueryTest_InsideAthenaSafeZone
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryTest_InsideAthenaSafeZone* UFortQueryTest_InsideAthenaSafeZone::GetDefaultObj()
{
	static class UFortQueryTest_InsideAthenaSafeZone* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryTest_InsideAthenaSafeZone*>(UFortQueryTest_InsideAthenaSafeZone::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryTest_InsideBuilding
// (None)

class UClass* UFortQueryTest_InsideBuilding::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryTest_InsideBuilding");

	return Clss;
}


// FortQueryTest_InsideBuilding FortniteAIServer.Default__FortQueryTest_InsideBuilding
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryTest_InsideBuilding* UFortQueryTest_InsideBuilding::GetDefaultObj()
{
	static class UFortQueryTest_InsideBuilding* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryTest_InsideBuilding*>(UFortQueryTest_InsideBuilding::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryTest_InsideWater
// (None)

class UClass* UFortQueryTest_InsideWater::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryTest_InsideWater");

	return Clss;
}


// FortQueryTest_InsideWater FortniteAIServer.Default__FortQueryTest_InsideWater
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryTest_InsideWater* UFortQueryTest_InsideWater::GetDefaultObj()
{
	static class UFortQueryTest_InsideWater* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryTest_InsideWater*>(UFortQueryTest_InsideWater::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryTest_IsCloseToHotspotSlot
// (None)

class UClass* UFortQueryTest_IsCloseToHotspotSlot::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryTest_IsCloseToHotspotSlot");

	return Clss;
}


// FortQueryTest_IsCloseToHotspotSlot FortniteAIServer.Default__FortQueryTest_IsCloseToHotspotSlot
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryTest_IsCloseToHotspotSlot* UFortQueryTest_IsCloseToHotspotSlot::GetDefaultObj()
{
	static class UFortQueryTest_IsCloseToHotspotSlot* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryTest_IsCloseToHotspotSlot*>(UFortQueryTest_IsCloseToHotspotSlot::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryTest_IsCloseToPatrolWard
// (None)

class UClass* UFortQueryTest_IsCloseToPatrolWard::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryTest_IsCloseToPatrolWard");

	return Clss;
}


// FortQueryTest_IsCloseToPatrolWard FortniteAIServer.Default__FortQueryTest_IsCloseToPatrolWard
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryTest_IsCloseToPatrolWard* UFortQueryTest_IsCloseToPatrolWard::GetDefaultObj()
{
	static class UFortQueryTest_IsCloseToPatrolWard* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryTest_IsCloseToPatrolWard*>(UFortQueryTest_IsCloseToPatrolWard::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryTest_IsGoalForAssignment
// (None)

class UClass* UFortQueryTest_IsGoalForAssignment::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryTest_IsGoalForAssignment");

	return Clss;
}


// FortQueryTest_IsGoalForAssignment FortniteAIServer.Default__FortQueryTest_IsGoalForAssignment
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryTest_IsGoalForAssignment* UFortQueryTest_IsGoalForAssignment::GetDefaultObj()
{
	static class UFortQueryTest_IsGoalForAssignment* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryTest_IsGoalForAssignment*>(UFortQueryTest_IsGoalForAssignment::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryTest_IsGoalHostile
// (None)

class UClass* UFortQueryTest_IsGoalHostile::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryTest_IsGoalHostile");

	return Clss;
}


// FortQueryTest_IsGoalHostile FortniteAIServer.Default__FortQueryTest_IsGoalHostile
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryTest_IsGoalHostile* UFortQueryTest_IsGoalHostile::GetDefaultObj()
{
	static class UFortQueryTest_IsGoalHostile* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryTest_IsGoalHostile*>(UFortQueryTest_IsGoalHostile::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryTest_IsInLeaderLOS
// (None)

class UClass* UFortQueryTest_IsInLeaderLOS::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryTest_IsInLeaderLOS");

	return Clss;
}


// FortQueryTest_IsInLeaderLOS FortniteAIServer.Default__FortQueryTest_IsInLeaderLOS
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryTest_IsInLeaderLOS* UFortQueryTest_IsInLeaderLOS::GetDefaultObj()
{
	static class UFortQueryTest_IsInLeaderLOS* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryTest_IsInLeaderLOS*>(UFortQueryTest_IsInLeaderLOS::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryTest_IsObstructed
// (None)

class UClass* UFortQueryTest_IsObstructed::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryTest_IsObstructed");

	return Clss;
}


// FortQueryTest_IsObstructed FortniteAIServer.Default__FortQueryTest_IsObstructed
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryTest_IsObstructed* UFortQueryTest_IsObstructed::GetDefaultObj()
{
	static class UFortQueryTest_IsObstructed* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryTest_IsObstructed*>(UFortQueryTest_IsObstructed::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryTest_IsObstructedOverlap
// (None)

class UClass* UFortQueryTest_IsObstructedOverlap::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryTest_IsObstructedOverlap");

	return Clss;
}


// FortQueryTest_IsObstructedOverlap FortniteAIServer.Default__FortQueryTest_IsObstructedOverlap
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryTest_IsObstructedOverlap* UFortQueryTest_IsObstructedOverlap::GetDefaultObj()
{
	static class UFortQueryTest_IsObstructedOverlap* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryTest_IsObstructedOverlap*>(UFortQueryTest_IsObstructedOverlap::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryTest_MissionGameplayTagMatch
// (None)

class UClass* UFortQueryTest_MissionGameplayTagMatch::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryTest_MissionGameplayTagMatch");

	return Clss;
}


// FortQueryTest_MissionGameplayTagMatch FortniteAIServer.Default__FortQueryTest_MissionGameplayTagMatch
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryTest_MissionGameplayTagMatch* UFortQueryTest_MissionGameplayTagMatch::GetDefaultObj()
{
	static class UFortQueryTest_MissionGameplayTagMatch* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryTest_MissionGameplayTagMatch*>(UFortQueryTest_MissionGameplayTagMatch::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryTest_MissionSameMap
// (None)

class UClass* UFortQueryTest_MissionSameMap::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryTest_MissionSameMap");

	return Clss;
}


// FortQueryTest_MissionSameMap FortniteAIServer.Default__FortQueryTest_MissionSameMap
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryTest_MissionSameMap* UFortQueryTest_MissionSameMap::GetDefaultObj()
{
	static class UFortQueryTest_MissionSameMap* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryTest_MissionSameMap*>(UFortQueryTest_MissionSameMap::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryTest_NavGraphDistance
// (None)

class UClass* UFortQueryTest_NavGraphDistance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryTest_NavGraphDistance");

	return Clss;
}


// FortQueryTest_NavGraphDistance FortniteAIServer.Default__FortQueryTest_NavGraphDistance
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryTest_NavGraphDistance* UFortQueryTest_NavGraphDistance::GetDefaultObj()
{
	static class UFortQueryTest_NavGraphDistance* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryTest_NavGraphDistance*>(UFortQueryTest_NavGraphDistance::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryTest_OnFlatSurface
// (None)

class UClass* UFortQueryTest_OnFlatSurface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryTest_OnFlatSurface");

	return Clss;
}


// FortQueryTest_OnFlatSurface FortniteAIServer.Default__FortQueryTest_OnFlatSurface
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryTest_OnFlatSurface* UFortQueryTest_OnFlatSurface::GetDefaultObj()
{
	static class UFortQueryTest_OnFlatSurface* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryTest_OnFlatSurface*>(UFortQueryTest_OnFlatSurface::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryTest_OnFlatSurfaceNoNavMesh
// (None)

class UClass* UFortQueryTest_OnFlatSurfaceNoNavMesh::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryTest_OnFlatSurfaceNoNavMesh");

	return Clss;
}


// FortQueryTest_OnFlatSurfaceNoNavMesh FortniteAIServer.Default__FortQueryTest_OnFlatSurfaceNoNavMesh
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryTest_OnFlatSurfaceNoNavMesh* UFortQueryTest_OnFlatSurfaceNoNavMesh::GetDefaultObj()
{
	static class UFortQueryTest_OnFlatSurfaceNoNavMesh* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryTest_OnFlatSurfaceNoNavMesh*>(UFortQueryTest_OnFlatSurfaceNoNavMesh::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryTest_PathfindingBatch
// (None)

class UClass* UFortQueryTest_PathfindingBatch::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryTest_PathfindingBatch");

	return Clss;
}


// FortQueryTest_PathfindingBatch FortniteAIServer.Default__FortQueryTest_PathfindingBatch
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryTest_PathfindingBatch* UFortQueryTest_PathfindingBatch::GetDefaultObj()
{
	static class UFortQueryTest_PathfindingBatch* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryTest_PathfindingBatch*>(UFortQueryTest_PathfindingBatch::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryTest_PawnHealth
// (None)

class UClass* UFortQueryTest_PawnHealth::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryTest_PawnHealth");

	return Clss;
}


// FortQueryTest_PawnHealth FortniteAIServer.Default__FortQueryTest_PawnHealth
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryTest_PawnHealth* UFortQueryTest_PawnHealth::GetDefaultObj()
{
	static class UFortQueryTest_PawnHealth* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryTest_PawnHealth*>(UFortQueryTest_PawnHealth::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryTest_PawnIsDBNO
// (None)

class UClass* UFortQueryTest_PawnIsDBNO::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryTest_PawnIsDBNO");

	return Clss;
}


// FortQueryTest_PawnIsDBNO FortniteAIServer.Default__FortQueryTest_PawnIsDBNO
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryTest_PawnIsDBNO* UFortQueryTest_PawnIsDBNO::GetDefaultObj()
{
	static class UFortQueryTest_PawnIsDBNO* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryTest_PawnIsDBNO*>(UFortQueryTest_PawnIsDBNO::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryTest_PerceptionAge
// (None)

class UClass* UFortQueryTest_PerceptionAge::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryTest_PerceptionAge");

	return Clss;
}


// FortQueryTest_PerceptionAge FortniteAIServer.Default__FortQueryTest_PerceptionAge
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryTest_PerceptionAge* UFortQueryTest_PerceptionAge::GetDefaultObj()
{
	static class UFortQueryTest_PerceptionAge* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryTest_PerceptionAge*>(UFortQueryTest_PerceptionAge::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryTest_PerceptionAll
// (None)

class UClass* UFortQueryTest_PerceptionAll::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryTest_PerceptionAll");

	return Clss;
}


// FortQueryTest_PerceptionAll FortniteAIServer.Default__FortQueryTest_PerceptionAll
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryTest_PerceptionAll* UFortQueryTest_PerceptionAll::GetDefaultObj()
{
	static class UFortQueryTest_PerceptionAll* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryTest_PerceptionAll*>(UFortQueryTest_PerceptionAll::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryTest_PerceptionExists
// (None)

class UClass* UFortQueryTest_PerceptionExists::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryTest_PerceptionExists");

	return Clss;
}


// FortQueryTest_PerceptionExists FortniteAIServer.Default__FortQueryTest_PerceptionExists
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryTest_PerceptionExists* UFortQueryTest_PerceptionExists::GetDefaultObj()
{
	static class UFortQueryTest_PerceptionExists* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryTest_PerceptionExists*>(UFortQueryTest_PerceptionExists::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryTest_PickupDropper
// (None)

class UClass* UFortQueryTest_PickupDropper::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryTest_PickupDropper");

	return Clss;
}


// FortQueryTest_PickupDropper FortniteAIServer.Default__FortQueryTest_PickupDropper
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryTest_PickupDropper* UFortQueryTest_PickupDropper::GetDefaultObj()
{
	static class UFortQueryTest_PickupDropper* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryTest_PickupDropper*>(UFortQueryTest_PickupDropper::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryTest_PointInBuildingFoundation
// (None)

class UClass* UFortQueryTest_PointInBuildingFoundation::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryTest_PointInBuildingFoundation");

	return Clss;
}


// FortQueryTest_PointInBuildingFoundation FortniteAIServer.Default__FortQueryTest_PointInBuildingFoundation
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryTest_PointInBuildingFoundation* UFortQueryTest_PointInBuildingFoundation::GetDefaultObj()
{
	static class UFortQueryTest_PointInBuildingFoundation* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryTest_PointInBuildingFoundation*>(UFortQueryTest_PointInBuildingFoundation::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryTest_PrimaryAssignment
// (None)

class UClass* UFortQueryTest_PrimaryAssignment::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryTest_PrimaryAssignment");

	return Clss;
}


// FortQueryTest_PrimaryAssignment FortniteAIServer.Default__FortQueryTest_PrimaryAssignment
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryTest_PrimaryAssignment* UFortQueryTest_PrimaryAssignment::GetDefaultObj()
{
	static class UFortQueryTest_PrimaryAssignment* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryTest_PrimaryAssignment*>(UFortQueryTest_PrimaryAssignment::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryTest_ProjectOnNavMesh
// (None)

class UClass* UFortQueryTest_ProjectOnNavMesh::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryTest_ProjectOnNavMesh");

	return Clss;
}


// FortQueryTest_ProjectOnNavMesh FortniteAIServer.Default__FortQueryTest_ProjectOnNavMesh
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryTest_ProjectOnNavMesh* UFortQueryTest_ProjectOnNavMesh::GetDefaultObj()
{
	static class UFortQueryTest_ProjectOnNavMesh* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryTest_ProjectOnNavMesh*>(UFortQueryTest_ProjectOnNavMesh::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryTest_Random
// (None)

class UClass* UFortQueryTest_Random::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryTest_Random");

	return Clss;
}


// FortQueryTest_Random FortniteAIServer.Default__FortQueryTest_Random
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryTest_Random* UFortQueryTest_Random::GetDefaultObj()
{
	static class UFortQueryTest_Random* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryTest_Random*>(UFortQueryTest_Random::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryTest_TowardNextAthenaSafeZone
// (None)

class UClass* UFortQueryTest_TowardNextAthenaSafeZone::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryTest_TowardNextAthenaSafeZone");

	return Clss;
}


// FortQueryTest_TowardNextAthenaSafeZone FortniteAIServer.Default__FortQueryTest_TowardNextAthenaSafeZone
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryTest_TowardNextAthenaSafeZone* UFortQueryTest_TowardNextAthenaSafeZone::GetDefaultObj()
{
	static class UFortQueryTest_TowardNextAthenaSafeZone* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryTest_TowardNextAthenaSafeZone*>(UFortQueryTest_TowardNextAthenaSafeZone::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryTest_ValidSurface
// (None)

class UClass* UFortQueryTest_ValidSurface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryTest_ValidSurface");

	return Clss;
}


// FortQueryTest_ValidSurface FortniteAIServer.Default__FortQueryTest_ValidSurface
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryTest_ValidSurface* UFortQueryTest_ValidSurface::GetDefaultObj()
{
	static class UFortQueryTest_ValidSurface* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryTest_ValidSurface*>(UFortQueryTest_ValidSurface::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryTest_WithinHotfixVolumeBounds
// (None)

class UClass* UFortQueryTest_WithinHotfixVolumeBounds::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryTest_WithinHotfixVolumeBounds");

	return Clss;
}


// FortQueryTest_WithinHotfixVolumeBounds FortniteAIServer.Default__FortQueryTest_WithinHotfixVolumeBounds
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryTest_WithinHotfixVolumeBounds* UFortQueryTest_WithinHotfixVolumeBounds::GetDefaultObj()
{
	static class UFortQueryTest_WithinHotfixVolumeBounds* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryTest_WithinHotfixVolumeBounds*>(UFortQueryTest_WithinHotfixVolumeBounds::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryTest_WithinTaggedArea
// (None)

class UClass* UFortQueryTest_WithinTaggedArea::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryTest_WithinTaggedArea");

	return Clss;
}


// FortQueryTest_WithinTaggedArea FortniteAIServer.Default__FortQueryTest_WithinTaggedArea
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryTest_WithinTaggedArea* UFortQueryTest_WithinTaggedArea::GetDefaultObj()
{
	static class UFortQueryTest_WithinTaggedArea* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryTest_WithinTaggedArea*>(UFortQueryTest_WithinTaggedArea::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortGameplayInteractionSmartObjectBehaviorDefinition
// (None)

class UClass* UFortGameplayInteractionSmartObjectBehaviorDefinition::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortGameplayInteractionSmartObjectBehaviorDefinition");

	return Clss;
}


// FortGameplayInteractionSmartObjectBehaviorDefinition FortniteAIServer.Default__FortGameplayInteractionSmartObjectBehaviorDefinition
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortGameplayInteractionSmartObjectBehaviorDefinition* UFortGameplayInteractionSmartObjectBehaviorDefinition::GetDefaultObj()
{
	static class UFortGameplayInteractionSmartObjectBehaviorDefinition* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortGameplayInteractionSmartObjectBehaviorDefinition*>(UFortGameplayInteractionSmartObjectBehaviorDefinition::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAIServer.FortGameplayInteractionSmartObjectBehaviorDefinition.CanBeUsedBy
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UActor*                      User                                                             (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      SmartObjectActor                                                 (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortGameplayInteractionSmartObjectBehaviorDefinition::CanBeUsedBy(class UActor* User, class UActor* SmartObjectActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGameplayInteractionSmartObjectBehaviorDefinition", "CanBeUsedBy");

	Params::UFortGameplayInteractionSmartObjectBehaviorDefinition_CanBeUsedBy_Params Parms{};

	Parms.User = User;
	Parms.SmartObjectActor = SmartObjectActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class FortniteAIServer.FortAthenaBTTask_BotAmbushPlayer
// (None)

class UClass* UFortAthenaBTTask_BotAmbushPlayer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaBTTask_BotAmbushPlayer");

	return Clss;
}


// FortAthenaBTTask_BotAmbushPlayer FortniteAIServer.Default__FortAthenaBTTask_BotAmbushPlayer
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaBTTask_BotAmbushPlayer* UFortAthenaBTTask_BotAmbushPlayer::GetDefaultObj()
{
	static class UFortAthenaBTTask_BotAmbushPlayer* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaBTTask_BotAmbushPlayer*>(UFortAthenaBTTask_BotAmbushPlayer::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaBTDecorator_BehaviorControls
// (None)

class UClass* UFortAthenaBTDecorator_BehaviorControls::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaBTDecorator_BehaviorControls");

	return Clss;
}


// FortAthenaBTDecorator_BehaviorControls FortniteAIServer.Default__FortAthenaBTDecorator_BehaviorControls
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaBTDecorator_BehaviorControls* UFortAthenaBTDecorator_BehaviorControls::GetDefaultObj()
{
	static class UFortAthenaBTDecorator_BehaviorControls* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaBTDecorator_BehaviorControls*>(UFortAthenaBTDecorator_BehaviorControls::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaAIBotEvaluator_AimDownSight
// (None)

class UClass* UFortAthenaAIBotEvaluator_AimDownSight::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_AimDownSight");

	return Clss;
}


// FortAthenaAIBotEvaluator_AimDownSight FortniteAIServer.Default__FortAthenaAIBotEvaluator_AimDownSight
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotEvaluator_AimDownSight* UFortAthenaAIBotEvaluator_AimDownSight::GetDefaultObj()
{
	static class UFortAthenaAIBotEvaluator_AimDownSight* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotEvaluator_AimDownSight*>(UFortAthenaAIBotEvaluator_AimDownSight::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaAIBotEvaluator_Ambush
// (None)

class UClass* UFortAthenaAIBotEvaluator_Ambush::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_Ambush");

	return Clss;
}


// FortAthenaAIBotEvaluator_Ambush FortniteAIServer.Default__FortAthenaAIBotEvaluator_Ambush
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotEvaluator_Ambush* UFortAthenaAIBotEvaluator_Ambush::GetDefaultObj()
{
	static class UFortAthenaAIBotEvaluator_Ambush* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotEvaluator_Ambush*>(UFortAthenaAIBotEvaluator_Ambush::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaAIBotEvaluator_Attack
// (None)

class UClass* UFortAthenaAIBotEvaluator_Attack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_Attack");

	return Clss;
}


// FortAthenaAIBotEvaluator_Attack FortniteAIServer.Default__FortAthenaAIBotEvaluator_Attack
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotEvaluator_Attack* UFortAthenaAIBotEvaluator_Attack::GetDefaultObj()
{
	static class UFortAthenaAIBotEvaluator_Attack* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotEvaluator_Attack*>(UFortAthenaAIBotEvaluator_Attack::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaAIBotEvaluator_AvoidThreat
// (None)

class UClass* UFortAthenaAIBotEvaluator_AvoidThreat::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_AvoidThreat");

	return Clss;
}


// FortAthenaAIBotEvaluator_AvoidThreat FortniteAIServer.Default__FortAthenaAIBotEvaluator_AvoidThreat
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotEvaluator_AvoidThreat* UFortAthenaAIBotEvaluator_AvoidThreat::GetDefaultObj()
{
	static class UFortAthenaAIBotEvaluator_AvoidThreat* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotEvaluator_AvoidThreat*>(UFortAthenaAIBotEvaluator_AvoidThreat::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaAIBotEvaluator_Bunker
// (None)

class UClass* UFortAthenaAIBotEvaluator_Bunker::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_Bunker");

	return Clss;
}


// FortAthenaAIBotEvaluator_Bunker FortniteAIServer.Default__FortAthenaAIBotEvaluator_Bunker
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotEvaluator_Bunker* UFortAthenaAIBotEvaluator_Bunker::GetDefaultObj()
{
	static class UFortAthenaAIBotEvaluator_Bunker* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotEvaluator_Bunker*>(UFortAthenaAIBotEvaluator_Bunker::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaAIBotEvaluator_CanMove
// (None)

class UClass* UFortAthenaAIBotEvaluator_CanMove::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_CanMove");

	return Clss;
}


// FortAthenaAIBotEvaluator_CanMove FortniteAIServer.Default__FortAthenaAIBotEvaluator_CanMove
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotEvaluator_CanMove* UFortAthenaAIBotEvaluator_CanMove::GetDefaultObj()
{
	static class UFortAthenaAIBotEvaluator_CanMove* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotEvaluator_CanMove*>(UFortAthenaAIBotEvaluator_CanMove::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaAIBotEvaluator_CharacterLaunched
// (None)

class UClass* UFortAthenaAIBotEvaluator_CharacterLaunched::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_CharacterLaunched");

	return Clss;
}


// FortAthenaAIBotEvaluator_CharacterLaunched FortniteAIServer.Default__FortAthenaAIBotEvaluator_CharacterLaunched
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotEvaluator_CharacterLaunched* UFortAthenaAIBotEvaluator_CharacterLaunched::GetDefaultObj()
{
	static class UFortAthenaAIBotEvaluator_CharacterLaunched* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotEvaluator_CharacterLaunched*>(UFortAthenaAIBotEvaluator_CharacterLaunched::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAIServer.FortAthenaAIBotEvaluator_CharacterLaunched.OnZiplineStateChanged
// (Final, Native, Private)
// Parameters:
// bool                               bIsZiplining                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPlayerPawn*             FortPlayerPawn                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotEvaluator_CharacterLaunched::OnZiplineStateChanged(bool bIsZiplining, class UFortPlayerPawn* FortPlayerPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotEvaluator_CharacterLaunched", "OnZiplineStateChanged");

	Params::UFortAthenaAIBotEvaluator_CharacterLaunched_OnZiplineStateChanged_Params Parms{};

	Parms.bIsZiplining = bIsZiplining;
	Parms.FortPlayerPawn = FortPlayerPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FortniteAIServer.FortAthenaAIBotEvaluator_Conversation
// (None)

class UClass* UFortAthenaAIBotEvaluator_Conversation::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_Conversation");

	return Clss;
}


// FortAthenaAIBotEvaluator_Conversation FortniteAIServer.Default__FortAthenaAIBotEvaluator_Conversation
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotEvaluator_Conversation* UFortAthenaAIBotEvaluator_Conversation::GetDefaultObj()
{
	static class UFortAthenaAIBotEvaluator_Conversation* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotEvaluator_Conversation*>(UFortAthenaAIBotEvaluator_Conversation::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAIServer.FortAthenaAIBotEvaluator_Conversation.OnPlayerPawnSpawned
// (Final, Native, Private)
// Parameters:
// class UFortAthenaAIBotController*  BotController                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPlayerPawnAthena*       BotPawn                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotEvaluator_Conversation::OnPlayerPawnSpawned(class UFortAthenaAIBotController* BotController, class UFortPlayerPawnAthena* BotPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotEvaluator_Conversation", "OnPlayerPawnSpawned");

	Params::UFortAthenaAIBotEvaluator_Conversation_OnPlayerPawnSpawned_Params Parms{};

	Parms.BotController = BotController;
	Parms.BotPawn = BotPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FortniteAIServer.FortAthenaAIBotEvaluator_Converted
// (None)

class UClass* UFortAthenaAIBotEvaluator_Converted::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_Converted");

	return Clss;
}


// FortAthenaAIBotEvaluator_Converted FortniteAIServer.Default__FortAthenaAIBotEvaluator_Converted
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotEvaluator_Converted* UFortAthenaAIBotEvaluator_Converted::GetDefaultObj()
{
	static class UFortAthenaAIBotEvaluator_Converted* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotEvaluator_Converted*>(UFortAthenaAIBotEvaluator_Converted::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAIServer.FortAthenaAIBotEvaluator_Converted.OnUnconvertedEvent
// (Final, Native, Protected)
// Parameters:
// class UFortPawn*                   UnconvertedPawn                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EUnconvertReason        UnconvertReason                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotEvaluator_Converted::OnUnconvertedEvent(class UFortPawn* UnconvertedPawn, enum class EUnconvertReason UnconvertReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotEvaluator_Converted", "OnUnconvertedEvent");

	Params::UFortAthenaAIBotEvaluator_Converted_OnUnconvertedEvent_Params Parms{};

	Parms.UnconvertedPawn = UnconvertedPawn;
	Parms.UnconvertReason = UnconvertReason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAIServer.FortAthenaAIBotEvaluator_Converted.OnConvertedEvent
// (Final, Native, Protected)
// Parameters:
// class UFortPawn*                   InstigatorPawn                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPawn*                   ConvertedPawn                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotEvaluator_Converted::OnConvertedEvent(class UFortPawn* InstigatorPawn, class UFortPawn* ConvertedPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotEvaluator_Converted", "OnConvertedEvent");

	Params::UFortAthenaAIBotEvaluator_Converted_OnConvertedEvent_Params Parms{};

	Parms.InstigatorPawn = InstigatorPawn;
	Parms.ConvertedPawn = ConvertedPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FortniteAIServer.FortAthenaAIBotEvaluator_DanceOnKill
// (None)

class UClass* UFortAthenaAIBotEvaluator_DanceOnKill::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_DanceOnKill");

	return Clss;
}


// FortAthenaAIBotEvaluator_DanceOnKill FortniteAIServer.Default__FortAthenaAIBotEvaluator_DanceOnKill
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotEvaluator_DanceOnKill* UFortAthenaAIBotEvaluator_DanceOnKill::GetDefaultObj()
{
	static class UFortAthenaAIBotEvaluator_DanceOnKill* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotEvaluator_DanceOnKill*>(UFortAthenaAIBotEvaluator_DanceOnKill::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaAIBotEvaluator_TagQuery
// (None)

class UClass* UFortAthenaAIBotEvaluator_TagQuery::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_TagQuery");

	return Clss;
}


// FortAthenaAIBotEvaluator_TagQuery FortniteAIServer.Default__FortAthenaAIBotEvaluator_TagQuery
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotEvaluator_TagQuery* UFortAthenaAIBotEvaluator_TagQuery::GetDefaultObj()
{
	static class UFortAthenaAIBotEvaluator_TagQuery* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotEvaluator_TagQuery*>(UFortAthenaAIBotEvaluator_TagQuery::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaAIBotEvaluator_DangerDetection
// (None)

class UClass* UFortAthenaAIBotEvaluator_DangerDetection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_DangerDetection");

	return Clss;
}


// FortAthenaAIBotEvaluator_DangerDetection FortniteAIServer.Default__FortAthenaAIBotEvaluator_DangerDetection
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotEvaluator_DangerDetection* UFortAthenaAIBotEvaluator_DangerDetection::GetDefaultObj()
{
	static class UFortAthenaAIBotEvaluator_DangerDetection* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotEvaluator_DangerDetection*>(UFortAthenaAIBotEvaluator_DangerDetection::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaAIBotEvaluator_DBNO
// (None)

class UClass* UFortAthenaAIBotEvaluator_DBNO::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_DBNO");

	return Clss;
}


// FortAthenaAIBotEvaluator_DBNO FortniteAIServer.Default__FortAthenaAIBotEvaluator_DBNO
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotEvaluator_DBNO* UFortAthenaAIBotEvaluator_DBNO::GetDefaultObj()
{
	static class UFortAthenaAIBotEvaluator_DBNO* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotEvaluator_DBNO*>(UFortAthenaAIBotEvaluator_DBNO::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAIServer.FortAthenaAIBotEvaluator_DBNO.OnAllyPawnDBNOStateChanged
// (Final, Native, Private)
// Parameters:
// class UFortPawn*                   InPlayer                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInIsDBNO                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotEvaluator_DBNO::OnAllyPawnDBNOStateChanged(class UFortPawn* InPlayer, bool bInIsDBNO)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotEvaluator_DBNO", "OnAllyPawnDBNOStateChanged");

	Params::UFortAthenaAIBotEvaluator_DBNO_OnAllyPawnDBNOStateChanged_Params Parms{};

	Parms.InPlayer = InPlayer;
	Parms.bInIsDBNO = bInIsDBNO;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FortniteAIServer.FortAthenaAIBotEvaluator_DefensiveBuilding
// (None)

class UClass* UFortAthenaAIBotEvaluator_DefensiveBuilding::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_DefensiveBuilding");

	return Clss;
}


// FortAthenaAIBotEvaluator_DefensiveBuilding FortniteAIServer.Default__FortAthenaAIBotEvaluator_DefensiveBuilding
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotEvaluator_DefensiveBuilding* UFortAthenaAIBotEvaluator_DefensiveBuilding::GetDefaultObj()
{
	static class UFortAthenaAIBotEvaluator_DefensiveBuilding* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotEvaluator_DefensiveBuilding*>(UFortAthenaAIBotEvaluator_DefensiveBuilding::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaAIBotEvaluator_Escape
// (None)

class UClass* UFortAthenaAIBotEvaluator_Escape::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_Escape");

	return Clss;
}


// FortAthenaAIBotEvaluator_Escape FortniteAIServer.Default__FortAthenaAIBotEvaluator_Escape
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotEvaluator_Escape* UFortAthenaAIBotEvaluator_Escape::GetDefaultObj()
{
	static class UFortAthenaAIBotEvaluator_Escape* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotEvaluator_Escape*>(UFortAthenaAIBotEvaluator_Escape::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaAIBotEvaluator_EvasiveManeuvers
// (None)

class UClass* UFortAthenaAIBotEvaluator_EvasiveManeuvers::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_EvasiveManeuvers");

	return Clss;
}


// FortAthenaAIBotEvaluator_EvasiveManeuvers FortniteAIServer.Default__FortAthenaAIBotEvaluator_EvasiveManeuvers
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotEvaluator_EvasiveManeuvers* UFortAthenaAIBotEvaluator_EvasiveManeuvers::GetDefaultObj()
{
	static class UFortAthenaAIBotEvaluator_EvasiveManeuvers* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotEvaluator_EvasiveManeuvers*>(UFortAthenaAIBotEvaluator_EvasiveManeuvers::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAIServer.FortAthenaAIBotEvaluator_EvasiveManeuvers.OnMoveCompleted
// (Final, Native, Public)
// Parameters:
// struct FAIRequestID                RequestID                                                        (Parm, NoDestructor, NativeAccessSpecifierPublic)
// enum class EPathFollowingResult    MovementResult                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotEvaluator_EvasiveManeuvers::OnMoveCompleted(const struct FAIRequestID& RequestID, enum class EPathFollowingResult MovementResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotEvaluator_EvasiveManeuvers", "OnMoveCompleted");

	Params::UFortAthenaAIBotEvaluator_EvasiveManeuvers_OnMoveCompleted_Params Parms{};

	Parms.RequestID = RequestID;
	Parms.MovementResult = MovementResult;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FortniteAIServer.FortAthenaAIBotEvaluator_Flanking
// (None)

class UClass* UFortAthenaAIBotEvaluator_Flanking::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_Flanking");

	return Clss;
}


// FortAthenaAIBotEvaluator_Flanking FortniteAIServer.Default__FortAthenaAIBotEvaluator_Flanking
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotEvaluator_Flanking* UFortAthenaAIBotEvaluator_Flanking::GetDefaultObj()
{
	static class UFortAthenaAIBotEvaluator_Flanking* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotEvaluator_Flanking*>(UFortAthenaAIBotEvaluator_Flanking::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaAIBotEvaluator_Flee
// (None)

class UClass* UFortAthenaAIBotEvaluator_Flee::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_Flee");

	return Clss;
}


// FortAthenaAIBotEvaluator_Flee FortniteAIServer.Default__FortAthenaAIBotEvaluator_Flee
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotEvaluator_Flee* UFortAthenaAIBotEvaluator_Flee::GetDefaultObj()
{
	static class UFortAthenaAIBotEvaluator_Flee* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotEvaluator_Flee*>(UFortAthenaAIBotEvaluator_Flee::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaAIBotEvaluator_FreeFalling
// (None)

class UClass* UFortAthenaAIBotEvaluator_FreeFalling::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_FreeFalling");

	return Clss;
}


// FortAthenaAIBotEvaluator_FreeFalling FortniteAIServer.Default__FortAthenaAIBotEvaluator_FreeFalling
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotEvaluator_FreeFalling* UFortAthenaAIBotEvaluator_FreeFalling::GetDefaultObj()
{
	static class UFortAthenaAIBotEvaluator_FreeFalling* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotEvaluator_FreeFalling*>(UFortAthenaAIBotEvaluator_FreeFalling::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaAIBotEvaluator_Ground
// (None)

class UClass* UFortAthenaAIBotEvaluator_Ground::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_Ground");

	return Clss;
}


// FortAthenaAIBotEvaluator_Ground FortniteAIServer.Default__FortAthenaAIBotEvaluator_Ground
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotEvaluator_Ground* UFortAthenaAIBotEvaluator_Ground::GetDefaultObj()
{
	static class UFortAthenaAIBotEvaluator_Ground* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotEvaluator_Ground*>(UFortAthenaAIBotEvaluator_Ground::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaAIBotEvaluator_HandleFocusing
// (None)

class UClass* UFortAthenaAIBotEvaluator_HandleFocusing::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_HandleFocusing");

	return Clss;
}


// FortAthenaAIBotEvaluator_HandleFocusing FortniteAIServer.Default__FortAthenaAIBotEvaluator_HandleFocusing
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotEvaluator_HandleFocusing* UFortAthenaAIBotEvaluator_HandleFocusing::GetDefaultObj()
{
	static class UFortAthenaAIBotEvaluator_HandleFocusing* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotEvaluator_HandleFocusing*>(UFortAthenaAIBotEvaluator_HandleFocusing::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaAIBotEvaluator_Heal
// (None)

class UClass* UFortAthenaAIBotEvaluator_Heal::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_Heal");

	return Clss;
}


// FortAthenaAIBotEvaluator_Heal FortniteAIServer.Default__FortAthenaAIBotEvaluator_Heal
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotEvaluator_Heal* UFortAthenaAIBotEvaluator_Heal::GetDefaultObj()
{
	static class UFortAthenaAIBotEvaluator_Heal* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotEvaluator_Heal*>(UFortAthenaAIBotEvaluator_Heal::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAIServer.FortAthenaAIBotEvaluator_Heal.HandlePlayerHealthOrShieldChanged
// (Final, Native, Private)
// Parameters:

void UFortAthenaAIBotEvaluator_Heal::HandlePlayerHealthOrShieldChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotEvaluator_Heal", "HandlePlayerHealthOrShieldChanged");

	Params::UFortAthenaAIBotEvaluator_Heal_HandlePlayerHealthOrShieldChanged_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FortniteAIServer.FortAthenaAIBotEvaluator_HitAndRun
// (None)

class UClass* UFortAthenaAIBotEvaluator_HitAndRun::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_HitAndRun");

	return Clss;
}


// FortAthenaAIBotEvaluator_HitAndRun FortniteAIServer.Default__FortAthenaAIBotEvaluator_HitAndRun
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotEvaluator_HitAndRun* UFortAthenaAIBotEvaluator_HitAndRun::GetDefaultObj()
{
	static class UFortAthenaAIBotEvaluator_HitAndRun* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotEvaluator_HitAndRun*>(UFortAthenaAIBotEvaluator_HitAndRun::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaAIBotEvaluator_HolsterWeapon
// (None)

class UClass* UFortAthenaAIBotEvaluator_HolsterWeapon::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_HolsterWeapon");

	return Clss;
}


// FortAthenaAIBotEvaluator_HolsterWeapon FortniteAIServer.Default__FortAthenaAIBotEvaluator_HolsterWeapon
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotEvaluator_HolsterWeapon* UFortAthenaAIBotEvaluator_HolsterWeapon::GetDefaultObj()
{
	static class UFortAthenaAIBotEvaluator_HolsterWeapon* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotEvaluator_HolsterWeapon*>(UFortAthenaAIBotEvaluator_HolsterWeapon::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaAIBotEvaluator_Investigate
// (None)

class UClass* UFortAthenaAIBotEvaluator_Investigate::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_Investigate");

	return Clss;
}


// FortAthenaAIBotEvaluator_Investigate FortniteAIServer.Default__FortAthenaAIBotEvaluator_Investigate
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotEvaluator_Investigate* UFortAthenaAIBotEvaluator_Investigate::GetDefaultObj()
{
	static class UFortAthenaAIBotEvaluator_Investigate* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotEvaluator_Investigate*>(UFortAthenaAIBotEvaluator_Investigate::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaAIBotEvaluator_JumpOffBus
// (None)

class UClass* UFortAthenaAIBotEvaluator_JumpOffBus::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_JumpOffBus");

	return Clss;
}


// FortAthenaAIBotEvaluator_JumpOffBus FortniteAIServer.Default__FortAthenaAIBotEvaluator_JumpOffBus
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotEvaluator_JumpOffBus* UFortAthenaAIBotEvaluator_JumpOffBus::GetDefaultObj()
{
	static class UFortAthenaAIBotEvaluator_JumpOffBus* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotEvaluator_JumpOffBus*>(UFortAthenaAIBotEvaluator_JumpOffBus::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaAIBotEvaluator_MeleeAttack
// (None)

class UClass* UFortAthenaAIBotEvaluator_MeleeAttack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_MeleeAttack");

	return Clss;
}


// FortAthenaAIBotEvaluator_MeleeAttack FortniteAIServer.Default__FortAthenaAIBotEvaluator_MeleeAttack
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotEvaluator_MeleeAttack* UFortAthenaAIBotEvaluator_MeleeAttack::GetDefaultObj()
{
	static class UFortAthenaAIBotEvaluator_MeleeAttack* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotEvaluator_MeleeAttack*>(UFortAthenaAIBotEvaluator_MeleeAttack::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaAIBotEvaluator_Observe
// (None)

class UClass* UFortAthenaAIBotEvaluator_Observe::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_Observe");

	return Clss;
}


// FortAthenaAIBotEvaluator_Observe FortniteAIServer.Default__FortAthenaAIBotEvaluator_Observe
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotEvaluator_Observe* UFortAthenaAIBotEvaluator_Observe::GetDefaultObj()
{
	static class UFortAthenaAIBotEvaluator_Observe* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotEvaluator_Observe*>(UFortAthenaAIBotEvaluator_Observe::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaAIBotEvaluator_PathExists
// (None)

class UClass* UFortAthenaAIBotEvaluator_PathExists::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_PathExists");

	return Clss;
}


// FortAthenaAIBotEvaluator_PathExists FortniteAIServer.Default__FortAthenaAIBotEvaluator_PathExists
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotEvaluator_PathExists* UFortAthenaAIBotEvaluator_PathExists::GetDefaultObj()
{
	static class UFortAthenaAIBotEvaluator_PathExists* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotEvaluator_PathExists*>(UFortAthenaAIBotEvaluator_PathExists::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaAIBotEvaluator_PatrolAround
// (None)

class UClass* UFortAthenaAIBotEvaluator_PatrolAround::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_PatrolAround");

	return Clss;
}


// FortAthenaAIBotEvaluator_PatrolAround FortniteAIServer.Default__FortAthenaAIBotEvaluator_PatrolAround
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotEvaluator_PatrolAround* UFortAthenaAIBotEvaluator_PatrolAround::GetDefaultObj()
{
	static class UFortAthenaAIBotEvaluator_PatrolAround* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotEvaluator_PatrolAround*>(UFortAthenaAIBotEvaluator_PatrolAround::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaAIBotEvaluator_PlayEmote
// (None)

class UClass* UFortAthenaAIBotEvaluator_PlayEmote::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_PlayEmote");

	return Clss;
}


// FortAthenaAIBotEvaluator_PlayEmote FortniteAIServer.Default__FortAthenaAIBotEvaluator_PlayEmote
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotEvaluator_PlayEmote* UFortAthenaAIBotEvaluator_PlayEmote::GetDefaultObj()
{
	static class UFortAthenaAIBotEvaluator_PlayEmote* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotEvaluator_PlayEmote*>(UFortAthenaAIBotEvaluator_PlayEmote::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaAIBotEvaluator_PropagateAwareness
// (None)

class UClass* UFortAthenaAIBotEvaluator_PropagateAwareness::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_PropagateAwareness");

	return Clss;
}


// FortAthenaAIBotEvaluator_PropagateAwareness FortniteAIServer.Default__FortAthenaAIBotEvaluator_PropagateAwareness
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotEvaluator_PropagateAwareness* UFortAthenaAIBotEvaluator_PropagateAwareness::GetDefaultObj()
{
	static class UFortAthenaAIBotEvaluator_PropagateAwareness* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotEvaluator_PropagateAwareness*>(UFortAthenaAIBotEvaluator_PropagateAwareness::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaAIBotEvaluator_RangeAttack
// (None)

class UClass* UFortAthenaAIBotEvaluator_RangeAttack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_RangeAttack");

	return Clss;
}


// FortAthenaAIBotEvaluator_RangeAttack FortniteAIServer.Default__FortAthenaAIBotEvaluator_RangeAttack
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotEvaluator_RangeAttack* UFortAthenaAIBotEvaluator_RangeAttack::GetDefaultObj()
{
	static class UFortAthenaAIBotEvaluator_RangeAttack* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotEvaluator_RangeAttack*>(UFortAthenaAIBotEvaluator_RangeAttack::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaAIBotEvaluator_ReachBeacon
// (None)

class UClass* UFortAthenaAIBotEvaluator_ReachBeacon::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_ReachBeacon");

	return Clss;
}


// FortAthenaAIBotEvaluator_ReachBeacon FortniteAIServer.Default__FortAthenaAIBotEvaluator_ReachBeacon
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotEvaluator_ReachBeacon* UFortAthenaAIBotEvaluator_ReachBeacon::GetDefaultObj()
{
	static class UFortAthenaAIBotEvaluator_ReachBeacon* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotEvaluator_ReachBeacon*>(UFortAthenaAIBotEvaluator_ReachBeacon::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaAIBotEvaluator_RecoverLineOfSight
// (None)

class UClass* UFortAthenaAIBotEvaluator_RecoverLineOfSight::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_RecoverLineOfSight");

	return Clss;
}


// FortAthenaAIBotEvaluator_RecoverLineOfSight FortniteAIServer.Default__FortAthenaAIBotEvaluator_RecoverLineOfSight
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotEvaluator_RecoverLineOfSight* UFortAthenaAIBotEvaluator_RecoverLineOfSight::GetDefaultObj()
{
	static class UFortAthenaAIBotEvaluator_RecoverLineOfSight* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotEvaluator_RecoverLineOfSight*>(UFortAthenaAIBotEvaluator_RecoverLineOfSight::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaAIBotEvaluator_ReloadWeapon
// (None)

class UClass* UFortAthenaAIBotEvaluator_ReloadWeapon::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_ReloadWeapon");

	return Clss;
}


// FortAthenaAIBotEvaluator_ReloadWeapon FortniteAIServer.Default__FortAthenaAIBotEvaluator_ReloadWeapon
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotEvaluator_ReloadWeapon* UFortAthenaAIBotEvaluator_ReloadWeapon::GetDefaultObj()
{
	static class UFortAthenaAIBotEvaluator_ReloadWeapon* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotEvaluator_ReloadWeapon*>(UFortAthenaAIBotEvaluator_ReloadWeapon::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaAIBotEvaluator_Retreat
// (None)

class UClass* UFortAthenaAIBotEvaluator_Retreat::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_Retreat");

	return Clss;
}


// FortAthenaAIBotEvaluator_Retreat FortniteAIServer.Default__FortAthenaAIBotEvaluator_Retreat
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotEvaluator_Retreat* UFortAthenaAIBotEvaluator_Retreat::GetDefaultObj()
{
	static class UFortAthenaAIBotEvaluator_Retreat* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotEvaluator_Retreat*>(UFortAthenaAIBotEvaluator_Retreat::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAIServer.FortAthenaAIBotEvaluator_Retreat.HandlePlayerHealthOrShieldChanged
// (Final, Native, Protected)
// Parameters:

void UFortAthenaAIBotEvaluator_Retreat::HandlePlayerHealthOrShieldChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotEvaluator_Retreat", "HandlePlayerHealthOrShieldChanged");

	Params::UFortAthenaAIBotEvaluator_Retreat_HandlePlayerHealthOrShieldChanged_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FortniteAIServer.FortAthenaAIBotEvaluator_Revive
// (None)

class UClass* UFortAthenaAIBotEvaluator_Revive::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_Revive");

	return Clss;
}


// FortAthenaAIBotEvaluator_Revive FortniteAIServer.Default__FortAthenaAIBotEvaluator_Revive
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotEvaluator_Revive* UFortAthenaAIBotEvaluator_Revive::GetDefaultObj()
{
	static class UFortAthenaAIBotEvaluator_Revive* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotEvaluator_Revive*>(UFortAthenaAIBotEvaluator_Revive::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAIServer.FortAthenaAIBotEvaluator_Revive.OnCurrentTargetRevived
// (Final, Native, Private)
// Parameters:
// class UFortPlayerPawn*             RevivedPawn                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotEvaluator_Revive::OnCurrentTargetRevived(class UFortPlayerPawn* RevivedPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotEvaluator_Revive", "OnCurrentTargetRevived");

	Params::UFortAthenaAIBotEvaluator_Revive_OnCurrentTargetRevived_Params Parms{};

	Parms.RevivedPawn = RevivedPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FortniteAIServer.FortAthenaAIBotEvaluator_SandTunnel
// (None)

class UClass* UFortAthenaAIBotEvaluator_SandTunnel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_SandTunnel");

	return Clss;
}


// FortAthenaAIBotEvaluator_SandTunnel FortniteAIServer.Default__FortAthenaAIBotEvaluator_SandTunnel
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotEvaluator_SandTunnel* UFortAthenaAIBotEvaluator_SandTunnel::GetDefaultObj()
{
	static class UFortAthenaAIBotEvaluator_SandTunnel* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotEvaluator_SandTunnel*>(UFortAthenaAIBotEvaluator_SandTunnel::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAIServer.FortAthenaAIBotEvaluator_SandTunnel.OnBotControllerAlertLevelChanged
// (Final, Native, Private)
// Parameters:
// class UFortAthenaAIBotController*  BotController                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAlertLevel             OldAlertLevel                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAlertLevel             NewAlertLevel                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotEvaluator_SandTunnel::OnBotControllerAlertLevelChanged(class UFortAthenaAIBotController* BotController, enum class EAlertLevel OldAlertLevel, enum class EAlertLevel NewAlertLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotEvaluator_SandTunnel", "OnBotControllerAlertLevelChanged");

	Params::UFortAthenaAIBotEvaluator_SandTunnel_OnBotControllerAlertLevelChanged_Params Parms{};

	Parms.BotController = BotController;
	Parms.OldAlertLevel = OldAlertLevel;
	Parms.NewAlertLevel = NewAlertLevel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAIServer.FortAthenaAIBotEvaluator_SandTunnel.Jump
// (Final, Native, Protected)
// Parameters:

void UFortAthenaAIBotEvaluator_SandTunnel::Jump()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotEvaluator_SandTunnel", "Jump");

	Params::UFortAthenaAIBotEvaluator_SandTunnel_Jump_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FortniteAIServer.FortAthenaAIBotEvaluator_SelectNextDynamicPOI
// (None)

class UClass* UFortAthenaAIBotEvaluator_SelectNextDynamicPOI::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_SelectNextDynamicPOI");

	return Clss;
}


// FortAthenaAIBotEvaluator_SelectNextDynamicPOI FortniteAIServer.Default__FortAthenaAIBotEvaluator_SelectNextDynamicPOI
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotEvaluator_SelectNextDynamicPOI* UFortAthenaAIBotEvaluator_SelectNextDynamicPOI::GetDefaultObj()
{
	static class UFortAthenaAIBotEvaluator_SelectNextDynamicPOI* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotEvaluator_SelectNextDynamicPOI*>(UFortAthenaAIBotEvaluator_SelectNextDynamicPOI::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAIServer.FortAthenaAIBotEvaluator_SelectNextDynamicPOI.OnSafeZonePhaseChanged
// (Final, Native, Private, HasOutParams)
// Parameters:
// struct FFortSafeZonePhaseUpdatedEventEvent                                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UFortAthenaAIBotEvaluator_SelectNextDynamicPOI::OnSafeZonePhaseChanged(struct FFortSafeZonePhaseUpdatedEvent& Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotEvaluator_SelectNextDynamicPOI", "OnSafeZonePhaseChanged");

	Params::UFortAthenaAIBotEvaluator_SelectNextDynamicPOI_OnSafeZonePhaseChanged_Params Parms{};

	Parms.Event = Event;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAIServer.FortAthenaAIBotEvaluator_SelectNextDynamicPOI.OnGamePhaseLogicReady
// (Final, Native, Private, HasOutParams)
// Parameters:
// struct FFortBattleRoyaleGamePhaseLogicComponentReadyEventEvent                                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UFortAthenaAIBotEvaluator_SelectNextDynamicPOI::OnGamePhaseLogicReady(struct FFortBattleRoyaleGamePhaseLogicComponentReadyEvent& Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotEvaluator_SelectNextDynamicPOI", "OnGamePhaseLogicReady");

	Params::UFortAthenaAIBotEvaluator_SelectNextDynamicPOI_OnGamePhaseLogicReady_Params Parms{};

	Parms.Event = Event;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FortniteAIServer.FortAthenaAIBotEvaluator_SelectNextPOI
// (None)

class UClass* UFortAthenaAIBotEvaluator_SelectNextPOI::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_SelectNextPOI");

	return Clss;
}


// FortAthenaAIBotEvaluator_SelectNextPOI FortniteAIServer.Default__FortAthenaAIBotEvaluator_SelectNextPOI
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotEvaluator_SelectNextPOI* UFortAthenaAIBotEvaluator_SelectNextPOI::GetDefaultObj()
{
	static class UFortAthenaAIBotEvaluator_SelectNextPOI* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotEvaluator_SelectNextPOI*>(UFortAthenaAIBotEvaluator_SelectNextPOI::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaAIBotEvaluator_SelectVehicle
// (None)

class UClass* UFortAthenaAIBotEvaluator_SelectVehicle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_SelectVehicle");

	return Clss;
}


// FortAthenaAIBotEvaluator_SelectVehicle FortniteAIServer.Default__FortAthenaAIBotEvaluator_SelectVehicle
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotEvaluator_SelectVehicle* UFortAthenaAIBotEvaluator_SelectVehicle::GetDefaultObj()
{
	static class UFortAthenaAIBotEvaluator_SelectVehicle* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotEvaluator_SelectVehicle*>(UFortAthenaAIBotEvaluator_SelectVehicle::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaAIBotEvaluator_SmartObjects
// (None)

class UClass* UFortAthenaAIBotEvaluator_SmartObjects::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_SmartObjects");

	return Clss;
}


// FortAthenaAIBotEvaluator_SmartObjects FortniteAIServer.Default__FortAthenaAIBotEvaluator_SmartObjects
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotEvaluator_SmartObjects* UFortAthenaAIBotEvaluator_SmartObjects::GetDefaultObj()
{
	static class UFortAthenaAIBotEvaluator_SmartObjects* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotEvaluator_SmartObjects*>(UFortAthenaAIBotEvaluator_SmartObjects::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaAIBotEvaluator_Sprinting
// (None)

class UClass* UFortAthenaAIBotEvaluator_Sprinting::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_Sprinting");

	return Clss;
}


// FortAthenaAIBotEvaluator_Sprinting FortniteAIServer.Default__FortAthenaAIBotEvaluator_Sprinting
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotEvaluator_Sprinting* UFortAthenaAIBotEvaluator_Sprinting::GetDefaultObj()
{
	static class UFortAthenaAIBotEvaluator_Sprinting* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotEvaluator_Sprinting*>(UFortAthenaAIBotEvaluator_Sprinting::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaAIBotEvaluator_StealWall
// (None)

class UClass* UFortAthenaAIBotEvaluator_StealWall::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_StealWall");

	return Clss;
}


// FortAthenaAIBotEvaluator_StealWall FortniteAIServer.Default__FortAthenaAIBotEvaluator_StealWall
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotEvaluator_StealWall* UFortAthenaAIBotEvaluator_StealWall::GetDefaultObj()
{
	static class UFortAthenaAIBotEvaluator_StealWall* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotEvaluator_StealWall*>(UFortAthenaAIBotEvaluator_StealWall::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaAIBotEvaluator_StepBack
// (None)

class UClass* UFortAthenaAIBotEvaluator_StepBack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_StepBack");

	return Clss;
}


// FortAthenaAIBotEvaluator_StepBack FortniteAIServer.Default__FortAthenaAIBotEvaluator_StepBack
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotEvaluator_StepBack* UFortAthenaAIBotEvaluator_StepBack::GetDefaultObj()
{
	static class UFortAthenaAIBotEvaluator_StepBack* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotEvaluator_StepBack*>(UFortAthenaAIBotEvaluator_StepBack::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaAIBotEvaluator_Storm
// (None)

class UClass* UFortAthenaAIBotEvaluator_Storm::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_Storm");

	return Clss;
}


// FortAthenaAIBotEvaluator_Storm FortniteAIServer.Default__FortAthenaAIBotEvaluator_Storm
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotEvaluator_Storm* UFortAthenaAIBotEvaluator_Storm::GetDefaultObj()
{
	static class UFortAthenaAIBotEvaluator_Storm* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotEvaluator_Storm*>(UFortAthenaAIBotEvaluator_Storm::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAIServer.FortAthenaAIBotEvaluator_Storm.OnSafeZoneStateChanged
// (Final, Native, Public)
// Parameters:
// enum class EFortSafeZoneState      NewState                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotEvaluator_Storm::OnSafeZoneStateChanged(enum class EFortSafeZoneState NewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotEvaluator_Storm", "OnSafeZoneStateChanged");

	Params::UFortAthenaAIBotEvaluator_Storm_OnSafeZoneStateChanged_Params Parms{};

	Parms.NewState = NewState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAIServer.FortAthenaAIBotEvaluator_Storm.OnSafeZonePhaseChanged
// (Final, Native, Public)
// Parameters:

void UFortAthenaAIBotEvaluator_Storm::OnSafeZonePhaseChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotEvaluator_Storm", "OnSafeZonePhaseChanged");

	Params::UFortAthenaAIBotEvaluator_Storm_OnSafeZonePhaseChanged_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FortniteAIServer.FortAthenaAIBotEvaluator_TagQueryToBBKey
// (None)

class UClass* UFortAthenaAIBotEvaluator_TagQueryToBBKey::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_TagQueryToBBKey");

	return Clss;
}


// FortAthenaAIBotEvaluator_TagQueryToBBKey FortniteAIServer.Default__FortAthenaAIBotEvaluator_TagQueryToBBKey
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotEvaluator_TagQueryToBBKey* UFortAthenaAIBotEvaluator_TagQueryToBBKey::GetDefaultObj()
{
	static class UFortAthenaAIBotEvaluator_TagQueryToBBKey* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotEvaluator_TagQueryToBBKey*>(UFortAthenaAIBotEvaluator_TagQueryToBBKey::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaAIBotEvaluator_TakeCover
// (None)

class UClass* UFortAthenaAIBotEvaluator_TakeCover::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_TakeCover");

	return Clss;
}


// FortAthenaAIBotEvaluator_TakeCover FortniteAIServer.Default__FortAthenaAIBotEvaluator_TakeCover
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotEvaluator_TakeCover* UFortAthenaAIBotEvaluator_TakeCover::GetDefaultObj()
{
	static class UFortAthenaAIBotEvaluator_TakeCover* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotEvaluator_TakeCover*>(UFortAthenaAIBotEvaluator_TakeCover::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaAIBotEvaluator_ThrowableAttack
// (None)

class UClass* UFortAthenaAIBotEvaluator_ThrowableAttack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_ThrowableAttack");

	return Clss;
}


// FortAthenaAIBotEvaluator_ThrowableAttack FortniteAIServer.Default__FortAthenaAIBotEvaluator_ThrowableAttack
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotEvaluator_ThrowableAttack* UFortAthenaAIBotEvaluator_ThrowableAttack::GetDefaultObj()
{
	static class UFortAthenaAIBotEvaluator_ThrowableAttack* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotEvaluator_ThrowableAttack*>(UFortAthenaAIBotEvaluator_ThrowableAttack::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaAIBotEvaluator_TrapOnPathDetected
// (None)

class UClass* UFortAthenaAIBotEvaluator_TrapOnPathDetected::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_TrapOnPathDetected");

	return Clss;
}


// FortAthenaAIBotEvaluator_TrapOnPathDetected FortniteAIServer.Default__FortAthenaAIBotEvaluator_TrapOnPathDetected
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotEvaluator_TrapOnPathDetected* UFortAthenaAIBotEvaluator_TrapOnPathDetected::GetDefaultObj()
{
	static class UFortAthenaAIBotEvaluator_TrapOnPathDetected* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotEvaluator_TrapOnPathDetected*>(UFortAthenaAIBotEvaluator_TrapOnPathDetected::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaAIBotEvaluator_VehicleLeaveSeat
// (None)

class UClass* UFortAthenaAIBotEvaluator_VehicleLeaveSeat::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_VehicleLeaveSeat");

	return Clss;
}


// FortAthenaAIBotEvaluator_VehicleLeaveSeat FortniteAIServer.Default__FortAthenaAIBotEvaluator_VehicleLeaveSeat
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotEvaluator_VehicleLeaveSeat* UFortAthenaAIBotEvaluator_VehicleLeaveSeat::GetDefaultObj()
{
	static class UFortAthenaAIBotEvaluator_VehicleLeaveSeat* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotEvaluator_VehicleLeaveSeat*>(UFortAthenaAIBotEvaluator_VehicleLeaveSeat::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaAIBotEvaluator_VehicleSwitchSeat
// (None)

class UClass* UFortAthenaAIBotEvaluator_VehicleSwitchSeat::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_VehicleSwitchSeat");

	return Clss;
}


// FortAthenaAIBotEvaluator_VehicleSwitchSeat FortniteAIServer.Default__FortAthenaAIBotEvaluator_VehicleSwitchSeat
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotEvaluator_VehicleSwitchSeat* UFortAthenaAIBotEvaluator_VehicleSwitchSeat::GetDefaultObj()
{
	static class UFortAthenaAIBotEvaluator_VehicleSwitchSeat* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotEvaluator_VehicleSwitchSeat*>(UFortAthenaAIBotEvaluator_VehicleSwitchSeat::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaAIBotEvaluator_WaitForPassengers
// (None)

class UClass* UFortAthenaAIBotEvaluator_WaitForPassengers::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_WaitForPassengers");

	return Clss;
}


// FortAthenaAIBotEvaluator_WaitForPassengers FortniteAIServer.Default__FortAthenaAIBotEvaluator_WaitForPassengers
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotEvaluator_WaitForPassengers* UFortAthenaAIBotEvaluator_WaitForPassengers::GetDefaultObj()
{
	static class UFortAthenaAIBotEvaluator_WaitForPassengers* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotEvaluator_WaitForPassengers*>(UFortAthenaAIBotEvaluator_WaitForPassengers::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaAIBotEvaluator_Warmup
// (None)

class UClass* UFortAthenaAIBotEvaluator_Warmup::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_Warmup");

	return Clss;
}


// FortAthenaAIBotEvaluator_Warmup FortniteAIServer.Default__FortAthenaAIBotEvaluator_Warmup
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotEvaluator_Warmup* UFortAthenaAIBotEvaluator_Warmup::GetDefaultObj()
{
	static class UFortAthenaAIBotEvaluator_Warmup* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotEvaluator_Warmup*>(UFortAthenaAIBotEvaluator_Warmup::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaAIBotEvaluator_WeaponSelection
// (None)

class UClass* UFortAthenaAIBotEvaluator_WeaponSelection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_WeaponSelection");

	return Clss;
}


// FortAthenaAIBotEvaluator_WeaponSelection FortniteAIServer.Default__FortAthenaAIBotEvaluator_WeaponSelection
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotEvaluator_WeaponSelection* UFortAthenaAIBotEvaluator_WeaponSelection::GetDefaultObj()
{
	static class UFortAthenaAIBotEvaluator_WeaponSelection* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotEvaluator_WeaponSelection*>(UFortAthenaAIBotEvaluator_WeaponSelection::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaAIBotEvaluator_Zipline
// (None)

class UClass* UFortAthenaAIBotEvaluator_Zipline::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_Zipline");

	return Clss;
}


// FortAthenaAIBotEvaluator_Zipline FortniteAIServer.Default__FortAthenaAIBotEvaluator_Zipline
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotEvaluator_Zipline* UFortAthenaAIBotEvaluator_Zipline::GetDefaultObj()
{
	static class UFortAthenaAIBotEvaluator_Zipline* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotEvaluator_Zipline*>(UFortAthenaAIBotEvaluator_Zipline::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAIServer.FortAthenaAIBotEvaluator_Zipline.OnZiplineStateChanged
// (Final, Native, Protected)
// Parameters:
// bool                               bIsZiplining                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPlayerPawn*             FortPlayerPawn                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotEvaluator_Zipline::OnZiplineStateChanged(bool bIsZiplining, class UFortPlayerPawn* FortPlayerPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotEvaluator_Zipline", "OnZiplineStateChanged");

	Params::UFortAthenaAIBotEvaluator_Zipline_OnZiplineStateChanged_Params Parms{};

	Parms.bIsZiplining = bIsZiplining;
	Parms.FortPlayerPawn = FortPlayerPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FortniteAIServer.FortAthenaAIEvaluator_BlueprintBase
// (None)

class UClass* UFortAthenaAIEvaluator_BlueprintBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIEvaluator_BlueprintBase");

	return Clss;
}


// FortAthenaAIEvaluator_BlueprintBase FortniteAIServer.Default__FortAthenaAIEvaluator_BlueprintBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIEvaluator_BlueprintBase* UFortAthenaAIEvaluator_BlueprintBase::GetDefaultObj()
{
	static class UFortAthenaAIEvaluator_BlueprintBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIEvaluator_BlueprintBase*>(UFortAthenaAIEvaluator_BlueprintBase::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAIServer.FortAthenaAIEvaluator_BlueprintBase.OnExit
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UBehaviorTreeComponent*      OwnerComp                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIEvaluator_BlueprintBase::OnExit(class UBehaviorTreeComponent* OwnerComp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIEvaluator_BlueprintBase", "OnExit");

	Params::UFortAthenaAIEvaluator_BlueprintBase_OnExit_Params Parms{};

	Parms.OwnerComp = OwnerComp;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteAIServer.FortAthenaAIEvaluator_BlueprintBase.OnEnter
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UBehaviorTreeComponent*      OwnerComp                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIEvaluator_BlueprintBase::OnEnter(class UBehaviorTreeComponent* OwnerComp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIEvaluator_BlueprintBase", "OnEnter");

	Params::UFortAthenaAIEvaluator_BlueprintBase_OnEnter_Params Parms{};

	Parms.OwnerComp = OwnerComp;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteAIServer.FortAthenaAIEvaluator_BlueprintBase.EvaluateStartingConditions
// (Native, Event, Protected, BlueprintEvent, Const)
// Parameters:
// class UBehaviorTreeComponent*      OwnerComp                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAthenaAIEvaluator_BlueprintBase::EvaluateStartingConditions(class UBehaviorTreeComponent* OwnerComp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIEvaluator_BlueprintBase", "EvaluateStartingConditions");

	Params::UFortAthenaAIEvaluator_BlueprintBase_EvaluateStartingConditions_Params Parms{};

	Parms.OwnerComp = OwnerComp;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAIServer.FortAthenaAIEvaluator_BlueprintBase.EvaluateOngoingConditions
// (Native, Event, Protected, BlueprintEvent, Const)
// Parameters:
// class UBehaviorTreeComponent*      OwnerComp                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAthenaAIEvaluator_BlueprintBase::EvaluateOngoingConditions(class UBehaviorTreeComponent* OwnerComp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIEvaluator_BlueprintBase", "EvaluateOngoingConditions");

	Params::UFortAthenaAIEvaluator_BlueprintBase_EvaluateOngoingConditions_Params Parms{};

	Parms.OwnerComp = OwnerComp;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class FortniteAIServer.FortAthenaAIEvaluator_DormantUntilPhase
// (None)

class UClass* UFortAthenaAIEvaluator_DormantUntilPhase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIEvaluator_DormantUntilPhase");

	return Clss;
}


// FortAthenaAIEvaluator_DormantUntilPhase FortniteAIServer.Default__FortAthenaAIEvaluator_DormantUntilPhase
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIEvaluator_DormantUntilPhase* UFortAthenaAIEvaluator_DormantUntilPhase::GetDefaultObj()
{
	static class UFortAthenaAIEvaluator_DormantUntilPhase* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIEvaluator_DormantUntilPhase*>(UFortAthenaAIEvaluator_DormantUntilPhase::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAIServer.FortAthenaAIEvaluator_DormantUntilPhase.HandleGamePhaseStepChanged
// (Final, Native, Private, HasOutParams)
// Parameters:
// TScriptInterface<class UFortSafeZoneInterface>SafeZoneInterface                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAthenaGamePhaseStep    GamePhaseStep                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIEvaluator_DormantUntilPhase::HandleGamePhaseStepChanged(TScriptInterface<class UFortSafeZoneInterface>& SafeZoneInterface, enum class EAthenaGamePhaseStep GamePhaseStep)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIEvaluator_DormantUntilPhase", "HandleGamePhaseStepChanged");

	Params::UFortAthenaAIEvaluator_DormantUntilPhase_HandleGamePhaseStepChanged_Params Parms{};

	Parms.SafeZoneInterface = SafeZoneInterface;
	Parms.GamePhaseStep = GamePhaseStep;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FortniteAIServer.FortAthenaAIEvaluator_FleeEnvDanger
// (None)

class UClass* UFortAthenaAIEvaluator_FleeEnvDanger::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIEvaluator_FleeEnvDanger");

	return Clss;
}


// FortAthenaAIEvaluator_FleeEnvDanger FortniteAIServer.Default__FortAthenaAIEvaluator_FleeEnvDanger
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIEvaluator_FleeEnvDanger* UFortAthenaAIEvaluator_FleeEnvDanger::GetDefaultObj()
{
	static class UFortAthenaAIEvaluator_FleeEnvDanger* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIEvaluator_FleeEnvDanger*>(UFortAthenaAIEvaluator_FleeEnvDanger::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaAIEvaluator_FollowGroupLeader
// (None)

class UClass* UFortAthenaAIEvaluator_FollowGroupLeader::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIEvaluator_FollowGroupLeader");

	return Clss;
}


// FortAthenaAIEvaluator_FollowGroupLeader FortniteAIServer.Default__FortAthenaAIEvaluator_FollowGroupLeader
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIEvaluator_FollowGroupLeader* UFortAthenaAIEvaluator_FollowGroupLeader::GetDefaultObj()
{
	static class UFortAthenaAIEvaluator_FollowGroupLeader* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIEvaluator_FollowGroupLeader*>(UFortAthenaAIEvaluator_FollowGroupLeader::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaAIEvaluator_Leash
// (None)

class UClass* UFortAthenaAIEvaluator_Leash::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIEvaluator_Leash");

	return Clss;
}


// FortAthenaAIEvaluator_Leash FortniteAIServer.Default__FortAthenaAIEvaluator_Leash
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIEvaluator_Leash* UFortAthenaAIEvaluator_Leash::GetDefaultObj()
{
	static class UFortAthenaAIEvaluator_Leash* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIEvaluator_Leash*>(UFortAthenaAIEvaluator_Leash::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaAIEvaluator_NearbyActorsPerception
// (None)

class UClass* UFortAthenaAIEvaluator_NearbyActorsPerception::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIEvaluator_NearbyActorsPerception");

	return Clss;
}


// FortAthenaAIEvaluator_NearbyActorsPerception FortniteAIServer.Default__FortAthenaAIEvaluator_NearbyActorsPerception
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIEvaluator_NearbyActorsPerception* UFortAthenaAIEvaluator_NearbyActorsPerception::GetDefaultObj()
{
	static class UFortAthenaAIEvaluator_NearbyActorsPerception* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIEvaluator_NearbyActorsPerception*>(UFortAthenaAIEvaluator_NearbyActorsPerception::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaAIEvaluator_SpeechBubble
// (None)

class UClass* UFortAthenaAIEvaluator_SpeechBubble::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIEvaluator_SpeechBubble");

	return Clss;
}


// FortAthenaAIEvaluator_SpeechBubble FortniteAIServer.Default__FortAthenaAIEvaluator_SpeechBubble
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIEvaluator_SpeechBubble* UFortAthenaAIEvaluator_SpeechBubble::GetDefaultObj()
{
	static class UFortAthenaAIEvaluator_SpeechBubble* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIEvaluator_SpeechBubble*>(UFortAthenaAIEvaluator_SpeechBubble::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaBTContext_SuppressAutomaticAttackCheck
// (None)

class UClass* UFortAthenaBTContext_SuppressAutomaticAttackCheck::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaBTContext_SuppressAutomaticAttackCheck");

	return Clss;
}


// FortAthenaBTContext_SuppressAutomaticAttackCheck FortniteAIServer.Default__FortAthenaBTContext_SuppressAutomaticAttackCheck
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaBTContext_SuppressAutomaticAttackCheck* UFortAthenaBTContext_SuppressAutomaticAttackCheck::GetDefaultObj()
{
	static class UFortAthenaBTContext_SuppressAutomaticAttackCheck* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaBTContext_SuppressAutomaticAttackCheck*>(UFortAthenaBTContext_SuppressAutomaticAttackCheck::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaBTService_AIEvaluator
// (None)

class UClass* UFortAthenaBTService_AIEvaluator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaBTService_AIEvaluator");

	return Clss;
}


// FortAthenaBTService_AIEvaluator FortniteAIServer.Default__FortAthenaBTService_AIEvaluator
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaBTService_AIEvaluator* UFortAthenaBTService_AIEvaluator::GetDefaultObj()
{
	static class UFortAthenaBTService_AIEvaluator* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaBTService_AIEvaluator*>(UFortAthenaBTService_AIEvaluator::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaBTService_ApplyGameplayTags
// (None)

class UClass* UFortAthenaBTService_ApplyGameplayTags::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaBTService_ApplyGameplayTags");

	return Clss;
}


// FortAthenaBTService_ApplyGameplayTags FortniteAIServer.Default__FortAthenaBTService_ApplyGameplayTags
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaBTService_ApplyGameplayTags* UFortAthenaBTService_ApplyGameplayTags::GetDefaultObj()
{
	static class UFortAthenaBTService_ApplyGameplayTags* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaBTService_ApplyGameplayTags*>(UFortAthenaBTService_ApplyGameplayTags::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaBTService_BuildConstruction
// (None)

class UClass* UFortAthenaBTService_BuildConstruction::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaBTService_BuildConstruction");

	return Clss;
}


// FortAthenaBTService_BuildConstruction FortniteAIServer.Default__FortAthenaBTService_BuildConstruction
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaBTService_BuildConstruction* UFortAthenaBTService_BuildConstruction::GetDefaultObj()
{
	static class UFortAthenaBTService_BuildConstruction* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaBTService_BuildConstruction*>(UFortAthenaBTService_BuildConstruction::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaBTService_Clamber
// (None)

class UClass* UFortAthenaBTService_Clamber::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaBTService_Clamber");

	return Clss;
}


// FortAthenaBTService_Clamber FortniteAIServer.Default__FortAthenaBTService_Clamber
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaBTService_Clamber* UFortAthenaBTService_Clamber::GetDefaultObj()
{
	static class UFortAthenaBTService_Clamber* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaBTService_Clamber*>(UFortAthenaBTService_Clamber::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaBTService_CopyBlackboardVariable
// (None)

class UClass* UFortAthenaBTService_CopyBlackboardVariable::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaBTService_CopyBlackboardVariable");

	return Clss;
}


// FortAthenaBTService_CopyBlackboardVariable FortniteAIServer.Default__FortAthenaBTService_CopyBlackboardVariable
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaBTService_CopyBlackboardVariable* UFortAthenaBTService_CopyBlackboardVariable::GetDefaultObj()
{
	static class UFortAthenaBTService_CopyBlackboardVariable* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaBTService_CopyBlackboardVariable*>(UFortAthenaBTService_CopyBlackboardVariable::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaBTService_Crouch
// (None)

class UClass* UFortAthenaBTService_Crouch::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaBTService_Crouch");

	return Clss;
}


// FortAthenaBTService_Crouch FortniteAIServer.Default__FortAthenaBTService_Crouch
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaBTService_Crouch* UFortAthenaBTService_Crouch::GetDefaultObj()
{
	static class UFortAthenaBTService_Crouch* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaBTService_Crouch*>(UFortAthenaBTService_Crouch::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaBTService_DontForgetCurrentThreat
// (None)

class UClass* UFortAthenaBTService_DontForgetCurrentThreat::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaBTService_DontForgetCurrentThreat");

	return Clss;
}


// FortAthenaBTService_DontForgetCurrentThreat FortniteAIServer.Default__FortAthenaBTService_DontForgetCurrentThreat
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaBTService_DontForgetCurrentThreat* UFortAthenaBTService_DontForgetCurrentThreat::GetDefaultObj()
{
	static class UFortAthenaBTService_DontForgetCurrentThreat* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaBTService_DontForgetCurrentThreat*>(UFortAthenaBTService_DontForgetCurrentThreat::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaBTService_Escape
// (None)

class UClass* UFortAthenaBTService_Escape::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaBTService_Escape");

	return Clss;
}


// FortAthenaBTService_Escape FortniteAIServer.Default__FortAthenaBTService_Escape
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaBTService_Escape* UFortAthenaBTService_Escape::GetDefaultObj()
{
	static class UFortAthenaBTService_Escape* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaBTService_Escape*>(UFortAthenaBTService_Escape::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaBTService_Interact
// (None)

class UClass* UFortAthenaBTService_Interact::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaBTService_Interact");

	return Clss;
}


// FortAthenaBTService_Interact FortniteAIServer.Default__FortAthenaBTService_Interact
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaBTService_Interact* UFortAthenaBTService_Interact::GetDefaultObj()
{
	static class UFortAthenaBTService_Interact* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaBTService_Interact*>(UFortAthenaBTService_Interact::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaBTService_Jump
// (None)

class UClass* UFortAthenaBTService_Jump::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaBTService_Jump");

	return Clss;
}


// FortAthenaBTService_Jump FortniteAIServer.Default__FortAthenaBTService_Jump
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaBTService_Jump* UFortAthenaBTService_Jump::GetDefaultObj()
{
	static class UFortAthenaBTService_Jump* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaBTService_Jump*>(UFortAthenaBTService_Jump::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaBTService_JetpackStrafe
// (None)

class UClass* UFortAthenaBTService_JetpackStrafe::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaBTService_JetpackStrafe");

	return Clss;
}


// FortAthenaBTService_JetpackStrafe FortniteAIServer.Default__FortAthenaBTService_JetpackStrafe
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaBTService_JetpackStrafe* UFortAthenaBTService_JetpackStrafe::GetDefaultObj()
{
	static class UFortAthenaBTService_JetpackStrafe* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaBTService_JetpackStrafe*>(UFortAthenaBTService_JetpackStrafe::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaBTService_JumpOffBus
// (None)

class UClass* UFortAthenaBTService_JumpOffBus::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaBTService_JumpOffBus");

	return Clss;
}


// FortAthenaBTService_JumpOffBus FortniteAIServer.Default__FortAthenaBTService_JumpOffBus
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaBTService_JumpOffBus* UFortAthenaBTService_JumpOffBus::GetDefaultObj()
{
	static class UFortAthenaBTService_JumpOffBus* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaBTService_JumpOffBus*>(UFortAthenaBTService_JumpOffBus::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaBTService_ManageWeapon
// (None)

class UClass* UFortAthenaBTService_ManageWeapon::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaBTService_ManageWeapon");

	return Clss;
}


// FortAthenaBTService_ManageWeapon FortniteAIServer.Default__FortAthenaBTService_ManageWeapon
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaBTService_ManageWeapon* UFortAthenaBTService_ManageWeapon::GetDefaultObj()
{
	static class UFortAthenaBTService_ManageWeapon* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaBTService_ManageWeapon*>(UFortAthenaBTService_ManageWeapon::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAIServer.FortAthenaBTService_ManageWeapon.ManageWeaponTargeting
// (Final, Native, Protected, Const)
// Parameters:
// class UBehaviorTreeComponent*      OwnerComp                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaBTService_ManageWeapon::ManageWeaponTargeting(class UBehaviorTreeComponent* OwnerComp)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaBTService_ManageWeapon", "ManageWeaponTargeting");

	Params::UFortAthenaBTService_ManageWeapon_ManageWeaponTargeting_Params Parms{};

	Parms.OwnerComp = OwnerComp;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FortniteAIServer.FortAthenaBTService_ManageVehicleWeapon
// (None)

class UClass* UFortAthenaBTService_ManageVehicleWeapon::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaBTService_ManageVehicleWeapon");

	return Clss;
}


// FortAthenaBTService_ManageVehicleWeapon FortniteAIServer.Default__FortAthenaBTService_ManageVehicleWeapon
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaBTService_ManageVehicleWeapon* UFortAthenaBTService_ManageVehicleWeapon::GetDefaultObj()
{
	static class UFortAthenaBTService_ManageVehicleWeapon* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaBTService_ManageVehicleWeapon*>(UFortAthenaBTService_ManageVehicleWeapon::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaBTService_ModulateVehicleSpeedUsingDistBetween
// (None)

class UClass* UFortAthenaBTService_ModulateVehicleSpeedUsingDistBetween::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaBTService_ModulateVehicleSpeedUsingDistBetween");

	return Clss;
}


// FortAthenaBTService_ModulateVehicleSpeedUsingDistBetween FortniteAIServer.Default__FortAthenaBTService_ModulateVehicleSpeedUsingDistBetween
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaBTService_ModulateVehicleSpeedUsingDistBetween* UFortAthenaBTService_ModulateVehicleSpeedUsingDistBetween::GetDefaultObj()
{
	static class UFortAthenaBTService_ModulateVehicleSpeedUsingDistBetween* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaBTService_ModulateVehicleSpeedUsingDistBetween*>(UFortAthenaBTService_ModulateVehicleSpeedUsingDistBetween::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaBTService_Patrolling
// (None)

class UClass* UFortAthenaBTService_Patrolling::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaBTService_Patrolling");

	return Clss;
}


// FortAthenaBTService_Patrolling FortniteAIServer.Default__FortAthenaBTService_Patrolling
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaBTService_Patrolling* UFortAthenaBTService_Patrolling::GetDefaultObj()
{
	static class UFortAthenaBTService_Patrolling* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaBTService_Patrolling*>(UFortAthenaBTService_Patrolling::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaBTService_PauseVehicle
// (None)

class UClass* UFortAthenaBTService_PauseVehicle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaBTService_PauseVehicle");

	return Clss;
}


// FortAthenaBTService_PauseVehicle FortniteAIServer.Default__FortAthenaBTService_PauseVehicle
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaBTService_PauseVehicle* UFortAthenaBTService_PauseVehicle::GetDefaultObj()
{
	static class UFortAthenaBTService_PauseVehicle* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaBTService_PauseVehicle*>(UFortAthenaBTService_PauseVehicle::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaBTService_PickUpLoot
// (None)

class UClass* UFortAthenaBTService_PickUpLoot::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaBTService_PickUpLoot");

	return Clss;
}


// FortAthenaBTService_PickUpLoot FortniteAIServer.Default__FortAthenaBTService_PickUpLoot
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaBTService_PickUpLoot* UFortAthenaBTService_PickUpLoot::GetDefaultObj()
{
	static class UFortAthenaBTService_PickUpLoot* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaBTService_PickUpLoot*>(UFortAthenaBTService_PickUpLoot::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaBTService_PropagatePatrolProgressToPassengers
// (None)

class UClass* UFortAthenaBTService_PropagatePatrolProgressToPassengers::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaBTService_PropagatePatrolProgressToPassengers");

	return Clss;
}


// FortAthenaBTService_PropagatePatrolProgressToPassengers FortniteAIServer.Default__FortAthenaBTService_PropagatePatrolProgressToPassengers
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaBTService_PropagatePatrolProgressToPassengers* UFortAthenaBTService_PropagatePatrolProgressToPassengers::GetDefaultObj()
{
	static class UFortAthenaBTService_PropagatePatrolProgressToPassengers* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaBTService_PropagatePatrolProgressToPassengers*>(UFortAthenaBTService_PropagatePatrolProgressToPassengers::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaBTService_Revive
// (None)

class UClass* UFortAthenaBTService_Revive::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaBTService_Revive");

	return Clss;
}


// FortAthenaBTService_Revive FortniteAIServer.Default__FortAthenaBTService_Revive
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaBTService_Revive* UFortAthenaBTService_Revive::GetDefaultObj()
{
	static class UFortAthenaBTService_Revive* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaBTService_Revive*>(UFortAthenaBTService_Revive::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaBTService_SetBlackboardBool
// (None)

class UClass* UFortAthenaBTService_SetBlackboardBool::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaBTService_SetBlackboardBool");

	return Clss;
}


// FortAthenaBTService_SetBlackboardBool FortniteAIServer.Default__FortAthenaBTService_SetBlackboardBool
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaBTService_SetBlackboardBool* UFortAthenaBTService_SetBlackboardBool::GetDefaultObj()
{
	static class UFortAthenaBTService_SetBlackboardBool* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaBTService_SetBlackboardBool*>(UFortAthenaBTService_SetBlackboardBool::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaBTService_SetExecutionStatus
// (None)

class UClass* UFortAthenaBTService_SetExecutionStatus::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaBTService_SetExecutionStatus");

	return Clss;
}


// FortAthenaBTService_SetExecutionStatus FortniteAIServer.Default__FortAthenaBTService_SetExecutionStatus
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaBTService_SetExecutionStatus* UFortAthenaBTService_SetExecutionStatus::GetDefaultObj()
{
	static class UFortAthenaBTService_SetExecutionStatus* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaBTService_SetExecutionStatus*>(UFortAthenaBTService_SetExecutionStatus::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaBTService_Slide
// (None)

class UClass* UFortAthenaBTService_Slide::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaBTService_Slide");

	return Clss;
}


// FortAthenaBTService_Slide FortniteAIServer.Default__FortAthenaBTService_Slide
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaBTService_Slide* UFortAthenaBTService_Slide::GetDefaultObj()
{
	static class UFortAthenaBTService_Slide* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaBTService_Slide*>(UFortAthenaBTService_Slide::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAIServer.FortAthenaBTService_Slide.OnStopSliding
// (Final, Native, Private)
// Parameters:
// class UFortPlayerPawn*             Pawn                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaBTService_Slide::OnStopSliding(class UFortPlayerPawn* Pawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaBTService_Slide", "OnStopSliding");

	Params::UFortAthenaBTService_Slide_OnStopSliding_Params Parms{};

	Parms.Pawn = Pawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FortniteAIServer.FortAthenaBTService_SmartObject
// (None)

class UClass* UFortAthenaBTService_SmartObject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaBTService_SmartObject");

	return Clss;
}


// FortAthenaBTService_SmartObject FortniteAIServer.Default__FortAthenaBTService_SmartObject
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaBTService_SmartObject* UFortAthenaBTService_SmartObject::GetDefaultObj()
{
	static class UFortAthenaBTService_SmartObject* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaBTService_SmartObject*>(UFortAthenaBTService_SmartObject::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaBTService_Sprinting
// (None)

class UClass* UFortAthenaBTService_Sprinting::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaBTService_Sprinting");

	return Clss;
}


// FortAthenaBTService_Sprinting FortniteAIServer.Default__FortAthenaBTService_Sprinting
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaBTService_Sprinting* UFortAthenaBTService_Sprinting::GetDefaultObj()
{
	static class UFortAthenaBTService_Sprinting* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaBTService_Sprinting*>(UFortAthenaBTService_Sprinting::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaBTService_UpdateTarget
// (None)

class UClass* UFortAthenaBTService_UpdateTarget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaBTService_UpdateTarget");

	return Clss;
}


// FortAthenaBTService_UpdateTarget FortniteAIServer.Default__FortAthenaBTService_UpdateTarget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaBTService_UpdateTarget* UFortAthenaBTService_UpdateTarget::GetDefaultObj()
{
	static class UFortAthenaBTService_UpdateTarget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaBTService_UpdateTarget*>(UFortAthenaBTService_UpdateTarget::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaBTService_WaitForPassengers
// (None)

class UClass* UFortAthenaBTService_WaitForPassengers::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaBTService_WaitForPassengers");

	return Clss;
}


// FortAthenaBTService_WaitForPassengers FortniteAIServer.Default__FortAthenaBTService_WaitForPassengers
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaBTService_WaitForPassengers* UFortAthenaBTService_WaitForPassengers::GetDefaultObj()
{
	static class UFortAthenaBTService_WaitForPassengers* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaBTService_WaitForPassengers*>(UFortAthenaBTService_WaitForPassengers::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaBTService_Zipline
// (None)

class UClass* UFortAthenaBTService_Zipline::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaBTService_Zipline");

	return Clss;
}


// FortAthenaBTService_Zipline FortniteAIServer.Default__FortAthenaBTService_Zipline
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaBTService_Zipline* UFortAthenaBTService_Zipline::GetDefaultObj()
{
	static class UFortAthenaBTService_Zipline* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaBTService_Zipline*>(UFortAthenaBTService_Zipline::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaBTTask_ActivateVehicleBoost
// (None)

class UClass* UFortAthenaBTTask_ActivateVehicleBoost::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaBTTask_ActivateVehicleBoost");

	return Clss;
}


// FortAthenaBTTask_ActivateVehicleBoost FortniteAIServer.Default__FortAthenaBTTask_ActivateVehicleBoost
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaBTTask_ActivateVehicleBoost* UFortAthenaBTTask_ActivateVehicleBoost::GetDefaultObj()
{
	static class UFortAthenaBTTask_ActivateVehicleBoost* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaBTTask_ActivateVehicleBoost*>(UFortAthenaBTTask_ActivateVehicleBoost::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaBTTask_MoveTo
// (None)

class UClass* UFortAthenaBTTask_MoveTo::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaBTTask_MoveTo");

	return Clss;
}


// FortAthenaBTTask_MoveTo FortniteAIServer.Default__FortAthenaBTTask_MoveTo
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaBTTask_MoveTo* UFortAthenaBTTask_MoveTo::GetDefaultObj()
{
	static class UFortAthenaBTTask_MoveTo* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaBTTask_MoveTo*>(UFortAthenaBTTask_MoveTo::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaBTTask_BotMoveTo
// (None)

class UClass* UFortAthenaBTTask_BotMoveTo::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaBTTask_BotMoveTo");

	return Clss;
}


// FortAthenaBTTask_BotMoveTo FortniteAIServer.Default__FortAthenaBTTask_BotMoveTo
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaBTTask_BotMoveTo* UFortAthenaBTTask_BotMoveTo::GetDefaultObj()
{
	static class UFortAthenaBTTask_BotMoveTo* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaBTTask_BotMoveTo*>(UFortAthenaBTTask_BotMoveTo::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaBTTask_BotUnstuckTeleport
// (None)

class UClass* UFortAthenaBTTask_BotUnstuckTeleport::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaBTTask_BotUnstuckTeleport");

	return Clss;
}


// FortAthenaBTTask_BotUnstuckTeleport FortniteAIServer.Default__FortAthenaBTTask_BotUnstuckTeleport
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaBTTask_BotUnstuckTeleport* UFortAthenaBTTask_BotUnstuckTeleport::GetDefaultObj()
{
	static class UFortAthenaBTTask_BotUnstuckTeleport* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaBTTask_BotUnstuckTeleport*>(UFortAthenaBTTask_BotUnstuckTeleport::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaBTTask_BotWait
// (None)

class UClass* UFortAthenaBTTask_BotWait::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaBTTask_BotWait");

	return Clss;
}


// FortAthenaBTTask_BotWait FortniteAIServer.Default__FortAthenaBTTask_BotWait
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaBTTask_BotWait* UFortAthenaBTTask_BotWait::GetDefaultObj()
{
	static class UFortAthenaBTTask_BotWait* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaBTTask_BotWait*>(UFortAthenaBTTask_BotWait::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaBTTask_Build
// (None)

class UClass* UFortAthenaBTTask_Build::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaBTTask_Build");

	return Clss;
}


// FortAthenaBTTask_Build FortniteAIServer.Default__FortAthenaBTTask_Build
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaBTTask_Build* UFortAthenaBTTask_Build::GetDefaultObj()
{
	static class UFortAthenaBTTask_Build* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaBTTask_Build*>(UFortAthenaBTTask_Build::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaBTTask_Conversation
// (None)

class UClass* UFortAthenaBTTask_Conversation::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaBTTask_Conversation");

	return Clss;
}


// FortAthenaBTTask_Conversation FortniteAIServer.Default__FortAthenaBTTask_Conversation
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaBTTask_Conversation* UFortAthenaBTTask_Conversation::GetDefaultObj()
{
	static class UFortAthenaBTTask_Conversation* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaBTTask_Conversation*>(UFortAthenaBTTask_Conversation::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaBTTask_Dive
// (None)

class UClass* UFortAthenaBTTask_Dive::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaBTTask_Dive");

	return Clss;
}


// FortAthenaBTTask_Dive FortniteAIServer.Default__FortAthenaBTTask_Dive
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaBTTask_Dive* UFortAthenaBTTask_Dive::GetDefaultObj()
{
	static class UFortAthenaBTTask_Dive* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaBTTask_Dive*>(UFortAthenaBTTask_Dive::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaBTTask_EnterVehicle
// (None)

class UClass* UFortAthenaBTTask_EnterVehicle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaBTTask_EnterVehicle");

	return Clss;
}


// FortAthenaBTTask_EnterVehicle FortniteAIServer.Default__FortAthenaBTTask_EnterVehicle
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaBTTask_EnterVehicle* UFortAthenaBTTask_EnterVehicle::GetDefaultObj()
{
	static class UFortAthenaBTTask_EnterVehicle* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaBTTask_EnterVehicle*>(UFortAthenaBTTask_EnterVehicle::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaBTTask_Glide
// (None)

class UClass* UFortAthenaBTTask_Glide::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaBTTask_Glide");

	return Clss;
}


// FortAthenaBTTask_Glide FortniteAIServer.Default__FortAthenaBTTask_Glide
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaBTTask_Glide* UFortAthenaBTTask_Glide::GetDefaultObj()
{
	static class UFortAthenaBTTask_Glide* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaBTTask_Glide*>(UFortAthenaBTTask_Glide::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaBTTask_Interact
// (None)

class UClass* UFortAthenaBTTask_Interact::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaBTTask_Interact");

	return Clss;
}


// FortAthenaBTTask_Interact FortniteAIServer.Default__FortAthenaBTTask_Interact
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaBTTask_Interact* UFortAthenaBTTask_Interact::GetDefaultObj()
{
	static class UFortAthenaBTTask_Interact* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaBTTask_Interact*>(UFortAthenaBTTask_Interact::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaBTTask_LeaveVehicle
// (None)

class UClass* UFortAthenaBTTask_LeaveVehicle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaBTTask_LeaveVehicle");

	return Clss;
}


// FortAthenaBTTask_LeaveVehicle FortniteAIServer.Default__FortAthenaBTTask_LeaveVehicle
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaBTTask_LeaveVehicle* UFortAthenaBTTask_LeaveVehicle::GetDefaultObj()
{
	static class UFortAthenaBTTask_LeaveVehicle* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaBTTask_LeaveVehicle*>(UFortAthenaBTTask_LeaveVehicle::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaBTTask_ModulateVehicleSpeed
// (None)

class UClass* UFortAthenaBTTask_ModulateVehicleSpeed::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaBTTask_ModulateVehicleSpeed");

	return Clss;
}


// FortAthenaBTTask_ModulateVehicleSpeed FortniteAIServer.Default__FortAthenaBTTask_ModulateVehicleSpeed
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaBTTask_ModulateVehicleSpeed* UFortAthenaBTTask_ModulateVehicleSpeed::GetDefaultObj()
{
	static class UFortAthenaBTTask_ModulateVehicleSpeed* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaBTTask_ModulateVehicleSpeed*>(UFortAthenaBTTask_ModulateVehicleSpeed::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaBTTask_PauseVehicle
// (None)

class UClass* UFortAthenaBTTask_PauseVehicle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaBTTask_PauseVehicle");

	return Clss;
}


// FortAthenaBTTask_PauseVehicle FortniteAIServer.Default__FortAthenaBTTask_PauseVehicle
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaBTTask_PauseVehicle* UFortAthenaBTTask_PauseVehicle::GetDefaultObj()
{
	static class UFortAthenaBTTask_PauseVehicle* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaBTTask_PauseVehicle*>(UFortAthenaBTTask_PauseVehicle::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaBTTask_PlayEmote
// (None)

class UClass* UFortAthenaBTTask_PlayEmote::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaBTTask_PlayEmote");

	return Clss;
}


// FortAthenaBTTask_PlayEmote FortniteAIServer.Default__FortAthenaBTTask_PlayEmote
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaBTTask_PlayEmote* UFortAthenaBTTask_PlayEmote::GetDefaultObj()
{
	static class UFortAthenaBTTask_PlayEmote* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaBTTask_PlayEmote*>(UFortAthenaBTTask_PlayEmote::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaBTTask_ReverseVehicle
// (None)

class UClass* UFortAthenaBTTask_ReverseVehicle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaBTTask_ReverseVehicle");

	return Clss;
}


// FortAthenaBTTask_ReverseVehicle FortniteAIServer.Default__FortAthenaBTTask_ReverseVehicle
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaBTTask_ReverseVehicle* UFortAthenaBTTask_ReverseVehicle::GetDefaultObj()
{
	static class UFortAthenaBTTask_ReverseVehicle* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaBTTask_ReverseVehicle*>(UFortAthenaBTTask_ReverseVehicle::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaBTTask_RunDynamicSubtree
// (None)

class UClass* UFortAthenaBTTask_RunDynamicSubtree::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaBTTask_RunDynamicSubtree");

	return Clss;
}


// FortAthenaBTTask_RunDynamicSubtree FortniteAIServer.Default__FortAthenaBTTask_RunDynamicSubtree
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaBTTask_RunDynamicSubtree* UFortAthenaBTTask_RunDynamicSubtree::GetDefaultObj()
{
	static class UFortAthenaBTTask_RunDynamicSubtree* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaBTTask_RunDynamicSubtree*>(UFortAthenaBTTask_RunDynamicSubtree::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaBTTask_SetAggressiveDriving
// (None)

class UClass* UFortAthenaBTTask_SetAggressiveDriving::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaBTTask_SetAggressiveDriving");

	return Clss;
}


// FortAthenaBTTask_SetAggressiveDriving FortniteAIServer.Default__FortAthenaBTTask_SetAggressiveDriving
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaBTTask_SetAggressiveDriving* UFortAthenaBTTask_SetAggressiveDriving::GetDefaultObj()
{
	static class UFortAthenaBTTask_SetAggressiveDriving* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaBTTask_SetAggressiveDriving*>(UFortAthenaBTTask_SetAggressiveDriving::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaBTTask_ShootTrap
// (None)

class UClass* UFortAthenaBTTask_ShootTrap::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaBTTask_ShootTrap");

	return Clss;
}


// FortAthenaBTTask_ShootTrap FortniteAIServer.Default__FortAthenaBTTask_ShootTrap
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaBTTask_ShootTrap* UFortAthenaBTTask_ShootTrap::GetDefaultObj()
{
	static class UFortAthenaBTTask_ShootTrap* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaBTTask_ShootTrap*>(UFortAthenaBTTask_ShootTrap::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaBTTask_SteerMovement
// (None)

class UClass* UFortAthenaBTTask_SteerMovement::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaBTTask_SteerMovement");

	return Clss;
}


// FortAthenaBTTask_SteerMovement FortniteAIServer.Default__FortAthenaBTTask_SteerMovement
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaBTTask_SteerMovement* UFortAthenaBTTask_SteerMovement::GetDefaultObj()
{
	static class UFortAthenaBTTask_SteerMovement* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaBTTask_SteerMovement*>(UFortAthenaBTTask_SteerMovement::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaBTTask_Undermine
// (None)

class UClass* UFortAthenaBTTask_Undermine::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaBTTask_Undermine");

	return Clss;
}


// FortAthenaBTTask_Undermine FortniteAIServer.Default__FortAthenaBTTask_Undermine
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaBTTask_Undermine* UFortAthenaBTTask_Undermine::GetDefaultObj()
{
	static class UFortAthenaBTTask_Undermine* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaBTTask_Undermine*>(UFortAthenaBTTask_Undermine::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaBTTask_UseItem
// (None)

class UClass* UFortAthenaBTTask_UseItem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaBTTask_UseItem");

	return Clss;
}


// FortAthenaBTTask_UseItem FortniteAIServer.Default__FortAthenaBTTask_UseItem
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaBTTask_UseItem* UFortAthenaBTTask_UseItem::GetDefaultObj()
{
	static class UFortAthenaBTTask_UseItem* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaBTTask_UseItem*>(UFortAthenaBTTask_UseItem::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaBTTask_UseSmartObject
// (None)

class UClass* UFortAthenaBTTask_UseSmartObject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaBTTask_UseSmartObject");

	return Clss;
}


// FortAthenaBTTask_UseSmartObject FortniteAIServer.Default__FortAthenaBTTask_UseSmartObject
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaBTTask_UseSmartObject* UFortAthenaBTTask_UseSmartObject::GetDefaultObj()
{
	static class UFortAthenaBTTask_UseSmartObject* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaBTTask_UseSmartObject*>(UFortAthenaBTTask_UseSmartObject::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaBTTask_VehicleHonk
// (None)

class UClass* UFortAthenaBTTask_VehicleHonk::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaBTTask_VehicleHonk");

	return Clss;
}


// FortAthenaBTTask_VehicleHonk FortniteAIServer.Default__FortAthenaBTTask_VehicleHonk
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaBTTask_VehicleHonk* UFortAthenaBTTask_VehicleHonk::GetDefaultObj()
{
	static class UFortAthenaBTTask_VehicleHonk* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaBTTask_VehicleHonk*>(UFortAthenaBTTask_VehicleHonk::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaBTTask_VehicleTurnTo
// (None)

class UClass* UFortAthenaBTTask_VehicleTurnTo::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaBTTask_VehicleTurnTo");

	return Clss;
}


// FortAthenaBTTask_VehicleTurnTo FortniteAIServer.Default__FortAthenaBTTask_VehicleTurnTo
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaBTTask_VehicleTurnTo* UFortAthenaBTTask_VehicleTurnTo::GetDefaultObj()
{
	static class UFortAthenaBTTask_VehicleTurnTo* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaBTTask_VehicleTurnTo*>(UFortAthenaBTTask_VehicleTurnTo::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaBTTask_VerseNPCMoveTo
// (None)

class UClass* UFortAthenaBTTask_VerseNPCMoveTo::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaBTTask_VerseNPCMoveTo");

	return Clss;
}


// FortAthenaBTTask_VerseNPCMoveTo FortniteAIServer.Default__FortAthenaBTTask_VerseNPCMoveTo
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaBTTask_VerseNPCMoveTo* UFortAthenaBTTask_VerseNPCMoveTo::GetDefaultObj()
{
	static class UFortAthenaBTTask_VerseNPCMoveTo* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaBTTask_VerseNPCMoveTo*>(UFortAthenaBTTask_VerseNPCMoveTo::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaBTTask_Zipline
// (None)

class UClass* UFortAthenaBTTask_Zipline::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaBTTask_Zipline");

	return Clss;
}


// FortAthenaBTTask_Zipline FortniteAIServer.Default__FortAthenaBTTask_Zipline
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaBTTask_Zipline* UFortAthenaBTTask_Zipline::GetDefaultObj()
{
	static class UFortAthenaBTTask_Zipline* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaBTTask_Zipline*>(UFortAthenaBTTask_Zipline::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAIServer.FortAthenaBTTask_Zipline.OnZiplineStateChanged
// (Final, Native, Public)
// Parameters:
// bool                               bIsZiplining                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPlayerPawn*             FortPlayerPawn                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaBTTask_Zipline::OnZiplineStateChanged(bool bIsZiplining, class UFortPlayerPawn* FortPlayerPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaBTTask_Zipline", "OnZiplineStateChanged");

	Params::UFortAthenaBTTask_Zipline_OnZiplineStateChanged_Params Parms{};

	Parms.bIsZiplining = bIsZiplining;
	Parms.FortPlayerPawn = FortPlayerPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FortniteAIServer.FortAthenaNpcEvaluator_Encampment
// (None)

class UClass* UFortAthenaNpcEvaluator_Encampment::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaNpcEvaluator_Encampment");

	return Clss;
}


// FortAthenaNpcEvaluator_Encampment FortniteAIServer.Default__FortAthenaNpcEvaluator_Encampment
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaNpcEvaluator_Encampment* UFortAthenaNpcEvaluator_Encampment::GetDefaultObj()
{
	static class UFortAthenaNpcEvaluator_Encampment* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaNpcEvaluator_Encampment*>(UFortAthenaNpcEvaluator_Encampment::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaNpcEvaluator_FollowPatrolPath
// (None)

class UClass* UFortAthenaNpcEvaluator_FollowPatrolPath::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaNpcEvaluator_FollowPatrolPath");

	return Clss;
}


// FortAthenaNpcEvaluator_FollowPatrolPath FortniteAIServer.Default__FortAthenaNpcEvaluator_FollowPatrolPath
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaNpcEvaluator_FollowPatrolPath* UFortAthenaNpcEvaluator_FollowPatrolPath::GetDefaultObj()
{
	static class UFortAthenaNpcEvaluator_FollowPatrolPath* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaNpcEvaluator_FollowPatrolPath*>(UFortAthenaNpcEvaluator_FollowPatrolPath::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaNpcEvaluator_FollowSquadLeader
// (None)

class UClass* UFortAthenaNpcEvaluator_FollowSquadLeader::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaNpcEvaluator_FollowSquadLeader");

	return Clss;
}


// FortAthenaNpcEvaluator_FollowSquadLeader FortniteAIServer.Default__FortAthenaNpcEvaluator_FollowSquadLeader
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaNpcEvaluator_FollowSquadLeader* UFortAthenaNpcEvaluator_FollowSquadLeader::GetDefaultObj()
{
	static class UFortAthenaNpcEvaluator_FollowSquadLeader* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaNpcEvaluator_FollowSquadLeader*>(UFortAthenaNpcEvaluator_FollowSquadLeader::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaNpcEvaluator_Leash
// (None)

class UClass* UFortAthenaNpcEvaluator_Leash::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaNpcEvaluator_Leash");

	return Clss;
}


// FortAthenaNpcEvaluator_Leash FortniteAIServer.Default__FortAthenaNpcEvaluator_Leash
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaNpcEvaluator_Leash* UFortAthenaNpcEvaluator_Leash::GetDefaultObj()
{
	static class UFortAthenaNpcEvaluator_Leash* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaNpcEvaluator_Leash*>(UFortAthenaNpcEvaluator_Leash::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaNpcEvaluator_Patrolling
// (None)

class UClass* UFortAthenaNpcEvaluator_Patrolling::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaNpcEvaluator_Patrolling");

	return Clss;
}


// FortAthenaNpcEvaluator_Patrolling FortniteAIServer.Default__FortAthenaNpcEvaluator_Patrolling
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaNpcEvaluator_Patrolling* UFortAthenaNpcEvaluator_Patrolling::GetDefaultObj()
{
	static class UFortAthenaNpcEvaluator_Patrolling* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaNpcEvaluator_Patrolling*>(UFortAthenaNpcEvaluator_Patrolling::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortQueryContext_BotPOIVolume
// (None)

class UClass* UFortQueryContext_BotPOIVolume::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryContext_BotPOIVolume");

	return Clss;
}


// FortQueryContext_BotPOIVolume FortniteAIServer.Default__FortQueryContext_BotPOIVolume
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryContext_BotPOIVolume* UFortQueryContext_BotPOIVolume::GetDefaultObj()
{
	static class UFortQueryContext_BotPOIVolume* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryContext_BotPOIVolume*>(UFortQueryContext_BotPOIVolume::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaAttachToActorStateTreeTask
// (None)

class UClass* UFortAthenaAttachToActorStateTreeTask::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAttachToActorStateTreeTask");

	return Clss;
}


// FortAthenaAttachToActorStateTreeTask FortniteAIServer.Default__FortAthenaAttachToActorStateTreeTask
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAttachToActorStateTreeTask* UFortAthenaAttachToActorStateTreeTask::GetDefaultObj()
{
	static class UFortAthenaAttachToActorStateTreeTask* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAttachToActorStateTreeTask*>(UFortAthenaAttachToActorStateTreeTask::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAIServer.FortAthenaPlayContextualAnimTaskInstanceData
// (None)

class UClass* UFortAthenaPlayContextualAnimTaskInstanceData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaPlayContextualAnimTaskInstanceData");

	return Clss;
}


// FortAthenaPlayContextualAnimTaskInstanceData FortniteAIServer.Default__FortAthenaPlayContextualAnimTaskInstanceData
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaPlayContextualAnimTaskInstanceData* UFortAthenaPlayContextualAnimTaskInstanceData::GetDefaultObj()
{
	static class UFortAthenaPlayContextualAnimTaskInstanceData* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaPlayContextualAnimTaskInstanceData*>(UFortAthenaPlayContextualAnimTaskInstanceData::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAIServer.FortAthenaPlayContextualAnimTaskInstanceData.OnNotifyBeginReceived
// (Final, Native, Public, HasOutParams)
// Parameters:
// class FName                        NotifyName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBranchingPointNotifyPayloadBranchingPointNotifyPayload                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UFortAthenaPlayContextualAnimTaskInstanceData::OnNotifyBeginReceived(class FName NotifyName, struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaPlayContextualAnimTaskInstanceData", "OnNotifyBeginReceived");

	Params::UFortAthenaPlayContextualAnimTaskInstanceData_OnNotifyBeginReceived_Params Parms{};

	Parms.NotifyName = NotifyName;
	Parms.BranchingPointNotifyPayload = BranchingPointNotifyPayload;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAIServer.FortAthenaPlayContextualAnimTaskInstanceData.OnMontageEnded
// (Final, Native, Public)
// Parameters:
// class UAnimMontage*                EndedMontage                                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInterrupted                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaPlayContextualAnimTaskInstanceData::OnMontageEnded(class UAnimMontage* EndedMontage, bool bInterrupted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaPlayContextualAnimTaskInstanceData", "OnMontageEnded");

	Params::UFortAthenaPlayContextualAnimTaskInstanceData_OnMontageEnded_Params Parms{};

	Parms.EndedMontage = EndedMontage;
	Parms.bInterrupted = bInterrupted;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FortniteAIServer.FortAthenaPlayInteractionStateTreeTask
// (None)

class UClass* UFortAthenaPlayInteractionStateTreeTask::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaPlayInteractionStateTreeTask");

	return Clss;
}


// FortAthenaPlayInteractionStateTreeTask FortniteAIServer.Default__FortAthenaPlayInteractionStateTreeTask
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaPlayInteractionStateTreeTask* UFortAthenaPlayInteractionStateTreeTask::GetDefaultObj()
{
	static class UFortAthenaPlayInteractionStateTreeTask* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaPlayInteractionStateTreeTask*>(UFortAthenaPlayInteractionStateTreeTask::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAIServer.FortAthenaPlayInteractionStateTreeTask.OnNotifyBeginReceived
// (Final, Native, Private, HasOutParams)
// Parameters:
// class FName                        NotifyName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBranchingPointNotifyPayloadBranchingPointNotifyPayload                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UFortAthenaPlayInteractionStateTreeTask::OnNotifyBeginReceived(class FName NotifyName, struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaPlayInteractionStateTreeTask", "OnNotifyBeginReceived");

	Params::UFortAthenaPlayInteractionStateTreeTask_OnNotifyBeginReceived_Params Parms{};

	Parms.NotifyName = NotifyName;
	Parms.BranchingPointNotifyPayload = BranchingPointNotifyPayload;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAIServer.FortAthenaPlayInteractionStateTreeTask.OnMontageEnded
// (Final, Native, Private)
// Parameters:
// class UAnimMontage*                EndedMontage                                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInterrupted                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaPlayInteractionStateTreeTask::OnMontageEnded(class UAnimMontage* EndedMontage, bool bInterrupted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaPlayInteractionStateTreeTask", "OnMontageEnded");

	Params::UFortAthenaPlayInteractionStateTreeTask_OnMontageEnded_Params Parms{};

	Parms.EndedMontage = EndedMontage;
	Parms.bInterrupted = bInterrupted;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FortniteAIServer.FortAthenaPlayMontageStateTreeTask
// (None)

class UClass* UFortAthenaPlayMontageStateTreeTask::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaPlayMontageStateTreeTask");

	return Clss;
}


// FortAthenaPlayMontageStateTreeTask FortniteAIServer.Default__FortAthenaPlayMontageStateTreeTask
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaPlayMontageStateTreeTask* UFortAthenaPlayMontageStateTreeTask::GetDefaultObj()
{
	static class UFortAthenaPlayMontageStateTreeTask* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaPlayMontageStateTreeTask*>(UFortAthenaPlayMontageStateTreeTask::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAIServer.FortAthenaPlayMontageStateTreeTask.HandleNotifyBeginReceived
// (Final, Native, Private, HasOutParams)
// Parameters:
// class FName                        NotifyName                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FBranchingPointNotifyPayloadBranchingPointNotifyPayload                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UFortAthenaPlayMontageStateTreeTask::HandleNotifyBeginReceived(class FName NotifyName, struct FBranchingPointNotifyPayload& BranchingPointNotifyPayload)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaPlayMontageStateTreeTask", "HandleNotifyBeginReceived");

	Params::UFortAthenaPlayMontageStateTreeTask_HandleNotifyBeginReceived_Params Parms{};

	Parms.NotifyName = NotifyName;
	Parms.BranchingPointNotifyPayload = BranchingPointNotifyPayload;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAIServer.FortAthenaPlayMontageStateTreeTask.HandleMontageEnded
// (Final, Native, Private)
// Parameters:
// class UAnimMontage*                EndedMontage                                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInterrupted                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaPlayMontageStateTreeTask::HandleMontageEnded(class UAnimMontage* EndedMontage, bool bInterrupted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaPlayMontageStateTreeTask", "HandleMontageEnded");

	Params::UFortAthenaPlayMontageStateTreeTask_HandleMontageEnded_Params Parms{};

	Parms.EndedMontage = EndedMontage;
	Parms.bInterrupted = bInterrupted;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


