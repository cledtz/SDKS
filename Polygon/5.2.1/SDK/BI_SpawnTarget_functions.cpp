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


// Function BI_SpawnTarget.BI_SpawnTarget_C.SetAsSpawnTarget
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsSpawnTarget                                                    (BlueprintVisible, BlueprintReadOnly, Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UBI_SpawnTarget_C::SetAsSpawnTarget(bool IsSpawnTarget)
{
	static auto Func = Class->GetFunction("BI_SpawnTarget_C", "SetAsSpawnTarget");

	Params::UBI_SpawnTarget_C_SetAsSpawnTarget_Params Parms;

	Parms.IsSpawnTarget = IsSpawnTarget;

	UObject::ProcessEvent(Func, &Parms);

}


// Function BI_SpawnTarget.BI_SpawnTarget_C.GetTargetReference
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// class UActor*                      Reference                                                        (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UBI_SpawnTarget_C::GetTargetReference(class UActor** Reference)
{
	static auto Func = Class->GetFunction("BI_SpawnTarget_C", "GetTargetReference");

	Params::UBI_SpawnTarget_C_GetTargetReference_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (Reference != nullptr)
		*Reference = Parms.Reference;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
