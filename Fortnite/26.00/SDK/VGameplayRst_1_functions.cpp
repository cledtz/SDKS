#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// VerseClass VGameplayRst.$SolarisSignatureFunctionOuter
// (None)

class UClass* U_SolarisSignatureFunctionOuter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("$SolarisSignatureFunctionOuter");

	return Clss;
}


// $SolarisSignatureFunctionOuter VGameplayRst.Default__$SolarisSignatureFunctionOuter
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class U_SolarisSignatureFunctionOuter* U_SolarisSignatureFunctionOuter::GetDefaultObj()
{
	static class U_SolarisSignatureFunctionOuter* Default = nullptr;

	if (!Default)
		Default = static_cast<U_SolarisSignatureFunctionOuter*>(U_SolarisSignatureFunctionOuter::StaticClass()->DefaultObject);

	return Default;
}


// VerseClass VGameplayRst.task_VGameplayRst_Components_dynamic_activation_component$WaitForTransitionBegin
// (None)

class UClass* UTask_VGameplayRst_Components_dynamic_activation_component_WaitForTransitionBegin::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_VGameplayRst_Components_dynamic_activation_component$WaitForTransitionBegin");

	return Clss;
}


// task_VGameplayRst_Components_dynamic_activation_component$WaitForTransitionBegin VGameplayRst.Default__task_VGameplayRst_Components_dynamic_activation_component$WaitForTransitionBegin
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_VGameplayRst_Components_dynamic_activation_component_WaitForTransitionBegin* UTask_VGameplayRst_Components_dynamic_activation_component_WaitForTransitionBegin::GetDefaultObj()
{
	static class UTask_VGameplayRst_Components_dynamic_activation_component_WaitForTransitionBegin* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_VGameplayRst_Components_dynamic_activation_component_WaitForTransitionBegin*>(UTask_VGameplayRst_Components_dynamic_activation_component_WaitForTransitionBegin::StaticClass()->DefaultObject);

	return Default;
}


// Function VGameplayRst.task_VGameplayRst_Components_dynamic_activation_component$WaitForTransitionBegin.Update
// (Native, Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_VGameplayRst_Components_dynamic_activation_component_WaitForTransitionBegin::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_VGameplayRst_Components_dynamic_activation_component$WaitForTransitionBegin", "Update");

	Params::UTask_VGameplayRst_Components_dynamic_activation_component_WaitForTransitionBegin_Update_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// VerseClass VGameplayRst.task_VGameplayRst_Components_dynamic_activation_component$WaitForTransitionComplete
// (None)

class UClass* UTask_VGameplayRst_Components_dynamic_activation_component_WaitForTransitionComplete::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_VGameplayRst_Components_dynamic_activation_component$WaitForTransitionComplete");

	return Clss;
}


// task_VGameplayRst_Components_dynamic_activation_component$WaitForTransitionComplete VGameplayRst.Default__task_VGameplayRst_Components_dynamic_activation_component$WaitForTransitionComplete
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_VGameplayRst_Components_dynamic_activation_component_WaitForTransitionComplete* UTask_VGameplayRst_Components_dynamic_activation_component_WaitForTransitionComplete::GetDefaultObj()
{
	static class UTask_VGameplayRst_Components_dynamic_activation_component_WaitForTransitionComplete* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_VGameplayRst_Components_dynamic_activation_component_WaitForTransitionComplete*>(UTask_VGameplayRst_Components_dynamic_activation_component_WaitForTransitionComplete::StaticClass()->DefaultObject);

	return Default;
}


// Function VGameplayRst.task_VGameplayRst_Components_dynamic_activation_component$WaitForTransitionComplete.Update
// (Native, Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_VGameplayRst_Components_dynamic_activation_component_WaitForTransitionComplete::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_VGameplayRst_Components_dynamic_activation_component$WaitForTransitionComplete", "Update");

	Params::UTask_VGameplayRst_Components_dynamic_activation_component_WaitForTransitionComplete_Update_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// VerseClass VGameplayRst.task_VGameplayRst_Messaging_debug_command_component$__WaitForCommand_L_N_Kchar_R
// (None)

class UClass* UTask_VGameplayRst_Messaging_debug_command_component___WaitForCommand_L_N_Kchar_R::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_VGameplayRst_Messaging_debug_command_component$__WaitForCommand_L_N_Kchar_R");

	return Clss;
}


// task_VGameplayRst_Messaging_debug_command_component$__WaitForCommand_L_N_Kchar_R VGameplayRst.Default__task_VGameplayRst_Messaging_debug_command_component$__WaitForCommand_L_N_Kchar_R
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_VGameplayRst_Messaging_debug_command_component___WaitForCommand_L_N_Kchar_R* UTask_VGameplayRst_Messaging_debug_command_component___WaitForCommand_L_N_Kchar_R::GetDefaultObj()
{
	static class UTask_VGameplayRst_Messaging_debug_command_component___WaitForCommand_L_N_Kchar_R* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_VGameplayRst_Messaging_debug_command_component___WaitForCommand_L_N_Kchar_R*>(UTask_VGameplayRst_Messaging_debug_command_component___WaitForCommand_L_N_Kchar_R::StaticClass()->DefaultObject);

	return Default;
}


// Function VGameplayRst.task_VGameplayRst_Messaging_debug_command_component$__WaitForCommand_L_N_Kchar_R.Update
// (Native, Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_VGameplayRst_Messaging_debug_command_component___WaitForCommand_L_N_Kchar_R::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_VGameplayRst_Messaging_debug_command_component$__WaitForCommand_L_N_Kchar_R", "Update");

	Params::UTask_VGameplayRst_Messaging_debug_command_component___WaitForCommand_L_N_Kchar_R_Update_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// VerseClass VGameplayRst.task_VGameplayRst_Physics_collision_component$WaitBeginOverlap
// (None)

class UClass* UTask_VGameplayRst_Physics_collision_component_WaitBeginOverlap::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_VGameplayRst_Physics_collision_component$WaitBeginOverlap");

	return Clss;
}


// task_VGameplayRst_Physics_collision_component$WaitBeginOverlap VGameplayRst.Default__task_VGameplayRst_Physics_collision_component$WaitBeginOverlap
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_VGameplayRst_Physics_collision_component_WaitBeginOverlap* UTask_VGameplayRst_Physics_collision_component_WaitBeginOverlap::GetDefaultObj()
{
	static class UTask_VGameplayRst_Physics_collision_component_WaitBeginOverlap* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_VGameplayRst_Physics_collision_component_WaitBeginOverlap*>(UTask_VGameplayRst_Physics_collision_component_WaitBeginOverlap::StaticClass()->DefaultObject);

	return Default;
}


// Function VGameplayRst.task_VGameplayRst_Physics_collision_component$WaitBeginOverlap.Update
// (Native, Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_VGameplayRst_Physics_collision_component_WaitBeginOverlap::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_VGameplayRst_Physics_collision_component$WaitBeginOverlap", "Update");

	Params::UTask_VGameplayRst_Physics_collision_component_WaitBeginOverlap_Update_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// VerseClass VGameplayRst.task_VGameplayRst_Physics_collision_component$WaitEndOverlap
// (None)

class UClass* UTask_VGameplayRst_Physics_collision_component_WaitEndOverlap::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_VGameplayRst_Physics_collision_component$WaitEndOverlap");

	return Clss;
}


// task_VGameplayRst_Physics_collision_component$WaitEndOverlap VGameplayRst.Default__task_VGameplayRst_Physics_collision_component$WaitEndOverlap
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_VGameplayRst_Physics_collision_component_WaitEndOverlap* UTask_VGameplayRst_Physics_collision_component_WaitEndOverlap::GetDefaultObj()
{
	static class UTask_VGameplayRst_Physics_collision_component_WaitEndOverlap* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_VGameplayRst_Physics_collision_component_WaitEndOverlap*>(UTask_VGameplayRst_Physics_collision_component_WaitEndOverlap::StaticClass()->DefaultObject);

	return Default;
}


// Function VGameplayRst.task_VGameplayRst_Physics_collision_component$WaitEndOverlap.Update
// (Native, Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_VGameplayRst_Physics_collision_component_WaitEndOverlap::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_VGameplayRst_Physics_collision_component$WaitEndOverlap", "Update");

	Params::UTask_VGameplayRst_Physics_collision_component_WaitEndOverlap_Update_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// VerseClass VGameplayRst.task_VGameplayRst_Physics_collision_component$WaitHit
// (None)

class UClass* UTask_VGameplayRst_Physics_collision_component_WaitHit::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_VGameplayRst_Physics_collision_component$WaitHit");

	return Clss;
}


// task_VGameplayRst_Physics_collision_component$WaitHit VGameplayRst.Default__task_VGameplayRst_Physics_collision_component$WaitHit
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_VGameplayRst_Physics_collision_component_WaitHit* UTask_VGameplayRst_Physics_collision_component_WaitHit::GetDefaultObj()
{
	static class UTask_VGameplayRst_Physics_collision_component_WaitHit* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_VGameplayRst_Physics_collision_component_WaitHit*>(UTask_VGameplayRst_Physics_collision_component_WaitHit::StaticClass()->DefaultObject);

	return Default;
}


// Function VGameplayRst.task_VGameplayRst_Physics_collision_component$WaitHit.Update
// (Native, Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_VGameplayRst_Physics_collision_component_WaitHit::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_VGameplayRst_Physics_collision_component$WaitHit", "Update");

	Params::UTask_VGameplayRst_Physics_collision_component_WaitHit_Update_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// VerseClass VGameplayRst.task_VGameplayRst_Physics_physics_trace$WaitPhysicsTrace
// (None)

class UClass* UTask_VGameplayRst_Physics_physics_trace_WaitPhysicsTrace::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_VGameplayRst_Physics_physics_trace$WaitPhysicsTrace");

	return Clss;
}


// task_VGameplayRst_Physics_physics_trace$WaitPhysicsTrace VGameplayRst.Default__task_VGameplayRst_Physics_physics_trace$WaitPhysicsTrace
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_VGameplayRst_Physics_physics_trace_WaitPhysicsTrace* UTask_VGameplayRst_Physics_physics_trace_WaitPhysicsTrace::GetDefaultObj()
{
	static class UTask_VGameplayRst_Physics_physics_trace_WaitPhysicsTrace* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_VGameplayRst_Physics_physics_trace_WaitPhysicsTrace*>(UTask_VGameplayRst_Physics_physics_trace_WaitPhysicsTrace::StaticClass()->DefaultObject);

	return Default;
}


// Function VGameplayRst.task_VGameplayRst_Physics_physics_trace$WaitPhysicsTrace.Update
// (Native, Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_VGameplayRst_Physics_physics_trace_WaitPhysicsTrace::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_VGameplayRst_Physics_physics_trace$WaitPhysicsTrace", "Update");

	Params::UTask_VGameplayRst_Physics_physics_trace_WaitPhysicsTrace_Update_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// VerseClass VGameplayRst.VGameplayRst_Audio_audio_component
// (None)

class UClass* UVGameplayRst_Audio_audio_component::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VGameplayRst_Audio_audio_component");

	return Clss;
}


// VGameplayRst_Audio_audio_component VGameplayRst.Default__VGameplayRst_Audio_audio_component
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVGameplayRst_Audio_audio_component* UVGameplayRst_Audio_audio_component::GetDefaultObj()
{
	static class UVGameplayRst_Audio_audio_component* Default = nullptr;

	if (!Default)
		Default = static_cast<UVGameplayRst_Audio_audio_component*>(UVGameplayRst_Audio_audio_component::StaticClass()->DefaultObject);

	return Default;
}


// Function VGameplayRst.VGameplayRst_Audio_audio_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fAudio_2faudio__component_N_RSetSound_L_Nsound_R
// (Native, Public, BlueprintCallable)
// Parameters:
// class UAssets_sound*               __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

