#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// VerseClass VerseWorldPartition.$SolarisSignatureFunctionOuter
// (None)

class UClass* U_SolarisSignatureFunctionOuter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("$SolarisSignatureFunctionOuter");

	return Clss;
}


// $SolarisSignatureFunctionOuter VerseWorldPartition.Default__$SolarisSignatureFunctionOuter
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class U_SolarisSignatureFunctionOuter* U_SolarisSignatureFunctionOuter::GetDefaultObj()
{
	static class U_SolarisSignatureFunctionOuter* Default = nullptr;

	if (!Default)
		Default = static_cast<U_SolarisSignatureFunctionOuter*>(U_SolarisSignatureFunctionOuter::StaticClass()->DefaultObject);

	return Default;
}


// VerseClass VerseWorldPartition.VerseWorldPartition
// (None)

class UClass* UVerseWorldPartition::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseWorldPartition");

	return Clss;
}


// VerseWorldPartition VerseWorldPartition.Default__VerseWorldPartition
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVerseWorldPartition* UVerseWorldPartition::GetDefaultObj()
{
	static class UVerseWorldPartition* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseWorldPartition*>(UVerseWorldPartition::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseWorldPartition.VerseWorldPartition._L_2fUnrealEngine_2ecom_2fWorldPartition_2fVerseWorldPartition_N_RGetDataLayerManager
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

FOptionalProperty_ UVerseWorldPartition::_L_2fUnrealEngine_2ecom_2fWorldPartition_2fVerseWorldPartition_N_RGetDataLayerManager(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseWorldPartition", "_L_2fUnrealEngine_2ecom_2fWorldPartition_2fVerseWorldPartition_N_RGetDataLayerManager");

	Params::UVerseWorldPartition__L_2fUnrealEngine_2ecom_2fWorldPartition_2fVerseWorldPartition_N_RGetDataLayerManager_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseWorldPartition.VerseWorldPartition.$InitCDO
// (None)
// Parameters:

void UVerseWorldPartition::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseWorldPartition", "$InitCDO");

	Params::UVerseWorldPartition__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseWorldPartition.VerseWorldPartition_data_layer_asset
// (None)

class UClass* UVerseWorldPartition_data_layer_asset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseWorldPartition_data_layer_asset");

	return Clss;
}


// VerseWorldPartition_data_layer_asset VerseWorldPartition.Default__VerseWorldPartition_data_layer_asset
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVerseWorldPartition_data_layer_asset* UVerseWorldPartition_data_layer_asset::GetDefaultObj()
{
	static class UVerseWorldPartition_data_layer_asset* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseWorldPartition_data_layer_asset*>(UVerseWorldPartition_data_layer_asset::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseWorldPartition.VerseWorldPartition_data_layer_asset.$InitInstance
// (None)
// Parameters:

void UVerseWorldPartition_data_layer_asset::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseWorldPartition_data_layer_asset", "$InitInstance");

	Params::UVerseWorldPartition_data_layer_asset__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseWorldPartition.VerseWorldPartition_data_layer_asset.$Block
// (None)
// Parameters:

void UVerseWorldPartition_data_layer_asset::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseWorldPartition_data_layer_asset", "$Block");

	Params::UVerseWorldPartition_data_layer_asset__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseWorldPartition.VerseWorldPartition_data_layer_asset.$InitCDO
// (None)
// Parameters:

void UVerseWorldPartition_data_layer_asset::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseWorldPartition_data_layer_asset", "$InitCDO");

	Params::UVerseWorldPartition_data_layer_asset__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseWorldPartition.VerseWorldPartition_data_layer_manager
// (None)

class UClass* UVerseWorldPartition_data_layer_manager::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseWorldPartition_data_layer_manager");

	return Clss;
}


// VerseWorldPartition_data_layer_manager VerseWorldPartition.Default__VerseWorldPartition_data_layer_manager
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UVerseWorldPartition_data_layer_manager* UVerseWorldPartition_data_layer_manager::GetDefaultObj()
{
	static class UVerseWorldPartition_data_layer_manager* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseWorldPartition_data_layer_manager*>(UVerseWorldPartition_data_layer_manager::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseWorldPartition.VerseWorldPartition_data_layer_manager._L_2fUnrealEngine_2ecom_2fWorldPartition_2fVerseWorldPartition_2fdata__layer__manager_N_RSetDataLayerRuntimeState_L_Ndata__layer__asset_M_Ndata__layer__runtime__state_M_Nlogic_R
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Ldata__layer__asset_Mdata__layer__runtime__state_Mlogic_R__verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// uint8                              RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

uint8 UVerseWorldPartition_data_layer_manager::_L_2fUnrealEngine_2ecom_2fWorldPartition_2fVerseWorldPartition_2fdata__layer__manager_N_RSetDataLayerRuntimeState_L_Ndata__layer__asset_M_Ndata__layer__runtime__state_M_Nlogic_R(const struct FTuple_Ldata__layer__asset_Mdata__layer__runtime__state_Mlogic_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseWorldPartition_data_layer_manager", "_L_2fUnrealEngine_2ecom_2fWorldPartition_2fVerseWorldPartition_2fdata__layer__manager_N_RSetDataLayerRuntimeState_L_Ndata__layer__asset_M_Ndata__layer__runtime__state_M_Nlogic_R");

	Params::UVerseWorldPartition_data_layer_manager__L_2fUnrealEngine_2ecom_2fWorldPartition_2fVerseWorldPartition_2fdata__layer__manager_N_RSetDataLayerRuntimeState_L_Ndata__layer__asset_M_Ndata__layer__runtime__state_M_Nlogic_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseWorldPartition.VerseWorldPartition_data_layer_manager._L_2fUnrealEngine_2ecom_2fWorldPartition_2fVerseWorldPartition_2fdata__layer__manager_N_RGetDataLayerEffectiveRuntimeState_L_Ndata__layer__asset_R
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// class UVerseWorldPartition_data_layer_asset*__verse_0xB2CDDD72_Argument                                      (ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
// enum class EVerseWorldPartition_data_layer_runtime_stateRetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)

enum class EVerseWorldPartition_data_layer_runtime_state UVerseWorldPartition_data_layer_manager::_L_2fUnrealEngine_2ecom_2fWorldPartition_2fVerseWorldPartition_2fdata__layer__manager_N_RGetDataLayerEffectiveRuntimeState_L_Ndata__layer__asset_R(class UVerseWorldPartition_data_layer_asset* __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseWorldPartition_data_layer_manager", "_L_2fUnrealEngine_2ecom_2fWorldPartition_2fVerseWorldPartition_2fdata__layer__manager_N_RGetDataLayerEffectiveRuntimeState_L_Ndata__layer__asset_R");

	Params::UVerseWorldPartition_data_layer_manager__L_2fUnrealEngine_2ecom_2fWorldPartition_2fVerseWorldPartition_2fdata__layer__manager_N_RGetDataLayerEffectiveRuntimeState_L_Ndata__layer__asset_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseWorldPartition.VerseWorldPartition_data_layer_manager.$InitInstance
// (None)
// Parameters:

void UVerseWorldPartition_data_layer_manager::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseWorldPartition_data_layer_manager", "$InitInstance");

	Params::UVerseWorldPartition_data_layer_manager__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseWorldPartition.VerseWorldPartition_data_layer_manager.$Block
// (None)
// Parameters:

void UVerseWorldPartition_data_layer_manager::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseWorldPartition_data_layer_manager", "$Block");

	Params::UVerseWorldPartition_data_layer_manager__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseWorldPartition.VerseWorldPartition_data_layer_manager.$InitCDO
// (None)
// Parameters:

void UVerseWorldPartition_data_layer_manager::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseWorldPartition_data_layer_manager", "$InitCDO");

	Params::UVerseWorldPartition_data_layer_manager__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}

}


