#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// CLASSES
//---------------------------------------------------------------------------------------------------------------------

// 0x18 (0x40 - 0x28)
// Class Niagara.NDIRenderTargetVolumeSimCacheData
class UNDIRenderTargetVolumeSimCacheData : public UObject
{
public:
	class FName                                  CompressionType;                                   // 0x28(0x8)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNDIRenderTargetVolumeSimCacheFrame> Frames;                                            // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNDIRenderTargetVolumeSimCacheData* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraConvertInPlaceUtilityBase
class UNiagaraConvertInPlaceUtilityBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UNiagaraConvertInPlaceUtilityBase* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class Niagara.NiagaraDataChannelReader
class UNiagaraDataChannelReader : public UObject
{
public:
	uint8                                        Pad_EA[0x10];                                      // Fixing Size After Last Property 
	class UNiagaraDataChannelHandler*            Owner;                                             // 0x38(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataChannelReader* GetDefaultObj();

	struct FVector4 ReadVector4(class FName VarName, int32 Index);
	struct FVector2D ReadVector2D(class FName VarName, int32 Index);
	struct FVector ReadVector(class FName VarName, int32 Index);
	struct FQuat ReadQuat(class FName VarName, int32 Index);
	struct FLinearColor ReadLinearColor(class FName VarName, int32 Index);
	int32 ReadInt(class FName VarName, int32 Index);
	double ReadFloat(class FName VarName, int32 Index);
	bool ReadBool(class FName VarName, int32 Index);
	int32 Num();
	bool InitAccess(class UActorComponent* OwningComponent);
};

// 0x18 (0x40 - 0x28)
// Class Niagara.NiagaraDataChannelWriter
class UNiagaraDataChannelWriter : public UObject
{
public:
	uint8                                        Pad_123[0x10];                                     // Fixing Size After Last Property 
	class UNiagaraDataChannelHandler*            Owner;                                             // 0x38(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataChannelWriter* GetDefaultObj();

	void WriteVector4(class FName VarName, int32 Index, const struct FVector4& InData);
	void WriteVector2D(class FName VarName, int32 Index, const struct FVector2D& InData);
	void WriteVector(class FName VarName, int32 Index, const struct FVector& InData);
	void WriteSpawnInfo(class FName VarName, int32 Index, const struct FNiagaraSpawnInfo& InData);
	void WriteQuat(class FName VarName, int32 Index, const struct FQuat& InData);
	void WriteLinearColor(class FName VarName, int32 Index, const struct FLinearColor& InData);
	void WriteInt(class FName VarName, int32 Index, int32 InData);
	void WriteFloat(class FName VarName, int32 Index, double InData);
	void WriteBool(class FName VarName, int32 Index, bool InData);
	int32 Num();
	bool InitWrite(class UActorComponent* OwningComponent, int32 Count, bool bVisibleToGame, bool bVisibleToCPU, bool bVisibleToGPU);
};

// 0x10 (0x38 - 0x28)
// Class Niagara.NiagaraDataChannelDefinitions
class UNiagaraDataChannelDefinitions : public UObject
{
public:
	TArray<class UNiagaraDataChannel*>           DataChannels;                                      // 0x28(0x10)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataChannelDefinitions* GetDefaultObj();

};

// 0x40 (0x68 - 0x28)
// Class Niagara.NiagaraDataChannelHandler
class UNiagaraDataChannelHandler : public UObject
{
public:
	class UNiagaraDataChannel*                   DataChannel;                                       // 0x28(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_134[0x28];                                     // Fixing Size After Last Property 
	class UNiagaraDataChannelWriter*             Writer;                                            // 0x58(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNiagaraDataChannelReader*             Reader;                                            // 0x60(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UNiagaraDataChannelHandler* GetDefaultObj();

	class UNiagaraDataChannelWriter* GetDataChannelWriter();
	class UNiagaraDataChannelReader* GetDataChannelReader();
};

// 0x110 (0x138 - 0x28)
// Class Niagara.NiagaraDataChannel
class UNiagaraDataChannel : public UObject
{
public:
	class FName                                  ChannelName;                                       // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FNiagaraVariable>              Variables;                                         // 0x30(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	bool                                         bKeepPreviousFrameData;                            // 0x40(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_138[0x7];                                      // Fixing Size After Last Property 
	struct FNiagaraDataSetCompiledData           CompiledData;                                      // 0x48(0x48)(NativeAccessSpecifierPrivate)
	struct FNiagaraDataSetCompiledData           CompiledDataGPU;                                   // 0x90(0x48)(NativeAccessSpecifierPrivate)
	struct FNiagaraDataChannelGameDataLayout     GameDataLayout;                                    // 0xD8(0x60)(NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UNiagaraDataChannel* GetDefaultObj();

};

// 0x0 (0x138 - 0x138)
// Class Niagara.NiagaraDataChannel_Global
class UNiagaraDataChannel_Global : public UNiagaraDataChannel
{
public:

	static class UClass* StaticClass();
	static class UNiagaraDataChannel_Global* GetDefaultObj();

};

// 0x38 (0xA0 - 0x68)
// Class Niagara.NiagaraDataChannelHandler_Global
class UNiagaraDataChannelHandler_Global : public UNiagaraDataChannelHandler
{
public:
	uint8                                        Pad_13C[0x38];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UNiagaraDataChannelHandler_Global* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class Niagara.NiagaraDataInterface
class UNiagaraDataInterface : public UNiagaraDataInterfaceBase
{
public:
	uint8                                        Pad_13E[0x10];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UNiagaraDataInterface* GetDefaultObj();

};

// 0x78 (0xB0 - 0x38)
// Class Niagara.NiagaraDataInterfaceDataChannelRead
class UNiagaraDataInterfaceDataChannelRead : public UNiagaraDataInterface
{
public:
	struct FNiagaraDataChannelReference          Channel;                                           // 0x38(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bReadCurrentFrame;                                 // 0x40(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_141[0x7];                                      // Fixing Size After Last Property 
	struct FNDIDataChannelCompiledData           CompiledData;                                      // 0x48(0x68)(Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceDataChannelRead* GetDefaultObj();

};

// 0x10 (0xC0 - 0xB0)
// Class Niagara.NiagaraDataInterfaceDataChannelSpawn
class UNiagaraDataInterfaceDataChannelSpawn : public UNiagaraDataInterfaceDataChannelRead
{
public:
	struct FNiagaraDataInterfaceEmitterBinding   EmitterBinding;                                    // 0xB0(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bOverrideSpawnGroupToDataChannelIndex;             // 0xBC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_142[0x3];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceDataChannelSpawn* GetDefaultObj();

};

// 0xC8 (0x100 - 0x38)
// Class Niagara.NiagaraDataInterfaceDataChannelWrite
class UNiagaraDataInterfaceDataChannelWrite : public UNiagaraDataInterface
{
public:
	enum class ENiagaraDataChannelAllocationMode AllocationMode;                                    // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_144[0x3];                                      // Fixing Size After Last Property 
	uint32                                       AllocationCount;                                   // 0x3C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPublishToGame;                                    // 0x40(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPublishToCPU;                                     // 0x41(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPublishToGPU;                                     // 0x42(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_146[0x1];                                      // Fixing Size After Last Property 
	struct FNiagaraDataChannelReference          Channel;                                           // 0x44(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_147[0x4];                                      // Fixing Size After Last Property 
	struct FNDIDataChannelWriteCompiledData      CompiledData;                                      // 0x50(0xB0)(Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceDataChannelWrite* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraMessageDataBase
class UNiagaraMessageDataBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UNiagaraMessageDataBase* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraParameterDefinitionsBase
class UNiagaraParameterDefinitionsBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UNiagaraParameterDefinitionsBase* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraRenderableMeshInterface
class UNiagaraRenderableMeshInterface : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UNiagaraRenderableMeshInterface* GetDefaultObj();

};

// 0x20 (0x48 - 0x28)
// Class Niagara.NiagaraScriptSourceBase
class UNiagaraScriptSourceBase : public UObject
{
public:
	uint8                                        Pad_14E[0x20];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UNiagaraScriptSourceBase* GetDefaultObj();

};

// 0xE8 (0x120 - 0x38)
// Class Niagara.NiagaraSettings
class UNiagaraSettings : public UDeveloperSettings
{
public:
	bool                                         bSystemsSupportLargeWorldCoordinates;              // 0x38(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnforceStrictStackTypes;                          // 0x39(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bExperimentalVMEnabled;                            // 0x3A(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_153[0x5];                                      // Fixing Size After Last Property 
	struct FSoftObjectPath                       DefaultEffectType;                                 // 0x40(0x20)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          PositionPinTypeColor;                              // 0x60(0x10)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FText>                          QualityLevels;                                     // 0x70(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TMap<class FString, class FText>             ComponentRendererWarningsPerClass;                 // 0x80(0x50)(Edit, Config, NativeAccessSpecifierPublic)
	enum class ETextureRenderTargetFormat        DefaultRenderTargetFormat;                         // 0xD0(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraGpuBufferFormat           DefaultGridFormat;                                 // 0xD1(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_155[0x2];                                      // Fixing Size After Last Property 
	enum class ENiagaraDefaultRendererMotionVectorSetting DefaultRendererMotionVectorSetting;                // 0xD4(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraDefaultRendererPixelCoverageMode DefaultPixelCoverageMode;                          // 0xD8(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraDefaultSortPrecision      DefaultSortPrecision;                              // 0xD9(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraDefaultGpuTranslucentLatency DefaultGpuTranslucentLatency;                      // 0xDA(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_158[0x1];                                      // Fixing Size After Last Property 
	float                                        DefaultLightInverseExposureBlend;                  // 0xDC(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENDISkelMesh_GpuMaxInfluences     NDISkelMesh_GpuMaxInfluences;                      // 0xE0(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENDISkelMesh_GpuUniformSamplingFormat NDISkelMesh_GpuUniformSamplingFormat;              // 0xE1(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENDISkelMesh_AdjacencyTriangleIndexFormat NDISkelMesh_AdjacencyTriangleIndexFormat;          // 0xE2(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         NDIStaticMesh_AllowDistanceFields;                 // 0xE3(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_15A[0x4];                                      // Fixing Size After Last Property 
	TArray<enum class ENDICollisionQuery_AsyncGpuTraceProvider> NDICollisionQuery_AsyncGpuTraceProviderOrder;      // 0xE8(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	class FString                                SimCacheAuxiliaryFileBasePath;                     // 0xF8(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        SimCacheMaxCPUMemoryVolumetrics;                   // 0x108(0x8)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraPlatformSetRedirect>   PlatformSetRedirects;                              // 0x110(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraSettings* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraSimCacheCustomStorageInterface
class UNiagaraSimCacheCustomStorageInterface : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UNiagaraSimCacheCustomStorageInterface* GetDefaultObj();

};

// 0x10 (0x38 - 0x28)
// Class Niagara.NiagaraValidationRuleSet
class UNiagaraValidationRuleSet : public UObject
{
public:
	TArray<class UNiagaraValidationRule*>        ValidationRules;                                   // 0x28(0x10)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraValidationRuleSet* GetDefaultObj();

};

// 0x48 (0x80 - 0x38)
// Class Niagara.NiagaraDataInterfaceActorComponent
class UNiagaraDataInterfaceActorComponent : public UNiagaraDataInterface
{
public:
	bool                                         bRequireCurrentFrameData;                          // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENDIActorComponentSourceMode      SourceMode;                                        // 0x39(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_162[0x2];                                      // Fixing Size After Last Property 
	int32                                        LocalPlayerIndex;                                  // 0x3C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TLazyObjectPtr<class UActor>                 SourceActor;                                       // 0x40(0x1C)(Edit, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_163[0x4];                                      // Fixing Size After Last Property 
	struct FNiagaraUserParameterBinding          ActorOrComponentParameter;                         // 0x60(0x20)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceActorComponent* GetDefaultObj();

};

// 0x10 (0x48 - 0x38)
// Class Niagara.NiagaraDataInterfaceAsyncGpuTrace
class UNiagaraDataInterfaceAsyncGpuTrace : public UNiagaraDataInterface
{
public:
	int32                                        MaxTracesPerParticle;                              // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxRetraces;                                       // 0x3C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENDICollisionQuery_AsyncGpuTraceProvider TraceProvider;                                     // 0x40(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_168[0x7];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceAsyncGpuTrace* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class Niagara.NiagaraDataInterfaceDebugDraw
class UNiagaraDataInterfaceDebugDraw : public UNiagaraDataInterface
{
public:
	uint32                                       OverrideMaxLineInstances;                          // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_16C[0x4];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceDebugDraw* GetDefaultObj();

};

// 0x70 (0xA8 - 0x38)
// Class Niagara.NiagaraDataInterfaceDynamicMesh
class UNiagaraDataInterfaceDynamicMesh : public UNiagaraDataInterface
{
public:
	uint8                                        Pad_16E[0x8];                                      // Fixing Size After Last Property 
	TArray<struct FNiagaraDynamicMeshSection>    Sections;                                          // 0x40(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraDynamicMeshMaterial>   Materials;                                         // 0x50(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        NumVertices;                                       // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumTexCoords;                                      // 0x64(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasColors;                                        // 0x68(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasTangentBasis;                                  // 0x69(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bClearTrianglesPerFrame;                           // 0x6A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_173[0x5];                                      // Fixing Size After Last Property 
	struct FBox                                  DefaultBounds;                                     // 0x70(0x38)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceDynamicMesh* GetDefaultObj();

};

// 0x10 (0x48 - 0x38)
// Class Niagara.NiagaraDataInterfaceEmitterProperties
class UNiagaraDataInterfaceEmitterProperties : public UNiagaraDataInterface
{
public:
	struct FNiagaraDataInterfaceEmitterBinding   EmitterBinding;                                    // 0x38(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_176[0x4];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceEmitterProperties* GetDefaultObj();

};

// 0x0 (0x38 - 0x38)
// Class Niagara.NiagaraDataInterfaceGBuffer
class UNiagaraDataInterfaceGBuffer : public UNiagaraDataInterface
{
public:

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceGBuffer* GetDefaultObj();

};

// 0x78 (0xB0 - 0x38)
// Class Niagara.NiagaraDataInterfacePhysicsAsset
class UNiagaraDataInterfacePhysicsAsset : public UNiagaraDataInterface
{
public:
	class UPhysicsAsset*                         DefaultSource;                                     // 0x38(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UActor>                 SoftSourceActor;                                   // 0x40(0x30)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraUserParameterBinding          MeshUserParameter;                                 // 0x70(0x20)(Edit, NativeAccessSpecifierPublic)
	uint8                                        Pad_17B[0x20];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UNiagaraDataInterfacePhysicsAsset* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraPhysicsAssetDICollectorInterface
class UNiagaraPhysicsAssetDICollectorInterface : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UNiagaraPhysicsAssetDICollectorInterface* GetDefaultObj();

};

// 0x30 (0x68 - 0x38)
// Class Niagara.NiagaraDataInterfaceSimCacheReader
class UNiagaraDataInterfaceSimCacheReader : public UNiagaraDataInterface
{
public:
	struct FNiagaraUserParameterBinding          SimCacheBinding;                                   // 0x38(0x20)(Edit, NativeAccessSpecifierPublic)
	class UNiagaraSimCache*                      SimCache;                                          // 0x58(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  EmitterBinding;                                    // 0x60(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceSimCacheReader* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class Niagara.NiagaraDataInterfaceSimpleCounter
class UNiagaraDataInterfaceSimpleCounter : public UNiagaraDataInterface
{
public:
	enum class ENiagaraGpuSyncMode               GpuSyncMode;                                       // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InitialValue;                                      // 0x3C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceSimpleCounter* GetDefaultObj();

};

// 0x98 (0xD0 - 0x38)
// Class Niagara.NiagaraDataInterfaceStaticMesh
class UNiagaraDataInterfaceStaticMesh : public UNiagaraDataInterface
{
public:
	enum class ENDIStaticMesh_SourceMode         SourceMode;                                        // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_184[0x7];                                      // Fixing Size After Last Property 
	class UStaticMesh*                           DefaultMesh;                                       // 0x40(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UActor>                 SoftSourceActor;                                   // 0x48(0x30)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UStaticMeshComponent*                  SourceComponent;                                   // 0x78(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FNDIStaticMeshSectionFilter           SectionFilter;                                     // 0x80(0x10)(Edit, NativeAccessSpecifierPublic)
	bool                                         bUsePhysicsBodyVelocity;                           // 0x90(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowSamplingFromStreamingLODs;                   // 0x91(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_185[0x2];                                      // Fixing Size After Last Property 
	int32                                        LODIndex;                                          // 0x94(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraUserParameterBinding          LODIndexUserParameter;                             // 0x98(0x20)(Edit, NativeAccessSpecifierPublic)
	TArray<class FName>                          FilteredSockets;                                   // 0xB8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_187[0x8];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceStaticMesh* GetDefaultObj();

