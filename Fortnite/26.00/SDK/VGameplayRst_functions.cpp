#pragma once

// Dumped with Dumper-7!


#include "../SDK.hpp"

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// FUNCTIONS
//---------------------------------------------------------------------------------------------------------------------


// Class VGameplayRst.AudioComponentBase
// (None)

class UClass* UAudioComponentBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("AudioComponentBase");

	return Clss;
}


// AudioComponentBase VGameplayRst.Default__AudioComponentBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UAudioComponentBase* UAudioComponentBase::GetDefaultObj()
{
	static class UAudioComponentBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UAudioComponentBase*>(UAudioComponentBase::StaticClass()->DefaultObject);

	return Default;
}


// Function VGameplayRst.AudioComponentBase.OnRep_SoundAsset
// (Final, Native, Protected)
// Parameters:

void UAudioComponentBase::OnRep_SoundAsset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioComponentBase", "OnRep_SoundAsset");

	Params::UAudioComponentBase_OnRep_SoundAsset_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VGameplayRst.AudioComponentBase.OnRep_ActiveSoundInfo
// (Final, Native, Protected)
// Parameters:

void UAudioComponentBase::OnRep_ActiveSoundInfo()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("AudioComponentBase", "OnRep_ActiveSoundInfo");

	Params::UAudioComponentBase_OnRep_ActiveSoundInfo_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class VGameplayRst.ControllerStateComponent
// (None)

class UClass* UControllerStateComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ControllerStateComponent");

	return Clss;
}


// ControllerStateComponent VGameplayRst.Default__ControllerStateComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UControllerStateComponent* UControllerStateComponent::GetDefaultObj()
{
	static class UControllerStateComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UControllerStateComponent*>(UControllerStateComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function VGameplayRst.ControllerStateComponent.OnRep_ActiveStates
// (Final, Native, Private)
// Parameters:

void UControllerStateComponent::OnRep_ActiveStates()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ControllerStateComponent", "OnRep_ActiveStates");

	Params::UControllerStateComponent_OnRep_ActiveStates_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class VGameplayRst.DatastoreComponentBase
// (None)

class UClass* UDatastoreComponentBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("DatastoreComponentBase");

	return Clss;
}


// DatastoreComponentBase VGameplayRst.Default__DatastoreComponentBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UDatastoreComponentBase* UDatastoreComponentBase::GetDefaultObj()
{
	static class UDatastoreComponentBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UDatastoreComponentBase*>(UDatastoreComponentBase::StaticClass()->DefaultObject);

	return Default;
}


// Class VGameplayRst.VerseLevelStreamingPlayerControllerRpcComponent
// (None)

class UClass* UVerseLevelStreamingPlayerControllerRpcComponent::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseLevelStreamingPlayerControllerRpcComponent");

	return Clss;
}


// VerseLevelStreamingPlayerControllerRpcComponent VGameplayRst.Default__VerseLevelStreamingPlayerControllerRpcComponent
// (Public, ClassDefaultObject, ArchetypeObject)

class UVerseLevelStreamingPlayerControllerRpcComponent* UVerseLevelStreamingPlayerControllerRpcComponent::GetDefaultObj()
{
	static class UVerseLevelStreamingPlayerControllerRpcComponent* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseLevelStreamingPlayerControllerRpcComponent*>(UVerseLevelStreamingPlayerControllerRpcComponent::StaticClass()->DefaultObject);

	return Default;
}


// Function VGameplayRst.VerseLevelStreamingPlayerControllerRpcComponent.TellServer_ClientLevelUnloaded
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
// class UVerseLevelStreamingComponentBase*LevelStreamingComponent                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVerseLevelStreamingPlayerControllerRpcComponent::TellServer_ClientLevelUnloaded(class UVerseLevelStreamingComponentBase* LevelStreamingComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseLevelStreamingPlayerControllerRpcComponent", "TellServer_ClientLevelUnloaded");

	Params::UVerseLevelStreamingPlayerControllerRpcComponent_TellServer_ClientLevelUnloaded_Params Parms{};

	Parms.LevelStreamingComponent = LevelStreamingComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VGameplayRst.VerseLevelStreamingPlayerControllerRpcComponent.TellServer_ClientLevelLoaded
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
// class UVerseLevelStreamingComponentBase*LevelStreamingComponent                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVerseLevelStreamingPlayerControllerRpcComponent::TellServer_ClientLevelLoaded(class UVerseLevelStreamingComponentBase* LevelStreamingComponent)
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseLevelStreamingPlayerControllerRpcComponent", "TellServer_ClientLevelLoaded");

	Params::UVerseLevelStreamingPlayerControllerRpcComponent_TellServer_ClientLevelLoaded_Params Parms{};

	Parms.LevelStreamingComponent = LevelStreamingComponent;

	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class VGameplayRst.VerseLevelStreamingComponentBase
// (None)

class UClass* UVerseLevelStreamingComponentBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseLevelStreamingComponentBase");

	return Clss;
}