void UVGameplayRst_Audio_audio_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fAudio_2faudio__component_N_RSetSound_L_Nsound_R(class UAssets_sound* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Audio_audio_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fAudio_2faudio__component_N_RSetSound_L_Nsound_R");

	Params::UVGameplayRst_Audio_audio_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fAudio_2faudio__component_N_RSetSound_L_Nsound_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VGameplayRst.VGameplayRst_Audio_audio_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fAudio_2faudio__component_N_REndSound
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UVGameplayRst_Audio_audio_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fAudio_2faudio__component_N_REndSound(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Audio_audio_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fAudio_2faudio__component_N_REndSound");

	Params::UVGameplayRst_Audio_audio_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fAudio_2faudio__component_N_REndSound_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VGameplayRst.VGameplayRst_Audio_audio_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fAudio_2faudio__component_N_RBeginSound
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UVGameplayRst_Audio_audio_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fAudio_2faudio__component_N_RBeginSound(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Audio_audio_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fAudio_2faudio__component_N_RBeginSound");

	Params::UVGameplayRst_Audio_audio_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fAudio_2faudio__component_N_RBeginSound_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VGameplayRst.VGameplayRst_Audio_audio_component.$InitInstance
// (None)
// Parameters:

void UVGameplayRst_Audio_audio_component::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Audio_audio_component", "$InitInstance");

	Params::UVGameplayRst_Audio_audio_component__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VGameplayRst.VGameplayRst_Audio_audio_component.$Block
// (None)
// Parameters:

void UVGameplayRst_Audio_audio_component::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Audio_audio_component", "$Block");

	Params::UVGameplayRst_Audio_audio_component__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VGameplayRst.VGameplayRst_Audio_audio_component.$InitCDO
// (None)
// Parameters:

void UVGameplayRst_Audio_audio_component::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Audio_audio_component", "$InitCDO");

	Params::UVGameplayRst_Audio_audio_component__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VGameplayRst.VGameplayRst_Components_dynamic_activation_component
// (None)

class UClass* UVGameplayRst_Components_dynamic_activation_component::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VGameplayRst_Components_dynamic_activation_component");

	return Clss;
}


// VGameplayRst_Components_dynamic_activation_component VGameplayRst.Default__VGameplayRst_Components_dynamic_activation_component
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVGameplayRst_Components_dynamic_activation_component* UVGameplayRst_Components_dynamic_activation_component::GetDefaultObj()
{
	static class UVGameplayRst_Components_dynamic_activation_component* Default = nullptr;

	if (!Default)
		Default = static_cast<UVGameplayRst_Components_dynamic_activation_component*>(UVGameplayRst_Components_dynamic_activation_component::StaticClass()->DefaultObject);

	return Default;
}


// Function VGameplayRst.VGameplayRst_Components_dynamic_activation_component.WaitForTransitionComplete
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UVGameplayRst_Components_dynamic_activation_component::WaitForTransitionComplete(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Components_dynamic_activation_component", "WaitForTransitionComplete");

	Params::UVGameplayRst_Components_dynamic_activation_component_WaitForTransitionComplete_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_Components_dynamic_activation_component.WaitForTransitionBegin
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UVGameplayRst_Components_dynamic_activation_component::WaitForTransitionBegin(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Components_dynamic_activation_component", "WaitForTransitionBegin");

	Params::UVGameplayRst_Components_dynamic_activation_component_WaitForTransitionBegin_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_Components_dynamic_activation_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fdynamic__activation__component_N_RUnlinkComponent_L_Ncomponent_R
// (Native, Public, BlueprintCallable)
// Parameters:
// class UEntityComponent*            __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

void UVGameplayRst_Components_dynamic_activation_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fdynamic__activation__component_N_RUnlinkComponent_L_Ncomponent_R(class UEntityComponent* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Components_dynamic_activation_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fdynamic__activation__component_N_RUnlinkComponent_L_Ncomponent_R");

	Params::UVGameplayRst_Components_dynamic_activation_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fdynamic__activation__component_N_RUnlinkComponent_L_Ncomponent_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VGameplayRst.VGameplayRst_Components_dynamic_activation_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fdynamic__activation__component_N_RReset
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UVGameplayRst_Components_dynamic_activation_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fdynamic__activation__component_N_RReset(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Components_dynamic_activation_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fdynamic__activation__component_N_RReset");

	Params::UVGameplayRst_Components_dynamic_activation_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fdynamic__activation__component_N_RReset_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VGameplayRst.VGameplayRst_Components_dynamic_activation_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fdynamic__activation__component_N_RLinkComponent_L_Ncomponent_R
// (Native, Public, BlueprintCallable)
// Parameters:
// class UEntityComponent*            __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

void UVGameplayRst_Components_dynamic_activation_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fdynamic__activation__component_N_RLinkComponent_L_Ncomponent_R(class UEntityComponent* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Components_dynamic_activation_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fdynamic__activation__component_N_RLinkComponent_L_Ncomponent_R");

	Params::UVGameplayRst_Components_dynamic_activation_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fdynamic__activation__component_N_RLinkComponent_L_Ncomponent_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VGameplayRst.VGameplayRst_Components_dynamic_activation_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fdynamic__activation__component_N_RBeginTransition_L_Nfloat_M_Nactivation__state_R
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FTuple_Lfloat_Mactivation__state_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UVGameplayRst_Components_dynamic_activation_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fdynamic__activation__component_N_RBeginTransition_L_Nfloat_M_Nactivation__state_R(const struct FTuple_Lfloat_Mactivation__state_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Components_dynamic_activation_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fdynamic__activation__component_N_RBeginTransition_L_Nfloat_M_Nactivation__state_R");

	Params::UVGameplayRst_Components_dynamic_activation_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fdynamic__activation__component_N_RBeginTransition_L_Nfloat_M_Nactivation__state_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VGameplayRst.VGameplayRst_Components_dynamic_activation_component.$InitInstance
// (None)
// Parameters:

void UVGameplayRst_Components_dynamic_activation_component::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Components_dynamic_activation_component", "$InitInstance");

	Params::UVGameplayRst_Components_dynamic_activation_component__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VGameplayRst.VGameplayRst_Components_dynamic_activation_component.$Block
// (None)
// Parameters:

void UVGameplayRst_Components_dynamic_activation_component::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Components_dynamic_activation_component", "$Block");

	Params::UVGameplayRst_Components_dynamic_activation_component__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VGameplayRst.VGameplayRst_Components_dynamic_activation_component.$InitCDO
// (None)
// Parameters:

void UVGameplayRst_Components_dynamic_activation_component::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Components_dynamic_activation_component", "$InitCDO");

	Params::UVGameplayRst_Components_dynamic_activation_component__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VGameplayRst.VGameplayRst_Components_script_component
// (None)

class UClass* UVGameplayRst_Components_script_component::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VGameplayRst_Components_script_component");

	return Clss;
}


// VGameplayRst_Components_script_component VGameplayRst.Default__VGameplayRst_Components_script_component
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVGameplayRst_Components_script_component* UVGameplayRst_Components_script_component::GetDefaultObj()
{
	static class UVGameplayRst_Components_script_component* Default = nullptr;

	if (!Default)
		Default = static_cast<UVGameplayRst_Components_script_component*>(UVGameplayRst_Components_script_component::StaticClass()->DefaultObject);

	return Default;
}


// Function VGameplayRst.VGameplayRst_Components_script_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_RSetTickEnabled_L_Nlogic_R
// (Native, Public, BlueprintCallable)
// Parameters:
// uint8                              __verse_0xB2CDDD72_Argument                                      (Parm, NoDestructor, HasGetValueTypeHash)

void UVGameplayRst_Components_script_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_RSetTickEnabled_L_Nlogic_R(uint8 __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Components_script_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_RSetTickEnabled_L_Nlogic_R");

	Params::UVGameplayRst_Components_script_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_RSetTickEnabled_L_Nlogic_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VGameplayRst.VGameplayRst_Components_script_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_RSetEnabled_L_Nlogic_R
// (Native, Public, BlueprintCallable)
// Parameters:
// uint8                              __verse_0xB2CDDD72_Argument                                      (Parm, NoDestructor, HasGetValueTypeHash)

void UVGameplayRst_Components_script_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_RSetEnabled_L_Nlogic_R(uint8 __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Components_script_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_RSetEnabled_L_Nlogic_R");

	Params::UVGameplayRst_Components_script_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_RSetEnabled_L_Nlogic_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VGameplayRst.VGameplayRst_Components_script_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_ROnTick_L_Nfloat_R
// (Public, BlueprintCallable)
// Parameters:
// double                             __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVGameplayRst_Components_script_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_ROnTick_L_Nfloat_R(double __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Components_script_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_ROnTick_L_Nfloat_R");

	Params::UVGameplayRst_Components_script_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_ROnTick_L_Nfloat_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VGameplayRst.VGameplayRst_Components_script_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_ROnPostCreate
// (Public, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UVGameplayRst_Components_script_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_ROnPostCreate(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Components_script_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_ROnPostCreate");

	Params::UVGameplayRst_Components_script_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_ROnPostCreate_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VGameplayRst.VGameplayRst_Components_script_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_ROnEnd
// (Public, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UVGameplayRst_Components_script_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_ROnEnd(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Components_script_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_ROnEnd");

	Params::UVGameplayRst_Components_script_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_ROnEnd_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VGameplayRst.VGameplayRst_Components_script_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_ROnEnabledChanged_L_Nlogic_R
// (Public, BlueprintCallable)
// Parameters:
// uint8                              __verse_0xB2CDDD72_Argument                                      (Parm, NoDestructor, HasGetValueTypeHash)

void UVGameplayRst_Components_script_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_ROnEnabledChanged_L_Nlogic_R(uint8 __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Components_script_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_ROnEnabledChanged_L_Nlogic_R");

	Params::UVGameplayRst_Components_script_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_ROnEnabledChanged_L_Nlogic_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VGameplayRst.VGameplayRst_Components_script_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_ROnCreate
// (Public, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UVGameplayRst_Components_script_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_ROnCreate(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Components_script_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_ROnCreate");

	Params::UVGameplayRst_Components_script_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_ROnCreate_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VGameplayRst.VGameplayRst_Components_script_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_ROnBegin
// (Public, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UVGameplayRst_Components_script_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_ROnBegin(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Components_script_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_ROnBegin");

	Params::UVGameplayRst_Components_script_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_ROnBegin_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VGameplayRst.VGameplayRst_Components_script_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_RIsOwner_L_Nentity_R
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UVerseEngine_Entity_entity*  __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint8                              RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

uint8 UVGameplayRst_Components_script_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_RIsOwner_L_Nentity_R(class UVerseEngine_Entity_entity* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Components_script_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_RIsOwner_L_Nentity_R");

	Params::UVGameplayRst_Components_script_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_RIsOwner_L_Nentity_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_Components_script_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_RIsEnabled
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// uint8                              RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

uint8 UVGameplayRst_Components_script_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_RIsEnabled(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Components_script_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_RIsEnabled");

	Params::UVGameplayRst_Components_script_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_RIsEnabled_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_Components_script_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_RGetName
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FVerseStringProperty_              RetVal                                                           (Parm, OutParm, ReturnParm, HasGetValueTypeHash)

FVerseStringProperty_ UVGameplayRst_Components_script_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_RGetName(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Components_script_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_RGetName");

	Params::UVGameplayRst_Components_script_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_RGetName_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_Components_script_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_RGetFullname
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FVerseStringProperty_              RetVal                                                           (Parm, OutParm, ReturnParm, HasGetValueTypeHash)

FVerseStringProperty_ UVGameplayRst_Components_script_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_RGetFullname(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Components_script_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_RGetFullname");

	Params::UVGameplayRst_Components_script_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_RGetFullname_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_Components_script_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_RGetComponentOfType_L_NcomponentType_20where_20componentType_R
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UClass*                      __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

FOptionalProperty_ UVGameplayRst_Components_script_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_RGetComponentOfType_L_NcomponentType_20where_20componentType_R(class UClass* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Components_script_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_RGetComponentOfType_L_NcomponentType_20where_20componentType_R");

	Params::UVGameplayRst_Components_script_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_RGetComponentOfType_L_NcomponentType_20where_20componentType_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_Components_script_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_RGetAllComponentsOfType_L_NcomponentType_20where_20componentType_R
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UClass*                      __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// TArray<class UEntityComponent*>    RetVal                                                           (Parm, OutParm, ReturnParm, ContainsInstancedReference)

TArray<class UEntityComponent*> UVGameplayRst_Components_script_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_RGetAllComponentsOfType_L_NcomponentType_20where_20componentType_R(class UClass* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Components_script_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_RGetAllComponentsOfType_L_NcomponentType_20where_20componentType_R");

	Params::UVGameplayRst_Components_script_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_RGetAllComponentsOfType_L_NcomponentType_20where_20componentType_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_Components_script_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_RAddToRequiredComponentList_L_N_Ksubtype_Lcomponent_R_R
// (Native, Public, BlueprintCallable)
// Parameters:
// TArray<class UClass*>              __verse_0xB2CDDD72_Argument                                      (Parm, ContainsInstancedReference)

void UVGameplayRst_Components_script_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_RAddToRequiredComponentList_L_N_Ksubtype_Lcomponent_R_R(const TArray<class UClass*>& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Components_script_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_RAddToRequiredComponentList_L_N_Ksubtype_Lcomponent_R_R");

	Params::UVGameplayRst_Components_script_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_RAddToRequiredComponentList_L_N_Ksubtype_Lcomponent_R_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VGameplayRst.VGameplayRst_Components_script_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_RAddToCreateComponentList_L_N_Ksubtype_Lcomponent_R_R
// (Native, Public, BlueprintCallable)
// Parameters:
// TArray<class UClass*>              __verse_0xB2CDDD72_Argument                                      (Parm, ContainsInstancedReference)

void UVGameplayRst_Components_script_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_RAddToCreateComponentList_L_N_Ksubtype_Lcomponent_R_R(const TArray<class UClass*>& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Components_script_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_RAddToCreateComponentList_L_N_Ksubtype_Lcomponent_R_R");

	Params::UVGameplayRst_Components_script_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_RAddToCreateComponentList_L_N_Ksubtype_Lcomponent_R_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VGameplayRst.VGameplayRst_Components_script_component.$InitInstance
// (None)
// Parameters:

void UVGameplayRst_Components_script_component::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Components_script_component", "$InitInstance");

	Params::UVGameplayRst_Components_script_component__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VGameplayRst.VGameplayRst_Components_script_component.$Block
// (None)
// Parameters:

void UVGameplayRst_Components_script_component::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Components_script_component", "$Block");

	Params::UVGameplayRst_Components_script_component__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VGameplayRst.VGameplayRst_Components_script_component.$InitCDO
// (HasDefaults)
// Parameters:
// uint8                              _ExprResult_0                                                    (NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_1                                                    (NoDestructor, HasGetValueTypeHash)

void UVGameplayRst_Components_script_component::_InitCDO(uint8 _ExprResult_0, uint8 _ExprResult_1)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Components_script_component", "$InitCDO");

	Params::UVGameplayRst_Components_script_component__InitCDO_Params Parms{};

	Parms._ExprResult_0 = _ExprResult_0;
	Parms._ExprResult_1 = _ExprResult_1;

	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VGameplayRst.VGameplayRst_Datastore_datastore_component
// (None)

class UClass* UVGameplayRst_Datastore_datastore_component::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VGameplayRst_Datastore_datastore_component");

	return Clss;
}


// VGameplayRst_Datastore_datastore_component VGameplayRst.Default__VGameplayRst_Datastore_datastore_component
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVGameplayRst_Datastore_datastore_component* UVGameplayRst_Datastore_datastore_component::GetDefaultObj()
{
	static class UVGameplayRst_Datastore_datastore_component* Default = nullptr;

	if (!Default)
		Default = static_cast<UVGameplayRst_Datastore_datastore_component*>(UVGameplayRst_Datastore_datastore_component::StaticClass()->DefaultObject);

	return Default;
}


// Function VGameplayRst.VGameplayRst_Datastore_datastore_component.$InitInstance
// (None)
// Parameters:

void UVGameplayRst_Datastore_datastore_component::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Datastore_datastore_component", "$InitInstance");

	Params::UVGameplayRst_Datastore_datastore_component__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VGameplayRst.VGameplayRst_Datastore_datastore_component.$Block
// (None)
// Parameters:

void UVGameplayRst_Datastore_datastore_component::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Datastore_datastore_component", "$Block");

	Params::UVGameplayRst_Datastore_datastore_component__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VGameplayRst.VGameplayRst_Datastore_datastore_component.$InitCDO
// (None)
// Parameters:

void UVGameplayRst_Datastore_datastore_component::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Datastore_datastore_component", "$InitCDO");

	Params::UVGameplayRst_Datastore_datastore_component__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VGameplayRst.VGameplayRst_Datastore_DatastoreComponent
// (None)

class UClass* UVGameplayRst_Datastore_DatastoreComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VGameplayRst_Datastore_DatastoreComponent");

	return Clss;
}


// VGameplayRst_Datastore_DatastoreComponent VGameplayRst.Default__VGameplayRst_Datastore_DatastoreComponent
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVGameplayRst_Datastore_DatastoreComponent* UVGameplayRst_Datastore_DatastoreComponent::GetDefaultObj()
{
	static class UVGameplayRst_Datastore_DatastoreComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UVGameplayRst_Datastore_DatastoreComponent*>(UVGameplayRst_Datastore_DatastoreComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function VGameplayRst.VGameplayRst_Datastore_DatastoreComponent._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fDatastore_2fDatastoreComponent_N_RSetDatastoreValueInt_L_Nplayer__component_M_N_Kchar_M_Nint_R
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FTuple_Lplayer__component_M_Kchar_Mint_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UVGameplayRst_Datastore_DatastoreComponent::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fDatastore_2fDatastoreComponent_N_RSetDatastoreValueInt_L_Nplayer__component_M_N_Kchar_M_Nint_R(const struct FTuple_Lplayer__component_M_Kchar_Mint_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Datastore_DatastoreComponent", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fDatastore_2fDatastoreComponent_N_RSetDatastoreValueInt_L_Nplayer__component_M_N_Kchar_M_Nint_R");

	Params::UVGameplayRst_Datastore_DatastoreComponent__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fDatastore_2fDatastoreComponent_N_RSetDatastoreValueInt_L_Nplayer__component_M_N_Kchar_M_Nint_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VGameplayRst.VGameplayRst_Datastore_DatastoreComponent._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fDatastore_2fDatastoreComponent_N_RSetDatastoreValue_L_Nplayer__component_M_N_Kchar_M_N_Kchar_R
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FTuple_Lplayer__component_M_Kchar_M_Kchar_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UVGameplayRst_Datastore_DatastoreComponent::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fDatastore_2fDatastoreComponent_N_RSetDatastoreValue_L_Nplayer__component_M_N_Kchar_M_N_Kchar_R(const struct FTuple_Lplayer__component_M_Kchar_M_Kchar_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Datastore_DatastoreComponent", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fDatastore_2fDatastoreComponent_N_RSetDatastoreValue_L_Nplayer__component_M_N_Kchar_M_N_Kchar_R");

	Params::UVGameplayRst_Datastore_DatastoreComponent__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fDatastore_2fDatastoreComponent_N_RSetDatastoreValue_L_Nplayer__component_M_N_Kchar_M_N_Kchar_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VGameplayRst.VGameplayRst_Datastore_DatastoreComponent._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fDatastore_2fDatastoreComponent_N_RClearAllDatastoreValues_L_Nplayer__component_R
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USimulation_player_component*__verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

void UVGameplayRst_Datastore_DatastoreComponent::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fDatastore_2fDatastoreComponent_N_RClearAllDatastoreValues_L_Nplayer__component_R(class USimulation_player_component* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Datastore_DatastoreComponent", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fDatastore_2fDatastoreComponent_N_RClearAllDatastoreValues_L_Nplayer__component_R");

	Params::UVGameplayRst_Datastore_DatastoreComponent__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fDatastore_2fDatastoreComponent_N_RClearAllDatastoreValues_L_Nplayer__component_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VGameplayRst.VGameplayRst_Datastore_DatastoreComponent.$InitCDO
// (None)
// Parameters:

void UVGameplayRst_Datastore_DatastoreComponent::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Datastore_DatastoreComponent", "$InitCDO");

	Params::UVGameplayRst_Datastore_DatastoreComponent__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VGameplayRst.VGameplayRst_EntityUtil
// (None)

class UClass* UVGameplayRst_EntityUtil::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VGameplayRst_EntityUtil");

	return Clss;
}


// VGameplayRst_EntityUtil VGameplayRst.Default__VGameplayRst_EntityUtil
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVGameplayRst_EntityUtil* UVGameplayRst_EntityUtil::GetDefaultObj()
{
	static class UVGameplayRst_EntityUtil* Default = nullptr;

	if (!Default)
		Default = static_cast<UVGameplayRst_EntityUtil*>(UVGameplayRst_EntityUtil::StaticClass()->DefaultObject);

	return Default;
}


// Function VGameplayRst.VGameplayRst_EntityUtil._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fEntityUtil_N_RSpawnEntityFromAsset_L_N_Kchar_M_Ntransform_M_N_Kchar_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_Kchar_Mtransform_M_Kchar_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UVGameplayRst_EntityUtil::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fEntityUtil_N_RSpawnEntityFromAsset_L_N_Kchar_M_Ntransform_M_N_Kchar_R(const struct FTuple_L_Kchar_Mtransform_M_Kchar_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_EntityUtil", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fEntityUtil_N_RSpawnEntityFromAsset_L_N_Kchar_M_Ntransform_M_N_Kchar_R");

	Params::UVGameplayRst_EntityUtil__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fEntityUtil_N_RSpawnEntityFromAsset_L_N_Kchar_M_Ntransform_M_N_Kchar_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_EntityUtil._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fEntityUtil_N_RSpawnEntity_L_Nvector3_M_N_Kchar_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lvector3_M_Kchar_R   __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

FOptionalProperty_ UVGameplayRst_EntityUtil::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fEntityUtil_N_RSpawnEntity_L_Nvector3_M_N_Kchar_R(const struct FTuple_Lvector3_M_Kchar_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_EntityUtil", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fEntityUtil_N_RSpawnEntity_L_Nvector3_M_N_Kchar_R");

	Params::UVGameplayRst_EntityUtil__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fEntityUtil_N_RSpawnEntity_L_Nvector3_M_N_Kchar_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_EntityUtil._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fEntityUtil_N_RSpawnEntity_L_Nvector3_M_Nvector3_M_Nvector3_M_N_Kchar_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lvector3_Mvector3_Mvector3_M_Kchar_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

FOptionalProperty_ UVGameplayRst_EntityUtil::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fEntityUtil_N_RSpawnEntity_L_Nvector3_M_Nvector3_M_Nvector3_M_N_Kchar_R(const struct FTuple_Lvector3_Mvector3_Mvector3_M_Kchar_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_EntityUtil", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fEntityUtil_N_RSpawnEntity_L_Nvector3_M_Nvector3_M_Nvector3_M_N_Kchar_R");

	Params::UVGameplayRst_EntityUtil__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fEntityUtil_N_RSpawnEntity_L_Nvector3_M_Nvector3_M_Nvector3_M_N_Kchar_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_EntityUtil._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fEntityUtil_N_RSpawnEntity_L_Ntransform_M_N_Kchar_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Ltransform_M_Kchar_R __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

FOptionalProperty_ UVGameplayRst_EntityUtil::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fEntityUtil_N_RSpawnEntity_L_Ntransform_M_N_Kchar_R(const struct FTuple_Ltransform_M_Kchar_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_EntityUtil", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fEntityUtil_N_RSpawnEntity_L_Ntransform_M_N_Kchar_R");

	Params::UVGameplayRst_EntityUtil__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fEntityUtil_N_RSpawnEntity_L_Ntransform_M_N_Kchar_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_EntityUtil._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fEntityUtil_N_RSpawnEmptyEntity_L_Ntransform_M_N_Kchar_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Ltransform_M_Kchar_R __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UVGameplayRst_EntityUtil::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fEntityUtil_N_RSpawnEmptyEntity_L_Ntransform_M_N_Kchar_R(const struct FTuple_Ltransform_M_Kchar_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_EntityUtil", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fEntityUtil_N_RSpawnEmptyEntity_L_Ntransform_M_N_Kchar_R");

	Params::UVGameplayRst_EntityUtil__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fEntityUtil_N_RSpawnEmptyEntity_L_Ntransform_M_N_Kchar_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_EntityUtil._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fEntityUtil_N_RGetComponentOfTypeFromComponentForEntity_L_Ncomponent_M_Nint_M_NType_20where_20Type_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lcomponent_Mint_Many_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

FOptionalProperty_ UVGameplayRst_EntityUtil::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fEntityUtil_N_RGetComponentOfTypeFromComponentForEntity_L_Ncomponent_M_Nint_M_NType_20where_20Type_R(const struct FTuple_Lcomponent_Mint_Many_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_EntityUtil", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fEntityUtil_N_RGetComponentOfTypeFromComponentForEntity_L_Ncomponent_M_Nint_M_NType_20where_20Type_R");

	Params::UVGameplayRst_EntityUtil__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fEntityUtil_N_RGetComponentOfTypeFromComponentForEntity_L_Ncomponent_M_Nint_M_NType_20where_20Type_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_EntityUtil._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fEntityUtil_N_RGetComponentOfTypeFromComponent_L_Ncomponent_M_NType_20where_20Type_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lcomponent_Many_R    __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

FOptionalProperty_ UVGameplayRst_EntityUtil::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fEntityUtil_N_RGetComponentOfTypeFromComponent_L_Ncomponent_M_NType_20where_20Type_R(const struct FTuple_Lcomponent_Many_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_EntityUtil", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fEntityUtil_N_RGetComponentOfTypeFromComponent_L_Ncomponent_M_NType_20where_20Type_R");

	Params::UVGameplayRst_EntityUtil__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fEntityUtil_N_RGetComponentOfTypeFromComponent_L_Ncomponent_M_NType_20where_20Type_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_EntityUtil._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fEntityUtil_N_RCreateAndAddComponent_L_Nint_M_NComponentType_20where_20ComponentType_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lint_Mcomponent_R    __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UEntityComponent*            RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UEntityComponent* UVGameplayRst_EntityUtil::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fEntityUtil_N_RCreateAndAddComponent_L_Nint_M_NComponentType_20where_20ComponentType_R(const struct FTuple_Lint_Mcomponent_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_EntityUtil", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fEntityUtil_N_RCreateAndAddComponent_L_Nint_M_NComponentType_20where_20ComponentType_R");

	Params::UVGameplayRst_EntityUtil__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fEntityUtil_N_RCreateAndAddComponent_L_Nint_M_NComponentType_20where_20ComponentType_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_EntityUtil.$InitCDO
// (None)
// Parameters:

void UVGameplayRst_EntityUtil::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_EntityUtil", "$InitCDO");

	Params::UVGameplayRst_EntityUtil__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VGameplayRst.VGameplayRst_GameObjects
// (None)

class UClass* UVGameplayRst_GameObjects::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VGameplayRst_GameObjects");

	return Clss;
}


// VGameplayRst_GameObjects VGameplayRst.Default__VGameplayRst_GameObjects
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVGameplayRst_GameObjects* UVGameplayRst_GameObjects::GetDefaultObj()
{
	static class UVGameplayRst_GameObjects* Default = nullptr;

	if (!Default)
		Default = static_cast<UVGameplayRst_GameObjects*>(UVGameplayRst_GameObjects::StaticClass()->DefaultObject);

	return Default;
}


// Function VGameplayRst.VGameplayRst_GameObjects._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateWorldAnchor_L_Nvector3_R
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FSpatialMath_vector3        __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0x11C2BB4E_OptionResult_1                                (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_0                                                        (HasGetValueTypeHash)
// struct FTuple_Lvector3_M_Kchar_R   _ExprResult_1                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_2                                                    (HasGetValueTypeHash)
// class UVGameplayRst_GameObjects_world_anchor*__verse_0x95D09D0E_Result_2                                      (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_3                                               (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UVGameplayRst_GameObjects_world_anchor*__verse_0x00000000__3                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_4                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_5                                                        (HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0x11C2BB4E_OptionResult_4                                (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_6                                                        (HasGetValueTypeHash)
// struct FTuple_Lvector3_M_Kchar_R   _ExprResult_7                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_8                                                    (HasGetValueTypeHash)
// class UVGameplayRst_GameObjects_world_anchor*__verse_0x95D09D0E_Result_5                                      (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_9                                               (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UVGameplayRst_GameObjects_world_anchor*__verse_0x00000000__6                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_10                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_11                                                       (HasGetValueTypeHash)

FOptionalProperty_ UVGameplayRst_GameObjects::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateWorldAnchor_L_Nvector3_R(const struct FSpatialMath_vector3& __verse_0xB2CDDD72_Argument, FOptionalProperty_ __verse_0x11C2BB4E_OptionResult_1, FVerseFunctionProperty_ _Callee_0, const struct FTuple_Lvector3_M_Kchar_R& _ExprResult_1, FVerseStringProperty_ _ExprResult_2, class UVGameplayRst_GameObjects_world_anchor* __verse_0x95D09D0E_Result_2, FOptionalProperty_ _ExprResultStack_3, class UVGameplayRst_GameObjects_world_anchor* __verse_0x00000000__3, enum class EVerseTrue _InvokeSureResultDummy_4, FVerseFunctionProperty_ _Callee_5, FOptionalProperty_ __verse_0x11C2BB4E_OptionResult_4, FVerseFunctionProperty_ _Callee_6, const struct FTuple_Lvector3_M_Kchar_R& _ExprResult_7, FVerseStringProperty_ _ExprResult_8, class UVGameplayRst_GameObjects_world_anchor* __verse_0x95D09D0E_Result_5, FOptionalProperty_ _ExprResultStack_9, class UVGameplayRst_GameObjects_world_anchor* __verse_0x00000000__6, enum class EVerseTrue _InvokeSureResultDummy_10, FVerseFunctionProperty_ _Callee_11)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_GameObjects", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateWorldAnchor_L_Nvector3_R");

	Params::UVGameplayRst_GameObjects__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateWorldAnchor_L_Nvector3_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms.__verse_0x11C2BB4E_OptionResult_1 = __verse_0x11C2BB4E_OptionResult_1;
	Parms._Callee_0 = _Callee_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms.__verse_0x95D09D0E_Result_2 = __verse_0x95D09D0E_Result_2;
	Parms._ExprResultStack_3 = _ExprResultStack_3;
	Parms.__verse_0x00000000__3 = __verse_0x00000000__3;
	Parms._InvokeSureResultDummy_4 = _InvokeSureResultDummy_4;
	Parms._Callee_5 = _Callee_5;
	Parms.__verse_0x11C2BB4E_OptionResult_4 = __verse_0x11C2BB4E_OptionResult_4;
	Parms._Callee_6 = _Callee_6;
	Parms._ExprResult_7 = _ExprResult_7;
	Parms._ExprResult_8 = _ExprResult_8;
	Parms.__verse_0x95D09D0E_Result_5 = __verse_0x95D09D0E_Result_5;
	Parms._ExprResultStack_9 = _ExprResultStack_9;
	Parms.__verse_0x00000000__6 = __verse_0x00000000__6;
	Parms._InvokeSureResultDummy_10 = _InvokeSureResultDummy_10;
	Parms._Callee_11 = _Callee_11;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_GameObjects._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateWorldAnchor_L_Ntag_R
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UTags_tag*                   __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0x00000000__1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEntityComponent*            __verse_0x44719314_FoundComponent_3                              (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_0                                               (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_1                                                        (HasGetValueTypeHash)
// class UVerseEngine_Entity_entity*  __verse_0x5F5E89D8_ValidEntity_3                                 (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_2                                               (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_3                                                        (HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0xB24E940D_OptionComponent_3                             (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UVerseEngine_Entity_entity*  __verse_0x00000000__4                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_4                                                        (HasGetValueTypeHash)
// class UVGameplayRst_Transform_position_component*__verse_0xA82B0967_Position_5                                    (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 _FallibleType_5                                                  (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_6                                               (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UVGameplayRst_GameObjects_world_anchor*__verse_0x95D09D0E_Result_6                                      (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint64                             _InstancingGraph_7                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_8                                                    (NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_9                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0x00000000__8                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEntityComponent*            __verse_0x44719314_FoundComponent_10                             (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_10                                              (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_11                                                       (HasGetValueTypeHash)
// class UVerseEngine_Entity_entity*  __verse_0x5F5E89D8_ValidEntity_10                                (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_12                                              (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_13                                                       (HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0xB24E940D_OptionComponent_10                            (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UVerseEngine_Entity_entity*  __verse_0x00000000__11                                           (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_14                                                       (HasGetValueTypeHash)
// class UVGameplayRst_Transform_position_component*__verse_0xA82B0967_Position_12                                   (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 _FallibleType_15                                                 (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_16                                              (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UVGameplayRst_GameObjects_world_anchor*__verse_0x95D09D0E_Result_13                                     (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint64                             _InstancingGraph_17                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_18                                                   (NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_19                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionalProperty_ UVGameplayRst_GameObjects::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateWorldAnchor_L_Ntag_R(class UTags_tag* __verse_0xB2CDDD72_Argument, FOptionalProperty_ __verse_0x00000000__1, class UEntityComponent* __verse_0x44719314_FoundComponent_3, FOptionalProperty_ _ExprResultStack_0, FVerseFunctionProperty_ _Callee_1, class UVerseEngine_Entity_entity* __verse_0x5F5E89D8_ValidEntity_3, FOptionalProperty_ _ExprResultStack_2, FVerseFunctionProperty_ _Callee_3, FOptionalProperty_ __verse_0xB24E940D_OptionComponent_3, class UVerseEngine_Entity_entity* __verse_0x00000000__4, FVerseFunctionProperty_ _Callee_4, class UVGameplayRst_Transform_position_component* __verse_0xA82B0967_Position_5, FOptionalProperty_ _FallibleType_5, FOptionalProperty_ _ExprResultStack_6, class UVGameplayRst_GameObjects_world_anchor* __verse_0x95D09D0E_Result_6, uint64 _InstancingGraph_7, uint8 _ExprResult_8, FOptionalProperty_ _ExprResultStack_9, FOptionalProperty_ __verse_0x00000000__8, class UEntityComponent* __verse_0x44719314_FoundComponent_10, FOptionalProperty_ _ExprResultStack_10, FVerseFunctionProperty_ _Callee_11, class UVerseEngine_Entity_entity* __verse_0x5F5E89D8_ValidEntity_10, FOptionalProperty_ _ExprResultStack_12, FVerseFunctionProperty_ _Callee_13, FOptionalProperty_ __verse_0xB24E940D_OptionComponent_10, class UVerseEngine_Entity_entity* __verse_0x00000000__11, FVerseFunctionProperty_ _Callee_14, class UVGameplayRst_Transform_position_component* __verse_0xA82B0967_Position_12, FOptionalProperty_ _FallibleType_15, FOptionalProperty_ _ExprResultStack_16, class UVGameplayRst_GameObjects_world_anchor* __verse_0x95D09D0E_Result_13, uint64 _InstancingGraph_17, uint8 _ExprResult_18, FOptionalProperty_ _ExprResultStack_19)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_GameObjects", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateWorldAnchor_L_Ntag_R");

	Params::UVGameplayRst_GameObjects__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateWorldAnchor_L_Ntag_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms.__verse_0x00000000__1 = __verse_0x00000000__1;
	Parms.__verse_0x44719314_FoundComponent_3 = __verse_0x44719314_FoundComponent_3;
	Parms._ExprResultStack_0 = _ExprResultStack_0;
	Parms._Callee_1 = _Callee_1;
	Parms.__verse_0x5F5E89D8_ValidEntity_3 = __verse_0x5F5E89D8_ValidEntity_3;
	Parms._ExprResultStack_2 = _ExprResultStack_2;
	Parms._Callee_3 = _Callee_3;
	Parms.__verse_0xB24E940D_OptionComponent_3 = __verse_0xB24E940D_OptionComponent_3;
	Parms.__verse_0x00000000__4 = __verse_0x00000000__4;
	Parms._Callee_4 = _Callee_4;
	Parms.__verse_0xA82B0967_Position_5 = __verse_0xA82B0967_Position_5;
	Parms._FallibleType_5 = _FallibleType_5;
	Parms._ExprResultStack_6 = _ExprResultStack_6;
	Parms.__verse_0x95D09D0E_Result_6 = __verse_0x95D09D0E_Result_6;
	Parms._InstancingGraph_7 = _InstancingGraph_7;
	Parms._ExprResult_8 = _ExprResult_8;
	Parms._ExprResultStack_9 = _ExprResultStack_9;
	Parms.__verse_0x00000000__8 = __verse_0x00000000__8;
	Parms.__verse_0x44719314_FoundComponent_10 = __verse_0x44719314_FoundComponent_10;
	Parms._ExprResultStack_10 = _ExprResultStack_10;
	Parms._Callee_11 = _Callee_11;
	Parms.__verse_0x5F5E89D8_ValidEntity_10 = __verse_0x5F5E89D8_ValidEntity_10;
	Parms._ExprResultStack_12 = _ExprResultStack_12;
	Parms._Callee_13 = _Callee_13;
	Parms.__verse_0xB24E940D_OptionComponent_10 = __verse_0xB24E940D_OptionComponent_10;
	Parms.__verse_0x00000000__11 = __verse_0x00000000__11;
	Parms._Callee_14 = _Callee_14;
	Parms.__verse_0xA82B0967_Position_12 = __verse_0xA82B0967_Position_12;
	Parms._FallibleType_15 = _FallibleType_15;
	Parms._ExprResultStack_16 = _ExprResultStack_16;
	Parms.__verse_0x95D09D0E_Result_13 = __verse_0x95D09D0E_Result_13;
	Parms._InstancingGraph_17 = _InstancingGraph_17;
	Parms._ExprResult_18 = _ExprResult_18;
	Parms._ExprResultStack_19 = _ExprResultStack_19;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_GameObjects._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateWorldAnchor_L_Nentity_R
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UVerseEngine_Entity_entity*  __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0x00000000__1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0x68BB659B_OptionEntity_2                                (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UVerseEngine_Entity_entity*  __verse_0x00000000__3                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_0                                                        (HasGetValueTypeHash)
// class UVGameplayRst_Transform_position_component*__verse_0xA82B0967_Position_4                                    (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 _FallibleType_1                                                  (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_2                                               (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UVGameplayRst_GameObjects_world_anchor*_ExprResult_3                                                    (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint64                             _InstancingGraph_4                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_5                                                    (NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_6                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0x00000000__7                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0x68BB659B_OptionEntity_8                                (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UVerseEngine_Entity_entity*  __verse_0x00000000__9                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_7                                                        (HasGetValueTypeHash)
// class UVGameplayRst_Transform_position_component*__verse_0xA82B0967_Position_10                                   (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 _FallibleType_8                                                  (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_9                                               (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UVGameplayRst_GameObjects_world_anchor*_ExprResult_10                                                   (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint64                             _InstancingGraph_11                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_12                                                   (NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_13                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionalProperty_ UVGameplayRst_GameObjects::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateWorldAnchor_L_Nentity_R(class UVerseEngine_Entity_entity* __verse_0xB2CDDD72_Argument, FOptionalProperty_ __verse_0x00000000__1, FOptionalProperty_ __verse_0x68BB659B_OptionEntity_2, class UVerseEngine_Entity_entity* __verse_0x00000000__3, FVerseFunctionProperty_ _Callee_0, class UVGameplayRst_Transform_position_component* __verse_0xA82B0967_Position_4, FOptionalProperty_ _FallibleType_1, FOptionalProperty_ _ExprResultStack_2, class UVGameplayRst_GameObjects_world_anchor* _ExprResult_3, uint64 _InstancingGraph_4, uint8 _ExprResult_5, FOptionalProperty_ _ExprResultStack_6, FOptionalProperty_ __verse_0x00000000__7, FOptionalProperty_ __verse_0x68BB659B_OptionEntity_8, class UVerseEngine_Entity_entity* __verse_0x00000000__9, FVerseFunctionProperty_ _Callee_7, class UVGameplayRst_Transform_position_component* __verse_0xA82B0967_Position_10, FOptionalProperty_ _FallibleType_8, FOptionalProperty_ _ExprResultStack_9, class UVGameplayRst_GameObjects_world_anchor* _ExprResult_10, uint64 _InstancingGraph_11, uint8 _ExprResult_12, FOptionalProperty_ _ExprResultStack_13)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_GameObjects", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateWorldAnchor_L_Nentity_R");

	Params::UVGameplayRst_GameObjects__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateWorldAnchor_L_Nentity_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms.__verse_0x00000000__1 = __verse_0x00000000__1;
	Parms.__verse_0x68BB659B_OptionEntity_2 = __verse_0x68BB659B_OptionEntity_2;
	Parms.__verse_0x00000000__3 = __verse_0x00000000__3;
	Parms._Callee_0 = _Callee_0;
	Parms.__verse_0xA82B0967_Position_4 = __verse_0xA82B0967_Position_4;
	Parms._FallibleType_1 = _FallibleType_1;
	Parms._ExprResultStack_2 = _ExprResultStack_2;
	Parms._ExprResult_3 = _ExprResult_3;
	Parms._InstancingGraph_4 = _InstancingGraph_4;
	Parms._ExprResult_5 = _ExprResult_5;
	Parms._ExprResultStack_6 = _ExprResultStack_6;
	Parms.__verse_0x00000000__7 = __verse_0x00000000__7;
	Parms.__verse_0x68BB659B_OptionEntity_8 = __verse_0x68BB659B_OptionEntity_8;
	Parms.__verse_0x00000000__9 = __verse_0x00000000__9;
	Parms._Callee_7 = _Callee_7;
	Parms.__verse_0xA82B0967_Position_10 = __verse_0xA82B0967_Position_10;
	Parms._FallibleType_8 = _FallibleType_8;
	Parms._ExprResultStack_9 = _ExprResultStack_9;
	Parms._ExprResult_10 = _ExprResult_10;
	Parms._InstancingGraph_11 = _InstancingGraph_11;
	Parms._ExprResult_12 = _ExprResult_12;
	Parms._ExprResultStack_13 = _ExprResultStack_13;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_GameObjects._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateWorldAnchor_L_Nvector3_M_N_Kchar_R
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_Lvector3_M_Kchar_R   __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0x00000000__1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0x68BB659B_OptionEntity_2                                (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_0                                                        (HasGetValueTypeHash)
// struct FTuple_Lvector3_M_Kchar_R   _ExprResult_1                                                    (HasGetValueTypeHash)
// class UVerseEngine_Entity_entity*  __verse_0x5F5E89D8_ValidEntity_3                                 (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_2                                               (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0x11C2BB4E_OptionResult_4                                (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_3                                                        (HasGetValueTypeHash)
// class UVGameplayRst_GameObjects_world_anchor*__verse_0x95D09D0E_Result_5                                      (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_4                                               (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UVGameplayRst_GameObjects_world_anchor*__verse_0x00000000__6                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_5                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_6                                                        (HasGetValueTypeHash)
// uint8                              _ExprResult_7                                                    (NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_8                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0x00000000__8                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0x68BB659B_OptionEntity_9                                (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_9                                                        (HasGetValueTypeHash)
// struct FTuple_Lvector3_M_Kchar_R   _ExprResult_10                                                   (HasGetValueTypeHash)
// class UVerseEngine_Entity_entity*  __verse_0x5F5E89D8_ValidEntity_10                                (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_11                                              (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0x11C2BB4E_OptionResult_11                               (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_12                                                       (HasGetValueTypeHash)
// class UVGameplayRst_GameObjects_world_anchor*__verse_0x95D09D0E_Result_12                                     (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_13                                              (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UVGameplayRst_GameObjects_world_anchor*__verse_0x00000000__13                                           (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_14                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_15                                                       (HasGetValueTypeHash)
// uint8                              _ExprResult_16                                                   (NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_17                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionalProperty_ UVGameplayRst_GameObjects::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateWorldAnchor_L_Nvector3_M_N_Kchar_R(const struct FTuple_Lvector3_M_Kchar_R& __verse_0xB2CDDD72_Argument, FOptionalProperty_ __verse_0x00000000__1, FOptionalProperty_ __verse_0x68BB659B_OptionEntity_2, FVerseFunctionProperty_ _Callee_0, const struct FTuple_Lvector3_M_Kchar_R& _ExprResult_1, class UVerseEngine_Entity_entity* __verse_0x5F5E89D8_ValidEntity_3, FOptionalProperty_ _ExprResultStack_2, FOptionalProperty_ __verse_0x11C2BB4E_OptionResult_4, FVerseFunctionProperty_ _Callee_3, class UVGameplayRst_GameObjects_world_anchor* __verse_0x95D09D0E_Result_5, FOptionalProperty_ _ExprResultStack_4, class UVGameplayRst_GameObjects_world_anchor* __verse_0x00000000__6, enum class EVerseTrue _InvokeSureResultDummy_5, FVerseFunctionProperty_ _Callee_6, uint8 _ExprResult_7, FOptionalProperty_ _ExprResultStack_8, FOptionalProperty_ __verse_0x00000000__8, FOptionalProperty_ __verse_0x68BB659B_OptionEntity_9, FVerseFunctionProperty_ _Callee_9, const struct FTuple_Lvector3_M_Kchar_R& _ExprResult_10, class UVerseEngine_Entity_entity* __verse_0x5F5E89D8_ValidEntity_10, FOptionalProperty_ _ExprResultStack_11, FOptionalProperty_ __verse_0x11C2BB4E_OptionResult_11, FVerseFunctionProperty_ _Callee_12, class UVGameplayRst_GameObjects_world_anchor* __verse_0x95D09D0E_Result_12, FOptionalProperty_ _ExprResultStack_13, class UVGameplayRst_GameObjects_world_anchor* __verse_0x00000000__13, enum class EVerseTrue _InvokeSureResultDummy_14, FVerseFunctionProperty_ _Callee_15, uint8 _ExprResult_16, FOptionalProperty_ _ExprResultStack_17)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_GameObjects", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateWorldAnchor_L_Nvector3_M_N_Kchar_R");

	Params::UVGameplayRst_GameObjects__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateWorldAnchor_L_Nvector3_M_N_Kchar_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms.__verse_0x00000000__1 = __verse_0x00000000__1;
	Parms.__verse_0x68BB659B_OptionEntity_2 = __verse_0x68BB659B_OptionEntity_2;
	Parms._Callee_0 = _Callee_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms.__verse_0x5F5E89D8_ValidEntity_3 = __verse_0x5F5E89D8_ValidEntity_3;
	Parms._ExprResultStack_2 = _ExprResultStack_2;
	Parms.__verse_0x11C2BB4E_OptionResult_4 = __verse_0x11C2BB4E_OptionResult_4;
	Parms._Callee_3 = _Callee_3;
	Parms.__verse_0x95D09D0E_Result_5 = __verse_0x95D09D0E_Result_5;
	Parms._ExprResultStack_4 = _ExprResultStack_4;
	Parms.__verse_0x00000000__6 = __verse_0x00000000__6;
	Parms._InvokeSureResultDummy_5 = _InvokeSureResultDummy_5;
	Parms._Callee_6 = _Callee_6;
	Parms._ExprResult_7 = _ExprResult_7;
	Parms._ExprResultStack_8 = _ExprResultStack_8;
	Parms.__verse_0x00000000__8 = __verse_0x00000000__8;
	Parms.__verse_0x68BB659B_OptionEntity_9 = __verse_0x68BB659B_OptionEntity_9;
	Parms._Callee_9 = _Callee_9;
	Parms._ExprResult_10 = _ExprResult_10;
	Parms.__verse_0x5F5E89D8_ValidEntity_10 = __verse_0x5F5E89D8_ValidEntity_10;
	Parms._ExprResultStack_11 = _ExprResultStack_11;
	Parms.__verse_0x11C2BB4E_OptionResult_11 = __verse_0x11C2BB4E_OptionResult_11;
	Parms._Callee_12 = _Callee_12;
	Parms.__verse_0x95D09D0E_Result_12 = __verse_0x95D09D0E_Result_12;
	Parms._ExprResultStack_13 = _ExprResultStack_13;
	Parms.__verse_0x00000000__13 = __verse_0x00000000__13;
	Parms._InvokeSureResultDummy_14 = _InvokeSureResultDummy_14;
	Parms._Callee_15 = _Callee_15;
	Parms._ExprResult_16 = _ExprResult_16;
	Parms._ExprResultStack_17 = _ExprResultStack_17;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_GameObjects._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_N_Ksubtype_Lcomponent_R_M_Nvector3_M_Nrotation_M_Nvector3_M_N_Kchar_M_Nmesh_M_Nmaterial_R
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_L_Ksubtype_Lcomponent_R_Mvector3_Mrotation_Mvector3_M_Kchar_Mmesh_Mmaterial_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0x2BD82FE8_MaybeModel_1                                  (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_0                                                        (HasGetValueTypeHash)
// struct FTuple_L_Ksubtype_Lcomponent_R_Mtransform_M_Kchar_Mmesh_R_ExprResult_1                                                    (HasGetValueTypeHash)
// struct FSpatialMath_transform      _ExprResult_2                                                    (NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_3                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_4                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_5                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_6                                                    (HasGetValueTypeHash)
// class UVGameplayRst_GameObjects_model*__verse_0x986678F9_Model_2                                       (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_7                                               (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UVGameplayRst_Geometry_fixed_mesh_component*__verse_0x00000000__3                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_8                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_9                                                        (HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0x2BD82FE8_MaybeModel_4                                  (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_10                                                       (HasGetValueTypeHash)
// struct FTuple_L_Ksubtype_Lcomponent_R_Mtransform_M_Kchar_Mmesh_R_ExprResult_11                                                   (HasGetValueTypeHash)
// struct FSpatialMath_transform      _ExprResult_12                                                   (NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_13                                              (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_14                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_15                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_16                                                   (HasGetValueTypeHash)
// class UVGameplayRst_GameObjects_model*__verse_0x986678F9_Model_5                                       (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_17                                              (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UVGameplayRst_Geometry_fixed_mesh_component*__verse_0x00000000__6                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_18                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_19                                                       (HasGetValueTypeHash)

FOptionalProperty_ UVGameplayRst_GameObjects::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_N_Ksubtype_Lcomponent_R_M_Nvector3_M_Nrotation_M_Nvector3_M_N_Kchar_M_Nmesh_M_Nmaterial_R(const struct FTuple_L_Ksubtype_Lcomponent_R_Mvector3_Mrotation_Mvector3_M_Kchar_Mmesh_Mmaterial_R& __verse_0xB2CDDD72_Argument, FOptionalProperty_ __verse_0x2BD82FE8_MaybeModel_1, FVerseFunctionProperty_ _Callee_0, const struct FTuple_L_Ksubtype_Lcomponent_R_Mtransform_M_Kchar_Mmesh_R& _ExprResult_1, const struct FSpatialMath_transform& _ExprResult_2, TMap<FVerseStringProperty_, uint8> _ExprResultStack_3, FVerseStringProperty_ _ExprResult_4, FVerseStringProperty_ _ExprResult_5, FVerseStringProperty_ _ExprResult_6, class UVGameplayRst_GameObjects_model* __verse_0x986678F9_Model_2, FOptionalProperty_ _ExprResultStack_7, class UVGameplayRst_Geometry_fixed_mesh_component* __verse_0x00000000__3, enum class EVerseTrue _InvokeSureResultDummy_8, FVerseFunctionProperty_ _Callee_9, FOptionalProperty_ __verse_0x2BD82FE8_MaybeModel_4, FVerseFunctionProperty_ _Callee_10, const struct FTuple_L_Ksubtype_Lcomponent_R_Mtransform_M_Kchar_Mmesh_R& _ExprResult_11, const struct FSpatialMath_transform& _ExprResult_12, TMap<FVerseStringProperty_, uint8> _ExprResultStack_13, FVerseStringProperty_ _ExprResult_14, FVerseStringProperty_ _ExprResult_15, FVerseStringProperty_ _ExprResult_16, class UVGameplayRst_GameObjects_model* __verse_0x986678F9_Model_5, FOptionalProperty_ _ExprResultStack_17, class UVGameplayRst_Geometry_fixed_mesh_component* __verse_0x00000000__6, enum class EVerseTrue _InvokeSureResultDummy_18, FVerseFunctionProperty_ _Callee_19)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_GameObjects", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_N_Ksubtype_Lcomponent_R_M_Nvector3_M_Nrotation_M_Nvector3_M_N_Kchar_M_Nmesh_M_Nmaterial_R");

	Params::UVGameplayRst_GameObjects__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_N_Ksubtype_Lcomponent_R_M_Nvector3_M_Nrotation_M_Nvector3_M_N_Kchar_M_Nmesh_M_Nmaterial_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms.__verse_0x2BD82FE8_MaybeModel_1 = __verse_0x2BD82FE8_MaybeModel_1;
	Parms._Callee_0 = _Callee_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._ExprResultStack_3 = _ExprResultStack_3;
	Parms._ExprResult_4 = _ExprResult_4;
	Parms._ExprResult_5 = _ExprResult_5;
	Parms._ExprResult_6 = _ExprResult_6;
	Parms.__verse_0x986678F9_Model_2 = __verse_0x986678F9_Model_2;
	Parms._ExprResultStack_7 = _ExprResultStack_7;
	Parms.__verse_0x00000000__3 = __verse_0x00000000__3;
	Parms._InvokeSureResultDummy_8 = _InvokeSureResultDummy_8;
	Parms._Callee_9 = _Callee_9;
	Parms.__verse_0x2BD82FE8_MaybeModel_4 = __verse_0x2BD82FE8_MaybeModel_4;
	Parms._Callee_10 = _Callee_10;
	Parms._ExprResult_11 = _ExprResult_11;
	Parms._ExprResult_12 = _ExprResult_12;
	Parms._ExprResultStack_13 = _ExprResultStack_13;
	Parms._ExprResult_14 = _ExprResult_14;
	Parms._ExprResult_15 = _ExprResult_15;
	Parms._ExprResult_16 = _ExprResult_16;
	Parms.__verse_0x986678F9_Model_5 = __verse_0x986678F9_Model_5;
	Parms._ExprResultStack_17 = _ExprResultStack_17;
	Parms.__verse_0x00000000__6 = __verse_0x00000000__6;
	Parms._InvokeSureResultDummy_18 = _InvokeSureResultDummy_18;
	Parms._Callee_19 = _Callee_19;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_GameObjects._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_Nvector3_M_Nrotation_M_Nvector3_M_N_Kchar_M_Nmesh_M_Nmaterial_R
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_Lvector3_Mrotation_Mvector3_M_Kchar_Mmesh_Mmaterial_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0x2BD82FE8_MaybeModel_1                                  (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_0                                                        (HasGetValueTypeHash)
// struct FTuple_Ltransform_M_Kchar_Mmesh_R_ExprResult_1                                                    (HasGetValueTypeHash)
// struct FSpatialMath_transform      _ExprResult_2                                                    (NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_3                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_4                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_5                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_6                                                    (HasGetValueTypeHash)
// class UVGameplayRst_GameObjects_model*__verse_0x986678F9_Model_2                                       (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_7                                               (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UVGameplayRst_Geometry_fixed_mesh_component*__verse_0x00000000__3                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_8                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_9                                                        (HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0x2BD82FE8_MaybeModel_4                                  (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_10                                                       (HasGetValueTypeHash)
// struct FTuple_Ltransform_M_Kchar_Mmesh_R_ExprResult_11                                                   (HasGetValueTypeHash)
// struct FSpatialMath_transform      _ExprResult_12                                                   (NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_13                                              (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_14                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_15                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_16                                                   (HasGetValueTypeHash)
// class UVGameplayRst_GameObjects_model*__verse_0x986678F9_Model_5                                       (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_17                                              (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UVGameplayRst_Geometry_fixed_mesh_component*__verse_0x00000000__6                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_18                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_19                                                       (HasGetValueTypeHash)

FOptionalProperty_ UVGameplayRst_GameObjects::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_Nvector3_M_Nrotation_M_Nvector3_M_N_Kchar_M_Nmesh_M_Nmaterial_R(const struct FTuple_Lvector3_Mrotation_Mvector3_M_Kchar_Mmesh_Mmaterial_R& __verse_0xB2CDDD72_Argument, FOptionalProperty_ __verse_0x2BD82FE8_MaybeModel_1, FVerseFunctionProperty_ _Callee_0, const struct FTuple_Ltransform_M_Kchar_Mmesh_R& _ExprResult_1, const struct FSpatialMath_transform& _ExprResult_2, TMap<FVerseStringProperty_, uint8> _ExprResultStack_3, FVerseStringProperty_ _ExprResult_4, FVerseStringProperty_ _ExprResult_5, FVerseStringProperty_ _ExprResult_6, class UVGameplayRst_GameObjects_model* __verse_0x986678F9_Model_2, FOptionalProperty_ _ExprResultStack_7, class UVGameplayRst_Geometry_fixed_mesh_component* __verse_0x00000000__3, enum class EVerseTrue _InvokeSureResultDummy_8, FVerseFunctionProperty_ _Callee_9, FOptionalProperty_ __verse_0x2BD82FE8_MaybeModel_4, FVerseFunctionProperty_ _Callee_10, const struct FTuple_Ltransform_M_Kchar_Mmesh_R& _ExprResult_11, const struct FSpatialMath_transform& _ExprResult_12, TMap<FVerseStringProperty_, uint8> _ExprResultStack_13, FVerseStringProperty_ _ExprResult_14, FVerseStringProperty_ _ExprResult_15, FVerseStringProperty_ _ExprResult_16, class UVGameplayRst_GameObjects_model* __verse_0x986678F9_Model_5, FOptionalProperty_ _ExprResultStack_17, class UVGameplayRst_Geometry_fixed_mesh_component* __verse_0x00000000__6, enum class EVerseTrue _InvokeSureResultDummy_18, FVerseFunctionProperty_ _Callee_19)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_GameObjects", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_Nvector3_M_Nrotation_M_Nvector3_M_N_Kchar_M_Nmesh_M_Nmaterial_R");

	Params::UVGameplayRst_GameObjects__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_Nvector3_M_Nrotation_M_Nvector3_M_N_Kchar_M_Nmesh_M_Nmaterial_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms.__verse_0x2BD82FE8_MaybeModel_1 = __verse_0x2BD82FE8_MaybeModel_1;
	Parms._Callee_0 = _Callee_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._ExprResultStack_3 = _ExprResultStack_3;
	Parms._ExprResult_4 = _ExprResult_4;
	Parms._ExprResult_5 = _ExprResult_5;
	Parms._ExprResult_6 = _ExprResult_6;
	Parms.__verse_0x986678F9_Model_2 = __verse_0x986678F9_Model_2;
	Parms._ExprResultStack_7 = _ExprResultStack_7;
	Parms.__verse_0x00000000__3 = __verse_0x00000000__3;
	Parms._InvokeSureResultDummy_8 = _InvokeSureResultDummy_8;
	Parms._Callee_9 = _Callee_9;
	Parms.__verse_0x2BD82FE8_MaybeModel_4 = __verse_0x2BD82FE8_MaybeModel_4;
	Parms._Callee_10 = _Callee_10;
	Parms._ExprResult_11 = _ExprResult_11;
	Parms._ExprResult_12 = _ExprResult_12;
	Parms._ExprResultStack_13 = _ExprResultStack_13;
	Parms._ExprResult_14 = _ExprResult_14;
	Parms._ExprResult_15 = _ExprResult_15;
	Parms._ExprResult_16 = _ExprResult_16;
	Parms.__verse_0x986678F9_Model_5 = __verse_0x986678F9_Model_5;
	Parms._ExprResultStack_17 = _ExprResultStack_17;
	Parms.__verse_0x00000000__6 = __verse_0x00000000__6;
	Parms._InvokeSureResultDummy_18 = _InvokeSureResultDummy_18;
	Parms._Callee_19 = _Callee_19;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_GameObjects._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_Nvector3_M_Nrotation_M_N_Kchar_M_Nmesh_M_Nmaterial_R
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_Lvector3_Mrotation_M_Kchar_Mmesh_Mmaterial_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0x2BD82FE8_MaybeModel_1                                  (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_0                                                        (HasGetValueTypeHash)
// struct FTuple_Ltransform_M_Kchar_Mmesh_R_ExprResult_1                                                    (HasGetValueTypeHash)
// struct FSpatialMath_transform      _ExprResult_2                                                    (NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_3                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_4                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_5                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_6                                                    (HasGetValueTypeHash)
// struct FSpatialMath_vector3        _ExprResult_7                                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_8                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_9                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_10                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_11                                                   (HasGetValueTypeHash)
// class UVGameplayRst_GameObjects_model*__verse_0x986678F9_Model_2                                       (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_12                                              (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UVGameplayRst_Geometry_fixed_mesh_component*__verse_0x00000000__3                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_13                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_14                                                       (HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0x2BD82FE8_MaybeModel_4                                  (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_15                                                       (HasGetValueTypeHash)
// struct FTuple_Ltransform_M_Kchar_Mmesh_R_ExprResult_16                                                   (HasGetValueTypeHash)
// struct FSpatialMath_transform      _ExprResult_17                                                   (NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_18                                              (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_19                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_20                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_21                                                   (HasGetValueTypeHash)
// struct FSpatialMath_vector3        _ExprResult_22                                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_23                                              (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_24                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_25                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_26                                                   (HasGetValueTypeHash)
// class UVGameplayRst_GameObjects_model*__verse_0x986678F9_Model_5                                       (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_27                                              (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UVGameplayRst_Geometry_fixed_mesh_component*__verse_0x00000000__6                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_28                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_29                                                       (HasGetValueTypeHash)

FOptionalProperty_ UVGameplayRst_GameObjects::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_Nvector3_M_Nrotation_M_N_Kchar_M_Nmesh_M_Nmaterial_R(const struct FTuple_Lvector3_Mrotation_M_Kchar_Mmesh_Mmaterial_R& __verse_0xB2CDDD72_Argument, FOptionalProperty_ __verse_0x2BD82FE8_MaybeModel_1, FVerseFunctionProperty_ _Callee_0, const struct FTuple_Ltransform_M_Kchar_Mmesh_R& _ExprResult_1, const struct FSpatialMath_transform& _ExprResult_2, TMap<FVerseStringProperty_, uint8> _ExprResultStack_3, FVerseStringProperty_ _ExprResult_4, FVerseStringProperty_ _ExprResult_5, FVerseStringProperty_ _ExprResult_6, const struct FSpatialMath_vector3& _ExprResult_7, TMap<FVerseStringProperty_, uint8> _ExprResultStack_8, FVerseStringProperty_ _ExprResult_9, FVerseStringProperty_ _ExprResult_10, FVerseStringProperty_ _ExprResult_11, class UVGameplayRst_GameObjects_model* __verse_0x986678F9_Model_2, FOptionalProperty_ _ExprResultStack_12, class UVGameplayRst_Geometry_fixed_mesh_component* __verse_0x00000000__3, enum class EVerseTrue _InvokeSureResultDummy_13, FVerseFunctionProperty_ _Callee_14, FOptionalProperty_ __verse_0x2BD82FE8_MaybeModel_4, FVerseFunctionProperty_ _Callee_15, const struct FTuple_Ltransform_M_Kchar_Mmesh_R& _ExprResult_16, const struct FSpatialMath_transform& _ExprResult_17, TMap<FVerseStringProperty_, uint8> _ExprResultStack_18, FVerseStringProperty_ _ExprResult_19, FVerseStringProperty_ _ExprResult_20, FVerseStringProperty_ _ExprResult_21, const struct FSpatialMath_vector3& _ExprResult_22, TMap<FVerseStringProperty_, uint8> _ExprResultStack_23, FVerseStringProperty_ _ExprResult_24, FVerseStringProperty_ _ExprResult_25, FVerseStringProperty_ _ExprResult_26, class UVGameplayRst_GameObjects_model* __verse_0x986678F9_Model_5, FOptionalProperty_ _ExprResultStack_27, class UVGameplayRst_Geometry_fixed_mesh_component* __verse_0x00000000__6, enum class EVerseTrue _InvokeSureResultDummy_28, FVerseFunctionProperty_ _Callee_29)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_GameObjects", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_Nvector3_M_Nrotation_M_N_Kchar_M_Nmesh_M_Nmaterial_R");

	Params::UVGameplayRst_GameObjects__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_Nvector3_M_Nrotation_M_N_Kchar_M_Nmesh_M_Nmaterial_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms.__verse_0x2BD82FE8_MaybeModel_1 = __verse_0x2BD82FE8_MaybeModel_1;
	Parms._Callee_0 = _Callee_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._ExprResultStack_3 = _ExprResultStack_3;
	Parms._ExprResult_4 = _ExprResult_4;
	Parms._ExprResult_5 = _ExprResult_5;
	Parms._ExprResult_6 = _ExprResult_6;
	Parms._ExprResult_7 = _ExprResult_7;
	Parms._ExprResultStack_8 = _ExprResultStack_8;
	Parms._ExprResult_9 = _ExprResult_9;
	Parms._ExprResult_10 = _ExprResult_10;
	Parms._ExprResult_11 = _ExprResult_11;
	Parms.__verse_0x986678F9_Model_2 = __verse_0x986678F9_Model_2;
	Parms._ExprResultStack_12 = _ExprResultStack_12;
	Parms.__verse_0x00000000__3 = __verse_0x00000000__3;
	Parms._InvokeSureResultDummy_13 = _InvokeSureResultDummy_13;
	Parms._Callee_14 = _Callee_14;
	Parms.__verse_0x2BD82FE8_MaybeModel_4 = __verse_0x2BD82FE8_MaybeModel_4;
	Parms._Callee_15 = _Callee_15;
	Parms._ExprResult_16 = _ExprResult_16;
	Parms._ExprResult_17 = _ExprResult_17;
	Parms._ExprResultStack_18 = _ExprResultStack_18;
	Parms._ExprResult_19 = _ExprResult_19;
	Parms._ExprResult_20 = _ExprResult_20;
	Parms._ExprResult_21 = _ExprResult_21;
	Parms._ExprResult_22 = _ExprResult_22;
	Parms._ExprResultStack_23 = _ExprResultStack_23;
	Parms._ExprResult_24 = _ExprResult_24;
	Parms._ExprResult_25 = _ExprResult_25;
	Parms._ExprResult_26 = _ExprResult_26;
	Parms.__verse_0x986678F9_Model_5 = __verse_0x986678F9_Model_5;
	Parms._ExprResultStack_27 = _ExprResultStack_27;
	Parms.__verse_0x00000000__6 = __verse_0x00000000__6;
	Parms._InvokeSureResultDummy_28 = _InvokeSureResultDummy_28;
	Parms._Callee_29 = _Callee_29;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_GameObjects._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_Nvector3_M_N_Kchar_M_Nmesh_M_Nmaterial_R
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_Lvector3_M_Kchar_Mmesh_Mmaterial_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0x2BD82FE8_MaybeModel_1                                  (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_0                                                        (HasGetValueTypeHash)
// struct FTuple_Ltransform_M_Kchar_Mmesh_R_ExprResult_1                                                    (HasGetValueTypeHash)
// struct FSpatialMath_transform      _ExprResult_2                                                    (NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_3                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_4                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_5                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_6                                                    (HasGetValueTypeHash)
// struct FVerseRotation              _ExprResultStack_7                                               (NoDestructor)
// FVerseFunctionProperty_            _Callee_8                                                        (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_9                                                    (HasGetValueTypeHash)
// struct FSpatialMath_vector3        _ExprResult_10                                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_11                                              (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_12                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_13                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_14                                                   (HasGetValueTypeHash)
// class UVGameplayRst_GameObjects_model*__verse_0x986678F9_Model_2                                       (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_15                                              (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UVGameplayRst_Geometry_fixed_mesh_component*__verse_0x00000000__3                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_16                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_17                                                       (HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0x2BD82FE8_MaybeModel_4                                  (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_18                                                       (HasGetValueTypeHash)
// struct FTuple_Ltransform_M_Kchar_Mmesh_R_ExprResult_19                                                   (HasGetValueTypeHash)
// struct FSpatialMath_transform      _ExprResult_20                                                   (NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_21                                              (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_22                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_23                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_24                                                   (HasGetValueTypeHash)
// struct FVerseRotation              _ExprResultStack_25                                              (NoDestructor)
// FVerseFunctionProperty_            _Callee_26                                                       (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_27                                                   (HasGetValueTypeHash)
// struct FSpatialMath_vector3        _ExprResult_28                                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_29                                              (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_30                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_31                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_32                                                   (HasGetValueTypeHash)
// class UVGameplayRst_GameObjects_model*__verse_0x986678F9_Model_5                                       (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_33                                              (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UVGameplayRst_Geometry_fixed_mesh_component*__verse_0x00000000__6                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_34                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_35                                                       (HasGetValueTypeHash)

FOptionalProperty_ UVGameplayRst_GameObjects::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_Nvector3_M_N_Kchar_M_Nmesh_M_Nmaterial_R(const struct FTuple_Lvector3_M_Kchar_Mmesh_Mmaterial_R& __verse_0xB2CDDD72_Argument, FOptionalProperty_ __verse_0x2BD82FE8_MaybeModel_1, FVerseFunctionProperty_ _Callee_0, const struct FTuple_Ltransform_M_Kchar_Mmesh_R& _ExprResult_1, const struct FSpatialMath_transform& _ExprResult_2, TMap<FVerseStringProperty_, uint8> _ExprResultStack_3, FVerseStringProperty_ _ExprResult_4, FVerseStringProperty_ _ExprResult_5, FVerseStringProperty_ _ExprResult_6, const struct FVerseRotation& _ExprResultStack_7, FVerseFunctionProperty_ _Callee_8, const struct FTuple_L_R& _ExprResult_9, const struct FSpatialMath_vector3& _ExprResult_10, TMap<FVerseStringProperty_, uint8> _ExprResultStack_11, FVerseStringProperty_ _ExprResult_12, FVerseStringProperty_ _ExprResult_13, FVerseStringProperty_ _ExprResult_14, class UVGameplayRst_GameObjects_model* __verse_0x986678F9_Model_2, FOptionalProperty_ _ExprResultStack_15, class UVGameplayRst_Geometry_fixed_mesh_component* __verse_0x00000000__3, enum class EVerseTrue _InvokeSureResultDummy_16, FVerseFunctionProperty_ _Callee_17, FOptionalProperty_ __verse_0x2BD82FE8_MaybeModel_4, FVerseFunctionProperty_ _Callee_18, const struct FTuple_Ltransform_M_Kchar_Mmesh_R& _ExprResult_19, const struct FSpatialMath_transform& _ExprResult_20, TMap<FVerseStringProperty_, uint8> _ExprResultStack_21, FVerseStringProperty_ _ExprResult_22, FVerseStringProperty_ _ExprResult_23, FVerseStringProperty_ _ExprResult_24, const struct FVerseRotation& _ExprResultStack_25, FVerseFunctionProperty_ _Callee_26, const struct FTuple_L_R& _ExprResult_27, const struct FSpatialMath_vector3& _ExprResult_28, TMap<FVerseStringProperty_, uint8> _ExprResultStack_29, FVerseStringProperty_ _ExprResult_30, FVerseStringProperty_ _ExprResult_31, FVerseStringProperty_ _ExprResult_32, class UVGameplayRst_GameObjects_model* __verse_0x986678F9_Model_5, FOptionalProperty_ _ExprResultStack_33, class UVGameplayRst_Geometry_fixed_mesh_component* __verse_0x00000000__6, enum class EVerseTrue _InvokeSureResultDummy_34, FVerseFunctionProperty_ _Callee_35)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_GameObjects", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_Nvector3_M_N_Kchar_M_Nmesh_M_Nmaterial_R");

	Params::UVGameplayRst_GameObjects__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_Nvector3_M_N_Kchar_M_Nmesh_M_Nmaterial_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms.__verse_0x2BD82FE8_MaybeModel_1 = __verse_0x2BD82FE8_MaybeModel_1;
	Parms._Callee_0 = _Callee_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._ExprResultStack_3 = _ExprResultStack_3;
	Parms._ExprResult_4 = _ExprResult_4;
	Parms._ExprResult_5 = _ExprResult_5;
	Parms._ExprResult_6 = _ExprResult_6;
	Parms._ExprResultStack_7 = _ExprResultStack_7;
	Parms._Callee_8 = _Callee_8;
	Parms._ExprResult_9 = _ExprResult_9;
	Parms._ExprResult_10 = _ExprResult_10;
	Parms._ExprResultStack_11 = _ExprResultStack_11;
	Parms._ExprResult_12 = _ExprResult_12;
	Parms._ExprResult_13 = _ExprResult_13;
	Parms._ExprResult_14 = _ExprResult_14;
	Parms.__verse_0x986678F9_Model_2 = __verse_0x986678F9_Model_2;
	Parms._ExprResultStack_15 = _ExprResultStack_15;
	Parms.__verse_0x00000000__3 = __verse_0x00000000__3;
	Parms._InvokeSureResultDummy_16 = _InvokeSureResultDummy_16;
	Parms._Callee_17 = _Callee_17;
	Parms.__verse_0x2BD82FE8_MaybeModel_4 = __verse_0x2BD82FE8_MaybeModel_4;
	Parms._Callee_18 = _Callee_18;
	Parms._ExprResult_19 = _ExprResult_19;
	Parms._ExprResult_20 = _ExprResult_20;
	Parms._ExprResultStack_21 = _ExprResultStack_21;
	Parms._ExprResult_22 = _ExprResult_22;
	Parms._ExprResult_23 = _ExprResult_23;
	Parms._ExprResult_24 = _ExprResult_24;
	Parms._ExprResultStack_25 = _ExprResultStack_25;
	Parms._Callee_26 = _Callee_26;
	Parms._ExprResult_27 = _ExprResult_27;
	Parms._ExprResult_28 = _ExprResult_28;
	Parms._ExprResultStack_29 = _ExprResultStack_29;
	Parms._ExprResult_30 = _ExprResult_30;
	Parms._ExprResult_31 = _ExprResult_31;
	Parms._ExprResult_32 = _ExprResult_32;
	Parms.__verse_0x986678F9_Model_5 = __verse_0x986678F9_Model_5;
	Parms._ExprResultStack_33 = _ExprResultStack_33;
	Parms.__verse_0x00000000__6 = __verse_0x00000000__6;
	Parms._InvokeSureResultDummy_34 = _InvokeSureResultDummy_34;
	Parms._Callee_35 = _Callee_35;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_GameObjects._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_N_Ksubtype_Lcomponent_R_M_Ntransform_M_N_Kchar_M_Nmesh_M_Nmaterial_R
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_L_Ksubtype_Lcomponent_R_Mtransform_M_Kchar_Mmesh_Mmaterial_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0x2BD82FE8_MaybeModel_1                                  (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_0                                                        (HasGetValueTypeHash)
// struct FTuple_L_Ksubtype_Lcomponent_R_Mtransform_M_Kchar_Mmesh_R_ExprResult_1                                                    (HasGetValueTypeHash)
// class UVGameplayRst_GameObjects_model*__verse_0x986678F9_Model_2                                       (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_2                                               (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UVGameplayRst_Geometry_fixed_mesh_component*__verse_0x00000000__3                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_4                                                        (HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0x2BD82FE8_MaybeModel_4                                  (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_5                                                        (HasGetValueTypeHash)
// struct FTuple_L_Ksubtype_Lcomponent_R_Mtransform_M_Kchar_Mmesh_R_ExprResult_6                                                    (HasGetValueTypeHash)
// class UVGameplayRst_GameObjects_model*__verse_0x986678F9_Model_5                                       (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_7                                               (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UVGameplayRst_Geometry_fixed_mesh_component*__verse_0x00000000__6                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_8                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_9                                                        (HasGetValueTypeHash)

FOptionalProperty_ UVGameplayRst_GameObjects::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_N_Ksubtype_Lcomponent_R_M_Ntransform_M_N_Kchar_M_Nmesh_M_Nmaterial_R(const struct FTuple_L_Ksubtype_Lcomponent_R_Mtransform_M_Kchar_Mmesh_Mmaterial_R& __verse_0xB2CDDD72_Argument, FOptionalProperty_ __verse_0x2BD82FE8_MaybeModel_1, FVerseFunctionProperty_ _Callee_0, const struct FTuple_L_Ksubtype_Lcomponent_R_Mtransform_M_Kchar_Mmesh_R& _ExprResult_1, class UVGameplayRst_GameObjects_model* __verse_0x986678F9_Model_2, FOptionalProperty_ _ExprResultStack_2, class UVGameplayRst_Geometry_fixed_mesh_component* __verse_0x00000000__3, enum class EVerseTrue _InvokeSureResultDummy_3, FVerseFunctionProperty_ _Callee_4, FOptionalProperty_ __verse_0x2BD82FE8_MaybeModel_4, FVerseFunctionProperty_ _Callee_5, const struct FTuple_L_Ksubtype_Lcomponent_R_Mtransform_M_Kchar_Mmesh_R& _ExprResult_6, class UVGameplayRst_GameObjects_model* __verse_0x986678F9_Model_5, FOptionalProperty_ _ExprResultStack_7, class UVGameplayRst_Geometry_fixed_mesh_component* __verse_0x00000000__6, enum class EVerseTrue _InvokeSureResultDummy_8, FVerseFunctionProperty_ _Callee_9)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_GameObjects", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_N_Ksubtype_Lcomponent_R_M_Ntransform_M_N_Kchar_M_Nmesh_M_Nmaterial_R");

	Params::UVGameplayRst_GameObjects__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_N_Ksubtype_Lcomponent_R_M_Ntransform_M_N_Kchar_M_Nmesh_M_Nmaterial_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms.__verse_0x2BD82FE8_MaybeModel_1 = __verse_0x2BD82FE8_MaybeModel_1;
	Parms._Callee_0 = _Callee_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms.__verse_0x986678F9_Model_2 = __verse_0x986678F9_Model_2;
	Parms._ExprResultStack_2 = _ExprResultStack_2;
	Parms.__verse_0x00000000__3 = __verse_0x00000000__3;
	Parms._InvokeSureResultDummy_3 = _InvokeSureResultDummy_3;
	Parms._Callee_4 = _Callee_4;
	Parms.__verse_0x2BD82FE8_MaybeModel_4 = __verse_0x2BD82FE8_MaybeModel_4;
	Parms._Callee_5 = _Callee_5;
	Parms._ExprResult_6 = _ExprResult_6;
	Parms.__verse_0x986678F9_Model_5 = __verse_0x986678F9_Model_5;
	Parms._ExprResultStack_7 = _ExprResultStack_7;
	Parms.__verse_0x00000000__6 = __verse_0x00000000__6;
	Parms._InvokeSureResultDummy_8 = _InvokeSureResultDummy_8;
	Parms._Callee_9 = _Callee_9;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_GameObjects._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_Ntransform_M_N_Kchar_M_Nmesh_M_Nmaterial_R
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_Ltransform_M_Kchar_Mmesh_Mmaterial_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0x2BD82FE8_MaybeModel_1                                  (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_0                                                        (HasGetValueTypeHash)
// struct FTuple_Ltransform_M_Kchar_Mmesh_R_ExprResult_1                                                    (HasGetValueTypeHash)
// class UVGameplayRst_GameObjects_model*__verse_0x986678F9_Model_2                                       (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_2                                               (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UVGameplayRst_Geometry_fixed_mesh_component*__verse_0x00000000__3                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_4                                                        (HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0x2BD82FE8_MaybeModel_4                                  (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_5                                                        (HasGetValueTypeHash)
// struct FTuple_Ltransform_M_Kchar_Mmesh_R_ExprResult_6                                                    (HasGetValueTypeHash)
// class UVGameplayRst_GameObjects_model*__verse_0x986678F9_Model_5                                       (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_7                                               (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UVGameplayRst_Geometry_fixed_mesh_component*__verse_0x00000000__6                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_8                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_9                                                        (HasGetValueTypeHash)

FOptionalProperty_ UVGameplayRst_GameObjects::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_Ntransform_M_N_Kchar_M_Nmesh_M_Nmaterial_R(const struct FTuple_Ltransform_M_Kchar_Mmesh_Mmaterial_R& __verse_0xB2CDDD72_Argument, FOptionalProperty_ __verse_0x2BD82FE8_MaybeModel_1, FVerseFunctionProperty_ _Callee_0, const struct FTuple_Ltransform_M_Kchar_Mmesh_R& _ExprResult_1, class UVGameplayRst_GameObjects_model* __verse_0x986678F9_Model_2, FOptionalProperty_ _ExprResultStack_2, class UVGameplayRst_Geometry_fixed_mesh_component* __verse_0x00000000__3, enum class EVerseTrue _InvokeSureResultDummy_3, FVerseFunctionProperty_ _Callee_4, FOptionalProperty_ __verse_0x2BD82FE8_MaybeModel_4, FVerseFunctionProperty_ _Callee_5, const struct FTuple_Ltransform_M_Kchar_Mmesh_R& _ExprResult_6, class UVGameplayRst_GameObjects_model* __verse_0x986678F9_Model_5, FOptionalProperty_ _ExprResultStack_7, class UVGameplayRst_Geometry_fixed_mesh_component* __verse_0x00000000__6, enum class EVerseTrue _InvokeSureResultDummy_8, FVerseFunctionProperty_ _Callee_9)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_GameObjects", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_Ntransform_M_N_Kchar_M_Nmesh_M_Nmaterial_R");

	Params::UVGameplayRst_GameObjects__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_Ntransform_M_N_Kchar_M_Nmesh_M_Nmaterial_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms.__verse_0x2BD82FE8_MaybeModel_1 = __verse_0x2BD82FE8_MaybeModel_1;
	Parms._Callee_0 = _Callee_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms.__verse_0x986678F9_Model_2 = __verse_0x986678F9_Model_2;
	Parms._ExprResultStack_2 = _ExprResultStack_2;
	Parms.__verse_0x00000000__3 = __verse_0x00000000__3;
	Parms._InvokeSureResultDummy_3 = _InvokeSureResultDummy_3;
	Parms._Callee_4 = _Callee_4;
	Parms.__verse_0x2BD82FE8_MaybeModel_4 = __verse_0x2BD82FE8_MaybeModel_4;
	Parms._Callee_5 = _Callee_5;
	Parms._ExprResult_6 = _ExprResult_6;
	Parms.__verse_0x986678F9_Model_5 = __verse_0x986678F9_Model_5;
	Parms._ExprResultStack_7 = _ExprResultStack_7;
	Parms.__verse_0x00000000__6 = __verse_0x00000000__6;
	Parms._InvokeSureResultDummy_8 = _InvokeSureResultDummy_8;
	Parms._Callee_9 = _Callee_9;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_GameObjects._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_N_Ksubtype_Lcomponent_R_M_Ntransform_M_N_Kchar_M_Nmesh_R
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_L_Ksubtype_Lcomponent_R_Mtransform_M_Kchar_Mmesh_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0x00000000__1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0x6BB06783_MaybeObj_2                                    (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_0                                                        (HasGetValueTypeHash)
// struct FTuple_Ltransform_M_Kchar_R _ExprResult_1                                                    (HasGetValueTypeHash)
// class UVerseEngine_Entity_entity*  __verse_0x4F5E77FF_Obj_3                                         (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_2                                               (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0x2BD82FE8_MaybeModel_4                                  (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_3                                                        (HasGetValueTypeHash)
// struct FTuple_Lentity_M_Ksubtype_Lcomponent_R_R_ExprResult_4                                                    (HasGetValueTypeHash)
// class UVGameplayRst_GameObjects_model*__verse_0x986678F9_Model_5                                       (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_5                                               (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UVGameplayRst_Geometry_fixed_mesh_component*__verse_0x00000000__6                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_6                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_7                                                        (HasGetValueTypeHash)
// class UVGameplayRst_Geometry_fixed_mesh_component*__verse_0x00000000__7                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_8                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_9                                                        (HasGetValueTypeHash)
// class UVGameplayRst_Physics_collision_component*__verse_0x00000000__8                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_10                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_11                                                       (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_12                                                   (HasGetValueTypeHash)
// uint8                              _ExprResult_13                                                   (NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_14                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0x00000000__10                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0x6BB06783_MaybeObj_11                                   (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_15                                                       (HasGetValueTypeHash)
// struct FTuple_Ltransform_M_Kchar_R _ExprResult_16                                                   (HasGetValueTypeHash)
// class UVerseEngine_Entity_entity*  __verse_0x4F5E77FF_Obj_12                                        (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_17                                              (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0x2BD82FE8_MaybeModel_13                                 (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_18                                                       (HasGetValueTypeHash)
// struct FTuple_Lentity_M_Ksubtype_Lcomponent_R_R_ExprResult_19                                                   (HasGetValueTypeHash)
// class UVGameplayRst_GameObjects_model*__verse_0x986678F9_Model_14                                      (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_20                                              (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UVGameplayRst_Geometry_fixed_mesh_component*__verse_0x00000000__15                                           (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_21                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_22                                                       (HasGetValueTypeHash)
// class UVGameplayRst_Geometry_fixed_mesh_component*__verse_0x00000000__16                                           (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_23                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_24                                                       (HasGetValueTypeHash)
// class UVGameplayRst_Physics_collision_component*__verse_0x00000000__17                                           (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_25                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_26                                                       (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_27                                                   (HasGetValueTypeHash)
// uint8                              _ExprResult_28                                                   (NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_29                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionalProperty_ UVGameplayRst_GameObjects::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_N_Ksubtype_Lcomponent_R_M_Ntransform_M_N_Kchar_M_Nmesh_R(const struct FTuple_L_Ksubtype_Lcomponent_R_Mtransform_M_Kchar_Mmesh_R& __verse_0xB2CDDD72_Argument, FOptionalProperty_ __verse_0x00000000__1, FOptionalProperty_ __verse_0x6BB06783_MaybeObj_2, FVerseFunctionProperty_ _Callee_0, const struct FTuple_Ltransform_M_Kchar_R& _ExprResult_1, class UVerseEngine_Entity_entity* __verse_0x4F5E77FF_Obj_3, FOptionalProperty_ _ExprResultStack_2, FOptionalProperty_ __verse_0x2BD82FE8_MaybeModel_4, FVerseFunctionProperty_ _Callee_3, const struct FTuple_Lentity_M_Ksubtype_Lcomponent_R_R& _ExprResult_4, class UVGameplayRst_GameObjects_model* __verse_0x986678F9_Model_5, FOptionalProperty_ _ExprResultStack_5, class UVGameplayRst_Geometry_fixed_mesh_component* __verse_0x00000000__6, enum class EVerseTrue _InvokeSureResultDummy_6, FVerseFunctionProperty_ _Callee_7, class UVGameplayRst_Geometry_fixed_mesh_component* __verse_0x00000000__7, enum class EVerseTrue _InvokeSureResultDummy_8, FVerseFunctionProperty_ _Callee_9, class UVGameplayRst_Physics_collision_component* __verse_0x00000000__8, enum class EVerseTrue _InvokeSureResultDummy_10, FVerseFunctionProperty_ _Callee_11, FVerseStringProperty_ _ExprResult_12, uint8 _ExprResult_13, FOptionalProperty_ _ExprResultStack_14, FOptionalProperty_ __verse_0x00000000__10, FOptionalProperty_ __verse_0x6BB06783_MaybeObj_11, FVerseFunctionProperty_ _Callee_15, const struct FTuple_Ltransform_M_Kchar_R& _ExprResult_16, class UVerseEngine_Entity_entity* __verse_0x4F5E77FF_Obj_12, FOptionalProperty_ _ExprResultStack_17, FOptionalProperty_ __verse_0x2BD82FE8_MaybeModel_13, FVerseFunctionProperty_ _Callee_18, const struct FTuple_Lentity_M_Ksubtype_Lcomponent_R_R& _ExprResult_19, class UVGameplayRst_GameObjects_model* __verse_0x986678F9_Model_14, FOptionalProperty_ _ExprResultStack_20, class UVGameplayRst_Geometry_fixed_mesh_component* __verse_0x00000000__15, enum class EVerseTrue _InvokeSureResultDummy_21, FVerseFunctionProperty_ _Callee_22, class UVGameplayRst_Geometry_fixed_mesh_component* __verse_0x00000000__16, enum class EVerseTrue _InvokeSureResultDummy_23, FVerseFunctionProperty_ _Callee_24, class UVGameplayRst_Physics_collision_component* __verse_0x00000000__17, enum class EVerseTrue _InvokeSureResultDummy_25, FVerseFunctionProperty_ _Callee_26, FVerseStringProperty_ _ExprResult_27, uint8 _ExprResult_28, FOptionalProperty_ _ExprResultStack_29)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_GameObjects", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_N_Ksubtype_Lcomponent_R_M_Ntransform_M_N_Kchar_M_Nmesh_R");

	Params::UVGameplayRst_GameObjects__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_N_Ksubtype_Lcomponent_R_M_Ntransform_M_N_Kchar_M_Nmesh_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms.__verse_0x00000000__1 = __verse_0x00000000__1;
	Parms.__verse_0x6BB06783_MaybeObj_2 = __verse_0x6BB06783_MaybeObj_2;
	Parms._Callee_0 = _Callee_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms.__verse_0x4F5E77FF_Obj_3 = __verse_0x4F5E77FF_Obj_3;
	Parms._ExprResultStack_2 = _ExprResultStack_2;
	Parms.__verse_0x2BD82FE8_MaybeModel_4 = __verse_0x2BD82FE8_MaybeModel_4;
	Parms._Callee_3 = _Callee_3;
	Parms._ExprResult_4 = _ExprResult_4;
	Parms.__verse_0x986678F9_Model_5 = __verse_0x986678F9_Model_5;
	Parms._ExprResultStack_5 = _ExprResultStack_5;
	Parms.__verse_0x00000000__6 = __verse_0x00000000__6;
	Parms._InvokeSureResultDummy_6 = _InvokeSureResultDummy_6;
	Parms._Callee_7 = _Callee_7;
	Parms.__verse_0x00000000__7 = __verse_0x00000000__7;
	Parms._InvokeSureResultDummy_8 = _InvokeSureResultDummy_8;
	Parms._Callee_9 = _Callee_9;
	Parms.__verse_0x00000000__8 = __verse_0x00000000__8;
	Parms._InvokeSureResultDummy_10 = _InvokeSureResultDummy_10;
	Parms._Callee_11 = _Callee_11;
	Parms._ExprResult_12 = _ExprResult_12;
	Parms._ExprResult_13 = _ExprResult_13;
	Parms._ExprResultStack_14 = _ExprResultStack_14;
	Parms.__verse_0x00000000__10 = __verse_0x00000000__10;
	Parms.__verse_0x6BB06783_MaybeObj_11 = __verse_0x6BB06783_MaybeObj_11;
	Parms._Callee_15 = _Callee_15;
	Parms._ExprResult_16 = _ExprResult_16;
	Parms.__verse_0x4F5E77FF_Obj_12 = __verse_0x4F5E77FF_Obj_12;
	Parms._ExprResultStack_17 = _ExprResultStack_17;
	Parms.__verse_0x2BD82FE8_MaybeModel_13 = __verse_0x2BD82FE8_MaybeModel_13;
	Parms._Callee_18 = _Callee_18;
	Parms._ExprResult_19 = _ExprResult_19;
	Parms.__verse_0x986678F9_Model_14 = __verse_0x986678F9_Model_14;
	Parms._ExprResultStack_20 = _ExprResultStack_20;
	Parms.__verse_0x00000000__15 = __verse_0x00000000__15;
	Parms._InvokeSureResultDummy_21 = _InvokeSureResultDummy_21;
	Parms._Callee_22 = _Callee_22;
	Parms.__verse_0x00000000__16 = __verse_0x00000000__16;
	Parms._InvokeSureResultDummy_23 = _InvokeSureResultDummy_23;
	Parms._Callee_24 = _Callee_24;
	Parms.__verse_0x00000000__17 = __verse_0x00000000__17;
	Parms._InvokeSureResultDummy_25 = _InvokeSureResultDummy_25;
	Parms._Callee_26 = _Callee_26;
	Parms._ExprResult_27 = _ExprResult_27;
	Parms._ExprResult_28 = _ExprResult_28;
	Parms._ExprResultStack_29 = _ExprResultStack_29;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_GameObjects._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_Ntransform_M_N_Kchar_M_Nmesh_R
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_Ltransform_M_Kchar_Mmesh_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0x00000000__1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0x6BB06783_MaybeObj_2                                    (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_0                                                        (HasGetValueTypeHash)
// struct FTuple_Ltransform_M_Kchar_R _ExprResult_1                                                    (HasGetValueTypeHash)
// class UVerseEngine_Entity_entity*  __verse_0x4F5E77FF_Obj_3                                         (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_2                                               (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0x2BD82FE8_MaybeModel_4                                  (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_3                                                        (HasGetValueTypeHash)
// class UVGameplayRst_GameObjects_model*__verse_0x986678F9_Model_5                                       (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_4                                               (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UVGameplayRst_Geometry_fixed_mesh_component*__verse_0x00000000__6                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_5                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_6                                                        (HasGetValueTypeHash)
// class UVGameplayRst_Geometry_fixed_mesh_component*__verse_0x00000000__7                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_7                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_8                                                        (HasGetValueTypeHash)
// class UVGameplayRst_Physics_collision_component*__verse_0x00000000__8                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_9                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_10                                                       (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_11                                                   (HasGetValueTypeHash)
// uint8                              _ExprResult_12                                                   (NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_13                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0x00000000__10                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0x6BB06783_MaybeObj_11                                   (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_14                                                       (HasGetValueTypeHash)
// struct FTuple_Ltransform_M_Kchar_R _ExprResult_15                                                   (HasGetValueTypeHash)
// class UVerseEngine_Entity_entity*  __verse_0x4F5E77FF_Obj_12                                        (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_16                                              (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0x2BD82FE8_MaybeModel_13                                 (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_17                                                       (HasGetValueTypeHash)
// class UVGameplayRst_GameObjects_model*__verse_0x986678F9_Model_14                                      (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_18                                              (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UVGameplayRst_Geometry_fixed_mesh_component*__verse_0x00000000__15                                           (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_19                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_20                                                       (HasGetValueTypeHash)
// class UVGameplayRst_Geometry_fixed_mesh_component*__verse_0x00000000__16                                           (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_21                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_22                                                       (HasGetValueTypeHash)
// class UVGameplayRst_Physics_collision_component*__verse_0x00000000__17                                           (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_23                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_24                                                       (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_25                                                   (HasGetValueTypeHash)
// uint8                              _ExprResult_26                                                   (NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_27                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionalProperty_ UVGameplayRst_GameObjects::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_Ntransform_M_N_Kchar_M_Nmesh_R(const struct FTuple_Ltransform_M_Kchar_Mmesh_R& __verse_0xB2CDDD72_Argument, FOptionalProperty_ __verse_0x00000000__1, FOptionalProperty_ __verse_0x6BB06783_MaybeObj_2, FVerseFunctionProperty_ _Callee_0, const struct FTuple_Ltransform_M_Kchar_R& _ExprResult_1, class UVerseEngine_Entity_entity* __verse_0x4F5E77FF_Obj_3, FOptionalProperty_ _ExprResultStack_2, FOptionalProperty_ __verse_0x2BD82FE8_MaybeModel_4, FVerseFunctionProperty_ _Callee_3, class UVGameplayRst_GameObjects_model* __verse_0x986678F9_Model_5, FOptionalProperty_ _ExprResultStack_4, class UVGameplayRst_Geometry_fixed_mesh_component* __verse_0x00000000__6, enum class EVerseTrue _InvokeSureResultDummy_5, FVerseFunctionProperty_ _Callee_6, class UVGameplayRst_Geometry_fixed_mesh_component* __verse_0x00000000__7, enum class EVerseTrue _InvokeSureResultDummy_7, FVerseFunctionProperty_ _Callee_8, class UVGameplayRst_Physics_collision_component* __verse_0x00000000__8, enum class EVerseTrue _InvokeSureResultDummy_9, FVerseFunctionProperty_ _Callee_10, FVerseStringProperty_ _ExprResult_11, uint8 _ExprResult_12, FOptionalProperty_ _ExprResultStack_13, FOptionalProperty_ __verse_0x00000000__10, FOptionalProperty_ __verse_0x6BB06783_MaybeObj_11, FVerseFunctionProperty_ _Callee_14, const struct FTuple_Ltransform_M_Kchar_R& _ExprResult_15, class UVerseEngine_Entity_entity* __verse_0x4F5E77FF_Obj_12, FOptionalProperty_ _ExprResultStack_16, FOptionalProperty_ __verse_0x2BD82FE8_MaybeModel_13, FVerseFunctionProperty_ _Callee_17, class UVGameplayRst_GameObjects_model* __verse_0x986678F9_Model_14, FOptionalProperty_ _ExprResultStack_18, class UVGameplayRst_Geometry_fixed_mesh_component* __verse_0x00000000__15, enum class EVerseTrue _InvokeSureResultDummy_19, FVerseFunctionProperty_ _Callee_20, class UVGameplayRst_Geometry_fixed_mesh_component* __verse_0x00000000__16, enum class EVerseTrue _InvokeSureResultDummy_21, FVerseFunctionProperty_ _Callee_22, class UVGameplayRst_Physics_collision_component* __verse_0x00000000__17, enum class EVerseTrue _InvokeSureResultDummy_23, FVerseFunctionProperty_ _Callee_24, FVerseStringProperty_ _ExprResult_25, uint8 _ExprResult_26, FOptionalProperty_ _ExprResultStack_27)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_GameObjects", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_Ntransform_M_N_Kchar_M_Nmesh_R");

	Params::UVGameplayRst_GameObjects__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_Ntransform_M_N_Kchar_M_Nmesh_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms.__verse_0x00000000__1 = __verse_0x00000000__1;
	Parms.__verse_0x6BB06783_MaybeObj_2 = __verse_0x6BB06783_MaybeObj_2;
	Parms._Callee_0 = _Callee_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms.__verse_0x4F5E77FF_Obj_3 = __verse_0x4F5E77FF_Obj_3;
	Parms._ExprResultStack_2 = _ExprResultStack_2;
	Parms.__verse_0x2BD82FE8_MaybeModel_4 = __verse_0x2BD82FE8_MaybeModel_4;
	Parms._Callee_3 = _Callee_3;
	Parms.__verse_0x986678F9_Model_5 = __verse_0x986678F9_Model_5;
	Parms._ExprResultStack_4 = _ExprResultStack_4;
	Parms.__verse_0x00000000__6 = __verse_0x00000000__6;
	Parms._InvokeSureResultDummy_5 = _InvokeSureResultDummy_5;
	Parms._Callee_6 = _Callee_6;
	Parms.__verse_0x00000000__7 = __verse_0x00000000__7;
	Parms._InvokeSureResultDummy_7 = _InvokeSureResultDummy_7;
	Parms._Callee_8 = _Callee_8;
	Parms.__verse_0x00000000__8 = __verse_0x00000000__8;
	Parms._InvokeSureResultDummy_9 = _InvokeSureResultDummy_9;
	Parms._Callee_10 = _Callee_10;
	Parms._ExprResult_11 = _ExprResult_11;
	Parms._ExprResult_12 = _ExprResult_12;
	Parms._ExprResultStack_13 = _ExprResultStack_13;
	Parms.__verse_0x00000000__10 = __verse_0x00000000__10;
	Parms.__verse_0x6BB06783_MaybeObj_11 = __verse_0x6BB06783_MaybeObj_11;
	Parms._Callee_14 = _Callee_14;
	Parms._ExprResult_15 = _ExprResult_15;
	Parms.__verse_0x4F5E77FF_Obj_12 = __verse_0x4F5E77FF_Obj_12;
	Parms._ExprResultStack_16 = _ExprResultStack_16;
	Parms.__verse_0x2BD82FE8_MaybeModel_13 = __verse_0x2BD82FE8_MaybeModel_13;
	Parms._Callee_17 = _Callee_17;
	Parms.__verse_0x986678F9_Model_14 = __verse_0x986678F9_Model_14;
	Parms._ExprResultStack_18 = _ExprResultStack_18;
	Parms.__verse_0x00000000__15 = __verse_0x00000000__15;
	Parms._InvokeSureResultDummy_19 = _InvokeSureResultDummy_19;
	Parms._Callee_20 = _Callee_20;
	Parms.__verse_0x00000000__16 = __verse_0x00000000__16;
	Parms._InvokeSureResultDummy_21 = _InvokeSureResultDummy_21;
	Parms._Callee_22 = _Callee_22;
	Parms.__verse_0x00000000__17 = __verse_0x00000000__17;
	Parms._InvokeSureResultDummy_23 = _InvokeSureResultDummy_23;
	Parms._Callee_24 = _Callee_24;
	Parms._ExprResult_25 = _ExprResult_25;
	Parms._ExprResult_26 = _ExprResult_26;
	Parms._ExprResultStack_27 = _ExprResultStack_27;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_GameObjects._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_Nentity_M_N_Ksubtype_Lcomponent_R_R
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_Lentity_M_Ksubtype_Lcomponent_R_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0x00000000__1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UClass*>              __verse_0x36974CE7_ComponentClassesToAdd_2                       (ContainsInstancedReference)
// TArray<class UClass*>              _ExprResult_0                                                    (ContainsInstancedReference)
// class UVerseEngine_Entity_entity*  __verse_0x00000000__3                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_2                                                        (HasGetValueTypeHash)
// class UVGameplayRst_Geometry_fixed_mesh_component*__verse_0x71AD33A7_Mesh_4                                        (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 _FallibleType_3                                                  (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_4                                               (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_5                                                    (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UVerseEngine_Entity_entity*  __verse_0x00000000__5                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_6                                                        (HasGetValueTypeHash)
// class UVGameplayRst_Geometry_fixed_mesh_component*__verse_0x00000000__6                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_7                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_8                                                        (HasGetValueTypeHash)
// struct FTuple_Llogic_Mlogic_R      _ExprResult_9                                                    (HasGetValueTypeHash)
// class UVGameplayRst_Physics_collision_component*__verse_0x802C815C_Collision_4                                   (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 _FallibleType_10                                                 (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_11                                              (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_12                                                   (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UVerseEngine_Entity_entity*  __verse_0x00000000__7                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_13                                                       (HasGetValueTypeHash)
// class UVGameplayRst_Transform_position_component*__verse_0xA82B0967_Position_4                                    (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 _FallibleType_14                                                 (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_15                                              (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_16                                                   (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UVerseEngine_Entity_entity*  __verse_0x00000000__8                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_17                                                       (HasGetValueTypeHash)
// class UVGameplayRst_Transform_rotation_component*__verse_0x78C70FF3_Rotation_4                                    (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 _FallibleType_18                                                 (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_19                                              (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_20                                                   (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UVerseEngine_Entity_entity*  __verse_0x00000000__9                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_21                                                       (HasGetValueTypeHash)
// class UVGameplayRst_Transform_scale_component*__verse_0xA376805D_Scale_4                                       (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 _FallibleType_22                                                 (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_23                                              (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_24                                                   (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UVerseEngine_Entity_entity*  __verse_0x00000000__10                                           (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_25                                                       (HasGetValueTypeHash)
// class UVGameplayRst_GameObjects_model*__verse_0x95D09D0E_Result_11                                     (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint64                             _InstancingGraph_26                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_27                                                   (NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_28                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0x00000000__13                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UClass*>              __verse_0x36974CE7_ComponentClassesToAdd_14                      (ContainsInstancedReference)
// TArray<class UClass*>              _ExprResult_29                                                   (ContainsInstancedReference)
// class UVerseEngine_Entity_entity*  __verse_0x00000000__15                                           (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_30                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_31                                                       (HasGetValueTypeHash)
// class UVGameplayRst_Geometry_fixed_mesh_component*__verse_0x71AD33A7_Mesh_16                                       (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 _FallibleType_32                                                 (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_33                                              (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_34                                                   (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UVerseEngine_Entity_entity*  __verse_0x00000000__17                                           (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_35                                                       (HasGetValueTypeHash)
// class UVGameplayRst_Geometry_fixed_mesh_component*__verse_0x00000000__18                                           (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_36                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_37                                                       (HasGetValueTypeHash)
// struct FTuple_Llogic_Mlogic_R      _ExprResult_38                                                   (HasGetValueTypeHash)
// class UVGameplayRst_Physics_collision_component*__verse_0x802C815C_Collision_16                                  (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 _FallibleType_39                                                 (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_40                                              (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_41                                                   (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UVerseEngine_Entity_entity*  __verse_0x00000000__19                                           (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_42                                                       (HasGetValueTypeHash)
// class UVGameplayRst_Transform_position_component*__verse_0xA82B0967_Position_16                                   (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 _FallibleType_43                                                 (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_44                                              (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_45                                                   (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UVerseEngine_Entity_entity*  __verse_0x00000000__20                                           (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_46                                                       (HasGetValueTypeHash)
// class UVGameplayRst_Transform_rotation_component*__verse_0x78C70FF3_Rotation_16                                   (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 _FallibleType_47                                                 (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_48                                              (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_49                                                   (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UVerseEngine_Entity_entity*  __verse_0x00000000__21                                           (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_50                                                       (HasGetValueTypeHash)
// class UVGameplayRst_Transform_scale_component*__verse_0xA376805D_Scale_16                                      (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 _FallibleType_51                                                 (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_52                                              (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_53                                                   (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UVerseEngine_Entity_entity*  __verse_0x00000000__22                                           (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_54                                                       (HasGetValueTypeHash)
// class UVGameplayRst_GameObjects_model*__verse_0x95D09D0E_Result_23                                     (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint64                             _InstancingGraph_55                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_56                                                   (NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_57                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionalProperty_ UVGameplayRst_GameObjects::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_Nentity_M_N_Ksubtype_Lcomponent_R_R(const struct FTuple_Lentity_M_Ksubtype_Lcomponent_R_R& __verse_0xB2CDDD72_Argument, FOptionalProperty_ __verse_0x00000000__1, const TArray<class UClass*>& __verse_0x36974CE7_ComponentClassesToAdd_2, const TArray<class UClass*>& _ExprResult_0, class UVerseEngine_Entity_entity* __verse_0x00000000__3, enum class EVerseTrue _InvokeSureResultDummy_1, FVerseFunctionProperty_ _Callee_2, class UVGameplayRst_Geometry_fixed_mesh_component* __verse_0x71AD33A7_Mesh_4, FOptionalProperty_ _FallibleType_3, FOptionalProperty_ _ExprResultStack_4, FOptionalProperty_ _ExprResult_5, class UVerseEngine_Entity_entity* __verse_0x00000000__5, FVerseFunctionProperty_ _Callee_6, class UVGameplayRst_Geometry_fixed_mesh_component* __verse_0x00000000__6, enum class EVerseTrue _InvokeSureResultDummy_7, FVerseFunctionProperty_ _Callee_8, const struct FTuple_Llogic_Mlogic_R& _ExprResult_9, class UVGameplayRst_Physics_collision_component* __verse_0x802C815C_Collision_4, FOptionalProperty_ _FallibleType_10, FOptionalProperty_ _ExprResultStack_11, FOptionalProperty_ _ExprResult_12, class UVerseEngine_Entity_entity* __verse_0x00000000__7, FVerseFunctionProperty_ _Callee_13, class UVGameplayRst_Transform_position_component* __verse_0xA82B0967_Position_4, FOptionalProperty_ _FallibleType_14, FOptionalProperty_ _ExprResultStack_15, FOptionalProperty_ _ExprResult_16, class UVerseEngine_Entity_entity* __verse_0x00000000__8, FVerseFunctionProperty_ _Callee_17, class UVGameplayRst_Transform_rotation_component* __verse_0x78C70FF3_Rotation_4, FOptionalProperty_ _FallibleType_18, FOptionalProperty_ _ExprResultStack_19, FOptionalProperty_ _ExprResult_20, class UVerseEngine_Entity_entity* __verse_0x00000000__9, FVerseFunctionProperty_ _Callee_21, class UVGameplayRst_Transform_scale_component* __verse_0xA376805D_Scale_4, FOptionalProperty_ _FallibleType_22, FOptionalProperty_ _ExprResultStack_23, FOptionalProperty_ _ExprResult_24, class UVerseEngine_Entity_entity* __verse_0x00000000__10, FVerseFunctionProperty_ _Callee_25, class UVGameplayRst_GameObjects_model* __verse_0x95D09D0E_Result_11, uint64 _InstancingGraph_26, uint8 _ExprResult_27, FOptionalProperty_ _ExprResultStack_28, FOptionalProperty_ __verse_0x00000000__13, const TArray<class UClass*>& __verse_0x36974CE7_ComponentClassesToAdd_14, const TArray<class UClass*>& _ExprResult_29, class UVerseEngine_Entity_entity* __verse_0x00000000__15, enum class EVerseTrue _InvokeSureResultDummy_30, FVerseFunctionProperty_ _Callee_31, class UVGameplayRst_Geometry_fixed_mesh_component* __verse_0x71AD33A7_Mesh_16, FOptionalProperty_ _FallibleType_32, FOptionalProperty_ _ExprResultStack_33, FOptionalProperty_ _ExprResult_34, class UVerseEngine_Entity_entity* __verse_0x00000000__17, FVerseFunctionProperty_ _Callee_35, class UVGameplayRst_Geometry_fixed_mesh_component* __verse_0x00000000__18, enum class EVerseTrue _InvokeSureResultDummy_36, FVerseFunctionProperty_ _Callee_37, const struct FTuple_Llogic_Mlogic_R& _ExprResult_38, class UVGameplayRst_Physics_collision_component* __verse_0x802C815C_Collision_16, FOptionalProperty_ _FallibleType_39, FOptionalProperty_ _ExprResultStack_40, FOptionalProperty_ _ExprResult_41, class UVerseEngine_Entity_entity* __verse_0x00000000__19, FVerseFunctionProperty_ _Callee_42, class UVGameplayRst_Transform_position_component* __verse_0xA82B0967_Position_16, FOptionalProperty_ _FallibleType_43, FOptionalProperty_ _ExprResultStack_44, FOptionalProperty_ _ExprResult_45, class UVerseEngine_Entity_entity* __verse_0x00000000__20, FVerseFunctionProperty_ _Callee_46, class UVGameplayRst_Transform_rotation_component* __verse_0x78C70FF3_Rotation_16, FOptionalProperty_ _FallibleType_47, FOptionalProperty_ _ExprResultStack_48, FOptionalProperty_ _ExprResult_49, class UVerseEngine_Entity_entity* __verse_0x00000000__21, FVerseFunctionProperty_ _Callee_50, class UVGameplayRst_Transform_scale_component* __verse_0xA376805D_Scale_16, FOptionalProperty_ _FallibleType_51, FOptionalProperty_ _ExprResultStack_52, FOptionalProperty_ _ExprResult_53, class UVerseEngine_Entity_entity* __verse_0x00000000__22, FVerseFunctionProperty_ _Callee_54, class UVGameplayRst_GameObjects_model* __verse_0x95D09D0E_Result_23, uint64 _InstancingGraph_55, uint8 _ExprResult_56, FOptionalProperty_ _ExprResultStack_57)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_GameObjects", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_Nentity_M_N_Ksubtype_Lcomponent_R_R");

	Params::UVGameplayRst_GameObjects__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_Nentity_M_N_Ksubtype_Lcomponent_R_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms.__verse_0x00000000__1 = __verse_0x00000000__1;
	Parms.__verse_0x36974CE7_ComponentClassesToAdd_2 = __verse_0x36974CE7_ComponentClassesToAdd_2;
	Parms._ExprResult_0 = _ExprResult_0;
	Parms.__verse_0x00000000__3 = __verse_0x00000000__3;
	Parms._InvokeSureResultDummy_1 = _InvokeSureResultDummy_1;
	Parms._Callee_2 = _Callee_2;
	Parms.__verse_0x71AD33A7_Mesh_4 = __verse_0x71AD33A7_Mesh_4;
	Parms._FallibleType_3 = _FallibleType_3;
	Parms._ExprResultStack_4 = _ExprResultStack_4;
	Parms._ExprResult_5 = _ExprResult_5;
	Parms.__verse_0x00000000__5 = __verse_0x00000000__5;
	Parms._Callee_6 = _Callee_6;
	Parms.__verse_0x00000000__6 = __verse_0x00000000__6;
	Parms._InvokeSureResultDummy_7 = _InvokeSureResultDummy_7;
	Parms._Callee_8 = _Callee_8;
	Parms._ExprResult_9 = _ExprResult_9;
	Parms.__verse_0x802C815C_Collision_4 = __verse_0x802C815C_Collision_4;
	Parms._FallibleType_10 = _FallibleType_10;
	Parms._ExprResultStack_11 = _ExprResultStack_11;
	Parms._ExprResult_12 = _ExprResult_12;
	Parms.__verse_0x00000000__7 = __verse_0x00000000__7;
	Parms._Callee_13 = _Callee_13;
	Parms.__verse_0xA82B0967_Position_4 = __verse_0xA82B0967_Position_4;
	Parms._FallibleType_14 = _FallibleType_14;
	Parms._ExprResultStack_15 = _ExprResultStack_15;
	Parms._ExprResult_16 = _ExprResult_16;
	Parms.__verse_0x00000000__8 = __verse_0x00000000__8;
	Parms._Callee_17 = _Callee_17;
	Parms.__verse_0x78C70FF3_Rotation_4 = __verse_0x78C70FF3_Rotation_4;
	Parms._FallibleType_18 = _FallibleType_18;
	Parms._ExprResultStack_19 = _ExprResultStack_19;
	Parms._ExprResult_20 = _ExprResult_20;
	Parms.__verse_0x00000000__9 = __verse_0x00000000__9;
	Parms._Callee_21 = _Callee_21;
	Parms.__verse_0xA376805D_Scale_4 = __verse_0xA376805D_Scale_4;
	Parms._FallibleType_22 = _FallibleType_22;
	Parms._ExprResultStack_23 = _ExprResultStack_23;
	Parms._ExprResult_24 = _ExprResult_24;
	Parms.__verse_0x00000000__10 = __verse_0x00000000__10;
	Parms._Callee_25 = _Callee_25;
	Parms.__verse_0x95D09D0E_Result_11 = __verse_0x95D09D0E_Result_11;
	Parms._InstancingGraph_26 = _InstancingGraph_26;
	Parms._ExprResult_27 = _ExprResult_27;
	Parms._ExprResultStack_28 = _ExprResultStack_28;
	Parms.__verse_0x00000000__13 = __verse_0x00000000__13;
	Parms.__verse_0x36974CE7_ComponentClassesToAdd_14 = __verse_0x36974CE7_ComponentClassesToAdd_14;
	Parms._ExprResult_29 = _ExprResult_29;
	Parms.__verse_0x00000000__15 = __verse_0x00000000__15;
	Parms._InvokeSureResultDummy_30 = _InvokeSureResultDummy_30;
	Parms._Callee_31 = _Callee_31;
	Parms.__verse_0x71AD33A7_Mesh_16 = __verse_0x71AD33A7_Mesh_16;
	Parms._FallibleType_32 = _FallibleType_32;
	Parms._ExprResultStack_33 = _ExprResultStack_33;
	Parms._ExprResult_34 = _ExprResult_34;
	Parms.__verse_0x00000000__17 = __verse_0x00000000__17;
	Parms._Callee_35 = _Callee_35;
	Parms.__verse_0x00000000__18 = __verse_0x00000000__18;
	Parms._InvokeSureResultDummy_36 = _InvokeSureResultDummy_36;
	Parms._Callee_37 = _Callee_37;
	Parms._ExprResult_38 = _ExprResult_38;
	Parms.__verse_0x802C815C_Collision_16 = __verse_0x802C815C_Collision_16;
	Parms._FallibleType_39 = _FallibleType_39;
	Parms._ExprResultStack_40 = _ExprResultStack_40;
	Parms._ExprResult_41 = _ExprResult_41;
	Parms.__verse_0x00000000__19 = __verse_0x00000000__19;
	Parms._Callee_42 = _Callee_42;
	Parms.__verse_0xA82B0967_Position_16 = __verse_0xA82B0967_Position_16;
	Parms._FallibleType_43 = _FallibleType_43;
	Parms._ExprResultStack_44 = _ExprResultStack_44;
	Parms._ExprResult_45 = _ExprResult_45;
	Parms.__verse_0x00000000__20 = __verse_0x00000000__20;
	Parms._Callee_46 = _Callee_46;
	Parms.__verse_0x78C70FF3_Rotation_16 = __verse_0x78C70FF3_Rotation_16;
	Parms._FallibleType_47 = _FallibleType_47;
	Parms._ExprResultStack_48 = _ExprResultStack_48;
	Parms._ExprResult_49 = _ExprResult_49;
	Parms.__verse_0x00000000__21 = __verse_0x00000000__21;
	Parms._Callee_50 = _Callee_50;
	Parms.__verse_0xA376805D_Scale_16 = __verse_0xA376805D_Scale_16;
	Parms._FallibleType_51 = _FallibleType_51;
	Parms._ExprResultStack_52 = _ExprResultStack_52;
	Parms._ExprResult_53 = _ExprResult_53;
	Parms.__verse_0x00000000__22 = __verse_0x00000000__22;
	Parms._Callee_54 = _Callee_54;
	Parms.__verse_0x95D09D0E_Result_23 = __verse_0x95D09D0E_Result_23;
	Parms._InstancingGraph_55 = _InstancingGraph_55;
	Parms._ExprResult_56 = _ExprResult_56;
	Parms._ExprResultStack_57 = _ExprResultStack_57;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_GameObjects._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_Ntag_R
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UTags_tag*                   __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0x00000000__1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEntityComponent*            __verse_0x44719314_FoundComponent_3                              (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_0                                               (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_1                                                        (HasGetValueTypeHash)
// class UVerseEngine_Entity_entity*  __verse_0xECA943DB_Entity_3                                      (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_2                                               (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_3                                                        (HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_4                                                        (HasGetValueTypeHash)
// uint8                              _ExprResult_5                                                    (NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_6                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0x00000000__6                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEntityComponent*            __verse_0x44719314_FoundComponent_8                              (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_7                                               (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_8                                                        (HasGetValueTypeHash)
// class UVerseEngine_Entity_entity*  __verse_0xECA943DB_Entity_8                                      (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_9                                               (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_10                                                       (HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_11                                                       (HasGetValueTypeHash)
// uint8                              _ExprResult_12                                                   (NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_13                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionalProperty_ UVGameplayRst_GameObjects::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_Ntag_R(class UTags_tag* __verse_0xB2CDDD72_Argument, FOptionalProperty_ __verse_0x00000000__1, class UEntityComponent* __verse_0x44719314_FoundComponent_3, FOptionalProperty_ _ExprResultStack_0, FVerseFunctionProperty_ _Callee_1, class UVerseEngine_Entity_entity* __verse_0xECA943DB_Entity_3, FOptionalProperty_ _ExprResultStack_2, FVerseFunctionProperty_ _Callee_3, FVerseFunctionProperty_ _Callee_4, uint8 _ExprResult_5, FOptionalProperty_ _ExprResultStack_6, FOptionalProperty_ __verse_0x00000000__6, class UEntityComponent* __verse_0x44719314_FoundComponent_8, FOptionalProperty_ _ExprResultStack_7, FVerseFunctionProperty_ _Callee_8, class UVerseEngine_Entity_entity* __verse_0xECA943DB_Entity_8, FOptionalProperty_ _ExprResultStack_9, FVerseFunctionProperty_ _Callee_10, FVerseFunctionProperty_ _Callee_11, uint8 _ExprResult_12, FOptionalProperty_ _ExprResultStack_13)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_GameObjects", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_Ntag_R");

	Params::UVGameplayRst_GameObjects__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_Ntag_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms.__verse_0x00000000__1 = __verse_0x00000000__1;
	Parms.__verse_0x44719314_FoundComponent_3 = __verse_0x44719314_FoundComponent_3;
	Parms._ExprResultStack_0 = _ExprResultStack_0;
	Parms._Callee_1 = _Callee_1;
	Parms.__verse_0xECA943DB_Entity_3 = __verse_0xECA943DB_Entity_3;
	Parms._ExprResultStack_2 = _ExprResultStack_2;
	Parms._Callee_3 = _Callee_3;
	Parms._Callee_4 = _Callee_4;
	Parms._ExprResult_5 = _ExprResult_5;
	Parms._ExprResultStack_6 = _ExprResultStack_6;
	Parms.__verse_0x00000000__6 = __verse_0x00000000__6;
	Parms.__verse_0x44719314_FoundComponent_8 = __verse_0x44719314_FoundComponent_8;
	Parms._ExprResultStack_7 = _ExprResultStack_7;
	Parms._Callee_8 = _Callee_8;
	Parms.__verse_0xECA943DB_Entity_8 = __verse_0xECA943DB_Entity_8;
	Parms._ExprResultStack_9 = _ExprResultStack_9;
	Parms._Callee_10 = _Callee_10;
	Parms._Callee_11 = _Callee_11;
	Parms._ExprResult_12 = _ExprResult_12;
	Parms._ExprResultStack_13 = _ExprResultStack_13;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_GameObjects._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_Nentity_R
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UVerseEngine_Entity_entity*  __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class UClass*>              __verse_0xDFAF13A0_ComponentClassToAdd_1                         (ContainsInstancedReference)
// TArray<enum class EVerseFalse>     __verse_0xFFC68BC5_Array_2                                       (ContainsInstancedReference)
// TArray<class UClass*>              _ForResult_0                                                     (ContainsInstancedReference)
// int64                              _ForIndex_1                                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              _ForLength_2                                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVerseFalse             __verse_0xFB88B569_Item_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_3                                                    (NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_4                                                        (HasGetValueTypeHash)
// struct FTuple_Lentity_M_Ksubtype_Lcomponent_R_R_ExprResult_5                                                    (HasGetValueTypeHash)
// TArray<class UClass*>              __verse_0xDFAF13A0_ComponentClassToAdd_6                         (ContainsInstancedReference)
// TArray<enum class EVerseFalse>     __verse_0xFFC68BC5_Array_7                                       (ContainsInstancedReference)
// TArray<class UClass*>              _ForResult_6                                                     (ContainsInstancedReference)
// int64                              _ForIndex_7                                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              _ForLength_8                                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVerseFalse             __verse_0xFB88B569_Item_9                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_9                                                    (NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_10                                                       (HasGetValueTypeHash)
// struct FTuple_Lentity_M_Ksubtype_Lcomponent_R_R_ExprResult_11                                                   (HasGetValueTypeHash)

FOptionalProperty_ UVGameplayRst_GameObjects::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_Nentity_R(class UVerseEngine_Entity_entity* __verse_0xB2CDDD72_Argument, const TArray<class UClass*>& __verse_0xDFAF13A0_ComponentClassToAdd_1, const TArray<enum class EVerseFalse>& __verse_0xFFC68BC5_Array_2, const TArray<class UClass*>& _ForResult_0, int64 _ForIndex_1, int64 _ForLength_2, enum class EVerseFalse __verse_0xFB88B569_Item_4, uint8 _ExprResult_3, FVerseFunctionProperty_ _Callee_4, const struct FTuple_Lentity_M_Ksubtype_Lcomponent_R_R& _ExprResult_5, const TArray<class UClass*>& __verse_0xDFAF13A0_ComponentClassToAdd_6, const TArray<enum class EVerseFalse>& __verse_0xFFC68BC5_Array_7, const TArray<class UClass*>& _ForResult_6, int64 _ForIndex_7, int64 _ForLength_8, enum class EVerseFalse __verse_0xFB88B569_Item_9, uint8 _ExprResult_9, FVerseFunctionProperty_ _Callee_10, const struct FTuple_Lentity_M_Ksubtype_Lcomponent_R_R& _ExprResult_11)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_GameObjects", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_Nentity_R");

	Params::UVGameplayRst_GameObjects__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_Nentity_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms.__verse_0xDFAF13A0_ComponentClassToAdd_1 = __verse_0xDFAF13A0_ComponentClassToAdd_1;
	Parms.__verse_0xFFC68BC5_Array_2 = __verse_0xFFC68BC5_Array_2;
	Parms._ForResult_0 = _ForResult_0;
	Parms._ForIndex_1 = _ForIndex_1;
	Parms._ForLength_2 = _ForLength_2;
	Parms.__verse_0xFB88B569_Item_4 = __verse_0xFB88B569_Item_4;
	Parms._ExprResult_3 = _ExprResult_3;
	Parms._Callee_4 = _Callee_4;
	Parms._ExprResult_5 = _ExprResult_5;
	Parms.__verse_0xDFAF13A0_ComponentClassToAdd_6 = __verse_0xDFAF13A0_ComponentClassToAdd_6;
	Parms.__verse_0xFFC68BC5_Array_7 = __verse_0xFFC68BC5_Array_7;
	Parms._ForResult_6 = _ForResult_6;
	Parms._ForIndex_7 = _ForIndex_7;
	Parms._ForLength_8 = _ForLength_8;
	Parms.__verse_0xFB88B569_Item_9 = __verse_0xFB88B569_Item_9;
	Parms._ExprResult_9 = _ExprResult_9;
	Parms._Callee_10 = _Callee_10;
	Parms._ExprResult_11 = _ExprResult_11;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_GameObjects._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateImmutableModel_L_Nentity_R
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UVerseEngine_Entity_entity*  __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// TArray<class UClass*>              __verse_0xDFAF13A0_ComponentClassToAdd_1                         (ContainsInstancedReference)
// TArray<enum class EVerseFalse>     __verse_0xFFC68BC5_Array_2                                       (ContainsInstancedReference)
// TArray<class UClass*>              _ForResult_0                                                     (ContainsInstancedReference)
// int64                              _ForIndex_1                                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              _ForLength_2                                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVerseFalse             __verse_0xFB88B569_Item_4                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_3                                                    (NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_4                                                        (HasGetValueTypeHash)
// struct FTuple_Lentity_M_Ksubtype_Lcomponent_R_R_ExprResult_5                                                    (HasGetValueTypeHash)
// TArray<class UClass*>              __verse_0xDFAF13A0_ComponentClassToAdd_6                         (ContainsInstancedReference)
// TArray<enum class EVerseFalse>     __verse_0xFFC68BC5_Array_7                                       (ContainsInstancedReference)
// TArray<class UClass*>              _ForResult_6                                                     (ContainsInstancedReference)
// int64                              _ForIndex_7                                                      (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              _ForLength_8                                                     (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// enum class EVerseFalse             __verse_0xFB88B569_Item_9                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_9                                                    (NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_10                                                       (HasGetValueTypeHash)
// struct FTuple_Lentity_M_Ksubtype_Lcomponent_R_R_ExprResult_11                                                   (HasGetValueTypeHash)

FOptionalProperty_ UVGameplayRst_GameObjects::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateImmutableModel_L_Nentity_R(class UVerseEngine_Entity_entity* __verse_0xB2CDDD72_Argument, const TArray<class UClass*>& __verse_0xDFAF13A0_ComponentClassToAdd_1, const TArray<enum class EVerseFalse>& __verse_0xFFC68BC5_Array_2, const TArray<class UClass*>& _ForResult_0, int64 _ForIndex_1, int64 _ForLength_2, enum class EVerseFalse __verse_0xFB88B569_Item_4, uint8 _ExprResult_3, FVerseFunctionProperty_ _Callee_4, const struct FTuple_Lentity_M_Ksubtype_Lcomponent_R_R& _ExprResult_5, const TArray<class UClass*>& __verse_0xDFAF13A0_ComponentClassToAdd_6, const TArray<enum class EVerseFalse>& __verse_0xFFC68BC5_Array_7, const TArray<class UClass*>& _ForResult_6, int64 _ForIndex_7, int64 _ForLength_8, enum class EVerseFalse __verse_0xFB88B569_Item_9, uint8 _ExprResult_9, FVerseFunctionProperty_ _Callee_10, const struct FTuple_Lentity_M_Ksubtype_Lcomponent_R_R& _ExprResult_11)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_GameObjects", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateImmutableModel_L_Nentity_R");

	Params::UVGameplayRst_GameObjects__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateImmutableModel_L_Nentity_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms.__verse_0xDFAF13A0_ComponentClassToAdd_1 = __verse_0xDFAF13A0_ComponentClassToAdd_1;
	Parms.__verse_0xFFC68BC5_Array_2 = __verse_0xFFC68BC5_Array_2;
	Parms._ForResult_0 = _ForResult_0;
	Parms._ForIndex_1 = _ForIndex_1;
	Parms._ForLength_2 = _ForLength_2;
	Parms.__verse_0xFB88B569_Item_4 = __verse_0xFB88B569_Item_4;
	Parms._ExprResult_3 = _ExprResult_3;
	Parms._Callee_4 = _Callee_4;
	Parms._ExprResult_5 = _ExprResult_5;
	Parms.__verse_0xDFAF13A0_ComponentClassToAdd_6 = __verse_0xDFAF13A0_ComponentClassToAdd_6;
	Parms.__verse_0xFFC68BC5_Array_7 = __verse_0xFFC68BC5_Array_7;
	Parms._ForResult_6 = _ForResult_6;
	Parms._ForIndex_7 = _ForIndex_7;
	Parms._ForLength_8 = _ForLength_8;
	Parms.__verse_0xFB88B569_Item_9 = __verse_0xFB88B569_Item_9;
	Parms._ExprResult_9 = _ExprResult_9;
	Parms._Callee_10 = _Callee_10;
	Parms._ExprResult_11 = _ExprResult_11;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_GameObjects._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateImmutableModel_L_Ntag_R
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// class UTags_tag*                   __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0x00000000__1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEntityComponent*            __verse_0x44719314_FoundComponent_3                              (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_0                                               (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_1                                                        (HasGetValueTypeHash)
// class UVerseEngine_Entity_entity*  __verse_0xECA943DB_Entity_3                                      (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_2                                               (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_3                                                        (HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_4                                                        (HasGetValueTypeHash)
// uint8                              _ExprResult_5                                                    (NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_6                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0x00000000__6                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// class UEntityComponent*            __verse_0x44719314_FoundComponent_8                              (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_7                                               (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_8                                                        (HasGetValueTypeHash)
// class UVerseEngine_Entity_entity*  __verse_0xECA943DB_Entity_8                                      (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_9                                               (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_10                                                       (HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_11                                                       (HasGetValueTypeHash)
// uint8                              _ExprResult_12                                                   (NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_13                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionalProperty_ UVGameplayRst_GameObjects::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateImmutableModel_L_Ntag_R(class UTags_tag* __verse_0xB2CDDD72_Argument, FOptionalProperty_ __verse_0x00000000__1, class UEntityComponent* __verse_0x44719314_FoundComponent_3, FOptionalProperty_ _ExprResultStack_0, FVerseFunctionProperty_ _Callee_1, class UVerseEngine_Entity_entity* __verse_0xECA943DB_Entity_3, FOptionalProperty_ _ExprResultStack_2, FVerseFunctionProperty_ _Callee_3, FVerseFunctionProperty_ _Callee_4, uint8 _ExprResult_5, FOptionalProperty_ _ExprResultStack_6, FOptionalProperty_ __verse_0x00000000__6, class UEntityComponent* __verse_0x44719314_FoundComponent_8, FOptionalProperty_ _ExprResultStack_7, FVerseFunctionProperty_ _Callee_8, class UVerseEngine_Entity_entity* __verse_0xECA943DB_Entity_8, FOptionalProperty_ _ExprResultStack_9, FVerseFunctionProperty_ _Callee_10, FVerseFunctionProperty_ _Callee_11, uint8 _ExprResult_12, FOptionalProperty_ _ExprResultStack_13)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_GameObjects", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateImmutableModel_L_Ntag_R");

	Params::UVGameplayRst_GameObjects__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateImmutableModel_L_Ntag_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms.__verse_0x00000000__1 = __verse_0x00000000__1;
	Parms.__verse_0x44719314_FoundComponent_3 = __verse_0x44719314_FoundComponent_3;
	Parms._ExprResultStack_0 = _ExprResultStack_0;
	Parms._Callee_1 = _Callee_1;
	Parms.__verse_0xECA943DB_Entity_3 = __verse_0xECA943DB_Entity_3;
	Parms._ExprResultStack_2 = _ExprResultStack_2;
	Parms._Callee_3 = _Callee_3;
	Parms._Callee_4 = _Callee_4;
	Parms._ExprResult_5 = _ExprResult_5;
	Parms._ExprResultStack_6 = _ExprResultStack_6;
	Parms.__verse_0x00000000__6 = __verse_0x00000000__6;
	Parms.__verse_0x44719314_FoundComponent_8 = __verse_0x44719314_FoundComponent_8;
	Parms._ExprResultStack_7 = _ExprResultStack_7;
	Parms._Callee_8 = _Callee_8;
	Parms.__verse_0xECA943DB_Entity_8 = __verse_0xECA943DB_Entity_8;
	Parms._ExprResultStack_9 = _ExprResultStack_9;
	Parms._Callee_10 = _Callee_10;
	Parms._Callee_11 = _Callee_11;
	Parms._ExprResult_12 = _ExprResult_12;
	Parms._ExprResultStack_13 = _ExprResultStack_13;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_GameObjects._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateImmutableModel_L_Nentity_M_N_Ksubtype_Lcomponent_R_R
// (Final, Static, Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_Lentity_M_Ksubtype_Lcomponent_R_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0x00000000__1                                            (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UClass*>              __verse_0x36974CE7_ComponentClassesToAdd_2                       (ContainsInstancedReference)
// TArray<class UClass*>              _ExprResult_0                                                    (ContainsInstancedReference)
// class UVerseEngine_Entity_entity*  __verse_0x00000000__3                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_1                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_2                                                        (HasGetValueTypeHash)
// class UVGameplayRst_Geometry_fixed_mesh_component*__verse_0x71AD33A7_Mesh_4                                        (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 _FallibleType_3                                                  (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_4                                               (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_5                                                    (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UVerseEngine_Entity_entity*  __verse_0x00000000__5                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_6                                                        (HasGetValueTypeHash)
// class UVGameplayRst_Geometry_fixed_mesh_component*__verse_0x00000000__6                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_7                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_8                                                        (HasGetValueTypeHash)
// struct FTuple_Llogic_Mlogic_R      _ExprResult_9                                                    (HasGetValueTypeHash)
// class UVGameplayRst_Physics_collision_component*__verse_0x802C815C_Collision_4                                   (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 _FallibleType_10                                                 (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_11                                              (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_12                                                   (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UVerseEngine_Entity_entity*  __verse_0x00000000__7                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_13                                                       (HasGetValueTypeHash)
// class UVGameplayRst_Transform_position_component*__verse_0xA82B0967_Position_4                                    (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 _FallibleType_14                                                 (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_15                                              (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_16                                                   (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UVerseEngine_Entity_entity*  __verse_0x00000000__8                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_17                                                       (HasGetValueTypeHash)
// class UVGameplayRst_Transform_rotation_component*__verse_0x78C70FF3_Rotation_4                                    (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 _FallibleType_18                                                 (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_19                                              (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_20                                                   (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UVerseEngine_Entity_entity*  __verse_0x00000000__9                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_21                                                       (HasGetValueTypeHash)
// class UVGameplayRst_Transform_scale_component*__verse_0xA376805D_Scale_4                                       (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 _FallibleType_22                                                 (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_23                                              (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_24                                                   (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UVerseEngine_Entity_entity*  __verse_0x00000000__10                                           (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_25                                                       (HasGetValueTypeHash)
// class UVGameplayRst_GameObjects_immutable_model*__verse_0x95D09D0E_Result_11                                     (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint64                             _InstancingGraph_26                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_27                                                   (NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_28                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 __verse_0x00000000__13                                           (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// TArray<class UClass*>              __verse_0x36974CE7_ComponentClassesToAdd_14                      (ContainsInstancedReference)
// TArray<class UClass*>              _ExprResult_29                                                   (ContainsInstancedReference)
// class UVerseEngine_Entity_entity*  __verse_0x00000000__15                                           (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_30                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_31                                                       (HasGetValueTypeHash)
// class UVGameplayRst_Geometry_fixed_mesh_component*__verse_0x71AD33A7_Mesh_16                                       (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 _FallibleType_32                                                 (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_33                                              (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_34                                                   (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UVerseEngine_Entity_entity*  __verse_0x00000000__17                                           (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_35                                                       (HasGetValueTypeHash)
// class UVGameplayRst_Geometry_fixed_mesh_component*__verse_0x00000000__18                                           (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_36                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_37                                                       (HasGetValueTypeHash)
// struct FTuple_Llogic_Mlogic_R      _ExprResult_38                                                   (HasGetValueTypeHash)
// class UVGameplayRst_Physics_collision_component*__verse_0x802C815C_Collision_16                                  (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 _FallibleType_39                                                 (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_40                                              (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_41                                                   (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UVerseEngine_Entity_entity*  __verse_0x00000000__19                                           (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_42                                                       (HasGetValueTypeHash)
// class UVGameplayRst_Transform_position_component*__verse_0xA82B0967_Position_16                                   (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 _FallibleType_43                                                 (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_44                                              (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_45                                                   (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UVerseEngine_Entity_entity*  __verse_0x00000000__20                                           (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_46                                                       (HasGetValueTypeHash)
// class UVGameplayRst_Transform_rotation_component*__verse_0x78C70FF3_Rotation_16                                   (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 _FallibleType_47                                                 (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_48                                              (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_49                                                   (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UVerseEngine_Entity_entity*  __verse_0x00000000__21                                           (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_50                                                       (HasGetValueTypeHash)
// class UVGameplayRst_Transform_scale_component*__verse_0xA376805D_Scale_16                                      (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 _FallibleType_51                                                 (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_52                                              (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResult_53                                                   (ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
// class UVerseEngine_Entity_entity*  __verse_0x00000000__22                                           (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_54                                                       (HasGetValueTypeHash)
// class UVGameplayRst_GameObjects_immutable_model*__verse_0x95D09D0E_Result_23                                     (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint64                             _InstancingGraph_55                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// uint8                              _ExprResult_56                                                   (NoDestructor, HasGetValueTypeHash)
// FOptionalProperty_                 _ExprResultStack_57                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionalProperty_ UVGameplayRst_GameObjects::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateImmutableModel_L_Nentity_M_N_Ksubtype_Lcomponent_R_R(const struct FTuple_Lentity_M_Ksubtype_Lcomponent_R_R& __verse_0xB2CDDD72_Argument, FOptionalProperty_ __verse_0x00000000__1, const TArray<class UClass*>& __verse_0x36974CE7_ComponentClassesToAdd_2, const TArray<class UClass*>& _ExprResult_0, class UVerseEngine_Entity_entity* __verse_0x00000000__3, enum class EVerseTrue _InvokeSureResultDummy_1, FVerseFunctionProperty_ _Callee_2, class UVGameplayRst_Geometry_fixed_mesh_component* __verse_0x71AD33A7_Mesh_4, FOptionalProperty_ _FallibleType_3, FOptionalProperty_ _ExprResultStack_4, FOptionalProperty_ _ExprResult_5, class UVerseEngine_Entity_entity* __verse_0x00000000__5, FVerseFunctionProperty_ _Callee_6, class UVGameplayRst_Geometry_fixed_mesh_component* __verse_0x00000000__6, enum class EVerseTrue _InvokeSureResultDummy_7, FVerseFunctionProperty_ _Callee_8, const struct FTuple_Llogic_Mlogic_R& _ExprResult_9, class UVGameplayRst_Physics_collision_component* __verse_0x802C815C_Collision_4, FOptionalProperty_ _FallibleType_10, FOptionalProperty_ _ExprResultStack_11, FOptionalProperty_ _ExprResult_12, class UVerseEngine_Entity_entity* __verse_0x00000000__7, FVerseFunctionProperty_ _Callee_13, class UVGameplayRst_Transform_position_component* __verse_0xA82B0967_Position_4, FOptionalProperty_ _FallibleType_14, FOptionalProperty_ _ExprResultStack_15, FOptionalProperty_ _ExprResult_16, class UVerseEngine_Entity_entity* __verse_0x00000000__8, FVerseFunctionProperty_ _Callee_17, class UVGameplayRst_Transform_rotation_component* __verse_0x78C70FF3_Rotation_4, FOptionalProperty_ _FallibleType_18, FOptionalProperty_ _ExprResultStack_19, FOptionalProperty_ _ExprResult_20, class UVerseEngine_Entity_entity* __verse_0x00000000__9, FVerseFunctionProperty_ _Callee_21, class UVGameplayRst_Transform_scale_component* __verse_0xA376805D_Scale_4, FOptionalProperty_ _FallibleType_22, FOptionalProperty_ _ExprResultStack_23, FOptionalProperty_ _ExprResult_24, class UVerseEngine_Entity_entity* __verse_0x00000000__10, FVerseFunctionProperty_ _Callee_25, class UVGameplayRst_GameObjects_immutable_model* __verse_0x95D09D0E_Result_11, uint64 _InstancingGraph_26, uint8 _ExprResult_27, FOptionalProperty_ _ExprResultStack_28, FOptionalProperty_ __verse_0x00000000__13, const TArray<class UClass*>& __verse_0x36974CE7_ComponentClassesToAdd_14, const TArray<class UClass*>& _ExprResult_29, class UVerseEngine_Entity_entity* __verse_0x00000000__15, enum class EVerseTrue _InvokeSureResultDummy_30, FVerseFunctionProperty_ _Callee_31, class UVGameplayRst_Geometry_fixed_mesh_component* __verse_0x71AD33A7_Mesh_16, FOptionalProperty_ _FallibleType_32, FOptionalProperty_ _ExprResultStack_33, FOptionalProperty_ _ExprResult_34, class UVerseEngine_Entity_entity* __verse_0x00000000__17, FVerseFunctionProperty_ _Callee_35, class UVGameplayRst_Geometry_fixed_mesh_component* __verse_0x00000000__18, enum class EVerseTrue _InvokeSureResultDummy_36, FVerseFunctionProperty_ _Callee_37, const struct FTuple_Llogic_Mlogic_R& _ExprResult_38, class UVGameplayRst_Physics_collision_component* __verse_0x802C815C_Collision_16, FOptionalProperty_ _FallibleType_39, FOptionalProperty_ _ExprResultStack_40, FOptionalProperty_ _ExprResult_41, class UVerseEngine_Entity_entity* __verse_0x00000000__19, FVerseFunctionProperty_ _Callee_42, class UVGameplayRst_Transform_position_component* __verse_0xA82B0967_Position_16, FOptionalProperty_ _FallibleType_43, FOptionalProperty_ _ExprResultStack_44, FOptionalProperty_ _ExprResult_45, class UVerseEngine_Entity_entity* __verse_0x00000000__20, FVerseFunctionProperty_ _Callee_46, class UVGameplayRst_Transform_rotation_component* __verse_0x78C70FF3_Rotation_16, FOptionalProperty_ _FallibleType_47, FOptionalProperty_ _ExprResultStack_48, FOptionalProperty_ _ExprResult_49, class UVerseEngine_Entity_entity* __verse_0x00000000__21, FVerseFunctionProperty_ _Callee_50, class UVGameplayRst_Transform_scale_component* __verse_0xA376805D_Scale_16, FOptionalProperty_ _FallibleType_51, FOptionalProperty_ _ExprResultStack_52, FOptionalProperty_ _ExprResult_53, class UVerseEngine_Entity_entity* __verse_0x00000000__22, FVerseFunctionProperty_ _Callee_54, class UVGameplayRst_GameObjects_immutable_model* __verse_0x95D09D0E_Result_23, uint64 _InstancingGraph_55, uint8 _ExprResult_56, FOptionalProperty_ _ExprResultStack_57)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_GameObjects", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateImmutableModel_L_Nentity_M_N_Ksubtype_Lcomponent_R_R");

	Params::UVGameplayRst_GameObjects__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateImmutableModel_L_Nentity_M_N_Ksubtype_Lcomponent_R_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms.__verse_0x00000000__1 = __verse_0x00000000__1;
	Parms.__verse_0x36974CE7_ComponentClassesToAdd_2 = __verse_0x36974CE7_ComponentClassesToAdd_2;
	Parms._ExprResult_0 = _ExprResult_0;
	Parms.__verse_0x00000000__3 = __verse_0x00000000__3;
	Parms._InvokeSureResultDummy_1 = _InvokeSureResultDummy_1;
	Parms._Callee_2 = _Callee_2;
	Parms.__verse_0x71AD33A7_Mesh_4 = __verse_0x71AD33A7_Mesh_4;
	Parms._FallibleType_3 = _FallibleType_3;
	Parms._ExprResultStack_4 = _ExprResultStack_4;
	Parms._ExprResult_5 = _ExprResult_5;
	Parms.__verse_0x00000000__5 = __verse_0x00000000__5;
	Parms._Callee_6 = _Callee_6;
	Parms.__verse_0x00000000__6 = __verse_0x00000000__6;
	Parms._InvokeSureResultDummy_7 = _InvokeSureResultDummy_7;
	Parms._Callee_8 = _Callee_8;
	Parms._ExprResult_9 = _ExprResult_9;
	Parms.__verse_0x802C815C_Collision_4 = __verse_0x802C815C_Collision_4;
	Parms._FallibleType_10 = _FallibleType_10;
	Parms._ExprResultStack_11 = _ExprResultStack_11;
	Parms._ExprResult_12 = _ExprResult_12;
	Parms.__verse_0x00000000__7 = __verse_0x00000000__7;
	Parms._Callee_13 = _Callee_13;
	Parms.__verse_0xA82B0967_Position_4 = __verse_0xA82B0967_Position_4;
	Parms._FallibleType_14 = _FallibleType_14;
	Parms._ExprResultStack_15 = _ExprResultStack_15;
	Parms._ExprResult_16 = _ExprResult_16;
	Parms.__verse_0x00000000__8 = __verse_0x00000000__8;
	Parms._Callee_17 = _Callee_17;
	Parms.__verse_0x78C70FF3_Rotation_4 = __verse_0x78C70FF3_Rotation_4;
	Parms._FallibleType_18 = _FallibleType_18;
	Parms._ExprResultStack_19 = _ExprResultStack_19;
	Parms._ExprResult_20 = _ExprResult_20;
	Parms.__verse_0x00000000__9 = __verse_0x00000000__9;
	Parms._Callee_21 = _Callee_21;
	Parms.__verse_0xA376805D_Scale_4 = __verse_0xA376805D_Scale_4;
	Parms._FallibleType_22 = _FallibleType_22;
	Parms._ExprResultStack_23 = _ExprResultStack_23;
	Parms._ExprResult_24 = _ExprResult_24;
	Parms.__verse_0x00000000__10 = __verse_0x00000000__10;
	Parms._Callee_25 = _Callee_25;
	Parms.__verse_0x95D09D0E_Result_11 = __verse_0x95D09D0E_Result_11;
	Parms._InstancingGraph_26 = _InstancingGraph_26;
	Parms._ExprResult_27 = _ExprResult_27;
	Parms._ExprResultStack_28 = _ExprResultStack_28;
	Parms.__verse_0x00000000__13 = __verse_0x00000000__13;
	Parms.__verse_0x36974CE7_ComponentClassesToAdd_14 = __verse_0x36974CE7_ComponentClassesToAdd_14;
	Parms._ExprResult_29 = _ExprResult_29;
	Parms.__verse_0x00000000__15 = __verse_0x00000000__15;
	Parms._InvokeSureResultDummy_30 = _InvokeSureResultDummy_30;
	Parms._Callee_31 = _Callee_31;
	Parms.__verse_0x71AD33A7_Mesh_16 = __verse_0x71AD33A7_Mesh_16;
	Parms._FallibleType_32 = _FallibleType_32;
	Parms._ExprResultStack_33 = _ExprResultStack_33;
	Parms._ExprResult_34 = _ExprResult_34;
	Parms.__verse_0x00000000__17 = __verse_0x00000000__17;
	Parms._Callee_35 = _Callee_35;
	Parms.__verse_0x00000000__18 = __verse_0x00000000__18;
	Parms._InvokeSureResultDummy_36 = _InvokeSureResultDummy_36;
	Parms._Callee_37 = _Callee_37;
	Parms._ExprResult_38 = _ExprResult_38;
	Parms.__verse_0x802C815C_Collision_16 = __verse_0x802C815C_Collision_16;
	Parms._FallibleType_39 = _FallibleType_39;
	Parms._ExprResultStack_40 = _ExprResultStack_40;
	Parms._ExprResult_41 = _ExprResult_41;
	Parms.__verse_0x00000000__19 = __verse_0x00000000__19;
	Parms._Callee_42 = _Callee_42;
	Parms.__verse_0xA82B0967_Position_16 = __verse_0xA82B0967_Position_16;
	Parms._FallibleType_43 = _FallibleType_43;
	Parms._ExprResultStack_44 = _ExprResultStack_44;
	Parms._ExprResult_45 = _ExprResult_45;
	Parms.__verse_0x00000000__20 = __verse_0x00000000__20;
	Parms._Callee_46 = _Callee_46;
	Parms.__verse_0x78C70FF3_Rotation_16 = __verse_0x78C70FF3_Rotation_16;
	Parms._FallibleType_47 = _FallibleType_47;
	Parms._ExprResultStack_48 = _ExprResultStack_48;
	Parms._ExprResult_49 = _ExprResult_49;
	Parms.__verse_0x00000000__21 = __verse_0x00000000__21;
	Parms._Callee_50 = _Callee_50;
	Parms.__verse_0xA376805D_Scale_16 = __verse_0xA376805D_Scale_16;
	Parms._FallibleType_51 = _FallibleType_51;
	Parms._ExprResultStack_52 = _ExprResultStack_52;
	Parms._ExprResult_53 = _ExprResult_53;
	Parms.__verse_0x00000000__22 = __verse_0x00000000__22;
	Parms._Callee_54 = _Callee_54;
	Parms.__verse_0x95D09D0E_Result_23 = __verse_0x95D09D0E_Result_23;
	Parms._InstancingGraph_55 = _InstancingGraph_55;
	Parms._ExprResult_56 = _ExprResult_56;
	Parms._ExprResultStack_57 = _ExprResultStack_57;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_GameObjects.$InitCDO
// (None)
// Parameters:

void UVGameplayRst_GameObjects::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_GameObjects", "$InitCDO");

	Params::UVGameplayRst_GameObjects__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VGameplayRst.VGameplayRst_GameObjects_immutable_model
// (None)

class UClass* UVGameplayRst_GameObjects_immutable_model::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VGameplayRst_GameObjects_immutable_model");

	return Clss;
}


// VGameplayRst_GameObjects_immutable_model VGameplayRst.Default__VGameplayRst_GameObjects_immutable_model
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVGameplayRst_GameObjects_immutable_model* UVGameplayRst_GameObjects_immutable_model::GetDefaultObj()
{
	static class UVGameplayRst_GameObjects_immutable_model* Default = nullptr;

	if (!Default)
		Default = static_cast<UVGameplayRst_GameObjects_immutable_model*>(UVGameplayRst_GameObjects_immutable_model::StaticClass()->DefaultObject);

	return Default;
}


// Function VGameplayRst.VGameplayRst_GameObjects_immutable_model._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RUpVector
// (Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FSpatialMath_vector3        RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UVGameplayRst_Transform_rotation_component*__verse_0x00000000__1                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_0                                                        (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_1                                                    (HasGetValueTypeHash)
// class UVGameplayRst_Transform_rotation_component*__verse_0x00000000__2                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_2                                                        (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_3                                                    (HasGetValueTypeHash)

struct FSpatialMath_vector3 UVGameplayRst_GameObjects_immutable_model::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RUpVector(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, class UVGameplayRst_Transform_rotation_component* __verse_0x00000000__1, FVerseFunctionProperty_ _Callee_0, const struct FTuple_L_R& _ExprResult_1, class UVGameplayRst_Transform_rotation_component* __verse_0x00000000__2, FVerseFunctionProperty_ _Callee_2, const struct FTuple_L_R& _ExprResult_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_GameObjects_immutable_model", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RUpVector");

	Params::UVGameplayRst_GameObjects_immutable_model__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RUpVector_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms.__verse_0x00000000__1 = __verse_0x00000000__1;
	Parms._Callee_0 = _Callee_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms.__verse_0x00000000__2 = __verse_0x00000000__2;
	Parms._Callee_2 = _Callee_2;
	Parms._ExprResult_3 = _ExprResult_3;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_GameObjects_immutable_model._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RRotation
// (Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FVerseRotation              RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor)
// class UVGameplayRst_Transform_rotation_component*__verse_0x00000000__1                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_0                                                        (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_1                                                    (HasGetValueTypeHash)
// class UVGameplayRst_Transform_rotation_component*__verse_0x00000000__2                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_2                                                        (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_3                                                    (HasGetValueTypeHash)

struct FVerseRotation UVGameplayRst_GameObjects_immutable_model::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RRotation(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, class UVGameplayRst_Transform_rotation_component* __verse_0x00000000__1, FVerseFunctionProperty_ _Callee_0, const struct FTuple_L_R& _ExprResult_1, class UVGameplayRst_Transform_rotation_component* __verse_0x00000000__2, FVerseFunctionProperty_ _Callee_2, const struct FTuple_L_R& _ExprResult_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_GameObjects_immutable_model", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RRotation");

	Params::UVGameplayRst_GameObjects_immutable_model__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RRotation_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms.__verse_0x00000000__1 = __verse_0x00000000__1;
	Parms._Callee_0 = _Callee_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms.__verse_0x00000000__2 = __verse_0x00000000__2;
	Parms._Callee_2 = _Callee_2;
	Parms._ExprResult_3 = _ExprResult_3;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_GameObjects_immutable_model._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RRightVector
// (Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FSpatialMath_vector3        RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UVGameplayRst_Transform_rotation_component*__verse_0x00000000__1                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_0                                                        (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_1                                                    (HasGetValueTypeHash)
// class UVGameplayRst_Transform_rotation_component*__verse_0x00000000__2                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_2                                                        (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_3                                                    (HasGetValueTypeHash)

struct FSpatialMath_vector3 UVGameplayRst_GameObjects_immutable_model::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RRightVector(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, class UVGameplayRst_Transform_rotation_component* __verse_0x00000000__1, FVerseFunctionProperty_ _Callee_0, const struct FTuple_L_R& _ExprResult_1, class UVGameplayRst_Transform_rotation_component* __verse_0x00000000__2, FVerseFunctionProperty_ _Callee_2, const struct FTuple_L_R& _ExprResult_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_GameObjects_immutable_model", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RRightVector");

	Params::UVGameplayRst_GameObjects_immutable_model__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RRightVector_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms.__verse_0x00000000__1 = __verse_0x00000000__1;
	Parms._Callee_0 = _Callee_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms.__verse_0x00000000__2 = __verse_0x00000000__2;
	Parms._Callee_2 = _Callee_2;
	Parms._ExprResult_3 = _ExprResult_3;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_GameObjects_immutable_model._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fimmutable__model_N_RIsVisible
// (Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// uint8                              RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)
// class UVGameplayRst_Geometry_fixed_mesh_component*__verse_0x00000000__1                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_0                                                        (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_1                                                    (HasGetValueTypeHash)
// class UVGameplayRst_Geometry_fixed_mesh_component*__verse_0x00000000__2                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_2                                                        (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_3                                                    (HasGetValueTypeHash)

uint8 UVGameplayRst_GameObjects_immutable_model::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fimmutable__model_N_RIsVisible(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, class UVGameplayRst_Geometry_fixed_mesh_component* __verse_0x00000000__1, FVerseFunctionProperty_ _Callee_0, const struct FTuple_L_R& _ExprResult_1, class UVGameplayRst_Geometry_fixed_mesh_component* __verse_0x00000000__2, FVerseFunctionProperty_ _Callee_2, const struct FTuple_L_R& _ExprResult_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_GameObjects_immutable_model", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fimmutable__model_N_RIsVisible");

	Params::UVGameplayRst_GameObjects_immutable_model__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fimmutable__model_N_RIsVisible_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms.__verse_0x00000000__1 = __verse_0x00000000__1;
	Parms._Callee_0 = _Callee_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms.__verse_0x00000000__2 = __verse_0x00000000__2;
	Parms._Callee_2 = _Callee_2;
	Parms._ExprResult_3 = _ExprResult_3;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_GameObjects_immutable_model._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fimmutable__model_N_RGetTransform
// (Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FSpatialMath_transform      RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_0                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_1                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_2                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_3                                                    (HasGetValueTypeHash)
// struct FSpatialMath_vector3        _ExprResult_4                                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UVGameplayRst_Transform_position_component*__verse_0x00000000__1                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_5                                                        (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_6                                                    (HasGetValueTypeHash)
// struct FVerseRotation              _ExprResult_7                                                    (NoDestructor)
// class UVGameplayRst_Transform_rotation_component*__verse_0x00000000__2                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_8                                                        (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_9                                                    (HasGetValueTypeHash)
// struct FSpatialMath_vector3        _ExprResult_10                                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UVGameplayRst_Transform_scale_component*__verse_0x00000000__3                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_11                                                       (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_12                                                   (HasGetValueTypeHash)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_13                                              (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_14                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_15                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_16                                                   (HasGetValueTypeHash)
// struct FSpatialMath_vector3        _ExprResult_17                                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UVGameplayRst_Transform_position_component*__verse_0x00000000__4                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_18                                                       (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_19                                                   (HasGetValueTypeHash)
// struct FVerseRotation              _ExprResult_20                                                   (NoDestructor)
// class UVGameplayRst_Transform_rotation_component*__verse_0x00000000__5                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_21                                                       (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_22                                                   (HasGetValueTypeHash)
// struct FSpatialMath_vector3        _ExprResult_23                                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UVGameplayRst_Transform_scale_component*__verse_0x00000000__6                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_24                                                       (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_25                                                   (HasGetValueTypeHash)

struct FSpatialMath_transform UVGameplayRst_GameObjects_immutable_model::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fimmutable__model_N_RGetTransform(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, TMap<FVerseStringProperty_, uint8> _ExprResultStack_0, FVerseStringProperty_ _ExprResult_1, FVerseStringProperty_ _ExprResult_2, FVerseStringProperty_ _ExprResult_3, const struct FSpatialMath_vector3& _ExprResult_4, class UVGameplayRst_Transform_position_component* __verse_0x00000000__1, FVerseFunctionProperty_ _Callee_5, const struct FTuple_L_R& _ExprResult_6, const struct FVerseRotation& _ExprResult_7, class UVGameplayRst_Transform_rotation_component* __verse_0x00000000__2, FVerseFunctionProperty_ _Callee_8, const struct FTuple_L_R& _ExprResult_9, const struct FSpatialMath_vector3& _ExprResult_10, class UVGameplayRst_Transform_scale_component* __verse_0x00000000__3, FVerseFunctionProperty_ _Callee_11, const struct FTuple_L_R& _ExprResult_12, TMap<FVerseStringProperty_, uint8> _ExprResultStack_13, FVerseStringProperty_ _ExprResult_14, FVerseStringProperty_ _ExprResult_15, FVerseStringProperty_ _ExprResult_16, const struct FSpatialMath_vector3& _ExprResult_17, class UVGameplayRst_Transform_position_component* __verse_0x00000000__4, FVerseFunctionProperty_ _Callee_18, const struct FTuple_L_R& _ExprResult_19, const struct FVerseRotation& _ExprResult_20, class UVGameplayRst_Transform_rotation_component* __verse_0x00000000__5, FVerseFunctionProperty_ _Callee_21, const struct FTuple_L_R& _ExprResult_22, const struct FSpatialMath_vector3& _ExprResult_23, class UVGameplayRst_Transform_scale_component* __verse_0x00000000__6, FVerseFunctionProperty_ _Callee_24, const struct FTuple_L_R& _ExprResult_25)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_GameObjects_immutable_model", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fimmutable__model_N_RGetTransform");

	Params::UVGameplayRst_GameObjects_immutable_model__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fimmutable__model_N_RGetTransform_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._ExprResultStack_0 = _ExprResultStack_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._ExprResult_3 = _ExprResult_3;
	Parms._ExprResult_4 = _ExprResult_4;
	Parms.__verse_0x00000000__1 = __verse_0x00000000__1;
	Parms._Callee_5 = _Callee_5;
	Parms._ExprResult_6 = _ExprResult_6;
	Parms._ExprResult_7 = _ExprResult_7;
	Parms.__verse_0x00000000__2 = __verse_0x00000000__2;
	Parms._Callee_8 = _Callee_8;
	Parms._ExprResult_9 = _ExprResult_9;
	Parms._ExprResult_10 = _ExprResult_10;
	Parms.__verse_0x00000000__3 = __verse_0x00000000__3;
	Parms._Callee_11 = _Callee_11;
	Parms._ExprResult_12 = _ExprResult_12;
	Parms._ExprResultStack_13 = _ExprResultStack_13;
	Parms._ExprResult_14 = _ExprResult_14;
	Parms._ExprResult_15 = _ExprResult_15;
	Parms._ExprResult_16 = _ExprResult_16;
	Parms._ExprResult_17 = _ExprResult_17;
	Parms.__verse_0x00000000__4 = __verse_0x00000000__4;
	Parms._Callee_18 = _Callee_18;
	Parms._ExprResult_19 = _ExprResult_19;
	Parms._ExprResult_20 = _ExprResult_20;
	Parms.__verse_0x00000000__5 = __verse_0x00000000__5;
	Parms._Callee_21 = _Callee_21;
	Parms._ExprResult_22 = _ExprResult_22;
	Parms._ExprResult_23 = _ExprResult_23;
	Parms.__verse_0x00000000__6 = __verse_0x00000000__6;
	Parms._Callee_24 = _Callee_24;
	Parms._ExprResult_25 = _ExprResult_25;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_GameObjects_immutable_model._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fscalable_N_RGetScale
// (Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FSpatialMath_vector3        RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UVGameplayRst_Transform_scale_component*__verse_0x00000000__1                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_0                                                        (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_1                                                    (HasGetValueTypeHash)
// class UVGameplayRst_Transform_scale_component*__verse_0x00000000__2                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_2                                                        (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_3                                                    (HasGetValueTypeHash)

struct FSpatialMath_vector3 UVGameplayRst_GameObjects_immutable_model::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fscalable_N_RGetScale(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, class UVGameplayRst_Transform_scale_component* __verse_0x00000000__1, FVerseFunctionProperty_ _Callee_0, const struct FTuple_L_R& _ExprResult_1, class UVGameplayRst_Transform_scale_component* __verse_0x00000000__2, FVerseFunctionProperty_ _Callee_2, const struct FTuple_L_R& _ExprResult_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_GameObjects_immutable_model", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fscalable_N_RGetScale");

	Params::UVGameplayRst_GameObjects_immutable_model__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fscalable_N_RGetScale_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms.__verse_0x00000000__1 = __verse_0x00000000__1;
	Parms._Callee_0 = _Callee_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms.__verse_0x00000000__2 = __verse_0x00000000__2;
	Parms._Callee_2 = _Callee_2;
	Parms._ExprResult_3 = _ExprResult_3;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_GameObjects_immutable_model._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fpositionable_N_RGetPosition
// (Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FSpatialMath_vector3        RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UVGameplayRst_Transform_position_component*__verse_0x00000000__1                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_0                                                        (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_1                                                    (HasGetValueTypeHash)
// class UVGameplayRst_Transform_position_component*__verse_0x00000000__2                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_2                                                        (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_3                                                    (HasGetValueTypeHash)

struct FSpatialMath_vector3 UVGameplayRst_GameObjects_immutable_model::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fpositionable_N_RGetPosition(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, class UVGameplayRst_Transform_position_component* __verse_0x00000000__1, FVerseFunctionProperty_ _Callee_0, const struct FTuple_L_R& _ExprResult_1, class UVGameplayRst_Transform_position_component* __verse_0x00000000__2, FVerseFunctionProperty_ _Callee_2, const struct FTuple_L_R& _ExprResult_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_GameObjects_immutable_model", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fpositionable_N_RGetPosition");

	Params::UVGameplayRst_GameObjects_immutable_model__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fpositionable_N_RGetPosition_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms.__verse_0x00000000__1 = __verse_0x00000000__1;
	Parms._Callee_0 = _Callee_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms.__verse_0x00000000__2 = __verse_0x00000000__2;
	Parms._Callee_2 = _Callee_2;
	Parms._ExprResult_3 = _ExprResult_3;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_GameObjects_immutable_model._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RForwardVector
// (Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FSpatialMath_vector3        RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UVGameplayRst_Transform_rotation_component*__verse_0x00000000__1                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_0                                                        (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_1                                                    (HasGetValueTypeHash)
// class UVGameplayRst_Transform_rotation_component*__verse_0x00000000__2                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_2                                                        (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_3                                                    (HasGetValueTypeHash)

struct FSpatialMath_vector3 UVGameplayRst_GameObjects_immutable_model::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RForwardVector(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, class UVGameplayRst_Transform_rotation_component* __verse_0x00000000__1, FVerseFunctionProperty_ _Callee_0, const struct FTuple_L_R& _ExprResult_1, class UVGameplayRst_Transform_rotation_component* __verse_0x00000000__2, FVerseFunctionProperty_ _Callee_2, const struct FTuple_L_R& _ExprResult_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_GameObjects_immutable_model", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RForwardVector");

	Params::UVGameplayRst_GameObjects_immutable_model__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RForwardVector_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms.__verse_0x00000000__1 = __verse_0x00000000__1;
	Parms._Callee_0 = _Callee_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms.__verse_0x00000000__2 = __verse_0x00000000__2;
	Parms._Callee_2 = _Callee_2;
	Parms._ExprResult_3 = _ExprResult_3;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_GameObjects_immutable_model.$InitInstance
// (None)
// Parameters:

void UVGameplayRst_GameObjects_immutable_model::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_GameObjects_immutable_model", "$InitInstance");

	Params::UVGameplayRst_GameObjects_immutable_model__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VGameplayRst.VGameplayRst_GameObjects_immutable_model.$Block
// (None)
// Parameters:

void UVGameplayRst_GameObjects_immutable_model::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_GameObjects_immutable_model", "$Block");

	Params::UVGameplayRst_GameObjects_immutable_model__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VGameplayRst.VGameplayRst_GameObjects_immutable_model.$InitCDO
// (None)
// Parameters:

void UVGameplayRst_GameObjects_immutable_model::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_GameObjects_immutable_model", "$InitCDO");

	Params::UVGameplayRst_GameObjects_immutable_model__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VGameplayRst.VGameplayRst_GameObjects_model
// (None)

class UClass* UVGameplayRst_GameObjects_model::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VGameplayRst_GameObjects_model");

	return Clss;
}


// VGameplayRst_GameObjects_model VGameplayRst.Default__VGameplayRst_GameObjects_model
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVGameplayRst_GameObjects_model* UVGameplayRst_GameObjects_model::GetDefaultObj()
{
	static class UVGameplayRst_GameObjects_model* Default = nullptr;

	if (!Default)
		Default = static_cast<UVGameplayRst_GameObjects_model*>(UVGameplayRst_GameObjects_model::StaticClass()->DefaultObject);

	return Default;
}


// Function VGameplayRst.VGameplayRst_GameObjects_model._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RUpVector
// (Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FSpatialMath_vector3        RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UVGameplayRst_Transform_rotation_component*__verse_0x00000000__1                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_0                                                        (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_1                                                    (HasGetValueTypeHash)
// class UVGameplayRst_Transform_rotation_component*__verse_0x00000000__2                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_2                                                        (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_3                                                    (HasGetValueTypeHash)

struct FSpatialMath_vector3 UVGameplayRst_GameObjects_model::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RUpVector(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, class UVGameplayRst_Transform_rotation_component* __verse_0x00000000__1, FVerseFunctionProperty_ _Callee_0, const struct FTuple_L_R& _ExprResult_1, class UVGameplayRst_Transform_rotation_component* __verse_0x00000000__2, FVerseFunctionProperty_ _Callee_2, const struct FTuple_L_R& _ExprResult_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_GameObjects_model", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RUpVector");

	Params::UVGameplayRst_GameObjects_model__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RUpVector_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms.__verse_0x00000000__1 = __verse_0x00000000__1;
	Parms._Callee_0 = _Callee_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms.__verse_0x00000000__2 = __verse_0x00000000__2;
	Parms._Callee_2 = _Callee_2;
	Parms._ExprResult_3 = _ExprResult_3;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_GameObjects_model._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fmodel_N_RShow
// (Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UVGameplayRst_Geometry_fixed_mesh_component*__verse_0x00000000__2                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_0                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_1                                                        (HasGetValueTypeHash)
// class UVGameplayRst_Physics_collision_component*__verse_0x00000000__3                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_3                                                        (HasGetValueTypeHash)
// class UVGameplayRst_Geometry_fixed_mesh_component*__verse_0x00000000__5                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_4                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_5                                                        (HasGetValueTypeHash)
// class UVGameplayRst_Physics_collision_component*__verse_0x00000000__6                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_6                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_7                                                        (HasGetValueTypeHash)

void UVGameplayRst_GameObjects_model::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fmodel_N_RShow(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, class UVGameplayRst_Geometry_fixed_mesh_component* __verse_0x00000000__2, enum class EVerseTrue _InvokeSureResultDummy_0, FVerseFunctionProperty_ _Callee_1, class UVGameplayRst_Physics_collision_component* __verse_0x00000000__3, enum class EVerseTrue _InvokeSureResultDummy_2, FVerseFunctionProperty_ _Callee_3, class UVGameplayRst_Geometry_fixed_mesh_component* __verse_0x00000000__5, enum class EVerseTrue _InvokeSureResultDummy_4, FVerseFunctionProperty_ _Callee_5, class UVGameplayRst_Physics_collision_component* __verse_0x00000000__6, enum class EVerseTrue _InvokeSureResultDummy_6, FVerseFunctionProperty_ _Callee_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_GameObjects_model", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fmodel_N_RShow");

	Params::UVGameplayRst_GameObjects_model__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fmodel_N_RShow_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms.__verse_0x00000000__2 = __verse_0x00000000__2;
	Parms._InvokeSureResultDummy_0 = _InvokeSureResultDummy_0;
	Parms._Callee_1 = _Callee_1;
	Parms.__verse_0x00000000__3 = __verse_0x00000000__3;
	Parms._InvokeSureResultDummy_2 = _InvokeSureResultDummy_2;
	Parms._Callee_3 = _Callee_3;
	Parms.__verse_0x00000000__5 = __verse_0x00000000__5;
	Parms._InvokeSureResultDummy_4 = _InvokeSureResultDummy_4;
	Parms._Callee_5 = _Callee_5;
	Parms.__verse_0x00000000__6 = __verse_0x00000000__6;
	Parms._InvokeSureResultDummy_6 = _InvokeSureResultDummy_6;
	Parms._Callee_7 = _Callee_7;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VGameplayRst.VGameplayRst_GameObjects_model._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fmodel_N_RSetTransform_L_Ntransform_R
// (Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FSpatialMath_transform      __verse_0xB2CDDD72_Argument                                      (Parm, NoDestructor)
// class UVGameplayRst_Transform_position_component*__verse_0x00000000__2                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_0                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_1                                                        (HasGetValueTypeHash)
// class UVGameplayRst_Transform_rotation_component*__verse_0x00000000__3                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_3                                                        (HasGetValueTypeHash)
// class UVGameplayRst_Transform_scale_component*__verse_0x00000000__4                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_4                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_5                                                        (HasGetValueTypeHash)
// class UVGameplayRst_Transform_position_component*__verse_0x00000000__6                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_6                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_7                                                        (HasGetValueTypeHash)
// class UVGameplayRst_Transform_rotation_component*__verse_0x00000000__7                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_8                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_9                                                        (HasGetValueTypeHash)
// class UVGameplayRst_Transform_scale_component*__verse_0x00000000__8                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_10                                        (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_11                                                       (HasGetValueTypeHash)

void UVGameplayRst_GameObjects_model::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fmodel_N_RSetTransform_L_Ntransform_R(const struct FSpatialMath_transform& __verse_0xB2CDDD72_Argument, class UVGameplayRst_Transform_position_component* __verse_0x00000000__2, enum class EVerseTrue _InvokeSureResultDummy_0, FVerseFunctionProperty_ _Callee_1, class UVGameplayRst_Transform_rotation_component* __verse_0x00000000__3, enum class EVerseTrue _InvokeSureResultDummy_2, FVerseFunctionProperty_ _Callee_3, class UVGameplayRst_Transform_scale_component* __verse_0x00000000__4, enum class EVerseTrue _InvokeSureResultDummy_4, FVerseFunctionProperty_ _Callee_5, class UVGameplayRst_Transform_position_component* __verse_0x00000000__6, enum class EVerseTrue _InvokeSureResultDummy_6, FVerseFunctionProperty_ _Callee_7, class UVGameplayRst_Transform_rotation_component* __verse_0x00000000__7, enum class EVerseTrue _InvokeSureResultDummy_8, FVerseFunctionProperty_ _Callee_9, class UVGameplayRst_Transform_scale_component* __verse_0x00000000__8, enum class EVerseTrue _InvokeSureResultDummy_10, FVerseFunctionProperty_ _Callee_11)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_GameObjects_model", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fmodel_N_RSetTransform_L_Ntransform_R");

	Params::UVGameplayRst_GameObjects_model__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fmodel_N_RSetTransform_L_Ntransform_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms.__verse_0x00000000__2 = __verse_0x00000000__2;
	Parms._InvokeSureResultDummy_0 = _InvokeSureResultDummy_0;
	Parms._Callee_1 = _Callee_1;
	Parms.__verse_0x00000000__3 = __verse_0x00000000__3;
	Parms._InvokeSureResultDummy_2 = _InvokeSureResultDummy_2;
	Parms._Callee_3 = _Callee_3;
	Parms.__verse_0x00000000__4 = __verse_0x00000000__4;
	Parms._InvokeSureResultDummy_4 = _InvokeSureResultDummy_4;
	Parms._Callee_5 = _Callee_5;
	Parms.__verse_0x00000000__6 = __verse_0x00000000__6;
	Parms._InvokeSureResultDummy_6 = _InvokeSureResultDummy_6;
	Parms._Callee_7 = _Callee_7;
	Parms.__verse_0x00000000__7 = __verse_0x00000000__7;
	Parms._InvokeSureResultDummy_8 = _InvokeSureResultDummy_8;
	Parms._Callee_9 = _Callee_9;
	Parms.__verse_0x00000000__8 = __verse_0x00000000__8;
	Parms._InvokeSureResultDummy_10 = _InvokeSureResultDummy_10;
	Parms._Callee_11 = _Callee_11;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VGameplayRst.VGameplayRst_GameObjects_model._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__scalable_N_RSetScale_L_Nvector3_R
// (Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FSpatialMath_vector3        __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UVGameplayRst_Transform_scale_component*__verse_0x00000000__1                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_0                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_1                                                        (HasGetValueTypeHash)
// class UVGameplayRst_Transform_scale_component*__verse_0x00000000__2                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_3                                                        (HasGetValueTypeHash)

void UVGameplayRst_GameObjects_model::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__scalable_N_RSetScale_L_Nvector3_R(const struct FSpatialMath_vector3& __verse_0xB2CDDD72_Argument, class UVGameplayRst_Transform_scale_component* __verse_0x00000000__1, enum class EVerseTrue _InvokeSureResultDummy_0, FVerseFunctionProperty_ _Callee_1, class UVGameplayRst_Transform_scale_component* __verse_0x00000000__2, enum class EVerseTrue _InvokeSureResultDummy_2, FVerseFunctionProperty_ _Callee_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_GameObjects_model", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__scalable_N_RSetScale_L_Nvector3_R");

	Params::UVGameplayRst_GameObjects_model__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__scalable_N_RSetScale_L_Nvector3_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms.__verse_0x00000000__1 = __verse_0x00000000__1;
	Parms._InvokeSureResultDummy_0 = _InvokeSureResultDummy_0;
	Parms._Callee_1 = _Callee_1;
	Parms.__verse_0x00000000__2 = __verse_0x00000000__2;
	Parms._InvokeSureResultDummy_2 = _InvokeSureResultDummy_2;
	Parms._Callee_3 = _Callee_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VGameplayRst.VGameplayRst_GameObjects_model._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RSetRotation_L_Nrotation_R
// (Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVerseRotation              __verse_0xB2CDDD72_Argument                                      (Parm, NoDestructor)
// class UVGameplayRst_Transform_rotation_component*__verse_0x00000000__1                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_0                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_1                                                        (HasGetValueTypeHash)
// class UVGameplayRst_Transform_rotation_component*__verse_0x00000000__2                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_3                                                        (HasGetValueTypeHash)

void UVGameplayRst_GameObjects_model::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RSetRotation_L_Nrotation_R(const struct FVerseRotation& __verse_0xB2CDDD72_Argument, class UVGameplayRst_Transform_rotation_component* __verse_0x00000000__1, enum class EVerseTrue _InvokeSureResultDummy_0, FVerseFunctionProperty_ _Callee_1, class UVGameplayRst_Transform_rotation_component* __verse_0x00000000__2, enum class EVerseTrue _InvokeSureResultDummy_2, FVerseFunctionProperty_ _Callee_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_GameObjects_model", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RSetRotation_L_Nrotation_R");

	Params::UVGameplayRst_GameObjects_model__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RSetRotation_L_Nrotation_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms.__verse_0x00000000__1 = __verse_0x00000000__1;
	Parms._InvokeSureResultDummy_0 = _InvokeSureResultDummy_0;
	Parms._Callee_1 = _Callee_1;
	Parms.__verse_0x00000000__2 = __verse_0x00000000__2;
	Parms._InvokeSureResultDummy_2 = _InvokeSureResultDummy_2;
	Parms._Callee_3 = _Callee_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VGameplayRst.VGameplayRst_GameObjects_model._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__positionable_N_RSetPosition_L_Nvector3_R
// (Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FSpatialMath_vector3        __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UVGameplayRst_Transform_position_component*__verse_0x00000000__1                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_0                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_1                                                        (HasGetValueTypeHash)
// class UVGameplayRst_Transform_position_component*__verse_0x00000000__2                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_3                                                        (HasGetValueTypeHash)

void UVGameplayRst_GameObjects_model::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__positionable_N_RSetPosition_L_Nvector3_R(const struct FSpatialMath_vector3& __verse_0xB2CDDD72_Argument, class UVGameplayRst_Transform_position_component* __verse_0x00000000__1, enum class EVerseTrue _InvokeSureResultDummy_0, FVerseFunctionProperty_ _Callee_1, class UVGameplayRst_Transform_position_component* __verse_0x00000000__2, enum class EVerseTrue _InvokeSureResultDummy_2, FVerseFunctionProperty_ _Callee_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_GameObjects_model", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__positionable_N_RSetPosition_L_Nvector3_R");

	Params::UVGameplayRst_GameObjects_model__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__positionable_N_RSetPosition_L_Nvector3_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms.__verse_0x00000000__1 = __verse_0x00000000__1;
	Parms._InvokeSureResultDummy_0 = _InvokeSureResultDummy_0;
	Parms._Callee_1 = _Callee_1;
	Parms.__verse_0x00000000__2 = __verse_0x00000000__2;
	Parms._InvokeSureResultDummy_2 = _InvokeSureResultDummy_2;
	Parms._Callee_3 = _Callee_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VGameplayRst.VGameplayRst_GameObjects_model._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RSetForwardVectorFromXY_L_Nvector3_M_Nvector3_R
// (Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_Lvector3_Mvector3_R  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UVGameplayRst_Transform_rotation_component*__verse_0x00000000__1                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_0                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_1                                                        (HasGetValueTypeHash)
// struct FTuple_Lvector3_Mvector3_R  _ExprResult_2                                                    (HasGetValueTypeHash)
// class UVGameplayRst_Transform_rotation_component*__verse_0x00000000__2                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_4                                                        (HasGetValueTypeHash)
// struct FTuple_Lvector3_Mvector3_R  _ExprResult_5                                                    (HasGetValueTypeHash)

void UVGameplayRst_GameObjects_model::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RSetForwardVectorFromXY_L_Nvector3_M_Nvector3_R(const struct FTuple_Lvector3_Mvector3_R& __verse_0xB2CDDD72_Argument, class UVGameplayRst_Transform_rotation_component* __verse_0x00000000__1, enum class EVerseTrue _InvokeSureResultDummy_0, FVerseFunctionProperty_ _Callee_1, const struct FTuple_Lvector3_Mvector3_R& _ExprResult_2, class UVGameplayRst_Transform_rotation_component* __verse_0x00000000__2, enum class EVerseTrue _InvokeSureResultDummy_3, FVerseFunctionProperty_ _Callee_4, const struct FTuple_Lvector3_Mvector3_R& _ExprResult_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_GameObjects_model", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RSetForwardVectorFromXY_L_Nvector3_M_Nvector3_R");

	Params::UVGameplayRst_GameObjects_model__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RSetForwardVectorFromXY_L_Nvector3_M_Nvector3_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms.__verse_0x00000000__1 = __verse_0x00000000__1;
	Parms._InvokeSureResultDummy_0 = _InvokeSureResultDummy_0;
	Parms._Callee_1 = _Callee_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms.__verse_0x00000000__2 = __verse_0x00000000__2;
	Parms._InvokeSureResultDummy_3 = _InvokeSureResultDummy_3;
	Parms._Callee_4 = _Callee_4;
	Parms._ExprResult_5 = _ExprResult_5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VGameplayRst.VGameplayRst_GameObjects_model._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RRotation
// (Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FVerseRotation              RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor)
// class UVGameplayRst_Transform_rotation_component*__verse_0x00000000__1                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_0                                                        (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_1                                                    (HasGetValueTypeHash)
// class UVGameplayRst_Transform_rotation_component*__verse_0x00000000__2                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_2                                                        (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_3                                                    (HasGetValueTypeHash)

struct FVerseRotation UVGameplayRst_GameObjects_model::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RRotation(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, class UVGameplayRst_Transform_rotation_component* __verse_0x00000000__1, FVerseFunctionProperty_ _Callee_0, const struct FTuple_L_R& _ExprResult_1, class UVGameplayRst_Transform_rotation_component* __verse_0x00000000__2, FVerseFunctionProperty_ _Callee_2, const struct FTuple_L_R& _ExprResult_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_GameObjects_model", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RRotation");

	Params::UVGameplayRst_GameObjects_model__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RRotation_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms.__verse_0x00000000__1 = __verse_0x00000000__1;
	Parms._Callee_0 = _Callee_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms.__verse_0x00000000__2 = __verse_0x00000000__2;
	Parms._Callee_2 = _Callee_2;
	Parms._ExprResult_3 = _ExprResult_3;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_GameObjects_model._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RRightVector
// (Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FSpatialMath_vector3        RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UVGameplayRst_Transform_rotation_component*__verse_0x00000000__1                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_0                                                        (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_1                                                    (HasGetValueTypeHash)
// class UVGameplayRst_Transform_rotation_component*__verse_0x00000000__2                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_2                                                        (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_3                                                    (HasGetValueTypeHash)

struct FSpatialMath_vector3 UVGameplayRst_GameObjects_model::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RRightVector(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, class UVGameplayRst_Transform_rotation_component* __verse_0x00000000__1, FVerseFunctionProperty_ _Callee_0, const struct FTuple_L_R& _ExprResult_1, class UVGameplayRst_Transform_rotation_component* __verse_0x00000000__2, FVerseFunctionProperty_ _Callee_2, const struct FTuple_L_R& _ExprResult_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_GameObjects_model", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RRightVector");

	Params::UVGameplayRst_GameObjects_model__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RRightVector_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms.__verse_0x00000000__1 = __verse_0x00000000__1;
	Parms._Callee_0 = _Callee_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms.__verse_0x00000000__2 = __verse_0x00000000__2;
	Parms._Callee_2 = _Callee_2;
	Parms._ExprResult_3 = _ExprResult_3;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_GameObjects_model._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fmodel_N_RIsVisible
// (Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// uint8                              RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)
// class UVGameplayRst_Geometry_fixed_mesh_component*__verse_0x00000000__1                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_0                                                        (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_1                                                    (HasGetValueTypeHash)
// class UVGameplayRst_Geometry_fixed_mesh_component*__verse_0x00000000__2                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_2                                                        (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_3                                                    (HasGetValueTypeHash)

uint8 UVGameplayRst_GameObjects_model::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fmodel_N_RIsVisible(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, class UVGameplayRst_Geometry_fixed_mesh_component* __verse_0x00000000__1, FVerseFunctionProperty_ _Callee_0, const struct FTuple_L_R& _ExprResult_1, class UVGameplayRst_Geometry_fixed_mesh_component* __verse_0x00000000__2, FVerseFunctionProperty_ _Callee_2, const struct FTuple_L_R& _ExprResult_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_GameObjects_model", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fmodel_N_RIsVisible");

	Params::UVGameplayRst_GameObjects_model__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fmodel_N_RIsVisible_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms.__verse_0x00000000__1 = __verse_0x00000000__1;
	Parms._Callee_0 = _Callee_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms.__verse_0x00000000__2 = __verse_0x00000000__2;
	Parms._Callee_2 = _Callee_2;
	Parms._ExprResult_3 = _ExprResult_3;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_GameObjects_model._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fmodel_N_RHide
// (Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UVGameplayRst_Geometry_fixed_mesh_component*__verse_0x00000000__2                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_0                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_1                                                        (HasGetValueTypeHash)
// class UVGameplayRst_Physics_collision_component*__verse_0x00000000__3                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_3                                                        (HasGetValueTypeHash)
// class UVGameplayRst_Geometry_fixed_mesh_component*__verse_0x00000000__5                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_4                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_5                                                        (HasGetValueTypeHash)
// class UVGameplayRst_Physics_collision_component*__verse_0x00000000__6                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_6                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_7                                                        (HasGetValueTypeHash)

void UVGameplayRst_GameObjects_model::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fmodel_N_RHide(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, class UVGameplayRst_Geometry_fixed_mesh_component* __verse_0x00000000__2, enum class EVerseTrue _InvokeSureResultDummy_0, FVerseFunctionProperty_ _Callee_1, class UVGameplayRst_Physics_collision_component* __verse_0x00000000__3, enum class EVerseTrue _InvokeSureResultDummy_2, FVerseFunctionProperty_ _Callee_3, class UVGameplayRst_Geometry_fixed_mesh_component* __verse_0x00000000__5, enum class EVerseTrue _InvokeSureResultDummy_4, FVerseFunctionProperty_ _Callee_5, class UVGameplayRst_Physics_collision_component* __verse_0x00000000__6, enum class EVerseTrue _InvokeSureResultDummy_6, FVerseFunctionProperty_ _Callee_7)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_GameObjects_model", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fmodel_N_RHide");

	Params::UVGameplayRst_GameObjects_model__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fmodel_N_RHide_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms.__verse_0x00000000__2 = __verse_0x00000000__2;
	Parms._InvokeSureResultDummy_0 = _InvokeSureResultDummy_0;
	Parms._Callee_1 = _Callee_1;
	Parms.__verse_0x00000000__3 = __verse_0x00000000__3;
	Parms._InvokeSureResultDummy_2 = _InvokeSureResultDummy_2;
	Parms._Callee_3 = _Callee_3;
	Parms.__verse_0x00000000__5 = __verse_0x00000000__5;
	Parms._InvokeSureResultDummy_4 = _InvokeSureResultDummy_4;
	Parms._Callee_5 = _Callee_5;
	Parms.__verse_0x00000000__6 = __verse_0x00000000__6;
	Parms._InvokeSureResultDummy_6 = _InvokeSureResultDummy_6;
	Parms._Callee_7 = _Callee_7;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VGameplayRst.VGameplayRst_GameObjects_model._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fmodel_N_RGetTransform
// (Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FSpatialMath_transform      RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_0                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_1                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_2                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_3                                                    (HasGetValueTypeHash)
// struct FSpatialMath_vector3        _ExprResult_4                                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UVGameplayRst_Transform_position_component*__verse_0x00000000__1                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_5                                                        (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_6                                                    (HasGetValueTypeHash)
// struct FVerseRotation              _ExprResult_7                                                    (NoDestructor)
// class UVGameplayRst_Transform_rotation_component*__verse_0x00000000__2                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_8                                                        (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_9                                                    (HasGetValueTypeHash)
// struct FSpatialMath_vector3        _ExprResult_10                                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UVGameplayRst_Transform_scale_component*__verse_0x00000000__3                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_11                                                       (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_12                                                   (HasGetValueTypeHash)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_13                                              (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_14                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_15                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_16                                                   (HasGetValueTypeHash)
// struct FSpatialMath_vector3        _ExprResult_17                                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UVGameplayRst_Transform_position_component*__verse_0x00000000__4                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_18                                                       (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_19                                                   (HasGetValueTypeHash)
// struct FVerseRotation              _ExprResult_20                                                   (NoDestructor)
// class UVGameplayRst_Transform_rotation_component*__verse_0x00000000__5                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_21                                                       (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_22                                                   (HasGetValueTypeHash)
// struct FSpatialMath_vector3        _ExprResult_23                                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// class UVGameplayRst_Transform_scale_component*__verse_0x00000000__6                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_24                                                       (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_25                                                   (HasGetValueTypeHash)

struct FSpatialMath_transform UVGameplayRst_GameObjects_model::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fmodel_N_RGetTransform(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, TMap<FVerseStringProperty_, uint8> _ExprResultStack_0, FVerseStringProperty_ _ExprResult_1, FVerseStringProperty_ _ExprResult_2, FVerseStringProperty_ _ExprResult_3, const struct FSpatialMath_vector3& _ExprResult_4, class UVGameplayRst_Transform_position_component* __verse_0x00000000__1, FVerseFunctionProperty_ _Callee_5, const struct FTuple_L_R& _ExprResult_6, const struct FVerseRotation& _ExprResult_7, class UVGameplayRst_Transform_rotation_component* __verse_0x00000000__2, FVerseFunctionProperty_ _Callee_8, const struct FTuple_L_R& _ExprResult_9, const struct FSpatialMath_vector3& _ExprResult_10, class UVGameplayRst_Transform_scale_component* __verse_0x00000000__3, FVerseFunctionProperty_ _Callee_11, const struct FTuple_L_R& _ExprResult_12, TMap<FVerseStringProperty_, uint8> _ExprResultStack_13, FVerseStringProperty_ _ExprResult_14, FVerseStringProperty_ _ExprResult_15, FVerseStringProperty_ _ExprResult_16, const struct FSpatialMath_vector3& _ExprResult_17, class UVGameplayRst_Transform_position_component* __verse_0x00000000__4, FVerseFunctionProperty_ _Callee_18, const struct FTuple_L_R& _ExprResult_19, const struct FVerseRotation& _ExprResult_20, class UVGameplayRst_Transform_rotation_component* __verse_0x00000000__5, FVerseFunctionProperty_ _Callee_21, const struct FTuple_L_R& _ExprResult_22, const struct FSpatialMath_vector3& _ExprResult_23, class UVGameplayRst_Transform_scale_component* __verse_0x00000000__6, FVerseFunctionProperty_ _Callee_24, const struct FTuple_L_R& _ExprResult_25)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_GameObjects_model", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fmodel_N_RGetTransform");

	Params::UVGameplayRst_GameObjects_model__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fmodel_N_RGetTransform_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._ExprResultStack_0 = _ExprResultStack_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._ExprResult_3 = _ExprResult_3;
	Parms._ExprResult_4 = _ExprResult_4;
	Parms.__verse_0x00000000__1 = __verse_0x00000000__1;
	Parms._Callee_5 = _Callee_5;
	Parms._ExprResult_6 = _ExprResult_6;
	Parms._ExprResult_7 = _ExprResult_7;
	Parms.__verse_0x00000000__2 = __verse_0x00000000__2;
	Parms._Callee_8 = _Callee_8;
	Parms._ExprResult_9 = _ExprResult_9;
	Parms._ExprResult_10 = _ExprResult_10;
	Parms.__verse_0x00000000__3 = __verse_0x00000000__3;
	Parms._Callee_11 = _Callee_11;
	Parms._ExprResult_12 = _ExprResult_12;
	Parms._ExprResultStack_13 = _ExprResultStack_13;
	Parms._ExprResult_14 = _ExprResult_14;
	Parms._ExprResult_15 = _ExprResult_15;
	Parms._ExprResult_16 = _ExprResult_16;
	Parms._ExprResult_17 = _ExprResult_17;
	Parms.__verse_0x00000000__4 = __verse_0x00000000__4;
	Parms._Callee_18 = _Callee_18;
	Parms._ExprResult_19 = _ExprResult_19;
	Parms._ExprResult_20 = _ExprResult_20;
	Parms.__verse_0x00000000__5 = __verse_0x00000000__5;
	Parms._Callee_21 = _Callee_21;
	Parms._ExprResult_22 = _ExprResult_22;
	Parms._ExprResult_23 = _ExprResult_23;
	Parms.__verse_0x00000000__6 = __verse_0x00000000__6;
	Parms._Callee_24 = _Callee_24;
	Parms._ExprResult_25 = _ExprResult_25;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_GameObjects_model._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fscalable_N_RGetScale
// (Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FSpatialMath_vector3        RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UVGameplayRst_Transform_scale_component*__verse_0x00000000__1                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_0                                                        (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_1                                                    (HasGetValueTypeHash)
// class UVGameplayRst_Transform_scale_component*__verse_0x00000000__2                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_2                                                        (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_3                                                    (HasGetValueTypeHash)

struct FSpatialMath_vector3 UVGameplayRst_GameObjects_model::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fscalable_N_RGetScale(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, class UVGameplayRst_Transform_scale_component* __verse_0x00000000__1, FVerseFunctionProperty_ _Callee_0, const struct FTuple_L_R& _ExprResult_1, class UVGameplayRst_Transform_scale_component* __verse_0x00000000__2, FVerseFunctionProperty_ _Callee_2, const struct FTuple_L_R& _ExprResult_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_GameObjects_model", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fscalable_N_RGetScale");

	Params::UVGameplayRst_GameObjects_model__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fscalable_N_RGetScale_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms.__verse_0x00000000__1 = __verse_0x00000000__1;
	Parms._Callee_0 = _Callee_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms.__verse_0x00000000__2 = __verse_0x00000000__2;
	Parms._Callee_2 = _Callee_2;
	Parms._ExprResult_3 = _ExprResult_3;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_GameObjects_model._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fpositionable_N_RGetPosition
// (Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FSpatialMath_vector3        RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UVGameplayRst_Transform_position_component*__verse_0x00000000__1                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_0                                                        (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_1                                                    (HasGetValueTypeHash)
// class UVGameplayRst_Transform_position_component*__verse_0x00000000__2                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_2                                                        (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_3                                                    (HasGetValueTypeHash)

struct FSpatialMath_vector3 UVGameplayRst_GameObjects_model::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fpositionable_N_RGetPosition(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, class UVGameplayRst_Transform_position_component* __verse_0x00000000__1, FVerseFunctionProperty_ _Callee_0, const struct FTuple_L_R& _ExprResult_1, class UVGameplayRst_Transform_position_component* __verse_0x00000000__2, FVerseFunctionProperty_ _Callee_2, const struct FTuple_L_R& _ExprResult_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_GameObjects_model", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fpositionable_N_RGetPosition");

	Params::UVGameplayRst_GameObjects_model__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fpositionable_N_RGetPosition_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms.__verse_0x00000000__1 = __verse_0x00000000__1;
	Parms._Callee_0 = _Callee_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms.__verse_0x00000000__2 = __verse_0x00000000__2;
	Parms._Callee_2 = _Callee_2;
	Parms._ExprResult_3 = _ExprResult_3;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_GameObjects_model._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RForwardVector
// (Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FSpatialMath_vector3        RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UVGameplayRst_Transform_rotation_component*__verse_0x00000000__1                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_0                                                        (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_1                                                    (HasGetValueTypeHash)
// class UVGameplayRst_Transform_rotation_component*__verse_0x00000000__2                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_2                                                        (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_3                                                    (HasGetValueTypeHash)

struct FSpatialMath_vector3 UVGameplayRst_GameObjects_model::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RForwardVector(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, class UVGameplayRst_Transform_rotation_component* __verse_0x00000000__1, FVerseFunctionProperty_ _Callee_0, const struct FTuple_L_R& _ExprResult_1, class UVGameplayRst_Transform_rotation_component* __verse_0x00000000__2, FVerseFunctionProperty_ _Callee_2, const struct FTuple_L_R& _ExprResult_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_GameObjects_model", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RForwardVector");

	Params::UVGameplayRst_GameObjects_model__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RForwardVector_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms.__verse_0x00000000__1 = __verse_0x00000000__1;
	Parms._Callee_0 = _Callee_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms.__verse_0x00000000__2 = __verse_0x00000000__2;
	Parms._Callee_2 = _Callee_2;
	Parms._ExprResult_3 = _ExprResult_3;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_GameObjects_model._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fmodel_N_REnableCollision
// (Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UVGameplayRst_Physics_collision_component*__verse_0x00000000__1                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_0                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_1                                                        (HasGetValueTypeHash)
// class UVGameplayRst_Physics_collision_component*__verse_0x00000000__2                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_3                                                        (HasGetValueTypeHash)

void UVGameplayRst_GameObjects_model::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fmodel_N_REnableCollision(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, class UVGameplayRst_Physics_collision_component* __verse_0x00000000__1, enum class EVerseTrue _InvokeSureResultDummy_0, FVerseFunctionProperty_ _Callee_1, class UVGameplayRst_Physics_collision_component* __verse_0x00000000__2, enum class EVerseTrue _InvokeSureResultDummy_2, FVerseFunctionProperty_ _Callee_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_GameObjects_model", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fmodel_N_REnableCollision");

	Params::UVGameplayRst_GameObjects_model__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fmodel_N_REnableCollision_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms.__verse_0x00000000__1 = __verse_0x00000000__1;
	Parms._InvokeSureResultDummy_0 = _InvokeSureResultDummy_0;
	Parms._Callee_1 = _Callee_1;
	Parms.__verse_0x00000000__2 = __verse_0x00000000__2;
	Parms._InvokeSureResultDummy_2 = _InvokeSureResultDummy_2;
	Parms._Callee_3 = _Callee_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VGameplayRst.VGameplayRst_GameObjects_model._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fmodel_N_RDisableCollision
// (Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UVGameplayRst_Physics_collision_component*__verse_0x00000000__1                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_0                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_1                                                        (HasGetValueTypeHash)
// class UVGameplayRst_Physics_collision_component*__verse_0x00000000__2                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_3                                                        (HasGetValueTypeHash)

void UVGameplayRst_GameObjects_model::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fmodel_N_RDisableCollision(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, class UVGameplayRst_Physics_collision_component* __verse_0x00000000__1, enum class EVerseTrue _InvokeSureResultDummy_0, FVerseFunctionProperty_ _Callee_1, class UVGameplayRst_Physics_collision_component* __verse_0x00000000__2, enum class EVerseTrue _InvokeSureResultDummy_2, FVerseFunctionProperty_ _Callee_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_GameObjects_model", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fmodel_N_RDisableCollision");

	Params::UVGameplayRst_GameObjects_model__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fmodel_N_RDisableCollision_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms.__verse_0x00000000__1 = __verse_0x00000000__1;
	Parms._InvokeSureResultDummy_0 = _InvokeSureResultDummy_0;
	Parms._Callee_1 = _Callee_1;
	Parms.__verse_0x00000000__2 = __verse_0x00000000__2;
	Parms._InvokeSureResultDummy_2 = _InvokeSureResultDummy_2;
	Parms._Callee_3 = _Callee_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VGameplayRst.VGameplayRst_GameObjects_model._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fmodel_N_RDestroy
// (Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UVerseEngine_Entity_entity*  __verse_0x00000000__2                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint8                              _InvokeSureResultDummy_0                                         (NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_1                                                        (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_2                                                    (HasGetValueTypeHash)
// class UVerseEngine_Entity_entity*  __verse_0x00000000__4                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint8                              _InvokeSureResultDummy_3                                         (NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_4                                                        (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_5                                                    (HasGetValueTypeHash)

void UVGameplayRst_GameObjects_model::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fmodel_N_RDestroy(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, class UVerseEngine_Entity_entity* __verse_0x00000000__2, uint8 _InvokeSureResultDummy_0, FVerseFunctionProperty_ _Callee_1, const struct FTuple_L_R& _ExprResult_2, class UVerseEngine_Entity_entity* __verse_0x00000000__4, uint8 _InvokeSureResultDummy_3, FVerseFunctionProperty_ _Callee_4, const struct FTuple_L_R& _ExprResult_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_GameObjects_model", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fmodel_N_RDestroy");

	Params::UVGameplayRst_GameObjects_model__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fmodel_N_RDestroy_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms.__verse_0x00000000__2 = __verse_0x00000000__2;
	Parms._InvokeSureResultDummy_0 = _InvokeSureResultDummy_0;
	Parms._Callee_1 = _Callee_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms.__verse_0x00000000__4 = __verse_0x00000000__4;
	Parms._InvokeSureResultDummy_3 = _InvokeSureResultDummy_3;
	Parms._Callee_4 = _Callee_4;
	Parms._ExprResult_5 = _ExprResult_5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VGameplayRst.VGameplayRst_GameObjects_model._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RApplyAdditionalRotation_L_Nrotation_R
// (Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FVerseRotation              __verse_0xB2CDDD72_Argument                                      (Parm, NoDestructor)
// class UVGameplayRst_Transform_rotation_component*__verse_0x00000000__1                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_0                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_1                                                        (HasGetValueTypeHash)
// class UVGameplayRst_Transform_rotation_component*__verse_0x00000000__2                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_3                                                        (HasGetValueTypeHash)

void UVGameplayRst_GameObjects_model::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RApplyAdditionalRotation_L_Nrotation_R(const struct FVerseRotation& __verse_0xB2CDDD72_Argument, class UVGameplayRst_Transform_rotation_component* __verse_0x00000000__1, enum class EVerseTrue _InvokeSureResultDummy_0, FVerseFunctionProperty_ _Callee_1, class UVGameplayRst_Transform_rotation_component* __verse_0x00000000__2, enum class EVerseTrue _InvokeSureResultDummy_2, FVerseFunctionProperty_ _Callee_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_GameObjects_model", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RApplyAdditionalRotation_L_Nrotation_R");

	Params::UVGameplayRst_GameObjects_model__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RApplyAdditionalRotation_L_Nrotation_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms.__verse_0x00000000__1 = __verse_0x00000000__1;
	Parms._InvokeSureResultDummy_0 = _InvokeSureResultDummy_0;
	Parms._Callee_1 = _Callee_1;
	Parms.__verse_0x00000000__2 = __verse_0x00000000__2;
	Parms._InvokeSureResultDummy_2 = _InvokeSureResultDummy_2;
	Parms._Callee_3 = _Callee_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VGameplayRst.VGameplayRst_GameObjects_model.$InitInstance
// (None)
// Parameters:

void UVGameplayRst_GameObjects_model::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_GameObjects_model", "$InitInstance");

	Params::UVGameplayRst_GameObjects_model__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VGameplayRst.VGameplayRst_GameObjects_model.$Block
// (None)
// Parameters:

void UVGameplayRst_GameObjects_model::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_GameObjects_model", "$Block");

	Params::UVGameplayRst_GameObjects_model__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VGameplayRst.VGameplayRst_GameObjects_model.$InitCDO
// (None)
// Parameters:

void UVGameplayRst_GameObjects_model::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_GameObjects_model", "$InitCDO");

	Params::UVGameplayRst_GameObjects_model__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VGameplayRst.VGameplayRst_GameObjects_model_interface
// (None)

class UClass* UVGameplayRst_GameObjects_model_interface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VGameplayRst_GameObjects_model_interface");

	return Clss;
}


// VGameplayRst_GameObjects_model_interface VGameplayRst.Default__VGameplayRst_GameObjects_model_interface
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVGameplayRst_GameObjects_model_interface* UVGameplayRst_GameObjects_model_interface::GetDefaultObj()
{
	static class UVGameplayRst_GameObjects_model_interface* Default = nullptr;

	if (!Default)
		Default = static_cast<UVGameplayRst_GameObjects_model_interface*>(UVGameplayRst_GameObjects_model_interface::StaticClass()->DefaultObject);

	return Default;
}


// VerseClass VGameplayRst.VGameplayRst_GameObjects_mutable_model_interface
// (None)

class UClass* UVGameplayRst_GameObjects_mutable_model_interface::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VGameplayRst_GameObjects_mutable_model_interface");

	return Clss;
}


// VGameplayRst_GameObjects_mutable_model_interface VGameplayRst.Default__VGameplayRst_GameObjects_mutable_model_interface
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVGameplayRst_GameObjects_mutable_model_interface* UVGameplayRst_GameObjects_mutable_model_interface::GetDefaultObj()
{
	static class UVGameplayRst_GameObjects_mutable_model_interface* Default = nullptr;

	if (!Default)
		Default = static_cast<UVGameplayRst_GameObjects_mutable_model_interface*>(UVGameplayRst_GameObjects_mutable_model_interface::StaticClass()->DefaultObject);

	return Default;
}


// VerseClass VGameplayRst.VGameplayRst_GameObjects_world_anchor
// (None)

class UClass* UVGameplayRst_GameObjects_world_anchor::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VGameplayRst_GameObjects_world_anchor");

	return Clss;
}


// VGameplayRst_GameObjects_world_anchor VGameplayRst.Default__VGameplayRst_GameObjects_world_anchor
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVGameplayRst_GameObjects_world_anchor* UVGameplayRst_GameObjects_world_anchor::GetDefaultObj()
{
	static class UVGameplayRst_GameObjects_world_anchor* Default = nullptr;

	if (!Default)
		Default = static_cast<UVGameplayRst_GameObjects_world_anchor*>(UVGameplayRst_GameObjects_world_anchor::StaticClass()->DefaultObject);

	return Default;
}


// Function VGameplayRst.VGameplayRst_GameObjects_world_anchor._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__positionable_N_RSetPosition_L_Nvector3_R
// (Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FSpatialMath_vector3        __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// class UVGameplayRst_Transform_position_component*__verse_0x00000000__1                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_0                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_1                                                        (HasGetValueTypeHash)
// class UVGameplayRst_Transform_position_component*__verse_0x00000000__2                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_2                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_3                                                        (HasGetValueTypeHash)

void UVGameplayRst_GameObjects_world_anchor::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__positionable_N_RSetPosition_L_Nvector3_R(const struct FSpatialMath_vector3& __verse_0xB2CDDD72_Argument, class UVGameplayRst_Transform_position_component* __verse_0x00000000__1, enum class EVerseTrue _InvokeSureResultDummy_0, FVerseFunctionProperty_ _Callee_1, class UVGameplayRst_Transform_position_component* __verse_0x00000000__2, enum class EVerseTrue _InvokeSureResultDummy_2, FVerseFunctionProperty_ _Callee_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_GameObjects_world_anchor", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__positionable_N_RSetPosition_L_Nvector3_R");

	Params::UVGameplayRst_GameObjects_world_anchor__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__positionable_N_RSetPosition_L_Nvector3_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms.__verse_0x00000000__1 = __verse_0x00000000__1;
	Parms._InvokeSureResultDummy_0 = _InvokeSureResultDummy_0;
	Parms._Callee_1 = _Callee_1;
	Parms.__verse_0x00000000__2 = __verse_0x00000000__2;
	Parms._InvokeSureResultDummy_2 = _InvokeSureResultDummy_2;
	Parms._Callee_3 = _Callee_3;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VGameplayRst.VGameplayRst_GameObjects_world_anchor._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fpositionable_N_RGetPosition
// (Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FSpatialMath_vector3        RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// class UVGameplayRst_Transform_position_component*__verse_0x00000000__1                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_0                                                        (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_1                                                    (HasGetValueTypeHash)
// class UVGameplayRst_Transform_position_component*__verse_0x00000000__2                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_2                                                        (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_3                                                    (HasGetValueTypeHash)

struct FSpatialMath_vector3 UVGameplayRst_GameObjects_world_anchor::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fpositionable_N_RGetPosition(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, class UVGameplayRst_Transform_position_component* __verse_0x00000000__1, FVerseFunctionProperty_ _Callee_0, const struct FTuple_L_R& _ExprResult_1, class UVGameplayRst_Transform_position_component* __verse_0x00000000__2, FVerseFunctionProperty_ _Callee_2, const struct FTuple_L_R& _ExprResult_3)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_GameObjects_world_anchor", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fpositionable_N_RGetPosition");

	Params::UVGameplayRst_GameObjects_world_anchor__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fpositionable_N_RGetPosition_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms.__verse_0x00000000__1 = __verse_0x00000000__1;
	Parms._Callee_0 = _Callee_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms.__verse_0x00000000__2 = __verse_0x00000000__2;
	Parms._Callee_2 = _Callee_2;
	Parms._ExprResult_3 = _ExprResult_3;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_GameObjects_world_anchor._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fworld__anchor_N_RGetComponent
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UEntityComponent*            RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UEntityComponent* UVGameplayRst_GameObjects_world_anchor::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fworld__anchor_N_RGetComponent(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_GameObjects_world_anchor", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fworld__anchor_N_RGetComponent");

	Params::UVGameplayRst_GameObjects_world_anchor__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fworld__anchor_N_RGetComponent_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_GameObjects_world_anchor._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fworld__anchor_N_RDestroy
// (Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UVerseEngine_Entity_entity*  __verse_0x00000000__2                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint8                              _InvokeSureResultDummy_0                                         (NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_1                                                        (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_2                                                    (HasGetValueTypeHash)
// class UVerseEngine_Entity_entity*  __verse_0x00000000__4                                            (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint8                              _InvokeSureResultDummy_3                                         (NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_4                                                        (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_5                                                    (HasGetValueTypeHash)

void UVGameplayRst_GameObjects_world_anchor::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fworld__anchor_N_RDestroy(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, class UVerseEngine_Entity_entity* __verse_0x00000000__2, uint8 _InvokeSureResultDummy_0, FVerseFunctionProperty_ _Callee_1, const struct FTuple_L_R& _ExprResult_2, class UVerseEngine_Entity_entity* __verse_0x00000000__4, uint8 _InvokeSureResultDummy_3, FVerseFunctionProperty_ _Callee_4, const struct FTuple_L_R& _ExprResult_5)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_GameObjects_world_anchor", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fworld__anchor_N_RDestroy");

	Params::UVGameplayRst_GameObjects_world_anchor__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fworld__anchor_N_RDestroy_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms.__verse_0x00000000__2 = __verse_0x00000000__2;
	Parms._InvokeSureResultDummy_0 = _InvokeSureResultDummy_0;
	Parms._Callee_1 = _Callee_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms.__verse_0x00000000__4 = __verse_0x00000000__4;
	Parms._InvokeSureResultDummy_3 = _InvokeSureResultDummy_3;
	Parms._Callee_4 = _Callee_4;
	Parms._ExprResult_5 = _ExprResult_5;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VGameplayRst.VGameplayRst_GameObjects_world_anchor.$InitInstance
// (None)
// Parameters:

void UVGameplayRst_GameObjects_world_anchor::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_GameObjects_world_anchor", "$InitInstance");

	Params::UVGameplayRst_GameObjects_world_anchor__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VGameplayRst.VGameplayRst_GameObjects_world_anchor.$Block
// (None)
// Parameters:

void UVGameplayRst_GameObjects_world_anchor::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_GameObjects_world_anchor", "$Block");

	Params::UVGameplayRst_GameObjects_world_anchor__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VGameplayRst.VGameplayRst_GameObjects_world_anchor.$InitCDO
// (None)
// Parameters:

void UVGameplayRst_GameObjects_world_anchor::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_GameObjects_world_anchor", "$InitCDO");

	Params::UVGameplayRst_GameObjects_world_anchor__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VGameplayRst.VGameplayRst_Geometry_fixed_mesh_component
// (None)

class UClass* UVGameplayRst_Geometry_fixed_mesh_component::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VGameplayRst_Geometry_fixed_mesh_component");

	return Clss;
}


// VGameplayRst_Geometry_fixed_mesh_component VGameplayRst.Default__VGameplayRst_Geometry_fixed_mesh_component
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVGameplayRst_Geometry_fixed_mesh_component* UVGameplayRst_Geometry_fixed_mesh_component::GetDefaultObj()
{
	static class UVGameplayRst_Geometry_fixed_mesh_component* Default = nullptr;

	if (!Default)
		Default = static_cast<UVGameplayRst_Geometry_fixed_mesh_component*>(UVGameplayRst_Geometry_fixed_mesh_component::StaticClass()->DefaultObject);

	return Default;
}


// Function VGameplayRst.VGameplayRst_Geometry_fixed_mesh_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2ffixed__mesh__component_N_RSetVisibility_L_Nlogic_R
// (Native, Public, BlueprintCallable)
// Parameters:
// uint8                              __verse_0xB2CDDD72_Argument                                      (Parm, NoDestructor, HasGetValueTypeHash)

void UVGameplayRst_Geometry_fixed_mesh_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2ffixed__mesh__component_N_RSetVisibility_L_Nlogic_R(uint8 __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Geometry_fixed_mesh_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2ffixed__mesh__component_N_RSetVisibility_L_Nlogic_R");

	Params::UVGameplayRst_Geometry_fixed_mesh_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2ffixed__mesh__component_N_RSetVisibility_L_Nlogic_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VGameplayRst.VGameplayRst_Geometry_fixed_mesh_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2ffixed__mesh__component_N_RSetMesh_L_Nmesh_R
// (Native, Public, BlueprintCallable)
// Parameters:
// class UAssets_mesh*                __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

void UVGameplayRst_Geometry_fixed_mesh_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2ffixed__mesh__component_N_RSetMesh_L_Nmesh_R(class UAssets_mesh* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Geometry_fixed_mesh_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2ffixed__mesh__component_N_RSetMesh_L_Nmesh_R");

	Params::UVGameplayRst_Geometry_fixed_mesh_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2ffixed__mesh__component_N_RSetMesh_L_Nmesh_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VGameplayRst.VGameplayRst_Geometry_fixed_mesh_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2ffixed__mesh__component_N_RSetMaterialAtIndex_L_Nmaterial_M_Nint_R
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FTuple_Lmaterial_Mint_R     __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UVGameplayRst_Geometry_fixed_mesh_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2ffixed__mesh__component_N_RSetMaterialAtIndex_L_Nmaterial_M_Nint_R(const struct FTuple_Lmaterial_Mint_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Geometry_fixed_mesh_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2ffixed__mesh__component_N_RSetMaterialAtIndex_L_Nmaterial_M_Nint_R");

	Params::UVGameplayRst_Geometry_fixed_mesh_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2ffixed__mesh__component_N_RSetMaterialAtIndex_L_Nmaterial_M_Nint_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VGameplayRst.VGameplayRst_Geometry_fixed_mesh_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2ffixed__mesh__component_N_RSetMaterial_L_Nmaterial_R
// (Native, Public, BlueprintCallable)
// Parameters:
// class UAssets_material*            __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

void UVGameplayRst_Geometry_fixed_mesh_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2ffixed__mesh__component_N_RSetMaterial_L_Nmaterial_R(class UAssets_material* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Geometry_fixed_mesh_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2ffixed__mesh__component_N_RSetMaterial_L_Nmaterial_R");

	Params::UVGameplayRst_Geometry_fixed_mesh_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2ffixed__mesh__component_N_RSetMaterial_L_Nmaterial_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VGameplayRst.VGameplayRst_Geometry_fixed_mesh_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2ffixed__mesh__component_N_RSetEnableCollision_L_Ncollision__type_R
// (Native, Public, BlueprintCallable)
// Parameters:
// enum class EVGameplayRst_Geometry_collision_type__verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVGameplayRst_Geometry_fixed_mesh_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2ffixed__mesh__component_N_RSetEnableCollision_L_Ncollision__type_R(enum class EVGameplayRst_Geometry_collision_type __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Geometry_fixed_mesh_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2ffixed__mesh__component_N_RSetEnableCollision_L_Ncollision__type_R");

	Params::UVGameplayRst_Geometry_fixed_mesh_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2ffixed__mesh__component_N_RSetEnableCollision_L_Ncollision__type_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VGameplayRst.VGameplayRst_Geometry_fixed_mesh_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2ffixed__mesh__component_N_RSetDefaultMesh_L_Ndefault__mesh__type_R
// (Native, Public, BlueprintCallable)
// Parameters:
// enum class EVGameplayRst_Geometry_default_mesh_type__verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVGameplayRst_Geometry_fixed_mesh_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2ffixed__mesh__component_N_RSetDefaultMesh_L_Ndefault__mesh__type_R(enum class EVGameplayRst_Geometry_default_mesh_type __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Geometry_fixed_mesh_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2ffixed__mesh__component_N_RSetDefaultMesh_L_Ndefault__mesh__type_R");

	Params::UVGameplayRst_Geometry_fixed_mesh_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2ffixed__mesh__component_N_RSetDefaultMesh_L_Ndefault__mesh__type_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VGameplayRst.VGameplayRst_Geometry_fixed_mesh_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2ffixed__mesh__component_N_RSetAsRootComponent_L_Nlogic_M_Nlogic_R
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FTuple_Llogic_Mlogic_R      __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UVGameplayRst_Geometry_fixed_mesh_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2ffixed__mesh__component_N_RSetAsRootComponent_L_Nlogic_M_Nlogic_R(const struct FTuple_Llogic_Mlogic_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Geometry_fixed_mesh_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2ffixed__mesh__component_N_RSetAsRootComponent_L_Nlogic_M_Nlogic_R");

	Params::UVGameplayRst_Geometry_fixed_mesh_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2ffixed__mesh__component_N_RSetAsRootComponent_L_Nlogic_M_Nlogic_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VGameplayRst.VGameplayRst_Geometry_fixed_mesh_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2ffixed__mesh__component_N_RIsVisible
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// uint8                              RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

uint8 UVGameplayRst_Geometry_fixed_mesh_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2ffixed__mesh__component_N_RIsVisible(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Geometry_fixed_mesh_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2ffixed__mesh__component_N_RIsVisible");

	Params::UVGameplayRst_Geometry_fixed_mesh_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2ffixed__mesh__component_N_RIsVisible_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_Geometry_fixed_mesh_component.$InitInstance
// (None)
// Parameters:

void UVGameplayRst_Geometry_fixed_mesh_component::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Geometry_fixed_mesh_component", "$InitInstance");

	Params::UVGameplayRst_Geometry_fixed_mesh_component__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VGameplayRst.VGameplayRst_Geometry_fixed_mesh_component.$Block
// (None)
// Parameters:

void UVGameplayRst_Geometry_fixed_mesh_component::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Geometry_fixed_mesh_component", "$Block");

	Params::UVGameplayRst_Geometry_fixed_mesh_component__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VGameplayRst.VGameplayRst_Geometry_fixed_mesh_component.$InitCDO
// (None)
// Parameters:

void UVGameplayRst_Geometry_fixed_mesh_component::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Geometry_fixed_mesh_component", "$InitCDO");

	Params::UVGameplayRst_Geometry_fixed_mesh_component__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VGameplayRst.VGameplayRst_Geometry_skeletal_mesh_component
// (None)

class UClass* UVGameplayRst_Geometry_skeletal_mesh_component::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VGameplayRst_Geometry_skeletal_mesh_component");

	return Clss;
}


// VGameplayRst_Geometry_skeletal_mesh_component VGameplayRst.Default__VGameplayRst_Geometry_skeletal_mesh_component
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVGameplayRst_Geometry_skeletal_mesh_component* UVGameplayRst_Geometry_skeletal_mesh_component::GetDefaultObj()
{
	static class UVGameplayRst_Geometry_skeletal_mesh_component* Default = nullptr;

	if (!Default)
		Default = static_cast<UVGameplayRst_Geometry_skeletal_mesh_component*>(UVGameplayRst_Geometry_skeletal_mesh_component::StaticClass()->DefaultObject);

	return Default;
}


// Function VGameplayRst.VGameplayRst_Geometry_skeletal_mesh_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RSetSkeletalMesh_L_Nskeletal__mesh_R
// (Native, Public, BlueprintCallable)
// Parameters:
// class UAssets_skeletal_mesh*       __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

void UVGameplayRst_Geometry_skeletal_mesh_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RSetSkeletalMesh_L_Nskeletal__mesh_R(class UAssets_skeletal_mesh* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Geometry_skeletal_mesh_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RSetSkeletalMesh_L_Nskeletal__mesh_R");

	Params::UVGameplayRst_Geometry_skeletal_mesh_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RSetSkeletalMesh_L_Nskeletal__mesh_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VGameplayRst.VGameplayRst_Geometry_skeletal_mesh_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RSetMaterial_L_Nmaterial_R
// (Native, Public, BlueprintCallable)
// Parameters:
// class UAssets_material*            __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

void UVGameplayRst_Geometry_skeletal_mesh_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RSetMaterial_L_Nmaterial_R(class UAssets_material* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Geometry_skeletal_mesh_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RSetMaterial_L_Nmaterial_R");

	Params::UVGameplayRst_Geometry_skeletal_mesh_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RSetMaterial_L_Nmaterial_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VGameplayRst.VGameplayRst_Geometry_skeletal_mesh_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RSetAnimationPosition__FIXME_L_Nfloat_M_Nlogic_R
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FTuple_Lfloat_Mlogic_R      __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UVGameplayRst_Geometry_skeletal_mesh_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RSetAnimationPosition__FIXME_L_Nfloat_M_Nlogic_R(const struct FTuple_Lfloat_Mlogic_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Geometry_skeletal_mesh_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RSetAnimationPosition__FIXME_L_Nfloat_M_Nlogic_R");

	Params::UVGameplayRst_Geometry_skeletal_mesh_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RSetAnimationPosition__FIXME_L_Nfloat_M_Nlogic_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VGameplayRst.VGameplayRst_Geometry_skeletal_mesh_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RSetAnimationPlayRate__FIXME_L_Nfloat_R
// (Native, Public, BlueprintCallable)
// Parameters:
// double                             __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVGameplayRst_Geometry_skeletal_mesh_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RSetAnimationPlayRate__FIXME_L_Nfloat_R(double __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Geometry_skeletal_mesh_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RSetAnimationPlayRate__FIXME_L_Nfloat_R");

	Params::UVGameplayRst_Geometry_skeletal_mesh_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RSetAnimationPlayRate__FIXME_L_Nfloat_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VGameplayRst.VGameplayRst_Geometry_skeletal_mesh_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RSetAnimationMode_L_Ndefault__animation__mode__type_R
// (Native, Public, BlueprintCallable)
// Parameters:
// enum class EVGameplayRst_Geometry_default_animation_mode_type__verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVGameplayRst_Geometry_skeletal_mesh_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RSetAnimationMode_L_Ndefault__animation__mode__type_R(enum class EVGameplayRst_Geometry_default_animation_mode_type __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Geometry_skeletal_mesh_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RSetAnimationMode_L_Ndefault__animation__mode__type_R");

	Params::UVGameplayRst_Geometry_skeletal_mesh_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RSetAnimationMode_L_Ndefault__animation__mode__type_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VGameplayRst.VGameplayRst_Geometry_skeletal_mesh_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RSetAnimationInstance_L_Nanimation__instance_R
// (Native, Public, BlueprintCallable)
// Parameters:
// class UAssets_animation_instance*  __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

void UVGameplayRst_Geometry_skeletal_mesh_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RSetAnimationInstance_L_Nanimation__instance_R(class UAssets_animation_instance* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Geometry_skeletal_mesh_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RSetAnimationInstance_L_Nanimation__instance_R");

	Params::UVGameplayRst_Geometry_skeletal_mesh_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RSetAnimationInstance_L_Nanimation__instance_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VGameplayRst.VGameplayRst_Geometry_skeletal_mesh_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RSetAnimationBlueprint_L_Nanimation__blueprint_R
// (Native, Public, BlueprintCallable)
// Parameters:
// class UAssets_animation_blueprint* __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

void UVGameplayRst_Geometry_skeletal_mesh_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RSetAnimationBlueprint_L_Nanimation__blueprint_R(class UAssets_animation_blueprint* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Geometry_skeletal_mesh_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RSetAnimationBlueprint_L_Nanimation__blueprint_R");

	Params::UVGameplayRst_Geometry_skeletal_mesh_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RSetAnimationBlueprint_L_Nanimation__blueprint_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VGameplayRst.VGameplayRst_Geometry_skeletal_mesh_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RSetAnimation_L_Nanimation_R
// (Native, Public, BlueprintCallable)
// Parameters:
// class UAssets_animation*           __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

void UVGameplayRst_Geometry_skeletal_mesh_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RSetAnimation_L_Nanimation_R(class UAssets_animation* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Geometry_skeletal_mesh_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RSetAnimation_L_Nanimation_R");

	Params::UVGameplayRst_Geometry_skeletal_mesh_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RSetAnimation_L_Nanimation_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VGameplayRst.VGameplayRst_Geometry_skeletal_mesh_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RIsPlayingAnimation
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// uint8                              RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

uint8 UVGameplayRst_Geometry_skeletal_mesh_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RIsPlayingAnimation(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Geometry_skeletal_mesh_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RIsPlayingAnimation");

	Params::UVGameplayRst_Geometry_skeletal_mesh_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RIsPlayingAnimation_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_Geometry_skeletal_mesh_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RGetAnimationPosition__FIXME
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// double                             RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double UVGameplayRst_Geometry_skeletal_mesh_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RGetAnimationPosition__FIXME(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Geometry_skeletal_mesh_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RGetAnimationPosition__FIXME");

	Params::UVGameplayRst_Geometry_skeletal_mesh_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RGetAnimationPosition__FIXME_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_Geometry_skeletal_mesh_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RGetAnimationPlayRate__FIXME
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// double                             RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double UVGameplayRst_Geometry_skeletal_mesh_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RGetAnimationPlayRate__FIXME(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Geometry_skeletal_mesh_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RGetAnimationPlayRate__FIXME");

	Params::UVGameplayRst_Geometry_skeletal_mesh_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RGetAnimationPlayRate__FIXME_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_Geometry_skeletal_mesh_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_REndAnimation
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UVGameplayRst_Geometry_skeletal_mesh_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_REndAnimation(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Geometry_skeletal_mesh_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_REndAnimation");

	Params::UVGameplayRst_Geometry_skeletal_mesh_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_REndAnimation_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VGameplayRst.VGameplayRst_Geometry_skeletal_mesh_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RBeginAnimation_L_Nlogic_R
// (Native, Public, BlueprintCallable)
// Parameters:
// uint8                              __verse_0xB2CDDD72_Argument                                      (Parm, NoDestructor, HasGetValueTypeHash)

void UVGameplayRst_Geometry_skeletal_mesh_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RBeginAnimation_L_Nlogic_R(uint8 __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Geometry_skeletal_mesh_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RBeginAnimation_L_Nlogic_R");

	Params::UVGameplayRst_Geometry_skeletal_mesh_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RBeginAnimation_L_Nlogic_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VGameplayRst.VGameplayRst_Geometry_skeletal_mesh_component.$InitInstance
// (None)
// Parameters:

void UVGameplayRst_Geometry_skeletal_mesh_component::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Geometry_skeletal_mesh_component", "$InitInstance");

	Params::UVGameplayRst_Geometry_skeletal_mesh_component__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VGameplayRst.VGameplayRst_Geometry_skeletal_mesh_component.$Block
// (None)
// Parameters:

void UVGameplayRst_Geometry_skeletal_mesh_component::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Geometry_skeletal_mesh_component", "$Block");

	Params::UVGameplayRst_Geometry_skeletal_mesh_component__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VGameplayRst.VGameplayRst_Geometry_skeletal_mesh_component.$InitCDO
// (None)
// Parameters:

void UVGameplayRst_Geometry_skeletal_mesh_component::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Geometry_skeletal_mesh_component", "$InitCDO");

	Params::UVGameplayRst_Geometry_skeletal_mesh_component__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VGameplayRst.VGameplayRst_LevelStreaming_level_streaming_component
// (None)

class UClass* UVGameplayRst_LevelStreaming_level_streaming_component::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VGameplayRst_LevelStreaming_level_streaming_component");

	return Clss;
}


// VGameplayRst_LevelStreaming_level_streaming_component VGameplayRst.Default__VGameplayRst_LevelStreaming_level_streaming_component
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVGameplayRst_LevelStreaming_level_streaming_component* UVGameplayRst_LevelStreaming_level_streaming_component::GetDefaultObj()
{
	static class UVGameplayRst_LevelStreaming_level_streaming_component* Default = nullptr;

	if (!Default)
		Default = static_cast<UVGameplayRst_LevelStreaming_level_streaming_component*>(UVGameplayRst_LevelStreaming_level_streaming_component::StaticClass()->DefaultObject);

	return Default;
}


// Function VGameplayRst.VGameplayRst_LevelStreaming_level_streaming_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLevelStreaming_2flevel__streaming__component_N_RRequestUnloadLevel_L_Ntime__span_M_N_Kchar_R
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Ltime__span_M_Kchar_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

FOptionalProperty_ UVGameplayRst_LevelStreaming_level_streaming_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLevelStreaming_2flevel__streaming__component_N_RRequestUnloadLevel_L_Ntime__span_M_N_Kchar_R(const struct FTuple_Ltime__span_M_Kchar_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_LevelStreaming_level_streaming_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLevelStreaming_2flevel__streaming__component_N_RRequestUnloadLevel_L_Ntime__span_M_N_Kchar_R");

	Params::UVGameplayRst_LevelStreaming_level_streaming_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLevelStreaming_2flevel__streaming__component_N_RRequestUnloadLevel_L_Ntime__span_M_N_Kchar_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_LevelStreaming_level_streaming_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLevelStreaming_2flevel__streaming__component_N_RRequestLoadLevel_L_Nlevel_M_Ntime__span_M_N_Kchar_R
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Llevel_Mtime__span_M_Kchar_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

FOptionalProperty_ UVGameplayRst_LevelStreaming_level_streaming_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLevelStreaming_2flevel__streaming__component_N_RRequestLoadLevel_L_Nlevel_M_Ntime__span_M_N_Kchar_R(const struct FTuple_Llevel_Mtime__span_M_Kchar_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_LevelStreaming_level_streaming_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLevelStreaming_2flevel__streaming__component_N_RRequestLoadLevel_L_Nlevel_M_Ntime__span_M_N_Kchar_R");

	Params::UVGameplayRst_LevelStreaming_level_streaming_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLevelStreaming_2flevel__streaming__component_N_RRequestLoadLevel_L_Nlevel_M_Ntime__span_M_N_Kchar_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_LevelStreaming_level_streaming_component.$InitInstance
// (None)
// Parameters:

void UVGameplayRst_LevelStreaming_level_streaming_component::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_LevelStreaming_level_streaming_component", "$InitInstance");

	Params::UVGameplayRst_LevelStreaming_level_streaming_component__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VGameplayRst.VGameplayRst_LevelStreaming_level_streaming_component.$Block
// (None)
// Parameters:

void UVGameplayRst_LevelStreaming_level_streaming_component::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_LevelStreaming_level_streaming_component", "$Block");

	Params::UVGameplayRst_LevelStreaming_level_streaming_component__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VGameplayRst.VGameplayRst_LevelStreaming_level_streaming_component.$InitCDO
// (None)
// Parameters:

void UVGameplayRst_LevelStreaming_level_streaming_component::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_LevelStreaming_level_streaming_component", "$InitCDO");

	Params::UVGameplayRst_LevelStreaming_level_streaming_component__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VGameplayRst.VGameplayRst_Lights_point_light_component
// (None)

class UClass* UVGameplayRst_Lights_point_light_component::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VGameplayRst_Lights_point_light_component");

	return Clss;
}


// VGameplayRst_Lights_point_light_component VGameplayRst.Default__VGameplayRst_Lights_point_light_component
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVGameplayRst_Lights_point_light_component* UVGameplayRst_Lights_point_light_component::GetDefaultObj()
{
	static class UVGameplayRst_Lights_point_light_component* Default = nullptr;

	if (!Default)
		Default = static_cast<UVGameplayRst_Lights_point_light_component*>(UVGameplayRst_Lights_point_light_component::StaticClass()->DefaultObject);

	return Default;
}


// Function VGameplayRst.VGameplayRst_Lights_point_light_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fpoint__light__component_N_RSetSourceRadius_L_Nfloat_R
// (Native, Public, BlueprintCallable)
// Parameters:
// double                             __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVGameplayRst_Lights_point_light_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fpoint__light__component_N_RSetSourceRadius_L_Nfloat_R(double __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Lights_point_light_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fpoint__light__component_N_RSetSourceRadius_L_Nfloat_R");

	Params::UVGameplayRst_Lights_point_light_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fpoint__light__component_N_RSetSourceRadius_L_Nfloat_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VGameplayRst.VGameplayRst_Lights_point_light_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fpoint__light__component_N_RSetSourceLength_L_Nfloat_R
// (Native, Public, BlueprintCallable)
// Parameters:
// double                             __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVGameplayRst_Lights_point_light_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fpoint__light__component_N_RSetSourceLength_L_Nfloat_R(double __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Lights_point_light_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fpoint__light__component_N_RSetSourceLength_L_Nfloat_R");

	Params::UVGameplayRst_Lights_point_light_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fpoint__light__component_N_RSetSourceLength_L_Nfloat_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VGameplayRst.VGameplayRst_Lights_point_light_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fpoint__light__component_N_RSetIntensity_L_Nfloat_R
// (Native, Public, BlueprintCallable)
// Parameters:
// double                             __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVGameplayRst_Lights_point_light_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fpoint__light__component_N_RSetIntensity_L_Nfloat_R(double __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Lights_point_light_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fpoint__light__component_N_RSetIntensity_L_Nfloat_R");

	Params::UVGameplayRst_Lights_point_light_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fpoint__light__component_N_RSetIntensity_L_Nfloat_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VGameplayRst.VGameplayRst_Lights_point_light_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fpoint__light__component_N_RSetColor_L_Ncolor_R
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FColors_color               __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UVGameplayRst_Lights_point_light_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fpoint__light__component_N_RSetColor_L_Ncolor_R(const struct FColors_color& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Lights_point_light_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fpoint__light__component_N_RSetColor_L_Ncolor_R");

	Params::UVGameplayRst_Lights_point_light_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fpoint__light__component_N_RSetColor_L_Ncolor_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VGameplayRst.VGameplayRst_Lights_point_light_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fpoint__light__component_N_RSetAttenuationRadius_L_Nfloat_R
// (Native, Public, BlueprintCallable)
// Parameters:
// double                             __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVGameplayRst_Lights_point_light_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fpoint__light__component_N_RSetAttenuationRadius_L_Nfloat_R(double __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Lights_point_light_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fpoint__light__component_N_RSetAttenuationRadius_L_Nfloat_R");

	Params::UVGameplayRst_Lights_point_light_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fpoint__light__component_N_RSetAttenuationRadius_L_Nfloat_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VGameplayRst.VGameplayRst_Lights_point_light_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fpoint__light__component_N_RGetSourceRadius
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// double                             RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double UVGameplayRst_Lights_point_light_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fpoint__light__component_N_RGetSourceRadius(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Lights_point_light_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fpoint__light__component_N_RGetSourceRadius");

	Params::UVGameplayRst_Lights_point_light_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fpoint__light__component_N_RGetSourceRadius_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_Lights_point_light_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fpoint__light__component_N_RGetSourceLength
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// double                             RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double UVGameplayRst_Lights_point_light_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fpoint__light__component_N_RGetSourceLength(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Lights_point_light_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fpoint__light__component_N_RGetSourceLength");

	Params::UVGameplayRst_Lights_point_light_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fpoint__light__component_N_RGetSourceLength_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_Lights_point_light_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fpoint__light__component_N_RGetIntensity
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// double                             RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double UVGameplayRst_Lights_point_light_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fpoint__light__component_N_RGetIntensity(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Lights_point_light_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fpoint__light__component_N_RGetIntensity");

	Params::UVGameplayRst_Lights_point_light_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fpoint__light__component_N_RGetIntensity_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_Lights_point_light_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fpoint__light__component_N_RGetColor
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FColors_color               RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

struct FColors_color UVGameplayRst_Lights_point_light_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fpoint__light__component_N_RGetColor(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Lights_point_light_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fpoint__light__component_N_RGetColor");

	Params::UVGameplayRst_Lights_point_light_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fpoint__light__component_N_RGetColor_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_Lights_point_light_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fpoint__light__component_N_RGetAttenuationRadius
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// double                             RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double UVGameplayRst_Lights_point_light_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fpoint__light__component_N_RGetAttenuationRadius(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Lights_point_light_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fpoint__light__component_N_RGetAttenuationRadius");

	Params::UVGameplayRst_Lights_point_light_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fpoint__light__component_N_RGetAttenuationRadius_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_Lights_point_light_component.$InitInstance
// (None)
// Parameters:

void UVGameplayRst_Lights_point_light_component::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Lights_point_light_component", "$InitInstance");

	Params::UVGameplayRst_Lights_point_light_component__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VGameplayRst.VGameplayRst_Lights_point_light_component.$Block
// (None)
// Parameters:

void UVGameplayRst_Lights_point_light_component::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Lights_point_light_component", "$Block");

	Params::UVGameplayRst_Lights_point_light_component__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VGameplayRst.VGameplayRst_Lights_point_light_component.$InitCDO
// (None)
// Parameters:

void UVGameplayRst_Lights_point_light_component::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Lights_point_light_component", "$InitCDO");

	Params::UVGameplayRst_Lights_point_light_component__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VGameplayRst.VGameplayRst_Lights_spot_light_component
// (None)

class UClass* UVGameplayRst_Lights_spot_light_component::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VGameplayRst_Lights_spot_light_component");

	return Clss;
}


// VGameplayRst_Lights_spot_light_component VGameplayRst.Default__VGameplayRst_Lights_spot_light_component
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVGameplayRst_Lights_spot_light_component* UVGameplayRst_Lights_spot_light_component::GetDefaultObj()
{
	static class UVGameplayRst_Lights_spot_light_component* Default = nullptr;

	if (!Default)
		Default = static_cast<UVGameplayRst_Lights_spot_light_component*>(UVGameplayRst_Lights_spot_light_component::StaticClass()->DefaultObject);

	return Default;
}


// Function VGameplayRst.VGameplayRst_Lights_spot_light_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RSetSourceRadius_L_Nfloat_R
// (Native, Public, BlueprintCallable)
// Parameters:
// double                             __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVGameplayRst_Lights_spot_light_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RSetSourceRadius_L_Nfloat_R(double __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Lights_spot_light_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RSetSourceRadius_L_Nfloat_R");

	Params::UVGameplayRst_Lights_spot_light_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RSetSourceRadius_L_Nfloat_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VGameplayRst.VGameplayRst_Lights_spot_light_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RSetSourceLength_L_Nfloat_R
// (Native, Public, BlueprintCallable)
// Parameters:
// double                             __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVGameplayRst_Lights_spot_light_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RSetSourceLength_L_Nfloat_R(double __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Lights_spot_light_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RSetSourceLength_L_Nfloat_R");

	Params::UVGameplayRst_Lights_spot_light_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RSetSourceLength_L_Nfloat_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VGameplayRst.VGameplayRst_Lights_spot_light_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RSetOuterConeAngle_L_Nfloat_R
// (Native, Public, BlueprintCallable)
// Parameters:
// double                             __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVGameplayRst_Lights_spot_light_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RSetOuterConeAngle_L_Nfloat_R(double __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Lights_spot_light_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RSetOuterConeAngle_L_Nfloat_R");

	Params::UVGameplayRst_Lights_spot_light_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RSetOuterConeAngle_L_Nfloat_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VGameplayRst.VGameplayRst_Lights_spot_light_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RSetIntensity_L_Nfloat_R
// (Native, Public, BlueprintCallable)
// Parameters:
// double                             __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVGameplayRst_Lights_spot_light_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RSetIntensity_L_Nfloat_R(double __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Lights_spot_light_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RSetIntensity_L_Nfloat_R");

	Params::UVGameplayRst_Lights_spot_light_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RSetIntensity_L_Nfloat_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VGameplayRst.VGameplayRst_Lights_spot_light_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RSetInnerConeAngle_L_Nfloat_R
// (Native, Public, BlueprintCallable)
// Parameters:
// double                             __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVGameplayRst_Lights_spot_light_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RSetInnerConeAngle_L_Nfloat_R(double __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Lights_spot_light_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RSetInnerConeAngle_L_Nfloat_R");

	Params::UVGameplayRst_Lights_spot_light_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RSetInnerConeAngle_L_Nfloat_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VGameplayRst.VGameplayRst_Lights_spot_light_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RSetColor_L_Ncolor_R
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FColors_color               __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UVGameplayRst_Lights_spot_light_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RSetColor_L_Ncolor_R(const struct FColors_color& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Lights_spot_light_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RSetColor_L_Ncolor_R");

	Params::UVGameplayRst_Lights_spot_light_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RSetColor_L_Ncolor_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VGameplayRst.VGameplayRst_Lights_spot_light_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RSetAttenuationRadius_L_Nfloat_R
// (Native, Public, BlueprintCallable)
// Parameters:
// double                             __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVGameplayRst_Lights_spot_light_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RSetAttenuationRadius_L_Nfloat_R(double __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Lights_spot_light_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RSetAttenuationRadius_L_Nfloat_R");

	Params::UVGameplayRst_Lights_spot_light_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RSetAttenuationRadius_L_Nfloat_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VGameplayRst.VGameplayRst_Lights_spot_light_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RGetSourceRadius
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// double                             RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double UVGameplayRst_Lights_spot_light_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RGetSourceRadius(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Lights_spot_light_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RGetSourceRadius");

	Params::UVGameplayRst_Lights_spot_light_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RGetSourceRadius_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_Lights_spot_light_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RGetSourceLength
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// double                             RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double UVGameplayRst_Lights_spot_light_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RGetSourceLength(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Lights_spot_light_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RGetSourceLength");

	Params::UVGameplayRst_Lights_spot_light_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RGetSourceLength_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_Lights_spot_light_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RGetOuterConeAngle
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// double                             RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double UVGameplayRst_Lights_spot_light_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RGetOuterConeAngle(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Lights_spot_light_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RGetOuterConeAngle");

	Params::UVGameplayRst_Lights_spot_light_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RGetOuterConeAngle_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_Lights_spot_light_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RGetIntensity
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// double                             RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double UVGameplayRst_Lights_spot_light_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RGetIntensity(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Lights_spot_light_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RGetIntensity");

	Params::UVGameplayRst_Lights_spot_light_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RGetIntensity_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_Lights_spot_light_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RGetInnerConeAngle
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// double                             RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double UVGameplayRst_Lights_spot_light_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RGetInnerConeAngle(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Lights_spot_light_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RGetInnerConeAngle");

	Params::UVGameplayRst_Lights_spot_light_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RGetInnerConeAngle_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_Lights_spot_light_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RGetColor
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FColors_color               RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

struct FColors_color UVGameplayRst_Lights_spot_light_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RGetColor(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Lights_spot_light_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RGetColor");

	Params::UVGameplayRst_Lights_spot_light_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RGetColor_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_Lights_spot_light_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RGetAttenuationRadius
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// double                             RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double UVGameplayRst_Lights_spot_light_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RGetAttenuationRadius(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Lights_spot_light_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RGetAttenuationRadius");

	Params::UVGameplayRst_Lights_spot_light_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RGetAttenuationRadius_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_Lights_spot_light_component.$InitInstance
// (None)
// Parameters:

void UVGameplayRst_Lights_spot_light_component::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Lights_spot_light_component", "$InitInstance");

	Params::UVGameplayRst_Lights_spot_light_component__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VGameplayRst.VGameplayRst_Lights_spot_light_component.$Block
// (None)
// Parameters:

void UVGameplayRst_Lights_spot_light_component::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Lights_spot_light_component", "$Block");

	Params::UVGameplayRst_Lights_spot_light_component__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VGameplayRst.VGameplayRst_Lights_spot_light_component.$InitCDO
// (None)
// Parameters:

void UVGameplayRst_Lights_spot_light_component::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Lights_spot_light_component", "$InitCDO");

	Params::UVGameplayRst_Lights_spot_light_component__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VGameplayRst.VGameplayRst_Messaging_debug_command_component
// (None)

class UClass* UVGameplayRst_Messaging_debug_command_component::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VGameplayRst_Messaging_debug_command_component");

	return Clss;
}


// VGameplayRst_Messaging_debug_command_component VGameplayRst.Default__VGameplayRst_Messaging_debug_command_component
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVGameplayRst_Messaging_debug_command_component* UVGameplayRst_Messaging_debug_command_component::GetDefaultObj()
{
	static class UVGameplayRst_Messaging_debug_command_component* Default = nullptr;

	if (!Default)
		Default = static_cast<UVGameplayRst_Messaging_debug_command_component*>(UVGameplayRst_Messaging_debug_command_component::StaticClass()->DefaultObject);

	return Default;
}


// Function VGameplayRst.VGameplayRst_Messaging_debug_command_component.__WaitForCommand_L_N_Kchar_R
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseStringProperty_              __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UVGameplayRst_Messaging_debug_command_component::__WaitForCommand_L_N_Kchar_R(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, FVerseStringProperty_ __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Messaging_debug_command_component", "__WaitForCommand_L_N_Kchar_R");

	Params::UVGameplayRst_Messaging_debug_command_component___WaitForCommand_L_N_Kchar_R_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_Messaging_debug_command_component.$InitInstance
// (None)
// Parameters:

void UVGameplayRst_Messaging_debug_command_component::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Messaging_debug_command_component", "$InitInstance");

	Params::UVGameplayRst_Messaging_debug_command_component__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VGameplayRst.VGameplayRst_Messaging_debug_command_component.$Block
// (None)
// Parameters:

void UVGameplayRst_Messaging_debug_command_component::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Messaging_debug_command_component", "$Block");

	Params::UVGameplayRst_Messaging_debug_command_component__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VGameplayRst.VGameplayRst_Messaging_debug_command_component.$InitCDO
// (None)
// Parameters:

void UVGameplayRst_Messaging_debug_command_component::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Messaging_debug_command_component", "$InitCDO");

	Params::UVGameplayRst_Messaging_debug_command_component__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VGameplayRst.VGameplayRst_Physics
// (None)

class UClass* UVGameplayRst_Physics::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VGameplayRst_Physics");

	return Clss;
}


// VGameplayRst_Physics VGameplayRst.Default__VGameplayRst_Physics
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVGameplayRst_Physics* UVGameplayRst_Physics::GetDefaultObj()
{
	static class UVGameplayRst_Physics* Default = nullptr;

	if (!Default)
		Default = static_cast<UVGameplayRst_Physics*>(UVGameplayRst_Physics::StaticClass()->DefaultObject);

	return Default;
}


// Function VGameplayRst.VGameplayRst_Physics.VGameplayRst_Physics_hit_result$OverrideFactory
// (Static, HasOutParams)
// Parameters:
// struct FVGameplayRst_Physics_hit_resultRetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor)
// TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap                              (ConstParm, Parm, ContainsInstancedReference)

struct FVGameplayRst_Physics_hit_result UVGameplayRst_Physics::VGameplayRst_Physics_hit_result_OverrideFactory(TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Physics", "VGameplayRst_Physics_hit_result$OverrideFactory");

	Params::UVGameplayRst_Physics_VGameplayRst_Physics_hit_result_OverrideFactory_Params Parms{};

	Parms.__verse_0xFB48ED96__InitOverrideMap = __verse_0xFB48ED96__InitOverrideMap;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_Physics.VGameplayRst_Physics_hit_result$Factory
// (Static, HasOutParams)
// Parameters:
// struct FVGameplayRst_Physics_hit_resultRetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor)

struct FVGameplayRst_Physics_hit_result UVGameplayRst_Physics::VGameplayRst_Physics_hit_result_Factory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Physics", "VGameplayRst_Physics_hit_result$Factory");

	Params::UVGameplayRst_Physics_VGameplayRst_Physics_hit_result_Factory_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_Physics.$InitCDO
// (None)
// Parameters:

void UVGameplayRst_Physics::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Physics", "$InitCDO");

	Params::UVGameplayRst_Physics__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VGameplayRst.VGameplayRst_Physics_collision_component
// (None)

class UClass* UVGameplayRst_Physics_collision_component::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VGameplayRst_Physics_collision_component");

	return Clss;
}


// VGameplayRst_Physics_collision_component VGameplayRst.Default__VGameplayRst_Physics_collision_component
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVGameplayRst_Physics_collision_component* UVGameplayRst_Physics_collision_component::GetDefaultObj()
{
	static class UVGameplayRst_Physics_collision_component* Default = nullptr;

	if (!Default)
		Default = static_cast<UVGameplayRst_Physics_collision_component*>(UVGameplayRst_Physics_collision_component::StaticClass()->DefaultObject);

	return Default;
}


// Function VGameplayRst.VGameplayRst_Physics_collision_component.WaitHit
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UVGameplayRst_Physics_collision_component::WaitHit(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Physics_collision_component", "WaitHit");

	Params::UVGameplayRst_Physics_collision_component_WaitHit_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_Physics_collision_component.WaitEndOverlap
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UVGameplayRst_Physics_collision_component::WaitEndOverlap(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Physics_collision_component", "WaitEndOverlap");

	Params::UVGameplayRst_Physics_collision_component_WaitEndOverlap_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_Physics_collision_component.WaitBeginOverlap
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UVGameplayRst_Physics_collision_component::WaitBeginOverlap(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Physics_collision_component", "WaitBeginOverlap");

	Params::UVGameplayRst_Physics_collision_component_WaitBeginOverlap_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_Physics_collision_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetUseContinuousCollisionDetection_L_Nlogic_R
// (Native, Public, BlueprintCallable)
// Parameters:
// uint8                              __verse_0xB2CDDD72_Argument                                      (Parm, NoDestructor, HasGetValueTypeHash)

void UVGameplayRst_Physics_collision_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetUseContinuousCollisionDetection_L_Nlogic_R(uint8 __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Physics_collision_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetUseContinuousCollisionDetection_L_Nlogic_R");

	Params::UVGameplayRst_Physics_collision_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetUseContinuousCollisionDetection_L_Nlogic_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VGameplayRst.VGameplayRst_Physics_collision_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetSphereCollisionShapeMode_L_Nfloat_R
// (Native, Public, BlueprintCallable)
// Parameters:
// double                             __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVGameplayRst_Physics_collision_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetSphereCollisionShapeMode_L_Nfloat_R(double __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Physics_collision_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetSphereCollisionShapeMode_L_Nfloat_R");

	Params::UVGameplayRst_Physics_collision_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetSphereCollisionShapeMode_L_Nfloat_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VGameplayRst.VGameplayRst_Physics_collision_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetSendOverlapEvents_L_Nlogic_R
// (Native, Public, BlueprintCallable)
// Parameters:
// uint8                              __verse_0xB2CDDD72_Argument                                      (Parm, NoDestructor, HasGetValueTypeHash)

void UVGameplayRst_Physics_collision_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetSendOverlapEvents_L_Nlogic_R(uint8 __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Physics_collision_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetSendOverlapEvents_L_Nlogic_R");

	Params::UVGameplayRst_Physics_collision_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetSendOverlapEvents_L_Nlogic_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VGameplayRst.VGameplayRst_Physics_collision_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetSendHitEventsOnCollide_L_Nlogic_R
// (Native, Public, BlueprintCallable)
// Parameters:
// uint8                              __verse_0xB2CDDD72_Argument                                      (Parm, NoDestructor, HasGetValueTypeHash)

void UVGameplayRst_Physics_collision_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetSendHitEventsOnCollide_L_Nlogic_R(uint8 __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Physics_collision_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetSendHitEventsOnCollide_L_Nlogic_R");

	Params::UVGameplayRst_Physics_collision_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetSendHitEventsOnCollide_L_Nlogic_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VGameplayRst.VGameplayRst_Physics_collision_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetMovable_L_Nlogic_R
// (Native, Public, BlueprintCallable)
// Parameters:
// uint8                              __verse_0xB2CDDD72_Argument                                      (Parm, NoDestructor, HasGetValueTypeHash)

void UVGameplayRst_Physics_collision_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetMovable_L_Nlogic_R(uint8 __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Physics_collision_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetMovable_L_Nlogic_R");

	Params::UVGameplayRst_Physics_collision_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetMovable_L_Nlogic_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VGameplayRst.VGameplayRst_Physics_collision_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetMeshCollisionShapeMode
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UVGameplayRst_Physics_collision_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetMeshCollisionShapeMode(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Physics_collision_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetMeshCollisionShapeMode");

	Params::UVGameplayRst_Physics_collision_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetMeshCollisionShapeMode_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VGameplayRst.VGameplayRst_Physics_collision_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetMeshCollisionShapeMode_L_Nmesh_R
// (Native, Public, BlueprintCallable)
// Parameters:
// class UAssets_mesh*                __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

void UVGameplayRst_Physics_collision_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetMeshCollisionShapeMode_L_Nmesh_R(class UAssets_mesh* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Physics_collision_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetMeshCollisionShapeMode_L_Nmesh_R");

	Params::UVGameplayRst_Physics_collision_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetMeshCollisionShapeMode_L_Nmesh_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VGameplayRst.VGameplayRst_Physics_collision_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetGravityEnabled_L_Nlogic_R
// (Native, Public, BlueprintCallable)
// Parameters:
// uint8                              __verse_0xB2CDDD72_Argument                                      (Parm, NoDestructor, HasGetValueTypeHash)

void UVGameplayRst_Physics_collision_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetGravityEnabled_L_Nlogic_R(uint8 __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Physics_collision_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetGravityEnabled_L_Nlogic_R");

	Params::UVGameplayRst_Physics_collision_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetGravityEnabled_L_Nlogic_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VGameplayRst.VGameplayRst_Physics_collision_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetEnabled_L_Nlogic_R
// (Native, Public, BlueprintCallable)
// Parameters:
// uint8                              __verse_0xB2CDDD72_Argument                                      (Parm, NoDestructor, HasGetValueTypeHash)

void UVGameplayRst_Physics_collision_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetEnabled_L_Nlogic_R(uint8 __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Physics_collision_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetEnabled_L_Nlogic_R");

	Params::UVGameplayRst_Physics_collision_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetEnabled_L_Nlogic_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VGameplayRst.VGameplayRst_Physics_collision_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetDegreeOfFreedomContraint_L_Ndof__movement__mode_R
// (Native, Public, BlueprintCallable)
// Parameters:
// enum class EVGameplayRst_Physics_dof_movement_mode__verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UVGameplayRst_Physics_collision_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetDegreeOfFreedomContraint_L_Ndof__movement__mode_R(enum class EVGameplayRst_Physics_dof_movement_mode __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Physics_collision_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetDegreeOfFreedomContraint_L_Ndof__movement__mode_R");

	Params::UVGameplayRst_Physics_collision_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetDegreeOfFreedomContraint_L_Ndof__movement__mode_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VGameplayRst.VGameplayRst_Physics_collision_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetCustomDegreeOfFreedomConstrain_L_Nvector3_R
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FSpatialMath_vector3        __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UVGameplayRst_Physics_collision_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetCustomDegreeOfFreedomConstrain_L_Nvector3_R(const struct FSpatialMath_vector3& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Physics_collision_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetCustomDegreeOfFreedomConstrain_L_Nvector3_R");

	Params::UVGameplayRst_Physics_collision_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetCustomDegreeOfFreedomConstrain_L_Nvector3_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VGameplayRst.VGameplayRst_Physics_collision_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetCollisionProfileName_L_N_Kchar_R
// (Native, Public, BlueprintCallable)
// Parameters:
// FVerseStringProperty_              __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UVGameplayRst_Physics_collision_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetCollisionProfileName_L_N_Kchar_R(FVerseStringProperty_ __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Physics_collision_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetCollisionProfileName_L_N_Kchar_R");

	Params::UVGameplayRst_Physics_collision_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetCollisionProfileName_L_N_Kchar_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VGameplayRst.VGameplayRst_Physics_collision_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetCapsuleCollisionShapeMode_L_Nfloat_M_Nfloat_R
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FTuple_Lfloat_Mfloat_R      __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UVGameplayRst_Physics_collision_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetCapsuleCollisionShapeMode_L_Nfloat_M_Nfloat_R(const struct FTuple_Lfloat_Mfloat_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Physics_collision_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetCapsuleCollisionShapeMode_L_Nfloat_M_Nfloat_R");

	Params::UVGameplayRst_Physics_collision_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetCapsuleCollisionShapeMode_L_Nfloat_M_Nfloat_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VGameplayRst.VGameplayRst_Physics_collision_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetBoxCollisionShapeMode_L_Nvector3_R
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FSpatialMath_vector3        __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UVGameplayRst_Physics_collision_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetBoxCollisionShapeMode_L_Nvector3_R(const struct FSpatialMath_vector3& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Physics_collision_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetBoxCollisionShapeMode_L_Nvector3_R");

	Params::UVGameplayRst_Physics_collision_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetBoxCollisionShapeMode_L_Nvector3_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VGameplayRst.VGameplayRst_Physics_collision_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RGetUseContinuousCollisionDetection
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// uint8                              RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

uint8 UVGameplayRst_Physics_collision_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RGetUseContinuousCollisionDetection(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Physics_collision_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RGetUseContinuousCollisionDetection");

	Params::UVGameplayRst_Physics_collision_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RGetUseContinuousCollisionDetection_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_Physics_collision_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RGetSendOverlapEvents
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// uint8                              RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

uint8 UVGameplayRst_Physics_collision_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RGetSendOverlapEvents(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Physics_collision_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RGetSendOverlapEvents");

	Params::UVGameplayRst_Physics_collision_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RGetSendOverlapEvents_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_Physics_collision_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RGetSendHitEventsOnCollide
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// uint8                              RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

uint8 UVGameplayRst_Physics_collision_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RGetSendHitEventsOnCollide(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Physics_collision_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RGetSendHitEventsOnCollide");

	Params::UVGameplayRst_Physics_collision_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RGetSendHitEventsOnCollide_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_Physics_collision_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RGetMovable
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// uint8                              RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

uint8 UVGameplayRst_Physics_collision_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RGetMovable(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Physics_collision_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RGetMovable");

	Params::UVGameplayRst_Physics_collision_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RGetMovable_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_Physics_collision_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RGetGravityEnabled
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// uint8                              RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

uint8 UVGameplayRst_Physics_collision_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RGetGravityEnabled(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Physics_collision_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RGetGravityEnabled");

	Params::UVGameplayRst_Physics_collision_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RGetGravityEnabled_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_Physics_collision_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RGetEnabled
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// uint8                              RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

uint8 UVGameplayRst_Physics_collision_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RGetEnabled(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Physics_collision_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RGetEnabled");

	Params::UVGameplayRst_Physics_collision_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RGetEnabled_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_Physics_collision_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RGetCollisionShapeMode
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// enum class EVGameplayRst_Physics_collision_shape_modeRetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class EVGameplayRst_Physics_collision_shape_mode UVGameplayRst_Physics_collision_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RGetCollisionShapeMode(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Physics_collision_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RGetCollisionShapeMode");

	Params::UVGameplayRst_Physics_collision_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RGetCollisionShapeMode_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_Physics_collision_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RGetCollisionProfileName
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FVerseStringProperty_              RetVal                                                           (Parm, OutParm, ReturnParm, HasGetValueTypeHash)

FVerseStringProperty_ UVGameplayRst_Physics_collision_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RGetCollisionProfileName(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Physics_collision_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RGetCollisionProfileName");

	Params::UVGameplayRst_Physics_collision_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RGetCollisionProfileName_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_Physics_collision_component.$InitInstance
// (None)
// Parameters:

void UVGameplayRst_Physics_collision_component::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Physics_collision_component", "$InitInstance");

	Params::UVGameplayRst_Physics_collision_component__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VGameplayRst.VGameplayRst_Physics_collision_component.$Block
// (None)
// Parameters:

void UVGameplayRst_Physics_collision_component::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Physics_collision_component", "$Block");

	Params::UVGameplayRst_Physics_collision_component__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VGameplayRst.VGameplayRst_Physics_collision_component.$InitCDO
// (None)
// Parameters:

void UVGameplayRst_Physics_collision_component::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Physics_collision_component", "$InitCDO");

	Params::UVGameplayRst_Physics_collision_component__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VGameplayRst.VGameplayRst_Physics_overlap_result
// (None)

class UClass* UVGameplayRst_Physics_overlap_result::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VGameplayRst_Physics_overlap_result");

	return Clss;
}


// VGameplayRst_Physics_overlap_result VGameplayRst.Default__VGameplayRst_Physics_overlap_result
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVGameplayRst_Physics_overlap_result* UVGameplayRst_Physics_overlap_result::GetDefaultObj()
{
	static class UVGameplayRst_Physics_overlap_result* Default = nullptr;

	if (!Default)
		Default = static_cast<UVGameplayRst_Physics_overlap_result*>(UVGameplayRst_Physics_overlap_result::StaticClass()->DefaultObject);

	return Default;
}


// Function VGameplayRst.VGameplayRst_Physics_overlap_result.$InitInstance
// (None)
// Parameters:

void UVGameplayRst_Physics_overlap_result::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Physics_overlap_result", "$InitInstance");

	Params::UVGameplayRst_Physics_overlap_result__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VGameplayRst.VGameplayRst_Physics_overlap_result.$Block
// (None)
// Parameters:

void UVGameplayRst_Physics_overlap_result::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Physics_overlap_result", "$Block");

	Params::UVGameplayRst_Physics_overlap_result__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VGameplayRst.VGameplayRst_Physics_overlap_result.$InitCDO
// (None)
// Parameters:

void UVGameplayRst_Physics_overlap_result::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Physics_overlap_result", "$InitCDO");

	Params::UVGameplayRst_Physics_overlap_result__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VGameplayRst.VGameplayRst_Physics_physics_trace
// (None)

class UClass* UVGameplayRst_Physics_physics_trace::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VGameplayRst_Physics_physics_trace");

	return Clss;
}


// VGameplayRst_Physics_physics_trace VGameplayRst.Default__VGameplayRst_Physics_physics_trace
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVGameplayRst_Physics_physics_trace* UVGameplayRst_Physics_physics_trace::GetDefaultObj()
{
	static class UVGameplayRst_Physics_physics_trace* Default = nullptr;

	if (!Default)
		Default = static_cast<UVGameplayRst_Physics_physics_trace*>(UVGameplayRst_Physics_physics_trace::StaticClass()->DefaultObject);

	return Default;
}


// Function VGameplayRst.VGameplayRst_Physics_physics_trace.WaitPhysicsTrace
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UVGameplayRst_Physics_physics_trace::WaitPhysicsTrace(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Physics_physics_trace", "WaitPhysicsTrace");

	Params::UVGameplayRst_Physics_physics_trace_WaitPhysicsTrace_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_Physics_physics_trace._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fphysics__trace_N_RInitPhysicsTrace_L_Ncomponent_M_Nphysics__trace__category_M_Nphysics__trace__type_M_Nphysics__trace__shape_M_Nphysics__trace__channel_M_Nvector3_M_Nvector3_M_Nlogic_M_Nvector3_M_Nfloat_M_N_Kchar_R
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FTuple_Lcomponent_Mphysics__trace__category_Mphysics__trace__type_Mphysics__trace__shape_Mphysics__trace__channel_Mvector3_Mvector3_Mlogic_Mvector3_Mfloat_M_Kchar_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UVGameplayRst_Physics_physics_trace::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fphysics__trace_N_RInitPhysicsTrace_L_Ncomponent_M_Nphysics__trace__category_M_Nphysics__trace__type_M_Nphysics__trace__shape_M_Nphysics__trace__channel_M_Nvector3_M_Nvector3_M_Nlogic_M_Nvector3_M_Nfloat_M_N_Kchar_R(const struct FTuple_Lcomponent_Mphysics__trace__category_Mphysics__trace__type_Mphysics__trace__shape_Mphysics__trace__channel_Mvector3_Mvector3_Mlogic_Mvector3_Mfloat_M_Kchar_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Physics_physics_trace", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fphysics__trace_N_RInitPhysicsTrace_L_Ncomponent_M_Nphysics__trace__category_M_Nphysics__trace__type_M_Nphysics__trace__shape_M_Nphysics__trace__channel_M_Nvector3_M_Nvector3_M_Nlogic_M_Nvector3_M_Nfloat_M_N_Kchar_R");

	Params::UVGameplayRst_Physics_physics_trace__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fphysics__trace_N_RInitPhysicsTrace_L_Ncomponent_M_Nphysics__trace__category_M_Nphysics__trace__type_M_Nphysics__trace__shape_M_Nphysics__trace__channel_M_Nvector3_M_Nvector3_M_Nlogic_M_Nvector3_M_Nfloat_M_N_Kchar_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VGameplayRst.VGameplayRst_Physics_physics_trace.$InitInstance
// (None)
// Parameters:

void UVGameplayRst_Physics_physics_trace::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Physics_physics_trace", "$InitInstance");

	Params::UVGameplayRst_Physics_physics_trace__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VGameplayRst.VGameplayRst_Physics_physics_trace.$Block
// (None)
// Parameters:

void UVGameplayRst_Physics_physics_trace::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Physics_physics_trace", "$Block");

	Params::UVGameplayRst_Physics_physics_trace__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VGameplayRst.VGameplayRst_Physics_physics_trace.$InitCDO
// (None)
// Parameters:

void UVGameplayRst_Physics_physics_trace::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Physics_physics_trace", "$InitCDO");

	Params::UVGameplayRst_Physics_physics_trace__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VGameplayRst.VGameplayRst_Transform_mutable_positionable
// (None)

class UClass* UVGameplayRst_Transform_mutable_positionable::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VGameplayRst_Transform_mutable_positionable");

	return Clss;
}


// VGameplayRst_Transform_mutable_positionable VGameplayRst.Default__VGameplayRst_Transform_mutable_positionable
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVGameplayRst_Transform_mutable_positionable* UVGameplayRst_Transform_mutable_positionable::GetDefaultObj()
{
	static class UVGameplayRst_Transform_mutable_positionable* Default = nullptr;

	if (!Default)
		Default = static_cast<UVGameplayRst_Transform_mutable_positionable*>(UVGameplayRst_Transform_mutable_positionable::StaticClass()->DefaultObject);

	return Default;
}


// Function VGameplayRst.VGameplayRst_Transform_mutable_positionable._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__positionable_N_RSetPosition_L_Nvector3_R
// (Public, BlueprintCallable)
// Parameters:
// struct FSpatialMath_vector3        __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UVGameplayRst_Transform_mutable_positionable::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__positionable_N_RSetPosition_L_Nvector3_R(const struct FSpatialMath_vector3& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Transform_mutable_positionable", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__positionable_N_RSetPosition_L_Nvector3_R");

	Params::UVGameplayRst_Transform_mutable_positionable__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__positionable_N_RSetPosition_L_Nvector3_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VGameplayRst.VGameplayRst_Transform_mutable_rotatable
// (None)

class UClass* UVGameplayRst_Transform_mutable_rotatable::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VGameplayRst_Transform_mutable_rotatable");

	return Clss;
}


// VGameplayRst_Transform_mutable_rotatable VGameplayRst.Default__VGameplayRst_Transform_mutable_rotatable
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVGameplayRst_Transform_mutable_rotatable* UVGameplayRst_Transform_mutable_rotatable::GetDefaultObj()
{
	static class UVGameplayRst_Transform_mutable_rotatable* Default = nullptr;

	if (!Default)
		Default = static_cast<UVGameplayRst_Transform_mutable_rotatable*>(UVGameplayRst_Transform_mutable_rotatable::StaticClass()->DefaultObject);

	return Default;
}


// Function VGameplayRst.VGameplayRst_Transform_mutable_rotatable._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RSetRotation_L_Nrotation_R
// (Public, BlueprintCallable)
// Parameters:
// struct FVerseRotation              __verse_0xB2CDDD72_Argument                                      (Parm, NoDestructor)

void UVGameplayRst_Transform_mutable_rotatable::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RSetRotation_L_Nrotation_R(const struct FVerseRotation& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Transform_mutable_rotatable", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RSetRotation_L_Nrotation_R");

	Params::UVGameplayRst_Transform_mutable_rotatable__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RSetRotation_L_Nrotation_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VGameplayRst.VGameplayRst_Transform_mutable_rotatable._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RSetForwardVectorFromXY_L_Nvector3_M_Nvector3_R
// (Public, BlueprintCallable)
// Parameters:
// struct FTuple_Lvector3_Mvector3_R  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UVGameplayRst_Transform_mutable_rotatable::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RSetForwardVectorFromXY_L_Nvector3_M_Nvector3_R(const struct FTuple_Lvector3_Mvector3_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Transform_mutable_rotatable", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RSetForwardVectorFromXY_L_Nvector3_M_Nvector3_R");

	Params::UVGameplayRst_Transform_mutable_rotatable__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RSetForwardVectorFromXY_L_Nvector3_M_Nvector3_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VGameplayRst.VGameplayRst_Transform_mutable_rotatable._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RApplyAdditionalRotation_L_Nrotation_R
// (Public, BlueprintCallable)
// Parameters:
// struct FVerseRotation              __verse_0xB2CDDD72_Argument                                      (Parm, NoDestructor)

void UVGameplayRst_Transform_mutable_rotatable::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RApplyAdditionalRotation_L_Nrotation_R(const struct FVerseRotation& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Transform_mutable_rotatable", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RApplyAdditionalRotation_L_Nrotation_R");

	Params::UVGameplayRst_Transform_mutable_rotatable__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RApplyAdditionalRotation_L_Nrotation_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VGameplayRst.VGameplayRst_Transform_mutable_scalable
// (None)

class UClass* UVGameplayRst_Transform_mutable_scalable::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VGameplayRst_Transform_mutable_scalable");

	return Clss;
}


// VGameplayRst_Transform_mutable_scalable VGameplayRst.Default__VGameplayRst_Transform_mutable_scalable
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVGameplayRst_Transform_mutable_scalable* UVGameplayRst_Transform_mutable_scalable::GetDefaultObj()
{
	static class UVGameplayRst_Transform_mutable_scalable* Default = nullptr;

	if (!Default)
		Default = static_cast<UVGameplayRst_Transform_mutable_scalable*>(UVGameplayRst_Transform_mutable_scalable::StaticClass()->DefaultObject);

	return Default;
}


// Function VGameplayRst.VGameplayRst_Transform_mutable_scalable._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__scalable_N_RSetScale_L_Nvector3_R
// (Public, BlueprintCallable)
// Parameters:
// struct FSpatialMath_vector3        __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UVGameplayRst_Transform_mutable_scalable::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__scalable_N_RSetScale_L_Nvector3_R(const struct FSpatialMath_vector3& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Transform_mutable_scalable", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__scalable_N_RSetScale_L_Nvector3_R");

	Params::UVGameplayRst_Transform_mutable_scalable__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__scalable_N_RSetScale_L_Nvector3_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VGameplayRst.VGameplayRst_Transform_position_component
// (None)

class UClass* UVGameplayRst_Transform_position_component::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VGameplayRst_Transform_position_component");

	return Clss;
}


// VGameplayRst_Transform_position_component VGameplayRst.Default__VGameplayRst_Transform_position_component
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVGameplayRst_Transform_position_component* UVGameplayRst_Transform_position_component::GetDefaultObj()
{
	static class UVGameplayRst_Transform_position_component* Default = nullptr;

	if (!Default)
		Default = static_cast<UVGameplayRst_Transform_position_component*>(UVGameplayRst_Transform_position_component::StaticClass()->DefaultObject);

	return Default;
}


// Function VGameplayRst.VGameplayRst_Transform_position_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__positionable_N_RSetPosition_L_Nvector3_R
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FSpatialMath_vector3        __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UVGameplayRst_Transform_position_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__positionable_N_RSetPosition_L_Nvector3_R(const struct FSpatialMath_vector3& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Transform_position_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__positionable_N_RSetPosition_L_Nvector3_R");

	Params::UVGameplayRst_Transform_position_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__positionable_N_RSetPosition_L_Nvector3_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VGameplayRst.VGameplayRst_Transform_position_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fpositionable_N_RGetPosition
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FSpatialMath_vector3        RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

struct FSpatialMath_vector3 UVGameplayRst_Transform_position_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fpositionable_N_RGetPosition(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Transform_position_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fpositionable_N_RGetPosition");

	Params::UVGameplayRst_Transform_position_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fpositionable_N_RGetPosition_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_Transform_position_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fposition__component_N_RAddToPosition_L_Nvector3_R
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FSpatialMath_vector3        __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UVGameplayRst_Transform_position_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fposition__component_N_RAddToPosition_L_Nvector3_R(const struct FSpatialMath_vector3& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Transform_position_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fposition__component_N_RAddToPosition_L_Nvector3_R");

	Params::UVGameplayRst_Transform_position_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fposition__component_N_RAddToPosition_L_Nvector3_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VGameplayRst.VGameplayRst_Transform_position_component.$InitInstance
// (None)
// Parameters:

void UVGameplayRst_Transform_position_component::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Transform_position_component", "$InitInstance");

	Params::UVGameplayRst_Transform_position_component__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VGameplayRst.VGameplayRst_Transform_position_component.$Block
// (None)
// Parameters:

void UVGameplayRst_Transform_position_component::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Transform_position_component", "$Block");

	Params::UVGameplayRst_Transform_position_component__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VGameplayRst.VGameplayRst_Transform_position_component.$InitCDO
// (None)
// Parameters:

void UVGameplayRst_Transform_position_component::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Transform_position_component", "$InitCDO");

	Params::UVGameplayRst_Transform_position_component__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VGameplayRst.VGameplayRst_Transform_positionable
// (None)

class UClass* UVGameplayRst_Transform_positionable::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VGameplayRst_Transform_positionable");

	return Clss;
}


// VGameplayRst_Transform_positionable VGameplayRst.Default__VGameplayRst_Transform_positionable
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVGameplayRst_Transform_positionable* UVGameplayRst_Transform_positionable::GetDefaultObj()
{
	static class UVGameplayRst_Transform_positionable* Default = nullptr;

	if (!Default)
		Default = static_cast<UVGameplayRst_Transform_positionable*>(UVGameplayRst_Transform_positionable::StaticClass()->DefaultObject);

	return Default;
}


// Function VGameplayRst.VGameplayRst_Transform_positionable._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fpositionable_N_RGetPosition
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FSpatialMath_vector3        RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

struct FSpatialMath_vector3 UVGameplayRst_Transform_positionable::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fpositionable_N_RGetPosition(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Transform_positionable", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fpositionable_N_RGetPosition");

	Params::UVGameplayRst_Transform_positionable__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fpositionable_N_RGetPosition_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass VGameplayRst.VGameplayRst_Transform_rotatable
// (None)

class UClass* UVGameplayRst_Transform_rotatable::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VGameplayRst_Transform_rotatable");

	return Clss;
}


// VGameplayRst_Transform_rotatable VGameplayRst.Default__VGameplayRst_Transform_rotatable
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVGameplayRst_Transform_rotatable* UVGameplayRst_Transform_rotatable::GetDefaultObj()
{
	static class UVGameplayRst_Transform_rotatable* Default = nullptr;

	if (!Default)
		Default = static_cast<UVGameplayRst_Transform_rotatable*>(UVGameplayRst_Transform_rotatable::StaticClass()->DefaultObject);

	return Default;
}


// Function VGameplayRst.VGameplayRst_Transform_rotatable._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RUpVector
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FSpatialMath_vector3        RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

struct FSpatialMath_vector3 UVGameplayRst_Transform_rotatable::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RUpVector(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Transform_rotatable", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RUpVector");

	Params::UVGameplayRst_Transform_rotatable__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RUpVector_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_Transform_rotatable._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RRotation
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FVerseRotation              RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor)

struct FVerseRotation UVGameplayRst_Transform_rotatable::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RRotation(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Transform_rotatable", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RRotation");

	Params::UVGameplayRst_Transform_rotatable__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RRotation_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_Transform_rotatable._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RRightVector
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FSpatialMath_vector3        RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

struct FSpatialMath_vector3 UVGameplayRst_Transform_rotatable::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RRightVector(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Transform_rotatable", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RRightVector");

	Params::UVGameplayRst_Transform_rotatable__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RRightVector_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_Transform_rotatable._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RForwardVector
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FSpatialMath_vector3        RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

struct FSpatialMath_vector3 UVGameplayRst_Transform_rotatable::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RForwardVector(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Transform_rotatable", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RForwardVector");

	Params::UVGameplayRst_Transform_rotatable__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RForwardVector_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass VGameplayRst.VGameplayRst_Transform_rotation_component
// (None)

class UClass* UVGameplayRst_Transform_rotation_component::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VGameplayRst_Transform_rotation_component");

	return Clss;
}


// VGameplayRst_Transform_rotation_component VGameplayRst.Default__VGameplayRst_Transform_rotation_component
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVGameplayRst_Transform_rotation_component* UVGameplayRst_Transform_rotation_component::GetDefaultObj()
{
	static class UVGameplayRst_Transform_rotation_component* Default = nullptr;

	if (!Default)
		Default = static_cast<UVGameplayRst_Transform_rotation_component*>(UVGameplayRst_Transform_rotation_component::StaticClass()->DefaultObject);

	return Default;
}


// Function VGameplayRst.VGameplayRst_Transform_rotation_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RUpVector
// (Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FSpatialMath_vector3        RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// FVerseFunctionProperty_            _Callee_0                                                        (HasGetValueTypeHash)
// struct FTuple_Lrotation_Mtuple_L_R_Mtuple_L_R_R_ExprResult_1                                                    (HasGetValueTypeHash)
// struct FVerseRotation              _ExprResultStack_2                                               (NoDestructor)
// FVerseFunctionProperty_            _Callee_3                                                        (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_4                                                    (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_5                                                    (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_6                                                    (HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_7                                                        (HasGetValueTypeHash)
// struct FTuple_Lrotation_Mtuple_L_R_Mtuple_L_R_R_ExprResult_8                                                    (HasGetValueTypeHash)
// struct FVerseRotation              _ExprResultStack_9                                               (NoDestructor)
// FVerseFunctionProperty_            _Callee_10                                                       (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_11                                                   (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_12                                                   (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_13                                                   (HasGetValueTypeHash)

struct FSpatialMath_vector3 UVGameplayRst_Transform_rotation_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RUpVector(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, FVerseFunctionProperty_ _Callee_0, const struct FTuple_Lrotation_Mtuple_L_R_Mtuple_L_R_R& _ExprResult_1, const struct FVerseRotation& _ExprResultStack_2, FVerseFunctionProperty_ _Callee_3, const struct FTuple_L_R& _ExprResult_4, const struct FTuple_L_R& _ExprResult_5, const struct FTuple_L_R& _ExprResult_6, FVerseFunctionProperty_ _Callee_7, const struct FTuple_Lrotation_Mtuple_L_R_Mtuple_L_R_R& _ExprResult_8, const struct FVerseRotation& _ExprResultStack_9, FVerseFunctionProperty_ _Callee_10, const struct FTuple_L_R& _ExprResult_11, const struct FTuple_L_R& _ExprResult_12, const struct FTuple_L_R& _ExprResult_13)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Transform_rotation_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RUpVector");

	Params::UVGameplayRst_Transform_rotation_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RUpVector_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._Callee_0 = _Callee_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._ExprResultStack_2 = _ExprResultStack_2;
	Parms._Callee_3 = _Callee_3;
	Parms._ExprResult_4 = _ExprResult_4;
	Parms._ExprResult_5 = _ExprResult_5;
	Parms._ExprResult_6 = _ExprResult_6;
	Parms._Callee_7 = _Callee_7;
	Parms._ExprResult_8 = _ExprResult_8;
	Parms._ExprResultStack_9 = _ExprResultStack_9;
	Parms._Callee_10 = _Callee_10;
	Parms._ExprResult_11 = _ExprResult_11;
	Parms._ExprResult_12 = _ExprResult_12;
	Parms._ExprResult_13 = _ExprResult_13;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_Transform_rotation_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RSetRotation_L_Nrotation_R
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FVerseRotation              __verse_0xB2CDDD72_Argument                                      (Parm, NoDestructor)

void UVGameplayRst_Transform_rotation_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RSetRotation_L_Nrotation_R(const struct FVerseRotation& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Transform_rotation_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RSetRotation_L_Nrotation_R");

	Params::UVGameplayRst_Transform_rotation_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RSetRotation_L_Nrotation_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VGameplayRst.VGameplayRst_Transform_rotation_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RSetForwardVectorFromXY_L_Nvector3_M_Nvector3_R
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FTuple_Lvector3_Mvector3_R  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UVGameplayRst_Transform_rotation_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RSetForwardVectorFromXY_L_Nvector3_M_Nvector3_R(const struct FTuple_Lvector3_Mvector3_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Transform_rotation_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RSetForwardVectorFromXY_L_Nvector3_M_Nvector3_R");

	Params::UVGameplayRst_Transform_rotation_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RSetForwardVectorFromXY_L_Nvector3_M_Nvector3_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VGameplayRst.VGameplayRst_Transform_rotation_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RRotation
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FVerseRotation              RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor)

struct FVerseRotation UVGameplayRst_Transform_rotation_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RRotation(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Transform_rotation_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RRotation");

	Params::UVGameplayRst_Transform_rotation_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RRotation_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_Transform_rotation_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RRightVector
// (Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FSpatialMath_vector3        RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// FVerseFunctionProperty_            _Callee_0                                                        (HasGetValueTypeHash)
// struct FTuple_Lrotation_Mtuple_L_R_Mtuple_L_R_R_ExprResult_1                                                    (HasGetValueTypeHash)
// struct FVerseRotation              _ExprResultStack_2                                               (NoDestructor)
// FVerseFunctionProperty_            _Callee_3                                                        (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_4                                                    (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_5                                                    (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_6                                                    (HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_7                                                        (HasGetValueTypeHash)
// struct FTuple_Lrotation_Mtuple_L_R_Mtuple_L_R_R_ExprResult_8                                                    (HasGetValueTypeHash)
// struct FVerseRotation              _ExprResultStack_9                                               (NoDestructor)
// FVerseFunctionProperty_            _Callee_10                                                       (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_11                                                   (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_12                                                   (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_13                                                   (HasGetValueTypeHash)

struct FSpatialMath_vector3 UVGameplayRst_Transform_rotation_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RRightVector(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, FVerseFunctionProperty_ _Callee_0, const struct FTuple_Lrotation_Mtuple_L_R_Mtuple_L_R_R& _ExprResult_1, const struct FVerseRotation& _ExprResultStack_2, FVerseFunctionProperty_ _Callee_3, const struct FTuple_L_R& _ExprResult_4, const struct FTuple_L_R& _ExprResult_5, const struct FTuple_L_R& _ExprResult_6, FVerseFunctionProperty_ _Callee_7, const struct FTuple_Lrotation_Mtuple_L_R_Mtuple_L_R_R& _ExprResult_8, const struct FVerseRotation& _ExprResultStack_9, FVerseFunctionProperty_ _Callee_10, const struct FTuple_L_R& _ExprResult_11, const struct FTuple_L_R& _ExprResult_12, const struct FTuple_L_R& _ExprResult_13)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Transform_rotation_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RRightVector");

	Params::UVGameplayRst_Transform_rotation_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RRightVector_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._Callee_0 = _Callee_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._ExprResultStack_2 = _ExprResultStack_2;
	Parms._Callee_3 = _Callee_3;
	Parms._ExprResult_4 = _ExprResult_4;
	Parms._ExprResult_5 = _ExprResult_5;
	Parms._ExprResult_6 = _ExprResult_6;
	Parms._Callee_7 = _Callee_7;
	Parms._ExprResult_8 = _ExprResult_8;
	Parms._ExprResultStack_9 = _ExprResultStack_9;
	Parms._Callee_10 = _Callee_10;
	Parms._ExprResult_11 = _ExprResult_11;
	Parms._ExprResult_12 = _ExprResult_12;
	Parms._ExprResult_13 = _ExprResult_13;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_Transform_rotation_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RForwardVector
// (Public, HasOutParams, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FSpatialMath_vector3        RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// FVerseFunctionProperty_            _Callee_0                                                        (HasGetValueTypeHash)
// struct FTuple_Lrotation_Mtuple_L_R_Mtuple_L_R_R_ExprResult_1                                                    (HasGetValueTypeHash)
// struct FVerseRotation              _ExprResultStack_2                                               (NoDestructor)
// FVerseFunctionProperty_            _Callee_3                                                        (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_4                                                    (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_5                                                    (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_6                                                    (HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_7                                                        (HasGetValueTypeHash)
// struct FTuple_Lrotation_Mtuple_L_R_Mtuple_L_R_R_ExprResult_8                                                    (HasGetValueTypeHash)
// struct FVerseRotation              _ExprResultStack_9                                               (NoDestructor)
// FVerseFunctionProperty_            _Callee_10                                                       (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_11                                                   (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_12                                                   (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_13                                                   (HasGetValueTypeHash)

struct FSpatialMath_vector3 UVGameplayRst_Transform_rotation_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RForwardVector(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, FVerseFunctionProperty_ _Callee_0, const struct FTuple_Lrotation_Mtuple_L_R_Mtuple_L_R_R& _ExprResult_1, const struct FVerseRotation& _ExprResultStack_2, FVerseFunctionProperty_ _Callee_3, const struct FTuple_L_R& _ExprResult_4, const struct FTuple_L_R& _ExprResult_5, const struct FTuple_L_R& _ExprResult_6, FVerseFunctionProperty_ _Callee_7, const struct FTuple_Lrotation_Mtuple_L_R_Mtuple_L_R_R& _ExprResult_8, const struct FVerseRotation& _ExprResultStack_9, FVerseFunctionProperty_ _Callee_10, const struct FTuple_L_R& _ExprResult_11, const struct FTuple_L_R& _ExprResult_12, const struct FTuple_L_R& _ExprResult_13)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Transform_rotation_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RForwardVector");

	Params::UVGameplayRst_Transform_rotation_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RForwardVector_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._Callee_0 = _Callee_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._ExprResultStack_2 = _ExprResultStack_2;
	Parms._Callee_3 = _Callee_3;
	Parms._ExprResult_4 = _ExprResult_4;
	Parms._ExprResult_5 = _ExprResult_5;
	Parms._ExprResult_6 = _ExprResult_6;
	Parms._Callee_7 = _Callee_7;
	Parms._ExprResult_8 = _ExprResult_8;
	Parms._ExprResultStack_9 = _ExprResultStack_9;
	Parms._Callee_10 = _Callee_10;
	Parms._ExprResult_11 = _ExprResult_11;
	Parms._ExprResult_12 = _ExprResult_12;
	Parms._ExprResult_13 = _ExprResult_13;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_Transform_rotation_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RApplyAdditionalRotation_L_Nrotation_R
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FVerseRotation              __verse_0xB2CDDD72_Argument                                      (Parm, NoDestructor)

void UVGameplayRst_Transform_rotation_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RApplyAdditionalRotation_L_Nrotation_R(const struct FVerseRotation& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Transform_rotation_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RApplyAdditionalRotation_L_Nrotation_R");

	Params::UVGameplayRst_Transform_rotation_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RApplyAdditionalRotation_L_Nrotation_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VGameplayRst.VGameplayRst_Transform_rotation_component.$InitInstance
// (None)
// Parameters:

void UVGameplayRst_Transform_rotation_component::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Transform_rotation_component", "$InitInstance");

	Params::UVGameplayRst_Transform_rotation_component__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VGameplayRst.VGameplayRst_Transform_rotation_component.$Block
// (None)
// Parameters:

void UVGameplayRst_Transform_rotation_component::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Transform_rotation_component", "$Block");

	Params::UVGameplayRst_Transform_rotation_component__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VGameplayRst.VGameplayRst_Transform_rotation_component.$InitCDO
// (None)
// Parameters:

void UVGameplayRst_Transform_rotation_component::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Transform_rotation_component", "$InitCDO");

	Params::UVGameplayRst_Transform_rotation_component__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VGameplayRst.VGameplayRst_Transform_scalable
// (None)

class UClass* UVGameplayRst_Transform_scalable::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VGameplayRst_Transform_scalable");

	return Clss;
}


// VGameplayRst_Transform_scalable VGameplayRst.Default__VGameplayRst_Transform_scalable
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVGameplayRst_Transform_scalable* UVGameplayRst_Transform_scalable::GetDefaultObj()
{
	static class UVGameplayRst_Transform_scalable* Default = nullptr;

	if (!Default)
		Default = static_cast<UVGameplayRst_Transform_scalable*>(UVGameplayRst_Transform_scalable::StaticClass()->DefaultObject);

	return Default;
}


// Function VGameplayRst.VGameplayRst_Transform_scalable._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fscalable_N_RGetScale
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FSpatialMath_vector3        RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

struct FSpatialMath_vector3 UVGameplayRst_Transform_scalable::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fscalable_N_RGetScale(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Transform_scalable", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fscalable_N_RGetScale");

	Params::UVGameplayRst_Transform_scalable__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fscalable_N_RGetScale_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// VerseClass VGameplayRst.VGameplayRst_Transform_scale_component
// (None)

class UClass* UVGameplayRst_Transform_scale_component::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VGameplayRst_Transform_scale_component");

	return Clss;
}


// VGameplayRst_Transform_scale_component VGameplayRst.Default__VGameplayRst_Transform_scale_component
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVGameplayRst_Transform_scale_component* UVGameplayRst_Transform_scale_component::GetDefaultObj()
{
	static class UVGameplayRst_Transform_scale_component* Default = nullptr;

	if (!Default)
		Default = static_cast<UVGameplayRst_Transform_scale_component*>(UVGameplayRst_Transform_scale_component::StaticClass()->DefaultObject);

	return Default;
}


// Function VGameplayRst.VGameplayRst_Transform_scale_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__scalable_N_RSetScale_L_Nvector3_R
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FSpatialMath_vector3        __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UVGameplayRst_Transform_scale_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__scalable_N_RSetScale_L_Nvector3_R(const struct FSpatialMath_vector3& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Transform_scale_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__scalable_N_RSetScale_L_Nvector3_R");

	Params::UVGameplayRst_Transform_scale_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__scalable_N_RSetScale_L_Nvector3_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VGameplayRst.VGameplayRst_Transform_scale_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fscalable_N_RGetScale
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FSpatialMath_vector3        RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

struct FSpatialMath_vector3 UVGameplayRst_Transform_scale_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fscalable_N_RGetScale(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Transform_scale_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fscalable_N_RGetScale");

	Params::UVGameplayRst_Transform_scale_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fscalable_N_RGetScale_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VGameplayRst.VGameplayRst_Transform_scale_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fscale__component_N_RAddToScale_L_Nvector3_R
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FSpatialMath_vector3        __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UVGameplayRst_Transform_scale_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fscale__component_N_RAddToScale_L_Nvector3_R(const struct FSpatialMath_vector3& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Transform_scale_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fscale__component_N_RAddToScale_L_Nvector3_R");

	Params::UVGameplayRst_Transform_scale_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fscale__component_N_RAddToScale_L_Nvector3_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VGameplayRst.VGameplayRst_Transform_scale_component.$InitInstance
// (None)
// Parameters:

void UVGameplayRst_Transform_scale_component::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Transform_scale_component", "$InitInstance");

	Params::UVGameplayRst_Transform_scale_component__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VGameplayRst.VGameplayRst_Transform_scale_component.$Block
// (None)
// Parameters:

void UVGameplayRst_Transform_scale_component::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Transform_scale_component", "$Block");

	Params::UVGameplayRst_Transform_scale_component__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VGameplayRst.VGameplayRst_Transform_scale_component.$InitCDO
// (None)
// Parameters:

void UVGameplayRst_Transform_scale_component::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_Transform_scale_component", "$InitCDO");

	Params::UVGameplayRst_Transform_scale_component__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VGameplayRst.VGameplayRst_VFX_particle_system_component
// (None)

class UClass* UVGameplayRst_VFX_particle_system_component::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VGameplayRst_VFX_particle_system_component");

	return Clss;
}


// VGameplayRst_VFX_particle_system_component VGameplayRst.Default__VGameplayRst_VFX_particle_system_component
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVGameplayRst_VFX_particle_system_component* UVGameplayRst_VFX_particle_system_component::GetDefaultObj()
{
	static class UVGameplayRst_VFX_particle_system_component* Default = nullptr;

	if (!Default)
		Default = static_cast<UVGameplayRst_VFX_particle_system_component*>(UVGameplayRst_VFX_particle_system_component::StaticClass()->DefaultObject);

	return Default;
}


// Function VGameplayRst.VGameplayRst_VFX_particle_system_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fVFX_2fparticle__system__component_N_RSetParticleSystem_L_Nparticle__system_R
// (Native, Public, BlueprintCallable)
// Parameters:
// class UAssets_particle_system*     __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

void UVGameplayRst_VFX_particle_system_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fVFX_2fparticle__system__component_N_RSetParticleSystem_L_Nparticle__system_R(class UAssets_particle_system* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_VFX_particle_system_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fVFX_2fparticle__system__component_N_RSetParticleSystem_L_Nparticle__system_R");

	Params::UVGameplayRst_VFX_particle_system_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fVFX_2fparticle__system__component_N_RSetParticleSystem_L_Nparticle__system_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VGameplayRst.VGameplayRst_VFX_particle_system_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fVFX_2fparticle__system__component_N_RDeactivate
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UVGameplayRst_VFX_particle_system_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fVFX_2fparticle__system__component_N_RDeactivate(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_VFX_particle_system_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fVFX_2fparticle__system__component_N_RDeactivate");

	Params::UVGameplayRst_VFX_particle_system_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fVFX_2fparticle__system__component_N_RDeactivate_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VGameplayRst.VGameplayRst_VFX_particle_system_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fVFX_2fparticle__system__component_N_RActivate
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UVGameplayRst_VFX_particle_system_component::_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fVFX_2fparticle__system__component_N_RActivate(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_VFX_particle_system_component", "_L_2fUnrealEngine_2ecom_2fVGameplayRst_2fVFX_2fparticle__system__component_N_RActivate");

	Params::UVGameplayRst_VFX_particle_system_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fVFX_2fparticle__system__component_N_RActivate_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VGameplayRst.VGameplayRst_VFX_particle_system_component.$InitInstance
// (None)
// Parameters:

void UVGameplayRst_VFX_particle_system_component::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_VFX_particle_system_component", "$InitInstance");

	Params::UVGameplayRst_VFX_particle_system_component__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VGameplayRst.VGameplayRst_VFX_particle_system_component.$Block
// (None)
// Parameters:

void UVGameplayRst_VFX_particle_system_component::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_VFX_particle_system_component", "$Block");

	Params::UVGameplayRst_VFX_particle_system_component__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VGameplayRst.VGameplayRst_VFX_particle_system_component.$InitCDO
// (None)
// Parameters:

void UVGameplayRst_VFX_particle_system_component::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VGameplayRst_VFX_particle_system_component", "$InitCDO");

	Params::UVGameplayRst_VFX_particle_system_component__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}

}