	void OnSourceEndPlay(class UActor* InSource, enum class EEndPlayReason Reason);
};

// 0x70 (0xA8 - 0x38)
// Class Niagara.NiagaraDataInterfaceUObjectPropertyReader
class UNiagaraDataInterfaceUObjectPropertyReader : public UNiagaraDataInterface
{
public:
	struct FNiagaraUserParameterBinding          UObjectParameterBinding;                           // 0x38(0x20)(Edit, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraUObjectPropertyReaderRemap> PropertyRemap;                                     // 0x58(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UActor>                 SourceActor;                                       // 0x68(0x30)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UObject>                   SourceActorComponentClass;                         // 0x98(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_190[0x8];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceUObjectPropertyReader* GetDefaultObj();

	void SetUObjectReaderPropertyRemap(class UNiagaraComponent* NiagaraComponent, class FName UserParameterName, class FName GraphName, class FName RemapName);
};

// 0x28 (0x60 - 0x38)
// Class Niagara.NiagaraDataInterfaceVirtualTexture
class UNiagaraDataInterfaceVirtualTexture : public UNiagaraDataInterface
{
public:
	class URuntimeVirtualTexture*                Texture;                                           // 0x38(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraUserParameterBinding          TextureUserParameter;                              // 0x40(0x20)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceVirtualTexture* GetDefaultObj();

};

// 0x10 (0x100 - 0xF0)
// Class Niagara.MovieSceneNiagaraSystemSpawnSection
class UMovieSceneNiagaraSystemSpawnSection : public UMovieSceneSection
{
public:
	enum class ENiagaraSystemSpawnSectionStartBehavior SectionStartBehavior;                              // 0xF0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ENiagaraSystemSpawnSectionEvaluateBehavior SectionEvaluateBehavior;                           // 0xF4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ENiagaraSystemSpawnSectionEndBehavior SectionEndBehavior;                                // 0xF8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ENiagaraAgeUpdateMode             AgeUpdateMode;                                     // 0xFC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bAllowScalability;                                 // 0xFD(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_198[0x2];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UMovieSceneNiagaraSystemSpawnSection* GetDefaultObj();

};

// 0x10 (0xA8 - 0x98)
// Class Niagara.MovieSceneNiagaraTrack
class UMovieSceneNiagaraTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>            Sections;                                          // 0x98(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UMovieSceneNiagaraTrack* GetDefaultObj();

};

// 0x8 (0xB0 - 0xA8)
// Class Niagara.MovieSceneNiagaraSystemTrack
class UMovieSceneNiagaraSystemTrack : public UMovieSceneNiagaraTrack
{
public:
	uint8                                        Pad_1A0[0x8];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UMovieSceneNiagaraSystemTrack* GetDefaultObj();

};

// 0x20 (0xC8 - 0xA8)
// Class Niagara.MovieSceneNiagaraParameterTrack
class UMovieSceneNiagaraParameterTrack : public UMovieSceneNiagaraTrack
{
public:
	struct FNiagaraVariable                      Parameter;                                         // 0xA8(0x20)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UMovieSceneNiagaraParameterTrack* GetDefaultObj();

};

// 0x8 (0xD0 - 0xC8)
// Class Niagara.MovieSceneNiagaraBoolParameterTrack
class UMovieSceneNiagaraBoolParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:
	uint8                                        Pad_1A1[0x8];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UMovieSceneNiagaraBoolParameterTrack* GetDefaultObj();

};

// 0x8 (0xD0 - 0xC8)
// Class Niagara.MovieSceneNiagaraColorParameterTrack
class UMovieSceneNiagaraColorParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:
	uint8                                        Pad_1A2[0x8];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UMovieSceneNiagaraColorParameterTrack* GetDefaultObj();

};

// 0x8 (0xD0 - 0xC8)
// Class Niagara.MovieSceneNiagaraFloatParameterTrack
class UMovieSceneNiagaraFloatParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:
	uint8                                        Pad_1A3[0x8];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UMovieSceneNiagaraFloatParameterTrack* GetDefaultObj();

};

// 0x8 (0xD0 - 0xC8)
// Class Niagara.MovieSceneNiagaraIntegerParameterTrack
class UMovieSceneNiagaraIntegerParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:
	uint8                                        Pad_1A4[0x8];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UMovieSceneNiagaraIntegerParameterTrack* GetDefaultObj();

};

// 0x10 (0xD8 - 0xC8)
// Class Niagara.MovieSceneNiagaraVectorParameterTrack
class UMovieSceneNiagaraVectorParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:
	uint8                                        Pad_1A6[0x8];                                      // Fixing Size After Last Property 
	int32                                        ChannelsUsed;                                      // 0xD0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1A7[0x4];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UMovieSceneNiagaraVectorParameterTrack* GetDefaultObj();

};

// 0x10 (0x2A0 - 0x290)
// Class Niagara.NiagaraActor
class UNiagaraActor : public UActor
{
public:
	class UNiagaraComponent*                     NiagaraComponent;                                  // 0x290(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bDestroyOnSystemFinish : 1;                        // Mask: 0x1, PropSize: 0x10x298(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1A9[0x7];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UNiagaraActor* GetDefaultObj();

	void SetDestroyOnSystemFinish(bool bShouldDestroyOnSystemFinish);
	void OnNiagaraSystemFinished(class UNiagaraComponent* FinishedComponent);
};

// 0x10 (0x38 - 0x28)
// Class Niagara.NiagaraBakerOutput
class UNiagaraBakerOutput : public UObject
{
public:
	class FString                                OutputName;                                        // 0x28(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraBakerOutput* GetDefaultObj();

};

// 0x68 (0xA0 - 0x38)
// Class Niagara.NiagaraBakerOutputSimCache
class UNiagaraBakerOutputSimCache : public UNiagaraBakerOutput
{
public:
	class FString                                SimCacheAssetPathFormat;                           // 0x38(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraSimCacheCreateParameters      CreateParameters;                                  // 0x48(0x58)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraBakerOutputSimCache* GetDefaultObj();

};

// 0x68 (0xA0 - 0x38)
// Class Niagara.NiagaraBakerOutputTexture2D
class UNiagaraBakerOutputTexture2D : public UNiagaraBakerOutput
{
public:
	struct FNiagaraBakerTextureSource            SourceBinding;                                     // 0x38(0x18)(Edit, NativeAccessSpecifierPublic)
	uint8                                        bGenerateAtlas : 1;                                // Mask: 0x1, PropSize: 0x10x50(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bGenerateFrames : 1;                               // Mask: 0x2, PropSize: 0x10x50(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bExportFrames : 1;                                 // Mask: 0x4, PropSize: 0x10x50(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSetTextureAddressX : 1;                           // Mask: 0x8, PropSize: 0x10x50(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSetTextureAddressY : 1;                           // Mask: 0x10, PropSize: 0x10x50(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_4 : 3;                                      // Fixing Bit-Field Size 
	uint8                                        Pad_1B0[0x3];                                      // Fixing Size After Last Property 
	struct FIntPoint                             FrameSize;                                         // 0x54(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FIntPoint                             AtlasTextureSize;                                  // 0x5C(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B1[0x8];                                      // Fixing Size After Last Property 
	enum class ETextureAddress                   TextureAddressX;                                   // 0x6C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextureAddress                   TextureAddressY;                                   // 0x6D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1B3[0x2];                                      // Fixing Size After Last Property 
	class FString                                AtlasAssetPathFormat;                              // 0x70(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FramesAssetPathFormat;                             // 0x80(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FramesExportPathFormat;                            // 0x90(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraBakerOutputTexture2D* GetDefaultObj();

};

// 0x50 (0x88 - 0x38)
// Class Niagara.NiagaraBakerOutputVolumeTexture
class UNiagaraBakerOutputVolumeTexture : public UNiagaraBakerOutput
{
public:
	struct FNiagaraBakerTextureSource            SourceBinding;                                     // 0x38(0x18)(Edit, NativeAccessSpecifierPublic)
	uint8                                        bGenerateAtlas : 1;                                // Mask: 0x1, PropSize: 0x10x50(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bGenerateFrames : 1;                               // Mask: 0x2, PropSize: 0x10x50(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bExportFrames : 1;                                 // Mask: 0x4, PropSize: 0x10x50(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_5 : 5;                                      // Fixing Bit-Field Size 
	uint8                                        Pad_1B9[0x7];                                      // Fixing Size After Last Property 
	class FString                                AtlasAssetPathFormat;                              // 0x58(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FramesAssetPathFormat;                             // 0x68(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FramesExportPathFormat;                            // 0x78(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraBakerOutputVolumeTexture* GetDefaultObj();

};

// 0x1C8 (0x1F0 - 0x28)
// Class Niagara.NiagaraBakerSettings
class UNiagaraBakerSettings : public UObject
{
public:
	float                                        StartSeconds;                                      // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DurationSeconds;                                   // 0x2C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FramesPerSecond;                                   // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bPreviewLooping : 1;                               // Mask: 0x1, PropSize: 0x10x34(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_6 : 7;                                      // Fixing Bit-Field Size 
	uint8                                        Pad_1C1[0x3];                                      // Fixing Size After Last Property 
	struct FIntPoint                             FramesPerDimension;                                // 0x38(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UNiagaraBakerOutput*>           Outputs;                                           // 0x40(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraBakerCameraSettings>   CameraSettings;                                    // 0x50(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        CurrentCameraIndex;                                // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BakeQualityLevel;                                  // 0x64(0x8)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRenderComponentOnly : 1;                          // Mask: 0x1, PropSize: 0x10x6C(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_8 : 7;                                      // Fixing Bit-Field Size 
	uint8                                        Pad_1C4[0x3];                                      // Fixing Size After Last Property 
	TArray<struct FNiagaraBakerTextureSettings>  OutputTextures;                                    // 0x70(0x10)(ZeroConstructor, Deprecated, NativeAccessSpecifierPublic)
	enum class ENiagaraBakerViewMode             CameraViewportMode;                                // 0x80(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C5[0x4];                                      // Fixing Size After Last Property 
	struct FVector                               CameraViewportLocation[0x7];                       // 0x88(0xA8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              CameraViewportRotation[0x7];                       // 0x130(0xA8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        CameraOrbitDistance;                               // 0x1D8(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CameraFOV;                                         // 0x1DC(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CameraOrthoWidth;                                  // 0x1E0(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseCameraAspectRatio : 1;                         // Mask: 0x1, PropSize: 0x10x1E4(0x1)(Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_9 : 7;                                      // Fixing Bit-Field Size 
	uint8                                        Pad_1C8[0x3];                                      // Fixing Size After Last Property 
	float                                        CameraAspectRatio;                                 // 0x1E8(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1C9[0x4];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UNiagaraBakerSettings* GetDefaultObj();

};

// 0x2A0 (0x808 - 0x568)
// Class Niagara.NiagaraComponent
class UNiagaraComponent : public UFXSystemComponent
{
public:
	class UNiagaraSystem*                        Asset;                                             // 0x568(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ENiagaraTickBehavior              TickBehavior;                                      // 0x570(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_266[0x3];                                      // Fixing Size After Last Property 
	int32                                        RandomSeedOffset;                                  // 0x574(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FNiagaraUserRedirectionParameterStore OverrideParameters;                                // 0x578(0xD8)(NativeAccessSpecifierPrivate)
	uint8                                        bForceSolo : 1;                                    // Mask: 0x1, PropSize: 0x10x650(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bEnableGpuComputeDebug : 1;                        // Mask: 0x2, PropSize: 0x10x650(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bOverrideWarmupSettings : 1;                       // Mask: 0x4, PropSize: 0x10x650(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_B : 5;                                      // Fixing Bit-Field Size 
	uint8                                        Pad_267[0x3];                                      // Fixing Size After Last Property 
	int32                                        WarmupTickCount;                                   // 0x654(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        WarmupTickDelta;                                   // 0x658(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_268[0x34];                                     // Fixing Size After Last Property 
	uint8                                        bAutoDestroy : 1;                                  // Mask: 0x1, PropSize: 0x10x690(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bRenderingEnabled : 1;                             // Mask: 0x2, PropSize: 0x10x690(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bAutoManageAttachment : 1;                         // Mask: 0x4, PropSize: 0x10x690(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAutoAttachWeldSimulatedBodies : 1;                // Mask: 0x8, PropSize: 0x10x690(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_C : 4;                                      // Fixing Bit-Field Size 
	uint8                                        Pad_26A[0x3];                                      // Fixing Size After Last Property 
	float                                        MaxTimeBeforeForceUpdateTransform;                 // 0x694(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_26B[0x8];                                      // Fixing Size After Last Property 
	FMulticastInlineDelegateProperty_            OnSystemFinished;                                  // 0x6A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class USceneComponent>        AutoAttachParent;                                  // 0x6B0(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  AutoAttachSocketName;                              // 0x6B8(0x8)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAttachmentRule                   AutoAttachLocationRule;                            // 0x6C0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAttachmentRule                   AutoAttachRotationRule;                            // 0x6C1(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAttachmentRule                   AutoAttachScaleRule;                               // 0x6C2(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_26C[0x9];                                      // Fixing Size After Last Property 
	uint8                                        BitPad_D : 4;                                      // Fixing Bit-Field Size 
	uint8                                        bAllowScalability : 1;                             // Mask: 0x10, PropSize: 0x10x6CC(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_E : 3;                                      // Fixing Bit-Field Size 
	uint8                                        Pad_26D[0x12B];                                    // Fixing Size After Last Property 
	class UNiagaraSimCache*                      SimCache;                                          // 0x7F8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UNiagaraCullProxyComponent*            CullProxy;                                         // 0x800(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UNiagaraComponent* GetDefaultObj();

