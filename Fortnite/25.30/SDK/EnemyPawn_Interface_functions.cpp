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


// Function EnemyPawn_Interface.EnemyPawn_Interface_C.TriggerDeathFX
// (Public, BlueprintCallable, BlueprintEvent)
// Parameters:

void UEnemyPawn_Interface_C::TriggerDeathFX()
{
	static auto Func = Class->GetFunction("EnemyPawn_Interface_C", "TriggerDeathFX");

	Params::UEnemyPawn_Interface_C_TriggerDeathFX_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function EnemyPawn_Interface.EnemyPawn_Interface_C.Orphaned
// (Public, HasOutParams, BlueprintCallable, BlueprintEvent)
// Parameters:
// bool                               IsOrphaned                                                       (Parm, OutParm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UFortPawn*                   AttachedPawn                                                     (Parm, OutParm, ZeroConstructor, NoDestructor, HasGetValueTypeHash)

void UEnemyPawn_Interface_C::Orphaned(bool* IsOrphaned, class UFortPawn** AttachedPawn)
{
	static auto Func = Class->GetFunction("EnemyPawn_Interface_C", "Orphaned");

	Params::UEnemyPawn_Interface_C_Orphaned_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

	if (IsOrphaned != nullptr)
		*IsOrphaned = Parms.IsOrphaned;

	if (AttachedPawn != nullptr)
		*AttachedPawn = Parms.AttachedPawn;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
