#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// VerseClass VerseNPC.$SolarisSignatureFunctionOuter
// (None)

class UClass* U_SolarisSignatureFunctionOuter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("$SolarisSignatureFunctionOuter");

	return Clss;
}


// $SolarisSignatureFunctionOuter VerseNPC.Default__$SolarisSignatureFunctionOuter
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class U_SolarisSignatureFunctionOuter* U_SolarisSignatureFunctionOuter::GetDefaultObj()
{
	static class U_SolarisSignatureFunctionOuter* Default = nullptr;

	if (!Default)
		Default = static_cast<U_SolarisSignatureFunctionOuter*>(U_SolarisSignatureFunctionOuter::StaticClass()->DefaultObject);

	return Default;
}


// VerseClass VerseNPC.task_VerseNPC_npc_component$AttackObstacle_L_Nfort__obstacle__info_R
// (None)

class UClass* UTask_VerseNPC_npc_component_AttackObstacle_L_Nfort__obstacle__info_R::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_VerseNPC_npc_component$AttackObstacle_L_Nfort__obstacle__info_R");

	return Clss;
}


// task_VerseNPC_npc_component$AttackObstacle_L_Nfort__obstacle__info_R VerseNPC.Default__task_VerseNPC_npc_component$AttackObstacle_L_Nfort__obstacle__info_R
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_VerseNPC_npc_component_AttackObstacle_L_Nfort__obstacle__info_R* UTask_VerseNPC_npc_component_AttackObstacle_L_Nfort__obstacle__info_R::GetDefaultObj()
{
	static class UTask_VerseNPC_npc_component_AttackObstacle_L_Nfort__obstacle__info_R* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_VerseNPC_npc_component_AttackObstacle_L_Nfort__obstacle__info_R*>(UTask_VerseNPC_npc_component_AttackObstacle_L_Nfort__obstacle__info_R::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseNPC.task_VerseNPC_npc_component$AttackObstacle_L_Nfort__obstacle__info_R.Update
// (Native, Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_VerseNPC_npc_component_AttackObstacle_L_Nfort__obstacle__info_R::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_VerseNPC_npc_component$AttackObstacle_L_Nfort__obstacle__info_R", "Update");

	Params::UTask_VerseNPC_npc_component_AttackObstacle_L_Nfort__obstacle__info_R_Update_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// VerseClass VerseNPC.task_VerseNPC_npc_component$AttackThreat_L_Nfort__threat__info_R
// (None)

class UClass* UTask_VerseNPC_npc_component_AttackThreat_L_Nfort__threat__info_R::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_VerseNPC_npc_component$AttackThreat_L_Nfort__threat__info_R");

	return Clss;
}


// task_VerseNPC_npc_component$AttackThreat_L_Nfort__threat__info_R VerseNPC.Default__task_VerseNPC_npc_component$AttackThreat_L_Nfort__threat__info_R
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_VerseNPC_npc_component_AttackThreat_L_Nfort__threat__info_R* UTask_VerseNPC_npc_component_AttackThreat_L_Nfort__threat__info_R::GetDefaultObj()
{
	static class UTask_VerseNPC_npc_component_AttackThreat_L_Nfort__threat__info_R* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_VerseNPC_npc_component_AttackThreat_L_Nfort__threat__info_R*>(UTask_VerseNPC_npc_component_AttackThreat_L_Nfort__threat__info_R::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseNPC.task_VerseNPC_npc_component$AttackThreat_L_Nfort__threat__info_R.Update
// (Native, Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_VerseNPC_npc_component_AttackThreat_L_Nfort__threat__info_R::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_VerseNPC_npc_component$AttackThreat_L_Nfort__threat__info_R", "Update");

	Params::UTask_VerseNPC_npc_component_AttackThreat_L_Nfort__threat__info_R_Update_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// VerseClass VerseNPC.task_VerseNPC_npc_component$Crouch
// (None)

class UClass* UTask_VerseNPC_npc_component_Crouch::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_VerseNPC_npc_component$Crouch");

	return Clss;
}


// task_VerseNPC_npc_component$Crouch VerseNPC.Default__task_VerseNPC_npc_component$Crouch
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_VerseNPC_npc_component_Crouch* UTask_VerseNPC_npc_component_Crouch::GetDefaultObj()
{
	static class UTask_VerseNPC_npc_component_Crouch* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_VerseNPC_npc_component_Crouch*>(UTask_VerseNPC_npc_component_Crouch::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseNPC.task_VerseNPC_npc_component$Crouch.Update
// (Native, Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_VerseNPC_npc_component_Crouch::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_VerseNPC_npc_component$Crouch", "Update");

	Params::UTask_VerseNPC_npc_component_Crouch_Update_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// VerseClass VerseNPC.task_VerseNPC_npc_component$Jump
// (None)

class UClass* UTask_VerseNPC_npc_component_Jump::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_VerseNPC_npc_component$Jump");

	return Clss;
}


// task_VerseNPC_npc_component$Jump VerseNPC.Default__task_VerseNPC_npc_component$Jump
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_VerseNPC_npc_component_Jump* UTask_VerseNPC_npc_component_Jump::GetDefaultObj()
{
	static class UTask_VerseNPC_npc_component_Jump* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_VerseNPC_npc_component_Jump*>(UTask_VerseNPC_npc_component_Jump::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseNPC.task_VerseNPC_npc_component$Jump.Update
// (Native, Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_VerseNPC_npc_component_Jump::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_VerseNPC_npc_component$Jump", "Update");

	Params::UTask_VerseNPC_npc_component_Jump_Update_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// VerseClass VerseNPC.task_VerseNPC_npc_component$LootObject_L_Nfort__loot__info_R
// (None)

class UClass* UTask_VerseNPC_npc_component_LootObject_L_Nfort__loot__info_R::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_VerseNPC_npc_component$LootObject_L_Nfort__loot__info_R");

	return Clss;
}


// task_VerseNPC_npc_component$LootObject_L_Nfort__loot__info_R VerseNPC.Default__task_VerseNPC_npc_component$LootObject_L_Nfort__loot__info_R
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_VerseNPC_npc_component_LootObject_L_Nfort__loot__info_R* UTask_VerseNPC_npc_component_LootObject_L_Nfort__loot__info_R::GetDefaultObj()
{
	static class UTask_VerseNPC_npc_component_LootObject_L_Nfort__loot__info_R* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_VerseNPC_npc_component_LootObject_L_Nfort__loot__info_R*>(UTask_VerseNPC_npc_component_LootObject_L_Nfort__loot__info_R::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseNPC.task_VerseNPC_npc_component$LootObject_L_Nfort__loot__info_R.Update
// (Native, Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_VerseNPC_npc_component_LootObject_L_Nfort__loot__info_R::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_VerseNPC_npc_component$LootObject_L_Nfort__loot__info_R", "Update");

	Params::UTask_VerseNPC_npc_component_LootObject_L_Nfort__loot__info_R_Update_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// VerseClass VerseNPC.task_VerseNPC_npc_component$MaintainFocus_L_Nagent_R
// (None)

class UClass* UTask_VerseNPC_npc_component_MaintainFocus_L_Nagent_R::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_VerseNPC_npc_component$MaintainFocus_L_Nagent_R");

	return Clss;
}


// task_VerseNPC_npc_component$MaintainFocus_L_Nagent_R VerseNPC.Default__task_VerseNPC_npc_component$MaintainFocus_L_Nagent_R
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_VerseNPC_npc_component_MaintainFocus_L_Nagent_R* UTask_VerseNPC_npc_component_MaintainFocus_L_Nagent_R::GetDefaultObj()
{
	static class UTask_VerseNPC_npc_component_MaintainFocus_L_Nagent_R* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_VerseNPC_npc_component_MaintainFocus_L_Nagent_R*>(UTask_VerseNPC_npc_component_MaintainFocus_L_Nagent_R::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseNPC.task_VerseNPC_npc_component$MaintainFocus_L_Nagent_R.Update
// (Native, Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_VerseNPC_npc_component_MaintainFocus_L_Nagent_R::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_VerseNPC_npc_component$MaintainFocus_L_Nagent_R", "Update");

	Params::UTask_VerseNPC_npc_component_MaintainFocus_L_Nagent_R_Update_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// VerseClass VerseNPC.task_VerseNPC_npc_component$MaintainFocus_L_Nvector3_R
// (None)

class UClass* UTask_VerseNPC_npc_component_MaintainFocus_L_Nvector3_R::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_VerseNPC_npc_component$MaintainFocus_L_Nvector3_R");

	return Clss;
}


// task_VerseNPC_npc_component$MaintainFocus_L_Nvector3_R VerseNPC.Default__task_VerseNPC_npc_component$MaintainFocus_L_Nvector3_R
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_VerseNPC_npc_component_MaintainFocus_L_Nvector3_R* UTask_VerseNPC_npc_component_MaintainFocus_L_Nvector3_R::GetDefaultObj()
{
	static class UTask_VerseNPC_npc_component_MaintainFocus_L_Nvector3_R* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_VerseNPC_npc_component_MaintainFocus_L_Nvector3_R*>(UTask_VerseNPC_npc_component_MaintainFocus_L_Nvector3_R::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseNPC.task_VerseNPC_npc_component$MaintainFocus_L_Nvector3_R.Update
// (Native, Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_VerseNPC_npc_component_MaintainFocus_L_Nvector3_R::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_VerseNPC_npc_component$MaintainFocus_L_Nvector3_R", "Update");

	Params::UTask_VerseNPC_npc_component_MaintainFocus_L_Nvector3_R_Update_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// VerseClass VerseNPC.task_VerseNPC_npc_component$MoveInRangeToAttack
// (None)

class UClass* UTask_VerseNPC_npc_component_MoveInRangeToAttack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_VerseNPC_npc_component$MoveInRangeToAttack");

	return Clss;
}


// task_VerseNPC_npc_component$MoveInRangeToAttack VerseNPC.Default__task_VerseNPC_npc_component$MoveInRangeToAttack
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_VerseNPC_npc_component_MoveInRangeToAttack* UTask_VerseNPC_npc_component_MoveInRangeToAttack::GetDefaultObj()
{
	static class UTask_VerseNPC_npc_component_MoveInRangeToAttack* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_VerseNPC_npc_component_MoveInRangeToAttack*>(UTask_VerseNPC_npc_component_MoveInRangeToAttack::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseNPC.task_VerseNPC_npc_component$MoveInRangeToAttack.Update
// (Native, Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_VerseNPC_npc_component_MoveInRangeToAttack::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_VerseNPC_npc_component$MoveInRangeToAttack", "Update");

	Params::UTask_VerseNPC_npc_component_MoveInRangeToAttack_Update_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// VerseClass VerseNPC.task_VerseNPC_npc_component$NavigateTo_L_Nnavigation__target_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R
// (None)

class UClass* UTask_VerseNPC_npc_component_NavigateTo_L_Nnavigation__target_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_VerseNPC_npc_component$NavigateTo_L_Nnavigation__target_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R");

	return Clss;
}


// task_VerseNPC_npc_component$NavigateTo_L_Nnavigation__target_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R VerseNPC.Default__task_VerseNPC_npc_component$NavigateTo_L_Nnavigation__target_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_VerseNPC_npc_component_NavigateTo_L_Nnavigation__target_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R* UTask_VerseNPC_npc_component_NavigateTo_L_Nnavigation__target_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R::GetDefaultObj()
{
	static class UTask_VerseNPC_npc_component_NavigateTo_L_Nnavigation__target_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_VerseNPC_npc_component_NavigateTo_L_Nnavigation__target_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R*>(UTask_VerseNPC_npc_component_NavigateTo_L_Nnavigation__target_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseNPC.task_VerseNPC_npc_component$NavigateTo_L_Nnavigation__target_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R.Update
// (Native, Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_VerseNPC_npc_component_NavigateTo_L_Nnavigation__target_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_VerseNPC_npc_component$NavigateTo_L_Nnavigation__target_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R", "Update");

	Params::UTask_VerseNPC_npc_component_NavigateTo_L_Nnavigation__target_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R_Update_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// VerseClass VerseNPC.task_VerseNPC_npc_component$PlayRandomEmote
// (None)

class UClass* UTask_VerseNPC_npc_component_PlayRandomEmote::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_VerseNPC_npc_component$PlayRandomEmote");

	return Clss;
}


// task_VerseNPC_npc_component$PlayRandomEmote VerseNPC.Default__task_VerseNPC_npc_component$PlayRandomEmote
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_VerseNPC_npc_component_PlayRandomEmote* UTask_VerseNPC_npc_component_PlayRandomEmote::GetDefaultObj()
{
	static class UTask_VerseNPC_npc_component_PlayRandomEmote* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_VerseNPC_npc_component_PlayRandomEmote*>(UTask_VerseNPC_npc_component_PlayRandomEmote::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseNPC.task_VerseNPC_npc_component$PlayRandomEmote.Update
// (Native, Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_VerseNPC_npc_component_PlayRandomEmote::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_VerseNPC_npc_component$PlayRandomEmote", "Update");

	Params::UTask_VerseNPC_npc_component_PlayRandomEmote_Update_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// VerseClass VerseNPC.task_VerseNPC_npc_component$Revive_L_Nagent_R
// (None)

class UClass* UTask_VerseNPC_npc_component_Revive_L_Nagent_R::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_VerseNPC_npc_component$Revive_L_Nagent_R");

	return Clss;
}


// task_VerseNPC_npc_component$Revive_L_Nagent_R VerseNPC.Default__task_VerseNPC_npc_component$Revive_L_Nagent_R
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_VerseNPC_npc_component_Revive_L_Nagent_R* UTask_VerseNPC_npc_component_Revive_L_Nagent_R::GetDefaultObj()
{
	static class UTask_VerseNPC_npc_component_Revive_L_Nagent_R* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_VerseNPC_npc_component_Revive_L_Nagent_R*>(UTask_VerseNPC_npc_component_Revive_L_Nagent_R::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseNPC.task_VerseNPC_npc_component$Revive_L_Nagent_R.Update
// (Native, Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_VerseNPC_npc_component_Revive_L_Nagent_R::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_VerseNPC_npc_component$Revive_L_Nagent_R", "Update");

	Params::UTask_VerseNPC_npc_component_Revive_L_Nagent_R_Update_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// VerseClass VerseNPC.task_VerseNPC_npc_component$RoamAround
// (None)

class UClass* UTask_VerseNPC_npc_component_RoamAround::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_VerseNPC_npc_component$RoamAround");

	return Clss;
}


// task_VerseNPC_npc_component$RoamAround VerseNPC.Default__task_VerseNPC_npc_component$RoamAround
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_VerseNPC_npc_component_RoamAround* UTask_VerseNPC_npc_component_RoamAround::GetDefaultObj()
{
	static class UTask_VerseNPC_npc_component_RoamAround* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_VerseNPC_npc_component_RoamAround*>(UTask_VerseNPC_npc_component_RoamAround::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseNPC.task_VerseNPC_npc_component$RoamAround.Update
// (Native, Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_VerseNPC_npc_component_RoamAround::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_VerseNPC_npc_component$RoamAround", "Update");

	Params::UTask_VerseNPC_npc_component_RoamAround_Update_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// VerseClass VerseNPC.task_VerseNPC_npc_component$Slide
// (None)

class UClass* UTask_VerseNPC_npc_component_Slide::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_VerseNPC_npc_component$Slide");

	return Clss;
}


// task_VerseNPC_npc_component$Slide VerseNPC.Default__task_VerseNPC_npc_component$Slide
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_VerseNPC_npc_component_Slide* UTask_VerseNPC_npc_component_Slide::GetDefaultObj()
{
	static class UTask_VerseNPC_npc_component_Slide* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_VerseNPC_npc_component_Slide*>(UTask_VerseNPC_npc_component_Slide::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseNPC.task_VerseNPC_npc_component$Slide.Update
// (Native, Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_VerseNPC_npc_component_Slide::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_VerseNPC_npc_component$Slide", "Update");

	Params::UTask_VerseNPC_npc_component_Slide_Update_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// VerseClass VerseNPC.task_VerseNPC_npc_component$Sprint
// (None)

class UClass* UTask_VerseNPC_npc_component_Sprint::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_VerseNPC_npc_component$Sprint");

	return Clss;
}


// task_VerseNPC_npc_component$Sprint VerseNPC.Default__task_VerseNPC_npc_component$Sprint
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_VerseNPC_npc_component_Sprint* UTask_VerseNPC_npc_component_Sprint::GetDefaultObj()
{
	static class UTask_VerseNPC_npc_component_Sprint* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_VerseNPC_npc_component_Sprint*>(UTask_VerseNPC_npc_component_Sprint::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseNPC.task_VerseNPC_npc_component$Sprint.Update
// (Native, Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_VerseNPC_npc_component_Sprint::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_VerseNPC_npc_component$Sprint", "Update");

	Params::UTask_VerseNPC_npc_component_Sprint_Update_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// VerseClass VerseNPC.task_VerseNPC_npc_component$TacticalSprint
// (None)

class UClass* UTask_VerseNPC_npc_component_TacticalSprint::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_VerseNPC_npc_component$TacticalSprint");

	return Clss;
}


// task_VerseNPC_npc_component$TacticalSprint VerseNPC.Default__task_VerseNPC_npc_component$TacticalSprint
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_VerseNPC_npc_component_TacticalSprint* UTask_VerseNPC_npc_component_TacticalSprint::GetDefaultObj()
{
	static class UTask_VerseNPC_npc_component_TacticalSprint* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_VerseNPC_npc_component_TacticalSprint*>(UTask_VerseNPC_npc_component_TacticalSprint::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseNPC.task_VerseNPC_npc_component$TacticalSprint.Update
// (Native, Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_VerseNPC_npc_component_TacticalSprint::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_VerseNPC_npc_component$TacticalSprint", "Update");

	Params::UTask_VerseNPC_npc_component_TacticalSprint_Update_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// VerseClass VerseNPC.task_VerseNPC_npc_component$Wait_L_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R
// (None)

class UClass* UTask_VerseNPC_npc_component_Wait_L_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_VerseNPC_npc_component$Wait_L_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R");

	return Clss;
}


// task_VerseNPC_npc_component$Wait_L_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R VerseNPC.Default__task_VerseNPC_npc_component$Wait_L_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_VerseNPC_npc_component_Wait_L_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R* UTask_VerseNPC_npc_component_Wait_L_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R::GetDefaultObj()
{
	static class UTask_VerseNPC_npc_component_Wait_L_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_VerseNPC_npc_component_Wait_L_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R*>(UTask_VerseNPC_npc_component_Wait_L_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseNPC.task_VerseNPC_npc_component$Wait_L_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R.Update
// (Native, Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_VerseNPC_npc_component_Wait_L_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_VerseNPC_npc_component$Wait_L_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R", "Update");

	Params::UTask_VerseNPC_npc_component_Wait_L_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R_Update_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// VerseClass VerseNPC.task_VerseNPC_npc_component$Walk
// (None)

class UClass* UTask_VerseNPC_npc_component_Walk::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_VerseNPC_npc_component$Walk");

	return Clss;
}


// task_VerseNPC_npc_component$Walk VerseNPC.Default__task_VerseNPC_npc_component$Walk
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_VerseNPC_npc_component_Walk* UTask_VerseNPC_npc_component_Walk::GetDefaultObj()
{
	static class UTask_VerseNPC_npc_component_Walk* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_VerseNPC_npc_component_Walk*>(UTask_VerseNPC_npc_component_Walk::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseNPC.task_VerseNPC_npc_component$Walk.Update
// (Native, Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_VerseNPC_npc_component_Walk::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_VerseNPC_npc_component$Walk", "Update");

	Params::UTask_VerseNPC_npc_component_Walk_Update_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// VerseClass VerseNPC.VerseNPC_inventory_component
// (None)

class UClass* UVerseNPC_inventory_component::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseNPC_inventory_component");

	return Clss;
}


// VerseNPC_inventory_component VerseNPC.Default__VerseNPC_inventory_component
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVerseNPC_inventory_component* UVerseNPC_inventory_component::GetDefaultObj()
{
	static class UVerseNPC_inventory_component* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseNPC_inventory_component*>(UVerseNPC_inventory_component::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseNPC.VerseNPC_inventory_component._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RUnregisterUseSuggestedWeaponCallback_L_Nint_R
// (Native, Public, BlueprintCallable)
// Parameters:
// int64                              __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVerseNPC_inventory_component::_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RUnregisterUseSuggestedWeaponCallback_L_Nint_R(int64 __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseNPC_inventory_component", "_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RUnregisterUseSuggestedWeaponCallback_L_Nint_R");

	Params::UVerseNPC_inventory_component__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RUnregisterUseSuggestedWeaponCallback_L_Nint_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseNPC.VerseNPC_inventory_component._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RRegisterUseSuggestedWeaponCallback_L_Nfort__item__descriptor_Tlogic_R
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FVerseFunctionProperty_            __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UVerseNPC_inventory_component::_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RRegisterUseSuggestedWeaponCallback_L_Nfort__item__descriptor_Tlogic_R(FVerseFunctionProperty_ __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseNPC_inventory_component", "_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RRegisterUseSuggestedWeaponCallback_L_Nfort__item__descriptor_Tlogic_R");

	Params::UVerseNPC_inventory_component__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RRegisterUseSuggestedWeaponCallback_L_Nfort__item__descriptor_Tlogic_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseNPC.VerseNPC_inventory_component._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RIsWeaponEquipped_L_Nfort__item__descriptor_R
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FVerseAIBase_fort_item_descriptor__verse_0xB2CDDD72_Argument                                      (Parm, NoDestructor)
// uint8                              RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

uint8 UVerseNPC_inventory_component::_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RIsWeaponEquipped_L_Nfort__item__descriptor_R(const struct FVerseAIBase_fort_item_descriptor& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseNPC_inventory_component", "_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RIsWeaponEquipped_L_Nfort__item__descriptor_R");

	Params::UVerseNPC_inventory_component__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RIsWeaponEquipped_L_Nfort__item__descriptor_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseNPC.VerseNPC_inventory_component._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RGetWeaponDescriptor_L_Nfort__item__descriptor_R
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FVerseAIBase_fort_item_descriptor__verse_0xB2CDDD72_Argument                                      (Parm, NoDestructor)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor)

FOptionalProperty_ UVerseNPC_inventory_component::_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RGetWeaponDescriptor_L_Nfort__item__descriptor_R(const struct FVerseAIBase_fort_item_descriptor& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseNPC_inventory_component", "_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RGetWeaponDescriptor_L_Nfort__item__descriptor_R");

	Params::UVerseNPC_inventory_component__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RGetWeaponDescriptor_L_Nfort__item__descriptor_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseNPC.VerseNPC_inventory_component._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RGetCurrentWeapon
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor)

FOptionalProperty_ UVerseNPC_inventory_component::_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RGetCurrentWeapon(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseNPC_inventory_component", "_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RGetCurrentWeapon");

	Params::UVerseNPC_inventory_component__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RGetCurrentWeapon_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseNPC.VerseNPC_inventory_component._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RGetAllItems
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// TArray<struct FVerseAIBase_fort_item_descriptor>RetVal                                                           (Parm, OutParm, ReturnParm, ContainsInstancedReference)

TArray<struct FVerseAIBase_fort_item_descriptor> UVerseNPC_inventory_component::_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RGetAllItems(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseNPC_inventory_component", "_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RGetAllItems");

	Params::UVerseNPC_inventory_component__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RGetAllItems_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseNPC.VerseNPC_inventory_component._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_REquipWeapon_L_Nfort__item__descriptor_R
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FVerseAIBase_fort_item_descriptor__verse_0xB2CDDD72_Argument                                      (Parm, NoDestructor)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionalProperty_ UVerseNPC_inventory_component::_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_REquipWeapon_L_Nfort__item__descriptor_R(const struct FVerseAIBase_fort_item_descriptor& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseNPC_inventory_component", "_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_REquipWeapon_L_Nfort__item__descriptor_R");

	Params::UVerseNPC_inventory_component__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_REquipWeapon_L_Nfort__item__descriptor_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseNPC.VerseNPC_inventory_component._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RDropItem_L_Nfort__item__descriptor_R
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FVerseAIBase_fort_item_descriptor__verse_0xB2CDDD72_Argument                                      (Parm, NoDestructor)
// uint8                              RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

uint8 UVerseNPC_inventory_component::_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RDropItem_L_Nfort__item__descriptor_R(const struct FVerseAIBase_fort_item_descriptor& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseNPC_inventory_component", "_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RDropItem_L_Nfort__item__descriptor_R");

	Params::UVerseNPC_inventory_component__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RDropItem_L_Nfort__item__descriptor_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseNPC.VerseNPC_inventory_component._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RAddItemToInventory_L_Nfort__inventory__item__asset_M_Nint_R
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lfort__inventory__item__asset_Mint_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor)

FOptionalProperty_ UVerseNPC_inventory_component::_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RAddItemToInventory_L_Nfort__inventory__item__asset_M_Nint_R(const struct FTuple_Lfort__inventory__item__asset_Mint_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseNPC_inventory_component", "_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RAddItemToInventory_L_Nfort__inventory__item__asset_M_Nint_R");

	Params::UVerseNPC_inventory_component__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__inventory__interface_N_RAddItemToInventory_L_Nfort__inventory__item__asset_M_Nint_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseNPC.VerseNPC_inventory_component.$InitInstance
// (None)
// Parameters:

void UVerseNPC_inventory_component::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseNPC_inventory_component", "$InitInstance");

	Params::UVerseNPC_inventory_component__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseNPC.VerseNPC_inventory_component.$Block
// (None)
// Parameters:

void UVerseNPC_inventory_component::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseNPC_inventory_component", "$Block");

	Params::UVerseNPC_inventory_component__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseNPC.VerseNPC_inventory_component.$InitCDO
// (None)
// Parameters:

void UVerseNPC_inventory_component::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseNPC_inventory_component", "$InitCDO");

	Params::UVerseNPC_inventory_component__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseNPC.VerseNPC_leash_component
// (None)

class UClass* UVerseNPC_leash_component::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseNPC_leash_component");

	return Clss;
}


// VerseNPC_leash_component VerseNPC.Default__VerseNPC_leash_component
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVerseNPC_leash_component* UVerseNPC_leash_component::GetDefaultObj()
{
	static class UVerseNPC_leash_component* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseNPC_leash_component*>(UVerseNPC_leash_component::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseNPC.VerseNPC_leash_component._L_2fFortnite_2ecom_2fAI_2ffort__leashable_N_RSetLeashPosition_L_Nvector3_M_Nfloat_M_Nfloat_R
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FTuple_Lvector3_Mfloat_Mfloat_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UVerseNPC_leash_component::_L_2fFortnite_2ecom_2fAI_2ffort__leashable_N_RSetLeashPosition_L_Nvector3_M_Nfloat_M_Nfloat_R(const struct FTuple_Lvector3_Mfloat_Mfloat_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseNPC_leash_component", "_L_2fFortnite_2ecom_2fAI_2ffort__leashable_N_RSetLeashPosition_L_Nvector3_M_Nfloat_M_Nfloat_R");

	Params::UVerseNPC_leash_component__L_2fFortnite_2ecom_2fAI_2ffort__leashable_N_RSetLeashPosition_L_Nvector3_M_Nfloat_M_Nfloat_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseNPC.VerseNPC_leash_component._L_2fFortnite_2ecom_2fAI_2ffort__leashable_N_RSetLeashAgent_L_Nagent_M_Nfloat_M_Nfloat_R
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FTuple_Lagent_Mfloat_Mfloat_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UVerseNPC_leash_component::_L_2fFortnite_2ecom_2fAI_2ffort__leashable_N_RSetLeashAgent_L_Nagent_M_Nfloat_M_Nfloat_R(const struct FTuple_Lagent_Mfloat_Mfloat_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseNPC_leash_component", "_L_2fFortnite_2ecom_2fAI_2ffort__leashable_N_RSetLeashAgent_L_Nagent_M_Nfloat_M_Nfloat_R");

	Params::UVerseNPC_leash_component__L_2fFortnite_2ecom_2fAI_2ffort__leashable_N_RSetLeashAgent_L_Nagent_M_Nfloat_M_Nfloat_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseNPC.VerseNPC_leash_component._L_2fFortnite_2ecom_2fAI_2ffort__leashable_N_RClearLeash
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UVerseNPC_leash_component::_L_2fFortnite_2ecom_2fAI_2ffort__leashable_N_RClearLeash(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseNPC_leash_component", "_L_2fFortnite_2ecom_2fAI_2ffort__leashable_N_RClearLeash");

	Params::UVerseNPC_leash_component__L_2fFortnite_2ecom_2fAI_2ffort__leashable_N_RClearLeash_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseNPC.VerseNPC_leash_component.$InitInstance
// (None)
// Parameters:

void UVerseNPC_leash_component::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseNPC_leash_component", "$InitInstance");

	Params::UVerseNPC_leash_component__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseNPC.VerseNPC_leash_component.$Block
// (None)
// Parameters:

void UVerseNPC_leash_component::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseNPC_leash_component", "$Block");

	Params::UVerseNPC_leash_component__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseNPC.VerseNPC_leash_component.$InitCDO
// (None)
// Parameters:

void UVerseNPC_leash_component::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseNPC_leash_component", "$InitCDO");

	Params::UVerseNPC_leash_component__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseNPC.VerseNPC_npc_component
// (None)

class UClass* UVerseNPC_npc_component::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseNPC_npc_component");

	return Clss;
}


// VerseNPC_npc_component VerseNPC.Default__VerseNPC_npc_component
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVerseNPC_npc_component* UVerseNPC_npc_component::GetDefaultObj()
{
	static class UVerseNPC_npc_component* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseNPC_npc_component*>(UVerseNPC_npc_component::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseNPC.VerseNPC_npc_component.Walk
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UVerseNPC_npc_component::Walk(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseNPC_npc_component", "Walk");

	Params::UVerseNPC_npc_component_Walk_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseNPC.VerseNPC_npc_component.Wait_L_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UVerseNPC_npc_component::Wait_L_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, FOptionalProperty_ __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseNPC_npc_component", "Wait_L_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R");

	Params::UVerseNPC_npc_component_Wait_L_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseNPC.VerseNPC_npc_component.TacticalSprint
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UVerseNPC_npc_component::TacticalSprint(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseNPC_npc_component", "TacticalSprint");

	Params::UVerseNPC_npc_component_TacticalSprint_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseNPC.VerseNPC_npc_component._L_2fFortnite_2ecom_2fAI_2fnavigatable_N_RStopNavigation
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UVerseNPC_npc_component::_L_2fFortnite_2ecom_2fAI_2fnavigatable_N_RStopNavigation(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseNPC_npc_component", "_L_2fFortnite_2ecom_2fAI_2fnavigatable_N_RStopNavigation");

	Params::UVerseNPC_npc_component__L_2fFortnite_2ecom_2fAI_2fnavigatable_N_RStopNavigation_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseNPC.VerseNPC_npc_component._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__character__movement__interface_N_RStandUp
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// enum class EVerseAIBase_action_resultRetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class EVerseAIBase_action_result UVerseNPC_npc_component::_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__character__movement__interface_N_RStandUp(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseNPC_npc_component", "_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__character__movement__interface_N_RStandUp");

	Params::UVerseNPC_npc_component__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__character__movement__interface_N_RStandUp_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseNPC.VerseNPC_npc_component.Sprint
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UVerseNPC_npc_component::Sprint(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseNPC_npc_component", "Sprint");

	Params::UVerseNPC_npc_component_Sprint_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseNPC.VerseNPC_npc_component.Slide
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UVerseNPC_npc_component::Slide(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseNPC_npc_component", "Slide");

	Params::UVerseNPC_npc_component_Slide_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseNPC.VerseNPC_npc_component.RoamAround
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UVerseNPC_npc_component::RoamAround(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseNPC_npc_component", "RoamAround");

	Params::UVerseNPC_npc_component_RoamAround_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseNPC.VerseNPC_npc_component.Revive_L_Nagent_R
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USimulation_agent*           __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UVerseNPC_npc_component::Revive_L_Nagent_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, class USimulation_agent* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseNPC_npc_component", "Revive_L_Nagent_R");

	Params::UVerseNPC_npc_component_Revive_L_Nagent_R_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseNPC.VerseNPC_npc_component._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__weapon__actions__interface_N_RReload
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// uint8                              RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

uint8 UVerseNPC_npc_component::_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__weapon__actions__interface_N_RReload(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseNPC_npc_component", "_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__weapon__actions__interface_N_RReload");

	Params::UVerseNPC_npc_component__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__weapon__actions__interface_N_RReload_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseNPC.VerseNPC_npc_component.PlayRandomEmote
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UVerseNPC_npc_component::PlayRandomEmote(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseNPC_npc_component", "PlayRandomEmote");

	Params::UVerseNPC_npc_component_PlayRandomEmote_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseNPC.VerseNPC_npc_component.NavigateTo_L_Nnavigation__target_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_Lnavigation__target_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UVerseNPC_npc_component::NavigateTo_L_Nnavigation__target_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_Lnavigation__target_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseNPC_npc_component", "NavigateTo_L_Nnavigation__target_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R");

	Params::UVerseNPC_npc_component_NavigateTo_L_Nnavigation__target_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseNPC.VerseNPC_npc_component.MoveInRangeToAttack
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UVerseNPC_npc_component::MoveInRangeToAttack(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseNPC_npc_component", "MoveInRangeToAttack");

	Params::UVerseNPC_npc_component_MoveInRangeToAttack_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseNPC.VerseNPC_npc_component._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__weapon__actions__interface_N_RMeleeAttack
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// uint8                              RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

uint8 UVerseNPC_npc_component::_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__weapon__actions__interface_N_RMeleeAttack(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseNPC_npc_component", "_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__weapon__actions__interface_N_RMeleeAttack");

	Params::UVerseNPC_npc_component__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__weapon__actions__interface_N_RMeleeAttack_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseNPC.VerseNPC_npc_component.MaintainFocus_L_Nvector3_R
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSpatialMath_vector3        __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UVerseNPC_npc_component::MaintainFocus_L_Nvector3_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FSpatialMath_vector3& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseNPC_npc_component", "MaintainFocus_L_Nvector3_R");

	Params::UVerseNPC_npc_component_MaintainFocus_L_Nvector3_R_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseNPC.VerseNPC_npc_component.MaintainFocus_L_Nagent_R
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USimulation_agent*           __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UVerseNPC_npc_component::MaintainFocus_L_Nagent_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, class USimulation_agent* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseNPC_npc_component", "MaintainFocus_L_Nagent_R");

	Params::UVerseNPC_npc_component_MaintainFocus_L_Nagent_R_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseNPC.VerseNPC_npc_component.LootObject_L_Nfort__loot__info_R
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVerseAIBase_fort_loot_info __verse_0xB2CDDD72_Argument                                      (Parm, NoDestructor)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UVerseNPC_npc_component::LootObject_L_Nfort__loot__info_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FVerseAIBase_fort_loot_info& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseNPC_npc_component", "LootObject_L_Nfort__loot__info_R");

	Params::UVerseNPC_npc_component_LootObject_L_Nfort__loot__info_R_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseNPC.VerseNPC_npc_component.Jump
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UVerseNPC_npc_component::Jump(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseNPC_npc_component", "Jump");

	Params::UVerseNPC_npc_component_Jump_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseNPC.VerseNPC_npc_component._L_2fFortnite_2ecom_2fAI_2fnavigatable_N_RGetCurrentDestination
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

FOptionalProperty_ UVerseNPC_npc_component::_L_2fFortnite_2ecom_2fAI_2fnavigatable_N_RGetCurrentDestination(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseNPC_npc_component", "_L_2fFortnite_2ecom_2fAI_2fnavigatable_N_RGetCurrentDestination");

	Params::UVerseNPC_npc_component__L_2fFortnite_2ecom_2fAI_2fnavigatable_N_RGetCurrentDestination_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseNPC.VerseNPC_npc_component._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__weapon__actions__interface_N_RFire
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// uint8                              RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

uint8 UVerseNPC_npc_component::_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__weapon__actions__interface_N_RFire(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseNPC_npc_component", "_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__weapon__actions__interface_N_RFire");

	Params::UVerseNPC_npc_component__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__weapon__actions__interface_N_RFire_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseNPC.VerseNPC_npc_component.Crouch
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UVerseNPC_npc_component::Crouch(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseNPC_npc_component", "Crouch");

	Params::UVerseNPC_npc_component_Crouch_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseNPC.VerseNPC_npc_component.AttackThreat_L_Nfort__threat__info_R
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FAI_fort_threat_info        __verse_0xB2CDDD72_Argument                                      (Parm, NoDestructor)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UVerseNPC_npc_component::AttackThreat_L_Nfort__threat__info_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FAI_fort_threat_info& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseNPC_npc_component", "AttackThreat_L_Nfort__threat__info_R");

	Params::UVerseNPC_npc_component_AttackThreat_L_Nfort__threat__info_R_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseNPC.VerseNPC_npc_component.AttackObstacle_L_Nfort__obstacle__info_R
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FVerseAIBase_fort_obstacle_info__verse_0xB2CDDD72_Argument                                      (Parm, NoDestructor)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UVerseNPC_npc_component::AttackObstacle_L_Nfort__obstacle__info_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FVerseAIBase_fort_obstacle_info& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseNPC_npc_component", "AttackObstacle_L_Nfort__obstacle__info_R");

	Params::UVerseNPC_npc_component_AttackObstacle_L_Nfort__obstacle__info_R_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseNPC.VerseNPC_npc_component.$InitInstance
// (None)
// Parameters:

void UVerseNPC_npc_component::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseNPC_npc_component", "$InitInstance");

	Params::UVerseNPC_npc_component__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseNPC.VerseNPC_npc_component.$Block
// (None)
// Parameters:

void UVerseNPC_npc_component::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseNPC_npc_component", "$Block");

	Params::UVerseNPC_npc_component__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseNPC.VerseNPC_npc_component.$InitCDO
// (None)
// Parameters:

void UVerseNPC_npc_component::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseNPC_npc_component", "$InitCDO");

	Params::UVerseNPC_npc_component__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseNPC.VerseNPC_npc_perception_component
// (None)

class UClass* UVerseNPC_npc_perception_component::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseNPC_npc_perception_component");

	return Clss;
}


// VerseNPC_npc_perception_component VerseNPC.Default__VerseNPC_npc_perception_component
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVerseNPC_npc_perception_component* UVerseNPC_npc_perception_component::GetDefaultObj()
{
	static class UVerseNPC_npc_perception_component* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseNPC_npc_perception_component*>(UVerseNPC_npc_perception_component::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseNPC.VerseNPC_npc_perception_component._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__obstacle__perception__interface_N_RObstacleChangedEvent
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UObject*                     RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UObject* UVerseNPC_npc_perception_component::_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__obstacle__perception__interface_N_RObstacleChangedEvent(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseNPC_npc_perception_component", "_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__obstacle__perception__interface_N_RObstacleChangedEvent");

	Params::UVerseNPC_npc_perception_component__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__obstacle__perception__interface_N_RObstacleChangedEvent_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseNPC.VerseNPC_npc_perception_component._L_2fFortnite_2ecom_2fAI_2ffort__threat__perception__interface_N_RGetThreatsInfo
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference)

FOptionalProperty_ UVerseNPC_npc_perception_component::_L_2fFortnite_2ecom_2fAI_2ffort__threat__perception__interface_N_RGetThreatsInfo(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseNPC_npc_perception_component", "_L_2fFortnite_2ecom_2fAI_2ffort__threat__perception__interface_N_RGetThreatsInfo");

	Params::UVerseNPC_npc_perception_component__L_2fFortnite_2ecom_2fAI_2ffort__threat__perception__interface_N_RGetThreatsInfo_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseNPC.VerseNPC_npc_perception_component._L_2fFortnite_2ecom_2fAI_2ffort__threat__perception__interface_N_RGetThreatInfo_L_Nagent_R
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class USimulation_agent*           __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor)

FOptionalProperty_ UVerseNPC_npc_perception_component::_L_2fFortnite_2ecom_2fAI_2ffort__threat__perception__interface_N_RGetThreatInfo_L_Nagent_R(class USimulation_agent* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseNPC_npc_perception_component", "_L_2fFortnite_2ecom_2fAI_2ffort__threat__perception__interface_N_RGetThreatInfo_L_Nagent_R");

	Params::UVerseNPC_npc_perception_component__L_2fFortnite_2ecom_2fAI_2ffort__threat__perception__interface_N_RGetThreatInfo_L_Nagent_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseNPC.VerseNPC_npc_perception_component._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__obstacle__perception__interface_N_RGetObstacleInfo
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor)

FOptionalProperty_ UVerseNPC_npc_perception_component::_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__obstacle__perception__interface_N_RGetObstacleInfo(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseNPC_npc_perception_component", "_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__obstacle__perception__interface_N_RGetObstacleInfo");

	Params::UVerseNPC_npc_perception_component__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__obstacle__perception__interface_N_RGetObstacleInfo_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseNPC.VerseNPC_npc_perception_component._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__target__selection__interface_N_RGetCurrentThreatInfo
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor)

FOptionalProperty_ UVerseNPC_npc_perception_component::_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__target__selection__interface_N_RGetCurrentThreatInfo(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseNPC_npc_perception_component", "_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__target__selection__interface_N_RGetCurrentThreatInfo");

	Params::UVerseNPC_npc_perception_component__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__target__selection__interface_N_RGetCurrentThreatInfo_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseNPC.VerseNPC_npc_perception_component._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__loot__perception__interface_N_RGetBestObjectToLoot
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor)

FOptionalProperty_ UVerseNPC_npc_perception_component::_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__loot__perception__interface_N_RGetBestObjectToLoot(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseNPC_npc_perception_component", "_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__loot__perception__interface_N_RGetBestObjectToLoot");

	Params::UVerseNPC_npc_perception_component__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__loot__perception__interface_N_RGetBestObjectToLoot_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseNPC.VerseNPC_npc_perception_component._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__target__selection__interface_N_RCurrentThreatStatusChangedEvent
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UObject*                     RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UObject* UVerseNPC_npc_perception_component::_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__target__selection__interface_N_RCurrentThreatStatusChangedEvent(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseNPC_npc_perception_component", "_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__target__selection__interface_N_RCurrentThreatStatusChangedEvent");

	Params::UVerseNPC_npc_perception_component__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__target__selection__interface_N_RCurrentThreatStatusChangedEvent_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseNPC.VerseNPC_npc_perception_component._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__target__selection__interface_N_RCurrentThreatChangedEvent
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UObject*                     RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UObject* UVerseNPC_npc_perception_component::_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__target__selection__interface_N_RCurrentThreatChangedEvent(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseNPC_npc_perception_component", "_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__target__selection__interface_N_RCurrentThreatChangedEvent");

	Params::UVerseNPC_npc_perception_component__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__target__selection__interface_N_RCurrentThreatChangedEvent_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseNPC.VerseNPC_npc_perception_component._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__loot__perception__interface_N_RBestObjectTolootChangedEvent
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UObject*                     RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UObject* UVerseNPC_npc_perception_component::_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__loot__perception__interface_N_RBestObjectTolootChangedEvent(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseNPC_npc_perception_component", "_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__loot__perception__interface_N_RBestObjectTolootChangedEvent");

	Params::UVerseNPC_npc_perception_component__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__loot__perception__interface_N_RBestObjectTolootChangedEvent_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseNPC.VerseNPC_npc_perception_component.$InitInstance
// (None)
// Parameters:

void UVerseNPC_npc_perception_component::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseNPC_npc_perception_component", "$InitInstance");

	Params::UVerseNPC_npc_perception_component__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseNPC.VerseNPC_npc_perception_component.$Block
// (None)
// Parameters:

void UVerseNPC_npc_perception_component::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseNPC_npc_perception_component", "$Block");

	Params::UVerseNPC_npc_perception_component__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseNPC.VerseNPC_npc_perception_component.$InitCDO
// (HasDefaults)
// Parameters:
// class UVerseEngine_subscribable_event*_ExprResult_0                                                    (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint64                             _InstancingGraph_1                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerseEngine_subscribable_event*_ExprResult_2                                                    (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint64                             _InstancingGraph_3                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerseEngine_subscribable_event*_ExprResult_4                                                    (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint64                             _InstancingGraph_5                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerseEngine_subscribable_event*_ExprResult_6                                                    (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint64                             _InstancingGraph_7                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerseEngine_subscribable_event*_ExprResult_8                                                    (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint64                             _InstancingGraph_9                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerseEngine_subscribable_event*_ExprResult_10                                                   (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint64                             _InstancingGraph_11                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerseEngine_subscribable_event*_ExprResult_12                                                   (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint64                             _InstancingGraph_13                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerseEngine_subscribable_event*_ExprResult_14                                                   (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint64                             _InstancingGraph_15                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVerseNPC_npc_perception_component::_InitCDO(class UVerseEngine_subscribable_event* _ExprResult_0, uint64 _InstancingGraph_1, class UVerseEngine_subscribable_event* _ExprResult_2, uint64 _InstancingGraph_3, class UVerseEngine_subscribable_event* _ExprResult_4, uint64 _InstancingGraph_5, class UVerseEngine_subscribable_event* _ExprResult_6, uint64 _InstancingGraph_7, class UVerseEngine_subscribable_event* _ExprResult_8, uint64 _InstancingGraph_9, class UVerseEngine_subscribable_event* _ExprResult_10, uint64 _InstancingGraph_11, class UVerseEngine_subscribable_event* _ExprResult_12, uint64 _InstancingGraph_13, class UVerseEngine_subscribable_event* _ExprResult_14, uint64 _InstancingGraph_15)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseNPC_npc_perception_component", "$InitCDO");

	Params::UVerseNPC_npc_perception_component__InitCDO_Params Parms{};

	Parms._ExprResult_0 = _ExprResult_0;
	Parms._InstancingGraph_1 = _InstancingGraph_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._InstancingGraph_3 = _InstancingGraph_3;
	Parms._ExprResult_4 = _ExprResult_4;
	Parms._InstancingGraph_5 = _InstancingGraph_5;
	Parms._ExprResult_6 = _ExprResult_6;
	Parms._InstancingGraph_7 = _InstancingGraph_7;
	Parms._ExprResult_8 = _ExprResult_8;
	Parms._InstancingGraph_9 = _InstancingGraph_9;
	Parms._ExprResult_10 = _ExprResult_10;
	Parms._InstancingGraph_11 = _InstancingGraph_11;
	Parms._ExprResult_12 = _ExprResult_12;
	Parms._InstancingGraph_13 = _InstancingGraph_13;
	Parms._ExprResult_14 = _ExprResult_14;
	Parms._InstancingGraph_15 = _InstancingGraph_15;

	UObject::ProcessEvent(Func, &Parms);

}

}


