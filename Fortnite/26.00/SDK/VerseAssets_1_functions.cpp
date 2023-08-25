#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// VerseClass VerseAssets.$SolarisSignatureFunctionOuter
// (None)

class UClass* U_SolarisSignatureFunctionOuter::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("$SolarisSignatureFunctionOuter");

	return Clss;
}


// $SolarisSignatureFunctionOuter VerseAssets.Default__$SolarisSignatureFunctionOuter
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class U_SolarisSignatureFunctionOuter* U_SolarisSignatureFunctionOuter::GetDefaultObj()
{
	static class U_SolarisSignatureFunctionOuter* Default = nullptr;

	if (!Default)
		Default = static_cast<U_SolarisSignatureFunctionOuter*>(U_SolarisSignatureFunctionOuter::StaticClass()->DefaultObject);

	return Default;
}


// VerseClass VerseAssets.Assets
// (None)

class UClass* UAssets::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Assets");

	return Clss;
}


// Assets VerseAssets.Default__Assets
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAssets* UAssets::GetDefaultObj()
{
	static class UAssets* Default = nullptr;

	if (!Default)
		Default = static_cast<UAssets*>(UAssets::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseAssets.Assets._L_2fVerse_2eorg_2fAssets_N_RMakeAsset_L_NAssetType_M_N_Kchar_20where_20AssetType_R
// (Final, Native, Static, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_Lany_M_Kchar_R       __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FVerseDynamicProperty_             RetVal                                                           (Parm, OutParm, ReturnParm, HasGetValueTypeHash)

FVerseDynamicProperty_ UAssets::_L_2fVerse_2eorg_2fAssets_N_RMakeAsset_L_NAssetType_M_N_Kchar_20where_20AssetType_R(const struct FTuple_Lany_M_Kchar_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Assets", "_L_2fVerse_2eorg_2fAssets_N_RMakeAsset_L_NAssetType_M_N_Kchar_20where_20AssetType_R");

	Params::UAssets__L_2fVerse_2eorg_2fAssets_N_RMakeAsset_L_NAssetType_M_N_Kchar_20where_20AssetType_R_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseAssets.Assets.$InitCDO
// (None)
// Parameters:

void UAssets::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Assets", "$InitCDO");

	Params::UAssets__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseAssets.Assets_asset
// (None)

class UClass* UAssets_asset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Assets_asset");

	return Clss;
}


// Assets_asset VerseAssets.Default__Assets_asset
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAssets_asset* UAssets_asset::GetDefaultObj()
{
	static class UAssets_asset* Default = nullptr;

	if (!Default)
		Default = static_cast<UAssets_asset*>(UAssets_asset::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseAssets.Assets_asset._L_2fVerse_2eorg_2fAssets_2fasset_N_RSyncLoad
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// uint8                              RetVal                                                           (Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)

uint8 UAssets_asset::_L_2fVerse_2eorg_2fAssets_2fasset_N_RSyncLoad(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Assets_asset", "_L_2fVerse_2eorg_2fAssets_2fasset_N_RSyncLoad");

	Params::UAssets_asset__L_2fVerse_2eorg_2fAssets_2fasset_N_RSyncLoad_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseAssets.Assets_asset._L_2fVerse_2eorg_2fAssets_2fasset_N_RGetAsyncLoadEvent
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

FOptionalProperty_ UAssets_asset::_L_2fVerse_2eorg_2fAssets_2fasset_N_RGetAsyncLoadEvent(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Assets_asset", "_L_2fVerse_2eorg_2fAssets_2fasset_N_RGetAsyncLoadEvent");

	Params::UAssets_asset__L_2fVerse_2eorg_2fAssets_2fasset_N_RGetAsyncLoadEvent_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseAssets.Assets_asset._L_2fVerse_2eorg_2fAssets_2fasset_N_RGetAssetType
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

FOptionalProperty_ UAssets_asset::_L_2fVerse_2eorg_2fAssets_2fasset_N_RGetAssetType(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Assets_asset", "_L_2fVerse_2eorg_2fAssets_2fasset_N_RGetAssetType");

	Params::UAssets_asset__L_2fVerse_2eorg_2fAssets_2fasset_N_RGetAssetType_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseAssets.Assets_asset._L_2fVerse_2eorg_2fAssets_2fasset_N_RAsync__Load
// (Native, Public, HasOutParams, BlueprintCallable)
// Parameters:
// struct FTuple_L_R                  __verse_0xB2CDDD72_Argument                                      (Parm, HasGetValueTypeHash)
// FOptionalProperty_                 RetVal                                                           (Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)

FOptionalProperty_ UAssets_asset::_L_2fVerse_2eorg_2fAssets_2fasset_N_RAsync__Load(const struct FTuple_L_R& __verse_0xB2CDDD72_Argument)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Assets_asset", "_L_2fVerse_2eorg_2fAssets_2fasset_N_RAsync__Load");

	Params::UAssets_asset__L_2fVerse_2eorg_2fAssets_2fasset_N_RAsync__Load_Params Parms{};

	Parms.__verse_0xB2CDDD72_Argument = __verse_0xB2CDDD72_Argument;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

	return Parms.ReturnValue;

}


// Function VerseAssets.Assets_asset.$InitInstance
// (None)
// Parameters:

void UAssets_asset::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Assets_asset", "$InitInstance");

	Params::UAssets_asset__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseAssets.Assets_asset.$Block
// (None)
// Parameters:

void UAssets_asset::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Assets_asset", "$Block");

	Params::UAssets_asset__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseAssets.Assets_asset.$InitCDO
// (None)
// Parameters:

void UAssets_asset::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Assets_asset", "$InitCDO");

	Params::UAssets_asset__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseAssets.Assets_animation
// (None)

class UClass* UAssets_animation::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Assets_animation");

	return Clss;
}


// Assets_animation VerseAssets.Default__Assets_animation
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAssets_animation* UAssets_animation::GetDefaultObj()
{
	static class UAssets_animation* Default = nullptr;

	if (!Default)
		Default = static_cast<UAssets_animation*>(UAssets_animation::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseAssets.Assets_animation.$InitInstance
// (None)
// Parameters:

void UAssets_animation::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Assets_animation", "$InitInstance");

	Params::UAssets_animation__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseAssets.Assets_animation.$Block
// (None)
// Parameters:

void UAssets_animation::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Assets_animation", "$Block");

	Params::UAssets_animation__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseAssets.Assets_animation.$InitCDO
// (None)
// Parameters:

void UAssets_animation::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Assets_animation", "$InitCDO");

	Params::UAssets_animation__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseAssets.Assets_animation_blueprint
// (None)

class UClass* UAssets_animation_blueprint::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Assets_animation_blueprint");

	return Clss;
}


// Assets_animation_blueprint VerseAssets.Default__Assets_animation_blueprint
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAssets_animation_blueprint* UAssets_animation_blueprint::GetDefaultObj()
{
	static class UAssets_animation_blueprint* Default = nullptr;

	if (!Default)
		Default = static_cast<UAssets_animation_blueprint*>(UAssets_animation_blueprint::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseAssets.Assets_animation_blueprint.$InitInstance
// (None)
// Parameters:

void UAssets_animation_blueprint::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Assets_animation_blueprint", "$InitInstance");

	Params::UAssets_animation_blueprint__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseAssets.Assets_animation_blueprint.$Block
// (None)
// Parameters:

void UAssets_animation_blueprint::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Assets_animation_blueprint", "$Block");

	Params::UAssets_animation_blueprint__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseAssets.Assets_animation_blueprint.$InitCDO
// (None)
// Parameters:

void UAssets_animation_blueprint::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Assets_animation_blueprint", "$InitCDO");

	Params::UAssets_animation_blueprint__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseAssets.Assets_animation_instance
// (None)

class UClass* UAssets_animation_instance::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Assets_animation_instance");

	return Clss;
}


// Assets_animation_instance VerseAssets.Default__Assets_animation_instance
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAssets_animation_instance* UAssets_animation_instance::GetDefaultObj()
{
	static class UAssets_animation_instance* Default = nullptr;

	if (!Default)
		Default = static_cast<UAssets_animation_instance*>(UAssets_animation_instance::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseAssets.Assets_animation_instance.$InitInstance
// (None)
// Parameters:

void UAssets_animation_instance::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Assets_animation_instance", "$InitInstance");

	Params::UAssets_animation_instance__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseAssets.Assets_animation_instance.$Block
// (None)
// Parameters:

void UAssets_animation_instance::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Assets_animation_instance", "$Block");

	Params::UAssets_animation_instance__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseAssets.Assets_animation_instance.$InitCDO
// (None)
// Parameters:

void UAssets_animation_instance::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Assets_animation_instance", "$InitCDO");

	Params::UAssets_animation_instance__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseAssets.Assets_client_asset
// (None)

class UClass* UAssets_client_asset::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Assets_client_asset");

	return Clss;
}


// Assets_client_asset VerseAssets.Default__Assets_client_asset
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAssets_client_asset* UAssets_client_asset::GetDefaultObj()
{
	static class UAssets_client_asset* Default = nullptr;

	if (!Default)
		Default = static_cast<UAssets_client_asset*>(UAssets_client_asset::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseAssets.Assets_client_asset.$InitInstance
// (None)
// Parameters:

void UAssets_client_asset::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Assets_client_asset", "$InitInstance");

	Params::UAssets_client_asset__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseAssets.Assets_client_asset.$Block
// (None)
// Parameters:

void UAssets_client_asset::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Assets_client_asset", "$Block");

	Params::UAssets_client_asset__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseAssets.Assets_client_asset.$InitCDO
// (None)
// Parameters:

void UAssets_client_asset::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Assets_client_asset", "$InitCDO");

	Params::UAssets_client_asset__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseAssets.Assets_font
// (None)

class UClass* UAssets_font::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Assets_font");

	return Clss;
}


// Assets_font VerseAssets.Default__Assets_font
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAssets_font* UAssets_font::GetDefaultObj()
{
	static class UAssets_font* Default = nullptr;

	if (!Default)
		Default = static_cast<UAssets_font*>(UAssets_font::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseAssets.Assets_font.$InitInstance
// (None)
// Parameters:

void UAssets_font::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Assets_font", "$InitInstance");

	Params::UAssets_font__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseAssets.Assets_font.$Block
// (None)
// Parameters:

void UAssets_font::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Assets_font", "$Block");

	Params::UAssets_font__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseAssets.Assets_font.$InitCDO
// (None)
// Parameters:

void UAssets_font::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Assets_font", "$InitCDO");

	Params::UAssets_font__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseAssets.Assets_level
// (None)

class UClass* UAssets_level::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Assets_level");

	return Clss;
}


// Assets_level VerseAssets.Default__Assets_level
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAssets_level* UAssets_level::GetDefaultObj()
{
	static class UAssets_level* Default = nullptr;

	if (!Default)
		Default = static_cast<UAssets_level*>(UAssets_level::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseAssets.Assets_level.$InitInstance
// (None)
// Parameters:

void UAssets_level::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Assets_level", "$InitInstance");

	Params::UAssets_level__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseAssets.Assets_level.$Block
// (None)
// Parameters:

void UAssets_level::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Assets_level", "$Block");

	Params::UAssets_level__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseAssets.Assets_level.$InitCDO
// (None)
// Parameters:

void UAssets_level::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Assets_level", "$InitCDO");

	Params::UAssets_level__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseAssets.Assets_material
// (None)

class UClass* UAssets_material::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Assets_material");

	return Clss;
}


// Assets_material VerseAssets.Default__Assets_material
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAssets_material* UAssets_material::GetDefaultObj()
{
	static class UAssets_material* Default = nullptr;

	if (!Default)
		Default = static_cast<UAssets_material*>(UAssets_material::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseAssets.Assets_material.$InitInstance
// (None)
// Parameters:

void UAssets_material::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Assets_material", "$InitInstance");

	Params::UAssets_material__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseAssets.Assets_material.$Block
// (None)
// Parameters:

void UAssets_material::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Assets_material", "$Block");

	Params::UAssets_material__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseAssets.Assets_material.$InitCDO
// (None)
// Parameters:

void UAssets_material::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Assets_material", "$InitCDO");

	Params::UAssets_material__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseAssets.Assets_mesh
// (None)

class UClass* UAssets_mesh::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Assets_mesh");

	return Clss;
}


// Assets_mesh VerseAssets.Default__Assets_mesh
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAssets_mesh* UAssets_mesh::GetDefaultObj()
{
	static class UAssets_mesh* Default = nullptr;

	if (!Default)
		Default = static_cast<UAssets_mesh*>(UAssets_mesh::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseAssets.Assets_mesh.$InitInstance
// (None)
// Parameters:

void UAssets_mesh::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Assets_mesh", "$InitInstance");

	Params::UAssets_mesh__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseAssets.Assets_mesh.$Block
// (None)
// Parameters:

void UAssets_mesh::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Assets_mesh", "$Block");

	Params::UAssets_mesh__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseAssets.Assets_mesh.$InitCDO
// (None)
// Parameters:

void UAssets_mesh::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Assets_mesh", "$InitCDO");

	Params::UAssets_mesh__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseAssets.Assets_particle_system
// (None)

class UClass* UAssets_particle_system::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Assets_particle_system");

	return Clss;
}


// Assets_particle_system VerseAssets.Default__Assets_particle_system
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAssets_particle_system* UAssets_particle_system::GetDefaultObj()
{
	static class UAssets_particle_system* Default = nullptr;

	if (!Default)
		Default = static_cast<UAssets_particle_system*>(UAssets_particle_system::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseAssets.Assets_particle_system.$InitInstance
// (None)
// Parameters:

void UAssets_particle_system::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Assets_particle_system", "$InitInstance");

	Params::UAssets_particle_system__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseAssets.Assets_particle_system.$Block
// (None)
// Parameters:

void UAssets_particle_system::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Assets_particle_system", "$Block");

	Params::UAssets_particle_system__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseAssets.Assets_particle_system.$InitCDO
// (None)
// Parameters:

void UAssets_particle_system::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Assets_particle_system", "$InitCDO");

	Params::UAssets_particle_system__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseAssets.Assets_skeletal_mesh
// (None)

class UClass* UAssets_skeletal_mesh::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Assets_skeletal_mesh");

	return Clss;
}


// Assets_skeletal_mesh VerseAssets.Default__Assets_skeletal_mesh
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAssets_skeletal_mesh* UAssets_skeletal_mesh::GetDefaultObj()
{
	static class UAssets_skeletal_mesh* Default = nullptr;

	if (!Default)
		Default = static_cast<UAssets_skeletal_mesh*>(UAssets_skeletal_mesh::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseAssets.Assets_skeletal_mesh.$InitInstance
// (None)
// Parameters:

void UAssets_skeletal_mesh::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Assets_skeletal_mesh", "$InitInstance");

	Params::UAssets_skeletal_mesh__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseAssets.Assets_skeletal_mesh.$Block
// (None)
// Parameters:

void UAssets_skeletal_mesh::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Assets_skeletal_mesh", "$Block");

	Params::UAssets_skeletal_mesh__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseAssets.Assets_skeletal_mesh.$InitCDO
// (None)
// Parameters:

void UAssets_skeletal_mesh::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Assets_skeletal_mesh", "$InitCDO");

	Params::UAssets_skeletal_mesh__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseAssets.Assets_sound
// (None)

class UClass* UAssets_sound::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Assets_sound");

	return Clss;
}


// Assets_sound VerseAssets.Default__Assets_sound
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAssets_sound* UAssets_sound::GetDefaultObj()
{
	static class UAssets_sound* Default = nullptr;

	if (!Default)
		Default = static_cast<UAssets_sound*>(UAssets_sound::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseAssets.Assets_sound.$InitInstance
// (None)
// Parameters:

void UAssets_sound::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Assets_sound", "$InitInstance");

	Params::UAssets_sound__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseAssets.Assets_sound.$Block
// (None)
// Parameters:

void UAssets_sound::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Assets_sound", "$Block");

	Params::UAssets_sound__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseAssets.Assets_sound.$InitCDO
// (None)
// Parameters:

void UAssets_sound::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Assets_sound", "$InitCDO");

	Params::UAssets_sound__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseAssets.Assets_texture_base
// (None)

class UClass* UAssets_texture_base::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Assets_texture_base");

	return Clss;
}


// Assets_texture_base VerseAssets.Default__Assets_texture_base
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAssets_texture_base* UAssets_texture_base::GetDefaultObj()
{
	static class UAssets_texture_base* Default = nullptr;

	if (!Default)
		Default = static_cast<UAssets_texture_base*>(UAssets_texture_base::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseAssets.Assets_texture_base.$InitInstance
// (None)
// Parameters:

void UAssets_texture_base::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Assets_texture_base", "$InitInstance");

	Params::UAssets_texture_base__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseAssets.Assets_texture_base.$Block
// (None)
// Parameters:

void UAssets_texture_base::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Assets_texture_base", "$Block");

	Params::UAssets_texture_base__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseAssets.Assets_texture_base.$InitCDO
// (None)
// Parameters:

void UAssets_texture_base::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Assets_texture_base", "$InitCDO");

	Params::UAssets_texture_base__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// VerseClass VerseAssets.Assets_texture
// (None)

class UClass* UAssets_texture::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("Assets_texture");

	return Clss;
}


// Assets_texture VerseAssets.Default__Assets_texture
// (Public, ClassDefaultObject, ArchetypeObject, WasLoaded, LoadCompleted)

class UAssets_texture* UAssets_texture::GetDefaultObj()
{
	static class UAssets_texture* Default = nullptr;

	if (!Default)
		Default = static_cast<UAssets_texture*>(UAssets_texture::StaticClass()->DefaultObject);

	return Default;
}


// Function VerseAssets.Assets_texture.$InitInstance
// (None)
// Parameters:

void UAssets_texture::_InitInstance()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Assets_texture", "$InitInstance");

	Params::UAssets_texture__InitInstance_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseAssets.Assets_texture.$Block
// (None)
// Parameters:

void UAssets_texture::_Block()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Assets_texture", "$Block");

	Params::UAssets_texture__Block_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}


// Function VerseAssets.Assets_texture.$InitCDO
// (None)
// Parameters:

void UAssets_texture::_InitCDO()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("Assets_texture", "$InitCDO");

	Params::UAssets_texture__InitCDO_Params Parms{};


	UObject::ProcessEvent(Func, &Parms);

}

}