	void SetVariableVec4(class FName InVariableName, struct FVector4& InValue);
	void SetVariableVec3(class FName InVariableName, const struct FVector& InValue);
	void SetVariableVec2(class FName InVariableName, const struct FVector2D& InValue);
	void SetVariableTextureRenderTarget(class FName InVariableName, class UTextureRenderTarget* TextureRenderTarget);
	void SetVariableTexture(class FName InVariableName, class UTexture* Texture);
	void SetVariableStaticMesh(class FName InVariableName, class UStaticMesh* InValue);
	void SetVariableQuat(class FName InVariableName, struct FQuat& InValue);
	void SetVariablePosition(class FName InVariableName, const struct FVector& InValue);
	void SetVariableObject(class FName InVariableName, class UObject* Object);
	void SetVariableMatrix(class FName InVariableName, struct FMatrix& InValue);
	void SetVariableMaterial(class FName InVariableName, class UMaterialInterface* Object);
	void SetVariableLinearColor(class FName InVariableName, struct FLinearColor& InValue);
	void SetVariableInt(class FName InVariableName, int32 InValue);
	void SetVariableFloat(class FName InVariableName, float InValue);
	void SetVariableBool(class FName InVariableName, bool InValue);
	void SetVariableActor(class FName InVariableName, class UActor* Actor);
	void SetTickBehavior(enum class ENiagaraTickBehavior NewTickBehavior);
	void SetSystemFixedBounds(const struct FBox& LocalBounds);
	void SetSimCache(class UNiagaraSimCache* SimCache, bool bResetSystem);
	void SetSeekDelta(float InSeekDelta);
	void SetRenderingEnabled(bool bInRenderingEnabled);
	void SetRandomSeedOffset(int32 NewRandomSeedOffset);
	void SetPreviewLODDistance(bool bEnablePreviewLODDistance, float PreviewLODDistance, float PreviewMaxDistance);
	void SetPaused(bool bInPaused);
	void SetNiagaraVariableVec4(const class FString& InVariableName, struct FVector4& InValue);
	void SetNiagaraVariableVec3(const class FString& InVariableName, const struct FVector& InValue);
	void SetNiagaraVariableVec2(const class FString& InVariableName, const struct FVector2D& InValue);
	void SetNiagaraVariableQuat(const class FString& InVariableName, struct FQuat& InValue);
	void SetNiagaraVariablePosition(const class FString& InVariableName, const struct FVector& InValue);
	void SetNiagaraVariableObject(const class FString& InVariableName, class UObject* Object);
	void SetNiagaraVariableMatrix(const class FString& InVariableName, struct FMatrix& InValue);
	void SetNiagaraVariableLinearColor(const class FString& InVariableName, struct FLinearColor& InValue);
	void SetNiagaraVariableInt(const class FString& InVariableName, int32 InValue);
	void SetNiagaraVariableFloat(const class FString& InVariableName, float InValue);
	void SetNiagaraVariableBool(const class FString& InVariableName, bool InValue);
	void SetNiagaraVariableActor(const class FString& InVariableName, class UActor* Actor);
	void SetMaxSimTime(float InMaxTime);
	void SetLockDesiredAgeDeltaTimeToSeekDelta(bool bLock);
	void SetGpuComputeDebug(bool bEnableDebug);
	void SetForceSolo(bool bInForceSolo);
	void SetForceLocalPlayerEffect(bool bIsPlayerEffect);
	void SetEmitterFixedBounds(class FName EmitterName, const struct FBox& LocalBounds);
	void SetDesiredAge(float InDesiredAge);
	void SetCustomTimeDilation(float Dilation);
	void SetCanRenderWhileSeeking(bool bInCanRenderWhileSeeking);
	void SetAutoDestroy(bool bInAutoDestroy);
	void SetAsset(class UNiagaraSystem* InAsset, bool bResetExistingOverrideParameters);
	void SetAllowScalability(bool bAllow);
	void SetAgeUpdateMode(enum class ENiagaraAgeUpdateMode InAgeUpdateMode);
	void SeekToDesiredAge(float InDesiredAge);
	void ResetSystem();
	void ReinitializeSystem();
	bool IsPaused();
	void InitForPerformanceBaseline();
	enum class ENiagaraTickBehavior GetTickBehavior();
	struct FBox GetSystemFixedBounds();
	class UNiagaraSimCache* GetSimCache();
	float GetSeekDelta();
	int32 GetRandomSeedOffset();
	bool GetPreviewLODDistanceEnabled();
	float GetPreviewLODDistance();
	TArray<struct FVector> GetNiagaraParticleValueVec3_DebugOnly(const class FString& InEmitterName, const class FString& InValueName);
	TArray<float> GetNiagaraParticleValues_DebugOnly(const class FString& InEmitterName, const class FString& InValueName);
	TArray<struct FVector> GetNiagaraParticlePositions_DebugOnly(const class FString& InEmitterName);
	float GetMaxSimTime();
	bool GetLockDesiredAgeDeltaTimeToSeekDelta();
	bool GetForceSolo();
	bool GetForceLocalPlayerEffect();
	struct FBox GetEmitterFixedBounds(class FName EmitterName);
	float GetDesiredAge();
	class UNiagaraDataInterface* GetDataInterface(const class FString& Name);
	float GetCustomTimeDilation();
	class UNiagaraSystem* GetAsset();
	bool GetAllowScalability();
	enum class ENiagaraAgeUpdateMode GetAgeUpdateMode();
	void ClearSystemFixedBounds();
	void ClearSimCache(bool bResetSystem);
	void ClearEmitterFixedBounds(class FName EmitterName);
	void AdvanceSimulationByTime(float SimulateTime, float TickDeltaSeconds);
	void AdvanceSimulation(int32 TickCount, float TickDeltaSeconds);
};

// 0x58 (0x80 - 0x28)
// Class Niagara.NiagaraComponentPool
class UNiagaraComponentPool : public UObject
{
public:
	TMap<class UNiagaraSystem*, struct FNCPool>  WorldParticleSystemPools;                          // 0x28(0x50)(ContainsInstancedReference, NativeAccessSpecifierPrivate)
	uint8                                        Pad_26F[0x8];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UNiagaraComponentPool* GetDefaultObj();

};

// 0xB8 (0xE0 - 0x28)
// Class Niagara.NiagaraRendererProperties
class UNiagaraRendererProperties : public UNiagaraMergeable
{
public:
	struct FNiagaraPlatformSet                   Platforms;                                         // 0x28(0x30)(Edit, NativeAccessSpecifierPublic)
	int32                                        SortOrderHint;                                     // 0x58(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraRendererMotionVectorSetting MotionVectorSetting;                               // 0x5C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      RendererEnabledBinding;                            // 0x60(0x58)(Edit, NativeAccessSpecifierPublic)
	bool                                         bIsEnabled;                                        // 0xB8(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowInCullProxies;                               // 0xB9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_271[0x2];                                      // Fixing Size After Last Property 
	struct FGuid                                 OuterEmitterVersion;                               // 0xBC(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bMotionBlurEnabled;                                // 0xCC(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_272[0x13];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UNiagaraRendererProperties* GetDefaultObj();

};

// 0x150 (0x230 - 0xE0)
// Class Niagara.NiagaraComponentRendererProperties
class UNiagaraComponentRendererProperties : public UNiagaraRendererProperties
{
public:
	TSubclassOf<class USceneComponent>           ComponentType;                                     // 0xE0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       ComponentCountLimit;                               // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_273[0x4];                                      // Fixing Size After Last Property 
	struct FNiagaraVariableAttributeBinding      EnabledBinding;                                    // 0xF0(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      RendererVisibilityTagBinding;                      // 0x148(0x58)(Edit, NativeAccessSpecifierPublic)
	bool                                         bAssignComponentsOnParticleID;                     // 0x1A0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCreateComponentFirstParticleFrame;                // 0x1A1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnlyActivateNewlyAquiredComponents;               // 0x1A2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_274[0x1];                                      // Fixing Size After Last Property 
	int32                                        RendererVisibility;                                // 0x1A4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       TemplateComponent;                                 // 0x1A8(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraComponentPropertyBinding> PropertyBindings;                                  // 0x1B0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_275[0x70];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UNiagaraComponentRendererProperties* GetDefaultObj();

};

// 0x18 (0x820 - 0x808)
// Class Niagara.NiagaraCullProxyComponent
class UNiagaraCullProxyComponent : public UNiagaraComponent
{
public:
	TArray<struct FNiagaraCulledComponentInfo>   Instances;                                         // 0x808(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_276[0x8];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UNiagaraCullProxyComponent* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraDataChannelLibrary
class UNiagaraDataChannelLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UNiagaraDataChannelLibrary* GetDefaultObj();

	class UNiagaraDataChannelHandler* GetNiagaraDataChannel(class UObject* WorldContextObject, class FName Channel);
};

// 0x28 (0x60 - 0x38)
// Class Niagara.NiagaraDataInterface2DArrayTexture
class UNiagaraDataInterface2DArrayTexture : public UNiagaraDataInterface
{
public:
	class UTexture*                              Texture;                                           // 0x38(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraUserParameterBinding          TextureUserParameter;                              // 0x40(0x20)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterface2DArrayTexture* GetDefaultObj();

};

// 0x0 (0x38 - 0x38)
// Class Niagara.NiagaraDataInterfaceRWBase
class UNiagaraDataInterfaceRWBase : public UNiagaraDataInterface
{
public:

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceRWBase* GetDefaultObj();

};

// 0x10 (0x48 - 0x38)
// Class Niagara.NiagaraDataInterfaceArray
class UNiagaraDataInterfaceArray : public UNiagaraDataInterfaceRWBase
{
public:
	uint8                                        Pad_27D[0x8];                                      // Fixing Size After Last Property 
	enum class ENiagaraGpuSyncMode               GpuSyncMode;                                       // 0x40(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxElements;                                       // 0x44(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceArray* GetDefaultObj();

};

// 0x10 (0x58 - 0x48)
// Class Niagara.NiagaraDataInterfaceArrayFloat
class UNiagaraDataInterfaceArrayFloat : public UNiagaraDataInterfaceArray
{
public:
	TArray<float>                                FloatData;                                         // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceArrayFloat* GetDefaultObj();

};

// 0x10 (0x58 - 0x48)
// Class Niagara.NiagaraDataInterfaceArrayFloat2
class UNiagaraDataInterfaceArrayFloat2 : public UNiagaraDataInterfaceArray
{
public:
	TArray<struct FVector2f>                     InternalFloatData;                                 // 0x48(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceArrayFloat2* GetDefaultObj();

};

// 0x10 (0x58 - 0x48)
// Class Niagara.NiagaraDataInterfaceArrayFloat3
class UNiagaraDataInterfaceArrayFloat3 : public UNiagaraDataInterfaceArray
{
public:
	TArray<struct FVector3f>                     InternalFloatData;                                 // 0x48(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceArrayFloat3* GetDefaultObj();

};

// 0x10 (0x58 - 0x48)
// Class Niagara.NiagaraDataInterfaceArrayPosition
class UNiagaraDataInterfaceArrayPosition : public UNiagaraDataInterfaceArray
{
public:
	TArray<struct FNiagaraPosition>              PositionData;                                      // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceArrayPosition* GetDefaultObj();

};

// 0x10 (0x58 - 0x48)
// Class Niagara.NiagaraDataInterfaceArrayFloat4
class UNiagaraDataInterfaceArrayFloat4 : public UNiagaraDataInterfaceArray
{
public:
	TArray<struct FVector4f>                     InternalFloatData;                                 // 0x48(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceArrayFloat4* GetDefaultObj();

};

// 0x10 (0x58 - 0x48)
// Class Niagara.NiagaraDataInterfaceArrayColor
class UNiagaraDataInterfaceArrayColor : public UNiagaraDataInterfaceArray
{
public:
	TArray<struct FLinearColor>                  ColorData;                                         // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceArrayColor* GetDefaultObj();

};

// 0x10 (0x58 - 0x48)
// Class Niagara.NiagaraDataInterfaceArrayQuat
class UNiagaraDataInterfaceArrayQuat : public UNiagaraDataInterfaceArray
{
public:
	TArray<struct FQuat4f>                       InternalQuatData;                                  // 0x48(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceArrayQuat* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraDataInterfaceArrayFunctionLibrary
class UNiagaraDataInterfaceArrayFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceArrayFunctionLibrary* GetDefaultObj();

	void SetNiagaraArrayVectorValue(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index, struct FVector& Value, bool bSizeToFit);
	void SetNiagaraArrayVector4Value(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index, struct FVector4& Value, bool bSizeToFit);
	void SetNiagaraArrayVector4(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, TArray<struct FVector4>& ArrayData);
	void SetNiagaraArrayVector2DValue(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index, struct FVector2D& Value, bool bSizeToFit);
	void SetNiagaraArrayVector2D(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, TArray<struct FVector2D>& ArrayData);
	void SetNiagaraArrayVector(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, TArray<struct FVector>& ArrayData);
	void SetNiagaraArrayUInt8Value(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index, int32 Value, bool bSizeToFit);
	void SetNiagaraArrayUInt8(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, TArray<int32>& ArrayData);
	void SetNiagaraArrayQuatValue(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index, struct FQuat& Value, bool bSizeToFit);
	void SetNiagaraArrayQuat(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, TArray<struct FQuat>& ArrayData);
	void SetNiagaraArrayPositionValue(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index, struct FVector& Value, bool bSizeToFit);
	void SetNiagaraArrayPosition(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, TArray<struct FVector>& ArrayData);
	void SetNiagaraArrayInt32Value(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index, int32 Value, bool bSizeToFit);
	void SetNiagaraArrayInt32(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, TArray<int32>& ArrayData);
	void SetNiagaraArrayFloatValue(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index, float Value, bool bSizeToFit);
	void SetNiagaraArrayFloat(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, TArray<float>& ArrayData);
	void SetNiagaraArrayColorValue(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index, struct FLinearColor& Value, bool bSizeToFit);
	void SetNiagaraArrayColor(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, TArray<struct FLinearColor>& ArrayData);
	void SetNiagaraArrayBoolValue(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index, bool& Value, bool bSizeToFit);
	void SetNiagaraArrayBool(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, TArray<bool>& ArrayData);
	struct FVector GetNiagaraArrayVectorValue(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index);
	struct FVector4 GetNiagaraArrayVector4Value(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index);
	TArray<struct FVector4> GetNiagaraArrayVector4(class UNiagaraComponent* NiagaraSystem, class FName OverrideName);
	struct FVector2D GetNiagaraArrayVector2DValue(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index);
	TArray<struct FVector2D> GetNiagaraArrayVector2D(class UNiagaraComponent* NiagaraSystem, class FName OverrideName);
	TArray<struct FVector> GetNiagaraArrayVector(class UNiagaraComponent* NiagaraSystem, class FName OverrideName);
	int32 GetNiagaraArrayUInt8Value(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index);
	TArray<int32> GetNiagaraArrayUInt8(class UNiagaraComponent* NiagaraSystem, class FName OverrideName);
	struct FQuat GetNiagaraArrayQuatValue(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index);
	TArray<struct FQuat> GetNiagaraArrayQuat(class UNiagaraComponent* NiagaraSystem, class FName OverrideName);
	struct FVector GetNiagaraArrayPositionValue(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index);
	TArray<struct FVector> GetNiagaraArrayPosition(class UNiagaraComponent* NiagaraSystem, class FName OverrideName);
	int32 GetNiagaraArrayInt32Value(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index);
	TArray<int32> GetNiagaraArrayInt32(class UNiagaraComponent* NiagaraSystem, class FName OverrideName);
	float GetNiagaraArrayFloatValue(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index);
	TArray<float> GetNiagaraArrayFloat(class UNiagaraComponent* NiagaraSystem, class FName OverrideName);
	struct FLinearColor GetNiagaraArrayColorValue(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index);
	TArray<struct FLinearColor> GetNiagaraArrayColor(class UNiagaraComponent* NiagaraSystem, class FName OverrideName);
	bool GetNiagaraArrayBoolValue(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, int32 Index);
	TArray<bool> GetNiagaraArrayBool(class UNiagaraComponent* NiagaraSystem, class FName OverrideName);
};

