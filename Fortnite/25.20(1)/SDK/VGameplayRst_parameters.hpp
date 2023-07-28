#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

#include "../SDK.hpp"

namespace SDK
{
namespace Params
{
//---------------------------------------------------------------------------------------------------------------------
// PARAMETERS
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x0 - 0x0)
// Function VGameplayRst.AudioComponentBase.OnRep_SoundAsset
struct UAudioComponentBase_OnRep_SoundAsset_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VGameplayRst.AudioComponentBase.OnRep_ActiveSoundInfo
struct UAudioComponentBase_OnRep_ActiveSoundInfo_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VGameplayRst.ControllerStateComponent.OnRep_ActiveStates
struct UControllerStateComponent_OnRep_ActiveStates_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function VGameplayRst.VerseLevelStreamingPlayerControllerRpcComponent.TellServer_ClientLevelUnloaded
struct UVerseLevelStreamingPlayerControllerRpcComponent_TellServer_ClientLevelUnloaded_Params
{
public:
	class UVerseLevelStreamingComponentBase*     LevelStreamingComponent;                           // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// Function VGameplayRst.VerseLevelStreamingPlayerControllerRpcComponent.TellServer_ClientLevelLoaded
struct UVerseLevelStreamingPlayerControllerRpcComponent_TellServer_ClientLevelLoaded_Params
{
public:
	class UVerseLevelStreamingComponentBase*     LevelStreamingComponent;                           // 0x0(0x8)(Parm, ZeroConstructor, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x0 - 0x0)
// Function VGameplayRst.VerseLevelStreamingComponentBase.OnRep_NewLevel
struct UVerseLevelStreamingComponentBase_OnRep_NewLevel_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VGameplayRst.VerseLevelStreamingComponentBase.OnLevelUnloaded_Server
struct UVerseLevelStreamingComponentBase_OnLevelUnloaded_Server_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VGameplayRst.VerseLevelStreamingComponentBase.OnLevelUnloaded_Client
struct UVerseLevelStreamingComponentBase_OnLevelUnloaded_Client_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VGameplayRst.VerseLevelStreamingComponentBase.OnLevelShown_Server
struct UVerseLevelStreamingComponentBase_OnLevelShown_Server_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VGameplayRst.VerseLevelStreamingComponentBase.OnLevelShown_Client
struct UVerseLevelStreamingComponentBase_OnLevelShown_Client_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VGameplayRst.VerseLightPropertiesBase.OnRep_LightComponent
struct UVerseLightPropertiesBase_OnRep_LightComponent_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VGameplayRst.VerseLightPropertiesBase.OnRep_LightColor
struct UVerseLightPropertiesBase_OnRep_LightColor_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VGameplayRst.VerseLightPropertiesBase.OnRep_Intensity
struct UVerseLightPropertiesBase_OnRep_Intensity_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VGameplayRst.VerseLocalLightProperties.OnRep_AttenuationRadius
struct UVerseLocalLightProperties_OnRep_AttenuationRadius_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VGameplayRst.VersePointLightProperties.OnRep_SourceRadius
struct UVersePointLightProperties_OnRep_SourceRadius_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VGameplayRst.VersePointLightProperties.OnRep_SourceLength
struct UVersePointLightProperties_OnRep_SourceLength_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VGameplayRst.VerseSpotLightProperties.OnRep_OuterConeAngle
struct UVerseSpotLightProperties_OnRep_OuterConeAngle_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VGameplayRst.VerseSpotLightProperties.OnRep_InnerConeAngle
struct UVerseSpotLightProperties_OnRep_InnerConeAngle_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VGameplayRst.ParticleSystemComponentBase.OnRep_ParticleSystemAsset
struct UParticleSystemComponentBase_OnRep_ParticleSystemAsset_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VGameplayRst.ParticleSystemComponentBase.OnRep_bActive
struct UParticleSystemComponentBase_OnRep_bActive_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
