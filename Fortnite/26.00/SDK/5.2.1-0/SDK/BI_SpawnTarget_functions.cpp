#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// BlueprintGeneratedClass BI_SpawnTarget.BI_SpawnTarget_C
// (None)

class UClass* UBI_SpawnTarget_C::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("BI_SpawnTarget_C");

	return Clss;
}


// BI_SpawnTarget_C BI_SpawnTarget.Default__BI_SpawnTarget_C
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UBI_SpawnTarget_C* UBI_SpawnTarget_C::GetDefaultObj()
{
	static class UBI_SpawnTarget_C* Default = nullptr;

	if (!Default)
		Default = static_cast<UBI_SpawnTarget_C*>(UBI_SpawnTarget_C::StaticClass()->DefaultObject);

	return Default;
}


// Function BI_SpawnTarget.BI_SpawnTarget_C.SetAsSpawnTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsSpawnTarget                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBI_SpawnTarget_C::SetAsSpawnTarget(bool IsSpawnTarget)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BI_SpawnTarget_C", "SetAsSpawnTarget");

	Params::UBI_SpawnTarget_C_SetAsSpawnTarget_Params Parms{};

	Parms.IsSpawnTarget = IsSpawnTarget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BI_SpawnTarget.BI_SpawnTarget_C.GetTargetReference
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActor*                      Reference                                                        (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBI_SpawnTarget_C::GetTargetReference(class UActor** Reference)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("BI_SpawnTarget_C", "GetTargetReference");

	Params::UBI_SpawnTarget_C_GetTargetReference_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	if (Reference != nullptr)
		*Reference = Parms.Reference;

}

}