// 0x10 (0x58 - 0x48)
// Class Niagara.NiagaraDataInterfaceArrayInt32
class UNiagaraDataInterfaceArrayInt32 : public UNiagaraDataInterfaceArray
{
public:
	TArray<int32>                                IntData;                                           // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceArrayInt32* GetDefaultObj();

};

// 0x10 (0x58 - 0x48)
// Class Niagara.NiagaraDataInterfaceArrayUInt8
class UNiagaraDataInterfaceArrayUInt8 : public UNiagaraDataInterfaceArray
{
public:
	TArray<uint8>                                InternalIntData;                                   // 0x48(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceArrayUInt8* GetDefaultObj();

};

// 0x10 (0x58 - 0x48)
// Class Niagara.NiagaraDataInterfaceArrayBool
class UNiagaraDataInterfaceArrayBool : public UNiagaraDataInterfaceArray
{
public:
	TArray<bool>                                 BoolData;                                          // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceArrayBool* GetDefaultObj();

};

// 0x10 (0x58 - 0x48)
// Class Niagara.NiagaraDataInterfaceArrayNiagaraID
class UNiagaraDataInterfaceArrayNiagaraID : public UNiagaraDataInterfaceArray
{
public:
	TArray<struct FNiagaraID>                    IntData;                                           // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceArrayNiagaraID* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class Niagara.NiagaraDataInterfaceAudioSubmix
class UNiagaraDataInterfaceAudioSubmix : public UNiagaraDataInterface
{
public:
	class USoundSubmix*                          Submix;                                            // 0x38(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceAudioSubmix* GetDefaultObj();

};

// 0x10 (0x48 - 0x38)
// Class Niagara.NiagaraDataInterfaceAudioOscilloscope
class UNiagaraDataInterfaceAudioOscilloscope : public UNiagaraDataInterface
{
public:
	class USoundSubmix*                          Submix;                                            // 0x38(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Resolution;                                        // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScopeInMilliseconds;                               // 0x44(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceAudioOscilloscope* GetDefaultObj();

};

// 0x3E0 (0x408 - 0x28)
// Class Niagara.NiagaraDataInterfaceAudioPlayerSettings
class UNiagaraDataInterfaceAudioPlayerSettings : public UObject
{
public:
	bool                                         bOverrideConcurrency;                              // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37A[0x7];                                      // Fixing Size After Last Property 
	class USoundConcurrency*                     Concurrency;                                       // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideAttenuationSettings;                      // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_37C[0x7];                                      // Fixing Size After Last Property 
	struct FSoundAttenuationSettings             AttenuationSettings;                               // 0x40(0x3C8)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceAudioPlayerSettings* GetDefaultObj();

};

// 0x58 (0x90 - 0x38)
// Class Niagara.NiagaraDataInterfaceAudioPlayer
class UNiagaraDataInterfaceAudioPlayer : public UNiagaraDataInterface
{
public:
	class USoundBase*                            SoundToPlay;                                       // 0x38(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundAttenuation*                     Attenuation;                                       // 0x40(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundConcurrency*                     Concurrency;                                       // 0x48(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          ParameterNames;                                    // 0x50(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FNiagaraUserParameterBinding          ConfigurationUserParameter;                        // 0x60(0x20)(Edit, NativeAccessSpecifierPublic)
	bool                                         bLimitPlaysPerTick;                                // 0x80(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_384[0x3];                                      // Fixing Size After Last Property 
	int32                                        MaxPlaysPerTick;                                   // 0x84(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStopWhenComponentIsDestroyed;                     // 0x88(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowLoopingOneShotSounds;                        // 0x89(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_385[0x6];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceAudioPlayer* GetDefaultObj();

};

// 0x10 (0x50 - 0x40)
// Class Niagara.NiagaraDataInterfaceAudioSpectrum
class UNiagaraDataInterfaceAudioSpectrum : public UNiagaraDataInterfaceAudioSubmix
{
public:
	int32                                        Resolution;                                        // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinimumFrequency;                                  // 0x44(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaximumFrequency;                                  // 0x48(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        NoiseFloorDb;                                      // 0x4C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceAudioSpectrum* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class Niagara.NiagaraDataInterfaceCamera
class UNiagaraDataInterfaceCamera : public UNiagaraDataInterface
{
public:
	int32                                        PlayerControllerIndex;                             // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRequireCurrentFrameData;                          // 0x3C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_388[0x3];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceCamera* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class Niagara.NiagaraDataInterfaceCollisionQuery
class UNiagaraDataInterfaceCollisionQuery : public UNiagaraDataInterface
{
public:
	uint8                                        Pad_38B[0x8];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceCollisionQuery* GetDefaultObj();

};

// 0x38 (0x70 - 0x38)
// Class Niagara.NiagaraDataInterfaceCurveBase
class UNiagaraDataInterfaceCurveBase : public UNiagaraDataInterface
{
public:
	TArray<float>                                ShaderLUT;                                         // 0x38(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	float                                        LUTMinTime;                                        // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LUTMaxTime;                                        // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LUTInvTimeRange;                                   // 0x50(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        LUTNumSamplesMinusOne;                             // 0x54(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_38F[0x4];                                      // Fixing Size After Last Property 
	uint8                                        bUseLUT : 1;                                       // Mask: 0x1, PropSize: 0x10x5C(0x1)(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bExposeCurve : 1;                                  // Mask: 0x2, PropSize: 0x10x5C(0x1)(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_13 : 6;                                     // Fixing Bit-Field Size 
	uint8                                        Pad_390[0x3];                                      // Fixing Size After Last Property 
	class FName                                  ExposedName;                                       // 0x60(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            ExposedTexture;                                    // 0x68(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceCurveBase* GetDefaultObj();

};

// 0x200 (0x270 - 0x70)
// Class Niagara.NiagaraDataInterfaceColorCurve
class UNiagaraDataInterfaceColorCurve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                            RedCurve;                                          // 0x70(0x80)(Edit, NativeAccessSpecifierPublic)
	struct FRichCurve                            GreenCurve;                                        // 0xF0(0x80)(Edit, NativeAccessSpecifierPublic)
	struct FRichCurve                            BlueCurve;                                         // 0x170(0x80)(Edit, NativeAccessSpecifierPublic)
	struct FRichCurve                            AlphaCurve;                                        // 0x1F0(0x80)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceColorCurve* GetDefaultObj();

};

// 0x28 (0x60 - 0x38)
// Class Niagara.NiagaraDataInterfaceCubeTexture
class UNiagaraDataInterfaceCubeTexture : public UNiagaraDataInterface
{
public:
	class UTexture*                              Texture;                                           // 0x38(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraUserParameterBinding          TextureUserParameter;                              // 0x40(0x20)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceCubeTexture* GetDefaultObj();

};

// 0x10 (0x48 - 0x38)
// Class Niagara.NiagaraDataInterfaceCurlNoise
class UNiagaraDataInterfaceCurlNoise : public UNiagaraDataInterface
{
public:
	uint32                                       Seed;                                              // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_394[0xC];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceCurlNoise* GetDefaultObj();

};

// 0x80 (0xF0 - 0x70)
// Class Niagara.NiagaraDataInterfaceCurve
class UNiagaraDataInterfaceCurve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                            Curve;                                             // 0x70(0x80)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceCurve* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraParticleCallbackHandler
class UNiagaraParticleCallbackHandler : public UInterface
{
public:

	static class UClass* StaticClass();
	static class UNiagaraParticleCallbackHandler* GetDefaultObj();

	void ReceiveParticleData(TArray<struct FBasicParticleData>& Data, class UNiagaraSystem* NiagaraSystem, struct FVector& SimulationPositionOffset);
};

// 0x30 (0x68 - 0x38)
// Class Niagara.NiagaraDataInterfaceExport
class UNiagaraDataInterfaceExport : public UNiagaraDataInterface
{
public:
	struct FNiagaraUserParameterBinding          CallbackHandlerParameter;                          // 0x38(0x20)(Edit, NativeAccessSpecifierPublic)
	enum class ENDIExport_GPUAllocationMode      GPUAllocationMode;                                 // 0x58(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A3[0x3];                                      // Fixing Size After Last Property 
	int32                                        GPUAllocationFixedSize;                            // 0x5C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GPUAllocationPerParticleSize;                      // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3A4[0x4];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceExport* GetDefaultObj();

};

// 0x28 (0x60 - 0x38)
// Class Niagara.NiagaraDataInterfaceGrid2D
class UNiagaraDataInterfaceGrid2D : public UNiagaraDataInterfaceRWBase
{
public:
	bool                                         ClearBeforeNonIterationStage;                      // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3AD[0x3];                                      // Fixing Size After Last Property 
	int32                                        NumCellsX;                                         // 0x3C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumCellsY;                                         // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumCellsMaxAxis;                                   // 0x44(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumAttributes;                                     // 0x48(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SetGridFromMaxAxis;                                // 0x4C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3B1[0x3];                                      // Fixing Size After Last Property 
	struct FVector2D                             WorldBBoxSize;                                     // 0x50(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceGrid2D* GetDefaultObj();

};

// 0xC8 (0x128 - 0x60)
// Class Niagara.NiagaraDataInterfaceGrid2DCollection
class UNiagaraDataInterfaceGrid2DCollection : public UNiagaraDataInterfaceGrid2D
{
public:
	struct FNiagaraUserParameterBinding          RenderTargetUserParameter;                         // 0x60(0x20)(Edit, NativeAccessSpecifierPublic)
	enum class ENiagaraGpuBufferFormat           OverrideBufferFormat;                              // 0x80(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideFormat : 1;                               // Mask: 0x1, PropSize: 0x10x81(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_15 : 7;                                     // Fixing Bit-Field Size 
	uint8                                        Pad_3D5[0x56];                                     // Fixing Size After Last Property 
	TMap<uint64, class UTextureRenderTarget2DArray*> ManagedRenderTargets;                              // 0xD8(0x50)(Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceGrid2DCollection* GetDefaultObj();

	void GetTextureSize(class UNiagaraComponent* Component, int32* SizeX, int32* SizeY);
	void GetRawTextureSize(class UNiagaraComponent* Component, int32* SizeX, int32* SizeY);
	bool FillTexture2D(class UNiagaraComponent* Component, class UTextureRenderTarget2D* Dest, int32 AttributeIndex);
	bool FillRawTexture2D(class UNiagaraComponent* Component, class UTextureRenderTarget2D* Dest, int32* TilesX, int32* TilesY);
};

// 0x20 (0x148 - 0x128)
// Class Niagara.NiagaraDataInterfaceGrid2DCollectionReader
class UNiagaraDataInterfaceGrid2DCollectionReader : public UNiagaraDataInterfaceGrid2DCollection
{
public:
	class FString                                EmitterName;                                       // 0x128(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DIName;                                            // 0x138(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceGrid2DCollectionReader* GetDefaultObj();

};

// 0x38 (0x70 - 0x38)
// Class Niagara.NiagaraDataInterfaceGrid3D
class UNiagaraDataInterfaceGrid3D : public UNiagaraDataInterfaceRWBase
{
public:
	bool                                         ClearBeforeNonIterationStage;                      // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E0[0x3];                                      // Fixing Size After Last Property 
	struct FIntVector                            NumCells;                                          // 0x3C(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CellSize;                                          // 0x48(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumCellsMaxAxis;                                   // 0x4C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESetResolutionMethod              SetResolutionMethod;                               // 0x50(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_3E2[0x4];                                      // Fixing Size After Last Property 
	struct FVector                               WorldBBoxSize;                                     // 0x58(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceGrid3D* GetDefaultObj();

};

// 0x80 (0xF0 - 0x70)
// Class Niagara.NiagaraDataInterfaceGrid3DCollection
class UNiagaraDataInterfaceGrid3DCollection : public UNiagaraDataInterfaceGrid3D
{
public:
	int32                                        NumAttributes;                                     // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_409[0x4];                                      // Fixing Size After Last Property 
	struct FNiagaraUserParameterBinding          RenderTargetUserParameter;                         // 0x78(0x20)(Edit, NativeAccessSpecifierPublic)
	enum class ENiagaraGpuBufferFormat           OverrideBufferFormat;                              // 0x98(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideFormat : 1;                               // Mask: 0x1, PropSize: 0x10x99(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_40B[0x56];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceGrid3DCollection* GetDefaultObj();

