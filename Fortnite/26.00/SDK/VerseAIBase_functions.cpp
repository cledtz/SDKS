#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// VerseClass VerseAIBase.$SolarisSignatureFunctionOuter
// (None)

class UClass* U_SolarisSignatureFunctionOuter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("$SolarisSignatureFunctionOuter");

	return Clss;
}


// $SolarisSignatureFunctionOuter VerseAIBase.Default__$SolarisSignatureFunctionOuter
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class U_SolarisSignatureFunctionOuter* U_SolarisSignatureFunctionOuter::GetDefaultObj()
{
	static class U_SolarisSignatureFunctionOuter* Default = nullptr;

	if (!Default)
		Default = static_cast<U_SolarisSignatureFunctionOuter*>(U_SolarisSignatureFunctionOuter::StaticClass()->DefaultObject);

	return Default;
}


// VerseClass VerseAIBase.task_VerseAIBase_fort_character_actions_interface$AttackObstacle_L_Nfort__obstacle__info_R
// (None)

class UClass* UTask_VerseAIBase_fort_character_actions_interface_AttackObstacle_L_Nfort__obstacle__info_R::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_VerseAIBase_fort_character_actions_interface$AttackObstacle_L_Nfort__obstacle__info_R");

	return Clss;
}


// task_VerseAIBase_fort_character_actions_interface$AttackObstacle_L_Nfort__obstacle__info_R VerseAIBase.Default__task_VerseAIBase_fort_character_actions_interface$AttackObstacle_L_Nfort__obstacle__info_R
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_VerseAIBase_fort_character_actions_interface_AttackObstacle_L_Nfort__obstacle__info_R* UTask_VerseAIBase_fort_character_actions_interface_AttackObstacle_L_Nfort__obstacle__info_R::GetDefaultObj()
{
	static class UTask_VerseAIBase_fort_character_actions_interface_AttackObstacle_L_Nfort__obstacle__info_R* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_VerseAIBase_fort_character_actions_interface_AttackObstacle_L_Nfort__obstacle__info_R*>(UTask_VerseAIBase_fort_character_actions_interface_AttackObstacle_L_Nfort__obstacle__info_R::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseAIBase.task_VerseAIBase_fort_character_actions_interface$AttackObstacle_L_Nfort__obstacle__info_R.Update
// (Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_VerseAIBase_fort_character_actions_interface_AttackObstacle_L_Nfort__obstacle__info_R::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_VerseAIBase_fort_character_actions_interface$AttackObstacle_L_Nfort__obstacle__info_R", "Update");

	Params::UTask_VerseAIBase_fort_character_actions_interface_AttackObstacle_L_Nfort__obstacle__info_R_Update_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass VerseAIBase.task_VerseAIBase_fort_character_actions_interface$AttackThreat_L_Nfort__threat__info_R
// (None)

class UClass* UTask_VerseAIBase_fort_character_actions_interface_AttackThreat_L_Nfort__threat__info_R::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_VerseAIBase_fort_character_actions_interface$AttackThreat_L_Nfort__threat__info_R");

	return Clss;
}


// task_VerseAIBase_fort_character_actions_interface$AttackThreat_L_Nfort__threat__info_R VerseAIBase.Default__task_VerseAIBase_fort_character_actions_interface$AttackThreat_L_Nfort__threat__info_R
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_VerseAIBase_fort_character_actions_interface_AttackThreat_L_Nfort__threat__info_R* UTask_VerseAIBase_fort_character_actions_interface_AttackThreat_L_Nfort__threat__info_R::GetDefaultObj()
{
	static class UTask_VerseAIBase_fort_character_actions_interface_AttackThreat_L_Nfort__threat__info_R* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_VerseAIBase_fort_character_actions_interface_AttackThreat_L_Nfort__threat__info_R*>(UTask_VerseAIBase_fort_character_actions_interface_AttackThreat_L_Nfort__threat__info_R::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseAIBase.task_VerseAIBase_fort_character_actions_interface$AttackThreat_L_Nfort__threat__info_R.Update
// (Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_VerseAIBase_fort_character_actions_interface_AttackThreat_L_Nfort__threat__info_R::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_VerseAIBase_fort_character_actions_interface$AttackThreat_L_Nfort__threat__info_R", "Update");

	Params::UTask_VerseAIBase_fort_character_actions_interface_AttackThreat_L_Nfort__threat__info_R_Update_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass VerseAIBase.task_VerseAIBase_fort_character_actions_interface$LootObject_L_Nfort__loot__info_R
// (None)

class UClass* UTask_VerseAIBase_fort_character_actions_interface_LootObject_L_Nfort__loot__info_R::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_VerseAIBase_fort_character_actions_interface$LootObject_L_Nfort__loot__info_R");

	return Clss;
}


// task_VerseAIBase_fort_character_actions_interface$LootObject_L_Nfort__loot__info_R VerseAIBase.Default__task_VerseAIBase_fort_character_actions_interface$LootObject_L_Nfort__loot__info_R
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_VerseAIBase_fort_character_actions_interface_LootObject_L_Nfort__loot__info_R* UTask_VerseAIBase_fort_character_actions_interface_LootObject_L_Nfort__loot__info_R::GetDefaultObj()
{
	static class UTask_VerseAIBase_fort_character_actions_interface_LootObject_L_Nfort__loot__info_R* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_VerseAIBase_fort_character_actions_interface_LootObject_L_Nfort__loot__info_R*>(UTask_VerseAIBase_fort_character_actions_interface_LootObject_L_Nfort__loot__info_R::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseAIBase.task_VerseAIBase_fort_character_actions_interface$LootObject_L_Nfort__loot__info_R.Update
// (Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_VerseAIBase_fort_character_actions_interface_LootObject_L_Nfort__loot__info_R::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_VerseAIBase_fort_character_actions_interface$LootObject_L_Nfort__loot__info_R", "Update");

	Params::UTask_VerseAIBase_fort_character_actions_interface_LootObject_L_Nfort__loot__info_R_Update_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass VerseAIBase.task_VerseAIBase_fort_character_actions_interface$PlayRandomEmote
// (None)

class UClass* UTask_VerseAIBase_fort_character_actions_interface_PlayRandomEmote::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_VerseAIBase_fort_character_actions_interface$PlayRandomEmote");

	return Clss;
}


// task_VerseAIBase_fort_character_actions_interface$PlayRandomEmote VerseAIBase.Default__task_VerseAIBase_fort_character_actions_interface$PlayRandomEmote
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_VerseAIBase_fort_character_actions_interface_PlayRandomEmote* UTask_VerseAIBase_fort_character_actions_interface_PlayRandomEmote::GetDefaultObj()
{
	static class UTask_VerseAIBase_fort_character_actions_interface_PlayRandomEmote* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_VerseAIBase_fort_character_actions_interface_PlayRandomEmote*>(UTask_VerseAIBase_fort_character_actions_interface_PlayRandomEmote::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseAIBase.task_VerseAIBase_fort_character_actions_interface$PlayRandomEmote.Update
// (Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_VerseAIBase_fort_character_actions_interface_PlayRandomEmote::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_VerseAIBase_fort_character_actions_interface$PlayRandomEmote", "Update");

	Params::UTask_VerseAIBase_fort_character_actions_interface_PlayRandomEmote_Update_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass VerseAIBase.task_VerseAIBase_fort_character_actions_interface$Revive_L_Nagent_R
// (None)

class UClass* UTask_VerseAIBase_fort_character_actions_interface_Revive_L_Nagent_R::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_VerseAIBase_fort_character_actions_interface$Revive_L_Nagent_R");

	return Clss;
}


// task_VerseAIBase_fort_character_actions_interface$Revive_L_Nagent_R VerseAIBase.Default__task_VerseAIBase_fort_character_actions_interface$Revive_L_Nagent_R
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_VerseAIBase_fort_character_actions_interface_Revive_L_Nagent_R* UTask_VerseAIBase_fort_character_actions_interface_Revive_L_Nagent_R::GetDefaultObj()
{
	static class UTask_VerseAIBase_fort_character_actions_interface_Revive_L_Nagent_R* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_VerseAIBase_fort_character_actions_interface_Revive_L_Nagent_R*>(UTask_VerseAIBase_fort_character_actions_interface_Revive_L_Nagent_R::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseAIBase.task_VerseAIBase_fort_character_actions_interface$Revive_L_Nagent_R.Update
// (Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_VerseAIBase_fort_character_actions_interface_Revive_L_Nagent_R::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_VerseAIBase_fort_character_actions_interface$Revive_L_Nagent_R", "Update");

	Params::UTask_VerseAIBase_fort_character_actions_interface_Revive_L_Nagent_R_Update_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass VerseAIBase.task_VerseAIBase_fort_character_movement_interface$Crouch
// (None)

class UClass* UTask_VerseAIBase_fort_character_movement_interface_Crouch::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_VerseAIBase_fort_character_movement_interface$Crouch");

	return Clss;
}


// task_VerseAIBase_fort_character_movement_interface$Crouch VerseAIBase.Default__task_VerseAIBase_fort_character_movement_interface$Crouch
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_VerseAIBase_fort_character_movement_interface_Crouch* UTask_VerseAIBase_fort_character_movement_interface_Crouch::GetDefaultObj()
{
	static class UTask_VerseAIBase_fort_character_movement_interface_Crouch* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_VerseAIBase_fort_character_movement_interface_Crouch*>(UTask_VerseAIBase_fort_character_movement_interface_Crouch::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseAIBase.task_VerseAIBase_fort_character_movement_interface$Crouch.Update
// (Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_VerseAIBase_fort_character_movement_interface_Crouch::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_VerseAIBase_fort_character_movement_interface$Crouch", "Update");

	Params::UTask_VerseAIBase_fort_character_movement_interface_Crouch_Update_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass VerseAIBase.task_VerseAIBase_fort_character_movement_interface$Jump
// (None)

class UClass* UTask_VerseAIBase_fort_character_movement_interface_Jump::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_VerseAIBase_fort_character_movement_interface$Jump");

	return Clss;
}


// task_VerseAIBase_fort_character_movement_interface$Jump VerseAIBase.Default__task_VerseAIBase_fort_character_movement_interface$Jump
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_VerseAIBase_fort_character_movement_interface_Jump* UTask_VerseAIBase_fort_character_movement_interface_Jump::GetDefaultObj()
{
	static class UTask_VerseAIBase_fort_character_movement_interface_Jump* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_VerseAIBase_fort_character_movement_interface_Jump*>(UTask_VerseAIBase_fort_character_movement_interface_Jump::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseAIBase.task_VerseAIBase_fort_character_movement_interface$Jump.Update
// (Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_VerseAIBase_fort_character_movement_interface_Jump::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_VerseAIBase_fort_character_movement_interface$Jump", "Update");

	Params::UTask_VerseAIBase_fort_character_movement_interface_Jump_Update_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass VerseAIBase.task_VerseAIBase_fort_character_movement_interface$Slide
// (None)

class UClass* UTask_VerseAIBase_fort_character_movement_interface_Slide::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_VerseAIBase_fort_character_movement_interface$Slide");

	return Clss;
}


// task_VerseAIBase_fort_character_movement_interface$Slide VerseAIBase.Default__task_VerseAIBase_fort_character_movement_interface$Slide
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_VerseAIBase_fort_character_movement_interface_Slide* UTask_VerseAIBase_fort_character_movement_interface_Slide::GetDefaultObj()
{
	static class UTask_VerseAIBase_fort_character_movement_interface_Slide* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_VerseAIBase_fort_character_movement_interface_Slide*>(UTask_VerseAIBase_fort_character_movement_interface_Slide::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseAIBase.task_VerseAIBase_fort_character_movement_interface$Slide.Update
// (Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_VerseAIBase_fort_character_movement_interface_Slide::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_VerseAIBase_fort_character_movement_interface$Slide", "Update");

	Params::UTask_VerseAIBase_fort_character_movement_interface_Slide_Update_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass VerseAIBase.task_VerseAIBase_fort_character_movement_interface$Sprint
// (None)

class UClass* UTask_VerseAIBase_fort_character_movement_interface_Sprint::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_VerseAIBase_fort_character_movement_interface$Sprint");

	return Clss;
}


// task_VerseAIBase_fort_character_movement_interface$Sprint VerseAIBase.Default__task_VerseAIBase_fort_character_movement_interface$Sprint
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_VerseAIBase_fort_character_movement_interface_Sprint* UTask_VerseAIBase_fort_character_movement_interface_Sprint::GetDefaultObj()
{
	static class UTask_VerseAIBase_fort_character_movement_interface_Sprint* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_VerseAIBase_fort_character_movement_interface_Sprint*>(UTask_VerseAIBase_fort_character_movement_interface_Sprint::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseAIBase.task_VerseAIBase_fort_character_movement_interface$Sprint.Update
// (Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_VerseAIBase_fort_character_movement_interface_Sprint::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_VerseAIBase_fort_character_movement_interface$Sprint", "Update");

	Params::UTask_VerseAIBase_fort_character_movement_interface_Sprint_Update_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass VerseAIBase.task_VerseAIBase_fort_character_movement_interface$TacticalSprint
// (None)

class UClass* UTask_VerseAIBase_fort_character_movement_interface_TacticalSprint::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_VerseAIBase_fort_character_movement_interface$TacticalSprint");

	return Clss;
}


// task_VerseAIBase_fort_character_movement_interface$TacticalSprint VerseAIBase.Default__task_VerseAIBase_fort_character_movement_interface$TacticalSprint
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_VerseAIBase_fort_character_movement_interface_TacticalSprint* UTask_VerseAIBase_fort_character_movement_interface_TacticalSprint::GetDefaultObj()
{
	static class UTask_VerseAIBase_fort_character_movement_interface_TacticalSprint* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_VerseAIBase_fort_character_movement_interface_TacticalSprint*>(UTask_VerseAIBase_fort_character_movement_interface_TacticalSprint::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseAIBase.task_VerseAIBase_fort_character_movement_interface$TacticalSprint.Update
// (Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_VerseAIBase_fort_character_movement_interface_TacticalSprint::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_VerseAIBase_fort_character_movement_interface$TacticalSprint", "Update");

	Params::UTask_VerseAIBase_fort_character_movement_interface_TacticalSprint_Update_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass VerseAIBase.task_VerseAIBase_fort_character_movement_interface$Walk
// (None)

class UClass* UTask_VerseAIBase_fort_character_movement_interface_Walk::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_VerseAIBase_fort_character_movement_interface$Walk");

	return Clss;
}


// task_VerseAIBase_fort_character_movement_interface$Walk VerseAIBase.Default__task_VerseAIBase_fort_character_movement_interface$Walk
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_VerseAIBase_fort_character_movement_interface_Walk* UTask_VerseAIBase_fort_character_movement_interface_Walk::GetDefaultObj()
{
	static class UTask_VerseAIBase_fort_character_movement_interface_Walk* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_VerseAIBase_fort_character_movement_interface_Walk*>(UTask_VerseAIBase_fort_character_movement_interface_Walk::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseAIBase.task_VerseAIBase_fort_character_movement_interface$Walk.Update
// (Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_VerseAIBase_fort_character_movement_interface_Walk::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_VerseAIBase_fort_character_movement_interface$Walk", "Update");

	Params::UTask_VerseAIBase_fort_character_movement_interface_Walk_Update_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass VerseAIBase.task_VerseAIBase_fort_navigatable$MoveInRangeToAttack
// (None)

class UClass* UTask_VerseAIBase_fort_navigatable_MoveInRangeToAttack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_VerseAIBase_fort_navigatable$MoveInRangeToAttack");

	return Clss;
}


// task_VerseAIBase_fort_navigatable$MoveInRangeToAttack VerseAIBase.Default__task_VerseAIBase_fort_navigatable$MoveInRangeToAttack
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_VerseAIBase_fort_navigatable_MoveInRangeToAttack* UTask_VerseAIBase_fort_navigatable_MoveInRangeToAttack::GetDefaultObj()
{
	static class UTask_VerseAIBase_fort_navigatable_MoveInRangeToAttack* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_VerseAIBase_fort_navigatable_MoveInRangeToAttack*>(UTask_VerseAIBase_fort_navigatable_MoveInRangeToAttack::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseAIBase.task_VerseAIBase_fort_navigatable$MoveInRangeToAttack.Update
// (Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_VerseAIBase_fort_navigatable_MoveInRangeToAttack::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_VerseAIBase_fort_navigatable$MoveInRangeToAttack", "Update");

	Params::UTask_VerseAIBase_fort_navigatable_MoveInRangeToAttack_Update_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass VerseAIBase.task_VerseAIBase_fort_navigatable$RoamAround
// (None)

class UClass* UTask_VerseAIBase_fort_navigatable_RoamAround::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_VerseAIBase_fort_navigatable$RoamAround");

	return Clss;
}


// task_VerseAIBase_fort_navigatable$RoamAround VerseAIBase.Default__task_VerseAIBase_fort_navigatable$RoamAround
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_VerseAIBase_fort_navigatable_RoamAround* UTask_VerseAIBase_fort_navigatable_RoamAround::GetDefaultObj()
{
	static class UTask_VerseAIBase_fort_navigatable_RoamAround* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_VerseAIBase_fort_navigatable_RoamAround*>(UTask_VerseAIBase_fort_navigatable_RoamAround::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseAIBase.task_VerseAIBase_fort_navigatable$RoamAround.Update
// (Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_VerseAIBase_fort_navigatable_RoamAround::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_VerseAIBase_fort_navigatable$RoamAround", "Update");

	Params::UTask_VerseAIBase_fort_navigatable_RoamAround_Update_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass VerseAIBase.VerseAIBase
// (None)

class UClass* UVerseAIBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseAIBase");

	return Clss;
}


// VerseAIBase VerseAIBase.Default__VerseAIBase
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVerseAIBase* UVerseAIBase::GetDefaultObj()
{
	static class UVerseAIBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseAIBase*>(UVerseAIBase::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseAIBase.VerseAIBase._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_N_Roperator_U_2eGetFortWeaponActions_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

FOptionalProperty_ UVerseAIBase::_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_N_Roperator_U_2eGetFortWeaponActions_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase", "_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_N_Roperator_U_2eGetFortWeaponActions_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R");

	Params::UVerseAIBase__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_N_Roperator_U_2eGetFortWeaponActions_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseAIBase.VerseAIBase._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_N_Roperator_U_2eGetFortTargetSelection_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

FOptionalProperty_ UVerseAIBase::_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_N_Roperator_U_2eGetFortTargetSelection_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase", "_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_N_Roperator_U_2eGetFortTargetSelection_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R");

	Params::UVerseAIBase__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_N_Roperator_U_2eGetFortTargetSelection_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseAIBase.VerseAIBase._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_N_Roperator_U_2eGetFortObstaclePerception_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

FOptionalProperty_ UVerseAIBase::_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_N_Roperator_U_2eGetFortObstaclePerception_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase", "_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_N_Roperator_U_2eGetFortObstaclePerception_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R");

	Params::UVerseAIBase__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_N_Roperator_U_2eGetFortObstaclePerception_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseAIBase.VerseAIBase._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_N_Roperator_U_2eGetFortNavigatable_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

FOptionalProperty_ UVerseAIBase::_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_N_Roperator_U_2eGetFortNavigatable_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase", "_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_N_Roperator_U_2eGetFortNavigatable_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R");

	Params::UVerseAIBase__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_N_Roperator_U_2eGetFortNavigatable_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseAIBase.VerseAIBase._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_N_Roperator_U_2eGetFortLootPerception_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

FOptionalProperty_ UVerseAIBase::_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_N_Roperator_U_2eGetFortLootPerception_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase", "_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_N_Roperator_U_2eGetFortLootPerception_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R");

	Params::UVerseAIBase__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_N_Roperator_U_2eGetFortLootPerception_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseAIBase.VerseAIBase._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_N_Roperator_U_2eGetFortInventory_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

FOptionalProperty_ UVerseAIBase::_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_N_Roperator_U_2eGetFortInventory_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase", "_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_N_Roperator_U_2eGetFortInventory_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R");

	Params::UVerseAIBase__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_N_Roperator_U_2eGetFortInventory_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseAIBase.VerseAIBase._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_N_Roperator_U_2eGetFortCreatureActions_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

FOptionalProperty_ UVerseAIBase::_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_N_Roperator_U_2eGetFortCreatureActions_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase", "_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_N_Roperator_U_2eGetFortCreatureActions_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R");

	Params::UVerseAIBase__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_N_Roperator_U_2eGetFortCreatureActions_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseAIBase.VerseAIBase._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_N_Roperator_U_2eGetFortCharacterMovement_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

FOptionalProperty_ UVerseAIBase::_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_N_Roperator_U_2eGetFortCharacterMovement_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase", "_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_N_Roperator_U_2eGetFortCharacterMovement_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R");

	Params::UVerseAIBase__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_N_Roperator_U_2eGetFortCharacterMovement_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseAIBase.VerseAIBase._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_N_Roperator_U_2eGetFortCharacterActions_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

FOptionalProperty_ UVerseAIBase::_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_N_Roperator_U_2eGetFortCharacterActions_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase", "_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_N_Roperator_U_2eGetFortCharacterActions_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R");

	Params::UVerseAIBase__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_N_Roperator_U_2eGetFortCharacterActions_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseAIBase.VerseAIBase._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_N_RMakeNavigationTarget_L_Nfort__loot__info_R
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FVerseAIBase_fort_loot_info __verse_0xB2CDDD72_Argument                                      (Parm, NoDestructor)
// uint64                             InstancingGraph                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAI_navigation_target*       __verse_0xB482F2DD_CurrentlyInstantiatedObject                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

void UVerseAIBase::_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_N_RMakeNavigationTarget_L_Nfort__loot__info_R(const struct FVerseAIBase_fort_loot_info& __verse_0xB2CDDD72_Argument, uint64 InstancingGraph, class UAI_navigation_target* __verse_0xB482F2DD_CurrentlyInstantiatedObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase", "_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_N_RMakeNavigationTarget_L_Nfort__loot__info_R");

	Params::UVerseAIBase__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_N_RMakeNavigationTarget_L_Nfort__loot__info_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms.InstancingGraph = InstancingGraph;
	Parms.__verse_0xB482F2DD_CurrentlyInstantiatedObject = __verse_0xB482F2DD_CurrentlyInstantiatedObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseAIBase.VerseAIBase.VerseAIBase_fort_obstacle_info$OverrideFactory
// (Static, HasOutParams)
// Parameters:
// struct FVerseAIBase_fort_obstacle_infoRetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor)
// TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap                              (ConstParm, Parm, ContainsInstancedReference)

struct FVerseAIBase_fort_obstacle_info UVerseAIBase::VerseAIBase_fort_obstacle_info_OverrideFactory(TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase", "VerseAIBase_fort_obstacle_info$OverrideFactory");

	Params::UVerseAIBase_VerseAIBase_fort_obstacle_info_OverrideFactory_Params Parms{};

	Parms.__verse_0xFB48ED96__InitOverrideMap = __verse_0xFB48ED96__InitOverrideMap;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseAIBase.VerseAIBase.VerseAIBase_fort_obstacle_info$Factory
// (Static, HasOutParams)
// Parameters:
// struct FVerseAIBase_fort_obstacle_infoRetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor)

struct FVerseAIBase_fort_obstacle_info UVerseAIBase::VerseAIBase_fort_obstacle_info_Factory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase", "VerseAIBase_fort_obstacle_info$Factory");

	Params::UVerseAIBase_VerseAIBase_fort_obstacle_info_Factory_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseAIBase.VerseAIBase.VerseAIBase_fort_loot_info$OverrideFactory
// (Static, HasOutParams)
// Parameters:
// struct FVerseAIBase_fort_loot_info RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor)
// TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap                              (ConstParm, Parm, ContainsInstancedReference)

struct FVerseAIBase_fort_loot_info UVerseAIBase::VerseAIBase_fort_loot_info_OverrideFactory(TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase", "VerseAIBase_fort_loot_info$OverrideFactory");

	Params::UVerseAIBase_VerseAIBase_fort_loot_info_OverrideFactory_Params Parms{};

	Parms.__verse_0xFB48ED96__InitOverrideMap = __verse_0xFB48ED96__InitOverrideMap;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseAIBase.VerseAIBase.VerseAIBase_fort_loot_info$Factory
// (Static, HasOutParams)
// Parameters:
// struct FVerseAIBase_fort_loot_info RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor)

struct FVerseAIBase_fort_loot_info UVerseAIBase::VerseAIBase_fort_loot_info_Factory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase", "VerseAIBase_fort_loot_info$Factory");

	Params::UVerseAIBase_VerseAIBase_fort_loot_info_Factory_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseAIBase.VerseAIBase.VerseAIBase_fort_weapon_descriptor$OverrideFactory
// (Static, HasOutParams, HasDefaults)
// Parameters:
// struct FVerseAIBase_fort_weapon_descriptorRetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor)
// TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap                              (ConstParm, Parm, ContainsInstancedReference)
// FVerseStringProperty_              _ExprResultStack_0                                               (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_1                                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_2                                               (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_3                                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_4                                               (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_5                                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_6                                               (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_7                                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_8                                               (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_9                                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_10                                              (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_11                                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)

struct FVerseAIBase_fort_weapon_descriptor UVerseAIBase::VerseAIBase_fort_weapon_descriptor_OverrideFactory(TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap, FVerseStringProperty_ _ExprResultStack_0, FOptionalProperty_ _ExprResult_1, FVerseStringProperty_ _ExprResultStack_2, FOptionalProperty_ _ExprResult_3, FVerseStringProperty_ _ExprResultStack_4, FOptionalProperty_ _ExprResult_5, FVerseStringProperty_ _ExprResultStack_6, FOptionalProperty_ _ExprResult_7, FVerseStringProperty_ _ExprResultStack_8, FOptionalProperty_ _ExprResult_9, FVerseStringProperty_ _ExprResultStack_10, FOptionalProperty_ _ExprResult_11)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase", "VerseAIBase_fort_weapon_descriptor$OverrideFactory");

	Params::UVerseAIBase_VerseAIBase_fort_weapon_descriptor_OverrideFactory_Params Parms{};

	Parms.__verse_0xFB48ED96__InitOverrideMap = __verse_0xFB48ED96__InitOverrideMap;
	Parms._ExprResultStack_0 = _ExprResultStack_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._ExprResultStack_2 = _ExprResultStack_2;
	Parms._ExprResult_3 = _ExprResult_3;
	Parms._ExprResultStack_4 = _ExprResultStack_4;
	Parms._ExprResult_5 = _ExprResult_5;
	Parms._ExprResultStack_6 = _ExprResultStack_6;
	Parms._ExprResult_7 = _ExprResult_7;
	Parms._ExprResultStack_8 = _ExprResultStack_8;
	Parms._ExprResult_9 = _ExprResult_9;
	Parms._ExprResultStack_10 = _ExprResultStack_10;
	Parms._ExprResult_11 = _ExprResult_11;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseAIBase.VerseAIBase.VerseAIBase_fort_weapon_descriptor$Factory
// (Static, HasOutParams)
// Parameters:
// struct FVerseAIBase_fort_weapon_descriptorRetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor)

struct FVerseAIBase_fort_weapon_descriptor UVerseAIBase::VerseAIBase_fort_weapon_descriptor_Factory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase", "VerseAIBase_fort_weapon_descriptor$Factory");

	Params::UVerseAIBase_VerseAIBase_fort_weapon_descriptor_Factory_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseAIBase.VerseAIBase.VerseAIBase_fort_item_descriptor$OverrideFactory
// (Static, HasOutParams)
// Parameters:
// struct FVerseAIBase_fort_item_descriptorRetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor)
// TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap                              (ConstParm, Parm, ContainsInstancedReference)

struct FVerseAIBase_fort_item_descriptor UVerseAIBase::VerseAIBase_fort_item_descriptor_OverrideFactory(TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase", "VerseAIBase_fort_item_descriptor$OverrideFactory");

	Params::UVerseAIBase_VerseAIBase_fort_item_descriptor_OverrideFactory_Params Parms{};

	Parms.__verse_0xFB48ED96__InitOverrideMap = __verse_0xFB48ED96__InitOverrideMap;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseAIBase.VerseAIBase.VerseAIBase_fort_item_descriptor$Factory
// (Static, HasOutParams)
// Parameters:
// struct FVerseAIBase_fort_item_descriptorRetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor)

struct FVerseAIBase_fort_item_descriptor UVerseAIBase::VerseAIBase_fort_item_descriptor_Factory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase", "VerseAIBase_fort_item_descriptor$Factory");

	Params::UVerseAIBase_VerseAIBase_fort_item_descriptor_Factory_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseAIBase.VerseAIBase.$InitCDO
// (None)
// Parameters:

void UVerseAIBase::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase", "$InitCDO");

	Params::UVerseAIBase__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseAIBase.VerseAIBase_fort_character_actions_interface
// (None)

class UClass* UVerseAIBase_fort_character_actions_interface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseAIBase_fort_character_actions_interface");

	return Clss;
}


// VerseAIBase_fort_character_actions_interface VerseAIBase.Default__VerseAIBase_fort_character_actions_interface
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVerseAIBase_fort_character_actions_interface* UVerseAIBase_fort_character_actions_interface::GetDefaultObj()
{
	static class UVerseAIBase_fort_character_actions_interface* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseAIBase_fort_character_actions_interface*>(UVerseAIBase_fort_character_actions_interface::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseAIBase.VerseAIBase_fort_character_actions_interface.Revive_L_Nagent_R
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USimulation_agent*           __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UVerseAIBase_fort_character_actions_interface::Revive_L_Nagent_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, class USimulation_agent* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_character_actions_interface", "Revive_L_Nagent_R");

	Params::UVerseAIBase_fort_character_actions_interface_Revive_L_Nagent_R_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseAIBase.VerseAIBase_fort_character_actions_interface.PlayRandomEmote
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UVerseAIBase_fort_character_actions_interface::PlayRandomEmote(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_character_actions_interface", "PlayRandomEmote");

	Params::UVerseAIBase_fort_character_actions_interface_PlayRandomEmote_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseAIBase.VerseAIBase_fort_character_actions_interface.LootObject_L_Nfort__loot__info_R
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVerseAIBase_fort_loot_info __verse_0xB2CDDD72_Argument                                      (Parm, NoDestructor)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UVerseAIBase_fort_character_actions_interface::LootObject_L_Nfort__loot__info_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FVerseAIBase_fort_loot_info& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_character_actions_interface", "LootObject_L_Nfort__loot__info_R");

	Params::UVerseAIBase_fort_character_actions_interface_LootObject_L_Nfort__loot__info_R_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseAIBase.VerseAIBase_fort_character_actions_interface.AttackThreat_L_Nfort__threat__info_R
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAI_fort_threat_info        __verse_0xB2CDDD72_Argument                                      (Parm, NoDestructor)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UVerseAIBase_fort_character_actions_interface::AttackThreat_L_Nfort__threat__info_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FAI_fort_threat_info& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_character_actions_interface", "AttackThreat_L_Nfort__threat__info_R");

	Params::UVerseAIBase_fort_character_actions_interface_AttackThreat_L_Nfort__threat__info_R_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseAIBase.VerseAIBase_fort_character_actions_interface.AttackObstacle_L_Nfort__obstacle__info_R
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVerseAIBase_fort_obstacle_info__verse_0xB2CDDD72_Argument                                      (Parm, NoDestructor)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UVerseAIBase_fort_character_actions_interface::AttackObstacle_L_Nfort__obstacle__info_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FVerseAIBase_fort_obstacle_info& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_character_actions_interface", "AttackObstacle_L_Nfort__obstacle__info_R");

	Params::UVerseAIBase_fort_character_actions_interface_AttackObstacle_L_Nfort__obstacle__info_R_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass VerseAIBase.VerseAIBase_fort_character_movement_interface
// (None)

class UClass* UVerseAIBase_fort_character_movement_interface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseAIBase_fort_character_movement_interface");

	return Clss;
}


// VerseAIBase_fort_character_movement_interface VerseAIBase.Default__VerseAIBase_fort_character_movement_interface
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVerseAIBase_fort_character_movement_interface* UVerseAIBase_fort_character_movement_interface::GetDefaultObj()
{
	static class UVerseAIBase_fort_character_movement_interface* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseAIBase_fort_character_movement_interface*>(UVerseAIBase_fort_character_movement_interface::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseAIBase.VerseAIBase_fort_character_movement_interface.Walk
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UVerseAIBase_fort_character_movement_interface::Walk(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_character_movement_interface", "Walk");

	Params::UVerseAIBase_fort_character_movement_interface_Walk_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseAIBase.VerseAIBase_fort_character_movement_interface.TacticalSprint
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UVerseAIBase_fort_character_movement_interface::TacticalSprint(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_character_movement_interface", "TacticalSprint");

	Params::UVerseAIBase_fort_character_movement_interface_TacticalSprint_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseAIBase.VerseAIBase_fort_character_movement_interface._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__character__movement__interface_N_RStandUp
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// enum class EVerseAIBase_action_resultRetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class EVerseAIBase_action_result UVerseAIBase_fort_character_movement_interface::_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__character__movement__interface_N_RStandUp(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_character_movement_interface", "_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__character__movement__interface_N_RStandUp");

	Params::UVerseAIBase_fort_character_movement_interface__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__character__movement__interface_N_RStandUp_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseAIBase.VerseAIBase_fort_character_movement_interface.Sprint
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UVerseAIBase_fort_character_movement_interface::Sprint(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_character_movement_interface", "Sprint");

	Params::UVerseAIBase_fort_character_movement_interface_Sprint_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseAIBase.VerseAIBase_fort_character_movement_interface.Slide
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UVerseAIBase_fort_character_movement_interface::Slide(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_character_movement_interface", "Slide");

	Params::UVerseAIBase_fort_character_movement_interface_Slide_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseAIBase.VerseAIBase_fort_character_movement_interface.Jump
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UVerseAIBase_fort_character_movement_interface::Jump(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_character_movement_interface", "Jump");

	Params::UVerseAIBase_fort_character_movement_interface_Jump_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseAIBase.VerseAIBase_fort_character_movement_interface.Crouch
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UVerseAIBase_fort_character_movement_interface::Crouch(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_character_movement_interface", "Crouch");

	Params::UVerseAIBase_fort_character_movement_interface_Crouch_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass VerseAIBase.VerseAIBase_fort_creature_actions_interface
// (None)

class UClass* UVerseAIBase_fort_creature_actions_interface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseAIBase_fort_creature_actions_interface");

	return Clss;
}


// VerseAIBase_fort_creature_actions_interface VerseAIBase.Default__VerseAIBase_fort_creature_actions_interface
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVerseAIBase_fort_creature_actions_interface* UVerseAIBase_fort_creature_actions_interface::GetDefaultObj()
{
	static class UVerseAIBase_fort_creature_actions_interface* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseAIBase_fort_creature_actions_interface*>(UVerseAIBase_fort_creature_actions_interface::StaticClass()->DefaultObject);

	return Default;
}


// VerseClass VerseAIBase.VerseAIBase_fort_inventory_interface
// (None)

class UClass* UVerseAIBase_fort_inventory_interface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseAIBase_fort_inventory_interface");

	return Clss;
}


// VerseAIBase_fort_inventory_interface VerseAIBase.Default__VerseAIBase_fort_inventory_interface
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVerseAIBase_fort_inventory_interface* UVerseAIBase_fort_inventory_interface::GetDefaultObj()
{
	static class UVerseAIBase_fort_inventory_interface* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseAIBase_fort_inventory_interface*>(UVerseAIBase_fort_inventory_interface::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseAIBase.VerseAIBase_fort_inventory_interface._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RUnregisterUseSuggestedWeaponCallback_L_Nint_R
// (Public, BlueprintCallable)
// Parameters:
// int64                              __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVerseAIBase_fort_inventory_interface::_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RUnregisterUseSuggestedWeaponCallback_L_Nint_R(int64 __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_inventory_interface", "_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RUnregisterUseSuggestedWeaponCallback_L_Nint_R");

	Params::UVerseAIBase_fort_inventory_interface__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RUnregisterUseSuggestedWeaponCallback_L_Nint_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseAIBase.VerseAIBase_fort_inventory_interface._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RRegisterUseSuggestedWeaponCallback_L_Nfort__item__descriptor_Tlogic_R
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// FVerseFunctionProperty_            __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UVerseAIBase_fort_inventory_interface::_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RRegisterUseSuggestedWeaponCallback_L_Nfort__item__descriptor_Tlogic_R(FVerseFunctionProperty_ __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_inventory_interface", "_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RRegisterUseSuggestedWeaponCallback_L_Nfort__item__descriptor_Tlogic_R");

	Params::UVerseAIBase_fort_inventory_interface__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RRegisterUseSuggestedWeaponCallback_L_Nfort__item__descriptor_Tlogic_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseAIBase.VerseAIBase_fort_inventory_interface._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RIsWeaponEquipped_L_Nfort__item__descriptor_R
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FVerseAIBase_fort_item_descriptor__verse_0xB2CDDD72_Argument                                      (Parm, NoDestructor)
// uint8                              RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

uint8 UVerseAIBase_fort_inventory_interface::_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RIsWeaponEquipped_L_Nfort__item__descriptor_R(const struct FVerseAIBase_fort_item_descriptor& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_inventory_interface", "_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RIsWeaponEquipped_L_Nfort__item__descriptor_R");

	Params::UVerseAIBase_fort_inventory_interface__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RIsWeaponEquipped_L_Nfort__item__descriptor_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseAIBase.VerseAIBase_fort_inventory_interface._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RGetWeaponDescriptor_L_Nfort__item__descriptor_R
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FVerseAIBase_fort_item_descriptor__verse_0xB2CDDD72_Argument                                      (Parm, NoDestructor)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor)

FOptionalProperty_ UVerseAIBase_fort_inventory_interface::_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RGetWeaponDescriptor_L_Nfort__item__descriptor_R(const struct FVerseAIBase_fort_item_descriptor& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_inventory_interface", "_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RGetWeaponDescriptor_L_Nfort__item__descriptor_R");

	Params::UVerseAIBase_fort_inventory_interface__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RGetWeaponDescriptor_L_Nfort__item__descriptor_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseAIBase.VerseAIBase_fort_inventory_interface._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RGetCurrentWeapon
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor)

FOptionalProperty_ UVerseAIBase_fort_inventory_interface::_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RGetCurrentWeapon(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_inventory_interface", "_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RGetCurrentWeapon");

	Params::UVerseAIBase_fort_inventory_interface__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RGetCurrentWeapon_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseAIBase.VerseAIBase_fort_inventory_interface._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RGetAllItems
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// TArray<struct FVerseAIBase_fort_item_descriptor>RetVal                                                           (Parm, OutParm, ReturnParm, ContainsInstancedReference)

TArray<struct FVerseAIBase_fort_item_descriptor> UVerseAIBase_fort_inventory_interface::_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RGetAllItems(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_inventory_interface", "_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RGetAllItems");

	Params::UVerseAIBase_fort_inventory_interface__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RGetAllItems_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseAIBase.VerseAIBase_fort_inventory_interface._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_REquipWeapon_L_Nfort__item__descriptor_R
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FVerseAIBase_fort_item_descriptor__verse_0xB2CDDD72_Argument                                      (Parm, NoDestructor)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionalProperty_ UVerseAIBase_fort_inventory_interface::_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_REquipWeapon_L_Nfort__item__descriptor_R(const struct FVerseAIBase_fort_item_descriptor& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_inventory_interface", "_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_REquipWeapon_L_Nfort__item__descriptor_R");

	Params::UVerseAIBase_fort_inventory_interface__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_REquipWeapon_L_Nfort__item__descriptor_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseAIBase.VerseAIBase_fort_inventory_interface._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RDropItem_L_Nfort__item__descriptor_R
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FVerseAIBase_fort_item_descriptor__verse_0xB2CDDD72_Argument                                      (Parm, NoDestructor)
// uint8                              RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

uint8 UVerseAIBase_fort_inventory_interface::_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RDropItem_L_Nfort__item__descriptor_R(const struct FVerseAIBase_fort_item_descriptor& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_inventory_interface", "_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RDropItem_L_Nfort__item__descriptor_R");

	Params::UVerseAIBase_fort_inventory_interface__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RDropItem_L_Nfort__item__descriptor_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseAIBase.VerseAIBase_fort_inventory_interface._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RAddItemToInventory_L_Nfort__inventory__item__asset_M_Nint_R
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lfort__inventory__item__asset_Mint_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor)

FOptionalProperty_ UVerseAIBase_fort_inventory_interface::_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RAddItemToInventory_L_Nfort__inventory__item__asset_M_Nint_R(const struct FTuple_Lfort__inventory__item__asset_Mint_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_inventory_interface", "_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RAddItemToInventory_L_Nfort__inventory__item__asset_M_Nint_R");

	Params::UVerseAIBase_fort_inventory_interface__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RAddItemToInventory_L_Nfort__inventory__item__asset_M_Nint_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass VerseAIBase.VerseAIBase_fort_inventory_item_asset
// (None)

class UClass* UVerseAIBase_fort_inventory_item_asset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseAIBase_fort_inventory_item_asset");

	return Clss;
}


// VerseAIBase_fort_inventory_item_asset VerseAIBase.Default__VerseAIBase_fort_inventory_item_asset
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVerseAIBase_fort_inventory_item_asset* UVerseAIBase_fort_inventory_item_asset::GetDefaultObj()
{
	static class UVerseAIBase_fort_inventory_item_asset* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseAIBase_fort_inventory_item_asset*>(UVerseAIBase_fort_inventory_item_asset::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseAIBase.VerseAIBase_fort_inventory_item_asset.$InitInstance
// (None)
// Parameters:

void UVerseAIBase_fort_inventory_item_asset::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_inventory_item_asset", "$InitInstance");

	Params::UVerseAIBase_fort_inventory_item_asset__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseAIBase.VerseAIBase_fort_inventory_item_asset.$Block
// (None)
// Parameters:

void UVerseAIBase_fort_inventory_item_asset::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_inventory_item_asset", "$Block");

	Params::UVerseAIBase_fort_inventory_item_asset__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseAIBase.VerseAIBase_fort_inventory_item_asset.$InitCDO
// (None)
// Parameters:

void UVerseAIBase_fort_inventory_item_asset::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_inventory_item_asset", "$InitCDO");

	Params::UVerseAIBase_fort_inventory_item_asset__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseAIBase.VerseAIBase_fort_item_interface
// (None)

class UClass* UVerseAIBase_fort_item_interface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseAIBase_fort_item_interface");

	return Clss;
}


// VerseAIBase_fort_item_interface VerseAIBase.Default__VerseAIBase_fort_item_interface
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVerseAIBase_fort_item_interface* UVerseAIBase_fort_item_interface::GetDefaultObj()
{
	static class UVerseAIBase_fort_item_interface* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseAIBase_fort_item_interface*>(UVerseAIBase_fort_item_interface::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseAIBase.VerseAIBase_fort_item_interface._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__item__interface_N_RHasTag_L_Nfort__item__descriptor_M_Nfort__item__tag_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lfort__item__descriptor_Mfort__item__tag_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// uint8                              RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

uint8 UVerseAIBase_fort_item_interface::_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__item__interface_N_RHasTag_L_Nfort__item__descriptor_M_Nfort__item__tag_R(const struct FTuple_Lfort__item__descriptor_Mfort__item__tag_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_item_interface", "_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__item__interface_N_RHasTag_L_Nfort__item__descriptor_M_Nfort__item__tag_R");

	Params::UVerseAIBase_fort_item_interface__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__item__interface_N_RHasTag_L_Nfort__item__descriptor_M_Nfort__item__tag_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseAIBase.VerseAIBase_fort_item_interface.$InitCDO
// (None)
// Parameters:

void UVerseAIBase_fort_item_interface::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_item_interface", "$InitCDO");

	Params::UVerseAIBase_fort_item_interface__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseAIBase.VerseAIBase_fort_item_tag
// (None)

class UClass* UVerseAIBase_fort_item_tag::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseAIBase_fort_item_tag");

	return Clss;
}


// VerseAIBase_fort_item_tag VerseAIBase.Default__VerseAIBase_fort_item_tag
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVerseAIBase_fort_item_tag* UVerseAIBase_fort_item_tag::GetDefaultObj()
{
	static class UVerseAIBase_fort_item_tag* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseAIBase_fort_item_tag*>(UVerseAIBase_fort_item_tag::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseAIBase.VerseAIBase_fort_item_tag.$InitInstance
// (None)
// Parameters:

void UVerseAIBase_fort_item_tag::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_item_tag", "$InitInstance");

	Params::UVerseAIBase_fort_item_tag__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseAIBase.VerseAIBase_fort_item_tag.$Block
// (None)
// Parameters:

void UVerseAIBase_fort_item_tag::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_item_tag", "$Block");

	Params::UVerseAIBase_fort_item_tag__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseAIBase.VerseAIBase_fort_item_tag.$InitCDO
// (None)
// Parameters:

void UVerseAIBase_fort_item_tag::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_item_tag", "$InitCDO");

	Params::UVerseAIBase_fort_item_tag__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseAIBase.VerseAIBase_fort_loot_perception_interface
// (None)

class UClass* UVerseAIBase_fort_loot_perception_interface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseAIBase_fort_loot_perception_interface");

	return Clss;
}


// VerseAIBase_fort_loot_perception_interface VerseAIBase.Default__VerseAIBase_fort_loot_perception_interface
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVerseAIBase_fort_loot_perception_interface* UVerseAIBase_fort_loot_perception_interface::GetDefaultObj()
{
	static class UVerseAIBase_fort_loot_perception_interface* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseAIBase_fort_loot_perception_interface*>(UVerseAIBase_fort_loot_perception_interface::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseAIBase.VerseAIBase_fort_loot_perception_interface._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__loot__perception__interface_N_RGetBestObjectToLoot
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor)

FOptionalProperty_ UVerseAIBase_fort_loot_perception_interface::_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__loot__perception__interface_N_RGetBestObjectToLoot(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_loot_perception_interface", "_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__loot__perception__interface_N_RGetBestObjectToLoot");

	Params::UVerseAIBase_fort_loot_perception_interface__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__loot__perception__interface_N_RGetBestObjectToLoot_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseAIBase.VerseAIBase_fort_loot_perception_interface._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__loot__perception__interface_N_RBestObjectTolootChangedEvent
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UObject*                     RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UObject* UVerseAIBase_fort_loot_perception_interface::_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__loot__perception__interface_N_RBestObjectTolootChangedEvent(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_loot_perception_interface", "_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__loot__perception__interface_N_RBestObjectTolootChangedEvent");

	Params::UVerseAIBase_fort_loot_perception_interface__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__loot__perception__interface_N_RBestObjectTolootChangedEvent_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass VerseAIBase.VerseAIBase_fort_navigatable
// (None)

class UClass* UVerseAIBase_fort_navigatable::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseAIBase_fort_navigatable");

	return Clss;
}


// VerseAIBase_fort_navigatable VerseAIBase.Default__VerseAIBase_fort_navigatable
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVerseAIBase_fort_navigatable* UVerseAIBase_fort_navigatable::GetDefaultObj()
{
	static class UVerseAIBase_fort_navigatable* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseAIBase_fort_navigatable*>(UVerseAIBase_fort_navigatable::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseAIBase.VerseAIBase_fort_navigatable.RoamAround
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UVerseAIBase_fort_navigatable::RoamAround(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_navigatable", "RoamAround");

	Params::UVerseAIBase_fort_navigatable_RoamAround_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseAIBase.VerseAIBase_fort_navigatable.MoveInRangeToAttack
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UVerseAIBase_fort_navigatable::MoveInRangeToAttack(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_navigatable", "MoveInRangeToAttack");

	Params::UVerseAIBase_fort_navigatable_MoveInRangeToAttack_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass VerseAIBase.VerseAIBase_fort_obstacle_perception_interface
// (None)

class UClass* UVerseAIBase_fort_obstacle_perception_interface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseAIBase_fort_obstacle_perception_interface");

	return Clss;
}


// VerseAIBase_fort_obstacle_perception_interface VerseAIBase.Default__VerseAIBase_fort_obstacle_perception_interface
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVerseAIBase_fort_obstacle_perception_interface* UVerseAIBase_fort_obstacle_perception_interface::GetDefaultObj()
{
	static class UVerseAIBase_fort_obstacle_perception_interface* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseAIBase_fort_obstacle_perception_interface*>(UVerseAIBase_fort_obstacle_perception_interface::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseAIBase.VerseAIBase_fort_obstacle_perception_interface._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__obstacle__perception__interface_N_RObstacleChangedEvent
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UObject*                     RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UObject* UVerseAIBase_fort_obstacle_perception_interface::_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__obstacle__perception__interface_N_RObstacleChangedEvent(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_obstacle_perception_interface", "_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__obstacle__perception__interface_N_RObstacleChangedEvent");

	Params::UVerseAIBase_fort_obstacle_perception_interface__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__obstacle__perception__interface_N_RObstacleChangedEvent_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseAIBase.VerseAIBase_fort_obstacle_perception_interface._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__obstacle__perception__interface_N_RGetObstacleInfo
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor)

FOptionalProperty_ UVerseAIBase_fort_obstacle_perception_interface::_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__obstacle__perception__interface_N_RGetObstacleInfo(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_obstacle_perception_interface", "_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__obstacle__perception__interface_N_RGetObstacleInfo");

	Params::UVerseAIBase_fort_obstacle_perception_interface__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__obstacle__perception__interface_N_RGetObstacleInfo_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass VerseAIBase.VerseAIBase_fort_resource_tag
// (None)

class UClass* UVerseAIBase_fort_resource_tag::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseAIBase_fort_resource_tag");

	return Clss;
}


// VerseAIBase_fort_resource_tag VerseAIBase.Default__VerseAIBase_fort_resource_tag
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVerseAIBase_fort_resource_tag* UVerseAIBase_fort_resource_tag::GetDefaultObj()
{
	static class UVerseAIBase_fort_resource_tag* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseAIBase_fort_resource_tag*>(UVerseAIBase_fort_resource_tag::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseAIBase.VerseAIBase_fort_resource_tag.$InitInstance
// (None)
// Parameters:

void UVerseAIBase_fort_resource_tag::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_resource_tag", "$InitInstance");

	Params::UVerseAIBase_fort_resource_tag__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseAIBase.VerseAIBase_fort_resource_tag.$Block
// (None)
// Parameters:

void UVerseAIBase_fort_resource_tag::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_resource_tag", "$Block");

	Params::UVerseAIBase_fort_resource_tag__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseAIBase.VerseAIBase_fort_resource_tag.$InitCDO
// (None)
// Parameters:

void UVerseAIBase_fort_resource_tag::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_resource_tag", "$InitCDO");

	Params::UVerseAIBase_fort_resource_tag__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseAIBase.VerseAIBase_fort_metal_tag
// (None)

class UClass* UVerseAIBase_fort_metal_tag::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseAIBase_fort_metal_tag");

	return Clss;
}


// VerseAIBase_fort_metal_tag VerseAIBase.Default__VerseAIBase_fort_metal_tag
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVerseAIBase_fort_metal_tag* UVerseAIBase_fort_metal_tag::GetDefaultObj()
{
	static class UVerseAIBase_fort_metal_tag* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseAIBase_fort_metal_tag*>(UVerseAIBase_fort_metal_tag::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseAIBase.VerseAIBase_fort_metal_tag.$InitInstance
// (None)
// Parameters:

void UVerseAIBase_fort_metal_tag::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_metal_tag", "$InitInstance");

	Params::UVerseAIBase_fort_metal_tag__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseAIBase.VerseAIBase_fort_metal_tag.$Block
// (None)
// Parameters:

void UVerseAIBase_fort_metal_tag::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_metal_tag", "$Block");

	Params::UVerseAIBase_fort_metal_tag__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseAIBase.VerseAIBase_fort_metal_tag.$InitCDO
// (None)
// Parameters:

void UVerseAIBase_fort_metal_tag::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_metal_tag", "$InitCDO");

	Params::UVerseAIBase_fort_metal_tag__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseAIBase.VerseAIBase_fort_stone_tag
// (None)

class UClass* UVerseAIBase_fort_stone_tag::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseAIBase_fort_stone_tag");

	return Clss;
}


// VerseAIBase_fort_stone_tag VerseAIBase.Default__VerseAIBase_fort_stone_tag
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVerseAIBase_fort_stone_tag* UVerseAIBase_fort_stone_tag::GetDefaultObj()
{
	static class UVerseAIBase_fort_stone_tag* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseAIBase_fort_stone_tag*>(UVerseAIBase_fort_stone_tag::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseAIBase.VerseAIBase_fort_stone_tag.$InitInstance
// (None)
// Parameters:

void UVerseAIBase_fort_stone_tag::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_stone_tag", "$InitInstance");

	Params::UVerseAIBase_fort_stone_tag__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseAIBase.VerseAIBase_fort_stone_tag.$Block
// (None)
// Parameters:

void UVerseAIBase_fort_stone_tag::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_stone_tag", "$Block");

	Params::UVerseAIBase_fort_stone_tag__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseAIBase.VerseAIBase_fort_stone_tag.$InitCDO
// (None)
// Parameters:

void UVerseAIBase_fort_stone_tag::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_stone_tag", "$InitCDO");

	Params::UVerseAIBase_fort_stone_tag__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseAIBase.VerseAIBase_fort_target_selection_interface
// (None)

class UClass* UVerseAIBase_fort_target_selection_interface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseAIBase_fort_target_selection_interface");

	return Clss;
}


// VerseAIBase_fort_target_selection_interface VerseAIBase.Default__VerseAIBase_fort_target_selection_interface
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVerseAIBase_fort_target_selection_interface* UVerseAIBase_fort_target_selection_interface::GetDefaultObj()
{
	static class UVerseAIBase_fort_target_selection_interface* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseAIBase_fort_target_selection_interface*>(UVerseAIBase_fort_target_selection_interface::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseAIBase.VerseAIBase_fort_target_selection_interface._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__target__selection__interface_N_RGetCurrentThreatInfo
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor)

FOptionalProperty_ UVerseAIBase_fort_target_selection_interface::_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__target__selection__interface_N_RGetCurrentThreatInfo(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_target_selection_interface", "_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__target__selection__interface_N_RGetCurrentThreatInfo");

	Params::UVerseAIBase_fort_target_selection_interface__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__target__selection__interface_N_RGetCurrentThreatInfo_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseAIBase.VerseAIBase_fort_target_selection_interface._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__target__selection__interface_N_RCurrentThreatStatusChangedEvent
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UObject*                     RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UObject* UVerseAIBase_fort_target_selection_interface::_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__target__selection__interface_N_RCurrentThreatStatusChangedEvent(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_target_selection_interface", "_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__target__selection__interface_N_RCurrentThreatStatusChangedEvent");

	Params::UVerseAIBase_fort_target_selection_interface__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__target__selection__interface_N_RCurrentThreatStatusChangedEvent_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseAIBase.VerseAIBase_fort_target_selection_interface._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__target__selection__interface_N_RCurrentThreatChangedEvent
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UObject*                     RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UObject* UVerseAIBase_fort_target_selection_interface::_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__target__selection__interface_N_RCurrentThreatChangedEvent(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_target_selection_interface", "_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__target__selection__interface_N_RCurrentThreatChangedEvent");

	Params::UVerseAIBase_fort_target_selection_interface__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__target__selection__interface_N_RCurrentThreatChangedEvent_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass VerseAIBase.VerseAIBase_fort_weapon_actions_interface
// (None)

class UClass* UVerseAIBase_fort_weapon_actions_interface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseAIBase_fort_weapon_actions_interface");

	return Clss;
}


// VerseAIBase_fort_weapon_actions_interface VerseAIBase.Default__VerseAIBase_fort_weapon_actions_interface
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVerseAIBase_fort_weapon_actions_interface* UVerseAIBase_fort_weapon_actions_interface::GetDefaultObj()
{
	static class UVerseAIBase_fort_weapon_actions_interface* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseAIBase_fort_weapon_actions_interface*>(UVerseAIBase_fort_weapon_actions_interface::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseAIBase.VerseAIBase_fort_weapon_actions_interface._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__weapon__actions__interface_N_RReload
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// uint8                              RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

uint8 UVerseAIBase_fort_weapon_actions_interface::_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__weapon__actions__interface_N_RReload(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_weapon_actions_interface", "_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__weapon__actions__interface_N_RReload");

	Params::UVerseAIBase_fort_weapon_actions_interface__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__weapon__actions__interface_N_RReload_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseAIBase.VerseAIBase_fort_weapon_actions_interface._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__weapon__actions__interface_N_RMeleeAttack
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// uint8                              RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

uint8 UVerseAIBase_fort_weapon_actions_interface::_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__weapon__actions__interface_N_RMeleeAttack(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_weapon_actions_interface", "_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__weapon__actions__interface_N_RMeleeAttack");

	Params::UVerseAIBase_fort_weapon_actions_interface__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__weapon__actions__interface_N_RMeleeAttack_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseAIBase.VerseAIBase_fort_weapon_actions_interface._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__weapon__actions__interface_N_RFire
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// uint8                              RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

uint8 UVerseAIBase_fort_weapon_actions_interface::_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__weapon__actions__interface_N_RFire(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_weapon_actions_interface", "_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__weapon__actions__interface_N_RFire");

	Params::UVerseAIBase_fort_weapon_actions_interface__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__weapon__actions__interface_N_RFire_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass VerseAIBase.VerseAIBase_fort_weapon_tag
// (None)

class UClass* UVerseAIBase_fort_weapon_tag::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseAIBase_fort_weapon_tag");

	return Clss;
}


// VerseAIBase_fort_weapon_tag VerseAIBase.Default__VerseAIBase_fort_weapon_tag
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVerseAIBase_fort_weapon_tag* UVerseAIBase_fort_weapon_tag::GetDefaultObj()
{
	static class UVerseAIBase_fort_weapon_tag* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseAIBase_fort_weapon_tag*>(UVerseAIBase_fort_weapon_tag::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseAIBase.VerseAIBase_fort_weapon_tag.$InitInstance
// (None)
// Parameters:

void UVerseAIBase_fort_weapon_tag::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_weapon_tag", "$InitInstance");

	Params::UVerseAIBase_fort_weapon_tag__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseAIBase.VerseAIBase_fort_weapon_tag.$Block
// (None)
// Parameters:

void UVerseAIBase_fort_weapon_tag::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_weapon_tag", "$Block");

	Params::UVerseAIBase_fort_weapon_tag__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseAIBase.VerseAIBase_fort_weapon_tag.$InitCDO
// (None)
// Parameters:

void UVerseAIBase_fort_weapon_tag::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_weapon_tag", "$InitCDO");

	Params::UVerseAIBase_fort_weapon_tag__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseAIBase.VerseAIBase_fort_melee_weapon_tag
// (None)

class UClass* UVerseAIBase_fort_melee_weapon_tag::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseAIBase_fort_melee_weapon_tag");

	return Clss;
}


// VerseAIBase_fort_melee_weapon_tag VerseAIBase.Default__VerseAIBase_fort_melee_weapon_tag
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVerseAIBase_fort_melee_weapon_tag* UVerseAIBase_fort_melee_weapon_tag::GetDefaultObj()
{
	static class UVerseAIBase_fort_melee_weapon_tag* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseAIBase_fort_melee_weapon_tag*>(UVerseAIBase_fort_melee_weapon_tag::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseAIBase.VerseAIBase_fort_melee_weapon_tag.$InitInstance
// (None)
// Parameters:

void UVerseAIBase_fort_melee_weapon_tag::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_melee_weapon_tag", "$InitInstance");

	Params::UVerseAIBase_fort_melee_weapon_tag__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseAIBase.VerseAIBase_fort_melee_weapon_tag.$Block
// (None)
// Parameters:

void UVerseAIBase_fort_melee_weapon_tag::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_melee_weapon_tag", "$Block");

	Params::UVerseAIBase_fort_melee_weapon_tag__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseAIBase.VerseAIBase_fort_melee_weapon_tag.$InitCDO
// (None)
// Parameters:

void UVerseAIBase_fort_melee_weapon_tag::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_melee_weapon_tag", "$InitCDO");

	Params::UVerseAIBase_fort_melee_weapon_tag__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseAIBase.VerseAIBase_fort_pickaxe_tag
// (None)

class UClass* UVerseAIBase_fort_pickaxe_tag::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseAIBase_fort_pickaxe_tag");

	return Clss;
}


// VerseAIBase_fort_pickaxe_tag VerseAIBase.Default__VerseAIBase_fort_pickaxe_tag
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVerseAIBase_fort_pickaxe_tag* UVerseAIBase_fort_pickaxe_tag::GetDefaultObj()
{
	static class UVerseAIBase_fort_pickaxe_tag* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseAIBase_fort_pickaxe_tag*>(UVerseAIBase_fort_pickaxe_tag::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseAIBase.VerseAIBase_fort_pickaxe_tag.$InitInstance
// (None)
// Parameters:

void UVerseAIBase_fort_pickaxe_tag::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_pickaxe_tag", "$InitInstance");

	Params::UVerseAIBase_fort_pickaxe_tag__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseAIBase.VerseAIBase_fort_pickaxe_tag.$Block
// (None)
// Parameters:

void UVerseAIBase_fort_pickaxe_tag::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_pickaxe_tag", "$Block");

	Params::UVerseAIBase_fort_pickaxe_tag__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseAIBase.VerseAIBase_fort_pickaxe_tag.$InitCDO
// (None)
// Parameters:

void UVerseAIBase_fort_pickaxe_tag::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_pickaxe_tag", "$InitCDO");

	Params::UVerseAIBase_fort_pickaxe_tag__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseAIBase.VerseAIBase_fort_range_weapon_tag
// (None)

class UClass* UVerseAIBase_fort_range_weapon_tag::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseAIBase_fort_range_weapon_tag");

	return Clss;
}


// VerseAIBase_fort_range_weapon_tag VerseAIBase.Default__VerseAIBase_fort_range_weapon_tag
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVerseAIBase_fort_range_weapon_tag* UVerseAIBase_fort_range_weapon_tag::GetDefaultObj()
{
	static class UVerseAIBase_fort_range_weapon_tag* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseAIBase_fort_range_weapon_tag*>(UVerseAIBase_fort_range_weapon_tag::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseAIBase.VerseAIBase_fort_range_weapon_tag.$InitInstance
// (None)
// Parameters:

void UVerseAIBase_fort_range_weapon_tag::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_range_weapon_tag", "$InitInstance");

	Params::UVerseAIBase_fort_range_weapon_tag__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseAIBase.VerseAIBase_fort_range_weapon_tag.$Block
// (None)
// Parameters:

void UVerseAIBase_fort_range_weapon_tag::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_range_weapon_tag", "$Block");

	Params::UVerseAIBase_fort_range_weapon_tag__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseAIBase.VerseAIBase_fort_range_weapon_tag.$InitCDO
// (None)
// Parameters:

void UVerseAIBase_fort_range_weapon_tag::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_range_weapon_tag", "$InitCDO");

	Params::UVerseAIBase_fort_range_weapon_tag__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseAIBase.VerseAIBase_fort_biplane_gun_tag
// (None)

class UClass* UVerseAIBase_fort_biplane_gun_tag::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseAIBase_fort_biplane_gun_tag");

	return Clss;
}


// VerseAIBase_fort_biplane_gun_tag VerseAIBase.Default__VerseAIBase_fort_biplane_gun_tag
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVerseAIBase_fort_biplane_gun_tag* UVerseAIBase_fort_biplane_gun_tag::GetDefaultObj()
{
	static class UVerseAIBase_fort_biplane_gun_tag* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseAIBase_fort_biplane_gun_tag*>(UVerseAIBase_fort_biplane_gun_tag::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseAIBase.VerseAIBase_fort_biplane_gun_tag.$InitInstance
// (None)
// Parameters:

void UVerseAIBase_fort_biplane_gun_tag::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_biplane_gun_tag", "$InitInstance");

	Params::UVerseAIBase_fort_biplane_gun_tag__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseAIBase.VerseAIBase_fort_biplane_gun_tag.$Block
// (None)
// Parameters:

void UVerseAIBase_fort_biplane_gun_tag::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_biplane_gun_tag", "$Block");

	Params::UVerseAIBase_fort_biplane_gun_tag__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseAIBase.VerseAIBase_fort_biplane_gun_tag.$InitCDO
// (None)
// Parameters:

void UVerseAIBase_fort_biplane_gun_tag::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_biplane_gun_tag", "$InitCDO");

	Params::UVerseAIBase_fort_biplane_gun_tag__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseAIBase.VerseAIBase_fort_bow_tag
// (None)

class UClass* UVerseAIBase_fort_bow_tag::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseAIBase_fort_bow_tag");

	return Clss;
}


// VerseAIBase_fort_bow_tag VerseAIBase.Default__VerseAIBase_fort_bow_tag
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVerseAIBase_fort_bow_tag* UVerseAIBase_fort_bow_tag::GetDefaultObj()
{
	static class UVerseAIBase_fort_bow_tag* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseAIBase_fort_bow_tag*>(UVerseAIBase_fort_bow_tag::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseAIBase.VerseAIBase_fort_bow_tag.$InitInstance
// (None)
// Parameters:

void UVerseAIBase_fort_bow_tag::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_bow_tag", "$InitInstance");

	Params::UVerseAIBase_fort_bow_tag__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseAIBase.VerseAIBase_fort_bow_tag.$Block
// (None)
// Parameters:

void UVerseAIBase_fort_bow_tag::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_bow_tag", "$Block");

	Params::UVerseAIBase_fort_bow_tag__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseAIBase.VerseAIBase_fort_bow_tag.$InitCDO
// (None)
// Parameters:

void UVerseAIBase_fort_bow_tag::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_bow_tag", "$InitCDO");

	Params::UVerseAIBase_fort_bow_tag__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseAIBase.VerseAIBase_fort_grenade_launcher_tag
// (None)

class UClass* UVerseAIBase_fort_grenade_launcher_tag::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseAIBase_fort_grenade_launcher_tag");

	return Clss;
}


// VerseAIBase_fort_grenade_launcher_tag VerseAIBase.Default__VerseAIBase_fort_grenade_launcher_tag
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVerseAIBase_fort_grenade_launcher_tag* UVerseAIBase_fort_grenade_launcher_tag::GetDefaultObj()
{
	static class UVerseAIBase_fort_grenade_launcher_tag* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseAIBase_fort_grenade_launcher_tag*>(UVerseAIBase_fort_grenade_launcher_tag::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseAIBase.VerseAIBase_fort_grenade_launcher_tag.$InitInstance
// (None)
// Parameters:

void UVerseAIBase_fort_grenade_launcher_tag::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_grenade_launcher_tag", "$InitInstance");

	Params::UVerseAIBase_fort_grenade_launcher_tag__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseAIBase.VerseAIBase_fort_grenade_launcher_tag.$Block
// (None)
// Parameters:

void UVerseAIBase_fort_grenade_launcher_tag::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_grenade_launcher_tag", "$Block");

	Params::UVerseAIBase_fort_grenade_launcher_tag__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseAIBase.VerseAIBase_fort_grenade_launcher_tag.$InitCDO
// (None)
// Parameters:

void UVerseAIBase_fort_grenade_launcher_tag::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_grenade_launcher_tag", "$InitCDO");

	Params::UVerseAIBase_fort_grenade_launcher_tag__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseAIBase.VerseAIBase_fort_LMG_tag
// (None)

class UClass* UVerseAIBase_fort_LMG_tag::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseAIBase_fort_LMG_tag");

	return Clss;
}


// VerseAIBase_fort_LMG_tag VerseAIBase.Default__VerseAIBase_fort_LMG_tag
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVerseAIBase_fort_LMG_tag* UVerseAIBase_fort_LMG_tag::GetDefaultObj()
{
	static class UVerseAIBase_fort_LMG_tag* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseAIBase_fort_LMG_tag*>(UVerseAIBase_fort_LMG_tag::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseAIBase.VerseAIBase_fort_LMG_tag.$InitInstance
// (None)
// Parameters:

void UVerseAIBase_fort_LMG_tag::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_LMG_tag", "$InitInstance");

	Params::UVerseAIBase_fort_LMG_tag__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseAIBase.VerseAIBase_fort_LMG_tag.$Block
// (None)
// Parameters:

void UVerseAIBase_fort_LMG_tag::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_LMG_tag", "$Block");

	Params::UVerseAIBase_fort_LMG_tag__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseAIBase.VerseAIBase_fort_LMG_tag.$InitCDO
// (None)
// Parameters:

void UVerseAIBase_fort_LMG_tag::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_LMG_tag", "$InitCDO");

	Params::UVerseAIBase_fort_LMG_tag__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseAIBase.VerseAIBase_fort_mini_gun_tag
// (None)

class UClass* UVerseAIBase_fort_mini_gun_tag::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseAIBase_fort_mini_gun_tag");

	return Clss;
}


// VerseAIBase_fort_mini_gun_tag VerseAIBase.Default__VerseAIBase_fort_mini_gun_tag
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVerseAIBase_fort_mini_gun_tag* UVerseAIBase_fort_mini_gun_tag::GetDefaultObj()
{
	static class UVerseAIBase_fort_mini_gun_tag* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseAIBase_fort_mini_gun_tag*>(UVerseAIBase_fort_mini_gun_tag::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseAIBase.VerseAIBase_fort_mini_gun_tag.$InitInstance
// (None)
// Parameters:

void UVerseAIBase_fort_mini_gun_tag::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_mini_gun_tag", "$InitInstance");

	Params::UVerseAIBase_fort_mini_gun_tag__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseAIBase.VerseAIBase_fort_mini_gun_tag.$Block
// (None)
// Parameters:

void UVerseAIBase_fort_mini_gun_tag::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_mini_gun_tag", "$Block");

	Params::UVerseAIBase_fort_mini_gun_tag__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseAIBase.VerseAIBase_fort_mini_gun_tag.$InitCDO
// (None)
// Parameters:

void UVerseAIBase_fort_mini_gun_tag::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_mini_gun_tag", "$InitCDO");

	Params::UVerseAIBase_fort_mini_gun_tag__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseAIBase.VerseAIBase_fort_pistol_tag
// (None)

class UClass* UVerseAIBase_fort_pistol_tag::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseAIBase_fort_pistol_tag");

	return Clss;
}


// VerseAIBase_fort_pistol_tag VerseAIBase.Default__VerseAIBase_fort_pistol_tag
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVerseAIBase_fort_pistol_tag* UVerseAIBase_fort_pistol_tag::GetDefaultObj()
{
	static class UVerseAIBase_fort_pistol_tag* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseAIBase_fort_pistol_tag*>(UVerseAIBase_fort_pistol_tag::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseAIBase.VerseAIBase_fort_pistol_tag.$InitInstance
// (None)
// Parameters:

void UVerseAIBase_fort_pistol_tag::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_pistol_tag", "$InitInstance");

	Params::UVerseAIBase_fort_pistol_tag__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseAIBase.VerseAIBase_fort_pistol_tag.$Block
// (None)
// Parameters:

void UVerseAIBase_fort_pistol_tag::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_pistol_tag", "$Block");

	Params::UVerseAIBase_fort_pistol_tag__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseAIBase.VerseAIBase_fort_pistol_tag.$InitCDO
// (None)
// Parameters:

void UVerseAIBase_fort_pistol_tag::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_pistol_tag", "$InitCDO");

	Params::UVerseAIBase_fort_pistol_tag__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseAIBase.VerseAIBase_fort_rifle_tag
// (None)

class UClass* UVerseAIBase_fort_rifle_tag::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseAIBase_fort_rifle_tag");

	return Clss;
}


// VerseAIBase_fort_rifle_tag VerseAIBase.Default__VerseAIBase_fort_rifle_tag
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVerseAIBase_fort_rifle_tag* UVerseAIBase_fort_rifle_tag::GetDefaultObj()
{
	static class UVerseAIBase_fort_rifle_tag* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseAIBase_fort_rifle_tag*>(UVerseAIBase_fort_rifle_tag::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseAIBase.VerseAIBase_fort_rifle_tag.$InitInstance
// (None)
// Parameters:

void UVerseAIBase_fort_rifle_tag::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_rifle_tag", "$InitInstance");

	Params::UVerseAIBase_fort_rifle_tag__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseAIBase.VerseAIBase_fort_rifle_tag.$Block
// (None)
// Parameters:

void UVerseAIBase_fort_rifle_tag::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_rifle_tag", "$Block");

	Params::UVerseAIBase_fort_rifle_tag__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseAIBase.VerseAIBase_fort_rifle_tag.$InitCDO
// (None)
// Parameters:

void UVerseAIBase_fort_rifle_tag::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_rifle_tag", "$InitCDO");

	Params::UVerseAIBase_fort_rifle_tag__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseAIBase.VerseAIBase_fort_rocket_launcher_tag
// (None)

class UClass* UVerseAIBase_fort_rocket_launcher_tag::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseAIBase_fort_rocket_launcher_tag");

	return Clss;
}


// VerseAIBase_fort_rocket_launcher_tag VerseAIBase.Default__VerseAIBase_fort_rocket_launcher_tag
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVerseAIBase_fort_rocket_launcher_tag* UVerseAIBase_fort_rocket_launcher_tag::GetDefaultObj()
{
	static class UVerseAIBase_fort_rocket_launcher_tag* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseAIBase_fort_rocket_launcher_tag*>(UVerseAIBase_fort_rocket_launcher_tag::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseAIBase.VerseAIBase_fort_rocket_launcher_tag.$InitInstance
// (None)
// Parameters:

void UVerseAIBase_fort_rocket_launcher_tag::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_rocket_launcher_tag", "$InitInstance");

	Params::UVerseAIBase_fort_rocket_launcher_tag__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseAIBase.VerseAIBase_fort_rocket_launcher_tag.$Block
// (None)
// Parameters:

void UVerseAIBase_fort_rocket_launcher_tag::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_rocket_launcher_tag", "$Block");

	Params::UVerseAIBase_fort_rocket_launcher_tag__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseAIBase.VerseAIBase_fort_rocket_launcher_tag.$InitCDO
// (None)
// Parameters:

void UVerseAIBase_fort_rocket_launcher_tag::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_rocket_launcher_tag", "$InitCDO");

	Params::UVerseAIBase_fort_rocket_launcher_tag__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseAIBase.VerseAIBase_fort_shotgun_tag
// (None)

class UClass* UVerseAIBase_fort_shotgun_tag::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseAIBase_fort_shotgun_tag");

	return Clss;
}


// VerseAIBase_fort_shotgun_tag VerseAIBase.Default__VerseAIBase_fort_shotgun_tag
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVerseAIBase_fort_shotgun_tag* UVerseAIBase_fort_shotgun_tag::GetDefaultObj()
{
	static class UVerseAIBase_fort_shotgun_tag* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseAIBase_fort_shotgun_tag*>(UVerseAIBase_fort_shotgun_tag::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseAIBase.VerseAIBase_fort_shotgun_tag.$InitInstance
// (None)
// Parameters:

void UVerseAIBase_fort_shotgun_tag::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_shotgun_tag", "$InitInstance");

	Params::UVerseAIBase_fort_shotgun_tag__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseAIBase.VerseAIBase_fort_shotgun_tag.$Block
// (None)
// Parameters:

void UVerseAIBase_fort_shotgun_tag::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_shotgun_tag", "$Block");

	Params::UVerseAIBase_fort_shotgun_tag__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseAIBase.VerseAIBase_fort_shotgun_tag.$InitCDO
// (None)
// Parameters:

void UVerseAIBase_fort_shotgun_tag::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_shotgun_tag", "$InitCDO");

	Params::UVerseAIBase_fort_shotgun_tag__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseAIBase.VerseAIBase_fort_SMG_tag
// (None)

class UClass* UVerseAIBase_fort_SMG_tag::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseAIBase_fort_SMG_tag");

	return Clss;
}


// VerseAIBase_fort_SMG_tag VerseAIBase.Default__VerseAIBase_fort_SMG_tag
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVerseAIBase_fort_SMG_tag* UVerseAIBase_fort_SMG_tag::GetDefaultObj()
{
	static class UVerseAIBase_fort_SMG_tag* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseAIBase_fort_SMG_tag*>(UVerseAIBase_fort_SMG_tag::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseAIBase.VerseAIBase_fort_SMG_tag.$InitInstance
// (None)
// Parameters:

void UVerseAIBase_fort_SMG_tag::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_SMG_tag", "$InitInstance");

	Params::UVerseAIBase_fort_SMG_tag__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseAIBase.VerseAIBase_fort_SMG_tag.$Block
// (None)
// Parameters:

void UVerseAIBase_fort_SMG_tag::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_SMG_tag", "$Block");

	Params::UVerseAIBase_fort_SMG_tag__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseAIBase.VerseAIBase_fort_SMG_tag.$InitCDO
// (None)
// Parameters:

void UVerseAIBase_fort_SMG_tag::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_SMG_tag", "$InitCDO");

	Params::UVerseAIBase_fort_SMG_tag__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseAIBase.VerseAIBase_fort_sniper_tag
// (None)

class UClass* UVerseAIBase_fort_sniper_tag::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseAIBase_fort_sniper_tag");

	return Clss;
}


// VerseAIBase_fort_sniper_tag VerseAIBase.Default__VerseAIBase_fort_sniper_tag
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVerseAIBase_fort_sniper_tag* UVerseAIBase_fort_sniper_tag::GetDefaultObj()
{
	static class UVerseAIBase_fort_sniper_tag* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseAIBase_fort_sniper_tag*>(UVerseAIBase_fort_sniper_tag::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseAIBase.VerseAIBase_fort_sniper_tag.$InitInstance
// (None)
// Parameters:

void UVerseAIBase_fort_sniper_tag::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_sniper_tag", "$InitInstance");

	Params::UVerseAIBase_fort_sniper_tag__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseAIBase.VerseAIBase_fort_sniper_tag.$Block
// (None)
// Parameters:

void UVerseAIBase_fort_sniper_tag::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_sniper_tag", "$Block");

	Params::UVerseAIBase_fort_sniper_tag__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseAIBase.VerseAIBase_fort_sniper_tag.$InitCDO
// (None)
// Parameters:

void UVerseAIBase_fort_sniper_tag::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_sniper_tag", "$InitCDO");

	Params::UVerseAIBase_fort_sniper_tag__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseAIBase.VerseAIBase_fort_wood_tag
// (None)

class UClass* UVerseAIBase_fort_wood_tag::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseAIBase_fort_wood_tag");

	return Clss;
}


// VerseAIBase_fort_wood_tag VerseAIBase.Default__VerseAIBase_fort_wood_tag
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVerseAIBase_fort_wood_tag* UVerseAIBase_fort_wood_tag::GetDefaultObj()
{
	static class UVerseAIBase_fort_wood_tag* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseAIBase_fort_wood_tag*>(UVerseAIBase_fort_wood_tag::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseAIBase.VerseAIBase_fort_wood_tag.$InitInstance
// (None)
// Parameters:

void UVerseAIBase_fort_wood_tag::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_wood_tag", "$InitInstance");

	Params::UVerseAIBase_fort_wood_tag__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseAIBase.VerseAIBase_fort_wood_tag.$Block
// (None)
// Parameters:

void UVerseAIBase_fort_wood_tag::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_wood_tag", "$Block");

	Params::UVerseAIBase_fort_wood_tag__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseAIBase.VerseAIBase_fort_wood_tag.$InitCDO
// (None)
// Parameters:

void UVerseAIBase_fort_wood_tag::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_fort_wood_tag", "$InitCDO");

	Params::UVerseAIBase_fort_wood_tag__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseAIBase.VerseAIBase_FortCreatureActionsModule
// (None)

class UClass* UVerseAIBase_FortCreatureActionsModule::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseAIBase_FortCreatureActionsModule");

	return Clss;
}


// VerseAIBase_FortCreatureActionsModule VerseAIBase.Default__VerseAIBase_FortCreatureActionsModule
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVerseAIBase_FortCreatureActionsModule* UVerseAIBase_FortCreatureActionsModule::GetDefaultObj()
{
	static class UVerseAIBase_FortCreatureActionsModule* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseAIBase_FortCreatureActionsModule*>(UVerseAIBase_FortCreatureActionsModule::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseAIBase.VerseAIBase_FortCreatureActionsModule._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2fFortCreatureActionsModule_N_RGetGameplayAbility_L_N_Kchar_R
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// FVerseStringProperty_              __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UGame_Abilities_gameplay_ability_asset*RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResultStack_0                                               (HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_1                                                        (HasGetValueTypeHash)
// struct FTuple_Lgameplay__ability__asset_M_Kchar_R_ExprResult_2                                                    (HasGetValueTypeHash)
// FVerseDynamicProperty_             _ExprResultStack_3                                               (HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_4                                                        (HasGetValueTypeHash)
// struct FTuple_Lgameplay__ability__asset_M_Kchar_R_ExprResult_5                                                    (HasGetValueTypeHash)

class UGame_Abilities_gameplay_ability_asset* UVerseAIBase_FortCreatureActionsModule::_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2fFortCreatureActionsModule_N_RGetGameplayAbility_L_N_Kchar_R(FVerseStringProperty_ __verse_0xB2CDDD72_Argument, FVerseDynamicProperty_ _ExprResultStack_0, FVerseFunctionProperty_ _Callee_1, const struct FTuple_Lgameplay__ability__asset_M_Kchar_R& _ExprResult_2, FVerseDynamicProperty_ _ExprResultStack_3, FVerseFunctionProperty_ _Callee_4, const struct FTuple_Lgameplay__ability__asset_M_Kchar_R& _ExprResult_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_FortCreatureActionsModule", "_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2fFortCreatureActionsModule_N_RGetGameplayAbility_L_N_Kchar_R");

	Params::UVerseAIBase_FortCreatureActionsModule__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2fFortCreatureActionsModule_N_RGetGameplayAbility_L_N_Kchar_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._ExprResultStack_0 = _ExprResultStack_0;
	Parms._Callee_1 = _Callee_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._ExprResultStack_3 = _ExprResultStack_3;
	Parms._Callee_4 = _Callee_4;
	Parms._ExprResult_5 = _ExprResult_5;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseAIBase.VerseAIBase_FortCreatureActionsModule.$InitCDO
// (None)
// Parameters:

void UVerseAIBase_FortCreatureActionsModule::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseAIBase_FortCreatureActionsModule", "$InitCDO");

	Params::UVerseAIBase_FortCreatureActionsModule__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}

}