// VerseLevelStreamingComponentBase VGameplayRst.Default__VerseLevelStreamingComponentBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UVerseLevelStreamingComponentBase* UVerseLevelStreamingComponentBase::GetDefaultObj()
{
	static class UVerseLevelStreamingComponentBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseLevelStreamingComponentBase*>(UVerseLevelStreamingComponentBase::StaticClass()->DefaultObject);

	return Default;
}


// Function VGameplayRst.VerseLevelStreamingComponentBase.OnRep_NewLevel
// (Final, Native, Public)
// Parameters:

void UVerseLevelStreamingComponentBase::OnRep_NewLevel()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseLevelStreamingComponentBase", "OnRep_NewLevel");

	Params::UVerseLevelStreamingComponentBase_OnRep_NewLevel_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VGameplayRst.VerseLevelStreamingComponentBase.OnLevelUnloaded_Server
// (Final, Native, Public)
// Parameters:

void UVerseLevelStreamingComponentBase::OnLevelUnloaded_Server()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseLevelStreamingComponentBase", "OnLevelUnloaded_Server");

	Params::UVerseLevelStreamingComponentBase_OnLevelUnloaded_Server_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VGameplayRst.VerseLevelStreamingComponentBase.OnLevelUnloaded_Client
// (Final, Native, Public)
// Parameters:

void UVerseLevelStreamingComponentBase::OnLevelUnloaded_Client()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseLevelStreamingComponentBase", "OnLevelUnloaded_Client");

	Params::UVerseLevelStreamingComponentBase_OnLevelUnloaded_Client_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VGameplayRst.VerseLevelStreamingComponentBase.OnLevelShown_Server
// (Final, Native, Public)
// Parameters:

void UVerseLevelStreamingComponentBase::OnLevelShown_Server()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseLevelStreamingComponentBase", "OnLevelShown_Server");

	Params::UVerseLevelStreamingComponentBase_OnLevelShown_Server_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VGameplayRst.VerseLevelStreamingComponentBase.OnLevelShown_Client
// (Final, Native, Public)
// Parameters:

void UVerseLevelStreamingComponentBase::OnLevelShown_Client()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseLevelStreamingComponentBase", "OnLevelShown_Client");

	Params::UVerseLevelStreamingComponentBase_OnLevelShown_Client_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class VGameplayRst.PointLightComponentBase
// (None)

class UClass* UPointLightComponentBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("PointLightComponentBase");

	return Clss;
}


// PointLightComponentBase VGameplayRst.Default__PointLightComponentBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UPointLightComponentBase* UPointLightComponentBase::GetDefaultObj()
{
	static class UPointLightComponentBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UPointLightComponentBase*>(UPointLightComponentBase::StaticClass()->DefaultObject);

	return Default;
}


// Class VGameplayRst.SpotLightComponentBase
// (None)

class UClass* USpotLightComponentBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("SpotLightComponentBase");

	return Clss;
}


// SpotLightComponentBase VGameplayRst.Default__SpotLightComponentBase
// (Public, ClassDefaultObject, ArchetypeObject)

class USpotLightComponentBase* USpotLightComponentBase::GetDefaultObj()
{
	static class USpotLightComponentBase* Default = nullptr;

	if (!Default)
		Default = static_cast<USpotLightComponentBase*>(USpotLightComponentBase::StaticClass()->DefaultObject);

	return Default;
}


// Class VGameplayRst.VerseLightPropertiesBase
// (None)

class UClass* UVerseLightPropertiesBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseLightPropertiesBase");

	return Clss;
}


// VerseLightPropertiesBase VGameplayRst.Default__VerseLightPropertiesBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UVerseLightPropertiesBase* UVerseLightPropertiesBase::GetDefaultObj()
{
	static class UVerseLightPropertiesBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseLightPropertiesBase*>(UVerseLightPropertiesBase::StaticClass()->DefaultObject);

	return Default;
}


// Function VGameplayRst.VerseLightPropertiesBase.OnRep_LightComponent
// (Final, Native, Protected)
// Parameters:

void UVerseLightPropertiesBase::OnRep_LightComponent()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseLightPropertiesBase", "OnRep_LightComponent");

	Params::UVerseLightPropertiesBase_OnRep_LightComponent_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VGameplayRst.VerseLightPropertiesBase.OnRep_LightColor
// (Final, Native, Protected)
// Parameters:

void UVerseLightPropertiesBase::OnRep_LightColor()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseLightPropertiesBase", "OnRep_LightColor");

	Params::UVerseLightPropertiesBase_OnRep_LightColor_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VGameplayRst.VerseLightPropertiesBase.OnRep_Intensity
// (Final, Native, Protected)
// Parameters:

void UVerseLightPropertiesBase::OnRep_Intensity()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseLightPropertiesBase", "OnRep_Intensity");

	Params::UVerseLightPropertiesBase_OnRep_Intensity_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class VGameplayRst.VerseLocalLightProperties