	void GetTextureSize(class UNiagaraComponent* Component, int32* SizeX, int32* SizeY, int32* SizeZ);
	void GetRawTextureSize(class UNiagaraComponent* Component, int32* SizeX, int32* SizeY, int32* SizeZ);
	bool FillVolumeTexture(class UNiagaraComponent* Component, class UVolumeTexture* Dest, int32 AttributeIndex);
	bool FillRawVolumeTexture(class UNiagaraComponent* Component, class UVolumeTexture* Dest, int32* TilesX, int32* TilesY, int32* TileZ);
};

// 0x20 (0x110 - 0xF0)
// Class Niagara.NiagaraDataInterfaceGrid3DCollectionReader
class UNiagaraDataInterfaceGrid3DCollectionReader : public UNiagaraDataInterfaceGrid3DCollection
{
public:
	class FString                                EmitterName;                                       // 0xF0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DIName;                                            // 0x100(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceGrid3DCollectionReader* GetDefaultObj();

};

// 0x78 (0xB0 - 0x38)
// Class Niagara.NiagaraDataInterfaceIntRenderTarget2D
class UNiagaraDataInterfaceIntRenderTarget2D : public UNiagaraDataInterfaceRWBase
{
public:
	struct FIntPoint                             Size;                                              // 0x38(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraUserParameterBinding          RenderTargetUserParameter;                         // 0x40(0x20)(Edit, NativeAccessSpecifierPublic)
	TMap<uint64, class UTextureRenderTarget2D*>  ManagedRenderTargets;                              // 0x60(0x50)(Transient, DuplicateTransient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceIntRenderTarget2D* GetDefaultObj();

};

// 0x20 (0x58 - 0x38)
// Class Niagara.NiagaraDataInterfaceLandscape
class UNiagaraDataInterfaceLandscape : public UNiagaraDataInterface
{
public:
	class UActor*                                SourceLandscape;                                   // 0x38(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENDILandscape_SourceMode          SourceMode;                                        // 0x40(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_417[0x7];                                      // Fixing Size After Last Property 
	TArray<class UPhysicalMaterial*>             PhysicalMaterials;                                 // 0x48(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceLandscape* GetDefaultObj();

};

// 0x18 (0x50 - 0x38)
// Class Niagara.NiagaraDataInterfaceMeshRendererInfo
class UNiagaraDataInterfaceMeshRendererInfo : public UNiagaraDataInterface
{
public:
	class UNiagaraMeshRendererProperties*        MeshRenderer;                                      // 0x38(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_41B[0x10];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceMeshRendererInfo* GetDefaultObj();

};

// 0x8 (0x78 - 0x70)
// Class Niagara.NiagaraDataInterfaceNeighborGrid3D
class UNiagaraDataInterfaceNeighborGrid3D : public UNiagaraDataInterfaceGrid3D
{
public:
	uint32                                       MaxNeighborsPerCell;                               // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_41F[0x4];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceNeighborGrid3D* GetDefaultObj();

};

// 0x0 (0x38 - 0x38)
// Class Niagara.NiagaraDataInterfaceOcclusion
class UNiagaraDataInterfaceOcclusion : public UNiagaraDataInterface
{
public:

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceOcclusion* GetDefaultObj();

};

// 0x10 (0x48 - 0x38)
// Class Niagara.NiagaraDataInterfaceParticleRead
class UNiagaraDataInterfaceParticleRead : public UNiagaraDataInterfaceRWBase
{
public:
	class FString                                EmitterName;                                       // 0x38(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceParticleRead* GetDefaultObj();

};

// 0x30 (0x68 - 0x38)
// Class Niagara.NiagaraDataInterfacePlatformSet
class UNiagaraDataInterfacePlatformSet : public UNiagaraDataInterface
{
public:
	struct FNiagaraPlatformSet                   Platforms;                                         // 0x38(0x30)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfacePlatformSet* GetDefaultObj();

};

// 0x10 (0x80 - 0x70)
// Class Niagara.NiagaraDataInterfaceRasterizationGrid3D
class UNiagaraDataInterfaceRasterizationGrid3D : public UNiagaraDataInterfaceGrid3D
{
public:
	int32                                        NumAttributes;                                     // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Precision;                                         // 0x74(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ResetValue;                                        // 0x78(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_42B[0x4];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceRasterizationGrid3D* GetDefaultObj();

};

// 0xD0 (0x108 - 0x38)
// Class Niagara.NiagaraDataInterfaceRenderTarget2D
class UNiagaraDataInterfaceRenderTarget2D : public UNiagaraDataInterfaceRWBase
{
public:
	struct FIntPoint                             Size;                                              // 0x38(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraMipMapGeneration          MipMapGeneration;                                  // 0x40(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraMipMapGenerationType      MipMapGenerationType;                              // 0x41(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextureRenderTargetFormat        OverrideRenderTargetFormat;                        // 0x42(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextureFilter                    OverrideRenderTargetFilter;                        // 0x43(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bInheritUserParameterSettings : 1;                 // Mask: 0x1, PropSize: 0x10x44(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideFormat : 1;                               // Mask: 0x2, PropSize: 0x10x44(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_16 : 6;                                     // Fixing Bit-Field Size 
	uint8                                        Pad_434[0x3];                                      // Fixing Size After Last Property 
	struct FNiagaraUserParameterBinding          RenderTargetUserParameter;                         // 0x48(0x20)(Edit, NativeAccessSpecifierPublic)
	uint8                                        Pad_436[0x50];                                     // Fixing Size After Last Property 
	TMap<uint64, class UTextureRenderTarget2D*>  ManagedRenderTargets;                              // 0xB8(0x50)(Transient, DuplicateTransient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceRenderTarget2D* GetDefaultObj();

};

// 0x80 (0xB8 - 0x38)
// Class Niagara.NiagaraDataInterfaceRenderTarget2DArray
class UNiagaraDataInterfaceRenderTarget2DArray : public UNiagaraDataInterfaceRWBase
{
public:
	struct FIntVector                            Size;                                              // 0x38(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextureRenderTargetFormat        OverrideRenderTargetFormat;                        // 0x44(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextureFilter                    OverrideRenderTargetFilter;                        // 0x45(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bInheritUserParameterSettings : 1;                 // Mask: 0x1, PropSize: 0x10x46(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideFormat : 1;                               // Mask: 0x2, PropSize: 0x10x46(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_17 : 6;                                     // Fixing Bit-Field Size 
	uint8                                        Pad_43E[0x1];                                      // Fixing Size After Last Property 
	struct FNiagaraUserParameterBinding          RenderTargetUserParameter;                         // 0x48(0x20)(Edit, NativeAccessSpecifierPublic)
	TMap<uint64, class UTextureRenderTarget2DArray*> ManagedRenderTargets;                              // 0x68(0x50)(Transient, DuplicateTransient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceRenderTarget2DArray* GetDefaultObj();

};

// 0x78 (0xB0 - 0x38)
// Class Niagara.NiagaraDataInterfaceRenderTargetCube
class UNiagaraDataInterfaceRenderTargetCube : public UNiagaraDataInterfaceRWBase
{
public:
	int32                                        Size;                                              // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextureRenderTargetFormat        OverrideRenderTargetFormat;                        // 0x3C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextureFilter                    OverrideRenderTargetFilter;                        // 0x3D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bInheritUserParameterSettings : 1;                 // Mask: 0x1, PropSize: 0x10x3E(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideFormat : 1;                               // Mask: 0x2, PropSize: 0x10x3E(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_18 : 6;                                     // Fixing Bit-Field Size 
	uint8                                        Pad_442[0x1];                                      // Fixing Size After Last Property 
	struct FNiagaraUserParameterBinding          RenderTargetUserParameter;                         // 0x40(0x20)(Edit, NativeAccessSpecifierPublic)
	TMap<uint64, class UTextureRenderTargetCube*> ManagedRenderTargets;                              // 0x60(0x50)(Transient, DuplicateTransient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceRenderTargetCube* GetDefaultObj();

};

// 0x88 (0xC0 - 0x38)
// Class Niagara.NiagaraDataInterfaceRenderTargetVolume
class UNiagaraDataInterfaceRenderTargetVolume : public UNiagaraDataInterfaceRWBase
{
public:
	uint8                                        Pad_445[0x8];                                      // Fixing Size After Last Property 
	struct FIntVector                            Size;                                              // 0x40(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextureRenderTargetFormat        OverrideRenderTargetFormat;                        // 0x4C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextureFilter                    OverrideRenderTargetFilter;                        // 0x4D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bInheritUserParameterSettings : 1;                 // Mask: 0x1, PropSize: 0x10x4E(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideFormat : 1;                               // Mask: 0x2, PropSize: 0x10x4E(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_19 : 6;                                     // Fixing Bit-Field Size 
	uint8                                        Pad_447[0x1];                                      // Fixing Size After Last Property 
	struct FNiagaraUserParameterBinding          RenderTargetUserParameter;                         // 0x50(0x20)(Edit, NativeAccessSpecifierPublic)
	TMap<uint64, class UTextureRenderTargetVolume*> ManagedRenderTargets;                              // 0x70(0x50)(Transient, DuplicateTransient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceRenderTargetVolume* GetDefaultObj();

};

// 0x40 (0x78 - 0x38)
// Class Niagara.NiagaraDataInterfaceRigidMeshCollisionQuery
class UNiagaraDataInterfaceRigidMeshCollisionQuery : public UNiagaraDataInterface
{
public:
	TArray<class FName>                          ActorTags;                                         // 0x38(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          ComponentTags;                                     // 0x48(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UActor>>         SourceActors;                                      // 0x58(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                         OnlyUseMoveable;                                   // 0x68(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseComplexCollisions;                              // 0x69(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         GlobalSearchAllowed;                               // 0x6A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         GlobalSearchForced;                                // 0x6B(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         GlobalSearchFallback_Unscripted;                   // 0x6C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_44E[0x3];                                      // Fixing Size After Last Property 
	int32                                        MaxNumPrimitives;                                  // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_44F[0x4];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceRigidMeshCollisionQuery* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraDIRigidMeshCollisionFunctionLibrary
class UNiagaraDIRigidMeshCollisionFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UNiagaraDIRigidMeshCollisionFunctionLibrary* GetDefaultObj();

	void SetSourceActors(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, TArray<class UActor*>& SourceActors);
};

// 0xC8 (0x100 - 0x38)
// Class Niagara.NiagaraDataInterfaceSkeletalMesh
class UNiagaraDataInterfaceSkeletalMesh : public UNiagaraDataInterface
{
public:
	enum class ENDISkeletalMesh_SourceMode       SourceMode;                                        // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_46A[0x7];                                      // Fixing Size After Last Property 
	TSoftObjectPtr<class UActor>                 SoftSourceActor;                                   // 0x40(0x30)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class FName>                          ComponentTags;                                     // 0x70(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class USkeletalMeshComponent*                SourceComponent;                                   // 0x80(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FNiagaraUserParameterBinding          MeshUserParameter;                                 // 0x88(0x20)(Edit, NativeAccessSpecifierPublic)
	enum class ENDISkeletalMesh_SkinningMode     SkinningMode;                                      // 0xA8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_46D[0x7];                                      // Fixing Size After Last Property 
	TArray<class FName>                          SamplingRegions;                                   // 0xB0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        WholeMeshLOD;                                      // 0xC0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_471[0x4];                                      // Fixing Size After Last Property 
	TArray<class FName>                          FilteredBones;                                     // 0xC8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          FilteredSockets;                                   // 0xD8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	class FName                                  ExcludeBoneName;                                   // 0xE8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bExcludeBone : 1;                                  // Mask: 0x1, PropSize: 0x10xF0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1A : 7;                                     // Fixing Bit-Field Size 
	uint8                                        Pad_476[0x3];                                      // Fixing Size After Last Property 
	int32                                        UvSetIndex;                                        // 0xF4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRequireCurrentFrameData;                          // 0xF8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_477[0x7];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceSkeletalMesh* GetDefaultObj();

	void OnSourceEndPlay(class UActor* InSource, enum class EEndPlayReason Reason);
};

// 0x80 (0xB8 - 0x38)
// Class Niagara.NiagaraDataInterfaceSpline
class UNiagaraDataInterfaceSpline : public UNiagaraDataInterface
{
public:
	class UActor*                                Source;                                            // 0x38(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraUserParameterBinding          SplineUserParameter;                               // 0x40(0x20)(Edit, NativeAccessSpecifierPublic)
	bool                                         bUseLUT;                                           // 0x60(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_487[0x3];                                      // Fixing Size After Last Property 
	int32                                        NumLUTSteps;                                       // 0x64(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_488[0x50];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceSpline* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class Niagara.NiagaraDataInterfaceSpriteRendererInfo
class UNiagaraDataInterfaceSpriteRendererInfo : public UNiagaraDataInterface
{
public:
	class UNiagaraSpriteRendererProperties*      SpriteRenderer;                                    // 0x38(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceSpriteRendererInfo* GetDefaultObj();

};

// 0x28 (0x60 - 0x38)
// Class Niagara.NiagaraDataInterfaceTexture
class UNiagaraDataInterfaceTexture : public UNiagaraDataInterface
{
public:
	class UTexture*                              Texture;                                           // 0x38(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraUserParameterBinding          TextureUserParameter;                              // 0x40(0x20)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceTexture* GetDefaultObj();

};

// 0x100 (0x170 - 0x70)
// Class Niagara.NiagaraDataInterfaceVector2DCurve
class UNiagaraDataInterfaceVector2DCurve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                            XCurve;                                            // 0x70(0x80)(Edit, NativeAccessSpecifierPublic)
	struct FRichCurve                            YCurve;                                            // 0xF0(0x80)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceVector2DCurve* GetDefaultObj();

};

// 0x200 (0x270 - 0x70)
// Class Niagara.NiagaraDataInterfaceVector4Curve
class UNiagaraDataInterfaceVector4Curve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                            XCurve;                                            // 0x70(0x80)(Edit, NativeAccessSpecifierPublic)
	struct FRichCurve                            YCurve;                                            // 0xF0(0x80)(Edit, NativeAccessSpecifierPublic)
	struct FRichCurve                            ZCurve;                                            // 0x170(0x80)(Edit, NativeAccessSpecifierPublic)
	struct FRichCurve                            WCurve;                                            // 0x1F0(0x80)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceVector4Curve* GetDefaultObj();

};

// 0x180 (0x1F0 - 0x70)
// Class Niagara.NiagaraDataInterfaceVectorCurve
class UNiagaraDataInterfaceVectorCurve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                            XCurve;                                            // 0x70(0x80)(Edit, NativeAccessSpecifierPublic)
	struct FRichCurve                            YCurve;                                            // 0xF0(0x80)(Edit, NativeAccessSpecifierPublic)
	struct FRichCurve                            ZCurve;                                            // 0x170(0x80)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceVectorCurve* GetDefaultObj();

};

// 0x10 (0x48 - 0x38)
// Class Niagara.NiagaraDataInterfaceVectorField
class UNiagaraDataInterfaceVectorField : public UNiagaraDataInterface
{
public:
	class UVectorField*                          Field;                                             // 0x38(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTileX;                                            // 0x40(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTileY;                                            // 0x41(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bTileZ;                                            // 0x42(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C3[0x5];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceVectorField* GetDefaultObj();

};

// 0x58 (0x90 - 0x38)
// Class Niagara.NiagaraDataInterfaceVolumeCache
class UNiagaraDataInterfaceVolumeCache : public UNiagaraDataInterface
{
public:
	class UVolumeCache*                          VolumeCache;                                       // 0x38(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4C8[0x50];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceVolumeCache* GetDefaultObj();

};

// 0x28 (0x60 - 0x38)
// Class Niagara.NiagaraDataInterfaceVolumeTexture
class UNiagaraDataInterfaceVolumeTexture : public UNiagaraDataInterface
{
public:
	class UTexture*                              Texture;                                           // 0x38(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraUserParameterBinding          TextureUserParameter;                              // 0x40(0x20)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDataInterfaceVolumeTexture* GetDefaultObj();

};

// 0x258 (0x280 - 0x28)
// Class Niagara.NiagaraDebugHUDSettings
class UNiagaraDebugHUDSettings : public UObject
{
public:
	uint8                                        Pad_4D4[0x20];                                     // Fixing Size After Last Property 
	struct FNiagaraDebugHUDSettingsData          Data;                                              // 0x48(0x238)(Edit, Config, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraDebugHUDSettings* GetDefaultObj();

};

// 0x368 (0x448 - 0xE0)
// Class Niagara.NiagaraDecalRendererProperties
class UNiagaraDecalRendererProperties : public UNiagaraRendererProperties
{
public:
	class UMaterialInterface*                    Material;                                          // 0xE0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraParameterBinding              MaterialParameterBinding;                          // 0xE8(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	enum class ENiagaraRendererSourceDataMode    SourceMode;                                        // 0xF4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4D9[0x3];                                      // Fixing Size After Last Property 
	int32                                        RendererVisibility;                                // 0xF8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DecalScreenSizeFade;                               // 0xFC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      PositionBinding;                                   // 0x100(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      DecalOrientationBinding;                           // 0x158(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      DecalSizeBinding;                                  // 0x1B0(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      DecalFadeBinding;                                  // 0x208(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      DecalSortOrderBinding;                             // 0x260(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      DecalColorBinding;                                 // 0x2B8(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      DecalVisibleBinding;                               // 0x310(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      RendererVisibilityTagBinding;                      // 0x368(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraRendererMaterialParameters    MaterialParameters;                                // 0x3C0(0x50)(Edit, NativeAccessSpecifierPublic)
	uint8                                        Pad_4DE[0x38];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UNiagaraDecalRendererProperties* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraEditorDataBase
class UNiagaraEditorDataBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UNiagaraEditorDataBase* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraEditorParametersAdapterBase
class UNiagaraEditorParametersAdapterBase : public UObject
{
public:

	static class UClass* StaticClass();
	static class UNiagaraEditorParametersAdapterBase* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraSignificanceHandler
class UNiagaraSignificanceHandler : public UObject
{
public:

