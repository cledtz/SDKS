#pragma once

// Dumper.

#ifdef _MSC_VER
	#pragma pack(push, 0x01)
#endif

namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x0 (0x90 - 0x90)
// Class InfernoRuntime.FortCurieElementAttachHandlerVoxelFire
class UFortCurieElementAttachHandlerVoxelFire : public UFortCurieElementAttachHandlerFire
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCurieElementAttachHandlerVoxelFire");
		return Clss;
	}

};

// 0x0 (0x40 - 0x40)
// Class InfernoRuntime.FortCurieElementAttachConditionHandlerVoxelFire
class UFortCurieElementAttachConditionHandlerVoxelFire : public UFortCurieElementAttachConditionHandlerFire
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCurieElementAttachConditionHandlerVoxelFire");
		return Clss;
	}

};

// 0x48 (0x178 - 0x130)
// Class InfernoRuntime.FortCurieVoxelFirePropagationManagerConfig
class UFortCurieVoxelFirePropagationManagerConfig : public UFortCurieFirePropagationManagerConfig
{
public:
	struct FFortCurieVoxelPropagationProperties  DefaultPropagationProperties;                      // 0x130(0x18)(Edit, NativeAccessSpecifierPublic)
	class FName                                  PropagationPropertiesRegistry;                     // 0x148(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PropagationNoiseMinimum;                           // 0x14C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PropagationNoiseMaximum;                           // 0x150(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PropagationSpeedNoiseRange;                        // 0x154(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PropagationMinimumSpeed;                           // 0x158(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PropagationMinimumTime;                            // 0x15C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        VoxelOverlapExpansionFactor;                       // 0x160(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowPerMaterialPropagationProperties;            // 0x164(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E81[0x3];                                     // Fixing Size After Last Property..
	float                                        ActorPropagationInteractMagnitude;                 // 0x168(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MovedActorGrassIgnitionDelay;                      // 0x16C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MovedActorGrassGridCellZExpansion;                 // 0x170(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MovedActorGroundTraceZRange;                       // 0x174(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCurieVoxelFirePropagationManagerConfig");
		return Clss;
	}

};

// 0x650 (0x680 - 0x30)
// Class InfernoRuntime.FortCurieVoxelFirePropagationManager
class UFortCurieVoxelFirePropagationManager : public UFortCurieManagerComponent
{
public:
	uint8                                        Pad_3E82[0x10];                                    // Fixing Size After Last Property..
	struct FFortCurieVoxelFirePropagationManagerTickFunction PrimaryTickFunction;                               // 0x40(0x30)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_3E83[0x5F8];                                   // Fixing Size After Last Property..
	class UFortCurieVoxelFirePropagationManagerConfig* InternalManagerConfig;                             // 0x668(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3E84[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCurieVoxelFirePropagationManager");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class InfernoRuntime.FortCurieVoxelFireDebugParticleDataInterface
class UFortCurieVoxelFireDebugParticleDataInterface : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCurieVoxelFireDebugParticleDataInterface");
		return Clss;
	}

};

// 0x0 (0x38 - 0x38)
// Class InfernoRuntime.FortCurieVoxelFireDebugNiagaraDataInterface
class UFortCurieVoxelFireDebugNiagaraDataInterface : public UNiagaraDataInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCurieVoxelFireDebugNiagaraDataInterface");
		return Clss;
	}

};

// 0x58 (0x1C0 - 0x168)
// Class InfernoRuntime.FortCurieVoxelFireNativeFXHandlerConfig
class UFortCurieVoxelFireNativeFXHandlerConfig : public UFortCurieNativeFXHandlerConfig
{
public:
	class UNiagaraSystem*                        WorldFireSystem;                                   // 0x168(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UNiagaraSystem*                        WorldFireDebugSystem;                              // 0x170(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UTextureRenderTarget2D*                LandscapeCharRenderTarget;                         // 0x178(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UMaterialParameterCollection*          MaterialParameterCollection;                       // 0x180(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  PlayerWorldFireSystemLightScalabilityParamName;    // 0x188(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  LandscapeBiasParameterName;                        // 0x18C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  LandscapeDivisorParameterName;                     // 0x190(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        LandscapeFireRandomLocationRadius;                 // 0x194(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MinLandscapeFireSphericalBounds;                   // 0x198(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        MaxLandscapeFireSphericalBounds;                   // 0x19C(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        LandscapeCharInterpSpeed;                          // 0x1A0(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        LandscapeIgnitionParticleMovementSpeed;            // 0x1A4(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bUseVoxelFireAmbientAudio;                         // 0x1A8(0x1)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3E85[0x7];                                     // Fixing Size After Last Property..
	class USoundBase*                            StructureFireAmbientSound;                         // 0x1B0(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class USoundBase*                            GrassFireAmbientSound;                             // 0x1B8(0x8)(Edit, ZeroConstructor, DisableEditOnInstance, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCurieVoxelFireNativeFXHandlerConfig");
		return Clss;
	}

};

