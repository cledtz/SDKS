#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// VerseClass VerseFortnite.$SolarisSignatureFunctionOuter
// (None)

class UClass* U_SolarisSignatureFunctionOuter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("$SolarisSignatureFunctionOuter");

	return Clss;
}


// $SolarisSignatureFunctionOuter VerseFortnite.Default__$SolarisSignatureFunctionOuter
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class U_SolarisSignatureFunctionOuter* U_SolarisSignatureFunctionOuter::GetDefaultObj()
{
	static class U_SolarisSignatureFunctionOuter* Default = nullptr;

	if (!Default)
		Default = static_cast<U_SolarisSignatureFunctionOuter*>(U_SolarisSignatureFunctionOuter::StaticClass()->DefaultObject);

	return Default;
}


// VerseClass VerseFortnite.AI
// (None)

class UClass* UAI::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AI");

	return Clss;
}


// AI VerseFortnite.Default__AI
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAI* UAI::GetDefaultObj()
{
	static class UAI* Default = nullptr;

	if (!Default)
		Default = static_cast<UAI*>(UAI::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortnite.AI._L_2fFortnite_2ecom_2fAI_N_Roperator_U_2eGetNavigatable_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

FOptionalProperty_ UAI::_L_2fFortnite_2ecom_2fAI_N_Roperator_U_2eGetNavigatable_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AI", "_L_2fFortnite_2ecom_2fAI_N_Roperator_U_2eGetNavigatable_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R");

	Params::UAI__L_2fFortnite_2ecom_2fAI_N_Roperator_U_2eGetNavigatable_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortnite.AI._L_2fFortnite_2ecom_2fAI_N_Roperator_U_2eGetFortThreatPerception_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

FOptionalProperty_ UAI::_L_2fFortnite_2ecom_2fAI_N_Roperator_U_2eGetFortThreatPerception_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AI", "_L_2fFortnite_2ecom_2fAI_N_Roperator_U_2eGetFortThreatPerception_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R");

	Params::UAI__L_2fFortnite_2ecom_2fAI_N_Roperator_U_2eGetFortThreatPerception_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortnite.AI._L_2fFortnite_2ecom_2fAI_N_Roperator_U_2eGetFortLeashable_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

FOptionalProperty_ UAI::_L_2fFortnite_2ecom_2fAI_N_Roperator_U_2eGetFortLeashable_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AI", "_L_2fFortnite_2ecom_2fAI_N_Roperator_U_2eGetFortLeashable_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R");

	Params::UAI__L_2fFortnite_2ecom_2fAI_N_Roperator_U_2eGetFortLeashable_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortnite.AI._L_2fFortnite_2ecom_2fAI_N_Roperator_U_2eGetFocusInterface_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

FOptionalProperty_ UAI::_L_2fFortnite_2ecom_2fAI_N_Roperator_U_2eGetFocusInterface_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AI", "_L_2fFortnite_2ecom_2fAI_N_Roperator_U_2eGetFocusInterface_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R");

	Params::UAI__L_2fFortnite_2ecom_2fAI_N_Roperator_U_2eGetFocusInterface_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortnite.AI._L_2fFortnite_2ecom_2fAI_N_RMakeNavigationTarget_L_Nagent_R
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USimulation_agent*           __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint64                             InstancingGraph                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAI_navigation_target*       __verse_0xB482F2DD_CurrentlyInstantiatedObject                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

void UAI::_L_2fFortnite_2ecom_2fAI_N_RMakeNavigationTarget_L_Nagent_R(class USimulation_agent* __verse_0xB2CDDD72_Argument, uint64 InstancingGraph, class UAI_navigation_target* __verse_0xB482F2DD_CurrentlyInstantiatedObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AI", "_L_2fFortnite_2ecom_2fAI_N_RMakeNavigationTarget_L_Nagent_R");

	Params::UAI__L_2fFortnite_2ecom_2fAI_N_RMakeNavigationTarget_L_Nagent_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms.InstancingGraph = InstancingGraph;
	Parms.__verse_0xB482F2DD_CurrentlyInstantiatedObject = __verse_0xB482F2DD_CurrentlyInstantiatedObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortnite.AI._L_2fFortnite_2ecom_2fAI_N_RMakeNavigationTarget_L_Nfort__threat__info_R
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FAI_fort_threat_info        __verse_0xB2CDDD72_Argument                                      (Parm, NoDestructor)
// uint64                             InstancingGraph                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAI_navigation_target*       __verse_0xB482F2DD_CurrentlyInstantiatedObject                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

void UAI::_L_2fFortnite_2ecom_2fAI_N_RMakeNavigationTarget_L_Nfort__threat__info_R(const struct FAI_fort_threat_info& __verse_0xB2CDDD72_Argument, uint64 InstancingGraph, class UAI_navigation_target* __verse_0xB482F2DD_CurrentlyInstantiatedObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AI", "_L_2fFortnite_2ecom_2fAI_N_RMakeNavigationTarget_L_Nfort__threat__info_R");

	Params::UAI__L_2fFortnite_2ecom_2fAI_N_RMakeNavigationTarget_L_Nfort__threat__info_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms.InstancingGraph = InstancingGraph;
	Parms.__verse_0xB482F2DD_CurrentlyInstantiatedObject = __verse_0xB482F2DD_CurrentlyInstantiatedObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortnite.AI._L_2fFortnite_2ecom_2fAI_N_RMakeNavigationTarget_L_Nvector3_R
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FSpatialMath_vector3        __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// uint64                             InstancingGraph                                                  (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UAI_navigation_target*       __verse_0xB482F2DD_CurrentlyInstantiatedObject                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

void UAI::_L_2fFortnite_2ecom_2fAI_N_RMakeNavigationTarget_L_Nvector3_R(const struct FSpatialMath_vector3& __verse_0xB2CDDD72_Argument, uint64 InstancingGraph, class UAI_navigation_target* __verse_0xB482F2DD_CurrentlyInstantiatedObject)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AI", "_L_2fFortnite_2ecom_2fAI_N_RMakeNavigationTarget_L_Nvector3_R");

	Params::UAI__L_2fFortnite_2ecom_2fAI_N_RMakeNavigationTarget_L_Nvector3_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms.InstancingGraph = InstancingGraph;
	Parms.__verse_0xB482F2DD_CurrentlyInstantiatedObject = __verse_0xB482F2DD_CurrentlyInstantiatedObject;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortnite.AI._L_2fFortnite_2ecom_2fAI_N_RGetThreatLocation_L_Nfort__threat__info_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FAI_fort_threat_info        __verse_0xB2CDDD72_Argument                                      (Parm, NoDestructor)
// struct FSpatialMath_vector3        RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

struct FSpatialMath_vector3 UAI::_L_2fFortnite_2ecom_2fAI_N_RGetThreatLocation_L_Nfort__threat__info_R(const struct FAI_fort_threat_info& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AI", "_L_2fFortnite_2ecom_2fAI_N_RGetThreatLocation_L_Nfort__threat__info_R");

	Params::UAI__L_2fFortnite_2ecom_2fAI_N_RGetThreatLocation_L_Nfort__threat__info_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortnite.AI.AI_fort_threat_info$OverrideFactory
// (Static, HasOutParams)
// Parameters:
// struct FAI_fort_threat_info        RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor)
// TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap                              (ConstParm, Parm, ContainsInstancedReference)

struct FAI_fort_threat_info UAI::AI_fort_threat_info_OverrideFactory(TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AI", "AI_fort_threat_info$OverrideFactory");

	Params::UAI_AI_fort_threat_info_OverrideFactory_Params Parms{};

	Parms.__verse_0xFB48ED96__InitOverrideMap = __verse_0xFB48ED96__InitOverrideMap;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseFortnite.AI.AI_fort_threat_info$Factory
// (Static, HasOutParams)
// Parameters:
// struct FAI_fort_threat_info        RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor)

struct FAI_fort_threat_info UAI::AI_fort_threat_info_Factory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AI", "AI_fort_threat_info$Factory");

	Params::UAI_AI_fort_threat_info_Factory_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseFortnite.AI.$InitCDO
// (None)
// Parameters:

void UAI::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AI", "$InitCDO");

	Params::UAI__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortnite.AI_ai_behavior
// (None)

class UClass* UAI_ai_behavior::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AI_ai_behavior");

	return Clss;
}


// AI_ai_behavior VerseFortnite.Default__AI_ai_behavior
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAI_ai_behavior* UAI_ai_behavior::GetDefaultObj()
{
	static class UAI_ai_behavior* Default = nullptr;

	if (!Default)
		Default = static_cast<UAI_ai_behavior*>(UAI_ai_behavior::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortnite.AI_ai_behavior._L_2fFortnite_2ecom_2fAI_2fai__behavior_N_ROnEnd
// (Public, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UAI_ai_behavior::_L_2fFortnite_2ecom_2fAI_2fai__behavior_N_ROnEnd(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AI_ai_behavior", "_L_2fFortnite_2ecom_2fAI_2fai__behavior_N_ROnEnd");

	Params::UAI_ai_behavior__L_2fFortnite_2ecom_2fAI_2fai__behavior_N_ROnEnd_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortnite.AI_ai_behavior.OnBegin
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UAI_ai_behavior::OnBegin(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AI_ai_behavior", "OnBegin");

	Params::UAI_ai_behavior_OnBegin_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseFortnite.AI_ai_behavior._L_2fFortnite_2ecom_2fAI_2fai__behavior_N_RGetAgent
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

FOptionalProperty_ UAI_ai_behavior::_L_2fFortnite_2ecom_2fAI_2fai__behavior_N_RGetAgent(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AI_ai_behavior", "_L_2fFortnite_2ecom_2fAI_2fai__behavior_N_RGetAgent");

	Params::UAI_ai_behavior__L_2fFortnite_2ecom_2fAI_2fai__behavior_N_RGetAgent_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortnite.AI_ai_behavior.$InitInstance
// (None)
// Parameters:

void UAI_ai_behavior::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AI_ai_behavior", "$InitInstance");

	Params::UAI_ai_behavior__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortnite.AI_ai_behavior.$Block
// (None)
// Parameters:

void UAI_ai_behavior::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AI_ai_behavior", "$Block");

	Params::UAI_ai_behavior__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortnite.AI_ai_behavior.$InitCDO
// (None)
// Parameters:

void UAI_ai_behavior::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AI_ai_behavior", "$InitCDO");

	Params::UAI_ai_behavior__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortnite.AI_focus_interface
// (None)

class UClass* UAI_focus_interface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AI_focus_interface");

	return Clss;
}


// AI_focus_interface VerseFortnite.Default__AI_focus_interface
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAI_focus_interface* UAI_focus_interface::GetDefaultObj()
{
	static class UAI_focus_interface* Default = nullptr;

	if (!Default)
		Default = static_cast<UAI_focus_interface*>(UAI_focus_interface::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortnite.AI_focus_interface.MaintainFocus_L_Nvector3_R
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSpatialMath_vector3        __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UAI_focus_interface::MaintainFocus_L_Nvector3_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FSpatialMath_vector3& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AI_focus_interface", "MaintainFocus_L_Nvector3_R");

	Params::UAI_focus_interface_MaintainFocus_L_Nvector3_R_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseFortnite.AI_focus_interface.MaintainFocus_L_Nagent_R
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class USimulation_agent*           __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UAI_focus_interface::MaintainFocus_L_Nagent_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, class USimulation_agent* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AI_focus_interface", "MaintainFocus_L_Nagent_R");

	Params::UAI_focus_interface_MaintainFocus_L_Nagent_R_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass VerseFortnite.AI_fort_leashable
// (None)

class UClass* UAI_fort_leashable::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AI_fort_leashable");

	return Clss;
}


// AI_fort_leashable VerseFortnite.Default__AI_fort_leashable
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAI_fort_leashable* UAI_fort_leashable::GetDefaultObj()
{
	static class UAI_fort_leashable* Default = nullptr;

	if (!Default)
		Default = static_cast<UAI_fort_leashable*>(UAI_fort_leashable::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortnite.AI_fort_leashable._L_2fFortnite_2ecom_2fAI_2ffort__leashable_N_RSetLeashPosition_L_Nvector3_M_Nfloat_M_Nfloat_R
// (Public, BlueprintCallable)
// Parameters:
// struct FTuple_Lvector3_Mfloat_Mfloat_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UAI_fort_leashable::_L_2fFortnite_2ecom_2fAI_2ffort__leashable_N_RSetLeashPosition_L_Nvector3_M_Nfloat_M_Nfloat_R(const struct FTuple_Lvector3_Mfloat_Mfloat_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AI_fort_leashable", "_L_2fFortnite_2ecom_2fAI_2ffort__leashable_N_RSetLeashPosition_L_Nvector3_M_Nfloat_M_Nfloat_R");

	Params::UAI_fort_leashable__L_2fFortnite_2ecom_2fAI_2ffort__leashable_N_RSetLeashPosition_L_Nvector3_M_Nfloat_M_Nfloat_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortnite.AI_fort_leashable._L_2fFortnite_2ecom_2fAI_2ffort__leashable_N_RSetLeashAgent_L_Nagent_M_Nfloat_M_Nfloat_R
// (Public, BlueprintCallable)
// Parameters:
// struct FTuple_Lagent_Mfloat_Mfloat_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UAI_fort_leashable::_L_2fFortnite_2ecom_2fAI_2ffort__leashable_N_RSetLeashAgent_L_Nagent_M_Nfloat_M_Nfloat_R(const struct FTuple_Lagent_Mfloat_Mfloat_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AI_fort_leashable", "_L_2fFortnite_2ecom_2fAI_2ffort__leashable_N_RSetLeashAgent_L_Nagent_M_Nfloat_M_Nfloat_R");

	Params::UAI_fort_leashable__L_2fFortnite_2ecom_2fAI_2ffort__leashable_N_RSetLeashAgent_L_Nagent_M_Nfloat_M_Nfloat_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortnite.AI_fort_leashable._L_2fFortnite_2ecom_2fAI_2ffort__leashable_N_RClearLeash
// (Public, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UAI_fort_leashable::_L_2fFortnite_2ecom_2fAI_2ffort__leashable_N_RClearLeash(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AI_fort_leashable", "_L_2fFortnite_2ecom_2fAI_2ffort__leashable_N_RClearLeash");

	Params::UAI_fort_leashable__L_2fFortnite_2ecom_2fAI_2ffort__leashable_N_RClearLeash_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortnite.AI_fort_threat_perception_interface
// (None)

class UClass* UAI_fort_threat_perception_interface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AI_fort_threat_perception_interface");

	return Clss;
}


// AI_fort_threat_perception_interface VerseFortnite.Default__AI_fort_threat_perception_interface
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAI_fort_threat_perception_interface* UAI_fort_threat_perception_interface::GetDefaultObj()
{
	static class UAI_fort_threat_perception_interface* Default = nullptr;

	if (!Default)
		Default = static_cast<UAI_fort_threat_perception_interface*>(UAI_fort_threat_perception_interface::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortnite.AI_fort_threat_perception_interface._L_2fFortnite_2ecom_2fAI_2ffort__threat__perception__interface_N_RGetThreatsInfo
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference)

FOptionalProperty_ UAI_fort_threat_perception_interface::_L_2fFortnite_2ecom_2fAI_2ffort__threat__perception__interface_N_RGetThreatsInfo(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AI_fort_threat_perception_interface", "_L_2fFortnite_2ecom_2fAI_2ffort__threat__perception__interface_N_RGetThreatsInfo");

	Params::UAI_fort_threat_perception_interface__L_2fFortnite_2ecom_2fAI_2ffort__threat__perception__interface_N_RGetThreatsInfo_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseFortnite.AI_fort_threat_perception_interface._L_2fFortnite_2ecom_2fAI_2ffort__threat__perception__interface_N_RGetThreatInfo_L_Nagent_R
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class USimulation_agent*           __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor)

FOptionalProperty_ UAI_fort_threat_perception_interface::_L_2fFortnite_2ecom_2fAI_2ffort__threat__perception__interface_N_RGetThreatInfo_L_Nagent_R(class USimulation_agent* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AI_fort_threat_perception_interface", "_L_2fFortnite_2ecom_2fAI_2ffort__threat__perception__interface_N_RGetThreatInfo_L_Nagent_R");

	Params::UAI_fort_threat_perception_interface__L_2fFortnite_2ecom_2fAI_2ffort__threat__perception__interface_N_RGetThreatInfo_L_Nagent_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass VerseFortnite.AI_navigatable
// (None)

class UClass* UAI_navigatable::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AI_navigatable");

	return Clss;
}


// AI_navigatable VerseFortnite.Default__AI_navigatable
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAI_navigatable* UAI_navigatable::GetDefaultObj()
{
	static class UAI_navigatable* Default = nullptr;

	if (!Default)
		Default = static_cast<UAI_navigatable*>(UAI_navigatable::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortnite.AI_navigatable.Wait_L_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UAI_navigatable::Wait_L_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, FOptionalProperty_ __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AI_navigatable", "Wait_L_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R");

	Params::UAI_navigatable_Wait_L_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseFortnite.AI_navigatable._L_2fFortnite_2ecom_2fAI_2fnavigatable_N_RStopNavigation
// (Public, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UAI_navigatable::_L_2fFortnite_2ecom_2fAI_2fnavigatable_N_RStopNavigation(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AI_navigatable", "_L_2fFortnite_2ecom_2fAI_2fnavigatable_N_RStopNavigation");

	Params::UAI_navigatable__L_2fFortnite_2ecom_2fAI_2fnavigatable_N_RStopNavigation_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortnite.AI_navigatable.NavigateTo_L_Nnavigation__target_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_Lnavigation__target_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UAI_navigatable::NavigateTo_L_Nnavigation__target_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_Lnavigation__target_M_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AI_navigatable", "NavigateTo_L_Nnavigation__target_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R");

	Params::UAI_navigatable_NavigateTo_L_Nnavigation__target_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseFortnite.AI_navigatable._L_2fFortnite_2ecom_2fAI_2fnavigatable_N_RGetCurrentDestination
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

FOptionalProperty_ UAI_navigatable::_L_2fFortnite_2ecom_2fAI_2fnavigatable_N_RGetCurrentDestination(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AI_navigatable", "_L_2fFortnite_2ecom_2fAI_2fnavigatable_N_RGetCurrentDestination");

	Params::UAI_navigatable__L_2fFortnite_2ecom_2fAI_2fnavigatable_N_RGetCurrentDestination_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass VerseFortnite.AI_navigation_target
// (None)

class UClass* UAI_navigation_target::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AI_navigation_target");

	return Clss;
}


// AI_navigation_target VerseFortnite.Default__AI_navigation_target
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAI_navigation_target* UAI_navigation_target::GetDefaultObj()
{
	static class UAI_navigation_target* Default = nullptr;

	if (!Default)
		Default = static_cast<UAI_navigation_target*>(UAI_navigation_target::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortnite.AI_navigation_target.$InitInstance
// (None)
// Parameters:

void UAI_navigation_target::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AI_navigation_target", "$InitInstance");

	Params::UAI_navigation_target__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortnite.AI_navigation_target.$Block
// (None)
// Parameters:

void UAI_navigation_target::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AI_navigation_target", "$Block");

	Params::UAI_navigation_target__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortnite.AI_navigation_target.$InitCDO
// (None)
// Parameters:

void UAI_navigation_target::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AI_navigation_target", "$InitCDO");

	Params::UAI_navigation_target__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortnite.Characters
// (None)

class UClass* UCharacters::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Characters");

	return Clss;
}


// Characters VerseFortnite.Default__Characters
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCharacters* UCharacters::GetDefaultObj()
{
	static class UCharacters* Default = nullptr;

	if (!Default)
		Default = static_cast<UCharacters*>(UCharacters::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortnite.Characters._L_2fFortnite_2ecom_2fCharacters_N_Roperator_U_2eGetInstigatorAgent_U_L_Ngame__action__instigator_M_Ntuple_L_R_M_Ntuple_L_R_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lgame__action__instigator_Mtuple_L_R_Mtuple_L_R_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

FOptionalProperty_ UCharacters::_L_2fFortnite_2ecom_2fCharacters_N_Roperator_U_2eGetInstigatorAgent_U_L_Ngame__action__instigator_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lgame__action__instigator_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Characters", "_L_2fFortnite_2ecom_2fCharacters_N_Roperator_U_2eGetInstigatorAgent_U_L_Ngame__action__instigator_M_Ntuple_L_R_M_Ntuple_L_R_R");

	Params::UCharacters__L_2fFortnite_2ecom_2fCharacters_N_Roperator_U_2eGetInstigatorAgent_U_L_Ngame__action__instigator_M_Ntuple_L_R_M_Ntuple_L_R_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortnite.Characters._L_2fFortnite_2ecom_2fCharacters_N_Roperator_U_2eGetInstigator_U_L_Nagent_M_Ntuple_L_R_M_Ntuple_L_R_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lagent_Mtuple_L_R_Mtuple_L_R_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UObject*                     RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UObject* UCharacters::_L_2fFortnite_2ecom_2fCharacters_N_Roperator_U_2eGetInstigator_U_L_Nagent_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lagent_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Characters", "_L_2fFortnite_2ecom_2fCharacters_N_Roperator_U_2eGetInstigator_U_L_Nagent_M_Ntuple_L_R_M_Ntuple_L_R_R");

	Params::UCharacters__L_2fFortnite_2ecom_2fCharacters_N_Roperator_U_2eGetInstigator_U_L_Nagent_M_Ntuple_L_R_M_Ntuple_L_R_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortnite.Characters._L_2fFortnite_2ecom_2fCharacters_N_Roperator_U_2eGetFortCharacter_U_L_Nagent_M_Ntuple_L_R_M_Ntuple_L_R_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lagent_Mtuple_L_R_Mtuple_L_R_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

FOptionalProperty_ UCharacters::_L_2fFortnite_2ecom_2fCharacters_N_Roperator_U_2eGetFortCharacter_U_L_Nagent_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lagent_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Characters", "_L_2fFortnite_2ecom_2fCharacters_N_Roperator_U_2eGetFortCharacter_U_L_Nagent_M_Ntuple_L_R_M_Ntuple_L_R_R");

	Params::UCharacters__L_2fFortnite_2ecom_2fCharacters_N_Roperator_U_2eGetFortCharacter_U_L_Nagent_M_Ntuple_L_R_M_Ntuple_L_R_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortnite.Characters.Characters_stasis_args$OverrideFactory
// (Static, HasOutParams, HasDefaults)
// Parameters:
// struct FCharacters_stasis_args     RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
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

struct FCharacters_stasis_args UCharacters::Characters_stasis_args_OverrideFactory(TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap, FVerseStringProperty_ _ExprResultStack_0, FOptionalProperty_ _ExprResult_1, FVerseStringProperty_ _ExprResultStack_2, FOptionalProperty_ _ExprResult_3, FVerseStringProperty_ _ExprResultStack_4, FOptionalProperty_ _ExprResult_5, FVerseStringProperty_ _ExprResultStack_6, FOptionalProperty_ _ExprResult_7, FVerseStringProperty_ _ExprResultStack_8, FOptionalProperty_ _ExprResult_9, FVerseStringProperty_ _ExprResultStack_10, FOptionalProperty_ _ExprResult_11)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Characters", "Characters_stasis_args$OverrideFactory");

	Params::UCharacters_Characters_stasis_args_OverrideFactory_Params Parms{};

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


// Function VerseFortnite.Characters.Characters_stasis_args$Factory
// (Static, HasOutParams)
// Parameters:
// struct FCharacters_stasis_args     RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

struct FCharacters_stasis_args UCharacters::Characters_stasis_args_Factory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Characters", "Characters_stasis_args$Factory");

	Params::UCharacters_Characters_stasis_args_Factory_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseFortnite.Characters.$InitCDO
// (None)
// Parameters:

void UCharacters::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Characters", "$InitCDO");

	Params::UCharacters__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortnite.Characters_fort_character
// (None)

class UClass* UCharacters_fort_character::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Characters_fort_character");

	return Clss;
}


// Characters_fort_character VerseFortnite.Default__Characters_fort_character
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCharacters_fort_character* UCharacters_fort_character::GetDefaultObj()
{
	static class UCharacters_fort_character* Default = nullptr;

	if (!Default)
		Default = static_cast<UCharacters_fort_character*>(UCharacters_fort_character::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortnite.Characters_fort_character._L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RTeleportTo_L_Nvector3_M_Nrotation_R
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lvector3_Mrotation_R __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionalProperty_ UCharacters_fort_character::_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RTeleportTo_L_Nvector3_M_Nrotation_R(const struct FTuple_Lvector3_Mrotation_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Characters_fort_character", "_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RTeleportTo_L_Nvector3_M_Nrotation_R");

	Params::UCharacters_fort_character__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RTeleportTo_L_Nvector3_M_Nrotation_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseFortnite.Characters_fort_character._L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RSprintedEvent
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UObject*                     RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UObject* UCharacters_fort_character::_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RSprintedEvent(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Characters_fort_character", "_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RSprintedEvent");

	Params::UCharacters_fort_character__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RSprintedEvent_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseFortnite.Characters_fort_character._L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RShow
// (Public, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UCharacters_fort_character::_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RShow(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Characters_fort_character", "_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RShow");

	Params::UCharacters_fort_character__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RShow_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortnite.Characters_fort_character._L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RSetVulnerability_L_Nlogic_R
// (Public, BlueprintCallable)
// Parameters:
// uint8                              __verse_0xB2CDDD72_Argument                                      (Parm, NoDestructor, HasGetValueTypeHash)

void UCharacters_fort_character::_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RSetVulnerability_L_Nlogic_R(uint8 __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Characters_fort_character", "_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RSetVulnerability_L_Nlogic_R");

	Params::UCharacters_fort_character__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RSetVulnerability_L_Nlogic_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortnite.Characters_fort_character._L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RReleaseFromStasis
// (Public, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UCharacters_fort_character::_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RReleaseFromStasis(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Characters_fort_character", "_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RReleaseFromStasis");

	Params::UCharacters_fort_character__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RReleaseFromStasis_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortnite.Characters_fort_character._L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RPutInStasis_L_Nstasis__args_R
// (Public, BlueprintCallable)
// Parameters:
// struct FCharacters_stasis_args     __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCharacters_fort_character::_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RPutInStasis_L_Nstasis__args_R(const struct FCharacters_stasis_args& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Characters_fort_character", "_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RPutInStasis_L_Nstasis__args_R");

	Params::UCharacters_fort_character__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RPutInStasis_L_Nstasis__args_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortnite.Characters_fort_character._L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RJumpedEvent
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UObject*                     RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UObject* UCharacters_fort_character::_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RJumpedEvent(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Characters_fort_character", "_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RJumpedEvent");

	Params::UCharacters_fort_character__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RJumpedEvent_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseFortnite.Characters_fort_character._L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsVulnerable
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionalProperty_ UCharacters_fort_character::_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsVulnerable(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Characters_fort_character", "_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsVulnerable");

	Params::UCharacters_fort_character__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsVulnerable_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseFortnite.Characters_fort_character._L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsOnGround
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionalProperty_ UCharacters_fort_character::_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsOnGround(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Characters_fort_character", "_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsOnGround");

	Params::UCharacters_fort_character__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsOnGround_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseFortnite.Characters_fort_character._L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsInWater
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionalProperty_ UCharacters_fort_character::_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsInWater(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Characters_fort_character", "_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsInWater");

	Params::UCharacters_fort_character__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsInWater_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseFortnite.Characters_fort_character._L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsInAir
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionalProperty_ UCharacters_fort_character::_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsInAir(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Characters_fort_character", "_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsInAir");

	Params::UCharacters_fort_character__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsInAir_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseFortnite.Characters_fort_character._L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsGliding
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionalProperty_ UCharacters_fort_character::_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsGliding(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Characters_fort_character", "_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsGliding");

	Params::UCharacters_fort_character__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsGliding_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseFortnite.Characters_fort_character._L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsFlying
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionalProperty_ UCharacters_fort_character::_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsFlying(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Characters_fort_character", "_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsFlying");

	Params::UCharacters_fort_character__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsFlying_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseFortnite.Characters_fort_character._L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsFalling
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionalProperty_ UCharacters_fort_character::_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsFalling(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Characters_fort_character", "_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsFalling");

	Params::UCharacters_fort_character__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsFalling_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseFortnite.Characters_fort_character._L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsDownButNotOut
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionalProperty_ UCharacters_fort_character::_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsDownButNotOut(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Characters_fort_character", "_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsDownButNotOut");

	Params::UCharacters_fort_character__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsDownButNotOut_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseFortnite.Characters_fort_character._L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsCrouching
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionalProperty_ UCharacters_fort_character::_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsCrouching(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Characters_fort_character", "_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsCrouching");

	Params::UCharacters_fort_character__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsCrouching_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseFortnite.Characters_fort_character._L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsActive
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionalProperty_ UCharacters_fort_character::_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsActive(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Characters_fort_character", "_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsActive");

	Params::UCharacters_fort_character__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsActive_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseFortnite.Characters_fort_character._L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RHide
// (Public, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UCharacters_fort_character::_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RHide(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Characters_fort_character", "_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RHide");

	Params::UCharacters_fort_character__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RHide_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortnite.Characters_fort_character._L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RGetViewRotation
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FVerseRotation              RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor)

struct FVerseRotation UCharacters_fort_character::_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RGetViewRotation(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Characters_fort_character", "_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RGetViewRotation");

	Params::UCharacters_fort_character__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RGetViewRotation_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseFortnite.Characters_fort_character._L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RGetViewLocation
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FSpatialMath_vector3        RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

struct FSpatialMath_vector3 UCharacters_fort_character::_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RGetViewLocation(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Characters_fort_character", "_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RGetViewLocation");

	Params::UCharacters_fort_character__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RGetViewLocation_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseFortnite.Characters_fort_character._L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RGetAgent
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

FOptionalProperty_ UCharacters_fort_character::_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RGetAgent(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Characters_fort_character", "_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RGetAgent");

	Params::UCharacters_fort_character__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RGetAgent_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseFortnite.Characters_fort_character._L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_REliminatedEvent
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UObject*                     RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UObject* UCharacters_fort_character::_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_REliminatedEvent(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Characters_fort_character", "_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_REliminatedEvent");

	Params::UCharacters_fort_character__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_REliminatedEvent_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseFortnite.Characters_fort_character._L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RCrouchedEvent
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UObject*                     RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UObject* UCharacters_fort_character::_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RCrouchedEvent(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Characters_fort_character", "_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RCrouchedEvent");

	Params::UCharacters_fort_character__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RCrouchedEvent_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass VerseFortnite.Characters_fort_character_impl
// (None)

class UClass* UCharacters_fort_character_impl::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Characters_fort_character_impl");

	return Clss;
}


// Characters_fort_character_impl VerseFortnite.Default__Characters_fort_character_impl
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UCharacters_fort_character_impl* UCharacters_fort_character_impl::GetDefaultObj()
{
	static class UCharacters_fort_character_impl* Default = nullptr;

	if (!Default)
		Default = static_cast<UCharacters_fort_character_impl*>(UCharacters_fort_character_impl::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortnite.Characters_fort_character_impl._L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RTeleportTo_L_Nvector3_M_Nrotation_R
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lvector3_Mrotation_R __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionalProperty_ UCharacters_fort_character_impl::_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RTeleportTo_L_Nvector3_M_Nrotation_R(const struct FTuple_Lvector3_Mrotation_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Characters_fort_character_impl", "_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RTeleportTo_L_Nvector3_M_Nrotation_R");

	Params::UCharacters_fort_character_impl__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RTeleportTo_L_Nvector3_M_Nrotation_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortnite.Characters_fort_character_impl._L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RSprintedEvent
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UObject*                     RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UObject* UCharacters_fort_character_impl::_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RSprintedEvent(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Characters_fort_character_impl", "_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RSprintedEvent");

	Params::UCharacters_fort_character_impl__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RSprintedEvent_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseFortnite.Characters_fort_character_impl._L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RShow
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UCharacters_fort_character_impl::_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RShow(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Characters_fort_character_impl", "_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RShow");

	Params::UCharacters_fort_character_impl__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RShow_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortnite.Characters_fort_character_impl._L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RSetVulnerability_L_Nlogic_R
// (Native, Public, BlueprintCallable)
// Parameters:
// uint8                              __verse_0xB2CDDD72_Argument                                      (Parm, NoDestructor, HasGetValueTypeHash)

void UCharacters_fort_character_impl::_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RSetVulnerability_L_Nlogic_R(uint8 __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Characters_fort_character_impl", "_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RSetVulnerability_L_Nlogic_R");

	Params::UCharacters_fort_character_impl__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RSetVulnerability_L_Nlogic_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortnite.Characters_fort_character_impl._L_2fFortnite_2ecom_2fGame_2fshieldable_N_RSetShield_L_Nfloat_R
// (Native, Public, BlueprintCallable)
// Parameters:
// double                             __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacters_fort_character_impl::_L_2fFortnite_2ecom_2fGame_2fshieldable_N_RSetShield_L_Nfloat_R(double __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Characters_fort_character_impl", "_L_2fFortnite_2ecom_2fGame_2fshieldable_N_RSetShield_L_Nfloat_R");

	Params::UCharacters_fort_character_impl__L_2fFortnite_2ecom_2fGame_2fshieldable_N_RSetShield_L_Nfloat_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortnite.Characters_fort_character_impl._L_2fFortnite_2ecom_2fGame_2fshieldable_N_RSetMaxShield_L_Nfloat_R
// (Native, Public, BlueprintCallable)
// Parameters:
// double                             __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacters_fort_character_impl::_L_2fFortnite_2ecom_2fGame_2fshieldable_N_RSetMaxShield_L_Nfloat_R(double __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Characters_fort_character_impl", "_L_2fFortnite_2ecom_2fGame_2fshieldable_N_RSetMaxShield_L_Nfloat_R");

	Params::UCharacters_fort_character_impl__L_2fFortnite_2ecom_2fGame_2fshieldable_N_RSetMaxShield_L_Nfloat_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortnite.Characters_fort_character_impl._L_2fFortnite_2ecom_2fGame_2fhealthful_N_RSetMaxHealth_L_Nfloat_R
// (Native, Public, BlueprintCallable)
// Parameters:
// double                             __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacters_fort_character_impl::_L_2fFortnite_2ecom_2fGame_2fhealthful_N_RSetMaxHealth_L_Nfloat_R(double __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Characters_fort_character_impl", "_L_2fFortnite_2ecom_2fGame_2fhealthful_N_RSetMaxHealth_L_Nfloat_R");

	Params::UCharacters_fort_character_impl__L_2fFortnite_2ecom_2fGame_2fhealthful_N_RSetMaxHealth_L_Nfloat_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortnite.Characters_fort_character_impl._L_2fFortnite_2ecom_2fGame_2fhealthful_N_RSetHealth_L_Nfloat_R
// (Native, Public, BlueprintCallable)
// Parameters:
// double                             __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacters_fort_character_impl::_L_2fFortnite_2ecom_2fGame_2fhealthful_N_RSetHealth_L_Nfloat_R(double __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Characters_fort_character_impl", "_L_2fFortnite_2ecom_2fGame_2fhealthful_N_RSetHealth_L_Nfloat_R");

	Params::UCharacters_fort_character_impl__L_2fFortnite_2ecom_2fGame_2fhealthful_N_RSetHealth_L_Nfloat_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortnite.Characters_fort_character_impl._L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RReleaseFromStasis
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UCharacters_fort_character_impl::_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RReleaseFromStasis(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Characters_fort_character_impl", "_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RReleaseFromStasis");

	Params::UCharacters_fort_character_impl__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RReleaseFromStasis_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortnite.Characters_fort_character_impl._L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RPutInStasis_L_Nstasis__args_R
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FCharacters_stasis_args     __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UCharacters_fort_character_impl::_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RPutInStasis_L_Nstasis__args_R(const struct FCharacters_stasis_args& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Characters_fort_character_impl", "_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RPutInStasis_L_Nstasis__args_R");

	Params::UCharacters_fort_character_impl__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RPutInStasis_L_Nstasis__args_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortnite.Characters_fort_character_impl._L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RJumpedEvent
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UObject*                     RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UObject* UCharacters_fort_character_impl::_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RJumpedEvent(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Characters_fort_character_impl", "_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RJumpedEvent");

	Params::UCharacters_fort_character_impl__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RJumpedEvent_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseFortnite.Characters_fort_character_impl._L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsVulnerable
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionalProperty_ UCharacters_fort_character_impl::_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsVulnerable(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Characters_fort_character_impl", "_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsVulnerable");

	Params::UCharacters_fort_character_impl__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsVulnerable_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortnite.Characters_fort_character_impl._L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsOnGround
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionalProperty_ UCharacters_fort_character_impl::_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsOnGround(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Characters_fort_character_impl", "_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsOnGround");

	Params::UCharacters_fort_character_impl__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsOnGround_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortnite.Characters_fort_character_impl._L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsInWater
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionalProperty_ UCharacters_fort_character_impl::_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsInWater(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Characters_fort_character_impl", "_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsInWater");

	Params::UCharacters_fort_character_impl__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsInWater_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortnite.Characters_fort_character_impl._L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsInAir
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionalProperty_ UCharacters_fort_character_impl::_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsInAir(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Characters_fort_character_impl", "_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsInAir");

	Params::UCharacters_fort_character_impl__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsInAir_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortnite.Characters_fort_character_impl._L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsGliding
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionalProperty_ UCharacters_fort_character_impl::_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsGliding(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Characters_fort_character_impl", "_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsGliding");

	Params::UCharacters_fort_character_impl__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsGliding_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortnite.Characters_fort_character_impl._L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsFlying
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionalProperty_ UCharacters_fort_character_impl::_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsFlying(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Characters_fort_character_impl", "_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsFlying");

	Params::UCharacters_fort_character_impl__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsFlying_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortnite.Characters_fort_character_impl._L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsFalling
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionalProperty_ UCharacters_fort_character_impl::_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsFalling(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Characters_fort_character_impl", "_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsFalling");

	Params::UCharacters_fort_character_impl__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsFalling_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortnite.Characters_fort_character_impl._L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsDownButNotOut
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionalProperty_ UCharacters_fort_character_impl::_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsDownButNotOut(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Characters_fort_character_impl", "_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsDownButNotOut");

	Params::UCharacters_fort_character_impl__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsDownButNotOut_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortnite.Characters_fort_character_impl._L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsCrouching
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionalProperty_ UCharacters_fort_character_impl::_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsCrouching(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Characters_fort_character_impl", "_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsCrouching");

	Params::UCharacters_fort_character_impl__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsCrouching_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortnite.Characters_fort_character_impl._L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsActive
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionalProperty_ UCharacters_fort_character_impl::_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsActive(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Characters_fort_character_impl", "_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsActive");

	Params::UCharacters_fort_character_impl__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RIsActive_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortnite.Characters_fort_character_impl._L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RHide
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UCharacters_fort_character_impl::_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RHide(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Characters_fort_character_impl", "_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RHide");

	Params::UCharacters_fort_character_impl__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RHide_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortnite.Characters_fort_character_impl._L_2fFortnite_2ecom_2fGame_2fshieldable_N_RHealedShieldEvent
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UObject*                     RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UObject* UCharacters_fort_character_impl::_L_2fFortnite_2ecom_2fGame_2fshieldable_N_RHealedShieldEvent(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Characters_fort_character_impl", "_L_2fFortnite_2ecom_2fGame_2fshieldable_N_RHealedShieldEvent");

	Params::UCharacters_fort_character_impl__L_2fFortnite_2ecom_2fGame_2fshieldable_N_RHealedShieldEvent_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseFortnite.Characters_fort_character_impl._L_2fFortnite_2ecom_2fGame_2fhealable_N_RHealedEvent
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UObject*                     RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UObject* UCharacters_fort_character_impl::_L_2fFortnite_2ecom_2fGame_2fhealable_N_RHealedEvent(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Characters_fort_character_impl", "_L_2fFortnite_2ecom_2fGame_2fhealable_N_RHealedEvent");

	Params::UCharacters_fort_character_impl__L_2fFortnite_2ecom_2fGame_2fhealable_N_RHealedEvent_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseFortnite.Characters_fort_character_impl._L_2fFortnite_2ecom_2fGame_2fhealable_N_RHeal_L_Nhealing__args_R
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FGame_healing_args          __verse_0xB2CDDD72_Argument                                      (Parm, NoDestructor)

void UCharacters_fort_character_impl::_L_2fFortnite_2ecom_2fGame_2fhealable_N_RHeal_L_Nhealing__args_R(const struct FGame_healing_args& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Characters_fort_character_impl", "_L_2fFortnite_2ecom_2fGame_2fhealable_N_RHeal_L_Nhealing__args_R");

	Params::UCharacters_fort_character_impl__L_2fFortnite_2ecom_2fGame_2fhealable_N_RHeal_L_Nhealing__args_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortnite.Characters_fort_character_impl._L_2fFortnite_2ecom_2fGame_2fhealable_N_RHeal_L_Nfloat_R
// (Native, Public, BlueprintCallable)
// Parameters:
// double                             __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacters_fort_character_impl::_L_2fFortnite_2ecom_2fGame_2fhealable_N_RHeal_L_Nfloat_R(double __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Characters_fort_character_impl", "_L_2fFortnite_2ecom_2fGame_2fhealable_N_RHeal_L_Nfloat_R");

	Params::UCharacters_fort_character_impl__L_2fFortnite_2ecom_2fGame_2fhealable_N_RHeal_L_Nfloat_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortnite.Characters_fort_character_impl._L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RGetViewRotation
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FVerseRotation              RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor)

struct FVerseRotation UCharacters_fort_character_impl::_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RGetViewRotation(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Characters_fort_character_impl", "_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RGetViewRotation");

	Params::UCharacters_fort_character_impl__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RGetViewRotation_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortnite.Characters_fort_character_impl._L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RGetViewLocation
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FSpatialMath_vector3        RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

struct FSpatialMath_vector3 UCharacters_fort_character_impl::_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RGetViewLocation(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Characters_fort_character_impl", "_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RGetViewLocation");

	Params::UCharacters_fort_character_impl__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RGetViewLocation_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortnite.Characters_fort_character_impl._L_2fFortnite_2ecom_2fGame_2fpositional_N_RGetTransform
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FSpatialMath_transform      RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor)

struct FSpatialMath_transform UCharacters_fort_character_impl::_L_2fFortnite_2ecom_2fGame_2fpositional_N_RGetTransform(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Characters_fort_character_impl", "_L_2fFortnite_2ecom_2fGame_2fpositional_N_RGetTransform");

	Params::UCharacters_fort_character_impl__L_2fFortnite_2ecom_2fGame_2fpositional_N_RGetTransform_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortnite.Characters_fort_character_impl._L_2fFortnite_2ecom_2fGame_2fshieldable_N_RGetShield
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// double                             RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double UCharacters_fort_character_impl::_L_2fFortnite_2ecom_2fGame_2fshieldable_N_RGetShield(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Characters_fort_character_impl", "_L_2fFortnite_2ecom_2fGame_2fshieldable_N_RGetShield");

	Params::UCharacters_fort_character_impl__L_2fFortnite_2ecom_2fGame_2fshieldable_N_RGetShield_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortnite.Characters_fort_character_impl._L_2fFortnite_2ecom_2fGame_2fshieldable_N_RGetMaxShield
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// double                             RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double UCharacters_fort_character_impl::_L_2fFortnite_2ecom_2fGame_2fshieldable_N_RGetMaxShield(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Characters_fort_character_impl", "_L_2fFortnite_2ecom_2fGame_2fshieldable_N_RGetMaxShield");

	Params::UCharacters_fort_character_impl__L_2fFortnite_2ecom_2fGame_2fshieldable_N_RGetMaxShield_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortnite.Characters_fort_character_impl._L_2fFortnite_2ecom_2fGame_2fhealthful_N_RGetMaxHealth
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// double                             RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double UCharacters_fort_character_impl::_L_2fFortnite_2ecom_2fGame_2fhealthful_N_RGetMaxHealth(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Characters_fort_character_impl", "_L_2fFortnite_2ecom_2fGame_2fhealthful_N_RGetMaxHealth");

	Params::UCharacters_fort_character_impl__L_2fFortnite_2ecom_2fGame_2fhealthful_N_RGetMaxHealth_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortnite.Characters_fort_character_impl._L_2fFortnite_2ecom_2fGame_2fhealthful_N_RGetHealth
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// double                             RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double UCharacters_fort_character_impl::_L_2fFortnite_2ecom_2fGame_2fhealthful_N_RGetHealth(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Characters_fort_character_impl", "_L_2fFortnite_2ecom_2fGame_2fhealthful_N_RGetHealth");

	Params::UCharacters_fort_character_impl__L_2fFortnite_2ecom_2fGame_2fhealthful_N_RGetHealth_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortnite.Characters_fort_character_impl._L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RGetAgent
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

FOptionalProperty_ UCharacters_fort_character_impl::_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RGetAgent(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Characters_fort_character_impl", "_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RGetAgent");

	Params::UCharacters_fort_character_impl__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RGetAgent_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortnite.Characters_fort_character_impl._L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_REliminatedEvent
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UObject*                     RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UObject* UCharacters_fort_character_impl::_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_REliminatedEvent(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Characters_fort_character_impl", "_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_REliminatedEvent");

	Params::UCharacters_fort_character_impl__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_REliminatedEvent_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseFortnite.Characters_fort_character_impl._L_2fFortnite_2ecom_2fGame_2fshieldable_N_RDamagedShieldEvent
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UObject*                     RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UObject* UCharacters_fort_character_impl::_L_2fFortnite_2ecom_2fGame_2fshieldable_N_RDamagedShieldEvent(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Characters_fort_character_impl", "_L_2fFortnite_2ecom_2fGame_2fshieldable_N_RDamagedShieldEvent");

	Params::UCharacters_fort_character_impl__L_2fFortnite_2ecom_2fGame_2fshieldable_N_RDamagedShieldEvent_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseFortnite.Characters_fort_character_impl._L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamagedEvent
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UObject*                     RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UObject* UCharacters_fort_character_impl::_L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamagedEvent(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Characters_fort_character_impl", "_L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamagedEvent");

	Params::UCharacters_fort_character_impl__L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamagedEvent_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseFortnite.Characters_fort_character_impl._L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamage_L_Nfloat_R
// (Native, Public, BlueprintCallable)
// Parameters:
// double                             __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacters_fort_character_impl::_L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamage_L_Nfloat_R(double __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Characters_fort_character_impl", "_L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamage_L_Nfloat_R");

	Params::UCharacters_fort_character_impl__L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamage_L_Nfloat_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortnite.Characters_fort_character_impl._L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamage_L_Ndamage__args_R
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FGame_damage_args           __verse_0xB2CDDD72_Argument                                      (Parm, NoDestructor)

void UCharacters_fort_character_impl::_L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamage_L_Ndamage__args_R(const struct FGame_damage_args& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Characters_fort_character_impl", "_L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamage_L_Ndamage__args_R");

	Params::UCharacters_fort_character_impl__L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamage_L_Ndamage__args_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortnite.Characters_fort_character_impl._L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RCrouchedEvent
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UObject*                     RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UObject* UCharacters_fort_character_impl::_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RCrouchedEvent(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Characters_fort_character_impl", "_L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RCrouchedEvent");

	Params::UCharacters_fort_character_impl__L_2fFortnite_2ecom_2fCharacters_2ffort__character_N_RCrouchedEvent_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseFortnite.Characters_fort_character_impl.$InitInstance
// (None)
// Parameters:

void UCharacters_fort_character_impl::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Characters_fort_character_impl", "$InitInstance");

	Params::UCharacters_fort_character_impl__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortnite.Characters_fort_character_impl.$Block
// (None)
// Parameters:

void UCharacters_fort_character_impl::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Characters_fort_character_impl", "$Block");

	Params::UCharacters_fort_character_impl__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortnite.Characters_fort_character_impl.$InitCDO
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
// class UVerseEngine_subscribable_event*_ExprResult_16                                                   (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint64                             _InstancingGraph_17                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerseEngine_subscribable_event*_ExprResult_18                                                   (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint64                             _InstancingGraph_19                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerseEngine_subscribable_event*_ExprResult_20                                                   (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint64                             _InstancingGraph_21                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerseEngine_subscribable_event*_ExprResult_22                                                   (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint64                             _InstancingGraph_23                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerseEngine_subscribable_event*_ExprResult_24                                                   (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint64                             _InstancingGraph_25                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerseEngine_subscribable_event*_ExprResult_26                                                   (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint64                             _InstancingGraph_27                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerseEngine_subscribable_event*_ExprResult_28                                                   (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint64                             _InstancingGraph_29                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerseEngine_subscribable_event*_ExprResult_30                                                   (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint64                             _InstancingGraph_31                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UCharacters_fort_character_impl::_InitCDO(class UVerseEngine_subscribable_event* _ExprResult_0, uint64 _InstancingGraph_1, class UVerseEngine_subscribable_event* _ExprResult_2, uint64 _InstancingGraph_3, class UVerseEngine_subscribable_event* _ExprResult_4, uint64 _InstancingGraph_5, class UVerseEngine_subscribable_event* _ExprResult_6, uint64 _InstancingGraph_7, class UVerseEngine_subscribable_event* _ExprResult_8, uint64 _InstancingGraph_9, class UVerseEngine_subscribable_event* _ExprResult_10, uint64 _InstancingGraph_11, class UVerseEngine_subscribable_event* _ExprResult_12, uint64 _InstancingGraph_13, class UVerseEngine_subscribable_event* _ExprResult_14, uint64 _InstancingGraph_15, class UVerseEngine_subscribable_event* _ExprResult_16, uint64 _InstancingGraph_17, class UVerseEngine_subscribable_event* _ExprResult_18, uint64 _InstancingGraph_19, class UVerseEngine_subscribable_event* _ExprResult_20, uint64 _InstancingGraph_21, class UVerseEngine_subscribable_event* _ExprResult_22, uint64 _InstancingGraph_23, class UVerseEngine_subscribable_event* _ExprResult_24, uint64 _InstancingGraph_25, class UVerseEngine_subscribable_event* _ExprResult_26, uint64 _InstancingGraph_27, class UVerseEngine_subscribable_event* _ExprResult_28, uint64 _InstancingGraph_29, class UVerseEngine_subscribable_event* _ExprResult_30, uint64 _InstancingGraph_31)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Characters_fort_character_impl", "$InitCDO");

	Params::UCharacters_fort_character_impl__InitCDO_Params Parms{};

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
	Parms._ExprResult_16 = _ExprResult_16;
	Parms._InstancingGraph_17 = _InstancingGraph_17;
	Parms._ExprResult_18 = _ExprResult_18;
	Parms._InstancingGraph_19 = _InstancingGraph_19;
	Parms._ExprResult_20 = _ExprResult_20;
	Parms._InstancingGraph_21 = _InstancingGraph_21;
	Parms._ExprResult_22 = _ExprResult_22;
	Parms._InstancingGraph_23 = _InstancingGraph_23;
	Parms._ExprResult_24 = _ExprResult_24;
	Parms._InstancingGraph_25 = _InstancingGraph_25;
	Parms._ExprResult_26 = _ExprResult_26;
	Parms._InstancingGraph_27 = _InstancingGraph_27;
	Parms._ExprResult_28 = _ExprResult_28;
	Parms._InstancingGraph_29 = _InstancingGraph_29;
	Parms._ExprResult_30 = _ExprResult_30;
	Parms._InstancingGraph_31 = _InstancingGraph_31;

	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortnite.FortPlayerUtilities
// (None)

class UClass* UFortPlayerUtilities::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("FortPlayerUtilities");

	return Clss;
}


// FortPlayerUtilities VerseFortnite.Default__FortPlayerUtilities
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UFortPlayerUtilities* UFortPlayerUtilities::GetDefaultObj()
{
	static class UFortPlayerUtilities* Default = nullptr;

	if (!Default)
		Default = static_cast<UFortPlayerUtilities*>(UFortPlayerUtilities::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortnite.FortPlayerUtilities._L_2fFortnite_2ecom_2fFortPlayerUtilities_N_Roperator_U_2eSpectatePlayer_U_L_Nplayer_M_Ntuple_L_R_M_Nplayer_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lplayer_Mtuple_L_R_Mplayer_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionalProperty_ UFortPlayerUtilities::_L_2fFortnite_2ecom_2fFortPlayerUtilities_N_Roperator_U_2eSpectatePlayer_U_L_Nplayer_M_Ntuple_L_R_M_Nplayer_R(const struct FTuple_Lplayer_Mtuple_L_R_Mplayer_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerUtilities", "_L_2fFortnite_2ecom_2fFortPlayerUtilities_N_Roperator_U_2eSpectatePlayer_U_L_Nplayer_M_Ntuple_L_R_M_Nplayer_R");

	Params::UFortPlayerUtilities__L_2fFortnite_2ecom_2fFortPlayerUtilities_N_Roperator_U_2eSpectatePlayer_U_L_Nplayer_M_Ntuple_L_R_M_Nplayer_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortnite.FortPlayerUtilities._L_2fFortnite_2ecom_2fFortPlayerUtilities_N_Roperator_U_2eSpectateEliminator_U_L_Nplayer_M_Ntuple_L_R_M_Ntuple_L_R_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lplayer_Mtuple_L_R_Mtuple_L_R_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionalProperty_ UFortPlayerUtilities::_L_2fFortnite_2ecom_2fFortPlayerUtilities_N_Roperator_U_2eSpectateEliminator_U_L_Nplayer_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lplayer_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerUtilities", "_L_2fFortnite_2ecom_2fFortPlayerUtilities_N_Roperator_U_2eSpectateEliminator_U_L_Nplayer_M_Ntuple_L_R_M_Ntuple_L_R_R");

	Params::UFortPlayerUtilities__L_2fFortnite_2ecom_2fFortPlayerUtilities_N_Roperator_U_2eSpectateEliminator_U_L_Nplayer_M_Ntuple_L_R_M_Ntuple_L_R_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortnite.FortPlayerUtilities._L_2fFortnite_2ecom_2fFortPlayerUtilities_N_Roperator_U_2eSetSpectator_U_L_Nplayer_M_Ntuple_L_R_M_Ntuple_L_R_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lplayer_Mtuple_L_R_Mtuple_L_R_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionalProperty_ UFortPlayerUtilities::_L_2fFortnite_2ecom_2fFortPlayerUtilities_N_Roperator_U_2eSetSpectator_U_L_Nplayer_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lplayer_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerUtilities", "_L_2fFortnite_2ecom_2fFortPlayerUtilities_N_Roperator_U_2eSetSpectator_U_L_Nplayer_M_Ntuple_L_R_M_Ntuple_L_R_R");

	Params::UFortPlayerUtilities__L_2fFortnite_2ecom_2fFortPlayerUtilities_N_Roperator_U_2eSetSpectator_U_L_Nplayer_M_Ntuple_L_R_M_Ntuple_L_R_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortnite.FortPlayerUtilities._L_2fFortnite_2ecom_2fFortPlayerUtilities_N_Roperator_U_2eSendToLobby_U_L_Nplayer_M_Ntuple_L_R_M_Ntuple_L_R_R
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FTuple_Lplayer_Mtuple_L_R_Mtuple_L_R_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UFortPlayerUtilities::_L_2fFortnite_2ecom_2fFortPlayerUtilities_N_Roperator_U_2eSendToLobby_U_L_Nplayer_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lplayer_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerUtilities", "_L_2fFortnite_2ecom_2fFortPlayerUtilities_N_Roperator_U_2eSendToLobby_U_L_Nplayer_M_Ntuple_L_R_M_Ntuple_L_R_R");

	Params::UFortPlayerUtilities__L_2fFortnite_2ecom_2fFortPlayerUtilities_N_Roperator_U_2eSendToLobby_U_L_Nplayer_M_Ntuple_L_R_M_Ntuple_L_R_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortnite.FortPlayerUtilities._L_2fFortnite_2ecom_2fFortPlayerUtilities_N_Roperator_U_2eRespawn_U_L_Nagent_M_Ntuple_L_R_M_Ntuple_Lvector3_Mrotation_R_R
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FTuple_Lagent_Mtuple_L_R_Mtuple_Lvector3_Mrotation_R_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UFortPlayerUtilities::_L_2fFortnite_2ecom_2fFortPlayerUtilities_N_Roperator_U_2eRespawn_U_L_Nagent_M_Ntuple_L_R_M_Ntuple_Lvector3_Mrotation_R_R(const struct FTuple_Lagent_Mtuple_L_R_Mtuple_Lvector3_Mrotation_R_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerUtilities", "_L_2fFortnite_2ecom_2fFortPlayerUtilities_N_Roperator_U_2eRespawn_U_L_Nagent_M_Ntuple_L_R_M_Ntuple_Lvector3_Mrotation_R_R");

	Params::UFortPlayerUtilities__L_2fFortnite_2ecom_2fFortPlayerUtilities_N_Roperator_U_2eRespawn_U_L_Nagent_M_Ntuple_L_R_M_Ntuple_Lvector3_Mrotation_R_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortnite.FortPlayerUtilities._L_2fFortnite_2ecom_2fFortPlayerUtilities_N_Roperator_U_2eIsSpectator_U_L_Nplayer_M_Ntuple_L_R_M_Ntuple_L_R_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lplayer_Mtuple_L_R_Mtuple_L_R_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionalProperty_ UFortPlayerUtilities::_L_2fFortnite_2ecom_2fFortPlayerUtilities_N_Roperator_U_2eIsSpectator_U_L_Nplayer_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lplayer_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerUtilities", "_L_2fFortnite_2ecom_2fFortPlayerUtilities_N_Roperator_U_2eIsSpectator_U_L_Nplayer_M_Ntuple_L_R_M_Ntuple_L_R_R");

	Params::UFortPlayerUtilities__L_2fFortnite_2ecom_2fFortPlayerUtilities_N_Roperator_U_2eIsSpectator_U_L_Nplayer_M_Ntuple_L_R_M_Ntuple_L_R_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortnite.FortPlayerUtilities._L_2fFortnite_2ecom_2fFortPlayerUtilities_N_Roperator_U_2eGetPlayersSpectating_U_L_Nplayer_M_Ntuple_L_R_M_Ntuple_L_R_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lplayer_Mtuple_L_R_Mtuple_L_R_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// TArray<class USimulation_player*>  RetVal                                                           (Parm, OutParm, ReturnParm, ContainsInstancedReference)

TArray<class USimulation_player*> UFortPlayerUtilities::_L_2fFortnite_2ecom_2fFortPlayerUtilities_N_Roperator_U_2eGetPlayersSpectating_U_L_Nplayer_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lplayer_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerUtilities", "_L_2fFortnite_2ecom_2fFortPlayerUtilities_N_Roperator_U_2eGetPlayersSpectating_U_L_Nplayer_M_Ntuple_L_R_M_Ntuple_L_R_R");

	Params::UFortPlayerUtilities__L_2fFortnite_2ecom_2fFortPlayerUtilities_N_Roperator_U_2eGetPlayersSpectating_U_L_Nplayer_M_Ntuple_L_R_M_Ntuple_L_R_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortnite.FortPlayerUtilities.$InitCDO
// (None)
// Parameters:

void UFortPlayerUtilities::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("FortPlayerUtilities", "$InitCDO");

	Params::UFortPlayerUtilities__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortnite.Game
// (None)

class UClass* UGame::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Game");

	return Clss;
}


// Game VerseFortnite.Default__Game
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGame* UGame::GetDefaultObj()
{
	static class UGame* Default = nullptr;

	if (!Default)
		Default = static_cast<UGame*>(UGame::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortnite.Game.Game_healing_result$OverrideFactory
// (Static, HasOutParams, HasDefaults)
// Parameters:
// struct FGame_healing_result        RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor)
// TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap                              (ConstParm, Parm, ContainsInstancedReference)
// FVerseStringProperty_              _ExprResultStack_0                                               (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_1                                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_2                                                    (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0x00000000__1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_3                                                    (NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_4                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_5                                               (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_6                                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_7                                                    (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0x00000000__3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_8                                                    (NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_9                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_10                                              (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_11                                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_12                                                   (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0x00000000__5                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_13                                                   (NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_14                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_15                                              (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_16                                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_17                                                   (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0x00000000__7                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_18                                                   (NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_19                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FGame_healing_result UGame::Game_healing_result_OverrideFactory(TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap, FVerseStringProperty_ _ExprResultStack_0, FOptionalProperty_ _ExprResult_1, FOptionalProperty_ _ExprResult_2, FOptionalProperty_ __verse_0x00000000__1, uint8 _ExprResult_3, FOptionalProperty_ _ExprResultStack_4, FVerseStringProperty_ _ExprResultStack_5, FOptionalProperty_ _ExprResult_6, FOptionalProperty_ _ExprResult_7, FOptionalProperty_ __verse_0x00000000__3, uint8 _ExprResult_8, FOptionalProperty_ _ExprResultStack_9, FVerseStringProperty_ _ExprResultStack_10, FOptionalProperty_ _ExprResult_11, FOptionalProperty_ _ExprResult_12, FOptionalProperty_ __verse_0x00000000__5, uint8 _ExprResult_13, FOptionalProperty_ _ExprResultStack_14, FVerseStringProperty_ _ExprResultStack_15, FOptionalProperty_ _ExprResult_16, FOptionalProperty_ _ExprResult_17, FOptionalProperty_ __verse_0x00000000__7, uint8 _ExprResult_18, FOptionalProperty_ _ExprResultStack_19)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game", "Game_healing_result$OverrideFactory");

	Params::UGame_Game_healing_result_OverrideFactory_Params Parms{};

	Parms.__verse_0xFB48ED96__InitOverrideMap = __verse_0xFB48ED96__InitOverrideMap;
	Parms._ExprResultStack_0 = _ExprResultStack_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms.__verse_0x00000000__1 = __verse_0x00000000__1;
	Parms._ExprResult_3 = _ExprResult_3;
	Parms._ExprResultStack_4 = _ExprResultStack_4;
	Parms._ExprResultStack_5 = _ExprResultStack_5;
	Parms._ExprResult_6 = _ExprResult_6;
	Parms._ExprResult_7 = _ExprResult_7;
	Parms.__verse_0x00000000__3 = __verse_0x00000000__3;
	Parms._ExprResult_8 = _ExprResult_8;
	Parms._ExprResultStack_9 = _ExprResultStack_9;
	Parms._ExprResultStack_10 = _ExprResultStack_10;
	Parms._ExprResult_11 = _ExprResult_11;
	Parms._ExprResult_12 = _ExprResult_12;
	Parms.__verse_0x00000000__5 = __verse_0x00000000__5;
	Parms._ExprResult_13 = _ExprResult_13;
	Parms._ExprResultStack_14 = _ExprResultStack_14;
	Parms._ExprResultStack_15 = _ExprResultStack_15;
	Parms._ExprResult_16 = _ExprResult_16;
	Parms._ExprResult_17 = _ExprResult_17;
	Parms.__verse_0x00000000__7 = __verse_0x00000000__7;
	Parms._ExprResult_18 = _ExprResult_18;
	Parms._ExprResultStack_19 = _ExprResultStack_19;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseFortnite.Game.Game_healing_result$Factory
// (Static, HasOutParams, HasDefaults)
// Parameters:
// struct FGame_healing_result        RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor)
// FOptionalProperty_                 _ExprResult_0                                                    (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0x00000000__1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_1                                                    (NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_2                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_3                                                    (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0x00000000__3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_4                                                    (NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_5                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_6                                                    (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0x00000000__5                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_7                                                    (NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_8                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_9                                                    (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0x00000000__7                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_10                                                   (NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_11                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FGame_healing_result UGame::Game_healing_result_Factory(FOptionalProperty_ _ExprResult_0, FOptionalProperty_ __verse_0x00000000__1, uint8 _ExprResult_1, FOptionalProperty_ _ExprResultStack_2, FOptionalProperty_ _ExprResult_3, FOptionalProperty_ __verse_0x00000000__3, uint8 _ExprResult_4, FOptionalProperty_ _ExprResultStack_5, FOptionalProperty_ _ExprResult_6, FOptionalProperty_ __verse_0x00000000__5, uint8 _ExprResult_7, FOptionalProperty_ _ExprResultStack_8, FOptionalProperty_ _ExprResult_9, FOptionalProperty_ __verse_0x00000000__7, uint8 _ExprResult_10, FOptionalProperty_ _ExprResultStack_11)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game", "Game_healing_result$Factory");

	Params::UGame_Game_healing_result_Factory_Params Parms{};

	Parms._ExprResult_0 = _ExprResult_0;
	Parms.__verse_0x00000000__1 = __verse_0x00000000__1;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._ExprResultStack_2 = _ExprResultStack_2;
	Parms._ExprResult_3 = _ExprResult_3;
	Parms.__verse_0x00000000__3 = __verse_0x00000000__3;
	Parms._ExprResult_4 = _ExprResult_4;
	Parms._ExprResultStack_5 = _ExprResultStack_5;
	Parms._ExprResult_6 = _ExprResult_6;
	Parms.__verse_0x00000000__5 = __verse_0x00000000__5;
	Parms._ExprResult_7 = _ExprResult_7;
	Parms._ExprResultStack_8 = _ExprResultStack_8;
	Parms._ExprResult_9 = _ExprResult_9;
	Parms.__verse_0x00000000__7 = __verse_0x00000000__7;
	Parms._ExprResult_10 = _ExprResult_10;
	Parms._ExprResultStack_11 = _ExprResultStack_11;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseFortnite.Game.Game_healing_args$OverrideFactory
// (Static, HasOutParams, HasDefaults)
// Parameters:
// struct FGame_healing_args          RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor)
// TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap                              (ConstParm, Parm, ContainsInstancedReference)
// FVerseStringProperty_              _ExprResultStack_0                                               (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_1                                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_2                                                    (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0x00000000__1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_3                                                    (NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_4                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_5                                               (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_6                                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_7                                                    (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0x00000000__3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_8                                                    (NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_9                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_10                                              (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_11                                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_12                                                   (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0x00000000__5                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_13                                                   (NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_14                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_15                                              (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_16                                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_17                                                   (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0x00000000__7                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_18                                                   (NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_19                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FGame_healing_args UGame::Game_healing_args_OverrideFactory(TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap, FVerseStringProperty_ _ExprResultStack_0, FOptionalProperty_ _ExprResult_1, FOptionalProperty_ _ExprResult_2, FOptionalProperty_ __verse_0x00000000__1, uint8 _ExprResult_3, FOptionalProperty_ _ExprResultStack_4, FVerseStringProperty_ _ExprResultStack_5, FOptionalProperty_ _ExprResult_6, FOptionalProperty_ _ExprResult_7, FOptionalProperty_ __verse_0x00000000__3, uint8 _ExprResult_8, FOptionalProperty_ _ExprResultStack_9, FVerseStringProperty_ _ExprResultStack_10, FOptionalProperty_ _ExprResult_11, FOptionalProperty_ _ExprResult_12, FOptionalProperty_ __verse_0x00000000__5, uint8 _ExprResult_13, FOptionalProperty_ _ExprResultStack_14, FVerseStringProperty_ _ExprResultStack_15, FOptionalProperty_ _ExprResult_16, FOptionalProperty_ _ExprResult_17, FOptionalProperty_ __verse_0x00000000__7, uint8 _ExprResult_18, FOptionalProperty_ _ExprResultStack_19)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game", "Game_healing_args$OverrideFactory");

	Params::UGame_Game_healing_args_OverrideFactory_Params Parms{};

	Parms.__verse_0xFB48ED96__InitOverrideMap = __verse_0xFB48ED96__InitOverrideMap;
	Parms._ExprResultStack_0 = _ExprResultStack_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms.__verse_0x00000000__1 = __verse_0x00000000__1;
	Parms._ExprResult_3 = _ExprResult_3;
	Parms._ExprResultStack_4 = _ExprResultStack_4;
	Parms._ExprResultStack_5 = _ExprResultStack_5;
	Parms._ExprResult_6 = _ExprResult_6;
	Parms._ExprResult_7 = _ExprResult_7;
	Parms.__verse_0x00000000__3 = __verse_0x00000000__3;
	Parms._ExprResult_8 = _ExprResult_8;
	Parms._ExprResultStack_9 = _ExprResultStack_9;
	Parms._ExprResultStack_10 = _ExprResultStack_10;
	Parms._ExprResult_11 = _ExprResult_11;
	Parms._ExprResult_12 = _ExprResult_12;
	Parms.__verse_0x00000000__5 = __verse_0x00000000__5;
	Parms._ExprResult_13 = _ExprResult_13;
	Parms._ExprResultStack_14 = _ExprResultStack_14;
	Parms._ExprResultStack_15 = _ExprResultStack_15;
	Parms._ExprResult_16 = _ExprResult_16;
	Parms._ExprResult_17 = _ExprResult_17;
	Parms.__verse_0x00000000__7 = __verse_0x00000000__7;
	Parms._ExprResult_18 = _ExprResult_18;
	Parms._ExprResultStack_19 = _ExprResultStack_19;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseFortnite.Game.Game_healing_args$Factory
// (Static, HasOutParams, HasDefaults)
// Parameters:
// struct FGame_healing_args          RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor)
// FOptionalProperty_                 _ExprResult_0                                                    (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0x00000000__1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_1                                                    (NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_2                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_3                                                    (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0x00000000__3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_4                                                    (NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_5                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_6                                                    (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0x00000000__5                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_7                                                    (NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_8                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_9                                                    (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0x00000000__7                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_10                                                   (NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_11                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FGame_healing_args UGame::Game_healing_args_Factory(FOptionalProperty_ _ExprResult_0, FOptionalProperty_ __verse_0x00000000__1, uint8 _ExprResult_1, FOptionalProperty_ _ExprResultStack_2, FOptionalProperty_ _ExprResult_3, FOptionalProperty_ __verse_0x00000000__3, uint8 _ExprResult_4, FOptionalProperty_ _ExprResultStack_5, FOptionalProperty_ _ExprResult_6, FOptionalProperty_ __verse_0x00000000__5, uint8 _ExprResult_7, FOptionalProperty_ _ExprResultStack_8, FOptionalProperty_ _ExprResult_9, FOptionalProperty_ __verse_0x00000000__7, uint8 _ExprResult_10, FOptionalProperty_ _ExprResultStack_11)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game", "Game_healing_args$Factory");

	Params::UGame_Game_healing_args_Factory_Params Parms{};

	Parms._ExprResult_0 = _ExprResult_0;
	Parms.__verse_0x00000000__1 = __verse_0x00000000__1;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._ExprResultStack_2 = _ExprResultStack_2;
	Parms._ExprResult_3 = _ExprResult_3;
	Parms.__verse_0x00000000__3 = __verse_0x00000000__3;
	Parms._ExprResult_4 = _ExprResult_4;
	Parms._ExprResultStack_5 = _ExprResultStack_5;
	Parms._ExprResult_6 = _ExprResult_6;
	Parms.__verse_0x00000000__5 = __verse_0x00000000__5;
	Parms._ExprResult_7 = _ExprResult_7;
	Parms._ExprResultStack_8 = _ExprResultStack_8;
	Parms._ExprResult_9 = _ExprResult_9;
	Parms.__verse_0x00000000__7 = __verse_0x00000000__7;
	Parms._ExprResult_10 = _ExprResult_10;
	Parms._ExprResultStack_11 = _ExprResultStack_11;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseFortnite.Game.Game_damage_result$OverrideFactory
// (Static, HasOutParams, HasDefaults)
// Parameters:
// struct FGame_damage_result         RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor)
// TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap                              (ConstParm, Parm, ContainsInstancedReference)
// FVerseStringProperty_              _ExprResultStack_0                                               (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_1                                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_2                                                    (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0x00000000__1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_3                                                    (NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_4                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_5                                               (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_6                                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_7                                                    (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0x00000000__3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_8                                                    (NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_9                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_10                                              (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_11                                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_12                                                   (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0x00000000__5                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_13                                                   (NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_14                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_15                                              (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_16                                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_17                                                   (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0x00000000__7                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_18                                                   (NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_19                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FGame_damage_result UGame::Game_damage_result_OverrideFactory(TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap, FVerseStringProperty_ _ExprResultStack_0, FOptionalProperty_ _ExprResult_1, FOptionalProperty_ _ExprResult_2, FOptionalProperty_ __verse_0x00000000__1, uint8 _ExprResult_3, FOptionalProperty_ _ExprResultStack_4, FVerseStringProperty_ _ExprResultStack_5, FOptionalProperty_ _ExprResult_6, FOptionalProperty_ _ExprResult_7, FOptionalProperty_ __verse_0x00000000__3, uint8 _ExprResult_8, FOptionalProperty_ _ExprResultStack_9, FVerseStringProperty_ _ExprResultStack_10, FOptionalProperty_ _ExprResult_11, FOptionalProperty_ _ExprResult_12, FOptionalProperty_ __verse_0x00000000__5, uint8 _ExprResult_13, FOptionalProperty_ _ExprResultStack_14, FVerseStringProperty_ _ExprResultStack_15, FOptionalProperty_ _ExprResult_16, FOptionalProperty_ _ExprResult_17, FOptionalProperty_ __verse_0x00000000__7, uint8 _ExprResult_18, FOptionalProperty_ _ExprResultStack_19)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game", "Game_damage_result$OverrideFactory");

	Params::UGame_Game_damage_result_OverrideFactory_Params Parms{};

	Parms.__verse_0xFB48ED96__InitOverrideMap = __verse_0xFB48ED96__InitOverrideMap;
	Parms._ExprResultStack_0 = _ExprResultStack_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms.__verse_0x00000000__1 = __verse_0x00000000__1;
	Parms._ExprResult_3 = _ExprResult_3;
	Parms._ExprResultStack_4 = _ExprResultStack_4;
	Parms._ExprResultStack_5 = _ExprResultStack_5;
	Parms._ExprResult_6 = _ExprResult_6;
	Parms._ExprResult_7 = _ExprResult_7;
	Parms.__verse_0x00000000__3 = __verse_0x00000000__3;
	Parms._ExprResult_8 = _ExprResult_8;
	Parms._ExprResultStack_9 = _ExprResultStack_9;
	Parms._ExprResultStack_10 = _ExprResultStack_10;
	Parms._ExprResult_11 = _ExprResult_11;
	Parms._ExprResult_12 = _ExprResult_12;
	Parms.__verse_0x00000000__5 = __verse_0x00000000__5;
	Parms._ExprResult_13 = _ExprResult_13;
	Parms._ExprResultStack_14 = _ExprResultStack_14;
	Parms._ExprResultStack_15 = _ExprResultStack_15;
	Parms._ExprResult_16 = _ExprResult_16;
	Parms._ExprResult_17 = _ExprResult_17;
	Parms.__verse_0x00000000__7 = __verse_0x00000000__7;
	Parms._ExprResult_18 = _ExprResult_18;
	Parms._ExprResultStack_19 = _ExprResultStack_19;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseFortnite.Game.Game_damage_result$Factory
// (Static, HasOutParams, HasDefaults)
// Parameters:
// struct FGame_damage_result         RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor)
// FOptionalProperty_                 _ExprResult_0                                                    (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0x00000000__1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_1                                                    (NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_2                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_3                                                    (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0x00000000__3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_4                                                    (NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_5                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_6                                                    (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0x00000000__5                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_7                                                    (NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_8                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_9                                                    (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0x00000000__7                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_10                                                   (NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_11                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FGame_damage_result UGame::Game_damage_result_Factory(FOptionalProperty_ _ExprResult_0, FOptionalProperty_ __verse_0x00000000__1, uint8 _ExprResult_1, FOptionalProperty_ _ExprResultStack_2, FOptionalProperty_ _ExprResult_3, FOptionalProperty_ __verse_0x00000000__3, uint8 _ExprResult_4, FOptionalProperty_ _ExprResultStack_5, FOptionalProperty_ _ExprResult_6, FOptionalProperty_ __verse_0x00000000__5, uint8 _ExprResult_7, FOptionalProperty_ _ExprResultStack_8, FOptionalProperty_ _ExprResult_9, FOptionalProperty_ __verse_0x00000000__7, uint8 _ExprResult_10, FOptionalProperty_ _ExprResultStack_11)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game", "Game_damage_result$Factory");

	Params::UGame_Game_damage_result_Factory_Params Parms{};

	Parms._ExprResult_0 = _ExprResult_0;
	Parms.__verse_0x00000000__1 = __verse_0x00000000__1;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._ExprResultStack_2 = _ExprResultStack_2;
	Parms._ExprResult_3 = _ExprResult_3;
	Parms.__verse_0x00000000__3 = __verse_0x00000000__3;
	Parms._ExprResult_4 = _ExprResult_4;
	Parms._ExprResultStack_5 = _ExprResultStack_5;
	Parms._ExprResult_6 = _ExprResult_6;
	Parms.__verse_0x00000000__5 = __verse_0x00000000__5;
	Parms._ExprResult_7 = _ExprResult_7;
	Parms._ExprResultStack_8 = _ExprResultStack_8;
	Parms._ExprResult_9 = _ExprResult_9;
	Parms.__verse_0x00000000__7 = __verse_0x00000000__7;
	Parms._ExprResult_10 = _ExprResult_10;
	Parms._ExprResultStack_11 = _ExprResultStack_11;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseFortnite.Game.Game_damage_args$OverrideFactory
// (Static, HasOutParams, HasDefaults)
// Parameters:
// struct FGame_damage_args           RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor)
// TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap                              (ConstParm, Parm, ContainsInstancedReference)
// FVerseStringProperty_              _ExprResultStack_0                                               (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_1                                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_2                                                    (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0x00000000__1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_3                                                    (NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_4                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_5                                               (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_6                                                    (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_7                                                    (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0x00000000__3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_8                                                    (NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_9                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_10                                              (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_11                                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_12                                                   (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0x00000000__5                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_13                                                   (NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_14                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResultStack_15                                              (HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_16                                                   (ZeroConstructor, NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_17                                                   (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0x00000000__7                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_18                                                   (NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_19                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FGame_damage_args UGame::Game_damage_args_OverrideFactory(TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap, FVerseStringProperty_ _ExprResultStack_0, FOptionalProperty_ _ExprResult_1, FOptionalProperty_ _ExprResult_2, FOptionalProperty_ __verse_0x00000000__1, uint8 _ExprResult_3, FOptionalProperty_ _ExprResultStack_4, FVerseStringProperty_ _ExprResultStack_5, FOptionalProperty_ _ExprResult_6, FOptionalProperty_ _ExprResult_7, FOptionalProperty_ __verse_0x00000000__3, uint8 _ExprResult_8, FOptionalProperty_ _ExprResultStack_9, FVerseStringProperty_ _ExprResultStack_10, FOptionalProperty_ _ExprResult_11, FOptionalProperty_ _ExprResult_12, FOptionalProperty_ __verse_0x00000000__5, uint8 _ExprResult_13, FOptionalProperty_ _ExprResultStack_14, FVerseStringProperty_ _ExprResultStack_15, FOptionalProperty_ _ExprResult_16, FOptionalProperty_ _ExprResult_17, FOptionalProperty_ __verse_0x00000000__7, uint8 _ExprResult_18, FOptionalProperty_ _ExprResultStack_19)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game", "Game_damage_args$OverrideFactory");

	Params::UGame_Game_damage_args_OverrideFactory_Params Parms{};

	Parms.__verse_0xFB48ED96__InitOverrideMap = __verse_0xFB48ED96__InitOverrideMap;
	Parms._ExprResultStack_0 = _ExprResultStack_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms.__verse_0x00000000__1 = __verse_0x00000000__1;
	Parms._ExprResult_3 = _ExprResult_3;
	Parms._ExprResultStack_4 = _ExprResultStack_4;
	Parms._ExprResultStack_5 = _ExprResultStack_5;
	Parms._ExprResult_6 = _ExprResult_6;
	Parms._ExprResult_7 = _ExprResult_7;
	Parms.__verse_0x00000000__3 = __verse_0x00000000__3;
	Parms._ExprResult_8 = _ExprResult_8;
	Parms._ExprResultStack_9 = _ExprResultStack_9;
	Parms._ExprResultStack_10 = _ExprResultStack_10;
	Parms._ExprResult_11 = _ExprResult_11;
	Parms._ExprResult_12 = _ExprResult_12;
	Parms.__verse_0x00000000__5 = __verse_0x00000000__5;
	Parms._ExprResult_13 = _ExprResult_13;
	Parms._ExprResultStack_14 = _ExprResultStack_14;
	Parms._ExprResultStack_15 = _ExprResultStack_15;
	Parms._ExprResult_16 = _ExprResult_16;
	Parms._ExprResult_17 = _ExprResult_17;
	Parms.__verse_0x00000000__7 = __verse_0x00000000__7;
	Parms._ExprResult_18 = _ExprResult_18;
	Parms._ExprResultStack_19 = _ExprResultStack_19;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseFortnite.Game.Game_damage_args$Factory
// (Static, HasOutParams, HasDefaults)
// Parameters:
// struct FGame_damage_args           RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor)
// FOptionalProperty_                 _ExprResult_0                                                    (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0x00000000__1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_1                                                    (NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_2                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_3                                                    (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0x00000000__3                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_4                                                    (NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_5                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_6                                                    (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0x00000000__5                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_7                                                    (NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_8                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_9                                                    (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0x00000000__7                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_10                                                   (NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_11                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

struct FGame_damage_args UGame::Game_damage_args_Factory(FOptionalProperty_ _ExprResult_0, FOptionalProperty_ __verse_0x00000000__1, uint8 _ExprResult_1, FOptionalProperty_ _ExprResultStack_2, FOptionalProperty_ _ExprResult_3, FOptionalProperty_ __verse_0x00000000__3, uint8 _ExprResult_4, FOptionalProperty_ _ExprResultStack_5, FOptionalProperty_ _ExprResult_6, FOptionalProperty_ __verse_0x00000000__5, uint8 _ExprResult_7, FOptionalProperty_ _ExprResultStack_8, FOptionalProperty_ _ExprResult_9, FOptionalProperty_ __verse_0x00000000__7, uint8 _ExprResult_10, FOptionalProperty_ _ExprResultStack_11)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game", "Game_damage_args$Factory");

	Params::UGame_Game_damage_args_Factory_Params Parms{};

	Parms._ExprResult_0 = _ExprResult_0;
	Parms.__verse_0x00000000__1 = __verse_0x00000000__1;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._ExprResultStack_2 = _ExprResultStack_2;
	Parms._ExprResult_3 = _ExprResult_3;
	Parms.__verse_0x00000000__3 = __verse_0x00000000__3;
	Parms._ExprResult_4 = _ExprResult_4;
	Parms._ExprResultStack_5 = _ExprResultStack_5;
	Parms._ExprResult_6 = _ExprResult_6;
	Parms.__verse_0x00000000__5 = __verse_0x00000000__5;
	Parms._ExprResult_7 = _ExprResult_7;
	Parms._ExprResultStack_8 = _ExprResultStack_8;
	Parms._ExprResult_9 = _ExprResult_9;
	Parms.__verse_0x00000000__7 = __verse_0x00000000__7;
	Parms._ExprResult_10 = _ExprResult_10;
	Parms._ExprResultStack_11 = _ExprResultStack_11;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseFortnite.Game.Game_elimination_result$OverrideFactory
// (Static, HasOutParams)
// Parameters:
// struct FGame_elimination_result    RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor)
// TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap                              (ConstParm, Parm, ContainsInstancedReference)

struct FGame_elimination_result UGame::Game_elimination_result_OverrideFactory(TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game", "Game_elimination_result$OverrideFactory");

	Params::UGame_Game_elimination_result_OverrideFactory_Params Parms{};

	Parms.__verse_0xFB48ED96__InitOverrideMap = __verse_0xFB48ED96__InitOverrideMap;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseFortnite.Game.Game_elimination_result$Factory
// (Static, HasOutParams)
// Parameters:
// struct FGame_elimination_result    RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor)

struct FGame_elimination_result UGame::Game_elimination_result_Factory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game", "Game_elimination_result$Factory");

	Params::UGame_Game_elimination_result_Factory_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseFortnite.Game.$InitCDO
// (None)
// Parameters:

void UGame::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game", "$InitCDO");

	Params::UGame__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortnite.Game_agent_instigator_impl
// (None)

class UClass* UGame_agent_instigator_impl::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Game_agent_instigator_impl");

	return Clss;
}


// Game_agent_instigator_impl VerseFortnite.Default__Game_agent_instigator_impl
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGame_agent_instigator_impl* UGame_agent_instigator_impl::GetDefaultObj()
{
	static class UGame_agent_instigator_impl* Default = nullptr;

	if (!Default)
		Default = static_cast<UGame_agent_instigator_impl*>(UGame_agent_instigator_impl::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortnite.Game_agent_instigator_impl.$InitInstance
// (None)
// Parameters:

void UGame_agent_instigator_impl::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_agent_instigator_impl", "$InitInstance");

	Params::UGame_agent_instigator_impl__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortnite.Game_agent_instigator_impl.$Block
// (None)
// Parameters:

void UGame_agent_instigator_impl::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_agent_instigator_impl", "$Block");

	Params::UGame_agent_instigator_impl__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortnite.Game_agent_instigator_impl.$InitCDO
// (None)
// Parameters:

void UGame_agent_instigator_impl::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_agent_instigator_impl", "$InitCDO");

	Params::UGame_agent_instigator_impl__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortnite.Game_damageable
// (None)

class UClass* UGame_damageable::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Game_damageable");

	return Clss;
}


// Game_damageable VerseFortnite.Default__Game_damageable
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGame_damageable* UGame_damageable::GetDefaultObj()
{
	static class UGame_damageable* Default = nullptr;

	if (!Default)
		Default = static_cast<UGame_damageable*>(UGame_damageable::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortnite.Game_damageable._L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamagedEvent
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UObject*                     RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UObject* UGame_damageable::_L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamagedEvent(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_damageable", "_L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamagedEvent");

	Params::UGame_damageable__L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamagedEvent_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseFortnite.Game_damageable._L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamage_L_Nfloat_R
// (Public, BlueprintCallable)
// Parameters:
// double                             __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGame_damageable::_L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamage_L_Nfloat_R(double __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_damageable", "_L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamage_L_Nfloat_R");

	Params::UGame_damageable__L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamage_L_Nfloat_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortnite.Game_damageable._L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamage_L_Ndamage__args_R
// (Public, BlueprintCallable)
// Parameters:
// struct FGame_damage_args           __verse_0xB2CDDD72_Argument                                      (Parm, NoDestructor)

void UGame_damageable::_L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamage_L_Ndamage__args_R(const struct FGame_damage_args& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_damageable", "_L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamage_L_Ndamage__args_R");

	Params::UGame_damageable__L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamage_L_Ndamage__args_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortnite.Game_game_action_causer
// (None)

class UClass* UGame_game_action_causer::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Game_game_action_causer");

	return Clss;
}


// Game_game_action_causer VerseFortnite.Default__Game_game_action_causer
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGame_game_action_causer* UGame_game_action_causer::GetDefaultObj()
{
	static class UGame_game_action_causer* Default = nullptr;

	if (!Default)
		Default = static_cast<UGame_game_action_causer*>(UGame_game_action_causer::StaticClass()->DefaultObject);

	return Default;
}


// VerseClass VerseFortnite.Game_game_action_instigator
// (None)

class UClass* UGame_game_action_instigator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Game_game_action_instigator");

	return Clss;
}


// Game_game_action_instigator VerseFortnite.Default__Game_game_action_instigator
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGame_game_action_instigator* UGame_game_action_instigator::GetDefaultObj()
{
	static class UGame_game_action_instigator* Default = nullptr;

	if (!Default)
		Default = static_cast<UGame_game_action_instigator*>(UGame_game_action_instigator::StaticClass()->DefaultObject);

	return Default;
}


// VerseClass VerseFortnite.Game_healable
// (None)

class UClass* UGame_healable::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Game_healable");

	return Clss;
}


// Game_healable VerseFortnite.Default__Game_healable
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGame_healable* UGame_healable::GetDefaultObj()
{
	static class UGame_healable* Default = nullptr;

	if (!Default)
		Default = static_cast<UGame_healable*>(UGame_healable::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortnite.Game_healable._L_2fFortnite_2ecom_2fGame_2fhealable_N_RHealedEvent
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UObject*                     RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UObject* UGame_healable::_L_2fFortnite_2ecom_2fGame_2fhealable_N_RHealedEvent(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_healable", "_L_2fFortnite_2ecom_2fGame_2fhealable_N_RHealedEvent");

	Params::UGame_healable__L_2fFortnite_2ecom_2fGame_2fhealable_N_RHealedEvent_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseFortnite.Game_healable._L_2fFortnite_2ecom_2fGame_2fhealable_N_RHeal_L_Nfloat_R
// (Public, BlueprintCallable)
// Parameters:
// double                             __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGame_healable::_L_2fFortnite_2ecom_2fGame_2fhealable_N_RHeal_L_Nfloat_R(double __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_healable", "_L_2fFortnite_2ecom_2fGame_2fhealable_N_RHeal_L_Nfloat_R");

	Params::UGame_healable__L_2fFortnite_2ecom_2fGame_2fhealable_N_RHeal_L_Nfloat_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortnite.Game_healable._L_2fFortnite_2ecom_2fGame_2fhealable_N_RHeal_L_Nhealing__args_R
// (Public, BlueprintCallable)
// Parameters:
// struct FGame_healing_args          __verse_0xB2CDDD72_Argument                                      (Parm, NoDestructor)

void UGame_healable::_L_2fFortnite_2ecom_2fGame_2fhealable_N_RHeal_L_Nhealing__args_R(const struct FGame_healing_args& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_healable", "_L_2fFortnite_2ecom_2fGame_2fhealable_N_RHeal_L_Nhealing__args_R");

	Params::UGame_healable__L_2fFortnite_2ecom_2fGame_2fhealable_N_RHeal_L_Nhealing__args_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortnite.Game_healthful
// (None)

class UClass* UGame_healthful::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Game_healthful");

	return Clss;
}


// Game_healthful VerseFortnite.Default__Game_healthful
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGame_healthful* UGame_healthful::GetDefaultObj()
{
	static class UGame_healthful* Default = nullptr;

	if (!Default)
		Default = static_cast<UGame_healthful*>(UGame_healthful::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortnite.Game_healthful._L_2fFortnite_2ecom_2fGame_2fhealthful_N_RSetMaxHealth_L_Nfloat_R
// (Public, BlueprintCallable)
// Parameters:
// double                             __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGame_healthful::_L_2fFortnite_2ecom_2fGame_2fhealthful_N_RSetMaxHealth_L_Nfloat_R(double __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_healthful", "_L_2fFortnite_2ecom_2fGame_2fhealthful_N_RSetMaxHealth_L_Nfloat_R");

	Params::UGame_healthful__L_2fFortnite_2ecom_2fGame_2fhealthful_N_RSetMaxHealth_L_Nfloat_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortnite.Game_healthful._L_2fFortnite_2ecom_2fGame_2fhealthful_N_RSetHealth_L_Nfloat_R
// (Public, BlueprintCallable)
// Parameters:
// double                             __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGame_healthful::_L_2fFortnite_2ecom_2fGame_2fhealthful_N_RSetHealth_L_Nfloat_R(double __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_healthful", "_L_2fFortnite_2ecom_2fGame_2fhealthful_N_RSetHealth_L_Nfloat_R");

	Params::UGame_healthful__L_2fFortnite_2ecom_2fGame_2fhealthful_N_RSetHealth_L_Nfloat_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortnite.Game_healthful._L_2fFortnite_2ecom_2fGame_2fhealthful_N_RGetMaxHealth
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// double                             RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double UGame_healthful::_L_2fFortnite_2ecom_2fGame_2fhealthful_N_RGetMaxHealth(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_healthful", "_L_2fFortnite_2ecom_2fGame_2fhealthful_N_RGetMaxHealth");

	Params::UGame_healthful__L_2fFortnite_2ecom_2fGame_2fhealthful_N_RGetMaxHealth_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseFortnite.Game_healthful._L_2fFortnite_2ecom_2fGame_2fhealthful_N_RGetHealth
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// double                             RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double UGame_healthful::_L_2fFortnite_2ecom_2fGame_2fhealthful_N_RGetHealth(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_healthful", "_L_2fFortnite_2ecom_2fGame_2fhealthful_N_RGetHealth");

	Params::UGame_healthful__L_2fFortnite_2ecom_2fGame_2fhealthful_N_RGetHealth_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass VerseFortnite.Game_positional
// (None)

class UClass* UGame_positional::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Game_positional");

	return Clss;
}


// Game_positional VerseFortnite.Default__Game_positional
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGame_positional* UGame_positional::GetDefaultObj()
{
	static class UGame_positional* Default = nullptr;

	if (!Default)
		Default = static_cast<UGame_positional*>(UGame_positional::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortnite.Game_positional._L_2fFortnite_2ecom_2fGame_2fpositional_N_RGetTransform
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FSpatialMath_transform      RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor)

struct FSpatialMath_transform UGame_positional::_L_2fFortnite_2ecom_2fGame_2fpositional_N_RGetTransform(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_positional", "_L_2fFortnite_2ecom_2fGame_2fpositional_N_RGetTransform");

	Params::UGame_positional__L_2fFortnite_2ecom_2fGame_2fpositional_N_RGetTransform_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass VerseFortnite.Game_shieldable
// (None)

class UClass* UGame_shieldable::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Game_shieldable");

	return Clss;
}


// Game_shieldable VerseFortnite.Default__Game_shieldable
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGame_shieldable* UGame_shieldable::GetDefaultObj()
{
	static class UGame_shieldable* Default = nullptr;

	if (!Default)
		Default = static_cast<UGame_shieldable*>(UGame_shieldable::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortnite.Game_shieldable._L_2fFortnite_2ecom_2fGame_2fshieldable_N_RSetShield_L_Nfloat_R
// (Public, BlueprintCallable)
// Parameters:
// double                             __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGame_shieldable::_L_2fFortnite_2ecom_2fGame_2fshieldable_N_RSetShield_L_Nfloat_R(double __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_shieldable", "_L_2fFortnite_2ecom_2fGame_2fshieldable_N_RSetShield_L_Nfloat_R");

	Params::UGame_shieldable__L_2fFortnite_2ecom_2fGame_2fshieldable_N_RSetShield_L_Nfloat_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortnite.Game_shieldable._L_2fFortnite_2ecom_2fGame_2fshieldable_N_RSetMaxShield_L_Nfloat_R
// (Public, BlueprintCallable)
// Parameters:
// double                             __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGame_shieldable::_L_2fFortnite_2ecom_2fGame_2fshieldable_N_RSetMaxShield_L_Nfloat_R(double __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_shieldable", "_L_2fFortnite_2ecom_2fGame_2fshieldable_N_RSetMaxShield_L_Nfloat_R");

	Params::UGame_shieldable__L_2fFortnite_2ecom_2fGame_2fshieldable_N_RSetMaxShield_L_Nfloat_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortnite.Game_shieldable._L_2fFortnite_2ecom_2fGame_2fshieldable_N_RHealedShieldEvent
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UObject*                     RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UObject* UGame_shieldable::_L_2fFortnite_2ecom_2fGame_2fshieldable_N_RHealedShieldEvent(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_shieldable", "_L_2fFortnite_2ecom_2fGame_2fshieldable_N_RHealedShieldEvent");

	Params::UGame_shieldable__L_2fFortnite_2ecom_2fGame_2fshieldable_N_RHealedShieldEvent_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseFortnite.Game_shieldable._L_2fFortnite_2ecom_2fGame_2fshieldable_N_RGetShield
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// double                             RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double UGame_shieldable::_L_2fFortnite_2ecom_2fGame_2fshieldable_N_RGetShield(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_shieldable", "_L_2fFortnite_2ecom_2fGame_2fshieldable_N_RGetShield");

	Params::UGame_shieldable__L_2fFortnite_2ecom_2fGame_2fshieldable_N_RGetShield_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseFortnite.Game_shieldable._L_2fFortnite_2ecom_2fGame_2fshieldable_N_RGetMaxShield
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// double                             RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double UGame_shieldable::_L_2fFortnite_2ecom_2fGame_2fshieldable_N_RGetMaxShield(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_shieldable", "_L_2fFortnite_2ecom_2fGame_2fshieldable_N_RGetMaxShield");

	Params::UGame_shieldable__L_2fFortnite_2ecom_2fGame_2fshieldable_N_RGetMaxShield_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseFortnite.Game_shieldable._L_2fFortnite_2ecom_2fGame_2fshieldable_N_RDamagedShieldEvent
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UObject*                     RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UObject* UGame_shieldable::_L_2fFortnite_2ecom_2fGame_2fshieldable_N_RDamagedShieldEvent(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_shieldable", "_L_2fFortnite_2ecom_2fGame_2fshieldable_N_RDamagedShieldEvent");

	Params::UGame_shieldable__L_2fFortnite_2ecom_2fGame_2fshieldable_N_RDamagedShieldEvent_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass VerseFortnite.Playspaces_fort_playspace
// (None)

class UClass* UPlayspaces_fort_playspace::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Playspaces_fort_playspace");

	return Clss;
}


// Playspaces_fort_playspace VerseFortnite.Default__Playspaces_fort_playspace
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPlayspaces_fort_playspace* UPlayspaces_fort_playspace::GetDefaultObj()
{
	static class UPlayspaces_fort_playspace* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayspaces_fort_playspace*>(UPlayspaces_fort_playspace::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortnite.Playspaces_fort_playspace._L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RPlayerRemovedEvent
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UObject*                     RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UObject* UPlayspaces_fort_playspace::_L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RPlayerRemovedEvent(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Playspaces_fort_playspace", "_L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RPlayerRemovedEvent");

	Params::UPlayspaces_fort_playspace__L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RPlayerRemovedEvent_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseFortnite.Playspaces_fort_playspace._L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RPlayerAddedEvent
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UObject*                     RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UObject* UPlayspaces_fort_playspace::_L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RPlayerAddedEvent(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Playspaces_fort_playspace", "_L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RPlayerAddedEvent");

	Params::UPlayspaces_fort_playspace__L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RPlayerAddedEvent_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseFortnite.Playspaces_fort_playspace._L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RGetTeamCollection
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UObject*                     RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UObject* UPlayspaces_fort_playspace::_L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RGetTeamCollection(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Playspaces_fort_playspace", "_L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RGetTeamCollection");

	Params::UPlayspaces_fort_playspace__L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RGetTeamCollection_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseFortnite.Playspaces_fort_playspace._L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RGetPlayers
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// TArray<class USimulation_player*>  RetVal                                                           (Parm, OutParm, ReturnParm, ContainsInstancedReference)

TArray<class USimulation_player*> UPlayspaces_fort_playspace::_L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RGetPlayers(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Playspaces_fort_playspace", "_L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RGetPlayers");

	Params::UPlayspaces_fort_playspace__L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RGetPlayers_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass VerseFortnite.Playspaces_fort_playspace_impl
// (None)

class UClass* UPlayspaces_fort_playspace_impl::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Playspaces_fort_playspace_impl");

	return Clss;
}


// Playspaces_fort_playspace_impl VerseFortnite.Default__Playspaces_fort_playspace_impl
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UPlayspaces_fort_playspace_impl* UPlayspaces_fort_playspace_impl::GetDefaultObj()
{
	static class UPlayspaces_fort_playspace_impl* Default = nullptr;

	if (!Default)
		Default = static_cast<UPlayspaces_fort_playspace_impl*>(UPlayspaces_fort_playspace_impl::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortnite.Playspaces_fort_playspace_impl._L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RPlayerRemovedEvent
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UObject*                     RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UObject* UPlayspaces_fort_playspace_impl::_L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RPlayerRemovedEvent(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Playspaces_fort_playspace_impl", "_L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RPlayerRemovedEvent");

	Params::UPlayspaces_fort_playspace_impl__L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RPlayerRemovedEvent_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseFortnite.Playspaces_fort_playspace_impl._L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RPlayerAddedEvent
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UObject*                     RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UObject* UPlayspaces_fort_playspace_impl::_L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RPlayerAddedEvent(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Playspaces_fort_playspace_impl", "_L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RPlayerAddedEvent");

	Params::UPlayspaces_fort_playspace_impl__L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RPlayerAddedEvent_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseFortnite.Playspaces_fort_playspace_impl._L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RGetTeamCollection
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UObject*                     RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UObject* UPlayspaces_fort_playspace_impl::_L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RGetTeamCollection(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Playspaces_fort_playspace_impl", "_L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RGetTeamCollection");

	Params::UPlayspaces_fort_playspace_impl__L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RGetTeamCollection_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortnite.Playspaces_fort_playspace_impl._L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RGetPlayers
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// TArray<class USimulation_player*>  RetVal                                                           (Parm, OutParm, ReturnParm, ContainsInstancedReference)

TArray<class USimulation_player*> UPlayspaces_fort_playspace_impl::_L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RGetPlayers(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Playspaces_fort_playspace_impl", "_L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RGetPlayers");

	Params::UPlayspaces_fort_playspace_impl__L_2fFortnite_2ecom_2fPlayspaces_2ffort__playspace_N_RGetPlayers_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortnite.Playspaces_fort_playspace_impl.$InitInstance
// (None)
// Parameters:

void UPlayspaces_fort_playspace_impl::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Playspaces_fort_playspace_impl", "$InitInstance");

	Params::UPlayspaces_fort_playspace_impl__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortnite.Playspaces_fort_playspace_impl.$Block
// (None)
// Parameters:

void UPlayspaces_fort_playspace_impl::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Playspaces_fort_playspace_impl", "$Block");

	Params::UPlayspaces_fort_playspace_impl__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortnite.Playspaces_fort_playspace_impl.$InitCDO
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

void UPlayspaces_fort_playspace_impl::_InitCDO(class UVerseEngine_subscribable_event* _ExprResult_0, uint64 _InstancingGraph_1, class UVerseEngine_subscribable_event* _ExprResult_2, uint64 _InstancingGraph_3, class UVerseEngine_subscribable_event* _ExprResult_4, uint64 _InstancingGraph_5, class UVerseEngine_subscribable_event* _ExprResult_6, uint64 _InstancingGraph_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Playspaces_fort_playspace_impl", "$InitCDO");

	Params::UPlayspaces_fort_playspace_impl__InitCDO_Params Parms{};

	Parms._ExprResult_0 = _ExprResult_0;
	Parms._InstancingGraph_1 = _InstancingGraph_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._InstancingGraph_3 = _InstancingGraph_3;
	Parms._ExprResult_4 = _ExprResult_4;
	Parms._InstancingGraph_5 = _InstancingGraph_5;
	Parms._ExprResult_6 = _ExprResult_6;
	Parms._InstancingGraph_7 = _InstancingGraph_7;

	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortnite.task_AI_ai_behavior$OnBegin
// (None)

class UClass* UTask_AI_ai_behavior_OnBegin::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_AI_ai_behavior$OnBegin");

	return Clss;
}


// task_AI_ai_behavior$OnBegin VerseFortnite.Default__task_AI_ai_behavior$OnBegin
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_AI_ai_behavior_OnBegin* UTask_AI_ai_behavior_OnBegin::GetDefaultObj()
{
	static class UTask_AI_ai_behavior_OnBegin* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_AI_ai_behavior_OnBegin*>(UTask_AI_ai_behavior_OnBegin::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortnite.task_AI_ai_behavior$OnBegin.Update
// (Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_AI_ai_behavior_OnBegin::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_AI_ai_behavior$OnBegin", "Update");

	Params::UTask_AI_ai_behavior_OnBegin_Update_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass VerseFortnite.task_AI_focus_interface$MaintainFocus_L_Nagent_R
// (None)

class UClass* UTask_AI_focus_interface_MaintainFocus_L_Nagent_R::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_AI_focus_interface$MaintainFocus_L_Nagent_R");

	return Clss;
}


// task_AI_focus_interface$MaintainFocus_L_Nagent_R VerseFortnite.Default__task_AI_focus_interface$MaintainFocus_L_Nagent_R
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_AI_focus_interface_MaintainFocus_L_Nagent_R* UTask_AI_focus_interface_MaintainFocus_L_Nagent_R::GetDefaultObj()
{
	static class UTask_AI_focus_interface_MaintainFocus_L_Nagent_R* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_AI_focus_interface_MaintainFocus_L_Nagent_R*>(UTask_AI_focus_interface_MaintainFocus_L_Nagent_R::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortnite.task_AI_focus_interface$MaintainFocus_L_Nagent_R.Update
// (Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_AI_focus_interface_MaintainFocus_L_Nagent_R::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_AI_focus_interface$MaintainFocus_L_Nagent_R", "Update");

	Params::UTask_AI_focus_interface_MaintainFocus_L_Nagent_R_Update_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass VerseFortnite.task_AI_focus_interface$MaintainFocus_L_Nvector3_R
// (None)

class UClass* UTask_AI_focus_interface_MaintainFocus_L_Nvector3_R::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_AI_focus_interface$MaintainFocus_L_Nvector3_R");

	return Clss;
}


// task_AI_focus_interface$MaintainFocus_L_Nvector3_R VerseFortnite.Default__task_AI_focus_interface$MaintainFocus_L_Nvector3_R
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_AI_focus_interface_MaintainFocus_L_Nvector3_R* UTask_AI_focus_interface_MaintainFocus_L_Nvector3_R::GetDefaultObj()
{
	static class UTask_AI_focus_interface_MaintainFocus_L_Nvector3_R* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_AI_focus_interface_MaintainFocus_L_Nvector3_R*>(UTask_AI_focus_interface_MaintainFocus_L_Nvector3_R::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortnite.task_AI_focus_interface$MaintainFocus_L_Nvector3_R.Update
// (Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_AI_focus_interface_MaintainFocus_L_Nvector3_R::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_AI_focus_interface$MaintainFocus_L_Nvector3_R", "Update");

	Params::UTask_AI_focus_interface_MaintainFocus_L_Nvector3_R_Update_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass VerseFortnite.task_AI_navigatable$NavigateTo_L_Nnavigation__target_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R
// (None)

class UClass* UTask_AI_navigatable_NavigateTo_L_Nnavigation__target_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_AI_navigatable$NavigateTo_L_Nnavigation__target_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R");

	return Clss;
}


// task_AI_navigatable$NavigateTo_L_Nnavigation__target_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R VerseFortnite.Default__task_AI_navigatable$NavigateTo_L_Nnavigation__target_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_AI_navigatable_NavigateTo_L_Nnavigation__target_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R* UTask_AI_navigatable_NavigateTo_L_Nnavigation__target_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R::GetDefaultObj()
{
	static class UTask_AI_navigatable_NavigateTo_L_Nnavigation__target_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_AI_navigatable_NavigateTo_L_Nnavigation__target_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R*>(UTask_AI_navigatable_NavigateTo_L_Nnavigation__target_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortnite.task_AI_navigatable$NavigateTo_L_Nnavigation__target_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R.Update
// (Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_AI_navigatable_NavigateTo_L_Nnavigation__target_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_AI_navigatable$NavigateTo_L_Nnavigation__target_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R", "Update");

	Params::UTask_AI_navigatable_NavigateTo_L_Nnavigation__target_M_N_QReachRadius_Nfloat_20_3d_20_2e_2e_2e_M_N_QAllowPartialPath_Nlogic_20_3d_20_2e_2e_2e_R_Update_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass VerseFortnite.task_AI_navigatable$Wait_L_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R
// (None)

class UClass* UTask_AI_navigatable_Wait_L_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_AI_navigatable$Wait_L_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R");

	return Clss;
}


// task_AI_navigatable$Wait_L_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R VerseFortnite.Default__task_AI_navigatable$Wait_L_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_AI_navigatable_Wait_L_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R* UTask_AI_navigatable_Wait_L_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R::GetDefaultObj()
{
	static class UTask_AI_navigatable_Wait_L_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_AI_navigatable_Wait_L_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R*>(UTask_AI_navigatable_Wait_L_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortnite.task_AI_navigatable$Wait_L_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R.Update
// (Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_AI_navigatable_Wait_L_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_AI_navigatable$Wait_L_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R", "Update");

	Params::UTask_AI_navigatable_Wait_L_N_QDuration_Nfloat_20_3d_20_2e_2e_2e_R_Update_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass VerseFortnite.Teams_fort_br_team_collection
// (None)

class UClass* UTeams_fort_br_team_collection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Teams_fort_br_team_collection");

	return Clss;
}


// Teams_fort_br_team_collection VerseFortnite.Default__Teams_fort_br_team_collection
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTeams_fort_br_team_collection* UTeams_fort_br_team_collection::GetDefaultObj()
{
	static class UTeams_fort_br_team_collection* Default = nullptr;

	if (!Default)
		Default = static_cast<UTeams_fort_br_team_collection*>(UTeams_fort_br_team_collection::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortnite.Teams_fort_br_team_collection._L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RIsOnTeam_L_Nagent_M_Nteam_R
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lagent_Mteam_R       __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionalProperty_ UTeams_fort_br_team_collection::_L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RIsOnTeam_L_Nagent_M_Nteam_R(const struct FTuple_Lagent_Mteam_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Teams_fort_br_team_collection", "_L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RIsOnTeam_L_Nagent_M_Nteam_R");

	Params::UTeams_fort_br_team_collection__L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RIsOnTeam_L_Nagent_M_Nteam_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortnite.Teams_fort_br_team_collection._L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeams
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// TArray<class USimulation_team*>    RetVal                                                           (Parm, OutParm, ReturnParm, ContainsInstancedReference)

TArray<class USimulation_team*> UTeams_fort_br_team_collection::_L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeams(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Teams_fort_br_team_collection", "_L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeams");

	Params::UTeams_fort_br_team_collection__L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeams_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortnite.Teams_fort_br_team_collection._L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeamAttitude_L_Nteam_M_Nteam_R
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lteam_Mteam_R        __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionalProperty_ UTeams_fort_br_team_collection::_L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeamAttitude_L_Nteam_M_Nteam_R(const struct FTuple_Lteam_Mteam_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Teams_fort_br_team_collection", "_L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeamAttitude_L_Nteam_M_Nteam_R");

	Params::UTeams_fort_br_team_collection__L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeamAttitude_L_Nteam_M_Nteam_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortnite.Teams_fort_br_team_collection._L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeamAttitude_L_Nagent_M_Nagent_R
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lagent_Magent_R      __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionalProperty_ UTeams_fort_br_team_collection::_L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeamAttitude_L_Nagent_M_Nagent_R(const struct FTuple_Lagent_Magent_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Teams_fort_br_team_collection", "_L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeamAttitude_L_Nagent_M_Nagent_R");

	Params::UTeams_fort_br_team_collection__L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeamAttitude_L_Nagent_M_Nagent_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortnite.Teams_fort_br_team_collection._L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeam_L_Nagent_R
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class USimulation_agent*           __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

FOptionalProperty_ UTeams_fort_br_team_collection::_L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeam_L_Nagent_R(class USimulation_agent* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Teams_fort_br_team_collection", "_L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeam_L_Nagent_R");

	Params::UTeams_fort_br_team_collection__L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeam_L_Nagent_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortnite.Teams_fort_br_team_collection._L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetAgents_L_Nteam_R
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class USimulation_team*            __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference)

FOptionalProperty_ UTeams_fort_br_team_collection::_L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetAgents_L_Nteam_R(class USimulation_team* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Teams_fort_br_team_collection", "_L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetAgents_L_Nteam_R");

	Params::UTeams_fort_br_team_collection__L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetAgents_L_Nteam_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortnite.Teams_fort_br_team_collection._L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RAddToTeam_L_Nagent_M_Nteam_R
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lagent_Mteam_R       __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionalProperty_ UTeams_fort_br_team_collection::_L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RAddToTeam_L_Nagent_M_Nteam_R(const struct FTuple_Lagent_Mteam_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Teams_fort_br_team_collection", "_L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RAddToTeam_L_Nagent_M_Nteam_R");

	Params::UTeams_fort_br_team_collection__L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RAddToTeam_L_Nagent_M_Nteam_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortnite.Teams_fort_br_team_collection.$InitInstance
// (None)
// Parameters:

void UTeams_fort_br_team_collection::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Teams_fort_br_team_collection", "$InitInstance");

	Params::UTeams_fort_br_team_collection__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortnite.Teams_fort_br_team_collection.$Block
// (None)
// Parameters:

void UTeams_fort_br_team_collection::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Teams_fort_br_team_collection", "$Block");

	Params::UTeams_fort_br_team_collection__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortnite.Teams_fort_br_team_collection.$InitCDO
// (None)
// Parameters:

void UTeams_fort_br_team_collection::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Teams_fort_br_team_collection", "$InitCDO");

	Params::UTeams_fort_br_team_collection__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortnite.Teams_fort_minigame_team_collection
// (None)

class UClass* UTeams_fort_minigame_team_collection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Teams_fort_minigame_team_collection");

	return Clss;
}


// Teams_fort_minigame_team_collection VerseFortnite.Default__Teams_fort_minigame_team_collection
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTeams_fort_minigame_team_collection* UTeams_fort_minigame_team_collection::GetDefaultObj()
{
	static class UTeams_fort_minigame_team_collection* Default = nullptr;

	if (!Default)
		Default = static_cast<UTeams_fort_minigame_team_collection*>(UTeams_fort_minigame_team_collection::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortnite.Teams_fort_minigame_team_collection._L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RIsOnTeam_L_Nagent_M_Nteam_R
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lagent_Mteam_R       __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionalProperty_ UTeams_fort_minigame_team_collection::_L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RIsOnTeam_L_Nagent_M_Nteam_R(const struct FTuple_Lagent_Mteam_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Teams_fort_minigame_team_collection", "_L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RIsOnTeam_L_Nagent_M_Nteam_R");

	Params::UTeams_fort_minigame_team_collection__L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RIsOnTeam_L_Nagent_M_Nteam_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortnite.Teams_fort_minigame_team_collection._L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeams
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// TArray<class USimulation_team*>    RetVal                                                           (Parm, OutParm, ReturnParm, ContainsInstancedReference)

TArray<class USimulation_team*> UTeams_fort_minigame_team_collection::_L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeams(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Teams_fort_minigame_team_collection", "_L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeams");

	Params::UTeams_fort_minigame_team_collection__L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeams_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortnite.Teams_fort_minigame_team_collection._L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeamAttitude_L_Nteam_M_Nteam_R
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lteam_Mteam_R        __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionalProperty_ UTeams_fort_minigame_team_collection::_L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeamAttitude_L_Nteam_M_Nteam_R(const struct FTuple_Lteam_Mteam_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Teams_fort_minigame_team_collection", "_L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeamAttitude_L_Nteam_M_Nteam_R");

	Params::UTeams_fort_minigame_team_collection__L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeamAttitude_L_Nteam_M_Nteam_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortnite.Teams_fort_minigame_team_collection._L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeamAttitude_L_Nagent_M_Nagent_R
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lagent_Magent_R      __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionalProperty_ UTeams_fort_minigame_team_collection::_L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeamAttitude_L_Nagent_M_Nagent_R(const struct FTuple_Lagent_Magent_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Teams_fort_minigame_team_collection", "_L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeamAttitude_L_Nagent_M_Nagent_R");

	Params::UTeams_fort_minigame_team_collection__L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeamAttitude_L_Nagent_M_Nagent_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortnite.Teams_fort_minigame_team_collection._L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeam_L_Nagent_R
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class USimulation_agent*           __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

FOptionalProperty_ UTeams_fort_minigame_team_collection::_L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeam_L_Nagent_R(class USimulation_agent* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Teams_fort_minigame_team_collection", "_L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeam_L_Nagent_R");

	Params::UTeams_fort_minigame_team_collection__L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeam_L_Nagent_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortnite.Teams_fort_minigame_team_collection._L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetAgents_L_Nteam_R
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class USimulation_team*            __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference)

FOptionalProperty_ UTeams_fort_minigame_team_collection::_L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetAgents_L_Nteam_R(class USimulation_team* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Teams_fort_minigame_team_collection", "_L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetAgents_L_Nteam_R");

	Params::UTeams_fort_minigame_team_collection__L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetAgents_L_Nteam_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortnite.Teams_fort_minigame_team_collection._L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RAddToTeam_L_Nagent_M_Nteam_R
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lagent_Mteam_R       __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionalProperty_ UTeams_fort_minigame_team_collection::_L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RAddToTeam_L_Nagent_M_Nteam_R(const struct FTuple_Lagent_Mteam_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Teams_fort_minigame_team_collection", "_L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RAddToTeam_L_Nagent_M_Nteam_R");

	Params::UTeams_fort_minigame_team_collection__L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RAddToTeam_L_Nagent_M_Nteam_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortnite.Teams_fort_minigame_team_collection.$InitInstance
// (None)
// Parameters:

void UTeams_fort_minigame_team_collection::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Teams_fort_minigame_team_collection", "$InitInstance");

	Params::UTeams_fort_minigame_team_collection__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortnite.Teams_fort_minigame_team_collection.$Block
// (None)
// Parameters:

void UTeams_fort_minigame_team_collection::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Teams_fort_minigame_team_collection", "$Block");

	Params::UTeams_fort_minigame_team_collection__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortnite.Teams_fort_minigame_team_collection.$InitCDO
// (None)
// Parameters:

void UTeams_fort_minigame_team_collection::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Teams_fort_minigame_team_collection", "$InitCDO");

	Params::UTeams_fort_minigame_team_collection__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortnite.Teams_fort_team_collection
// (None)

class UClass* UTeams_fort_team_collection::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Teams_fort_team_collection");

	return Clss;
}


// Teams_fort_team_collection VerseFortnite.Default__Teams_fort_team_collection
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTeams_fort_team_collection* UTeams_fort_team_collection::GetDefaultObj()
{
	static class UTeams_fort_team_collection* Default = nullptr;

	if (!Default)
		Default = static_cast<UTeams_fort_team_collection*>(UTeams_fort_team_collection::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortnite.Teams_fort_team_collection._L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RIsOnTeam_L_Nagent_M_Nteam_R
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lagent_Mteam_R       __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionalProperty_ UTeams_fort_team_collection::_L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RIsOnTeam_L_Nagent_M_Nteam_R(const struct FTuple_Lagent_Mteam_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Teams_fort_team_collection", "_L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RIsOnTeam_L_Nagent_M_Nteam_R");

	Params::UTeams_fort_team_collection__L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RIsOnTeam_L_Nagent_M_Nteam_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseFortnite.Teams_fort_team_collection._L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeams
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// TArray<class USimulation_team*>    RetVal                                                           (Parm, OutParm, ReturnParm, ContainsInstancedReference)

TArray<class USimulation_team*> UTeams_fort_team_collection::_L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeams(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Teams_fort_team_collection", "_L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeams");

	Params::UTeams_fort_team_collection__L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeams_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseFortnite.Teams_fort_team_collection._L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeamAttitude_L_Nteam_M_Nteam_R
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lteam_Mteam_R        __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionalProperty_ UTeams_fort_team_collection::_L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeamAttitude_L_Nteam_M_Nteam_R(const struct FTuple_Lteam_Mteam_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Teams_fort_team_collection", "_L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeamAttitude_L_Nteam_M_Nteam_R");

	Params::UTeams_fort_team_collection__L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeamAttitude_L_Nteam_M_Nteam_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseFortnite.Teams_fort_team_collection._L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeamAttitude_L_Nagent_M_Nagent_R
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lagent_Magent_R      __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionalProperty_ UTeams_fort_team_collection::_L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeamAttitude_L_Nagent_M_Nagent_R(const struct FTuple_Lagent_Magent_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Teams_fort_team_collection", "_L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeamAttitude_L_Nagent_M_Nagent_R");

	Params::UTeams_fort_team_collection__L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeamAttitude_L_Nagent_M_Nagent_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseFortnite.Teams_fort_team_collection._L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeam_L_Nagent_R
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class USimulation_agent*           __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

FOptionalProperty_ UTeams_fort_team_collection::_L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeam_L_Nagent_R(class USimulation_agent* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Teams_fort_team_collection", "_L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeam_L_Nagent_R");

	Params::UTeams_fort_team_collection__L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetTeam_L_Nagent_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseFortnite.Teams_fort_team_collection._L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetAgents_L_Nteam_R
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class USimulation_team*            __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, ContainsInstancedReference)

FOptionalProperty_ UTeams_fort_team_collection::_L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetAgents_L_Nteam_R(class USimulation_team* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Teams_fort_team_collection", "_L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetAgents_L_Nteam_R");

	Params::UTeams_fort_team_collection__L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RGetAgents_L_Nteam_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseFortnite.Teams_fort_team_collection._L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RAddToTeam_L_Nagent_M_Nteam_R
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lagent_Mteam_R       __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionalProperty_ UTeams_fort_team_collection::_L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RAddToTeam_L_Nagent_M_Nteam_R(const struct FTuple_Lagent_Mteam_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Teams_fort_team_collection", "_L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RAddToTeam_L_Nagent_M_Nteam_R");

	Params::UTeams_fort_team_collection__L_2fFortnite_2ecom_2fTeams_2ffort__team__collection_N_RAddToTeam_L_Nagent_M_Nteam_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass VerseFortnite.Vehicles
// (None)

class UClass* UVehicles::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Vehicles");

	return Clss;
}


// Vehicles VerseFortnite.Default__Vehicles
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVehicles* UVehicles::GetDefaultObj()
{
	static class UVehicles* Default = nullptr;

	if (!Default)
		Default = static_cast<UVehicles*>(UVehicles::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortnite.Vehicles._L_2fFortnite_2ecom_2fVehicles_N_Roperator_U_2eGetVehicle_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

FOptionalProperty_ UVehicles::_L_2fFortnite_2ecom_2fVehicles_N_Roperator_U_2eGetVehicle_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R(const struct FTuple_Lfort__character_Mtuple_L_R_Mtuple_L_R_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vehicles", "_L_2fFortnite_2ecom_2fVehicles_N_Roperator_U_2eGetVehicle_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R");

	Params::UVehicles__L_2fFortnite_2ecom_2fVehicles_N_Roperator_U_2eGetVehicle_U_L_Nfort__character_M_Ntuple_L_R_M_Ntuple_L_R_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortnite.Vehicles.$InitCDO
// (None)
// Parameters:

void UVehicles::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vehicles", "$InitCDO");

	Params::UVehicles__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortnite.Vehicles_fort_vehicle
// (None)

class UClass* UVehicles_fort_vehicle::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Vehicles_fort_vehicle");

	return Clss;
}


// Vehicles_fort_vehicle VerseFortnite.Default__Vehicles_fort_vehicle
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVehicles_fort_vehicle* UVehicles_fort_vehicle::GetDefaultObj()
{
	static class UVehicles_fort_vehicle* Default = nullptr;

	if (!Default)
		Default = static_cast<UVehicles_fort_vehicle*>(UVehicles_fort_vehicle::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortnite.Vehicles_fort_vehicle._L_2fFortnite_2ecom_2fVehicles_2ffort__vehicle_N_RIsOnGround
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionalProperty_ UVehicles_fort_vehicle::_L_2fFortnite_2ecom_2fVehicles_2ffort__vehicle_N_RIsOnGround(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vehicles_fort_vehicle", "_L_2fFortnite_2ecom_2fVehicles_2ffort__vehicle_N_RIsOnGround");

	Params::UVehicles_fort_vehicle__L_2fFortnite_2ecom_2fVehicles_2ffort__vehicle_N_RIsOnGround_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseFortnite.Vehicles_fort_vehicle._L_2fFortnite_2ecom_2fVehicles_2ffort__vehicle_N_RIsInWater
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionalProperty_ UVehicles_fort_vehicle::_L_2fFortnite_2ecom_2fVehicles_2ffort__vehicle_N_RIsInWater(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vehicles_fort_vehicle", "_L_2fFortnite_2ecom_2fVehicles_2ffort__vehicle_N_RIsInWater");

	Params::UVehicles_fort_vehicle__L_2fFortnite_2ecom_2fVehicles_2ffort__vehicle_N_RIsInWater_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseFortnite.Vehicles_fort_vehicle._L_2fFortnite_2ecom_2fVehicles_2ffort__vehicle_N_RIsInAir
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionalProperty_ UVehicles_fort_vehicle::_L_2fFortnite_2ecom_2fVehicles_2ffort__vehicle_N_RIsInAir(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vehicles_fort_vehicle", "_L_2fFortnite_2ecom_2fVehicles_2ffort__vehicle_N_RIsInAir");

	Params::UVehicles_fort_vehicle__L_2fFortnite_2ecom_2fVehicles_2ffort__vehicle_N_RIsInAir_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseFortnite.Vehicles_fort_vehicle._L_2fFortnite_2ecom_2fVehicles_2ffort__vehicle_N_RGetPassengers
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// TArray<class UObject*>             RetVal                                                           (Parm, OutParm, ReturnParm, ContainsInstancedReference)

TArray<class UObject*> UVehicles_fort_vehicle::_L_2fFortnite_2ecom_2fVehicles_2ffort__vehicle_N_RGetPassengers(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vehicles_fort_vehicle", "_L_2fFortnite_2ecom_2fVehicles_2ffort__vehicle_N_RGetPassengers");

	Params::UVehicles_fort_vehicle__L_2fFortnite_2ecom_2fVehicles_2ffort__vehicle_N_RGetPassengers_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass VerseFortnite.Vehicles_fort_vehicle_impl
// (None)

class UClass* UVehicles_fort_vehicle_impl::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Vehicles_fort_vehicle_impl");

	return Clss;
}


// Vehicles_fort_vehicle_impl VerseFortnite.Default__Vehicles_fort_vehicle_impl
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVehicles_fort_vehicle_impl* UVehicles_fort_vehicle_impl::GetDefaultObj()
{
	static class UVehicles_fort_vehicle_impl* Default = nullptr;

	if (!Default)
		Default = static_cast<UVehicles_fort_vehicle_impl*>(UVehicles_fort_vehicle_impl::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortnite.Vehicles_fort_vehicle_impl._L_2fFortnite_2ecom_2fGame_2fhealthful_N_RSetMaxHealth_L_Nfloat_R
// (Native, Public, BlueprintCallable)
// Parameters:
// double                             __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVehicles_fort_vehicle_impl::_L_2fFortnite_2ecom_2fGame_2fhealthful_N_RSetMaxHealth_L_Nfloat_R(double __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vehicles_fort_vehicle_impl", "_L_2fFortnite_2ecom_2fGame_2fhealthful_N_RSetMaxHealth_L_Nfloat_R");

	Params::UVehicles_fort_vehicle_impl__L_2fFortnite_2ecom_2fGame_2fhealthful_N_RSetMaxHealth_L_Nfloat_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortnite.Vehicles_fort_vehicle_impl._L_2fFortnite_2ecom_2fGame_2fhealthful_N_RSetHealth_L_Nfloat_R
// (Native, Public, BlueprintCallable)
// Parameters:
// double                             __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVehicles_fort_vehicle_impl::_L_2fFortnite_2ecom_2fGame_2fhealthful_N_RSetHealth_L_Nfloat_R(double __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vehicles_fort_vehicle_impl", "_L_2fFortnite_2ecom_2fGame_2fhealthful_N_RSetHealth_L_Nfloat_R");

	Params::UVehicles_fort_vehicle_impl__L_2fFortnite_2ecom_2fGame_2fhealthful_N_RSetHealth_L_Nfloat_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortnite.Vehicles_fort_vehicle_impl._L_2fFortnite_2ecom_2fVehicles_2ffort__vehicle_N_RIsOnGround
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionalProperty_ UVehicles_fort_vehicle_impl::_L_2fFortnite_2ecom_2fVehicles_2ffort__vehicle_N_RIsOnGround(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vehicles_fort_vehicle_impl", "_L_2fFortnite_2ecom_2fVehicles_2ffort__vehicle_N_RIsOnGround");

	Params::UVehicles_fort_vehicle_impl__L_2fFortnite_2ecom_2fVehicles_2ffort__vehicle_N_RIsOnGround_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortnite.Vehicles_fort_vehicle_impl._L_2fFortnite_2ecom_2fVehicles_2ffort__vehicle_N_RIsInWater
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionalProperty_ UVehicles_fort_vehicle_impl::_L_2fFortnite_2ecom_2fVehicles_2ffort__vehicle_N_RIsInWater(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vehicles_fort_vehicle_impl", "_L_2fFortnite_2ecom_2fVehicles_2ffort__vehicle_N_RIsInWater");

	Params::UVehicles_fort_vehicle_impl__L_2fFortnite_2ecom_2fVehicles_2ffort__vehicle_N_RIsInWater_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortnite.Vehicles_fort_vehicle_impl._L_2fFortnite_2ecom_2fVehicles_2ffort__vehicle_N_RIsInAir
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionalProperty_ UVehicles_fort_vehicle_impl::_L_2fFortnite_2ecom_2fVehicles_2ffort__vehicle_N_RIsInAir(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vehicles_fort_vehicle_impl", "_L_2fFortnite_2ecom_2fVehicles_2ffort__vehicle_N_RIsInAir");

	Params::UVehicles_fort_vehicle_impl__L_2fFortnite_2ecom_2fVehicles_2ffort__vehicle_N_RIsInAir_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortnite.Vehicles_fort_vehicle_impl._L_2fFortnite_2ecom_2fGame_2fpositional_N_RGetTransform
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FSpatialMath_transform      RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor)

struct FSpatialMath_transform UVehicles_fort_vehicle_impl::_L_2fFortnite_2ecom_2fGame_2fpositional_N_RGetTransform(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vehicles_fort_vehicle_impl", "_L_2fFortnite_2ecom_2fGame_2fpositional_N_RGetTransform");

	Params::UVehicles_fort_vehicle_impl__L_2fFortnite_2ecom_2fGame_2fpositional_N_RGetTransform_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortnite.Vehicles_fort_vehicle_impl._L_2fFortnite_2ecom_2fVehicles_2ffort__vehicle_N_RGetPassengers
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// TArray<class UObject*>             RetVal                                                           (Parm, OutParm, ReturnParm, ContainsInstancedReference)

TArray<class UObject*> UVehicles_fort_vehicle_impl::_L_2fFortnite_2ecom_2fVehicles_2ffort__vehicle_N_RGetPassengers(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vehicles_fort_vehicle_impl", "_L_2fFortnite_2ecom_2fVehicles_2ffort__vehicle_N_RGetPassengers");

	Params::UVehicles_fort_vehicle_impl__L_2fFortnite_2ecom_2fVehicles_2ffort__vehicle_N_RGetPassengers_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortnite.Vehicles_fort_vehicle_impl._L_2fFortnite_2ecom_2fGame_2fhealthful_N_RGetMaxHealth
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// double                             RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double UVehicles_fort_vehicle_impl::_L_2fFortnite_2ecom_2fGame_2fhealthful_N_RGetMaxHealth(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vehicles_fort_vehicle_impl", "_L_2fFortnite_2ecom_2fGame_2fhealthful_N_RGetMaxHealth");

	Params::UVehicles_fort_vehicle_impl__L_2fFortnite_2ecom_2fGame_2fhealthful_N_RGetMaxHealth_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortnite.Vehicles_fort_vehicle_impl._L_2fFortnite_2ecom_2fGame_2fhealthful_N_RGetHealth
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// double                             RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double UVehicles_fort_vehicle_impl::_L_2fFortnite_2ecom_2fGame_2fhealthful_N_RGetHealth(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vehicles_fort_vehicle_impl", "_L_2fFortnite_2ecom_2fGame_2fhealthful_N_RGetHealth");

	Params::UVehicles_fort_vehicle_impl__L_2fFortnite_2ecom_2fGame_2fhealthful_N_RGetHealth_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortnite.Vehicles_fort_vehicle_impl._L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamagedEvent
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UObject*                     RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UObject* UVehicles_fort_vehicle_impl::_L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamagedEvent(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vehicles_fort_vehicle_impl", "_L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamagedEvent");

	Params::UVehicles_fort_vehicle_impl__L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamagedEvent_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseFortnite.Vehicles_fort_vehicle_impl._L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamage_L_Nfloat_R
// (Native, Public, BlueprintCallable)
// Parameters:
// double                             __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVehicles_fort_vehicle_impl::_L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamage_L_Nfloat_R(double __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vehicles_fort_vehicle_impl", "_L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamage_L_Nfloat_R");

	Params::UVehicles_fort_vehicle_impl__L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamage_L_Nfloat_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortnite.Vehicles_fort_vehicle_impl._L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamage_L_Ndamage__args_R
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FGame_damage_args           __verse_0xB2CDDD72_Argument                                      (Parm, NoDestructor)

void UVehicles_fort_vehicle_impl::_L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamage_L_Ndamage__args_R(const struct FGame_damage_args& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vehicles_fort_vehicle_impl", "_L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamage_L_Ndamage__args_R");

	Params::UVehicles_fort_vehicle_impl__L_2fFortnite_2ecom_2fGame_2fdamageable_N_RDamage_L_Ndamage__args_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortnite.Vehicles_fort_vehicle_impl.$InitInstance
// (None)
// Parameters:

void UVehicles_fort_vehicle_impl::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vehicles_fort_vehicle_impl", "$InitInstance");

	Params::UVehicles_fort_vehicle_impl__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortnite.Vehicles_fort_vehicle_impl.$Block
// (None)
// Parameters:

void UVehicles_fort_vehicle_impl::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vehicles_fort_vehicle_impl", "$Block");

	Params::UVehicles_fort_vehicle_impl__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortnite.Vehicles_fort_vehicle_impl.$InitCDO
// (HasDefaults)
// Parameters:
// class UVerseEngine_subscribable_event*_ExprResult_0                                                    (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint64                             _InstancingGraph_1                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UVerseEngine_subscribable_event*_ExprResult_2                                                    (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint64                             _InstancingGraph_3                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVehicles_fort_vehicle_impl::_InitCDO(class UVerseEngine_subscribable_event* _ExprResult_0, uint64 _InstancingGraph_1, class UVerseEngine_subscribable_event* _ExprResult_2, uint64 _InstancingGraph_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Vehicles_fort_vehicle_impl", "$InitCDO");

	Params::UVehicles_fort_vehicle_impl__InitCDO_Params Parms{};

	Parms._ExprResult_0 = _ExprResult_0;
	Parms._InstancingGraph_1 = _InstancingGraph_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._InstancingGraph_3 = _InstancingGraph_3;

	UObject::ProcessEvent(Func, &Parms);

}

}