	static class UClass* StaticClass();
	static class UNiagaraSignificanceHandler* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraSignificanceHandlerDistance
class UNiagaraSignificanceHandlerDistance : public UNiagaraSignificanceHandler
{
public:

	static class UClass* StaticClass();
	static class UNiagaraSignificanceHandlerDistance* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraSignificanceHandlerAge
class UNiagaraSignificanceHandlerAge : public UNiagaraSignificanceHandler
{
public:

	static class UClass* StaticClass();
	static class UNiagaraSignificanceHandlerAge* GetDefaultObj();

};

// 0x78 (0xA0 - 0x28)
// Class Niagara.NiagaraEffectType
class UNiagaraEffectType : public UObject
{
public:
	bool                                         bAllowCullingForLocalPlayers;                      // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4F4[0x3];                                      // Fixing Size After Last Property 
	enum class ENiagaraScalabilityUpdateFrequency UpdateFrequency;                                   // 0x2C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraCullReaction              CullReaction;                                      // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_4F6[0x4];                                      // Fixing Size After Last Property 
	class UNiagaraSignificanceHandler*           SignificanceHandler;                               // 0x38(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraSystemScalabilitySettings> DetailLevelScalabilitySettings;                    // 0x40(0x10)(ZeroConstructor, Deprecated, NativeAccessSpecifierPublic)
	struct FNiagaraSystemScalabilitySettingsArray SystemScalabilitySettings;                         // 0x50(0x10)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraEmitterScalabilitySettingsArray EmitterScalabilitySettings;                        // 0x60(0x10)(Edit, NativeAccessSpecifierPublic)
	uint8                                        Pad_4F8[0x8];                                      // Fixing Size After Last Property 
	class UNiagaraBaselineController*            PerformanceBaselineController;                     // 0x78(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FNiagaraPerfBaselineStats             PerfBaselineStats;                                 // 0x80(0x10)(Config, NoDestructor, NativeAccessSpecifierPrivate)
	struct FGuid                                 PerfBaselineVersion;                               // 0x90(0x10)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UNiagaraEffectType* GetDefaultObj();

};

// 0x90 (0xB8 - 0x28)
// Class Niagara.NiagaraEmitter
class UNiagaraEmitter : public UObject
{
public:
	uint8                                        Pad_4FB[0x8];                                      // Fixing Size After Last Property 
	struct FGuid                                 ExposedVersion;                                    // 0x30(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bVersioningEnabled;                                // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4FC[0x7];                                      // Fixing Size After Last Property 
	TArray<struct FVersionedNiagaraEmitterData>  VersionData;                                       // 0x48(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_4FD[0x8];                                      // Fixing Size After Last Property 
	class FString                                UniqueEmitterName;                                 // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UNiagaraRendererProperties*>    RendererProperties;                                // 0x70(0x10)(ZeroConstructor, Deprecated, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<struct FNiagaraEventScriptProperties> EventHandlerScriptProps;                           // 0x80(0x10)(ZeroConstructor, Deprecated, NativeAccessSpecifierPrivate)
	TArray<class UNiagaraSimulationStageBase*>   SimulationStages;                                  // 0x90(0x10)(ZeroConstructor, Deprecated, UObjectWrapper, NativeAccessSpecifierPrivate)
	class UNiagaraScript*                        GPUComputeScript;                                  // 0xA0(0x8)(ZeroConstructor, Deprecated, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class FName>                          SharedEventGeneratorIds;                           // 0xA8(0x10)(ZeroConstructor, Deprecated, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UNiagaraEmitter* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraEventReceiverEmitterAction
class UNiagaraEventReceiverEmitterAction : public UObject
{
public:

	static class UClass* StaticClass();
	static class UNiagaraEventReceiverEmitterAction* GetDefaultObj();

};

// 0x8 (0x30 - 0x28)
// Class Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles
class UNiagaraEventReceiverEmitterAction_SpawnParticles : public UNiagaraEventReceiverEmitterAction
{
public:
	uint32                                       NumParticles;                                      // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_505[0x4];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UNiagaraEventReceiverEmitterAction_SpawnParticles* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraFunctionLibrary
class UNiagaraFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UNiagaraFunctionLibrary* GetDefaultObj();

	class UNiagaraComponent* SpawnSystemAttachedWithParams(struct FFXSystemSpawnParameters* SpawnParams);
	class UNiagaraComponent* SpawnSystemAttached(class UNiagaraSystem* SystemTemplate, class USceneComponent* AttachToComponent, class FName AttachPointName, const struct FVector& Location, const struct FRotator& Rotation, enum class EAttachLocation LocationType, bool bAutoDestroy, bool bAutoActivate, enum class ENCPoolMethod PoolingMethod, bool bPreCullCheck);
	class UNiagaraComponent* SpawnSystemAtLocationWithParams(struct FFXSystemSpawnParameters* SpawnParams);
	class UNiagaraComponent* SpawnSystemAtLocation(class UObject* WorldContextObject, class UNiagaraSystem* SystemTemplate, const struct FVector& Location, const struct FRotator& Rotation, const struct FVector& Scale, bool bAutoDestroy, bool bAutoActivate, enum class ENCPoolMethod PoolingMethod, bool bPreCullCheck);
	void SetVolumeTextureObject(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class UVolumeTexture* Texture);
	void SetTextureObject(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class UTexture* Texture);
	void SetTexture2DArrayObject(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class UTexture2DArray* Texture);
	void SetSkeletalMeshDataInterfaceSamplingRegions(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, TArray<class FName>& SamplingRegions);
	void SetSkeletalMeshDataInterfaceFilteredSockets(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, TArray<class FName>& FilteredSockets);
	void SetSkeletalMeshDataInterfaceFilteredBones(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, TArray<class FName>& FilteredBones);
	void SetComponentNiagaraGPURayTracedCollisionGroup(class UObject* WorldContextObject, class UPrimitiveComponent* Primitive, int32 CollisionGroup);
	void SetActorNiagaraGPURayTracedCollisionGroup(class UObject* WorldContextObject, class UActor* Actor, int32 CollisionGroup);
	void ReleaseNiagaraGPURayTracedCollisionGroup(class UObject* WorldContextObject, int32 CollisionGroup);
	void OverrideSystemUserVariableStaticMeshComponent(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class UStaticMeshComponent* StaticMeshComponent);
	void OverrideSystemUserVariableStaticMesh(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class UStaticMesh* StaticMesh);
	void OverrideSystemUserVariableSkeletalMeshComponent(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class USkeletalMeshComponent* SkeletalMeshComponent);
	class UNiagaraParameterCollectionInstance* GetNiagaraParameterCollection(class UObject* WorldContextObject, class UNiagaraParameterCollection* Collection);
	int32 AcquireNiagaraGPURayTracedCollisionGroup(class UObject* WorldContextObject);
};

// 0x90 (0x330 - 0x2A0)
// Class Niagara.NiagaraLensEffectBase
class UNiagaraLensEffectBase : public UNiagaraActor
{
public:
	uint8                                        Pad_56E[0x10];                                     // Fixing Size After Last Property 
	struct FTransform                            DesiredRelativeTransform;                          // 0x2B0(0x60)(Edit, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        BaseAuthoredFOV;                                   // 0x310(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bAllowMultipleInstances : 1;                       // Mask: 0x1, PropSize: 0x10x314(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bResetWhenRetriggered : 1;                         // Mask: 0x2, PropSize: 0x10x314(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_22 : 6;                                     // Fixing Bit-Field Size 
	uint8                                        Pad_573[0x3];                                      // Fixing Size After Last Property 
	TArray<TSubclassOf<class UActor>>            EmittersToTreatAsSame;                             // 0x318(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	class UPlayerCameraManager*                  OwningCameraManager;                               // 0x328(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UNiagaraLensEffectBase* GetDefaultObj();

};

// 0x2C0 (0x3A0 - 0xE0)
// Class Niagara.NiagaraLightRendererProperties
class UNiagaraLightRendererProperties : public UNiagaraRendererProperties
{
public:
	enum class ENiagaraRendererSourceDataMode    SourceMode;                                        // 0xE0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_578[0x3];                                      // Fixing Size After Last Property 
	uint8                                        bUseInverseSquaredFalloff : 1;                     // Mask: 0x1, PropSize: 0x10xE4(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAffectsTranslucency : 1;                          // Mask: 0x2, PropSize: 0x10xE4(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAlphaScalesBrightness : 1;                        // Mask: 0x4, PropSize: 0x10xE4(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideInverseExposureBlend : 1;                 // Mask: 0x8, PropSize: 0x10xE4(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_23 : 4;                                     // Fixing Bit-Field Size 
	uint8                                        Pad_579[0x3];                                      // Fixing Size After Last Property 
	float                                        RadiusScale;                                       // 0xE8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefaultExponent;                                   // 0xEC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector3f                             ColorAdd;                                          // 0xF0(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InverseExposureBlend;                              // 0xFC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RendererVisibility;                                // 0x100(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_57B[0x4];                                      // Fixing Size After Last Property 
	struct FNiagaraVariableAttributeBinding      LightRenderingEnabledBinding;                      // 0x108(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      LightExponentBinding;                              // 0x160(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      PositionBinding;                                   // 0x1B8(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      ColorBinding;                                      // 0x210(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      RadiusBinding;                                     // 0x268(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      VolumetricScatteringBinding;                       // 0x2C0(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      RendererVisibilityTagBinding;                      // 0x318(0x58)(Edit, NativeAccessSpecifierPublic)
	uint8                                        Pad_57C[0x30];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UNiagaraLightRendererProperties* GetDefaultObj();

};

// 0x8B8 (0x998 - 0xE0)
// Class Niagara.NiagaraMeshRendererProperties
class UNiagaraMeshRendererProperties : public UNiagaraRendererProperties
{
public:
	TArray<struct FNiagaraMeshRendererMeshProperties> Meshes;                                            // 0xE0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class ENiagaraRendererSourceDataMode    SourceMode;                                        // 0xF0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraSortMode                  SortMode;                                          // 0xF1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_580[0x2];                                      // Fixing Size After Last Property 
	uint8                                        bOverrideMaterials : 1;                            // Mask: 0x1, PropSize: 0x10xF4(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseHeterogeneousVolumes : 1;                      // Mask: 0x2, PropSize: 0x10xF4(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSortOnlyWhenTranslucent : 1;                      // Mask: 0x4, PropSize: 0x10xF4(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_24 : 5;                                     // Fixing Bit-Field Size 
	uint8                                        Pad_581[0x3];                                      // Fixing Size After Last Property 
	enum class ENiagaraRendererSortPrecision     SortPrecision;                                     // 0xF8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraRendererGpuTranslucentLatency GpuTranslucentLatency;                             // 0xF9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_582[0x2];                                      // Fixing Size After Last Property 
	uint8                                        bSubImageBlend : 1;                                // Mask: 0x1, PropSize: 0x10xFC(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEnableFrustumCulling : 1;                         // Mask: 0x2, PropSize: 0x10xFC(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEnableCameraDistanceCulling : 1;                  // Mask: 0x4, PropSize: 0x10xFC(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEnableMeshFlipbook : 1;                           // Mask: 0x8, PropSize: 0x10xFC(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_25 : 4;                                     // Fixing Bit-Field Size 
	uint8                                        Pad_586[0x3];                                      // Fixing Size After Last Property 
	TArray<struct FNiagaraMeshMaterialOverride>  OverrideMaterials;                                 // 0x100(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraMeshMICOverride>       MICOverrideMaterials;                              // 0x110(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FVector2D                             SubImageSize;                                      // 0x120(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraMeshFacingMode            FacingMode;                                        // 0x130(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_589[0x3];                                      // Fixing Size After Last Property 
	uint8                                        bLockedAxisEnable : 1;                             // Mask: 0x1, PropSize: 0x10x134(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_26 : 7;                                     // Fixing Bit-Field Size 
	uint8                                        Pad_58B[0x3];                                      // Fixing Size After Last Property 
	struct FVector                               LockedAxis;                                        // 0x138(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraMeshLockedAxisSpace       LockedAxisSpace;                                   // 0x150(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_58C[0x7];                                      // Fixing Size After Last Property 
	struct FVector                               MeshBoundsScale;                                   // 0x158(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinCameraDistance;                                 // 0x170(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxCameraDistance;                                 // 0x174(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       RendererVisibility;                                // 0x178(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_58E[0x4];                                      // Fixing Size After Last Property 
	struct FNiagaraVariableAttributeBinding      PositionBinding;                                   // 0x180(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      ColorBinding;                                      // 0x1D8(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      VelocityBinding;                                   // 0x230(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      MeshOrientationBinding;                            // 0x288(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      ScaleBinding;                                      // 0x2E0(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      SubImageIndexBinding;                              // 0x338(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      DynamicMaterialBinding;                            // 0x390(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      DynamicMaterial1Binding;                           // 0x3E8(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      DynamicMaterial2Binding;                           // 0x440(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      DynamicMaterial3Binding;                           // 0x498(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      MaterialRandomBinding;                             // 0x4F0(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      CustomSortingBinding;                              // 0x548(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      NormalizedAgeBinding;                              // 0x5A0(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      CameraOffsetBinding;                               // 0x5F8(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      RendererVisibilityTagBinding;                      // 0x650(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      MeshIndexBinding;                                  // 0x6A8(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraRendererMaterialParameters    MaterialParameters;                                // 0x700(0x50)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      PrevPositionBinding;                               // 0x750(0x58)(Transient, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      PrevScaleBinding;                                  // 0x7A8(0x58)(Transient, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      PrevMeshOrientationBinding;                        // 0x800(0x58)(Transient, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      PrevCameraOffsetBinding;                           // 0x858(0x58)(Transient, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      PrevVelocityBinding;                               // 0x8B0(0x58)(Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_590[0x68];                                     // Fixing Size After Last Property 
	class UStaticMesh*                           ParticleMesh;                                      // 0x970(0x8)(ZeroConstructor, Deprecated, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                               PivotOffset;                                       // 0x978(0x18)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ENiagaraMeshPivotOffsetSpace      PivotOffsetSpace;                                  // 0x990(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_591[0x7];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UNiagaraMeshRendererProperties* GetDefaultObj();

};

// 0xC8 (0xF0 - 0x28)
// Class Niagara.NiagaraParameterCollectionInstance
class UNiagaraParameterCollectionInstance : public UObject
{
public:
	class UNiagaraParameterCollection*           Collection;                                        // 0x28(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraVariable>              OverridenParameters;                               // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FNiagaraParameterStore                ParameterStorage;                                  // 0x40(0x88)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_5FC[0x28];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UNiagaraParameterCollectionInstance* GetDefaultObj();

