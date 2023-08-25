#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// VerseClass VerseCreature.$SolarisSignatureFunctionOuter
// (None)

class UClass* U_SolarisSignatureFunctionOuter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("$SolarisSignatureFunctionOuter");

	return Clss;
}


// $SolarisSignatureFunctionOuter VerseCreature.Default__$SolarisSignatureFunctionOuter
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class U_SolarisSignatureFunctionOuter* U_SolarisSignatureFunctionOuter::GetDefaultObj()
{
	static class U_SolarisSignatureFunctionOuter* Default = nullptr;

	if (!Default)
		Default = static_cast<U_SolarisSignatureFunctionOuter*>(U_SolarisSignatureFunctionOuter::StaticClass()->DefaultObject);

	return Default;
}


// VerseClass VerseCreature.task_VerseCreature_creature_component$MaintainFocus_L_Nagent_R
// (None)

class UClass* UTask_VerseCreature_creature_component_MaintainFocus_L_Nagent_R::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_VerseCreature_creature_component$MaintainFocus_L_Nagent_R");

	return Clss;
}


// task_VerseCreature_creature_component$MaintainFocus_L_Nagent_R VerseCreature.Default__task_VerseCreature_creature_component$MaintainFocus_L_Nagent_R
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_VerseCreature_creature_component_MaintainFocus_L_Nagent_R* UTask_VerseCreature_creature_component_MaintainFocus_L_Nagent_R::GetDefaultObj()
{
	static class UTask_VerseCreature_creature_component_MaintainFocus_L_Nagent_R* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_VerseCreature_creature_component_MaintainFocus_L_Nagent_R*>(UTask_VerseCreature_creature_component_MaintainFocus_L_Nagent_R::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseCreature.task_VerseCreature_creature_component$MaintainFocus_L_Nagent_R.Update
// (Native, Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_VerseCreature_creature_component_MaintainFocus_L_Nagent_R::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_VerseCreature_creature_component$MaintainFocus_L_Nagent_R", "Update");

	Params::UTask_VerseCreature_creature_component_MaintainFocus_L_Nagent_R_Update_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// VerseClass VerseCreature.task_VerseCreature_creature_component$MaintainFocus_L_Nvector3_R
// (None)

class UClass* UTask_VerseCreature_creature_component_MaintainFocus_L_Nvector3_R::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_VerseCreature_creature_component$MaintainFocus_L_Nvector3_R");

	return Clss;
}


// task_VerseCreature_creature_component$MaintainFocus_L_Nvector3_R VerseCreature.Default__task_VerseCreature_creature_component$MaintainFocus_L_Nvector3_R
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_VerseCreature_creature_component_MaintainFocus_L_Nvector3_R* UTask_VerseCreature_creature_component_MaintainFocus_L_Nvector3_R::GetDefaultObj()
{
	static class UTask_VerseCreature_creature_component_MaintainFocus_L_Nvector3_R* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_VerseCreature_creature_component_MaintainFocus_L_Nvector3_R*>(UTask_VerseCreature_creature_component_MaintainFocus_L_Nvector3_R::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseCreature.task_VerseCreature_creature_component$MaintainFocus_L_Nvector3_R.Update
// (Native, Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_VerseCreature_creature_component_MaintainFocus_L_Nvector3_R::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_VerseCreature_creature_component$MaintainFocus_L_Nvector3_R", "Update");

	Params::UTask_VerseCreature_creature_component_MaintainFocus_L_Nvector3_R_Update_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// VerseClass VerseCreature.task_VerseCreature_creature_component$MoveInRangeToAttack
// (None)

class UClass* UTask_VerseCreature_creature_component_MoveInRangeToAttack::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_VerseCreature_creature_component$MoveInRangeToAttack");

	return Clss;
}


// task_VerseCreature_creature_component$MoveInRangeToAttack VerseCreature.Default__task_VerseCreature_creature_component$MoveInRangeToAttack
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_VerseCreature_creature_component_MoveInRangeToAttack* UTask_VerseCreature_creature_component_MoveInRangeToAttack::GetDefaultObj()
{
	static class UTask_VerseCreature_creature_component_MoveInRangeToAttack* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_VerseCreature_creature_component_MoveInRangeToAttack*>(UTask_VerseCreature_creature_component_MoveInRangeToAttack::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseCreature.task_VerseCreature_creature_component$MoveInRangeToAttack.Update
// (Native, Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_VerseCreature_creature_component_MoveInRangeToAttack::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_VerseCreature_creature_component$MoveInRangeToAttack", "Update");

	Params::UTask_VerseCreature_creature_component_MoveInRangeToAttack_Update_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// VerseClass VerseCreature.task_VerseCreature_creature_component$NavigateTo_L_Nnavigation__target_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R
// (None)

class UClass* UTask_VerseCreature_creature_component_NavigateTo_L_Nnavigation__target_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_VerseCreature_creature_component$NavigateTo_L_Nnavigation__target_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R");

	return Clss;
}


// task_VerseCreature_creature_component$NavigateTo_L_Nnavigation__target_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R VerseCreature.Default__task_VerseCreature_creature_component$NavigateTo_L_Nnavigation__target_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_VerseCreature_creature_component_NavigateTo_L_Nnavigation__target_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R* UTask_VerseCreature_creature_component_NavigateTo_L_Nnavigation__target_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R::GetDefaultObj()
{
	static class UTask_VerseCreature_creature_component_NavigateTo_L_Nnavigation__target_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_VerseCreature_creature_component_NavigateTo_L_Nnavigation__target_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R*>(UTask_VerseCreature_creature_component_NavigateTo_L_Nnavigation__target_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseCreature.task_VerseCreature_creature_component$NavigateTo_L_Nnavigation__target_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R.Update
// (Native, Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_VerseCreature_creature_component_NavigateTo_L_Nnavigation__target_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_VerseCreature_creature_component$NavigateTo_L_Nnavigation__target_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R", "Update");

	Params::UTask_VerseCreature_creature_component_NavigateTo_L_Nnavigation__target_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R_Update_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// VerseClass VerseCreature.task_VerseCreature_creature_component$RoamAround
// (None)

class UClass* UTask_VerseCreature_creature_component_RoamAround::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_VerseCreature_creature_component$RoamAround");

	return Clss;
}


// task_VerseCreature_creature_component$RoamAround VerseCreature.Default__task_VerseCreature_creature_component$RoamAround
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_VerseCreature_creature_component_RoamAround* UTask_VerseCreature_creature_component_RoamAround::GetDefaultObj()
{
	static class UTask_VerseCreature_creature_component_RoamAround* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_VerseCreature_creature_component_RoamAround*>(UTask_VerseCreature_creature_component_RoamAround::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseCreature.task_VerseCreature_creature_component$RoamAround.Update
// (Native, Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_VerseCreature_creature_component_RoamAround::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_VerseCreature_creature_component$RoamAround", "Update");

	Params::UTask_VerseCreature_creature_component_RoamAround_Update_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// VerseClass VerseCreature.task_VerseCreature_creature_component$Wait_L_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R
// (None)

class UClass* UTask_VerseCreature_creature_component_Wait_L_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_VerseCreature_creature_component$Wait_L_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R");

	return Clss;
}


// task_VerseCreature_creature_component$Wait_L_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R VerseCreature.Default__task_VerseCreature_creature_component$Wait_L_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_VerseCreature_creature_component_Wait_L_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R* UTask_VerseCreature_creature_component_Wait_L_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R::GetDefaultObj()
{
	static class UTask_VerseCreature_creature_component_Wait_L_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_VerseCreature_creature_component_Wait_L_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R*>(UTask_VerseCreature_creature_component_Wait_L_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseCreature.task_VerseCreature_creature_component$Wait_L_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R.Update
// (Native, Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_VerseCreature_creature_component_Wait_L_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_VerseCreature_creature_component$Wait_L_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R", "Update");

	Params::UTask_VerseCreature_creature_component_Wait_L_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R_Update_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// VerseClass VerseCreature.VerseCreature_creature_component
// (None)

class UClass* UVerseCreature_creature_component::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseCreature_creature_component");

	return Clss;
}


// VerseCreature_creature_component VerseCreature.Default__VerseCreature_creature_component
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVerseCreature_creature_component* UVerseCreature_creature_component::GetDefaultObj()
{
	static class UVerseCreature_creature_component* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseCreature_creature_component*>(UVerseCreature_creature_component::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseCreature.VerseCreature_creature_component.Wait_L_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UVerseCreature_creature_component::Wait_L_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, FOptionalProperty_ __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseCreature_creature_component", "Wait_L_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R");

	Params::UVerseCreature_creature_component_Wait_L_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseCreature.VerseCreature_creature_component._L_2fFortnite_2ecom_2fAI_2fnavigatable_N_RStopNavigation
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UVerseCreature_creature_component::_L_2fFortnite_2ecom_2fAI_2fnavigatable_N_RStopNavigation(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseCreature_creature_component", "_L_2fFortnite_2ecom_2fAI_2fnavigatable_N_RStopNavigation");

	Params::UVerseCreature_creature_component__L_2fFortnite_2ecom_2fAI_2fnavigatable_N_RStopNavigation_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseCreature.VerseCreature_creature_component.RoamAround
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UVerseCreature_creature_component::RoamAround(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseCreature_creature_component", "RoamAround");

	Params::UVerseCreature_creature_component_RoamAround_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseCreature.VerseCreature_creature_component.NavigateTo_L_Nnavigation__target_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_Lnavigation__target_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UVerseCreature_creature_component::NavigateTo_L_Nnavigation__target_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_Lnavigation__target_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseCreature_creature_component", "NavigateTo_L_Nnavigation__target_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R");

	Params::UVerseCreature_creature_component_NavigateTo_L_Nnavigation__target_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseCreature.VerseCreature_creature_component.MoveInRangeToAttack
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UVerseCreature_creature_component::MoveInRangeToAttack(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseCreature_creature_component", "MoveInRangeToAttack");

	Params::UVerseCreature_creature_component_MoveInRangeToAttack_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseCreature.VerseCreature_creature_component.MaintainFocus_L_Nagent_R
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USimulation_agent*           __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UVerseCreature_creature_component::MaintainFocus_L_Nagent_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, class USimulation_agent* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseCreature_creature_component", "MaintainFocus_L_Nagent_R");

	Params::UVerseCreature_creature_component_MaintainFocus_L_Nagent_R_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseCreature.VerseCreature_creature_component.MaintainFocus_L_Nvector3_R
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSpatialMath_vector3        __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UVerseCreature_creature_component::MaintainFocus_L_Nvector3_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FSpatialMath_vector3& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseCreature_creature_component", "MaintainFocus_L_Nvector3_R");

	Params::UVerseCreature_creature_component_MaintainFocus_L_Nvector3_R_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseCreature.VerseCreature_creature_component._L_2fFortnite_2ecom_2fAI_2fnavigatable_N_RGetCurrentDestination
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

FOptionalProperty_ UVerseCreature_creature_component::_L_2fFortnite_2ecom_2fAI_2fnavigatable_N_RGetCurrentDestination(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseCreature_creature_component", "_L_2fFortnite_2ecom_2fAI_2fnavigatable_N_RGetCurrentDestination");

	Params::UVerseCreature_creature_component__L_2fFortnite_2ecom_2fAI_2fnavigatable_N_RGetCurrentDestination_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseCreature.VerseCreature_creature_component.$InitInstance
// (None)
// Parameters:

void UVerseCreature_creature_component::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseCreature_creature_component", "$InitInstance");

	Params::UVerseCreature_creature_component__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseCreature.VerseCreature_creature_component.$Block
// (None)
// Parameters:

void UVerseCreature_creature_component::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseCreature_creature_component", "$Block");

	Params::UVerseCreature_creature_component__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseCreature.VerseCreature_creature_component.$InitCDO
// (None)
// Parameters:

void UVerseCreature_creature_component::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseCreature_creature_component", "$InitCDO");

	Params::UVerseCreature_creature_component__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseCreature.VerseCreature_creature_perception_component
// (None)

class UClass* UVerseCreature_creature_perception_component::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseCreature_creature_perception_component");

	return Clss;
}


// VerseCreature_creature_perception_component VerseCreature.Default__VerseCreature_creature_perception_component
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVerseCreature_creature_perception_component* UVerseCreature_creature_perception_component::GetDefaultObj()
{
	static class UVerseCreature_creature_perception_component* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseCreature_creature_perception_component*>(UVerseCreature_creature_perception_component::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseCreature.VerseCreature_creature_perception_component._L_2fFortnite_2ecom_2fAI_2ffort__threat__perception__interface_N_RGetThreatsInfo
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference)

FOptionalProperty_ UVerseCreature_creature_perception_component::_L_2fFortnite_2ecom_2fAI_2ffort__threat__perception__interface_N_RGetThreatsInfo(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseCreature_creature_perception_component", "_L_2fFortnite_2ecom_2fAI_2ffort__threat__perception__interface_N_RGetThreatsInfo");

	Params::UVerseCreature_creature_perception_component__L_2fFortnite_2ecom_2fAI_2ffort__threat__perception__interface_N_RGetThreatsInfo_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseCreature.VerseCreature_creature_perception_component._L_2fFortnite_2ecom_2fAI_2ffort__threat__perception__interface_N_RGetThreatInfo_L_Nagent_R
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class USimulation_agent*           __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor)

FOptionalProperty_ UVerseCreature_creature_perception_component::_L_2fFortnite_2ecom_2fAI_2ffort__threat__perception__interface_N_RGetThreatInfo_L_Nagent_R(class USimulation_agent* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseCreature_creature_perception_component", "_L_2fFortnite_2ecom_2fAI_2ffort__threat__perception__interface_N_RGetThreatInfo_L_Nagent_R");

	Params::UVerseCreature_creature_perception_component__L_2fFortnite_2ecom_2fAI_2ffort__threat__perception__interface_N_RGetThreatInfo_L_Nagent_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseCreature.VerseCreature_creature_perception_component.$InitInstance
// (None)
// Parameters:

void UVerseCreature_creature_perception_component::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseCreature_creature_perception_component", "$InitInstance");

	Params::UVerseCreature_creature_perception_component__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseCreature.VerseCreature_creature_perception_component.$Block
// (None)
// Parameters:

void UVerseCreature_creature_perception_component::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseCreature_creature_perception_component", "$Block");

	Params::UVerseCreature_creature_perception_component__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseCreature.VerseCreature_creature_perception_component.$InitCDO
// (None)
// Parameters:

void UVerseCreature_creature_perception_component::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseCreature_creature_perception_component", "$InitCDO");

	Params::UVerseCreature_creature_perception_component__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}

}


