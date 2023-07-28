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


// Function VGameplayRst.AudioComponentBase.OnRep_SoundAsset
// (Final, Native, Protected)
// Parameters:

void UAudioComponentBase::OnRep_SoundAsset()
{
	static auto Func = Class->GetFunction("AudioComponentBase", "OnRep_SoundAsset");

	Params::UAudioComponentBase_OnRep_SoundAsset_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VGameplayRst.AudioComponentBase.OnRep_ActiveSoundInfo
// (Final, Native, Protected)
// Parameters:

void UAudioComponentBase::OnRep_ActiveSoundInfo()
{
	static auto Func = Class->GetFunction("AudioComponentBase", "OnRep_ActiveSoundInfo");

	Params::UAudioComponentBase_OnRep_ActiveSoundInfo_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VGameplayRst.ControllerStateComponent.OnRep_ActiveStates
// (Final, Native, Private)
// Parameters:

void UControllerStateComponent::OnRep_ActiveStates()
{
	static auto Func = Class->GetFunction("ControllerStateComponent", "OnRep_ActiveStates");

	Params::UControllerStateComponent_OnRep_ActiveStates_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VGameplayRst.VerseLevelStreamingPlayerControllerRpcComponent.TellServer_ClientLevelUnloaded
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
// class UVerseLevelStreamingComponentBase*LevelStreamingComponent                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVerseLevelStreamingPlayerControllerRpcComponent::TellServer_ClientLevelUnloaded(class UVerseLevelStreamingComponentBase* LevelStreamingComponent)
{
	static auto Func = Class->GetFunction("VerseLevelStreamingPlayerControllerRpcComponent", "TellServer_ClientLevelUnloaded");

	Params::UVerseLevelStreamingPlayerControllerRpcComponent_TellServer_ClientLevelUnloaded_Params Parms;

	Parms.LevelStreamingComponent = LevelStreamingComponent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VGameplayRst.VerseLevelStreamingPlayerControllerRpcComponent.TellServer_ClientLevelLoaded
// (Net, NetReliable, Native, Event, Public, NetServer)
// Parameters:
// class UVerseLevelStreamingComponentBase*LevelStreamingComponent                                          (Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

void UVerseLevelStreamingPlayerControllerRpcComponent::TellServer_ClientLevelLoaded(class UVerseLevelStreamingComponentBase* LevelStreamingComponent)
{
	static auto Func = Class->GetFunction("VerseLevelStreamingPlayerControllerRpcComponent", "TellServer_ClientLevelLoaded");

	Params::UVerseLevelStreamingPlayerControllerRpcComponent_TellServer_ClientLevelLoaded_Params Parms;

	Parms.LevelStreamingComponent = LevelStreamingComponent;

	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VGameplayRst.VerseLevelStreamingComponentBase.OnRep_NewLevel
// (Final, Native, Public)
// Parameters:

void UVerseLevelStreamingComponentBase::OnRep_NewLevel()
{
	static auto Func = Class->GetFunction("VerseLevelStreamingComponentBase", "OnRep_NewLevel");

	Params::UVerseLevelStreamingComponentBase_OnRep_NewLevel_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VGameplayRst.VerseLevelStreamingComponentBase.OnLevelUnloaded_Server
// (Final, Native, Public)
// Parameters:

void UVerseLevelStreamingComponentBase::OnLevelUnloaded_Server()
{
	static auto Func = Class->GetFunction("VerseLevelStreamingComponentBase", "OnLevelUnloaded_Server");

	Params::UVerseLevelStreamingComponentBase_OnLevelUnloaded_Server_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VGameplayRst.VerseLevelStreamingComponentBase.OnLevelUnloaded_Client
// (Final, Native, Public)
// Parameters:

void UVerseLevelStreamingComponentBase::OnLevelUnloaded_Client()
{
	static auto Func = Class->GetFunction("VerseLevelStreamingComponentBase", "OnLevelUnloaded_Client");

	Params::UVerseLevelStreamingComponentBase_OnLevelUnloaded_Client_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VGameplayRst.VerseLevelStreamingComponentBase.OnLevelShown_Server
// (Final, Native, Public)
// Parameters:

void UVerseLevelStreamingComponentBase::OnLevelShown_Server()
{
	static auto Func = Class->GetFunction("VerseLevelStreamingComponentBase", "OnLevelShown_Server");

	Params::UVerseLevelStreamingComponentBase_OnLevelShown_Server_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VGameplayRst.VerseLevelStreamingComponentBase.OnLevelShown_Client
// (Final, Native, Public)
// Parameters:

void UVerseLevelStreamingComponentBase::OnLevelShown_Client()
{
	static auto Func = Class->GetFunction("VerseLevelStreamingComponentBase", "OnLevelShown_Client");

	Params::UVerseLevelStreamingComponentBase_OnLevelShown_Client_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VGameplayRst.VerseLightPropertiesBase.OnRep_LightComponent
// (Final, Native, Protected)
// Parameters:

void UVerseLightPropertiesBase::OnRep_LightComponent()
{
	static auto Func = Class->GetFunction("VerseLightPropertiesBase", "OnRep_LightComponent");

	Params::UVerseLightPropertiesBase_OnRep_LightComponent_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VGameplayRst.VerseLightPropertiesBase.OnRep_LightColor
// (Final, Native, Protected)
// Parameters:

void UVerseLightPropertiesBase::OnRep_LightColor()
{
	static auto Func = Class->GetFunction("VerseLightPropertiesBase", "OnRep_LightColor");

	Params::UVerseLightPropertiesBase_OnRep_LightColor_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VGameplayRst.VerseLightPropertiesBase.OnRep_Intensity
// (Final, Native, Protected)
// Parameters:

void UVerseLightPropertiesBase::OnRep_Intensity()
{
	static auto Func = Class->GetFunction("VerseLightPropertiesBase", "OnRep_Intensity");

	Params::UVerseLightPropertiesBase_OnRep_Intensity_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VGameplayRst.VerseLocalLightProperties.OnRep_AttenuationRadius
// (Final, Native, Protected)
// Parameters:

void UVerseLocalLightProperties::OnRep_AttenuationRadius()
{
	static auto Func = Class->GetFunction("VerseLocalLightProperties", "OnRep_AttenuationRadius");

	Params::UVerseLocalLightProperties_OnRep_AttenuationRadius_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VGameplayRst.VersePointLightProperties.OnRep_SourceRadius
// (Final, Native, Public)
// Parameters:

void UVersePointLightProperties::OnRep_SourceRadius()
{
	static auto Func = Class->GetFunction("VersePointLightProperties", "OnRep_SourceRadius");

	Params::UVersePointLightProperties_OnRep_SourceRadius_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VGameplayRst.VersePointLightProperties.OnRep_SourceLength
// (Final, Native, Public)
// Parameters:

void UVersePointLightProperties::OnRep_SourceLength()
{
	static auto Func = Class->GetFunction("VersePointLightProperties", "OnRep_SourceLength");

	Params::UVersePointLightProperties_OnRep_SourceLength_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VGameplayRst.VerseSpotLightProperties.OnRep_OuterConeAngle
// (Final, Native, Public)
// Parameters:

void UVerseSpotLightProperties::OnRep_OuterConeAngle()
{
	static auto Func = Class->GetFunction("VerseSpotLightProperties", "OnRep_OuterConeAngle");

	Params::UVerseSpotLightProperties_OnRep_OuterConeAngle_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VGameplayRst.VerseSpotLightProperties.OnRep_InnerConeAngle
// (Final, Native, Public)
// Parameters:

void UVerseSpotLightProperties::OnRep_InnerConeAngle()
{
	static auto Func = Class->GetFunction("VerseSpotLightProperties", "OnRep_InnerConeAngle");

	Params::UVerseSpotLightProperties_OnRep_InnerConeAngle_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VGameplayRst.ParticleSystemComponentBase.OnRep_ParticleSystemAsset
// (Final, Native, Protected)
// Parameters:

void UParticleSystemComponentBase::OnRep_ParticleSystemAsset()
{
	static auto Func = Class->GetFunction("ParticleSystemComponentBase", "OnRep_ParticleSystemAsset");

	Params::UParticleSystemComponentBase_OnRep_ParticleSystemAsset_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}


// Function VGameplayRst.ParticleSystemComponentBase.OnRep_bActive
// (Final, Native, Protected)
// Parameters:

void UParticleSystemComponentBase::OnRep_bActive()
{
	static auto Func = Class->GetFunction("ParticleSystemComponentBase", "OnRep_bActive");

	Params::UParticleSystemComponentBase_OnRep_bActive_Params Parms;


	auto Flags = Func->FunctionFlags;
	Func->FunctionFlags |= 0x400;

	UObject::ProcessEvent(Func, &Parms);


	Func->FunctionFlags = Flags;

}

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