	void SetVectorParameter(const class FString& InVariableName, const struct FVector& InValue);
	void SetVector4Parameter(const class FString& InVariableName, struct FVector4& InValue);
	void SetVector2DParameter(const class FString& InVariableName, const struct FVector2D& InValue);
	void SetQuatParameter(const class FString& InVariableName, struct FQuat& InValue);
	void SetIntParameter(const class FString& InVariableName, int32 InValue);
	void SetFloatParameter(const class FString& InVariableName, float InValue);
	void SetColorParameter(const class FString& InVariableName, const struct FLinearColor& InValue);
	void SetBoolParameter(const class FString& InVariableName, bool InValue);
	struct FVector GetVectorParameter(const class FString& InVariableName);
	struct FVector4 GetVector4Parameter(const class FString& InVariableName);
	struct FVector2D GetVector2DParameter(const class FString& InVariableName);
	struct FQuat GetQuatParameter(const class FString& InVariableName);
	int32 GetIntParameter(const class FString& InVariableName);
	float GetFloatParameter(const class FString& InVariableName);
	struct FLinearColor GetColorParameter(const class FString& InVariableName);
	bool GetBoolParameter(const class FString& InVariableName);
};

// 0x38 (0x60 - 0x28)
// Class Niagara.NiagaraParameterCollection
class UNiagaraParameterCollection : public UObject
{
public:
	class FName                                  Namespace;                                         // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<struct FNiagaraVariable>              Parameters;                                        // 0x30(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UMaterialParameterCollection*          SourceMaterialCollection;                          // 0x40(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNiagaraParameterCollectionInstance*   DefaultInstance;                                   // 0x48(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGuid                                 CompileId;                                         // 0x50(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass();
	static class UNiagaraParameterCollection* GetDefaultObj();

};

// 0x48 (0x70 - 0x28)
// Class Niagara.NiagaraBaselineController
class UNiagaraBaselineController : public UObject
{
public:
	float                                        TestDuration;                                      // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_61D[0x4];                                      // Fixing Size After Last Property 
	class UNiagaraEffectType*                    EffectType;                                        // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraPerfBaselineActor*             Owner;                                             // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UNiagaraSystem>         System;                                            // 0x40(0x30)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UNiagaraBaselineController* GetDefaultObj();

	bool OnTickTest();
	void OnOwnerTick(float DeltaTime);
	void OnEndTest(const struct FNiagaraPerfBaselineStats& Stats);
	void OnBeginTest();
	class UNiagaraSystem* GetSystem();
};

// 0x18 (0x88 - 0x70)
// Class Niagara.NiagaraBaselineController_Basic
class UNiagaraBaselineController_Basic : public UNiagaraBaselineController
{
public:
	int32                                        NumInstances;                                      // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_620[0x4];                                      // Fixing Size After Last Property 
	TArray<class UNiagaraComponent*>             SpawnedComponents;                                 // 0x78(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UNiagaraBaselineController_Basic* GetDefaultObj();

};

// 0x10 (0x2A0 - 0x290)
// Class Niagara.NiagaraPerfBaselineActor
class UNiagaraPerfBaselineActor : public UActor
{
public:
	class UNiagaraBaselineController*            Controller;                                        // 0x290(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextRenderComponent*                  Label;                                             // 0x298(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraPerfBaselineActor* GetDefaultObj();

};

// 0x18 (0x40 - 0x28)
// Class Niagara.NiagaraPrecompileContainer
class UNiagaraPrecompileContainer : public UObject
{
public:
	TArray<class UNiagaraScript*>                Scripts;                                           // 0x28(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	class UNiagaraSystem*                        System;                                            // 0x38(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraPrecompileContainer* GetDefaultObj();

};

// 0x0 (0x290 - 0x290)
// Class Niagara.NiagaraPreviewBase
class UNiagaraPreviewBase : public UActor
{
public:

	static class UClass* StaticClass();
	static class UNiagaraPreviewBase* GetDefaultObj();

	void SetSystem(class UNiagaraSystem* InSystem);
	void SetLabelText(class FText& InXAxisText, class FText& InYAxisText);
};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraPreviewAxis
class UNiagaraPreviewAxis : public UObject
{
public:

	static class UClass* StaticClass();
	static class UNiagaraPreviewAxis* GetDefaultObj();

	int32 Num();
	void ApplyToPreview(class UNiagaraComponent* PreviewComponent, int32 PreviewIndex, bool bIsXAxis, class FString* OutLabelText);
};

// 0x10 (0x38 - 0x28)
// Class Niagara.NiagaraPreviewAxis_InterpParamBase
class UNiagaraPreviewAxis_InterpParamBase : public UNiagaraPreviewAxis
{
public:
	class FName                                  Param;                                             // 0x28(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        Count;                                             // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_645[0x4];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UNiagaraPreviewAxis_InterpParamBase* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class Niagara.NiagaraPreviewAxis_InterpParamInt32
class UNiagaraPreviewAxis_InterpParamInt32 : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	int32                                        Min;                                               // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        Max;                                               // 0x3C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UNiagaraPreviewAxis_InterpParamInt32* GetDefaultObj();

};

// 0x8 (0x40 - 0x38)
// Class Niagara.NiagaraPreviewAxis_InterpParamFloat
class UNiagaraPreviewAxis_InterpParamFloat : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	float                                        Min;                                               // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        Max;                                               // 0x3C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UNiagaraPreviewAxis_InterpParamFloat* GetDefaultObj();

};

// 0x20 (0x58 - 0x38)
// Class Niagara.NiagaraPreviewAxis_InterpParamVector2D
class UNiagaraPreviewAxis_InterpParamVector2D : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	struct FVector2D                             Min;                                               // 0x38(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector2D                             Max;                                               // 0x48(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UNiagaraPreviewAxis_InterpParamVector2D* GetDefaultObj();

};

// 0x30 (0x68 - 0x38)
// Class Niagara.NiagaraPreviewAxis_InterpParamVector
class UNiagaraPreviewAxis_InterpParamVector : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	struct FVector                               Min;                                               // 0x38(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                               Max;                                               // 0x50(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UNiagaraPreviewAxis_InterpParamVector* GetDefaultObj();

};

// 0x48 (0x80 - 0x38)
// Class Niagara.NiagaraPreviewAxis_InterpParamVector4
class UNiagaraPreviewAxis_InterpParamVector4 : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	uint8                                        Pad_64D[0x8];                                      // Fixing Size After Last Property 
	struct FVector4                              Min;                                               // 0x40(0x20)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector4                              Max;                                               // 0x60(0x20)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UNiagaraPreviewAxis_InterpParamVector4* GetDefaultObj();

};

// 0x20 (0x58 - 0x38)
// Class Niagara.NiagaraPreviewAxis_InterpParamLinearColor
class UNiagaraPreviewAxis_InterpParamLinearColor : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	struct FLinearColor                          Min;                                               // 0x38(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FLinearColor                          Max;                                               // 0x48(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass();
	static class UNiagaraPreviewAxis_InterpParamLinearColor* GetDefaultObj();

};

// 0x50 (0x2E0 - 0x290)
// Class Niagara.NiagaraPreviewGrid
class UNiagaraPreviewGrid : public UActor
{
public:
	class UNiagaraSystem*                        System;                                            // 0x290(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraPreviewGridResetMode      ResetMode;                                         // 0x298(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_65A[0x7];                                      // Fixing Size After Last Property 
	class UNiagaraPreviewAxis*                   PreviewAxisX;                                      // 0x2A0(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraPreviewAxis*                   PreviewAxisY;                                      // 0x2A8(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UNiagaraPreviewBase>       PreviewClass;                                      // 0x2B0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpacingX;                                          // 0x2B8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpacingY;                                          // 0x2BC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumX;                                              // 0x2C0(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        NumY;                                              // 0x2C4(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UChildActorComponent*>          PreviewComponents;                                 // 0x2C8(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_65F[0x8];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UNiagaraPreviewGrid* GetDefaultObj();

	void SetPaused(bool bPaused);
	void GetPreviews(TArray<class UNiagaraComponent*>* OutPreviews);
	void DeactivatePreviews();
	void ActivatePreviews(bool bReset);
};

// 0x9C0 (0xAA0 - 0xE0)
// Class Niagara.NiagaraRibbonRendererProperties
class UNiagaraRibbonRendererProperties : public UNiagaraRendererProperties
{
public:
	class UMaterialInterface*                    Material;                                          // 0xE0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraUserParameterBinding          MaterialUserParamBinding;                          // 0xE8(0x20)(Edit, NativeAccessSpecifierPublic)
	enum class ENiagaraRibbonFacingMode          FacingMode;                                        // 0x108(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_664[0x7];                                      // Fixing Size After Last Property 
	struct FNiagaraRibbonUVSettings              UV0Settings;                                       // 0x110(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FNiagaraRibbonUVSettings              UV1Settings;                                       // 0x148(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        MaxNumRibbons;                                     // 0x180(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseGPUInit;                                       // 0x184(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraRibbonDrawDirection       DrawDirection;                                     // 0x185(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraRibbonShapeMode           Shape;                                             // 0x186(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableAccurateGeometry;                           // 0x187(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        WidthSegmentationCount;                            // 0x188(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MultiPlaneCount;                                   // 0x18C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TubeSubdivisions;                                  // 0x190(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_668[0x4];                                      // Fixing Size After Last Property 
	TArray<struct FNiagaraRibbonShapeCustomVertex> CustomVertices;                                    // 0x198(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class ENiagaraRibbonTessellationMode    TessellationMode;                                  // 0x1A8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_669[0x3];                                      // Fixing Size After Last Property 
	float                                        CurveTension;                                      // 0x1AC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TessellationFactor;                                // 0x1B0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseConstantFactor;                                // 0x1B4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_66A[0x3];                                      // Fixing Size After Last Property 
	float                                        TessellationAngle;                                 // 0x1B8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bScreenSpaceTessellation;                          // 0x1BC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_66B[0x3];                                      // Fixing Size After Last Property 
	struct FNiagaraVariableAttributeBinding      PositionBinding;                                   // 0x1C0(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      ColorBinding;                                      // 0x218(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      VelocityBinding;                                   // 0x270(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      NormalizedAgeBinding;                              // 0x2C8(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      RibbonTwistBinding;                                // 0x320(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      RibbonWidthBinding;                                // 0x378(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      RibbonFacingBinding;                               // 0x3D0(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      RibbonIdBinding;                                   // 0x428(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      RibbonLinkOrderBinding;                            // 0x480(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      MaterialRandomBinding;                             // 0x4D8(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      DynamicMaterialBinding;                            // 0x530(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      DynamicMaterial1Binding;                           // 0x588(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      DynamicMaterial2Binding;                           // 0x5E0(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      DynamicMaterial3Binding;                           // 0x638(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      RibbonUVDistance;                                  // 0x690(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      U0OverrideBinding;                                 // 0x6E8(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      V0RangeOverrideBinding;                            // 0x740(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      U1OverrideBinding;                                 // 0x798(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      V1RangeOverrideBinding;                            // 0x7F0(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraRendererMaterialParameters    MaterialParameters;                                // 0x848(0x50)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      PrevPositionBinding;                               // 0x898(0x58)(Transient, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      PrevRibbonWidthBinding;                            // 0x8F0(0x58)(Transient, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      PrevRibbonFacingBinding;                           // 0x948(0x58)(Transient, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      PrevRibbonTwistBinding;                            // 0x9A0(0x58)(Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_674[0xA8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UNiagaraRibbonRendererProperties* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraScratchPadContainer
class UNiagaraScratchPadContainer : public UObject
{
public:

	static class UClass* StaticClass();
	static class UNiagaraScratchPadContainer* GetDefaultObj();

};

// 0x380 (0x3A8 - 0x28)
// Class Niagara.NiagaraScript
class UNiagaraScript : public UNiagaraScriptBase
{
public:
	uint8                                        Pad_67C[0x8];                                      // Fixing Size After Last Property 
	enum class ENiagaraScriptUsage               Usage;                                             // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_67F[0x3];                                      // Fixing Size After Last Property 
	struct FGuid                                 UsageId;                                           // 0x34(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_680[0x4];                                      // Fixing Size After Last Property 
	struct FNiagaraParameterStore                RapidIterationParameters;                          // 0x48(0x88)(NativeAccessSpecifierPublic)
	struct FNiagaraScriptExecutionParameterStore ScriptExecutionParamStore;                         // 0xD0(0xA8)(NativeAccessSpecifierPrivate)
	TArray<struct FNiagaraBoundParameter>        ScriptExecutionBoundParameters;                    // 0x178(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FNiagaraVMExecutableDataId            CachedScriptVMId;                                  // 0x188(0x58)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_681[0x10];                                     // Fixing Size After Last Property 
	struct FNiagaraVMExecutableData              CachedScriptVM;                                    // 0x1F0(0x190)(NativeAccessSpecifierPrivate)
	TArray<class UNiagaraParameterCollection*>   CachedParameterCollectionReferences;               // 0x380(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<struct FNiagaraScriptDataInterfaceInfo> CachedDefaultDataInterfaces;                       // 0x390(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_683[0x8];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UNiagaraScript* GetDefaultObj();

	void RaiseOnGPUCompilationComplete();
};

// 0x1D8 (0x200 - 0x28)
// Class Niagara.NiagaraSimCache
class UNiagaraSimCache : public UObject
{
public:
	struct FGuid                                 CacheGuid;                                         // 0x28(0x10)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class UNiagaraSystem>         SoftNiagaraSystem;                                 // 0x38(0x30)(Edit, EditConst, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        StartSeconds;                                      // 0x68(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        DurationSeconds;                                   // 0x6C(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FNiagaraSimCacheCreateParameters      CreateParameters;                                  // 0x70(0x58)(NativeAccessSpecifierPrivate)
	bool                                         bNeedsReadComponentMappingRecache;                 // 0xC8(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_6C6[0x7];                                      // Fixing Size After Last Property 
	struct FNiagaraSimCacheLayout                CacheLayout;                                       // 0xD0(0xC8)(NativeAccessSpecifierPrivate)
	TArray<struct FNiagaraSimCacheFrame>         CacheFrames;                                       // 0x198(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TMap<struct FNiagaraVariableBase, class UObject*> DataInterfaceStorage;                              // 0x1A8(0x50)(UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_6C8[0x8];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UNiagaraSimCache* GetDefaultObj();

	void ReadVectorAttribute(TArray<struct FVector>* OutValues, class FName AttributeName, class FName EmitterName, int32 FrameIndex);
	void ReadVector4Attribute(TArray<struct FVector4>* OutValues, class FName AttributeName, class FName EmitterName, int32 FrameIndex);
	void ReadVector2Attribute(TArray<struct FVector2D>* OutValues, class FName AttributeName, class FName EmitterName, int32 FrameIndex);
	void ReadQuatAttributeWithRebase(TArray<struct FQuat>* OutValues, const struct FQuat& Quat, class FName AttributeName, class FName EmitterName, int32 FrameIndex);
	void ReadQuatAttribute(TArray<struct FQuat>* OutValues, class FName AttributeName, class FName EmitterName, bool bLocalSpaceToWorld, int32 FrameIndex);
	void ReadPositionAttributeWithRebase(TArray<struct FVector>* OutValues, const struct FTransform& Transform, class FName AttributeName, class FName EmitterName, int32 FrameIndex);
	void ReadPositionAttribute(TArray<struct FVector>* OutValues, class FName AttributeName, class FName EmitterName, bool bLocalSpaceToWorld, int32 FrameIndex);
	void ReadIntAttribute(TArray<int32>* OutValues, class FName AttributeName, class FName EmitterName, int32 FrameIndex);
	void ReadFloatAttribute(TArray<float>* OutValues, class FName AttributeName, class FName EmitterName, int32 FrameIndex);
	void ReadColorAttribute(TArray<struct FLinearColor>* OutValues, class FName AttributeName, class FName EmitterName, int32 FrameIndex);
	bool IsEmpty();
	bool IsCacheValid();
	float GetStartSeconds();
	int32 GetNumFrames();
	int32 GetNumEmitters();
	TArray<class FName> GetEmitterNames();
	class FName GetEmitterName(int32 EmitterIndex);
	enum class ENiagaraSimCacheAttributeCaptureMode GetAttributeCaptureMode();
};

// 0xD8 (0x108 - 0x30)
// Class Niagara.AsyncNiagaraCaptureSimCache
class UAsyncNiagaraCaptureSimCache : public UBlueprintAsyncActionBase
{
public:
	class UNiagaraSimCache*                      CaptureSimCache;                                   // 0x30(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraComponent*                     CaptureComponent;                                  // 0x38(0x8)(ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	FMulticastInlineDelegateProperty_            CaptureComplete;                                   // 0x40(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	uint8                                        Pad_6FA[0xB8];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UAsyncNiagaraCaptureSimCache* GetDefaultObj();

