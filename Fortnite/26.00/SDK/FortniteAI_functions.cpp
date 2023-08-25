#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class FortniteAI.FortAITask_Move
// (None)

class UClass* UFortAITask_Move::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAITask_Move");

	return Clss;
}


// FortAITask_Move FortniteAI.Default__FortAITask_Move
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UFortAITask_Move* UFortAITask_Move::GetDefaultObj()
{
	static class UFortAITask_Move* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAITask_Move*>(UFortAITask_Move::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortNavModifierComponent
// (None)

class UClass* UFortNavModifierComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortNavModifierComponent");

	return Clss;
}


// FortNavModifierComponent FortniteAI.Default__FortNavModifierComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortNavModifierComponent* UFortNavModifierComponent::GetDefaultObj()
{
	static class UFortNavModifierComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortNavModifierComponent*>(UFortNavModifierComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.FortNavModifierComponent.SetComponentAffectingNavMesh
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*         InComponentAffectingNavMesh                                      (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortNavModifierComponent::SetComponentAffectingNavMesh(class UPrimitiveComponent* InComponentAffectingNavMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNavModifierComponent", "SetComponentAffectingNavMesh");

	Params::UFortNavModifierComponent_SetComponentAffectingNavMesh_Params Parms{};

	Parms.InComponentAffectingNavMesh = InComponentAffectingNavMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FortniteAI.FortPhysicsObjectNavigationComponent
// (None)

class UClass* UFortPhysicsObjectNavigationComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortPhysicsObjectNavigationComponent");

	return Clss;
}


// FortPhysicsObjectNavigationComponent FortniteAI.Default__FortPhysicsObjectNavigationComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortPhysicsObjectNavigationComponent* UFortPhysicsObjectNavigationComponent::GetDefaultObj()
{
	static class UFortPhysicsObjectNavigationComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortPhysicsObjectNavigationComponent*>(UFortPhysicsObjectNavigationComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.FortPhysicsObjectNavigationComponent.OnSleepStateChanged
// (Final, RequiredAPI, Native, Protected)
// Parameters:
// class UPrimitiveComponent*         SimulatingComponent                                              (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsAwake                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPhysicsObjectNavigationComponent::OnSleepStateChanged(class UPrimitiveComponent* SimulatingComponent, bool bIsAwake)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPhysicsObjectNavigationComponent", "OnSleepStateChanged");

	Params::UFortPhysicsObjectNavigationComponent_OnSleepStateChanged_Params Parms{};

	Parms.SimulatingComponent = SimulatingComponent;
	Parms.bIsAwake = bIsAwake;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FortniteAI.FortAIAimingInterface
// (None)

class UClass* UFortAIAimingInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAIAimingInterface");

	return Clss;
}


// FortAIAimingInterface FortniteAI.Default__FortAIAimingInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAIAimingInterface* UFortAIAimingInterface::GetDefaultObj()
{
	static class UFortAIAimingInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAIAimingInterface*>(UFortAIAimingInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.FortAIAimingInterface.GetAimingRotation
// (Native, Event, Public, HasOutParams, HasDefaults, BlueprintEvent)
// Parameters:
// struct FRotator                    OutRotation                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UFortAIAimingInterface::GetAimingRotation(struct FRotator* OutRotation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIAimingInterface", "GetAimingRotation");

	Params::UFortAIAimingInterface_GetAimingRotation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutRotation != nullptr)
		*OutRotation = Parms.OutRotation;

}


// Class FortniteAI.FortAIAimingManagerInterface
// (None)

class UClass* UFortAIAimingManagerInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAIAimingManagerInterface");

	return Clss;
}


// FortAIAimingManagerInterface FortniteAI.Default__FortAIAimingManagerInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAIAimingManagerInterface* UFortAIAimingManagerInterface::GetDefaultObj()
{
	static class UFortAIAimingManagerInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAIAimingManagerInterface*>(UFortAIAimingManagerInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.FortAIAimingManagerInterface.ComputeAimingRotations
// (Native, Event, Public, BlueprintEvent)
// Parameters:

void UFortAIAimingManagerInterface::ComputeAimingRotations()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIAimingManagerInterface", "ComputeAimingRotations");

	Params::UFortAIAimingManagerInterface_ComputeAimingRotations_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FortniteAI.FortAIEnvironmentalDangerSourceInterface
// (None)

class UClass* UFortAIEnvironmentalDangerSourceInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAIEnvironmentalDangerSourceInterface");

	return Clss;
}


// FortAIEnvironmentalDangerSourceInterface FortniteAI.Default__FortAIEnvironmentalDangerSourceInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAIEnvironmentalDangerSourceInterface* UFortAIEnvironmentalDangerSourceInterface::GetDefaultObj()
{
	static class UFortAIEnvironmentalDangerSourceInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAIEnvironmentalDangerSourceInterface*>(UFortAIEnvironmentalDangerSourceInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.FortAIEnvironmentalDangerSourceInterface.GetDangerSourceBounds
// (Native, Event, Public, HasDefaults, BlueprintEvent, Const)
// Parameters:
// struct FBox                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FBox UFortAIEnvironmentalDangerSourceInterface::GetDangerSourceBounds()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIEnvironmentalDangerSourceInterface", "GetDangerSourceBounds");

	Params::UFortAIEnvironmentalDangerSourceInterface_GetDangerSourceBounds_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIEnvironmentalDangerSourceInterface.GetDangerSourceActive
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAIEnvironmentalDangerSourceInterface::GetDangerSourceActive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIEnvironmentalDangerSourceInterface", "GetDangerSourceActive");

	Params::UFortAIEnvironmentalDangerSourceInterface_GetDangerSourceActive_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIEnvironmentalDangerSourceInterface.GetDangerAtLocation
// (Native, Event, Public, HasOutParams, HasDefaults, BlueprintEvent, Const)
// Parameters:
// struct FVector                     Location                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortAIEnvironmentalDangerSourceInterface::GetDangerAtLocation(struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIEnvironmentalDangerSourceInterface", "GetDangerAtLocation");

	Params::UFortAIEnvironmentalDangerSourceInterface_GetDangerAtLocation_Params Parms{};

	Parms.Location = Location;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class FortniteAI.FortAIInjectedBehaviorComponent
// (None)

class UClass* UFortAIInjectedBehaviorComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAIInjectedBehaviorComponent");

	return Clss;
}


// FortAIInjectedBehaviorComponent FortniteAI.Default__FortAIInjectedBehaviorComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAIInjectedBehaviorComponent* UFortAIInjectedBehaviorComponent::GetDefaultObj()
{
	static class UFortAIInjectedBehaviorComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAIInjectedBehaviorComponent*>(UFortAIInjectedBehaviorComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAIPerceptionSystem
// (None)

class UClass* UFortAIPerceptionSystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAIPerceptionSystem");

	return Clss;
}


// FortAIPerceptionSystem FortniteAI.Default__FortAIPerceptionSystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAIPerceptionSystem* UFortAIPerceptionSystem::GetDefaultObj()
{
	static class UFortAIPerceptionSystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAIPerceptionSystem*>(UFortAIPerceptionSystem::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAIBotCharacterCustomization
// (None)

class UClass* UFortAthenaAIBotCharacterCustomization::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotCharacterCustomization");

	return Clss;
}


// FortAthenaAIBotCharacterCustomization FortniteAI.Default__FortAthenaAIBotCharacterCustomization
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotCharacterCustomization* UFortAthenaAIBotCharacterCustomization::GetDefaultObj()
{
	static class UFortAthenaAIBotCharacterCustomization* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotCharacterCustomization*>(UFortAthenaAIBotCharacterCustomization::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAIBotInventoryItems
// (None)

class UClass* UFortAthenaAIBotInventoryItems::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotInventoryItems");

	return Clss;
}


// FortAthenaAIBotInventoryItems FortniteAI.Default__FortAthenaAIBotInventoryItems
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotInventoryItems* UFortAthenaAIBotInventoryItems::GetDefaultObj()
{
	static class UFortAthenaAIBotInventoryItems* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotInventoryItems*>(UFortAthenaAIBotInventoryItems::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAIControllerInterface
// (None)

class UClass* UFortAthenaAIControllerInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIControllerInterface");

	return Clss;
}


// FortAthenaAIControllerInterface FortniteAI.Default__FortAthenaAIControllerInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIControllerInterface* UFortAthenaAIControllerInterface::GetDefaultObj()
{
	static class UFortAthenaAIControllerInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIControllerInterface*>(UFortAthenaAIControllerInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAILODSettings
// (None)

class UClass* UFortAthenaAILODSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAILODSettings");

	return Clss;
}


// FortAthenaAILODSettings FortniteAI.Default__FortAthenaAILODSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAILODSettings* UFortAthenaAILODSettings::GetDefaultObj()
{
	static class UFortAthenaAILODSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAILODSettings*>(UFortAthenaAILODSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAILODSettings_AIEvaluator
// (None)

class UClass* UFortAthenaAILODSettings_AIEvaluator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAILODSettings_AIEvaluator");

	return Clss;
}


// FortAthenaAILODSettings_AIEvaluator FortniteAI.Default__FortAthenaAILODSettings_AIEvaluator
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAILODSettings_AIEvaluator* UFortAthenaAILODSettings_AIEvaluator::GetDefaultObj()
{
	static class UFortAthenaAILODSettings_AIEvaluator* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAILODSettings_AIEvaluator*>(UFortAthenaAILODSettings_AIEvaluator::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAILODSettings_CharacterMovement
// (None)

class UClass* UFortAthenaAILODSettings_CharacterMovement::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAILODSettings_CharacterMovement");

	return Clss;
}


// FortAthenaAILODSettings_CharacterMovement FortniteAI.Default__FortAthenaAILODSettings_CharacterMovement
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAILODSettings_CharacterMovement* UFortAthenaAILODSettings_CharacterMovement::GetDefaultObj()
{
	static class UFortAthenaAILODSettings_CharacterMovement* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAILODSettings_CharacterMovement*>(UFortAthenaAILODSettings_CharacterMovement::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAILODSettings_FortWeaponRanged
// (None)

class UClass* UFortAthenaAILODSettings_FortWeaponRanged::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAILODSettings_FortWeaponRanged");

	return Clss;
}


// FortAthenaAILODSettings_FortWeaponRanged FortniteAI.Default__FortAthenaAILODSettings_FortWeaponRanged
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAILODSettings_FortWeaponRanged* UFortAthenaAILODSettings_FortWeaponRanged::GetDefaultObj()
{
	static class UFortAthenaAILODSettings_FortWeaponRanged* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAILODSettings_FortWeaponRanged*>(UFortAthenaAILODSettings_FortWeaponRanged::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAILODSettings_GenericTickingObject
// (None)

class UClass* UFortAthenaAILODSettings_GenericTickingObject::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAILODSettings_GenericTickingObject");

	return Clss;
}


// FortAthenaAILODSettings_GenericTickingObject FortniteAI.Default__FortAthenaAILODSettings_GenericTickingObject
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAILODSettings_GenericTickingObject* UFortAthenaAILODSettings_GenericTickingObject::GetDefaultObj()
{
	static class UFortAthenaAILODSettings_GenericTickingObject* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAILODSettings_GenericTickingObject*>(UFortAthenaAILODSettings_GenericTickingObject::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAISpawnerDataComponent
// (None)

class UClass* UFortAthenaAISpawnerDataComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAISpawnerDataComponent");

	return Clss;
}


// FortAthenaAISpawnerDataComponent FortniteAI.Default__FortAthenaAISpawnerDataComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAISpawnerDataComponent* UFortAthenaAISpawnerDataComponent::GetDefaultObj()
{
	static class UFortAthenaAISpawnerDataComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAISpawnerDataComponent*>(UFortAthenaAISpawnerDataComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAISpawnerDataComponent_ConstructionBase
// (None)

class UClass* UFortAthenaAISpawnerDataComponent_ConstructionBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAISpawnerDataComponent_ConstructionBase");

	return Clss;
}


// FortAthenaAISpawnerDataComponent_ConstructionBase FortniteAI.Default__FortAthenaAISpawnerDataComponent_ConstructionBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAISpawnerDataComponent_ConstructionBase* UFortAthenaAISpawnerDataComponent_ConstructionBase::GetDefaultObj()
{
	static class UFortAthenaAISpawnerDataComponent_ConstructionBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAISpawnerDataComponent_ConstructionBase*>(UFortAthenaAISpawnerDataComponent_ConstructionBase::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_ConstructionBase.GetConstructionBuildingInfo
// (Native, Event, Public, HasOutParams, BlueprintEvent, Const)
// Parameters:
// struct FConstructionBuildingList   OutConstructionInfoList                                          (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAthenaAISpawnerDataComponent_ConstructionBase::GetConstructionBuildingInfo(struct FConstructionBuildingList* OutConstructionInfoList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_ConstructionBase", "GetConstructionBuildingInfo");

	Params::UFortAthenaAISpawnerDataComponent_ConstructionBase_GetConstructionBuildingInfo_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutConstructionInfoList != nullptr)
		*OutConstructionInfoList = Parms.OutConstructionInfoList;

	return Parms.ReturnValue;

}


// Class FortniteAI.FortAthenaAISpawnerDataComponent_AIBotConstruction
// (None)

class UClass* UFortAthenaAISpawnerDataComponent_AIBotConstruction::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAISpawnerDataComponent_AIBotConstruction");

	return Clss;
}


// FortAthenaAISpawnerDataComponent_AIBotConstruction FortniteAI.Default__FortAthenaAISpawnerDataComponent_AIBotConstruction
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAISpawnerDataComponent_AIBotConstruction* UFortAthenaAISpawnerDataComponent_AIBotConstruction::GetDefaultObj()
{
	static class UFortAthenaAISpawnerDataComponent_AIBotConstruction* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAISpawnerDataComponent_AIBotConstruction*>(UFortAthenaAISpawnerDataComponent_AIBotConstruction::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAISpawnerDataComponent_BehaviorBase
// (None)

class UClass* UFortAthenaAISpawnerDataComponent_BehaviorBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAISpawnerDataComponent_BehaviorBase");

	return Clss;
}


// FortAthenaAISpawnerDataComponent_BehaviorBase FortniteAI.Default__FortAthenaAISpawnerDataComponent_BehaviorBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAISpawnerDataComponent_BehaviorBase* UFortAthenaAISpawnerDataComponent_BehaviorBase::GetDefaultObj()
{
	static class UFortAthenaAISpawnerDataComponent_BehaviorBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAISpawnerDataComponent_BehaviorBase*>(UFortAthenaAISpawnerDataComponent_BehaviorBase::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_BehaviorBase.GetBehaviorTree
// (RequiredAPI, Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UBehaviorTree*               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UBehaviorTree* UFortAthenaAISpawnerDataComponent_BehaviorBase::GetBehaviorTree()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_BehaviorBase", "GetBehaviorTree");

	Params::UFortAthenaAISpawnerDataComponent_BehaviorBase_GetBehaviorTree_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class FortniteAI.FortAthenaAISpawnerDataComponent_Behavior
// (None)

class UClass* UFortAthenaAISpawnerDataComponent_Behavior::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAISpawnerDataComponent_Behavior");

	return Clss;
}


// FortAthenaAISpawnerDataComponent_Behavior FortniteAI.Default__FortAthenaAISpawnerDataComponent_Behavior
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAISpawnerDataComponent_Behavior* UFortAthenaAISpawnerDataComponent_Behavior::GetDefaultObj()
{
	static class UFortAthenaAISpawnerDataComponent_Behavior* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAISpawnerDataComponent_Behavior*>(UFortAthenaAISpawnerDataComponent_Behavior::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAISpawnerDataComponent_ChanceEncounterBase
// (None)

class UClass* UFortAthenaAISpawnerDataComponent_ChanceEncounterBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAISpawnerDataComponent_ChanceEncounterBase");

	return Clss;
}


// FortAthenaAISpawnerDataComponent_ChanceEncounterBase FortniteAI.Default__FortAthenaAISpawnerDataComponent_ChanceEncounterBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAISpawnerDataComponent_ChanceEncounterBase* UFortAthenaAISpawnerDataComponent_ChanceEncounterBase::GetDefaultObj()
{
	static class UFortAthenaAISpawnerDataComponent_ChanceEncounterBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAISpawnerDataComponent_ChanceEncounterBase*>(UFortAthenaAISpawnerDataComponent_ChanceEncounterBase::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAISpawnerDataComponent_ConversationBase
// (None)

class UClass* UFortAthenaAISpawnerDataComponent_ConversationBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAISpawnerDataComponent_ConversationBase");

	return Clss;
}


// FortAthenaAISpawnerDataComponent_ConversationBase FortniteAI.Default__FortAthenaAISpawnerDataComponent_ConversationBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAISpawnerDataComponent_ConversationBase* UFortAthenaAISpawnerDataComponent_ConversationBase::GetDefaultObj()
{
	static class UFortAthenaAISpawnerDataComponent_ConversationBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAISpawnerDataComponent_ConversationBase*>(UFortAthenaAISpawnerDataComponent_ConversationBase::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAISpawnerDataComponent_DebugBase
// (None)

class UClass* UFortAthenaAISpawnerDataComponent_DebugBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAISpawnerDataComponent_DebugBase");

	return Clss;
}


// FortAthenaAISpawnerDataComponent_DebugBase FortniteAI.Default__FortAthenaAISpawnerDataComponent_DebugBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAISpawnerDataComponent_DebugBase* UFortAthenaAISpawnerDataComponent_DebugBase::GetDefaultObj()
{
	static class UFortAthenaAISpawnerDataComponent_DebugBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAISpawnerDataComponent_DebugBase*>(UFortAthenaAISpawnerDataComponent_DebugBase::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAISpawnerDataComponent_LODBase
// (None)

class UClass* UFortAthenaAISpawnerDataComponent_LODBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAISpawnerDataComponent_LODBase");

	return Clss;
}


// FortAthenaAISpawnerDataComponent_LODBase FortniteAI.Default__FortAthenaAISpawnerDataComponent_LODBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAISpawnerDataComponent_LODBase* UFortAthenaAISpawnerDataComponent_LODBase::GetDefaultObj()
{
	static class UFortAthenaAISpawnerDataComponent_LODBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAISpawnerDataComponent_LODBase*>(UFortAthenaAISpawnerDataComponent_LODBase::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_LODBase.GetClientAILODSettings
// (RequiredAPI, Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// struct FClientAILODSettings        ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FClientAILODSettings UFortAthenaAISpawnerDataComponent_LODBase::GetClientAILODSettings()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_LODBase", "GetClientAILODSettings");

	Params::UFortAthenaAISpawnerDataComponent_LODBase_GetClientAILODSettings_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_LODBase.GetAILODSettingsContainer
// (Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UFortAthenaAILODSettingsContainer*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAthenaAILODSettingsContainer* UFortAthenaAISpawnerDataComponent_LODBase::GetAILODSettingsContainer()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_LODBase", "GetAILODSettingsContainer");

	Params::UFortAthenaAISpawnerDataComponent_LODBase_GetAILODSettingsContainer_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class FortniteAI.FortAthenaAISpawnerDataComponent_LOD
// (None)

class UClass* UFortAthenaAISpawnerDataComponent_LOD::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAISpawnerDataComponent_LOD");

	return Clss;
}


// FortAthenaAISpawnerDataComponent_LOD FortniteAI.Default__FortAthenaAISpawnerDataComponent_LOD
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAISpawnerDataComponent_LOD* UFortAthenaAISpawnerDataComponent_LOD::GetDefaultObj()
{
	static class UFortAthenaAISpawnerDataComponent_LOD* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAISpawnerDataComponent_LOD*>(UFortAthenaAISpawnerDataComponent_LOD::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAISpawnerDataComponent_VehicleBase
// (None)

class UClass* UFortAthenaAISpawnerDataComponent_VehicleBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAISpawnerDataComponent_VehicleBase");

	return Clss;
}


// FortAthenaAISpawnerDataComponent_VehicleBase FortniteAI.Default__FortAthenaAISpawnerDataComponent_VehicleBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAISpawnerDataComponent_VehicleBase* UFortAthenaAISpawnerDataComponent_VehicleBase::GetDefaultObj()
{
	static class UFortAthenaAISpawnerDataComponent_VehicleBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAISpawnerDataComponent_VehicleBase*>(UFortAthenaAISpawnerDataComponent_VehicleBase::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAISpawnerDataComponent_VoiceBase
// (None)

class UClass* UFortAthenaAISpawnerDataComponent_VoiceBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAISpawnerDataComponent_VoiceBase");

	return Clss;
}


// FortAthenaAISpawnerDataComponent_VoiceBase FortniteAI.Default__FortAthenaAISpawnerDataComponent_VoiceBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAISpawnerDataComponent_VoiceBase* UFortAthenaAISpawnerDataComponent_VoiceBase::GetDefaultObj()
{
	static class UFortAthenaAISpawnerDataComponent_VoiceBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAISpawnerDataComponent_VoiceBase*>(UFortAthenaAISpawnerDataComponent_VoiceBase::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaEntitySubsystemInterface
// (None)

class UClass* UFortAthenaEntitySubsystemInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaEntitySubsystemInterface");

	return Clss;
}


// FortAthenaEntitySubsystemInterface FortniteAI.Default__FortAthenaEntitySubsystemInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaEntitySubsystemInterface* UFortAthenaEntitySubsystemInterface::GetDefaultObj()
{
	static class UFortAthenaEntitySubsystemInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaEntitySubsystemInterface*>(UFortAthenaEntitySubsystemInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAISpawnerData
// (None)

class UClass* UFortAthenaAISpawnerData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAISpawnerData");

	return Clss;
}


// FortAthenaAISpawnerData FortniteAI.Default__FortAthenaAISpawnerData
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAISpawnerData* UFortAthenaAISpawnerData::GetDefaultObj()
{
	static class UFortAthenaAISpawnerData* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAISpawnerData*>(UFortAthenaAISpawnerData::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.FortAthenaAISpawnerData.GetVoiceComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortAthenaAISpawnerDataComponent_VoiceBase*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAthenaAISpawnerDataComponent_VoiceBase* UFortAthenaAISpawnerData::GetVoiceComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAISpawnerData", "GetVoiceComponent");

	Params::UFortAthenaAISpawnerData_GetVoiceComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerData.GetTokenComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortAthenaAISpawnerDataComponent_TokenBase*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAthenaAISpawnerDataComponent_TokenBase* UFortAthenaAISpawnerData::GetTokenComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAISpawnerData", "GetTokenComponent");

	Params::UFortAthenaAISpawnerData_GetTokenComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerData.GetSpawnParamsComponent
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortAthenaAISpawnerDataComponent_SpawnParamsBase*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAthenaAISpawnerDataComponent_SpawnParamsBase* UFortAthenaAISpawnerData::GetSpawnParamsComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAISpawnerData", "GetSpawnParamsComponent");

	Params::UFortAthenaAISpawnerData_GetSpawnParamsComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerData.GetSmartObjectComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortAthenaAISpawnerDataComponent_SmartObjectBase*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAthenaAISpawnerDataComponent_SmartObjectBase* UFortAthenaAISpawnerData::GetSmartObjectComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAISpawnerData", "GetSmartObjectComponent");

	Params::UFortAthenaAISpawnerData_GetSmartObjectComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerData.GetScriptComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortAthenaAISpawnerDataComponent_ScriptBase*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAthenaAISpawnerDataComponent_ScriptBase* UFortAthenaAISpawnerData::GetScriptComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAISpawnerData", "GetScriptComponent");

	Params::UFortAthenaAISpawnerData_GetScriptComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerData.GetPerceptionComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortAthenaAISpawnerDataComponent_PerceptionBase*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAthenaAISpawnerDataComponent_PerceptionBase* UFortAthenaAISpawnerData::GetPerceptionComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAISpawnerData", "GetPerceptionComponent");

	Params::UFortAthenaAISpawnerData_GetPerceptionComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerData.GetOptimizationComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortAthenaAISpawnerDataComponent_OptimBase*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAthenaAISpawnerDataComponent_OptimBase* UFortAthenaAISpawnerData::GetOptimizationComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAISpawnerData", "GetOptimizationComponent");

	Params::UFortAthenaAISpawnerData_GetOptimizationComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerData.GetInventoryComponent
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortAthenaAISpawnerDataComponent_InventoryBase*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAthenaAISpawnerDataComponent_InventoryBase* UFortAthenaAISpawnerData::GetInventoryComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAISpawnerData", "GetInventoryComponent");

	Params::UFortAthenaAISpawnerData_GetInventoryComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerData.GetGroupComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortAthenaAISpawnerDataComponent_GroupBase*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAthenaAISpawnerDataComponent_GroupBase* UFortAthenaAISpawnerData::GetGroupComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAISpawnerData", "GetGroupComponent");

	Params::UFortAthenaAISpawnerData_GetGroupComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerData.GetGameplayComponent
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortAthenaAISpawnerDataComponent_GameplayBase*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAthenaAISpawnerDataComponent_GameplayBase* UFortAthenaAISpawnerData::GetGameplayComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAISpawnerData", "GetGameplayComponent");

	Params::UFortAthenaAISpawnerData_GetGameplayComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerData.GetGameplayAbilityComponent
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortAthenaAISpawnerDataComponent_GameplayAbilityBase*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAthenaAISpawnerDataComponent_GameplayAbilityBase* UFortAthenaAISpawnerData::GetGameplayAbilityComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAISpawnerData", "GetGameplayAbilityComponent");

	Params::UFortAthenaAISpawnerData_GetGameplayAbilityComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerData.GetDebugComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortAthenaAISpawnerDataComponent_DebugBase*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAthenaAISpawnerDataComponent_DebugBase* UFortAthenaAISpawnerData::GetDebugComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAISpawnerData", "GetDebugComponent");

	Params::UFortAthenaAISpawnerData_GetDebugComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerData.GetCosmeticComponent
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortAthenaAISpawnerDataComponent_CosmeticBase*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAthenaAISpawnerDataComponent_CosmeticBase* UFortAthenaAISpawnerData::GetCosmeticComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAISpawnerData", "GetCosmeticComponent");

	Params::UFortAthenaAISpawnerData_GetCosmeticComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerData.GetConversationComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortAthenaAISpawnerDataComponent_ConversationBase*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAthenaAISpawnerDataComponent_ConversationBase* UFortAthenaAISpawnerData::GetConversationComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAISpawnerData", "GetConversationComponent");

	Params::UFortAthenaAISpawnerData_GetConversationComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerData.GetChanceEncounterComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortAthenaAISpawnerDataComponent_ChanceEncounterBase*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAthenaAISpawnerDataComponent_ChanceEncounterBase* UFortAthenaAISpawnerData::GetChanceEncounterComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAISpawnerData", "GetChanceEncounterComponent");

	Params::UFortAthenaAISpawnerData_GetChanceEncounterComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerData.GetBehaviorComponent
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortAthenaAISpawnerDataComponent_BehaviorBase*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAthenaAISpawnerDataComponent_BehaviorBase* UFortAthenaAISpawnerData::GetBehaviorComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAISpawnerData", "GetBehaviorComponent");

	Params::UFortAthenaAISpawnerData_GetBehaviorComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerData.GetAnalyticComponent
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortAthenaAISpawnerDataComponent_AnalyticBase*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAthenaAISpawnerDataComponent_AnalyticBase* UFortAthenaAISpawnerData::GetAnalyticComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAISpawnerData", "GetAnalyticComponent");

	Params::UFortAthenaAISpawnerData_GetAnalyticComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerData.GetAILODComponent
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortAthenaAISpawnerDataComponent_LODBase*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAthenaAISpawnerDataComponent_LODBase* UFortAthenaAISpawnerData::GetAILODComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAISpawnerData", "GetAILODComponent");

	Params::UFortAthenaAISpawnerData_GetAILODComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerData.GetAffiliationComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortAthenaAISpawnerDataComponent_AffiliationBase*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAthenaAISpawnerDataComponent_AffiliationBase* UFortAthenaAISpawnerData::GetAffiliationComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAISpawnerData", "GetAffiliationComponent");

	Params::UFortAthenaAISpawnerData_GetAffiliationComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerData.CreateComponentListFromClass
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UFortAthenaAISpawnerData>AISpawnerDataClass                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UObject*                     OuterObject                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortAthenaAISpawnerDataComponentList*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAthenaAISpawnerDataComponentList* UFortAthenaAISpawnerData::CreateComponentListFromClass(TSubclassOf<class UFortAthenaAISpawnerData> AISpawnerDataClass, class UObject* OuterObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAISpawnerData", "CreateComponentListFromClass");

	Params::UFortAthenaAISpawnerData_CreateComponentListFromClass_Params Parms{};

	Parms.AISpawnerDataClass = AISpawnerDataClass;
	Parms.OuterObject = OuterObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerData.CreateComponentList
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                     OuterObject                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortAthenaAISpawnerDataComponentList*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAthenaAISpawnerDataComponentList* UFortAthenaAISpawnerData::CreateComponentList(class UObject* OuterObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAISpawnerData", "CreateComponentList");

	Params::UFortAthenaAISpawnerData_CreateComponentList_Params Parms{};

	Parms.OuterObject = OuterObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class FortniteAI.FortAthenaAIBotSpawnerData
// (None)

class UClass* UFortAthenaAIBotSpawnerData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotSpawnerData");

	return Clss;
}


// FortAthenaAIBotSpawnerData FortniteAI.Default__FortAthenaAIBotSpawnerData
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotSpawnerData* UFortAthenaAIBotSpawnerData::GetDefaultObj()
{
	static class UFortAthenaAIBotSpawnerData* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotSpawnerData*>(UFortAthenaAIBotSpawnerData::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.FortAthenaAIBotSpawnerData.GetVehicleComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortAthenaAISpawnerDataComponent_VehicleBase*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAthenaAISpawnerDataComponent_VehicleBase* UFortAthenaAIBotSpawnerData::GetVehicleComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotSpawnerData", "GetVehicleComponent");

	Params::UFortAthenaAIBotSpawnerData_GetVehicleComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAIBotSpawnerData.GetSkillSetComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortAthenaAISpawnerDataComponent_SkillsetBase*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAthenaAISpawnerDataComponent_SkillsetBase* UFortAthenaAIBotSpawnerData::GetSkillSetComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotSpawnerData", "GetSkillSetComponent");

	Params::UFortAthenaAIBotSpawnerData_GetSkillSetComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAIBotSpawnerData.GetPerksComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortAthenaAISpawnerDataComponent_PerksBase*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAthenaAISpawnerDataComponent_PerksBase* UFortAthenaAIBotSpawnerData::GetPerksComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotSpawnerData", "GetPerksComponent");

	Params::UFortAthenaAIBotSpawnerData_GetPerksComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAIBotSpawnerData.GetCoverComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortAthenaAISpawnerDataComponent_CoverBase*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAthenaAISpawnerDataComponent_CoverBase* UFortAthenaAIBotSpawnerData::GetCoverComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotSpawnerData", "GetCoverComponent");

	Params::UFortAthenaAIBotSpawnerData_GetCoverComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAIBotSpawnerData.GetConstructionComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortAthenaAISpawnerDataComponent_ConstructionBase*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAthenaAISpawnerDataComponent_ConstructionBase* UFortAthenaAIBotSpawnerData::GetConstructionComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotSpawnerData", "GetConstructionComponent");

	Params::UFortAthenaAIBotSpawnerData_GetConstructionComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class FortniteAI.FortAthenaNPCSpawnerData
// (None)

class UClass* UFortAthenaNPCSpawnerData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaNPCSpawnerData");

	return Clss;
}


// FortAthenaNPCSpawnerData FortniteAI.Default__FortAthenaNPCSpawnerData
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaNPCSpawnerData* UFortAthenaNPCSpawnerData::GetDefaultObj()
{
	static class UFortAthenaNPCSpawnerData* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaNPCSpawnerData*>(UFortAthenaNPCSpawnerData::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaPlayerBotSpawnerData
// (None)

class UClass* UFortAthenaPlayerBotSpawnerData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaPlayerBotSpawnerData");

	return Clss;
}


// FortAthenaPlayerBotSpawnerData FortniteAI.Default__FortAthenaPlayerBotSpawnerData
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaPlayerBotSpawnerData* UFortAthenaPlayerBotSpawnerData::GetDefaultObj()
{
	static class UFortAthenaPlayerBotSpawnerData* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaPlayerBotSpawnerData*>(UFortAthenaPlayerBotSpawnerData::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortBotNameSettings
// (None)

class UClass* UFortBotNameSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortBotNameSettings");

	return Clss;
}


// FortBotNameSettings FortniteAI.Default__FortBotNameSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortBotNameSettings* UFortBotNameSettings::GetDefaultObj()
{
	static class UFortBotNameSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortBotNameSettings*>(UFortBotNameSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortDoorLinkOpenerInterface
// (None)

class UClass* UFortDoorLinkOpenerInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortDoorLinkOpenerInterface");

	return Clss;
}


// FortDoorLinkOpenerInterface FortniteAI.Default__FortDoorLinkOpenerInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortDoorLinkOpenerInterface* UFortDoorLinkOpenerInterface::GetDefaultObj()
{
	static class UFortDoorLinkOpenerInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortDoorLinkOpenerInterface*>(UFortDoorLinkOpenerInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortInjectedBehavior
// (None)

class UClass* UFortInjectedBehavior::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortInjectedBehavior");

	return Clss;
}


// FortInjectedBehavior FortniteAI.Default__FortInjectedBehavior
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortInjectedBehavior* UFortInjectedBehavior::GetDefaultObj()
{
	static class UFortInjectedBehavior* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortInjectedBehavior*>(UFortInjectedBehavior::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortMetaNavArea
// (None)

class UClass* UFortMetaNavArea::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortMetaNavArea");

	return Clss;
}


// FortMetaNavArea FortniteAI.Default__FortMetaNavArea
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortMetaNavArea* UFortMetaNavArea::GetDefaultObj()
{
	static class UFortMetaNavArea* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortMetaNavArea*>(UFortMetaNavArea::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortMetaNavArea_Wall
// (None)

class UClass* UFortMetaNavArea_Wall::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortMetaNavArea_Wall");

	return Clss;
}


// FortMetaNavArea_Wall FortniteAI.Default__FortMetaNavArea_Wall
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortMetaNavArea_Wall* UFortMetaNavArea_Wall::GetDefaultObj()
{
	static class UFortMetaNavArea_Wall* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortMetaNavArea_Wall*>(UFortMetaNavArea_Wall::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortNavArea
// (None)

class UClass* UFortNavArea::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortNavArea");

	return Clss;
}


// FortNavArea FortniteAI.Default__FortNavArea
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortNavArea* UFortNavArea::GetDefaultObj()
{
	static class UFortNavArea* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortNavArea*>(UFortNavArea::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortNavArea_DefaultSmashable
// (None)

class UClass* UFortNavArea_DefaultSmashable::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortNavArea_DefaultSmashable");

	return Clss;
}


// FortNavArea_DefaultSmashable FortniteAI.Default__FortNavArea_DefaultSmashable
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortNavArea_DefaultSmashable* UFortNavArea_DefaultSmashable::GetDefaultObj()
{
	static class UFortNavArea_DefaultSmashable* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortNavArea_DefaultSmashable*>(UFortNavArea_DefaultSmashable::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortNavArea_PlayerBuiltSmashable
// (None)

class UClass* UFortNavArea_PlayerBuiltSmashable::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortNavArea_PlayerBuiltSmashable");

	return Clss;
}


// FortNavArea_PlayerBuiltSmashable FortniteAI.Default__FortNavArea_PlayerBuiltSmashable
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortNavArea_PlayerBuiltSmashable* UFortNavArea_PlayerBuiltSmashable::GetDefaultObj()
{
	static class UFortNavArea_PlayerBuiltSmashable* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortNavArea_PlayerBuiltSmashable*>(UFortNavArea_PlayerBuiltSmashable::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortNavArea_WoodenWall
// (None)

class UClass* UFortNavArea_WoodenWall::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortNavArea_WoodenWall");

	return Clss;
}


// FortNavArea_WoodenWall FortniteAI.Default__FortNavArea_WoodenWall
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortNavArea_WoodenWall* UFortNavArea_WoodenWall::GetDefaultObj()
{
	static class UFortNavArea_WoodenWall* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortNavArea_WoodenWall*>(UFortNavArea_WoodenWall::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortQueryContext_ConverterPawn
// (None)

class UClass* UFortQueryContext_ConverterPawn::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryContext_ConverterPawn");

	return Clss;
}


// FortQueryContext_ConverterPawn FortniteAI.Default__FortQueryContext_ConverterPawn
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryContext_ConverterPawn* UFortQueryContext_ConverterPawn::GetDefaultObj()
{
	static class UFortQueryContext_ConverterPawn* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryContext_ConverterPawn*>(UFortQueryContext_ConverterPawn::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortQueryContext_ConverterController
// (None)

class UClass* UFortQueryContext_ConverterController::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryContext_ConverterController");

	return Clss;
}


// FortQueryContext_ConverterController FortniteAI.Default__FortQueryContext_ConverterController
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryContext_ConverterController* UFortQueryContext_ConverterController::GetDefaultObj()
{
	static class UFortQueryContext_ConverterController* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryContext_ConverterController*>(UFortQueryContext_ConverterController::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortQueryContext_ConverterViewLocation
// (None)

class UClass* UFortQueryContext_ConverterViewLocation::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryContext_ConverterViewLocation");

	return Clss;
}


// FortQueryContext_ConverterViewLocation FortniteAI.Default__FortQueryContext_ConverterViewLocation
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryContext_ConverterViewLocation* UFortQueryContext_ConverterViewLocation::GetDefaultObj()
{
	static class UFortQueryContext_ConverterViewLocation* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryContext_ConverterViewLocation*>(UFortQueryContext_ConverterViewLocation::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortQueryContext_ConverterViewRotation
// (None)

class UClass* UFortQueryContext_ConverterViewRotation::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryContext_ConverterViewRotation");

	return Clss;
}


// FortQueryContext_ConverterViewRotation FortniteAI.Default__FortQueryContext_ConverterViewRotation
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryContext_ConverterViewRotation* UFortQueryContext_ConverterViewRotation::GetDefaultObj()
{
	static class UFortQueryContext_ConverterViewRotation* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryContext_ConverterViewRotation*>(UFortQueryContext_ConverterViewRotation::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortSpawnPointsPercentageCurveSequence
// (None)

class UClass* UFortSpawnPointsPercentageCurveSequence::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortSpawnPointsPercentageCurveSequence");

	return Clss;
}


// FortSpawnPointsPercentageCurveSequence FortniteAI.Default__FortSpawnPointsPercentageCurveSequence
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortSpawnPointsPercentageCurveSequence* UFortSpawnPointsPercentageCurveSequence::GetDefaultObj()
{
	static class UFortSpawnPointsPercentageCurveSequence* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortSpawnPointsPercentageCurveSequence*>(UFortSpawnPointsPercentageCurveSequence::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.AIHotSpot
// (Actor)

class UClass* UAIHotSpot::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIHotSpot");

	return Clss;
}


// AIHotSpot FortniteAI.Default__AIHotSpot
// (Public, ClassDefaultObject, ArchetypeObject)

class UAIHotSpot* UAIHotSpot::GetDefaultObj()
{
	static class UAIHotSpot* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIHotSpot*>(UAIHotSpot::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.AIHotSpot.SetEnabled
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnabled                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIHotSpot::SetEnabled(bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIHotSpot", "SetEnabled");

	Params::UAIHotSpot_SetEnabled_Params Parms{};

	Parms.bEnabled = bEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.AIHotSpot.RemoveGroupFromHotspot
// (Native, Public, BlueprintCallable)
// Parameters:
// TArray<class UAIController*>       GroupOfAI                                                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAIHotSpot::RemoveGroupFromHotspot(const TArray<class UAIController*>& GroupOfAI)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIHotSpot", "RemoveGroupFromHotspot");

	Params::UAIHotSpot_RemoveGroupFromHotspot_Params Parms{};

	Parms.GroupOfAI = GroupOfAI;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.AIHotSpot.RemoveFromHotspot
// (Native, Public, BlueprintCallable)
// Parameters:
// class UAIController*               AI                                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAssignFromWaitingList                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAIHotSpot::RemoveFromHotspot(class UAIController* AI, bool bAssignFromWaitingList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIHotSpot", "RemoveFromHotspot");

	Params::UAIHotSpot_RemoveFromHotspot_Params Parms{};

	Parms.AI = AI;
	Parms.bAssignFromWaitingList = bAssignFromWaitingList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.AIHotSpot.OnSlotOccupied
// (BlueprintAuthorityOnly, Native, Event, Public, BlueprintEvent)
// Parameters:
// class UAIController*               AI                                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              UserId                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIHotSpot::OnSlotOccupied(class UAIController* AI, int32 Index, int32 UserId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIHotSpot", "OnSlotOccupied");

	Params::UAIHotSpot_OnSlotOccupied_Params Parms{};

	Parms.AI = AI;
	Parms.Index = Index;
	Parms.UserId = UserId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.AIHotSpot.OnSlotFreed
// (BlueprintAuthorityOnly, Native, Event, Public, BlueprintEvent)
// Parameters:
// class UAIController*               AI                                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              UserId                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIHotSpot::OnSlotFreed(class UAIController* AI, int32 Index, int32 UserId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIHotSpot", "OnSlotFreed");

	Params::UAIHotSpot_OnSlotFreed_Params Parms{};

	Parms.AI = AI;
	Parms.Index = Index;
	Parms.UserId = UserId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.AIHotSpot.OnSlotEnabled
// (BlueprintAuthorityOnly, Native, Event, Public, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              UserId                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIHotSpot::OnSlotEnabled(int32 Index, int32 UserId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIHotSpot", "OnSlotEnabled");

	Params::UAIHotSpot_OnSlotEnabled_Params Parms{};

	Parms.Index = Index;
	Parms.UserId = UserId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.AIHotSpot.OnSlotDisabled
// (BlueprintAuthorityOnly, Native, Event, Public, BlueprintEvent)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              UserId                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIHotSpot::OnSlotDisabled(int32 Index, int32 UserId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIHotSpot", "OnSlotDisabled");

	Params::UAIHotSpot_OnSlotDisabled_Params Parms{};

	Parms.Index = Index;
	Parms.UserId = UserId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.AIHotSpot.OnSlotClaimed
// (BlueprintAuthorityOnly, Native, Event, Public, BlueprintEvent)
// Parameters:
// class UAIController*               AI                                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              UserId                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIHotSpot::OnSlotClaimed(class UAIController* AI, int32 Index, int32 UserId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIHotSpot", "OnSlotClaimed");

	Params::UAIHotSpot_OnSlotClaimed_Params Parms{};

	Parms.AI = AI;
	Parms.Index = Index;
	Parms.UserId = UserId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.AIHotSpot.OnSlotBlocked
// (BlueprintAuthorityOnly, Native, Event, Public, BlueprintEvent)
// Parameters:
// class UAIController*               AI                                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              UserId                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIHotSpot::OnSlotBlocked(class UAIController* AI, int32 Index, int32 UserId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIHotSpot", "OnSlotBlocked");

	Params::UAIHotSpot_OnSlotBlocked_Params Parms{};

	Parms.AI = AI;
	Parms.Index = Index;
	Parms.UserId = UserId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.AIHotSpot.OnRemovedSlotlessBehavior
// (BlueprintAuthorityOnly, Native, Event, Public, BlueprintEvent)
// Parameters:
// class UAIController*               AI                                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsClamingSlot                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIHotSpot::OnRemovedSlotlessBehavior(class UAIController* AI, bool bIsClamingSlot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIHotSpot", "OnRemovedSlotlessBehavior");

	Params::UAIHotSpot_OnRemovedSlotlessBehavior_Params Parms{};

	Parms.AI = AI;
	Parms.bIsClamingSlot = bIsClamingSlot;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.AIHotSpot.OnRemovedBehavior
// (BlueprintAuthorityOnly, Native, Event, Public, BlueprintEvent)
// Parameters:
// class UAIController*               AI                                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              UserId                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAIHotSpotSlot          PrevState                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bWasOnWaitingList                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIHotSpot::OnRemovedBehavior(class UAIController* AI, int32 Index, int32 UserId, enum class EAIHotSpotSlot PrevState, bool bWasOnWaitingList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIHotSpot", "OnRemovedBehavior");

	Params::UAIHotSpot_OnRemovedBehavior_Params Parms{};

	Parms.AI = AI;
	Parms.Index = Index;
	Parms.UserId = UserId;
	Parms.PrevState = PrevState;
	Parms.bWasOnWaitingList = bWasOnWaitingList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.AIHotSpot.OnMoveToSlotFinished
// (BlueprintAuthorityOnly, Native, Event, Protected, BlueprintEvent)
// Parameters:
// class UAIController*               AI                                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              UserId                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bResult                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIHotSpot::OnMoveToSlotFinished(class UAIController* AI, int32 Index, int32 UserId, bool bResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIHotSpot", "OnMoveToSlotFinished");

	Params::UAIHotSpot_OnMoveToSlotFinished_Params Parms{};

	Parms.AI = AI;
	Parms.Index = Index;
	Parms.UserId = UserId;
	Parms.bResult = bResult;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.AIHotSpot.OnHotSpotEnabled
// (BlueprintAuthorityOnly, Native, Event, Public, BlueprintEvent)
// Parameters:

void UAIHotSpot::OnHotSpotEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIHotSpot", "OnHotSpotEnabled");

	Params::UAIHotSpot_OnHotSpotEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.AIHotSpot.OnHotSpotDisabled
// (BlueprintAuthorityOnly, Native, Event, Public, BlueprintEvent)
// Parameters:

void UAIHotSpot::OnHotSpotDisabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIHotSpot", "OnHotSpotDisabled");

	Params::UAIHotSpot_OnHotSpotDisabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.AIHotSpot.OnAssignedSlotlessBehavior
// (BlueprintAuthorityOnly, Native, Event, Public, BlueprintEvent)
// Parameters:
// class UAIController*               AI                                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAIHotSpot::OnAssignedSlotlessBehavior(class UAIController* AI)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIHotSpot", "OnAssignedSlotlessBehavior");

	Params::UAIHotSpot_OnAssignedSlotlessBehavior_Params Parms{};

	Parms.AI = AI;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.AIHotSpot.OnAssignedOccupiedBehavior
// (BlueprintAuthorityOnly, Native, Event, Public, BlueprintEvent)
// Parameters:
// class UAIController*               AI                                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              UserId                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAIHotSpot::OnAssignedOccupiedBehavior(class UAIController* AI, int32 Index, int32 UserId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIHotSpot", "OnAssignedOccupiedBehavior");

	Params::UAIHotSpot_OnAssignedOccupiedBehavior_Params Parms{};

	Parms.AI = AI;
	Parms.Index = Index;
	Parms.UserId = UserId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.AIHotSpot.OnAssignedClaimedBehavior
// (BlueprintAuthorityOnly, Native, Event, Public, BlueprintEvent)
// Parameters:
// class UAIController*               AI                                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              UserId                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bWasOnWaitingList                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAIHotSpot::OnAssignedClaimedBehavior(class UAIController* AI, int32 Index, int32 UserId, bool bWasOnWaitingList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIHotSpot", "OnAssignedClaimedBehavior");

	Params::UAIHotSpot_OnAssignedClaimedBehavior_Params Parms{};

	Parms.AI = AI;
	Parms.Index = Index;
	Parms.UserId = UserId;
	Parms.bWasOnWaitingList = bWasOnWaitingList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.AIHotSpot.OccupySlotByIndex
// (Native, Public, BlueprintCallable)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAIHotSpot::OccupySlotByIndex(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIHotSpot", "OccupySlotByIndex");

	Params::UAIHotSpot_OccupySlotByIndex_Params Parms{};

	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.AIHotSpot.IsSlotlessAssignmentAllowed
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAIHotSpot::IsSlotlessAssignmentAllowed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIHotSpot", "IsSlotlessAssignmentAllowed");

	Params::UAIHotSpot_IsSlotlessAssignmentAllowed_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.AIHotSpot.IsEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAIHotSpot::IsEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIHotSpot", "IsEnabled");

	Params::UAIHotSpot_IsEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.AIHotSpot.IsAIAllowed
// (BlueprintAuthorityOnly, Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UAIController*               AI                                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAIHotSpot::IsAIAllowed(class UAIController* AI)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIHotSpot", "IsAIAllowed");

	Params::UAIHotSpot_IsAIAllowed_Params Parms{};

	Parms.AI = AI;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.AIHotSpot.HasEnabledSlots
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAIHotSpot::HasEnabledSlots()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIHotSpot", "HasEnabledSlots");

	Params::UAIHotSpot_HasEnabledSlots_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.AIHotSpot.HasAssignedAI
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAIController*               AI                                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAIHotSpotAssignmentFilterFilter                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAIHotSpot::HasAssignedAI(class UAIController* AI, enum class EAIHotSpotAssignmentFilter Filter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIHotSpot", "HasAssignedAI");

	Params::UAIHotSpot_HasAssignedAI_Params Parms{};

	Parms.AI = AI;
	Parms.Filter = Filter;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.AIHotSpot.GetSlotUserIdByIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAIHotSpot::GetSlotUserIdByIndex(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIHotSpot", "GetSlotUserIdByIndex");

	Params::UAIHotSpot_GetSlotUserIdByIndex_Params Parms{};

	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.AIHotSpot.GetSlotStateByOwner
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAIController*               AIOwner                                                          (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAIHotSpotSlot          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EAIHotSpotSlot UAIHotSpot::GetSlotStateByOwner(class UAIController* AIOwner)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIHotSpot", "GetSlotStateByOwner");

	Params::UAIHotSpot_GetSlotStateByOwner_Params Parms{};

	Parms.AIOwner = AIOwner;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.AIHotSpot.GetSlotStateByIndex
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAIHotSpotSlot          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EAIHotSpotSlot UAIHotSpot::GetSlotStateByIndex(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIHotSpot", "GetSlotStateByIndex");

	Params::UAIHotSpot_GetSlotStateByIndex_Params Parms{};

	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.AIHotSpot.GetSlotRotationByIndex
// (Final, RequiredAPI, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FRotator UAIHotSpot::GetSlotRotationByIndex(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIHotSpot", "GetSlotRotationByIndex");

	Params::UAIHotSpot_GetSlotRotationByIndex_Params Parms{};

	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.AIHotSpot.GetSlotOwnerByIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAIController*               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAIController* UAIHotSpot::GetSlotOwnerByIndex(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIHotSpot", "GetSlotOwnerByIndex");

	Params::UAIHotSpot_GetSlotOwnerByIndex_Params Parms{};

	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.AIHotSpot.GetSlotLocationByIndex
// (Final, RequiredAPI, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UAIHotSpot::GetSlotLocationByIndex(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIHotSpot", "GetSlotLocationByIndex");

	Params::UAIHotSpot_GetSlotLocationByIndex_Params Parms{};

	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.AIHotSpot.GetSlotIndexByOwner
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAIController*               AIOwner                                                          (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAIHotSpot::GetSlotIndexByOwner(class UAIController* AIOwner)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIHotSpot", "GetSlotIndexByOwner");

	Params::UAIHotSpot_GetSlotIndexByOwner_Params Parms{};

	Parms.AIOwner = AIOwner;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.AIHotSpot.GetSlotCount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EAIHotSpotSlotFilter    Filter                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAIHotSpot::GetSlotCount(enum class EAIHotSpotSlotFilter Filter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIHotSpot", "GetSlotCount");

	Params::UAIHotSpot_GetSlotCount_Params Parms{};

	Parms.Filter = Filter;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.AIHotSpot.GetSlotByOwner
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAIController*               AIOwner                                                          (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAIHotSpotSlot*              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAIHotSpotSlot* UAIHotSpot::GetSlotByOwner(class UAIController* AIOwner)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIHotSpot", "GetSlotByOwner");

	Params::UAIHotSpot_GetSlotByOwner_Params Parms{};

	Parms.AIOwner = AIOwner;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.AIHotSpot.GetSlotByIndex
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAIHotSpotSlot*              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAIHotSpotSlot* UAIHotSpot::GetSlotByIndex(int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIHotSpot", "GetSlotByIndex");

	Params::UAIHotSpot_GetSlotByIndex_Params Parms{};

	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.AIHotSpot.GetAssignedAICount
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EAIHotSpotAssignmentFilterFilter                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAIHotSpot::GetAssignedAICount(enum class EAIHotSpotAssignmentFilter Filter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIHotSpot", "GetAssignedAICount");

	Params::UAIHotSpot_GetAssignedAICount_Params Parms{};

	Parms.Filter = Filter;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.AIHotSpot.GetAssignedAI
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EAIHotSpotAssignmentFilterFilter                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UAIController*>       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UAIController*> UAIHotSpot::GetAssignedAI(enum class EAIHotSpotAssignmentFilter Filter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIHotSpot", "GetAssignedAI");

	Params::UAIHotSpot_GetAssignedAI_Params Parms{};

	Parms.Filter = Filter;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.AIHotSpot.FindBestSlotIndices
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UAIController*>       AI                                                               (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int32>                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<int32> UAIHotSpot::FindBestSlotIndices(const TArray<class UAIController*>& AI)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIHotSpot", "FindBestSlotIndices");

	Params::UAIHotSpot_FindBestSlotIndices_Params Parms{};

	Parms.AI = AI;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.AIHotSpot.FindBestSlotIndex
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAIController*               AI                                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAIHotSpot::FindBestSlotIndex(class UAIController* AI)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIHotSpot", "FindBestSlotIndex");

	Params::UAIHotSpot_FindBestSlotIndex_Params Parms{};

	Parms.AI = AI;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.AIHotSpot.CanUseSlotByIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAIController*               AI                                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAIHotSpot::CanUseSlotByIndex(class UAIController* AI, int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIHotSpot", "CanUseSlotByIndex");

	Params::UAIHotSpot_CanUseSlotByIndex_Params Parms{};

	Parms.AI = AI;
	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.AIHotSpot.AssignToSlotByIndex
// (Native, Public, BlueprintCallable)
// Parameters:
// class UAIController*               AI                                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAIHotSpot::AssignToSlotByIndex(class UAIController* AI, int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIHotSpot", "AssignToSlotByIndex");

	Params::UAIHotSpot_AssignToSlotByIndex_Params Parms{};

	Parms.AI = AI;
	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.AIHotSpot.AssignToHotspot
// (Native, Public, BlueprintCallable)
// Parameters:
// class UAIController*               AI                                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAIHotSpot::AssignToHotspot(class UAIController* AI)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIHotSpot", "AssignToHotspot");

	Params::UAIHotSpot_AssignToHotspot_Params Parms{};

	Parms.AI = AI;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.AIHotSpot.AssignGroupToHotspot
// (Native, Public, BlueprintCallable)
// Parameters:
// TArray<class UAIController*>       GroupOfAI                                                        (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAIHotSpot::AssignGroupToHotspot(const TArray<class UAIController*>& GroupOfAI)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIHotSpot", "AssignGroupToHotspot");

	Params::UAIHotSpot_AssignGroupToHotspot_Params Parms{};

	Parms.GroupOfAI = GroupOfAI;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.AIHotSpot.AssignFromWaitingList
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UAIHotSpot::AssignFromWaitingList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIHotSpot", "AssignFromWaitingList");

	Params::UAIHotSpot_AssignFromWaitingList_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FortniteAI.AIHotSpotManagerProxy
// (None)

class UClass* UAIHotSpotManagerProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIHotSpotManagerProxy");

	return Clss;
}


// AIHotSpotManagerProxy FortniteAI.Default__AIHotSpotManagerProxy
// (Public, ClassDefaultObject, ArchetypeObject)

class UAIHotSpotManagerProxy* UAIHotSpotManagerProxy::GetDefaultObj()
{
	static class UAIHotSpotManagerProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIHotSpotManagerProxy*>(UAIHotSpotManagerProxy::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.AIHotSpotRenderingComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UAIHotSpotRenderingComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIHotSpotRenderingComponent");

	return Clss;
}


// AIHotSpotRenderingComponent FortniteAI.Default__AIHotSpotRenderingComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAIHotSpotRenderingComponent* UAIHotSpotRenderingComponent::GetDefaultObj()
{
	static class UAIHotSpotRenderingComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIHotSpotRenderingComponent*>(UAIHotSpotRenderingComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.AIHotSpotSlot
// (None)

class UClass* UAIHotSpotSlot::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIHotSpotSlot");

	return Clss;
}


// AIHotSpotSlot FortniteAI.Default__AIHotSpotSlot
// (Public, ClassDefaultObject, ArchetypeObject)

class UAIHotSpotSlot* UAIHotSpotSlot::GetDefaultObj()
{
	static class UAIHotSpotSlot* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIHotSpotSlot*>(UAIHotSpotSlot::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.AIHotSpotSlot.SetSlotState
// (Native, Public, BlueprintCallable)
// Parameters:
// enum class EAIHotSpotSlot          NewState                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIHotSpotSlot::SetSlotState(enum class EAIHotSpotSlot NewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIHotSpotSlot", "SetSlotState");

	Params::UAIHotSpotSlot_SetSlotState_Params Parms{};

	Parms.NewState = NewState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.AIHotSpotSlot.SetSlotOwnerAndState
// (Native, Public, BlueprintCallable)
// Parameters:
// class UAIController*               NewOwner                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAIHotSpotSlot          NewState                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIHotSpotSlot::SetSlotOwnerAndState(class UAIController* NewOwner, enum class EAIHotSpotSlot NewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIHotSpotSlot", "SetSlotOwnerAndState");

	Params::UAIHotSpotSlot_SetSlotOwnerAndState_Params Parms{};

	Parms.NewOwner = NewOwner;
	Parms.NewState = NewState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.AIHotSpotSlot.SetSlotEnabled
// (Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNewEnabled                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIHotSpotSlot::SetSlotEnabled(bool bNewEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIHotSpotSlot", "SetSlotEnabled");

	Params::UAIHotSpotSlot_SetSlotEnabled_Params Parms{};

	Parms.bNewEnabled = bNewEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.AIHotSpotSlot.OnStateChanged
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class UAIController*               SlotOwner                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAIHotSpotSlot          NewState                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAIHotSpotSlot::OnStateChanged(class UAIController* SlotOwner, enum class EAIHotSpotSlot NewState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIHotSpotSlot", "OnStateChanged");

	Params::UAIHotSpotSlot_OnStateChanged_Params Parms{};

	Parms.SlotOwner = SlotOwner;
	Parms.NewState = NewState;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteAI.AIHotSpotSlot.IsEnabled
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAIHotSpotSlot::IsEnabled()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIHotSpotSlot", "IsEnabled");

	Params::UAIHotSpotSlot_IsEnabled_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.AIHotSpotSlot.IsAIAllowed
// (BlueprintAuthorityOnly, Native, Event, Public, BlueprintEvent, Const)
// Parameters:
// class UAIController*               AI                                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAIHotSpotSlot::IsAIAllowed(class UAIController* AI)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIHotSpotSlot", "IsAIAllowed");

	Params::UAIHotSpotSlot_IsAIAllowed_Params Parms{};

	Parms.AI = AI;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.AIHotSpotSlot.HasUserId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAIHotSpotSlot::HasUserId()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIHotSpotSlot", "HasUserId");

	Params::UAIHotSpotSlot_HasUserId_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.AIHotSpotSlot.GetSlotUserId
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAIHotSpotSlot::GetSlotUserId()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIHotSpotSlot", "GetSlotUserId");

	Params::UAIHotSpotSlot_GetSlotUserId_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.AIHotSpotSlot.GetSlotState
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EAIHotSpotSlot          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EAIHotSpotSlot UAIHotSpotSlot::GetSlotState()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIHotSpotSlot", "GetSlotState");

	Params::UAIHotSpotSlot_GetSlotState_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.AIHotSpotSlot.GetSlotRotation
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRotator                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FRotator UAIHotSpotSlot::GetSlotRotation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIHotSpotSlot", "GetSlotRotation");

	Params::UAIHotSpotSlot_GetSlotRotation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.AIHotSpotSlot.GetSlotRadius
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAIHotSpotSlot::GetSlotRadius()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIHotSpotSlot", "GetSlotRadius");

	Params::UAIHotSpotSlot_GetSlotRadius_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.AIHotSpotSlot.GetSlotOwner
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAIController*               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAIController* UAIHotSpotSlot::GetSlotOwner()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIHotSpotSlot", "GetSlotOwner");

	Params::UAIHotSpotSlot_GetSlotOwner_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.AIHotSpotSlot.GetSlotLocation
// (Final, RequiredAPI, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UAIHotSpotSlot::GetSlotLocation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIHotSpotSlot", "GetSlotLocation");

	Params::UAIHotSpotSlot_GetSlotLocation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.AIHotSpotSlot.GetSlotIndex
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAIHotSpotSlot::GetSlotIndex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIHotSpotSlot", "GetSlotIndex");

	Params::UAIHotSpotSlot_GetSlotIndex_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.AIHotSpotSlot.GetSlotHeight
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UAIHotSpotSlot::GetSlotHeight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIHotSpotSlot", "GetSlotHeight");

	Params::UAIHotSpotSlot_GetSlotHeight_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.AIHotSpotSlot.GetSlotBounds
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FBox                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FBox UAIHotSpotSlot::GetSlotBounds()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIHotSpotSlot", "GetSlotBounds");

	Params::UAIHotSpotSlot_GetSlotBounds_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.AIHotSpotSlot.GetHotSpot
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAIHotSpot*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAIHotSpot* UAIHotSpotSlot::GetHotSpot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIHotSpotSlot", "GetHotSpot");

	Params::UAIHotSpotSlot_GetHotSpot_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.AIHotSpotSlot.ClearSlot
// (Native, Public, BlueprintCallable)
// Parameters:

void UAIHotSpotSlot::ClearSlot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIHotSpotSlot", "ClearSlot");

	Params::UAIHotSpotSlot_ClearSlot_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FortniteAI.AthenaAIBudgetManager
// (None)

class UClass* UAthenaAIBudgetManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaAIBudgetManager");

	return Clss;
}


// AthenaAIBudgetManager FortniteAI.Default__AthenaAIBudgetManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UAthenaAIBudgetManager* UAthenaAIBudgetManager::GetDefaultObj()
{
	static class UAthenaAIBudgetManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaAIBudgetManager*>(UAthenaAIBudgetManager::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAIController
// (Actor)

class UClass* UFortAIController::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAIController");

	return Clss;
}


// FortAIController FortniteAI.Default__FortAIController
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAIController* UFortAIController::GetDefaultObj()
{
	static class UFortAIController* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAIController*>(UFortAIController::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.FortAIController.WakeUp
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortAIController::WakeUp()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIController", "WakeUp");

	Params::UFortAIController_WakeUp_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAIController.UnlockMovementResource
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:

void UFortAIController::UnlockMovementResource()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIController", "UnlockMovementResource");

	Params::UFortAIController_UnlockMovementResource_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAIController.UnlockBehaviorResource
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:

void UFortAIController::UnlockBehaviorResource()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIController", "UnlockBehaviorResource");

	Params::UFortAIController_UnlockBehaviorResource_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAIController.SetupCustomVIM
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UClass*                      VIM                                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIController::SetupCustomVIM(class UClass* VIM)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIController", "SetupCustomVIM");

	Params::UFortAIController_SetupCustomVIM_Params Parms{};

	Parms.VIM = VIM;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAIController.SetTeamInt
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// uint8                              InTeam                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIController::SetTeamInt(uint8 InTeam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIController", "SetTeamInt");

	Params::UFortAIController_SetTeamInt_Params Parms{};

	Parms.InTeam = InTeam;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAIController.SetTeam
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EFortTeam               InTeam                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIController::SetTeam(enum class EFortTeam InTeam)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIController", "SetTeam");

	Params::UFortAIController_SetTeam_Params Parms{};

	Parms.InTeam = InTeam;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAIController.SetPawnAIType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EFortressAIType         NewAIType                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      SpawnSpot                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIController::SetPawnAIType(enum class EFortressAIType NewAIType, class UActor* SpawnSpot)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIController", "SetPawnAIType");

	Params::UFortAIController_SetPawnAIType_Params Parms{};

	Parms.NewAIType = NewAIType;
	Parms.SpawnSpot = SpawnSpot;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAIController.SetIsSleeping
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNewSleepStatus                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIController::SetIsSleeping(bool bNewSleepStatus)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIController", "SetIsSleeping");

	Params::UFortAIController_SetIsSleeping_Params Parms{};

	Parms.bNewSleepStatus = bNewSleepStatus;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAIController.SetGoalActor
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UActor*                      InActor                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bLocationAlwaysKnown                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIController::SetGoalActor(class UActor* InActor, bool bLocationAlwaysKnown)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIController", "SetGoalActor");

	Params::UFortAIController_SetGoalActor_Params Parms{};

	Parms.InActor = InActor;
	Parms.bLocationAlwaysKnown = bLocationAlwaysKnown;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAIController.SetFullPeripheralVision
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNewFullPeripheralVision                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIController::SetFullPeripheralVision(bool bNewFullPeripheralVision)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIController", "SetFullPeripheralVision");

	Params::UFortAIController_SetFullPeripheralVision_Params Parms{};

	Parms.bNewFullPeripheralVision = bNewFullPeripheralVision;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAIController.SetAlwaysGameplayRelevant
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInAlwaysGameplayRelevant                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIController::SetAlwaysGameplayRelevant(bool bInAlwaysGameplayRelevant)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIController", "SetAlwaysGameplayRelevant");

	Params::UFortAIController_SetAlwaysGameplayRelevant_Params Parms{};

	Parms.bInAlwaysGameplayRelevant = bInAlwaysGameplayRelevant;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAIController.OnBuildingActorGoalDestroyed
// (Final, Native, Public)
// Parameters:

void UFortAIController::OnBuildingActorGoalDestroyed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIController", "OnBuildingActorGoalDestroyed");

	Params::UFortAIController_OnBuildingActorGoalDestroyed_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAIController.OnActorGoalDestroyed
// (Final, Native, Public)
// Parameters:
// class UActor*                      DestroyedActor                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIController::OnActorGoalDestroyed(class UActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIController", "OnActorGoalDestroyed");

	Params::UFortAIController_OnActorGoalDestroyed_Params Parms{};

	Parms.DestroyedActor = DestroyedActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAIController.LockMovementResource
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:

void UFortAIController::LockMovementResource()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIController", "LockMovementResource");

	Params::UFortAIController_LockMovementResource_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAIController.LockBehaviorResource
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:

void UFortAIController::LockBehaviorResource()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIController", "LockBehaviorResource");

	Params::UFortAIController_LockBehaviorResource_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAIController.IsIgnoringProximity
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UFortAIController*           FortAIController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAIController::IsIgnoringProximity(class UFortAIController* FortAIController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIController", "IsIgnoringProximity");

	Params::UFortAIController_IsIgnoringProximity_Params Parms{};

	Parms.FortAIController = FortAIController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIController.IsAllowedToSleep
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAIController::IsAllowedToSleep()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIController", "IsAllowedToSleep");

	Params::UFortAIController_IsAllowedToSleep_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIController.IgnoreProximityForDuration
// (RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// float                              DurationToIgnore                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIController::IgnoreProximityForDuration(float DurationToIgnore)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIController", "IgnoreProximityForDuration");

	Params::UFortAIController_IgnoreProximityForDuration_Params Parms{};

	Parms.DurationToIgnore = DurationToIgnore;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAIController.GetGoalActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UActor* UFortAIController::GetGoalActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIController", "GetGoalActor");

	Params::UFortAIController_GetGoalActor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIController.GetEncounterInfo
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortAIEncounterInfo*        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAIEncounterInfo* UFortAIController::GetEncounterInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIController", "GetEncounterInfo");

	Params::UFortAIController_GetEncounterInfo_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIController.CreateBuildingActor
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// TSubclassOf<class UBuildingSMActor>BuildingClass                                                    (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     BuildLoc                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    BuildRot                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bMirrored                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAIController::CreateBuildingActor(TSubclassOf<class UBuildingSMActor> BuildingClass, const struct FVector& BuildLoc, const struct FRotator& BuildRot, bool bMirrored)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIController", "CreateBuildingActor");

	Params::UFortAIController_CreateBuildingActor_Params Parms{};

	Parms.BuildingClass = BuildingClass;
	Parms.BuildLoc = BuildLoc;
	Parms.BuildRot = BuildRot;
	Parms.bMirrored = bMirrored;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIController.ClearAllFocalPoints
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortAIController::ClearAllFocalPoints()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIController", "ClearAllFocalPoints");

	Params::UFortAIController_ClearAllFocalPoints_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FortniteAI.AthenaAIController
// (Actor)

class UClass* UAthenaAIController::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaAIController");

	return Clss;
}


// AthenaAIController FortniteAI.Default__AthenaAIController
// (Public, ClassDefaultObject, ArchetypeObject)

class UAthenaAIController* UAthenaAIController::GetDefaultObj()
{
	static class UAthenaAIController* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaAIController*>(UAthenaAIController::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAIPerceptionComponent
// (None)

class UClass* UFortAIPerceptionComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAIPerceptionComponent");

	return Clss;
}


// FortAIPerceptionComponent FortniteAI.Default__FortAIPerceptionComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAIPerceptionComponent* UFortAIPerceptionComponent::GetDefaultObj()
{
	static class UFortAIPerceptionComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAIPerceptionComponent*>(UFortAIPerceptionComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.AthenaAIPerceptionComponent
// (None)

class UClass* UAthenaAIPerceptionComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaAIPerceptionComponent");

	return Clss;
}


// AthenaAIPerceptionComponent FortniteAI.Default__AthenaAIPerceptionComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAthenaAIPerceptionComponent* UAthenaAIPerceptionComponent::GetDefaultObj()
{
	static class UAthenaAIPerceptionComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaAIPerceptionComponent*>(UAthenaAIPerceptionComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortBehaviorTreeComponent
// (None)

class UClass* UFortBehaviorTreeComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortBehaviorTreeComponent");

	return Clss;
}


// FortBehaviorTreeComponent FortniteAI.Default__FortBehaviorTreeComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortBehaviorTreeComponent* UFortBehaviorTreeComponent::GetDefaultObj()
{
	static class UFortBehaviorTreeComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortBehaviorTreeComponent*>(UFortBehaviorTreeComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.AthenaBehaviorTreeComponent
// (None)

class UClass* UAthenaBehaviorTreeComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaBehaviorTreeComponent");

	return Clss;
}


// AthenaBehaviorTreeComponent FortniteAI.Default__AthenaBehaviorTreeComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAthenaBehaviorTreeComponent* UAthenaBehaviorTreeComponent::GetDefaultObj()
{
	static class UAthenaBehaviorTreeComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaBehaviorTreeComponent*>(UAthenaBehaviorTreeComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAIDirector
// (Actor)

class UClass* UFortAIDirector::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAIDirector");

	return Clss;
}


// FortAIDirector FortniteAI.Default__FortAIDirector
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAIDirector* UFortAIDirector::GetDefaultObj()
{
	static class UFortAIDirector* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAIDirector*>(UFortAIDirector::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.FortAIDirector.UnregisterPatrolWard
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class UFortPatrolWardInterface>PatrolWard                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIDirector::UnregisterPatrolWard(TScriptInterface<class UFortPatrolWardInterface> PatrolWard)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIDirector", "UnregisterPatrolWard");

	Params::UFortAIDirector_UnregisterPatrolWard_Params Parms{};

	Parms.PatrolWard = PatrolWard;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAIDirector.StartEncounter
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      EncounterInstigator                                              (Parm, OutParm, ZeroConstructor, ReferenceParm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortDifficultyEncounterSettings*DifficultyEncounterSettings                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFortAIEncounterQueryData   OptionalQueryData                                                (Parm, NativeAccessSpecifierPublic)
// class UFortAIEncounterInfo*        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAIEncounterInfo* UFortAIDirector::StartEncounter(class FString& EncounterInstigator, class UFortDifficultyEncounterSettings* DifficultyEncounterSettings, const struct FFortAIEncounterQueryData& OptionalQueryData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIDirector", "StartEncounter");

	Params::UFortAIDirector_StartEncounter_Params Parms{};

	Parms.EncounterInstigator = EncounterInstigator;
	Parms.DifficultyEncounterSettings = DifficultyEncounterSettings;
	Parms.OptionalQueryData = OptionalQueryData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIDirector.RegisterPatrolWard
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TScriptInterface<class UFortPatrolWardInterface>PatrolWard                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIDirector::RegisterPatrolWard(TScriptInterface<class UFortPatrolWardInterface> PatrolWard)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIDirector", "RegisterPatrolWard");

	Params::UFortAIDirector_RegisterPatrolWard_Params Parms{};

	Parms.PatrolWard = PatrolWard;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAIDirector.ReceivePawnSpawned
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class UFortPawn*                   SpawnedPawn                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIDirector::ReceivePawnSpawned(class UFortPawn* SpawnedPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIDirector", "ReceivePawnSpawned");

	Params::UFortAIDirector_ReceivePawnSpawned_Params Parms{};

	Parms.SpawnedPawn = SpawnedPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteAI.FortAIDirector.PostDayPhaseChanged
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// enum class EFortDayPhase           CurrentDayPhase                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EFortDayPhase           PreviousDayPhase                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAtCreation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIDirector::PostDayPhaseChanged(enum class EFortDayPhase CurrentDayPhase, enum class EFortDayPhase PreviousDayPhase, bool bAtCreation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIDirector", "PostDayPhaseChanged");

	Params::UFortAIDirector_PostDayPhaseChanged_Params Parms{};

	Parms.CurrentDayPhase = CurrentDayPhase;
	Parms.PreviousDayPhase = PreviousDayPhase;
	Parms.bAtCreation = bAtCreation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteAI.FortAIDirector.OnRestStarted
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortAIDirector::OnRestStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIDirector", "OnRestStarted");

	Params::UFortAIDirector_OnRestStarted_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteAI.FortAIDirector.OnRampStarted
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortAIDirector::OnRampStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIDirector", "OnRampStarted");

	Params::UFortAIDirector_OnRampStarted_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteAI.FortAIDirector.OnPlayerSpawn
// (RequiredAPI, BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class UFortPlayerPawn*             PlayerPawn                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIDirector::OnPlayerSpawn(class UFortPlayerPawn* PlayerPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIDirector", "OnPlayerSpawn");

	Params::UFortAIDirector_OnPlayerSpawn_Params Parms{};

	Parms.PlayerPawn = PlayerPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteAI.FortAIDirector.OnPlayerDied
// (RequiredAPI, BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class UFortPlayerPawn*             PlayerPawn                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIDirector::OnPlayerDied(class UFortPlayerPawn* PlayerPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIDirector", "OnPlayerDied");

	Params::UFortAIDirector_OnPlayerDied_Params Parms{};

	Parms.PlayerPawn = PlayerPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteAI.FortAIDirector.OnPeakStarted
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortAIDirector::OnPeakStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIDirector", "OnPeakStarted");

	Params::UFortAIDirector_OnPeakStarted_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteAI.FortAIDirector.OnPawnDied
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// class UFortAIPawn*                 KilledPawn                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIDirector::OnPawnDied(class UFortAIPawn* KilledPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIDirector", "OnPawnDied");

	Params::UFortAIDirector_OnPawnDied_Params Parms{};

	Parms.KilledPawn = KilledPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteAI.FortAIDirector.OnFadeStarted
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortAIDirector::OnFadeStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIDirector", "OnFadeStarted");

	Params::UFortAIDirector_OnFadeStarted_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteAI.FortAIDirector.OnDirectorDeactivated
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:

void UFortAIDirector::OnDirectorDeactivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIDirector", "OnDirectorDeactivated");

	Params::UFortAIDirector_OnDirectorDeactivated_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteAI.FortAIDirector.OnDayPhaseChanged
// (Native, Public)
// Parameters:
// enum class EFortDayPhase           CurrentDayPhase                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EFortDayPhase           PreviousDayPhase                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAtCreation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIDirector::OnDayPhaseChanged(enum class EFortDayPhase CurrentDayPhase, enum class EFortDayPhase PreviousDayPhase, bool bAtCreation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIDirector", "OnDayPhaseChanged");

	Params::UFortAIDirector_OnDayPhaseChanged_Params Parms{};

	Parms.CurrentDayPhase = CurrentDayPhase;
	Parms.PreviousDayPhase = PreviousDayPhase;
	Parms.bAtCreation = bAtCreation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAIDirector.IsPointTooCloseToPatrolWards
// (Final, RequiredAPI, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     Point                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EWardAffectType         WardEffectTypeFilter                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAIDirector::IsPointTooCloseToPatrolWards(struct FVector& Point, enum class EWardAffectType WardEffectTypeFilter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIDirector", "IsPointTooCloseToPatrolWards");

	Params::UFortAIDirector_IsPointTooCloseToPatrolWards_Params Parms{};

	Parms.Point = Point;
	Parms.WardEffectTypeFilter = WardEffectTypeFilter;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIDirector.IsLineTooCloseToPatrolWards
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     LineStart                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     LineEnd                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAIDirector::IsLineTooCloseToPatrolWards(struct FVector& LineStart, struct FVector& LineEnd)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIDirector", "IsLineTooCloseToPatrolWards");

	Params::UFortAIDirector_IsLineTooCloseToPatrolWards_Params Parms{};

	Parms.LineStart = LineStart;
	Parms.LineEnd = LineEnd;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIDirector.IsAnyEncounterGoalWithinDistanceOfPoint
// (Final, RequiredAPI, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     Point                                                            (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Distance                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bOnlyActiveEncounters                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAIDirector::IsAnyEncounterGoalWithinDistanceOfPoint(struct FVector& Point, float Distance, bool bOnlyActiveEncounters)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIDirector", "IsAnyEncounterGoalWithinDistanceOfPoint");

	Params::UFortAIDirector_IsAnyEncounterGoalWithinDistanceOfPoint_Params Parms{};

	Parms.Point = Point;
	Parms.Distance = Distance;
	Parms.bOnlyActiveEncounters = bOnlyActiveEncounters;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIDirector.IsAnyAIRelevantToPlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortPlayerPawn*             Player                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAIDirector::IsAnyAIRelevantToPlayer(class UFortPlayerPawn* Player)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIDirector", "IsAnyAIRelevantToPlayer");

	Params::UFortAIDirector_IsAnyAIRelevantToPlayer_Params Parms{};

	Parms.Player = Player;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIDirector.IsAnyActiveEncounterRelevantToPlayer
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortPlayerPawn*             Player                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAIDirector::IsAnyActiveEncounterRelevantToPlayer(class UFortPlayerPawn* Player)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIDirector", "IsAnyActiveEncounterRelevantToPlayer");

	Params::UFortAIDirector_IsAnyActiveEncounterRelevantToPlayer_Params Parms{};

	Parms.Player = Player;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIDirector.IsAnyActiveEncounterRelevantToDefender
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortAIPawn*                 Defender                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAIDirector::IsAnyActiveEncounterRelevantToDefender(class UFortAIPawn* Defender)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIDirector", "IsAnyActiveEncounterRelevantToDefender");

	Params::UFortAIDirector_IsAnyActiveEncounterRelevantToDefender_Params Parms{};

	Parms.Defender = Defender;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIDirector.GetVectorFromEncounterDirection
// (Final, RequiredAPI, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// enum class EFortEncounterDirection Direction                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UFortAIDirector::GetVectorFromEncounterDirection(enum class EFortEncounterDirection Direction)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIDirector", "GetVectorFromEncounterDirection");

	Params::UFortAIDirector_GetVectorFromEncounterDirection_Params Parms{};

	Parms.Direction = Direction;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIDirector.GetRiftsFromClosestActiveEncounterTo
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UActor*                      Target                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UBuildingRift*>       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UBuildingRift*> UFortAIDirector::GetRiftsFromClosestActiveEncounterTo(class UActor* Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIDirector", "GetRiftsFromClosestActiveEncounterTo");

	Params::UFortAIDirector_GetRiftsFromClosestActiveEncounterTo_Params Parms{};

	Parms.Target = Target;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIDirector.GetNumPlayers
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortAIDirector::GetNumPlayers()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIDirector", "GetNumPlayers");

	Params::UFortAIDirector_GetNumPlayers_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIDirector.GetNumActiveEncounters
// (Final, RequiredAPI, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortAIDirector::GetNumActiveEncounters()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIDirector", "GetNumActiveEncounters");

	Params::UFortAIDirector_GetNumActiveEncounters_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIDirector.GetEncounterDirectionFromVector
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     DirectionVector                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EFortEncounterDirection ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EFortEncounterDirection UFortAIDirector::GetEncounterDirectionFromVector(const struct FVector& DirectionVector)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIDirector", "GetEncounterDirectionFromVector");

	Params::UFortAIDirector_GetEncounterDirectionFromVector_Params Parms{};

	Parms.DirectionVector = DirectionVector;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIDirector.GetAmbientThreatEncounterSpawnLocations
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FVector>             AmbientThreatEncounterSpawnLocations                             (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UFortAIDirector::GetAmbientThreatEncounterSpawnLocations(TArray<struct FVector>* AmbientThreatEncounterSpawnLocations)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIDirector", "GetAmbientThreatEncounterSpawnLocations");

	Params::UFortAIDirector_GetAmbientThreatEncounterSpawnLocations_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AmbientThreatEncounterSpawnLocations != nullptr)
		*AmbientThreatEncounterSpawnLocations = Parms.AmbientThreatEncounterSpawnLocations;

}


// Function FortniteAI.FortAIDirector.Deactivate
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void UFortAIDirector::Deactivate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIDirector", "Deactivate");

	Params::UFortAIDirector_Deactivate_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAIDirector.ConvertInvalidDirectionsToValidDirections
// (Final, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// TArray<enum class EFortEncounterDirection>InvalidDirections                                                (Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<enum class EFortEncounterDirection>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<enum class EFortEncounterDirection> UFortAIDirector::ConvertInvalidDirectionsToValidDirections(const TArray<enum class EFortEncounterDirection>& InvalidDirections)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIDirector", "ConvertInvalidDirectionsToValidDirections");

	Params::UFortAIDirector_ConvertInvalidDirectionsToValidDirections_Params Parms{};

	Parms.InvalidDirections = InvalidDirections;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIDirector.Activate
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void UFortAIDirector::Activate()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIDirector", "Activate");

	Params::UFortAIDirector_Activate_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FortniteAI.AthenaAIDirector
// (Actor)

class UClass* UAthenaAIDirector::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaAIDirector");

	return Clss;
}


// AthenaAIDirector FortniteAI.Default__AthenaAIDirector
// (Public, ClassDefaultObject, ArchetypeObject)

class UAthenaAIDirector* UAthenaAIDirector::GetDefaultObj()
{
	static class UAthenaAIDirector* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaAIDirector*>(UAthenaAIDirector::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.AthenaAIDirector.AggroOnActor
// (Final, RequiredAPI, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAthenaAIController*         AIController                                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      Target                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaAIDirector::AggroOnActor(class UAthenaAIController* AIController, class UActor* Target)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaAIDirector", "AggroOnActor");

	Params::UAthenaAIDirector_AggroOnActor_Params Parms{};

	Parms.AIController = AIController;
	Parms.Target = Target;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FortniteAI.AthenaAIDropper
// (None)

class UClass* UAthenaAIDropper::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaAIDropper");

	return Clss;
}


// AthenaAIDropper FortniteAI.Default__AthenaAIDropper
// (Public, ClassDefaultObject, ArchetypeObject)

class UAthenaAIDropper* UAthenaAIDropper::GetDefaultObj()
{
	static class UAthenaAIDropper* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaAIDropper*>(UAthenaAIDropper::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.AthenaAIPerceptionManager
// (None)

class UClass* UAthenaAIPerceptionManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaAIPerceptionManager");

	return Clss;
}


// AthenaAIPerceptionManager FortniteAI.Default__AthenaAIPerceptionManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UAthenaAIPerceptionManager* UAthenaAIPerceptionManager::GetDefaultObj()
{
	static class UAthenaAIPerceptionManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaAIPerceptionManager*>(UAthenaAIPerceptionManager::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.AthenaNavSystemConfigOverride
// (Actor)

class UClass* UAthenaNavSystemConfigOverride::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaNavSystemConfigOverride");

	return Clss;
}


// AthenaNavSystemConfigOverride FortniteAI.Default__AthenaNavSystemConfigOverride
// (Public, ClassDefaultObject, ArchetypeObject)

class UAthenaNavSystemConfigOverride* UAthenaNavSystemConfigOverride::GetDefaultObj()
{
	static class UAthenaNavSystemConfigOverride* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaNavSystemConfigOverride*>(UAthenaNavSystemConfigOverride::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.AthenaAISettingsAIDIrectorLOD
// (None)

class UClass* UAthenaAISettingsAIDIrectorLOD::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaAISettingsAIDIrectorLOD");

	return Clss;
}


// AthenaAISettingsAIDIrectorLOD FortniteAI.Default__AthenaAISettingsAIDIrectorLOD
// (Public, ClassDefaultObject, ArchetypeObject)

class UAthenaAISettingsAIDIrectorLOD* UAthenaAISettingsAIDIrectorLOD::GetDefaultObj()
{
	static class UAthenaAISettingsAIDIrectorLOD* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaAISettingsAIDIrectorLOD*>(UAthenaAISettingsAIDIrectorLOD::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.AthenaAISettings
// (None)

class UClass* UAthenaAISettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaAISettings");

	return Clss;
}


// AthenaAISettings FortniteAI.Default__AthenaAISettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UAthenaAISettings* UAthenaAISettings::GetDefaultObj()
{
	static class UAthenaAISettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaAISettings*>(UAthenaAISettings::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAISystem
// (None)

class UClass* UFortAISystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAISystem");

	return Clss;
}


// FortAISystem FortniteAI.Default__FortAISystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAISystem* UFortAISystem::GetDefaultObj()
{
	static class UFortAISystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAISystem*>(UFortAISystem::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.FortAISystem.IsInCone2D
// (Final, RequiredAPI, Native, Static, Public, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FVector                     ConeOrigin                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ConeDirection                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              HalfAngle                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     LocationToCheck                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAISystem::IsInCone2D(const struct FVector& ConeOrigin, const struct FVector& ConeDirection, float HalfAngle, const struct FVector& LocationToCheck)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAISystem", "IsInCone2D");

	Params::UFortAISystem_IsInCone2D_Params Parms{};

	Parms.ConeOrigin = ConeOrigin;
	Parms.ConeDirection = ConeDirection;
	Parms.HalfAngle = HalfAngle;
	Parms.LocationToCheck = LocationToCheck;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class FortniteAI.AthenaAISystem
// (None)

class UClass* UAthenaAISystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaAISystem");

	return Clss;
}


// AthenaAISystem FortniteAI.Default__AthenaAISystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UAthenaAISystem* UAthenaAISystem::GetDefaultObj()
{
	static class UAthenaAISystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaAISystem*>(UAthenaAISystem::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.AthenaAISystem.OnAIPawnSpawned
// (Final, Native, Protected)
// Parameters:
// class UController*                 SpawnedController                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsABot                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPawn*                   FortAIPawn                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPlayerPawn*             PlayerPawn                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaAISystem::OnAIPawnSpawned(class UController* SpawnedController, bool bIsABot, class UFortPawn* FortAIPawn, class UFortPlayerPawn* PlayerPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaAISystem", "OnAIPawnSpawned");

	Params::UAthenaAISystem_OnAIPawnSpawned_Params Parms{};

	Parms.SpawnedController = SpawnedController;
	Parms.bIsABot = bIsABot;
	Parms.FortAIPawn = FortAIPawn;
	Parms.PlayerPawn = PlayerPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.AthenaAISystem.OnAIPawnDied
// (Final, Native, Protected)
// Parameters:
// class UController*                 KilledController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsABot                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPawn*                   KilledAIPawn                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPlayerPawn*             KilledPlayerPawn                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UController*                 KillerController                                                 (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaAISystem::OnAIPawnDied(class UController* KilledController, bool bIsABot, class UFortPawn* KilledAIPawn, class UFortPlayerPawn* KilledPlayerPawn, class UController* KillerController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaAISystem", "OnAIPawnDied");

	Params::UAthenaAISystem_OnAIPawnDied_Params Parms{};

	Parms.KilledController = KilledController;
	Parms.bIsABot = bIsABot;
	Parms.KilledAIPawn = KilledAIPawn;
	Parms.KilledPlayerPawn = KilledPlayerPawn;
	Parms.KillerController = KillerController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.AthenaAISystem.OnAIPawnDestroyed
// (Final, Native, Protected)
// Parameters:
// class UFortPawn*                   DestroyedPawn                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaAISystem::OnAIPawnDestroyed(class UFortPawn* DestroyedPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaAISystem", "OnAIPawnDestroyed");

	Params::UAthenaAISystem_OnAIPawnDestroyed_Params Parms{};

	Parms.DestroyedPawn = DestroyedPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.AthenaAISystem.HandlePlayerExitAircraft
// (Final, Native, Protected)
// Parameters:
// class UController*                 ExitingController                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaAISystem::HandlePlayerExitAircraft(class UController* ExitingController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaAISystem", "HandlePlayerExitAircraft");

	Params::UAthenaAISystem_HandlePlayerExitAircraft_Params Parms{};

	Parms.ExitingController = ExitingController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.AthenaAISystem.HandleGamePhaseStepChanged
// (Final, Native, Protected, HasOutParams)
// Parameters:
// TScriptInterface<class UFortSafeZoneInterface>SafeZoneInterface                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAthenaGamePhaseStep    GamePhaseStep                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaAISystem::HandleGamePhaseStepChanged(TScriptInterface<class UFortSafeZoneInterface>& SafeZoneInterface, enum class EAthenaGamePhaseStep GamePhaseStep)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaAISystem", "HandleGamePhaseStepChanged");

	Params::UAthenaAISystem_HandleGamePhaseStepChanged_Params Parms{};

	Parms.SafeZoneInterface = SafeZoneInterface;
	Parms.GamePhaseStep = GamePhaseStep;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.AthenaAISystem.AIProfiling_OnSafeZoneUpdated
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FFortSafeZonePhaseUpdatedEventEvent                                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UAthenaAISystem::AIProfiling_OnSafeZoneUpdated(struct FFortSafeZonePhaseUpdatedEvent& Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaAISystem", "AIProfiling_OnSafeZoneUpdated");

	Params::UAthenaAISystem_AIProfiling_OnSafeZoneUpdated_Params Parms{};

	Parms.Event = Event;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.AthenaAISystem.AIProfiling_OnGamePhaseChanged
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FFortGamePhaseUpdatedEvent  Event                                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UAthenaAISystem::AIProfiling_OnGamePhaseChanged(struct FFortGamePhaseUpdatedEvent& Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaAISystem", "AIProfiling_OnGamePhaseChanged");

	Params::UAthenaAISystem_AIProfiling_OnGamePhaseChanged_Params Parms{};

	Parms.Event = Event;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FortniteAI.AthenaCreativeRift
// (Actor)

class UClass* UAthenaCreativeRift::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaCreativeRift");

	return Clss;
}


// AthenaCreativeRift FortniteAI.Default__AthenaCreativeRift
// (Public, ClassDefaultObject, ArchetypeObject)

class UAthenaCreativeRift* UAthenaCreativeRift::GetDefaultObj()
{
	static class UAthenaCreativeRift* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaCreativeRift*>(UAthenaCreativeRift::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.AthenaCreativeRift.NotifyActorDespawnEndOverlap
// (Final, Native, Public)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      OtherActor                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         OtherComp                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OtherBodyIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaCreativeRift::NotifyActorDespawnEndOverlap(class UPrimitiveComponent* OverlappedComponent, class UActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaCreativeRift", "NotifyActorDespawnEndOverlap");

	Params::UAthenaCreativeRift_NotifyActorDespawnEndOverlap_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.AthenaCreativeRift.BlueprintShowRift
// (RequiredAPI, Event, Public, BlueprintEvent)
// Parameters:

void UAthenaCreativeRift::BlueprintShowRift()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaCreativeRift", "BlueprintShowRift");

	Params::UAthenaCreativeRift_BlueprintShowRift_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Class FortniteAI.FortPathFollowingComponentBase
// (None)

class UClass* UFortPathFollowingComponentBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortPathFollowingComponentBase");

	return Clss;
}


// FortPathFollowingComponentBase FortniteAI.Default__FortPathFollowingComponentBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortPathFollowingComponentBase* UFortPathFollowingComponentBase::GetDefaultObj()
{
	static class UFortPathFollowingComponentBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortPathFollowingComponentBase*>(UFortPathFollowingComponentBase::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortPathFollowingComponent
// (None)

class UClass* UFortPathFollowingComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortPathFollowingComponent");

	return Clss;
}


// FortPathFollowingComponent FortniteAI.Default__FortPathFollowingComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortPathFollowingComponent* UFortPathFollowingComponent::GetDefaultObj()
{
	static class UFortPathFollowingComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortPathFollowingComponent*>(UFortPathFollowingComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.AthenaPathFollowingComponent
// (None)

class UClass* UAthenaPathFollowingComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaPathFollowingComponent");

	return Clss;
}


// AthenaPathFollowingComponent FortniteAI.Default__AthenaPathFollowingComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAthenaPathFollowingComponent* UAthenaPathFollowingComponent::GetDefaultObj()
{
	static class UAthenaPathFollowingComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaPathFollowingComponent*>(UAthenaPathFollowingComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAITelemetryFunctionLibrary
// (None)

class UClass* UFortAthenaAITelemetryFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAITelemetryFunctionLibrary");

	return Clss;
}


// FortAthenaAITelemetryFunctionLibrary FortniteAI.Default__FortAthenaAITelemetryFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAITelemetryFunctionLibrary* UFortAthenaAITelemetryFunctionLibrary::GetDefaultObj()
{
	static class UFortAthenaAITelemetryFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAITelemetryFunctionLibrary*>(UFortAthenaAITelemetryFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.FortAthenaAITelemetryFunctionLibrary.GetOrCreateAITelemetryData
// (Final, BlueprintAuthorityOnly, Native, Static, Private, BlueprintCallable)
// Parameters:
// class UActor*                      Owner                                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UFortAthenaAITelemetryData>TelemetryDataClass                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortAthenaAITelemetryData*  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAthenaAITelemetryData* UFortAthenaAITelemetryFunctionLibrary::GetOrCreateAITelemetryData(class UActor* Owner, TSubclassOf<class UFortAthenaAITelemetryData> TelemetryDataClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAITelemetryFunctionLibrary", "GetOrCreateAITelemetryData");

	Params::UFortAthenaAITelemetryFunctionLibrary_GetOrCreateAITelemetryData_Params Parms{};

	Parms.Owner = Owner;
	Parms.TelemetryDataClass = TelemetryDataClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class FortniteAI.FortAthenaAITelemetryData
// (None)

class UClass* UFortAthenaAITelemetryData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAITelemetryData");

	return Clss;
}


// FortAthenaAITelemetryData FortniteAI.Default__FortAthenaAITelemetryData
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAITelemetryData* UFortAthenaAITelemetryData::GetDefaultObj()
{
	static class UFortAthenaAITelemetryData* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAITelemetryData*>(UFortAthenaAITelemetryData::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAIComponent_Telemetry
// (None)

class UClass* UFortAIComponent_Telemetry::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAIComponent_Telemetry");

	return Clss;
}


// FortAIComponent_Telemetry FortniteAI.Default__FortAIComponent_Telemetry
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAIComponent_Telemetry* UFortAIComponent_Telemetry::GetDefaultObj()
{
	static class UFortAIComponent_Telemetry* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAIComponent_Telemetry*>(UFortAIComponent_Telemetry::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.FortAIComponent_Telemetry.OnTetheredFollowerChanged
// (Final, Native, Private)
// Parameters:
// class UFortPawn*                   NewFollower                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPawn*                   OldFollower                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIComponent_Telemetry::OnTetheredFollowerChanged(class UFortPawn* NewFollower, class UFortPawn* OldFollower)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIComponent_Telemetry", "OnTetheredFollowerChanged");

	Params::UFortAIComponent_Telemetry_OnTetheredFollowerChanged_Params Parms{};

	Parms.NewFollower = NewFollower;
	Parms.OldFollower = OldFollower;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAIComponent_Telemetry.OnPawnDied
// (Final, Native, Private, HasDefaults)
// Parameters:
// class UActor*                      DamagedActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UController*                 InstigatedBy                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      DamageCauser                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     HitLocation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         FHitComponent                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        BoneName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Momentum                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIComponent_Telemetry::OnPawnDied(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIComponent_Telemetry", "OnPawnDied");

	Params::UFortAIComponent_Telemetry_OnPawnDied_Params Parms{};

	Parms.DamagedActor = DamagedActor;
	Parms.Damage = Damage;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.HitLocation = HitLocation;
	Parms.FHitComponent = FHitComponent;
	Parms.BoneName = BoneName;
	Parms.Momentum = Momentum;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAIComponent_Telemetry.OnDidDamage
// (Final, Native, Private, HasDefaults)
// Parameters:
// class UActor*                      DamagedActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UController*                 InstigatedBy                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      DamageCauser                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     HitLocation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         FHitComponent                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        BoneName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Momentum                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIComponent_Telemetry::OnDidDamage(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIComponent_Telemetry", "OnDidDamage");

	Params::UFortAIComponent_Telemetry_OnDidDamage_Params Parms{};

	Parms.DamagedActor = DamagedActor;
	Parms.Damage = Damage;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.HitLocation = HitLocation;
	Parms.FHitComponent = FHitComponent;
	Parms.BoneName = BoneName;
	Parms.Momentum = Momentum;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAIComponent_Telemetry.GetOrCreateTelemetryData
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UFortAthenaAITelemetryData>TelemetryDataClass                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortAthenaAITelemetryData*  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAthenaAITelemetryData* UFortAIComponent_Telemetry::GetOrCreateTelemetryData(TSubclassOf<class UFortAthenaAITelemetryData> TelemetryDataClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIComponent_Telemetry", "GetOrCreateTelemetryData");

	Params::UFortAIComponent_Telemetry_GetOrCreateTelemetryData_Params Parms{};

	Parms.TelemetryDataClass = TelemetryDataClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class FortniteAI.FortAIComponent_Voice
// (None)

class UClass* UFortAIComponent_Voice::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAIComponent_Voice");

	return Clss;
}


// FortAIComponent_Voice FortniteAI.Default__FortAIComponent_Voice
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAIComponent_Voice* UFortAIComponent_Voice::GetDefaultObj()
{
	static class UFortAIComponent_Voice* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAIComponent_Voice*>(UFortAIComponent_Voice::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.FortAIComponent_Voice.SetVoiceSoundBank
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortTaggedSoundBank*        InSoundBank                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIComponent_Voice::SetVoiceSoundBank(class UFortTaggedSoundBank* InSoundBank)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIComponent_Voice", "SetVoiceSoundBank");

	Params::UFortAIComponent_Voice_SetVoiceSoundBank_Params Parms{};

	Parms.InSoundBank = InSoundBank;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAIComponent_Voice.GetVoiceSoundBank
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortTaggedSoundBank*        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortTaggedSoundBank* UFortAIComponent_Voice::GetVoiceSoundBank()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIComponent_Voice", "GetVoiceSoundBank");

	Params::UFortAIComponent_Voice_GetVoiceSoundBank_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class FortniteAI.FortAIManagerMinigameComponent
// (None)

class UClass* UFortAIManagerMinigameComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAIManagerMinigameComponent");

	return Clss;
}


// FortAIManagerMinigameComponent FortniteAI.Default__FortAIManagerMinigameComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAIManagerMinigameComponent* UFortAIManagerMinigameComponent::GetDefaultObj()
{
	static class UFortAIManagerMinigameComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAIManagerMinigameComponent*>(UFortAIManagerMinigameComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.FortAIManagerMinigameComponent.OnPawnSpawned
// (Final, Native, Public)
// Parameters:
// class UPawn*                       Pawn                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RequestID                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIManagerMinigameComponent::OnPawnSpawned(class UPawn* Pawn, int32 RequestID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIManagerMinigameComponent", "OnPawnSpawned");

	Params::UFortAIManagerMinigameComponent_OnPawnSpawned_Params Parms{};

	Parms.Pawn = Pawn;
	Parms.RequestID = RequestID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAIManagerMinigameComponent.OnPawnDied
// (Final, Native, Public, HasDefaults)
// Parameters:
// class UActor*                      DamagedActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UController*                 InstigatedBy                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      DamageCauser                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     HitLocation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         FHitComponent                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        BoneName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Momentum                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIManagerMinigameComponent::OnPawnDied(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIManagerMinigameComponent", "OnPawnDied");

	Params::UFortAIManagerMinigameComponent_OnPawnDied_Params Parms{};

	Parms.DamagedActor = DamagedActor;
	Parms.Damage = Damage;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.HitLocation = HitLocation;
	Parms.FHitComponent = FHitComponent;
	Parms.BoneName = BoneName;
	Parms.Momentum = Momentum;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAIManagerMinigameComponent.HandleMinigameStarted
// (Final, Native, Public)
// Parameters:

void UFortAIManagerMinigameComponent::HandleMinigameStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIManagerMinigameComponent", "HandleMinigameStarted");

	Params::UFortAIManagerMinigameComponent_HandleMinigameStarted_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAIManagerMinigameComponent.GetSpawnTagFromPawnObject
// (Final, Native, Protected, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                     PawnObject                                                       (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FGameplayTag UFortAIManagerMinigameComponent::GetSpawnTagFromPawnObject(class UObject* PawnObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIManagerMinigameComponent", "GetSpawnTagFromPawnObject");

	Params::UFortAIManagerMinigameComponent_GetSpawnTagFromPawnObject_Params Parms{};

	Parms.PawnObject = PawnObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class FortniteAI.FortAISpawnerUtilityComponent
// (None)

class UClass* UFortAISpawnerUtilityComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAISpawnerUtilityComponent");

	return Clss;
}


// FortAISpawnerUtilityComponent FortniteAI.Default__FortAISpawnerUtilityComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAISpawnerUtilityComponent* UFortAISpawnerUtilityComponent::GetDefaultObj()
{
	static class UFortAISpawnerUtilityComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAISpawnerUtilityComponent*>(UFortAISpawnerUtilityComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.FortAISpawnerUtilityComponent.StartEnvironmentQuery
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:

void UFortAISpawnerUtilityComponent::StartEnvironmentQuery()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAISpawnerUtilityComponent", "StartEnvironmentQuery");

	Params::UFortAISpawnerUtilityComponent_StartEnvironmentQuery_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAISpawnerUtilityComponent.SetQueryRadius
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              Radius                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAISpawnerUtilityComponent::SetQueryRadius(float Radius)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAISpawnerUtilityComponent", "SetQueryRadius");

	Params::UFortAISpawnerUtilityComponent_SetQueryRadius_Params Parms{};

	Parms.Radius = Radius;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAISpawnerUtilityComponent.SetMinigame
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class UFortMinigame*               Minigame                                                         (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAISpawnerUtilityComponent::SetMinigame(class UFortMinigame* Minigame)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAISpawnerUtilityComponent", "SetMinigame");

	Params::UFortAISpawnerUtilityComponent_SetMinigame_Params Parms{};

	Parms.Minigame = Minigame;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAISpawnerUtilityComponent.SetEQSQuery
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// TSoftObjectPtr<class UEnvQuery>    SelectedEQSQuery                                                 (Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAISpawnerUtilityComponent::SetEQSQuery(TSoftObjectPtr<class UEnvQuery> SelectedEQSQuery)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAISpawnerUtilityComponent", "SetEQSQuery");

	Params::UFortAISpawnerUtilityComponent_SetEQSQuery_Params Parms{};

	Parms.SelectedEQSQuery = SelectedEQSQuery;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAISpawnerUtilityComponent.RequestSpawn
// (Final, RequiredAPI, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UFortAthenaAISpawnerDataComponentList*AISpawnerComponentList                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  SpawnTransform                                                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortAISpawnerUtilityComponent::RequestSpawn(class UFortAthenaAISpawnerDataComponentList* AISpawnerComponentList, struct FTransform& SpawnTransform)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAISpawnerUtilityComponent", "RequestSpawn");

	Params::UFortAISpawnerUtilityComponent_RequestSpawn_Params Parms{};

	Parms.AISpawnerComponentList = AISpawnerComponentList;
	Parms.SpawnTransform = SpawnTransform;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAISpawnerUtilityComponent.OnUnownedPawnDied
// (Final, Native, Private, HasDefaults)
// Parameters:
// class UActor*                      DamagedActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UController*                 InstigatedBy                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      DamageCauser                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     HitLocation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         FHitComponent                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        BoneName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Momentum                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAISpawnerUtilityComponent::OnUnownedPawnDied(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAISpawnerUtilityComponent", "OnUnownedPawnDied");

	Params::UFortAISpawnerUtilityComponent_OnUnownedPawnDied_Params Parms{};

	Parms.DamagedActor = DamagedActor;
	Parms.Damage = Damage;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.HitLocation = HitLocation;
	Parms.FHitComponent = FHitComponent;
	Parms.BoneName = BoneName;
	Parms.Momentum = Momentum;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAISpawnerUtilityComponent.IsSpawnCountCapped
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAISpawnerUtilityComponent::IsSpawnCountCapped()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAISpawnerUtilityComponent", "IsSpawnCountCapped");

	Params::UFortAISpawnerUtilityComponent_IsSpawnCountCapped_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAISpawnerUtilityComponent.HandleUnownedPawnSpawned
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortPawn*                   FortPawn                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAISpawnerUtilityComponent::HandleUnownedPawnSpawned(class UFortPawn* FortPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAISpawnerUtilityComponent", "HandleUnownedPawnSpawned");

	Params::UFortAISpawnerUtilityComponent_HandleUnownedPawnSpawned_Params Parms{};

	Parms.FortPawn = FortPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FortniteAI.FortPawnComponent_AIInventoryManagement
// (None)

class UClass* UFortPawnComponent_AIInventoryManagement::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortPawnComponent_AIInventoryManagement");

	return Clss;
}


// FortPawnComponent_AIInventoryManagement FortniteAI.Default__FortPawnComponent_AIInventoryManagement
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortPawnComponent_AIInventoryManagement* UFortPawnComponent_AIInventoryManagement::GetDefaultObj()
{
	static class UFortPawnComponent_AIInventoryManagement* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortPawnComponent_AIInventoryManagement*>(UFortPawnComponent_AIInventoryManagement::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAIDataProvider_Ability
// (None)

class UClass* UFortAIDataProvider_Ability::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAIDataProvider_Ability");

	return Clss;
}


// FortAIDataProvider_Ability FortniteAI.Default__FortAIDataProvider_Ability
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAIDataProvider_Ability* UFortAIDataProvider_Ability::GetDefaultObj()
{
	static class UFortAIDataProvider_Ability* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAIDataProvider_Ability*>(UFortAIDataProvider_Ability::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAIDataProvider_AIDirector
// (None)

class UClass* UFortAIDataProvider_AIDirector::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAIDataProvider_AIDirector");

	return Clss;
}


// FortAIDataProvider_AIDirector FortniteAI.Default__FortAIDataProvider_AIDirector
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAIDataProvider_AIDirector* UFortAIDataProvider_AIDirector::GetDefaultObj()
{
	static class UFortAIDataProvider_AIDirector* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAIDataProvider_AIDirector*>(UFortAIDataProvider_AIDirector::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAIDataProvider_FloatCurveOverGameDifficulty
// (None)

class UClass* UFortAIDataProvider_FloatCurveOverGameDifficulty::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAIDataProvider_FloatCurveOverGameDifficulty");

	return Clss;
}


// FortAIDataProvider_FloatCurveOverGameDifficulty FortniteAI.Default__FortAIDataProvider_FloatCurveOverGameDifficulty
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAIDataProvider_FloatCurveOverGameDifficulty* UFortAIDataProvider_FloatCurveOverGameDifficulty::GetDefaultObj()
{
	static class UFortAIDataProvider_FloatCurveOverGameDifficulty* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAIDataProvider_FloatCurveOverGameDifficulty*>(UFortAIDataProvider_FloatCurveOverGameDifficulty::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAIDataProvider_GoalProviderAbility
// (None)

class UClass* UFortAIDataProvider_GoalProviderAbility::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAIDataProvider_GoalProviderAbility");

	return Clss;
}


// FortAIDataProvider_GoalProviderAbility FortniteAI.Default__FortAIDataProvider_GoalProviderAbility
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAIDataProvider_GoalProviderAbility* UFortAIDataProvider_GoalProviderAbility::GetDefaultObj()
{
	static class UFortAIDataProvider_GoalProviderAbility* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAIDataProvider_GoalProviderAbility*>(UFortAIDataProvider_GoalProviderAbility::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAIDataProvider_Pawn
// (None)

class UClass* UFortAIDataProvider_Pawn::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAIDataProvider_Pawn");

	return Clss;
}


// FortAIDataProvider_Pawn FortniteAI.Default__FortAIDataProvider_Pawn
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAIDataProvider_Pawn* UFortAIDataProvider_Pawn::GetDefaultObj()
{
	static class UFortAIDataProvider_Pawn* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAIDataProvider_Pawn*>(UFortAIDataProvider_Pawn::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAIDataProvider_ScalableFloat
// (None)

class UClass* UFortAIDataProvider_ScalableFloat::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAIDataProvider_ScalableFloat");

	return Clss;
}


// FortAIDataProvider_ScalableFloat FortniteAI.Default__FortAIDataProvider_ScalableFloat
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAIDataProvider_ScalableFloat* UFortAIDataProvider_ScalableFloat::GetDefaultObj()
{
	static class UFortAIDataProvider_ScalableFloat* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAIDataProvider_ScalableFloat*>(UFortAIDataProvider_ScalableFloat::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAIAssetLoader
// (None)

class UClass* UFortAIAssetLoader::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAIAssetLoader");

	return Clss;
}


// FortAIAssetLoader FortniteAI.Default__FortAIAssetLoader
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAIAssetLoader* UFortAIAssetLoader::GetDefaultObj()
{
	static class UFortAIAssetLoader* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAIAssetLoader*>(UFortAIAssetLoader::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAIAssignment
// (None)

class UClass* UFortAIAssignment::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAIAssignment");

	return Clss;
}


// FortAIAssignment FortniteAI.Default__FortAIAssignment
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAIAssignment* UFortAIAssignment::GetDefaultObj()
{
	static class UFortAIAssignment* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAIAssignment*>(UFortAIAssignment::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAIAssignmentSettings
// (None)

class UClass* UFortAIAssignmentSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAIAssignmentSettings");

	return Clss;
}


// FortAIAssignmentSettings FortniteAI.Default__FortAIAssignmentSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAIAssignmentSettings* UFortAIAssignmentSettings::GetDefaultObj()
{
	static class UFortAIAssignmentSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAIAssignmentSettings*>(UFortAIAssignmentSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAIBotDebugActor
// (Actor)

class UClass* UFortAIBotDebugActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAIBotDebugActor");

	return Clss;
}


// FortAIBotDebugActor FortniteAI.Default__FortAIBotDebugActor
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAIBotDebugActor* UFortAIBotDebugActor::GetDefaultObj()
{
	static class UFortAIBotDebugActor* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAIBotDebugActor*>(UFortAIBotDebugActor::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.FortAIBotDebugActor.OnRep_BotDebugMiniMapIndicator
// (Final, Native, Private)
// Parameters:
// class UAthenaAIBotDebugMiniMapIndicator*OldBotDebugMiniMap                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIBotDebugActor::OnRep_BotDebugMiniMapIndicator(class UAthenaAIBotDebugMiniMapIndicator* OldBotDebugMiniMap)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIBotDebugActor", "OnRep_BotDebugMiniMapIndicator");

	Params::UFortAIBotDebugActor_OnRep_BotDebugMiniMapIndicator_Params Parms{};

	Parms.OldBotDebugMiniMap = OldBotDebugMiniMap;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FortniteAI.FortAIBotPOIDebugActor
// (Actor)

class UClass* UFortAIBotPOIDebugActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAIBotPOIDebugActor");

	return Clss;
}


// FortAIBotPOIDebugActor FortniteAI.Default__FortAIBotPOIDebugActor
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAIBotPOIDebugActor* UFortAIBotPOIDebugActor::GetDefaultObj()
{
	static class UFortAIBotPOIDebugActor* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAIBotPOIDebugActor*>(UFortAIBotPOIDebugActor::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.FortAIBotPOIDebugActor.OnRep_PlayerBotsDebugMiniMap
// (Final, Native, Private)
// Parameters:
// class UAthenaAIBotPOIDebugMiniMapIndicator*OldPlayerBotsDebugMiniMap                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIBotPOIDebugActor::OnRep_PlayerBotsDebugMiniMap(class UAthenaAIBotPOIDebugMiniMapIndicator* OldPlayerBotsDebugMiniMap)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIBotPOIDebugActor", "OnRep_PlayerBotsDebugMiniMap");

	Params::UFortAIBotPOIDebugActor_OnRep_PlayerBotsDebugMiniMap_Params Parms{};

	Parms.OldPlayerBotsDebugMiniMap = OldPlayerBotsDebugMiniMap;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FortniteAI.FortAICustomTargetingComponent
// (None)

class UClass* UFortAICustomTargetingComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAICustomTargetingComponent");

	return Clss;
}


// FortAICustomTargetingComponent FortniteAI.Default__FortAICustomTargetingComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAICustomTargetingComponent* UFortAICustomTargetingComponent::GetDefaultObj()
{
	static class UFortAICustomTargetingComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAICustomTargetingComponent*>(UFortAICustomTargetingComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAIDirectorLODAIConfig
// (None)

class UClass* UFortAIDirectorLODAIConfig::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAIDirectorLODAIConfig");

	return Clss;
}


// FortAIDirectorLODAIConfig FortniteAI.Default__FortAIDirectorLODAIConfig
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAIDirectorLODAIConfig* UFortAIDirectorLODAIConfig::GetDefaultObj()
{
	static class UFortAIDirectorLODAIConfig* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAIDirectorLODAIConfig*>(UFortAIDirectorLODAIConfig::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAIDirectorDataManager
// (Actor)

class UClass* UFortAIDirectorDataManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAIDirectorDataManager");

	return Clss;
}


// FortAIDirectorDataManager FortniteAI.Default__FortAIDirectorDataManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAIDirectorDataManager* UFortAIDirectorDataManager::GetDefaultObj()
{
	static class UFortAIDirectorDataManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAIDirectorDataManager*>(UFortAIDirectorDataManager::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.FortAIDirectorDataManager.TriggerEvent
// (Native, Public, HasOutParams)
// Parameters:
// struct FFortAIDirectorEvent        TriggeredEvent                                                   (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UFortAIDirectorDataManager::TriggerEvent(struct FFortAIDirectorEvent& TriggeredEvent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIDirectorDataManager", "TriggerEvent");

	Params::UFortAIDirectorDataManager_TriggerEvent_Params Parms{};

	Parms.TriggeredEvent = TriggeredEvent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAIDirectorDataManager.GetAIDirectorFactorValue
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EFortAIDirectorFactor   AIDirectorFactor                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortAIDirectorDataManager::GetAIDirectorFactorValue(enum class EFortAIDirectorFactor AIDirectorFactor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIDirectorDataManager", "GetAIDirectorFactorValue");

	Params::UFortAIDirectorDataManager_GetAIDirectorFactorValue_Params Parms{};

	Parms.AIDirectorFactor = AIDirectorFactor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class FortniteAI.FortAIDirectorDataTrackingSettings
// (None)

class UClass* UFortAIDirectorDataTrackingSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAIDirectorDataTrackingSettings");

	return Clss;
}


// FortAIDirectorDataTrackingSettings FortniteAI.Default__FortAIDirectorDataTrackingSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAIDirectorDataTrackingSettings* UFortAIDirectorDataTrackingSettings::GetDefaultObj()
{
	static class UFortAIDirectorDataTrackingSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAIDirectorDataTrackingSettings*>(UFortAIDirectorDataTrackingSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAIDirectorEventManager
// (Actor)

class UClass* UFortAIDirectorEventManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAIDirectorEventManager");

	return Clss;
}


// FortAIDirectorEventManager FortniteAI.Default__FortAIDirectorEventManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAIDirectorEventManager* UFortAIDirectorEventManager::GetDefaultObj()
{
	static class UFortAIDirectorEventManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAIDirectorEventManager*>(UFortAIDirectorEventManager::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAIEncounterInfo
// (None)

class UClass* UFortAIEncounterInfo::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAIEncounterInfo");

	return Clss;
}


// FortAIEncounterInfo FortniteAI.Default__FortAIEncounterInfo
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAIEncounterInfo* UFortAIEncounterInfo::GetDefaultObj()
{
	static class UFortAIEncounterInfo* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAIEncounterInfo*>(UFortAIEncounterInfo::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.FortAIEncounterInfo.UnRegisterAISpawner
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UActor*                      InAISpawner                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIEncounterInfo::UnRegisterAISpawner(class UActor* InAISpawner)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIEncounterInfo", "UnRegisterAISpawner");

	Params::UFortAIEncounterInfo_UnRegisterAISpawner_Params Parms{};

	Parms.InAISpawner = InAISpawner;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAIEncounterInfo.SpawnTestAIGroup
// (Final, RequiredAPI, BlueprintAuthorityOnly, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UFortAISpawnGroup*           SpawnGroupToSpawn                                                (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     SpawnLocation                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    SpawnRotation                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class UActor*                      SpawnSource                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UFortAbilitySet*>     AbilitySetsToGrantOnSpawn                                        (ConstParm, Parm, ZeroConstructor, NativeAccessSpecifierPublic)
// struct FFortAISpawnGroupUpgradeDataUpgradeData                                                      (Parm, NativeAccessSpecifierPublic)
// bool                               bAllowAssigningToExternalSpawners                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              SecondsBetweenSpawns                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIEncounterInfo::SpawnTestAIGroup(class UFortAISpawnGroup* SpawnGroupToSpawn, const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation, class UActor* SpawnSource, const TArray<class UFortAbilitySet*>& AbilitySetsToGrantOnSpawn, const struct FFortAISpawnGroupUpgradeData& UpgradeData, bool bAllowAssigningToExternalSpawners, float SecondsBetweenSpawns)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIEncounterInfo", "SpawnTestAIGroup");

	Params::UFortAIEncounterInfo_SpawnTestAIGroup_Params Parms{};

	Parms.SpawnGroupToSpawn = SpawnGroupToSpawn;
	Parms.SpawnLocation = SpawnLocation;
	Parms.SpawnRotation = SpawnRotation;
	Parms.SpawnSource = SpawnSource;
	Parms.AbilitySetsToGrantOnSpawn = AbilitySetsToGrantOnSpawn;
	Parms.UpgradeData = UpgradeData;
	Parms.bAllowAssigningToExternalSpawners = bAllowAssigningToExternalSpawners;
	Parms.SecondsBetweenSpawns = SecondsBetweenSpawns;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAIEncounterInfo.SpawnAIPawnReservedForEnemySpawner
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UActor*                      EnemySpawner                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     SpawnLocation                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    SpawnRotation                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class UFortAIPawn*                 ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAIPawn* UFortAIEncounterInfo::SpawnAIPawnReservedForEnemySpawner(class UActor* EnemySpawner, const struct FVector& SpawnLocation, const struct FRotator& SpawnRotation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIEncounterInfo", "SpawnAIPawnReservedForEnemySpawner");

	Params::UFortAIEncounterInfo_SpawnAIPawnReservedForEnemySpawner_Params Parms{};

	Parms.EnemySpawner = EnemySpawner;
	Parms.SpawnLocation = SpawnLocation;
	Parms.SpawnRotation = SpawnRotation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIEncounterInfo.SetPawnNumberLimit
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InPawnNumberLimit                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIEncounterInfo::SetPawnNumberLimit(int32 InPawnNumberLimit)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIEncounterInfo", "SetPawnNumberLimit");

	Params::UFortAIEncounterInfo_SetPawnNumberLimit_Params Parms{};

	Parms.InPawnNumberLimit = InPawnNumberLimit;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAIEncounterInfo.SetNukeWavesAtEncounterEnd
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bNuke                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIEncounterInfo::SetNukeWavesAtEncounterEnd(bool bNuke)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIEncounterInfo", "SetNukeWavesAtEncounterEnd");

	Params::UFortAIEncounterInfo_SetNukeWavesAtEncounterEnd_Params Parms{};

	Parms.bNuke = bNuke;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAIEncounterInfo.SetEncounterActivationState
// (Final, RequiredAPI, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEncounterActivityState                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIEncounterInfo::SetEncounterActivationState(bool bEncounterActivityState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIEncounterInfo", "SetEncounterActivationState");

	Params::UFortAIEncounterInfo_SetEncounterActivationState_Params Parms{};

	Parms.bEncounterActivityState = bEncounterActivityState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAIEncounterInfo.RequestActivation
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// int32                              ActivationDelay                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIEncounterInfo::RequestActivation(int32 ActivationDelay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIEncounterInfo", "RequestActivation");

	Params::UFortAIEncounterInfo_RequestActivation_Params Parms{};

	Parms.ActivationDelay = ActivationDelay;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAIEncounterInfo.RegisterAISpawner
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UActor*                      InAISpawner                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIEncounterInfo::RegisterAISpawner(class UActor* InAISpawner)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIEncounterInfo", "RegisterAISpawner");

	Params::UFortAIEncounterInfo_RegisterAISpawner_Params Parms{};

	Parms.InAISpawner = InAISpawner;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAIEncounterInfo.OnRestStarted
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortAIEncounterInfo::OnRestStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIEncounterInfo", "OnRestStarted");

	Params::UFortAIEncounterInfo_OnRestStarted_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteAI.FortAIEncounterInfo.OnRampStarted
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortAIEncounterInfo::OnRampStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIEncounterInfo", "OnRampStarted");

	Params::UFortAIEncounterInfo_OnRampStarted_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteAI.FortAIEncounterInfo.OnPeakStarted
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortAIEncounterInfo::OnPeakStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIEncounterInfo", "OnPeakStarted");

	Params::UFortAIEncounterInfo_OnPeakStarted_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteAI.FortAIEncounterInfo.OnGoalTakeDamage
// (Final, Native, Public, HasDefaults)
// Parameters:
// class UActor*                      DamagedActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UController*                 InstigatedBy                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      DamageCauser                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     HitLocation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         FHitComponent                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        BoneName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Momentum                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIEncounterInfo::OnGoalTakeDamage(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIEncounterInfo", "OnGoalTakeDamage");

	Params::UFortAIEncounterInfo_OnGoalTakeDamage_Params Parms{};

	Parms.DamagedActor = DamagedActor;
	Parms.Damage = Damage;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.HitLocation = HitLocation;
	Parms.FHitComponent = FHitComponent;
	Parms.BoneName = BoneName;
	Parms.Momentum = Momentum;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAIEncounterInfo.OnGameDifficultyChanged
// (Final, Native, Private)
// Parameters:

void UFortAIEncounterInfo::OnGameDifficultyChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIEncounterInfo", "OnGameDifficultyChanged");

	Params::UFortAIEncounterInfo_OnGameDifficultyChanged_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAIEncounterInfo.OnFadeStarted
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortAIEncounterInfo::OnFadeStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIEncounterInfo", "OnFadeStarted");

	Params::UFortAIEncounterInfo_OnFadeStarted_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteAI.FortAIEncounterInfo.OnEncounterPawnDamaged
// (Final, Native, Protected, HasDefaults)
// Parameters:
// class UActor*                      DamagedActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UController*                 InstigatedBy                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      DamageCauser                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     HitLocation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         FHitComponent                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        BoneName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Momentum                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIEncounterInfo::OnEncounterPawnDamaged(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIEncounterInfo", "OnEncounterPawnDamaged");

	Params::UFortAIEncounterInfo_OnEncounterPawnDamaged_Params Parms{};

	Parms.DamagedActor = DamagedActor;
	Parms.Damage = Damage;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.HitLocation = HitLocation;
	Parms.FHitComponent = FHitComponent;
	Parms.BoneName = BoneName;
	Parms.Momentum = Momentum;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAIEncounterInfo.NotifyRiftDied
// (Final, Native, Public, HasDefaults)
// Parameters:
// class UActor*                      DamagedActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UController*                 InstigatedBy                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      DamageCauser                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     HitLocation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         FHitComponent                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        BoneName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Momentum                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIEncounterInfo::NotifyRiftDied(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIEncounterInfo", "NotifyRiftDied");

	Params::UFortAIEncounterInfo_NotifyRiftDied_Params Parms{};

	Parms.DamagedActor = DamagedActor;
	Parms.Damage = Damage;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.HitLocation = HitLocation;
	Parms.FHitComponent = FHitComponent;
	Parms.BoneName = BoneName;
	Parms.Momentum = Momentum;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAIEncounterInfo.GroupHasAIRemainingToSpawn
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FFortAISpawnerData          FortAISpawnerData                                                (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAIEncounterInfo::GroupHasAIRemainingToSpawn(struct FFortAISpawnerData& FortAISpawnerData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIEncounterInfo", "GroupHasAIRemainingToSpawn");

	Params::UFortAIEncounterInfo_GroupHasAIRemainingToSpawn_Params Parms{};

	Parms.FortAISpawnerData = FortAISpawnerData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIEncounterInfo.GetPawnNumberLimit
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortAIEncounterInfo::GetPawnNumberLimit()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIEncounterInfo", "GetPawnNumberLimit");

	Params::UFortAIEncounterInfo_GetPawnNumberLimit_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIEncounterInfo.GetEncounterTimeSeconds
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortAIEncounterInfo::GetEncounterTimeSeconds()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIEncounterInfo", "GetEncounterTimeSeconds");

	Params::UFortAIEncounterInfo_GetEncounterTimeSeconds_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIEncounterInfo.GetEncounterRifts
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UBuildingRift*>       OutRifts                                                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UFortAIEncounterInfo::GetEncounterRifts(TArray<class UBuildingRift*>* OutRifts)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIEncounterInfo", "GetEncounterRifts");

	Params::UFortAIEncounterInfo_GetEncounterRifts_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutRifts != nullptr)
		*OutRifts = Parms.OutRifts;

}


// Function FortniteAI.FortAIEncounterInfo.GetEncounterQueryActor
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UActor* UFortAIEncounterInfo::GetEncounterQueryActor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIEncounterInfo", "GetEncounterQueryActor");

	Params::UFortAIEncounterInfo_GetEncounterQueryActor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIEncounterInfo.GetEncounterGameplayTags
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTagContainer       OutEncounterTags                                                 (Parm, OutParm, NativeAccessSpecifierPublic)

void UFortAIEncounterInfo::GetEncounterGameplayTags(struct FGameplayTagContainer* OutEncounterTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIEncounterInfo", "GetEncounterGameplayTags");

	Params::UFortAIEncounterInfo_GetEncounterGameplayTags_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutEncounterTags != nullptr)
		*OutEncounterTags = Parms.OutEncounterTags;

}


// Function FortniteAI.FortAIEncounterInfo.GetEncounterDataManager
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UFortAIDirectorDataManager*  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAIDirectorDataManager* UFortAIEncounterInfo::GetEncounterDataManager()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIEncounterInfo", "GetEncounterDataManager");

	Params::UFortAIEncounterInfo_GetEncounterDataManager_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIEncounterInfo.GetEncounterAssignmentGoalActors
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UActor*>              OutGoalActors                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UFortAIEncounterInfo::GetEncounterAssignmentGoalActors(TArray<class UActor*>* OutGoalActors)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIEncounterInfo", "GetEncounterAssignmentGoalActors");

	Params::UFortAIEncounterInfo_GetEncounterAssignmentGoalActors_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutGoalActors != nullptr)
		*OutGoalActors = Parms.OutGoalActors;

}


// Function FortniteAI.FortAIEncounterInfo.GetCurrentSpawnAreaDirections
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<enum class EFortEncounterDirection>OutDirections                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAIEncounterInfo::GetCurrentSpawnAreaDirections(TArray<enum class EFortEncounterDirection>* OutDirections)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIEncounterInfo", "GetCurrentSpawnAreaDirections");

	Params::UFortAIEncounterInfo_GetCurrentSpawnAreaDirections_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutDirections != nullptr)
		*OutDirections = Parms.OutDirections;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIEncounterInfo.EncounterHasReservedSpawnRequestForEnemySpawner
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UActor*                      EnemySpawner                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAIEncounterInfo::EncounterHasReservedSpawnRequestForEnemySpawner(class UActor* EnemySpawner)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIEncounterInfo", "EncounterHasReservedSpawnRequestForEnemySpawner");

	Params::UFortAIEncounterInfo_EncounterHasReservedSpawnRequestForEnemySpawner_Params Parms{};

	Parms.EnemySpawner = EnemySpawner;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIEncounterInfo.DespawnPendingAndCurrentAI
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortAIEncounterInfo::DespawnPendingAndCurrentAI()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIEncounterInfo", "DespawnPendingAndCurrentAI");

	Params::UFortAIEncounterInfo_DespawnPendingAndCurrentAI_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAIEncounterInfo.CreateEncounterAssignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortAIAssignmentSettings*   AssignmentSettings                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      GoalActor                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortAIAssignment*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAIAssignment* UFortAIEncounterInfo::CreateEncounterAssignment(class UFortAIAssignmentSettings* AssignmentSettings, class UActor* GoalActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIEncounterInfo", "CreateEncounterAssignment");

	Params::UFortAIEncounterInfo_CreateEncounterAssignment_Params Parms{};

	Parms.AssignmentSettings = AssignmentSettings;
	Parms.GoalActor = GoalActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class FortniteAI.FortAIEncounterInfoOwnerInterface
// (None)

class UClass* UFortAIEncounterInfoOwnerInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAIEncounterInfoOwnerInterface");

	return Clss;
}


// FortAIEncounterInfoOwnerInterface FortniteAI.Default__FortAIEncounterInfoOwnerInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAIEncounterInfoOwnerInterface* UFortAIEncounterInfoOwnerInterface::GetDefaultObj()
{
	static class UFortAIEncounterInfoOwnerInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAIEncounterInfoOwnerInterface*>(UFortAIEncounterInfoOwnerInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.FortAIEncounterInfoOwnerInterface.GetEncounterInfo
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortAIEncounterInfo*        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAIEncounterInfo* UFortAIEncounterInfoOwnerInterface::GetEncounterInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIEncounterInfoOwnerInterface", "GetEncounterInfo");

	Params::UFortAIEncounterInfoOwnerInterface_GetEncounterInfo_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class FortniteAI.FortAIEncounterRiftManager
// (None)

class UClass* UFortAIEncounterRiftManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAIEncounterRiftManager");

	return Clss;
}


// FortAIEncounterRiftManager FortniteAI.Default__FortAIEncounterRiftManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAIEncounterRiftManager* UFortAIEncounterRiftManager::GetDefaultObj()
{
	static class UFortAIEncounterRiftManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAIEncounterRiftManager*>(UFortAIEncounterRiftManager::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.FortAIEncounterRiftManager.OnRiftDestroyed
// (Final, Native, Public)
// Parameters:
// class UActor*                      Rift                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIEncounterRiftManager::OnRiftDestroyed(class UActor* Rift)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIEncounterRiftManager", "OnRiftDestroyed");

	Params::UFortAIEncounterRiftManager_OnRiftDestroyed_Params Parms{};

	Parms.Rift = Rift;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAIEncounterRiftManager.GetAssociatedMission
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortMission*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortMission* UFortAIEncounterRiftManager::GetAssociatedMission()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIEncounterRiftManager", "GetAssociatedMission");

	Params::UFortAIEncounterRiftManager_GetAssociatedMission_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class FortniteAI.FortAIEncounterSequence
// (None)

class UClass* UFortAIEncounterSequence::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAIEncounterSequence");

	return Clss;
}


// FortAIEncounterSequence FortniteAI.Default__FortAIEncounterSequence
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAIEncounterSequence* UFortAIEncounterSequence::GetDefaultObj()
{
	static class UFortAIEncounterSequence* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAIEncounterSequence*>(UFortAIEncounterSequence::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.FortAIEncounterSequence.StopCurrentEncounter
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void UFortAIEncounterSequence::StopCurrentEncounter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIEncounterSequence", "StopCurrentEncounter");

	Params::UFortAIEncounterSequence_StopCurrentEncounter_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAIEncounterSequence.StartCurrentEncounterWithSavedData
// (Final, RequiredAPI, BlueprintAuthorityOnly, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// enum class EFortEncounterSequenceResultOutRequestResult                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ActivationDelay                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortAIEncounterInfo*        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAIEncounterInfo* UFortAIEncounterSequence::StartCurrentEncounterWithSavedData(enum class EFortEncounterSequenceResult* OutRequestResult, int32 ActivationDelay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIEncounterSequence", "StartCurrentEncounterWithSavedData");

	Params::UFortAIEncounterSequence_StartCurrentEncounterWithSavedData_Params Parms{};

	Parms.ActivationDelay = ActivationDelay;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutRequestResult != nullptr)
		*OutRequestResult = Parms.OutRequestResult;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIEncounterSequence.StartCurrentEncounter
// (Final, RequiredAPI, BlueprintAuthorityOnly, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// enum class EFortEncounterSequenceResultOutRequestResult                                                 (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UActor*>              InTargetActors                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class UFortAIAssignmentSettings*   InAssignmentSettings                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FEncounterEnvironmentQueryInfoInOverrideEnvironmentQueryInfo                                   (Parm, NativeAccessSpecifierPublic)
// class UActor*                      InOptionalQueryActor                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       InInjectedTags                                                   (Parm, NativeAccessSpecifierPublic)
// struct FFortEncounterSettings      InEncounterSettings                                              (Parm, NativeAccessSpecifierPublic)
// int32                              ActivationDelay                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortAIEncounterInfo*        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAIEncounterInfo* UFortAIEncounterSequence::StartCurrentEncounter(enum class EFortEncounterSequenceResult* OutRequestResult, TArray<class UActor*>& InTargetActors, class UFortAIAssignmentSettings* InAssignmentSettings, const struct FEncounterEnvironmentQueryInfo& InOverrideEnvironmentQueryInfo, class UActor* InOptionalQueryActor, const struct FGameplayTagContainer& InInjectedTags, const struct FFortEncounterSettings& InEncounterSettings, int32 ActivationDelay)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIEncounterSequence", "StartCurrentEncounter");

	Params::UFortAIEncounterSequence_StartCurrentEncounter_Params Parms{};

	Parms.InTargetActors = InTargetActors;
	Parms.InAssignmentSettings = InAssignmentSettings;
	Parms.InOverrideEnvironmentQueryInfo = InOverrideEnvironmentQueryInfo;
	Parms.InOptionalQueryActor = InOptionalQueryActor;
	Parms.InInjectedTags = InInjectedTags;
	Parms.InEncounterSettings = InEncounterSettings;
	Parms.ActivationDelay = ActivationDelay;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutRequestResult != nullptr)
		*OutRequestResult = Parms.OutRequestResult;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIEncounterSequence.SetEncounterStartingData
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class UActor*>              InTargetActors                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class UFortAIAssignmentSettings*   InAssignmentSettings                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FEncounterEnvironmentQueryInfoInOverrideEnvironmentQueryInfo                                   (Parm, NativeAccessSpecifierPublic)
// class UActor*                      InOptionalQueryActor                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       InInjectedTags                                                   (Parm, NativeAccessSpecifierPublic)
// struct FFortEncounterSettings      InEncounterSettings                                              (Parm, NativeAccessSpecifierPublic)

void UFortAIEncounterSequence::SetEncounterStartingData(TArray<class UActor*>& InTargetActors, class UFortAIAssignmentSettings* InAssignmentSettings, const struct FEncounterEnvironmentQueryInfo& InOverrideEnvironmentQueryInfo, class UActor* InOptionalQueryActor, const struct FGameplayTagContainer& InInjectedTags, const struct FFortEncounterSettings& InEncounterSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIEncounterSequence", "SetEncounterStartingData");

	Params::UFortAIEncounterSequence_SetEncounterStartingData_Params Parms{};

	Parms.InTargetActors = InTargetActors;
	Parms.InAssignmentSettings = InAssignmentSettings;
	Parms.InOverrideEnvironmentQueryInfo = InOverrideEnvironmentQueryInfo;
	Parms.InOptionalQueryActor = InOptionalQueryActor;
	Parms.InInjectedTags = InInjectedTags;
	Parms.InEncounterSettings = InEncounterSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAIEncounterSequence.Previous
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// enum class EFortEncounterSequenceResultReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EFortEncounterSequenceResult UFortAIEncounterSequence::Previous()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIEncounterSequence", "Previous");

	Params::UFortAIEncounterSequence_Previous_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIEncounterSequence.Next
// (Final, RequiredAPI, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// enum class EFortEncounterSequenceResultReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EFortEncounterSequenceResult UFortAIEncounterSequence::Next()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIEncounterSequence", "Next");

	Params::UFortAIEncounterSequence_Next_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIEncounterSequence.Last
// (Final, RequiredAPI, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// enum class EFortEncounterSequenceResultReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EFortEncounterSequenceResult UFortAIEncounterSequence::Last()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIEncounterSequence", "Last");

	Params::UFortAIEncounterSequence_Last_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIEncounterSequence.IsOnFinalIndexInSequence
// (Final, RequiredAPI, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAIEncounterSequence::IsOnFinalIndexInSequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIEncounterSequence", "IsOnFinalIndexInSequence");

	Params::UFortAIEncounterSequence_IsOnFinalIndexInSequence_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIEncounterSequence.HasEncounter
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAIEncounterSequence::HasEncounter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIEncounterSequence", "HasEncounter");

	Params::UFortAIEncounterSequence_HasEncounter_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIEncounterSequence.GetNumEncountersInSequence
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortAIEncounterSequence::GetNumEncountersInSequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIEncounterSequence", "GetNumEncountersInSequence");

	Params::UFortAIEncounterSequence_GetNumEncountersInSequence_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIEncounterSequence.GetEncounterIndexInSequence
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortAIEncounterSequence::GetEncounterIndexInSequence()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIEncounterSequence", "GetEncounterIndexInSequence");

	Params::UFortAIEncounterSequence_GetEncounterIndexInSequence_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIEncounterSequence.GetCurrentEncounter
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortAIEncounterInfo*        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAIEncounterInfo* UFortAIEncounterSequence::GetCurrentEncounter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIEncounterSequence", "GetCurrentEncounter");

	Params::UFortAIEncounterSequence_GetCurrentEncounter_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIEncounterSequence.EncounterBelongsToSequence
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortAIEncounterInfo*        InEncounter                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAIEncounterSequence::EncounterBelongsToSequence(class UFortAIEncounterInfo* InEncounter)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIEncounterSequence", "EncounterBelongsToSequence");

	Params::UFortAIEncounterSequence_EncounterBelongsToSequence_Params Parms{};

	Parms.InEncounter = InEncounter;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class FortniteAI.FortAIEncounterTargetInterface
// (None)

class UClass* UFortAIEncounterTargetInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAIEncounterTargetInterface");

	return Clss;
}


// FortAIEncounterTargetInterface FortniteAI.Default__FortAIEncounterTargetInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAIEncounterTargetInterface* UFortAIEncounterTargetInterface::GetDefaultObj()
{
	static class UFortAIEncounterTargetInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAIEncounterTargetInterface*>(UFortAIEncounterTargetInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.FortAIEncounterTargetInterface.IsFloatingTarget
// (RequiredAPI, Event, Public, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAIEncounterTargetInterface::IsFloatingTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIEncounterTargetInterface", "IsFloatingTarget");

	Params::UFortAIEncounterTargetInterface_IsFloatingTarget_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIEncounterTargetInterface.GetObjectiveCompletionPercentage
// (Event, Public, BlueprintEvent)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortAIEncounterTargetInterface::GetObjectiveCompletionPercentage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIEncounterTargetInterface", "GetObjectiveCompletionPercentage");

	Params::UFortAIEncounterTargetInterface_GetObjectiveCompletionPercentage_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Class FortniteAI.FortAIFunctionLibrary
// (None)

class UClass* UFortAIFunctionLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAIFunctionLibrary");

	return Clss;
}


// FortAIFunctionLibrary FortniteAI.Default__FortAIFunctionLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAIFunctionLibrary* UFortAIFunctionLibrary::GetDefaultObj()
{
	static class UFortAIFunctionLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAIFunctionLibrary*>(UFortAIFunctionLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.FortAIFunctionLibrary.TeleportAIPawn
// (Final, BlueprintAuthorityOnly, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UFortAIPawn*                 AIPawn                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     DestLocation                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    DestRotation                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bIgnoreCollision                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAIFunctionLibrary::TeleportAIPawn(class UFortAIPawn* AIPawn, const struct FVector& DestLocation, const struct FRotator& DestRotation, bool bIgnoreCollision)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIFunctionLibrary", "TeleportAIPawn");

	Params::UFortAIFunctionLibrary_TeleportAIPawn_Params Parms{};

	Parms.AIPawn = AIPawn;
	Parms.DestLocation = DestLocation;
	Parms.DestRotation = DestRotation;
	Parms.bIgnoreCollision = bIgnoreCollision;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIFunctionLibrary.SetHearingRange
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UActor*                      AIAgent                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Range                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIFunctionLibrary::SetHearingRange(class UActor* AIAgent, float Range)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIFunctionLibrary", "SetHearingRange");

	Params::UFortAIFunctionLibrary_SetHearingRange_Params Parms{};

	Parms.AIAgent = AIAgent;
	Parms.Range = Range;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAIFunctionLibrary.RequestNavUpdateForBuilding
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UBuildingActor*              BuildingActor                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIFunctionLibrary::RequestNavUpdateForBuilding(class UBuildingActor* BuildingActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIFunctionLibrary", "RequestNavUpdateForBuilding");

	Params::UFortAIFunctionLibrary_RequestNavUpdateForBuilding_Params Parms{};

	Parms.BuildingActor = BuildingActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAIFunctionLibrary.MakeNoiseEventAtLocation
// (Final, RequiredAPI, BlueprintAuthorityOnly, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UActor*                      NoiseMaker                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MaxRange                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     NoiseLocation                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        NoiseTag                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIFunctionLibrary::MakeNoiseEventAtLocation(class UActor* NoiseMaker, float MaxRange, struct FVector& NoiseLocation, class FName NoiseTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIFunctionLibrary", "MakeNoiseEventAtLocation");

	Params::UFortAIFunctionLibrary_MakeNoiseEventAtLocation_Params Parms{};

	Parms.NoiseMaker = NoiseMaker;
	Parms.MaxRange = MaxRange;
	Parms.NoiseLocation = NoiseLocation;
	Parms.NoiseTag = NoiseTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAIFunctionLibrary.MakeNoiseEvent
// (Final, RequiredAPI, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UActor*                      NoiseMaker                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MaxRange                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        NoiseTag                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIFunctionLibrary::MakeNoiseEvent(class UActor* NoiseMaker, float MaxRange, class FName NoiseTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIFunctionLibrary", "MakeNoiseEvent");

	Params::UFortAIFunctionLibrary_MakeNoiseEvent_Params Parms{};

	Parms.NoiseMaker = NoiseMaker;
	Parms.MaxRange = MaxRange;
	Parms.NoiseTag = NoiseTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAIFunctionLibrary.IsConcealedByPerceptionModifiers
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ObserverLocation                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     TargetLocation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              OutConcealment                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAIFunctionLibrary::IsConcealedByPerceptionModifiers(class UObject* WorldContextObject, const struct FVector& ObserverLocation, const struct FVector& TargetLocation, float* OutConcealment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIFunctionLibrary", "IsConcealedByPerceptionModifiers");

	Params::UFortAIFunctionLibrary_IsConcealedByPerceptionModifiers_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.ObserverLocation = ObserverLocation;
	Parms.TargetLocation = TargetLocation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutConcealment != nullptr)
		*OutConcealment = Parms.OutConcealment;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIFunctionLibrary.GetOrCreateAIRuntimeParameters
// (Final, RequiredAPI, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UAIController*               AIController                                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UFortAthenaAIRuntimeParameters>ParametersClass                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortAthenaAIRuntimeParameters*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAthenaAIRuntimeParameters* UFortAIFunctionLibrary::GetOrCreateAIRuntimeParameters(class UAIController* AIController, TSubclassOf<class UFortAthenaAIRuntimeParameters> ParametersClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIFunctionLibrary", "GetOrCreateAIRuntimeParameters");

	Params::UFortAIFunctionLibrary_GetOrCreateAIRuntimeParameters_Params Parms{};

	Parms.AIController = AIController;
	Parms.ParametersClass = ParametersClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIFunctionLibrary.GetAISpawner
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAthenaAISpawner*            ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAthenaAISpawner* UFortAIFunctionLibrary::GetAISpawner(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIFunctionLibrary", "GetAISpawner");

	Params::UFortAIFunctionLibrary_GetAISpawner_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class FortniteAI.FortAIGoalManager
// (Actor)

class UClass* UFortAIGoalManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAIGoalManager");

	return Clss;
}


// FortAIGoalManager FortniteAI.Default__FortAIGoalManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAIGoalManager* UFortAIGoalManager::GetDefaultObj()
{
	static class UFortAIGoalManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAIGoalManager*>(UFortAIGoalManager::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.FortAIGoalManager.SetCurrentGoalDiscouragement
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContext                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortAIController*           AI                                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIGoalManager::SetCurrentGoalDiscouragement(class UObject* WorldContext, class UFortAIController* AI)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIGoalManager", "SetCurrentGoalDiscouragement");

	Params::UFortAIGoalManager_SetCurrentGoalDiscouragement_Params Parms{};

	Parms.WorldContext = WorldContext;
	Parms.AI = AI;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAIGoalManager.RemoveWorldAssignment
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFortAIAssignmentIdentifier AssignmentIdentifier                                             (Parm, NativeAccessSpecifierPublic)

void UFortAIGoalManager::RemoveWorldAssignment(class UObject* WorldContextObject, const struct FFortAIAssignmentIdentifier& AssignmentIdentifier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIGoalManager", "RemoveWorldAssignment");

	Params::UFortAIGoalManager_RemoveWorldAssignment_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.AssignmentIdentifier = AssignmentIdentifier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAIGoalManager.RemoveGoalsFromWorldAssignment
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFortAIAssignmentIdentifier AssignmentIdentifier                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FFortAIGoalInfo>     GoalInfos                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UFortAIGoalManager::RemoveGoalsFromWorldAssignment(class UObject* WorldContextObject, struct FFortAIAssignmentIdentifier& AssignmentIdentifier, TArray<struct FFortAIGoalInfo>& GoalInfos)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIGoalManager", "RemoveGoalsFromWorldAssignment");

	Params::UFortAIGoalManager_RemoveGoalsFromWorldAssignment_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.AssignmentIdentifier = AssignmentIdentifier;
	Parms.GoalInfos = GoalInfos;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAIGoalManager.RemoveGoalFromWorldAssignment
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFortAIAssignmentIdentifier AssignmentIdentifier                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FFortAIGoalInfo             GoalInfo                                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UFortAIGoalManager::RemoveGoalFromWorldAssignment(class UObject* WorldContextObject, struct FFortAIAssignmentIdentifier& AssignmentIdentifier, struct FFortAIGoalInfo& GoalInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIGoalManager", "RemoveGoalFromWorldAssignment");

	Params::UFortAIGoalManager_RemoveGoalFromWorldAssignment_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.AssignmentIdentifier = AssignmentIdentifier;
	Parms.GoalInfo = GoalInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAIGoalManager.MakeGoalsFromLocationsAndActor
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FFortAIGoalInfo>     Goals                                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>             GoalLocations                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class UActor*                      GoalActor                                                        (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIGoalManager::MakeGoalsFromLocationsAndActor(TArray<struct FFortAIGoalInfo>* Goals, class UObject* WorldContextObject, TArray<struct FVector>& GoalLocations, class UActor* GoalActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIGoalManager", "MakeGoalsFromLocationsAndActor");

	Params::UFortAIGoalManager_MakeGoalsFromLocationsAndActor_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.GoalLocations = GoalLocations;
	Parms.GoalActor = GoalActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Goals != nullptr)
		*Goals = Parms.Goals;

}


// Function FortniteAI.FortAIGoalManager.MakeGoalsFromLocations
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FFortAIGoalInfo>     Goals                                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>             GoalLocations                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UFortAIGoalManager::MakeGoalsFromLocations(TArray<struct FFortAIGoalInfo>* Goals, class UObject* WorldContextObject, TArray<struct FVector>& GoalLocations)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIGoalManager", "MakeGoalsFromLocations");

	Params::UFortAIGoalManager_MakeGoalsFromLocations_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.GoalLocations = GoalLocations;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Goals != nullptr)
		*Goals = Parms.Goals;

}


// Function FortniteAI.FortAIGoalManager.MakeGoalsFromActors
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FFortAIGoalInfo>     Goals                                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class UActor*>              GoalActors                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bActorsAlwaysPerceived                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bGoalActorsAllowUndermining                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIGoalManager::MakeGoalsFromActors(TArray<struct FFortAIGoalInfo>* Goals, class UObject* WorldContextObject, TArray<class UActor*>& GoalActors, bool bActorsAlwaysPerceived, bool bGoalActorsAllowUndermining)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIGoalManager", "MakeGoalsFromActors");

	Params::UFortAIGoalManager_MakeGoalsFromActors_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.GoalActors = GoalActors;
	Parms.bActorsAlwaysPerceived = bActorsAlwaysPerceived;
	Parms.bGoalActorsAllowUndermining = bGoalActorsAllowUndermining;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Goals != nullptr)
		*Goals = Parms.Goals;

}


// Function FortniteAI.FortAIGoalManager.MakeGoalFromLocation
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FFortAIGoalInfo             Goal                                                             (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     GoalLocation                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIGoalManager::MakeGoalFromLocation(struct FFortAIGoalInfo* Goal, class UObject* WorldContextObject, struct FVector& GoalLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIGoalManager", "MakeGoalFromLocation");

	Params::UFortAIGoalManager_MakeGoalFromLocation_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.GoalLocation = GoalLocation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Goal != nullptr)
		*Goal = Parms.Goal;

}


// Function FortniteAI.FortAIGoalManager.MakeGoalFromActor
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FFortAIGoalInfo             Goal                                                             (Parm, OutParm, NoDestructor, NativeAccessSpecifierPublic)
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      GoalActor                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bActorAlwaysPerceived                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bGoalActorAllowsUndermining                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIGoalManager::MakeGoalFromActor(struct FFortAIGoalInfo* Goal, class UObject* WorldContextObject, class UActor* GoalActor, bool bActorAlwaysPerceived, bool bGoalActorAllowsUndermining)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIGoalManager", "MakeGoalFromActor");

	Params::UFortAIGoalManager_MakeGoalFromActor_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.GoalActor = GoalActor;
	Parms.bActorAlwaysPerceived = bActorAlwaysPerceived;
	Parms.bGoalActorAllowsUndermining = bGoalActorAllowsUndermining;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Goal != nullptr)
		*Goal = Parms.Goal;

}


// Function FortniteAI.FortAIGoalManager.CreateWorldAssignment
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFortAIAssignmentIdentifier WorldAssignmentIdentifier                                        (Parm, NativeAccessSpecifierPublic)
// class UFortAIAssignmentSettings*   AssignmentSettings                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UFortAIGoalProvider>GoalProvider                                                     (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFortAIAssignmentIdentifier AssignmentIdentifier                                             (Parm, OutParm, NativeAccessSpecifierPublic)
// enum class EAssignmentCreationResultCreationResult                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIGoalManager::CreateWorldAssignment(class UObject* WorldContextObject, const struct FFortAIAssignmentIdentifier& WorldAssignmentIdentifier, class UFortAIAssignmentSettings* AssignmentSettings, TSubclassOf<class UFortAIGoalProvider> GoalProvider, struct FFortAIAssignmentIdentifier* AssignmentIdentifier, enum class EAssignmentCreationResult* CreationResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIGoalManager", "CreateWorldAssignment");

	Params::UFortAIGoalManager_CreateWorldAssignment_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.WorldAssignmentIdentifier = WorldAssignmentIdentifier;
	Parms.AssignmentSettings = AssignmentSettings;
	Parms.GoalProvider = GoalProvider;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AssignmentIdentifier != nullptr)
		*AssignmentIdentifier = Parms.AssignmentIdentifier;

	if (CreationResult != nullptr)
		*CreationResult = Parms.CreationResult;

}


// Function FortniteAI.FortAIGoalManager.AddWorldAssignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortAIAssignmentSettings*   AssignmentSettings                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      GoalActor                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortAIAssignment*           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAIAssignment* UFortAIGoalManager::AddWorldAssignment(class UFortAIAssignmentSettings* AssignmentSettings, class UActor* GoalActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIGoalManager", "AddWorldAssignment");

	Params::UFortAIGoalManager_AddWorldAssignment_Params Parms{};

	Parms.AssignmentSettings = AssignmentSettings;
	Parms.GoalActor = GoalActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIGoalManager.AddGoalToWorldAssignment
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFortAIAssignmentIdentifier AssignmentIdentifier                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FFortAIGoalInfo             GoalInfo                                                         (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UFortAIGoalManager::AddGoalToWorldAssignment(class UObject* WorldContextObject, struct FFortAIAssignmentIdentifier& AssignmentIdentifier, struct FFortAIGoalInfo& GoalInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIGoalManager", "AddGoalToWorldAssignment");

	Params::UFortAIGoalManager_AddGoalToWorldAssignment_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.AssignmentIdentifier = AssignmentIdentifier;
	Parms.GoalInfo = GoalInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAIGoalManager.AddGoalsToWorldAssignment
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFortAIAssignmentIdentifier AssignmentIdentifier                                             (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<struct FFortAIGoalInfo>     GoalInfos                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UFortAIGoalManager::AddGoalsToWorldAssignment(class UObject* WorldContextObject, struct FFortAIAssignmentIdentifier& AssignmentIdentifier, TArray<struct FFortAIGoalInfo>& GoalInfos)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIGoalManager", "AddGoalsToWorldAssignment");

	Params::UFortAIGoalManager_AddGoalsToWorldAssignment_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.AssignmentIdentifier = AssignmentIdentifier;
	Parms.GoalInfos = GoalInfos;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAIGoalManager.AddGoalActorToAssignment
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortAIAssignment*           Assignment                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      GoalActor                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIGoalManager::AddGoalActorToAssignment(class UFortAIAssignment* Assignment, class UActor* GoalActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIGoalManager", "AddGoalActorToAssignment");

	Params::UFortAIGoalManager_AddGoalActorToAssignment_Params Parms{};

	Parms.Assignment = Assignment;
	Parms.GoalActor = GoalActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAIGoalManager.AddGoal
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UActor*                      GoalActor                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortAIAssignmentSettings*   GoalSettings                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAIGoalManager::AddGoal(class UActor* GoalActor, class UFortAIAssignmentSettings* GoalSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIGoalManager", "AddGoal");

	Params::UFortAIGoalManager_AddGoal_Params Parms{};

	Parms.GoalActor = GoalActor;
	Parms.GoalSettings = GoalSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FortniteAI.FortAINearbyActorsPerceptionComponent
// (None)

class UClass* UFortAINearbyActorsPerceptionComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAINearbyActorsPerceptionComponent");

	return Clss;
}


// FortAINearbyActorsPerceptionComponent FortniteAI.Default__FortAINearbyActorsPerceptionComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAINearbyActorsPerceptionComponent* UFortAINearbyActorsPerceptionComponent::GetDefaultObj()
{
	static class UFortAINearbyActorsPerceptionComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAINearbyActorsPerceptionComponent*>(UFortAINearbyActorsPerceptionComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAIObjectiveInterface
// (None)

class UClass* UFortAIObjectiveInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAIObjectiveInterface");

	return Clss;
}


// FortAIObjectiveInterface FortniteAI.Default__FortAIObjectiveInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAIObjectiveInterface* UFortAIObjectiveInterface::GetDefaultObj()
{
	static class UFortAIObjectiveInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAIObjectiveInterface*>(UFortAIObjectiveInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAIPawnCustomizationDefinition
// (None)

class UClass* UFortAIPawnCustomizationDefinition::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAIPawnCustomizationDefinition");

	return Clss;
}


// FortAIPawnCustomizationDefinition FortniteAI.Default__FortAIPawnCustomizationDefinition
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAIPawnCustomizationDefinition* UFortAIPawnCustomizationDefinition::GetDefaultObj()
{
	static class UFortAIPawnCustomizationDefinition* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAIPawnCustomizationDefinition*>(UFortAIPawnCustomizationDefinition::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAIPawnVariant
// (None)

class UClass* UFortAIPawnVariant::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAIPawnVariant");

	return Clss;
}


// FortAIPawnVariant FortniteAI.Default__FortAIPawnVariant
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAIPawnVariant* UFortAIPawnVariant::GetDefaultObj()
{
	static class UFortAIPawnVariant* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAIPawnVariant*>(UFortAIPawnVariant::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAIRootAssignmentProviderInterface
// (None)

class UClass* UFortAIRootAssignmentProviderInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAIRootAssignmentProviderInterface");

	return Clss;
}


// FortAIRootAssignmentProviderInterface FortniteAI.Default__FortAIRootAssignmentProviderInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAIRootAssignmentProviderInterface* UFortAIRootAssignmentProviderInterface::GetDefaultObj()
{
	static class UFortAIRootAssignmentProviderInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAIRootAssignmentProviderInterface*>(UFortAIRootAssignmentProviderInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.FortAIRootAssignmentProviderInterface.GetRootAssignmentIdentifier
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FFortAIAssignmentIdentifier ReturnValue                                                      (ConstParm, Parm, OutParm, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

struct FFortAIAssignmentIdentifier UFortAIRootAssignmentProviderInterface::GetRootAssignmentIdentifier()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIRootAssignmentProviderInterface", "GetRootAssignmentIdentifier");

	Params::UFortAIRootAssignmentProviderInterface_GetRootAssignmentIdentifier_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class FortniteAI.FortAISpawnerActorBase
// (Actor)

class UClass* UFortAISpawnerActorBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAISpawnerActorBase");

	return Clss;
}


// FortAISpawnerActorBase FortniteAI.Default__FortAISpawnerActorBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAISpawnerActorBase* UFortAISpawnerActorBase::GetDefaultObj()
{
	static class UFortAISpawnerActorBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAISpawnerActorBase*>(UFortAISpawnerActorBase::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAISpawnerInterface
// (None)

class UClass* UFortAISpawnerInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAISpawnerInterface");

	return Clss;
}


// FortAISpawnerInterface FortniteAI.Default__FortAISpawnerInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAISpawnerInterface* UFortAISpawnerInterface::GetDefaultObj()
{
	static class UFortAISpawnerInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAISpawnerInterface*>(UFortAISpawnerInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.FortAISpawnerInterface.OnReceiveSpawnGroup
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAISpawnerInterface::OnReceiveSpawnGroup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAISpawnerInterface", "OnReceiveSpawnGroup");

	Params::UFortAISpawnerInterface_OnReceiveSpawnGroup_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAISpawnerInterface.IsReadyToReceiveNewSpawnGroup
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAISpawnerInterface::IsReadyToReceiveNewSpawnGroup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAISpawnerInterface", "IsReadyToReceiveNewSpawnGroup");

	Params::UFortAISpawnerInterface_IsReadyToReceiveNewSpawnGroup_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Class FortniteAI.FortAISpawnGroup
// (None)

class UClass* UFortAISpawnGroup::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAISpawnGroup");

	return Clss;
}


// FortAISpawnGroup FortniteAI.Default__FortAISpawnGroup
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAISpawnGroup* UFortAISpawnGroup::GetDefaultObj()
{
	static class UFortAISpawnGroup* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAISpawnGroup*>(UFortAISpawnGroup::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.FortAISpawnGroup.IsValidForEnemySpawners
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAISpawnGroup::IsValidForEnemySpawners()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAISpawnGroup", "IsValidForEnemySpawners");

	Params::UFortAISpawnGroup_IsValidForEnemySpawners_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAISpawnGroup.IsPrototype
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAISpawnGroup::IsPrototype()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAISpawnGroup", "IsPrototype");

	Params::UFortAISpawnGroup_IsPrototype_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAISpawnGroup.IsLargeSpawnGroup
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAISpawnGroup::IsLargeSpawnGroup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAISpawnGroup", "IsLargeSpawnGroup");

	Params::UFortAISpawnGroup_IsLargeSpawnGroup_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAISpawnGroup.GetNumberOfEnemies
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortAISpawnGroup::GetNumberOfEnemies()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAISpawnGroup", "GetNumberOfEnemies");

	Params::UFortAISpawnGroup_GetNumberOfEnemies_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAISpawnGroup.GetEnemy
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              EnemyIndex                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UFortAIPawnVariant>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TSubclassOf<class UFortAIPawnVariant> UFortAISpawnGroup::GetEnemy(int32 EnemyIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAISpawnGroup", "GetEnemy");

	Params::UFortAISpawnGroup_GetEnemy_Params Parms{};

	Parms.EnemyIndex = EnemyIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class FortniteAI.FortAISpawnGroupCapsCategorySet
// (None)

class UClass* UFortAISpawnGroupCapsCategorySet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAISpawnGroupCapsCategorySet");

	return Clss;
}


// FortAISpawnGroupCapsCategorySet FortniteAI.Default__FortAISpawnGroupCapsCategorySet
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAISpawnGroupCapsCategorySet* UFortAISpawnGroupCapsCategorySet::GetDefaultObj()
{
	static class UFortAISpawnGroupCapsCategorySet* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAISpawnGroupCapsCategorySet*>(UFortAISpawnGroupCapsCategorySet::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAISpawnGroupProgressionInfo
// (None)

class UClass* UFortAISpawnGroupProgressionInfo::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAISpawnGroupProgressionInfo");

	return Clss;
}


// FortAISpawnGroupProgressionInfo FortniteAI.Default__FortAISpawnGroupProgressionInfo
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAISpawnGroupProgressionInfo* UFortAISpawnGroupProgressionInfo::GetDefaultObj()
{
	static class UFortAISpawnGroupProgressionInfo* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAISpawnGroupProgressionInfo*>(UFortAISpawnGroupProgressionInfo::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAISpawnGroupUpgrade
// (None)

class UClass* UFortAISpawnGroupUpgrade::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAISpawnGroupUpgrade");

	return Clss;
}


// FortAISpawnGroupUpgrade FortniteAI.Default__FortAISpawnGroupUpgrade
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAISpawnGroupUpgrade* UFortAISpawnGroupUpgrade::GetDefaultObj()
{
	static class UFortAISpawnGroupUpgrade* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAISpawnGroupUpgrade*>(UFortAISpawnGroupUpgrade::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAISpawnGroupUpgradeProbabilities
// (None)

class UClass* UFortAISpawnGroupUpgradeProbabilities::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAISpawnGroupUpgradeProbabilities");

	return Clss;
}


// FortAISpawnGroupUpgradeProbabilities FortniteAI.Default__FortAISpawnGroupUpgradeProbabilities
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAISpawnGroupUpgradeProbabilities* UFortAISpawnGroupUpgradeProbabilities::GetDefaultObj()
{
	static class UFortAISpawnGroupUpgradeProbabilities* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAISpawnGroupUpgradeProbabilities*>(UFortAISpawnGroupUpgradeProbabilities::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAITetheringBoxBoundsInterface
// (None)

class UClass* UFortAITetheringBoxBoundsInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAITetheringBoxBoundsInterface");

	return Clss;
}


// FortAITetheringBoxBoundsInterface FortniteAI.Default__FortAITetheringBoxBoundsInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAITetheringBoxBoundsInterface* UFortAITetheringBoxBoundsInterface::GetDefaultObj()
{
	static class UFortAITetheringBoxBoundsInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAITetheringBoxBoundsInterface*>(UFortAITetheringBoxBoundsInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.FortAITetheringBoxBoundsInterface.GetTetheredBoxBoundsWidth
// (RequiredAPI, BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortAITetheringBoxBoundsInterface::GetTetheredBoxBoundsWidth()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAITetheringBoxBoundsInterface", "GetTetheredBoxBoundsWidth");

	Params::UFortAITetheringBoxBoundsInterface_GetTetheredBoxBoundsWidth_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAITetheringBoxBoundsInterface.GetTetheredBoxBoundsHeight
// (RequiredAPI, BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortAITetheringBoxBoundsInterface::GetTetheredBoxBoundsHeight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAITetheringBoxBoundsInterface", "GetTetheredBoxBoundsHeight");

	Params::UFortAITetheringBoxBoundsInterface_GetTetheredBoxBoundsHeight_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAITetheringBoxBoundsInterface.GetTetheredBoxBoundsEQSSpaceBetween
// (RequiredAPI, BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortAITetheringBoxBoundsInterface::GetTetheredBoxBoundsEQSSpaceBetween()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAITetheringBoxBoundsInterface", "GetTetheredBoxBoundsEQSSpaceBetween");

	Params::UFortAITetheringBoxBoundsInterface_GetTetheredBoxBoundsEQSSpaceBetween_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAITetheringBoxBoundsInterface.GetTetheredBoxBoundsEQSGridSize
// (RequiredAPI, BlueprintAuthorityOnly, Event, Public, BlueprintEvent)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortAITetheringBoxBoundsInterface::GetTetheredBoxBoundsEQSGridSize()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAITetheringBoxBoundsInterface", "GetTetheredBoxBoundsEQSGridSize");

	Params::UFortAITetheringBoxBoundsInterface_GetTetheredBoxBoundsEQSGridSize_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAITetheringBoxBoundsInterface.GetTetheredBoxBoundsCenter
// (RequiredAPI, BlueprintAuthorityOnly, Event, Public, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector                     ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UFortAITetheringBoxBoundsInterface::GetTetheredBoxBoundsCenter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAITetheringBoxBoundsInterface", "GetTetheredBoxBoundsCenter");

	Params::UFortAITetheringBoxBoundsInterface_GetTetheredBoxBoundsCenter_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Class FortniteAI.FortAsyncAction_MakeTieredWaveEncounterSettings
// (None)

class UClass* UFortAsyncAction_MakeTieredWaveEncounterSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAsyncAction_MakeTieredWaveEncounterSettings");

	return Clss;
}


// FortAsyncAction_MakeTieredWaveEncounterSettings FortniteAI.Default__FortAsyncAction_MakeTieredWaveEncounterSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAsyncAction_MakeTieredWaveEncounterSettings* UFortAsyncAction_MakeTieredWaveEncounterSettings::GetDefaultObj()
{
	static class UFortAsyncAction_MakeTieredWaveEncounterSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAsyncAction_MakeTieredWaveEncounterSettings*>(UFortAsyncAction_MakeTieredWaveEncounterSettings::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.FortAsyncAction_MakeTieredWaveEncounterSettings.CreateAsyncAction_MakeTieredWaveEncounterSettings
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTieredWaveSetData          WaveData                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// struct FFortEncounterSettings      InEncounterSettings                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UFortAsyncAction_MakeTieredWaveEncounterSettings*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAsyncAction_MakeTieredWaveEncounterSettings* UFortAsyncAction_MakeTieredWaveEncounterSettings::CreateAsyncAction_MakeTieredWaveEncounterSettings(struct FTieredWaveSetData& WaveData, struct FFortEncounterSettings& InEncounterSettings)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAsyncAction_MakeTieredWaveEncounterSettings", "CreateAsyncAction_MakeTieredWaveEncounterSettings");

	Params::UFortAsyncAction_MakeTieredWaveEncounterSettings_CreateAsyncAction_MakeTieredWaveEncounterSettings_Params Parms{};

	Parms.WaveData = WaveData;
	Parms.InEncounterSettings = InEncounterSettings;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class FortniteAI.FortAthenaAIBotController
// (Actor)

class UClass* UFortAthenaAIBotController::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotController");

	return Clss;
}


// FortAthenaAIBotController FortniteAI.Default__FortAthenaAIBotController
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotController* UFortAthenaAIBotController::GetDefaultObj()
{
	static class UFortAthenaAIBotController* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotController*>(UFortAthenaAIBotController::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.FortAthenaAIBotController.UpdateLeashActorToFollowLocation
// (Final, Native, Protected)
// Parameters:

void UFortAthenaAIBotController::UpdateLeashActorToFollowLocation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotController", "UpdateLeashActorToFollowLocation");

	Params::UFortAthenaAIBotController_UpdateLeashActorToFollowLocation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAthenaAIBotController.ThankBusDriver
// (Final, Native, Protected)
// Parameters:

void UFortAthenaAIBotController::ThankBusDriver()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotController", "ThankBusDriver");

	Params::UFortAthenaAIBotController_ThankBusDriver_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAthenaAIBotController.SwitchTeam
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// uint8                              TeamIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotController::SwitchTeam(uint8 TeamIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotController", "SwitchTeam");

	Params::UFortAthenaAIBotController_SwitchTeam_Params Parms{};

	Parms.TeamIndex = TeamIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAthenaAIBotController.StopSecondaryFire
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bFireWhenStopping                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotController::StopSecondaryFire(bool bFireWhenStopping)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotController", "StopSecondaryFire");

	Params::UFortAthenaAIBotController_StopSecondaryFire_Params Parms{};

	Parms.bFireWhenStopping = bFireWhenStopping;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAthenaAIBotController.StopFire
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortAthenaAIBotController::StopFire()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotController", "StopFire");

	Params::UFortAthenaAIBotController_StopFire_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAthenaAIBotController.StopEmote
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void UFortAthenaAIBotController::StopEmote()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotController", "StopEmote");

	Params::UFortAthenaAIBotController_StopEmote_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAthenaAIBotController.StartSecondaryFire
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortAthenaAIBotController::StartSecondaryFire()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotController", "StartSecondaryFire");

	Params::UFortAthenaAIBotController_StartSecondaryFire_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAthenaAIBotController.StartFire
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortAthenaAIBotController::StartFire()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotController", "StartFire");

	Params::UFortAthenaAIBotController_StartFire_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAthenaAIBotController.SetSkillSet
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UFortAthenaAIBotSkillSet>SkillSetClass                                                    (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotController::SetSkillSet(TSubclassOf<class UFortAthenaAIBotSkillSet> SkillSetClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotController", "SetSkillSet");

	Params::UFortAthenaAIBotController_SetSkillSet_Params Parms{};

	Parms.SkillSetClass = SkillSetClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAthenaAIBotController.SetRadialLeashOuterRadius
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// float                              OuterRadius                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotController::SetRadialLeashOuterRadius(float OuterRadius)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotController", "SetRadialLeashOuterRadius");

	Params::UFortAthenaAIBotController_SetRadialLeashOuterRadius_Params Parms{};

	Parms.OuterRadius = OuterRadius;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAthenaAIBotController.SetRadialLeashLocation
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     Location                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotController::SetRadialLeashLocation(struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotController", "SetRadialLeashLocation");

	Params::UFortAthenaAIBotController_SetRadialLeashLocation_Params Parms{};

	Parms.Location = Location;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAthenaAIBotController.SetRadialLeashInnerRadius
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// float                              InnerRadius                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotController::SetRadialLeashInnerRadius(float InnerRadius)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotController", "SetRadialLeashInnerRadius");

	Params::UFortAthenaAIBotController_SetRadialLeashInnerRadius_Params Parms{};

	Parms.InnerRadius = InnerRadius;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAthenaAIBotController.SetRadialLeashAlertLevelOverride
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FLeashInfoOverride          LeashInfoOverride                                                (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)
// enum class EAlertLevel             AlertLevel                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotController::SetRadialLeashAlertLevelOverride(struct FLeashInfoOverride& LeashInfoOverride, enum class EAlertLevel AlertLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotController", "SetRadialLeashAlertLevelOverride");

	Params::UFortAthenaAIBotController_SetRadialLeashAlertLevelOverride_Params Parms{};

	Parms.LeashInfoOverride = LeashInfoOverride;
	Parms.AlertLevel = AlertLevel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAthenaAIBotController.SetPatrollingEnable
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnable                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotController::SetPatrollingEnable(bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotController", "SetPatrollingEnable");

	Params::UFortAthenaAIBotController_SetPatrollingEnable_Params Parms{};

	Parms.bEnable = bEnable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAthenaAIBotController.SetLeashVolume
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UFortAthenaAILeashVolume*    InLeashVolume                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotController::SetLeashVolume(class UFortAthenaAILeashVolume* InLeashVolume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotController", "SetLeashVolume");

	Params::UFortAthenaAIBotController_SetLeashVolume_Params Parms{};

	Parms.InLeashVolume = InLeashVolume;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAthenaAIBotController.SetLeashReturnLocationMode
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// enum class ELeashReturnLocationModeReturnMode                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotController::SetLeashReturnLocationMode(enum class ELeashReturnLocationMode ReturnMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotController", "SetLeashReturnLocationMode");

	Params::UFortAthenaAIBotController_SetLeashReturnLocationMode_Params Parms{};

	Parms.ReturnMode = ReturnMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAthenaAIBotController.SetLeashGameplayVolume
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UGameplayVolume*             InLeashGameplayVolume                                            (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotController::SetLeashGameplayVolume(class UGameplayVolume* InLeashGameplayVolume)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotController", "SetLeashGameplayVolume");

	Params::UFortAthenaAIBotController_SetLeashGameplayVolume_Params Parms{};

	Parms.InLeashGameplayVolume = InLeashGameplayVolume;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAthenaAIBotController.SetLeashActorToFollow
// (Final, BlueprintAuthorityOnly, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UActor*                      ActorToFollow                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              LeashLocationUpdateRate                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     LocalOffset                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotController::SetLeashActorToFollow(class UActor* ActorToFollow, float LeashLocationUpdateRate, const struct FVector& LocalOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotController", "SetLeashActorToFollow");

	Params::UFortAthenaAIBotController_SetLeashActorToFollow_Params Parms{};

	Parms.ActorToFollow = ActorToFollow;
	Parms.LeashLocationUpdateRate = LeashLocationUpdateRate;
	Parms.LocalOffset = LocalOffset;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAthenaAIBotController.SetBotOwner
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UActor*                      InBotOwner                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotController::SetBotOwner(class UActor* InBotOwner)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotController", "SetBotOwner");

	Params::UFortAthenaAIBotController_SetBotOwner_Params Parms{};

	Parms.InBotOwner = InBotOwner;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAthenaAIBotController.RequestEmote
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPrimaryAssetId             EmotePrimaryAssetId                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              InfiniteEmoteMaxDuration                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotController::RequestEmote(struct FPrimaryAssetId& EmotePrimaryAssetId, float InfiniteEmoteMaxDuration)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotController", "RequestEmote");

	Params::UFortAthenaAIBotController_RequestEmote_Params Parms{};

	Parms.EmotePrimaryAssetId = EmotePrimaryAssetId;
	Parms.InfiniteEmoteMaxDuration = InfiniteEmoteMaxDuration;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAthenaAIBotController.RemoveSkillSet
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UFortAthenaAIBotSkillSet>SkillSetClass                                                    (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotController::RemoveSkillSet(TSubclassOf<class UFortAthenaAIBotSkillSet> SkillSetClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotController", "RemoveSkillSet");

	Params::UFortAthenaAIBotController_RemoveSkillSet_Params Parms{};

	Parms.SkillSetClass = SkillSetClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAthenaAIBotController.RemoveEmoteRequest
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void UFortAthenaAIBotController::RemoveEmoteRequest()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotController", "RemoveEmoteRequest");

	Params::UFortAthenaAIBotController_RemoveEmoteRequest_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAthenaAIBotController.ReleaseBuildTool
// (Final, Native, Protected)
// Parameters:

void UFortAthenaAIBotController::ReleaseBuildTool()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotController", "ReleaseBuildTool");

	Params::UFortAthenaAIBotController_ReleaseBuildTool_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAthenaAIBotController.QueueStim
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UActor*                      SourceActor                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     SourceLocation                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     SourceDirection                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EStimType               NewStimType                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              StimStrength                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        StimTag                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotController::QueueStim(class UActor* SourceActor, struct FVector& SourceLocation, struct FVector& SourceDirection, enum class EStimType NewStimType, float StimStrength, class FName StimTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotController", "QueueStim");

	Params::UFortAthenaAIBotController_QueueStim_Params Parms{};

	Parms.SourceActor = SourceActor;
	Parms.SourceLocation = SourceLocation;
	Parms.SourceDirection = SourceDirection;
	Parms.NewStimType = NewStimType;
	Parms.StimStrength = StimStrength;
	Parms.StimTag = StimTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAthenaAIBotController.PlayEmote
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FPrimaryAssetId             EmotePrimaryAssetId                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotController::PlayEmote(struct FPrimaryAssetId& EmotePrimaryAssetId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotController", "PlayEmote");

	Params::UFortAthenaAIBotController_PlayEmote_Params Parms{};

	Parms.EmotePrimaryAssetId = EmotePrimaryAssetId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAthenaAIBotController.OverrideSkill
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewSkill                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotController::OverrideSkill(float NewSkill)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotController", "OverrideSkill");

	Params::UFortAthenaAIBotController_OverrideSkill_Params Parms{};

	Parms.NewSkill = NewSkill;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAthenaAIBotController.OverrideAggressivenessPlayStyle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInIsAggressive                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotController::OverrideAggressivenessPlayStyle(bool bInIsAggressive)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotController", "OverrideAggressivenessPlayStyle");

	Params::UFortAthenaAIBotController_OverrideAggressivenessPlayStyle_Params Parms{};

	Parms.bInIsAggressive = bInIsAggressive;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAthenaAIBotController.OnTargetPawnDestroyed
// (Final, Native, Public)
// Parameters:

void UFortAthenaAIBotController::OnTargetPawnDestroyed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotController", "OnTargetPawnDestroyed");

	Params::UFortAthenaAIBotController_OnTargetPawnDestroyed_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAthenaAIBotController.OnTargetPawnDead
// (Final, Native, Public)
// Parameters:
// class UFortPawn*                   FortPawn                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotController::OnTargetPawnDead(class UFortPawn* FortPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotController", "OnTargetPawnDead");

	Params::UFortAthenaAIBotController_OnTargetPawnDead_Params Parms{};

	Parms.FortPawn = FortPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAthenaAIBotController.OnTargetPawnDamaged
// (Final, Native, Public, HasDefaults)
// Parameters:
// class UActor*                      DamagedActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UController*                 InstigatedBy                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      DamageCauser                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     HitLocation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         FHitComponent                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        BoneName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Momentum                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotController::OnTargetPawnDamaged(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotController", "OnTargetPawnDamaged");

	Params::UFortAthenaAIBotController_OnTargetPawnDamaged_Params Parms{};

	Parms.DamagedActor = DamagedActor;
	Parms.Damage = Damage;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.HitLocation = HitLocation;
	Parms.FHitComponent = FHitComponent;
	Parms.BoneName = BoneName;
	Parms.Momentum = Momentum;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAthenaAIBotController.OnTargetBuildingDestroyed
// (Final, Native, Public)
// Parameters:
// class UBuildingActor*              Building                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAthenaAIController*         AIController                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotController::OnTargetBuildingDestroyed(class UBuildingActor* Building, class UAthenaAIController* AIController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotController", "OnTargetBuildingDestroyed");

	Params::UFortAthenaAIBotController_OnTargetBuildingDestroyed_Params Parms{};

	Parms.Building = Building;
	Parms.AIController = AIController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAthenaAIBotController.OnTargetActorDestroyed
// (Final, Native, Public)
// Parameters:
// class UActor*                      DestroyedActor                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotController::OnTargetActorDestroyed(class UActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotController", "OnTargetActorDestroyed");

	Params::UFortAthenaAIBotController_OnTargetActorDestroyed_Params Parms{};

	Parms.DestroyedActor = DestroyedActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAthenaAIBotController.OnServerMarkerAdded
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FFortWorldMarkerData        MarkerData                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortAthenaAIBotController::OnServerMarkerAdded(struct FFortWorldMarkerData& MarkerData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotController", "OnServerMarkerAdded");

	Params::UFortAthenaAIBotController_OnServerMarkerAdded_Params Parms{};

	Parms.MarkerData = MarkerData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAthenaAIBotController.OnPossessedPawnReceiveDamage
// (Final, Native, Public, HasDefaults)
// Parameters:
// class UActor*                      DamagedActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UController*                 InstigatedBy                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      DamageCauser                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     HitLocation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         FHitComponent                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        BoneName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Momentum                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotController::OnPossessedPawnReceiveDamage(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotController", "OnPossessedPawnReceiveDamage");

	Params::UFortAthenaAIBotController_OnPossessedPawnReceiveDamage_Params Parms{};

	Parms.DamagedActor = DamagedActor;
	Parms.Damage = Damage;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.HitLocation = HitLocation;
	Parms.FHitComponent = FHitComponent;
	Parms.BoneName = BoneName;
	Parms.Momentum = Momentum;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAthenaAIBotController.OnPossesedPawnDied
// (Final, Native, Public, HasDefaults)
// Parameters:
// class UActor*                      DamagedActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UController*                 InstigatedBy                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      DamageCauser                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     HitLocation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         FHitComponent                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        BoneName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Momentum                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotController::OnPossesedPawnDied(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotController", "OnPossesedPawnDied");

	Params::UFortAthenaAIBotController_OnPossesedPawnDied_Params Parms{};

	Parms.DamagedActor = DamagedActor;
	Parms.Damage = Damage;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.HitLocation = HitLocation;
	Parms.FHitComponent = FHitComponent;
	Parms.BoneName = BoneName;
	Parms.Momentum = Momentum;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAthenaAIBotController.OnPerceptionSensed
// (Native, Public)
// Parameters:
// class UActor*                      SourceActor                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FAIStimulus                 Stim                                                             (Parm, NoDestructor, NativeAccessSpecifierPublic)

void UFortAthenaAIBotController::OnPerceptionSensed(class UActor* SourceActor, const struct FAIStimulus& Stim)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotController", "OnPerceptionSensed");

	Params::UFortAthenaAIBotController_OnPerceptionSensed_Params Parms{};

	Parms.SourceActor = SourceActor;
	Parms.Stim = Stim;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAthenaAIBotController.OnPawnWeaponChanged
// (Final, Native, Public)
// Parameters:
// class UFortWeapon*                 NewWeapon                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortWeapon*                 OldWeapon                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotController::OnPawnWeaponChanged(class UFortWeapon* NewWeapon, class UFortWeapon* OldWeapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotController", "OnPawnWeaponChanged");

	Params::UFortAthenaAIBotController_OnPawnWeaponChanged_Params Parms{};

	Parms.NewWeapon = NewWeapon;
	Parms.OldWeapon = OldWeapon;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAthenaAIBotController.OnPawnDidDamage
// (Final, Native, Public, HasDefaults)
// Parameters:
// class UActor*                      DamagedActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UController*                 InstigatedBy                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      DamageCauser                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     HitLocation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         HitComponent                                                     (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        BoneName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Momentum                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotController::OnPawnDidDamage(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* HitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotController", "OnPawnDidDamage");

	Params::UFortAthenaAIBotController_OnPawnDidDamage_Params Parms{};

	Parms.DamagedActor = DamagedActor;
	Parms.Damage = Damage;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.HitLocation = HitLocation;
	Parms.HitComponent = HitComponent;
	Parms.BoneName = BoneName;
	Parms.Momentum = Momentum;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAthenaAIBotController.OnMovementModeChange
// (Final, Native, Public)
// Parameters:
// class UCharacter*                  InCharacter                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EMovementMode           PrevMovementMode                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              PreviousCustomMode                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotController::OnMovementModeChange(class UCharacter* InCharacter, enum class EMovementMode PrevMovementMode, uint8 PreviousCustomMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotController", "OnMovementModeChange");

	Params::UFortAthenaAIBotController_OnMovementModeChange_Params Parms{};

	Parms.InCharacter = InCharacter;
	Parms.PrevMovementMode = PrevMovementMode;
	Parms.PreviousCustomMode = PreviousCustomMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAthenaAIBotController.OnLaunched
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     LaunchVelocity                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bXYOverride                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bZOverride                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotController::OnLaunched(const struct FVector& LaunchVelocity, bool bXYOverride, bool bZOverride)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotController", "OnLaunched");

	Params::UFortAthenaAIBotController_OnLaunched_Params Parms{};

	Parms.LaunchVelocity = LaunchVelocity;
	Parms.bXYOverride = bXYOverride;
	Parms.bZOverride = bZOverride;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAthenaAIBotController.OnKnockbacked
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag                KnockbackTypeTag                                                 (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotController::OnKnockbacked(const struct FGameplayTag& KnockbackTypeTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotController", "OnKnockbacked");

	Params::UFortAthenaAIBotController_OnKnockbacked_Params Parms{};

	Parms.KnockbackTypeTag = KnockbackTypeTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAthenaAIBotController.OnEndSpectating
// (Final, Native, Public)
// Parameters:
// class UFortPlayerStateZone*        Spectator                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotController::OnEndSpectating(class UFortPlayerStateZone* Spectator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotController", "OnEndSpectating");

	Params::UFortAthenaAIBotController_OnEndSpectating_Params Parms{};

	Parms.Spectator = Spectator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAthenaAIBotController.OnCurrentHarvestableDestroyed
// (Final, Native, Protected, HasDefaults)
// Parameters:
// class UActor*                      DamagedActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UController*                 InstigatedBy                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      DamageCauser                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     HitLocation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         FHitComponent                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        BoneName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Momentum                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotController::OnCurrentHarvestableDestroyed(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotController", "OnCurrentHarvestableDestroyed");

	Params::UFortAthenaAIBotController_OnCurrentHarvestableDestroyed_Params Parms{};

	Parms.DamagedActor = DamagedActor;
	Parms.Damage = Damage;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.HitLocation = HitLocation;
	Parms.FHitComponent = FHitComponent;
	Parms.BoneName = BoneName;
	Parms.Momentum = Momentum;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAthenaAIBotController.OnBeginSpectating
// (Final, Native, Public)
// Parameters:
// class UFortPlayerStateZone*        Spectator                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotController::OnBeginSpectating(class UFortPlayerStateZone* Spectator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotController", "OnBeginSpectating");

	Params::UFortAthenaAIBotController_OnBeginSpectating_Params Parms{};

	Parms.Spectator = Spectator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAthenaAIBotController.OnAlertLevelChanged
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EAlertLevel             OldAlertLevel                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAlertLevel             NewAlertLevel                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotController::OnAlertLevelChanged(enum class EAlertLevel OldAlertLevel, enum class EAlertLevel NewAlertLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotController", "OnAlertLevelChanged");

	Params::UFortAthenaAIBotController_OnAlertLevelChanged_Params Parms{};

	Parms.OldAlertLevel = OldAlertLevel;
	Parms.NewAlertLevel = NewAlertLevel;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteAI.FortAthenaAIBotController.OnAgentDBNO
// (Final, Native, Public)
// Parameters:
// class UFortPawn*                   InPlayer                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInIsDBNO                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotController::OnAgentDBNO(class UFortPawn* InPlayer, bool bInIsDBNO)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotController", "OnAgentDBNO");

	Params::UFortAthenaAIBotController_OnAgentDBNO_Params Parms{};

	Parms.InPlayer = InPlayer;
	Parms.bInIsDBNO = bInIsDBNO;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAthenaAIBotController.NotifyPickupsSpawnedOnDeath
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class UFortPickup*>         SpawnedPickups                                                   (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              SpawnRequestId                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotController::NotifyPickupsSpawnedOnDeath(TArray<class UFortPickup*>& SpawnedPickups, int32 SpawnRequestId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotController", "NotifyPickupsSpawnedOnDeath");

	Params::UFortAthenaAIBotController_NotifyPickupsSpawnedOnDeath_Params Parms{};

	Parms.SpawnedPickups = SpawnedPickups;
	Parms.SpawnRequestId = SpawnRequestId;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAthenaAIBotController.IsAnAthenaGameParticipant
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAthenaAIBotController::IsAnAthenaGameParticipant()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotController", "IsAnAthenaGameParticipant");

	Params::UFortAthenaAIBotController_IsAnAthenaGameParticipant_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAIBotController.GetSlotItemByTag
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTag                TagToCheck                                                       (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortWorldItem*              ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortWorldItem* UFortAthenaAIBotController::GetSlotItemByTag(struct FGameplayTag& TagToCheck)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotController", "GetSlotItemByTag");

	Params::UFortAthenaAIBotController_GetSlotItemByTag_Params Parms{};

	Parms.TagToCheck = TagToCheck;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAIBotController.GetSlotItemByItemDefinition
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortItemDefinition*         ItemDefinition                                                   (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortWorldItem*              ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortWorldItem* UFortAthenaAIBotController::GetSlotItemByItemDefinition(class UFortItemDefinition* ItemDefinition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotController", "GetSlotItemByItemDefinition");

	Params::UFortAthenaAIBotController_GetSlotItemByItemDefinition_Params Parms{};

	Parms.ItemDefinition = ItemDefinition;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAIBotController.GetMarkerComponent
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAthenaMarkerComponent*      ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAthenaMarkerComponent* UFortAthenaAIBotController::GetMarkerComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotController", "GetMarkerComponent");

	Params::UFortAthenaAIBotController_GetMarkerComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAIBotController.GetCurrentThreat
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UActor* UFortAthenaAIBotController::GetCurrentThreat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotController", "GetCurrentThreat");

	Params::UFortAthenaAIBotController_GetCurrentThreat_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAIBotController.GetBotOwner
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UActor*                      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UActor* UFortAthenaAIBotController::GetBotOwner()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotController", "GetBotOwner");

	Params::UFortAthenaAIBotController_GetBotOwner_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAIBotController.EquipWeaponByTag
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayTag                WeaponTag                                                        (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortWeapon*                 ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortWeapon* UFortAthenaAIBotController::EquipWeaponByTag(struct FGameplayTag& WeaponTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotController", "EquipWeaponByTag");

	Params::UFortAthenaAIBotController_EquipWeaponByTag_Params Parms{};

	Parms.WeaponTag = WeaponTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAIBotController.EquipWeapon
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortWorldItem*              Weapon                                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortWeapon*                 ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortWeapon* UFortAthenaAIBotController::EquipWeapon(class UFortWorldItem* Weapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotController", "EquipWeapon");

	Params::UFortAthenaAIBotController_EquipWeapon_Params Parms{};

	Parms.Weapon = Weapon;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAIBotController.EquipMeleeWeapon
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortWeapon*                 ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortWeapon* UFortAthenaAIBotController::EquipMeleeWeapon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotController", "EquipMeleeWeapon");

	Params::UFortAthenaAIBotController_EquipMeleeWeapon_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAIBotController.EquipBestWeapon
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortWeapon*                 ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortWeapon* UFortAthenaAIBotController::EquipBestWeapon()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotController", "EquipBestWeapon");

	Params::UFortAthenaAIBotController_EquipBestWeapon_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAIBotController.Cheat_ForceAthenaCosmeticItemInSlot
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:
// class UAthenaCosmeticItemDefinition*CosmeticItem                                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAthenaCustomizationCategorySlot                                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              Index                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotController::Cheat_ForceAthenaCosmeticItemInSlot(class UAthenaCosmeticItemDefinition* CosmeticItem, enum class EAthenaCustomizationCategory Slot, int32 Index)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotController", "Cheat_ForceAthenaCosmeticItemInSlot");

	Params::UFortAthenaAIBotController_Cheat_ForceAthenaCosmeticItemInSlot_Params Parms{};

	Parms.CosmeticItem = CosmeticItem;
	Parms.Slot = Slot;
	Parms.Index = Index;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAthenaAIBotController.Cheat_ClearForcedCosmeticItems
// (Net, NetReliable, Native, Event, Public, NetServer, NetValidate)
// Parameters:

void UFortAthenaAIBotController::Cheat_ClearForcedCosmeticItems()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotController", "Cheat_ClearForcedCosmeticItems");

	Params::UFortAthenaAIBotController_Cheat_ClearForcedCosmeticItems_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAthenaAIBotController.ChangeActiveVariantForCosmeticItem
// (BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ItemTemplateToChange                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                VariantChannelToChange                                           (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                DesiredActiveVariant                                             (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotController::ChangeActiveVariantForCosmeticItem(class FName ItemTemplateToChange, const struct FGameplayTag& VariantChannelToChange, const struct FGameplayTag& DesiredActiveVariant)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotController", "ChangeActiveVariantForCosmeticItem");

	Params::UFortAthenaAIBotController_ChangeActiveVariantForCosmeticItem_Params Parms{};

	Parms.ItemTemplateToChange = ItemTemplateToChange;
	Parms.VariantChannelToChange = VariantChannelToChange;
	Parms.DesiredActiveVariant = DesiredActiveVariant;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAthenaAIBotController.BlueprintOnBehaviorTreeStarted
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortAthenaAIBotController::BlueprintOnBehaviorTreeStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotController", "BlueprintOnBehaviorTreeStarted");

	Params::UFortAthenaAIBotController_BlueprintOnBehaviorTreeStarted_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteAI.FortAthenaAIBotController.AddTargetInfos
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class UActor*>              Targets                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// enum class EPerceptionState        PerceptionState                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ForgetTime                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ForgetDistance                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotController::AddTargetInfos(TArray<class UActor*>& Targets, enum class EPerceptionState PerceptionState, float ForgetTime, float ForgetDistance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotController", "AddTargetInfos");

	Params::UFortAthenaAIBotController_AddTargetInfos_Params Parms{};

	Parms.Targets = Targets;
	Parms.PerceptionState = PerceptionState;
	Parms.ForgetTime = ForgetTime;
	Parms.ForgetDistance = ForgetDistance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAthenaAIBotController.AddTargetInfo
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UActor*                      Target                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bForceTarget                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EPerceptionState        PerceptionState                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ForgetTime                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ForgetDistance                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotController::AddTargetInfo(class UActor* Target, bool bForceTarget, enum class EPerceptionState PerceptionState, float ForgetTime, float ForgetDistance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotController", "AddTargetInfo");

	Params::UFortAthenaAIBotController_AddTargetInfo_Params Parms{};

	Parms.Target = Target;
	Parms.bForceTarget = bForceTarget;
	Parms.PerceptionState = PerceptionState;
	Parms.ForgetTime = ForgetTime;
	Parms.ForgetDistance = ForgetDistance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FortniteAI.FortAthenaAIBotNameDataAsset
// (None)

class UClass* UFortAthenaAIBotNameDataAsset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotNameDataAsset");

	return Clss;
}


// FortAthenaAIBotNameDataAsset FortniteAI.Default__FortAthenaAIBotNameDataAsset
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotNameDataAsset* UFortAthenaAIBotNameDataAsset::GetDefaultObj()
{
	static class UFortAthenaAIBotNameDataAsset* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotNameDataAsset*>(UFortAthenaAIBotNameDataAsset::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaTrackableAIObjectComponent
// (None)

class UClass* UFortAthenaTrackableAIObjectComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaTrackableAIObjectComponent");

	return Clss;
}


// FortAthenaTrackableAIObjectComponent FortniteAI.Default__FortAthenaTrackableAIObjectComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaTrackableAIObjectComponent* UFortAthenaTrackableAIObjectComponent::GetDefaultObj()
{
	static class UFortAthenaTrackableAIObjectComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaTrackableAIObjectComponent*>(UFortAthenaTrackableAIObjectComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaTrackableAIObjectVehicleComponent
// (None)

class UClass* UFortAthenaTrackableAIObjectVehicleComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaTrackableAIObjectVehicleComponent");

	return Clss;
}


// FortAthenaTrackableAIObjectVehicleComponent FortniteAI.Default__FortAthenaTrackableAIObjectVehicleComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaTrackableAIObjectVehicleComponent* UFortAthenaTrackableAIObjectVehicleComponent::GetDefaultObj()
{
	static class UFortAthenaTrackableAIObjectVehicleComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaTrackableAIObjectVehicleComponent*>(UFortAthenaTrackableAIObjectVehicleComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.FortAthenaTrackableAIObjectVehicleComponent.HandleSleepStateChanged
// (Final, Native, Private)
// Parameters:
// bool                               bIsAwake                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaTrackableAIObjectVehicleComponent::HandleSleepStateChanged(bool bIsAwake)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaTrackableAIObjectVehicleComponent", "HandleSleepStateChanged");

	Params::UFortAthenaTrackableAIObjectVehicleComponent_HandleSleepStateChanged_Params Parms{};

	Parms.bIsAwake = bIsAwake;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FortniteAI.FortBlackboardComponent
// (None)

class UClass* UFortBlackboardComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortBlackboardComponent");

	return Clss;
}


// FortBlackboardComponent FortniteAI.Default__FortBlackboardComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortBlackboardComponent* UFortBlackboardComponent::GetDefaultObj()
{
	static class UFortBlackboardComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortBlackboardComponent*>(UFortBlackboardComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortBTDecorator_QueryGameplayAbility
// (None)

class UClass* UFortBTDecorator_QueryGameplayAbility::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortBTDecorator_QueryGameplayAbility");

	return Clss;
}


// FortBTDecorator_QueryGameplayAbility FortniteAI.Default__FortBTDecorator_QueryGameplayAbility
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortBTDecorator_QueryGameplayAbility* UFortBTDecorator_QueryGameplayAbility::GetDefaultObj()
{
	static class UFortBTDecorator_QueryGameplayAbility* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortBTDecorator_QueryGameplayAbility*>(UFortBTDecorator_QueryGameplayAbility::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortBTTask_TriggerVOEvent
// (None)

class UClass* UFortBTTask_TriggerVOEvent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortBTTask_TriggerVOEvent");

	return Clss;
}


// FortBTTask_TriggerVOEvent FortniteAI.Default__FortBTTask_TriggerVOEvent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortBTTask_TriggerVOEvent* UFortBTTask_TriggerVOEvent::GetDefaultObj()
{
	static class UFortBTTask_TriggerVOEvent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortBTTask_TriggerVOEvent*>(UFortBTTask_TriggerVOEvent::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortCreativeCreatureManagerInfoComponent
// (None)

class UClass* UFortCreativeCreatureManagerInfoComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortCreativeCreatureManagerInfoComponent");

	return Clss;
}


// FortCreativeCreatureManagerInfoComponent FortniteAI.Default__FortCreativeCreatureManagerInfoComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortCreativeCreatureManagerInfoComponent* UFortCreativeCreatureManagerInfoComponent::GetDefaultObj()
{
	static class UFortCreativeCreatureManagerInfoComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortCreativeCreatureManagerInfoComponent*>(UFortCreativeCreatureManagerInfoComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.SetWeaponKnockbackImmunityEffect
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UGameplayEffect> Effect                                                           (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCreativeCreatureManagerInfoComponent::SetWeaponKnockbackImmunityEffect(TSubclassOf<class UGameplayEffect> Effect)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "SetWeaponKnockbackImmunityEffect");

	Params::UFortCreativeCreatureManagerInfoComponent_SetWeaponKnockbackImmunityEffect_Params Parms{};

	Parms.Effect = Effect;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.SetWeaponKnockbackImmunity
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               InImmuneToWeaponKnockback                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCreativeCreatureManagerInfoComponent::SetWeaponKnockbackImmunity(bool InImmuneToWeaponKnockback)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "SetWeaponKnockbackImmunity");

	Params::UFortCreativeCreatureManagerInfoComponent_SetWeaponKnockbackImmunity_Params Parms{};

	Parms.InImmuneToWeaponKnockback = InImmuneToWeaponKnockback;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.SetScorePoints
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InScorePoints                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCreativeCreatureManagerInfoComponent::SetScorePoints(int32 InScorePoints)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "SetScorePoints");

	Params::UFortCreativeCreatureManagerInfoComponent_SetScorePoints_Params Parms{};

	Parms.InScorePoints = InScorePoints;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.SetScoreDistribution
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EScoreDistributionType  InScoreDistribution                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCreativeCreatureManagerInfoComponent::SetScoreDistribution(enum class EScoreDistributionType InScoreDistribution)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "SetScoreDistribution");

	Params::UFortCreativeCreatureManagerInfoComponent_SetScoreDistribution_Params Parms{};

	Parms.InScoreDistribution = InScoreDistribution;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.SetOverrideDamage
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InOverrideDamage                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCreativeCreatureManagerInfoComponent::SetOverrideDamage(float InOverrideDamage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "SetOverrideDamage");

	Params::UFortCreativeCreatureManagerInfoComponent_SetOverrideDamage_Params Parms{};

	Parms.InOverrideDamage = InOverrideDamage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.SetMovementSpeedOverrideEffect
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UGameplayEffect> Effect                                                           (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCreativeCreatureManagerInfoComponent::SetMovementSpeedOverrideEffect(TSubclassOf<class UGameplayEffect> Effect)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "SetMovementSpeedOverrideEffect");

	Params::UFortCreativeCreatureManagerInfoComponent_SetMovementSpeedOverrideEffect_Params Parms{};

	Parms.Effect = Effect;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.SetMovementSpeedMultiplier
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InOverrideMovementSpeedMultiplier                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCreativeCreatureManagerInfoComponent::SetMovementSpeedMultiplier(float InOverrideMovementSpeedMultiplier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "SetMovementSpeedMultiplier");

	Params::UFortCreativeCreatureManagerInfoComponent_SetMovementSpeedMultiplier_Params Parms{};

	Parms.InOverrideMovementSpeedMultiplier = InOverrideMovementSpeedMultiplier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.SetMovementOverrideTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag                Tag                                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCreativeCreatureManagerInfoComponent::SetMovementOverrideTag(const struct FGameplayTag& Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "SetMovementOverrideTag");

	Params::UFortCreativeCreatureManagerInfoComponent_SetMovementOverrideTag_Params Parms{};

	Parms.Tag = Tag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.SetMaxHealthOverrideTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag                Tag                                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCreativeCreatureManagerInfoComponent::SetMaxHealthOverrideTag(const struct FGameplayTag& Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "SetMaxHealthOverrideTag");

	Params::UFortCreativeCreatureManagerInfoComponent_SetMaxHealthOverrideTag_Params Parms{};

	Parms.Tag = Tag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.SetMaxHealthOverrideEffect
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UGameplayEffect> Effect                                                           (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCreativeCreatureManagerInfoComponent::SetMaxHealthOverrideEffect(TSubclassOf<class UGameplayEffect> Effect)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "SetMaxHealthOverrideEffect");

	Params::UFortCreativeCreatureManagerInfoComponent_SetMaxHealthOverrideEffect_Params Parms{};

	Parms.Effect = Effect;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.SetMaxHealth
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InMaxHealth                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCreativeCreatureManagerInfoComponent::SetMaxHealth(int32 InMaxHealth)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "SetMaxHealth");

	Params::UFortCreativeCreatureManagerInfoComponent_SetMaxHealth_Params Parms{};

	Parms.InMaxHealth = InMaxHealth;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.SetHearingAggroRange
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InHearingAggroRange                                              (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCreativeCreatureManagerInfoComponent::SetHearingAggroRange(float InHearingAggroRange)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "SetHearingAggroRange");

	Params::UFortCreativeCreatureManagerInfoComponent_SetHearingAggroRange_Params Parms{};

	Parms.InHearingAggroRange = InHearingAggroRange;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.SetEnvironmentalDamageOverrideEffect
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UGameplayEffect> Effect                                                           (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCreativeCreatureManagerInfoComponent::SetEnvironmentalDamageOverrideEffect(TSubclassOf<class UGameplayEffect> Effect)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "SetEnvironmentalDamageOverrideEffect");

	Params::UFortCreativeCreatureManagerInfoComponent_SetEnvironmentalDamageOverrideEffect_Params Parms{};

	Parms.Effect = Effect;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.SetEnvironmentalDamageOverride
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InOverrideDamage                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCreativeCreatureManagerInfoComponent::SetEnvironmentalDamageOverride(float InOverrideDamage)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "SetEnvironmentalDamageOverride");

	Params::UFortCreativeCreatureManagerInfoComponent_SetEnvironmentalDamageOverride_Params Parms{};

	Parms.InOverrideDamage = InOverrideDamage;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.SetDamageOverrideTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTag                Tag                                                              (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCreativeCreatureManagerInfoComponent::SetDamageOverrideTag(const struct FGameplayTag& Tag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "SetDamageOverrideTag");

	Params::UFortCreativeCreatureManagerInfoComponent_SetDamageOverrideTag_Params Parms{};

	Parms.Tag = Tag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.SetDamageOverrideEffect
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UGameplayEffect> Effect                                                           (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCreativeCreatureManagerInfoComponent::SetDamageOverrideEffect(TSubclassOf<class UGameplayEffect> Effect)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "SetDamageOverrideEffect");

	Params::UFortCreativeCreatureManagerInfoComponent_SetDamageOverrideEffect_Params Parms{};

	Parms.Effect = Effect;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.SetCreatureManagerComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortCreativeCreatureManagerComponent*InCreatureManagerComponent                                       (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCreativeCreatureManagerInfoComponent::SetCreatureManagerComponent(class UFortCreativeCreatureManagerComponent* InCreatureManagerComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "SetCreatureManagerComponent");

	Params::UFortCreativeCreatureManagerInfoComponent_SetCreatureManagerComponent_Params Parms{};

	Parms.InCreatureManagerComponent = InCreatureManagerComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.SetCreatureBlueprintClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSoftClassPtr<class UFortAIPawn>   InCreatureBlueprintClass                                         (Parm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCreativeCreatureManagerInfoComponent::SetCreatureBlueprintClass(TSoftClassPtr<class UFortAIPawn> InCreatureBlueprintClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "SetCreatureBlueprintClass");

	Params::UFortCreativeCreatureManagerInfoComponent_SetCreatureBlueprintClass_Params Parms{};

	Parms.InCreatureBlueprintClass = InCreatureBlueprintClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.SetAffectedTargetsType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class ECreatureManagerAffectedTargetsInAffectedTargetsType                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCreativeCreatureManagerInfoComponent::SetAffectedTargetsType(enum class ECreatureManagerAffectedTargets InAffectedTargetsType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "SetAffectedTargetsType");

	Params::UFortCreativeCreatureManagerInfoComponent_SetAffectedTargetsType_Params Parms{};

	Parms.InAffectedTargetsType = InAffectedTargetsType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.ResetWeaponKnockbackImmunity
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortCreativeCreatureManagerInfoComponent::ResetWeaponKnockbackImmunity()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "ResetWeaponKnockbackImmunity");

	Params::UFortCreativeCreatureManagerInfoComponent_ResetWeaponKnockbackImmunity_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.ResetScorePoints
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortCreativeCreatureManagerInfoComponent::ResetScorePoints()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "ResetScorePoints");

	Params::UFortCreativeCreatureManagerInfoComponent_ResetScorePoints_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.ResetScoreDistribution
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortCreativeCreatureManagerInfoComponent::ResetScoreDistribution()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "ResetScoreDistribution");

	Params::UFortCreativeCreatureManagerInfoComponent_ResetScoreDistribution_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.ResetOverrideDamage
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortCreativeCreatureManagerInfoComponent::ResetOverrideDamage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "ResetOverrideDamage");

	Params::UFortCreativeCreatureManagerInfoComponent_ResetOverrideDamage_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.ResetMovementSpeedMultiplier
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortCreativeCreatureManagerInfoComponent::ResetMovementSpeedMultiplier()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "ResetMovementSpeedMultiplier");

	Params::UFortCreativeCreatureManagerInfoComponent_ResetMovementSpeedMultiplier_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.ResetMaxHealth
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortCreativeCreatureManagerInfoComponent::ResetMaxHealth()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "ResetMaxHealth");

	Params::UFortCreativeCreatureManagerInfoComponent_ResetMaxHealth_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.ResetHearingAggroRange
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortCreativeCreatureManagerInfoComponent::ResetHearingAggroRange()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "ResetHearingAggroRange");

	Params::UFortCreativeCreatureManagerInfoComponent_ResetHearingAggroRange_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.ResetEnvironmentalDamageOverride
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortCreativeCreatureManagerInfoComponent::ResetEnvironmentalDamageOverride()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "ResetEnvironmentalDamageOverride");

	Params::UFortCreativeCreatureManagerInfoComponent_ResetEnvironmentalDamageOverride_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.GetWeaponKnockbackImmunity
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortCreativeCreatureManagerInfoComponent::GetWeaponKnockbackImmunity()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "GetWeaponKnockbackImmunity");

	Params::UFortCreativeCreatureManagerInfoComponent_GetWeaponKnockbackImmunity_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.GetScorePoints
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortCreativeCreatureManagerInfoComponent::GetScorePoints()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "GetScorePoints");

	Params::UFortCreativeCreatureManagerInfoComponent_GetScorePoints_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.GetScoreDistribution
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EScoreDistributionType  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EScoreDistributionType UFortCreativeCreatureManagerInfoComponent::GetScoreDistribution()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "GetScoreDistribution");

	Params::UFortCreativeCreatureManagerInfoComponent_GetScoreDistribution_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.GetOverrideDamage
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortCreativeCreatureManagerInfoComponent::GetOverrideDamage()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "GetOverrideDamage");

	Params::UFortCreativeCreatureManagerInfoComponent_GetOverrideDamage_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.GetMovementSpeedMultiplier
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortCreativeCreatureManagerInfoComponent::GetMovementSpeedMultiplier()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "GetMovementSpeedMultiplier");

	Params::UFortCreativeCreatureManagerInfoComponent_GetMovementSpeedMultiplier_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.GetMaxHealth
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortCreativeCreatureManagerInfoComponent::GetMaxHealth()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "GetMaxHealth");

	Params::UFortCreativeCreatureManagerInfoComponent_GetMaxHealth_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.GetInvalidInt32
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortCreativeCreatureManagerInfoComponent::GetInvalidInt32()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "GetInvalidInt32");

	Params::UFortCreativeCreatureManagerInfoComponent_GetInvalidInt32_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.GetInvalidFloat
// (Final, Native, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortCreativeCreatureManagerInfoComponent::GetInvalidFloat()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "GetInvalidFloat");

	Params::UFortCreativeCreatureManagerInfoComponent_GetInvalidFloat_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.GetHearingAggroRange
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortCreativeCreatureManagerInfoComponent::GetHearingAggroRange()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "GetHearingAggroRange");

	Params::UFortCreativeCreatureManagerInfoComponent_GetHearingAggroRange_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.GetEnvironmentalDamageOverride
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortCreativeCreatureManagerInfoComponent::GetEnvironmentalDamageOverride()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "GetEnvironmentalDamageOverride");

	Params::UFortCreativeCreatureManagerInfoComponent_GetEnvironmentalDamageOverride_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.GetCreatureManagerComponent
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortCreativeCreatureManagerComponent*ReturnValue                                                      (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortCreativeCreatureManagerComponent* UFortCreativeCreatureManagerInfoComponent::GetCreatureManagerComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "GetCreatureManagerComponent");

	Params::UFortCreativeCreatureManagerInfoComponent_GetCreatureManagerComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.GetCreatureBlueprintClass
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TSoftClassPtr<class UFortAIPawn>   ReturnValue                                                      (Parm, OutParm, ReturnParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TSoftClassPtr<class UFortAIPawn> UFortCreativeCreatureManagerInfoComponent::GetCreatureBlueprintClass()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "GetCreatureBlueprintClass");

	Params::UFortCreativeCreatureManagerInfoComponent_GetCreatureBlueprintClass_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortCreativeCreatureManagerInfoComponent.GetAffectedTargetsType
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class ECreatureManagerAffectedTargetsReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class ECreatureManagerAffectedTargets UFortCreativeCreatureManagerInfoComponent::GetAffectedTargetsType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCreativeCreatureManagerInfoComponent", "GetAffectedTargetsType");

	Params::UFortCreativeCreatureManagerInfoComponent_GetAffectedTargetsType_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class FortniteAI.FortCreativeCreatureManagerComponent
// (None)

class UClass* UFortCreativeCreatureManagerComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortCreativeCreatureManagerComponent");

	return Clss;
}


// FortCreativeCreatureManagerComponent FortniteAI.Default__FortCreativeCreatureManagerComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortCreativeCreatureManagerComponent* UFortCreativeCreatureManagerComponent::GetDefaultObj()
{
	static class UFortCreativeCreatureManagerComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortCreativeCreatureManagerComponent*>(UFortCreativeCreatureManagerComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.FortCreativeCreatureManagerComponent.OnInfoComponentRemoved
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class UFortCreativeCreatureManagerInfoComponent*CreatureManagerInfoComponent                                     (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCreativeCreatureManagerComponent::OnInfoComponentRemoved(class UFortCreativeCreatureManagerInfoComponent* CreatureManagerInfoComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCreativeCreatureManagerComponent", "OnInfoComponentRemoved");

	Params::UFortCreativeCreatureManagerComponent_OnInfoComponentRemoved_Params Parms{};

	Parms.CreatureManagerInfoComponent = CreatureManagerInfoComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortCreativeCreatureManagerComponent.OnInfoComponentAdded
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class UFortCreativeCreatureManagerInfoComponent*CreatureManagerInfoComponent                                     (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCreativeCreatureManagerComponent::OnInfoComponentAdded(class UFortCreativeCreatureManagerInfoComponent* CreatureManagerInfoComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCreativeCreatureManagerComponent", "OnInfoComponentAdded");

	Params::UFortCreativeCreatureManagerComponent_OnInfoComponentAdded_Params Parms{};

	Parms.CreatureManagerInfoComponent = CreatureManagerInfoComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortCreativeCreatureManagerComponent.OnAIPawnDied
// (Final, Native, Public, HasDefaults)
// Parameters:
// class UActor*                      DamagedActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UController*                 InstigatedBy                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      DamageCauser                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     HitLocation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         FHitComponent                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        BoneName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Momentum                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCreativeCreatureManagerComponent::OnAIPawnDied(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCreativeCreatureManagerComponent", "OnAIPawnDied");

	Params::UFortCreativeCreatureManagerComponent_OnAIPawnDied_Params Parms{};

	Parms.DamagedActor = DamagedActor;
	Parms.Damage = Damage;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.HitLocation = HitLocation;
	Parms.FHitComponent = FHitComponent;
	Parms.BoneName = BoneName;
	Parms.Momentum = Momentum;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FortniteAI.FortCrowdManager
// (None)

class UClass* UFortCrowdManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortCrowdManager");

	return Clss;
}


// FortCrowdManager FortniteAI.Default__FortCrowdManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortCrowdManager* UFortCrowdManager::GetDefaultObj()
{
	static class UFortCrowdManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortCrowdManager*>(UFortCrowdManager::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortEnemySpawn
// (Actor)

class UClass* UFortEnemySpawn::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortEnemySpawn");

	return Clss;
}


// FortEnemySpawn FortniteAI.Default__FortEnemySpawn
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortEnemySpawn* UFortEnemySpawn::GetDefaultObj()
{
	static class UFortEnemySpawn* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortEnemySpawn*>(UFortEnemySpawn::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortEnvQueryManager
// (None)

class UClass* UFortEnvQueryManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortEnvQueryManager");

	return Clss;
}


// FortEnvQueryManager FortniteAI.Default__FortEnvQueryManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortEnvQueryManager* UFortEnvQueryManager::GetDefaultObj()
{
	static class UFortEnvQueryManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortEnvQueryManager*>(UFortEnvQueryManager::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortQueryContext_WorldLocationParam
// (None)

class UClass* UFortQueryContext_WorldLocationParam::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryContext_WorldLocationParam");

	return Clss;
}


// FortQueryContext_WorldLocationParam FortniteAI.Default__FortQueryContext_WorldLocationParam
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryContext_WorldLocationParam* UFortQueryContext_WorldLocationParam::GetDefaultObj()
{
	static class UFortQueryContext_WorldLocationParam* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryContext_WorldLocationParam*>(UFortQueryContext_WorldLocationParam::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortQueryItemType_Goal
// (None)

class UClass* UFortQueryItemType_Goal::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryItemType_Goal");

	return Clss;
}


// FortQueryItemType_Goal FortniteAI.Default__FortQueryItemType_Goal
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryItemType_Goal* UFortQueryItemType_Goal::GetDefaultObj()
{
	static class UFortQueryItemType_Goal* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryItemType_Goal*>(UFortQueryItemType_Goal::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortQueryTwoPointSolver
// (None)

class UClass* UFortQueryTwoPointSolver::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortQueryTwoPointSolver");

	return Clss;
}


// FortQueryTwoPointSolver FortniteAI.Default__FortQueryTwoPointSolver
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortQueryTwoPointSolver* UFortQueryTwoPointSolver::GetDefaultObj()
{
	static class UFortQueryTwoPointSolver* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortQueryTwoPointSolver*>(UFortQueryTwoPointSolver::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.FortQueryTwoPointSolver.Start
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UObject*                     Querier                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortQueryTwoPointSolver::Start(class UObject* Querier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQueryTwoPointSolver", "Start");

	Params::UFortQueryTwoPointSolver_Start_Params Parms{};

	Parms.Querier = Querier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortQueryTwoPointSolver.SkipToNextPointA
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortQueryTwoPointSolver::SkipToNextPointA()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQueryTwoPointSolver", "SkipToNextPointA");

	Params::UFortQueryTwoPointSolver_SkipToNextPointA_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortQueryTwoPointSolver.SetCustomRotationA
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FRotator                    Rotation                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

void UFortQueryTwoPointSolver::SetCustomRotationA(struct FRotator& Rotation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQueryTwoPointSolver", "SetCustomRotationA");

	Params::UFortQueryTwoPointSolver_SetCustomRotationA_Params Parms{};

	Parms.Rotation = Rotation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortQueryTwoPointSolver.OnCustomRotationMode
// (Event, Public, HasOutParams, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector                     InPointA                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Querier                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortQueryTwoPointSolver::OnCustomRotationMode(struct FVector& InPointA, const struct FVector& Querier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQueryTwoPointSolver", "OnCustomRotationMode");

	Params::UFortQueryTwoPointSolver_OnCustomRotationMode_Params Parms{};

	Parms.InPointA = InPointA;
	Parms.Querier = Querier;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteAI.FortQueryTwoPointSolver.GetRandomRotationOffset
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FRotator                    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FRotator UFortQueryTwoPointSolver::GetRandomRotationOffset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQueryTwoPointSolver", "GetRandomRotationOffset");

	Params::UFortQueryTwoPointSolver_GetRandomRotationOffset_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortQueryTwoPointSolver.AddNamedFloatParamB
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ParamName                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortQueryTwoPointSolver::AddNamedFloatParamB(class FName ParamName, float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQueryTwoPointSolver", "AddNamedFloatParamB");

	Params::UFortQueryTwoPointSolver_AddNamedFloatParamB_Params Parms{};

	Parms.ParamName = ParamName;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortQueryTwoPointSolver.AddNamedFloatParamA
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FName                        ParamName                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Value                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortQueryTwoPointSolver::AddNamedFloatParamA(class FName ParamName, float Value)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortQueryTwoPointSolver", "AddNamedFloatParamA");

	Params::UFortQueryTwoPointSolver_AddNamedFloatParamA_Params Parms{};

	Parms.ParamName = ParamName;
	Parms.Value = Value;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FortniteAI.FortForcedLODZone
// (Actor)

class UClass* UFortForcedLODZone::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortForcedLODZone");

	return Clss;
}


// FortForcedLODZone FortniteAI.Default__FortForcedLODZone
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortForcedLODZone* UFortForcedLODZone::GetDefaultObj()
{
	static class UFortForcedLODZone* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortForcedLODZone*>(UFortForcedLODZone::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortGameplayAbility_TeleportToActor
// (None)

class UClass* UFortGameplayAbility_TeleportToActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortGameplayAbility_TeleportToActor");

	return Clss;
}


// FortGameplayAbility_TeleportToActor FortniteAI.Default__FortGameplayAbility_TeleportToActor
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortGameplayAbility_TeleportToActor* UFortGameplayAbility_TeleportToActor::GetDefaultObj()
{
	static class UFortGameplayAbility_TeleportToActor* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortGameplayAbility_TeleportToActor*>(UFortGameplayAbility_TeleportToActor::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.FortGameplayAbility_TeleportToActor.PreTeleportPawn
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortPawn*                   TeleportedPawn                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortGameplayAbility_TeleportToActor::PreTeleportPawn(class UFortPawn* TeleportedPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGameplayAbility_TeleportToActor", "PreTeleportPawn");

	Params::UFortGameplayAbility_TeleportToActor_PreTeleportPawn_Params Parms{};

	Parms.TeleportedPawn = TeleportedPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteAI.FortGameplayAbility_TeleportToActor.PostTeleportedPawn
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortPawn*                   TeleportedPawn                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortGameplayAbility_TeleportToActor::PostTeleportedPawn(class UFortPawn* TeleportedPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortGameplayAbility_TeleportToActor", "PostTeleportedPawn");

	Params::UFortGameplayAbility_TeleportToActor_PostTeleportedPawn_Params Parms{};

	Parms.TeleportedPawn = TeleportedPawn;

	UObject::ProcessEvent(Func, &Parms);

}


// Class FortniteAI.FortIntensityCurveSequence
// (None)

class UClass* UFortIntensityCurveSequence::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortIntensityCurveSequence");

	return Clss;
}


// FortIntensityCurveSequence FortniteAI.Default__FortIntensityCurveSequence
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortIntensityCurveSequence* UFortIntensityCurveSequence::GetDefaultObj()
{
	static class UFortIntensityCurveSequence* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortIntensityCurveSequence*>(UFortIntensityCurveSequence::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortIntensityCurveSequenceProgression
// (None)

class UClass* UFortIntensityCurveSequenceProgression::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortIntensityCurveSequenceProgression");

	return Clss;
}


// FortIntensityCurveSequenceProgression FortniteAI.Default__FortIntensityCurveSequenceProgression
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortIntensityCurveSequenceProgression* UFortIntensityCurveSequenceProgression::GetDefaultObj()
{
	static class UFortIntensityCurveSequenceProgression* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortIntensityCurveSequenceProgression*>(UFortIntensityCurveSequenceProgression::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortJumpDownLink
// (Actor)

class UClass* UFortJumpDownLink::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortJumpDownLink");

	return Clss;
}


// FortJumpDownLink FortniteAI.Default__FortJumpDownLink
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortJumpDownLink* UFortJumpDownLink::GetDefaultObj()
{
	static class UFortJumpDownLink* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortJumpDownLink*>(UFortJumpDownLink::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortNavGraphGoal
// (Actor)

class UClass* UFortNavGraphGoal::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortNavGraphGoal");

	return Clss;
}


// FortNavGraphGoal FortniteAI.Default__FortNavGraphGoal
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortNavGraphGoal* UFortNavGraphGoal::GetDefaultObj()
{
	static class UFortNavGraphGoal* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortNavGraphGoal*>(UFortNavGraphGoal::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortNavLinkBlockerComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UFortNavLinkBlockerComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortNavLinkBlockerComponent");

	return Clss;
}


// FortNavLinkBlockerComponent FortniteAI.Default__FortNavLinkBlockerComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortNavLinkBlockerComponent* UFortNavLinkBlockerComponent::GetDefaultObj()
{
	static class UFortNavLinkBlockerComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortNavLinkBlockerComponent*>(UFortNavLinkBlockerComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortNavLinkContainer
// (Actor)

class UClass* UFortNavLinkContainer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortNavLinkContainer");

	return Clss;
}


// FortNavLinkContainer FortniteAI.Default__FortNavLinkContainer
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortNavLinkContainer* UFortNavLinkContainer::GetDefaultObj()
{
	static class UFortNavLinkContainer* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortNavLinkContainer*>(UFortNavLinkContainer::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortNavLinkDefinition
// (None)

class UClass* UFortNavLinkDefinition::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortNavLinkDefinition");

	return Clss;
}


// FortNavLinkDefinition FortniteAI.Default__FortNavLinkDefinition
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortNavLinkDefinition* UFortNavLinkDefinition::GetDefaultObj()
{
	static class UFortNavLinkDefinition* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortNavLinkDefinition*>(UFortNavLinkDefinition::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortNavMesh
// (Actor)

class UClass* UFortNavMesh::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortNavMesh");

	return Clss;
}


// FortNavMesh FortniteAI.Default__FortNavMesh
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortNavMesh* UFortNavMesh::GetDefaultObj()
{
	static class UFortNavMesh* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortNavMesh*>(UFortNavMesh::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortNavObstacleComponent
// (None)

class UClass* UFortNavObstacleComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortNavObstacleComponent");

	return Clss;
}


// FortNavObstacleComponent FortniteAI.Default__FortNavObstacleComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortNavObstacleComponent* UFortNavObstacleComponent::GetDefaultObj()
{
	static class UFortNavObstacleComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortNavObstacleComponent*>(UFortNavObstacleComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortNavSystem
// (None)

class UClass* UFortNavSystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortNavSystem");

	return Clss;
}


// FortNavSystem FortniteAI.Default__FortNavSystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortNavSystem* UFortNavSystem::GetDefaultObj()
{
	static class UFortNavSystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortNavSystem*>(UFortNavSystem::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.FortNavSystem.OnNavDataRegistered
// (Final, Native, Protected)
// Parameters:
// class UNavigationData*             NavData                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortNavSystem::OnNavDataRegistered(class UNavigationData* NavData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNavSystem", "OnNavDataRegistered");

	Params::UFortNavSystem_OnNavDataRegistered_Params Parms{};

	Parms.NavData = NavData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortNavSystem.IsNavmeshInRadiusInitialized
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContext                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     TestLocation                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              TestRadius                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortNavSystem::IsNavmeshInRadiusInitialized(class UObject* WorldContext, struct FVector& TestLocation, float TestRadius)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNavSystem", "IsNavmeshInRadiusInitialized");

	Params::UFortNavSystem_IsNavmeshInRadiusInitialized_Params Parms{};

	Parms.WorldContext = WorldContext;
	Parms.TestLocation = TestLocation;
	Parms.TestRadius = TestRadius;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class FortniteAI.FortNavSystemConfig
// (None)

class UClass* UFortNavSystemConfig::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortNavSystemConfig");

	return Clss;
}


// FortNavSystemConfig FortniteAI.Default__FortNavSystemConfig
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortNavSystemConfig* UFortNavSystemConfig::GetDefaultObj()
{
	static class UFortNavSystemConfig* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortNavSystemConfig*>(UFortNavSystemConfig::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortPatrolWardInterface
// (None)

class UClass* UFortPatrolWardInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortPatrolWardInterface");

	return Clss;
}


// FortPatrolWardInterface FortniteAI.Default__FortPatrolWardInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortPatrolWardInterface* UFortPatrolWardInterface::GetDefaultObj()
{
	static class UFortPatrolWardInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortPatrolWardInterface*>(UFortPatrolWardInterface::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.FortPatrolWardInterface.GetAffectingType
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent, Const)
// Parameters:
// enum class EWardAffectType         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

enum class EWardAffectType UFortPatrolWardInterface::GetAffectingType()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPatrolWardInterface", "GetAffectingType");

	Params::UFortPatrolWardInterface_GetAffectingType_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FortniteAI.FortPatrolWardInterface.GetAffectingDistance
// (BlueprintAuthorityOnly, Event, Public, BlueprintEvent, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortPatrolWardInterface::GetAffectingDistance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPatrolWardInterface", "GetAffectingDistance");

	Params::UFortPatrolWardInterface_GetAffectingDistance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Class FortniteAI.FortPlacedPawnMarker
// (Actor)

class UClass* UFortPlacedPawnMarker::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortPlacedPawnMarker");

	return Clss;
}


// FortPlacedPawnMarker FortniteAI.Default__FortPlacedPawnMarker
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortPlacedPawnMarker* UFortPlacedPawnMarker::GetDefaultObj()
{
	static class UFortPlacedPawnMarker* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortPlacedPawnMarker*>(UFortPlacedPawnMarker::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortRiftBlockerComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UFortRiftBlockerComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortRiftBlockerComponent");

	return Clss;
}


// FortRiftBlockerComponent FortniteAI.Default__FortRiftBlockerComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortRiftBlockerComponent* UFortRiftBlockerComponent::GetDefaultObj()
{
	static class UFortRiftBlockerComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortRiftBlockerComponent*>(UFortRiftBlockerComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortStaticMeshLinkComponent
// (None)

class UClass* UFortStaticMeshLinkComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortStaticMeshLinkComponent");

	return Clss;
}


// FortStaticMeshLinkComponent FortniteAI.Default__FortStaticMeshLinkComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortStaticMeshLinkComponent* UFortStaticMeshLinkComponent::GetDefaultObj()
{
	static class UFortStaticMeshLinkComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortStaticMeshLinkComponent*>(UFortStaticMeshLinkComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortThreatVisualsManager
// (Actor)

class UClass* UFortThreatVisualsManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortThreatVisualsManager");

	return Clss;
}


// FortThreatVisualsManager FortniteAI.Default__FortThreatVisualsManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortThreatVisualsManager* UFortThreatVisualsManager::GetDefaultObj()
{
	static class UFortThreatVisualsManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortThreatVisualsManager*>(UFortThreatVisualsManager::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.FortThreatVisualsManager.StormsExist
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortThreatVisualsManager::StormsExist()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortThreatVisualsManager", "StormsExist");

	Params::UFortThreatVisualsManager_StormsExist_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortThreatVisualsManager.SetMinimumCloudAltitude
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewMinimumAltitude                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortThreatVisualsManager::SetMinimumCloudAltitude(float NewMinimumAltitude)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortThreatVisualsManager", "SetMinimumCloudAltitude");

	Params::UFortThreatVisualsManager_SetMinimumCloudAltitude_Params Parms{};

	Parms.NewMinimumAltitude = NewMinimumAltitude;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortThreatVisualsManager.SetCloudsAreHidden
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bHide                                                            (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortThreatVisualsManager::SetCloudsAreHidden(bool bHide)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortThreatVisualsManager", "SetCloudsAreHidden");

	Params::UFortThreatVisualsManager_SetCloudsAreHidden_Params Parms{};

	Parms.bHide = bHide;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortThreatVisualsManager.ResetMinimumCloudAltitude
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortThreatVisualsManager::ResetMinimumCloudAltitude()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortThreatVisualsManager", "ResetMinimumCloudAltitude");

	Params::UFortThreatVisualsManager_ResetMinimumCloudAltitude_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortThreatVisualsManager.OnWorldReady
// (Event, Protected, BlueprintEvent)
// Parameters:

void UFortThreatVisualsManager::OnWorldReady()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortThreatVisualsManager", "OnWorldReady");

	Params::UFortThreatVisualsManager_OnWorldReady_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteAI.FortThreatVisualsManager.OnThreatCloudsChanged
// (Event, Public, HasOutParams, BlueprintEvent)
// Parameters:
// TArray<struct FThreatLocationInfo> ThreatLocationInfo                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UFortThreatVisualsManager::OnThreatCloudsChanged(TArray<struct FThreatLocationInfo>& ThreatLocationInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortThreatVisualsManager", "OnThreatCloudsChanged");

	Params::UFortThreatVisualsManager_OnThreatCloudsChanged_Params Parms{};

	Parms.ThreatLocationInfo = ThreatLocationInfo;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteAI.FortThreatVisualsManager.OnRep_ThreatLocations
// (Final, Native, Private)
// Parameters:

void UFortThreatVisualsManager::OnRep_ThreatLocations()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortThreatVisualsManager", "OnRep_ThreatLocations");

	Params::UFortThreatVisualsManager_OnRep_ThreatLocations_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortThreatVisualsManager.OnRep_StormWinds
// (Final, Native, Private)
// Parameters:

void UFortThreatVisualsManager::OnRep_StormWinds()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortThreatVisualsManager", "OnRep_StormWinds");

	Params::UFortThreatVisualsManager_OnRep_StormWinds_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortThreatVisualsManager.OnRep_HideClouds
// (Final, Native, Private)
// Parameters:

void UFortThreatVisualsManager::OnRep_HideClouds()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortThreatVisualsManager", "OnRep_HideClouds");

	Params::UFortThreatVisualsManager_OnRep_HideClouds_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortThreatVisualsManager.OnRep_GoalActorLocations
// (Final, Native, Private)
// Parameters:

void UFortThreatVisualsManager::OnRep_GoalActorLocations()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortThreatVisualsManager", "OnRep_GoalActorLocations");

	Params::UFortThreatVisualsManager_OnRep_GoalActorLocations_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortThreatVisualsManager.OnBeginThreatVisualsPrecursor
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintEvent)
// Parameters:
// class UActor*                      SourceActor                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     EndLocation                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortThreatVisualsManager::OnBeginThreatVisualsPrecursor(class UActor* SourceActor, struct FVector& EndLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortThreatVisualsManager", "OnBeginThreatVisualsPrecursor");

	Params::UFortThreatVisualsManager_OnBeginThreatVisualsPrecursor_Params Parms{};

	Parms.SourceActor = SourceActor;
	Parms.EndLocation = EndLocation;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteAI.FortThreatVisualsManager.GetThreatClouds
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FThreatLocationInfo> ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<struct FThreatLocationInfo> UFortThreatVisualsManager::GetThreatClouds()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortThreatVisualsManager", "GetThreatClouds");

	Params::UFortThreatVisualsManager_GetThreatClouds_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortThreatVisualsManager.GetThreatCloud
// (Final, RequiredAPI, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FThreatLocationInfo         ThreatLocInfo                                                    (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UThreatCloud*                ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UThreatCloud* UFortThreatVisualsManager::GetThreatCloud(struct FThreatLocationInfo& ThreatLocInfo)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortThreatVisualsManager", "GetThreatCloud");

	Params::UFortThreatVisualsManager_GetThreatCloud_Params Parms{};

	Parms.ThreatLocInfo = ThreatLocInfo;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortThreatVisualsManager.GetCloudsAreHidden
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortThreatVisualsManager::GetCloudsAreHidden()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortThreatVisualsManager", "GetCloudsAreHidden");

	Params::UFortThreatVisualsManager_GetCloudsAreHidden_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortThreatVisualsManager.BeginThreatVisualsPrecursor
// (Net, NetReliable, Native, Event, NetMulticast, Public, HasDefaults)
// Parameters:
// class UActor*                      SourceActor                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     ThreatLocation                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortThreatVisualsManager::BeginThreatVisualsPrecursor(class UActor* SourceActor, const struct FVector& ThreatLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortThreatVisualsManager", "BeginThreatVisualsPrecursor");

	Params::UFortThreatVisualsManager_BeginThreatVisualsPrecursor_Params Parms{};

	Parms.SourceActor = SourceActor;
	Parms.ThreatLocation = ThreatLocation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FortniteAI.AIGoalComponent
// (None)

class UClass* UAIGoalComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIGoalComponent");

	return Clss;
}


// AIGoalComponent FortniteAI.Default__AIGoalComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAIGoalComponent* UAIGoalComponent::GetDefaultObj()
{
	static class UAIGoalComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIGoalComponent*>(UAIGoalComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAIGoalComponent
// (None)

class UClass* UFortAIGoalComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAIGoalComponent");

	return Clss;
}


// FortAIGoalComponent FortniteAI.Default__FortAIGoalComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAIGoalComponent* UFortAIGoalComponent::GetDefaultObj()
{
	static class UFortAIGoalComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAIGoalComponent*>(UFortAIGoalComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAIGoalProvider
// (None)

class UClass* UFortAIGoalProvider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAIGoalProvider");

	return Clss;
}


// FortAIGoalProvider FortniteAI.Default__FortAIGoalProvider
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAIGoalProvider* UFortAIGoalProvider::GetDefaultObj()
{
	static class UFortAIGoalProvider* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAIGoalProvider*>(UFortAIGoalProvider::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.FortAIGoalProvider.UpdateGoals
// (Native, Public, BlueprintCallable)
// Parameters:

void UFortAIGoalProvider::UpdateGoals()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIGoalProvider", "UpdateGoals");

	Params::UFortAIGoalProvider_UpdateGoals_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAIGoalProvider.InitializeGoalProvider
// (Native, Public, BlueprintCallable)
// Parameters:
// class UWorld*                      ContextWorld                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortAIAssignment*           Assignment                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAIGoalProvider::InitializeGoalProvider(class UWorld* ContextWorld, class UFortAIAssignment* Assignment)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIGoalProvider", "InitializeGoalProvider");

	Params::UFortAIGoalProvider_InitializeGoalProvider_Params Parms{};

	Parms.ContextWorld = ContextWorld;
	Parms.Assignment = Assignment;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAIGoalProvider.GetEncounterInfo
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortAIEncounterInfo*        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAIEncounterInfo* UFortAIGoalProvider::GetEncounterInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAIGoalProvider", "GetEncounterInfo");

	Params::UFortAIGoalProvider_GetEncounterInfo_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class FortniteAI.FortAIGoalProvider_EnvQuery
// (None)

class UClass* UFortAIGoalProvider_EnvQuery::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAIGoalProvider_EnvQuery");

	return Clss;
}


// FortAIGoalProvider_EnvQuery FortniteAI.Default__FortAIGoalProvider_EnvQuery
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAIGoalProvider_EnvQuery* UFortAIGoalProvider_EnvQuery::GetDefaultObj()
{
	static class UFortAIGoalProvider_EnvQuery* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAIGoalProvider_EnvQuery*>(UFortAIGoalProvider_EnvQuery::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAIEncounterGoalSelectionTable
// (None)

class UClass* UFortAIEncounterGoalSelectionTable::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAIEncounterGoalSelectionTable");

	return Clss;
}


// FortAIEncounterGoalSelectionTable FortniteAI.Default__FortAIEncounterGoalSelectionTable
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAIEncounterGoalSelectionTable* UFortAIEncounterGoalSelectionTable::GetDefaultObj()
{
	static class UFortAIEncounterGoalSelectionTable* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAIEncounterGoalSelectionTable*>(UFortAIEncounterGoalSelectionTable::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.AIHotSpotConfig
// (None)

class UClass* UAIHotSpotConfig::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIHotSpotConfig");

	return Clss;
}


// AIHotSpotConfig FortniteAI.Default__AIHotSpotConfig
// (Public, ClassDefaultObject, ArchetypeObject)

class UAIHotSpotConfig* UAIHotSpotConfig::GetDefaultObj()
{
	static class UAIHotSpotConfig* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIHotSpotConfig*>(UAIHotSpotConfig::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.AIHotSpotSlotGenerator
// (None)

class UClass* UAIHotSpotSlotGenerator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIHotSpotSlotGenerator");

	return Clss;
}


// AIHotSpotSlotGenerator FortniteAI.Default__AIHotSpotSlotGenerator
// (Public, ClassDefaultObject, ArchetypeObject)

class UAIHotSpotSlotGenerator* UAIHotSpotSlotGenerator::GetDefaultObj()
{
	static class UAIHotSpotSlotGenerator* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIHotSpotSlotGenerator*>(UAIHotSpotSlotGenerator::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.AIHotSpotSlotGenerator.GetHotSpot
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UAIHotSpot*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAIHotSpot* UAIHotSpotSlotGenerator::GetHotSpot()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIHotSpotSlotGenerator", "GetHotSpot");

	Params::UAIHotSpotSlotGenerator_GetHotSpot_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.AIHotSpotSlotGenerator.GenerateSlots
// (Native, Event, Public, BlueprintEvent)
// Parameters:

void UAIHotSpotSlotGenerator::GenerateSlots()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIHotSpotSlotGenerator", "GenerateSlots");

	Params::UAIHotSpotSlotGenerator_GenerateSlots_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.AIHotSpotSlotGenerator.AddSlot
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     RelativeLocation                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    RelativeRotation                                                 (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// TSubclassOf<class UAIHotSpotSlot>  CustomSlotClass                                                  (Parm, ZeroConstructor, NoDestructor, AdvancedDisplay, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bEnabled                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAIHotSpotSlot*              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAIHotSpotSlot* UAIHotSpotSlotGenerator::AddSlot(struct FVector& RelativeLocation, struct FRotator& RelativeRotation, TSubclassOf<class UAIHotSpotSlot> CustomSlotClass, bool bEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AIHotSpotSlotGenerator", "AddSlot");

	Params::UAIHotSpotSlotGenerator_AddSlot_Params Parms{};

	Parms.RelativeLocation = RelativeLocation;
	Parms.RelativeRotation = RelativeRotation;
	Parms.CustomSlotClass = CustomSlotClass;
	Parms.bEnabled = bEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class FortniteAI.AIHotSpotSlotGenerator_OnBoundingBox
// (None)

class UClass* UAIHotSpotSlotGenerator_OnBoundingBox::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AIHotSpotSlotGenerator_OnBoundingBox");

	return Clss;
}


// AIHotSpotSlotGenerator_OnBoundingBox FortniteAI.Default__AIHotSpotSlotGenerator_OnBoundingBox
// (Public, ClassDefaultObject, ArchetypeObject)

class UAIHotSpotSlotGenerator_OnBoundingBox* UAIHotSpotSlotGenerator_OnBoundingBox::GetDefaultObj()
{
	static class UAIHotSpotSlotGenerator_OnBoundingBox* Default = nullptr;

	if (!Default)
		Default = static_cast<UAIHotSpotSlotGenerator_OnBoundingBox*>(UAIHotSpotSlotGenerator_OnBoundingBox::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.BuildingActorHotSpotConfig
// (None)

class UClass* UBuildingActorHotSpotConfig::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BuildingActorHotSpotConfig");

	return Clss;
}


// BuildingActorHotSpotConfig FortniteAI.Default__BuildingActorHotSpotConfig
// (Public, ClassDefaultObject, ArchetypeObject)

class UBuildingActorHotSpotConfig* UBuildingActorHotSpotConfig::GetDefaultObj()
{
	static class UBuildingActorHotSpotConfig* Default = nullptr;

	if (!Default)
		Default = static_cast<UBuildingActorHotSpotConfig*>(UBuildingActorHotSpotConfig::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.BuildingActorHotSpotRenderingComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UBuildingActorHotSpotRenderingComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BuildingActorHotSpotRenderingComponent");

	return Clss;
}


// BuildingActorHotSpotRenderingComponent FortniteAI.Default__BuildingActorHotSpotRenderingComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UBuildingActorHotSpotRenderingComponent* UBuildingActorHotSpotRenderingComponent::GetDefaultObj()
{
	static class UBuildingActorHotSpotRenderingComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UBuildingActorHotSpotRenderingComponent*>(UBuildingActorHotSpotRenderingComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAIHotSpot
// (Actor)

class UClass* UFortAIHotSpot::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAIHotSpot");

	return Clss;
}


// FortAIHotSpot FortniteAI.Default__FortAIHotSpot
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAIHotSpot* UFortAIHotSpot::GetDefaultObj()
{
	static class UFortAIHotSpot* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAIHotSpot*>(UFortAIHotSpot::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAIHotSpotManager
// (None)

class UClass* UFortAIHotSpotManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAIHotSpotManager");

	return Clss;
}


// FortAIHotSpotManager FortniteAI.Default__FortAIHotSpotManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAIHotSpotManager* UFortAIHotSpotManager::GetDefaultObj()
{
	static class UFortAIHotSpotManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAIHotSpotManager*>(UFortAIHotSpotManager::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAIHotSpotSlot
// (None)

class UClass* UFortAIHotSpotSlot::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAIHotSpotSlot");

	return Clss;
}


// FortAIHotSpotSlot FortniteAI.Default__FortAIHotSpotSlot
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAIHotSpotSlot* UFortAIHotSpotSlot::GetDefaultObj()
{
	static class UFortAIHotSpotSlot* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAIHotSpotSlot*>(UFortAIHotSpotSlot::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAIHotSpotSlotGenerator_FromConfig
// (None)

class UClass* UFortAIHotSpotSlotGenerator_FromConfig::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAIHotSpotSlotGenerator_FromConfig");

	return Clss;
}


// FortAIHotSpotSlotGenerator_FromConfig FortniteAI.Default__FortAIHotSpotSlotGenerator_FromConfig
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAIHotSpotSlotGenerator_FromConfig* UFortAIHotSpotSlotGenerator_FromConfig::GetDefaultObj()
{
	static class UFortAIHotSpotSlotGenerator_FromConfig* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAIHotSpotSlotGenerator_FromConfig*>(UFortAIHotSpotSlotGenerator_FromConfig::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAIHotSpotSlotGenerator_OnBoundingBox
// (None)

class UClass* UFortAIHotSpotSlotGenerator_OnBoundingBox::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAIHotSpotSlotGenerator_OnBoundingBox");

	return Clss;
}


// FortAIHotSpotSlotGenerator_OnBoundingBox FortniteAI.Default__FortAIHotSpotSlotGenerator_OnBoundingBox
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAIHotSpotSlotGenerator_OnBoundingBox* UFortAIHotSpotSlotGenerator_OnBoundingBox::GetDefaultObj()
{
	static class UFortAIHotSpotSlotGenerator_OnBoundingBox* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAIHotSpotSlotGenerator_OnBoundingBox*>(UFortAIHotSpotSlotGenerator_OnBoundingBox::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAIHotSpotSlotGenerator_RampTrace
// (None)

class UClass* UFortAIHotSpotSlotGenerator_RampTrace::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAIHotSpotSlotGenerator_RampTrace");

	return Clss;
}


// FortAIHotSpotSlotGenerator_RampTrace FortniteAI.Default__FortAIHotSpotSlotGenerator_RampTrace
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAIHotSpotSlotGenerator_RampTrace* UFortAIHotSpotSlotGenerator_RampTrace::GetDefaultObj()
{
	static class UFortAIHotSpotSlotGenerator_RampTrace* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAIHotSpotSlotGenerator_RampTrace*>(UFortAIHotSpotSlotGenerator_RampTrace::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAIHotSpot_Building
// (Actor)

class UClass* UFortAIHotSpot_Building::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAIHotSpot_Building");

	return Clss;
}


// FortAIHotSpot_Building FortniteAI.Default__FortAIHotSpot_Building
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAIHotSpot_Building* UFortAIHotSpot_Building::GetDefaultObj()
{
	static class UFortAIHotSpot_Building* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAIHotSpot_Building*>(UFortAIHotSpot_Building::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAIHotSpot_FakeBuilding
// (Actor)

class UClass* UFortAIHotSpot_FakeBuilding::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAIHotSpot_FakeBuilding");

	return Clss;
}


// FortAIHotSpot_FakeBuilding FortniteAI.Default__FortAIHotSpot_FakeBuilding
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAIHotSpot_FakeBuilding* UFortAIHotSpot_FakeBuilding::GetDefaultObj()
{
	static class UFortAIHotSpot_FakeBuilding* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAIHotSpot_FakeBuilding*>(UFortAIHotSpot_FakeBuilding::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAIHotSpot_Shooting
// (Actor)

class UClass* UFortAIHotSpot_Shooting::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAIHotSpot_Shooting");

	return Clss;
}


// FortAIHotSpot_Shooting FortniteAI.Default__FortAIHotSpot_Shooting
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAIHotSpot_Shooting* UFortAIHotSpot_Shooting::GetDefaultObj()
{
	static class UFortAIHotSpot_Shooting* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAIHotSpot_Shooting*>(UFortAIHotSpot_Shooting::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortInfluenceMap
// (None)

class UClass* UFortInfluenceMap::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortInfluenceMap");

	return Clss;
}


// FortInfluenceMap FortniteAI.Default__FortInfluenceMap
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortInfluenceMap* UFortInfluenceMap::GetDefaultObj()
{
	static class UFortInfluenceMap* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortInfluenceMap*>(UFortInfluenceMap::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.FortInfluenceMap.K2_GetInfluenceSourcePositions
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContext                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<struct FVector>             InfluenceSourcePositions                                         (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UFortInfluenceMap::K2_GetInfluenceSourcePositions(class UObject* WorldContext, TArray<struct FVector>* InfluenceSourcePositions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortInfluenceMap", "K2_GetInfluenceSourcePositions");

	Params::UFortInfluenceMap_K2_GetInfluenceSourcePositions_Params Parms{};

	Parms.WorldContext = WorldContext;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (InfluenceSourcePositions != nullptr)
		*InfluenceSourcePositions = Parms.InfluenceSourcePositions;

}


// Function FortniteAI.FortInfluenceMap.K2_AddInfluenceSource
// (Final, Native, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContext                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Position                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      SourceName                                                       (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Strength                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortInfluenceMap::K2_AddInfluenceSource(class UObject* WorldContext, struct FVector& Position, const class FString& SourceName, float Strength)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortInfluenceMap", "K2_AddInfluenceSource");

	Params::UFortInfluenceMap_K2_AddInfluenceSource_Params Parms{};

	Parms.WorldContext = WorldContext;
	Parms.Position = Position;
	Parms.SourceName = SourceName;
	Parms.Strength = Strength;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FortniteAI.IrwinAIController
// (Actor)

class UClass* UIrwinAIController::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("IrwinAIController");

	return Clss;
}


// IrwinAIController FortniteAI.Default__IrwinAIController
// (Public, ClassDefaultObject, ArchetypeObject)

class UIrwinAIController* UIrwinAIController::GetDefaultObj()
{
	static class UIrwinAIController* Default = nullptr;

	if (!Default)
		Default = static_cast<UIrwinAIController*>(UIrwinAIController::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.LevelTestingActorBase
// (Actor)

class UClass* ULevelTestingActorBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("LevelTestingActorBase");

	return Clss;
}


// LevelTestingActorBase FortniteAI.Default__LevelTestingActorBase
// (Public, ClassDefaultObject, ArchetypeObject)

class ULevelTestingActorBase* ULevelTestingActorBase::GetDefaultObj()
{
	static class ULevelTestingActorBase* Default = nullptr;

	if (!Default)
		Default = static_cast<ULevelTestingActorBase*>(ULevelTestingActorBase::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortBotController
// (Actor)

class UClass* UFortBotController::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortBotController");

	return Clss;
}


// FortBotController FortniteAI.Default__FortBotController
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortBotController* UFortBotController::GetDefaultObj()
{
	static class UFortBotController* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortBotController*>(UFortBotController::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortBotMissionLogic
// (None)

class UClass* UFortBotMissionLogic::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortBotMissionLogic");

	return Clss;
}


// FortBotMissionLogic FortniteAI.Default__FortBotMissionLogic
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortBotMissionLogic* UFortBotMissionLogic::GetDefaultObj()
{
	static class UFortBotMissionLogic* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortBotMissionLogic*>(UFortBotMissionLogic::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.FortBotMissionLogic.SpawnStructureBuilder
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UActor*                      MissionGoal                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortBuildingInstructions*   BuildingInstructions                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortBotStructureBuilder*    ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortBotStructureBuilder* UFortBotMissionLogic::SpawnStructureBuilder(class UActor* MissionGoal, class UFortBuildingInstructions* BuildingInstructions)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBotMissionLogic", "SpawnStructureBuilder");

	Params::UFortBotMissionLogic_SpawnStructureBuilder_Params Parms{};

	Parms.MissionGoal = MissionGoal;
	Parms.BuildingInstructions = BuildingInstructions;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortBotMissionLogic.SetGoalsInvulnerable
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bGodMode                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortBotMissionLogic::SetGoalsInvulnerable(bool bGodMode)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBotMissionLogic", "SetGoalsInvulnerable");

	Params::UFortBotMissionLogic_SetGoalsInvulnerable_Params Parms{};

	Parms.bGodMode = bGodMode;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortBotMissionLogic.SetCurrentBehavior
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UBehaviorTree*               Behavior                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortBotMissionLogic::SetCurrentBehavior(class UBehaviorTree* Behavior)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBotMissionLogic", "SetCurrentBehavior");

	Params::UFortBotMissionLogic_SetCurrentBehavior_Params Parms{};

	Parms.Behavior = Behavior;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortBotMissionLogic.ResetBehavior
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortBotMissionLogic::ResetBehavior()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBotMissionLogic", "ResetBehavior");

	Params::UFortBotMissionLogic_ResetBehavior_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortBotMissionLogic.OnMissionStarted
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortBotMissionLogic::OnMissionStarted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBotMissionLogic", "OnMissionStarted");

	Params::UFortBotMissionLogic_OnMissionStarted_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteAI.FortBotMissionLogic.OnMissionFinished
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortBotMissionLogic::OnMissionFinished()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBotMissionLogic", "OnMissionFinished");

	Params::UFortBotMissionLogic_OnMissionFinished_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteAI.FortBotMissionLogic.OnMissionActivated
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortBotMissionLogic::OnMissionActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBotMissionLogic", "OnMissionActivated");

	Params::UFortBotMissionLogic_OnMissionActivated_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteAI.FortBotMissionLogic.OnInteractWithMissionGoal
// (RequiredAPI, Event, Public, BlueprintEvent)
// Parameters:
// class UFortAIController*           BotAI                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      MissionGoal                                                      (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortBotMissionLogic::OnInteractWithMissionGoal(class UFortAIController* BotAI, class UActor* MissionGoal)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBotMissionLogic", "OnInteractWithMissionGoal");

	Params::UFortBotMissionLogic_OnInteractWithMissionGoal_Params Parms{};

	Parms.BotAI = BotAI;
	Parms.MissionGoal = MissionGoal;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FortniteAI.FortBotMissionLogic.OnCanStartOtherMission
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortAIController*           BotAI                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortMission*                OtherMission                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortBotMissionLogic::OnCanStartOtherMission(class UFortAIController* BotAI, class UFortMission* OtherMission)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBotMissionLogic", "OnCanStartOtherMission");

	Params::UFortBotMissionLogic_OnCanStartOtherMission_Params Parms{};

	Parms.BotAI = BotAI;
	Parms.OtherMission = OtherMission;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function FortniteAI.FortBotMissionLogic.OnAssignedBehavior
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortAIController*           BotAI                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortBotMissionLogic::OnAssignedBehavior(class UFortAIController* BotAI)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBotMissionLogic", "OnAssignedBehavior");

	Params::UFortBotMissionLogic_OnAssignedBehavior_Params Parms{};

	Parms.BotAI = BotAI;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteAI.FortBotMissionLogic.MarkSingleLocator
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UActor*                      LocatorActor                                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortBotMissionLogic::MarkSingleLocator(class UActor* LocatorActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBotMissionLogic", "MarkSingleLocator");

	Params::UFortBotMissionLogic_MarkSingleLocator_Params Parms{};

	Parms.LocatorActor = LocatorActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortBotMissionLogic.MarkAllLocated
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortBotMissionLogic::MarkAllLocated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBotMissionLogic", "MarkAllLocated");

	Params::UFortBotMissionLogic_MarkAllLocated_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortBotMissionLogic.ClearAllLocated
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortBotMissionLogic::ClearAllLocated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBotMissionLogic", "ClearAllLocated");

	Params::UFortBotMissionLogic_ClearAllLocated_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FortniteAI.FortBotMissionManager
// (None)

class UClass* UFortBotMissionManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortBotMissionManager");

	return Clss;
}


// FortBotMissionManager FortniteAI.Default__FortBotMissionManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortBotMissionManager* UFortBotMissionManager::GetDefaultObj()
{
	static class UFortBotMissionManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortBotMissionManager*>(UFortBotMissionManager::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortBotStructureBuilder
// (Actor)

class UClass* UFortBotStructureBuilder::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortBotStructureBuilder");

	return Clss;
}


// FortBotStructureBuilder FortniteAI.Default__FortBotStructureBuilder
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortBotStructureBuilder* UFortBotStructureBuilder::GetDefaultObj()
{
	static class UFortBotStructureBuilder* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortBotStructureBuilder*>(UFortBotStructureBuilder::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.FortBotStructureBuilder.RunDeconstructor
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortBotStructureBuilder::RunDeconstructor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBotStructureBuilder", "RunDeconstructor");

	Params::UFortBotStructureBuilder_RunDeconstructor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortBotStructureBuilder.OnBuildingDied
// (Final, Native, Protected, HasDefaults)
// Parameters:
// class UActor*                      DamagedActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UController*                 InstigatedBy                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      DamageCauser                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     HitLocation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         FHitComponent                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        BoneName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Momentum                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortBotStructureBuilder::OnBuildingDied(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBotStructureBuilder", "OnBuildingDied");

	Params::UFortBotStructureBuilder_OnBuildingDied_Params Parms{};

	Parms.DamagedActor = DamagedActor;
	Parms.Damage = Damage;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.HitLocation = HitLocation;
	Parms.FHitComponent = FHitComponent;
	Parms.BoneName = BoneName;
	Parms.Momentum = Momentum;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortBotStructureBuilder.BuildAll
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortBotStructureBuilder::BuildAll()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortBotStructureBuilder", "BuildAll");

	Params::UFortBotStructureBuilder_BuildAll_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FortniteAI.FortMetaNavArea_Obstacles
// (None)

class UClass* UFortMetaNavArea_Obstacles::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortMetaNavArea_Obstacles");

	return Clss;
}


// FortMetaNavArea_Obstacles FortniteAI.Default__FortMetaNavArea_Obstacles
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortMetaNavArea_Obstacles* UFortMetaNavArea_Obstacles::GetDefaultObj()
{
	static class UFortMetaNavArea_Obstacles* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortMetaNavArea_Obstacles*>(UFortMetaNavArea_Obstacles::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortNavAgentCostData
// (None)

class UClass* UFortNavAgentCostData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortNavAgentCostData");

	return Clss;
}


// FortNavAgentCostData FortniteAI.Default__FortNavAgentCostData
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortNavAgentCostData* UFortNavAgentCostData::GetDefaultObj()
{
	static class UFortNavAgentCostData* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortNavAgentCostData*>(UFortNavAgentCostData::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortNavAreaAutomatic
// (None)

class UClass* UFortNavAreaAutomatic::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortNavAreaAutomatic");

	return Clss;
}


// FortNavAreaAutomatic FortniteAI.Default__FortNavAreaAutomatic
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortNavAreaAutomatic* UFortNavAreaAutomatic::GetDefaultObj()
{
	static class UFortNavAreaAutomatic* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortNavAreaAutomatic*>(UFortNavAreaAutomatic::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortNavArea_BigMovingPawn
// (None)

class UClass* UFortNavArea_BigMovingPawn::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortNavArea_BigMovingPawn");

	return Clss;
}


// FortNavArea_BigMovingPawn FortniteAI.Default__FortNavArea_BigMovingPawn
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortNavArea_BigMovingPawn* UFortNavArea_BigMovingPawn::GetDefaultObj()
{
	static class UFortNavArea_BigMovingPawn* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortNavArea_BigMovingPawn*>(UFortNavArea_BigMovingPawn::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortNavArea_CheapObstacle
// (None)

class UClass* UFortNavArea_CheapObstacle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortNavArea_CheapObstacle");

	return Clss;
}


// FortNavArea_CheapObstacle FortniteAI.Default__FortNavArea_CheapObstacle
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortNavArea_CheapObstacle* UFortNavArea_CheapObstacle::GetDefaultObj()
{
	static class UFortNavArea_CheapObstacle* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortNavArea_CheapObstacle*>(UFortNavArea_CheapObstacle::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortNavArea_Clamber
// (None)

class UClass* UFortNavArea_Clamber::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortNavArea_Clamber");

	return Clss;
}


// FortNavArea_Clamber FortniteAI.Default__FortNavArea_Clamber
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortNavArea_Clamber* UFortNavArea_Clamber::GetDefaultObj()
{
	static class UFortNavArea_Clamber* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortNavArea_Clamber*>(UFortNavArea_Clamber::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortNavArea_ClosedDoors
// (None)

class UClass* UFortNavArea_ClosedDoors::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortNavArea_ClosedDoors");

	return Clss;
}


// FortNavArea_ClosedDoors FortniteAI.Default__FortNavArea_ClosedDoors
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortNavArea_ClosedDoors* UFortNavArea_ClosedDoors::GetDefaultObj()
{
	static class UFortNavArea_ClosedDoors* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortNavArea_ClosedDoors*>(UFortNavArea_ClosedDoors::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortNavArea_Danger
// (None)

class UClass* UFortNavArea_Danger::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortNavArea_Danger");

	return Clss;
}


// FortNavArea_Danger FortniteAI.Default__FortNavArea_Danger
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortNavArea_Danger* UFortNavArea_Danger::GetDefaultObj()
{
	static class UFortNavArea_Danger* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortNavArea_Danger*>(UFortNavArea_Danger::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortNavArea_DefenderNull
// (None)

class UClass* UFortNavArea_DefenderNull::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortNavArea_DefenderNull");

	return Clss;
}


// FortNavArea_DefenderNull FortniteAI.Default__FortNavArea_DefenderNull
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortNavArea_DefenderNull* UFortNavArea_DefenderNull::GetDefaultObj()
{
	static class UFortNavArea_DefenderNull* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortNavArea_DefenderNull*>(UFortNavArea_DefenderNull::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortNavArea_HuskNull
// (None)

class UClass* UFortNavArea_HuskNull::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortNavArea_HuskNull");

	return Clss;
}


// FortNavArea_HuskNull FortniteAI.Default__FortNavArea_HuskNull
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortNavArea_HuskNull* UFortNavArea_HuskNull::GetDefaultObj()
{
	static class UFortNavArea_HuskNull* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortNavArea_HuskNull*>(UFortNavArea_HuskNull::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortNavArea_LowJump
// (None)

class UClass* UFortNavArea_LowJump::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortNavArea_LowJump");

	return Clss;
}


// FortNavArea_LowJump FortniteAI.Default__FortNavArea_LowJump
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortNavArea_LowJump* UFortNavArea_LowJump::GetDefaultObj()
{
	static class UFortNavArea_LowJump* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortNavArea_LowJump*>(UFortNavArea_LowJump::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortNavArea_LowSmashable
// (None)

class UClass* UFortNavArea_LowSmashable::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortNavArea_LowSmashable");

	return Clss;
}


// FortNavArea_LowSmashable FortniteAI.Default__FortNavArea_LowSmashable
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortNavArea_LowSmashable* UFortNavArea_LowSmashable::GetDefaultObj()
{
	static class UFortNavArea_LowSmashable* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortNavArea_LowSmashable*>(UFortNavArea_LowSmashable::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortNavArea_Obstacle
// (None)

class UClass* UFortNavArea_Obstacle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortNavArea_Obstacle");

	return Clss;
}


// FortNavArea_Obstacle FortniteAI.Default__FortNavArea_Obstacle
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortNavArea_Obstacle* UFortNavArea_Obstacle::GetDefaultObj()
{
	static class UFortNavArea_Obstacle* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortNavArea_Obstacle*>(UFortNavArea_Obstacle::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortNavArea_PortalOrSmash
// (None)

class UClass* UFortNavArea_PortalOrSmash::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortNavArea_PortalOrSmash");

	return Clss;
}


// FortNavArea_PortalOrSmash FortniteAI.Default__FortNavArea_PortalOrSmash
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortNavArea_PortalOrSmash* UFortNavArea_PortalOrSmash::GetDefaultObj()
{
	static class UFortNavArea_PortalOrSmash* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortNavArea_PortalOrSmash*>(UFortNavArea_PortalOrSmash::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortNavArea_SmashableJump
// (None)

class UClass* UFortNavArea_SmashableJump::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortNavArea_SmashableJump");

	return Clss;
}


// FortNavArea_SmashableJump FortniteAI.Default__FortNavArea_SmashableJump
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortNavArea_SmashableJump* UFortNavArea_SmashableJump::GetDefaultObj()
{
	static class UFortNavArea_SmashableJump* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortNavArea_SmashableJump*>(UFortNavArea_SmashableJump::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortNavArea_Stairs
// (None)

class UClass* UFortNavArea_Stairs::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortNavArea_Stairs");

	return Clss;
}


// FortNavArea_Stairs FortniteAI.Default__FortNavArea_Stairs
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortNavArea_Stairs* UFortNavArea_Stairs::GetDefaultObj()
{
	static class UFortNavArea_Stairs* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortNavArea_Stairs*>(UFortNavArea_Stairs::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortNavArea_StarlightCheapObstacle
// (None)

class UClass* UFortNavArea_StarlightCheapObstacle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortNavArea_StarlightCheapObstacle");

	return Clss;
}


// FortNavArea_StarlightCheapObstacle FortniteAI.Default__FortNavArea_StarlightCheapObstacle
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortNavArea_StarlightCheapObstacle* UFortNavArea_StarlightCheapObstacle::GetDefaultObj()
{
	static class UFortNavArea_StarlightCheapObstacle* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortNavArea_StarlightCheapObstacle*>(UFortNavArea_StarlightCheapObstacle::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortNavArea_StarlightObstacle
// (None)

class UClass* UFortNavArea_StarlightObstacle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortNavArea_StarlightObstacle");

	return Clss;
}


// FortNavArea_StarlightObstacle FortniteAI.Default__FortNavArea_StarlightObstacle
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortNavArea_StarlightObstacle* UFortNavArea_StarlightObstacle::GetDefaultObj()
{
	static class UFortNavArea_StarlightObstacle* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortNavArea_StarlightObstacle*>(UFortNavArea_StarlightObstacle::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortNavArea_StoneWall
// (None)

class UClass* UFortNavArea_StoneWall::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortNavArea_StoneWall");

	return Clss;
}


// FortNavArea_StoneWall FortniteAI.Default__FortNavArea_StoneWall
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortNavArea_StoneWall* UFortNavArea_StoneWall::GetDefaultObj()
{
	static class UFortNavArea_StoneWall* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortNavArea_StoneWall*>(UFortNavArea_StoneWall::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortNavArea_TakerOnly
// (None)

class UClass* UFortNavArea_TakerOnly::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortNavArea_TakerOnly");

	return Clss;
}


// FortNavArea_TakerOnly FortniteAI.Default__FortNavArea_TakerOnly
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortNavArea_TakerOnly* UFortNavArea_TakerOnly::GetDefaultObj()
{
	static class UFortNavArea_TakerOnly* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortNavArea_TakerOnly*>(UFortNavArea_TakerOnly::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortNavArea_TraceSmashable
// (None)

class UClass* UFortNavArea_TraceSmashable::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortNavArea_TraceSmashable");

	return Clss;
}


// FortNavArea_TraceSmashable FortniteAI.Default__FortNavArea_TraceSmashable
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortNavArea_TraceSmashable* UFortNavArea_TraceSmashable::GetDefaultObj()
{
	static class UFortNavArea_TraceSmashable* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortNavArea_TraceSmashable*>(UFortNavArea_TraceSmashable::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortNavArea_Unwalkable
// (None)

class UClass* UFortNavArea_Unwalkable::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortNavArea_Unwalkable");

	return Clss;
}


// FortNavArea_Unwalkable FortniteAI.Default__FortNavArea_Unwalkable
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortNavArea_Unwalkable* UFortNavArea_Unwalkable::GetDefaultObj()
{
	static class UFortNavArea_Unwalkable* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortNavArea_Unwalkable*>(UFortNavArea_Unwalkable::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortNavArea_WalkOverWall
// (None)

class UClass* UFortNavArea_WalkOverWall::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortNavArea_WalkOverWall");

	return Clss;
}


// FortNavArea_WalkOverWall FortniteAI.Default__FortNavArea_WalkOverWall
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortNavArea_WalkOverWall* UFortNavArea_WalkOverWall::GetDefaultObj()
{
	static class UFortNavArea_WalkOverWall* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortNavArea_WalkOverWall*>(UFortNavArea_WalkOverWall::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortNavArea_WallCorner
// (None)

class UClass* UFortNavArea_WallCorner::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortNavArea_WallCorner");

	return Clss;
}


// FortNavArea_WallCorner FortniteAI.Default__FortNavArea_WallCorner
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortNavArea_WallCorner* UFortNavArea_WallCorner::GetDefaultObj()
{
	static class UFortNavArea_WallCorner* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortNavArea_WallCorner*>(UFortNavArea_WallCorner::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortNavArea_Zipline
// (None)

class UClass* UFortNavArea_Zipline::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortNavArea_Zipline");

	return Clss;
}


// FortNavArea_Zipline FortniteAI.Default__FortNavArea_Zipline
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortNavArea_Zipline* UFortNavArea_Zipline::GetDefaultObj()
{
	static class UFortNavArea_Zipline* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortNavArea_Zipline*>(UFortNavArea_Zipline::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.AthenaAvoidanceManager
// (None)

class UClass* UAthenaAvoidanceManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaAvoidanceManager");

	return Clss;
}


// AthenaAvoidanceManager FortniteAI.Default__AthenaAvoidanceManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UAthenaAvoidanceManager* UAthenaAvoidanceManager::GetDefaultObj()
{
	static class UAthenaAvoidanceManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaAvoidanceManager*>(UAthenaAvoidanceManager::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.AthenaNavInvokerBox
// (Actor)

class UClass* UAthenaNavInvokerBox::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaNavInvokerBox");

	return Clss;
}


// AthenaNavInvokerBox FortniteAI.Default__AthenaNavInvokerBox
// (Public, ClassDefaultObject, ArchetypeObject)

class UAthenaNavInvokerBox* UAthenaNavInvokerBox::GetDefaultObj()
{
	static class UAthenaNavInvokerBox* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaNavInvokerBox*>(UAthenaNavInvokerBox::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.AthenaNavInvokerBox.SetInvokerEnabled
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bEnable                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaNavInvokerBox::SetInvokerEnabled(bool bEnable)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaNavInvokerBox", "SetInvokerEnabled");

	Params::UAthenaNavInvokerBox_SetInvokerEnabled_Params Parms{};

	Parms.bEnable = bEnable;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FortniteAI.AthenaNavMesh
// (Actor)

class UClass* UAthenaNavMesh::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaNavMesh");

	return Clss;
}


// AthenaNavMesh FortniteAI.Default__AthenaNavMesh
// (Public, ClassDefaultObject, ArchetypeObject)

class UAthenaNavMesh* UAthenaNavMesh::GetDefaultObj()
{
	static class UAthenaNavMesh* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaNavMesh*>(UAthenaNavMesh::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.AthenaNavMesh.MoveTiles
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FBox                        SourceBox                                                        (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// struct FIntPoint                   TileOffset                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              RotationDeg                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector2D                   FillerTilePosition                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaNavMesh::MoveTiles(struct FBox& SourceBox, struct FIntPoint& TileOffset, float RotationDeg, struct FVector2D& FillerTilePosition)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaNavMesh", "MoveTiles");

	Params::UAthenaNavMesh_MoveTiles_Params Parms{};

	Parms.SourceBox = SourceBox;
	Parms.TileOffset = TileOffset;
	Parms.RotationDeg = RotationDeg;
	Parms.FillerTilePosition = FillerTilePosition;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.AthenaNavMesh.ComputeOffsetForMoveTiles
// (Final, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     StartPosition                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     DesiredPosition                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     OutEndPosition                                                   (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FIntPoint                   OutTileOffset                                                    (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaNavMesh::ComputeOffsetForMoveTiles(struct FVector& StartPosition, struct FVector& DesiredPosition, struct FVector* OutEndPosition, struct FIntPoint* OutTileOffset)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaNavMesh", "ComputeOffsetForMoveTiles");

	Params::UAthenaNavMesh_ComputeOffsetForMoveTiles_Params Parms{};

	Parms.StartPosition = StartPosition;
	Parms.DesiredPosition = DesiredPosition;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutEndPosition != nullptr)
		*OutEndPosition = Parms.OutEndPosition;

	if (OutTileOffset != nullptr)
		*OutTileOffset = Parms.OutTileOffset;

}


// Class FortniteAI.AthenaNavMeshRenderingComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UAthenaNavMeshRenderingComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaNavMeshRenderingComponent");

	return Clss;
}


// AthenaNavMeshRenderingComponent FortniteAI.Default__AthenaNavMeshRenderingComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAthenaNavMeshRenderingComponent* UAthenaNavMeshRenderingComponent::GetDefaultObj()
{
	static class UAthenaNavMeshRenderingComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaNavMeshRenderingComponent*>(UAthenaNavMeshRenderingComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.AthenaNavMesh_Big
// (Actor)

class UClass* UAthenaNavMesh_Big::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaNavMesh_Big");

	return Clss;
}


// AthenaNavMesh_Big FortniteAI.Default__AthenaNavMesh_Big
// (Public, ClassDefaultObject, ArchetypeObject)

class UAthenaNavMesh_Big* UAthenaNavMesh_Big::GetDefaultObj()
{
	static class UAthenaNavMesh_Big* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaNavMesh_Big*>(UAthenaNavMesh_Big::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.AthenaNavOctTreeInclusionBounds
// (Actor)

class UClass* UAthenaNavOctTreeInclusionBounds::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaNavOctTreeInclusionBounds");

	return Clss;
}


// AthenaNavOctTreeInclusionBounds FortniteAI.Default__AthenaNavOctTreeInclusionBounds
// (Public, ClassDefaultObject, ArchetypeObject)

class UAthenaNavOctTreeInclusionBounds* UAthenaNavOctTreeInclusionBounds::GetDefaultObj()
{
	static class UAthenaNavOctTreeInclusionBounds* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaNavOctTreeInclusionBounds*>(UAthenaNavOctTreeInclusionBounds::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.AthenaNavPresenceDetectorComponent
// (None)

class UClass* UAthenaNavPresenceDetectorComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaNavPresenceDetectorComponent");

	return Clss;
}


// AthenaNavPresenceDetectorComponent FortniteAI.Default__AthenaNavPresenceDetectorComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAthenaNavPresenceDetectorComponent* UAthenaNavPresenceDetectorComponent::GetDefaultObj()
{
	static class UAthenaNavPresenceDetectorComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaNavPresenceDetectorComponent*>(UAthenaNavPresenceDetectorComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.AthenaNavPresenceDetectorComponent.OnNavMeshTilesUpdated
// (Final, Native, Protected, HasOutParams)
// Parameters:
// struct FUpdatedNavMeshTiles        UpdatedNavMeshTiles                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UAthenaNavPresenceDetectorComponent::OnNavMeshTilesUpdated(struct FUpdatedNavMeshTiles& UpdatedNavMeshTiles)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaNavPresenceDetectorComponent", "OnNavMeshTilesUpdated");

	Params::UAthenaNavPresenceDetectorComponent_OnNavMeshTilesUpdated_Params Parms{};

	Parms.UpdatedNavMeshTiles = UpdatedNavMeshTiles;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.AthenaNavPresenceDetectorComponent.HasValidNavMeshLocation
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAthenaNavPresenceDetectorComponent::HasValidNavMeshLocation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaNavPresenceDetectorComponent", "HasValidNavMeshLocation");

	Params::UAthenaNavPresenceDetectorComponent_HasValidNavMeshLocation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class FortniteAI.AthenaNavRelevantActorInterface
// (None)

class UClass* UAthenaNavRelevantActorInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaNavRelevantActorInterface");

	return Clss;
}


// AthenaNavRelevantActorInterface FortniteAI.Default__AthenaNavRelevantActorInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class UAthenaNavRelevantActorInterface* UAthenaNavRelevantActorInterface::GetDefaultObj()
{
	static class UAthenaNavRelevantActorInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaNavRelevantActorInterface*>(UAthenaNavRelevantActorInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.AthenaNavSystem
// (None)

class UClass* UAthenaNavSystem::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaNavSystem");

	return Clss;
}


// AthenaNavSystem FortniteAI.Default__AthenaNavSystem
// (Public, ClassDefaultObject, ArchetypeObject)

class UAthenaNavSystem* UAthenaNavSystem::GetDefaultObj()
{
	static class UAthenaNavSystem* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaNavSystem*>(UAthenaNavSystem::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.AthenaNavSystem.UnregisterNavGenerationObserver
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USceneComponent*             Component                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaNavSystem::UnregisterNavGenerationObserver(class USceneComponent* Component)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaNavSystem", "UnregisterNavGenerationObserver");

	Params::UAthenaNavSystem_UnregisterNavGenerationObserver_Params Parms{};

	Parms.Component = Component;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.AthenaNavSystem.RegisterNavGenerationObserver
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USceneComponent*             Component                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// FDelegateProperty_                 Event                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaNavSystem::RegisterNavGenerationObserver(class USceneComponent* Component, FDelegateProperty_ Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaNavSystem", "RegisterNavGenerationObserver");

	Params::UAthenaNavSystem_RegisterNavGenerationObserver_Params Parms{};

	Parms.Component = Component;
	Parms.Event = Event;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.AthenaNavSystem.IsInitialNavigationLockActive
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAthenaNavSystem::IsInitialNavigationLockActive(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaNavSystem", "IsInitialNavigationLockActive");

	Params::UAthenaNavSystem_IsInitialNavigationLockActive_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class FortniteAI.AthenaNavSystemConfig
// (None)

class UClass* UAthenaNavSystemConfig::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaNavSystemConfig");

	return Clss;
}


// AthenaNavSystemConfig FortniteAI.Default__AthenaNavSystemConfig
// (Public, ClassDefaultObject, ArchetypeObject)

class UAthenaNavSystemConfig* UAthenaNavSystemConfig::GetDefaultObj()
{
	static class UAthenaNavSystemConfig* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaNavSystemConfig*>(UAthenaNavSystemConfig::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortNavArea_MetaReplacement
// (None)

class UClass* UFortNavArea_MetaReplacement::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortNavArea_MetaReplacement");

	return Clss;
}


// FortNavArea_MetaReplacement FortniteAI.Default__FortNavArea_MetaReplacement
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortNavArea_MetaReplacement* UFortNavArea_MetaReplacement::GetDefaultObj()
{
	static class UFortNavArea_MetaReplacement* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortNavArea_MetaReplacement*>(UFortNavArea_MetaReplacement::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortNavArea_WallCornerReplacement
// (None)

class UClass* UFortNavArea_WallCornerReplacement::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortNavArea_WallCornerReplacement");

	return Clss;
}


// FortNavArea_WallCornerReplacement FortniteAI.Default__FortNavArea_WallCornerReplacement
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortNavArea_WallCornerReplacement* UFortNavArea_WallCornerReplacement::GetDefaultObj()
{
	static class UFortNavArea_WallCornerReplacement* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortNavArea_WallCornerReplacement*>(UFortNavArea_WallCornerReplacement::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortNavArea_ObstacleReplacement
// (None)

class UClass* UFortNavArea_ObstacleReplacement::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortNavArea_ObstacleReplacement");

	return Clss;
}


// FortNavArea_ObstacleReplacement FortniteAI.Default__FortNavArea_ObstacleReplacement
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortNavArea_ObstacleReplacement* UFortNavArea_ObstacleReplacement::GetDefaultObj()
{
	static class UFortNavArea_ObstacleReplacement* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortNavArea_ObstacleReplacement*>(UFortNavArea_ObstacleReplacement::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortNavArea_TempWallReplacement
// (None)

class UClass* UFortNavArea_TempWallReplacement::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortNavArea_TempWallReplacement");

	return Clss;
}


// FortNavArea_TempWallReplacement FortniteAI.Default__FortNavArea_TempWallReplacement
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortNavArea_TempWallReplacement* UFortNavArea_TempWallReplacement::GetDefaultObj()
{
	static class UFortNavArea_TempWallReplacement* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortNavArea_TempWallReplacement*>(UFortNavArea_TempWallReplacement::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.EdgeNavLinks
// (Actor)

class UClass* UEdgeNavLinks::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EdgeNavLinks");

	return Clss;
}


// EdgeNavLinks FortniteAI.Default__EdgeNavLinks
// (Public, ClassDefaultObject, ArchetypeObject)

class UEdgeNavLinks* UEdgeNavLinks::GetDefaultObj()
{
	static class UEdgeNavLinks* Default = nullptr;

	if (!Default)
		Default = static_cast<UEdgeNavLinks*>(UEdgeNavLinks::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.EdgeNavLinksRenderingComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UEdgeNavLinksRenderingComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("EdgeNavLinksRenderingComponent");

	return Clss;
}


// EdgeNavLinksRenderingComponent FortniteAI.Default__EdgeNavLinksRenderingComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UEdgeNavLinksRenderingComponent* UEdgeNavLinksRenderingComponent::GetDefaultObj()
{
	static class UEdgeNavLinksRenderingComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UEdgeNavLinksRenderingComponent*>(UEdgeNavLinksRenderingComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortCustomNavLinkGlobalProxy
// (None)

class UClass* UFortCustomNavLinkGlobalProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortCustomNavLinkGlobalProxy");

	return Clss;
}


// FortCustomNavLinkGlobalProxy FortniteAI.Default__FortCustomNavLinkGlobalProxy
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortCustomNavLinkGlobalProxy* UFortCustomNavLinkGlobalProxy::GetDefaultObj()
{
	static class UFortCustomNavLinkGlobalProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortCustomNavLinkGlobalProxy*>(UFortCustomNavLinkGlobalProxy::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortClamberLinkGlobalProxy
// (None)

class UClass* UFortClamberLinkGlobalProxy::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortClamberLinkGlobalProxy");

	return Clss;
}


// FortClamberLinkGlobalProxy FortniteAI.Default__FortClamberLinkGlobalProxy
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortClamberLinkGlobalProxy* UFortClamberLinkGlobalProxy::GetDefaultObj()
{
	static class UFortClamberLinkGlobalProxy* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortClamberLinkGlobalProxy*>(UFortClamberLinkGlobalProxy::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortDoorLinkComponent
// (None)

class UClass* UFortDoorLinkComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortDoorLinkComponent");

	return Clss;
}


// FortDoorLinkComponent FortniteAI.Default__FortDoorLinkComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortDoorLinkComponent* UFortDoorLinkComponent::GetDefaultObj()
{
	static class UFortDoorLinkComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortDoorLinkComponent*>(UFortDoorLinkComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortNavigationMetaFilter
// (None)

class UClass* UFortNavigationMetaFilter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortNavigationMetaFilter");

	return Clss;
}


// FortNavigationMetaFilter FortniteAI.Default__FortNavigationMetaFilter
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortNavigationMetaFilter* UFortNavigationMetaFilter::GetDefaultObj()
{
	static class UFortNavigationMetaFilter* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortNavigationMetaFilter*>(UFortNavigationMetaFilter::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortNavigationFilter_Hunting
// (None)

class UClass* UFortNavigationFilter_Hunting::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortNavigationFilter_Hunting");

	return Clss;
}


// FortNavigationFilter_Hunting FortniteAI.Default__FortNavigationFilter_Hunting
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortNavigationFilter_Hunting* UFortNavigationFilter_Hunting::GetDefaultObj()
{
	static class UFortNavigationFilter_Hunting* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortNavigationFilter_Hunting*>(UFortNavigationFilter_Hunting::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortNavigationFilter_IgnoreSmashingCost
// (None)

class UClass* UFortNavigationFilter_IgnoreSmashingCost::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortNavigationFilter_IgnoreSmashingCost");

	return Clss;
}


// FortNavigationFilter_IgnoreSmashingCost FortniteAI.Default__FortNavigationFilter_IgnoreSmashingCost
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortNavigationFilter_IgnoreSmashingCost* UFortNavigationFilter_IgnoreSmashingCost::GetDefaultObj()
{
	static class UFortNavigationFilter_IgnoreSmashingCost* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortNavigationFilter_IgnoreSmashingCost*>(UFortNavigationFilter_IgnoreSmashingCost::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortNavigationFilter_Leash
// (None)

class UClass* UFortNavigationFilter_Leash::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortNavigationFilter_Leash");

	return Clss;
}


// FortNavigationFilter_Leash FortniteAI.Default__FortNavigationFilter_Leash
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortNavigationFilter_Leash* UFortNavigationFilter_Leash::GetDefaultObj()
{
	static class UFortNavigationFilter_Leash* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortNavigationFilter_Leash*>(UFortNavigationFilter_Leash::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortNavigationFilter_NoSmashing
// (None)

class UClass* UFortNavigationFilter_NoSmashing::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortNavigationFilter_NoSmashing");

	return Clss;
}


// FortNavigationFilter_NoSmashing FortniteAI.Default__FortNavigationFilter_NoSmashing
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortNavigationFilter_NoSmashing* UFortNavigationFilter_NoSmashing::GetDefaultObj()
{
	static class UFortNavigationFilter_NoSmashing* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortNavigationFilter_NoSmashing*>(UFortNavigationFilter_NoSmashing::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortNavigationFilter_NoSmashingIncludeLow
// (None)

class UClass* UFortNavigationFilter_NoSmashingIncludeLow::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortNavigationFilter_NoSmashingIncludeLow");

	return Clss;
}


// FortNavigationFilter_NoSmashingIncludeLow FortniteAI.Default__FortNavigationFilter_NoSmashingIncludeLow
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortNavigationFilter_NoSmashingIncludeLow* UFortNavigationFilter_NoSmashingIncludeLow::GetDefaultObj()
{
	static class UFortNavigationFilter_NoSmashingIncludeLow* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortNavigationFilter_NoSmashingIncludeLow*>(UFortNavigationFilter_NoSmashingIncludeLow::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortNavigationFilter_TetherZone
// (None)

class UClass* UFortNavigationFilter_TetherZone::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortNavigationFilter_TetherZone");

	return Clss;
}


// FortNavigationFilter_TetherZone FortniteAI.Default__FortNavigationFilter_TetherZone
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortNavigationFilter_TetherZone* UFortNavigationFilter_TetherZone::GetDefaultObj()
{
	static class UFortNavigationFilter_TetherZone* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortNavigationFilter_TetherZone*>(UFortNavigationFilter_TetherZone::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortNavigationGraph
// (Actor)

class UClass* UFortNavigationGraph::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortNavigationGraph");

	return Clss;
}


// FortNavigationGraph FortniteAI.Default__FortNavigationGraph
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortNavigationGraph* UFortNavigationGraph::GetDefaultObj()
{
	static class UFortNavigationGraph* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortNavigationGraph*>(UFortNavigationGraph::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortNavModifierVolume
// (Actor)

class UClass* UFortNavModifierVolume::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortNavModifierVolume");

	return Clss;
}


// FortNavModifierVolume FortniteAI.Default__FortNavModifierVolume
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortNavModifierVolume* UFortNavModifierVolume::GetDefaultObj()
{
	static class UFortNavModifierVolume* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortNavModifierVolume*>(UFortNavModifierVolume::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortNavPathRendererInfoInterface
// (None)

class UClass* UFortNavPathRendererInfoInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortNavPathRendererInfoInterface");

	return Clss;
}


// FortNavPathRendererInfoInterface FortniteAI.Default__FortNavPathRendererInfoInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortNavPathRendererInfoInterface* UFortNavPathRendererInfoInterface::GetDefaultObj()
{
	static class UFortNavPathRendererInfoInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortNavPathRendererInfoInterface*>(UFortNavPathRendererInfoInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortNavPathRendererComponent
// (None)

class UClass* UFortNavPathRendererComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortNavPathRendererComponent");

	return Clss;
}


// FortNavPathRendererComponent FortniteAI.Default__FortNavPathRendererComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortNavPathRendererComponent* UFortNavPathRendererComponent::GetDefaultObj()
{
	static class UFortNavPathRendererComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortNavPathRendererComponent*>(UFortNavPathRendererComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.FortNavPathRendererComponent.UpdatePathsVisualOnClient
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:

void UFortNavPathRendererComponent::UpdatePathsVisualOnClient()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNavPathRendererComponent", "UpdatePathsVisualOnClient");

	Params::UFortNavPathRendererComponent_UpdatePathsVisualOnClient_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortNavPathRendererComponent.OnRep_PathPointsUpdated
// (Final, Native, Private)
// Parameters:

void UFortNavPathRendererComponent::OnRep_PathPointsUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNavPathRendererComponent", "OnRep_PathPointsUpdated");

	Params::UFortNavPathRendererComponent_OnRep_PathPointsUpdated_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortNavPathRendererComponent.OnRep_PathModeUpdated
// (Final, Native, Private)
// Parameters:

void UFortNavPathRendererComponent::OnRep_PathModeUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNavPathRendererComponent", "OnRep_PathModeUpdated");

	Params::UFortNavPathRendererComponent_OnRep_PathModeUpdated_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortNavPathRendererComponent.OnRep_ColorIndexUpdated
// (Final, Native, Private)
// Parameters:

void UFortNavPathRendererComponent::OnRep_ColorIndexUpdated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNavPathRendererComponent", "OnRep_ColorIndexUpdated");

	Params::UFortNavPathRendererComponent_OnRep_ColorIndexUpdated_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortNavPathRendererComponent.DeactivateFX
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:

void UFortNavPathRendererComponent::DeactivateFX()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortNavPathRendererComponent", "DeactivateFX");

	Params::UFortNavPathRendererComponent_DeactivateFX_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FortniteAI.FortZiplineLinkComponent
// (None)

class UClass* UFortZiplineLinkComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortZiplineLinkComponent");

	return Clss;
}


// FortZiplineLinkComponent FortniteAI.Default__FortZiplineLinkComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortZiplineLinkComponent* UFortZiplineLinkComponent::GetDefaultObj()
{
	static class UFortZiplineLinkComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortZiplineLinkComponent*>(UFortZiplineLinkComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.FortZiplineLinkComponent.OnZiplineStateChanged
// (Final, Native, Protected)
// Parameters:
// bool                               bIsZiplining                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPlayerPawn*             FortPlayerPawn                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortZiplineLinkComponent::OnZiplineStateChanged(bool bIsZiplining, class UFortPlayerPawn* FortPlayerPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortZiplineLinkComponent", "OnZiplineStateChanged");

	Params::UFortZiplineLinkComponent_OnZiplineStateChanged_Params Parms{};

	Parms.bIsZiplining = bIsZiplining;
	Parms.FortPlayerPawn = FortPlayerPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FortniteAI.JLargeNavMesh
// (Actor)

class UClass* UJLargeNavMesh::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("JLargeNavMesh");

	return Clss;
}


// JLargeNavMesh FortniteAI.Default__JLargeNavMesh
// (Public, ClassDefaultObject, ArchetypeObject)

class UJLargeNavMesh* UJLargeNavMesh::GetDefaultObj()
{
	static class UJLargeNavMesh* Default = nullptr;

	if (!Default)
		Default = static_cast<UJLargeNavMesh*>(UJLargeNavMesh::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.JMediumNavMesh
// (Actor)

class UClass* UJMediumNavMesh::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("JMediumNavMesh");

	return Clss;
}


// JMediumNavMesh FortniteAI.Default__JMediumNavMesh
// (Public, ClassDefaultObject, ArchetypeObject)

class UJMediumNavMesh* UJMediumNavMesh::GetDefaultObj()
{
	static class UJMediumNavMesh* Default = nullptr;

	if (!Default)
		Default = static_cast<UJMediumNavMesh*>(UJMediumNavMesh::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.JSmallNavMesh
// (Actor)

class UClass* UJSmallNavMesh::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("JSmallNavMesh");

	return Clss;
}


// JSmallNavMesh FortniteAI.Default__JSmallNavMesh
// (Public, ClassDefaultObject, ArchetypeObject)

class UJSmallNavMesh* UJSmallNavMesh::GetDefaultObj()
{
	static class UJSmallNavMesh* Default = nullptr;

	if (!Default)
		Default = static_cast<UJSmallNavMesh*>(UJSmallNavMesh::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortInescapableZoneTracker
// (None)

class UClass* UFortInescapableZoneTracker::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortInescapableZoneTracker");

	return Clss;
}


// FortInescapableZoneTracker FortniteAI.Default__FortInescapableZoneTracker
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortInescapableZoneTracker* UFortInescapableZoneTracker::GetDefaultObj()
{
	static class UFortInescapableZoneTracker* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortInescapableZoneTracker*>(UFortInescapableZoneTracker::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortPathCostEstimator
// (None)

class UClass* UFortPathCostEstimator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortPathCostEstimator");

	return Clss;
}


// FortPathCostEstimator FortniteAI.Default__FortPathCostEstimator
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortPathCostEstimator* UFortPathCostEstimator::GetDefaultObj()
{
	static class UFortPathCostEstimator* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortPathCostEstimator*>(UFortPathCostEstimator::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.NavGraphDebugActor
// (Actor)

class UClass* UNavGraphDebugActor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("NavGraphDebugActor");

	return Clss;
}


// NavGraphDebugActor FortniteAI.Default__NavGraphDebugActor
// (Public, ClassDefaultObject, ArchetypeObject)

class UNavGraphDebugActor* UNavGraphDebugActor::GetDefaultObj()
{
	static class UNavGraphDebugActor* Default = nullptr;

	if (!Default)
		Default = static_cast<UNavGraphDebugActor*>(UNavGraphDebugActor::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.AthenaAISense_Hearing
// (None)

class UClass* UAthenaAISense_Hearing::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaAISense_Hearing");

	return Clss;
}


// AthenaAISense_Hearing FortniteAI.Default__AthenaAISense_Hearing
// (Public, ClassDefaultObject, ArchetypeObject)

class UAthenaAISense_Hearing* UAthenaAISense_Hearing::GetDefaultObj()
{
	static class UAthenaAISense_Hearing* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaAISense_Hearing*>(UAthenaAISense_Hearing::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAIControllerPerksComponent
// (None)

class UClass* UFortAIControllerPerksComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAIControllerPerksComponent");

	return Clss;
}


// FortAIControllerPerksComponent FortniteAI.Default__FortAIControllerPerksComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAIControllerPerksComponent* UFortAIControllerPerksComponent::GetDefaultObj()
{
	static class UFortAIControllerPerksComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAIControllerPerksComponent*>(UFortAIControllerPerksComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAIPerkBase
// (None)

class UClass* UFortAIPerkBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAIPerkBase");

	return Clss;
}


// FortAIPerkBase FortniteAI.Default__FortAIPerkBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAIPerkBase* UFortAIPerkBase::GetDefaultObj()
{
	static class UFortAIPerkBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAIPerkBase*>(UFortAIPerkBase::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.AITask_ExecuteAbility
// (None)

class UClass* UAITask_ExecuteAbility::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AITask_ExecuteAbility");

	return Clss;
}


// AITask_ExecuteAbility FortniteAI.Default__AITask_ExecuteAbility
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UAITask_ExecuteAbility* UAITask_ExecuteAbility::GetDefaultObj()
{
	static class UAITask_ExecuteAbility* Default = nullptr;

	if (!Default)
		Default = static_cast<UAITask_ExecuteAbility*>(UAITask_ExecuteAbility::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAITask_AdjustToSlot
// (None)

class UClass* UFortAITask_AdjustToSlot::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAITask_AdjustToSlot");

	return Clss;
}


// FortAITask_AdjustToSlot FortniteAI.Default__FortAITask_AdjustToSlot
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UFortAITask_AdjustToSlot* UFortAITask_AdjustToSlot::GetDefaultObj()
{
	static class UFortAITask_AdjustToSlot* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAITask_AdjustToSlot*>(UFortAITask_AdjustToSlot::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAITask_ExecuteAbility
// (None)

class UClass* UFortAITask_ExecuteAbility::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAITask_ExecuteAbility");

	return Clss;
}


// FortAITask_ExecuteAbility FortniteAI.Default__FortAITask_ExecuteAbility
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UFortAITask_ExecuteAbility* UFortAITask_ExecuteAbility::GetDefaultObj()
{
	static class UFortAITask_ExecuteAbility* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAITask_ExecuteAbility*>(UFortAITask_ExecuteAbility::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.FortAITask_ExecuteAbility.OnInjectedHitResultDied
// (Final, Native, Protected, HasDefaults)
// Parameters:
// class UActor*                      DamagedActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UController*                 InstigatedBy                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      DamageCauser                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     HitLocation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         FHitComponent                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        BoneName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Momentum                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAITask_ExecuteAbility::OnInjectedHitResultDied(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAITask_ExecuteAbility", "OnInjectedHitResultDied");

	Params::UFortAITask_ExecuteAbility_OnInjectedHitResultDied_Params Parms{};

	Parms.DamagedActor = DamagedActor;
	Parms.Damage = Damage;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.HitLocation = HitLocation;
	Parms.FHitComponent = FHitComponent;
	Parms.BoneName = BoneName;
	Parms.Momentum = Momentum;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FortniteAI.FortAITask_FuzzyQueue
// (None)

class UClass* UFortAITask_FuzzyQueue::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAITask_FuzzyQueue");

	return Clss;
}


// FortAITask_FuzzyQueue FortniteAI.Default__FortAITask_FuzzyQueue
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UFortAITask_FuzzyQueue* UFortAITask_FuzzyQueue::GetDefaultObj()
{
	static class UFortAITask_FuzzyQueue* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAITask_FuzzyQueue*>(UFortAITask_FuzzyQueue::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAITask_MoveTo
// (None)

class UClass* UFortAITask_MoveTo::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAITask_MoveTo");

	return Clss;
}


// FortAITask_MoveTo FortniteAI.Default__FortAITask_MoveTo
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UFortAITask_MoveTo* UFortAITask_MoveTo::GetDefaultObj()
{
	static class UFortAITask_MoveTo* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAITask_MoveTo*>(UFortAITask_MoveTo::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAITask_NavmeshWait
// (None)

class UClass* UFortAITask_NavmeshWait::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAITask_NavmeshWait");

	return Clss;
}


// FortAITask_NavmeshWait FortniteAI.Default__FortAITask_NavmeshWait
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UFortAITask_NavmeshWait* UFortAITask_NavmeshWait::GetDefaultObj()
{
	static class UFortAITask_NavmeshWait* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAITask_NavmeshWait*>(UFortAITask_NavmeshWait::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAITask_RotateToFace
// (None)

class UClass* UFortAITask_RotateToFace::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAITask_RotateToFace");

	return Clss;
}


// FortAITask_RotateToFace FortniteAI.Default__FortAITask_RotateToFace
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UFortAITask_RotateToFace* UFortAITask_RotateToFace::GetDefaultObj()
{
	static class UFortAITask_RotateToFace* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAITask_RotateToFace*>(UFortAITask_RotateToFace::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAITask_StepAside
// (None)

class UClass* UFortAITask_StepAside::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAITask_StepAside");

	return Clss;
}


// FortAITask_StepAside FortniteAI.Default__FortAITask_StepAside
// (Public, ClassDefaultObject, ArchetypeObject, StrongRefOnFrame)

class UFortAITask_StepAside* UFortAITask_StepAside::GetDefaultObj()
{
	static class UFortAITask_StepAside* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAITask_StepAside*>(UFortAITask_StepAside::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAICloudVortex
// (Actor)

class UClass* UFortAICloudVortex::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAICloudVortex");

	return Clss;
}


// FortAICloudVortex FortniteAI.Default__FortAICloudVortex
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAICloudVortex* UFortAICloudVortex::GetDefaultObj()
{
	static class UFortAICloudVortex* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAICloudVortex*>(UFortAICloudVortex::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.FortAICloudVortex.CalculateTwisterWiggle
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// double                             TickDelta                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAICloudVortex::CalculateTwisterWiggle(double TickDelta)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAICloudVortex", "CalculateTwisterWiggle");

	Params::UFortAICloudVortex_CalculateTwisterWiggle_Params Parms{};

	Parms.TickDelta = TickDelta;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FortniteAI.ThreatCloud
// (Actor)

class UClass* UThreatCloud::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ThreatCloud");

	return Clss;
}


// ThreatCloud FortniteAI.Default__ThreatCloud
// (Public, ClassDefaultObject, ArchetypeObject)

class UThreatCloud* UThreatCloud::GetDefaultObj()
{
	static class UThreatCloud* Default = nullptr;

	if (!Default)
		Default = static_cast<UThreatCloud*>(UThreatCloud::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.ThreatCloud.OnThreatVolumeChanged
// (Event, Public, BlueprintEvent)
// Parameters:

void UThreatCloud::OnThreatVolumeChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ThreatCloud", "OnThreatVolumeChanged");

	Params::UThreatCloud_OnThreatVolumeChanged_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteAI.ThreatCloud.OnLightningStrike
// (BlueprintCosmetic, Event, Public, HasOutParams, HasDefaults, BlueprintEvent)
// Parameters:
// struct FVector                     StartLocation                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     EndLocation                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UBuildingRift*               Rift                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bLightningStruckRift                                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UThreatCloud::OnLightningStrike(struct FVector& StartLocation, struct FVector& EndLocation, class UBuildingRift* Rift, bool bLightningStruckRift)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ThreatCloud", "OnLightningStrike");

	Params::UThreatCloud_OnLightningStrike_Params Parms{};

	Parms.StartLocation = StartLocation;
	Parms.EndLocation = EndLocation;
	Parms.Rift = Rift;
	Parms.bLightningStruckRift = bLightningStruckRift;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteAI.ThreatCloud.OnCloudStart
// (Event, Public, BlueprintEvent)
// Parameters:

void UThreatCloud::OnCloudStart()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ThreatCloud", "OnCloudStart");

	Params::UThreatCloud_OnCloudStart_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteAI.ThreatCloud.OnCloudHiddenChange
// (Event, Public, BlueprintEvent)
// Parameters:
// bool                               bCloudsAreHidden                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UThreatCloud::OnCloudHiddenChange(bool bCloudsAreHidden)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ThreatCloud", "OnCloudHiddenChange");

	Params::UThreatCloud_OnCloudHiddenChange_Params Parms{};

	Parms.bCloudsAreHidden = bCloudsAreHidden;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteAI.ThreatCloud.OnCloudDeactivated
// (Event, Public, BlueprintEvent)
// Parameters:
// enum class EFortThreatDeactivationTypeDeactivationType                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UThreatCloud::OnCloudDeactivated(enum class EFortThreatDeactivationType DeactivationType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ThreatCloud", "OnCloudDeactivated");

	Params::UThreatCloud_OnCloudDeactivated_Params Parms{};

	Parms.DeactivationType = DeactivationType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteAI.ThreatCloud.OnCloudActivated
// (Event, Public, BlueprintEvent)
// Parameters:

void UThreatCloud::OnCloudActivated()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ThreatCloud", "OnCloudActivated");

	Params::UThreatCloud_OnCloudActivated_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteAI.ThreatCloud.OnBeginDeath
// (Event, Protected, BlueprintEvent)
// Parameters:

void UThreatCloud::OnBeginDeath()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ThreatCloud", "OnBeginDeath");

	Params::UThreatCloud_OnBeginDeath_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteAI.ThreatCloud.ManualLightningFlash
// (RequiredAPI, Event, Public, BlueprintEvent)
// Parameters:

void UThreatCloud::ManualLightningFlash()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ThreatCloud", "ManualLightningFlash");

	Params::UThreatCloud_ManualLightningFlash_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteAI.ThreatCloud.GetThreatVolume
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FBox                        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

struct FBox UThreatCloud::GetThreatVolume()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ThreatCloud", "GetThreatVolume");

	Params::UThreatCloud_GetThreatVolume_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class FortniteAI.AthenaAIBlueprintLibrary
// (None)

class UClass* UAthenaAIBlueprintLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaAIBlueprintLibrary");

	return Clss;
}


// AthenaAIBlueprintLibrary FortniteAI.Default__AthenaAIBlueprintLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UAthenaAIBlueprintLibrary* UAthenaAIBlueprintLibrary::GetDefaultObj()
{
	static class UAthenaAIBlueprintLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaAIBlueprintLibrary*>(UAthenaAIBlueprintLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.AthenaAIBlueprintLibrary.MakeBotGroupsTakeEachOtherAsTargets
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class UActor*>              GroupA                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<class UActor*>              GroupB                                                           (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// enum class EPerceptionState        PerceptionState                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ForgetTime                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              ForgetDistance                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaAIBlueprintLibrary::MakeBotGroupsTakeEachOtherAsTargets(TArray<class UActor*>& GroupA, TArray<class UActor*>& GroupB, enum class EPerceptionState PerceptionState, float ForgetTime, float ForgetDistance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaAIBlueprintLibrary", "MakeBotGroupsTakeEachOtherAsTargets");

	Params::UAthenaAIBlueprintLibrary_MakeBotGroupsTakeEachOtherAsTargets_Params Parms{};

	Parms.GroupA = GroupA;
	Parms.GroupB = GroupB;
	Parms.PerceptionState = PerceptionState;
	Parms.ForgetTime = ForgetTime;
	Parms.ForgetDistance = ForgetDistance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.AthenaAIBlueprintLibrary.KillBots
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bKillPlayers                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bKillNoneParticipants                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              TeamIndex                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      BotOwner                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaAIBlueprintLibrary::KillBots(class UObject* WorldContextObject, bool bKillPlayers, bool bKillNoneParticipants, uint8 TeamIndex, class UActor* BotOwner)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaAIBlueprintLibrary", "KillBots");

	Params::UAthenaAIBlueprintLibrary_KillBots_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.bKillPlayers = bKillPlayers;
	Parms.bKillNoneParticipants = bKillNoneParticipants;
	Parms.TeamIndex = TeamIndex;
	Parms.BotOwner = BotOwner;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.AthenaAIBlueprintLibrary.JoinTeam
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UController*                 SourceTeamController                                             (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UController*                 DestinationTeamController                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaAIBlueprintLibrary::JoinTeam(class UObject* WorldContextObject, class UController* SourceTeamController, class UController* DestinationTeamController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaAIBlueprintLibrary", "JoinTeam");

	Params::UAthenaAIBlueprintLibrary_JoinTeam_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.SourceTeamController = SourceTeamController;
	Parms.DestinationTeamController = DestinationTeamController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.AthenaAIBlueprintLibrary.IsWeaponSupported
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortWeapon*                 FortWeapon                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAthenaAIBlueprintLibrary::IsWeaponSupported(class UObject* WorldContextObject, class UFortWeapon* FortWeapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaAIBlueprintLibrary", "IsWeaponSupported");

	Params::UAthenaAIBlueprintLibrary_IsWeaponSupported_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.FortWeapon = FortWeapon;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.AthenaAIBlueprintLibrary.IsItemDefinitionSupported
// (Final, RequiredAPI, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortItemDefinition*         FortItemDef                                                      (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAthenaAIBlueprintLibrary::IsItemDefinitionSupported(class UObject* WorldContextObject, class UFortItemDefinition* FortItemDef)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaAIBlueprintLibrary", "IsItemDefinitionSupported");

	Params::UAthenaAIBlueprintLibrary_IsItemDefinitionSupported_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.FortItemDef = FortItemDef;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.AthenaAIBlueprintLibrary.GetAIServicePlayerBots
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAthenaAIServicePlayerBots*  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAthenaAIServicePlayerBots* UAthenaAIBlueprintLibrary::GetAIServicePlayerBots(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaAIBlueprintLibrary", "GetAIServicePlayerBots");

	Params::UAthenaAIBlueprintLibrary_GetAIServicePlayerBots_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.AthenaAIBlueprintLibrary.GetAIServiceLoot
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAthenaAIServiceLoot*        ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAthenaAIServiceLoot* UAthenaAIBlueprintLibrary::GetAIServiceLoot(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaAIBlueprintLibrary", "GetAIServiceLoot");

	Params::UAthenaAIBlueprintLibrary_GetAIServiceLoot_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.AthenaAIBlueprintLibrary.GetAIServiceCreativePlayerBots
// (Final, RequiredAPI, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAthenaAIServiceCreativePlayerBots*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAthenaAIServiceCreativePlayerBots* UAthenaAIBlueprintLibrary::GetAIServiceCreativePlayerBots(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaAIBlueprintLibrary", "GetAIServiceCreativePlayerBots");

	Params::UAthenaAIBlueprintLibrary_GetAIServiceCreativePlayerBots_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.AthenaAIBlueprintLibrary.GetAIPopulationTracker
// (Final, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAthenaAIPopulationTracker*  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAthenaAIPopulationTracker* UAthenaAIBlueprintLibrary::GetAIPopulationTracker(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaAIBlueprintLibrary", "GetAIPopulationTracker");

	Params::UAthenaAIBlueprintLibrary_GetAIPopulationTracker_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.AthenaAIBlueprintLibrary.AthenaSpawnAIFromClass
// (Final, Native, Static, Public, HasDefaults, BlueprintCallable)
// Parameters:
// class UObject*                     WorldContextObject                                               (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UPawn>           PawnClass                                                        (Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UBehaviorTree*               BehaviorTree                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Location                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    Rotation                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// bool                               bNoCollisionFail                                                 (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      Owner                                                            (Parm, ZeroConstructor, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPawn*                       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPawn* UAthenaAIBlueprintLibrary::AthenaSpawnAIFromClass(class UObject* WorldContextObject, TSubclassOf<class UPawn> PawnClass, class UBehaviorTree* BehaviorTree, const struct FVector& Location, const struct FRotator& Rotation, bool bNoCollisionFail, class UActor* Owner)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaAIBlueprintLibrary", "AthenaSpawnAIFromClass");

	Params::UAthenaAIBlueprintLibrary_AthenaSpawnAIFromClass_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;
	Parms.PawnClass = PawnClass;
	Parms.BehaviorTree = BehaviorTree;
	Parms.Location = Location;
	Parms.Rotation = Rotation;
	Parms.bNoCollisionFail = bNoCollisionFail;
	Parms.Owner = Owner;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.AthenaAIBlueprintLibrary.AIPawnFromGAHasLuringPickupAsGoal
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayAbilityActorInfo   ActorInfo                                                        (ConstParm, Parm, OutParm, ReferenceParm, ContainsInstancedReference, NativeAccessSpecifierPublic)
// struct FGameplayTag                GameplayTag                                                      (ConstParm, Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              MaxLifetime                                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EFortPickupSpawnSource  RequiredPickupSpawnSource                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAthenaAIBlueprintLibrary::AIPawnFromGAHasLuringPickupAsGoal(struct FGameplayAbilityActorInfo& ActorInfo, const struct FGameplayTag& GameplayTag, float MaxLifetime, enum class EFortPickupSpawnSource RequiredPickupSpawnSource)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaAIBlueprintLibrary", "AIPawnFromGAHasLuringPickupAsGoal");

	Params::UAthenaAIBlueprintLibrary_AIPawnFromGAHasLuringPickupAsGoal_Params Parms{};

	Parms.ActorInfo = ActorInfo;
	Parms.GameplayTag = GameplayTag;
	Parms.MaxLifetime = MaxLifetime;
	Parms.RequiredPickupSpawnSource = RequiredPickupSpawnSource;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class FortniteAI.FortAICombatTokenConsumerComponent
// (None)

class UClass* UFortAICombatTokenConsumerComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAICombatTokenConsumerComponent");

	return Clss;
}


// FortAICombatTokenConsumerComponent FortniteAI.Default__FortAICombatTokenConsumerComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAICombatTokenConsumerComponent* UFortAICombatTokenConsumerComponent::GetDefaultObj()
{
	static class UFortAICombatTokenConsumerComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAICombatTokenConsumerComponent*>(UFortAICombatTokenConsumerComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAICombatTokenProviderComponent
// (None)

class UClass* UFortAICombatTokenProviderComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAICombatTokenProviderComponent");

	return Clss;
}


// FortAICombatTokenProviderComponent FortniteAI.Default__FortAICombatTokenProviderComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAICombatTokenProviderComponent* UFortAICombatTokenProviderComponent::GetDefaultObj()
{
	static class UFortAICombatTokenProviderComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAICombatTokenProviderComponent*>(UFortAICombatTokenProviderComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAIBotBuildingComponent
// (None)

class UClass* UFortAthenaAIBotBuildingComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotBuildingComponent");

	return Clss;
}


// FortAthenaAIBotBuildingComponent FortniteAI.Default__FortAthenaAIBotBuildingComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotBuildingComponent* UFortAthenaAIBotBuildingComponent::GetDefaultObj()
{
	static class UFortAthenaAIBotBuildingComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotBuildingComponent*>(UFortAthenaAIBotBuildingComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAlertStateComponent
// (None)

class UClass* UFortAthenaAlertStateComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAlertStateComponent");

	return Clss;
}


// FortAthenaAlertStateComponent FortniteAI.Default__FortAthenaAlertStateComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAlertStateComponent* UFortAthenaAlertStateComponent::GetDefaultObj()
{
	static class UFortAthenaAlertStateComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAlertStateComponent*>(UFortAthenaAlertStateComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.FortAthenaAlertStateComponent.SetStealthMeterTargetTime
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InStealthMeterTargetTime                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAlertStateComponent::SetStealthMeterTargetTime(float InStealthMeterTargetTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAlertStateComponent", "SetStealthMeterTargetTime");

	Params::UFortAthenaAlertStateComponent_SetStealthMeterTargetTime_Params Parms{};

	Parms.InStealthMeterTargetTime = InStealthMeterTargetTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAthenaAlertStateComponent.SetStealthMeterTarget
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InStealthMeterTarget                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAlertStateComponent::SetStealthMeterTarget(float InStealthMeterTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAlertStateComponent", "SetStealthMeterTarget");

	Params::UFortAthenaAlertStateComponent_SetStealthMeterTarget_Params Parms{};

	Parms.InStealthMeterTarget = InStealthMeterTarget;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAthenaAlertStateComponent.OnStealthMeterChanged
// (Final, Native, Public)
// Parameters:
// class UFortAthenaAIBotController*  BotController                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              StealthMeterTarget                                               (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              StealthMeterTargetTime                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAlertStateComponent::OnStealthMeterChanged(class UFortAthenaAIBotController* BotController, float StealthMeterTarget, float StealthMeterTargetTime)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAlertStateComponent", "OnStealthMeterChanged");

	Params::UFortAthenaAlertStateComponent_OnStealthMeterChanged_Params Parms{};

	Parms.BotController = BotController;
	Parms.StealthMeterTarget = StealthMeterTarget;
	Parms.StealthMeterTargetTime = StealthMeterTargetTime;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAthenaAlertStateComponent.GetStealthMeterTargetTime
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortAthenaAlertStateComponent::GetStealthMeterTargetTime()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAlertStateComponent", "GetStealthMeterTargetTime");

	Params::UFortAthenaAlertStateComponent_GetStealthMeterTargetTime_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAlertStateComponent.GetStealthMeterTarget
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortAthenaAlertStateComponent::GetStealthMeterTarget()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAlertStateComponent", "GetStealthMeterTarget");

	Params::UFortAthenaAlertStateComponent_GetStealthMeterTarget_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class FortniteAI.FortAthenaNPCLoopStateComponent
// (None)

class UClass* UFortAthenaNPCLoopStateComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaNPCLoopStateComponent");

	return Clss;
}


// FortAthenaNPCLoopStateComponent FortniteAI.Default__FortAthenaNPCLoopStateComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaNPCLoopStateComponent* UFortAthenaNPCLoopStateComponent::GetDefaultObj()
{
	static class UFortAthenaNPCLoopStateComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaNPCLoopStateComponent*>(UFortAthenaNPCLoopStateComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.FortAthenaNPCLoopStateComponent.OnOwnerPawnDied
// (Final, Native, Protected, HasDefaults)
// Parameters:
// class UActor*                      DamagedActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UController*                 InstigatedBy                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      DamageCauser                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     HitLocation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         FHitComponent                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        BoneName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Momentum                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaNPCLoopStateComponent::OnOwnerPawnDied(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaNPCLoopStateComponent", "OnOwnerPawnDied");

	Params::UFortAthenaNPCLoopStateComponent_OnOwnerPawnDied_Params Parms{};

	Parms.DamagedActor = DamagedActor;
	Parms.Damage = Damage;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.HitLocation = HitLocation;
	Parms.FHitComponent = FHitComponent;
	Parms.BoneName = BoneName;
	Parms.Momentum = Momentum;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAthenaNPCLoopStateComponent.InitLoopState
// (Event, Protected, BlueprintEvent)
// Parameters:
// class UFortPawn*                   PawnOwner                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaNPCLoopStateComponent::InitLoopState(class UFortPawn* PawnOwner)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaNPCLoopStateComponent", "InitLoopState");

	Params::UFortAthenaNPCLoopStateComponent_InitLoopState_Params Parms{};

	Parms.PawnOwner = PawnOwner;

	UObject::ProcessEvent(Func, &Parms);

}


// Class FortniteAI.FortPawnComponent_PingCommand
// (None)

class UClass* UFortPawnComponent_PingCommand::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortPawnComponent_PingCommand");

	return Clss;
}


// FortPawnComponent_PingCommand FortniteAI.Default__FortPawnComponent_PingCommand
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortPawnComponent_PingCommand* UFortPawnComponent_PingCommand::GetDefaultObj()
{
	static class UFortPawnComponent_PingCommand* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortPawnComponent_PingCommand*>(UFortPawnComponent_PingCommand::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortPawnComponent_AIBotPingCommand
// (None)

class UClass* UFortPawnComponent_AIBotPingCommand::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortPawnComponent_AIBotPingCommand");

	return Clss;
}


// FortPawnComponent_AIBotPingCommand FortniteAI.Default__FortPawnComponent_AIBotPingCommand
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortPawnComponent_AIBotPingCommand* UFortPawnComponent_AIBotPingCommand::GetDefaultObj()
{
	static class UFortPawnComponent_AIBotPingCommand* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortPawnComponent_AIBotPingCommand*>(UFortPawnComponent_AIBotPingCommand::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.FortPawnComponent_AIBotPingCommand.OnServerMarkerRemoved
// (Final, Native, Public)
// Parameters:
// struct FMarkerID                   MarkerID                                                         (Parm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPawnComponent_AIBotPingCommand::OnServerMarkerRemoved(const struct FMarkerID& MarkerID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPawnComponent_AIBotPingCommand", "OnServerMarkerRemoved");

	Params::UFortPawnComponent_AIBotPingCommand_OnServerMarkerRemoved_Params Parms{};

	Parms.MarkerID = MarkerID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortPawnComponent_AIBotPingCommand.OnServerMarkerAdded
// (Final, Native, Public, HasOutParams)
// Parameters:
// struct FFortWorldMarkerData        MarkerData                                                       (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortPawnComponent_AIBotPingCommand::OnServerMarkerAdded(struct FFortWorldMarkerData& MarkerData)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPawnComponent_AIBotPingCommand", "OnServerMarkerAdded");

	Params::UFortPawnComponent_AIBotPingCommand_OnServerMarkerAdded_Params Parms{};

	Parms.MarkerData = MarkerData;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortPawnComponent_AIBotPingCommand.OnAIPingCommand
// (Event, Public, BlueprintEvent)
// Parameters:
// class UFortPlayerPawn*             PlayerPawn                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EPingCommandType        CommandType                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPawnComponent_AIBotPingCommand::OnAIPingCommand(class UFortPlayerPawn* PlayerPawn, enum class EPingCommandType CommandType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPawnComponent_AIBotPingCommand", "OnAIPingCommand");

	Params::UFortPawnComponent_AIBotPingCommand_OnAIPingCommand_Params Parms{};

	Parms.PlayerPawn = PlayerPawn;
	Parms.CommandType = CommandType;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteAI.FortPawnComponent_AIBotPingCommand.HandleOnNPCUnconvertEvent
// (Final, Native, Public)
// Parameters:
// class UFortPawn*                   UnconvertedFortPawn                                              (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EUnconvertReason        UnconvertReason                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPawnComponent_AIBotPingCommand::HandleOnNPCUnconvertEvent(class UFortPawn* UnconvertedFortPawn, enum class EUnconvertReason UnconvertReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPawnComponent_AIBotPingCommand", "HandleOnNPCUnconvertEvent");

	Params::UFortPawnComponent_AIBotPingCommand_HandleOnNPCUnconvertEvent_Params Parms{};

	Parms.UnconvertedFortPawn = UnconvertedFortPawn;
	Parms.UnconvertReason = UnconvertReason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortPawnComponent_AIBotPingCommand.HandleOnNPCConvertEvent
// (Final, Native, Public)
// Parameters:
// class UFortPawn*                   InstigatorPawn                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPawn*                   ConvertedPawn                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPawnComponent_AIBotPingCommand::HandleOnNPCConvertEvent(class UFortPawn* InstigatorPawn, class UFortPawn* ConvertedPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPawnComponent_AIBotPingCommand", "HandleOnNPCConvertEvent");

	Params::UFortPawnComponent_AIBotPingCommand_HandleOnNPCConvertEvent_Params Parms{};

	Parms.InstigatorPawn = InstigatorPawn;
	Parms.ConvertedPawn = ConvertedPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FortniteAI.FortPawnComponent_AIFormation
// (None)

class UClass* UFortPawnComponent_AIFormation::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortPawnComponent_AIFormation");

	return Clss;
}


// FortPawnComponent_AIFormation FortniteAI.Default__FortPawnComponent_AIFormation
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortPawnComponent_AIFormation* UFortPawnComponent_AIFormation::GetDefaultObj()
{
	static class UFortPawnComponent_AIFormation* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortPawnComponent_AIFormation*>(UFortPawnComponent_AIFormation::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.FortPawnComponent_AIFormation.OnUserDied
// (Final, Native, Private, HasDefaults)
// Parameters:
// class UActor*                      DamagedActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UController*                 InstigatedBy                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      DamageCauser                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     HitLocation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         FHitComponent                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        BoneName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Momentum                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPawnComponent_AIFormation::OnUserDied(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPawnComponent_AIFormation", "OnUserDied");

	Params::UFortPawnComponent_AIFormation_OnUserDied_Params Parms{};

	Parms.DamagedActor = DamagedActor;
	Parms.Damage = Damage;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.HitLocation = HitLocation;
	Parms.FHitComponent = FHitComponent;
	Parms.BoneName = BoneName;
	Parms.Momentum = Momentum;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FortniteAI.FortPawnComponent_AIGroup
// (None)

class UClass* UFortPawnComponent_AIGroup::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortPawnComponent_AIGroup");

	return Clss;
}


// FortPawnComponent_AIGroup FortniteAI.Default__FortPawnComponent_AIGroup
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortPawnComponent_AIGroup* UFortPawnComponent_AIGroup::GetDefaultObj()
{
	static class UFortPawnComponent_AIGroup* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortPawnComponent_AIGroup*>(UFortPawnComponent_AIGroup::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.FortPawnComponent_AIGroup.RemoveFromCurrentGroup
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:

void UFortPawnComponent_AIGroup::RemoveFromCurrentGroup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPawnComponent_AIGroup", "RemoveFromCurrentGroup");

	Params::UFortPawnComponent_AIGroup_RemoveFromCurrentGroup_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortPawnComponent_AIGroup.OnGroupMemberDied
// (Final, Native, Private, HasDefaults)
// Parameters:
// class UActor*                      DamagedActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UController*                 InstigatedBy                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      DamageCauser                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     HitLocation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         FHitComponent                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        BoneName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Momentum                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortPawnComponent_AIGroup::OnGroupMemberDied(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPawnComponent_AIGroup", "OnGroupMemberDied");

	Params::UFortPawnComponent_AIGroup_OnGroupMemberDied_Params Parms{};

	Parms.DamagedActor = DamagedActor;
	Parms.Damage = Damage;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.HitLocation = HitLocation;
	Parms.FHitComponent = FHitComponent;
	Parms.BoneName = BoneName;
	Parms.Momentum = Momentum;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FortniteAI.FortAthenaPatrolPath
// (Actor)

class UClass* UFortAthenaPatrolPath::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaPatrolPath");

	return Clss;
}


// FortAthenaPatrolPath FortniteAI.Default__FortAthenaPatrolPath
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaPatrolPath* UFortAthenaPatrolPath::GetDefaultObj()
{
	static class UFortAthenaPatrolPath* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaPatrolPath*>(UFortAthenaPatrolPath::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.FortAthenaPatrolPath.SetPatrolPathEnabled
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bIsEnabled                                                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaPatrolPath::SetPatrolPathEnabled(bool bIsEnabled)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaPatrolPath", "SetPatrolPathEnabled");

	Params::UFortAthenaPatrolPath_SetPatrolPathEnabled_Params Parms{};

	Parms.bIsEnabled = bIsEnabled;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAthenaPatrolPath.PatrolPointReached
// (Final, RequiredAPI, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UFortAthenaPatrolPoint*      PathPoint                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAIController*               AIInstigator                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaPatrolPath::PatrolPointReached(class UFortAthenaPatrolPoint* PathPoint, class UAIController* AIInstigator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaPatrolPath", "PatrolPointReached");

	Params::UFortAthenaPatrolPath_PatrolPointReached_Params Parms{};

	Parms.PathPoint = PathPoint;
	Parms.AIInstigator = AIInstigator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAthenaPatrolPath.PatrolPointFailedToReach
// (Final, RequiredAPI, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UFortAthenaPatrolPoint*      PathPoint                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAIController*               AIInstigator                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaPatrolPath::PatrolPointFailedToReach(class UFortAthenaPatrolPoint* PathPoint, class UAIController* AIInstigator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaPatrolPath", "PatrolPointFailedToReach");

	Params::UFortAthenaPatrolPath_PatrolPointFailedToReach_Params Parms{};

	Parms.PathPoint = PathPoint;
	Parms.AIInstigator = AIInstigator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAthenaPatrolPath.PatrolPathStopped
// (Final, RequiredAPI, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UAIController*               AIInstigator                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaPatrolPath::PatrolPathStopped(class UAIController* AIInstigator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaPatrolPath", "PatrolPathStopped");

	Params::UFortAthenaPatrolPath_PatrolPathStopped_Params Parms{};

	Parms.AIInstigator = AIInstigator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAthenaPatrolPath.PatrolPathStarted
// (Final, RequiredAPI, Native, Public, BlueprintCallable, Const)
// Parameters:
// class UAIController*               AIInstigator                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaPatrolPath::PatrolPathStarted(class UAIController* AIInstigator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaPatrolPath", "PatrolPathStarted");

	Params::UFortAthenaPatrolPath_PatrolPathStarted_Params Parms{};

	Parms.AIInstigator = AIInstigator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAthenaPatrolPath.OnCurrentPlaylistLoaded
// (Final, Native, Protected, HasOutParams)
// Parameters:
// class FName                        PlaylistName                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       PlaylistContextTags                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortAthenaPatrolPath::OnCurrentPlaylistLoaded(class FName PlaylistName, struct FGameplayTagContainer& PlaylistContextTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaPatrolPath", "OnCurrentPlaylistLoaded");

	Params::UFortAthenaPatrolPath_OnCurrentPlaylistLoaded_Params Parms{};

	Parms.PlaylistName = PlaylistName;
	Parms.PlaylistContextTags = PlaylistContextTags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAthenaPatrolPath.GetPatrolPoints
// (Final, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UFortAthenaPatrolPoint*>OutPatrolPoints                                                  (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UFortAthenaPatrolPath::GetPatrolPoints(TArray<class UFortAthenaPatrolPoint*>* OutPatrolPoints)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaPatrolPath", "GetPatrolPoints");

	Params::UFortAthenaPatrolPath_GetPatrolPoints_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutPatrolPoints != nullptr)
		*OutPatrolPoints = Parms.OutPatrolPoints;

}


// Function FortniteAI.FortAthenaPatrolPath.CanBeUsed
// (Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAthenaPatrolPath::CanBeUsed()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaPatrolPath", "CanBeUsed");

	Params::UFortAthenaPatrolPath_CanBeUsed_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class FortniteAI.FortCreativePatrolPath
// (Actor)

class UClass* UFortCreativePatrolPath::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortCreativePatrolPath");

	return Clss;
}


// FortCreativePatrolPath FortniteAI.Default__FortCreativePatrolPath
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortCreativePatrolPath* UFortCreativePatrolPath::GetDefaultObj()
{
	static class UFortCreativePatrolPath* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortCreativePatrolPath*>(UFortCreativePatrolPath::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.FortCreativePatrolPath.SetPatrolHasValidNavMesh
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bValidNavMesh                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCreativePatrolPath::SetPatrolHasValidNavMesh(bool bValidNavMesh)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCreativePatrolPath", "SetPatrolHasValidNavMesh");

	Params::UFortCreativePatrolPath_SetPatrolHasValidNavMesh_Params Parms{};

	Parms.bValidNavMesh = bValidNavMesh;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortCreativePatrolPath.HasPatrolValidNavMesh
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortCreativePatrolPath::HasPatrolValidNavMesh()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCreativePatrolPath", "HasPatrolValidNavMesh");

	Params::UFortCreativePatrolPath_HasPatrolValidNavMesh_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class FortniteAI.FortAthenaAIRuntimeParameters
// (None)

class UClass* UFortAthenaAIRuntimeParameters::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIRuntimeParameters");

	return Clss;
}


// FortAthenaAIRuntimeParameters FortniteAI.Default__FortAthenaAIRuntimeParameters
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIRuntimeParameters* UFortAthenaAIRuntimeParameters::GetDefaultObj()
{
	static class UFortAthenaAIRuntimeParameters* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIRuntimeParameters*>(UFortAthenaAIRuntimeParameters::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAIBotDigestedSkillSet
// (None)

class UClass* UFortAthenaAIBotDigestedSkillSet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotDigestedSkillSet");

	return Clss;
}


// FortAthenaAIBotDigestedSkillSet FortniteAI.Default__FortAthenaAIBotDigestedSkillSet
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotDigestedSkillSet* UFortAthenaAIBotDigestedSkillSet::GetDefaultObj()
{
	static class UFortAthenaAIBotDigestedSkillSet* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotDigestedSkillSet*>(UFortAthenaAIBotDigestedSkillSet::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAIBotAimingDigestedSkillSet
// (None)

class UClass* UFortAthenaAIBotAimingDigestedSkillSet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotAimingDigestedSkillSet");

	return Clss;
}


// FortAthenaAIBotAimingDigestedSkillSet FortniteAI.Default__FortAthenaAIBotAimingDigestedSkillSet
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotAimingDigestedSkillSet* UFortAthenaAIBotAimingDigestedSkillSet::GetDefaultObj()
{
	static class UFortAthenaAIBotAimingDigestedSkillSet* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotAimingDigestedSkillSet*>(UFortAthenaAIBotAimingDigestedSkillSet::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAIBotSkillSet
// (None)

class UClass* UFortAthenaAIBotSkillSet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotSkillSet");

	return Clss;
}


// FortAthenaAIBotSkillSet FortniteAI.Default__FortAthenaAIBotSkillSet
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotSkillSet* UFortAthenaAIBotSkillSet::GetDefaultObj()
{
	static class UFortAthenaAIBotSkillSet* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotSkillSet*>(UFortAthenaAIBotSkillSet::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAIBotAimingSkillSet
// (None)

class UClass* UFortAthenaAIBotAimingSkillSet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotAimingSkillSet");

	return Clss;
}


// FortAthenaAIBotAimingSkillSet FortniteAI.Default__FortAthenaAIBotAimingSkillSet
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotAimingSkillSet* UFortAthenaAIBotAimingSkillSet::GetDefaultObj()
{
	static class UFortAthenaAIBotAimingSkillSet* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotAimingSkillSet*>(UFortAthenaAIBotAimingSkillSet::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.AISenseScalableConfig
// (None)

class UClass* UAISenseScalableConfig::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AISenseScalableConfig");

	return Clss;
}


// AISenseScalableConfig FortniteAI.Default__AISenseScalableConfig
// (Public, ClassDefaultObject, ArchetypeObject)

class UAISenseScalableConfig* UAISenseScalableConfig::GetDefaultObj()
{
	static class UAISenseScalableConfig* Default = nullptr;

	if (!Default)
		Default = static_cast<UAISenseScalableConfig*>(UAISenseScalableConfig::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.AISenseScalableConfig_Sight
// (None)

class UClass* UAISenseScalableConfig_Sight::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AISenseScalableConfig_Sight");

	return Clss;
}


// AISenseScalableConfig_Sight FortniteAI.Default__AISenseScalableConfig_Sight
// (Public, ClassDefaultObject, ArchetypeObject)

class UAISenseScalableConfig_Sight* UAISenseScalableConfig_Sight::GetDefaultObj()
{
	static class UAISenseScalableConfig_Sight* Default = nullptr;

	if (!Default)
		Default = static_cast<UAISenseScalableConfig_Sight*>(UAISenseScalableConfig_Sight::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.AISenseScalableConfig_Hearing
// (None)

class UClass* UAISenseScalableConfig_Hearing::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AISenseScalableConfig_Hearing");

	return Clss;
}


// AISenseScalableConfig_Hearing FortniteAI.Default__AISenseScalableConfig_Hearing
// (Public, ClassDefaultObject, ArchetypeObject)

class UAISenseScalableConfig_Hearing* UAISenseScalableConfig_Hearing::GetDefaultObj()
{
	static class UAISenseScalableConfig_Hearing* Default = nullptr;

	if (!Default)
		Default = static_cast<UAISenseScalableConfig_Hearing*>(UAISenseScalableConfig_Hearing::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAIBotAlertLevelConfig
// (None)

class UClass* UFortAthenaAIBotAlertLevelConfig::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotAlertLevelConfig");

	return Clss;
}


// FortAthenaAIBotAlertLevelConfig FortniteAI.Default__FortAthenaAIBotAlertLevelConfig
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotAlertLevelConfig* UFortAthenaAIBotAlertLevelConfig::GetDefaultObj()
{
	static class UFortAthenaAIBotAlertLevelConfig* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotAlertLevelConfig*>(UFortAthenaAIBotAlertLevelConfig::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAIBotAttackingDigestedSkillSet
// (None)

class UClass* UFortAthenaAIBotAttackingDigestedSkillSet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotAttackingDigestedSkillSet");

	return Clss;
}


// FortAthenaAIBotAttackingDigestedSkillSet FortniteAI.Default__FortAthenaAIBotAttackingDigestedSkillSet
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotAttackingDigestedSkillSet* UFortAthenaAIBotAttackingDigestedSkillSet::GetDefaultObj()
{
	static class UFortAthenaAIBotAttackingDigestedSkillSet* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotAttackingDigestedSkillSet*>(UFortAthenaAIBotAttackingDigestedSkillSet::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAIBotAttackingSkillSet
// (None)

class UClass* UFortAthenaAIBotAttackingSkillSet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotAttackingSkillSet");

	return Clss;
}


// FortAthenaAIBotAttackingSkillSet FortniteAI.Default__FortAthenaAIBotAttackingSkillSet
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotAttackingSkillSet* UFortAthenaAIBotAttackingSkillSet::GetDefaultObj()
{
	static class UFortAthenaAIBotAttackingSkillSet* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotAttackingSkillSet*>(UFortAthenaAIBotAttackingSkillSet::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAIBotBuildingDigestedSkillSet
// (None)

class UClass* UFortAthenaAIBotBuildingDigestedSkillSet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotBuildingDigestedSkillSet");

	return Clss;
}


// FortAthenaAIBotBuildingDigestedSkillSet FortniteAI.Default__FortAthenaAIBotBuildingDigestedSkillSet
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotBuildingDigestedSkillSet* UFortAthenaAIBotBuildingDigestedSkillSet::GetDefaultObj()
{
	static class UFortAthenaAIBotBuildingDigestedSkillSet* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotBuildingDigestedSkillSet*>(UFortAthenaAIBotBuildingDigestedSkillSet::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAIBotBuildingSkillSet
// (None)

class UClass* UFortAthenaAIBotBuildingSkillSet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotBuildingSkillSet");

	return Clss;
}


// FortAthenaAIBotBuildingSkillSet FortniteAI.Default__FortAthenaAIBotBuildingSkillSet
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotBuildingSkillSet* UFortAthenaAIBotBuildingSkillSet::GetDefaultObj()
{
	static class UFortAthenaAIBotBuildingSkillSet* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotBuildingSkillSet*>(UFortAthenaAIBotBuildingSkillSet::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAIBotCosmeticData
// (None)

class UClass* UFortAthenaAIBotCosmeticData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotCosmeticData");

	return Clss;
}


// FortAthenaAIBotCosmeticData FortniteAI.Default__FortAthenaAIBotCosmeticData
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotCosmeticData* UFortAthenaAIBotCosmeticData::GetDefaultObj()
{
	static class UFortAthenaAIBotCosmeticData* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotCosmeticData*>(UFortAthenaAIBotCosmeticData::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.FortAthenaAIBotCosmeticData.FindLibraryDataFromName
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      PartialName                                                      (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSoftObjectPtr<class UFortAthenaAIBotCosmeticLibraryData>ReturnValue                                                      (Parm, OutParm, ReturnParm, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TSoftObjectPtr<class UFortAthenaAIBotCosmeticLibraryData> UFortAthenaAIBotCosmeticData::FindLibraryDataFromName(const class FString& PartialName)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotCosmeticData", "FindLibraryDataFromName");

	Params::UFortAthenaAIBotCosmeticData_FindLibraryDataFromName_Params Parms{};

	Parms.PartialName = PartialName;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class FortniteAI.FortAthenaAIBotCosmeticLibraryData
// (None)

class UClass* UFortAthenaAIBotCosmeticLibraryData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotCosmeticLibraryData");

	return Clss;
}


// FortAthenaAIBotCosmeticLibraryData FortniteAI.Default__FortAthenaAIBotCosmeticLibraryData
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotCosmeticLibraryData* UFortAthenaAIBotCosmeticLibraryData::GetDefaultObj()
{
	static class UFortAthenaAIBotCosmeticLibraryData* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotCosmeticLibraryData*>(UFortAthenaAIBotCosmeticLibraryData::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.FortAthenaAIBotCosmeticLibraryData.RetrieveDataTables
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<class UDataTable*>          ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UDataTable*> UFortAthenaAIBotCosmeticLibraryData::RetrieveDataTables()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotCosmeticLibraryData", "RetrieveDataTables");

	Params::UFortAthenaAIBotCosmeticLibraryData_RetrieveDataTables_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAIBotCosmeticLibraryData.FindDataTableFromAssetType
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class FString                      AssetType                                                        (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UDataTable*                  ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UDataTable* UFortAthenaAIBotCosmeticLibraryData::FindDataTableFromAssetType(const class FString& AssetType)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotCosmeticLibraryData", "FindDataTableFromAssetType");

	Params::UFortAthenaAIBotCosmeticLibraryData_FindDataTableFromAssetType_Params Parms{};

	Parms.AssetType = AssetType;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAIBotCosmeticLibraryData.FillDataTableValuesFromSourceLibrary
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortAthenaAIBotCosmeticLibraryData*SourceLibrary                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAthenaAIBotCosmeticLibraryData::FillDataTableValuesFromSourceLibrary(class UFortAthenaAIBotCosmeticLibraryData* SourceLibrary)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotCosmeticLibraryData", "FillDataTableValuesFromSourceLibrary");

	Params::UFortAthenaAIBotCosmeticLibraryData_FillDataTableValuesFromSourceLibrary_Params Parms{};

	Parms.SourceLibrary = SourceLibrary;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class FortniteAI.BotCosmeticBlueprintHelperLibrary
// (None)

class UClass* UBotCosmeticBlueprintHelperLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BotCosmeticBlueprintHelperLibrary");

	return Clss;
}


// BotCosmeticBlueprintHelperLibrary FortniteAI.Default__BotCosmeticBlueprintHelperLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UBotCosmeticBlueprintHelperLibrary* UBotCosmeticBlueprintHelperLibrary::GetDefaultObj()
{
	static class UBotCosmeticBlueprintHelperLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UBotCosmeticBlueprintHelperLibrary*>(UBotCosmeticBlueprintHelperLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.BotCosmeticBlueprintHelperLibrary.SplitDataArrayByType
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class FString>              InAssetNames                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<class FString>              InAssetTypes                                                     (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<int32>                      InAssetUsageCounts                                               (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<int32>                      InAssetTypeSplitIndices                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// int32                              CurrentSplitIndex                                                (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      OutAssetType                                                     (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              OutAssetNames                                                    (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int32>                      OutAssetUsageCounts                                              (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBotCosmeticBlueprintHelperLibrary::SplitDataArrayByType(TArray<class FString>& InAssetNames, TArray<class FString>& InAssetTypes, TArray<int32>& InAssetUsageCounts, TArray<int32>& InAssetTypeSplitIndices, int32 CurrentSplitIndex, class FString* OutAssetType, TArray<class FString>* OutAssetNames, TArray<int32>* OutAssetUsageCounts)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BotCosmeticBlueprintHelperLibrary", "SplitDataArrayByType");

	Params::UBotCosmeticBlueprintHelperLibrary_SplitDataArrayByType_Params Parms{};

	Parms.InAssetNames = InAssetNames;
	Parms.InAssetTypes = InAssetTypes;
	Parms.InAssetUsageCounts = InAssetUsageCounts;
	Parms.InAssetTypeSplitIndices = InAssetTypeSplitIndices;
	Parms.CurrentSplitIndex = CurrentSplitIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutAssetType != nullptr)
		*OutAssetType = Parms.OutAssetType;

	if (OutAssetNames != nullptr)
		*OutAssetNames = Parms.OutAssetNames;

	if (OutAssetUsageCounts != nullptr)
		*OutAssetUsageCounts = Parms.OutAssetUsageCounts;

	return Parms.ReturnValue;

}


// Function FortniteAI.BotCosmeticBlueprintHelperLibrary.OpenCSVFileDialog
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class FString                      TitleDetails                                                     (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bAllowMultipleFiles                                              (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class FString> UBotCosmeticBlueprintHelperLibrary::OpenCSVFileDialog(const class FString& TitleDetails, bool bAllowMultipleFiles)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BotCosmeticBlueprintHelperLibrary", "OpenCSVFileDialog");

	Params::UBotCosmeticBlueprintHelperLibrary_OpenCSVFileDialog_Params Parms{};

	Parms.TitleDetails = TitleDetails;
	Parms.bAllowMultipleFiles = bAllowMultipleFiles;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.BotCosmeticBlueprintHelperLibrary.LoadDataFromCSV
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      FilePath                                                         (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              ForbiddenAssetNames                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<class FString>              ForbiddenAssetPrefix                                             (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<class FString>              AssetNames                                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<class FString>              AssetTypes                                                       (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int32>                      AssetUsageCounts                                                 (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// TArray<int32>                      AssetTypeSplitIndices                                            (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBotCosmeticBlueprintHelperLibrary::LoadDataFromCSV(const class FString& FilePath, TArray<class FString>& ForbiddenAssetNames, TArray<class FString>& ForbiddenAssetPrefix, TArray<class FString>* AssetNames, TArray<class FString>* AssetTypes, TArray<int32>* AssetUsageCounts, TArray<int32>* AssetTypeSplitIndices)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BotCosmeticBlueprintHelperLibrary", "LoadDataFromCSV");

	Params::UBotCosmeticBlueprintHelperLibrary_LoadDataFromCSV_Params Parms{};

	Parms.FilePath = FilePath;
	Parms.ForbiddenAssetNames = ForbiddenAssetNames;
	Parms.ForbiddenAssetPrefix = ForbiddenAssetPrefix;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (AssetNames != nullptr)
		*AssetNames = Parms.AssetNames;

	if (AssetTypes != nullptr)
		*AssetTypes = Parms.AssetTypes;

	if (AssetUsageCounts != nullptr)
		*AssetUsageCounts = Parms.AssetUsageCounts;

	if (AssetTypeSplitIndices != nullptr)
		*AssetTypeSplitIndices = Parms.AssetTypeSplitIndices;

	return Parms.ReturnValue;

}


// Function FortniteAI.BotCosmeticBlueprintHelperLibrary.GenerateWeightedCSV
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class FString                      AssetTypeName                                                    (Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TArray<class FString>              AssetNames                                                       (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<int32>                      AssetWeight                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)
// class FString                      CSV                                                              (Parm, OutParm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBotCosmeticBlueprintHelperLibrary::GenerateWeightedCSV(const class FString& AssetTypeName, TArray<class FString>& AssetNames, TArray<int32>& AssetWeight, class FString* CSV)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BotCosmeticBlueprintHelperLibrary", "GenerateWeightedCSV");

	Params::UBotCosmeticBlueprintHelperLibrary_GenerateWeightedCSV_Params Parms{};

	Parms.AssetTypeName = AssetTypeName;
	Parms.AssetNames = AssetNames;
	Parms.AssetWeight = AssetWeight;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (CSV != nullptr)
		*CSV = Parms.CSV;

	return Parms.ReturnValue;

}


// Function FortniteAI.BotCosmeticBlueprintHelperLibrary.ExportDataTableToSourceCSV
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class UDataTable*                  DataTable                                                        (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bCanCheckOutFile                                                 (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UBotCosmeticBlueprintHelperLibrary::ExportDataTableToSourceCSV(class UDataTable* DataTable, bool bCanCheckOutFile)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BotCosmeticBlueprintHelperLibrary", "ExportDataTableToSourceCSV");

	Params::UBotCosmeticBlueprintHelperLibrary_ExportDataTableToSourceCSV_Params Parms{};

	Parms.DataTable = DataTable;
	Parms.bCanCheckOutFile = bCanCheckOutFile;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class FortniteAI.FortAthenaAIBotCustomizationData
// (None)

class UClass* UFortAthenaAIBotCustomizationData::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotCustomizationData");

	return Clss;
}


// FortAthenaAIBotCustomizationData FortniteAI.Default__FortAthenaAIBotCustomizationData
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotCustomizationData* UFortAthenaAIBotCustomizationData::GetDefaultObj()
{
	static class UFortAthenaAIBotCustomizationData* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotCustomizationData*>(UFortAthenaAIBotCustomizationData::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.FortAthenaAIBotCustomizationData.SetCharacterCustomizationFromPlayerPawn
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortPlayerPawn*             InFortPawn                                                       (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotCustomizationData::SetCharacterCustomizationFromPlayerPawn(class UFortPlayerPawn* InFortPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotCustomizationData", "SetCharacterCustomizationFromPlayerPawn");

	Params::UFortAthenaAIBotCustomizationData_SetCharacterCustomizationFromPlayerPawn_Params Parms{};

	Parms.InFortPawn = InFortPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FortniteAI.FortAthenaAIBotDBNODigestedSkillSet
// (None)

class UClass* UFortAthenaAIBotDBNODigestedSkillSet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotDBNODigestedSkillSet");

	return Clss;
}


// FortAthenaAIBotDBNODigestedSkillSet FortniteAI.Default__FortAthenaAIBotDBNODigestedSkillSet
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotDBNODigestedSkillSet* UFortAthenaAIBotDBNODigestedSkillSet::GetDefaultObj()
{
	static class UFortAthenaAIBotDBNODigestedSkillSet* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotDBNODigestedSkillSet*>(UFortAthenaAIBotDBNODigestedSkillSet::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAIBotDBNOSkillSet
// (None)

class UClass* UFortAthenaAIBotDBNOSkillSet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotDBNOSkillSet");

	return Clss;
}


// FortAthenaAIBotDBNOSkillSet FortniteAI.Default__FortAthenaAIBotDBNOSkillSet
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotDBNOSkillSet* UFortAthenaAIBotDBNOSkillSet::GetDefaultObj()
{
	static class UFortAthenaAIBotDBNOSkillSet* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotDBNOSkillSet*>(UFortAthenaAIBotDBNOSkillSet::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAIBotEmoteDigestedSkillSet
// (None)

class UClass* UFortAthenaAIBotEmoteDigestedSkillSet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotEmoteDigestedSkillSet");

	return Clss;
}


// FortAthenaAIBotEmoteDigestedSkillSet FortniteAI.Default__FortAthenaAIBotEmoteDigestedSkillSet
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotEmoteDigestedSkillSet* UFortAthenaAIBotEmoteDigestedSkillSet::GetDefaultObj()
{
	static class UFortAthenaAIBotEmoteDigestedSkillSet* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotEmoteDigestedSkillSet*>(UFortAthenaAIBotEmoteDigestedSkillSet::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAIBotEmoteSkillSet
// (None)

class UClass* UFortAthenaAIBotEmoteSkillSet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotEmoteSkillSet");

	return Clss;
}


// FortAthenaAIBotEmoteSkillSet FortniteAI.Default__FortAthenaAIBotEmoteSkillSet
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotEmoteSkillSet* UFortAthenaAIBotEmoteSkillSet::GetDefaultObj()
{
	static class UFortAthenaAIBotEmoteSkillSet* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotEmoteSkillSet*>(UFortAthenaAIBotEmoteSkillSet::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAIEvaluator
// (None)

class UClass* UFortAthenaAIEvaluator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIEvaluator");

	return Clss;
}


// FortAthenaAIEvaluator FortniteAI.Default__FortAthenaAIEvaluator
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIEvaluator* UFortAthenaAIEvaluator::GetDefaultObj()
{
	static class UFortAthenaAIEvaluator* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIEvaluator*>(UFortAthenaAIEvaluator::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAIBotEvaluator
// (None)

class UClass* UFortAthenaAIBotEvaluator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator");

	return Clss;
}


// FortAthenaAIBotEvaluator FortniteAI.Default__FortAthenaAIBotEvaluator
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotEvaluator* UFortAthenaAIBotEvaluator::GetDefaultObj()
{
	static class UFortAthenaAIBotEvaluator* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotEvaluator*>(UFortAthenaAIBotEvaluator::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAIBotEvaluator_Movement
// (None)

class UClass* UFortAthenaAIBotEvaluator_Movement::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_Movement");

	return Clss;
}


// FortAthenaAIBotEvaluator_Movement FortniteAI.Default__FortAthenaAIBotEvaluator_Movement
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotEvaluator_Movement* UFortAthenaAIBotEvaluator_Movement::GetDefaultObj()
{
	static class UFortAthenaAIBotEvaluator_Movement* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotEvaluator_Movement*>(UFortAthenaAIBotEvaluator_Movement::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.FortAthenaAIBotEvaluator_Movement.OnCurrentUnstuckSteeringAttemptFinished
// (Final, Native, Private)
// Parameters:
// enum class EBotUnstuckSteeringReasonUnstuckSteeringReason                                            (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotEvaluator_Movement::OnCurrentUnstuckSteeringAttemptFinished(enum class EBotUnstuckSteeringReason UnstuckSteeringReason)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotEvaluator_Movement", "OnCurrentUnstuckSteeringAttemptFinished");

	Params::UFortAthenaAIBotEvaluator_Movement_OnCurrentUnstuckSteeringAttemptFinished_Params Parms{};

	Parms.UnstuckSteeringReason = UnstuckSteeringReason;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAthenaAIBotEvaluator_Movement.EvaluateIsolatedIslandSteering
// (Final, Native, Private)
// Parameters:

void UFortAthenaAIBotEvaluator_Movement::EvaluateIsolatedIslandSteering()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotEvaluator_Movement", "EvaluateIsolatedIslandSteering");

	Params::UFortAthenaAIBotEvaluator_Movement_EvaluateIsolatedIslandSteering_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FortniteAI.FortAthenaAIBotEvaluator_Loot
// (None)

class UClass* UFortAthenaAIBotEvaluator_Loot::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotEvaluator_Loot");

	return Clss;
}


// FortAthenaAIBotEvaluator_Loot FortniteAI.Default__FortAthenaAIBotEvaluator_Loot
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotEvaluator_Loot* UFortAthenaAIBotEvaluator_Loot::GetDefaultObj()
{
	static class UFortAthenaAIBotEvaluator_Loot* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotEvaluator_Loot*>(UFortAthenaAIBotEvaluator_Loot::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAIBotEvasiveManeuversDigestedSkillSet
// (None)

class UClass* UFortAthenaAIBotEvasiveManeuversDigestedSkillSet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotEvasiveManeuversDigestedSkillSet");

	return Clss;
}


// FortAthenaAIBotEvasiveManeuversDigestedSkillSet FortniteAI.Default__FortAthenaAIBotEvasiveManeuversDigestedSkillSet
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotEvasiveManeuversDigestedSkillSet* UFortAthenaAIBotEvasiveManeuversDigestedSkillSet::GetDefaultObj()
{
	static class UFortAthenaAIBotEvasiveManeuversDigestedSkillSet* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotEvasiveManeuversDigestedSkillSet*>(UFortAthenaAIBotEvasiveManeuversDigestedSkillSet::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAIBotEvasiveManeuversSkillSet
// (None)

class UClass* UFortAthenaAIBotEvasiveManeuversSkillSet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotEvasiveManeuversSkillSet");

	return Clss;
}


// FortAthenaAIBotEvasiveManeuversSkillSet FortniteAI.Default__FortAthenaAIBotEvasiveManeuversSkillSet
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotEvasiveManeuversSkillSet* UFortAthenaAIBotEvasiveManeuversSkillSet::GetDefaultObj()
{
	static class UFortAthenaAIBotEvasiveManeuversSkillSet* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotEvasiveManeuversSkillSet*>(UFortAthenaAIBotEvasiveManeuversSkillSet::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAIBotHarvestDigestedSkillSet
// (None)

class UClass* UFortAthenaAIBotHarvestDigestedSkillSet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotHarvestDigestedSkillSet");

	return Clss;
}


// FortAthenaAIBotHarvestDigestedSkillSet FortniteAI.Default__FortAthenaAIBotHarvestDigestedSkillSet
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotHarvestDigestedSkillSet* UFortAthenaAIBotHarvestDigestedSkillSet::GetDefaultObj()
{
	static class UFortAthenaAIBotHarvestDigestedSkillSet* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotHarvestDigestedSkillSet*>(UFortAthenaAIBotHarvestDigestedSkillSet::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAIBotHarvestSkillSet
// (None)

class UClass* UFortAthenaAIBotHarvestSkillSet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotHarvestSkillSet");

	return Clss;
}


// FortAthenaAIBotHarvestSkillSet FortniteAI.Default__FortAthenaAIBotHarvestSkillSet
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotHarvestSkillSet* UFortAthenaAIBotHarvestSkillSet::GetDefaultObj()
{
	static class UFortAthenaAIBotHarvestSkillSet* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotHarvestSkillSet*>(UFortAthenaAIBotHarvestSkillSet::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAIBotHealingDigestedSkillSet
// (None)

class UClass* UFortAthenaAIBotHealingDigestedSkillSet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotHealingDigestedSkillSet");

	return Clss;
}


// FortAthenaAIBotHealingDigestedSkillSet FortniteAI.Default__FortAthenaAIBotHealingDigestedSkillSet
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotHealingDigestedSkillSet* UFortAthenaAIBotHealingDigestedSkillSet::GetDefaultObj()
{
	static class UFortAthenaAIBotHealingDigestedSkillSet* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotHealingDigestedSkillSet*>(UFortAthenaAIBotHealingDigestedSkillSet::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAIBotHealingSkillSet
// (None)

class UClass* UFortAthenaAIBotHealingSkillSet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotHealingSkillSet");

	return Clss;
}


// FortAthenaAIBotHealingSkillSet FortniteAI.Default__FortAthenaAIBotHealingSkillSet
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotHealingSkillSet* UFortAthenaAIBotHealingSkillSet::GetDefaultObj()
{
	static class UFortAthenaAIBotHealingSkillSet* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotHealingSkillSet*>(UFortAthenaAIBotHealingSkillSet::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAIBotInventoryDigestedSkillSet
// (None)

class UClass* UFortAthenaAIBotInventoryDigestedSkillSet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotInventoryDigestedSkillSet");

	return Clss;
}


// FortAthenaAIBotInventoryDigestedSkillSet FortniteAI.Default__FortAthenaAIBotInventoryDigestedSkillSet
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotInventoryDigestedSkillSet* UFortAthenaAIBotInventoryDigestedSkillSet::GetDefaultObj()
{
	static class UFortAthenaAIBotInventoryDigestedSkillSet* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotInventoryDigestedSkillSet*>(UFortAthenaAIBotInventoryDigestedSkillSet::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAIBotInventorySkillSet
// (None)

class UClass* UFortAthenaAIBotInventorySkillSet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotInventorySkillSet");

	return Clss;
}


// FortAthenaAIBotInventorySkillSet FortniteAI.Default__FortAthenaAIBotInventorySkillSet
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotInventorySkillSet* UFortAthenaAIBotInventorySkillSet::GetDefaultObj()
{
	static class UFortAthenaAIBotInventorySkillSet* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotInventorySkillSet*>(UFortAthenaAIBotInventorySkillSet::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAIBotLootingDigestedSkillSet
// (None)

class UClass* UFortAthenaAIBotLootingDigestedSkillSet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotLootingDigestedSkillSet");

	return Clss;
}


// FortAthenaAIBotLootingDigestedSkillSet FortniteAI.Default__FortAthenaAIBotLootingDigestedSkillSet
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotLootingDigestedSkillSet* UFortAthenaAIBotLootingDigestedSkillSet::GetDefaultObj()
{
	static class UFortAthenaAIBotLootingDigestedSkillSet* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotLootingDigestedSkillSet*>(UFortAthenaAIBotLootingDigestedSkillSet::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAIBotLootingSkillSet
// (None)

class UClass* UFortAthenaAIBotLootingSkillSet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotLootingSkillSet");

	return Clss;
}


// FortAthenaAIBotLootingSkillSet FortniteAI.Default__FortAthenaAIBotLootingSkillSet
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotLootingSkillSet* UFortAthenaAIBotLootingSkillSet::GetDefaultObj()
{
	static class UFortAthenaAIBotLootingSkillSet* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotLootingSkillSet*>(UFortAthenaAIBotLootingSkillSet::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAIBotMovementDigestedSkillSet
// (None)

class UClass* UFortAthenaAIBotMovementDigestedSkillSet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotMovementDigestedSkillSet");

	return Clss;
}


// FortAthenaAIBotMovementDigestedSkillSet FortniteAI.Default__FortAthenaAIBotMovementDigestedSkillSet
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotMovementDigestedSkillSet* UFortAthenaAIBotMovementDigestedSkillSet::GetDefaultObj()
{
	static class UFortAthenaAIBotMovementDigestedSkillSet* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotMovementDigestedSkillSet*>(UFortAthenaAIBotMovementDigestedSkillSet::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAIBotMovementSkillSet
// (None)

class UClass* UFortAthenaAIBotMovementSkillSet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotMovementSkillSet");

	return Clss;
}


// FortAthenaAIBotMovementSkillSet FortniteAI.Default__FortAthenaAIBotMovementSkillSet
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotMovementSkillSet* UFortAthenaAIBotMovementSkillSet::GetDefaultObj()
{
	static class UFortAthenaAIBotMovementSkillSet* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotMovementSkillSet*>(UFortAthenaAIBotMovementSkillSet::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAIBotPathFollowingComponent
// (None)

class UClass* UFortAthenaAIBotPathFollowingComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotPathFollowingComponent");

	return Clss;
}


// FortAthenaAIBotPathFollowingComponent FortniteAI.Default__FortAthenaAIBotPathFollowingComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotPathFollowingComponent* UFortAthenaAIBotPathFollowingComponent::GetDefaultObj()
{
	static class UFortAthenaAIBotPathFollowingComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotPathFollowingComponent*>(UFortAthenaAIBotPathFollowingComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.FortAthenaAIBotPathFollowingComponent.HandlePawnTeleported
// (Final, Native, Public)
// Parameters:
// class UFortPawn*                   TeleportedPawn                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIBotPathFollowingComponent::HandlePawnTeleported(class UFortPawn* TeleportedPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIBotPathFollowingComponent", "HandlePawnTeleported");

	Params::UFortAthenaAIBotPathFollowingComponent_HandlePawnTeleported_Params Parms{};

	Parms.TeleportedPawn = TeleportedPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FortniteAI.FortAthenaAIBotPerceptionDigestedSkillSet
// (None)

class UClass* UFortAthenaAIBotPerceptionDigestedSkillSet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotPerceptionDigestedSkillSet");

	return Clss;
}


// FortAthenaAIBotPerceptionDigestedSkillSet FortniteAI.Default__FortAthenaAIBotPerceptionDigestedSkillSet
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotPerceptionDigestedSkillSet* UFortAthenaAIBotPerceptionDigestedSkillSet::GetDefaultObj()
{
	static class UFortAthenaAIBotPerceptionDigestedSkillSet* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotPerceptionDigestedSkillSet*>(UFortAthenaAIBotPerceptionDigestedSkillSet::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAIBotPerceptionSkillSet
// (None)

class UClass* UFortAthenaAIBotPerceptionSkillSet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotPerceptionSkillSet");

	return Clss;
}


// FortAthenaAIBotPerceptionSkillSet FortniteAI.Default__FortAthenaAIBotPerceptionSkillSet
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotPerceptionSkillSet* UFortAthenaAIBotPerceptionSkillSet::GetDefaultObj()
{
	static class UFortAthenaAIBotPerceptionSkillSet* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotPerceptionSkillSet*>(UFortAthenaAIBotPerceptionSkillSet::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAIBotPlayStyleDigestedSkillSet
// (None)

class UClass* UFortAthenaAIBotPlayStyleDigestedSkillSet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotPlayStyleDigestedSkillSet");

	return Clss;
}


// FortAthenaAIBotPlayStyleDigestedSkillSet FortniteAI.Default__FortAthenaAIBotPlayStyleDigestedSkillSet
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotPlayStyleDigestedSkillSet* UFortAthenaAIBotPlayStyleDigestedSkillSet::GetDefaultObj()
{
	static class UFortAthenaAIBotPlayStyleDigestedSkillSet* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotPlayStyleDigestedSkillSet*>(UFortAthenaAIBotPlayStyleDigestedSkillSet::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAIBotPlayStyleSkillSet
// (None)

class UClass* UFortAthenaAIBotPlayStyleSkillSet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotPlayStyleSkillSet");

	return Clss;
}


// FortAthenaAIBotPlayStyleSkillSet FortniteAI.Default__FortAthenaAIBotPlayStyleSkillSet
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotPlayStyleSkillSet* UFortAthenaAIBotPlayStyleSkillSet::GetDefaultObj()
{
	static class UFortAthenaAIBotPlayStyleSkillSet* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotPlayStyleSkillSet*>(UFortAthenaAIBotPlayStyleSkillSet::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAIBotPropagateAwarenessDigestedSkillSet
// (None)

class UClass* UFortAthenaAIBotPropagateAwarenessDigestedSkillSet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotPropagateAwarenessDigestedSkillSet");

	return Clss;
}


// FortAthenaAIBotPropagateAwarenessDigestedSkillSet FortniteAI.Default__FortAthenaAIBotPropagateAwarenessDigestedSkillSet
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotPropagateAwarenessDigestedSkillSet* UFortAthenaAIBotPropagateAwarenessDigestedSkillSet::GetDefaultObj()
{
	static class UFortAthenaAIBotPropagateAwarenessDigestedSkillSet* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotPropagateAwarenessDigestedSkillSet*>(UFortAthenaAIBotPropagateAwarenessDigestedSkillSet::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAIBotPropagateAwarenessSkillSet
// (None)

class UClass* UFortAthenaAIBotPropagateAwarenessSkillSet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotPropagateAwarenessSkillSet");

	return Clss;
}


// FortAthenaAIBotPropagateAwarenessSkillSet FortniteAI.Default__FortAthenaAIBotPropagateAwarenessSkillSet
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotPropagateAwarenessSkillSet* UFortAthenaAIBotPropagateAwarenessSkillSet::GetDefaultObj()
{
	static class UFortAthenaAIBotPropagateAwarenessSkillSet* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotPropagateAwarenessSkillSet*>(UFortAthenaAIBotPropagateAwarenessSkillSet::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAIBotRangeAttackDigestedSkillSet
// (None)

class UClass* UFortAthenaAIBotRangeAttackDigestedSkillSet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotRangeAttackDigestedSkillSet");

	return Clss;
}


// FortAthenaAIBotRangeAttackDigestedSkillSet FortniteAI.Default__FortAthenaAIBotRangeAttackDigestedSkillSet
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotRangeAttackDigestedSkillSet* UFortAthenaAIBotRangeAttackDigestedSkillSet::GetDefaultObj()
{
	static class UFortAthenaAIBotRangeAttackDigestedSkillSet* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotRangeAttackDigestedSkillSet*>(UFortAthenaAIBotRangeAttackDigestedSkillSet::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAIBotRangeAttackSkillSet
// (None)

class UClass* UFortAthenaAIBotRangeAttackSkillSet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotRangeAttackSkillSet");

	return Clss;
}


// FortAthenaAIBotRangeAttackSkillSet FortniteAI.Default__FortAthenaAIBotRangeAttackSkillSet
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotRangeAttackSkillSet* UFortAthenaAIBotRangeAttackSkillSet::GetDefaultObj()
{
	static class UFortAthenaAIBotRangeAttackSkillSet* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotRangeAttackSkillSet*>(UFortAthenaAIBotRangeAttackSkillSet::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAIBotReviveDigestedSkillSet
// (None)

class UClass* UFortAthenaAIBotReviveDigestedSkillSet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotReviveDigestedSkillSet");

	return Clss;
}


// FortAthenaAIBotReviveDigestedSkillSet FortniteAI.Default__FortAthenaAIBotReviveDigestedSkillSet
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotReviveDigestedSkillSet* UFortAthenaAIBotReviveDigestedSkillSet::GetDefaultObj()
{
	static class UFortAthenaAIBotReviveDigestedSkillSet* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotReviveDigestedSkillSet*>(UFortAthenaAIBotReviveDigestedSkillSet::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAIBotReviveSkillSet
// (None)

class UClass* UFortAthenaAIBotReviveSkillSet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotReviveSkillSet");

	return Clss;
}


// FortAthenaAIBotReviveSkillSet FortniteAI.Default__FortAthenaAIBotReviveSkillSet
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotReviveSkillSet* UFortAthenaAIBotReviveSkillSet::GetDefaultObj()
{
	static class UFortAthenaAIBotReviveSkillSet* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotReviveSkillSet*>(UFortAthenaAIBotReviveSkillSet::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAIBotUnstuckDigestedSkillSet
// (None)

class UClass* UFortAthenaAIBotUnstuckDigestedSkillSet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotUnstuckDigestedSkillSet");

	return Clss;
}


// FortAthenaAIBotUnstuckDigestedSkillSet FortniteAI.Default__FortAthenaAIBotUnstuckDigestedSkillSet
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotUnstuckDigestedSkillSet* UFortAthenaAIBotUnstuckDigestedSkillSet::GetDefaultObj()
{
	static class UFortAthenaAIBotUnstuckDigestedSkillSet* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotUnstuckDigestedSkillSet*>(UFortAthenaAIBotUnstuckDigestedSkillSet::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAIBotUnstuckSkillSet
// (None)

class UClass* UFortAthenaAIBotUnstuckSkillSet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotUnstuckSkillSet");

	return Clss;
}


// FortAthenaAIBotUnstuckSkillSet FortniteAI.Default__FortAthenaAIBotUnstuckSkillSet
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotUnstuckSkillSet* UFortAthenaAIBotUnstuckSkillSet::GetDefaultObj()
{
	static class UFortAthenaAIBotUnstuckSkillSet* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotUnstuckSkillSet*>(UFortAthenaAIBotUnstuckSkillSet::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAIBotVehicleDigestedSkillSet
// (None)

class UClass* UFortAthenaAIBotVehicleDigestedSkillSet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotVehicleDigestedSkillSet");

	return Clss;
}


// FortAthenaAIBotVehicleDigestedSkillSet FortniteAI.Default__FortAthenaAIBotVehicleDigestedSkillSet
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotVehicleDigestedSkillSet* UFortAthenaAIBotVehicleDigestedSkillSet::GetDefaultObj()
{
	static class UFortAthenaAIBotVehicleDigestedSkillSet* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotVehicleDigestedSkillSet*>(UFortAthenaAIBotVehicleDigestedSkillSet::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAIBotVehicleSkillSet
// (None)

class UClass* UFortAthenaAIBotVehicleSkillSet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotVehicleSkillSet");

	return Clss;
}


// FortAthenaAIBotVehicleSkillSet FortniteAI.Default__FortAthenaAIBotVehicleSkillSet
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotVehicleSkillSet* UFortAthenaAIBotVehicleSkillSet::GetDefaultObj()
{
	static class UFortAthenaAIBotVehicleSkillSet* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotVehicleSkillSet*>(UFortAthenaAIBotVehicleSkillSet::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAIBotWarmupDigestedSkillSet
// (None)

class UClass* UFortAthenaAIBotWarmupDigestedSkillSet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotWarmupDigestedSkillSet");

	return Clss;
}


// FortAthenaAIBotWarmupDigestedSkillSet FortniteAI.Default__FortAthenaAIBotWarmupDigestedSkillSet
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotWarmupDigestedSkillSet* UFortAthenaAIBotWarmupDigestedSkillSet::GetDefaultObj()
{
	static class UFortAthenaAIBotWarmupDigestedSkillSet* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotWarmupDigestedSkillSet*>(UFortAthenaAIBotWarmupDigestedSkillSet::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAIBotWarmupSkillSet
// (None)

class UClass* UFortAthenaAIBotWarmupSkillSet::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBotWarmupSkillSet");

	return Clss;
}


// FortAthenaAIBotWarmupSkillSet FortniteAI.Default__FortAthenaAIBotWarmupSkillSet
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBotWarmupSkillSet* UFortAthenaAIBotWarmupSkillSet::GetDefaultObj()
{
	static class UFortAthenaAIBotWarmupSkillSet* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBotWarmupSkillSet*>(UFortAthenaAIBotWarmupSkillSet::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAIBot_EQSQueryContext_CurrentTarget
// (None)

class UClass* UFortAthenaAIBot_EQSQueryContext_CurrentTarget::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIBot_EQSQueryContext_CurrentTarget");

	return Clss;
}


// FortAthenaAIBot_EQSQueryContext_CurrentTarget FortniteAI.Default__FortAthenaAIBot_EQSQueryContext_CurrentTarget
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIBot_EQSQueryContext_CurrentTarget* UFortAthenaAIBot_EQSQueryContext_CurrentTarget::GetDefaultObj()
{
	static class UFortAthenaAIBot_EQSQueryContext_CurrentTarget* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIBot_EQSQueryContext_CurrentTarget*>(UFortAthenaAIBot_EQSQueryContext_CurrentTarget::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAICoverComponent
// (None)

class UClass* UFortAthenaAICoverComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAICoverComponent");

	return Clss;
}


// FortAthenaAICoverComponent FortniteAI.Default__FortAthenaAICoverComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAICoverComponent* UFortAthenaAICoverComponent::GetDefaultObj()
{
	static class UFortAthenaAICoverComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAICoverComponent*>(UFortAthenaAICoverComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.BlackboardKeyAccessValidator
// (None)

class UClass* UBlackboardKeyAccessValidator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BlackboardKeyAccessValidator");

	return Clss;
}


// BlackboardKeyAccessValidator FortniteAI.Default__BlackboardKeyAccessValidator
// (Public, ClassDefaultObject, ArchetypeObject)

class UBlackboardKeyAccessValidator* UBlackboardKeyAccessValidator::GetDefaultObj()
{
	static class UBlackboardKeyAccessValidator* Default = nullptr;

	if (!Default)
		Default = static_cast<UBlackboardKeyAccessValidator*>(UBlackboardKeyAccessValidator::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAIEvaluatorComponent
// (None)

class UClass* UFortAthenaAIEvaluatorComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIEvaluatorComponent");

	return Clss;
}


// FortAthenaAIEvaluatorComponent FortniteAI.Default__FortAthenaAIEvaluatorComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIEvaluatorComponent* UFortAthenaAIEvaluatorComponent::GetDefaultObj()
{
	static class UFortAthenaAIEvaluatorComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIEvaluatorComponent*>(UFortAthenaAIEvaluatorComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAILeashVolume
// (Actor)

class UClass* UFortAthenaAILeashVolume::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAILeashVolume");

	return Clss;
}


// FortAthenaAILeashVolume FortniteAI.Default__FortAthenaAILeashVolume
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAILeashVolume* UFortAthenaAILeashVolume::GetDefaultObj()
{
	static class UFortAthenaAILeashVolume* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAILeashVolume*>(UFortAthenaAILeashVolume::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAILODSettingsContainer
// (None)

class UClass* UFortAthenaAILODSettingsContainer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAILODSettingsContainer");

	return Clss;
}


// FortAthenaAILODSettingsContainer FortniteAI.Default__FortAthenaAILODSettingsContainer
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAILODSettingsContainer* UFortAthenaAILODSettingsContainer::GetDefaultObj()
{
	static class UFortAthenaAILODSettingsContainer* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAILODSettingsContainer*>(UFortAthenaAILODSettingsContainer::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAILODComponent
// (None)

class UClass* UFortAthenaAILODComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAILODComponent");

	return Clss;
}


// FortAthenaAILODComponent FortniteAI.Default__FortAthenaAILODComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAILODComponent* UFortAthenaAILODComponent::GetDefaultObj()
{
	static class UFortAthenaAILODComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAILODComponent*>(UFortAthenaAILODComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.FortAthenaAILODComponent.OnRep_CurrentFortAILODLevel
// (Final, Native, Private)
// Parameters:

void UFortAthenaAILODComponent::OnRep_CurrentFortAILODLevel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAILODComponent", "OnRep_CurrentFortAILODLevel");

	Params::UFortAthenaAILODComponent_OnRep_CurrentFortAILODLevel_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FortniteAI.FortAthenaAIObjectTracker
// (None)

class UClass* UFortAthenaAIObjectTracker::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIObjectTracker");

	return Clss;
}


// FortAthenaAIObjectTracker FortniteAI.Default__FortAthenaAIObjectTracker
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIObjectTracker* UFortAthenaAIObjectTracker::GetDefaultObj()
{
	static class UFortAthenaAIObjectTracker* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIObjectTracker*>(UFortAthenaAIObjectTracker::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.FortAthenaAIObjectTracker.BP_MakeFullAthenaAIObjectTrackerQueryFromSimplified
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable, BlueprintPure)
// Parameters:
// struct FFortAthenaAIObjectTrackerQuerySimplifiedSimplifiedQuery                                                  (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// class UActor*                      OptionalQuerier                                                  (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FFortAthenaAIObjectTrackerQueryReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FFortAthenaAIObjectTrackerQuery UFortAthenaAIObjectTracker::BP_MakeFullAthenaAIObjectTrackerQueryFromSimplified(struct FFortAthenaAIObjectTrackerQuerySimplified& SimplifiedQuery, class UActor* OptionalQuerier)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIObjectTracker", "BP_MakeFullAthenaAIObjectTrackerQueryFromSimplified");

	Params::UFortAthenaAIObjectTracker_BP_MakeFullAthenaAIObjectTrackerQueryFromSimplified_Params Parms{};

	Parms.SimplifiedQuery = SimplifiedQuery;
	Parms.OptionalQuerier = OptionalQuerier;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class FortniteAI.FortAthenaAIRuntimeParametersProvider
// (None)

class UClass* UFortAthenaAIRuntimeParametersProvider::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIRuntimeParametersProvider");

	return Clss;
}


// FortAthenaAIRuntimeParametersProvider FortniteAI.Default__FortAthenaAIRuntimeParametersProvider
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIRuntimeParametersProvider* UFortAthenaAIRuntimeParametersProvider::GetDefaultObj()
{
	static class UFortAthenaAIRuntimeParametersProvider* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIRuntimeParametersProvider*>(UFortAthenaAIRuntimeParametersProvider::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAIRuntimeParametersComponent
// (None)

class UClass* UFortAthenaAIRuntimeParametersComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIRuntimeParametersComponent");

	return Clss;
}


// FortAthenaAIRuntimeParametersComponent FortniteAI.Default__FortAthenaAIRuntimeParametersComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIRuntimeParametersComponent* UFortAthenaAIRuntimeParametersComponent::GetDefaultObj()
{
	static class UFortAthenaAIRuntimeParametersComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIRuntimeParametersComponent*>(UFortAthenaAIRuntimeParametersComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAIRuntimeParameters_SmartObjectBase
// (None)

class UClass* UFortAthenaAIRuntimeParameters_SmartObjectBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIRuntimeParameters_SmartObjectBase");

	return Clss;
}


// FortAthenaAIRuntimeParameters_SmartObjectBase FortniteAI.Default__FortAthenaAIRuntimeParameters_SmartObjectBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIRuntimeParameters_SmartObjectBase* UFortAthenaAIRuntimeParameters_SmartObjectBase::GetDefaultObj()
{
	static class UFortAthenaAIRuntimeParameters_SmartObjectBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIRuntimeParameters_SmartObjectBase*>(UFortAthenaAIRuntimeParameters_SmartObjectBase::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.FortAthenaAIRuntimeParameters_SmartObjectBase.SetChooseClosestSmartObject
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInChooseClosestSmartObject                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIRuntimeParameters_SmartObjectBase::SetChooseClosestSmartObject(bool bInChooseClosestSmartObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIRuntimeParameters_SmartObjectBase", "SetChooseClosestSmartObject");

	Params::UFortAthenaAIRuntimeParameters_SmartObjectBase_SetChooseClosestSmartObject_Params Parms{};

	Parms.bInChooseClosestSmartObject = bInChooseClosestSmartObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAthenaAIRuntimeParameters_SmartObjectBase.GetChooseClosestSmartObject
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAthenaAIRuntimeParameters_SmartObjectBase::GetChooseClosestSmartObject()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIRuntimeParameters_SmartObjectBase", "GetChooseClosestSmartObject");

	Params::UFortAthenaAIRuntimeParameters_SmartObjectBase_GetChooseClosestSmartObject_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class FortniteAI.FortAthenaAISmartObjectActivity
// (None)

class UClass* UFortAthenaAISmartObjectActivity::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAISmartObjectActivity");

	return Clss;
}


// FortAthenaAISmartObjectActivity FortniteAI.Default__FortAthenaAISmartObjectActivity
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAISmartObjectActivity* UFortAthenaAISmartObjectActivity::GetDefaultObj()
{
	static class UFortAthenaAISmartObjectActivity* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAISmartObjectActivity*>(UFortAthenaAISmartObjectActivity::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAISpawnerDataComponentList
// (None)

class UClass* UFortAthenaAISpawnerDataComponentList::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAISpawnerDataComponentList");

	return Clss;
}


// FortAthenaAISpawnerDataComponentList FortniteAI.Default__FortAthenaAISpawnerDataComponentList
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAISpawnerDataComponentList* UFortAthenaAISpawnerDataComponentList::GetDefaultObj()
{
	static class UFortAthenaAISpawnerDataComponentList* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAISpawnerDataComponentList*>(UFortAthenaAISpawnerDataComponentList::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.FortAthenaAISpawnerDataComponentList.OverrideComponentClass
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TSubclassOf<class UFortAthenaAISpawnerDataComponent>NewComponentSubClass                                             (ConstParm, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortAthenaAISpawnerDataComponentList*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAthenaAISpawnerDataComponentList* UFortAthenaAISpawnerDataComponentList::OverrideComponentClass(TSubclassOf<class UFortAthenaAISpawnerDataComponent> NewComponentSubClass)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponentList", "OverrideComponentClass");

	Params::UFortAthenaAISpawnerDataComponentList_OverrideComponentClass_Params Parms{};

	Parms.NewComponentSubClass = NewComponentSubClass;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponentList.OverrideComponent
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class UFortAthenaAISpawnerDataComponent*NewComponent                                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortAthenaAISpawnerDataComponentList*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAthenaAISpawnerDataComponentList* UFortAthenaAISpawnerDataComponentList::OverrideComponent(class UFortAthenaAISpawnerDataComponent* NewComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponentList", "OverrideComponent");

	Params::UFortAthenaAISpawnerDataComponentList_OverrideComponent_Params Parms{};

	Parms.NewComponent = NewComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponentList.GetOrCreateComponentClassForModification
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UObject*                     ComponentOuter                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// TSubclassOf<class UFortAthenaAISpawnerDataComponent>ClassToClone                                                     (ConstParm, Parm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortAthenaAISpawnerDataComponent*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAthenaAISpawnerDataComponent* UFortAthenaAISpawnerDataComponentList::GetOrCreateComponentClassForModification(class UObject* ComponentOuter, TSubclassOf<class UFortAthenaAISpawnerDataComponent> ClassToClone)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponentList", "GetOrCreateComponentClassForModification");

	Params::UFortAthenaAISpawnerDataComponentList_GetOrCreateComponentClassForModification_Params Parms{};

	Parms.ComponentOuter = ComponentOuter;
	Parms.ClassToClone = ClassToClone;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponentList.GetList
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class UFortAthenaAISpawnerDataComponent*>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UFortAthenaAISpawnerDataComponent*> UFortAthenaAISpawnerDataComponentList::GetList()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponentList", "GetList");

	Params::UFortAthenaAISpawnerDataComponentList_GetList_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponentList.GetDefaultPawn
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UPawn*                       ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPawn* UFortAthenaAISpawnerDataComponentList::GetDefaultPawn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponentList", "GetDefaultPawn");

	Params::UFortAthenaAISpawnerDataComponentList_GetDefaultPawn_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class FortniteAI.FortAthenaAIRuntimeParameters_AffiliationBase
// (None)

class UClass* UFortAthenaAIRuntimeParameters_AffiliationBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIRuntimeParameters_AffiliationBase");

	return Clss;
}


// FortAthenaAIRuntimeParameters_AffiliationBase FortniteAI.Default__FortAthenaAIRuntimeParameters_AffiliationBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIRuntimeParameters_AffiliationBase* UFortAthenaAIRuntimeParameters_AffiliationBase::GetDefaultObj()
{
	static class UFortAthenaAIRuntimeParameters_AffiliationBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIRuntimeParameters_AffiliationBase*>(UFortAthenaAIRuntimeParameters_AffiliationBase::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAISpawnerDataComponent_AffiliationBase
// (None)

class UClass* UFortAthenaAISpawnerDataComponent_AffiliationBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAISpawnerDataComponent_AffiliationBase");

	return Clss;
}


// FortAthenaAISpawnerDataComponent_AffiliationBase FortniteAI.Default__FortAthenaAISpawnerDataComponent_AffiliationBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAISpawnerDataComponent_AffiliationBase* UFortAthenaAISpawnerDataComponent_AffiliationBase::GetDefaultObj()
{
	static class UFortAthenaAISpawnerDataComponent_AffiliationBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAISpawnerDataComponent_AffiliationBase*>(UFortAthenaAISpawnerDataComponent_AffiliationBase::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_AffiliationBase.SetFullTeamAwarenessPropagationDistance
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InFullTeamAwarenessMaxDistance                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAISpawnerDataComponent_AffiliationBase::SetFullTeamAwarenessPropagationDistance(float InFullTeamAwarenessMaxDistance)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_AffiliationBase", "SetFullTeamAwarenessPropagationDistance");

	Params::UFortAthenaAISpawnerDataComponent_AffiliationBase_SetFullTeamAwarenessPropagationDistance_Params Parms{};

	Parms.InFullTeamAwarenessMaxDistance = InFullTeamAwarenessMaxDistance;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_AffiliationBase.SetFullTeamAwarenessPropagation
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInFullTeamAwarenessPropagation                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAISpawnerDataComponent_AffiliationBase::SetFullTeamAwarenessPropagation(bool bInFullTeamAwarenessPropagation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_AffiliationBase", "SetFullTeamAwarenessPropagation");

	Params::UFortAthenaAISpawnerDataComponent_AffiliationBase_SetFullTeamAwarenessPropagation_Params Parms{};

	Parms.bInFullTeamAwarenessPropagation = bInFullTeamAwarenessPropagation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_AffiliationBase.SetFactionTags
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer       NewTags                                                          (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortAthenaAISpawnerDataComponent_AffiliationBase::SetFactionTags(struct FGameplayTagContainer& NewTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_AffiliationBase", "SetFactionTags");

	Params::UFortAthenaAISpawnerDataComponent_AffiliationBase_SetFactionTags_Params Parms{};

	Parms.NewTags = NewTags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_AffiliationBase.SetAwarenessPropagationIsBasedOnAlertLevel
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInAwarenessPropagationIsBasedOnAlertLevel                       (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAISpawnerDataComponent_AffiliationBase::SetAwarenessPropagationIsBasedOnAlertLevel(bool bInAwarenessPropagationIsBasedOnAlertLevel)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_AffiliationBase", "SetAwarenessPropagationIsBasedOnAlertLevel");

	Params::UFortAthenaAISpawnerDataComponent_AffiliationBase_SetAwarenessPropagationIsBasedOnAlertLevel_Params Parms{};

	Parms.bInAwarenessPropagationIsBasedOnAlertLevel = bInAwarenessPropagationIsBasedOnAlertLevel;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_AffiliationBase.GetFullTeamAwarenessPropagation
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAthenaAISpawnerDataComponent_AffiliationBase::GetFullTeamAwarenessPropagation()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_AffiliationBase", "GetFullTeamAwarenessPropagation");

	Params::UFortAthenaAISpawnerDataComponent_AffiliationBase_GetFullTeamAwarenessPropagation_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_AffiliationBase.GetFullTeamAwarenessMaxDistance
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortAthenaAISpawnerDataComponent_AffiliationBase::GetFullTeamAwarenessMaxDistance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_AffiliationBase", "GetFullTeamAwarenessMaxDistance");

	Params::UFortAthenaAISpawnerDataComponent_AffiliationBase_GetFullTeamAwarenessMaxDistance_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_AffiliationBase.GetFactionTag
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer       ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayTagContainer UFortAthenaAISpawnerDataComponent_AffiliationBase::GetFactionTag()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_AffiliationBase", "GetFactionTag");

	Params::UFortAthenaAISpawnerDataComponent_AffiliationBase_GetFactionTag_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_AffiliationBase.GetAwarenessPropagationIsBasedOnAlertLevel
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAthenaAISpawnerDataComponent_AffiliationBase::GetAwarenessPropagationIsBasedOnAlertLevel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_AffiliationBase", "GetAwarenessPropagationIsBasedOnAlertLevel");

	Params::UFortAthenaAISpawnerDataComponent_AffiliationBase_GetAwarenessPropagationIsBasedOnAlertLevel_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class FortniteAI.FortAthenaAIRuntimeParameters_Analytic
// (None)

class UClass* UFortAthenaAIRuntimeParameters_Analytic::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIRuntimeParameters_Analytic");

	return Clss;
}


// FortAthenaAIRuntimeParameters_Analytic FortniteAI.Default__FortAthenaAIRuntimeParameters_Analytic
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIRuntimeParameters_Analytic* UFortAthenaAIRuntimeParameters_Analytic::GetDefaultObj()
{
	static class UFortAthenaAIRuntimeParameters_Analytic* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIRuntimeParameters_Analytic*>(UFortAthenaAIRuntimeParameters_Analytic::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAIRuntimeParameters_AIAnalytic
// (None)

class UClass* UFortAthenaAIRuntimeParameters_AIAnalytic::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIRuntimeParameters_AIAnalytic");

	return Clss;
}


// FortAthenaAIRuntimeParameters_AIAnalytic FortniteAI.Default__FortAthenaAIRuntimeParameters_AIAnalytic
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIRuntimeParameters_AIAnalytic* UFortAthenaAIRuntimeParameters_AIAnalytic::GetDefaultObj()
{
	static class UFortAthenaAIRuntimeParameters_AIAnalytic* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIRuntimeParameters_AIAnalytic*>(UFortAthenaAIRuntimeParameters_AIAnalytic::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAISpawnerDataComponent_AnalyticBase
// (None)

class UClass* UFortAthenaAISpawnerDataComponent_AnalyticBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAISpawnerDataComponent_AnalyticBase");

	return Clss;
}


// FortAthenaAISpawnerDataComponent_AnalyticBase FortniteAI.Default__FortAthenaAISpawnerDataComponent_AnalyticBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAISpawnerDataComponent_AnalyticBase* UFortAthenaAISpawnerDataComponent_AnalyticBase::GetDefaultObj()
{
	static class UFortAthenaAISpawnerDataComponent_AnalyticBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAISpawnerDataComponent_AnalyticBase*>(UFortAthenaAISpawnerDataComponent_AnalyticBase::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAISpawnerDataComponent_AIAnalytic
// (None)

class UClass* UFortAthenaAISpawnerDataComponent_AIAnalytic::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAISpawnerDataComponent_AIAnalytic");

	return Clss;
}


// FortAthenaAISpawnerDataComponent_AIAnalytic FortniteAI.Default__FortAthenaAISpawnerDataComponent_AIAnalytic
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAISpawnerDataComponent_AIAnalytic* UFortAthenaAISpawnerDataComponent_AIAnalytic::GetDefaultObj()
{
	static class UFortAthenaAISpawnerDataComponent_AIAnalytic* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAISpawnerDataComponent_AIAnalytic*>(UFortAthenaAISpawnerDataComponent_AIAnalytic::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAIRuntimeParameters_Marker
// (None)

class UClass* UFortAthenaAIRuntimeParameters_Marker::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIRuntimeParameters_Marker");

	return Clss;
}


// FortAthenaAIRuntimeParameters_Marker FortniteAI.Default__FortAthenaAIRuntimeParameters_Marker
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIRuntimeParameters_Marker* UFortAthenaAIRuntimeParameters_Marker::GetDefaultObj()
{
	static class UFortAthenaAIRuntimeParameters_Marker* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIRuntimeParameters_Marker*>(UFortAthenaAIRuntimeParameters_Marker::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAIRuntimeParameters_AIBotDisguise
// (None)

class UClass* UFortAthenaAIRuntimeParameters_AIBotDisguise::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIRuntimeParameters_AIBotDisguise");

	return Clss;
}


// FortAthenaAIRuntimeParameters_AIBotDisguise FortniteAI.Default__FortAthenaAIRuntimeParameters_AIBotDisguise
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIRuntimeParameters_AIBotDisguise* UFortAthenaAIRuntimeParameters_AIBotDisguise::GetDefaultObj()
{
	static class UFortAthenaAIRuntimeParameters_AIBotDisguise* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIRuntimeParameters_AIBotDisguise*>(UFortAthenaAIRuntimeParameters_AIBotDisguise::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAIRuntimeParameters_Collection
// (None)

class UClass* UFortAthenaAIRuntimeParameters_Collection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIRuntimeParameters_Collection");

	return Clss;
}


// FortAthenaAIRuntimeParameters_Collection FortniteAI.Default__FortAthenaAIRuntimeParameters_Collection
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIRuntimeParameters_Collection* UFortAthenaAIRuntimeParameters_Collection::GetDefaultObj()
{
	static class UFortAthenaAIRuntimeParameters_Collection* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIRuntimeParameters_Collection*>(UFortAthenaAIRuntimeParameters_Collection::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAISpawnerDataComponent_AIBotAffiliation
// (None)

class UClass* UFortAthenaAISpawnerDataComponent_AIBotAffiliation::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAISpawnerDataComponent_AIBotAffiliation");

	return Clss;
}


// FortAthenaAISpawnerDataComponent_AIBotAffiliation FortniteAI.Default__FortAthenaAISpawnerDataComponent_AIBotAffiliation
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAISpawnerDataComponent_AIBotAffiliation* UFortAthenaAISpawnerDataComponent_AIBotAffiliation::GetDefaultObj()
{
	static class UFortAthenaAISpawnerDataComponent_AIBotAffiliation* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAISpawnerDataComponent_AIBotAffiliation*>(UFortAthenaAISpawnerDataComponent_AIBotAffiliation::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_AIBotAffiliation.SetOverrideTeamIndex
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// int32                              InOverrideTeamIdx                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAISpawnerDataComponent_AIBotAffiliation::SetOverrideTeamIndex(int32 InOverrideTeamIdx)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_AIBotAffiliation", "SetOverrideTeamIndex");

	Params::UFortAthenaAISpawnerDataComponent_AIBotAffiliation_SetOverrideTeamIndex_Params Parms{};

	Parms.InOverrideTeamIdx = InOverrideTeamIdx;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_AIBotAffiliation.GetTeamID
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              OutTeamId                                                        (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAthenaAISpawnerDataComponent_AIBotAffiliation::GetTeamID(int32* OutTeamId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_AIBotAffiliation", "GetTeamID");

	Params::UFortAthenaAISpawnerDataComponent_AIBotAffiliation_GetTeamID_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutTeamId != nullptr)
		*OutTeamId = Parms.OutTeamId;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_AIBotAffiliation.GetSquadID
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              OutSquadId                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAthenaAISpawnerDataComponent_AIBotAffiliation::GetSquadID(int32* OutSquadId)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_AIBotAffiliation", "GetSquadID");

	Params::UFortAthenaAISpawnerDataComponent_AIBotAffiliation_GetSquadID_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutSquadId != nullptr)
		*OutSquadId = Parms.OutSquadId;

	return Parms.ReturnValue;

}


// Class FortniteAI.FortAthenaAISpawnerDataComponent_AIBotAnalytic
// (None)

class UClass* UFortAthenaAISpawnerDataComponent_AIBotAnalytic::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAISpawnerDataComponent_AIBotAnalytic");

	return Clss;
}


// FortAthenaAISpawnerDataComponent_AIBotAnalytic FortniteAI.Default__FortAthenaAISpawnerDataComponent_AIBotAnalytic
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAISpawnerDataComponent_AIBotAnalytic* UFortAthenaAISpawnerDataComponent_AIBotAnalytic::GetDefaultObj()
{
	static class UFortAthenaAISpawnerDataComponent_AIBotAnalytic* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAISpawnerDataComponent_AIBotAnalytic*>(UFortAthenaAISpawnerDataComponent_AIBotAnalytic::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAIRuntimeParameters_BehaviorTreeControl
// (None)

class UClass* UFortAthenaAIRuntimeParameters_BehaviorTreeControl::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIRuntimeParameters_BehaviorTreeControl");

	return Clss;
}


// FortAthenaAIRuntimeParameters_BehaviorTreeControl FortniteAI.Default__FortAthenaAIRuntimeParameters_BehaviorTreeControl
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIRuntimeParameters_BehaviorTreeControl* UFortAthenaAIRuntimeParameters_BehaviorTreeControl::GetDefaultObj()
{
	static class UFortAthenaAIRuntimeParameters_BehaviorTreeControl* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIRuntimeParameters_BehaviorTreeControl*>(UFortAthenaAIRuntimeParameters_BehaviorTreeControl::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.FortAthenaAIRuntimeParameters_BehaviorTreeControl.IsBehaviorTreeBranchActive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EBehaviorTreeBranches   Behavior                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAthenaAIRuntimeParameters_BehaviorTreeControl::IsBehaviorTreeBranchActive(enum class EBehaviorTreeBranches Behavior)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIRuntimeParameters_BehaviorTreeControl", "IsBehaviorTreeBranchActive");

	Params::UFortAthenaAIRuntimeParameters_BehaviorTreeControl_IsBehaviorTreeBranchActive_Params Parms{};

	Parms.Behavior = Behavior;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAIRuntimeParameters_BehaviorTreeControl.EnableBehaviorTreeBranch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EBehaviorTreeBranches   Behavior                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIRuntimeParameters_BehaviorTreeControl::EnableBehaviorTreeBranch(enum class EBehaviorTreeBranches Behavior)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIRuntimeParameters_BehaviorTreeControl", "EnableBehaviorTreeBranch");

	Params::UFortAthenaAIRuntimeParameters_BehaviorTreeControl_EnableBehaviorTreeBranch_Params Parms{};

	Parms.Behavior = Behavior;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAthenaAIRuntimeParameters_BehaviorTreeControl.DisableBehaviorTreeBranch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EBehaviorTreeBranches   Behavior                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIRuntimeParameters_BehaviorTreeControl::DisableBehaviorTreeBranch(enum class EBehaviorTreeBranches Behavior)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIRuntimeParameters_BehaviorTreeControl", "DisableBehaviorTreeBranch");

	Params::UFortAthenaAIRuntimeParameters_BehaviorTreeControl_DisableBehaviorTreeBranch_Params Parms{};

	Parms.Behavior = Behavior;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FortniteAI.FortAthenaAIRuntimeParameters_ReviveBehavior
// (None)

class UClass* UFortAthenaAIRuntimeParameters_ReviveBehavior::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIRuntimeParameters_ReviveBehavior");

	return Clss;
}


// FortAthenaAIRuntimeParameters_ReviveBehavior FortniteAI.Default__FortAthenaAIRuntimeParameters_ReviveBehavior
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIRuntimeParameters_ReviveBehavior* UFortAthenaAIRuntimeParameters_ReviveBehavior::GetDefaultObj()
{
	static class UFortAthenaAIRuntimeParameters_ReviveBehavior* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIRuntimeParameters_ReviveBehavior*>(UFortAthenaAIRuntimeParameters_ReviveBehavior::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAIRuntimeParameters_DBNOBehavior
// (None)

class UClass* UFortAthenaAIRuntimeParameters_DBNOBehavior::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIRuntimeParameters_DBNOBehavior");

	return Clss;
}


// FortAthenaAIRuntimeParameters_DBNOBehavior FortniteAI.Default__FortAthenaAIRuntimeParameters_DBNOBehavior
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIRuntimeParameters_DBNOBehavior* UFortAthenaAIRuntimeParameters_DBNOBehavior::GetDefaultObj()
{
	static class UFortAthenaAIRuntimeParameters_DBNOBehavior* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIRuntimeParameters_DBNOBehavior*>(UFortAthenaAIRuntimeParameters_DBNOBehavior::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAIRuntimeParameters_NPCBehavior
// (None)

class UClass* UFortAthenaAIRuntimeParameters_NPCBehavior::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIRuntimeParameters_NPCBehavior");

	return Clss;
}


// FortAthenaAIRuntimeParameters_NPCBehavior FortniteAI.Default__FortAthenaAIRuntimeParameters_NPCBehavior
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIRuntimeParameters_NPCBehavior* UFortAthenaAIRuntimeParameters_NPCBehavior::GetDefaultObj()
{
	static class UFortAthenaAIRuntimeParameters_NPCBehavior* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIRuntimeParameters_NPCBehavior*>(UFortAthenaAIRuntimeParameters_NPCBehavior::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAIRuntimeParameters_Behavior
// (None)

class UClass* UFortAthenaAIRuntimeParameters_Behavior::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIRuntimeParameters_Behavior");

	return Clss;
}


// FortAthenaAIRuntimeParameters_Behavior FortniteAI.Default__FortAthenaAIRuntimeParameters_Behavior
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIRuntimeParameters_Behavior* UFortAthenaAIRuntimeParameters_Behavior::GetDefaultObj()
{
	static class UFortAthenaAIRuntimeParameters_Behavior* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIRuntimeParameters_Behavior*>(UFortAthenaAIRuntimeParameters_Behavior::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAISpawnerDataComponent_AIBotBehavior
// (None)

class UClass* UFortAthenaAISpawnerDataComponent_AIBotBehavior::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAISpawnerDataComponent_AIBotBehavior");

	return Clss;
}


// FortAthenaAISpawnerDataComponent_AIBotBehavior FortniteAI.Default__FortAthenaAISpawnerDataComponent_AIBotBehavior
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAISpawnerDataComponent_AIBotBehavior* UFortAthenaAISpawnerDataComponent_AIBotBehavior::GetDefaultObj()
{
	static class UFortAthenaAISpawnerDataComponent_AIBotBehavior* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAISpawnerDataComponent_AIBotBehavior*>(UFortAthenaAISpawnerDataComponent_AIBotBehavior::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_AIBotBehavior.IsBehaviorTreeBranchActive
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// enum class EBehaviorTreeBranches   Behavior                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAthenaAISpawnerDataComponent_AIBotBehavior::IsBehaviorTreeBranchActive(enum class EBehaviorTreeBranches Behavior)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_AIBotBehavior", "IsBehaviorTreeBranchActive");

	Params::UFortAthenaAISpawnerDataComponent_AIBotBehavior_IsBehaviorTreeBranchActive_Params Parms{};

	Parms.Behavior = Behavior;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_AIBotBehavior.EnableBehaviorTreeBranch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EBehaviorTreeBranches   Behavior                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAISpawnerDataComponent_AIBotBehavior::EnableBehaviorTreeBranch(enum class EBehaviorTreeBranches Behavior)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_AIBotBehavior", "EnableBehaviorTreeBranch");

	Params::UFortAthenaAISpawnerDataComponent_AIBotBehavior_EnableBehaviorTreeBranch_Params Parms{};

	Parms.Behavior = Behavior;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_AIBotBehavior.DisableBehaviorTreeBranch
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EBehaviorTreeBranches   Behavior                                                         (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAISpawnerDataComponent_AIBotBehavior::DisableBehaviorTreeBranch(enum class EBehaviorTreeBranches Behavior)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_AIBotBehavior", "DisableBehaviorTreeBranch");

	Params::UFortAthenaAISpawnerDataComponent_AIBotBehavior_DisableBehaviorTreeBranch_Params Parms{};

	Parms.Behavior = Behavior;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FortniteAI.FortAthenaAISpawnerDataComponent_AIBotChanceEncounter
// (None)

class UClass* UFortAthenaAISpawnerDataComponent_AIBotChanceEncounter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAISpawnerDataComponent_AIBotChanceEncounter");

	return Clss;
}


// FortAthenaAISpawnerDataComponent_AIBotChanceEncounter FortniteAI.Default__FortAthenaAISpawnerDataComponent_AIBotChanceEncounter
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAISpawnerDataComponent_AIBotChanceEncounter* UFortAthenaAISpawnerDataComponent_AIBotChanceEncounter::GetDefaultObj()
{
	static class UFortAthenaAISpawnerDataComponent_AIBotChanceEncounter* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAISpawnerDataComponent_AIBotChanceEncounter*>(UFortAthenaAISpawnerDataComponent_AIBotChanceEncounter::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAIRuntimeParameters_AIBotLoopSettings
// (None)

class UClass* UFortAthenaAIRuntimeParameters_AIBotLoopSettings::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIRuntimeParameters_AIBotLoopSettings");

	return Clss;
}


// FortAthenaAIRuntimeParameters_AIBotLoopSettings FortniteAI.Default__FortAthenaAIRuntimeParameters_AIBotLoopSettings
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIRuntimeParameters_AIBotLoopSettings* UFortAthenaAIRuntimeParameters_AIBotLoopSettings::GetDefaultObj()
{
	static class UFortAthenaAIRuntimeParameters_AIBotLoopSettings* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIRuntimeParameters_AIBotLoopSettings*>(UFortAthenaAIRuntimeParameters_AIBotLoopSettings::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAIRuntimeParameters_Conversation
// (None)

class UClass* UFortAthenaAIRuntimeParameters_Conversation::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIRuntimeParameters_Conversation");

	return Clss;
}


// FortAthenaAIRuntimeParameters_Conversation FortniteAI.Default__FortAthenaAIRuntimeParameters_Conversation
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIRuntimeParameters_Conversation* UFortAthenaAIRuntimeParameters_Conversation::GetDefaultObj()
{
	static class UFortAthenaAIRuntimeParameters_Conversation* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIRuntimeParameters_Conversation*>(UFortAthenaAIRuntimeParameters_Conversation::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAISpawnerDataComponent_AIBotConversation
// (None)

class UClass* UFortAthenaAISpawnerDataComponent_AIBotConversation::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAISpawnerDataComponent_AIBotConversation");

	return Clss;
}


// FortAthenaAISpawnerDataComponent_AIBotConversation FortniteAI.Default__FortAthenaAISpawnerDataComponent_AIBotConversation
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAISpawnerDataComponent_AIBotConversation* UFortAthenaAISpawnerDataComponent_AIBotConversation::GetDefaultObj()
{
	static class UFortAthenaAISpawnerDataComponent_AIBotConversation* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAISpawnerDataComponent_AIBotConversation*>(UFortAthenaAISpawnerDataComponent_AIBotConversation::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAISpawnerDataComponent_CosmeticBase
// (None)

class UClass* UFortAthenaAISpawnerDataComponent_CosmeticBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAISpawnerDataComponent_CosmeticBase");

	return Clss;
}


// FortAthenaAISpawnerDataComponent_CosmeticBase FortniteAI.Default__FortAthenaAISpawnerDataComponent_CosmeticBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAISpawnerDataComponent_CosmeticBase* UFortAthenaAISpawnerDataComponent_CosmeticBase::GetDefaultObj()
{
	static class UFortAthenaAISpawnerDataComponent_CosmeticBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAISpawnerDataComponent_CosmeticBase*>(UFortAthenaAISpawnerDataComponent_CosmeticBase::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_CosmeticBase.GetFallbackTag
// (RequiredAPI, Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FGameplayTag                OutFallbackTag                                                   (Parm, OutParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAISpawnerDataComponent_CosmeticBase::GetFallbackTag(struct FGameplayTag* OutFallbackTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_CosmeticBase", "GetFallbackTag");

	Params::UFortAthenaAISpawnerDataComponent_CosmeticBase_GetFallbackTag_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutFallbackTag != nullptr)
		*OutFallbackTag = Parms.OutFallbackTag;

}


// Class FortniteAI.FortAthenaAISpawnerDataComponent_AIBotCosmeticBase
// (None)

class UClass* UFortAthenaAISpawnerDataComponent_AIBotCosmeticBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAISpawnerDataComponent_AIBotCosmeticBase");

	return Clss;
}


// FortAthenaAISpawnerDataComponent_AIBotCosmeticBase FortniteAI.Default__FortAthenaAISpawnerDataComponent_AIBotCosmeticBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAISpawnerDataComponent_AIBotCosmeticBase* UFortAthenaAISpawnerDataComponent_AIBotCosmeticBase::GetDefaultObj()
{
	static class UFortAthenaAISpawnerDataComponent_AIBotCosmeticBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAISpawnerDataComponent_AIBotCosmeticBase*>(UFortAthenaAISpawnerDataComponent_AIBotCosmeticBase::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_AIBotCosmeticBase.GetLoadout
// (RequiredAPI, Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// struct FFortAthenaLoadout          OutLoadout                                                       (Parm, OutParm, NativeAccessSpecifierPublic)

void UFortAthenaAISpawnerDataComponent_AIBotCosmeticBase::GetLoadout(struct FFortAthenaLoadout* OutLoadout)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_AIBotCosmeticBase", "GetLoadout");

	Params::UFortAthenaAISpawnerDataComponent_AIBotCosmeticBase_GetLoadout_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutLoadout != nullptr)
		*OutLoadout = Parms.OutLoadout;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_AIBotCosmeticBase.GetDances
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UAthenaDanceItemDefinition*>Dances                                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)
// class UFortAthenaAIBotController*  BotController                                                    (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAISpawnerDataComponent_AIBotCosmeticBase::GetDances(TArray<class UAthenaDanceItemDefinition*>* Dances, class UFortAthenaAIBotController* BotController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_AIBotCosmeticBase", "GetDances");

	Params::UFortAthenaAISpawnerDataComponent_AIBotCosmeticBase_GetDances_Params Parms{};

	Parms.BotController = BotController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (Dances != nullptr)
		*Dances = Parms.Dances;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_AIBotCosmeticBase.GetCustomCharacterParts
// (RequiredAPI, Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<class UCustomCharacterPart*>OutCustomCharacterParts                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UFortAthenaAISpawnerDataComponent_AIBotCosmeticBase::GetCustomCharacterParts(TArray<class UCustomCharacterPart*>* OutCustomCharacterParts)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_AIBotCosmeticBase", "GetCustomCharacterParts");

	Params::UFortAthenaAISpawnerDataComponent_AIBotCosmeticBase_GetCustomCharacterParts_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutCustomCharacterParts != nullptr)
		*OutCustomCharacterParts = Parms.OutCustomCharacterParts;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_AIBotCosmeticBase.GetAnimBPOverride
// (Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TSubclassOf<class UAnimInstance>   OutAnimBPOverride                                                (Parm, OutParm, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OutPriority                                                      (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAISpawnerDataComponent_AIBotCosmeticBase::GetAnimBPOverride(TSubclassOf<class UAnimInstance>* OutAnimBPOverride, int32* OutPriority)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_AIBotCosmeticBase", "GetAnimBPOverride");

	Params::UFortAthenaAISpawnerDataComponent_AIBotCosmeticBase_GetAnimBPOverride_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutAnimBPOverride != nullptr)
		*OutAnimBPOverride = Parms.OutAnimBPOverride;

	if (OutPriority != nullptr)
		*OutPriority = Parms.OutPriority;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_AIBotCosmeticBase.GetAllLoadouts
// (RequiredAPI, Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FFortAthenaLoadout>  OutLoadouts                                                      (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UFortAthenaAISpawnerDataComponent_AIBotCosmeticBase::GetAllLoadouts(TArray<struct FFortAthenaLoadout>* OutLoadouts)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_AIBotCosmeticBase", "GetAllLoadouts");

	Params::UFortAthenaAISpawnerDataComponent_AIBotCosmeticBase_GetAllLoadouts_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutLoadouts != nullptr)
		*OutLoadouts = Parms.OutLoadouts;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_AIBotCosmeticBase.AddCosmeticOverrideItemDef
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UAthenaCosmeticItemDefinition*InCosmeticItemToPreview                                          (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAISpawnerDataComponent_AIBotCosmeticBase::AddCosmeticOverrideItemDef(class UAthenaCosmeticItemDefinition* InCosmeticItemToPreview)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_AIBotCosmeticBase", "AddCosmeticOverrideItemDef");

	Params::UFortAthenaAISpawnerDataComponent_AIBotCosmeticBase_AddCosmeticOverrideItemDef_Params Parms{};

	Parms.InCosmeticItemToPreview = InCosmeticItemToPreview;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FortniteAI.FortAthenaAISpawnerDataComponent_AIBotDebug
// (None)

class UClass* UFortAthenaAISpawnerDataComponent_AIBotDebug::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAISpawnerDataComponent_AIBotDebug");

	return Clss;
}


// FortAthenaAISpawnerDataComponent_AIBotDebug FortniteAI.Default__FortAthenaAISpawnerDataComponent_AIBotDebug
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAISpawnerDataComponent_AIBotDebug* UFortAthenaAISpawnerDataComponent_AIBotDebug::GetDefaultObj()
{
	static class UFortAthenaAISpawnerDataComponent_AIBotDebug* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAISpawnerDataComponent_AIBotDebug*>(UFortAthenaAISpawnerDataComponent_AIBotDebug::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAIRuntimeParameters_AIConvert
// (None)

class UClass* UFortAthenaAIRuntimeParameters_AIConvert::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIRuntimeParameters_AIConvert");

	return Clss;
}


// FortAthenaAIRuntimeParameters_AIConvert FortniteAI.Default__FortAthenaAIRuntimeParameters_AIConvert
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIRuntimeParameters_AIConvert* UFortAthenaAIRuntimeParameters_AIConvert::GetDefaultObj()
{
	static class UFortAthenaAIRuntimeParameters_AIConvert* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIRuntimeParameters_AIConvert*>(UFortAthenaAIRuntimeParameters_AIConvert::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.FortAthenaAIRuntimeParameters_AIConvert.SetForceKillWhenUnconverted
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInForceKillWhenUnconverted                                      (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIRuntimeParameters_AIConvert::SetForceKillWhenUnconverted(bool bInForceKillWhenUnconverted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIRuntimeParameters_AIConvert", "SetForceKillWhenUnconverted");

	Params::UFortAthenaAIRuntimeParameters_AIConvert_SetForceKillWhenUnconverted_Params Parms{};

	Parms.bInForceKillWhenUnconverted = bInForceKillWhenUnconverted;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAthenaAIRuntimeParameters_AIConvert.SetForceKillWhenConverterDies
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInForceKillWhenConverterDies                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIRuntimeParameters_AIConvert::SetForceKillWhenConverterDies(bool bInForceKillWhenConverterDies)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIRuntimeParameters_AIConvert", "SetForceKillWhenConverterDies");

	Params::UFortAthenaAIRuntimeParameters_AIConvert_SetForceKillWhenConverterDies_Params Parms{};

	Parms.bInForceKillWhenConverterDies = bInForceKillWhenConverterDies;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAthenaAIRuntimeParameters_AIConvert.SetCanBeConvertedFromDBNO
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInCanBeConvertedFromDBNO                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIRuntimeParameters_AIConvert::SetCanBeConvertedFromDBNO(bool bInCanBeConvertedFromDBNO)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIRuntimeParameters_AIConvert", "SetCanBeConvertedFromDBNO");

	Params::UFortAthenaAIRuntimeParameters_AIConvert_SetCanBeConvertedFromDBNO_Params Parms{};

	Parms.bInCanBeConvertedFromDBNO = bInCanBeConvertedFromDBNO;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAthenaAIRuntimeParameters_AIConvert.SetCanBeConverted
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInCanBeConverted                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAIRuntimeParameters_AIConvert::SetCanBeConverted(bool bInCanBeConverted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIRuntimeParameters_AIConvert", "SetCanBeConverted");

	Params::UFortAthenaAIRuntimeParameters_AIConvert_SetCanBeConverted_Params Parms{};

	Parms.bInCanBeConverted = bInCanBeConverted;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAthenaAIRuntimeParameters_AIConvert.GetPickupTagConvertInfos
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FPickupTagConvertInfo>ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<struct FPickupTagConvertInfo> UFortAthenaAIRuntimeParameters_AIConvert::GetPickupTagConvertInfos()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIRuntimeParameters_AIConvert", "GetPickupTagConvertInfos");

	Params::UFortAthenaAIRuntimeParameters_AIConvert_GetPickupTagConvertInfos_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAIRuntimeParameters_AIConvert.GetForceKillWhenUnconverted
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAthenaAIRuntimeParameters_AIConvert::GetForceKillWhenUnconverted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIRuntimeParameters_AIConvert", "GetForceKillWhenUnconverted");

	Params::UFortAthenaAIRuntimeParameters_AIConvert_GetForceKillWhenUnconverted_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAIRuntimeParameters_AIConvert.GetForceKillWhenConverterDies
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAthenaAIRuntimeParameters_AIConvert::GetForceKillWhenConverterDies()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIRuntimeParameters_AIConvert", "GetForceKillWhenConverterDies");

	Params::UFortAthenaAIRuntimeParameters_AIConvert_GetForceKillWhenConverterDies_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAIRuntimeParameters_AIConvert.GetCanBeConvertedFromDBNO
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAthenaAIRuntimeParameters_AIConvert::GetCanBeConvertedFromDBNO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIRuntimeParameters_AIConvert", "GetCanBeConvertedFromDBNO");

	Params::UFortAthenaAIRuntimeParameters_AIConvert_GetCanBeConvertedFromDBNO_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAIRuntimeParameters_AIConvert.GetCanBeConverted
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAthenaAIRuntimeParameters_AIConvert::GetCanBeConverted()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAIRuntimeParameters_AIConvert", "GetCanBeConverted");

	Params::UFortAthenaAIRuntimeParameters_AIConvert_GetCanBeConverted_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class FortniteAI.FortAthenaAIRuntimeParameters_AIBotConvert
// (None)

class UClass* UFortAthenaAIRuntimeParameters_AIBotConvert::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIRuntimeParameters_AIBotConvert");

	return Clss;
}


// FortAthenaAIRuntimeParameters_AIBotConvert FortniteAI.Default__FortAthenaAIRuntimeParameters_AIBotConvert
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIRuntimeParameters_AIBotConvert* UFortAthenaAIRuntimeParameters_AIBotConvert::GetDefaultObj()
{
	static class UFortAthenaAIRuntimeParameters_AIBotConvert* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIRuntimeParameters_AIBotConvert*>(UFortAthenaAIRuntimeParameters_AIBotConvert::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAIRuntimeParameters_Leash
// (None)

class UClass* UFortAthenaAIRuntimeParameters_Leash::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIRuntimeParameters_Leash");

	return Clss;
}


// FortAthenaAIRuntimeParameters_Leash FortniteAI.Default__FortAthenaAIRuntimeParameters_Leash
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIRuntimeParameters_Leash* UFortAthenaAIRuntimeParameters_Leash::GetDefaultObj()
{
	static class UFortAthenaAIRuntimeParameters_Leash* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIRuntimeParameters_Leash*>(UFortAthenaAIRuntimeParameters_Leash::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAIRuntimeParameters_AIBotRespawn
// (None)

class UClass* UFortAthenaAIRuntimeParameters_AIBotRespawn::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIRuntimeParameters_AIBotRespawn");

	return Clss;
}


// FortAthenaAIRuntimeParameters_AIBotRespawn FortniteAI.Default__FortAthenaAIRuntimeParameters_AIBotRespawn
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIRuntimeParameters_AIBotRespawn* UFortAthenaAIRuntimeParameters_AIBotRespawn::GetDefaultObj()
{
	static class UFortAthenaAIRuntimeParameters_AIBotRespawn* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIRuntimeParameters_AIBotRespawn*>(UFortAthenaAIRuntimeParameters_AIBotRespawn::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAISpawnerDataComponent_GameplayBase
// (None)

class UClass* UFortAthenaAISpawnerDataComponent_GameplayBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAISpawnerDataComponent_GameplayBase");

	return Clss;
}


// FortAthenaAISpawnerDataComponent_GameplayBase FortniteAI.Default__FortAthenaAISpawnerDataComponent_GameplayBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAISpawnerDataComponent_GameplayBase* UFortAthenaAISpawnerDataComponent_GameplayBase::GetDefaultObj()
{
	static class UFortAthenaAISpawnerDataComponent_GameplayBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAISpawnerDataComponent_GameplayBase*>(UFortAthenaAISpawnerDataComponent_GameplayBase::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_GameplayBase.ShouldOverrideGlobalSpeedMultiplier
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAthenaAISpawnerDataComponent_GameplayBase::ShouldOverrideGlobalSpeedMultiplier()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_GameplayBase", "ShouldOverrideGlobalSpeedMultiplier");

	Params::UFortAthenaAISpawnerDataComponent_GameplayBase_ShouldOverrideGlobalSpeedMultiplier_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_GameplayBase.SetCopyConverterSpecificRelations
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInCopyConverterSpecificRelations                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAISpawnerDataComponent_GameplayBase::SetCopyConverterSpecificRelations(bool bInCopyConverterSpecificRelations)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_GameplayBase", "SetCopyConverterSpecificRelations");

	Params::UFortAthenaAISpawnerDataComponent_GameplayBase_SetCopyConverterSpecificRelations_Params Parms{};

	Parms.bInCopyConverterSpecificRelations = bInCopyConverterSpecificRelations;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_GameplayBase.SetCanBeConverted
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bInCanBeConverted                                                (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAISpawnerDataComponent_GameplayBase::SetCanBeConverted(bool bInCanBeConverted)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_GameplayBase", "SetCanBeConverted");

	Params::UFortAthenaAISpawnerDataComponent_GameplayBase_SetCanBeConverted_Params Parms{};

	Parms.bInCanBeConverted = bInCanBeConverted;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_GameplayBase.PostOnSpawnedBP
// (Event, Public, BlueprintEvent, Const)
// Parameters:
// class UPawn*                       PawnAI                                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAISpawnerDataComponent_GameplayBase::PostOnSpawnedBP(class UPawn* PawnAI)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_GameplayBase", "PostOnSpawnedBP");

	Params::UFortAthenaAISpawnerDataComponent_GameplayBase_PostOnSpawnedBP_Params Parms{};

	Parms.PawnAI = PawnAI;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_GameplayBase.GetGlobalSpeedMultiplier
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortAthenaAISpawnerDataComponent_GameplayBase::GetGlobalSpeedMultiplier()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_GameplayBase", "GetGlobalSpeedMultiplier");

	Params::UFortAthenaAISpawnerDataComponent_GameplayBase_GetGlobalSpeedMultiplier_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class FortniteAI.FortAthenaAISpawnerDataComponent_AIBotGameplay
// (None)

class UClass* UFortAthenaAISpawnerDataComponent_AIBotGameplay::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAISpawnerDataComponent_AIBotGameplay");

	return Clss;
}


// FortAthenaAISpawnerDataComponent_AIBotGameplay FortniteAI.Default__FortAthenaAISpawnerDataComponent_AIBotGameplay
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAISpawnerDataComponent_AIBotGameplay* UFortAthenaAISpawnerDataComponent_AIBotGameplay::GetDefaultObj()
{
	static class UFortAthenaAISpawnerDataComponent_AIBotGameplay* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAISpawnerDataComponent_AIBotGameplay*>(UFortAthenaAISpawnerDataComponent_AIBotGameplay::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_AIBotGameplay.SetNameSettings
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// enum class EBotNamingMode          InNamingMode                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FString                      InName                                                           (ConstParm, Parm, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInAddPlayerIDSuffix                                             (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAISpawnerDataComponent_AIBotGameplay::SetNameSettings(enum class EBotNamingMode InNamingMode, const class FString& InName, bool bInAddPlayerIDSuffix)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_AIBotGameplay", "SetNameSettings");

	Params::UFortAthenaAISpawnerDataComponent_AIBotGameplay_SetNameSettings_Params Parms{};

	Parms.InNamingMode = InNamingMode;
	Parms.InName = InName;
	Parms.bInAddPlayerIDSuffix = bInAddPlayerIDSuffix;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_AIBotGameplay.SetLeashOuterRadius
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InLeashOuterRadius                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAISpawnerDataComponent_AIBotGameplay::SetLeashOuterRadius(float InLeashOuterRadius)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_AIBotGameplay", "SetLeashOuterRadius");

	Params::UFortAthenaAISpawnerDataComponent_AIBotGameplay_SetLeashOuterRadius_Params Parms{};

	Parms.InLeashOuterRadius = InLeashOuterRadius;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_AIBotGameplay.SetLeashLocation
// (Final, Native, Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     InLeashLocation                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAISpawnerDataComponent_AIBotGameplay::SetLeashLocation(const struct FVector& InLeashLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_AIBotGameplay", "SetLeashLocation");

	Params::UFortAthenaAISpawnerDataComponent_AIBotGameplay_SetLeashLocation_Params Parms{};

	Parms.InLeashLocation = InLeashLocation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_AIBotGameplay.SetLeashInnerRadius
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InLeashInnerRadius                                               (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAISpawnerDataComponent_AIBotGameplay::SetLeashInnerRadius(float InLeashInnerRadius)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_AIBotGameplay", "SetLeashInnerRadius");

	Params::UFortAthenaAISpawnerDataComponent_AIBotGameplay_SetLeashInnerRadius_Params Parms{};

	Parms.InLeashInnerRadius = InLeashInnerRadius;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_AIBotGameplay.SetAssociatedPatrolPath
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortAthenaPatrolPath*       InAssociatedPatrolPath                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAISpawnerDataComponent_AIBotGameplay::SetAssociatedPatrolPath(class UFortAthenaPatrolPath* InAssociatedPatrolPath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_AIBotGameplay", "SetAssociatedPatrolPath");

	Params::UFortAthenaAISpawnerDataComponent_AIBotGameplay_SetAssociatedPatrolPath_Params Parms{};

	Parms.InAssociatedPatrolPath = InAssociatedPatrolPath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FortniteAI.FortAthenaAISpawnerDataComponent_GameplayAbilityBase
// (None)

class UClass* UFortAthenaAISpawnerDataComponent_GameplayAbilityBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAISpawnerDataComponent_GameplayAbilityBase");

	return Clss;
}


// FortAthenaAISpawnerDataComponent_GameplayAbilityBase FortniteAI.Default__FortAthenaAISpawnerDataComponent_GameplayAbilityBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAISpawnerDataComponent_GameplayAbilityBase* UFortAthenaAISpawnerDataComponent_GameplayAbilityBase::GetDefaultObj()
{
	static class UFortAthenaAISpawnerDataComponent_GameplayAbilityBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAISpawnerDataComponent_GameplayAbilityBase*>(UFortAthenaAISpawnerDataComponent_GameplayAbilityBase::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_GameplayAbilityBase.SetLooseTagsToApplyToPawn
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGameplayTagContainer       InGameplayTagContainer                                           (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UFortAthenaAISpawnerDataComponent_GameplayAbilityBase::SetLooseTagsToApplyToPawn(struct FGameplayTagContainer& InGameplayTagContainer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_GameplayAbilityBase", "SetLooseTagsToApplyToPawn");

	Params::UFortAthenaAISpawnerDataComponent_GameplayAbilityBase_SetLooseTagsToApplyToPawn_Params Parms{};

	Parms.InGameplayTagContainer = InGameplayTagContainer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_GameplayAbilityBase.GetLooseTagsToApplyToPawn
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTagContainer       ReturnValue                                                      (Parm, OutParm, ReturnParm, NativeAccessSpecifierPublic)

struct FGameplayTagContainer UFortAthenaAISpawnerDataComponent_GameplayAbilityBase::GetLooseTagsToApplyToPawn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_GameplayAbilityBase", "GetLooseTagsToApplyToPawn");

	Params::UFortAthenaAISpawnerDataComponent_GameplayAbilityBase_GetLooseTagsToApplyToPawn_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_GameplayAbilityBase.GetInitialGameplayEffects
// (Native, Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<struct FInitialGameplayEffectInfo>OutGEs                                                           (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UFortAthenaAISpawnerDataComponent_GameplayAbilityBase::GetInitialGameplayEffects(TArray<struct FInitialGameplayEffectInfo>* OutGEs)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_GameplayAbilityBase", "GetInitialGameplayEffects");

	Params::UFortAthenaAISpawnerDataComponent_GameplayAbilityBase_GetInitialGameplayEffects_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutGEs != nullptr)
		*OutGEs = Parms.OutGEs;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_GameplayAbilityBase.GetInitialGameplayAbilities
// (Native, Event, Protected, HasOutParams, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<class UFortAbilitySet*>     OutGASets                                                        (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UFortAthenaAISpawnerDataComponent_GameplayAbilityBase::GetInitialGameplayAbilities(TArray<class UFortAbilitySet*>* OutGASets)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_GameplayAbilityBase", "GetInitialGameplayAbilities");

	Params::UFortAthenaAISpawnerDataComponent_GameplayAbilityBase_GetInitialGameplayAbilities_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutGASets != nullptr)
		*OutGASets = Parms.OutGASets;

}


// Class FortniteAI.FortAthenaAISpawnerDataComponent_AIBotGameplayAbilityBase
// (None)

class UClass* UFortAthenaAISpawnerDataComponent_AIBotGameplayAbilityBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAISpawnerDataComponent_AIBotGameplayAbilityBase");

	return Clss;
}


// FortAthenaAISpawnerDataComponent_AIBotGameplayAbilityBase FortniteAI.Default__FortAthenaAISpawnerDataComponent_AIBotGameplayAbilityBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAISpawnerDataComponent_AIBotGameplayAbilityBase* UFortAthenaAISpawnerDataComponent_AIBotGameplayAbilityBase::GetDefaultObj()
{
	static class UFortAthenaAISpawnerDataComponent_AIBotGameplayAbilityBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAISpawnerDataComponent_AIBotGameplayAbilityBase*>(UFortAthenaAISpawnerDataComponent_AIBotGameplayAbilityBase::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAISpawnerDataComponent_InventoryBase
// (None)

class UClass* UFortAthenaAISpawnerDataComponent_InventoryBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAISpawnerDataComponent_InventoryBase");

	return Clss;
}


// FortAthenaAISpawnerDataComponent_InventoryBase FortniteAI.Default__FortAthenaAISpawnerDataComponent_InventoryBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAISpawnerDataComponent_InventoryBase* UFortAthenaAISpawnerDataComponent_InventoryBase::GetDefaultObj()
{
	static class UFortAthenaAISpawnerDataComponent_InventoryBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAISpawnerDataComponent_InventoryBase*>(UFortAthenaAISpawnerDataComponent_InventoryBase::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_InventoryBase.SetInventoryItems
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FItemAndCount>       InItems                                                          (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UFortAthenaAISpawnerDataComponent_InventoryBase::SetInventoryItems(TArray<struct FItemAndCount>& InItems)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_InventoryBase", "SetInventoryItems");

	Params::UFortAthenaAISpawnerDataComponent_InventoryBase_SetInventoryItems_Params Parms{};

	Parms.InItems = InItems;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_InventoryBase.GetInventoryItems
// (RequiredAPI, Native, Event, Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<struct FItemAndCount>       OutList                                                          (Parm, OutParm, ZeroConstructor, NativeAccessSpecifierPublic)

void UFortAthenaAISpawnerDataComponent_InventoryBase::GetInventoryItems(TArray<struct FItemAndCount>* OutList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_InventoryBase", "GetInventoryItems");

	Params::UFortAthenaAISpawnerDataComponent_InventoryBase_GetInventoryItems_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	if (OutList != nullptr)
		*OutList = Parms.OutList;

}


// Class FortniteAI.FortAthenaAISpawnerDataComponent_AIBotInventory
// (None)

class UClass* UFortAthenaAISpawnerDataComponent_AIBotInventory::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAISpawnerDataComponent_AIBotInventory");

	return Clss;
}


// FortAthenaAISpawnerDataComponent_AIBotInventory FortniteAI.Default__FortAthenaAISpawnerDataComponent_AIBotInventory
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAISpawnerDataComponent_AIBotInventory* UFortAthenaAISpawnerDataComponent_AIBotInventory::GetDefaultObj()
{
	static class UFortAthenaAISpawnerDataComponent_AIBotInventory* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAISpawnerDataComponent_AIBotInventory*>(UFortAthenaAISpawnerDataComponent_AIBotInventory::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAISpawnerDataComponent_PerceptionBase
// (None)

class UClass* UFortAthenaAISpawnerDataComponent_PerceptionBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAISpawnerDataComponent_PerceptionBase");

	return Clss;
}


// FortAthenaAISpawnerDataComponent_PerceptionBase FortniteAI.Default__FortAthenaAISpawnerDataComponent_PerceptionBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAISpawnerDataComponent_PerceptionBase* UFortAthenaAISpawnerDataComponent_PerceptionBase::GetDefaultObj()
{
	static class UFortAthenaAISpawnerDataComponent_PerceptionBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAISpawnerDataComponent_PerceptionBase*>(UFortAthenaAISpawnerDataComponent_PerceptionBase::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_PerceptionBase.SetVisibilityRange
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InSightRadius                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              LoseSightRadius                                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bInRestrictOverrideToUnaware                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAISpawnerDataComponent_PerceptionBase::SetVisibilityRange(float InSightRadius, float LoseSightRadius, bool bInRestrictOverrideToUnaware)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_PerceptionBase", "SetVisibilityRange");

	Params::UFortAthenaAISpawnerDataComponent_PerceptionBase_SetVisibilityRange_Params Parms{};

	Parms.InSightRadius = InSightRadius;
	Parms.LoseSightRadius = LoseSightRadius;
	Parms.bInRestrictOverrideToUnaware = bInRestrictOverrideToUnaware;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FortniteAI.FortAthenaAISpawnerDataComponent_AIBotPerception
// (None)

class UClass* UFortAthenaAISpawnerDataComponent_AIBotPerception::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAISpawnerDataComponent_AIBotPerception");

	return Clss;
}


// FortAthenaAISpawnerDataComponent_AIBotPerception FortniteAI.Default__FortAthenaAISpawnerDataComponent_AIBotPerception
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAISpawnerDataComponent_AIBotPerception* UFortAthenaAISpawnerDataComponent_AIBotPerception::GetDefaultObj()
{
	static class UFortAthenaAISpawnerDataComponent_AIBotPerception* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAISpawnerDataComponent_AIBotPerception*>(UFortAthenaAISpawnerDataComponent_AIBotPerception::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAISpawnerDataComponent_SkillsetBase
// (None)

class UClass* UFortAthenaAISpawnerDataComponent_SkillsetBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAISpawnerDataComponent_SkillsetBase");

	return Clss;
}


// FortAthenaAISpawnerDataComponent_SkillsetBase FortniteAI.Default__FortAthenaAISpawnerDataComponent_SkillsetBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAISpawnerDataComponent_SkillsetBase* UFortAthenaAISpawnerDataComponent_SkillsetBase::GetDefaultObj()
{
	static class UFortAthenaAISpawnerDataComponent_SkillsetBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAISpawnerDataComponent_SkillsetBase*>(UFortAthenaAISpawnerDataComponent_SkillsetBase::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_SkillsetBase.ShouldUseMatchMMRToOverrideSkillLevel
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAthenaAISpawnerDataComponent_SkillsetBase::ShouldUseMatchMMRToOverrideSkillLevel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_SkillsetBase", "ShouldUseMatchMMRToOverrideSkillLevel");

	Params::UFortAthenaAISpawnerDataComponent_SkillsetBase_ShouldUseMatchMMRToOverrideSkillLevel_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_SkillsetBase.GetSkillSets
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// TArray<TSubclassOf<class UFortAthenaAIBotSkillSet>>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, UObjectWrapper, NativeAccessSpecifierPublic)

TArray<TSubclassOf<class UFortAthenaAIBotSkillSet>> UFortAthenaAISpawnerDataComponent_SkillsetBase::GetSkillSets()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_SkillsetBase", "GetSkillSets");

	Params::UFortAthenaAISpawnerDataComponent_SkillsetBase_GetSkillSets_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_SkillsetBase.GetSkill
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortAthenaAISpawnerDataComponent_SkillsetBase::GetSkill()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_SkillsetBase", "GetSkill");

	Params::UFortAthenaAISpawnerDataComponent_SkillsetBase_GetSkill_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class FortniteAI.FortAthenaAISpawnerDataComponent_AIBotSkillset
// (None)

class UClass* UFortAthenaAISpawnerDataComponent_AIBotSkillset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAISpawnerDataComponent_AIBotSkillset");

	return Clss;
}


// FortAthenaAISpawnerDataComponent_AIBotSkillset FortniteAI.Default__FortAthenaAISpawnerDataComponent_AIBotSkillset
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAISpawnerDataComponent_AIBotSkillset* UFortAthenaAISpawnerDataComponent_AIBotSkillset::GetDefaultObj()
{
	static class UFortAthenaAISpawnerDataComponent_AIBotSkillset* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAISpawnerDataComponent_AIBotSkillset*>(UFortAthenaAISpawnerDataComponent_AIBotSkillset::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_AIBotSkillset.SetSkill
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              InSKill                                                          (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaAISpawnerDataComponent_AIBotSkillset::SetSkill(float InSKill)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_AIBotSkillset", "SetSkill");

	Params::UFortAthenaAISpawnerDataComponent_AIBotSkillset_SetSkill_Params Parms{};

	Parms.InSKill = InSKill;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FortniteAI.FortAthenaAISpawnerDataComponent_PlayerBotSkillset
// (None)

class UClass* UFortAthenaAISpawnerDataComponent_PlayerBotSkillset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAISpawnerDataComponent_PlayerBotSkillset");

	return Clss;
}


// FortAthenaAISpawnerDataComponent_PlayerBotSkillset FortniteAI.Default__FortAthenaAISpawnerDataComponent_PlayerBotSkillset
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAISpawnerDataComponent_PlayerBotSkillset* UFortAthenaAISpawnerDataComponent_PlayerBotSkillset::GetDefaultObj()
{
	static class UFortAthenaAISpawnerDataComponent_PlayerBotSkillset* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAISpawnerDataComponent_PlayerBotSkillset*>(UFortAthenaAISpawnerDataComponent_PlayerBotSkillset::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAISpawnerDataComponent_AIGameplay
// (None)

class UClass* UFortAthenaAISpawnerDataComponent_AIGameplay::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAISpawnerDataComponent_AIGameplay");

	return Clss;
}


// FortAthenaAISpawnerDataComponent_AIGameplay FortniteAI.Default__FortAthenaAISpawnerDataComponent_AIGameplay
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAISpawnerDataComponent_AIGameplay* UFortAthenaAISpawnerDataComponent_AIGameplay::GetDefaultObj()
{
	static class UFortAthenaAISpawnerDataComponent_AIGameplay* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAISpawnerDataComponent_AIGameplay*>(UFortAthenaAISpawnerDataComponent_AIGameplay::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAISpawnerDataComponent_AIPawnCosmeticBase
// (None)

class UClass* UFortAthenaAISpawnerDataComponent_AIPawnCosmeticBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAISpawnerDataComponent_AIPawnCosmeticBase");

	return Clss;
}


// FortAthenaAISpawnerDataComponent_AIPawnCosmeticBase FortniteAI.Default__FortAthenaAISpawnerDataComponent_AIPawnCosmeticBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAISpawnerDataComponent_AIPawnCosmeticBase* UFortAthenaAISpawnerDataComponent_AIPawnCosmeticBase::GetDefaultObj()
{
	static class UFortAthenaAISpawnerDataComponent_AIPawnCosmeticBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAISpawnerDataComponent_AIPawnCosmeticBase*>(UFortAthenaAISpawnerDataComponent_AIPawnCosmeticBase::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAISpawnerDataComponent_AIPawnCosmeticCustomization
// (None)

class UClass* UFortAthenaAISpawnerDataComponent_AIPawnCosmeticCustomization::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAISpawnerDataComponent_AIPawnCosmeticCustomization");

	return Clss;
}


// FortAthenaAISpawnerDataComponent_AIPawnCosmeticCustomization FortniteAI.Default__FortAthenaAISpawnerDataComponent_AIPawnCosmeticCustomization
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAISpawnerDataComponent_AIPawnCosmeticCustomization* UFortAthenaAISpawnerDataComponent_AIPawnCosmeticCustomization::GetDefaultObj()
{
	static class UFortAthenaAISpawnerDataComponent_AIPawnCosmeticCustomization* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAISpawnerDataComponent_AIPawnCosmeticCustomization*>(UFortAthenaAISpawnerDataComponent_AIPawnCosmeticCustomization::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAISpawnerDataComponent_OptimBase
// (None)

class UClass* UFortAthenaAISpawnerDataComponent_OptimBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAISpawnerDataComponent_OptimBase");

	return Clss;
}


// FortAthenaAISpawnerDataComponent_OptimBase FortniteAI.Default__FortAthenaAISpawnerDataComponent_OptimBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAISpawnerDataComponent_OptimBase* UFortAthenaAISpawnerDataComponent_OptimBase::GetDefaultObj()
{
	static class UFortAthenaAISpawnerDataComponent_OptimBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAISpawnerDataComponent_OptimBase*>(UFortAthenaAISpawnerDataComponent_OptimBase::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAISpawnerDataComponent_AIPawnOptim
// (None)

class UClass* UFortAthenaAISpawnerDataComponent_AIPawnOptim::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAISpawnerDataComponent_AIPawnOptim");

	return Clss;
}


// FortAthenaAISpawnerDataComponent_AIPawnOptim FortniteAI.Default__FortAthenaAISpawnerDataComponent_AIPawnOptim
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAISpawnerDataComponent_AIPawnOptim* UFortAthenaAISpawnerDataComponent_AIPawnOptim::GetDefaultObj()
{
	static class UFortAthenaAISpawnerDataComponent_AIPawnOptim* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAISpawnerDataComponent_AIPawnOptim*>(UFortAthenaAISpawnerDataComponent_AIPawnOptim::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAISpawnerDataComponent_AssembledMesh
// (None)

class UClass* UFortAthenaAISpawnerDataComponent_AssembledMesh::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAISpawnerDataComponent_AssembledMesh");

	return Clss;
}


// FortAthenaAISpawnerDataComponent_AssembledMesh FortniteAI.Default__FortAthenaAISpawnerDataComponent_AssembledMesh
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAISpawnerDataComponent_AssembledMesh* UFortAthenaAISpawnerDataComponent_AssembledMesh::GetDefaultObj()
{
	static class UFortAthenaAISpawnerDataComponent_AssembledMesh* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAISpawnerDataComponent_AssembledMesh*>(UFortAthenaAISpawnerDataComponent_AssembledMesh::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAISpawnerDataComponent_CosmeticLibrary
// (None)

class UClass* UFortAthenaAISpawnerDataComponent_CosmeticLibrary::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAISpawnerDataComponent_CosmeticLibrary");

	return Clss;
}


// FortAthenaAISpawnerDataComponent_CosmeticLibrary FortniteAI.Default__FortAthenaAISpawnerDataComponent_CosmeticLibrary
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAISpawnerDataComponent_CosmeticLibrary* UFortAthenaAISpawnerDataComponent_CosmeticLibrary::GetDefaultObj()
{
	static class UFortAthenaAISpawnerDataComponent_CosmeticLibrary* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAISpawnerDataComponent_CosmeticLibrary*>(UFortAthenaAISpawnerDataComponent_CosmeticLibrary::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_CosmeticLibrary.GetAICosmeticLibraryDataIndex
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortAthenaAISpawnerDataComponent_CosmeticLibrary::GetAICosmeticLibraryDataIndex()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_CosmeticLibrary", "GetAICosmeticLibraryDataIndex");

	Params::UFortAthenaAISpawnerDataComponent_CosmeticLibrary_GetAICosmeticLibraryDataIndex_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_CosmeticLibrary.GetAICosmeticLibraryData
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// class UFortAthenaAIBotCosmeticLibraryData*ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAthenaAIBotCosmeticLibraryData* UFortAthenaAISpawnerDataComponent_CosmeticLibrary::GetAICosmeticLibraryData()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_CosmeticLibrary", "GetAICosmeticLibraryData");

	Params::UFortAthenaAISpawnerDataComponent_CosmeticLibrary_GetAICosmeticLibraryData_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class FortniteAI.FortAthenaAISpawnerDataComponent_CosmeticLoadout
// (None)

class UClass* UFortAthenaAISpawnerDataComponent_CosmeticLoadout::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAISpawnerDataComponent_CosmeticLoadout");

	return Clss;
}


// FortAthenaAISpawnerDataComponent_CosmeticLoadout FortniteAI.Default__FortAthenaAISpawnerDataComponent_CosmeticLoadout
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAISpawnerDataComponent_CosmeticLoadout* UFortAthenaAISpawnerDataComponent_CosmeticLoadout::GetDefaultObj()
{
	static class UFortAthenaAISpawnerDataComponent_CosmeticLoadout* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAISpawnerDataComponent_CosmeticLoadout*>(UFortAthenaAISpawnerDataComponent_CosmeticLoadout::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAISpawnerDataComponent_CoverBase
// (None)

class UClass* UFortAthenaAISpawnerDataComponent_CoverBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAISpawnerDataComponent_CoverBase");

	return Clss;
}


// FortAthenaAISpawnerDataComponent_CoverBase FortniteAI.Default__FortAthenaAISpawnerDataComponent_CoverBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAISpawnerDataComponent_CoverBase* UFortAthenaAISpawnerDataComponent_CoverBase::GetDefaultObj()
{
	static class UFortAthenaAISpawnerDataComponent_CoverBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAISpawnerDataComponent_CoverBase*>(UFortAthenaAISpawnerDataComponent_CoverBase::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAISpawnerDataComponent_GroupBase
// (None)

class UClass* UFortAthenaAISpawnerDataComponent_GroupBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAISpawnerDataComponent_GroupBase");

	return Clss;
}


// FortAthenaAISpawnerDataComponent_GroupBase FortniteAI.Default__FortAthenaAISpawnerDataComponent_GroupBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAISpawnerDataComponent_GroupBase* UFortAthenaAISpawnerDataComponent_GroupBase::GetDefaultObj()
{
	static class UFortAthenaAISpawnerDataComponent_GroupBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAISpawnerDataComponent_GroupBase*>(UFortAthenaAISpawnerDataComponent_GroupBase::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAIRuntimeParameters_Inventory
// (None)

class UClass* UFortAthenaAIRuntimeParameters_Inventory::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIRuntimeParameters_Inventory");

	return Clss;
}


// FortAthenaAIRuntimeParameters_Inventory FortniteAI.Default__FortAthenaAIRuntimeParameters_Inventory
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIRuntimeParameters_Inventory* UFortAthenaAIRuntimeParameters_Inventory::GetDefaultObj()
{
	static class UFortAthenaAIRuntimeParameters_Inventory* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIRuntimeParameters_Inventory*>(UFortAthenaAIRuntimeParameters_Inventory::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAIRuntimeParameters_Hearing
// (None)

class UClass* UFortAthenaAIRuntimeParameters_Hearing::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIRuntimeParameters_Hearing");

	return Clss;
}


// FortAthenaAIRuntimeParameters_Hearing FortniteAI.Default__FortAthenaAIRuntimeParameters_Hearing
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIRuntimeParameters_Hearing* UFortAthenaAIRuntimeParameters_Hearing::GetDefaultObj()
{
	static class UFortAthenaAIRuntimeParameters_Hearing* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIRuntimeParameters_Hearing*>(UFortAthenaAIRuntimeParameters_Hearing::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAIRuntimeParameters_Sight
// (None)

class UClass* UFortAthenaAIRuntimeParameters_Sight::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIRuntimeParameters_Sight");

	return Clss;
}


// FortAthenaAIRuntimeParameters_Sight FortniteAI.Default__FortAthenaAIRuntimeParameters_Sight
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIRuntimeParameters_Sight* UFortAthenaAIRuntimeParameters_Sight::GetDefaultObj()
{
	static class UFortAthenaAIRuntimeParameters_Sight* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIRuntimeParameters_Sight*>(UFortAthenaAIRuntimeParameters_Sight::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAISpawnerDataComponent_PerksBase
// (None)

class UClass* UFortAthenaAISpawnerDataComponent_PerksBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAISpawnerDataComponent_PerksBase");

	return Clss;
}


// FortAthenaAISpawnerDataComponent_PerksBase FortniteAI.Default__FortAthenaAISpawnerDataComponent_PerksBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAISpawnerDataComponent_PerksBase* UFortAthenaAISpawnerDataComponent_PerksBase::GetDefaultObj()
{
	static class UFortAthenaAISpawnerDataComponent_PerksBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAISpawnerDataComponent_PerksBase*>(UFortAthenaAISpawnerDataComponent_PerksBase::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAISpawnerDataComponent_RandomInventory
// (None)

class UClass* UFortAthenaAISpawnerDataComponent_RandomInventory::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAISpawnerDataComponent_RandomInventory");

	return Clss;
}


// FortAthenaAISpawnerDataComponent_RandomInventory FortniteAI.Default__FortAthenaAISpawnerDataComponent_RandomInventory
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAISpawnerDataComponent_RandomInventory* UFortAthenaAISpawnerDataComponent_RandomInventory::GetDefaultObj()
{
	static class UFortAthenaAISpawnerDataComponent_RandomInventory* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAISpawnerDataComponent_RandomInventory*>(UFortAthenaAISpawnerDataComponent_RandomInventory::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAISpawnerDataComponent_ScriptBase
// (None)

class UClass* UFortAthenaAISpawnerDataComponent_ScriptBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAISpawnerDataComponent_ScriptBase");

	return Clss;
}


// FortAthenaAISpawnerDataComponent_ScriptBase FortniteAI.Default__FortAthenaAISpawnerDataComponent_ScriptBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAISpawnerDataComponent_ScriptBase* UFortAthenaAISpawnerDataComponent_ScriptBase::GetDefaultObj()
{
	static class UFortAthenaAISpawnerDataComponent_ScriptBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAISpawnerDataComponent_ScriptBase*>(UFortAthenaAISpawnerDataComponent_ScriptBase::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAISpawnerDataComponent_SmartObjectBase
// (None)

class UClass* UFortAthenaAISpawnerDataComponent_SmartObjectBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAISpawnerDataComponent_SmartObjectBase");

	return Clss;
}


// FortAthenaAISpawnerDataComponent_SmartObjectBase FortniteAI.Default__FortAthenaAISpawnerDataComponent_SmartObjectBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAISpawnerDataComponent_SmartObjectBase* UFortAthenaAISpawnerDataComponent_SmartObjectBase::GetDefaultObj()
{
	static class UFortAthenaAISpawnerDataComponent_SmartObjectBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAISpawnerDataComponent_SmartObjectBase*>(UFortAthenaAISpawnerDataComponent_SmartObjectBase::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAISpawnerDataComponent_SpawnParamsBase
// (None)

class UClass* UFortAthenaAISpawnerDataComponent_SpawnParamsBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAISpawnerDataComponent_SpawnParamsBase");

	return Clss;
}


// FortAthenaAISpawnerDataComponent_SpawnParamsBase FortniteAI.Default__FortAthenaAISpawnerDataComponent_SpawnParamsBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAISpawnerDataComponent_SpawnParamsBase* UFortAthenaAISpawnerDataComponent_SpawnParamsBase::GetDefaultObj()
{
	static class UFortAthenaAISpawnerDataComponent_SpawnParamsBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAISpawnerDataComponent_SpawnParamsBase*>(UFortAthenaAISpawnerDataComponent_SpawnParamsBase::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_SpawnParamsBase.ShouldSpawnInAir
// (RequiredAPI, Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAthenaAISpawnerDataComponent_SpawnParamsBase::ShouldSpawnInAir()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_SpawnParamsBase", "ShouldSpawnInAir");

	Params::UFortAthenaAISpawnerDataComponent_SpawnParamsBase_ShouldSpawnInAir_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_SpawnParamsBase.ShouldCheckForOverlaps
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAthenaAISpawnerDataComponent_SpawnParamsBase::ShouldCheckForOverlaps()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_SpawnParamsBase", "ShouldCheckForOverlaps");

	Params::UFortAthenaAISpawnerDataComponent_SpawnParamsBase_ShouldCheckForOverlaps_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_SpawnParamsBase.GetSpawnTracePadding
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortAthenaAISpawnerDataComponent_SpawnParamsBase::GetSpawnTracePadding()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_SpawnParamsBase", "GetSpawnTracePadding");

	Params::UFortAthenaAISpawnerDataComponent_SpawnParamsBase_GetSpawnTracePadding_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_SpawnParamsBase.GetSpawnerDataSpawnedAsChildren
// (RequiredAPI, Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TArray<TSubclassOf<class UFortAthenaAISpawnerData>>ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, UObjectWrapper, NativeAccessSpecifierPublic)

TArray<TSubclassOf<class UFortAthenaAISpawnerData>> UFortAthenaAISpawnerDataComponent_SpawnParamsBase::GetSpawnerDataSpawnedAsChildren()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_SpawnParamsBase", "GetSpawnerDataSpawnedAsChildren");

	Params::UFortAthenaAISpawnerDataComponent_SpawnParamsBase_GetSpawnerDataSpawnedAsChildren_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_SpawnParamsBase.GetPawnStatHandle
// (RequiredAPI, Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// struct FDataTableRowHandle         ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FDataTableRowHandle UFortAthenaAISpawnerDataComponent_SpawnParamsBase::GetPawnStatHandle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_SpawnParamsBase", "GetPawnStatHandle");

	Params::UFortAthenaAISpawnerDataComponent_SpawnParamsBase_GetPawnStatHandle_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_SpawnParamsBase.GetPawnClass
// (RequiredAPI, Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TSubclassOf<class UPawn>           ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TSubclassOf<class UPawn> UFortAthenaAISpawnerDataComponent_SpawnParamsBase::GetPawnClass()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_SpawnParamsBase", "GetPawnClass");

	Params::UFortAthenaAISpawnerDataComponent_SpawnParamsBase_GetPawnClass_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_SpawnParamsBase.GetInAirSpawnTraceStartHeight
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortAthenaAISpawnerDataComponent_SpawnParamsBase::GetInAirSpawnTraceStartHeight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_SpawnParamsBase", "GetInAirSpawnTraceStartHeight");

	Params::UFortAthenaAISpawnerDataComponent_SpawnParamsBase_GetInAirSpawnTraceStartHeight_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_SpawnParamsBase.GetInAirSpawnTraceSphereRadius
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortAthenaAISpawnerDataComponent_SpawnParamsBase::GetInAirSpawnTraceSphereRadius()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_SpawnParamsBase", "GetInAirSpawnTraceSphereRadius");

	Params::UFortAthenaAISpawnerDataComponent_SpawnParamsBase_GetInAirSpawnTraceSphereRadius_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_SpawnParamsBase.GetInAirSpawnTraceEndHeight
// (Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortAthenaAISpawnerDataComponent_SpawnParamsBase::GetInAirSpawnTraceEndHeight()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_SpawnParamsBase", "GetInAirSpawnTraceEndHeight");

	Params::UFortAthenaAISpawnerDataComponent_SpawnParamsBase_GetInAirSpawnTraceEndHeight_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaAISpawnerDataComponent_SpawnParamsBase.GetAIControllerClass
// (RequiredAPI, Native, Event, Public, BlueprintCallable, BlueprintEvent, BlueprintPure, Const)
// Parameters:
// TSubclassOf<class UAIController>   ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

TSubclassOf<class UAIController> UFortAthenaAISpawnerDataComponent_SpawnParamsBase::GetAIControllerClass()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaAISpawnerDataComponent_SpawnParamsBase", "GetAIControllerClass");

	Params::UFortAthenaAISpawnerDataComponent_SpawnParamsBase_GetAIControllerClass_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class FortniteAI.FortAthenaAISpawnerDataComponent_SpawnParams
// (None)

class UClass* UFortAthenaAISpawnerDataComponent_SpawnParams::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAISpawnerDataComponent_SpawnParams");

	return Clss;
}


// FortAthenaAISpawnerDataComponent_SpawnParams FortniteAI.Default__FortAthenaAISpawnerDataComponent_SpawnParams
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAISpawnerDataComponent_SpawnParams* UFortAthenaAISpawnerDataComponent_SpawnParams::GetDefaultObj()
{
	static class UFortAthenaAISpawnerDataComponent_SpawnParams* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAISpawnerDataComponent_SpawnParams*>(UFortAthenaAISpawnerDataComponent_SpawnParams::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAISpawnerDataComponent_TokenBase
// (None)

class UClass* UFortAthenaAISpawnerDataComponent_TokenBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAISpawnerDataComponent_TokenBase");

	return Clss;
}


// FortAthenaAISpawnerDataComponent_TokenBase FortniteAI.Default__FortAthenaAISpawnerDataComponent_TokenBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAISpawnerDataComponent_TokenBase* UFortAthenaAISpawnerDataComponent_TokenBase::GetDefaultObj()
{
	static class UFortAthenaAISpawnerDataComponent_TokenBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAISpawnerDataComponent_TokenBase*>(UFortAthenaAISpawnerDataComponent_TokenBase::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAISpawnerDataComponent_Vehicle
// (None)

class UClass* UFortAthenaAISpawnerDataComponent_Vehicle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAISpawnerDataComponent_Vehicle");

	return Clss;
}


// FortAthenaAISpawnerDataComponent_Vehicle FortniteAI.Default__FortAthenaAISpawnerDataComponent_Vehicle
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAISpawnerDataComponent_Vehicle* UFortAthenaAISpawnerDataComponent_Vehicle::GetDefaultObj()
{
	static class UFortAthenaAISpawnerDataComponent_Vehicle* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAISpawnerDataComponent_Vehicle*>(UFortAthenaAISpawnerDataComponent_Vehicle::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAISpawnerDataComponent_Voice
// (None)

class UClass* UFortAthenaAISpawnerDataComponent_Voice::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAISpawnerDataComponent_Voice");

	return Clss;
}


// FortAthenaAISpawnerDataComponent_Voice FortniteAI.Default__FortAthenaAISpawnerDataComponent_Voice
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAISpawnerDataComponent_Voice* UFortAthenaAISpawnerDataComponent_Voice::GetDefaultObj()
{
	static class UFortAthenaAISpawnerDataComponent_Voice* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAISpawnerDataComponent_Voice*>(UFortAthenaAISpawnerDataComponent_Voice::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaBeaconComponent
// (None)

class UClass* UFortAthenaBeaconComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaBeaconComponent");

	return Clss;
}


// FortAthenaBeaconComponent FortniteAI.Default__FortAthenaBeaconComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaBeaconComponent* UFortAthenaBeaconComponent::GetDefaultObj()
{
	static class UFortAthenaBeaconComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaBeaconComponent*>(UFortAthenaBeaconComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaBTTask_DynamicBlueprint
// (None)

class UClass* UFortAthenaBTTask_DynamicBlueprint::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaBTTask_DynamicBlueprint");

	return Clss;
}


// FortAthenaBTTask_DynamicBlueprint FortniteAI.Default__FortAthenaBTTask_DynamicBlueprint
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaBTTask_DynamicBlueprint* UFortAthenaBTTask_DynamicBlueprint::GetDefaultObj()
{
	static class UFortAthenaBTTask_DynamicBlueprint* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaBTTask_DynamicBlueprint*>(UFortAthenaBTTask_DynamicBlueprint::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaLeashComponent
// (None)

class UClass* UFortAthenaLeashComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaLeashComponent");

	return Clss;
}


// FortAthenaLeashComponent FortniteAI.Default__FortAthenaLeashComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaLeashComponent* UFortAthenaLeashComponent::GetDefaultObj()
{
	static class UFortAthenaLeashComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaLeashComponent*>(UFortAthenaLeashComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.FortAthenaLeashComponent.SetLeashRadius
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// float                              NewRadius                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLeashComponent::SetLeashRadius(float NewRadius)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLeashComponent", "SetLeashRadius");

	Params::UFortAthenaLeashComponent_SetLeashRadius_Params Parms{};

	Parms.NewRadius = NewRadius;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAthenaLeashComponent.IsInsideLeash
// (Final, RequiredAPI, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     Location                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAthenaLeashComponent::IsInsideLeash(struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLeashComponent", "IsInsideLeash");

	Params::UFortAthenaLeashComponent_IsInsideLeash_Params Parms{};

	Parms.Location = Location;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaLeashComponent.GetLeashRadius
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// float                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

float UFortAthenaLeashComponent::GetLeashRadius()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLeashComponent", "GetLeashRadius");

	Params::UFortAthenaLeashComponent_GetLeashRadius_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaLeashComponent.GetLeashCenter
// (Final, Native, Public, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

struct FVector UFortAthenaLeashComponent::GetLeashCenter()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLeashComponent", "GetLeashCenter");

	Params::UFortAthenaLeashComponent_GetLeashCenter_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class FortniteAI.FortAthenaLocalGameplayBehavior
// (Actor)

class UClass* UFortAthenaLocalGameplayBehavior::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaLocalGameplayBehavior");

	return Clss;
}


// FortAthenaLocalGameplayBehavior FortniteAI.Default__FortAthenaLocalGameplayBehavior
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaLocalGameplayBehavior* UFortAthenaLocalGameplayBehavior::GetDefaultObj()
{
	static class UFortAthenaLocalGameplayBehavior* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaLocalGameplayBehavior*>(UFortAthenaLocalGameplayBehavior::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.FortAthenaLocalGameplayBehavior.OnExecute
// (Event, Public, BlueprintEvent)
// Parameters:
// class UActor*                      Activator                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaLocalGameplayBehavior::OnExecute(class UActor* Activator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLocalGameplayBehavior", "OnExecute");

	Params::UFortAthenaLocalGameplayBehavior_OnExecute_Params Parms{};

	Parms.Activator = Activator;

	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteAI.FortAthenaLocalGameplayBehavior.OnAbort
// (Event, Public, BlueprintEvent)
// Parameters:

void UFortAthenaLocalGameplayBehavior::OnAbort()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLocalGameplayBehavior", "OnAbort");

	Params::UFortAthenaLocalGameplayBehavior_OnAbort_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function FortniteAI.FortAthenaLocalGameplayBehavior.FinishExecute
// (Final, Native, Public, BlueprintCallable)
// Parameters:

void UFortAthenaLocalGameplayBehavior::FinishExecute()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaLocalGameplayBehavior", "FinishExecute");

	Params::UFortAthenaLocalGameplayBehavior_FinishExecute_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FortniteAI.FortAthenaNavArea_ShallowWater
// (None)

class UClass* UFortAthenaNavArea_ShallowWater::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaNavArea_ShallowWater");

	return Clss;
}


// FortAthenaNavArea_ShallowWater FortniteAI.Default__FortAthenaNavArea_ShallowWater
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaNavArea_ShallowWater* UFortAthenaNavArea_ShallowWater::GetDefaultObj()
{
	static class UFortAthenaNavArea_ShallowWater* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaNavArea_ShallowWater*>(UFortAthenaNavArea_ShallowWater::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaNavArea_Water
// (None)

class UClass* UFortAthenaNavArea_Water::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaNavArea_Water");

	return Clss;
}


// FortAthenaNavArea_Water FortniteAI.Default__FortAthenaNavArea_Water
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaNavArea_Water* UFortAthenaNavArea_Water::GetDefaultObj()
{
	static class UFortAthenaNavArea_Water* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaNavArea_Water*>(UFortAthenaNavArea_Water::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaNpcGalileoComponent
// (None)

class UClass* UFortAthenaNpcGalileoComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaNpcGalileoComponent");

	return Clss;
}


// FortAthenaNpcGalileoComponent FortniteAI.Default__FortAthenaNpcGalileoComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaNpcGalileoComponent* UFortAthenaNpcGalileoComponent::GetDefaultObj()
{
	static class UFortAthenaNpcGalileoComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaNpcGalileoComponent*>(UFortAthenaNpcGalileoComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.FortAthenaNpcGalileoComponent.SetPatrolPath
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<struct FVector>             NewPatrolPath                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UFortAthenaNpcGalileoComponent::SetPatrolPath(TArray<struct FVector>& NewPatrolPath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaNpcGalileoComponent", "SetPatrolPath");

	Params::UFortAthenaNpcGalileoComponent_SetPatrolPath_Params Parms{};

	Parms.NewPatrolPath = NewPatrolPath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAthenaNpcGalileoComponent.SetCommunicationGroup
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// TArray<class UFortAthenaAIBotController*>AIBotControllerList                                              (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, NativeAccessSpecifierPublic)

void UFortAthenaNpcGalileoComponent::SetCommunicationGroup(TArray<class UFortAthenaAIBotController*>& AIBotControllerList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaNpcGalileoComponent", "SetCommunicationGroup");

	Params::UFortAthenaNpcGalileoComponent_SetCommunicationGroup_Params Parms{};

	Parms.AIBotControllerList = AIBotControllerList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAthenaNpcGalileoComponent.OnPawnDied
// (Final, Native, Public, HasDefaults)
// Parameters:
// class UActor*                      DamagedActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UController*                 InstigatedBy                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      DamageCauser                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     HitLocation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         FHitComponent                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        BoneName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Momentum                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaNpcGalileoComponent::OnPawnDied(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaNpcGalileoComponent", "OnPawnDied");

	Params::UFortAthenaNpcGalileoComponent_OnPawnDied_Params Parms{};

	Parms.DamagedActor = DamagedActor;
	Parms.Damage = Damage;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.HitLocation = HitLocation;
	Parms.FHitComponent = FHitComponent;
	Parms.BoneName = BoneName;
	Parms.Momentum = Momentum;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAthenaNpcGalileoComponent.GetPatrolPath
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// TArray<struct FVector>             ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<struct FVector> UFortAthenaNpcGalileoComponent::GetPatrolPath()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaNpcGalileoComponent", "GetPatrolPath");

	Params::UFortAthenaNpcGalileoComponent_GetPatrolPath_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaNpcGalileoComponent.GetCommunicationGroup
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class UFortAthenaAIBotController*>ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, ReferenceParm, NativeAccessSpecifierPublic)

TArray<class UFortAthenaAIBotController*> UFortAthenaNpcGalileoComponent::GetCommunicationGroup()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaNpcGalileoComponent", "GetCommunicationGroup");

	Params::UFortAthenaNpcGalileoComponent_GetCommunicationGroup_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class FortniteAI.FortAthenaNpcPatrollingComponent
// (None)

class UClass* UFortAthenaNpcPatrollingComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaNpcPatrollingComponent");

	return Clss;
}


// FortAthenaNpcPatrollingComponent FortniteAI.Default__FortAthenaNpcPatrollingComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaNpcPatrollingComponent* UFortAthenaNpcPatrollingComponent::GetDefaultObj()
{
	static class UFortAthenaNpcPatrollingComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaNpcPatrollingComponent*>(UFortAthenaNpcPatrollingComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.FortAthenaNpcPatrollingComponent.UpdateCurrentDestinationToNearestNextPoint
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:

void UFortAthenaNpcPatrollingComponent::UpdateCurrentDestinationToNearestNextPoint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaNpcPatrollingComponent", "UpdateCurrentDestinationToNearestNextPoint");

	Params::UFortAthenaNpcPatrollingComponent_UpdateCurrentDestinationToNearestNextPoint_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAthenaNpcPatrollingComponent.SetPatrolPath
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class UFortAthenaPatrolPath*       NewPatrolPath                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bOrientationAlreadyRandomized                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaNpcPatrollingComponent::SetPatrolPath(class UFortAthenaPatrolPath* NewPatrolPath, bool bOrientationAlreadyRandomized)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaNpcPatrollingComponent", "SetPatrolPath");

	Params::UFortAthenaNpcPatrollingComponent_SetPatrolPath_Params Parms{};

	Parms.NewPatrolPath = NewPatrolPath;
	Parms.bOrientationAlreadyRandomized = bOrientationAlreadyRandomized;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAthenaNpcPatrollingComponent.SelectNextPatrolPoint
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:

void UFortAthenaNpcPatrollingComponent::SelectNextPatrolPoint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaNpcPatrollingComponent", "SelectNextPatrolPoint");

	Params::UFortAthenaNpcPatrollingComponent_SelectNextPatrolPoint_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAthenaNpcPatrollingComponent.RemovePatrolPath
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:

void UFortAthenaNpcPatrollingComponent::RemovePatrolPath()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaNpcPatrollingComponent", "RemovePatrolPath");

	Params::UFortAthenaNpcPatrollingComponent_RemovePatrolPath_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAthenaNpcPatrollingComponent.OnPatrolPathStatusChanged
// (Final, Native, Private)
// Parameters:
// bool                               bEnableState                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortAthenaNpcPatrollingComponent::OnPatrolPathStatusChanged(bool bEnableState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaNpcPatrollingComponent", "OnPatrolPathStatusChanged");

	Params::UFortAthenaNpcPatrollingComponent_OnPatrolPathStatusChanged_Params Parms{};

	Parms.bEnableState = bEnableState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortAthenaNpcPatrollingComponent.IsPatrollingEnable
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAthenaNpcPatrollingComponent::IsPatrollingEnable()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaNpcPatrollingComponent", "IsPatrollingEnable");

	Params::UFortAthenaNpcPatrollingComponent_IsPatrollingEnable_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaNpcPatrollingComponent.IsCurrentPatrolPointAnEndPoint
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAthenaNpcPatrollingComponent::IsCurrentPatrolPointAnEndPoint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaNpcPatrollingComponent", "IsCurrentPatrolPointAnEndPoint");

	Params::UFortAthenaNpcPatrollingComponent_IsCurrentPatrolPointAnEndPoint_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaNpcPatrollingComponent.GetPatrolPointsCount
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UFortAthenaNpcPatrollingComponent::GetPatrolPointsCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaNpcPatrollingComponent", "GetPatrolPointsCount");

	Params::UFortAthenaNpcPatrollingComponent_GetPatrolPointsCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaNpcPatrollingComponent.GetPatrolPath
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortAthenaPatrolPath*       ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAthenaPatrolPath* UFortAthenaNpcPatrollingComponent::GetPatrolPath()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaNpcPatrollingComponent", "GetPatrolPath");

	Params::UFortAthenaNpcPatrollingComponent_GetPatrolPath_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaNpcPatrollingComponent.GetCurrentPatrolPoint
// (Final, RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UFortAthenaPatrolPoint*      ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UFortAthenaPatrolPoint* UFortAthenaNpcPatrollingComponent::GetCurrentPatrolPoint()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaNpcPatrollingComponent", "GetCurrentPatrolPoint");

	Params::UFortAthenaNpcPatrollingComponent_GetCurrentPatrolPoint_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.FortAthenaNpcPatrollingComponent.FindAndSetDynamicPatrolPath
// (Final, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FFortAthenaAIObjectTrackerQueryFindQuery                                                        (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// bool                               bOrientationAlreadyRandomized                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bExcludeCurrentlyUsedPatrolPath                                  (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UFortAthenaNpcPatrollingComponent::FindAndSetDynamicPatrolPath(struct FFortAthenaAIObjectTrackerQuery& FindQuery, bool bOrientationAlreadyRandomized, bool bExcludeCurrentlyUsedPatrolPath)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortAthenaNpcPatrollingComponent", "FindAndSetDynamicPatrolPath");

	Params::UFortAthenaNpcPatrollingComponent_FindAndSetDynamicPatrolPath_Params Parms{};

	Parms.FindQuery = FindQuery;
	Parms.bOrientationAlreadyRandomized = bOrientationAlreadyRandomized;
	Parms.bExcludeCurrentlyUsedPatrolPath = bExcludeCurrentlyUsedPatrolPath;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class FortniteAI.PatrolPathRenderingComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UPatrolPathRenderingComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PatrolPathRenderingComponent");

	return Clss;
}


// PatrolPathRenderingComponent FortniteAI.Default__PatrolPathRenderingComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UPatrolPathRenderingComponent* UPatrolPathRenderingComponent::GetDefaultObj()
{
	static class UPatrolPathRenderingComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UPatrolPathRenderingComponent*>(UPatrolPathRenderingComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.PatrolPointRenderingComponent
// (SceneComponent, PrimitiveComponent)

class UClass* UPatrolPointRenderingComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PatrolPointRenderingComponent");

	return Clss;
}


// PatrolPointRenderingComponent FortniteAI.Default__PatrolPointRenderingComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UPatrolPointRenderingComponent* UPatrolPointRenderingComponent::GetDefaultObj()
{
	static class UPatrolPointRenderingComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UPatrolPointRenderingComponent*>(UPatrolPointRenderingComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaPatrolPoint
// (Actor)

class UClass* UFortAthenaPatrolPoint::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaPatrolPoint");

	return Clss;
}


// FortAthenaPatrolPoint FortniteAI.Default__FortAthenaPatrolPoint
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaPatrolPoint* UFortAthenaPatrolPoint::GetDefaultObj()
{
	static class UFortAthenaPatrolPoint* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaPatrolPoint*>(UFortAthenaPatrolPoint::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaTrackableAIObjectInterface
// (None)

class UClass* UFortAthenaTrackableAIObjectInterface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaTrackableAIObjectInterface");

	return Clss;
}


// FortAthenaTrackableAIObjectInterface FortniteAI.Default__FortAthenaTrackableAIObjectInterface
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaTrackableAIObjectInterface* UFortAthenaTrackableAIObjectInterface::GetDefaultObj()
{
	static class UFortAthenaTrackableAIObjectInterface* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaTrackableAIObjectInterface*>(UFortAthenaTrackableAIObjectInterface::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.AthenaAIPerceptionStimuliSourceComponent
// (None)

class UClass* UAthenaAIPerceptionStimuliSourceComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaAIPerceptionStimuliSourceComponent");

	return Clss;
}


// AthenaAIPerceptionStimuliSourceComponent FortniteAI.Default__AthenaAIPerceptionStimuliSourceComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAthenaAIPerceptionStimuliSourceComponent* UAthenaAIPerceptionStimuliSourceComponent::GetDefaultObj()
{
	static class UAthenaAIPerceptionStimuliSourceComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaAIPerceptionStimuliSourceComponent*>(UAthenaAIPerceptionStimuliSourceComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.AthenaAIPerceptionStimuliSourceComponent.OnOwnerTeamIndexChanged
// (Final, Native, Private)
// Parameters:

void UAthenaAIPerceptionStimuliSourceComponent::OnOwnerTeamIndexChanged()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaAIPerceptionStimuliSourceComponent", "OnOwnerTeamIndexChanged");

	Params::UAthenaAIPerceptionStimuliSourceComponent_OnOwnerTeamIndexChanged_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FortniteAI.AthenaPhysicsAIPerceptionStimuliSourceComponent
// (None)

class UClass* UAthenaPhysicsAIPerceptionStimuliSourceComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaPhysicsAIPerceptionStimuliSourceComponent");

	return Clss;
}


// AthenaPhysicsAIPerceptionStimuliSourceComponent FortniteAI.Default__AthenaPhysicsAIPerceptionStimuliSourceComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAthenaPhysicsAIPerceptionStimuliSourceComponent* UAthenaPhysicsAIPerceptionStimuliSourceComponent::GetDefaultObj()
{
	static class UAthenaPhysicsAIPerceptionStimuliSourceComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaPhysicsAIPerceptionStimuliSourceComponent*>(UAthenaPhysicsAIPerceptionStimuliSourceComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.AthenaTrapAIPerceptionStimuliSourceComponent
// (None)

class UClass* UAthenaTrapAIPerceptionStimuliSourceComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaTrapAIPerceptionStimuliSourceComponent");

	return Clss;
}


// AthenaTrapAIPerceptionStimuliSourceComponent FortniteAI.Default__AthenaTrapAIPerceptionStimuliSourceComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UAthenaTrapAIPerceptionStimuliSourceComponent* UAthenaTrapAIPerceptionStimuliSourceComponent::GetDefaultObj()
{
	static class UAthenaTrapAIPerceptionStimuliSourceComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaTrapAIPerceptionStimuliSourceComponent*>(UAthenaTrapAIPerceptionStimuliSourceComponent::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortCollisionResponseSwapperComponent
// (None)

class UClass* UFortCollisionResponseSwapperComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortCollisionResponseSwapperComponent");

	return Clss;
}


// FortCollisionResponseSwapperComponent FortniteAI.Default__FortCollisionResponseSwapperComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortCollisionResponseSwapperComponent* UFortCollisionResponseSwapperComponent::GetDefaultObj()
{
	static class UFortCollisionResponseSwapperComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortCollisionResponseSwapperComponent*>(UFortCollisionResponseSwapperComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.FortCollisionResponseSwapperComponent.UnregisterCallbacksForOverlap
// (Final, Native, Protected, BlueprintCallable)
// Parameters:

void UFortCollisionResponseSwapperComponent::UnregisterCallbacksForOverlap()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollisionResponseSwapperComponent", "UnregisterCallbacksForOverlap");

	Params::UFortCollisionResponseSwapperComponent_UnregisterCallbacksForOverlap_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortCollisionResponseSwapperComponent.RestoreCollisionResponses
// (Final, Native, Protected)
// Parameters:

void UFortCollisionResponseSwapperComponent::RestoreCollisionResponses()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollisionResponseSwapperComponent", "RestoreCollisionResponses");

	Params::UFortCollisionResponseSwapperComponent_RestoreCollisionResponses_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortCollisionResponseSwapperComponent.RegisterCallbacksForOverlap
// (Final, Native, Protected, BlueprintCallable)
// Parameters:
// class UPrimitiveComponent*         InCollisionPrimitiveComponent                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         InOverlapPrimitiveComponent                                      (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCollisionResponseSwapperComponent::RegisterCallbacksForOverlap(class UPrimitiveComponent* InCollisionPrimitiveComponent, class UPrimitiveComponent* InOverlapPrimitiveComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollisionResponseSwapperComponent", "RegisterCallbacksForOverlap");

	Params::UFortCollisionResponseSwapperComponent_RegisterCallbacksForOverlap_Params Parms{};

	Parms.InCollisionPrimitiveComponent = InCollisionPrimitiveComponent;
	Parms.InOverlapPrimitiveComponent = InOverlapPrimitiveComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortCollisionResponseSwapperComponent.HandleEndOverlap
// (Final, Native, Protected)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      OtherActor                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         OtherComp                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OtherBodyIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UFortCollisionResponseSwapperComponent::HandleEndOverlap(class UPrimitiveComponent* OverlappedComponent, class UActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollisionResponseSwapperComponent", "HandleEndOverlap");

	Params::UFortCollisionResponseSwapperComponent_HandleEndOverlap_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.FortCollisionResponseSwapperComponent.HandleBeginOverlap
// (Final, Native, Protected, HasOutParams)
// Parameters:
// class UPrimitiveComponent*         OverlappedComponent                                              (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      OtherActor                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         OtherComp                                                        (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              OtherBodyIndex                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bFromSweep                                                       (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FHitResult                  SweepResult                                                      (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UFortCollisionResponseSwapperComponent::HandleBeginOverlap(class UPrimitiveComponent* OverlappedComponent, class UActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, struct FHitResult& SweepResult)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortCollisionResponseSwapperComponent", "HandleBeginOverlap");

	Params::UFortCollisionResponseSwapperComponent_HandleBeginOverlap_Params Parms{};

	Parms.OverlappedComponent = OverlappedComponent;
	Parms.OtherActor = OtherActor;
	Parms.OtherComp = OtherComp;
	Parms.OtherBodyIndex = OtherBodyIndex;
	Parms.bFromSweep = bFromSweep;
	Parms.SweepResult = SweepResult;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FortniteAI.FortAthenaAIPerk_Ambush
// (None)

class UClass* UFortAthenaAIPerk_Ambush::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIPerk_Ambush");

	return Clss;
}


// FortAthenaAIPerk_Ambush FortniteAI.Default__FortAthenaAIPerk_Ambush
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIPerk_Ambush* UFortAthenaAIPerk_Ambush::GetDefaultObj()
{
	static class UFortAthenaAIPerk_Ambush* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIPerk_Ambush*>(UFortAthenaAIPerk_Ambush::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAIPerk_Bunker
// (None)

class UClass* UFortAthenaAIPerk_Bunker::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIPerk_Bunker");

	return Clss;
}


// FortAthenaAIPerk_Bunker FortniteAI.Default__FortAthenaAIPerk_Bunker
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIPerk_Bunker* UFortAthenaAIPerk_Bunker::GetDefaultObj()
{
	static class UFortAthenaAIPerk_Bunker* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIPerk_Bunker*>(UFortAthenaAIPerk_Bunker::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.FortAthenaAIPerk_EvasiveManeuvers
// (None)

class UClass* UFortAthenaAIPerk_EvasiveManeuvers::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortAthenaAIPerk_EvasiveManeuvers");

	return Clss;
}


// FortAthenaAIPerk_EvasiveManeuvers FortniteAI.Default__FortAthenaAIPerk_EvasiveManeuvers
// (Public, ClassDefaultObject, ArchetypeObject)

class UFortAthenaAIPerk_EvasiveManeuvers* UFortAthenaAIPerk_EvasiveManeuvers::GetDefaultObj()
{
	static class UFortAthenaAIPerk_EvasiveManeuvers* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortAthenaAIPerk_EvasiveManeuvers*>(UFortAthenaAIPerk_EvasiveManeuvers::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.AthenaAIBotDebugMiniMapIndicator
// (None)

class UClass* UAthenaAIBotDebugMiniMapIndicator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaAIBotDebugMiniMapIndicator");

	return Clss;
}


// AthenaAIBotDebugMiniMapIndicator FortniteAI.Default__AthenaAIBotDebugMiniMapIndicator
// (Public, ClassDefaultObject, ArchetypeObject)

class UAthenaAIBotDebugMiniMapIndicator* UAthenaAIBotDebugMiniMapIndicator::GetDefaultObj()
{
	static class UAthenaAIBotDebugMiniMapIndicator* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaAIBotDebugMiniMapIndicator*>(UAthenaAIBotDebugMiniMapIndicator::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.AthenaAIBotPOIDebugMiniMapIndicator
// (None)

class UClass* UAthenaAIBotPOIDebugMiniMapIndicator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaAIBotPOIDebugMiniMapIndicator");

	return Clss;
}


// AthenaAIBotPOIDebugMiniMapIndicator FortniteAI.Default__AthenaAIBotPOIDebugMiniMapIndicator
// (Public, ClassDefaultObject, ArchetypeObject)

class UAthenaAIBotPOIDebugMiniMapIndicator* UAthenaAIBotPOIDebugMiniMapIndicator::GetDefaultObj()
{
	static class UAthenaAIBotPOIDebugMiniMapIndicator* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaAIBotPOIDebugMiniMapIndicator*>(UAthenaAIBotPOIDebugMiniMapIndicator::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.AthenaAIPopulationTracker
// (None)

class UClass* UAthenaAIPopulationTracker::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaAIPopulationTracker");

	return Clss;
}


// AthenaAIPopulationTracker FortniteAI.Default__AthenaAIPopulationTracker
// (Public, ClassDefaultObject, ArchetypeObject)

class UAthenaAIPopulationTracker* UAthenaAIPopulationTracker::GetDefaultObj()
{
	static class UAthenaAIPopulationTracker* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaAIPopulationTracker*>(UAthenaAIPopulationTracker::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.AthenaAIPopulationTracker.OnFortPawnDied
// (Final, Native, Public, HasDefaults)
// Parameters:
// class UActor*                      DamagedActor                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Damage                                                           (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UController*                 InstigatedBy                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      DamageCauser                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     HitLocation                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPrimitiveComponent*         FHitComponent                                                    (Parm, ZeroConstructor, InstancedReference, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class FName                        BoneName                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     Momentum                                                         (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaAIPopulationTracker::OnFortPawnDied(class UActor* DamagedActor, float Damage, class UController* InstigatedBy, class UActor* DamageCauser, const struct FVector& HitLocation, class UPrimitiveComponent* FHitComponent, class FName BoneName, const struct FVector& Momentum)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaAIPopulationTracker", "OnFortPawnDied");

	Params::UAthenaAIPopulationTracker_OnFortPawnDied_Params Parms{};

	Parms.DamagedActor = DamagedActor;
	Parms.Damage = Damage;
	Parms.InstigatedBy = InstigatedBy;
	Parms.DamageCauser = DamageCauser;
	Parms.HitLocation = HitLocation;
	Parms.FHitComponent = FHitComponent;
	Parms.BoneName = BoneName;
	Parms.Momentum = Momentum;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.AthenaAIPopulationTracker.OnFortPawnDestroyed
// (Final, Native, Public)
// Parameters:
// class UActor*                      DestroyedActor                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaAIPopulationTracker::OnFortPawnDestroyed(class UActor* DestroyedActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaAIPopulationTracker", "OnFortPawnDestroyed");

	Params::UAthenaAIPopulationTracker_OnFortPawnDestroyed_Params Parms{};

	Parms.DestroyedActor = DestroyedActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.AthenaAIPopulationTracker.OnAISpawned
// (Final, Native, Private)
// Parameters:
// class UPawn*                       Pawn                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              RequestID                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaAIPopulationTracker::OnAISpawned(class UPawn* Pawn, int32 RequestID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaAIPopulationTracker", "OnAISpawned");

	Params::UAthenaAIPopulationTracker_OnAISpawned_Params Parms{};

	Parms.Pawn = Pawn;
	Parms.RequestID = RequestID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.AthenaAIPopulationTracker.OnAgentGameOver
// (Final, Native, Private)
// Parameters:
// class UFortAthenaAIBotController*  AIBotController                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPawn*                   Pawn                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UController*                 Instigator                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaAIPopulationTracker::OnAgentGameOver(class UFortAthenaAIBotController* AIBotController, class UFortPawn* Pawn, class UController* Instigator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaAIPopulationTracker", "OnAgentGameOver");

	Params::UAthenaAIPopulationTracker_OnAgentGameOver_Params Parms{};

	Parms.AIBotController = AIBotController;
	Parms.Pawn = Pawn;
	Parms.Instigator = Instigator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.AthenaAIPopulationTracker.GetNumTotalBots
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAthenaAIPopulationTracker::GetNumTotalBots()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaAIPopulationTracker", "GetNumTotalBots");

	Params::UAthenaAIPopulationTracker_GetNumTotalBots_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.AthenaAIPopulationTracker.GetNumPlayerBots
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAthenaAIPopulationTracker::GetNumPlayerBots()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaAIPopulationTracker", "GetNumPlayerBots");

	Params::UAthenaAIPopulationTracker_GetNumPlayerBots_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.AthenaAIPopulationTracker.GetNumNonAthenaParticipantBots
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAthenaAIPopulationTracker::GetNumNonAthenaParticipantBots()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaAIPopulationTracker", "GetNumNonAthenaParticipantBots");

	Params::UAthenaAIPopulationTracker_GetNumNonAthenaParticipantBots_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.AthenaAIPopulationTracker.GetNumAIPawn
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAthenaAIPopulationTracker::GetNumAIPawn()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaAIPopulationTracker", "GetNumAIPawn");

	Params::UAthenaAIPopulationTracker_GetNumAIPawn_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.AthenaAIPopulationTracker.GetAIPopulationTrackerCount
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FAIPopulationCountSnapshot  ReturnValue                                                      (Parm, OutParm, ReturnParm, NoDestructor, NativeAccessSpecifierPublic)

struct FAIPopulationCountSnapshot UAthenaAIPopulationTracker::GetAIPopulationTrackerCount()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaAIPopulationTracker", "GetAIPopulationTrackerCount");

	Params::UAthenaAIPopulationTracker_GetAIPopulationTrackerCount_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.AthenaAIPopulationTracker.GetAIMatchingQuery
// (Final, RequiredAPI, BlueprintAuthorityOnly, Native, Public, HasOutParams, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FGameplayTagQuery           TagQuery                                                         (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)
// TArray<class UController*>         ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UController*> UAthenaAIPopulationTracker::GetAIMatchingQuery(struct FGameplayTagQuery& TagQuery)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaAIPopulationTracker", "GetAIMatchingQuery");

	Params::UAthenaAIPopulationTracker_GetAIMatchingQuery_Params Parms{};

	Parms.TagQuery = TagQuery;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class FortniteAI.AthenaAIService
// (None)

class UClass* UAthenaAIService::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaAIService");

	return Clss;
}


// AthenaAIService FortniteAI.Default__AthenaAIService
// (Public, ClassDefaultObject, ArchetypeObject)

class UAthenaAIService* UAthenaAIService::GetDefaultObj()
{
	static class UAthenaAIService* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaAIService*>(UAthenaAIService::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.AthenaAIServiceCover
// (None)

class UClass* UAthenaAIServiceCover::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaAIServiceCover");

	return Clss;
}


// AthenaAIServiceCover FortniteAI.Default__AthenaAIServiceCover
// (Public, ClassDefaultObject, ArchetypeObject)

class UAthenaAIServiceCover* UAthenaAIServiceCover::GetDefaultObj()
{
	static class UAthenaAIServiceCover* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaAIServiceCover*>(UAthenaAIServiceCover::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.AthenaAIServiceCover.GetAthenaAIServiceCover
// (Final, RequiredAPI, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAthenaAIServiceCover*       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAthenaAIServiceCover* UAthenaAIServiceCover::GetAthenaAIServiceCover(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaAIServiceCover", "GetAthenaAIServiceCover");

	Params::UAthenaAIServiceCover_GetAthenaAIServiceCover_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class FortniteAI.AthenaAIServicePlayerBots
// (None)

class UClass* UAthenaAIServicePlayerBots::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaAIServicePlayerBots");

	return Clss;
}


// AthenaAIServicePlayerBots FortniteAI.Default__AthenaAIServicePlayerBots
// (Public, ClassDefaultObject, ArchetypeObject)

class UAthenaAIServicePlayerBots* UAthenaAIServicePlayerBots::GetDefaultObj()
{
	static class UAthenaAIServicePlayerBots* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaAIServicePlayerBots*>(UAthenaAIServicePlayerBots::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.AthenaAIServicePlayerBots.SpawnAI
// (Final, RequiredAPI, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVector                     InSpawnLocation                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FRotator                    InSpawnRotation                                                  (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
// class UFortAthenaAISpawnerDataComponentList*AISpawnerComponentList                                           (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPawn*                       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPawn* UAthenaAIServicePlayerBots::SpawnAI(struct FVector& InSpawnLocation, struct FRotator& InSpawnRotation, class UFortAthenaAISpawnerDataComponentList* AISpawnerComponentList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaAIServicePlayerBots", "SpawnAI");

	Params::UAthenaAIServicePlayerBots_SpawnAI_Params Parms{};

	Parms.InSpawnLocation = InSpawnLocation;
	Parms.InSpawnRotation = InSpawnRotation;
	Parms.AISpawnerComponentList = AISpawnerComponentList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.AthenaAIServicePlayerBots.OnServerGameMemberRemoved
// (Final, Native, Private)
// Parameters:
// uint8                              InSquadId                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              InTeamIndex                                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPlayerStateAthena*      ChangedPS                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaAIServicePlayerBots::OnServerGameMemberRemoved(uint8 InSquadId, uint8 InTeamIndex, class UFortPlayerStateAthena* ChangedPS)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaAIServicePlayerBots", "OnServerGameMemberRemoved");

	Params::UAthenaAIServicePlayerBots_OnServerGameMemberRemoved_Params Parms{};

	Parms.InSquadId = InSquadId;
	Parms.InTeamIndex = InTeamIndex;
	Parms.ChangedPS = ChangedPS;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.AthenaAIServicePlayerBots.OnSafeZoneUpdated
// (Final, Native, Private, HasOutParams)
// Parameters:
// struct FFortSafeZonePhaseUpdatedEventEvent                                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UAthenaAIServicePlayerBots::OnSafeZoneUpdated(struct FFortSafeZonePhaseUpdatedEvent& Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaAIServicePlayerBots", "OnSafeZoneUpdated");

	Params::UAthenaAIServicePlayerBots_OnSafeZoneUpdated_Params Parms{};

	Parms.Event = Event;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.AthenaAIServicePlayerBots.OnPlaylistDataReady
// (Final, Native, Protected, HasOutParams)
// Parameters:
// class UFortGameStateAthena*        GameState                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPlaylist*               Playlist                                                         (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTagContainer       PlaylistContextTags                                              (ConstParm, Parm, OutParm, ReferenceParm, NativeAccessSpecifierPublic)

void UAthenaAIServicePlayerBots::OnPlaylistDataReady(class UFortGameStateAthena* GameState, class UFortPlaylist* Playlist, struct FGameplayTagContainer& PlaylistContextTags)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaAIServicePlayerBots", "OnPlaylistDataReady");

	Params::UAthenaAIServicePlayerBots_OnPlaylistDataReady_Params Parms{};

	Parms.GameState = GameState;
	Parms.Playlist = Playlist;
	Parms.PlaylistContextTags = PlaylistContextTags;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.AthenaAIServicePlayerBots.OnGamePhaseLogicReady
// (RequiredAPI, Native, Protected, HasOutParams)
// Parameters:
// struct FFortBattleRoyaleGamePhaseLogicComponentReadyEventEvent                                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, ContainsInstancedReference, NativeAccessSpecifierPublic)

void UAthenaAIServicePlayerBots::OnGamePhaseLogicReady(struct FFortBattleRoyaleGamePhaseLogicComponentReadyEvent& Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaAIServicePlayerBots", "OnGamePhaseLogicReady");

	Params::UAthenaAIServicePlayerBots_OnGamePhaseLogicReady_Params Parms{};

	Parms.Event = Event;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.AthenaAIServicePlayerBots.OnGamePhaseChanged
// (RequiredAPI, Native, Protected, HasOutParams)
// Parameters:
// struct FFortGamePhaseUpdatedEvent  Event                                                            (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, NativeAccessSpecifierPublic)

void UAthenaAIServicePlayerBots::OnGamePhaseChanged(struct FFortGamePhaseUpdatedEvent& Event)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaAIServicePlayerBots", "OnGamePhaseChanged");

	Params::UAthenaAIServicePlayerBots_OnGamePhaseChanged_Params Parms{};

	Parms.Event = Event;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.AthenaAIServicePlayerBots.OnAIPawnSpawned
// (Final, Native, Private)
// Parameters:
// class UController*                 SpawnedController                                                (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsABot                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPawn*                   FortAIPawn                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPlayerPawn*             PlayerPawn                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaAIServicePlayerBots::OnAIPawnSpawned(class UController* SpawnedController, bool bIsABot, class UFortPawn* FortAIPawn, class UFortPlayerPawn* PlayerPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaAIServicePlayerBots", "OnAIPawnSpawned");

	Params::UAthenaAIServicePlayerBots_OnAIPawnSpawned_Params Parms{};

	Parms.SpawnedController = SpawnedController;
	Parms.bIsABot = bIsABot;
	Parms.FortAIPawn = FortAIPawn;
	Parms.PlayerPawn = PlayerPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.AthenaAIServicePlayerBots.OnAgentGameOver
// (RequiredAPI, Native, Protected)
// Parameters:
// class UFortAthenaAIBotController*  AIBotController                                                  (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UFortPawn*                   Pawn                                                             (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UController*                 Instigator                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaAIServicePlayerBots::OnAgentGameOver(class UFortAthenaAIBotController* AIBotController, class UFortPawn* Pawn, class UController* Instigator)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaAIServicePlayerBots", "OnAgentGameOver");

	Params::UAthenaAIServicePlayerBots_OnAgentGameOver_Params Parms{};

	Parms.AIBotController = AIBotController;
	Parms.Pawn = Pawn;
	Parms.Instigator = Instigator;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.AthenaAIServicePlayerBots.KillBots
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// bool                               bKillPlayers                                                     (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bKillNPCs                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// uint8                              TeamIndex                                                        (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UActor*                      BotOwner                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaAIServicePlayerBots::KillBots(bool bKillPlayers, bool bKillNPCs, uint8 TeamIndex, class UActor* BotOwner)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaAIServicePlayerBots", "KillBots");

	Params::UAthenaAIServicePlayerBots_KillBots_Params Parms{};

	Parms.bKillPlayers = bKillPlayers;
	Parms.bKillNPCs = bKillNPCs;
	Parms.TeamIndex = TeamIndex;
	Parms.BotOwner = BotOwner;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.AthenaAIServicePlayerBots.JoinTeam
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UController*                 SourceTeamController                                             (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UController*                 DestinationTeamController                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaAIServicePlayerBots::JoinTeam(class UController* SourceTeamController, class UController* DestinationTeamController)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaAIServicePlayerBots", "JoinTeam");

	Params::UAthenaAIServicePlayerBots_JoinTeam_Params Parms{};

	Parms.SourceTeamController = SourceTeamController;
	Parms.DestinationTeamController = DestinationTeamController;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.AthenaAIServicePlayerBots.IsWeaponSupported
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UFortWeapon*                 FortWeapon                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAthenaAIServicePlayerBots::IsWeaponSupported(class UFortWeapon* FortWeapon)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaAIServicePlayerBots", "IsWeaponSupported");

	Params::UAthenaAIServicePlayerBots_IsWeaponSupported_Params Parms{};

	Parms.FortWeapon = FortWeapon;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.AthenaAIServicePlayerBots.FetchNextCustomBotCosmeticVariantID
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UFortPlayerPawnAthena*       BotPawn                                                          (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAthenaAIServicePlayerBots::FetchNextCustomBotCosmeticVariantID(class UFortPlayerPawnAthena* BotPawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaAIServicePlayerBots", "FetchNextCustomBotCosmeticVariantID");

	Params::UAthenaAIServicePlayerBots_FetchNextCustomBotCosmeticVariantID_Params Parms{};

	Parms.BotPawn = BotPawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.AthenaAIServicePlayerBots.AddPOIVolume
// (Final, Native, Private, BlueprintCallable)
// Parameters:
// class UFortPoiVolume*              POIVolume                                                        (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAthenaAIServicePOIList POIList                                                          (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaAIServicePlayerBots::AddPOIVolume(class UFortPoiVolume* POIVolume, enum class EAthenaAIServicePOIList POIList)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaAIServicePlayerBots", "AddPOIVolume");

	Params::UAthenaAIServicePlayerBots_AddPOIVolume_Params Parms{};

	Parms.POIVolume = POIVolume;
	Parms.POIList = POIList;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FortniteAI.AthenaAIServiceCreativePlayerBots
// (None)

class UClass* UAthenaAIServiceCreativePlayerBots::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaAIServiceCreativePlayerBots");

	return Clss;
}


// AthenaAIServiceCreativePlayerBots FortniteAI.Default__AthenaAIServiceCreativePlayerBots
// (Public, ClassDefaultObject, ArchetypeObject)

class UAthenaAIServiceCreativePlayerBots* UAthenaAIServiceCreativePlayerBots::GetDefaultObj()
{
	static class UAthenaAIServiceCreativePlayerBots* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaAIServiceCreativePlayerBots*>(UAthenaAIServiceCreativePlayerBots::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.AthenaAIServiceCreativePlayerBots.OnMinigameStateChanged
// (RequiredAPI, Native, Public)
// Parameters:
// class UFortMinigame*               Minigame                                                         (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EFortMinigameState      MinigameState                                                    (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaAIServiceCreativePlayerBots::OnMinigameStateChanged(class UFortMinigame* Minigame, enum class EFortMinigameState MinigameState)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaAIServiceCreativePlayerBots", "OnMinigameStateChanged");

	Params::UAthenaAIServiceCreativePlayerBots_OnMinigameStateChanged_Params Parms{};

	Parms.Minigame = Minigame;
	Parms.MinigameState = MinigameState;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.AthenaAIServiceCreativePlayerBots.OnFinishedAddingMinigamePlayer
// (Final, Native, Protected)
// Parameters:
// struct FUniqueNetIdRepl            UniqueNetId                                                      (Parm, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bIsLocalPlayer                                                   (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaAIServiceCreativePlayerBots::OnFinishedAddingMinigamePlayer(const struct FUniqueNetIdRepl& UniqueNetId, bool bIsLocalPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaAIServiceCreativePlayerBots", "OnFinishedAddingMinigamePlayer");

	Params::UAthenaAIServiceCreativePlayerBots_OnFinishedAddingMinigamePlayer_Params Parms{};

	Parms.UniqueNetId = UniqueNetId;
	Parms.bIsLocalPlayer = bIsLocalPlayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.AthenaAIServiceCreativePlayerBots.IsMinigameBotSpawningRequired
// (RequiredAPI, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAthenaAIServiceCreativePlayerBots::IsMinigameBotSpawningRequired()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaAIServiceCreativePlayerBots", "IsMinigameBotSpawningRequired");

	Params::UAthenaAIServiceCreativePlayerBots_IsMinigameBotSpawningRequired_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.AthenaAIServiceCreativePlayerBots.GetLastHiringPlayer
// (Final, Native, Public, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// class UActor*                      HiredOwner                                                       (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPlayerController*           ReturnValue                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UPlayerController* UAthenaAIServiceCreativePlayerBots::GetLastHiringPlayer(class UActor* HiredOwner)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaAIServiceCreativePlayerBots", "GetLastHiringPlayer");

	Params::UAthenaAIServiceCreativePlayerBots_GetLastHiringPlayer_Params Parms{};

	Parms.HiredOwner = HiredOwner;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.AthenaAIServiceCreativePlayerBots.ClearHiringHistory
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UActor*                      HiredOwner                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaAIServiceCreativePlayerBots::ClearHiringHistory(class UActor* HiredOwner)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaAIServiceCreativePlayerBots", "ClearHiringHistory");

	Params::UAthenaAIServiceCreativePlayerBots_ClearHiringHistory_Params Parms{};

	Parms.HiredOwner = HiredOwner;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.AthenaAIServiceCreativePlayerBots.AddHiringHistory
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class UActor*                      HiredOwner                                                       (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UPlayerController*           HiringPlayer                                                     (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaAIServiceCreativePlayerBots::AddHiringHistory(class UActor* HiredOwner, class UPlayerController* HiringPlayer)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaAIServiceCreativePlayerBots", "AddHiringHistory");

	Params::UAthenaAIServiceCreativePlayerBots_AddHiringHistory_Params Parms{};

	Parms.HiredOwner = HiredOwner;
	Parms.HiringPlayer = HiringPlayer;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FortniteAI.AthenaAIServiceGroup
// (None)

class UClass* UAthenaAIServiceGroup::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaAIServiceGroup");

	return Clss;
}


// AthenaAIServiceGroup FortniteAI.Default__AthenaAIServiceGroup
// (Public, ClassDefaultObject, ArchetypeObject)

class UAthenaAIServiceGroup* UAthenaAIServiceGroup::GetDefaultObj()
{
	static class UAthenaAIServiceGroup* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaAIServiceGroup*>(UAthenaAIServiceGroup::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.AthenaAIServiceLoot
// (None)

class UClass* UAthenaAIServiceLoot::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaAIServiceLoot");

	return Clss;
}


// AthenaAIServiceLoot FortniteAI.Default__AthenaAIServiceLoot
// (Public, ClassDefaultObject, ArchetypeObject)

class UAthenaAIServiceLoot* UAthenaAIServiceLoot::GetDefaultObj()
{
	static class UAthenaAIServiceLoot* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaAIServiceLoot*>(UAthenaAIServiceLoot::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.AthenaAIServiceLoot.UpdateSupplyDropStatus
// (Final, Native, Private)
// Parameters:

void UAthenaAIServiceLoot::UpdateSupplyDropStatus()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaAIServiceLoot", "UpdateSupplyDropStatus");

	Params::UAthenaAIServiceLoot_UpdateSupplyDropStatus_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.AthenaAIServiceLoot.UpdateMovingLoots
// (Final, Native, Private)
// Parameters:

void UAthenaAIServiceLoot::UpdateMovingLoots()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaAIServiceLoot", "UpdateMovingLoots");

	Params::UAthenaAIServiceLoot_UpdateMovingLoots_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.AthenaAIServiceLoot.OnGamePhaseStepChanged
// (Final, Native, Public, HasOutParams)
// Parameters:
// TScriptInterface<class UFortSafeZoneInterface>SafeZoneInterface                                                (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// enum class EAthenaGamePhaseStep    GamePhaseStep                                                    (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaAIServiceLoot::OnGamePhaseStepChanged(TScriptInterface<class UFortSafeZoneInterface>& SafeZoneInterface, enum class EAthenaGamePhaseStep GamePhaseStep)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaAIServiceLoot", "OnGamePhaseStepChanged");

	Params::UAthenaAIServiceLoot_OnGamePhaseStepChanged_Params Parms{};

	Parms.SafeZoneInterface = SafeZoneInterface;
	Parms.GamePhaseStep = GamePhaseStep;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.AthenaAIServiceLoot.K2_RemoveGameplayTagFromLoot
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UActor*                      LootActor                                                        (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                GameplayTag                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaAIServiceLoot::K2_RemoveGameplayTagFromLoot(class UActor* LootActor, struct FGameplayTag& GameplayTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaAIServiceLoot", "K2_RemoveGameplayTagFromLoot");

	Params::UAthenaAIServiceLoot_K2_RemoveGameplayTagFromLoot_Params Parms{};

	Parms.LootActor = LootActor;
	Parms.GameplayTag = GameplayTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.AthenaAIServiceLoot.K2_AddGameplayTagToLoot
// (Final, BlueprintAuthorityOnly, Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UActor*                      LootActor                                                        (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FGameplayTag                GameplayTag                                                      (ConstParm, Parm, OutParm, ReferenceParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaAIServiceLoot::K2_AddGameplayTagToLoot(class UActor* LootActor, struct FGameplayTag& GameplayTag)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaAIServiceLoot", "K2_AddGameplayTagToLoot");

	Params::UAthenaAIServiceLoot_K2_AddGameplayTagToLoot_Params Parms{};

	Parms.LootActor = LootActor;
	Parms.GameplayTag = GameplayTag;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class FortniteAI.AthenaAIServiceManager
// (None)

class UClass* UAthenaAIServiceManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaAIServiceManager");

	return Clss;
}


// AthenaAIServiceManager FortniteAI.Default__AthenaAIServiceManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UAthenaAIServiceManager* UAthenaAIServiceManager::GetDefaultObj()
{
	static class UAthenaAIServiceManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaAIServiceManager*>(UAthenaAIServiceManager::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.CacheSafeZoneLocation
// (None)

class UClass* UCacheSafeZoneLocation::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("CacheSafeZoneLocation");

	return Clss;
}


// CacheSafeZoneLocation FortniteAI.Default__CacheSafeZoneLocation
// (Public, ClassDefaultObject, ArchetypeObject)

class UCacheSafeZoneLocation* UCacheSafeZoneLocation::GetDefaultObj()
{
	static class UCacheSafeZoneLocation* Default = nullptr;

	if (!Default)
		Default = static_cast<UCacheSafeZoneLocation*>(UCacheSafeZoneLocation::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.AthenaAIServiceVehicle
// (None)

class UClass* UAthenaAIServiceVehicle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaAIServiceVehicle");

	return Clss;
}


// AthenaAIServiceVehicle FortniteAI.Default__AthenaAIServiceVehicle
// (Public, ClassDefaultObject, ArchetypeObject)

class UAthenaAIServiceVehicle* UAthenaAIServiceVehicle::GetDefaultObj()
{
	static class UAthenaAIServiceVehicle* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaAIServiceVehicle*>(UAthenaAIServiceVehicle::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.AthenaAIServiceZoneManager
// (None)

class UClass* UAthenaAIServiceZoneManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaAIServiceZoneManager");

	return Clss;
}


// AthenaAIServiceZoneManager FortniteAI.Default__AthenaAIServiceZoneManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UAthenaAIServiceZoneManager* UAthenaAIServiceZoneManager::GetDefaultObj()
{
	static class UAthenaAIServiceZoneManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaAIServiceZoneManager*>(UAthenaAIServiceZoneManager::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.AthenaAIServiceZoneManager.UnregisterOccluder
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UActor*                      OccluderActor                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaAIServiceZoneManager::UnregisterOccluder(class UActor* OccluderActor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaAIServiceZoneManager", "UnregisterOccluder");

	Params::UAthenaAIServiceZoneManager_UnregisterOccluder_Params Parms{};

	Parms.OccluderActor = OccluderActor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.AthenaAIServiceZoneManager.UnregisterDangerZone
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaAIServiceZoneManager::UnregisterDangerZone(class UActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaAIServiceZoneManager", "UnregisterDangerZone");

	Params::UAthenaAIServiceZoneManager_UnregisterDangerZone_Params Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.AthenaAIServiceZoneManager.RegisterOccluder
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UActor*                      OccluderActor                                                    (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              SphereRadius                                                     (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaAIServiceZoneManager::RegisterOccluder(class UActor* OccluderActor, float SphereRadius)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaAIServiceZoneManager", "RegisterOccluder");

	Params::UAthenaAIServiceZoneManager_RegisterOccluder_Params Parms{};

	Parms.OccluderActor = OccluderActor;
	Parms.SphereRadius = SphereRadius;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.AthenaAIServiceZoneManager.RegisterDangerZone
// (Final, BlueprintAuthorityOnly, Native, Public, BlueprintCallable)
// Parameters:
// class UActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// float                              Radius                                                           (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaAIServiceZoneManager::RegisterDangerZone(class UActor* Actor, float Radius)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaAIServiceZoneManager", "RegisterDangerZone");

	Params::UAthenaAIServiceZoneManager_RegisterDangerZone_Params Parms{};

	Parms.Actor = Actor;
	Parms.Radius = Radius;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.AthenaAIServiceZoneManager.OnZoneDestroyed
// (Final, BlueprintAuthorityOnly, Native, Private, BlueprintCallable)
// Parameters:
// class UActor*                      Actor                                                            (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaAIServiceZoneManager::OnZoneDestroyed(class UActor* Actor)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaAIServiceZoneManager", "OnZoneDestroyed");

	Params::UAthenaAIServiceZoneManager_OnZoneDestroyed_Params Parms{};

	Parms.Actor = Actor;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.AthenaAIServiceZoneManager.IsLOFOccluded
// (Final, RequiredAPI, BlueprintAuthorityOnly, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     StartLocation                                                    (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FVector                     EndLocation                                                      (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAthenaAIServiceZoneManager::IsLOFOccluded(struct FVector& StartLocation, struct FVector& EndLocation)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaAIServiceZoneManager", "IsLOFOccluded");

	Params::UAthenaAIServiceZoneManager_IsLOFOccluded_Params Parms{};

	Parms.StartLocation = StartLocation;
	Parms.EndLocation = EndLocation;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.AthenaAIServiceZoneManager.IsInDangerZone
// (Final, RequiredAPI, BlueprintAuthorityOnly, Native, Public, HasOutParams, HasDefaults, BlueprintCallable, BlueprintPure, Const)
// Parameters:
// struct FVector                     Location                                                         (ConstParm, Parm, OutParm, ZeroConstructor, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAthenaAIServiceZoneManager::IsInDangerZone(struct FVector& Location)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaAIServiceZoneManager", "IsInDangerZone");

	Params::UAthenaAIServiceZoneManager_IsInDangerZone_Params Parms{};

	Parms.Location = Location;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.AthenaAIServiceZoneManager.GetAthenaAIServiceZoneManager
// (Final, RequiredAPI, BlueprintAuthorityOnly, Native, Static, Public, BlueprintCallable, BlueprintPure)
// Parameters:
// class UObject*                     WorldContextObject                                               (ConstParm, Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// class UAthenaAIServiceZoneManager* ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

class UAthenaAIServiceZoneManager* UAthenaAIServiceZoneManager::GetAthenaAIServiceZoneManager(class UObject* WorldContextObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaAIServiceZoneManager", "GetAthenaAIServiceZoneManager");

	Params::UAthenaAIServiceZoneManager_GetAthenaAIServiceZoneManager_Params Parms{};

	Parms.WorldContextObject = WorldContextObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class FortniteAI.AthenaAISpawner
// (None)

class UClass* UAthenaAISpawner::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaAISpawner");

	return Clss;
}


// AthenaAISpawner FortniteAI.Default__AthenaAISpawner
// (Public, ClassDefaultObject, ArchetypeObject)

class UAthenaAISpawner* UAthenaAISpawner::GetDefaultObj()
{
	static class UAthenaAISpawner* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaAISpawner*>(UAthenaAISpawner::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.AthenaAISpawner.RequestSpawn
// (Final, RequiredAPI, Native, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UFortAthenaAISpawnerDataComponentList*AISpawnerComponentList                                           (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// struct FTransform                  SpawnTransform                                                   (ConstParm, Parm, OutParm, ReferenceParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               bUrgentRequest                                                   (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// int32                              ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

int32 UAthenaAISpawner::RequestSpawn(class UFortAthenaAISpawnerDataComponentList* AISpawnerComponentList, struct FTransform& SpawnTransform, bool bUrgentRequest)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaAISpawner", "RequestSpawn");

	Params::UAthenaAISpawner_RequestSpawn_Params Parms{};

	Parms.AISpawnerComponentList = AISpawnerComponentList;
	Parms.SpawnTransform = SpawnTransform;
	Parms.bUrgentRequest = bUrgentRequest;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.AthenaAISpawner.QueueForDespawn
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// class UActor*                      ActorToDespawn                                                   (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UAthenaAISpawner::QueueForDespawn(class UActor* ActorToDespawn)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaAISpawner", "QueueForDespawn");

	Params::UAthenaAISpawner_QueueForDespawn_Params Parms{};

	Parms.ActorToDespawn = ActorToDespawn;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.AthenaAISpawner.CancelRequest
// (Final, RequiredAPI, Native, Public, BlueprintCallable)
// Parameters:
// int32                              RequestID                                                        (ConstParm, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
// bool                               ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

bool UAthenaAISpawner::CancelRequest(int32 RequestID)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AthenaAISpawner", "CancelRequest");

	Params::UAthenaAISpawner_CancelRequest_Params Parms{};

	Parms.RequestID = RequestID;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Class FortniteAI.AthenaAIVehicleAvoidanceManager
// (None)

class UClass* UAthenaAIVehicleAvoidanceManager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AthenaAIVehicleAvoidanceManager");

	return Clss;
}


// AthenaAIVehicleAvoidanceManager FortniteAI.Default__AthenaAIVehicleAvoidanceManager
// (Public, ClassDefaultObject, ArchetypeObject)

class UAthenaAIVehicleAvoidanceManager* UAthenaAIVehicleAvoidanceManager::GetDefaultObj()
{
	static class UAthenaAIVehicleAvoidanceManager* Default = nullptr;

	if (!Default)
		Default = static_cast<UAthenaAIVehicleAvoidanceManager*>(UAthenaAIVehicleAvoidanceManager::StaticClass()->DefaultObject);

	return Default;
}


// Class FortniteAI.DespawnExpiredPawnComponent
// (None)

class UClass* UDespawnExpiredPawnComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DespawnExpiredPawnComponent");

	return Clss;
}


// DespawnExpiredPawnComponent FortniteAI.Default__DespawnExpiredPawnComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UDespawnExpiredPawnComponent* UDespawnExpiredPawnComponent::GetDefaultObj()
{
	static class UDespawnExpiredPawnComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UDespawnExpiredPawnComponent*>(UDespawnExpiredPawnComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function FortniteAI.DespawnExpiredPawnComponent.GetDespawnRifts
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// TArray<class UBuildingRift*>       ReturnValue                                                      (Parm, OutParm, ZeroConstructor, ReturnParm, NativeAccessSpecifierPublic)

TArray<class UBuildingRift*> UDespawnExpiredPawnComponent::GetDespawnRifts()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DespawnExpiredPawnComponent", "GetDespawnRifts");

	Params::UDespawnExpiredPawnComponent_GetDespawnRifts_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function FortniteAI.DespawnExpiredPawnComponent.DespawnExpired
// (Native, Event, Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UDespawnExpiredPawnComponent::DespawnExpired()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DespawnExpiredPawnComponent", "DespawnExpired");

	Params::UDespawnExpiredPawnComponent_DespawnExpired_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function FortniteAI.DespawnExpiredPawnComponent.AddDespawnRift
// (Final, Native, Public, BlueprintCallable)
// Parameters:
// class UBuildingRift*               NewRift                                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UDespawnExpiredPawnComponent::AddDespawnRift(class UBuildingRift* NewRift)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("DespawnExpiredPawnComponent", "AddDespawnRift");

	Params::UDespawnExpiredPawnComponent_AddDespawnRift_Params Parms{};

	Parms.NewRift = NewRift;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


