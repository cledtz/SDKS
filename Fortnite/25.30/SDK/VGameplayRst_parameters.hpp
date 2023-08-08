#pragma once

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
struct UParticleSystemComponentBase_OnRep_PAudio_audio_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fAudio_2faudio__component_N_REndSound_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function VGameplayRst.VGameplayRst_Audio_audio_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fAudio_2faudio__component_N_RBeginSound
struct UVGameplayRst_Audio_audio_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fAudio_2faudio__component_N_RBeginSound_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function VGameplayRst.VGameplayRst_Audio_audio_component.$InitInstance
struct UVGameplayRst_Audio_audio_component__InitInstance_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VGameplayRst.VGameplayRst_Audio_audio_component.$Block
struct UVGameplayRst_Audio_audio_component__Block_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VGameplayRst.VGameplayRst_Audio_audio_component.$InitCDO
struct UVGameplayRst_Audio_audio_component__InitCDO_Params
{
public:
};

// 0x28 (0x28 - 0x0)
// Function VGameplayRst.VGameplayRst_Components_dynamic_activation_component.WaitForTransitionComplete
struct UVGameplayRst_Components_dynamic_activation_component_WaitForTransitionComplete_Params
{
public:
	class UConcurrency_task*                     __verse_0xC1E81372_CallingTask;                    // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int64                                        __verse_0xA3A00DDB_CallerResumeState;              // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        __verse_0x2AC0E4D8_CallerCancelState;              // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x18(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_659[0x7];                                      // Fixing Size After Last Property
	class UConcurrency_task*                     RetVal;                                            // 0x20(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function VGameplayRst.VGameplayRst_Components_dynamic_activation_component.WaitForTransitionBegin
struct UVGameplayRst_Components_dynamic_activation_component_WaitForTransitionBegin_Params
{
public:
	class UConcurrency_task*                     __verse_0xC1E81372_CallingTask;                    // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int64                                        __verse_0xA3A00DDB_CallerResumeState;              // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        __verse_0x2AC0E4D8_CallerCancelState;              // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x18(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_664[0x7];                                      // Fixing Size After Last Property
	class UConcurrency_task*                     RetVal;                                            // 0x20(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function VGameplayRst.VGameplayRst_Components_dynamic_activation_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fdynamic__activation__component_N_RUnlinkComponent_L_Ncomponent_R
struct UVGameplayRst_Components_dynamic_activation_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fdynamic__activation__component_N_RUnlinkComponent_L_Ncomponent_R_Params
{
public:
	class UEntityComponent*                      __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function VGameplayRst.VGameplayRst_Components_dynamic_activation_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fdynamic__activation__component_N_RReset
struct UVGameplayRst_Components_dynamic_activation_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fdynamic__activation__component_N_RReset_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function VGameplayRst.VGameplayRst_Components_dynamic_activation_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fdynamic__activation__component_N_RLinkComponent_L_Ncomponent_R
struct UVGameplayRst_Components_dynamic_activation_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fdynamic__activation__component_N_RLinkComponent_L_Ncomponent_R_Params
{
public:
	class UEntityComponent*                      __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function VGameplayRst.VGameplayRst_Components_dynamic_activation_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fdynamic__activation__component_N_RBeginTransition_L_Nfloat_M_Nactivation__state_R
struct UVGameplayRst_Components_dynamic_activation_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fdynamic__activation__component_N_RBeginTransition_L_Nfloat_M_Nactivation__state_R_Params
{
public:
	struct FTuple_Lfloat_Mactivation__state_R    __verse_0xB2CDDD72_Argument;                       // 0x0(0x9)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_66B[0x7];                                      // Fixing Size Of Struct
};

// 0x0 (0x0 - 0x0)
// Function VGameplayRst.VGameplayRst_Components_dynamic_activation_component.$InitInstance
struct UVGameplayRst_Components_dynamic_activation_component__InitInstance_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VGameplayRst.VGameplayRst_Components_dynamic_activation_component.$Block
struct UVGameplayRst_Components_dynamic_activation_component__Block_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VGameplayRst.VGameplayRst_Components_dynamic_activation_component.$InitCDO
struct UVGameplayRst_Components_dynamic_activation_component__InitCDO_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function VGameplayRst.VGameplayRst_Components_script_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_RSetTickEnabled_L_Nlogic_R
struct UVGameplayRst_Components_script_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_RSetTickEnabled_L_Nlogic_R_Params
{
public:
	uint8                                        __verse_0xB2CDDD72_Argument : 1;                   // Mask: 0x1, PropSize: 0x10x0(0x1)(Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function VGameplayRst.VGameplayRst_Components_script_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_RSetEnabled_L_Nlogic_R
struct UVGameplayRst_Components_script_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_RSetEnabled_L_Nlogic_R_Params
{
public:
	uint8                                        __verse_0xB2CDDD72_Argument : 1;                   // Mask: 0x1, PropSize: 0x10x0(0x1)(Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function VGameplayRst.VGameplayRst_Components_script_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_ROnTick_L_Nfloat_R
struct UVGameplayRst_Components_script_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_ROnTick_L_Nfloat_R_Params
{
public:
	double                                       __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function VGameplayRst.VGameplayRst_Components_script_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_ROnPostCreate
struct UVGameplayRst_Components_script_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_ROnPostCreate_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function VGameplayRst.VGameplayRst_Components_script_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_ROnEnd
struct UVGameplayRst_Components_script_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_ROnEnd_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function VGameplayRst.VGameplayRst_Components_script_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_ROnEnabledChanged_L_Nlogic_R
struct UVGameplayRst_Components_script_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_ROnEnabledChanged_L_Nlogic_R_Params
{
public:
	uint8                                        __verse_0xB2CDDD72_Argument : 1;                   // Mask: 0x1, PropSize: 0x10x0(0x1)(Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function VGameplayRst.VGameplayRst_Components_script_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_ROnCreate
struct UVGameplayRst_Components_script_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_ROnCreate_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function VGameplayRst.VGameplayRst_Components_script_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_ROnBegin
struct UVGameplayRst_Components_script_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_ROnBegin_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
};

// 0x9 (0x9 - 0x0)
// Function VGameplayRst.VGameplayRst_Components_script_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_RIsOwner_L_Nentity_R
struct UVGameplayRst_Components_script_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_RIsOwner_L_Nentity_R_Params
{
public:
	class UVerseEngine_Entity_entity*            __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	uint8                                        RetVal : 1;                                        // Mask: 0x1, PropSize: 0x10x8(0x1)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function VGameplayRst.VGameplayRst_Components_script_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_RIsEnabled
struct UVGameplayRst_Components_script_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_RIsEnabled_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        RetVal : 1;                                        // Mask: 0x1, PropSize: 0x10x1(0x1)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function VGameplayRst.VGameplayRst_Components_script_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_RGetName
struct UVGameplayRst_Components_script_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_RGetName_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_688[0x7];                                      // Fixing Size After Last Property
	FVerseStringProperty_                        RetVal;                                            // 0x8(0x10)(Parm, OutParm, ReturnParm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function VGameplayRst.VGameplayRst_Components_script_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_RGetFullname
struct UVGameplayRst_Components_script_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_RGetFullname_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_691[0x7];                                      // Fixing Size After Last Property
	FVerseStringProperty_                        RetVal;                                            // 0x8(0x10)(Parm, OutParm, ReturnParm, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function VGameplayRst.VGameplayRst_Components_script_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_RGetComponentOfType_L_NcomponentType_20where_20componentType_R
struct UVGameplayRst_Components_script_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_RGetComponentOfType_L_NcomponentType_20where_20componentType_R_Params
{
public:
	class UClass*                                __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             RetVal;                                            // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function VGameplayRst.VGameplayRst_Components_script_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_RGetAllComponentsOfType_L_NcomponentType_20where_20componentType_R
struct UVGameplayRst_Components_script_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_RGetAllComponentsOfType_L_NcomponentType_20where_20componentType_R_Params
{
public:
	class UClass*                                __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	TArray<class UEntityComponent*>              RetVal;                                            // 0x8(0x10)(Parm, OutParm, ReturnParm, ContainsInstancedReference)
};

// 0x10 (0x10 - 0x0)
// Function VGameplayRst.VGameplayRst_Components_script_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_RAddToRequiredComponentList_L_N_Ksubtype_Lcomponent_R_R
struct UVGameplayRst_Components_script_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_RAddToRequiredComponentList_L_N_Ksubtype_Lcomponent_R_R_Params
{
public:
	TArray<class UClass*>                        __verse_0xB2CDDD72_Argument;                       // 0x0(0x10)(Parm, ContainsInstancedReference)
};

// 0x10 (0x10 - 0x0)
// Function VGameplayRst.VGameplayRst_Components_script_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_RAddToCreateComponentList_L_N_Ksubtype_Lcomponent_R_R
struct UVGameplayRst_Components_script_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fComponents_2fscript__component_N_RAddToCreateComponentList_L_N_Ksubtype_Lcomponent_R_R_Params
{
public:
	TArray<class UClass*>                        __verse_0xB2CDDD72_Argument;                       // 0x0(0x10)(Parm, ContainsInstancedReference)
};

// 0x0 (0x0 - 0x0)
// Function VGameplayRst.VGameplayRst_Components_script_component.$InitInstance
struct UVGameplayRst_Components_script_component__InitInstance_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VGameplayRst.VGameplayRst_Components_script_component.$Block
struct UVGameplayRst_Components_script_component__Block_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function VGameplayRst.VGameplayRst_Components_script_component.$InitCDO
struct UVGameplayRst_Components_script_component__InitCDO_Params
{
public:
	uint8                                        _ExprResult_0 : 1;                                 // Mask: 0x1, PropSize: 0x10x0(0x1)(NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function VGameplayRst.VGameplayRst_Datastore_datastore_component.$InitInstance
struct UVGameplayRst_Datastore_datastore_component__InitInstance_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VGameplayRst.VGameplayRst_Datastore_datastore_component.$Block
struct UVGameplayRst_Datastore_datastore_component__Block_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VGameplayRst.VGameplayRst_Datastore_datastore_component.$InitCDO
struct UVGameplayRst_Datastore_datastore_component__InitCDO_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function VGameplayRst.VGameplayRst_Datastore_DatastoreComponent._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fDatastore_2fDatastoreComponent_N_RSetDatastoreValueInt_L_Nplayer__component_M_N_Kchar_M_Nint_R
struct UVGameplayRst_Datastore_DatastoreComponent__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fDatastore_2fDatastoreComponent_N_RSetDatastoreValueInt_L_Nplayer__component_M_N_Kchar_M_Nint_R_Params
{
public:
	struct FTuple_Lplayer__component_M_Kchar_Mint_R __verse_0xB2CDDD72_Argument;                       // 0x0(0x20)(Parm, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function VGameplayRst.VGameplayRst_Datastore_DatastoreComponent._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fDatastore_2fDatastoreComponent_N_RSetDatastoreValue_L_Nplayer__component_M_N_Kchar_M_N_Kchar_R
struct UVGameplayRst_Datastore_DatastoreComponent__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fDatastore_2fDatastoreComponent_N_RSetDatastoreValue_L_Nplayer__component_M_N_Kchar_M_N_Kchar_R_Params
{
public:
	struct FTuple_Lplayer__component_M_Kchar_M_Kchar_R __verse_0xB2CDDD72_Argument;                       // 0x0(0x28)(Parm, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function VGameplayRst.VGameplayRst_Datastore_DatastoreComponent._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fDatastore_2fDatastoreComponent_N_RClearAllDatastoreValues_L_Nplayer__component_R
struct UVGameplayRst_Datastore_DatastoreComponent__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fDatastore_2fDatastoreComponent_N_RClearAllDatastoreValues_L_Nplayer__component_R_Params
{
public:
	class USimulation_player_component*          __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function VGameplayRst.VGameplayRst_Datastore_DatastoreComponent.$InitCDO
struct UVGameplayRst_Datastore_DatastoreComponent__InitCDO_Params
{
public:
};

// 0x88 (0x88 - 0x0)
// Function VGameplayRst.VGameplayRst_EntityUtil._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fEntityUtil_N_RSpawnEntityFromAsset_L_N_Kchar_M_Ntransform_M_N_Kchar_R
struct UVGameplayRst_EntityUtil__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fEntityUtil_N_RSpawnEntityFromAsset_L_N_Kchar_M_Ntransform_M_N_Kchar_R_Params
{
public:
	struct FTuple_L_Kchar_Mtransform_M_Kchar_R   __verse_0xB2CDDD72_Argument;                       // 0x0(0x80)(Parm, HasGetValueTypeHash)
	int64                                        RetVal;                                            // 0x80(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function VGameplayRst.VGameplayRst_EntityUtil._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fEntityUtil_N_RSpawnEntity_L_Nvector3_M_N_Kchar_R
struct UVGameplayRst_EntityUtil__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fEntityUtil_N_RSpawnEntity_L_Nvector3_M_N_Kchar_R_Params
{
public:
	struct FTuple_Lvector3_M_Kchar_R             __verse_0xB2CDDD72_Argument;                       // 0x0(0x28)(Parm, HasGetValueTypeHash)
	FOptionProperty_                             RetVal;                                            // 0x28(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x60 (0x60 - 0x0)
// Function VGameplayRst.VGameplayRst_EntityUtil._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fEntityUtil_N_RSpawnEntity_L_Nvector3_M_Nvector3_M_Nvector3_M_N_Kchar_R
struct UVGameplayRst_EntityUtil__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fEntityUtil_N_RSpawnEntity_L_Nvector3_M_Nvector3_M_Nvector3_M_N_Kchar_R_Params
{
public:
	struct FTuple_Lvector3_Mvector3_Mvector3_M_Kchar_R __verse_0xB2CDDD72_Argument;                       // 0x0(0x58)(Parm, HasGetValueTypeHash)
	FOptionProperty_                             RetVal;                                            // 0x58(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x78 (0x78 - 0x0)
// Function VGameplayRst.VGameplayRst_EntityUtil._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fEntityUtil_N_RSpawnEntity_L_Ntransform_M_N_Kchar_R
struct UVGameplayRst_EntityUtil__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fEntityUtil_N_RSpawnEntity_L_Ntransform_M_N_Kchar_R_Params
{
public:
	struct FTuple_Ltransform_M_Kchar_R           __verse_0xB2CDDD72_Argument;                       // 0x0(0x70)(Parm, HasGetValueTypeHash)
	FOptionProperty_                             RetVal;                                            // 0x70(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x78 (0x78 - 0x0)
// Function VGameplayRst.VGameplayRst_EntityUtil._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fEntityUtil_N_RSpawnEmptyEntity_L_Ntransform_M_N_Kchar_R
struct UVGameplayRst_EntityUtil__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fEntityUtil_N_RSpawnEmptyEntity_L_Ntransform_M_N_Kchar_R_Params
{
public:
	struct FTuple_Ltransform_M_Kchar_R           __verse_0xB2CDDD72_Argument;                       // 0x0(0x70)(Parm, HasGetValueTypeHash)
	int64                                        RetVal;                                            // 0x70(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function VGameplayRst.VGameplayRst_EntityUtil._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fEntityUtil_N_RGetComponentOfTypeFromComponentForEntity_L_Ncomponent_M_Nint_M_NType_20where_20Type_R
struct UVGameplayRst_EntityUtil__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fEntityUtil_N_RGetComponentOfTypeFromComponentForEntity_L_Ncomponent_M_Nint_M_NType_20where_20Type_R_Params
{
public:
	struct FTuple_Lcomponent_Mint_Many_R         __verse_0xB2CDDD72_Argument;                       // 0x0(0x18)(Parm, HasGetValueTypeHash)
	FOptionProperty_                             RetVal;                                            // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function VGameplayRst.VGameplayRst_EntityUtil._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fEntityUtil_N_RGetComponentOfTypeFromComponent_L_Ncomponent_M_NType_20where_20Type_R
struct UVGameplayRst_EntityUtil__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fEntityUtil_N_RGetComponentOfTypeFromComponent_L_Ncomponent_M_NType_20where_20Type_R_Params
{
public:
	struct FTuple_Lcomponent_Many_R              __verse_0xB2CDDD72_Argument;                       // 0x0(0x10)(Parm, HasGetValueTypeHash)
	FOptionProperty_                             RetVal;                                            // 0x10(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function VGameplayRst.VGameplayRst_EntityUtil._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fEntityUtil_N_RCreateAndAddComponent_L_Nint_M_NComponentType_20where_20ComponentType_R
struct UVGameplayRst_EntityUtil__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fEntityUtil_N_RCreateAndAddComponent_L_Nint_M_NComponentType_20where_20ComponentType_R_Params
{
public:
	struct FTuple_Lint_Mcomponent_R              __verse_0xB2CDDD72_Argument;                       // 0x0(0x10)(Parm, HasGetValueTypeHash)
	class UEntityComponent*                      RetVal;                                            // 0x10(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function VGameplayRst.VGameplayRst_EntityUtil.$InitCDO
struct UVGameplayRst_EntityUtil__InitCDO_Params
{
public:
};

// 0xA0 (0xA0 - 0x0)
// Function VGameplayRst.VGameplayRst_GameObjects._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateWorldAnchor_L_Nvector3_R
struct UVGameplayRst_GameObjects__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateWorldAnchor_L_Nvector3_R_Params
{
public:
	struct FSpatialMath_vector3                  __verse_0xB2CDDD72_Argument;                       // 0x0(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	FOptionProperty_                             RetVal;                                            // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x11C2BB4E_OptionResult_1;                 // 0x20(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_0;                                         // 0x28(0x10)(HasGetValueTypeHash)
	struct FTuple_Lvector3_M_Kchar_R             _ExprResult_1;                                     // 0x38(0x28)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_2;                                     // 0x60(0x10)(HasGetValueTypeHash)
	class UVGameplayRst_GameObjects_world_anchor* __verse_0x95D09D0E_Result_2;                       // 0x70(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_3;                                // 0x78(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	class UVGameplayRst_GameObjects_world_anchor* __verse_0x00000000__3;                             // 0x80(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_4;                          // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6BE[0x7];                                      // Fixing Size After Last Property
	FVerseFunctionProperty_                      _Callee_5;                                         // 0x90(0x10)(HasGetValueTypeHash)
};

// 0xA3 (0xA3 - 0x0)
// Function VGameplayRst.VGameplayRst_GameObjects._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateWorldAnchor_L_Ntag_R
struct UVGameplayRst_GameObjects__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateWorldAnchor_L_Ntag_R_Params
{
public:
	class UTags_tag*                             __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             RetVal;                                            // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x00000000__1;                             // 0x10(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6C5[0x6];                                      // Fixing Size After Last Property
	class UEntityComponent*                      __verse_0x44719314_FoundComponent_3;               // 0x18(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_0;                                // 0x20(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_1;                                         // 0x28(0x10)(HasGetValueTypeHash)
	class UVerseEngine_Entity_entity*            __verse_0x5F5E89D8_ValidEntity_3;                  // 0x38(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_2;                                // 0x40(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_3;                                         // 0x48(0x10)(HasGetValueTypeHash)
	FOptionProperty_                             __verse_0xB24E940D_OptionComponent_3;              // 0x58(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	class UVerseEngine_Entity_entity*            __verse_0x00000000__4;                             // 0x60(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_4;                                         // 0x68(0x10)(HasGetValueTypeHash)
	class UVGameplayRst_Transform_position_component* __verse_0xA82B0967_Position_5;                     // 0x78(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             _FallibleType_5;                                   // 0x80(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_6;                                // 0x88(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	class UVGameplayRst_GameObjects_world_anchor* __verse_0x95D09D0E_Result_6;                       // 0x90(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	uint64                                       _InstancingGraph_7;                                // 0x98(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _ExprResult_8 : 1;                                 // Mask: 0x1, PropSize: 0x10xA0(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_22 : 7;                                     // Fixing Bit-Field Size
	FOptionProperty_                             _ExprResultStack_9;                                // 0xA1(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x63 (0x63 - 0x0)
// Function VGameplayRst.VGameplayRst_GameObjects._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateWorldAnchor_L_Nentity_R
struct UVGameplayRst_GameObjects__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateWorldAnchor_L_Nentity_R_Params
{
public:
	class UVerseEngine_Entity_entity*            __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             RetVal;                                            // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x00000000__1;                             // 0x10(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6CA[0x6];                                      // Fixing Size After Last Property
	FOptionProperty_                             __verse_0x68BB659B_OptionEntity_2;                 // 0x18(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	class UVerseEngine_Entity_entity*            __verse_0x00000000__3;                             // 0x20(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_0;                                         // 0x28(0x10)(HasGetValueTypeHash)
	class UVGameplayRst_Transform_position_component* __verse_0xA82B0967_Position_4;                     // 0x38(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             _FallibleType_1;                                   // 0x40(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_2;                                // 0x48(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	class UVGameplayRst_GameObjects_world_anchor* _ExprResult_3;                                     // 0x50(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	uint64                                       _InstancingGraph_4;                                // 0x58(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _ExprResult_5 : 1;                                 // Mask: 0x1, PropSize: 0x10x60(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_23 : 7;                                     // Fixing Bit-Field Size
	FOptionProperty_                             _ExprResultStack_6;                                // 0x61(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0xD3 (0xD3 - 0x0)
// Function VGameplayRst.VGameplayRst_GameObjects._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateWorldAnchor_L_Nvector3_M_N_Kchar_R
struct UVGameplayRst_GameObjects__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateWorldAnchor_L_Nvector3_M_N_Kchar_R_Params
{
public:
	struct FTuple_Lvector3_M_Kchar_R             __verse_0xB2CDDD72_Argument;                       // 0x0(0x28)(Parm, HasGetValueTypeHash)
	FOptionProperty_                             RetVal;                                            // 0x28(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x00000000__1;                             // 0x30(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6D4[0x6];                                      // Fixing Size After Last Property
	FOptionProperty_                             __verse_0x68BB659B_OptionEntity_2;                 // 0x38(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_0;                                         // 0x40(0x10)(HasGetValueTypeHash)
	struct FTuple_Lvector3_M_Kchar_R             _ExprResult_1;                                     // 0x50(0x28)(HasGetValueTypeHash)
	class UVerseEngine_Entity_entity*            __verse_0x5F5E89D8_ValidEntity_3;                  // 0x78(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_2;                                // 0x80(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x11C2BB4E_OptionResult_4;                 // 0x88(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_3;                                         // 0x90(0x10)(HasGetValueTypeHash)
	class UVGameplayRst_GameObjects_world_anchor* __verse_0x95D09D0E_Result_5;                       // 0xA0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_4;                                // 0xA8(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	class UVGameplayRst_GameObjects_world_anchor* __verse_0x00000000__6;                             // 0xB0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_5;                          // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6D6[0x7];                                      // Fixing Size After Last Property
	FVerseFunctionProperty_                      _Callee_6;                                         // 0xC0(0x10)(HasGetValueTypeHash)
	uint8                                        _ExprResult_7 : 1;                                 // Mask: 0x1, PropSize: 0x10xD0(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_24 : 7;                                     // Fixing Bit-Field Size
	FOptionProperty_                             _ExprResultStack_8;                                // 0xD1(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x250 (0x250 - 0x0)
// Function VGameplayRst.VGameplayRst_GameObjects._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_N_Ksubtype_Lcomponent_R_M_Nvector3_M_Nrotation_M_Nvector3_M_N_Kchar_M_Nmesh_M_Nmaterial_R
struct UVGameplayRst_GameObjects__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_N_Ksubtype_Lcomponent_R_M_Nvector3_M_Nrotation_M_Nvector3_M_N_Kchar_M_Nmesh_M_Nmaterial_R_Params
{
public:
	struct FTuple_L_Ksubtype_Lcomponent_R_Mvector3_Mrotation_Mvector3_M_Kchar_Mmesh_Mmaterial_R __verse_0xB2CDDD72_Argument;                       // 0x0(0x88)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_6E1[0x8];                                      // Fixing Size After Last Property
	FOptionProperty_                             RetVal;                                            // 0x90(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x2BD82FE8_MaybeModel_1;                   // 0x98(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_0;                                         // 0xA0(0x10)(HasGetValueTypeHash)
	struct FTuple_L_Ksubtype_Lcomponent_R_Mtransform_M_Kchar_Mmesh_R _ExprResult_1;                                     // 0xB0(0x88)(HasGetValueTypeHash)
	uint8                                        Pad_6E2[0x8];                                      // Fixing Size After Last Property
	struct FSpatialMath_transform                _ExprResult_2;                                     // 0x140(0x60)(NoDestructor)
	TMap<FVerseStringProperty_, uint8>           _ExprResultStack_3;                                // 0x1A0(0x50)(ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResult_4;                                     // 0x1F0(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_5;                                     // 0x200(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_6;                                     // 0x210(0x10)(HasGetValueTypeHash)
	class UVGameplayRst_GameObjects_model*       __verse_0x986678F9_Model_2;                        // 0x220(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_7;                                // 0x228(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	class UVGameplayRst_Geometry_fixed_mesh_component* __verse_0x00000000__3;                             // 0x230(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_8;                          // 0x238(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6E7[0x7];                                      // Fixing Size After Last Property
	FVerseFunctionProperty_                      _Callee_9;                                         // 0x240(0x10)(HasGetValueTypeHash)
};

// 0x230 (0x230 - 0x0)
// Function VGameplayRst.VGameplayRst_GameObjects._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_Nvector3_M_Nrotation_M_Nvector3_M_N_Kchar_M_Nmesh_M_Nmaterial_R
struct UVGameplayRst_GameObjects__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_Nvector3_M_Nrotation_M_Nvector3_M_N_Kchar_M_Nmesh_M_Nmaterial_R_Params
{
public:
	struct FTuple_Lvector3_Mrotation_Mvector3_M_Kchar_Mmesh_Mmaterial_R __verse_0xB2CDDD72_Argument;                       // 0x0(0x78)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_6EF[0x8];                                      // Fixing Size After Last Property
	FOptionProperty_                             RetVal;                                            // 0x80(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x2BD82FE8_MaybeModel_1;                   // 0x88(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_0;                                         // 0x90(0x10)(HasGetValueTypeHash)
	struct FTuple_Ltransform_M_Kchar_Mmesh_R     _ExprResult_1;                                     // 0xA0(0x78)(HasGetValueTypeHash)
	uint8                                        Pad_6F0[0x8];                                      // Fixing Size After Last Property
	struct FSpatialMath_transform                _ExprResult_2;                                     // 0x120(0x60)(NoDestructor)
	TMap<FVerseStringProperty_, uint8>           _ExprResultStack_3;                                // 0x180(0x50)(ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResult_4;                                     // 0x1D0(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_5;                                     // 0x1E0(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_6;                                     // 0x1F0(0x10)(HasGetValueTypeHash)
	class UVGameplayRst_GameObjects_model*       __verse_0x986678F9_Model_2;                        // 0x200(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_7;                                // 0x208(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	class UVGameplayRst_Geometry_fixed_mesh_component* __verse_0x00000000__3;                             // 0x210(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_8;                          // 0x218(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F1[0x7];                                      // Fixing Size After Last Property
	FVerseFunctionProperty_                      _Callee_9;                                         // 0x220(0x10)(HasGetValueTypeHash)
};

// 0x2A8 (0x2A8 - 0x0)
// Function VGameplayRst.VGameplayRst_GameObjects._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_Nvector3_M_Nrotation_M_N_Kchar_M_Nmesh_M_Nmaterial_R
struct UVGameplayRst_GameObjects__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_Nvector3_M_Nrotation_M_N_Kchar_M_Nmesh_M_Nmaterial_R_Params
{
public:
	struct FTuple_Lvector3_Mrotation_M_Kchar_Mmesh_Mmaterial_R __verse_0xB2CDDD72_Argument;                       // 0x0(0x60)(Parm, HasGetValueTypeHash)
	FOptionProperty_                             RetVal;                                            // 0x60(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x2BD82FE8_MaybeModel_1;                   // 0x68(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_0;                                         // 0x70(0x10)(HasGetValueTypeHash)
	struct FTuple_Ltransform_M_Kchar_Mmesh_R     _ExprResult_1;                                     // 0x80(0x78)(HasGetValueTypeHash)
	uint8                                        Pad_6F4[0x8];                                      // Fixing Size After Last Property
	struct FSpatialMath_transform                _ExprResult_2;                                     // 0x100(0x60)(NoDestructor)
	TMap<FVerseStringProperty_, uint8>           _ExprResultStack_3;                                // 0x160(0x50)(ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResult_4;                                     // 0x1B0(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_5;                                     // 0x1C0(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_6;                                     // 0x1D0(0x10)(HasGetValueTypeHash)
	struct FSpatialMath_vector3                  _ExprResult_7;                                     // 0x1E0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TMap<FVerseStringProperty_, uint8>           _ExprResultStack_8;                                // 0x1F8(0x50)(ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResult_9;                                     // 0x248(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_10;                                    // 0x258(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_11;                                    // 0x268(0x10)(HasGetValueTypeHash)
	class UVGameplayRst_GameObjects_model*       __verse_0x986678F9_Model_2;                        // 0x278(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_12;                               // 0x280(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	class UVGameplayRst_Geometry_fixed_mesh_component* __verse_0x00000000__3;                             // 0x288(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_13;                         // 0x290(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_6F5[0x7];                                      // Fixing Size After Last Property
	FVerseFunctionProperty_                      _Callee_14;                                        // 0x298(0x10)(HasGetValueTypeHash)
};

// 0x2C0 (0x2C0 - 0x0)
// Function VGameplayRst.VGameplayRst_GameObjects._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_Nvector3_M_N_Kchar_M_Nmesh_M_Nmaterial_R
struct UVGameplayRst_GameObjects__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_Nvector3_M_N_Kchar_M_Nmesh_M_Nmaterial_R_Params
{
public:
	struct FTuple_Lvector3_M_Kchar_Mmesh_Mmaterial_R __verse_0xB2CDDD72_Argument;                       // 0x0(0x38)(Parm, HasGetValueTypeHash)
	FOptionProperty_                             RetVal;                                            // 0x38(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x2BD82FE8_MaybeModel_1;                   // 0x40(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_0;                                         // 0x48(0x10)(HasGetValueTypeHash)
	uint8                                        Pad_6FE[0x8];                                      // Fixing Size After Last Property
	struct FTuple_Ltransform_M_Kchar_Mmesh_R     _ExprResult_1;                                     // 0x60(0x78)(HasGetValueTypeHash)
	uint8                                        Pad_6FF[0x8];                                      // Fixing Size After Last Property
	struct FSpatialMath_transform                _ExprResult_2;                                     // 0xE0(0x60)(NoDestructor)
	TMap<FVerseStringProperty_, uint8>           _ExprResultStack_3;                                // 0x140(0x50)(ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResult_4;                                     // 0x190(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_5;                                     // 0x1A0(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_6;                                     // 0x1B0(0x10)(HasGetValueTypeHash)
	struct FVerseRotation                        _ExprResultStack_7;                                // 0x1C0(0x20)(NoDestructor)
	FVerseFunctionProperty_                      _Callee_8;                                         // 0x1E0(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_9;                                     // 0x1F0(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_701[0x7];                                      // Fixing Size After Last Property
	struct FSpatialMath_vector3                  _ExprResult_10;                                    // 0x1F8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	TMap<FVerseStringProperty_, uint8>           _ExprResultStack_11;                               // 0x210(0x50)(ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResult_12;                                    // 0x260(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_13;                                    // 0x270(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_14;                                    // 0x280(0x10)(HasGetValueTypeHash)
	class UVGameplayRst_GameObjects_model*       __verse_0x986678F9_Model_2;                        // 0x290(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_15;                               // 0x298(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	class UVGameplayRst_Geometry_fixed_mesh_component* __verse_0x00000000__3;                             // 0x2A0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_16;                         // 0x2A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_703[0x7];                                      // Fixing Size After Last Property
	FVerseFunctionProperty_                      _Callee_17;                                        // 0x2B0(0x10)(HasGetValueTypeHash)
};

// 0x170 (0x170 - 0x0)
// Function VGameplayRst.VGameplayRst_GameObjects._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_N_Ksubtype_Lcomponent_R_M_Ntransform_M_N_Kchar_M_Nmesh_M_Nmaterial_R
struct UVGameplayRst_GameObjects__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_N_Ksubtype_Lcomponent_R_M_Ntransform_M_N_Kchar_M_Nmesh_M_Nmaterial_R_Params
{
public:
	struct FTuple_L_Ksubtype_Lcomponent_R_Mtransform_M_Kchar_Mmesh_Mmaterial_R __verse_0xB2CDDD72_Argument;                       // 0x0(0x90)(Parm, HasGetValueTypeHash)
	FOptionProperty_                             RetVal;                                            // 0x90(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x2BD82FE8_MaybeModel_1;                   // 0x98(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_0;                                         // 0xA0(0x10)(HasGetValueTypeHash)
	struct FTuple_L_Ksubtype_Lcomponent_R_Mtransform_M_Kchar_Mmesh_R _ExprResult_1;                                     // 0xB0(0x88)(HasGetValueTypeHash)
	uint8                                        Pad_70C[0x8];                                      // Fixing Size After Last Property
	class UVGameplayRst_GameObjects_model*       __verse_0x986678F9_Model_2;                        // 0x140(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_2;                                // 0x148(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	class UVGameplayRst_Geometry_fixed_mesh_component* __verse_0x00000000__3;                             // 0x150(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_3;                          // 0x158(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_70D[0x7];                                      // Fixing Size After Last Property
	FVerseFunctionProperty_                      _Callee_4;                                         // 0x160(0x10)(HasGetValueTypeHash)
};

// 0x150 (0x150 - 0x0)
// Function VGameplayRst.VGameplayRst_GameObjects._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_Ntransform_M_N_Kchar_M_Nmesh_M_Nmaterial_R
struct UVGameplayRst_GameObjects__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_Ntransform_M_N_Kchar_M_Nmesh_M_Nmaterial_R_Params
{
public:
	struct FTuple_Ltransform_M_Kchar_Mmesh_Mmaterial_R __verse_0xB2CDDD72_Argument;                       // 0x0(0x80)(Parm, HasGetValueTypeHash)
	FOptionProperty_                             RetVal;                                            // 0x80(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x2BD82FE8_MaybeModel_1;                   // 0x88(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_0;                                         // 0x90(0x10)(HasGetValueTypeHash)
	struct FTuple_Ltransform_M_Kchar_Mmesh_R     _ExprResult_1;                                     // 0xA0(0x78)(HasGetValueTypeHash)
	uint8                                        Pad_713[0x8];                                      // Fixing Size After Last Property
	class UVGameplayRst_GameObjects_model*       __verse_0x986678F9_Model_2;                        // 0x120(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_2;                                // 0x128(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	class UVGameplayRst_Geometry_fixed_mesh_component* __verse_0x00000000__3;                             // 0x130(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_3;                          // 0x138(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_714[0x7];                                      // Fixing Size After Last Property
	FVerseFunctionProperty_                      _Callee_4;                                         // 0x140(0x10)(HasGetValueTypeHash)
};

// 0x1F3 (0x1F3 - 0x0)
// Function VGameplayRst.VGameplayRst_GameObjects._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_N_Ksubtype_Lcomponent_R_M_Ntransform_M_N_Kchar_M_Nmesh_R
struct UVGameplayRst_GameObjects__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_N_Ksubtype_Lcomponent_R_M_Ntransform_M_N_Kchar_M_Nmesh_R_Params
{
public:
	struct FTuple_L_Ksubtype_Lcomponent_R_Mtransform_M_Kchar_Mmesh_R __verse_0xB2CDDD72_Argument;                       // 0x0(0x88)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_71A[0x8];                                      // Fixing Size After Last Property
	FOptionProperty_                             RetVal;                                            // 0x90(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x00000000__1;                             // 0x98(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_71B[0x6];                                      // Fixing Size After Last Property
	FOptionProperty_                             __verse_0x6BB06783_MaybeObj_2;                     // 0xA0(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_0;                                         // 0xA8(0x10)(HasGetValueTypeHash)
	uint8                                        Pad_71C[0x8];                                      // Fixing Size After Last Property
	struct FTuple_Ltransform_M_Kchar_R           _ExprResult_1;                                     // 0xC0(0x70)(HasGetValueTypeHash)
	class UVerseEngine_Entity_entity*            __verse_0x4F5E77FF_Obj_3;                          // 0x130(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_2;                                // 0x138(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x2BD82FE8_MaybeModel_4;                   // 0x140(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_3;                                         // 0x148(0x10)(HasGetValueTypeHash)
	struct FTuple_Lentity_M_Ksubtype_Lcomponent_R_R _ExprResult_4;                                     // 0x158(0x18)(HasGetValueTypeHash)
	class UVGameplayRst_GameObjects_model*       __verse_0x986678F9_Model_5;                        // 0x170(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_5;                                // 0x178(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	class UVGameplayRst_Geometry_fixed_mesh_component* __verse_0x00000000__6;                             // 0x180(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_6;                          // 0x188(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_71E[0x7];                                      // Fixing Size After Last Property
	FVerseFunctionProperty_                      _Callee_7;                                         // 0x190(0x10)(HasGetValueTypeHash)
	class UVGameplayRst_Geometry_fixed_mesh_component* __verse_0x00000000__7;                             // 0x1A0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_8;                          // 0x1A8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_71F[0x7];                                      // Fixing Size After Last Property
	FVerseFunctionProperty_                      _Callee_9;                                         // 0x1B0(0x10)(HasGetValueTypeHash)
	class UVGameplayRst_Physics_collision_component* __verse_0x00000000__8;                             // 0x1C0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_10;                         // 0x1C8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_720[0x7];                                      // Fixing Size After Last Property
	FVerseFunctionProperty_                      _Callee_11;                                        // 0x1D0(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_12;                                    // 0x1E0(0x10)(HasGetValueTypeHash)
	uint8                                        _ExprResult_13 : 1;                                // Mask: 0x1, PropSize: 0x10x1F0(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_2B : 7;                                     // Fixing Bit-Field Size
	FOptionProperty_                             _ExprResultStack_14;                               // 0x1F1(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1CB (0x1CB - 0x0)
// Function VGameplayRst.VGameplayRst_GameObjects._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_Ntransform_M_N_Kchar_M_Nmesh_R
struct UVGameplayRst_GameObjects__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_Ntransform_M_N_Kchar_M_Nmesh_R_Params
{
public:
	struct FTuple_Ltransform_M_Kchar_Mmesh_R     __verse_0xB2CDDD72_Argument;                       // 0x0(0x78)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_72E[0x8];                                      // Fixing Size After Last Property
	FOptionProperty_                             RetVal;                                            // 0x80(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x00000000__1;                             // 0x88(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_72F[0x6];                                      // Fixing Size After Last Property
	FOptionProperty_                             __verse_0x6BB06783_MaybeObj_2;                     // 0x90(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_0;                                         // 0x98(0x10)(HasGetValueTypeHash)
	uint8                                        Pad_730[0x8];                                      // Fixing Size After Last Property
	struct FTuple_Ltransform_M_Kchar_R           _ExprResult_1;                                     // 0xB0(0x70)(HasGetValueTypeHash)
	class UVerseEngine_Entity_entity*            __verse_0x4F5E77FF_Obj_3;                          // 0x120(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_2;                                // 0x128(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x2BD82FE8_MaybeModel_4;                   // 0x130(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_3;                                         // 0x138(0x10)(HasGetValueTypeHash)
	class UVGameplayRst_GameObjects_model*       __verse_0x986678F9_Model_5;                        // 0x148(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_4;                                // 0x150(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	class UVGameplayRst_Geometry_fixed_mesh_component* __verse_0x00000000__6;                             // 0x158(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_5;                          // 0x160(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_731[0x7];                                      // Fixing Size After Last Property
	FVerseFunctionProperty_                      _Callee_6;                                         // 0x168(0x10)(HasGetValueTypeHash)
	class UVGameplayRst_Geometry_fixed_mesh_component* __verse_0x00000000__7;                             // 0x178(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_7;                          // 0x180(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_732[0x7];                                      // Fixing Size After Last Property
	FVerseFunctionProperty_                      _Callee_8;                                         // 0x188(0x10)(HasGetValueTypeHash)
	class UVGameplayRst_Physics_collision_component* __verse_0x00000000__8;                             // 0x198(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_9;                          // 0x1A0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_734[0x7];                                      // Fixing Size After Last Property
	FVerseFunctionProperty_                      _Callee_10;                                        // 0x1A8(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_11;                                    // 0x1B8(0x10)(HasGetValueTypeHash)
	uint8                                        _ExprResult_12 : 1;                                // Mask: 0x1, PropSize: 0x10x1C8(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_2F : 7;                                     // Fixing Bit-Field Size
	FOptionProperty_                             _ExprResultStack_13;                               // 0x1C9(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1BB (0x1BB - 0x0)
// Function VGameplayRst.VGameplayRst_GameObjects._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_Nentity_M_N_Ksubtype_Lcomponent_R_R
struct UVGameplayRst_GameObjects__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_Nentity_M_N_Ksubtype_Lcomponent_R_R_Params
{
public:
	struct FTuple_Lentity_M_Ksubtype_Lcomponent_R_R __verse_0xB2CDDD72_Argument;                       // 0x0(0x18)(Parm, HasGetValueTypeHash)
	FOptionProperty_                             RetVal;                                            // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x00000000__1;                             // 0x20(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_747[0x6];                                      // Fixing Size After Last Property
	TArray<class UClass*>                        __verse_0x36974CE7_ComponentClassesToAdd_2;        // 0x28(0x10)(ContainsInstancedReference)
	TArray<class UClass*>                        _ExprResult_0;                                     // 0x38(0x10)(ContainsInstancedReference)
	class UVerseEngine_Entity_entity*            __verse_0x00000000__3;                             // 0x48(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_1;                          // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_749[0x7];                                      // Fixing Size After Last Property
	FVerseFunctionProperty_                      _Callee_2;                                         // 0x58(0x10)(HasGetValueTypeHash)
	class UVGameplayRst_Geometry_fixed_mesh_component* __verse_0x71AD33A7_Mesh_4;                         // 0x68(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             _FallibleType_3;                                   // 0x70(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_4;                                // 0x78(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_5;                                     // 0x80(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	class UVerseEngine_Entity_entity*            __verse_0x00000000__5;                             // 0x88(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_6;                                         // 0x90(0x10)(HasGetValueTypeHash)
	class UVGameplayRst_Geometry_fixed_mesh_component* __verse_0x00000000__6;                             // 0xA0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_7;                          // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_74A[0x7];                                      // Fixing Size After Last Property
	FVerseFunctionProperty_                      _Callee_8;                                         // 0xB0(0x10)(HasGetValueTypeHash)
	struct FTuple_Llogic_Mlogic_R                _ExprResult_9;                                     // 0xC0(0x2)(HasGetValueTypeHash)
	uint8                                        Pad_74C[0x6];                                      // Fixing Size After Last Property
	class UVGameplayRst_Physics_collision_component* __verse_0x802C815C_Collision_4;                    // 0xC8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             _FallibleType_10;                                  // 0xD0(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_11;                               // 0xD8(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_12;                                    // 0xE0(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	class UVerseEngine_Entity_entity*            __verse_0x00000000__7;                             // 0xE8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_13;                                        // 0xF0(0x10)(HasGetValueTypeHash)
	class UVGameplayRst_Transform_position_component* __verse_0xA82B0967_Position_4;                     // 0x100(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             _FallibleType_14;                                  // 0x108(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_15;                               // 0x110(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_16;                                    // 0x118(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	class UVerseEngine_Entity_entity*            __verse_0x00000000__8;                             // 0x120(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_17;                                        // 0x128(0x10)(HasGetValueTypeHash)
	class UVGameplayRst_Transform_rotation_component* __verse_0x78C70FF3_Rotation_4;                     // 0x138(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             _FallibleType_18;                                  // 0x140(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_19;                               // 0x148(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_20;                                    // 0x150(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	class UVerseEngine_Entity_entity*            __verse_0x00000000__9;                             // 0x158(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_21;                                        // 0x160(0x10)(HasGetValueTypeHash)
	class UVGameplayRst_Transform_scale_component* __verse_0xA376805D_Scale_4;                        // 0x170(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             _FallibleType_22;                                  // 0x178(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_23;                               // 0x180(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_24;                                    // 0x188(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	class UVerseEngine_Entity_entity*            __verse_0x00000000__10;                            // 0x190(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_25;                                        // 0x198(0x10)(HasGetValueTypeHash)
	class UVGameplayRst_GameObjects_model*       __verse_0x95D09D0E_Result_11;                      // 0x1A8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	uint64                                       _InstancingGraph_26;                               // 0x1B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _ExprResult_27 : 1;                                // Mask: 0x1, PropSize: 0x10x1B8(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_30 : 7;                                     // Fixing Bit-Field Size
	FOptionProperty_                             _ExprResultStack_28;                               // 0x1B9(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x6B (0x6B - 0x0)
// Function VGameplayRst.VGameplayRst_GameObjects._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_Ntag_R
struct UVGameplayRst_GameObjects__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_Ntag_R_Params
{
public:
	class UTags_tag*                             __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             RetVal;                                            // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x00000000__1;                             // 0x10(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_75C[0x6];                                      // Fixing Size After Last Property
	class UEntityComponent*                      __verse_0x44719314_FoundComponent_3;               // 0x18(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_0;                                // 0x20(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_1;                                         // 0x28(0x10)(HasGetValueTypeHash)
	class UVerseEngine_Entity_entity*            __verse_0xECA943DB_Entity_3;                       // 0x38(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_2;                                // 0x40(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_3;                                         // 0x48(0x10)(HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_4;                                         // 0x58(0x10)(HasGetValueTypeHash)
	uint8                                        _ExprResult_5 : 1;                                 // Mask: 0x1, PropSize: 0x10x68(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_31 : 7;                                     // Fixing Bit-Field Size
	FOptionProperty_                             _ExprResultStack_6;                                // 0x69(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x80 (0x80 - 0x0)
// Function VGameplayRst.VGameplayRst_GameObjects._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_Nentity_R
struct UVGameplayRst_GameObjects__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateModel_L_Nentity_R_Params
{
public:
	class UVerseEngine_Entity_entity*            __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             RetVal;                                            // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<class UClass*>                        __verse_0xDFAF13A0_ComponentClassToAdd_1;          // 0x10(0x10)(ContainsInstancedReference)
	TArray<enum class EVerseFalse>               __verse_0xFFC68BC5_Array_2;                        // 0x20(0x10)(ContainsInstancedReference)
	TArray<class UClass*>                        _ForResult_0;                                      // 0x30(0x10)(ContainsInstancedReference)
	int64                                        _ForIndex_1;                                       // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        _ForLength_2;                                      // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EVerseFalse                       __verse_0xFB88B569_Item_4;                         // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _ExprResult_3 : 1;                                 // Mask: 0x1, PropSize: 0x10x51(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_32 : 7;                                     // Fixing Bit-Field Size
	uint8                                        Pad_76D[0x6];                                      // Fixing Size After Last Property
	FVerseFunctionProperty_                      _Callee_4;                                         // 0x58(0x10)(HasGetValueTypeHash)
	struct FTuple_Lentity_M_Ksubtype_Lcomponent_R_R _ExprResult_5;                                     // 0x68(0x18)(HasGetValueTypeHash)
};

// 0x80 (0x80 - 0x0)
// Function VGameplayRst.VGameplayRst_GameObjects._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateImmutableModel_L_Nentity_R
struct UVGameplayRst_GameObjects__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateImmutableModel_L_Nentity_R_Params
{
public:
	class UVerseEngine_Entity_entity*            __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             RetVal;                                            // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	TArray<class UClass*>                        __verse_0xDFAF13A0_ComponentClassToAdd_1;          // 0x10(0x10)(ContainsInstancedReference)
	TArray<enum class EVerseFalse>               __verse_0xFFC68BC5_Array_2;                        // 0x20(0x10)(ContainsInstancedReference)
	TArray<class UClass*>                        _ForResult_0;                                      // 0x30(0x10)(ContainsInstancedReference)
	int64                                        _ForIndex_1;                                       // 0x40(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        _ForLength_2;                                      // 0x48(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	enum class EVerseFalse                       __verse_0xFB88B569_Item_4;                         // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _ExprResult_3 : 1;                                 // Mask: 0x1, PropSize: 0x10x51(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_36 : 7;                                     // Fixing Bit-Field Size
	uint8                                        Pad_77D[0x6];                                      // Fixing Size After Last Property
	FVerseFunctionProperty_                      _Callee_4;                                         // 0x58(0x10)(HasGetValueTypeHash)
	struct FTuple_Lentity_M_Ksubtype_Lcomponent_R_R _ExprResult_5;                                     // 0x68(0x18)(HasGetValueTypeHash)
};

// 0x6B (0x6B - 0x0)
// Function VGameplayRst.VGameplayRst_GameObjects._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateImmutableModel_L_Ntag_R
struct UVGameplayRst_GameObjects__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateImmutableModel_L_Ntag_R_Params
{
public:
	class UTags_tag*                             __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             RetVal;                                            // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x00000000__1;                             // 0x10(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_797[0x6];                                      // Fixing Size After Last Property
	class UEntityComponent*                      __verse_0x44719314_FoundComponent_3;               // 0x18(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_0;                                // 0x20(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_1;                                         // 0x28(0x10)(HasGetValueTypeHash)
	class UVerseEngine_Entity_entity*            __verse_0xECA943DB_Entity_3;                       // 0x38(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_2;                                // 0x40(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_3;                                         // 0x48(0x10)(HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_4;                                         // 0x58(0x10)(HasGetValueTypeHash)
	uint8                                        _ExprResult_5 : 1;                                 // Mask: 0x1, PropSize: 0x10x68(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_39 : 7;                                     // Fixing Bit-Field Size
	FOptionProperty_                             _ExprResultStack_6;                                // 0x69(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1BB (0x1BB - 0x0)
// Function VGameplayRst.VGameplayRst_GameObjects._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateImmutableModel_L_Nentity_M_N_Ksubtype_Lcomponent_R_R
struct UVGameplayRst_GameObjects__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_N_RCreateImmutableModel_L_Nentity_M_N_Ksubtype_Lcomponent_R_R_Params
{
public:
	struct FTuple_Lentity_M_Ksubtype_Lcomponent_R_R __verse_0xB2CDDD72_Argument;                       // 0x0(0x18)(Parm, HasGetValueTypeHash)
	FOptionProperty_                             RetVal;                                            // 0x18(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             __verse_0x00000000__1;                             // 0x20(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7D6[0x6];                                      // Fixing Size After Last Property
	TArray<class UClass*>                        __verse_0x36974CE7_ComponentClassesToAdd_2;        // 0x28(0x10)(ContainsInstancedReference)
	TArray<class UClass*>                        _ExprResult_0;                                     // 0x38(0x10)(ContainsInstancedReference)
	class UVerseEngine_Entity_entity*            __verse_0x00000000__3;                             // 0x48(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_1;                          // 0x50(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7D8[0x7];                                      // Fixing Size After Last Property
	FVerseFunctionProperty_                      _Callee_2;                                         // 0x58(0x10)(HasGetValueTypeHash)
	class UVGameplayRst_Geometry_fixed_mesh_component* __verse_0x71AD33A7_Mesh_4;                         // 0x68(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             _FallibleType_3;                                   // 0x70(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_4;                                // 0x78(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_5;                                     // 0x80(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	class UVerseEngine_Entity_entity*            __verse_0x00000000__5;                             // 0x88(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_6;                                         // 0x90(0x10)(HasGetValueTypeHash)
	class UVGameplayRst_Geometry_fixed_mesh_component* __verse_0x00000000__6;                             // 0xA0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_7;                          // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_7E3[0x7];                                      // Fixing Size After Last Property
	FVerseFunctionProperty_                      _Callee_8;                                         // 0xB0(0x10)(HasGetValueTypeHash)
	struct FTuple_Llogic_Mlogic_R                _ExprResult_9;                                     // 0xC0(0x2)(HasGetValueTypeHash)
	uint8                                        Pad_7E5[0x6];                                      // Fixing Size After Last Property
	class UVGameplayRst_Physics_collision_component* __verse_0x802C815C_Collision_4;                    // 0xC8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             _FallibleType_10;                                  // 0xD0(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_11;                               // 0xD8(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_12;                                    // 0xE0(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	class UVerseEngine_Entity_entity*            __verse_0x00000000__7;                             // 0xE8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_13;                                        // 0xF0(0x10)(HasGetValueTypeHash)
	class UVGameplayRst_Transform_position_component* __verse_0xA82B0967_Position_4;                     // 0x100(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             _FallibleType_14;                                  // 0x108(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_15;                               // 0x110(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_16;                                    // 0x118(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	class UVerseEngine_Entity_entity*            __verse_0x00000000__8;                             // 0x120(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_17;                                        // 0x128(0x10)(HasGetValueTypeHash)
	class UVGameplayRst_Transform_rotation_component* __verse_0x78C70FF3_Rotation_4;                     // 0x138(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             _FallibleType_18;                                  // 0x140(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_19;                               // 0x148(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_20;                                    // 0x150(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	class UVerseEngine_Entity_entity*            __verse_0x00000000__9;                             // 0x158(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_21;                                        // 0x160(0x10)(HasGetValueTypeHash)
	class UVGameplayRst_Transform_scale_component* __verse_0xA376805D_Scale_4;                        // 0x170(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FOptionProperty_                             _FallibleType_22;                                  // 0x178(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResultStack_23;                               // 0x180(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	FOptionProperty_                             _ExprResult_24;                                    // 0x188(0x8)(ZeroConstructor, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
	class UVerseEngine_Entity_entity*            __verse_0x00000000__10;                            // 0x190(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_25;                                        // 0x198(0x10)(HasGetValueTypeHash)
	class UVGameplayRst_GameObjects_immutable_model* __verse_0x95D09D0E_Result_11;                      // 0x1A8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	uint64                                       _InstancingGraph_26;                               // 0x1B0(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        _ExprResult_27 : 1;                                // Mask: 0x1, PropSize: 0x10x1B8(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_3E : 7;                                     // Fixing Bit-Field Size
	FOptionProperty_                             _ExprResultStack_28;                               // 0x1B9(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function VGameplayRst.VGameplayRst_GameObjects.$InitCDO
struct UVGameplayRst_GameObjects__InitCDO_Params
{
public:
};

// 0x39 (0x39 - 0x0)
// Function VGameplayRst.VGameplayRst_GameObjects_immutable_model._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RUpVector
struct UVGameplayRst_GameObjects_immutable_model__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RUpVector_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_821[0x7];                                      // Fixing Size After Last Property
	struct FSpatialMath_vector3                  RetVal;                                            // 0x8(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	class UVGameplayRst_Transform_rotation_component* __verse_0x00000000__1;                             // 0x20(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_0;                                         // 0x28(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_1;                                     // 0x38(0x1)(HasGetValueTypeHash)
};

// 0x49 (0x49 - 0x0)
// Function VGameplayRst.VGameplayRst_GameObjects_immutable_model._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RRotation
struct UVGameplayRst_GameObjects_immutable_model__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RRotation_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_82E[0xF];                                      // Fixing Size After Last Property
	struct FVerseRotation                        RetVal;                                            // 0x10(0x20)(Parm, OutParm, ReturnParm, NoDestructor)
	class UVGameplayRst_Transform_rotation_component* __verse_0x00000000__1;                             // 0x30(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_0;                                         // 0x38(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_1;                                     // 0x48(0x1)(HasGetValueTypeHash)
};

// 0x39 (0x39 - 0x0)
// Function VGameplayRst.VGameplayRst_GameObjects_immutable_model._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RRightVector
struct UVGameplayRst_GameObjects_immutable_model__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RRightVector_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_83A[0x7];                                      // Fixing Size After Last Property
	struct FSpatialMath_vector3                  RetVal;                                            // 0x8(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	class UVGameplayRst_Transform_rotation_component* __verse_0x00000000__1;                             // 0x20(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_0;                                         // 0x28(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_1;                                     // 0x38(0x1)(HasGetValueTypeHash)
};

// 0x21 (0x21 - 0x0)
// Function VGameplayRst.VGameplayRst_GameObjects_immutable_model._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fimmutable__model_N_RIsVisible
struct UVGameplayRst_GameObjects_immutable_model__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fimmutable__model_N_RIsVisible_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        RetVal : 1;                                        // Mask: 0x1, PropSize: 0x10x1(0x1)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_41 : 7;                                     // Fixing Bit-Field Size
	uint8                                        Pad_845[0x6];                                      // Fixing Size After Last Property
	class UVGameplayRst_Geometry_fixed_mesh_component* __verse_0x00000000__1;                             // 0x8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_0;                                         // 0x10(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_1;                                     // 0x20(0x1)(HasGetValueTypeHash)
};

// 0x1A1 (0x1A1 - 0x0)
// Function VGameplayRst.VGameplayRst_GameObjects_immutable_model._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fimmutable__model_N_RGetTransform
struct UVGameplayRst_GameObjects_immutable_model__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fimmutable__model_N_RGetTransform_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_85E[0xF];                                      // Fixing Size After Last Property
	struct FSpatialMath_transform                RetVal;                                            // 0x10(0x60)(Parm, OutParm, ReturnParm, NoDestructor)
	TMap<FVerseStringProperty_, uint8>           _ExprResultStack_0;                                // 0x70(0x50)(ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResult_1;                                     // 0xC0(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_2;                                     // 0xD0(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_3;                                     // 0xE0(0x10)(HasGetValueTypeHash)
	struct FSpatialMath_vector3                  _ExprResult_4;                                     // 0xF0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UVGameplayRst_Transform_position_component* __verse_0x00000000__1;                             // 0x108(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_5;                                         // 0x110(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_6;                                     // 0x120(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_864[0xF];                                      // Fixing Size After Last Property
	struct FVerseRotation                        _ExprResult_7;                                     // 0x130(0x20)(NoDestructor)
	class UVGameplayRst_Transform_rotation_component* __verse_0x00000000__2;                             // 0x150(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_8;                                         // 0x158(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_9;                                     // 0x168(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_866[0x7];                                      // Fixing Size After Last Property
	struct FSpatialMath_vector3                  _ExprResult_10;                                    // 0x170(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UVGameplayRst_Transform_scale_component* __verse_0x00000000__3;                             // 0x188(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_11;                                        // 0x190(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_12;                                    // 0x1A0(0x1)(HasGetValueTypeHash)
};

// 0x39 (0x39 - 0x0)
// Function VGameplayRst.VGameplayRst_GameObjects_immutable_model._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fscalable_N_RGetScale
struct UVGameplayRst_GameObjects_immutable_model__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fscalable_N_RGetScale_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_876[0x7];                                      // Fixing Size After Last Property
	struct FSpatialMath_vector3                  RetVal;                                            // 0x8(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	class UVGameplayRst_Transform_scale_component* __verse_0x00000000__1;                             // 0x20(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_0;                                         // 0x28(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_1;                                     // 0x38(0x1)(HasGetValueTypeHash)
};

// 0x39 (0x39 - 0x0)
// Function VGameplayRst.VGameplayRst_GameObjects_immutable_model._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fpositionable_N_RGetPosition
struct UVGameplayRst_GameObjects_immutable_model__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fpositionable_N_RGetPosition_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_883[0x7];                                      // Fixing Size After Last Property
	struct FSpatialMath_vector3                  RetVal;                                            // 0x8(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	class UVGameplayRst_Transform_position_component* __verse_0x00000000__1;                             // 0x20(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_0;                                         // 0x28(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_1;                                     // 0x38(0x1)(HasGetValueTypeHash)
};

// 0x39 (0x39 - 0x0)
// Function VGameplayRst.VGameplayRst_GameObjects_immutable_model._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RForwardVector
struct UVGameplayRst_GameObjects_immutable_model__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RForwardVector_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_898[0x7];                                      // Fixing Size After Last Property
	struct FSpatialMath_vector3                  RetVal;                                            // 0x8(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	class UVGameplayRst_Transform_rotation_component* __verse_0x00000000__1;                             // 0x20(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_0;                                         // 0x28(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_1;                                     // 0x38(0x1)(HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function VGameplayRst.VGameplayRst_GameObjects_immutable_model.$InitInstance
struct UVGameplayRst_GameObjects_immutable_model__InitInstance_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VGameplayRst.VGameplayRst_GameObjects_immutable_model.$Block
struct UVGameplayRst_GameObjects_immutable_model__Block_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VGameplayRst.VGameplayRst_GameObjects_immutable_model.$InitCDO
struct UVGameplayRst_GameObjects_immutable_model__InitCDO_Params
{
public:
};

// 0x39 (0x39 - 0x0)
// Function VGameplayRst.VGameplayRst_GameObjects_model._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RUpVector
struct UVGameplayRst_GameObjects_model__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RUpVector_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8AF[0x7];                                      // Fixing Size After Last Property
	struct FSpatialMath_vector3                  RetVal;                                            // 0x8(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	class UVGameplayRst_Transform_rotation_component* __verse_0x00000000__1;                             // 0x20(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_0;                                         // 0x28(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_1;                                     // 0x38(0x1)(HasGetValueTypeHash)
};

// 0x48 (0x48 - 0x0)
// Function VGameplayRst.VGameplayRst_GameObjects_model._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fmodel_N_RShow
struct UVGameplayRst_GameObjects_model__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fmodel_N_RShow_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8B4[0x7];                                      // Fixing Size After Last Property
	class UVGameplayRst_Geometry_fixed_mesh_component* __verse_0x00000000__2;                             // 0x8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_0;                          // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8B8[0x7];                                      // Fixing Size After Last Property
	FVerseFunctionProperty_                      _Callee_1;                                         // 0x18(0x10)(HasGetValueTypeHash)
	class UVGameplayRst_Physics_collision_component* __verse_0x00000000__3;                             // 0x28(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_2;                          // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8B9[0x7];                                      // Fixing Size After Last Property
	FVerseFunctionProperty_                      _Callee_3;                                         // 0x38(0x10)(HasGetValueTypeHash)
};

// 0xC0 (0xC0 - 0x0)
// Function VGameplayRst.VGameplayRst_GameObjects_model._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fmodel_N_RSetTransform_L_Ntransform_R
struct UVGameplayRst_GameObjects_model__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fmodel_N_RSetTransform_L_Ntransform_R_Params
{
public:
	struct FSpatialMath_transform                __verse_0xB2CDDD72_Argument;                       // 0x0(0x60)(Parm, NoDestructor)
	class UVGameplayRst_Transform_position_component* __verse_0x00000000__2;                             // 0x60(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_0;                          // 0x68(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8BC[0x7];                                      // Fixing Size After Last Property
	FVerseFunctionProperty_                      _Callee_1;                                         // 0x70(0x10)(HasGetValueTypeHash)
	class UVGameplayRst_Transform_rotation_component* __verse_0x00000000__3;                             // 0x80(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_2;                          // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8BD[0x7];                                      // Fixing Size After Last Property
	FVerseFunctionProperty_                      _Callee_3;                                         // 0x90(0x10)(HasGetValueTypeHash)
	class UVGameplayRst_Transform_scale_component* __verse_0x00000000__4;                             // 0xA0(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_4;                          // 0xA8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8BE[0x7];                                      // Fixing Size After Last Property
	FVerseFunctionProperty_                      _Callee_5;                                         // 0xB0(0x10)(HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function VGameplayRst.VGameplayRst_GameObjects_model._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__scalable_N_RSetScale_L_Nvector3_R
struct UVGameplayRst_GameObjects_model__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__scalable_N_RSetScale_L_Nvector3_R_Params
{
public:
	struct FSpatialMath_vector3                  __verse_0xB2CDDD72_Argument;                       // 0x0(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UVGameplayRst_Transform_scale_component* __verse_0x00000000__1;                             // 0x18(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_0;                          // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8C1[0x7];                                      // Fixing Size After Last Property
	FVerseFunctionProperty_                      _Callee_1;                                         // 0x28(0x10)(HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function VGameplayRst.VGameplayRst_GameObjects_model._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RSetRotation_L_Nrotation_R
struct UVGameplayRst_GameObjects_model__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RSetRotation_L_Nrotation_R_Params
{
public:
	struct FVerseRotation                        __verse_0xB2CDDD72_Argument;                       // 0x0(0x20)(Parm, NoDestructor)
	class UVGameplayRst_Transform_rotation_component* __verse_0x00000000__1;                             // 0x20(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_0;                          // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8CA[0x7];                                      // Fixing Size After Last Property
	FVerseFunctionProperty_                      _Callee_1;                                         // 0x30(0x10)(HasGetValueTypeHash)
};

// 0x38 (0x38 - 0x0)
// Function VGameplayRst.VGameplayRst_GameObjects_model._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__positionable_N_RSetPosition_L_Nvector3_R
struct UVGameplayRst_GameObjects_model__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__positionable_N_RSetPosition_L_Nvector3_R_Params
{
public:
	struct FSpatialMath_vector3                  __verse_0xB2CDDD72_Argument;                       // 0x0(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UVGameplayRst_Transform_position_component* __verse_0x00000000__1;                             // 0x18(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_0;                          // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8D8[0x7];                                      // Fixing Size After Last Property
	FVerseFunctionProperty_                      _Callee_1;                                         // 0x28(0x10)(HasGetValueTypeHash)
};

// 0x80 (0x80 - 0x0)
// Function VGameplayRst.VGameplayRst_GameObjects_model._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RSetForwardVectorFromXY_L_Nvector3_M_Nvector3_R
struct UVGameplayRst_GameObjects_model__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RSetForwardVectorFromXY_L_Nvector3_M_Nvector3_R_Params
{
public:
	struct FTuple_Lvector3_Mvector3_R            __verse_0xB2CDDD72_Argument;                       // 0x0(0x30)(Parm, HasGetValueTypeHash)
	class UVGameplayRst_Transform_rotation_component* __verse_0x00000000__1;                             // 0x30(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_0;                          // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_8E7[0x7];                                      // Fixing Size After Last Property
	FVerseFunctionProperty_                      _Callee_1;                                         // 0x40(0x10)(HasGetValueTypeHash)
	struct FTuple_Lvector3_Mvector3_R            _ExprResult_2;                                     // 0x50(0x30)(HasGetValueTypeHash)
};

// 0x49 (0x49 - 0x0)
// Function VGameplayRst.VGameplayRst_GameObjects_model._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RRotation
struct UVGameplayRst_GameObjects_model__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RRotation_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8EA[0xF];                                      // Fixing Size After Last Property
	struct FVerseRotation                        RetVal;                                            // 0x10(0x20)(Parm, OutParm, ReturnParm, NoDestructor)
	class UVGameplayRst_Transform_rotation_component* __verse_0x00000000__1;                             // 0x30(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_0;                                         // 0x38(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_1;                                     // 0x48(0x1)(HasGetValueTypeHash)
};

// 0x39 (0x39 - 0x0)
// Function VGameplayRst.VGameplayRst_GameObjects_model._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RRightVector
struct UVGameplayRst_GameObjects_model__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RRightVector_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_8F0[0x7];                                      // Fixing Size After Last Property
	struct FSpatialMath_vector3                  RetVal;                                            // 0x8(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	class UVGameplayRst_Transform_rotation_component* __verse_0x00000000__1;                             // 0x20(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_0;                                         // 0x28(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_1;                                     // 0x38(0x1)(HasGetValueTypeHash)
};

// 0x21 (0x21 - 0x0)
// Function VGameplayRst.VGameplayRst_GameObjects_model._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fmodel_N_RIsVisible
struct UVGameplayRst_GameObjects_model__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fmodel_N_RIsVisible_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        RetVal : 1;                                        // Mask: 0x1, PropSize: 0x10x1(0x1)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_43 : 7;                                     // Fixing Bit-Field Size
	uint8                                        Pad_904[0x6];                                      // Fixing Size After Last Property
	class UVGameplayRst_Geometry_fixed_mesh_component* __verse_0x00000000__1;                             // 0x8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_0;                                         // 0x10(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_1;                                     // 0x20(0x1)(HasGetValueTypeHash)
};

// 0x48 (0x48 - 0x0)
// Function VGameplayRst.VGameplayRst_GameObjects_model._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fmodel_N_RHide
struct UVGameplayRst_GameObjects_model__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fmodel_N_RHide_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_90F[0x7];                                      // Fixing Size After Last Property
	class UVGameplayRst_Geometry_fixed_mesh_component* __verse_0x00000000__2;                             // 0x8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_0;                          // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_910[0x7];                                      // Fixing Size After Last Property
	FVerseFunctionProperty_                      _Callee_1;                                         // 0x18(0x10)(HasGetValueTypeHash)
	class UVGameplayRst_Physics_collision_component* __verse_0x00000000__3;                             // 0x28(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_2;                          // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_913[0x7];                                      // Fixing Size After Last Property
	FVerseFunctionProperty_                      _Callee_3;                                         // 0x38(0x10)(HasGetValueTypeHash)
};

// 0x1A1 (0x1A1 - 0x0)
// Function VGameplayRst.VGameplayRst_GameObjects_model._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fmodel_N_RGetTransform
struct UVGameplayRst_GameObjects_model__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fmodel_N_RGetTransform_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_921[0xF];                                      // Fixing Size After Last Property
	struct FSpatialMath_transform                RetVal;                                            // 0x10(0x60)(Parm, OutParm, ReturnParm, NoDestructor)
	TMap<FVerseStringProperty_, uint8>           _ExprResultStack_0;                                // 0x70(0x50)(ContainsInstancedReference)
	FVerseStringProperty_                        _ExprResult_1;                                     // 0xC0(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_2;                                     // 0xD0(0x10)(HasGetValueTypeHash)
	FVerseStringProperty_                        _ExprResult_3;                                     // 0xE0(0x10)(HasGetValueTypeHash)
	struct FSpatialMath_vector3                  _ExprResult_4;                                     // 0xF0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UVGameplayRst_Transform_position_component* __verse_0x00000000__1;                             // 0x108(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_5;                                         // 0x110(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_6;                                     // 0x120(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_925[0xF];                                      // Fixing Size After Last Property
	struct FVerseRotation                        _ExprResult_7;                                     // 0x130(0x20)(NoDestructor)
	class UVGameplayRst_Transform_rotation_component* __verse_0x00000000__2;                             // 0x150(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_8;                                         // 0x158(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_9;                                     // 0x168(0x1)(HasGetValueTypeHash)
	uint8                                        Pad_926[0x7];                                      // Fixing Size After Last Property
	struct FSpatialMath_vector3                  _ExprResult_10;                                    // 0x170(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor)
	class UVGameplayRst_Transform_scale_component* __verse_0x00000000__3;                             // 0x188(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_11;                                        // 0x190(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_12;                                    // 0x1A0(0x1)(HasGetValueTypeHash)
};

// 0x39 (0x39 - 0x0)
// Function VGameplayRst.VGameplayRst_GameObjects_model._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fscalable_N_RGetScale
struct UVGameplayRst_GameObjects_model__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fscalable_N_RGetScale_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_934[0x7];                                      // Fixing Size After Last Property
	struct FSpatialMath_vector3                  RetVal;                                            // 0x8(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	class UVGameplayRst_Transform_scale_component* __verse_0x00000000__1;                             // 0x20(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_0;                                         // 0x28(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_1;                                     // 0x38(0x1)(HasGetValueTypeHash)
};

// 0x39 (0x39 - 0x0)
// Function VGameplayRst.VGameplayRst_GameObjects_model._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fpositionable_N_RGetPosition
struct UVGameplayRst_GameObjects_model__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fpositionable_N_RGetPosition_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_937[0x7];                                      // Fixing Size After Last Property
	struct FSpatialMath_vector3                  RetVal;                                            // 0x8(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	class UVGameplayRst_Transform_position_component* __verse_0x00000000__1;                             // 0x20(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_0;                                         // 0x28(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_1;                                     // 0x38(0x1)(HasGetValueTypeHash)
};

// 0x39 (0x39 - 0x0)
// Function VGameplayRst.VGameplayRst_GameObjects_model._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RForwardVector
struct UVGameplayRst_GameObjects_model__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RForwardVector_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_93E[0x7];                                      // Fixing Size After Last Property
	struct FSpatialMath_vector3                  RetVal;                                            // 0x8(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	class UVGameplayRst_Transform_rotation_component* __verse_0x00000000__1;                             // 0x20(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_0;                                         // 0x28(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_1;                                     // 0x38(0x1)(HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function VGameplayRst.VGameplayRst_GameObjects_model._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fmodel_N_REnableCollision
struct UVGameplayRst_GameObjects_model__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fmodel_N_REnableCollision_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_945[0x7];                                      // Fixing Size After Last Property
	class UVGameplayRst_Physics_collision_component* __verse_0x00000000__1;                             // 0x8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_0;                          // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_946[0x7];                                      // Fixing Size After Last Property
	FVerseFunctionProperty_                      _Callee_1;                                         // 0x18(0x10)(HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function VGameplayRst.VGameplayRst_GameObjects_model._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fmodel_N_RDisableCollision
struct UVGameplayRst_GameObjects_model__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fmodel_N_RDisableCollision_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_94F[0x7];                                      // Fixing Size After Last Property
	class UVGameplayRst_Physics_collision_component* __verse_0x00000000__1;                             // 0x8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_0;                          // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_950[0x7];                                      // Fixing Size After Last Property
	FVerseFunctionProperty_                      _Callee_1;                                         // 0x18(0x10)(HasGetValueTypeHash)
};

// 0x29 (0x29 - 0x0)
// Function VGameplayRst.VGameplayRst_GameObjects_model._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fmodel_N_RDestroy
struct UVGameplayRst_GameObjects_model__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fmodel_N_RDestroy_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_95D[0x7];                                      // Fixing Size After Last Property
	class UVerseEngine_Entity_entity*            __verse_0x00000000__2;                             // 0x8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	uint8                                        _InvokeSureResultDummy_0 : 1;                      // Mask: 0x1, PropSize: 0x10x10(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4A : 7;                                     // Fixing Bit-Field Size
	uint8                                        Pad_95E[0x7];                                      // Fixing Size After Last Property
	FVerseFunctionProperty_                      _Callee_1;                                         // 0x18(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_2;                                     // 0x28(0x1)(HasGetValueTypeHash)
};

// 0x40 (0x40 - 0x0)
// Function VGameplayRst.VGameplayRst_GameObjects_model._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RApplyAdditionalRotation_L_Nrotation_R
struct UVGameplayRst_GameObjects_model__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RApplyAdditionalRotation_L_Nrotation_R_Params
{
public:
	struct FVerseRotation                        __verse_0xB2CDDD72_Argument;                       // 0x0(0x20)(Parm, NoDestructor)
	class UVGameplayRst_Transform_rotation_component* __verse_0x00000000__1;                             // 0x20(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_0;                          // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_95F[0x7];                                      // Fixing Size After Last Property
	FVerseFunctionProperty_                      _Callee_1;                                         // 0x30(0x10)(HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function VGameplayRst.VGameplayRst_GameObjects_model.$InitInstance
struct UVGameplayRst_GameObjects_model__InitInstance_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VGameplayRst.VGameplayRst_GameObjects_model.$Block
struct UVGameplayRst_GameObjects_model__Block_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VGameplayRst.VGameplayRst_GameObjects_model.$InitCDO
struct UVGameplayRst_GameObjects_model__InitCDO_Params
{
public:
};

// 0x38 (0x38 - 0x0)
// Function VGameplayRst.VGameplayRst_GameObjects_world_anchor._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__positionable_N_RSetPosition_L_Nvector3_R
struct UVGameplayRst_GameObjects_world_anchor__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__positionable_N_RSetPosition_L_Nvector3_R_Params
{
public:
	struct FSpatialMath_vector3                  __verse_0xB2CDDD72_Argument;                       // 0x0(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
	class UVGameplayRst_Transform_position_component* __verse_0x00000000__1;                             // 0x18(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	enum class EVerseTrue                        _InvokeSureResultDummy_0;                          // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	uint8                                        Pad_97E[0x7];                                      // Fixing Size After Last Property
	FVerseFunctionProperty_                      _Callee_1;                                         // 0x28(0x10)(HasGetValueTypeHash)
};

// 0x39 (0x39 - 0x0)
// Function VGameplayRst.VGameplayRst_GameObjects_world_anchor._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fpositionable_N_RGetPosition
struct UVGameplayRst_GameObjects_world_anchor__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fpositionable_N_RGetPosition_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_982[0x7];                                      // Fixing Size After Last Property
	struct FSpatialMath_vector3                  RetVal;                                            // 0x8(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	class UVGameplayRst_Transform_position_component* __verse_0x00000000__1;                             // 0x20(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	FVerseFunctionProperty_                      _Callee_0;                                         // 0x28(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_1;                                     // 0x38(0x1)(HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function VGameplayRst.VGameplayRst_GameObjects_world_anchor._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fworld__anchor_N_RGetComponent
struct UVGameplayRst_GameObjects_world_anchor__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fworld__anchor_N_RGetComponent_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_986[0x7];                                      // Fixing Size After Last Property
	class UEntityComponent*                      RetVal;                                            // 0x8(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x29 (0x29 - 0x0)
// Function VGameplayRst.VGameplayRst_GameObjects_world_anchor._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fworld__anchor_N_RDestroy
struct UVGameplayRst_GameObjects_world_anchor__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGameObjects_2fworld__anchor_N_RDestroy_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_98C[0x7];                                      // Fixing Size After Last Property
	class UVerseEngine_Entity_entity*            __verse_0x00000000__2;                             // 0x8(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	uint8                                        _InvokeSureResultDummy_0 : 1;                      // Mask: 0x1, PropSize: 0x10x10(0x1)(NoDestructor, HasGetValueTypeHash)
	uint8                                        BitPad_4C : 7;                                     // Fixing Bit-Field Size
	uint8                                        Pad_98D[0x7];                                      // Fixing Size After Last Property
	FVerseFunctionProperty_                      _Callee_1;                                         // 0x18(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_2;                                     // 0x28(0x1)(HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function VGameplayRst.VGameplayRst_GameObjects_world_anchor.$InitInstance
struct UVGameplayRst_GameObjects_world_anchor__InitInstance_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VGameplayRst.VGameplayRst_GameObjects_world_anchor.$Block
struct UVGameplayRst_GameObjects_world_anchor__Block_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VGameplayRst.VGameplayRst_GameObjects_world_anchor.$InitCDO
struct UVGameplayRst_GameObjects_world_anchor__InitCDO_Params
{
public:
};

// 0x1 (0x1 - 0x0)
// Function VGameplayRst.VGameplayRst_Geometry_fixed_mesh_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2ffixed__mesh__component_N_RSetVisibility_L_Nlogic_R
struct UVGameplayRst_Geometry_fixed_mesh_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2ffixed__mesh__component_N_RSetVisibility_L_Nlogic_R_Params
{
public:
	uint8                                        __verse_0xB2CDDD72_Argument : 1;                   // Mask: 0x1, PropSize: 0x10x0(0x1)(Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function VGameplayRst.VGameplayRst_Geometry_fixed_mesh_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2ffixed__mesh__component_N_RSetMesh_L_Nmesh_R
struct UVGameplayRst_Geometry_fixed_mesh_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2ffixed__mesh__component_N_RSetMesh_L_Nmesh_R_Params
{
public:
	class UAssets_mesh*                          __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function VGameplayRst.VGameplayRst_Geometry_fixed_mesh_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2ffixed__mesh__component_N_RSetMaterialAtIndex_L_Nmaterial_M_Nint_R
struct UVGameplayRst_Geometry_fixed_mesh_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2ffixed__mesh__component_N_RSetMaterialAtIndex_L_Nmaterial_M_Nint_R_Params
{
public:
	struct FTuple_Lmaterial_Mint_R               __verse_0xB2CDDD72_Argument;                       // 0x0(0x10)(Parm, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function VGameplayRst.VGameplayRst_Geometry_fixed_mesh_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2ffixed__mesh__component_N_RSetMaterial_L_Nmaterial_R
struct UVGameplayRst_Geometry_fixed_mesh_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2ffixed__mesh__component_N_RSetMaterial_L_Nmaterial_R_Params
{
public:
	class UAssets_material*                      __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function VGameplayRst.VGameplayRst_Geometry_fixed_mesh_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2ffixed__mesh__component_N_RSetEnableCollision_L_Ncollision__type_R
struct UVGameplayRst_Geometry_fixed_mesh_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2ffixed__mesh__component_N_RSetEnableCollision_L_Ncollision__type_R_Params
{
public:
	enum class EVGameplayRst_Geometry_collision_type __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function VGameplayRst.VGameplayRst_Geometry_fixed_mesh_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2ffixed__mesh__component_N_RSetDefaultMesh_L_Ndefault__mesh__type_R
struct UVGameplayRst_Geometry_fixed_mesh_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2ffixed__mesh__component_N_RSetDefaultMesh_L_Ndefault__mesh__type_R_Params
{
public:
	enum class EVGameplayRst_Geometry_default_mesh_type __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function VGameplayRst.VGameplayRst_Geometry_fixed_mesh_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2ffixed__mesh__component_N_RSetAsRootComponent_L_Nlogic_M_Nlogic_R
struct UVGameplayRst_Geometry_fixed_mesh_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2ffixed__mesh__component_N_RSetAsRootComponent_L_Nlogic_M_Nlogic_R_Params
{
public:
	struct FTuple_Llogic_Mlogic_R                __verse_0xB2CDDD72_Argument;                       // 0x0(0x2)(Parm, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function VGameplayRst.VGameplayRst_Geometry_fixed_mesh_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2ffixed__mesh__component_N_RIsVisible
struct UVGameplayRst_Geometry_fixed_mesh_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2ffixed__mesh__component_N_RIsVisible_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        RetVal : 1;                                        // Mask: 0x1, PropSize: 0x10x1(0x1)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function VGameplayRst.VGameplayRst_Geometry_fixed_mesh_component.$InitInstance
struct UVGameplayRst_Geometry_fixed_mesh_component__InitInstance_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VGameplayRst.VGameplayRst_Geometry_fixed_mesh_component.$Block
struct UVGameplayRst_Geometry_fixed_mesh_component__Block_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VGameplayRst.VGameplayRst_Geometry_fixed_mesh_component.$InitCDO
struct UVGameplayRst_Geometry_fixed_mesh_component__InitCDO_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function VGameplayRst.VGameplayRst_Geometry_skeletal_mesh_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RSetSkeletalMesh_L_Nskeletal__mesh_R
struct UVGameplayRst_Geometry_skeletal_mesh_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RSetSkeletalMesh_L_Nskeletal__mesh_R_Params
{
public:
	class UAssets_skeletal_mesh*                 __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function VGameplayRst.VGameplayRst_Geometry_skeletal_mesh_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RSetMaterial_L_Nmaterial_R
struct UVGameplayRst_Geometry_skeletal_mesh_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RSetMaterial_L_Nmaterial_R_Params
{
public:
	class UAssets_material*                      __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function VGameplayRst.VGameplayRst_Geometry_skeletal_mesh_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RSetAnimationPosition__FIXME_L_Nfloat_M_Nlogic_R
struct UVGameplayRst_Geometry_skeletal_mesh_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RSetAnimationPosition__FIXME_L_Nfloat_M_Nlogic_R_Params
{
public:
	struct FTuple_Lfloat_Mlogic_R                __verse_0xB2CDDD72_Argument;                       // 0x0(0x9)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_9CE[0x7];                                      // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// Function VGameplayRst.VGameplayRst_Geometry_skeletal_mesh_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RSetAnimationPlayRate__FIXME_L_Nfloat_R
struct UVGameplayRst_Geometry_skeletal_mesh_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RSetAnimationPlayRate__FIXME_L_Nfloat_R_Params
{
public:
	double                                       __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function VGameplayRst.VGameplayRst_Geometry_skeletal_mesh_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RSetAnimationMode_L_Ndefault__animation__mode__type_R
struct UVGameplayRst_Geometry_skeletal_mesh_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RSetAnimationMode_L_Ndefault__animation__mode__type_R_Params
{
public:
	enum class EVGameplayRst_Geometry_default_animation_mode_type __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function VGameplayRst.VGameplayRst_Geometry_skeletal_mesh_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RSetAnimationInstance_L_Nanimation__instance_R
struct UVGameplayRst_Geometry_skeletal_mesh_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RSetAnimationInstance_L_Nanimation__instance_R_Params
{
public:
	class UAssets_animation_instance*            __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function VGameplayRst.VGameplayRst_Geometry_skeletal_mesh_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RSetAnimationBlueprint_L_Nanimation__blueprint_R
struct UVGameplayRst_Geometry_skeletal_mesh_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RSetAnimationBlueprint_L_Nanimation__blueprint_R_Params
{
public:
	class UAssets_animation_blueprint*           __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function VGameplayRst.VGameplayRst_Geometry_skeletal_mesh_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RSetAnimation_L_Nanimation_R
struct UVGameplayRst_Geometry_skeletal_mesh_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RSetAnimation_L_Nanimation_R_Params
{
public:
	class UAssets_animation*                     __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function VGameplayRst.VGameplayRst_Geometry_skeletal_mesh_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RIsPlayingAnimation
struct UVGameplayRst_Geometry_skeletal_mesh_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RIsPlayingAnimation_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        RetVal : 1;                                        // Mask: 0x1, PropSize: 0x10x1(0x1)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function VGameplayRst.VGameplayRst_Geometry_skeletal_mesh_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RGetAnimationPosition__FIXME
struct UVGameplayRst_Geometry_skeletal_mesh_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RGetAnimationPosition__FIXME_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_9E4[0x7];                                      // Fixing Size After Last Property
	double                                       RetVal;                                            // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function VGameplayRst.VGameplayRst_Geometry_skeletal_mesh_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RGetAnimationPlayRate__FIXME
struct UVGameplayRst_Geometry_skeletal_mesh_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RGetAnimationPlayRate__FIXME_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_9EA[0x7];                                      // Fixing Size After Last Property
	double                                       RetVal;                                            // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function VGameplayRst.VGameplayRst_Geometry_skeletal_mesh_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_REndAnimation
struct UVGameplayRst_Geometry_skeletal_mesh_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_REndAnimation_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function VGameplayRst.VGameplayRst_Geometry_skeletal_mesh_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RBeginAnimation_L_Nlogic_R
struct UVGameplayRst_Geometry_skeletal_mesh_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fGeometry_2fskeletal__mesh__component_N_RBeginAnimation_L_Nlogic_R_Params
{
public:
	uint8                                        __verse_0xB2CDDD72_Argument : 1;                   // Mask: 0x1, PropSize: 0x10x0(0x1)(Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function VGameplayRst.VGameplayRst_Geometry_skeletal_mesh_component.$InitInstance
struct UVGameplayRst_Geometry_skeletal_mesh_component__InitInstance_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VGameplayRst.VGameplayRst_Geometry_skeletal_mesh_component.$Block
struct UVGameplayRst_Geometry_skeletal_mesh_component__Block_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VGameplayRst.VGameplayRst_Geometry_skeletal_mesh_component.$InitCDO
struct UVGameplayRst_Geometry_skeletal_mesh_component__InitCDO_Params
{
public:
};

// 0x28 (0x28 - 0x0)
// Function VGameplayRst.VGameplayRst_LevelStreaming_level_streaming_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLevelStreaming_2flevel__streaming__component_N_RRequestUnloadLevel_L_Ntime__span_M_N_Kchar_R
struct UVGameplayRst_LevelStreaming_level_streaming_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLevelStreaming_2flevel__streaming__component_N_RRequestUnloadLevel_L_Ntime__span_M_N_Kchar_R_Params
{
public:
	struct FTuple_Ltime__span_M_Kchar_R          __verse_0xB2CDDD72_Argument;                       // 0x0(0x20)(Parm, HasGetValueTypeHash)
	FOptionProperty_                             RetVal;                                            // 0x20(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function VGameplayRst.VGameplayRst_LevelStreaming_level_streaming_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLevelStreaming_2flevel__streaming__component_N_RRequestLoadLevel_L_Nlevel_M_Ntime__span_M_N_Kchar_R
struct UVGameplayRst_LevelStreaming_level_streaming_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLevelStreaming_2flevel__streaming__component_N_RRequestLoadLevel_L_Nlevel_M_Ntime__span_M_N_Kchar_R_Params
{
public:
	struct FTuple_Llevel_Mtime__span_M_Kchar_R   __verse_0xB2CDDD72_Argument;                       // 0x0(0x28)(Parm, HasGetValueTypeHash)
	FOptionProperty_                             RetVal;                                            // 0x28(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, NoDestructor, ContainsInstancedReference, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function VGameplayRst.VGameplayRst_LevelStreaming_level_streaming_component.$InitInstance
struct UVGameplayRst_LevelStreaming_level_streaming_component__InitInstance_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VGameplayRst.VGameplayRst_LevelStreaming_level_streaming_component.$Block
struct UVGameplayRst_LevelStreaming_level_streaming_component__Block_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VGameplayRst.VGameplayRst_LevelStreaming_level_streaming_component.$InitCDO
struct UVGameplayRst_LevelStreaming_level_streaming_component__InitCDO_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function VGameplayRst.VGameplayRst_Lights_point_light_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fpoint__light__component_N_RSetSourceRadius_L_Nfloat_R
struct UVGameplayRst_Lights_point_light_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fpoint__light__component_N_RSetSourceRadius_L_Nfloat_R_Params
{
public:
	double                                       __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function VGameplayRst.VGameplayRst_Lights_point_light_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fpoint__light__component_N_RSetSourceLength_L_Nfloat_R
struct UVGameplayRst_Lights_point_light_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fpoint__light__component_N_RSetSourceLength_L_Nfloat_R_Params
{
public:
	double                                       __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function VGameplayRst.VGameplayRst_Lights_point_light_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fpoint__light__component_N_RSetIntensity_L_Nfloat_R
struct UVGameplayRst_Lights_point_light_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fpoint__light__component_N_RSetIntensity_L_Nfloat_R_Params
{
public:
	double                                       __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function VGameplayRst.VGameplayRst_Lights_point_light_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fpoint__light__component_N_RSetColor_L_Ncolor_R
struct UVGameplayRst_Lights_point_light_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fpoint__light__component_N_RSetColor_L_Ncolor_R_Params
{
public:
	struct FColors_color                         __verse_0xB2CDDD72_Argument;                       // 0x0(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function VGameplayRst.VGameplayRst_Lights_point_light_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fpoint__light__component_N_RSetAttenuationRadius_L_Nfloat_R
struct UVGameplayRst_Lights_point_light_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fpoint__light__component_N_RSetAttenuationRadius_L_Nfloat_R_Params
{
public:
	double                                       __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function VGameplayRst.VGameplayRst_Lights_point_light_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fpoint__light__component_N_RGetSourceRadius
struct UVGameplayRst_Lights_point_light_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fpoint__light__component_N_RGetSourceRadius_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_A03[0x7];                                      // Fixing Size After Last Property
	double                                       RetVal;                                            // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function VGameplayRst.VGameplayRst_Lights_point_light_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fpoint__light__component_N_RGetSourceLength
struct UVGameplayRst_Lights_point_light_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fpoint__light__component_N_RGetSourceLength_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_A08[0x7];                                      // Fixing Size After Last Property
	double                                       RetVal;                                            // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function VGameplayRst.VGameplayRst_Lights_point_light_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fpoint__light__component_N_RGetIntensity
struct UVGameplayRst_Lights_point_light_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fpoint__light__component_N_RGetIntensity_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_A09[0x7];                                      // Fixing Size After Last Property
	double                                       RetVal;                                            // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function VGameplayRst.VGameplayRst_Lights_point_light_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fpoint__light__component_N_RGetColor
struct UVGameplayRst_Lights_point_light_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fpoint__light__component_N_RGetColor_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_A0C[0x7];                                      // Fixing Size After Last Property
	struct FColors_color                         RetVal;                                            // 0x8(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function VGameplayRst.VGameplayRst_Lights_point_light_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fpoint__light__component_N_RGetAttenuationRadius
struct UVGameplayRst_Lights_point_light_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fpoint__light__component_N_RGetAttenuationRadius_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_A10[0x7];                                      // Fixing Size After Last Property
	double                                       RetVal;                                            // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function VGameplayRst.VGameplayRst_Lights_point_light_component.$InitInstance
struct UVGameplayRst_Lights_point_light_component__InitInstance_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VGameplayRst.VGameplayRst_Lights_point_light_component.$Block
struct UVGameplayRst_Lights_point_light_component__Block_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VGameplayRst.VGameplayRst_Lights_point_light_component.$InitCDO
struct UVGameplayRst_Lights_point_light_component__InitCDO_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function VGameplayRst.VGameplayRst_Lights_spot_light_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RSetSourceRadius_L_Nfloat_R
struct UVGameplayRst_Lights_spot_light_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RSetSourceRadius_L_Nfloat_R_Params
{
public:
	double                                       __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function VGameplayRst.VGameplayRst_Lights_spot_light_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RSetSourceLength_L_Nfloat_R
struct UVGameplayRst_Lights_spot_light_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RSetSourceLength_L_Nfloat_R_Params
{
public:
	double                                       __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function VGameplayRst.VGameplayRst_Lights_spot_light_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RSetOuterConeAngle_L_Nfloat_R
struct UVGameplayRst_Lights_spot_light_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RSetOuterConeAngle_L_Nfloat_R_Params
{
public:
	double                                       __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function VGameplayRst.VGameplayRst_Lights_spot_light_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RSetIntensity_L_Nfloat_R
struct UVGameplayRst_Lights_spot_light_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RSetIntensity_L_Nfloat_R_Params
{
public:
	double                                       __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function VGameplayRst.VGameplayRst_Lights_spot_light_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RSetInnerConeAngle_L_Nfloat_R
struct UVGameplayRst_Lights_spot_light_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RSetInnerConeAngle_L_Nfloat_R_Params
{
public:
	double                                       __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function VGameplayRst.VGameplayRst_Lights_spot_light_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RSetColor_L_Ncolor_R
struct UVGameplayRst_Lights_spot_light_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RSetColor_L_Ncolor_R_Params
{
public:
	struct FColors_color                         __verse_0xB2CDDD72_Argument;                       // 0x0(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x8 (0x8 - 0x0)
// Function VGameplayRst.VGameplayRst_Lights_spot_light_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RSetAttenuationRadius_L_Nfloat_R
struct UVGameplayRst_Lights_spot_light_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RSetAttenuationRadius_L_Nfloat_R_Params
{
public:
	double                                       __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function VGameplayRst.VGameplayRst_Lights_spot_light_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RGetSourceRadius
struct UVGameplayRst_Lights_spot_light_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RGetSourceRadius_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_A32[0x7];                                      // Fixing Size After Last Property
	double                                       RetVal;                                            // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function VGameplayRst.VGameplayRst_Lights_spot_light_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RGetSourceLength
struct UVGameplayRst_Lights_spot_light_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RGetSourceLength_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_A36[0x7];                                      // Fixing Size After Last Property
	double                                       RetVal;                                            // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function VGameplayRst.VGameplayRst_Lights_spot_light_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RGetOuterConeAngle
struct UVGameplayRst_Lights_spot_light_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RGetOuterConeAngle_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_A40[0x7];                                      // Fixing Size After Last Property
	double                                       RetVal;                                            // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function VGameplayRst.VGameplayRst_Lights_spot_light_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RGetIntensity
struct UVGameplayRst_Lights_spot_light_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RGetIntensity_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_A45[0x7];                                      // Fixing Size After Last Property
	double                                       RetVal;                                            // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function VGameplayRst.VGameplayRst_Lights_spot_light_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RGetInnerConeAngle
struct UVGameplayRst_Lights_spot_light_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RGetInnerConeAngle_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_A50[0x7];                                      // Fixing Size After Last Property
	double                                       RetVal;                                            // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function VGameplayRst.VGameplayRst_Lights_spot_light_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RGetColor
struct UVGameplayRst_Lights_spot_light_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RGetColor_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_A54[0x7];                                      // Fixing Size After Last Property
	struct FColors_color                         RetVal;                                            // 0x8(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function VGameplayRst.VGameplayRst_Lights_spot_light_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RGetAttenuationRadius
struct UVGameplayRst_Lights_spot_light_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fLights_2fspot__light__component_N_RGetAttenuationRadius_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_A5B[0x7];                                      // Fixing Size After Last Property
	double                                       RetVal;                                            // 0x8(0x8)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function VGameplayRst.VGameplayRst_Lights_spot_light_component.$InitInstance
struct UVGameplayRst_Lights_spot_light_component__InitInstance_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VGameplayRst.VGameplayRst_Lights_spot_light_component.$Block
struct UVGameplayRst_Lights_spot_light_component__Block_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VGameplayRst.VGameplayRst_Lights_spot_light_component.$InitCDO
struct UVGameplayRst_Lights_spot_light_component__InitCDO_Params
{
public:
};

// 0x30 (0x30 - 0x0)
// Function VGameplayRst.VGameplayRst_Messaging_debug_command_component.__WaitForCommand_L_N_Kchar_R
struct UVGameplayRst_Messaging_debug_command_component___WaitForCommand_L_N_Kchar_R_Params
{
public:
	class UConcurrency_task*                     __verse_0xC1E81372_CallingTask;                    // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int64                                        __verse_0xA3A00DDB_CallerResumeState;              // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        __verse_0x2AC0E4D8_CallerCancelState;              // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	FVerseStringProperty_                        __verse_0xB2CDDD72_Argument;                       // 0x18(0x10)(Parm, HasGetValueTypeHash)
	class UConcurrency_task*                     RetVal;                                            // 0x28(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function VGameplayRst.VGameplayRst_Messaging_debug_command_component.$InitInstance
struct UVGameplayRst_Messaging_debug_command_component__InitInstance_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VGameplayRst.VGameplayRst_Messaging_debug_command_component.$Block
struct UVGameplayRst_Messaging_debug_command_component__Block_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VGameplayRst.VGameplayRst_Messaging_debug_command_component.$InitCDO
struct UVGameplayRst_Messaging_debug_command_component__InitCDO_Params
{
public:
};

// 0x90 (0x90 - 0x0)
// Function VGameplayRst.VGameplayRst_Physics.VGameplayRst_Physics_hit_result$OverrideFactory
struct UVGameplayRst_Physics_VGameplayRst_Physics_hit_result_OverrideFactory_Params
{
public:
	struct FVGameplayRst_Physics_hit_result      RetVal;                                            // 0x0(0x40)(Parm, OutParm, ReturnParm, NoDestructor)
	TMap<FVerseStringProperty_, uint8>           __verse_0xFB48ED96__InitOverrideMap;               // 0x40(0x50)(ConstParm, Parm, ContainsInstancedReference)
};

// 0x40 (0x40 - 0x0)
// Function VGameplayRst.VGameplayRst_Physics.VGameplayRst_Physics_hit_result$Factory
struct UVGameplayRst_Physics_VGameplayRst_Physics_hit_result_Factory_Params
{
public:
	struct FVGameplayRst_Physics_hit_result      RetVal;                                            // 0x0(0x40)(Parm, OutParm, ReturnParm, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function VGameplayRst.VGameplayRst_Physics.$InitCDO
struct UVGameplayRst_Physics__InitCDO_Params
{
public:
};

// 0x28 (0x28 - 0x0)
// Function VGameplayRst.VGameplayRst_Physics_collision_component.WaitHit
struct UVGameplayRst_Physics_collision_component_WaitHit_Params
{
public:
	class UConcurrency_task*                     __verse_0xC1E81372_CallingTask;                    // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int64                                        __verse_0xA3A00DDB_CallerResumeState;              // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        __verse_0x2AC0E4D8_CallerCancelState;              // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x18(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_A8D[0x7];                                      // Fixing Size After Last Property
	class UConcurrency_task*                     RetVal;                                            // 0x20(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function VGameplayRst.VGameplayRst_Physics_collision_component.WaitEndOverlap
struct UVGameplayRst_Physics_collision_component_WaitEndOverlap_Params
{
public:
	class UConcurrency_task*                     __verse_0xC1E81372_CallingTask;                    // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int64                                        __verse_0xA3A00DDB_CallerResumeState;              // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        __verse_0x2AC0E4D8_CallerCancelState;              // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x18(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_A9A[0x7];                                      // Fixing Size After Last Property
	class UConcurrency_task*                     RetVal;                                            // 0x20(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x28 (0x28 - 0x0)
// Function VGameplayRst.VGameplayRst_Physics_collision_component.WaitBeginOverlap
struct UVGameplayRst_Physics_collision_component_WaitBeginOverlap_Params
{
public:
	class UConcurrency_task*                     __verse_0xC1E81372_CallingTask;                    // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int64                                        __verse_0xA3A00DDB_CallerResumeState;              // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        __verse_0x2AC0E4D8_CallerCancelState;              // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x18(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_AA4[0x7];                                      // Fixing Size After Last Property
	class UConcurrency_task*                     RetVal;                                            // 0x20(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function VGameplayRst.VGameplayRst_Physics_collision_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetUseContinuousCollisionDetection_L_Nlogic_R
struct UVGameplayRst_Physics_collision_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetUseContinuousCollisionDetection_L_Nlogic_R_Params
{
public:
	uint8                                        __verse_0xB2CDDD72_Argument : 1;                   // Mask: 0x1, PropSize: 0x10x0(0x1)(Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function VGameplayRst.VGameplayRst_Physics_collision_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetSphereCollisionShapeMode_L_Nfloat_R
struct UVGameplayRst_Physics_collision_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetSphereCollisionShapeMode_L_Nfloat_R_Params
{
public:
	double                                       __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function VGameplayRst.VGameplayRst_Physics_collision_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetSendOverlapEvents_L_Nlogic_R
struct UVGameplayRst_Physics_collision_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetSendOverlapEvents_L_Nlogic_R_Params
{
public:
	uint8                                        __verse_0xB2CDDD72_Argument : 1;                   // Mask: 0x1, PropSize: 0x10x0(0x1)(Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function VGameplayRst.VGameplayRst_Physics_collision_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetSendHitEventsOnCollide_L_Nlogic_R
struct UVGameplayRst_Physics_collision_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetSendHitEventsOnCollide_L_Nlogic_R_Params
{
public:
	uint8                                        __verse_0xB2CDDD72_Argument : 1;                   // Mask: 0x1, PropSize: 0x10x0(0x1)(Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function VGameplayRst.VGameplayRst_Physics_collision_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetMovable_L_Nlogic_R
struct UVGameplayRst_Physics_collision_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetMovable_L_Nlogic_R_Params
{
public:
	uint8                                        __verse_0xB2CDDD72_Argument : 1;                   // Mask: 0x1, PropSize: 0x10x0(0x1)(Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function VGameplayRst.VGameplayRst_Physics_collision_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetMeshCollisionShapeMode
struct UVGameplayRst_Physics_collision_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetMeshCollisionShapeMode_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
};

// 0x8 (0x8 - 0x0)
// Function VGameplayRst.VGameplayRst_Physics_collision_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetMeshCollisionShapeMode_L_Nmesh_R
struct UVGameplayRst_Physics_collision_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetMeshCollisionShapeMode_L_Nmesh_R_Params
{
public:
	class UAssets_mesh*                          __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function VGameplayRst.VGameplayRst_Physics_collision_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetGravityEnabled_L_Nlogic_R
struct UVGameplayRst_Physics_collision_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetGravityEnabled_L_Nlogic_R_Params
{
public:
	uint8                                        __verse_0xB2CDDD72_Argument : 1;                   // Mask: 0x1, PropSize: 0x10x0(0x1)(Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function VGameplayRst.VGameplayRst_Physics_collision_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetEnabled_L_Nlogic_R
struct UVGameplayRst_Physics_collision_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetEnabled_L_Nlogic_R_Params
{
public:
	uint8                                        __verse_0xB2CDDD72_Argument : 1;                   // Mask: 0x1, PropSize: 0x10x0(0x1)(Parm, NoDestructor, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function VGameplayRst.VGameplayRst_Physics_collision_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetDegreeOfFreedomContraint_L_Ndof__movement__mode_R
struct UVGameplayRst_Physics_collision_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetDegreeOfFreedomContraint_L_Ndof__movement__mode_R_Params
{
public:
	enum class EVGameplayRst_Physics_dof_movement_mode __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function VGameplayRst.VGameplayRst_Physics_collision_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetCustomDegreeOfFreedomConstrain_L_Nvector3_R
struct UVGameplayRst_Physics_collision_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetCustomDegreeOfFreedomConstrain_L_Nvector3_R_Params
{
public:
	struct FSpatialMath_vector3                  __verse_0xB2CDDD72_Argument;                       // 0x0(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x10 (0x10 - 0x0)
// Function VGameplayRst.VGameplayRst_Physics_collision_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetCollisionProfileName_L_N_Kchar_R
struct UVGameplayRst_Physics_collision_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetCollisionProfileName_L_N_Kchar_R_Params
{
public:
	FVerseStringProperty_                        __verse_0xB2CDDD72_Argument;                       // 0x0(0x10)(Parm, HasGetValueTypeHash)
};

// 0x10 (0x10 - 0x0)
// Function VGameplayRst.VGameplayRst_Physics_collision_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetCapsuleCollisionShapeMode_L_Nfloat_M_Nfloat_R
struct UVGameplayRst_Physics_collision_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetCapsuleCollisionShapeMode_L_Nfloat_M_Nfloat_R_Params
{
public:
	struct FTuple_Lfloat_Mfloat_R                __verse_0xB2CDDD72_Argument;                       // 0x0(0x10)(Parm, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function VGameplayRst.VGameplayRst_Physics_collision_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetBoxCollisionShapeMode_L_Nvector3_R
struct UVGameplayRst_Physics_collision_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RSetBoxCollisionShapeMode_L_Nvector3_R_Params
{
public:
	struct FSpatialMath_vector3                  __verse_0xB2CDDD72_Argument;                       // 0x0(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x2 (0x2 - 0x0)
// Function VGameplayRst.VGameplayRst_Physics_collision_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RGetUseContinuousCollisionDetection
struct UVGameplayRst_Physics_collision_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RGetUseContinuousCollisionDetection_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        RetVal : 1;                                        // Mask: 0x1, PropSize: 0x10x1(0x1)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function VGameplayRst.VGameplayRst_Physics_collision_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RGetSendOverlapEvents
struct UVGameplayRst_Physics_collision_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RGetSendOverlapEvents_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        RetVal : 1;                                        // Mask: 0x1, PropSize: 0x10x1(0x1)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function VGameplayRst.VGameplayRst_Physics_collision_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RGetSendHitEventsOnCollide
struct UVGameplayRst_Physics_collision_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RGetSendHitEventsOnCollide_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        RetVal : 1;                                        // Mask: 0x1, PropSize: 0x10x1(0x1)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function VGameplayRst.VGameplayRst_Physics_collision_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RGetMovable
struct UVGameplayRst_Physics_collision_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RGetMovable_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        RetVal : 1;                                        // Mask: 0x1, PropSize: 0x10x1(0x1)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function VGameplayRst.VGameplayRst_Physics_collision_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RGetGravityEnabled
struct UVGameplayRst_Physics_collision_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RGetGravityEnabled_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        RetVal : 1;                                        // Mask: 0x1, PropSize: 0x10x1(0x1)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function VGameplayRst.VGameplayRst_Physics_collision_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RGetEnabled
struct UVGameplayRst_Physics_collision_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RGetEnabled_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        RetVal : 1;                                        // Mask: 0x1, PropSize: 0x10x1(0x1)(Parm, OutParm, ReturnParm, NoDestructor, HasGetValueTypeHash)
};

// 0x2 (0x2 - 0x0)
// Function VGameplayRst.VGameplayRst_Physics_collision_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RGetCollisionShapeMode
struct UVGameplayRst_Physics_collision_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RGetCollisionShapeMode_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	enum class EVGameplayRst_Physics_collision_shape_mode RetVal;                                            // 0x1(0x1)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
};

// 0x18 (0x18 - 0x0)
// Function VGameplayRst.VGameplayRst_Physics_collision_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RGetCollisionProfileName
struct UVGameplayRst_Physics_collision_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fcollision__component_N_RGetCollisionProfileName_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_B2D[0x7];                                      // Fixing Size After Last Property
	FVerseStringProperty_                        RetVal;                                            // 0x8(0x10)(Parm, OutParm, ReturnParm, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function VGameplayRst.VGameplayRst_Physics_collision_component.$InitInstance
struct UVGameplayRst_Physics_collision_component__InitInstance_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VGameplayRst.VGameplayRst_Physics_collision_component.$Block
struct UVGameplayRst_Physics_collision_component__Block_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VGameplayRst.VGameplayRst_Physics_collision_component.$InitCDO
struct UVGameplayRst_Physics_collision_component__InitCDO_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VGameplayRst.VGameplayRst_Physics_overlap_result.$InitInstance
struct UVGameplayRst_Physics_overlap_result__InitInstance_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VGameplayRst.VGameplayRst_Physics_overlap_result.$Block
struct UVGameplayRst_Physics_overlap_result__Block_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VGameplayRst.VGameplayRst_Physics_overlap_result.$InitCDO
struct UVGameplayRst_Physics_overlap_result__InitCDO_Params
{
public:
};

// 0x28 (0x28 - 0x0)
// Function VGameplayRst.VGameplayRst_Physics_physics_trace.WaitPhysicsTrace
struct UVGameplayRst_Physics_physics_trace_WaitPhysicsTrace_Params
{
public:
	class UConcurrency_task*                     __verse_0xC1E81372_CallingTask;                    // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
	int64                                        __verse_0xA3A00DDB_CallerResumeState;              // 0x8(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	int64                                        __verse_0x2AC0E4D8_CallerCancelState;              // 0x10(0x8)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash)
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x18(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_B56[0x7];                                      // Fixing Size After Last Property
	class UConcurrency_task*                     RetVal;                                            // 0x20(0x8)(ExportObject, Parm, OutParm, ZeroConstructor, ReturnParm, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x78 (0x78 - 0x0)
// Function VGameplayRst.VGameplayRst_Physics_physics_trace._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fphysics__trace_N_RInitPhysicsTrace_L_Ncomponent_M_Nphysics__trace__category_M_Nphysics__trace__type_M_Nphysics__trace__shape_M_Nphysics__trace__channel_M_Nvector3_M_Nvector3_M_Nlogic_M_Nvector3_M_Nfloat_M_N_Kchar_R
struct UVGameplayRst_Physics_physics_trace__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fPhysics_2fphysics__trace_N_RInitPhysicsTrace_L_Ncomponent_M_Nphysics__trace__category_M_Nphysics__trace__type_M_Nphysics__trace__shape_M_Nphysics__trace__channel_M_Nvector3_M_Nvector3_M_Nlogic_M_Nvector3_M_Nfloat_M_N_Kchar_R_Params
{
public:
	struct FTuple_Lcomponent_Mphysics__trace__category_Mphysics__trace__type_Mphysics__trace__shape_Mphysics__trace__channel_Mvector3_Mvector3_Mlogic_Mvector3_Mfloat_M_Kchar_R __verse_0xB2CDDD72_Argument;                       // 0x0(0x78)(Parm, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function VGameplayRst.VGameplayRst_Physics_physics_trace.$InitInstance
struct UVGameplayRst_Physics_physics_trace__InitInstance_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VGameplayRst.VGameplayRst_Physics_physics_trace.$Block
struct UVGameplayRst_Physics_physics_trace__Block_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VGameplayRst.VGameplayRst_Physics_physics_trace.$InitCDO
struct UVGameplayRst_Physics_physics_trace__InitCDO_Params
{
public:
};

// 0x18 (0x18 - 0x0)
// Function VGameplayRst.VGameplayRst_Transform_mutable_positionable._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__positionable_N_RSetPosition_L_Nvector3_R
struct UVGameplayRst_Transform_mutable_positionable__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__positionable_N_RSetPosition_L_Nvector3_R_Params
{
public:
	struct FSpatialMath_vector3                  __verse_0xB2CDDD72_Argument;                       // 0x0(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function VGameplayRst.VGameplayRst_Transform_mutable_rotatable._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RSetRotation_L_Nrotation_R
struct UVGameplayRst_Transform_mutable_rotatable__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RSetRotation_L_Nrotation_R_Params
{
public:
	struct FVerseRotation                        __verse_0xB2CDDD72_Argument;                       // 0x0(0x20)(Parm, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function VGameplayRst.VGameplayRst_Transform_mutable_rotatable._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RSetForwardVectorFromXY_L_Nvector3_M_Nvector3_R
struct UVGameplayRst_Transform_mutable_rotatable__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RSetForwardVectorFromXY_L_Nvector3_M_Nvector3_R_Params
{
public:
	struct FTuple_Lvector3_Mvector3_R            __verse_0xB2CDDD72_Argument;                       // 0x0(0x30)(Parm, HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function VGameplayRst.VGameplayRst_Transform_mutable_rotatable._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RApplyAdditionalRotation_L_Nrotation_R
struct UVGameplayRst_Transform_mutable_rotatable__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RApplyAdditionalRotation_L_Nrotation_R_Params
{
public:
	struct FVerseRotation                        __verse_0xB2CDDD72_Argument;                       // 0x0(0x20)(Parm, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function VGameplayRst.VGameplayRst_Transform_mutable_scalable._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__scalable_N_RSetScale_L_Nvector3_R
struct UVGameplayRst_Transform_mutable_scalable__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__scalable_N_RSetScale_L_Nvector3_R_Params
{
public:
	struct FSpatialMath_vector3                  __verse_0xB2CDDD72_Argument;                       // 0x0(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function VGameplayRst.VGameplayRst_Transform_position_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__positionable_N_RSetPosition_L_Nvector3_R
struct UVGameplayRst_Transform_position_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__positionable_N_RSetPosition_L_Nvector3_R_Params
{
public:
	struct FSpatialMath_vector3                  __verse_0xB2CDDD72_Argument;                       // 0x0(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function VGameplayRst.VGameplayRst_Transform_position_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fpositionable_N_RGetPosition
struct UVGameplayRst_Transform_position_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fpositionable_N_RGetPosition_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_BA5[0x7];                                      // Fixing Size After Last Property
	struct FSpatialMath_vector3                  RetVal;                                            // 0x8(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function VGameplayRst.VGameplayRst_Transform_position_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fposition__component_N_RAddToPosition_L_Nvector3_R
struct UVGameplayRst_Transform_position_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fposition__component_N_RAddToPosition_L_Nvector3_R_Params
{
public:
	struct FSpatialMath_vector3                  __verse_0xB2CDDD72_Argument;                       // 0x0(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function VGameplayRst.VGameplayRst_Transform_position_component.$InitInstance
struct UVGameplayRst_Transform_position_component__InitInstance_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VGameplayRst.VGameplayRst_Transform_position_component.$Block
struct UVGameplayRst_Transform_position_component__Block_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VGameplayRst.VGameplayRst_Transform_position_component.$InitCDO
struct UVGameplayRst_Transform_position_component__InitCDO_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function VGameplayRst.VGameplayRst_Transform_positionable._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fpositionable_N_RGetPosition
struct UVGameplayRst_Transform_positionable__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fpositionable_N_RGetPosition_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_BC1[0x7];                                      // Fixing Size After Last Property
	struct FSpatialMath_vector3                  RetVal;                                            // 0x8(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function VGameplayRst.VGameplayRst_Transform_rotatable._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RUpVector
struct UVGameplayRst_Transform_rotatable__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RUpVector_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_BC9[0x7];                                      // Fixing Size After Last Property
	struct FSpatialMath_vector3                  RetVal;                                            // 0x8(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function VGameplayRst.VGameplayRst_Transform_rotatable._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RRotation
struct UVGameplayRst_Transform_rotatable__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RRotation_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_BCE[0xF];                                      // Fixing Size After Last Property
	struct FVerseRotation                        RetVal;                                            // 0x10(0x20)(Parm, OutParm, ReturnParm, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function VGameplayRst.VGameplayRst_Transform_rotatable._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RRightVector
struct UVGameplayRst_Transform_rotatable__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RRightVector_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_BD9[0x7];                                      // Fixing Size After Last Property
	struct FSpatialMath_vector3                  RetVal;                                            // 0x8(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function VGameplayRst.VGameplayRst_Transform_rotatable._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RForwardVector
struct UVGameplayRst_Transform_rotatable__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RForwardVector_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_BE0[0x7];                                      // Fixing Size After Last Property
	struct FSpatialMath_vector3                  RetVal;                                            // 0x8(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x93 (0x93 - 0x0)
// Function VGameplayRst.VGameplayRst_Transform_rotation_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RUpVector
struct UVGameplayRst_Transform_rotation_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RUpVector_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_BF2[0x7];                                      // Fixing Size After Last Property
	struct FSpatialMath_vector3                  RetVal;                                            // 0x8(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	FVerseFunctionProperty_                      _Callee_0;                                         // 0x20(0x10)(HasGetValueTypeHash)
	struct FTuple_Lrotation_Mtuple_L_R_Mtuple_L_R_R _ExprResult_1;                                     // 0x30(0x22)(HasGetValueTypeHash)
	uint8                                        Pad_BF4[0xE];                                      // Fixing Size After Last Property
	struct FVerseRotation                        _ExprResultStack_2;                                // 0x60(0x20)(NoDestructor)
	FVerseFunctionProperty_                      _Callee_3;                                         // 0x80(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_4;                                     // 0x90(0x1)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_5;                                     // 0x91(0x1)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_6;                                     // 0x92(0x1)(HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function VGameplayRst.VGameplayRst_Transform_rotation_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RSetRotation_L_Nrotation_R
struct UVGameplayRst_Transform_rotation_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RSetRotation_L_Nrotation_R_Params
{
public:
	struct FVerseRotation                        __verse_0xB2CDDD72_Argument;                       // 0x0(0x20)(Parm, NoDestructor)
};

// 0x30 (0x30 - 0x0)
// Function VGameplayRst.VGameplayRst_Transform_rotation_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RSetForwardVectorFromXY_L_Nvector3_M_Nvector3_R
struct UVGameplayRst_Transform_rotation_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RSetForwardVectorFromXY_L_Nvector3_M_Nvector3_R_Params
{
public:
	struct FTuple_Lvector3_Mvector3_R            __verse_0xB2CDDD72_Argument;                       // 0x0(0x30)(Parm, HasGetValueTypeHash)
};

// 0x30 (0x30 - 0x0)
// Function VGameplayRst.VGameplayRst_Transform_rotation_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RRotation
struct UVGameplayRst_Transform_rotation_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RRotation_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_C09[0xF];                                      // Fixing Size After Last Property
	struct FVerseRotation                        RetVal;                                            // 0x10(0x20)(Parm, OutParm, ReturnParm, NoDestructor)
};

// 0x93 (0x93 - 0x0)
// Function VGameplayRst.VGameplayRst_Transform_rotation_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RRightVector
struct UVGameplayRst_Transform_rotation_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RRightVector_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_C18[0x7];                                      // Fixing Size After Last Property
	struct FSpatialMath_vector3                  RetVal;                                            // 0x8(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	FVerseFunctionProperty_                      _Callee_0;                                         // 0x20(0x10)(HasGetValueTypeHash)
	struct FTuple_Lrotation_Mtuple_L_R_Mtuple_L_R_R _ExprResult_1;                                     // 0x30(0x22)(HasGetValueTypeHash)
	uint8                                        Pad_C1A[0xE];                                      // Fixing Size After Last Property
	struct FVerseRotation                        _ExprResultStack_2;                                // 0x60(0x20)(NoDestructor)
	FVerseFunctionProperty_                      _Callee_3;                                         // 0x80(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_4;                                     // 0x90(0x1)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_5;                                     // 0x91(0x1)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_6;                                     // 0x92(0x1)(HasGetValueTypeHash)
};

// 0x93 (0x93 - 0x0)
// Function VGameplayRst.VGameplayRst_Transform_rotation_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RForwardVector
struct UVGameplayRst_Transform_rotation_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2frotatable_N_RForwardVector_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_C2A[0x7];                                      // Fixing Size After Last Property
	struct FSpatialMath_vector3                  RetVal;                                            // 0x8(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
	FVerseFunctionProperty_                      _Callee_0;                                         // 0x20(0x10)(HasGetValueTypeHash)
	struct FTuple_Lrotation_Mtuple_L_R_Mtuple_L_R_R _ExprResult_1;                                     // 0x30(0x22)(HasGetValueTypeHash)
	uint8                                        Pad_C2B[0xE];                                      // Fixing Size After Last Property
	struct FVerseRotation                        _ExprResultStack_2;                                // 0x60(0x20)(NoDestructor)
	FVerseFunctionProperty_                      _Callee_3;                                         // 0x80(0x10)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_4;                                     // 0x90(0x1)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_5;                                     // 0x91(0x1)(HasGetValueTypeHash)
	struct FTuple_L_R                            _ExprResult_6;                                     // 0x92(0x1)(HasGetValueTypeHash)
};

// 0x20 (0x20 - 0x0)
// Function VGameplayRst.VGameplayRst_Transform_rotation_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RApplyAdditionalRotation_L_Nrotation_R
struct UVGameplayRst_Transform_rotation_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__rotatable_N_RApplyAdditionalRotation_L_Nrotation_R_Params
{
public:
	struct FVerseRotation                        __verse_0xB2CDDD72_Argument;                       // 0x0(0x20)(Parm, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function VGameplayRst.VGameplayRst_Transform_rotation_component.$InitInstance
struct UVGameplayRst_Transform_rotation_component__InitInstance_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VGameplayRst.VGameplayRst_Transform_rotation_component.$Block
struct UVGameplayRst_Transform_rotation_component__Block_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VGameplayRst.VGameplayRst_Transform_rotation_component.$InitCDO
struct UVGameplayRst_Transform_rotation_component__InitCDO_Params
{
public:
};

// 0x20 (0x20 - 0x0)
// Function VGameplayRst.VGameplayRst_Transform_scalable._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fscalable_N_RGetScale
struct UVGameplayRst_Transform_scalable__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fscalable_N_RGetScale_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_C44[0x7];                                      // Fixing Size After Last Property
	struct FSpatialMath_vector3                  RetVal;                                            // 0x8(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function VGameplayRst.VGameplayRst_Transform_scale_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__scalable_N_RSetScale_L_Nvector3_R
struct UVGameplayRst_Transform_scale_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fmutable__scalable_N_RSetScale_L_Nvector3_R_Params
{
public:
	struct FSpatialMath_vector3                  __verse_0xB2CDDD72_Argument;                       // 0x0(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x20 (0x20 - 0x0)
// Function VGameplayRst.VGameplayRst_Transform_scale_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fscalable_N_RGetScale
struct UVGameplayRst_Transform_scale_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fscalable_N_RGetScale_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
	uint8                                        Pad_C59[0x7];                                      // Fixing Size After Last Property
	struct FSpatialMath_vector3                  RetVal;                                            // 0x8(0x18)(Parm, OutParm, ZeroConstructor, ReturnParm, IsPlainOldData, NoDestructor)
};

// 0x18 (0x18 - 0x0)
// Function VGameplayRst.VGameplayRst_Transform_scale_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fscale__component_N_RAddToScale_L_Nvector3_R
struct UVGameplayRst_Transform_scale_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fTransform_2fscale__component_N_RAddToScale_L_Nvector3_R_Params
{
public:
	struct FSpatialMath_vector3                  __verse_0xB2CDDD72_Argument;                       // 0x0(0x18)(Parm, ZeroConstructor, IsPlainOldData, NoDestructor)
};

// 0x0 (0x0 - 0x0)
// Function VGameplayRst.VGameplayRst_Transform_scale_component.$InitInstance
struct UVGameplayRst_Transform_scale_component__InitInstance_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VGameplayRst.VGameplayRst_Transform_scale_component.$Block
struct UVGameplayRst_Transform_scale_component__Block_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VGameplayRst.VGameplayRst_Transform_scale_component.$InitCDO
struct UVGameplayRst_Transform_scale_component__InitCDO_Params
{
public:
};

// 0x8 (0x8 - 0x0)
// Function VGameplayRst.VGameplayRst_VFX_particle_system_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fVFX_2fparticle__system__component_N_RSetParticleSystem_L_Nparticle__system_R
struct UVGameplayRst_VFX_particle_system_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fVFX_2fparticle__system__component_N_RSetParticleSystem_L_Nparticle__system_R_Params
{
public:
	class UAssets_particle_system*               __verse_0xB2CDDD72_Argument;                       // 0x0(0x8)(ExportObject, Parm, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function VGameplayRst.VGameplayRst_VFX_particle_system_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fVFX_2fparticle__system__component_N_RDeactivate
struct UVGameplayRst_VFX_particle_system_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fVFX_2fparticle__system__component_N_RDeactivate_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
};

// 0x1 (0x1 - 0x0)
// Function VGameplayRst.VGameplayRst_VFX_particle_system_component._L_2fUnrealEngine_2ecom_2fVGameplayRst_2fVFX_2fparticle__system__component_N_RActivate
struct UVGameplayRst_VFX_particle_system_component__L_2fUnrealEngine_2ecom_2fVGameplayRst_2fVFX_2fparticle__system__component_N_RActivate_Params
{
public:
	struct FTuple_L_R                            __verse_0xB2CDDD72_Argument;                       // 0x0(0x1)(Parm, HasGetValueTypeHash)
};

// 0x0 (0x0 - 0x0)
// Function VGameplayRst.VGameplayRst_VFX_particle_system_component.$InitInstance
struct UVGameplayRst_VFX_particle_system_component__InitInstance_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VGameplayRst.VGameplayRst_VFX_particle_system_component.$Block
struct UVGameplayRst_VFX_particle_system_component__Block_Params
{
public:
};

// 0x0 (0x0 - 0x0)
// Function VGameplayRst.VGameplayRst_VFX_particle_system_component.$InitCDO
struct UVGameplayRst_VFX_particle_system_component__InitCDO_Params
{
public:
};

}
}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