// (None)

class UClass* UVerseLocalLightProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseLocalLightProperties");

	return Clss;
}


// VerseLocalLightProperties VGameplayRst.Default__VerseLocalLightProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UVerseLocalLightProperties* UVerseLocalLightProperties::GetDefaultObj()
{
	static class UVerseLocalLightProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseLocalLightProperties*>(UVerseLocalLightProperties::StaticClass()->DefaultObject);

	return Default;
}


// Function VGameplayRst.VerseLocalLightProperties.OnRep_AttenuationRadius
// (Final, Native, Protected)
// Parameters:

void UVerseLocalLightProperties::OnRep_AttenuationRadius()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseLocalLightProperties", "OnRep_AttenuationRadius");

	Params::UVerseLocalLightProperties_OnRep_AttenuationRadius_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class VGameplayRst.VersePointLightProperties
// (None)

class UClass* UVersePointLightProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VersePointLightProperties");

	return Clss;
}


// VersePointLightProperties VGameplayRst.Default__VersePointLightProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UVersePointLightProperties* UVersePointLightProperties::GetDefaultObj()
{
	static class UVersePointLightProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UVersePointLightProperties*>(UVersePointLightProperties::StaticClass()->DefaultObject);

	return Default;
}


// Function VGameplayRst.VersePointLightProperties.OnRep_SourceRadius
// (Final, Native, Public)
// Parameters:

void UVersePointLightProperties::OnRep_SourceRadius()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VersePointLightProperties", "OnRep_SourceRadius");

	Params::UVersePointLightProperties_OnRep_SourceRadius_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VGameplayRst.VersePointLightProperties.OnRep_SourceLength
// (Final, Native, Public)
// Parameters:

void UVersePointLightProperties::OnRep_SourceLength()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VersePointLightProperties", "OnRep_SourceLength");

	Params::UVersePointLightProperties_OnRep_SourceLength_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class VGameplayRst.VerseSpotLightProperties
// (None)

class UClass* UVerseSpotLightProperties::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("VerseSpotLightProperties");

	return Clss;
}


// VerseSpotLightProperties VGameplayRst.Default__VerseSpotLightProperties
// (Public, ClassDefaultObject, ArchetypeObject)

class UVerseSpotLightProperties* UVerseSpotLightProperties::GetDefaultObj()
{
	static class UVerseSpotLightProperties* Default = nullptr;

	if (!Default)
		Default = static_cast<UVerseSpotLightProperties*>(UVerseSpotLightProperties::StaticClass()->DefaultObject);

	return Default;
}


// Function VGameplayRst.VerseSpotLightProperties.OnRep_OuterConeAngle
// (Final, Native, Public)
// Parameters:

void UVerseSpotLightProperties::OnRep_OuterConeAngle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseSpotLightProperties", "OnRep_OuterConeAngle");

	Params::UVerseSpotLightProperties_OnRep_OuterConeAngle_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VGameplayRst.VerseSpotLightProperties.OnRep_InnerConeAngle
// (Final, Native, Public)
// Parameters:

void UVerseSpotLightProperties::OnRep_InnerConeAngle()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("VerseSpotLightProperties", "OnRep_InnerConeAngle");

	Params::UVerseSpotLightProperties_OnRep_InnerConeAngle_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Class VGameplayRst.ParticleSystemComponentBase
// (None)

class UClass* UParticleSystemComponentBase::StaticClass()
{
	static class UClass* Clss = nullptr;

	if (!Clss)
		Clss = UObject::FindClassFast("ParticleSystemComponentBase");

	return Clss;
}


// ParticleSystemComponentBase VGameplayRst.Default__ParticleSystemComponentBase
// (Public, ClassDefaultObject, ArchetypeObject)

class UParticleSystemComponentBase* UParticleSystemComponentBase::GetDefaultObj()
{
	static class UParticleSystemComponentBase* Default = nullptr;

	if (!Default)
		Default = static_cast<UParticleSystemComponentBase*>(UParticleSystemComponentBase::StaticClass()->DefaultObject);

	return Default;
}


// Function VGameplayRst.ParticleSystemComponentBase.OnRep_ParticleSystemAsset
// (Final, Native, Protected)
// Parameters:

void UParticleSystemComponentBase::OnRep_ParticleSystemAsset()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ParticleSystemComponentBase", "OnRep_ParticleSystemAsset");

	Params::UParticleSystemComponentBase_OnRep_ParticleSystemAsset_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}


// Function VGameplayRst.ParticleSystemComponentBase.OnRep_bActive
// (Final, Native, Protected)
// Parameters:

void UParticleSystemComponentBase::OnRep_bActive()
{
	static class UFunction* Func = nullptr;

	if (!Func)
		Func = Class->GetFunction("ParticleSystemComponentBase", "OnRep_bActive");

	Params::UParticleSystemComponentBase_OnRep_bActive_Params Parms{};


	auto Flgs = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flgs;

}

}