// 0x328 (0x368 - 0x40)
// Class InfernoRuntime.FortCurieVoxelFireNativeFXHandler
class UFortCurieVoxelFireNativeFXHandler : public UFortCurieNativeFXHandler
{
public:
	uint8                                        Pad_3E86[0x30];                                    // Fixing Size After Last Property..
	TSet<class UFortCurieComponent*>             PendingUpdateComponents;                           // 0x70(0x50)(ExportObject, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	TSet<class UFortCurieComponent*>             PendingRemoveComponents;                           // 0xC0(0x50)(ExportObject, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3E87[0x50];                                    // Fixing Size After Last Property..
	TArray<class UFortCurieWorldNiagaraComponent*> WorldFireNiagaraSystems;                           // 0x160(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<class UFortCurieWorldNiagaraComponent*> WorldFireDebugNiagaraSystems;                      // 0x170(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	float                                        WorldSystemFireParticleSignificanceRequirement;    // 0x180(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        WorldSystemIgnitionParticleSignificanceRequirement; // 0x184(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        AudioGrassFireSignificanceRequirement;             // 0x188(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        AudioActorFireSignificanceRequirement;             // 0x18C(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FRandomStream                         RandomStream;                                      // 0x190(0x8)(ZeroConstructor, Transient, NoDestructor, NativeAccessSpecifierPrivate)
	struct FBox                                  GrassFireBounds;                                   // 0x198(0x38)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	float                                        LandscapeCharInterpSpeed;                          // 0x1D0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        TimeSinceAudioUpdate;                              // 0x1D4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FFortCurieVoxelFireParticleGrassData> CachedFireParticleGrassData;                       // 0x1D8(0x10)(ZeroConstructor, Transient, NativeAccessSpecifierPrivate)
	TArray<struct FFortCurieFireParticleActorData> CachedFireParticleActorData;                       // 0x1E8(0x10)(ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3E88[0x60];                                    // Fixing Size After Last Property..
	TSet<struct FFortSpatialCellIndex>           CachedBurningGrassGridCells;                       // 0x258(0x50)(Transient, NativeAccessSpecifierPrivate)
	TMap<struct FFortSpatialCellIndex, class UAudioComponent*> GrassAudioMap;                                     // 0x2A8(0x50)(ExportObject, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_3E89[0x50];                                    // Fixing Size After Last Property..
	TArray<class UAudioComponent*>               PreallocatedAudioComponents;                       // 0x348(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	struct FTimerHandle                          AudioComponentCleanupTimerHandle;                  // 0x358(0x8)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	double                                       PreviousLandscapeCharTickTime;                     // 0x360(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCurieVoxelFireNativeFXHandler");
		return Clss;
	}

	void OnUserSettingsEffectQualityChanged();
};

// 0x0 (0x28 - 0x28)
// Class InfernoRuntime.FortCurieVoxelFireParticleDataInterface
class UFortCurieVoxelFireParticleDataInterface : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCurieVoxelFireParticleDataInterface");
		return Clss;
	}

};

// 0x0 (0x38 - 0x38)
// Class InfernoRuntime.FortCurieVoxelFireNiagaraDataInterface
class UFortCurieVoxelFireNiagaraDataInterface : public UNiagaraDataInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("FortCurieVoxelFireNiagaraDataInterface");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class InfernoRuntime.InfernoCurieVoxelFireAudioParticleDataInterface
class UInfernoCurieVoxelFireAudioParticleDataInterface : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("InfernoCurieVoxelFireAudioParticleDataInterface");
		return Clss;
	}

};

// 0x0 (0x38 - 0x38)
// Class InfernoRuntime.InfernoCurieVoxelFireAudioNiagaraDataInterface
class UInfernoCurieVoxelFireAudioNiagaraDataInterface : public UNiagaraDataInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("InfernoCurieVoxelFireAudioNiagaraDataInterface");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