	void OnCaptureComplete__DelegateSignature(bool bSuccess);
	class UAsyncNiagaraCaptureSimCache* CaptureNiagaraSimCacheUntilComplete(class UNiagaraSimCache* SimCache, const struct FNiagaraSimCacheCreateParameters& CreateParameters, class UNiagaraComponent* NiagaraComponent, class UNiagaraSimCache** OutSimCache, int32 CaptureRate, bool bAdvanceSimulation, float AdvanceDeltaTime);
	class UAsyncNiagaraCaptureSimCache* CaptureNiagaraSimCacheMultiFrame(class UNiagaraSimCache* SimCache, const struct FNiagaraSimCacheCreateParameters& CreateParameters, class UNiagaraComponent* NiagaraComponent, class UNiagaraSimCache** OutSimCache, int32 NumFrames, int32 CaptureRate, bool bAdvanceSimulation, float AdvanceDeltaTime);
};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraSimCacheFunctionLibrary
class UNiagaraSimCacheFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass();
	static class UNiagaraSimCacheFunctionLibrary* GetDefaultObj();

	class UNiagaraSimCache* CreateNiagaraSimCache(class UObject* WorldContextObject);
	bool CaptureNiagaraSimCacheImmediate(class UNiagaraSimCache* SimCache, const struct FNiagaraSimCacheCreateParameters& CreateParameters, class UNiagaraComponent* NiagaraComponent, class UNiagaraSimCache** OutSimCache, bool bAdvanceSimulation, float AdvanceDeltaTime);
};

// 0x18 (0x40 - 0x28)
// Class Niagara.NiagaraSimulationStageBase
class UNiagaraSimulationStageBase : public UNiagaraMergeable
{
public:
	class UNiagaraScript*                        Script;                                            // 0x28(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SimulationStageName;                               // 0x30(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEnabled : 1;                                      // Mask: 0x1, PropSize: 0x10x38(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_713[0x7];                                      // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UNiagaraSimulationStageBase* GetDefaultObj();

};

// 0x268 (0x2A8 - 0x40)
// Class Niagara.NiagaraSimulationStageGeneric
class UNiagaraSimulationStageGeneric : public UNiagaraSimulationStageBase
{
public:
	struct FNiagaraVariableAttributeBinding      EnabledBinding;                                    // 0x40(0x58)(Edit, NativeAccessSpecifierPublic)
	enum class ENiagaraIterationSource           IterationSource;                                   // 0x98(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_716[0x3];                                      // Fixing Size After Last Property 
	int32                                        Iterations;                                        // 0x9C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      NumIterationsBinding;                              // 0xA0(0x58)(Edit, NativeAccessSpecifierPublic)
	enum class ENiagaraSimStageExecuteBehavior   ExecuteBehavior;                                   // 0xF8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_718[0x3];                                      // Fixing Size After Last Property 
	uint8                                        bDisablePartialParticleUpdate : 1;                 // Mask: 0x1, PropSize: 0x10xFC(0x1)(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_2C : 7;                                     // Fixing Bit-Field Size 
	uint8                                        Pad_719[0x3];                                      // Fixing Size After Last Property 
	struct FNiagaraVariableDataInterfaceBinding  DataInterface;                                     // 0x100(0x20)(Edit, NativeAccessSpecifierPublic)
	uint8                                        bParticleIterationStateEnabled : 1;                // Mask: 0x1, PropSize: 0x10x120(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_2D : 7;                                     // Fixing Bit-Field Size 
	uint8                                        Pad_71A[0x7];                                      // Fixing Size After Last Property 
	struct FNiagaraVariableAttributeBinding      ParticleIterationStateBinding;                     // 0x128(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FIntPoint                             ParticleIterationStateRange;                       // 0x180(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bGpuDispatchForceLinear : 1;                       // Mask: 0x1, PropSize: 0x10x188(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideGpuDispatchNumThreads : 1;                // Mask: 0x2, PropSize: 0x10x188(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_2E : 6;                                     // Fixing Bit-Field Size 
	uint8                                        Pad_71C[0x3];                                      // Fixing Size After Last Property 
	struct FIntVector                            OverrideGpuDispatchNumThreads;                     // 0x18C(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraGpuDispatchType           DirectDispatchType;                                // 0x198(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraDirectDispatchElementType DirectDispatchElementType;                         // 0x199(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_71D[0x6];                                      // Fixing Size After Last Property 
	struct FNiagaraVariableAttributeBinding      ElementCountXBinding;                              // 0x1A0(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      ElementCountYBinding;                              // 0x1F8(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      ElementCountZBinding;                              // 0x250(0x58)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass();
	static class UNiagaraSimulationStageGeneric* GetDefaultObj();

};

// 0xA98 (0xB78 - 0xE0)
// Class Niagara.NiagaraSpriteRendererProperties
class UNiagaraSpriteRendererProperties : public UNiagaraRendererProperties
{
public:
	class UMaterialInterface*                    Material;                                          // 0xE0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraRendererSourceDataMode    SourceMode;                                        // 0xE8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_71F[0x7];                                      // Fixing Size After Last Property 
	struct FNiagaraUserParameterBinding          MaterialUserParamBinding;                          // 0xF0(0x20)(Edit, NativeAccessSpecifierPublic)
	enum class ENiagaraSpriteAlignment           Alignment;                                         // 0x110(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraSpriteFacingMode          FacingMode;                                        // 0x111(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_721[0x6];                                      // Fixing Size After Last Property 
	struct FVector2D                             PivotInUVSpace;                                    // 0x118(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MacroUVRadius;                                     // 0x128(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraSortMode                  SortMode;                                          // 0x12C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_723[0x3];                                      // Fixing Size After Last Property 
	struct FVector2D                             SubImageSize;                                      // 0x130(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSubImageBlend : 1;                                // Mask: 0x1, PropSize: 0x10x140(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRemoveHMDRollInVR : 1;                            // Mask: 0x2, PropSize: 0x10x140(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSortOnlyWhenTranslucent : 1;                      // Mask: 0x4, PropSize: 0x10x140(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_2F : 5;                                     // Fixing Bit-Field Size 
	uint8                                        Pad_725[0x3];                                      // Fixing Size After Last Property 
	enum class ENiagaraRendererSortPrecision     SortPrecision;                                     // 0x144(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraRendererGpuTranslucentLatency GpuTranslucentLatency;                             // 0x145(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraRendererPixelCoverageMode PixelCoverageMode;                                 // 0x146(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_727[0x1];                                      // Fixing Size After Last Property 
	float                                        PixelCoverageBlend;                                // 0x148(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinFacingCameraBlendDistance;                      // 0x14C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxFacingCameraBlendDistance;                      // 0x150(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEnableCameraDistanceCulling : 1;                  // Mask: 0x1, PropSize: 0x10x154(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_30 : 7;                                     // Fixing Bit-Field Size 
	uint8                                        Pad_72B[0x3];                                      // Fixing Size After Last Property 
	float                                        MinCameraDistance;                                 // 0x158(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxCameraDistance;                                 // 0x15C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       RendererVisibility;                                // 0x160(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_72E[0x4];                                      // Fixing Size After Last Property 
	struct FNiagaraVariableAttributeBinding      PositionBinding;                                   // 0x168(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      ColorBinding;                                      // 0x1C0(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      VelocityBinding;                                   // 0x218(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      SpriteRotationBinding;                             // 0x270(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      SpriteSizeBinding;                                 // 0x2C8(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      SpriteFacingBinding;                               // 0x320(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      SpriteAlignmentBinding;                            // 0x378(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      SubImageIndexBinding;                              // 0x3D0(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      DynamicMaterialBinding;                            // 0x428(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      DynamicMaterial1Binding;                           // 0x480(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      DynamicMaterial2Binding;                           // 0x4D8(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      DynamicMaterial3Binding;                           // 0x530(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      CameraOffsetBinding;                               // 0x588(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      UVScaleBinding;                                    // 0x5E0(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      PivotOffsetBinding;                                // 0x638(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      MaterialRandomBinding;                             // 0x690(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      CustomSortingBinding;                              // 0x6E8(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      NormalizedAgeBinding;                              // 0x740(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      RendererVisibilityTagBinding;                      // 0x798(0x58)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraRendererMaterialParameters    MaterialParameters;                                // 0x7F0(0x50)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      PrevPositionBinding;                               // 0x840(0x58)(Transient, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      PrevVelocityBinding;                               // 0x898(0x58)(Transient, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      PrevSpriteRotationBinding;                         // 0x8F0(0x58)(Transient, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      PrevSpriteSizeBinding;                             // 0x948(0x58)(Transient, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      PrevSpriteFacingBinding;                           // 0x9A0(0x58)(Transient, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      PrevSpriteAlignmentBinding;                        // 0x9F8(0x58)(Transient, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      PrevCameraOffsetBinding;                           // 0xA50(0x58)(Transient, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      PrevPivotOffsetBinding;                            // 0xAA8(0x58)(Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_734[0x78];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UNiagaraSpriteRendererProperties* GetDefaultObj();

};

// 0x4C8 (0x538 - 0x70)
// Class Niagara.NiagaraSystem
class UNiagaraSystem : public UFXSystemAsset
{
public:
	uint8                                        bSupportLargeWorldCoordinates : 1;                 // Mask: 0x1, PropSize: 0x10x70(0x1)(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideCastShadow : 1;                           // Mask: 0x2, PropSize: 0x10x70(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideReceivesDecals : 1;                       // Mask: 0x4, PropSize: 0x10x70(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideRenderCustomDepth : 1;                    // Mask: 0x8, PropSize: 0x10x70(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideCustomDepthStencilValue : 1;              // Mask: 0x10, PropSize: 0x10x70(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideCustomDepthStencilWriteMask : 1;          // Mask: 0x20, PropSize: 0x10x70(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideTranslucencySortPriority : 1;             // Mask: 0x40, PropSize: 0x10x70(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideTranslucencySortDistanceOffset : 1;       // Mask: 0x80, PropSize: 0x10x70(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCastShadow : 1;                                   // Mask: 0x1, PropSize: 0x10x71(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bReceivesDecals : 1;                               // Mask: 0x2, PropSize: 0x10x71(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRenderCustomDepth : 1;                            // Mask: 0x4, PropSize: 0x10x71(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDisableExperimentalVM : 1;                        // Mask: 0x8, PropSize: 0x10x71(0x1)(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_36 : 4;                                     // Fixing Bit-Field Size 
	enum class ERendererStencilMask              CustomDepthStencilWriteMask;                       // 0x72(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_741[0x1];                                      // Fixing Size After Last Property 
	int32                                        CustomDepthStencilValue;                           // 0x74(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TranslucencySortPriority;                          // 0x78(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TranslucencySortDistanceOffset;                    // 0x7C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDumpDebugSystemInfo;                              // 0x80(0x1)(Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDumpDebugEmitterInfo;                             // 0x81(0x1)(Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_744[0x1];                                      // Fixing Size After Last Property 
	bool                                         bRequireCurrentFrameData;                          // 0x83(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bFixedBounds : 1;                                  // Mask: 0x1, PropSize: 0x10x84(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_37 : 7;                                     // Fixing Bit-Field Size 
	uint8                                        Pad_746[0x3];                                      // Fixing Size After Last Property 
	class UNiagaraEffectType*                    EffectType;                                        // 0x88(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bOverrideScalabilitySettings;                      // 0x90(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_748[0x3];                                      // Fixing Size After Last Property 
	uint8                                        bOverrideAllowCullingForLocalPlayers : 1;          // Mask: 0x1, PropSize: 0x10x94(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bAllowCullingForLocalPlayersOverride : 1;          // Mask: 0x2, PropSize: 0x10x94(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_38 : 6;                                     // Fixing Bit-Field Size 
	uint8                                        Pad_74A[0x3];                                      // Fixing Size After Last Property 
	TArray<struct FNiagaraSystemScalabilityOverride> ScalabilityOverrides;                              // 0x98(0x10)(ZeroConstructor, Deprecated, Protected, NativeAccessSpecifierProtected)
	struct FNiagaraSystemScalabilityOverrides    SystemScalabilityOverrides;                        // 0xA8(0x10)(Edit, Protected, NativeAccessSpecifierProtected)
	TArray<struct FNiagaraEmitterHandle>         EmitterHandles;                                    // 0xB8(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class UNiagaraParameterCollectionInstance*> ParameterCollectionOverrides;                      // 0xC8(0x10)(Edit, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	class UNiagaraScript*                        SystemSpawnScript;                                 // 0xD8(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNiagaraScript*                        SystemUpdateScript;                                // 0xE0(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_74C[0x10];                                     // Fixing Size After Last Property 
	struct FNiagaraSystemCompiledData            SystemCompiledData;                                // 0xF8(0x240)(Protected, NativeAccessSpecifierProtected)
	struct FNiagaraUserRedirectionParameterStore ExposedParameters;                                 // 0x338(0xD8)(Protected, NativeAccessSpecifierProtected)
	struct FBox                                  FixedBounds;                                       // 0x410(0x38)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                         bAutoDeactivate;                                   // 0x448(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bDeterminism;                                      // 0x449(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_750[0x2];                                      // Fixing Size After Last Property 
	int32                                        RandomSeed;                                        // 0x44C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        WarmupTime;                                        // 0x450(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        WarmupTickCount;                                   // 0x454(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        WarmupTickDelta;                                   // 0x458(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bFixedTickDelta;                                   // 0x45C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_753[0x3];                                      // Fixing Size After Last Property 
	float                                        FixedTickDeltaTime;                                // 0x460(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bHasSystemScriptDIsWithPerInstanceData;            // 0x464(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bNeedsGPUContextInitForDataInterfaces;             // 0x465(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_756[0x2];                                      // Fixing Size After Last Property 
	TArray<class FName>                          UserDINamesReadInSystemScripts;                    // 0x468(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class UNiagaraDataChannelDefinitions*> ReferencedDataChannelDefinitions;                  // 0x478(0x10)(ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	uint8                                        Pad_757[0xB0];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UNiagaraSystem* GetDefaultObj();

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraValidationRule
class UNiagaraValidationRule : public UObject
{
public:

	static class UClass* StaticClass();
	static class UNiagaraValidationRule* GetDefaultObj();

};

// 0x38 (0x60 - 0x28)
// Class Niagara.VolumeCache
class UVolumeCache : public UObject
{
public:
	class FString                                FilePath;                                          // 0x28(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVolumeCacheType                  CacheType;                                         // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_764[0x3];                                      // Fixing Size After Last Property 
	struct FIntVector                            Resolution;                                        // 0x3C(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameRangeStart;                                   // 0x48(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameRangeEnd;                                     // 0x4C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_766[0x10];                                     // Fixing Size Of Struct

	static class UClass* StaticClass();
	static class UVolumeCache* GetDefaultObj();

};

}


