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


// Function VerseCreature.task_VerseCreature_creature_component$LookAt_L_Nvector3_R.Update
// (Native, Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_VerseCreature_creature_component_LookAt_L_Nvector3_R::Update()
{
	static auto Func = Class->GetFunction("task_VerseCreature_creature_component$LookAt_L_Nvector3_R", "Update");

	Params::UTask_VerseCreature_creature_component_LookAt_L_Nvector3_R_Update_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VerseCreature.task_VerseCreature_creature_component$MoveInRangeToAttack.Update
// (Native, Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_VerseCreature_creature_component_MoveInRangeToAttack::Update()
{
	static auto Func = Class->GetFunction("task_VerseCreature_creature_component$MoveInRangeToAttack", "Update");

	Params::UTask_VerseCreature_creature_component_MoveInRangeToAttack_Update_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VerseCreature.task_VerseCreature_creature_component$NavigateTo_L_Nnavigation__target_M_Nfloat_M_Nlogic_R.Update
// (Native, Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_VerseCreature_creature_component_NavigateTo_L_Nnavigation__target_M_Nfloat_M_Nlogic_R::Update()
{
	static auto Func = Class->GetFunction("task_VerseCreature_creature_component$NavigateTo_L_Nnavigation__target_M_Nfloat_M_Nlogic_R", "Update");

	Params::UTask_VerseCreature_creature_component_NavigateTo_L_Nnavigation__target_M_Nfloat_M_Nlogic_R_Update_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VerseCreature.task_VerseCreature_creature_component$RoamAround.Update
// (Native, Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_VerseCreature_creature_component_RoamAround::Update()
{
	static auto Func = Class->GetFunction("task_VerseCreature_creature_component$RoamAround", "Update");

	Params::UTask_VerseCreature_creature_component_RoamAround_Update_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VerseCreature.task_VerseCreature_creature_component$Wait_L_Nfloat_R.Update
// (Native, Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_VerseCreature_creature_component_Wait_L_Nfloat_R::Update()
{
	static auto Func = Class->GetFunction("task_VerseCreature_creature_component$Wait_L_Nfloat_R", "Update");

	Params::UTask_VerseCreature_creature_component_Wait_L_Nfloat_R_Update_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VerseCreature.VerseCreature_creature_component.Wait_L_Nfloat_R
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FOptionProperty_                   __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UVerseCreature_creature_component::Wait_L_Nfloat_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, FOptionProperty_ __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("VerseCreature_creature_component", "Wait_L_Nfloat_R");

	Params::UVerseCreature_creature_component_Wait_L_Nfloat_R_Params Parms;

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
	static auto Func = Class->GetFunction("VerseCreature_creature_component", "_L_2fFortnite_2ecom_2fAI_2fnavigatable_N_RStopNavigation");

	Params::UVerseCreature_creature_component__L_2fFortnite_2ecom_2fAI_2fnavigatable_N_RStopNavigation_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

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
	static auto Func = Class->GetFunction("VerseCreature_creature_component", "RoamAround");

	Params::UVerseCreature_creature_component_RoamAround_Params Parms;

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseCreature.VerseCreature_creature_component.NavigateTo_L_Nnavigation__target_M_Nfloat_M_Nlogic_R
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_Lnavigation__target_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UVerseCreature_creature_component::NavigateTo_L_Nnavigation__target_M_Nfloat_M_Nlogic_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_Lnavigation__target_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R& __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("VerseCreature_creature_component", "NavigateTo_L_Nnavigation__target_M_Nfloat_M_Nlogic_R");

	Params::UVerseCreature_creature_component_NavigateTo_L_Nnavigation__target_M_Nfloat_M_Nlogic_R_Params Parms;

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
	static auto Func = Class->GetFunction("VerseCreature_creature_component", "MoveInRangeToAttack");

	Params::UVerseCreature_creature_component_MoveInRangeToAttack_Params Parms;

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseCreature.VerseCreature_creature_component.LookAt_L_Nvector3_R
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSpatialMath_vector3        __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UVerseCreature_creature_component::LookAt_L_Nvector3_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FSpatialMath_vector3& __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("VerseCreature_creature_component", "LookAt_L_Nvector3_R");

	Params::UVerseCreature_creature_component_LookAt_L_Nvector3_R_Params Parms;

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
// FOptionProperty_                   RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

FOptionProperty_ UVerseCreature_creature_component::_L_2fFortnite_2ecom_2fAI_2fnavigatable_N_RGetCurrentDestination(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("VerseCreature_creature_component", "_L_2fFortnite_2ecom_2fAI_2fnavigatable_N_RGetCurrentDestination");

	Params::UVerseCreature_creature_component__L_2fFortnite_2ecom_2fAI_2fnavigatable_N_RGetCurrentDestination_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VerseCreature.VerseCreature_creature_component.$InitInstance
// ()
// Parameters:

void UVerseCreature_creature_component::_InitInstance()
{
	static auto Func = Class->GetFunction("VerseCreature_creature_component", "$InitInstance");

	Params::UVerseCreature_creature_component__InitInstance_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseCreature.VerseCreature_creature_component.$Block
// ()
// Parameters:

void UVerseCreature_creature_component::_Block()
{
	static auto Func = Class->GetFunction("VerseCreature_creature_component", "$Block");

	Params::UVerseCreature_creature_component__Block_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseCreature.VerseCreature_creature_component.$InitCDO
// ()
// Parameters:

void UVerseCreature_creature_component::_InitCDO()
{
	static auto Func = Class->GetFunction("VerseCreature_creature_component", "$InitCDO");

	Params::UVerseCreature_creature_component__InitCDO_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseCreature.VerseCreature_creature_perception_component._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__threat__perception__interface_N_RGetThreatsInfo
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionProperty_                   RetVal                                                           (Parm, OutParm, ReturnParm, ContainsInstancedReference)

FOptionProperty_ UVerseCreature_creature_perception_component::_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__threat__perception__interface_N_RGetThreatsInfo(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("VerseCreature_creature_perception_component", "_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__threat__perception__interface_N_RGetThreatsInfo");

	Params::UVerseCreature_creature_perception_component__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__threat__perception__interface_N_RGetThreatsInfo_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VerseCreature.VerseCreature_creature_perception_component._L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__threat__perception__interface_N_RGetThreatInfo_L_Nagent_R
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class USimulation_agent*           __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionProperty_                   RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor)

FOptionProperty_ UVerseCreature_creature_perception_component::_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__threat__perception__interface_N_RGetThreatInfo_L_Nagent_R(class USimulation_agent* __verse_0xB2CDDD72_Argument)
{
	static auto Func = Class->GetFunction("VerseCreature_creature_perception_component", "_L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__threat__perception__interface_N_RGetThreatInfo_L_Nagent_R");

	Params::UVerseCreature_creature_perception_component__L_2fFortnite_2ecom_2fAI_2fVerseAIBase_2ffort__threat__perception__interface_N_RGetThreatInfo_L_Nagent_R_Params Parms;

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

	return Parms.ReturnValue;

}


// Function VerseCreature.VerseCreature_creature_perception_component.$InitInstance
// ()
// Parameters:

void UVerseCreature_creature_perception_component::_InitInstance()
{
	static auto Func = Class->GetFunction("VerseCreature_creature_perception_component", "$InitInstance");

	Params::UVerseCreature_creature_perception_component__InitInstance_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseCreature.VerseCreature_creature_perception_component.$Block
// ()
// Parameters:

void UVerseCreature_creature_perception_component::_Block()
{
	static auto Func = Class->GetFunction("VerseCreature_creature_perception_component", "$Block");

	Params::UVerseCreature_creature_perception_component__Block_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseCreature.VerseCreature_creature_perception_component.$InitCDO
// ()
// Parameters:

void UVerseCreature_creature_perception_component::_InitCDO()
{
	static auto Func = Class->GetFunction("VerseCreature_creature_perception_component", "$InitCDO");

	Params::UVerseCreature_creature_perception_component__InitCDO_Params Parms;


	UObject::ProcessEvent(Func, &Parms);

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
