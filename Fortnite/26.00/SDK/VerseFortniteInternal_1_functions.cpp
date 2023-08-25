#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// VerseClass VerseFortniteInternal.$SolarisSignatureFunctionOuter
// (None)

class UClass* U_SolarisSignatureFunctionOuter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("$SolarisSignatureFunctionOuter");

	return Clss;
}


// $SolarisSignatureFunctionOuter VerseFortniteInternal.Default__$SolarisSignatureFunctionOuter
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class U_SolarisSignatureFunctionOuter* U_SolarisSignatureFunctionOuter::GetDefaultObj()
{
	static class U_SolarisSignatureFunctionOuter* Default = nullptr;

	if (!Default)
		Default = static_cast<U_SolarisSignatureFunctionOuter*>(U_SolarisSignatureFunctionOuter::StaticClass()->DefaultObject);

	return Default;
}


// VerseClass VerseFortniteInternal.Game_fort_building_settings_component
// (None)

class UClass* UGame_fort_building_settings_component::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Game_fort_building_settings_component");

	return Clss;
}


// Game_fort_building_settings_component VerseFortniteInternal.Default__Game_fort_building_settings_component
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGame_fort_building_settings_component* UGame_fort_building_settings_component::GetDefaultObj()
{
	static class UGame_fort_building_settings_component* Default = nullptr;

	if (!Default)
		Default = static_cast<UGame_fort_building_settings_component*>(UGame_fort_building_settings_component::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteInternal.Game_fort_building_settings_component._L_2fFortnite_2ecom_2fGame_2ffort__building__settings__component_N_RsetTrapPlacement_L_NPlayerSettingState_R
// (Native, Public, BlueprintCallable)
// Parameters:
// enum class EGame_PlayerSettingState__verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGame_fort_building_settings_component::_L_2fFortnite_2ecom_2fGame_2ffort__building__settings__component_N_RsetTrapPlacement_L_NPlayerSettingState_R(enum class EGame_PlayerSettingState __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_fort_building_settings_component", "_L_2fFortnite_2ecom_2fGame_2ffort__building__settings__component_N_RsetTrapPlacement_L_NPlayerSettingState_R");

	Params::UGame_fort_building_settings_component__L_2fFortnite_2ecom_2fGame_2ffort__building__settings__component_N_RsetTrapPlacement_L_NPlayerSettingState_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortniteInternal.Game_fort_building_settings_component._L_2fFortnite_2ecom_2fGame_2ffort__building__settings__component_N_RsetEditingHostile_L_NPlayerSettingState_R
// (Native, Public, BlueprintCallable)
// Parameters:
// enum class EGame_PlayerSettingState__verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGame_fort_building_settings_component::_L_2fFortnite_2ecom_2fGame_2ffort__building__settings__component_N_RsetEditingHostile_L_NPlayerSettingState_R(enum class EGame_PlayerSettingState __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_fort_building_settings_component", "_L_2fFortnite_2ecom_2fGame_2ffort__building__settings__component_N_RsetEditingHostile_L_NPlayerSettingState_R");

	Params::UGame_fort_building_settings_component__L_2fFortnite_2ecom_2fGame_2ffort__building__settings__component_N_RsetEditingHostile_L_NPlayerSettingState_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortniteInternal.Game_fort_building_settings_component._L_2fFortnite_2ecom_2fGame_2ffort__building__settings__component_N_RsetEditing_L_NPlayerSettingState_R
// (Native, Public, BlueprintCallable)
// Parameters:
// enum class EGame_PlayerSettingState__verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGame_fort_building_settings_component::_L_2fFortnite_2ecom_2fGame_2ffort__building__settings__component_N_RsetEditing_L_NPlayerSettingState_R(enum class EGame_PlayerSettingState __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_fort_building_settings_component", "_L_2fFortnite_2ecom_2fGame_2ffort__building__settings__component_N_RsetEditing_L_NPlayerSettingState_R");

	Params::UGame_fort_building_settings_component__L_2fFortnite_2ecom_2fGame_2ffort__building__settings__component_N_RsetEditing_L_NPlayerSettingState_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortniteInternal.Game_fort_building_settings_component._L_2fFortnite_2ecom_2fGame_2ffort__building__settings__component_N_RsetBuildingOnWater_L_NPlayerSettingState_R
// (Native, Public, BlueprintCallable)
// Parameters:
// enum class EGame_PlayerSettingState__verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGame_fort_building_settings_component::_L_2fFortnite_2ecom_2fGame_2ffort__building__settings__component_N_RsetBuildingOnWater_L_NPlayerSettingState_R(enum class EGame_PlayerSettingState __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_fort_building_settings_component", "_L_2fFortnite_2ecom_2fGame_2ffort__building__settings__component_N_RsetBuildingOnWater_L_NPlayerSettingState_R");

	Params::UGame_fort_building_settings_component__L_2fFortnite_2ecom_2fGame_2ffort__building__settings__component_N_RsetBuildingOnWater_L_NPlayerSettingState_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortniteInternal.Game_fort_building_settings_component._L_2fFortnite_2ecom_2fGame_2ffort__building__settings__component_N_RsetBuilding_L_NPlayerSettingState_R
// (Native, Public, BlueprintCallable)
// Parameters:
// enum class EGame_PlayerSettingState__verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGame_fort_building_settings_component::_L_2fFortnite_2ecom_2fGame_2ffort__building__settings__component_N_RsetBuilding_L_NPlayerSettingState_R(enum class EGame_PlayerSettingState __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_fort_building_settings_component", "_L_2fFortnite_2ecom_2fGame_2ffort__building__settings__component_N_RsetBuilding_L_NPlayerSettingState_R");

	Params::UGame_fort_building_settings_component__L_2fFortnite_2ecom_2fGame_2ffort__building__settings__component_N_RsetBuilding_L_NPlayerSettingState_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortniteInternal.Game_fort_building_settings_component.$InitInstance
// (None)
// Parameters:

void UGame_fort_building_settings_component::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_fort_building_settings_component", "$InitInstance");

	Params::UGame_fort_building_settings_component__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteInternal.Game_fort_building_settings_component.$Block
// (None)
// Parameters:

void UGame_fort_building_settings_component::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_fort_building_settings_component", "$Block");

	Params::UGame_fort_building_settings_component__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteInternal.Game_fort_building_settings_component.$InitCDO
// (None)
// Parameters:

void UGame_fort_building_settings_component::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_fort_building_settings_component", "$InitCDO");

	Params::UGame_fort_building_settings_component__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteInternal.Game_fort_item_definition
// (None)

class UClass* UGame_fort_item_definition::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Game_fort_item_definition");

	return Clss;
}


// Game_fort_item_definition VerseFortniteInternal.Default__Game_fort_item_definition
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGame_fort_item_definition* UGame_fort_item_definition::GetDefaultObj()
{
	static class UGame_fort_item_definition* Default = nullptr;

	if (!Default)
		Default = static_cast<UGame_fort_item_definition*>(UGame_fort_item_definition::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteInternal.Game_fort_item_definition.$InitInstance
// (None)
// Parameters:

void UGame_fort_item_definition::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_fort_item_definition", "$InitInstance");

	Params::UGame_fort_item_definition__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteInternal.Game_fort_item_definition.$Block
// (None)
// Parameters:

void UGame_fort_item_definition::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_fort_item_definition", "$Block");

	Params::UGame_fort_item_definition__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteInternal.Game_fort_item_definition.$InitCDO
// (None)
// Parameters:

void UGame_fort_item_definition::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_fort_item_definition", "$InitCDO");

	Params::UGame_fort_item_definition__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteInternal.Game_fort_playspace_component
// (None)

class UClass* UGame_fort_playspace_component::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Game_fort_playspace_component");

	return Clss;
}


// Game_fort_playspace_component VerseFortniteInternal.Default__Game_fort_playspace_component
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGame_fort_playspace_component* UGame_fort_playspace_component::GetDefaultObj()
{
	static class UGame_fort_playspace_component* Default = nullptr;

	if (!Default)
		Default = static_cast<UGame_fort_playspace_component*>(UGame_fort_playspace_component::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteInternal.Game_fort_playspace_component.__WaitForPlayerEliminated
// (Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UConcurrency_task*           __verse_0xC1E81372_CallingTask                                   (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              __verse_0xA3A00DDB_CallerResumeState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              __verse_0x2AC0E4D8_CallerCancelState                             (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UConcurrency_task*           RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UConcurrency_task* UGame_fort_playspace_component::__WaitForPlayerEliminated(class UConcurrency_task* __verse_0xC1E81372_CallingTask, int64 __verse_0xA3A00DDB_CallerResumeState, int64 __verse_0x2AC0E4D8_CallerCancelState, const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_fort_playspace_component", "__WaitForPlayerEliminated");

	Params::UGame_fort_playspace_component___WaitForPlayerEliminated_Params Parms{};

	Parms.__verse_0xC1E81372_CallingTask = __verse_0xC1E81372_CallingTask;
	Parms.__verse_0xA3A00DDB_CallerResumeState = __verse_0xA3A00DDB_CallerResumeState;
	Parms.__verse_0x2AC0E4D8_CallerCancelState = __verse_0x2AC0E4D8_CallerCancelState;
	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseFortniteInternal.Game_fort_playspace_component.$InitInstance
// (None)
// Parameters:

void UGame_fort_playspace_component::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_fort_playspace_component", "$InitInstance");

	Params::UGame_fort_playspace_component__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteInternal.Game_fort_playspace_component.$Block
// (None)
// Parameters:

void UGame_fort_playspace_component::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_fort_playspace_component", "$Block");

	Params::UGame_fort_playspace_component__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteInternal.Game_fort_playspace_component.$InitCDO
// (None)
// Parameters:

void UGame_fort_playspace_component::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_fort_playspace_component", "$InitCDO");

	Params::UGame_fort_playspace_component__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteInternal.Game_fortnite_building_component
// (None)

class UClass* UGame_fortnite_building_component::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Game_fortnite_building_component");

	return Clss;
}


// Game_fortnite_building_component VerseFortniteInternal.Default__Game_fortnite_building_component
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGame_fortnite_building_component* UGame_fortnite_building_component::GetDefaultObj()
{
	static class UGame_fortnite_building_component* Default = nullptr;

	if (!Default)
		Default = static_cast<UGame_fortnite_building_component*>(UGame_fortnite_building_component::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteInternal.Game_fortnite_building_component._L_2fFortnite_2ecom_2fGame_2ffortnite__building__component_N_RwasPlayerBuilt
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// uint8                              RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

uint8 UGame_fortnite_building_component::_L_2fFortnite_2ecom_2fGame_2ffortnite__building__component_N_RwasPlayerBuilt(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_fortnite_building_component", "_L_2fFortnite_2ecom_2fGame_2ffortnite__building__component_N_RwasPlayerBuilt");

	Params::UGame_fortnite_building_component__L_2fFortnite_2ecom_2fGame_2ffortnite__building__component_N_RwasPlayerBuilt_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortniteInternal.Game_fortnite_building_component._L_2fFortnite_2ecom_2fGame_2ffortnite__building__component_N_RsetCanBeReplaced_L_Nlogic_R
// (Native, Public, BlueprintCallable)
// Parameters:
// uint8                              __verse_0xB2CDDD72_Argument                                      (Parm, NoDestructor, HasGetValueTypeHash)

void UGame_fortnite_building_component::_L_2fFortnite_2ecom_2fGame_2ffortnite__building__component_N_RsetCanBeReplaced_L_Nlogic_R(uint8 __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_fortnite_building_component", "_L_2fFortnite_2ecom_2fGame_2ffortnite__building__component_N_RsetCanBeReplaced_L_Nlogic_R");

	Params::UGame_fortnite_building_component__L_2fFortnite_2ecom_2fGame_2ffortnite__building__component_N_RsetCanBeReplaced_L_Nlogic_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortniteInternal.Game_fortnite_building_component._L_2fFortnite_2ecom_2fGame_2ffortnite__building__component_N_RsetCanBeDamaged_L_Nlogic_R
// (Native, Public, BlueprintCallable)
// Parameters:
// uint8                              __verse_0xB2CDDD72_Argument                                      (Parm, NoDestructor, HasGetValueTypeHash)

void UGame_fortnite_building_component::_L_2fFortnite_2ecom_2fGame_2ffortnite__building__component_N_RsetCanBeDamaged_L_Nlogic_R(uint8 __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_fortnite_building_component", "_L_2fFortnite_2ecom_2fGame_2ffortnite__building__component_N_RsetCanBeDamaged_L_Nlogic_R");

	Params::UGame_fortnite_building_component__L_2fFortnite_2ecom_2fGame_2ffortnite__building__component_N_RsetCanBeDamaged_L_Nlogic_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortniteInternal.Game_fortnite_building_component._L_2fFortnite_2ecom_2fGame_2ffortnite__building__component_N_RcanBeReplaced
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// uint8                              RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

uint8 UGame_fortnite_building_component::_L_2fFortnite_2ecom_2fGame_2ffortnite__building__component_N_RcanBeReplaced(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_fortnite_building_component", "_L_2fFortnite_2ecom_2fGame_2ffortnite__building__component_N_RcanBeReplaced");

	Params::UGame_fortnite_building_component__L_2fFortnite_2ecom_2fGame_2ffortnite__building__component_N_RcanBeReplaced_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortniteInternal.Game_fortnite_building_component._L_2fFortnite_2ecom_2fGame_2ffortnite__building__component_N_RcanBeDamaged
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// uint8                              RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

uint8 UGame_fortnite_building_component::_L_2fFortnite_2ecom_2fGame_2ffortnite__building__component_N_RcanBeDamaged(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_fortnite_building_component", "_L_2fFortnite_2ecom_2fGame_2ffortnite__building__component_N_RcanBeDamaged");

	Params::UGame_fortnite_building_component__L_2fFortnite_2ecom_2fGame_2ffortnite__building__component_N_RcanBeDamaged_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortniteInternal.Game_fortnite_building_component.$InitInstance
// (None)
// Parameters:

void UGame_fortnite_building_component::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_fortnite_building_component", "$InitInstance");

	Params::UGame_fortnite_building_component__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteInternal.Game_fortnite_building_component.$Block
// (None)
// Parameters:

void UGame_fortnite_building_component::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_fortnite_building_component", "$Block");

	Params::UGame_fortnite_building_component__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteInternal.Game_fortnite_building_component.$InitCDO
// (None)
// Parameters:

void UGame_fortnite_building_component::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_fortnite_building_component", "$InitCDO");

	Params::UGame_fortnite_building_component__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteInternal.Game_Item_item_type
// (None)

class UClass* UGame_Item_item_type::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Game_Item_item_type");

	return Clss;
}


// Game_Item_item_type VerseFortniteInternal.Default__Game_Item_item_type
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGame_Item_item_type* UGame_Item_item_type::GetDefaultObj()
{
	static class UGame_Item_item_type* Default = nullptr;

	if (!Default)
		Default = static_cast<UGame_Item_item_type*>(UGame_Item_item_type::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteInternal.Game_Item_item_type.$InitInstance
// (None)
// Parameters:

void UGame_Item_item_type::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Item_item_type", "$InitInstance");

	Params::UGame_Item_item_type__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteInternal.Game_Item_item_type.$Block
// (None)
// Parameters:

void UGame_Item_item_type::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Item_item_type", "$Block");

	Params::UGame_Item_item_type__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteInternal.Game_Item_item_type.$InitCDO
// (None)
// Parameters:

void UGame_Item_item_type::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Item_item_type", "$InitCDO");

	Params::UGame_Item_item_type__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteInternal.Game_Item_player_pickup_component
// (None)

class UClass* UGame_Item_player_pickup_component::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Game_Item_player_pickup_component");

	return Clss;
}


// Game_Item_player_pickup_component VerseFortniteInternal.Default__Game_Item_player_pickup_component
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGame_Item_player_pickup_component* UGame_Item_player_pickup_component::GetDefaultObj()
{
	static class UGame_Item_player_pickup_component* Default = nullptr;

	if (!Default)
		Default = static_cast<UGame_Item_player_pickup_component*>(UGame_Item_player_pickup_component::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteInternal.Game_Item_player_pickup_component._L_2fFortnite_2ecom_2fGame_2fItem_2fplayer__pickup__component_N_RtossPickup_L_Nvector3_M_N_Qplayer__component_R
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FTuple_Lvector3_M_Qplayer__component_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UGame_Item_player_pickup_component::_L_2fFortnite_2ecom_2fGame_2fItem_2fplayer__pickup__component_N_RtossPickup_L_Nvector3_M_N_Qplayer__component_R(const struct FTuple_Lvector3_M_Qplayer__component_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Item_player_pickup_component", "_L_2fFortnite_2ecom_2fGame_2fItem_2fplayer__pickup__component_N_RtossPickup_L_Nvector3_M_N_Qplayer__component_R");

	Params::UGame_Item_player_pickup_component__L_2fFortnite_2ecom_2fGame_2fItem_2fplayer__pickup__component_N_RtossPickup_L_Nvector3_M_N_Qplayer__component_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortniteInternal.Game_Item_player_pickup_component._L_2fFortnite_2ecom_2fGame_2fItem_2fplayer__pickup__component_N_RgivePickupTo_L_Nplayer__component_R
// (Native, Public, BlueprintCallable)
// Parameters:
// class USimulation_player_component*__verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

void UGame_Item_player_pickup_component::_L_2fFortnite_2ecom_2fGame_2fItem_2fplayer__pickup__component_N_RgivePickupTo_L_Nplayer__component_R(class USimulation_player_component* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Item_player_pickup_component", "_L_2fFortnite_2ecom_2fGame_2fItem_2fplayer__pickup__component_N_RgivePickupTo_L_Nplayer__component_R");

	Params::UGame_Item_player_pickup_component__L_2fFortnite_2ecom_2fGame_2fItem_2fplayer__pickup__component_N_RgivePickupTo_L_Nplayer__component_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortniteInternal.Game_Item_player_pickup_component._L_2fFortnite_2ecom_2fGame_2fItem_2fplayer__pickup__component_N_RgetPrimaryItemType
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// class UGame_Item_item_type*        RetVal                                                           (ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

class UGame_Item_item_type* UGame_Item_player_pickup_component::_L_2fFortnite_2ecom_2fGame_2fItem_2fplayer__pickup__component_N_RgetPrimaryItemType(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Item_player_pickup_component", "_L_2fFortnite_2ecom_2fGame_2fItem_2fplayer__pickup__component_N_RgetPrimaryItemType");

	Params::UGame_Item_player_pickup_component__L_2fFortnite_2ecom_2fGame_2fItem_2fplayer__pickup__component_N_RgetPrimaryItemType_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortniteInternal.Game_Item_player_pickup_component._L_2fFortnite_2ecom_2fGame_2fItem_2fplayer__pickup__component_N_RgetNumOfItemType_L_Nitem__type_R
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UGame_Item_item_type*        __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UGame_Item_player_pickup_component::_L_2fFortnite_2ecom_2fGame_2fItem_2fplayer__pickup__component_N_RgetNumOfItemType_L_Nitem__type_R(class UGame_Item_item_type* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Item_player_pickup_component", "_L_2fFortnite_2ecom_2fGame_2fItem_2fplayer__pickup__component_N_RgetNumOfItemType_L_Nitem__type_R");

	Params::UGame_Item_player_pickup_component__L_2fFortnite_2ecom_2fGame_2fItem_2fplayer__pickup__component_N_RgetNumOfItemType_L_Nitem__type_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortniteInternal.Game_Item_player_pickup_component._L_2fFortnite_2ecom_2fGame_2fItem_2fplayer__pickup__component_N_RattemptPartialCollect_L_Nitem__type_M_Nint_M_Nplayer__component_R
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FTuple_Litem__type_Mint_Mplayer__component_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UGame_Item_player_pickup_component::_L_2fFortnite_2ecom_2fGame_2fItem_2fplayer__pickup__component_N_RattemptPartialCollect_L_Nitem__type_M_Nint_M_Nplayer__component_R(const struct FTuple_Litem__type_Mint_Mplayer__component_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Item_player_pickup_component", "_L_2fFortnite_2ecom_2fGame_2fItem_2fplayer__pickup__component_N_RattemptPartialCollect_L_Nitem__type_M_Nint_M_Nplayer__component_R");

	Params::UGame_Item_player_pickup_component__L_2fFortnite_2ecom_2fGame_2fItem_2fplayer__pickup__component_N_RattemptPartialCollect_L_Nitem__type_M_Nint_M_Nplayer__component_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortniteInternal.Game_Item_player_pickup_component.$InitInstance
// (None)
// Parameters:

void UGame_Item_player_pickup_component::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Item_player_pickup_component", "$InitInstance");

	Params::UGame_Item_player_pickup_component__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteInternal.Game_Item_player_pickup_component.$Block
// (None)
// Parameters:

void UGame_Item_player_pickup_component::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Item_player_pickup_component", "$Block");

	Params::UGame_Item_player_pickup_component__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteInternal.Game_Item_player_pickup_component.$InitCDO
// (None)
// Parameters:

void UGame_Item_player_pickup_component::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Item_player_pickup_component", "$InitCDO");

	Params::UGame_Item_player_pickup_component__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteInternal.Game_Item_PlayerPickupComponent
// (None)

class UClass* UGame_Item_PlayerPickupComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Game_Item_PlayerPickupComponent");

	return Clss;
}


// Game_Item_PlayerPickupComponent VerseFortniteInternal.Default__Game_Item_PlayerPickupComponent
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGame_Item_PlayerPickupComponent* UGame_Item_PlayerPickupComponent::GetDefaultObj()
{
	static class UGame_Item_PlayerPickupComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UGame_Item_PlayerPickupComponent*>(UGame_Item_PlayerPickupComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteInternal.Game_Item_PlayerPickupComponent._L_2fFortnite_2ecom_2fGame_2fItem_2fPlayerPickupComponent_N_RcreatePickup_L_Ncomponent_M_Nfort__item__definition_M_Nint_M_Nvector3_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lcomponent_Mfort__item__definition_Mint_Mvector3_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

FOptionalProperty_ UGame_Item_PlayerPickupComponent::_L_2fFortnite_2ecom_2fGame_2fItem_2fPlayerPickupComponent_N_RcreatePickup_L_Ncomponent_M_Nfort__item__definition_M_Nint_M_Nvector3_R(const struct FTuple_Lcomponent_Mfort__item__definition_Mint_Mvector3_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Item_PlayerPickupComponent", "_L_2fFortnite_2ecom_2fGame_2fItem_2fPlayerPickupComponent_N_RcreatePickup_L_Ncomponent_M_Nfort__item__definition_M_Nint_M_Nvector3_R");

	Params::UGame_Item_PlayerPickupComponent__L_2fFortnite_2ecom_2fGame_2fItem_2fPlayerPickupComponent_N_RcreatePickup_L_Ncomponent_M_Nfort__item__definition_M_Nint_M_Nvector3_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortniteInternal.Game_Item_PlayerPickupComponent.$InitCDO
// (None)
// Parameters:

void UGame_Item_PlayerPickupComponent::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Item_PlayerPickupComponent", "$InitCDO");

	Params::UGame_Item_PlayerPickupComponent__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteInternal.Game_Movement_projectile_movement_component
// (None)

class UClass* UGame_Movement_projectile_movement_component::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Game_Movement_projectile_movement_component");

	return Clss;
}


// Game_Movement_projectile_movement_component VerseFortniteInternal.Default__Game_Movement_projectile_movement_component
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGame_Movement_projectile_movement_component* UGame_Movement_projectile_movement_component::GetDefaultObj()
{
	static class UGame_Movement_projectile_movement_component* Default = nullptr;

	if (!Default)
		Default = static_cast<UGame_Movement_projectile_movement_component*>(UGame_Movement_projectile_movement_component::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteInternal.Game_Movement_projectile_movement_component._L_2fFortnite_2ecom_2fGame_2fMovement_2fprojectile__movement__component_N_RSetSpeed_L_Nfloat_R
// (Native, Public, BlueprintCallable)
// Parameters:
// double                             __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGame_Movement_projectile_movement_component::_L_2fFortnite_2ecom_2fGame_2fMovement_2fprojectile__movement__component_N_RSetSpeed_L_Nfloat_R(double __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Movement_projectile_movement_component", "_L_2fFortnite_2ecom_2fGame_2fMovement_2fprojectile__movement__component_N_RSetSpeed_L_Nfloat_R");

	Params::UGame_Movement_projectile_movement_component__L_2fFortnite_2ecom_2fGame_2fMovement_2fprojectile__movement__component_N_RSetSpeed_L_Nfloat_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortniteInternal.Game_Movement_projectile_movement_component._L_2fFortnite_2ecom_2fGame_2fMovement_2fprojectile__movement__component_N_RSetShouldBounce_L_Nlogic_R
// (Native, Public, BlueprintCallable)
// Parameters:
// uint8                              __verse_0xB2CDDD72_Argument                                      (Parm, NoDestructor, HasGetValueTypeHash)

void UGame_Movement_projectile_movement_component::_L_2fFortnite_2ecom_2fGame_2fMovement_2fprojectile__movement__component_N_RSetShouldBounce_L_Nlogic_R(uint8 __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Movement_projectile_movement_component", "_L_2fFortnite_2ecom_2fGame_2fMovement_2fprojectile__movement__component_N_RSetShouldBounce_L_Nlogic_R");

	Params::UGame_Movement_projectile_movement_component__L_2fFortnite_2ecom_2fGame_2fMovement_2fprojectile__movement__component_N_RSetShouldBounce_L_Nlogic_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortniteInternal.Game_Movement_projectile_movement_component._L_2fFortnite_2ecom_2fGame_2fMovement_2fprojectile__movement__component_N_RSetGravity_L_Nfloat_R
// (Native, Public, BlueprintCallable)
// Parameters:
// double                             __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGame_Movement_projectile_movement_component::_L_2fFortnite_2ecom_2fGame_2fMovement_2fprojectile__movement__component_N_RSetGravity_L_Nfloat_R(double __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Movement_projectile_movement_component", "_L_2fFortnite_2ecom_2fGame_2fMovement_2fprojectile__movement__component_N_RSetGravity_L_Nfloat_R");

	Params::UGame_Movement_projectile_movement_component__L_2fFortnite_2ecom_2fGame_2fMovement_2fprojectile__movement__component_N_RSetGravity_L_Nfloat_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortniteInternal.Game_Movement_projectile_movement_component._L_2fFortnite_2ecom_2fGame_2fMovement_2fprojectile__movement__component_N_RSetFriction_L_Nfloat_R
// (Native, Public, BlueprintCallable)
// Parameters:
// double                             __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGame_Movement_projectile_movement_component::_L_2fFortnite_2ecom_2fGame_2fMovement_2fprojectile__movement__component_N_RSetFriction_L_Nfloat_R(double __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Movement_projectile_movement_component", "_L_2fFortnite_2ecom_2fGame_2fMovement_2fprojectile__movement__component_N_RSetFriction_L_Nfloat_R");

	Params::UGame_Movement_projectile_movement_component__L_2fFortnite_2ecom_2fGame_2fMovement_2fprojectile__movement__component_N_RSetFriction_L_Nfloat_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortniteInternal.Game_Movement_projectile_movement_component._L_2fFortnite_2ecom_2fGame_2fMovement_2fprojectile__movement__component_N_RSetDirection_L_Nvector3_R
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FSpatialMath_vector3        __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)

void UGame_Movement_projectile_movement_component::_L_2fFortnite_2ecom_2fGame_2fMovement_2fprojectile__movement__component_N_RSetDirection_L_Nvector3_R(const struct FSpatialMath_vector3& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Movement_projectile_movement_component", "_L_2fFortnite_2ecom_2fGame_2fMovement_2fprojectile__movement__component_N_RSetDirection_L_Nvector3_R");

	Params::UGame_Movement_projectile_movement_component__L_2fFortnite_2ecom_2fGame_2fMovement_2fprojectile__movement__component_N_RSetDirection_L_Nvector3_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortniteInternal.Game_Movement_projectile_movement_component._L_2fFortnite_2ecom_2fGame_2fMovement_2fprojectile__movement__component_N_RSetBounciness_L_Nfloat_R
// (Native, Public, BlueprintCallable)
// Parameters:
// double                             __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

void UGame_Movement_projectile_movement_component::_L_2fFortnite_2ecom_2fGame_2fMovement_2fprojectile__movement__component_N_RSetBounciness_L_Nfloat_R(double __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Movement_projectile_movement_component", "_L_2fFortnite_2ecom_2fGame_2fMovement_2fprojectile__movement__component_N_RSetBounciness_L_Nfloat_R");

	Params::UGame_Movement_projectile_movement_component__L_2fFortnite_2ecom_2fGame_2fMovement_2fprojectile__movement__component_N_RSetBounciness_L_Nfloat_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortniteInternal.Game_Movement_projectile_movement_component.$InitInstance
// (None)
// Parameters:

void UGame_Movement_projectile_movement_component::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Movement_projectile_movement_component", "$InitInstance");

	Params::UGame_Movement_projectile_movement_component__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteInternal.Game_Movement_projectile_movement_component.$Block
// (None)
// Parameters:

void UGame_Movement_projectile_movement_component::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Movement_projectile_movement_component", "$Block");

	Params::UGame_Movement_projectile_movement_component__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteInternal.Game_Movement_projectile_movement_component.$InitCDO
// (None)
// Parameters:

void UGame_Movement_projectile_movement_component::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Movement_projectile_movement_component", "$InitCDO");

	Params::UGame_Movement_projectile_movement_component__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteInternal.Game_Player
// (None)

class UClass* UGame_Player::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Game_Player");

	return Clss;
}


// Game_Player VerseFortniteInternal.Default__Game_Player
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGame_Player* UGame_Player::GetDefaultObj()
{
	static class UGame_Player* Default = nullptr;

	if (!Default)
		Default = static_cast<UGame_Player*>(UGame_Player::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteInternal.Game_Player.Game_Player_player_team$OverrideFactory
// (Static, HasOutParams)
// Parameters:
// struct FGame_Player_player_team    RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap                              (ConstParm, Parm, ContainsInstancedReference)

struct FGame_Player_player_team UGame_Player::Game_Player_player_team_OverrideFactory(TMap<FVerseStringProperty_, uint8> __verse_0xFB48ED96__InitOverrideMap)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Player", "Game_Player_player_team$OverrideFactory");

	Params::UGame_Player_Game_Player_player_team_OverrideFactory_Params Parms{};

	Parms.__verse_0xFB48ED96__InitOverrideMap = __verse_0xFB48ED96__InitOverrideMap;

	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseFortniteInternal.Game_Player.Game_Player_player_team$Factory
// (Static, HasOutParams)
// Parameters:
// struct FGame_Player_player_team    RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

struct FGame_Player_player_team UGame_Player::Game_Player_player_team_Factory()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Player", "Game_Player_player_team$Factory");

	Params::UGame_Player_Game_Player_player_team_Factory_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

	return Parms.ReturnValue;

}


// Function VerseFortniteInternal.Game_Player.$InitCDO
// (None)
// Parameters:

void UGame_Player::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Player", "$InitCDO");

	Params::UGame_Player__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteInternal.Game_player_eliminated_result
// (None)

class UClass* UGame_player_eliminated_result::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Game_player_eliminated_result");

	return Clss;
}


// Game_player_eliminated_result VerseFortniteInternal.Default__Game_player_eliminated_result
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGame_player_eliminated_result* UGame_player_eliminated_result::GetDefaultObj()
{
	static class UGame_player_eliminated_result* Default = nullptr;

	if (!Default)
		Default = static_cast<UGame_player_eliminated_result*>(UGame_player_eliminated_result::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteInternal.Game_player_eliminated_result.$InitInstance
// (None)
// Parameters:

void UGame_player_eliminated_result::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_player_eliminated_result", "$InitInstance");

	Params::UGame_player_eliminated_result__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteInternal.Game_player_eliminated_result.$Block
// (None)
// Parameters:

void UGame_player_eliminated_result::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_player_eliminated_result", "$Block");

	Params::UGame_player_eliminated_result__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteInternal.Game_player_eliminated_result.$InitCDO
// (None)
// Parameters:

void UGame_player_eliminated_result::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_player_eliminated_result", "$InitCDO");

	Params::UGame_player_eliminated_result__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteInternal.Game_Player_fort_player_component
// (None)

class UClass* UGame_Player_fort_player_component::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Game_Player_fort_player_component");

	return Clss;
}


// Game_Player_fort_player_component VerseFortniteInternal.Default__Game_Player_fort_player_component
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGame_Player_fort_player_component* UGame_Player_fort_player_component::GetDefaultObj()
{
	static class UGame_Player_fort_player_component* Default = nullptr;

	if (!Default)
		Default = static_cast<UGame_Player_fort_player_component*>(UGame_Player_fort_player_component::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteInternal.Game_Player_fort_player_component._L_2fFortnite_2ecom_2fGame_2fPlayer_2ffort__player__component_N_RPushActiveState_L_N_Kchar_R
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FVerseStringProperty_              __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// uint8                              RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

uint8 UGame_Player_fort_player_component::_L_2fFortnite_2ecom_2fGame_2fPlayer_2ffort__player__component_N_RPushActiveState_L_N_Kchar_R(FVerseStringProperty_ __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Player_fort_player_component", "_L_2fFortnite_2ecom_2fGame_2fPlayer_2ffort__player__component_N_RPushActiveState_L_N_Kchar_R");

	Params::UGame_Player_fort_player_component__L_2fFortnite_2ecom_2fGame_2fPlayer_2ffort__player__component_N_RPushActiveState_L_N_Kchar_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortniteInternal.Game_Player_fort_player_component._L_2fFortnite_2ecom_2fGame_2fPlayer_2ffort__player__component_N_RPopActiveState_L_N_Kchar_R
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FVerseStringProperty_              __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// uint8                              RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

uint8 UGame_Player_fort_player_component::_L_2fFortnite_2ecom_2fGame_2fPlayer_2ffort__player__component_N_RPopActiveState_L_N_Kchar_R(FVerseStringProperty_ __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Player_fort_player_component", "_L_2fFortnite_2ecom_2fGame_2fPlayer_2ffort__player__component_N_RPopActiveState_L_N_Kchar_R");

	Params::UGame_Player_fort_player_component__L_2fFortnite_2ecom_2fGame_2fPlayer_2ffort__player__component_N_RPopActiveState_L_N_Kchar_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortniteInternal.Game_Player_fort_player_component._L_2fFortnite_2ecom_2fGame_2fPlayer_2ffort__player__component_N_RIsActive_L_N_Kchar_R
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// FVerseStringProperty_              __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// uint8                              RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

uint8 UGame_Player_fort_player_component::_L_2fFortnite_2ecom_2fGame_2fPlayer_2ffort__player__component_N_RIsActive_L_N_Kchar_R(FVerseStringProperty_ __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Player_fort_player_component", "_L_2fFortnite_2ecom_2fGame_2fPlayer_2ffort__player__component_N_RIsActive_L_N_Kchar_R");

	Params::UGame_Player_fort_player_component__L_2fFortnite_2ecom_2fGame_2fPlayer_2ffort__player__component_N_RIsActive_L_N_Kchar_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortniteInternal.Game_Player_fort_player_component._L_2fFortnite_2ecom_2fGame_2fPlayer_2ffort__player__component_N_RGetUniqueID
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FVerseStringProperty_              RetVal                                                           (Parm, OutParm, ReturnParm, HasGetValueTypeHash)

FVerseStringProperty_ UGame_Player_fort_player_component::_L_2fFortnite_2ecom_2fGame_2fPlayer_2ffort__player__component_N_RGetUniqueID(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Player_fort_player_component", "_L_2fFortnite_2ecom_2fGame_2fPlayer_2ffort__player__component_N_RGetUniqueID");

	Params::UGame_Player_fort_player_component__L_2fFortnite_2ecom_2fGame_2fPlayer_2ffort__player__component_N_RGetUniqueID_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortniteInternal.Game_Player_fort_player_component.$InitInstance
// (None)
// Parameters:

void UGame_Player_fort_player_component::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Player_fort_player_component", "$InitInstance");

	Params::UGame_Player_fort_player_component__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteInternal.Game_Player_fort_player_component.$Block
// (None)
// Parameters:

void UGame_Player_fort_player_component::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Player_fort_player_component", "$Block");

	Params::UGame_Player_fort_player_component__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteInternal.Game_Player_fort_player_component.$InitCDO
// (None)
// Parameters:

void UGame_Player_fort_player_component::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Player_fort_player_component", "$InitCDO");

	Params::UGame_Player_fort_player_component__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteInternal.Game_Player_player_start_component
// (None)

class UClass* UGame_Player_player_start_component::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Game_Player_player_start_component");

	return Clss;
}


// Game_Player_player_start_component VerseFortniteInternal.Default__Game_Player_player_start_component
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGame_Player_player_start_component* UGame_Player_player_start_component::GetDefaultObj()
{
	static class UGame_Player_player_start_component* Default = nullptr;

	if (!Default)
		Default = static_cast<UGame_Player_player_start_component*>(UGame_Player_player_start_component::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteInternal.Game_Player_player_start_component._L_2fFortnite_2ecom_2fGame_2fPlayer_2fplayer__start__component_N_RgetPosition
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FSpatialMath_vector3        RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

struct FSpatialMath_vector3 UGame_Player_player_start_component::_L_2fFortnite_2ecom_2fGame_2fPlayer_2fplayer__start__component_N_RgetPosition(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Player_player_start_component", "_L_2fFortnite_2ecom_2fGame_2fPlayer_2fplayer__start__component_N_RgetPosition");

	Params::UGame_Player_player_start_component__L_2fFortnite_2ecom_2fGame_2fPlayer_2fplayer__start__component_N_RgetPosition_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortniteInternal.Game_Player_player_start_component._L_2fFortnite_2ecom_2fGame_2fPlayer_2fplayer__start__component_N_RaddTags_L_N_K_Kchar_R
// (Native, Public, BlueprintCallable)
// Parameters:
// TArray<FVerseStringProperty_>      __verse_0xB2CDDD72_Argument                                      (Parm, ContainsInstancedReference)

void UGame_Player_player_start_component::_L_2fFortnite_2ecom_2fGame_2fPlayer_2fplayer__start__component_N_RaddTags_L_N_K_Kchar_R(const TArray<FVerseStringProperty_>& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Player_player_start_component", "_L_2fFortnite_2ecom_2fGame_2fPlayer_2fplayer__start__component_N_RaddTags_L_N_K_Kchar_R");

	Params::UGame_Player_player_start_component__L_2fFortnite_2ecom_2fGame_2fPlayer_2fplayer__start__component_N_RaddTags_L_N_K_Kchar_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortniteInternal.Game_Player_player_start_component.$InitInstance
// (None)
// Parameters:

void UGame_Player_player_start_component::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Player_player_start_component", "$InitInstance");

	Params::UGame_Player_player_start_component__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteInternal.Game_Player_player_start_component.$Block
// (None)
// Parameters:

void UGame_Player_player_start_component::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Player_player_start_component", "$Block");

	Params::UGame_Player_player_start_component__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteInternal.Game_Player_player_start_component.$InitCDO
// (None)
// Parameters:

void UGame_Player_player_start_component::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Player_player_start_component", "$InitCDO");

	Params::UGame_Player_player_start_component__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteInternal.Game_Player_PlayerAttributes
// (None)

class UClass* UGame_Player_PlayerAttributes::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Game_Player_PlayerAttributes");

	return Clss;
}


// Game_Player_PlayerAttributes VerseFortniteInternal.Default__Game_Player_PlayerAttributes
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGame_Player_PlayerAttributes* UGame_Player_PlayerAttributes::GetDefaultObj()
{
	static class UGame_Player_PlayerAttributes* Default = nullptr;

	if (!Default)
		Default = static_cast<UGame_Player_PlayerAttributes*>(UGame_Player_PlayerAttributes::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteInternal.Game_Player_PlayerAttributes._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerAttributes_N_RModifyNumericAttribute_L_Nplayer_M_NPlayerAttribute_M_NPlayerAttributeOperation_M_Nfloat_R
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FTuple_Lplayer_MPlayerAttribute_MPlayerAttributeOperation_Mfloat_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UGame_Player_PlayerAttributes::_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerAttributes_N_RModifyNumericAttribute_L_Nplayer_M_NPlayerAttribute_M_NPlayerAttributeOperation_M_Nfloat_R(const struct FTuple_Lplayer_MPlayerAttribute_MPlayerAttributeOperation_Mfloat_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Player_PlayerAttributes", "_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerAttributes_N_RModifyNumericAttribute_L_Nplayer_M_NPlayerAttribute_M_NPlayerAttributeOperation_M_Nfloat_R");

	Params::UGame_Player_PlayerAttributes__L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerAttributes_N_RModifyNumericAttribute_L_Nplayer_M_NPlayerAttribute_M_NPlayerAttributeOperation_M_Nfloat_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortniteInternal.Game_Player_PlayerAttributes._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerAttributes_N_RGetNumericAttributeValue_L_Nplayer_M_NPlayerAttribute_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lplayer_MPlayerAttribute_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// double                             RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

double UGame_Player_PlayerAttributes::_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerAttributes_N_RGetNumericAttributeValue_L_Nplayer_M_NPlayerAttribute_R(const struct FTuple_Lplayer_MPlayerAttribute_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Player_PlayerAttributes", "_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerAttributes_N_RGetNumericAttributeValue_L_Nplayer_M_NPlayerAttribute_R");

	Params::UGame_Player_PlayerAttributes__L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerAttributes_N_RGetNumericAttributeValue_L_Nplayer_M_NPlayerAttribute_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortniteInternal.Game_Player_PlayerAttributes._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerAttributes_N_RAddToNumericAttribute_L_Nplayer_M_NPlayerAttribute_M_Nfloat_R
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FTuple_Lplayer_MPlayerAttribute_Mfloat_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UGame_Player_PlayerAttributes::_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerAttributes_N_RAddToNumericAttribute_L_Nplayer_M_NPlayerAttribute_M_Nfloat_R(const struct FTuple_Lplayer_MPlayerAttribute_Mfloat_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Player_PlayerAttributes", "_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerAttributes_N_RAddToNumericAttribute_L_Nplayer_M_NPlayerAttribute_M_Nfloat_R");

	Params::UGame_Player_PlayerAttributes__L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerAttributes_N_RAddToNumericAttribute_L_Nplayer_M_NPlayerAttribute_M_Nfloat_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortniteInternal.Game_Player_PlayerAttributes.$InitCDO
// (None)
// Parameters:

void UGame_Player_PlayerAttributes::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Player_PlayerAttributes", "$InitCDO");

	Params::UGame_Player_PlayerAttributes__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteInternal.Game_Player_PlayerInventory
// (None)

class UClass* UGame_Player_PlayerInventory::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Game_Player_PlayerInventory");

	return Clss;
}


// Game_Player_PlayerInventory VerseFortniteInternal.Default__Game_Player_PlayerInventory
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGame_Player_PlayerInventory* UGame_Player_PlayerInventory::GetDefaultObj()
{
	static class UGame_Player_PlayerInventory* Default = nullptr;

	if (!Default)
		Default = static_cast<UGame_Player_PlayerInventory*>(UGame_Player_PlayerInventory::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteInternal.Game_Player_PlayerInventory._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerInventory_N_RTryAddToInventory_L_Nplayer_M_N_Kchar_M_Nint_M_Nlogic_R
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FTuple_Lplayer_M_Kchar_Mint_Mlogic_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UGame_Player_PlayerInventory::_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerInventory_N_RTryAddToInventory_L_Nplayer_M_N_Kchar_M_Nint_M_Nlogic_R(const struct FTuple_Lplayer_M_Kchar_Mint_Mlogic_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Player_PlayerInventory", "_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerInventory_N_RTryAddToInventory_L_Nplayer_M_N_Kchar_M_Nint_M_Nlogic_R");

	Params::UGame_Player_PlayerInventory__L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerInventory_N_RTryAddToInventory_L_Nplayer_M_N_Kchar_M_Nint_M_Nlogic_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortniteInternal.Game_Player_PlayerInventory._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerInventory_N_RTryAddItemToInventory_L_Nplayer_M_Nfort__item__definition_M_Nint_M_Nlogic_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lplayer_Mfort__item__definition_Mint_Mlogic_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionalProperty_ UGame_Player_PlayerInventory::_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerInventory_N_RTryAddItemToInventory_L_Nplayer_M_Nfort__item__definition_M_Nint_M_Nlogic_R(const struct FTuple_Lplayer_Mfort__item__definition_Mint_Mlogic_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Player_PlayerInventory", "_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerInventory_N_RTryAddItemToInventory_L_Nplayer_M_Nfort__item__definition_M_Nint_M_Nlogic_R");

	Params::UGame_Player_PlayerInventory__L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerInventory_N_RTryAddItemToInventory_L_Nplayer_M_Nfort__item__definition_M_Nint_M_Nlogic_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortniteInternal.Game_Player_PlayerInventory._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerInventory_N_RRemoveFromInventory_L_Nplayer_M_N_Kchar_M_Nint_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lplayer_M_Kchar_Mint_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// uint8                              RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

uint8 UGame_Player_PlayerInventory::_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerInventory_N_RRemoveFromInventory_L_Nplayer_M_N_Kchar_M_Nint_R(const struct FTuple_Lplayer_M_Kchar_Mint_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Player_PlayerInventory", "_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerInventory_N_RRemoveFromInventory_L_Nplayer_M_N_Kchar_M_Nint_R");

	Params::UGame_Player_PlayerInventory__L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerInventory_N_RRemoveFromInventory_L_Nplayer_M_N_Kchar_M_Nint_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortniteInternal.Game_Player_PlayerInventory._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerInventory_N_RClearDroppableItems_L_Nplayer_R
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USimulation_player*          __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

void UGame_Player_PlayerInventory::_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerInventory_N_RClearDroppableItems_L_Nplayer_R(class USimulation_player* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Player_PlayerInventory", "_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerInventory_N_RClearDroppableItems_L_Nplayer_R");

	Params::UGame_Player_PlayerInventory__L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerInventory_N_RClearDroppableItems_L_Nplayer_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortniteInternal.Game_Player_PlayerInventory.$InitCDO
// (None)
// Parameters:

void UGame_Player_PlayerInventory::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Player_PlayerInventory", "$InitCDO");

	Params::UGame_Player_PlayerInventory__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteInternal.Game_Player_PlayerInvulnerable
// (None)

class UClass* UGame_Player_PlayerInvulnerable::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Game_Player_PlayerInvulnerable");

	return Clss;
}


// Game_Player_PlayerInvulnerable VerseFortniteInternal.Default__Game_Player_PlayerInvulnerable
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGame_Player_PlayerInvulnerable* UGame_Player_PlayerInvulnerable::GetDefaultObj()
{
	static class UGame_Player_PlayerInvulnerable* Default = nullptr;

	if (!Default)
		Default = static_cast<UGame_Player_PlayerInvulnerable*>(UGame_Player_PlayerInvulnerable::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteInternal.Game_Player_PlayerInvulnerable._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerInvulnerable_N_RSetPlayerInvulnerability_L_Nplayer_M_Nlogic_R
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FTuple_Lplayer_Mlogic_R     __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UGame_Player_PlayerInvulnerable::_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerInvulnerable_N_RSetPlayerInvulnerability_L_Nplayer_M_Nlogic_R(const struct FTuple_Lplayer_Mlogic_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Player_PlayerInvulnerable", "_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerInvulnerable_N_RSetPlayerInvulnerability_L_Nplayer_M_Nlogic_R");

	Params::UGame_Player_PlayerInvulnerable__L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerInvulnerable_N_RSetPlayerInvulnerability_L_Nplayer_M_Nlogic_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortniteInternal.Game_Player_PlayerInvulnerable._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerInvulnerable_N_RIsPlayerInvulnerable_L_Nplayer_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class USimulation_player*          __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionalProperty_ UGame_Player_PlayerInvulnerable::_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerInvulnerable_N_RIsPlayerInvulnerable_L_Nplayer_R(class USimulation_player* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Player_PlayerInvulnerable", "_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerInvulnerable_N_RIsPlayerInvulnerable_L_Nplayer_R");

	Params::UGame_Player_PlayerInvulnerable__L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerInvulnerable_N_RIsPlayerInvulnerable_L_Nplayer_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortniteInternal.Game_Player_PlayerInvulnerable.$InitCDO
// (None)
// Parameters:

void UGame_Player_PlayerInvulnerable::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Player_PlayerInvulnerable", "$InitCDO");

	Params::UGame_Player_PlayerInvulnerable__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteInternal.Game_Player_PlayerSpectator
// (None)

class UClass* UGame_Player_PlayerSpectator::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Game_Player_PlayerSpectator");

	return Clss;
}


// Game_Player_PlayerSpectator VerseFortniteInternal.Default__Game_Player_PlayerSpectator
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGame_Player_PlayerSpectator* UGame_Player_PlayerSpectator::GetDefaultObj()
{
	static class UGame_Player_PlayerSpectator* Default = nullptr;

	if (!Default)
		Default = static_cast<UGame_Player_PlayerSpectator*>(UGame_Player_PlayerSpectator::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteInternal.Game_Player_PlayerSpectator._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerSpectator_N_RSpectatePlayer_L_Nplayer_M_Nplayer_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lplayer_Mplayer_R    __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionalProperty_ UGame_Player_PlayerSpectator::_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerSpectator_N_RSpectatePlayer_L_Nplayer_M_Nplayer_R(const struct FTuple_Lplayer_Mplayer_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Player_PlayerSpectator", "_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerSpectator_N_RSpectatePlayer_L_Nplayer_M_Nplayer_R");

	Params::UGame_Player_PlayerSpectator__L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerSpectator_N_RSpectatePlayer_L_Nplayer_M_Nplayer_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortniteInternal.Game_Player_PlayerSpectator._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerSpectator_N_RSpectateEliminator_L_Nplayer_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class USimulation_player*          __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionalProperty_ UGame_Player_PlayerSpectator::_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerSpectator_N_RSpectateEliminator_L_Nplayer_R(class USimulation_player* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Player_PlayerSpectator", "_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerSpectator_N_RSpectateEliminator_L_Nplayer_R");

	Params::UGame_Player_PlayerSpectator__L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerSpectator_N_RSpectateEliminator_L_Nplayer_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortniteInternal.Game_Player_PlayerSpectator._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerSpectator_N_RSetSpectator_L_Nplayer_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class USimulation_player*          __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionalProperty_ UGame_Player_PlayerSpectator::_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerSpectator_N_RSetSpectator_L_Nplayer_R(class USimulation_player* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Player_PlayerSpectator", "_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerSpectator_N_RSetSpectator_L_Nplayer_R");

	Params::UGame_Player_PlayerSpectator__L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerSpectator_N_RSetSpectator_L_Nplayer_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortniteInternal.Game_Player_PlayerSpectator._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerSpectator_N_RIsSpectator_L_Nplayer_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class USimulation_player*          __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionalProperty_ UGame_Player_PlayerSpectator::_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerSpectator_N_RIsSpectator_L_Nplayer_R(class USimulation_player* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Player_PlayerSpectator", "_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerSpectator_N_RIsSpectator_L_Nplayer_R");

	Params::UGame_Player_PlayerSpectator__L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerSpectator_N_RIsSpectator_L_Nplayer_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortniteInternal.Game_Player_PlayerSpectator._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerSpectator_N_RGetPlayersSpectatingTarget_L_Nplayer_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class USimulation_player*          __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// TArray<class USimulation_player*>  RetVal                                                           (Parm, OutParm, ReturnParm, ContainsInstancedReference)

TArray<class USimulation_player*> UGame_Player_PlayerSpectator::_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerSpectator_N_RGetPlayersSpectatingTarget_L_Nplayer_R(class USimulation_player* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Player_PlayerSpectator", "_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerSpectator_N_RGetPlayersSpectatingTarget_L_Nplayer_R");

	Params::UGame_Player_PlayerSpectator__L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerSpectator_N_RGetPlayersSpectatingTarget_L_Nplayer_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortniteInternal.Game_Player_PlayerSpectator.$InitCDO
// (None)
// Parameters:

void UGame_Player_PlayerSpectator::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Player_PlayerSpectator", "$InitCDO");

	Params::UGame_Player_PlayerSpectator__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteInternal.Game_Player_PlayerStartComponent
// (None)

class UClass* UGame_Player_PlayerStartComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Game_Player_PlayerStartComponent");

	return Clss;
}


// Game_Player_PlayerStartComponent VerseFortniteInternal.Default__Game_Player_PlayerStartComponent
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGame_Player_PlayerStartComponent* UGame_Player_PlayerStartComponent::GetDefaultObj()
{
	static class UGame_Player_PlayerStartComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UGame_Player_PlayerStartComponent*>(UGame_Player_PlayerStartComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteInternal.Game_Player_PlayerStartComponent._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerStartComponent_N_RfindAllInPlayspaceWithTags_L_Ncomponent_M_N_K_Kchar_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lcomponent_M_K_Kchar_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// TArray<class UGame_Player_player_start_component*>RetVal                                                           (Parm, OutParm, ReturnParm, ContainsInstancedReference)

TArray<class UGame_Player_player_start_component*> UGame_Player_PlayerStartComponent::_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerStartComponent_N_RfindAllInPlayspaceWithTags_L_Ncomponent_M_N_K_Kchar_R(const struct FTuple_Lcomponent_M_K_Kchar_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Player_PlayerStartComponent", "_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerStartComponent_N_RfindAllInPlayspaceWithTags_L_Ncomponent_M_N_K_Kchar_R");

	Params::UGame_Player_PlayerStartComponent__L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerStartComponent_N_RfindAllInPlayspaceWithTags_L_Ncomponent_M_N_K_Kchar_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortniteInternal.Game_Player_PlayerStartComponent.$InitCDO
// (None)
// Parameters:

void UGame_Player_PlayerStartComponent::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Player_PlayerStartComponent", "$InitCDO");

	Params::UGame_Player_PlayerStartComponent__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteInternal.Game_Player_PlayerStasis
// (None)

class UClass* UGame_Player_PlayerStasis::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Game_Player_PlayerStasis");

	return Clss;
}


// Game_Player_PlayerStasis VerseFortniteInternal.Default__Game_Player_PlayerStasis
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGame_Player_PlayerStasis* UGame_Player_PlayerStasis::GetDefaultObj()
{
	static class UGame_Player_PlayerStasis* Default = nullptr;

	if (!Default)
		Default = static_cast<UGame_Player_PlayerStasis*>(UGame_Player_PlayerStasis::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteInternal.Game_Player_PlayerStasis._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerStasis_N_RReleaseFromStasis_L_Nplayer_R
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USimulation_player*          __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

void UGame_Player_PlayerStasis::_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerStasis_N_RReleaseFromStasis_L_Nplayer_R(class USimulation_player* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Player_PlayerStasis", "_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerStasis_N_RReleaseFromStasis_L_Nplayer_R");

	Params::UGame_Player_PlayerStasis__L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerStasis_N_RReleaseFromStasis_L_Nplayer_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortniteInternal.Game_Player_PlayerStasis._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerStasis_N_RPutInStasisAdvanced_L_Nplayer_M_Nlogic_M_Nlogic_M_Nlogic_R
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FTuple_Lplayer_Mlogic_Mlogic_Mlogic_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UGame_Player_PlayerStasis::_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerStasis_N_RPutInStasisAdvanced_L_Nplayer_M_Nlogic_M_Nlogic_M_Nlogic_R(const struct FTuple_Lplayer_Mlogic_Mlogic_Mlogic_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Player_PlayerStasis", "_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerStasis_N_RPutInStasisAdvanced_L_Nplayer_M_Nlogic_M_Nlogic_M_Nlogic_R");

	Params::UGame_Player_PlayerStasis__L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerStasis_N_RPutInStasisAdvanced_L_Nplayer_M_Nlogic_M_Nlogic_M_Nlogic_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortniteInternal.Game_Player_PlayerStasis._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerStasis_N_RPutInStasis_L_Nplayer_R
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USimulation_player*          __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

void UGame_Player_PlayerStasis::_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerStasis_N_RPutInStasis_L_Nplayer_R(class USimulation_player* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Player_PlayerStasis", "_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerStasis_N_RPutInStasis_L_Nplayer_R");

	Params::UGame_Player_PlayerStasis__L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerStasis_N_RPutInStasis_L_Nplayer_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortniteInternal.Game_Player_PlayerStasis.$InitCDO
// (None)
// Parameters:

void UGame_Player_PlayerStasis::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Player_PlayerStasis", "$InitCDO");

	Params::UGame_Player_PlayerStasis__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteInternal.Game_Player_PlayerStatus
// (None)

class UClass* UGame_Player_PlayerStatus::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Game_Player_PlayerStatus");

	return Clss;
}


// Game_Player_PlayerStatus VerseFortniteInternal.Default__Game_Player_PlayerStatus
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGame_Player_PlayerStatus* UGame_Player_PlayerStatus::GetDefaultObj()
{
	static class UGame_Player_PlayerStatus* Default = nullptr;

	if (!Default)
		Default = static_cast<UGame_Player_PlayerStatus*>(UGame_Player_PlayerStatus::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteInternal.Game_Player_PlayerStatus._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerStatus_N_RgetStatus_L_Nplayer__component_M_Nplayer__status__type_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lplayer__component_Mplayer__status__type_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// uint8                              RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

uint8 UGame_Player_PlayerStatus::_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerStatus_N_RgetStatus_L_Nplayer__component_M_Nplayer__status__type_R(const struct FTuple_Lplayer__component_Mplayer__status__type_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Player_PlayerStatus", "_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerStatus_N_RgetStatus_L_Nplayer__component_M_Nplayer__status__type_R");

	Params::UGame_Player_PlayerStatus__L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerStatus_N_RgetStatus_L_Nplayer__component_M_Nplayer__status__type_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortniteInternal.Game_Player_PlayerStatus.$InitCDO
// (None)
// Parameters:

void UGame_Player_PlayerStatus::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Player_PlayerStatus", "$InitCDO");

	Params::UGame_Player_PlayerStatus__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteInternal.Game_Player_PlayerTeam
// (None)

class UClass* UGame_Player_PlayerTeam::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Game_Player_PlayerTeam");

	return Clss;
}


// Game_Player_PlayerTeam VerseFortniteInternal.Default__Game_Player_PlayerTeam
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGame_Player_PlayerTeam* UGame_Player_PlayerTeam::GetDefaultObj()
{
	static class UGame_Player_PlayerTeam* Default = nullptr;

	if (!Default)
		Default = static_cast<UGame_Player_PlayerTeam*>(UGame_Player_PlayerTeam::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteInternal.Game_Player_PlayerTeam._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RSetTeam_L_Nplayer_M_Nplayer__team_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lplayer_Mplayer__team_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// uint8                              RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

uint8 UGame_Player_PlayerTeam::_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RSetTeam_L_Nplayer_M_Nplayer__team_R(const struct FTuple_Lplayer_Mplayer__team_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Player_PlayerTeam", "_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RSetTeam_L_Nplayer_M_Nplayer__team_R");

	Params::UGame_Player_PlayerTeam__L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RSetTeam_L_Nplayer_M_Nplayer__team_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortniteInternal.Game_Player_PlayerTeam._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RPickTeam_L_Nplayer_M_Nplayer__team_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lplayer_Mplayer__team_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FGame_Player_player_team    RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

struct FGame_Player_player_team UGame_Player_PlayerTeam::_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RPickTeam_L_Nplayer_M_Nplayer__team_R(const struct FTuple_Lplayer_Mplayer__team_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Player_PlayerTeam", "_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RPickTeam_L_Nplayer_M_Nplayer__team_R");

	Params::UGame_Player_PlayerTeam__L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RPickTeam_L_Nplayer_M_Nplayer__team_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortniteInternal.Game_Player_PlayerTeam._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RGetTeamSize_L_Nplayer__team_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGame_Player_player_team    __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UGame_Player_PlayerTeam::_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RGetTeamSize_L_Nplayer__team_R(const struct FGame_Player_player_team& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Player_PlayerTeam", "_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RGetTeamSize_L_Nplayer__team_R");

	Params::UGame_Player_PlayerTeam__L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RGetTeamSize_L_Nplayer__team_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortniteInternal.Game_Player_PlayerTeam._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RGetTeamMembers_L_Nplayer__team_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGame_Player_player_team    __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// TArray<class USimulation_player*>  RetVal                                                           (Parm, OutParm, ReturnParm, ContainsInstancedReference)

TArray<class USimulation_player*> UGame_Player_PlayerTeam::_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RGetTeamMembers_L_Nplayer__team_R(const struct FGame_Player_player_team& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Player_PlayerTeam", "_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RGetTeamMembers_L_Nplayer__team_R");

	Params::UGame_Player_PlayerTeam__L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RGetTeamMembers_L_Nplayer__team_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortniteInternal.Game_Player_PlayerTeam._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RGetTeamColor_L_Nplayer__team_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGame_Player_player_team    __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FColors_color               RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

struct FColors_color UGame_Player_PlayerTeam::_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RGetTeamColor_L_Nplayer__team_R(const struct FGame_Player_player_team& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Player_PlayerTeam", "_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RGetTeamColor_L_Nplayer__team_R");

	Params::UGame_Player_PlayerTeam__L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RGetTeamColor_L_Nplayer__team_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortniteInternal.Game_Player_PlayerTeam._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RGetTeam_L_Nplayer_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class USimulation_player*          __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// struct FGame_Player_player_team    RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

struct FGame_Player_player_team UGame_Player_PlayerTeam::_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RGetTeam_L_Nplayer_R(class USimulation_player* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Player_PlayerTeam", "_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RGetTeam_L_Nplayer_R");

	Params::UGame_Player_PlayerTeam__L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RGetTeam_L_Nplayer_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortniteInternal.Game_Player_PlayerTeam._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RGetNextTeam_L_Nplayer__team_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGame_Player_player_team    __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// struct FGame_Player_player_team    RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

struct FGame_Player_player_team UGame_Player_PlayerTeam::_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RGetNextTeam_L_Nplayer__team_R(const struct FGame_Player_player_team& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Player_PlayerTeam", "_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RGetNextTeam_L_Nplayer__team_R");

	Params::UGame_Player_PlayerTeam__L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RGetNextTeam_L_Nplayer__team_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortniteInternal.Game_Player_PlayerTeam._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RGetInvalidTeam
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FGame_Player_player_team    RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

struct FGame_Player_player_team UGame_Player_PlayerTeam::_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RGetInvalidTeam(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Player_PlayerTeam", "_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RGetInvalidTeam");

	Params::UGame_Player_PlayerTeam__L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RGetInvalidTeam_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortniteInternal.Game_Player_PlayerTeam._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RGetFirstTeam
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// struct FGame_Player_player_team    RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)

struct FGame_Player_player_team UGame_Player_PlayerTeam::_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RGetFirstTeam(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Player_PlayerTeam", "_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RGetFirstTeam");

	Params::UGame_Player_PlayerTeam__L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RGetFirstTeam_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortniteInternal.Game_Player_PlayerTeam._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_REquals_L_Nplayer__team_M_Nplayer__team_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lplayer__team_Mplayer__team_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// uint8                              RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

uint8 UGame_Player_PlayerTeam::_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_REquals_L_Nplayer__team_M_Nplayer__team_R(const struct FTuple_Lplayer__team_Mplayer__team_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Player_PlayerTeam", "_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_REquals_L_Nplayer__team_M_Nplayer__team_R");

	Params::UGame_Player_PlayerTeam__L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_REquals_L_Nplayer__team_M_Nplayer__team_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortniteInternal.Game_Player_PlayerTeam._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RContainsHumanPlayers_L_Nplayer__team_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FGame_Player_player_team    __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

FOptionalProperty_ UGame_Player_PlayerTeam::_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RContainsHumanPlayers_L_Nplayer__team_R(const struct FGame_Player_player_team& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Player_PlayerTeam", "_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RContainsHumanPlayers_L_Nplayer__team_R");

	Params::UGame_Player_PlayerTeam__L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTeam_N_RContainsHumanPlayers_L_Nplayer__team_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortniteInternal.Game_Player_PlayerTeam.$InitCDO
// (None)
// Parameters:

void UGame_Player_PlayerTeam::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Player_PlayerTeam", "$InitCDO");

	Params::UGame_Player_PlayerTeam__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteInternal.Game_Player_PlayerTravel
// (None)

class UClass* UGame_Player_PlayerTravel::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Game_Player_PlayerTravel");

	return Clss;
}


// Game_Player_PlayerTravel VerseFortniteInternal.Default__Game_Player_PlayerTravel
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGame_Player_PlayerTravel* UGame_Player_PlayerTravel::GetDefaultObj()
{
	static class UGame_Player_PlayerTravel* Default = nullptr;

	if (!Default)
		Default = static_cast<UGame_Player_PlayerTravel*>(UGame_Player_PlayerTravel::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteInternal.Game_Player_PlayerTravel._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTravel_N_RSendToLobby_L_Nplayer_R
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// class USimulation_player*          __verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)

void UGame_Player_PlayerTravel::_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTravel_N_RSendToLobby_L_Nplayer_R(class USimulation_player* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Player_PlayerTravel", "_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTravel_N_RSendToLobby_L_Nplayer_R");

	Params::UGame_Player_PlayerTravel__L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerTravel_N_RSendToLobby_L_Nplayer_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortniteInternal.Game_Player_PlayerTravel.$InitCDO
// (None)
// Parameters:

void UGame_Player_PlayerTravel::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Player_PlayerTravel", "$InitCDO");

	Params::UGame_Player_PlayerTravel__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteInternal.Game_Player_PlayerVisibility
// (None)

class UClass* UGame_Player_PlayerVisibility::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Game_Player_PlayerVisibility");

	return Clss;
}


// Game_Player_PlayerVisibility VerseFortniteInternal.Default__Game_Player_PlayerVisibility
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGame_Player_PlayerVisibility* UGame_Player_PlayerVisibility::GetDefaultObj()
{
	static class UGame_Player_PlayerVisibility* Default = nullptr;

	if (!Default)
		Default = static_cast<UGame_Player_PlayerVisibility*>(UGame_Player_PlayerVisibility::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteInternal.Game_Player_PlayerVisibility._L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerVisibility_N_RSetIsHidden_L_Nplayer_M_Nlogic_R
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FTuple_Lplayer_Mlogic_R     __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UGame_Player_PlayerVisibility::_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerVisibility_N_RSetIsHidden_L_Nplayer_M_Nlogic_R(const struct FTuple_Lplayer_Mlogic_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Player_PlayerVisibility", "_L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerVisibility_N_RSetIsHidden_L_Nplayer_M_Nlogic_R");

	Params::UGame_Player_PlayerVisibility__L_2fFortnite_2ecom_2fGame_2fPlayer_2fPlayerVisibility_N_RSetIsHidden_L_Nplayer_M_Nlogic_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortniteInternal.Game_Player_PlayerVisibility.$InitCDO
// (None)
// Parameters:

void UGame_Player_PlayerVisibility::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_Player_PlayerVisibility", "$InitCDO");

	Params::UGame_Player_PlayerVisibility__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteInternal.Game_stat_container
// (None)

class UClass* UGame_stat_container::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Game_stat_container");

	return Clss;
}


// Game_stat_container VerseFortniteInternal.Default__Game_stat_container
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGame_stat_container* UGame_stat_container::GetDefaultObj()
{
	static class UGame_stat_container* Default = nullptr;

	if (!Default)
		Default = static_cast<UGame_stat_container*>(UGame_stat_container::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteInternal.Game_stat_container._L_2fFortnite_2ecom_2fGame_2fstat__container_N_RSetStatValue_L_Nint_M_Nint_R
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lint_Mint_R          __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// uint8                              RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

uint8 UGame_stat_container::_L_2fFortnite_2ecom_2fGame_2fstat__container_N_RSetStatValue_L_Nint_M_Nint_R(const struct FTuple_Lint_Mint_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_stat_container", "_L_2fFortnite_2ecom_2fGame_2fstat__container_N_RSetStatValue_L_Nint_M_Nint_R");

	Params::UGame_stat_container__L_2fFortnite_2ecom_2fGame_2fstat__container_N_RSetStatValue_L_Nint_M_Nint_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortniteInternal.Game_stat_container._L_2fFortnite_2ecom_2fGame_2fstat__container_N_RIncrementStat_L_Nint_M_Nint_R
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lint_Mint_R          __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// uint8                              RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

uint8 UGame_stat_container::_L_2fFortnite_2ecom_2fGame_2fstat__container_N_RIncrementStat_L_Nint_M_Nint_R(const struct FTuple_Lint_Mint_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_stat_container", "_L_2fFortnite_2ecom_2fGame_2fstat__container_N_RIncrementStat_L_Nint_M_Nint_R");

	Params::UGame_stat_container__L_2fFortnite_2ecom_2fGame_2fstat__container_N_RIncrementStat_L_Nint_M_Nint_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortniteInternal.Game_stat_container._L_2fFortnite_2ecom_2fGame_2fstat__container_N_RGetStatValue_L_Nint_R
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int64                              __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UGame_stat_container::_L_2fFortnite_2ecom_2fGame_2fstat__container_N_RGetStatValue_L_Nint_R(int64 __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_stat_container", "_L_2fFortnite_2ecom_2fGame_2fstat__container_N_RGetStatValue_L_Nint_R");

	Params::UGame_stat_container__L_2fFortnite_2ecom_2fGame_2fstat__container_N_RGetStatValue_L_Nint_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortniteInternal.Game_stat_container.$InitInstance
// (None)
// Parameters:

void UGame_stat_container::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_stat_container", "$InitInstance");

	Params::UGame_stat_container__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteInternal.Game_stat_container.$Block
// (None)
// Parameters:

void UGame_stat_container::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_stat_container", "$Block");

	Params::UGame_stat_container__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteInternal.Game_stat_container.$InitCDO
// (None)
// Parameters:

void UGame_stat_container::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_stat_container", "$InitCDO");

	Params::UGame_stat_container__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteInternal.Game_match_stats
// (None)

class UClass* UGame_match_stats::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Game_match_stats");

	return Clss;
}


// Game_match_stats VerseFortniteInternal.Default__Game_match_stats
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGame_match_stats* UGame_match_stats::GetDefaultObj()
{
	static class UGame_match_stats* Default = nullptr;

	if (!Default)
		Default = static_cast<UGame_match_stats*>(UGame_match_stats::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteInternal.Game_match_stats._L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RSetTeamStat_L_Nplayer__team_M_Nint_M_Nint_R
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FTuple_Lplayer__team_Mint_Mint_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UGame_match_stats::_L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RSetTeamStat_L_Nplayer__team_M_Nint_M_Nint_R(const struct FTuple_Lplayer__team_Mint_Mint_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_match_stats", "_L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RSetTeamStat_L_Nplayer__team_M_Nint_M_Nint_R");

	Params::UGame_match_stats__L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RSetTeamStat_L_Nplayer__team_M_Nint_M_Nint_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortniteInternal.Game_match_stats._L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RSetPlayerStat_L_Nplayer_M_Nint_M_Nint_R
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FTuple_Lplayer_Mint_Mint_R  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UGame_match_stats::_L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RSetPlayerStat_L_Nplayer_M_Nint_M_Nint_R(const struct FTuple_Lplayer_Mint_Mint_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_match_stats", "_L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RSetPlayerStat_L_Nplayer_M_Nint_M_Nint_R");

	Params::UGame_match_stats__L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RSetPlayerStat_L_Nplayer_M_Nint_M_Nint_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortniteInternal.Game_match_stats._L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RSetMatchStat_L_Nint_M_Nint_R
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FTuple_Lint_Mint_R          __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UGame_match_stats::_L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RSetMatchStat_L_Nint_M_Nint_R(const struct FTuple_Lint_Mint_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_match_stats", "_L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RSetMatchStat_L_Nint_M_Nint_R");

	Params::UGame_match_stats__L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RSetMatchStat_L_Nint_M_Nint_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortniteInternal.Game_match_stats._L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RReset
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UGame_match_stats::_L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RReset(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_match_stats", "_L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RReset");

	Params::UGame_match_stats__L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RReset_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortniteInternal.Game_match_stats._L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RIncrementTeamStat_L_Nplayer__team_M_Nint_M_Nint_R
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lplayer__team_Mint_Mint_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// uint8                              RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

uint8 UGame_match_stats::_L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RIncrementTeamStat_L_Nplayer__team_M_Nint_M_Nint_R(const struct FTuple_Lplayer__team_Mint_Mint_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_match_stats", "_L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RIncrementTeamStat_L_Nplayer__team_M_Nint_M_Nint_R");

	Params::UGame_match_stats__L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RIncrementTeamStat_L_Nplayer__team_M_Nint_M_Nint_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortniteInternal.Game_match_stats._L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RIncrementPlayerStat_L_Nplayer_M_Nint_M_Nint_R
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lplayer_Mint_Mint_R  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// uint8                              RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

uint8 UGame_match_stats::_L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RIncrementPlayerStat_L_Nplayer_M_Nint_M_Nint_R(const struct FTuple_Lplayer_Mint_Mint_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_match_stats", "_L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RIncrementPlayerStat_L_Nplayer_M_Nint_M_Nint_R");

	Params::UGame_match_stats__L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RIncrementPlayerStat_L_Nplayer_M_Nint_M_Nint_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortniteInternal.Game_match_stats._L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RIncrementMatchStat_L_Nint_M_Nint_R
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lint_Mint_R          __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// uint8                              RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

uint8 UGame_match_stats::_L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RIncrementMatchStat_L_Nint_M_Nint_R(const struct FTuple_Lint_Mint_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_match_stats", "_L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RIncrementMatchStat_L_Nint_M_Nint_R");

	Params::UGame_match_stats__L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RIncrementMatchStat_L_Nint_M_Nint_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortniteInternal.Game_match_stats._L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RGetTeamStat_L_Nplayer__team_M_Nint_R
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lplayer__team_Mint_R __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UGame_match_stats::_L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RGetTeamStat_L_Nplayer__team_M_Nint_R(const struct FTuple_Lplayer__team_Mint_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_match_stats", "_L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RGetTeamStat_L_Nplayer__team_M_Nint_R");

	Params::UGame_match_stats__L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RGetTeamStat_L_Nplayer__team_M_Nint_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortniteInternal.Game_match_stats._L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RGetPlayerStat_L_Nplayer_M_Nint_R
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lplayer_Mint_R       __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UGame_match_stats::_L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RGetPlayerStat_L_Nplayer_M_Nint_R(const struct FTuple_Lplayer_Mint_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_match_stats", "_L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RGetPlayerStat_L_Nplayer_M_Nint_R");

	Params::UGame_match_stats__L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RGetPlayerStat_L_Nplayer_M_Nint_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortniteInternal.Game_match_stats._L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RGetMatchStat_L_Nint_R
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// int64                              __verse_0xB2CDDD72_Argument                                      (Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UGame_match_stats::_L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RGetMatchStat_L_Nint_R(int64 __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_match_stats", "_L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RGetMatchStat_L_Nint_R");

	Params::UGame_match_stats__L_2fFortnite_2ecom_2fGame_2fmatch__stats_N_RGetMatchStat_L_Nint_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortniteInternal.Game_match_stats.$InitInstance
// (None)
// Parameters:

void UGame_match_stats::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_match_stats", "$InitInstance");

	Params::UGame_match_stats__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteInternal.Game_match_stats.$Block
// (None)
// Parameters:

void UGame_match_stats::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_match_stats", "$Block");

	Params::UGame_match_stats__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteInternal.Game_match_stats.$InitCDO
// (None)
// Parameters:

void UGame_match_stats::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_match_stats", "$InitCDO");

	Params::UGame_match_stats__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteInternal.Game_player_stat_values
// (None)

class UClass* UGame_player_stat_values::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Game_player_stat_values");

	return Clss;
}


// Game_player_stat_values VerseFortniteInternal.Default__Game_player_stat_values
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGame_player_stat_values* UGame_player_stat_values::GetDefaultObj()
{
	static class UGame_player_stat_values* Default = nullptr;

	if (!Default)
		Default = static_cast<UGame_player_stat_values*>(UGame_player_stat_values::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteInternal.Game_player_stat_values.$InitInstance
// (None)
// Parameters:

void UGame_player_stat_values::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_player_stat_values", "$InitInstance");

	Params::UGame_player_stat_values__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteInternal.Game_player_stat_values.$Block
// (None)
// Parameters:

void UGame_player_stat_values::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_player_stat_values", "$Block");

	Params::UGame_player_stat_values__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteInternal.Game_player_stat_values.$InitCDO
// (None)
// Parameters:

void UGame_player_stat_values::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_player_stat_values", "$InitCDO");

	Params::UGame_player_stat_values__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteInternal.Game_StormController_storm_controller_component
// (None)

class UClass* UGame_StormController_storm_controller_component::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Game_StormController_storm_controller_component");

	return Clss;
}


// Game_StormController_storm_controller_component VerseFortniteInternal.Default__Game_StormController_storm_controller_component
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGame_StormController_storm_controller_component* UGame_StormController_storm_controller_component::GetDefaultObj()
{
	static class UGame_StormController_storm_controller_component* Default = nullptr;

	if (!Default)
		Default = static_cast<UGame_StormController_storm_controller_component*>(UGame_StormController_storm_controller_component::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteInternal.Game_StormController_storm_controller_component._L_2fFortnite_2ecom_2fGame_2fStormController_2fstorm__controller__component_N_RsetBattleRoyalePhases
// (Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// TArray<class UGame_StormController_storm_phase*>_ExprResult_0                                                    (ContainsInstancedReference)
// class UGame_StormController_storm_phase*_ExprResult_1                                                    (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint64                             _InstancingGraph_2                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSpatialMath_vector3        _ExprResult_3                                                    (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_4                                               (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_5                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_6                                                    (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_7                                                    (HasGetValueTypeHash)
// class UGame_StormController_storm_phase*_ExprResult_8                                                    (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint64                             _InstancingGraph_9                                               (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSpatialMath_vector3        _ExprResult_10                                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_11                                              (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_12                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_13                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_14                                                   (HasGetValueTypeHash)
// class UGame_StormController_storm_phase*_ExprResult_15                                                   (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint64                             _InstancingGraph_16                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSpatialMath_vector3        _ExprResult_17                                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_18                                              (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_19                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_20                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_21                                                   (HasGetValueTypeHash)
// class UGame_StormController_storm_phase*_ExprResult_22                                                   (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint64                             _InstancingGraph_23                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSpatialMath_vector3        _ExprResult_24                                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_25                                              (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_26                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_27                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_28                                                   (HasGetValueTypeHash)
// class UGame_StormController_storm_phase*_ExprResult_29                                                   (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint64                             _InstancingGraph_30                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSpatialMath_vector3        _ExprResult_31                                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_32                                              (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_33                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_34                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_35                                                   (HasGetValueTypeHash)
// class UGame_StormController_storm_phase*_ExprResult_36                                                   (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint64                             _InstancingGraph_37                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSpatialMath_vector3        _ExprResult_38                                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_39                                              (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_40                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_41                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_42                                                   (HasGetValueTypeHash)
// class UGame_StormController_storm_phase*_ExprResult_43                                                   (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint64                             _InstancingGraph_44                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSpatialMath_vector3        _ExprResult_45                                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_46                                              (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_47                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_48                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_49                                                   (HasGetValueTypeHash)
// class UGame_StormController_storm_phase*_ExprResult_50                                                   (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint64                             _InstancingGraph_51                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSpatialMath_vector3        _ExprResult_52                                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_53                                              (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_54                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_55                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_56                                                   (HasGetValueTypeHash)
// class UGame_StormController_storm_phase*_ExprResult_57                                                   (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint64                             _InstancingGraph_58                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSpatialMath_vector3        _ExprResult_59                                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_60                                              (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_61                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_62                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_63                                                   (HasGetValueTypeHash)
// TArray<class UGame_StormController_storm_phase*>_ExprResult_64                                                   (ContainsInstancedReference)
// class UGame_StormController_storm_phase*_ExprResult_65                                                   (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint64                             _InstancingGraph_66                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSpatialMath_vector3        _ExprResult_67                                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_68                                              (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_69                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_70                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_71                                                   (HasGetValueTypeHash)
// class UGame_StormController_storm_phase*_ExprResult_72                                                   (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint64                             _InstancingGraph_73                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSpatialMath_vector3        _ExprResult_74                                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_75                                              (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_76                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_77                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_78                                                   (HasGetValueTypeHash)
// class UGame_StormController_storm_phase*_ExprResult_79                                                   (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint64                             _InstancingGraph_80                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSpatialMath_vector3        _ExprResult_81                                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_82                                              (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_83                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_84                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_85                                                   (HasGetValueTypeHash)
// class UGame_StormController_storm_phase*_ExprResult_86                                                   (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint64                             _InstancingGraph_87                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSpatialMath_vector3        _ExprResult_88                                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_89                                              (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_90                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_91                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_92                                                   (HasGetValueTypeHash)
// class UGame_StormController_storm_phase*_ExprResult_93                                                   (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint64                             _InstancingGraph_94                                              (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSpatialMath_vector3        _ExprResult_95                                                   (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_96                                              (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_97                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_98                                                   (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_99                                                   (HasGetValueTypeHash)
// class UGame_StormController_storm_phase*_ExprResult_100                                                  (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint64                             _InstancingGraph_101                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSpatialMath_vector3        _ExprResult_102                                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_103                                             (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_104                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_105                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_106                                                  (HasGetValueTypeHash)
// class UGame_StormController_storm_phase*_ExprResult_107                                                  (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint64                             _InstancingGraph_108                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSpatialMath_vector3        _ExprResult_109                                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_110                                             (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_111                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_112                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_113                                                  (HasGetValueTypeHash)
// class UGame_StormController_storm_phase*_ExprResult_114                                                  (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint64                             _InstancingGraph_115                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSpatialMath_vector3        _ExprResult_116                                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_117                                             (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_118                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_119                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_120                                                  (HasGetValueTypeHash)
// class UGame_StormController_storm_phase*_ExprResult_121                                                  (ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// uint64                             _InstancingGraph_122                                             (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// struct FSpatialMath_vector3        _ExprResult_123                                                  (ZeroConstructor, IsPlainOldData, NoDestructor)
// TMap<FVerseStringProperty_, uint8> _ExprResultStack_124                                             (ContainsInstancedReference)
// FVerseStringProperty_              _ExprResult_125                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_126                                                  (HasGetValueTypeHash)
// FVerseStringProperty_              _ExprResult_127                                                  (HasGetValueTypeHash)

void UGame_StormController_storm_controller_component::_L_2fFortnite_2ecom_2fGame_2fStormController_2fstorm__controller__component_N_RsetBattleRoyalePhases(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, const TArray<class UGame_StormController_storm_phase*>& _ExprResult_0, class UGame_StormController_storm_phase* _ExprResult_1, uint64 _InstancingGraph_2, const struct FSpatialMath_vector3& _ExprResult_3, TMap<FVerseStringProperty_, uint8> _ExprResultStack_4, FVerseStringProperty_ _ExprResult_5, FVerseStringProperty_ _ExprResult_6, FVerseStringProperty_ _ExprResult_7, class UGame_StormController_storm_phase* _ExprResult_8, uint64 _InstancingGraph_9, const struct FSpatialMath_vector3& _ExprResult_10, TMap<FVerseStringProperty_, uint8> _ExprResultStack_11, FVerseStringProperty_ _ExprResult_12, FVerseStringProperty_ _ExprResult_13, FVerseStringProperty_ _ExprResult_14, class UGame_StormController_storm_phase* _ExprResult_15, uint64 _InstancingGraph_16, const struct FSpatialMath_vector3& _ExprResult_17, TMap<FVerseStringProperty_, uint8> _ExprResultStack_18, FVerseStringProperty_ _ExprResult_19, FVerseStringProperty_ _ExprResult_20, FVerseStringProperty_ _ExprResult_21, class UGame_StormController_storm_phase* _ExprResult_22, uint64 _InstancingGraph_23, const struct FSpatialMath_vector3& _ExprResult_24, TMap<FVerseStringProperty_, uint8> _ExprResultStack_25, FVerseStringProperty_ _ExprResult_26, FVerseStringProperty_ _ExprResult_27, FVerseStringProperty_ _ExprResult_28, class UGame_StormController_storm_phase* _ExprResult_29, uint64 _InstancingGraph_30, const struct FSpatialMath_vector3& _ExprResult_31, TMap<FVerseStringProperty_, uint8> _ExprResultStack_32, FVerseStringProperty_ _ExprResult_33, FVerseStringProperty_ _ExprResult_34, FVerseStringProperty_ _ExprResult_35, class UGame_StormController_storm_phase* _ExprResult_36, uint64 _InstancingGraph_37, const struct FSpatialMath_vector3& _ExprResult_38, TMap<FVerseStringProperty_, uint8> _ExprResultStack_39, FVerseStringProperty_ _ExprResult_40, FVerseStringProperty_ _ExprResult_41, FVerseStringProperty_ _ExprResult_42, class UGame_StormController_storm_phase* _ExprResult_43, uint64 _InstancingGraph_44, const struct FSpatialMath_vector3& _ExprResult_45, TMap<FVerseStringProperty_, uint8> _ExprResultStack_46, FVerseStringProperty_ _ExprResult_47, FVerseStringProperty_ _ExprResult_48, FVerseStringProperty_ _ExprResult_49, class UGame_StormController_storm_phase* _ExprResult_50, uint64 _InstancingGraph_51, const struct FSpatialMath_vector3& _ExprResult_52, TMap<FVerseStringProperty_, uint8> _ExprResultStack_53, FVerseStringProperty_ _ExprResult_54, FVerseStringProperty_ _ExprResult_55, FVerseStringProperty_ _ExprResult_56, class UGame_StormController_storm_phase* _ExprResult_57, uint64 _InstancingGraph_58, const struct FSpatialMath_vector3& _ExprResult_59, TMap<FVerseStringProperty_, uint8> _ExprResultStack_60, FVerseStringProperty_ _ExprResult_61, FVerseStringProperty_ _ExprResult_62, FVerseStringProperty_ _ExprResult_63, const TArray<class UGame_StormController_storm_phase*>& _ExprResult_64, class UGame_StormController_storm_phase* _ExprResult_65, uint64 _InstancingGraph_66, const struct FSpatialMath_vector3& _ExprResult_67, TMap<FVerseStringProperty_, uint8> _ExprResultStack_68, FVerseStringProperty_ _ExprResult_69, FVerseStringProperty_ _ExprResult_70, FVerseStringProperty_ _ExprResult_71, class UGame_StormController_storm_phase* _ExprResult_72, uint64 _InstancingGraph_73, const struct FSpatialMath_vector3& _ExprResult_74, TMap<FVerseStringProperty_, uint8> _ExprResultStack_75, FVerseStringProperty_ _ExprResult_76, FVerseStringProperty_ _ExprResult_77, FVerseStringProperty_ _ExprResult_78, class UGame_StormController_storm_phase* _ExprResult_79, uint64 _InstancingGraph_80, const struct FSpatialMath_vector3& _ExprResult_81, TMap<FVerseStringProperty_, uint8> _ExprResultStack_82, FVerseStringProperty_ _ExprResult_83, FVerseStringProperty_ _ExprResult_84, FVerseStringProperty_ _ExprResult_85, class UGame_StormController_storm_phase* _ExprResult_86, uint64 _InstancingGraph_87, const struct FSpatialMath_vector3& _ExprResult_88, TMap<FVerseStringProperty_, uint8> _ExprResultStack_89, FVerseStringProperty_ _ExprResult_90, FVerseStringProperty_ _ExprResult_91, FVerseStringProperty_ _ExprResult_92, class UGame_StormController_storm_phase* _ExprResult_93, uint64 _InstancingGraph_94, const struct FSpatialMath_vector3& _ExprResult_95, TMap<FVerseStringProperty_, uint8> _ExprResultStack_96, FVerseStringProperty_ _ExprResult_97, FVerseStringProperty_ _ExprResult_98, FVerseStringProperty_ _ExprResult_99, class UGame_StormController_storm_phase* _ExprResult_100, uint64 _InstancingGraph_101, const struct FSpatialMath_vector3& _ExprResult_102, TMap<FVerseStringProperty_, uint8> _ExprResultStack_103, FVerseStringProperty_ _ExprResult_104, FVerseStringProperty_ _ExprResult_105, FVerseStringProperty_ _ExprResult_106, class UGame_StormController_storm_phase* _ExprResult_107, uint64 _InstancingGraph_108, const struct FSpatialMath_vector3& _ExprResult_109, TMap<FVerseStringProperty_, uint8> _ExprResultStack_110, FVerseStringProperty_ _ExprResult_111, FVerseStringProperty_ _ExprResult_112, FVerseStringProperty_ _ExprResult_113, class UGame_StormController_storm_phase* _ExprResult_114, uint64 _InstancingGraph_115, const struct FSpatialMath_vector3& _ExprResult_116, TMap<FVerseStringProperty_, uint8> _ExprResultStack_117, FVerseStringProperty_ _ExprResult_118, FVerseStringProperty_ _ExprResult_119, FVerseStringProperty_ _ExprResult_120, class UGame_StormController_storm_phase* _ExprResult_121, uint64 _InstancingGraph_122, const struct FSpatialMath_vector3& _ExprResult_123, TMap<FVerseStringProperty_, uint8> _ExprResultStack_124, FVerseStringProperty_ _ExprResult_125, FVerseStringProperty_ _ExprResult_126, FVerseStringProperty_ _ExprResult_127)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_StormController_storm_controller_component", "_L_2fFortnite_2ecom_2fGame_2fStormController_2fstorm__controller__component_N_RsetBattleRoyalePhases");

	Params::UGame_StormController_storm_controller_component__L_2fFortnite_2ecom_2fGame_2fStormController_2fstorm__controller__component_N_RsetBattleRoyalePhases_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._ExprResult_0 = _ExprResult_0;
	Parms._ExprResult_1 = _ExprResult_1;
	Parms._InstancingGraph_2 = _InstancingGraph_2;
	Parms._ExprResult_3 = _ExprResult_3;
	Parms._ExprResultStack_4 = _ExprResultStack_4;
	Parms._ExprResult_5 = _ExprResult_5;
	Parms._ExprResult_6 = _ExprResult_6;
	Parms._ExprResult_7 = _ExprResult_7;
	Parms._ExprResult_8 = _ExprResult_8;
	Parms._InstancingGraph_9 = _InstancingGraph_9;
	Parms._ExprResult_10 = _ExprResult_10;
	Parms._ExprResultStack_11 = _ExprResultStack_11;
	Parms._ExprResult_12 = _ExprResult_12;
	Parms._ExprResult_13 = _ExprResult_13;
	Parms._ExprResult_14 = _ExprResult_14;
	Parms._ExprResult_15 = _ExprResult_15;
	Parms._InstancingGraph_16 = _InstancingGraph_16;
	Parms._ExprResult_17 = _ExprResult_17;
	Parms._ExprResultStack_18 = _ExprResultStack_18;
	Parms._ExprResult_19 = _ExprResult_19;
	Parms._ExprResult_20 = _ExprResult_20;
	Parms._ExprResult_21 = _ExprResult_21;
	Parms._ExprResult_22 = _ExprResult_22;
	Parms._InstancingGraph_23 = _InstancingGraph_23;
	Parms._ExprResult_24 = _ExprResult_24;
	Parms._ExprResultStack_25 = _ExprResultStack_25;
	Parms._ExprResult_26 = _ExprResult_26;
	Parms._ExprResult_27 = _ExprResult_27;
	Parms._ExprResult_28 = _ExprResult_28;
	Parms._ExprResult_29 = _ExprResult_29;
	Parms._InstancingGraph_30 = _InstancingGraph_30;
	Parms._ExprResult_31 = _ExprResult_31;
	Parms._ExprResultStack_32 = _ExprResultStack_32;
	Parms._ExprResult_33 = _ExprResult_33;
	Parms._ExprResult_34 = _ExprResult_34;
	Parms._ExprResult_35 = _ExprResult_35;
	Parms._ExprResult_36 = _ExprResult_36;
	Parms._InstancingGraph_37 = _InstancingGraph_37;
	Parms._ExprResult_38 = _ExprResult_38;
	Parms._ExprResultStack_39 = _ExprResultStack_39;
	Parms._ExprResult_40 = _ExprResult_40;
	Parms._ExprResult_41 = _ExprResult_41;
	Parms._ExprResult_42 = _ExprResult_42;
	Parms._ExprResult_43 = _ExprResult_43;
	Parms._InstancingGraph_44 = _InstancingGraph_44;
	Parms._ExprResult_45 = _ExprResult_45;
	Parms._ExprResultStack_46 = _ExprResultStack_46;
	Parms._ExprResult_47 = _ExprResult_47;
	Parms._ExprResult_48 = _ExprResult_48;
	Parms._ExprResult_49 = _ExprResult_49;
	Parms._ExprResult_50 = _ExprResult_50;
	Parms._InstancingGraph_51 = _InstancingGraph_51;
	Parms._ExprResult_52 = _ExprResult_52;
	Parms._ExprResultStack_53 = _ExprResultStack_53;
	Parms._ExprResult_54 = _ExprResult_54;
	Parms._ExprResult_55 = _ExprResult_55;
	Parms._ExprResult_56 = _ExprResult_56;
	Parms._ExprResult_57 = _ExprResult_57;
	Parms._InstancingGraph_58 = _InstancingGraph_58;
	Parms._ExprResult_59 = _ExprResult_59;
	Parms._ExprResultStack_60 = _ExprResultStack_60;
	Parms._ExprResult_61 = _ExprResult_61;
	Parms._ExprResult_62 = _ExprResult_62;
	Parms._ExprResult_63 = _ExprResult_63;
	Parms._ExprResult_64 = _ExprResult_64;
	Parms._ExprResult_65 = _ExprResult_65;
	Parms._InstancingGraph_66 = _InstancingGraph_66;
	Parms._ExprResult_67 = _ExprResult_67;
	Parms._ExprResultStack_68 = _ExprResultStack_68;
	Parms._ExprResult_69 = _ExprResult_69;
	Parms._ExprResult_70 = _ExprResult_70;
	Parms._ExprResult_71 = _ExprResult_71;
	Parms._ExprResult_72 = _ExprResult_72;
	Parms._InstancingGraph_73 = _InstancingGraph_73;
	Parms._ExprResult_74 = _ExprResult_74;
	Parms._ExprResultStack_75 = _ExprResultStack_75;
	Parms._ExprResult_76 = _ExprResult_76;
	Parms._ExprResult_77 = _ExprResult_77;
	Parms._ExprResult_78 = _ExprResult_78;
	Parms._ExprResult_79 = _ExprResult_79;
	Parms._InstancingGraph_80 = _InstancingGraph_80;
	Parms._ExprResult_81 = _ExprResult_81;
	Parms._ExprResultStack_82 = _ExprResultStack_82;
	Parms._ExprResult_83 = _ExprResult_83;
	Parms._ExprResult_84 = _ExprResult_84;
	Parms._ExprResult_85 = _ExprResult_85;
	Parms._ExprResult_86 = _ExprResult_86;
	Parms._InstancingGraph_87 = _InstancingGraph_87;
	Parms._ExprResult_88 = _ExprResult_88;
	Parms._ExprResultStack_89 = _ExprResultStack_89;
	Parms._ExprResult_90 = _ExprResult_90;
	Parms._ExprResult_91 = _ExprResult_91;
	Parms._ExprResult_92 = _ExprResult_92;
	Parms._ExprResult_93 = _ExprResult_93;
	Parms._InstancingGraph_94 = _InstancingGraph_94;
	Parms._ExprResult_95 = _ExprResult_95;
	Parms._ExprResultStack_96 = _ExprResultStack_96;
	Parms._ExprResult_97 = _ExprResult_97;
	Parms._ExprResult_98 = _ExprResult_98;
	Parms._ExprResult_99 = _ExprResult_99;
	Parms._ExprResult_100 = _ExprResult_100;
	Parms._InstancingGraph_101 = _InstancingGraph_101;
	Parms._ExprResult_102 = _ExprResult_102;
	Parms._ExprResultStack_103 = _ExprResultStack_103;
	Parms._ExprResult_104 = _ExprResult_104;
	Parms._ExprResult_105 = _ExprResult_105;
	Parms._ExprResult_106 = _ExprResult_106;
	Parms._ExprResult_107 = _ExprResult_107;
	Parms._InstancingGraph_108 = _InstancingGraph_108;
	Parms._ExprResult_109 = _ExprResult_109;
	Parms._ExprResultStack_110 = _ExprResultStack_110;
	Parms._ExprResult_111 = _ExprResult_111;
	Parms._ExprResult_112 = _ExprResult_112;
	Parms._ExprResult_113 = _ExprResult_113;
	Parms._ExprResult_114 = _ExprResult_114;
	Parms._InstancingGraph_115 = _InstancingGraph_115;
	Parms._ExprResult_116 = _ExprResult_116;
	Parms._ExprResultStack_117 = _ExprResultStack_117;
	Parms._ExprResult_118 = _ExprResult_118;
	Parms._ExprResult_119 = _ExprResult_119;
	Parms._ExprResult_120 = _ExprResult_120;
	Parms._ExprResult_121 = _ExprResult_121;
	Parms._InstancingGraph_122 = _InstancingGraph_122;
	Parms._ExprResult_123 = _ExprResult_123;
	Parms._ExprResultStack_124 = _ExprResultStack_124;
	Parms._ExprResult_125 = _ExprResult_125;
	Parms._ExprResult_126 = _ExprResult_126;
	Parms._ExprResult_127 = _ExprResult_127;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteInternal.Game_StormController_storm_controller_component._L_2fFortnite_2ecom_2fGame_2fStormController_2fstorm__controller__component_N_Rreset
// (Public, HasDefaults, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_0                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_1                                                        (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_2                                                    (HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_3                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_4                                                        (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_5                                                    (HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_6                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_7                                                        (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_8                                                    (HasGetValueTypeHash)
// enum class EVerseTrue              _InvokeSureResultDummy_9                                         (ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
// FVerseFunctionProperty_            _Callee_10                                                       (HasGetValueTypeHash)
// struct FTuple_L_R                  _ExprResult_11                                                   (HasGetValueTypeHash)

void UGame_StormController_storm_controller_component::_L_2fFortnite_2ecom_2fGame_2fStormController_2fstorm__controller__component_N_Rreset(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument, enum class EVerseTrue _InvokeSureResultDummy_0, FVerseFunctionProperty_ _Callee_1, const struct FTuple_L_R& _ExprResult_2, enum class EVerseTrue _InvokeSureResultDummy_3, FVerseFunctionProperty_ _Callee_4, const struct FTuple_L_R& _ExprResult_5, enum class EVerseTrue _InvokeSureResultDummy_6, FVerseFunctionProperty_ _Callee_7, const struct FTuple_L_R& _ExprResult_8, enum class EVerseTrue _InvokeSureResultDummy_9, FVerseFunctionProperty_ _Callee_10, const struct FTuple_L_R& _ExprResult_11)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_StormController_storm_controller_component", "_L_2fFortnite_2ecom_2fGame_2fStormController_2fstorm__controller__component_N_Rreset");

	Params::UGame_StormController_storm_controller_component__L_2fFortnite_2ecom_2fGame_2fStormController_2fstorm__controller__component_N_Rreset_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;
	Parms._InvokeSureResultDummy_0 = _InvokeSureResultDummy_0;
	Parms._Callee_1 = _Callee_1;
	Parms._ExprResult_2 = _ExprResult_2;
	Parms._InvokeSureResultDummy_3 = _InvokeSureResultDummy_3;
	Parms._Callee_4 = _Callee_4;
	Parms._ExprResult_5 = _ExprResult_5;
	Parms._InvokeSureResultDummy_6 = _InvokeSureResultDummy_6;
	Parms._Callee_7 = _Callee_7;
	Parms._ExprResult_8 = _ExprResult_8;
	Parms._InvokeSureResultDummy_9 = _InvokeSureResultDummy_9;
	Parms._Callee_10 = _Callee_10;
	Parms._ExprResult_11 = _ExprResult_11;

	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteInternal.Game_StormController_storm_controller_component._L_2fFortnite_2ecom_2fGame_2fStormController_2fstorm__controller__component_N_Rpause
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UGame_StormController_storm_controller_component::_L_2fFortnite_2ecom_2fGame_2fStormController_2fstorm__controller__component_N_Rpause(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_StormController_storm_controller_component", "_L_2fFortnite_2ecom_2fGame_2fStormController_2fstorm__controller__component_N_Rpause");

	Params::UGame_StormController_storm_controller_component__L_2fFortnite_2ecom_2fGame_2fStormController_2fstorm__controller__component_N_Rpause_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortniteInternal.Game_StormController_storm_controller_component._L_2fFortnite_2ecom_2fGame_2fStormController_2fstorm__controller__component_N_Rexists
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// uint8                              RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

uint8 UGame_StormController_storm_controller_component::_L_2fFortnite_2ecom_2fGame_2fStormController_2fstorm__controller__component_N_Rexists(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_StormController_storm_controller_component", "_L_2fFortnite_2ecom_2fGame_2fStormController_2fstorm__controller__component_N_Rexists");

	Params::UGame_StormController_storm_controller_component__L_2fFortnite_2ecom_2fGame_2fStormController_2fstorm__controller__component_N_Rexists_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortniteInternal.Game_StormController_storm_controller_component._L_2fFortnite_2ecom_2fGame_2fStormController_2fstorm__controller__component_N_Rend
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UGame_StormController_storm_controller_component::_L_2fFortnite_2ecom_2fGame_2fStormController_2fstorm__controller__component_N_Rend(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_StormController_storm_controller_component", "_L_2fFortnite_2ecom_2fGame_2fStormController_2fstorm__controller__component_N_Rend");

	Params::UGame_StormController_storm_controller_component__L_2fFortnite_2ecom_2fGame_2fStormController_2fstorm__controller__component_N_Rend_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortniteInternal.Game_StormController_storm_controller_component._L_2fFortnite_2ecom_2fGame_2fStormController_2fstorm__controller__component_N_Rbegin
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UGame_StormController_storm_controller_component::_L_2fFortnite_2ecom_2fGame_2fStormController_2fstorm__controller__component_N_Rbegin(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_StormController_storm_controller_component", "_L_2fFortnite_2ecom_2fGame_2fStormController_2fstorm__controller__component_N_Rbegin");

	Params::UGame_StormController_storm_controller_component__L_2fFortnite_2ecom_2fGame_2fStormController_2fstorm__controller__component_N_Rbegin_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortniteInternal.Game_StormController_storm_controller_component.$InitInstance
// (None)
// Parameters:

void UGame_StormController_storm_controller_component::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_StormController_storm_controller_component", "$InitInstance");

	Params::UGame_StormController_storm_controller_component__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteInternal.Game_StormController_storm_controller_component.$Block
// (None)
// Parameters:

void UGame_StormController_storm_controller_component::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_StormController_storm_controller_component", "$Block");

	Params::UGame_StormController_storm_controller_component__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteInternal.Game_StormController_storm_controller_component.$InitCDO
// (None)
// Parameters:

void UGame_StormController_storm_controller_component::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_StormController_storm_controller_component", "$InitCDO");

	Params::UGame_StormController_storm_controller_component__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteInternal.Game_StormController_storm_phase
// (None)

class UClass* UGame_StormController_storm_phase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Game_StormController_storm_phase");

	return Clss;
}


// Game_StormController_storm_phase VerseFortniteInternal.Default__Game_StormController_storm_phase
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGame_StormController_storm_phase* UGame_StormController_storm_phase::GetDefaultObj()
{
	static class UGame_StormController_storm_phase* Default = nullptr;

	if (!Default)
		Default = static_cast<UGame_StormController_storm_phase*>(UGame_StormController_storm_phase::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteInternal.Game_StormController_storm_phase.$InitInstance
// (None)
// Parameters:

void UGame_StormController_storm_phase::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_StormController_storm_phase", "$InitInstance");

	Params::UGame_StormController_storm_phase__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteInternal.Game_StormController_storm_phase.$Block
// (None)
// Parameters:

void UGame_StormController_storm_phase::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_StormController_storm_phase", "$Block");

	Params::UGame_StormController_storm_phase__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteInternal.Game_StormController_storm_phase.$InitCDO
// (None)
// Parameters:

void UGame_StormController_storm_phase::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_StormController_storm_phase", "$InitCDO");

	Params::UGame_StormController_storm_phase__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteInternal.Game_team_stat_values
// (None)

class UClass* UGame_team_stat_values::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Game_team_stat_values");

	return Clss;
}


// Game_team_stat_values VerseFortniteInternal.Default__Game_team_stat_values
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGame_team_stat_values* UGame_team_stat_values::GetDefaultObj()
{
	static class UGame_team_stat_values* Default = nullptr;

	if (!Default)
		Default = static_cast<UGame_team_stat_values*>(UGame_team_stat_values::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteInternal.Game_team_stat_values._L_2fFortnite_2ecom_2fGame_2fteam__stat__values_N_RSetPlayerStat_L_Nplayer_M_Nint_M_Nint_R
// (Native, Public, BlueprintCallable)
// Parameters:
// struct FTuple_Lplayer_Mint_Mint_R  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UGame_team_stat_values::_L_2fFortnite_2ecom_2fGame_2fteam__stat__values_N_RSetPlayerStat_L_Nplayer_M_Nint_M_Nint_R(const struct FTuple_Lplayer_Mint_Mint_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_team_stat_values", "_L_2fFortnite_2ecom_2fGame_2fteam__stat__values_N_RSetPlayerStat_L_Nplayer_M_Nint_M_Nint_R");

	Params::UGame_team_stat_values__L_2fFortnite_2ecom_2fGame_2fteam__stat__values_N_RSetPlayerStat_L_Nplayer_M_Nint_M_Nint_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortniteInternal.Game_team_stat_values._L_2fFortnite_2ecom_2fGame_2fteam__stat__values_N_RIncrementPlayerStat_L_Nplayer_M_Nint_M_Nint_R
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lplayer_Mint_Mint_R  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// uint8                              RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

uint8 UGame_team_stat_values::_L_2fFortnite_2ecom_2fGame_2fteam__stat__values_N_RIncrementPlayerStat_L_Nplayer_M_Nint_M_Nint_R(const struct FTuple_Lplayer_Mint_Mint_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_team_stat_values", "_L_2fFortnite_2ecom_2fGame_2fteam__stat__values_N_RIncrementPlayerStat_L_Nplayer_M_Nint_M_Nint_R");

	Params::UGame_team_stat_values__L_2fFortnite_2ecom_2fGame_2fteam__stat__values_N_RIncrementPlayerStat_L_Nplayer_M_Nint_M_Nint_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortniteInternal.Game_team_stat_values._L_2fFortnite_2ecom_2fGame_2fteam__stat__values_N_RGetPlayerStat_L_Nplayer_M_Nint_R
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lplayer_Mint_R       __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UGame_team_stat_values::_L_2fFortnite_2ecom_2fGame_2fteam__stat__values_N_RGetPlayerStat_L_Nplayer_M_Nint_R(const struct FTuple_Lplayer_Mint_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_team_stat_values", "_L_2fFortnite_2ecom_2fGame_2fteam__stat__values_N_RGetPlayerStat_L_Nplayer_M_Nint_R");

	Params::UGame_team_stat_values__L_2fFortnite_2ecom_2fGame_2fteam__stat__values_N_RGetPlayerStat_L_Nplayer_M_Nint_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortniteInternal.Game_team_stat_values.$InitInstance
// (None)
// Parameters:

void UGame_team_stat_values::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_team_stat_values", "$InitInstance");

	Params::UGame_team_stat_values__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteInternal.Game_team_stat_values.$Block
// (None)
// Parameters:

void UGame_team_stat_values::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_team_stat_values", "$Block");

	Params::UGame_team_stat_values__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseFortniteInternal.Game_team_stat_values.$InitCDO
// (None)
// Parameters:

void UGame_team_stat_values::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_team_stat_values", "$InitCDO");

	Params::UGame_team_stat_values__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteInternal.Game_VerseFortniteHacks
// (None)

class UClass* UGame_VerseFortniteHacks::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Game_VerseFortniteHacks");

	return Clss;
}


// Game_VerseFortniteHacks VerseFortniteInternal.Default__Game_VerseFortniteHacks
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UGame_VerseFortniteHacks* UGame_VerseFortniteHacks::GetDefaultObj()
{
	static class UGame_VerseFortniteHacks* Default = nullptr;

	if (!Default)
		Default = static_cast<UGame_VerseFortniteHacks*>(UGame_VerseFortniteHacks::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteInternal.Game_VerseFortniteHacks._L_2fFortnite_2ecom_2fGame_2fVerseFortniteHacks_N_RsetAutoRespawnEnabled_L_Ncomponent_M_Nlogic_R
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FTuple_Lcomponent_Mlogic_R  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UGame_VerseFortniteHacks::_L_2fFortnite_2ecom_2fGame_2fVerseFortniteHacks_N_RsetAutoRespawnEnabled_L_Ncomponent_M_Nlogic_R(const struct FTuple_Lcomponent_Mlogic_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_VerseFortniteHacks", "_L_2fFortnite_2ecom_2fGame_2fVerseFortniteHacks_N_RsetAutoRespawnEnabled_L_Ncomponent_M_Nlogic_R");

	Params::UGame_VerseFortniteHacks__L_2fFortnite_2ecom_2fGame_2fVerseFortniteHacks_N_RsetAutoRespawnEnabled_L_Ncomponent_M_Nlogic_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortniteInternal.Game_VerseFortniteHacks._L_2fFortnite_2ecom_2fGame_2fVerseFortniteHacks_N_RrespawnPlayer_L_Nplayer__component_M_Nplayer__start__component_R
// (Final, Native, Static, Public, BlueprintCallable)
// Parameters:
// struct FTuple_Lplayer__component_Mplayer__start__component_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)

void UGame_VerseFortniteHacks::_L_2fFortnite_2ecom_2fGame_2fVerseFortniteHacks_N_RrespawnPlayer_L_Nplayer__component_M_Nplayer__start__component_R(const struct FTuple_Lplayer__component_Mplayer__start__component_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_VerseFortniteHacks", "_L_2fFortnite_2ecom_2fGame_2fVerseFortniteHacks_N_RrespawnPlayer_L_Nplayer__component_M_Nplayer__start__component_R");

	Params::UGame_VerseFortniteHacks__L_2fFortnite_2ecom_2fGame_2fVerseFortniteHacks_N_RrespawnPlayer_L_Nplayer__component_M_Nplayer__start__component_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VerseFortniteInternal.Game_VerseFortniteHacks._L_2fFortnite_2ecom_2fGame_2fVerseFortniteHacks_N_RgetAllComponentsOfType_L_Ncomponent_M_NType_20where_20Type_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lcomponent_Mcomponent_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// TArray<class UEntityComponent*>    RetVal                                                           (Parm, OutParm, ReturnParm, ContainsInstancedReference)

TArray<class UEntityComponent*> UGame_VerseFortniteHacks::_L_2fFortnite_2ecom_2fGame_2fVerseFortniteHacks_N_RgetAllComponentsOfType_L_Ncomponent_M_NType_20where_20Type_R(const struct FTuple_Lcomponent_Mcomponent_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_VerseFortniteHacks", "_L_2fFortnite_2ecom_2fGame_2fVerseFortniteHacks_N_RgetAllComponentsOfType_L_Ncomponent_M_NType_20where_20Type_R");

	Params::UGame_VerseFortniteHacks__L_2fFortnite_2ecom_2fGame_2fVerseFortniteHacks_N_RgetAllComponentsOfType_L_Ncomponent_M_NType_20where_20Type_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortniteInternal.Game_VerseFortniteHacks._L_2fFortnite_2ecom_2fGame_2fVerseFortniteHacks_N_RGetPawnCollisionEntityID_L_Nplayer__component_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class USimulation_player_component*__verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UGame_VerseFortniteHacks::_L_2fFortnite_2ecom_2fGame_2fVerseFortniteHacks_N_RGetPawnCollisionEntityID_L_Nplayer__component_R(class USimulation_player_component* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_VerseFortniteHacks", "_L_2fFortnite_2ecom_2fGame_2fVerseFortniteHacks_N_RGetPawnCollisionEntityID_L_Nplayer__component_R");

	Params::UGame_VerseFortniteHacks__L_2fFortnite_2ecom_2fGame_2fVerseFortniteHacks_N_RGetPawnCollisionEntityID_L_Nplayer__component_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseFortniteInternal.Game_VerseFortniteHacks.$InitCDO
// (None)
// Parameters:

void UGame_VerseFortniteHacks::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Game_VerseFortniteHacks", "$InitCDO");

	Params::UGame_VerseFortniteHacks__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseFortniteInternal.task_Game_fort_playspace_component$__WaitForPlayerEliminated
// (None)

class UClass* UTask_Game_fort_playspace_component___WaitForPlayerEliminated::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("task_Game_fort_playspace_component$__WaitForPlayerEliminated");

	return Clss;
}


// task_Game_fort_playspace_component$__WaitForPlayerEliminated VerseFortniteInternal.Default__task_Game_fort_playspace_component$__WaitForPlayerEliminated
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UTask_Game_fort_playspace_component___WaitForPlayerEliminated* UTask_Game_fort_playspace_component___WaitForPlayerEliminated::GetDefaultObj()
{
	static class UTask_Game_fort_playspace_component___WaitForPlayerEliminated* Default = nullptr;

	if (!Default)
		Default = static_cast<UTask_Game_fort_playspace_component___WaitForPlayerEliminated*>(UTask_Game_fort_playspace_component___WaitForPlayerEliminated::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseFortniteInternal.task_Game_fort_playspace_component$__WaitForPlayerEliminated.Update
// (Native, Public, HasOutParams)
// Parameters:
// int64                              RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

int64 UTask_Game_fort_playspace_component___WaitForPlayerEliminated::Update()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("task_Game_fort_playspace_component$__WaitForPlayerEliminated", "Update");

	Params::UTask_Game_fort_playspace_component___WaitForPlayerEliminated_Update_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}

}


