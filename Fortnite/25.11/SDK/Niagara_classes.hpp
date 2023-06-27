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

// 0x18 (0x40 - 0x28)
// Class Niagara.NDIRenderTargetVolumeSimCacheData
class UNDIRenderTargetVolumeSimCacheData : public UObject
{
public:
	class FName                                  CompressionType;                                   // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23A3[0x4];                                     // Fixing Size After Last Property..
	TArray<struct FNDIRenderTargetVolumeSimCacheFrame> Frames;                                            // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NDIRenderTargetVolumeSimCacheData");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraConvertInPlaceUtilityBase
class UNiagaraConvertInPlaceUtilityBase : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraConvertInPlaceUtilityBase");
		return Clss;
	}

};

// 0x20 (0x48 - 0x28)
// Class Niagara.NiagaraDataChannelReader
class UNiagaraDataChannelReader : public UObject
{
public:
	uint8                                        Pad_23A8[0x18];                                    // Fixing Size After Last Property..
	class UNiagaraDataChannelHandler*            Owner;                                             // 0x40(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataChannelReader");
		return Clss;
	}

	struct FVector4 ReadVector4(class FName VarName, int32 Index);
	struct FVector2D ReadVector2D(class FName VarName, int32 Index);
	struct FVector ReadVector(class FName VarName, int32 Index);
	struct FQuat ReadQuat(class FName VarName, int32 Index);
	struct FVector ReadPosition(class FName VarName, int32 Index);
	struct FLinearColor ReadLinearColor(class FName VarName, int32 Index);
	int32 ReadInt(class FName VarName, int32 Index);
	double ReadFloat(class FName VarName, int32 Index);
	bool ReadBool(class FName VarName, int32 Index);
	int32 Num();
	bool InitAccess(const struct FNiagaraDataChannelSearchParameters& SearchParams, bool bReadPrevFrameData);
};

// 0x18 (0x40 - 0x28)
// Class Niagara.NiagaraDataChannelWriter
class UNiagaraDataChannelWriter : public UObject
{
public:
	uint8                                        Pad_23AC[0x10];                                    // Fixing Size After Last Property..
	class UNiagaraDataChannelHandler*            Owner;                                             // 0x38(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataChannelWriter");
		return Clss;
	}

	void WriteVector4(class FName VarName, int32 Index, const struct FVector4& InData);
	void WriteVector2D(class FName VarName, int32 Index, const struct FVector2D& InData);
	void WriteVector(class FName VarName, int32 Index, const struct FVector& InData);
	void WriteSpawnInfo(class FName VarName, int32 Index, const struct FNiagaraSpawnInfo& InData);
	void WriteQuat(class FName VarName, int32 Index, const struct FQuat& InData);
	void WritePosition(class FName VarName, int32 Index, const struct FVector& InData);
	void WriteLinearColor(class FName VarName, int32 Index, const struct FLinearColor& InData);
	void WriteInt(class FName VarName, int32 Index, int32 InData);
	void WriteFloat(class FName VarName, int32 Index, double InData);
	void WriteBool(class FName VarName, int32 Index, bool InData);
	int32 Num();
	bool InitWrite(const struct FNiagaraDataChannelSearchParameters& SearchParams, int32 Count, bool bVisibleToGame, bool bVisibleToCPU, bool bVisibleToGPU);
};

// 0x18 (0x40 - 0x28)
// Class Niagara.NiagaraDataChannelHandler
class UNiagaraDataChannelHandler : public UObject
{
public:
	class UNiagaraDataChannel*                   DataChannel;                                       // 0x28(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNiagaraDataChannelWriter*             Writer;                                            // 0x30(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNiagaraDataChannelReader*             Reader;                                            // 0x38(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataChannelHandler");
		return Clss;
	}

	class UNiagaraDataChannelWriter* GetDataChannelWriter();
	class UNiagaraDataChannelReader* GetDataChannelReader();
};

// 0x8 (0x30 - 0x28)
// Class Niagara.NiagaraDataChannelAsset
class UNiagaraDataChannelAsset : public UObject
{
public:
	class UNiagaraDataChannel*                   DataChannel;                                       // 0x28(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataChannelAsset");
		return Clss;
	}

};

// 0xF8 (0x120 - 0x28)
// Class Niagara.NiagaraDataChannel
class UNiagaraDataChannel : public UObject
{
public:
	TArray<struct FNiagaraVariable>              Variables;                                         // 0x28(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	bool                                         bKeepPreviousFrameData;                            // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_23AD[0x7];                                     // Fixing Size After Last Property..
	struct FNiagaraDataSetCompiledData           CompiledData;                                      // 0x40(0x40)(NativeAccessSpecifierPrivate)
	struct FNiagaraDataSetCompiledData           CompiledDataGPU;                                   // 0x80(0x40)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_23AE[0x60];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataChannel");
		return Clss;
	}

};

// 0x0 (0x120 - 0x120)
// Class Niagara.NiagaraDataChannel_Global
class UNiagaraDataChannel_Global : public UNiagaraDataChannel
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataChannel_Global");
		return Clss;
	}

};

// 0x10 (0x50 - 0x40)
// Class Niagara.NiagaraDataChannelHandler_Global
class UNiagaraDataChannelHandler_Global : public UNiagaraDataChannelHandler
{
public:
	uint8                                        Pad_23AF[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataChannelHandler_Global");
		return Clss;
	}

};

// 0x68 (0x188 - 0x120)
// Class Niagara.NiagaraDataChannel_Islands
class UNiagaraDataChannel_Islands : public UNiagaraDataChannel
{
public:
	enum class ENiagraDataChannel_IslandMode     Mode;                                              // 0x120(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23B0[0x7];                                     // Fixing Size After Last Property..
	struct FVector                               InitialExtents;                                    // 0x128(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               MaxExtents;                                        // 0x140(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               PerElementExtents;                                 // 0x158(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class UNiagaraSystem>> Systems;                                           // 0x170(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	int32                                        IslandPoolSize;                                    // 0x180(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23B1[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataChannel_Islands");
		return Clss;
	}

};

// 0x30 (0x70 - 0x40)
// Class Niagara.NiagaraDataChannelHandler_Islands
class UNiagaraDataChannelHandler_Islands : public UNiagaraDataChannelHandler
{
public:
	TArray<int32>                                ActiveIslands;                                     // 0x40(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<int32>                                FreeIslands;                                       // 0x50(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FNDCIsland>                    IslandPool;                                        // 0x60(0x10)(ZeroConstructor, ContainsInstancedReference, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataChannelHandler_Islands");
		return Clss;
	}

};

// 0x10 (0x38 - 0x28)
// Class Niagara.NiagaraDataInterface
class UNiagaraDataInterface : public UNiagaraDataInterfaceBase
{
public:
	uint8                                        Pad_23B2[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterface");
		return Clss;
	}

};

// 0x80 (0xB8 - 0x38)
// Class Niagara.NiagaraDataInterfaceDataChannelRead
class UNiagaraDataInterfaceDataChannelRead : public UNiagaraDataInterface
{
public:
	class UNiagaraDataChannelAsset*              Channel;                                           // 0x38(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraDataInterfaceEmitterBinding   EmitterBinding;                                    // 0x40(0x8)(Edit, NoDestructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	bool                                         bReadCurrentFrame;                                 // 0x48(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUpdateSourceDataEveryTick;                        // 0x49(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideSpawnGroupToDataChannelIndex;             // 0x4A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23B3[0x1];                                     // Fixing Size After Last Property..
	class FName                                  SpawnInfoName;                                     // 0x4C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNDIDataChannelCompiledData           CompiledData;                                      // 0x50(0x68)(Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceDataChannelRead");
		return Clss;
	}

};

// 0xC0 (0xF8 - 0x38)
// Class Niagara.NiagaraDataInterfaceDataChannelWrite
class UNiagaraDataInterfaceDataChannelWrite : public UNiagaraDataInterface
{
public:
	enum class ENiagaraDataChannelAllocationMode AllocationMode;                                    // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23B4[0x3];                                     // Fixing Size After Last Property..
	uint32                                       AllocationCount;                                   // 0x3C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPublishToGame;                                    // 0x40(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPublishToCPU;                                     // 0x41(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPublishToGPU;                                     // 0x42(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUpdateDestinationDataEveryTick;                   // 0x43(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23B5[0x4];                                     // Fixing Size After Last Property..
	class UNiagaraDataChannelAsset*              Channel;                                           // 0x48(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNDIDataChannelWriteCompiledData      CompiledData;                                      // 0x50(0xA8)(Protected, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceDataChannelWrite");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraMessageDataBase
class UNiagaraMessageDataBase : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraMessageDataBase");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraParameterDefinitionsBase
class UNiagaraParameterDefinitionsBase : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraParameterDefinitionsBase");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraRenderableMeshInterface
class UNiagaraRenderableMeshInterface : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraRenderableMeshInterface");
		return Clss;
	}

};

// 0x20 (0x48 - 0x28)
// Class Niagara.NiagaraScriptSourceBase
class UNiagaraScriptSourceBase : public UObject
{
public:
	uint8                                        Pad_23B6[0x20];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraScriptSourceBase");
		return Clss;
	}

};

// 0xF8 (0x128 - 0x30)
// Class Niagara.NiagaraSettings
class UNiagaraSettings : public UDeveloperSettings
{
public:
	bool                                         bSystemsSupportLargeWorldCoordinates;              // 0x30(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnforceStrictStackTypes;                          // 0x31(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bExperimentalVMEnabled;                            // 0x32(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23B7[0x5];                                     // Fixing Size After Last Property..
	struct FSoftObjectPath                       DefaultEffectType;                                 // 0x38(0x18)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                       RequiredEffectType;                                // 0x50(0x18)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          PositionPinTypeColor;                              // 0x68(0x10)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FText>                          QualityLevels;                                     // 0x78(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	TMap<class FString, class FText>             ComponentRendererWarningsPerClass;                 // 0x88(0x50)(Edit, Config, NativeAccessSpecifierPublic)
	enum class ETextureRenderTargetFormat        DefaultRenderTargetFormat;                         // 0xD8(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraGpuBufferFormat           DefaultGridFormat;                                 // 0xD9(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23B8[0x2];                                     // Fixing Size After Last Property..
	enum class ENiagaraDefaultRendererMotionVectorSetting DefaultRendererMotionVectorSetting;                // 0xDC(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraDefaultRendererPixelCoverageMode DefaultPixelCoverageMode;                          // 0xE0(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraDefaultSortPrecision      DefaultSortPrecision;                              // 0xE1(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraDefaultGpuTranslucentLatency DefaultGpuTranslucentLatency;                      // 0xE2(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23B9[0x1];                                     // Fixing Size After Last Property..
	float                                        DefaultLightInverseExposureBlend;                  // 0xE4(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENDISkelMesh_GpuMaxInfluences     NDISkelMesh_GpuMaxInfluences;                      // 0xE8(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENDISkelMesh_GpuUniformSamplingFormat NDISkelMesh_GpuUniformSamplingFormat;              // 0xE9(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENDISkelMesh_AdjacencyTriangleIndexFormat NDISkelMesh_AdjacencyTriangleIndexFormat;          // 0xEA(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         NDIStaticMesh_AllowDistanceFields;                 // 0xEB(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23BA[0x4];                                     // Fixing Size After Last Property..
	TArray<enum class ENDICollisionQuery_AsyncGpuTraceProvider> NDICollisionQuery_AsyncGpuTraceProviderOrder;      // 0xF0(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	class FString                                SimCacheAuxiliaryFileBasePath;                     // 0x100(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int64                                        SimCacheMaxCPUMemoryVolumetrics;                   // 0x110(0x8)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraPlatformSetRedirect>   PlatformSetRedirects;                              // 0x118(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraSettings");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraSimCacheCustomStorageInterface
class UNiagaraSimCacheCustomStorageInterface : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraSimCacheCustomStorageInterface");
		return Clss;
	}

};

// 0x10 (0x38 - 0x28)
// Class Niagara.NiagaraValidationRuleSet
class UNiagaraValidationRuleSet : public UObject
{
public:
	TArray<class UNiagaraValidationRule*>        ValidationRules;                                   // 0x28(0x10)(Edit, ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraValidationRuleSet");
		return Clss;
	}

};

// 0x48 (0x80 - 0x38)
// Class Niagara.NiagaraDataInterfaceActorComponent
class UNiagaraDataInterfaceActorComponent : public UNiagaraDataInterface
{
public:
	enum class ENDIActorComponentSourceMode      SourceMode;                                        // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23BB[0x3];                                     // Fixing Size After Last Property..
	int32                                        LocalPlayerIndex;                                  // 0x3C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TLazyObjectPtr<class AActor>                 SourceActor;                                       // 0x40(0x1C)(Edit, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23BC[0x4];                                     // Fixing Size After Last Property..
	struct FNiagaraUserParameterBinding          ActorOrComponentParameter;                         // 0x60(0x18)(Edit, NativeAccessSpecifierPublic)
	bool                                         bRequireCurrentFrameData;                          // 0x78(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23BD[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceActorComponent");
		return Clss;
	}

};

// 0x10 (0x48 - 0x38)
// Class Niagara.NiagaraDataInterfaceAsyncGpuTrace
class UNiagaraDataInterfaceAsyncGpuTrace : public UNiagaraDataInterface
{
public:
	int32                                        MaxTracesPerParticle;                              // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxRetraces;                                       // 0x3C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENDICollisionQuery_AsyncGpuTraceProvider TraceProvider;                                     // 0x40(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23BE[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceAsyncGpuTrace");
		return Clss;
	}

};

// 0x8 (0x40 - 0x38)
// Class Niagara.NiagaraDataInterfaceDebugDraw
class UNiagaraDataInterfaceDebugDraw : public UNiagaraDataInterface
{
public:
	uint32                                       OverrideMaxLineInstances;                          // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23BF[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceDebugDraw");
		return Clss;
	}

};

// 0x70 (0xA8 - 0x38)
// Class Niagara.NiagaraDataInterfaceDynamicMesh
class UNiagaraDataInterfaceDynamicMesh : public UNiagaraDataInterface
{
public:
	uint8                                        Pad_23C0[0x8];                                     // Fixing Size After Last Property..
	TArray<struct FNiagaraDynamicMeshSection>    Sections;                                          // 0x40(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraDynamicMeshMaterial>   Materials;                                         // 0x50(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        NumVertices;                                       // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumTexCoords;                                      // 0x64(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasColors;                                        // 0x68(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasTangentBasis;                                  // 0x69(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bClearTrianglesPerFrame;                           // 0x6A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23C1[0x5];                                     // Fixing Size After Last Property..
	struct FBox                                  DefaultBounds;                                     // 0x70(0x38)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceDynamicMesh");
		return Clss;
	}

};

// 0x8 (0x40 - 0x38)
// Class Niagara.NiagaraDataInterfaceEmitterProperties
class UNiagaraDataInterfaceEmitterProperties : public UNiagaraDataInterface
{
public:
	struct FNiagaraDataInterfaceEmitterBinding   EmitterBinding;                                    // 0x38(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceEmitterProperties");
		return Clss;
	}

};

// 0x0 (0x38 - 0x38)
// Class Niagara.NiagaraDataInterfaceGBuffer
class UNiagaraDataInterfaceGBuffer : public UNiagaraDataInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceGBuffer");
		return Clss;
	}

};

// 0x68 (0xA0 - 0x38)
// Class Niagara.NiagaraDataInterfacePhysicsAsset
class UNiagaraDataInterfacePhysicsAsset : public UNiagaraDataInterface
{
public:
	class UPhysicsAsset*                         DefaultSource;                                     // 0x38(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class AActor>                 SoftSourceActor;                                   // 0x40(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraUserParameterBinding          MeshUserParameter;                                 // 0x68(0x18)(Edit, NativeAccessSpecifierPublic)
	uint8                                        Pad_23C2[0x20];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfacePhysicsAsset");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraPhysicsAssetDICollectorInterface
class UNiagaraPhysicsAssetDICollectorInterface : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraPhysicsAssetDICollectorInterface");
		return Clss;
	}

};

// 0x28 (0x60 - 0x38)
// Class Niagara.NiagaraDataInterfaceSimCacheReader
class UNiagaraDataInterfaceSimCacheReader : public UNiagaraDataInterface
{
public:
	struct FNiagaraUserParameterBinding          SimCacheBinding;                                   // 0x38(0x18)(Edit, NativeAccessSpecifierPublic)
	class UNiagaraSimCache*                      SimCache;                                          // 0x50(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  EmitterBinding;                                    // 0x58(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23C3[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceSimCacheReader");
		return Clss;
	}

};

// 0x8 (0x40 - 0x38)
// Class Niagara.NiagaraDataInterfaceSimpleCounter
class UNiagaraDataInterfaceSimpleCounter : public UNiagaraDataInterface
{
public:
	enum class ENiagaraGpuSyncMode               GpuSyncMode;                                       // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        InitialValue;                                      // 0x3C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceSimpleCounter");
		return Clss;
	}

};

// 0x90 (0xC8 - 0x38)
// Class Niagara.NiagaraDataInterfaceStaticMesh
class UNiagaraDataInterfaceStaticMesh : public UNiagaraDataInterface
{
public:
	enum class ENDIStaticMesh_SourceMode         SourceMode;                                        // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23C5[0x7];                                     // Fixing Size After Last Property..
	class UStaticMesh*                           DefaultMesh;                                       // 0x40(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class AActor>                 SoftSourceActor;                                   // 0x48(0x28)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UStaticMeshComponent*                  SourceComponent;                                   // 0x70(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FNDIStaticMeshSectionFilter           SectionFilter;                                     // 0x78(0x10)(Edit, NativeAccessSpecifierPublic)
	bool                                         bCaptureTransformsPerFrame;                        // 0x88(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUsePhysicsBodyVelocity;                           // 0x89(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowSamplingFromStreamingLODs;                   // 0x8A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23C6[0x1];                                     // Fixing Size After Last Property..
	int32                                        LODIndex;                                          // 0x8C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraUserParameterBinding          LODIndexUserParameter;                             // 0x90(0x18)(Edit, NativeAccessSpecifierPublic)
	int32                                        InstanceIndex;                                     // 0xA8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23C7[0x4];                                     // Fixing Size After Last Property..
	TArray<class FName>                          FilteredSockets;                                   // 0xB0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_23C8[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceStaticMesh");
		return Clss;
	}

	void SetNiagaraStaticMeshDIInstanceIndex(class UNiagaraComponent* NiagaraSystem, class FName UserParameterName, int32 NewInstanceIndex);
	void OnSourceEndPlay(class AActor* InSource, enum class EEndPlayReason Reason);
};

// 0x60 (0x98 - 0x38)
// Class Niagara.NiagaraDataInterfaceUObjectPropertyReader
class UNiagaraDataInterfaceUObjectPropertyReader : public UNiagaraDataInterface
{
public:
	struct FNiagaraUserParameterBinding          UObjectParameterBinding;                           // 0x38(0x18)(Edit, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraUObjectPropertyReaderRemap> PropertyRemap;                                     // 0x50(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class AActor>                 SourceActor;                                       // 0x60(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class UObject>                   SourceActorComponentClass;                         // 0x88(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23CA[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceUObjectPropertyReader");
		return Clss;
	}

	void SetUObjectReaderPropertyRemap(class UNiagaraComponent* NiagaraComponent, class FName UserParameterName, class FName GraphName, class FName RemapName);
};

// 0x20 (0x58 - 0x38)
// Class Niagara.NiagaraDataInterfaceVirtualTexture
class UNiagaraDataInterfaceVirtualTexture : public UNiagaraDataInterface
{
public:
	class URuntimeVirtualTexture*                Texture;                                           // 0x38(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraUserParameterBinding          TextureUserParameter;                              // 0x40(0x18)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceVirtualTexture");
		return Clss;
	}

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
	uint8                                        Pad_23CB[0x2];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneNiagaraSystemSpawnSection");
		return Clss;
	}

};

// 0x10 (0xA8 - 0x98)
// Class Niagara.MovieSceneNiagaraTrack
class UMovieSceneNiagaraTrack : public UMovieSceneNameableTrack
{
public:
	TArray<class UMovieSceneSection*>            Sections;                                          // 0x98(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneNiagaraTrack");
		return Clss;
	}

};

// 0x8 (0xB0 - 0xA8)
// Class Niagara.MovieSceneNiagaraSystemTrack
class UMovieSceneNiagaraSystemTrack : public UMovieSceneNiagaraTrack
{
public:
	uint8                                        Pad_23CC[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneNiagaraSystemTrack");
		return Clss;
	}

};

// 0x18 (0xC0 - 0xA8)
// Class Niagara.MovieSceneNiagaraParameterTrack
class UMovieSceneNiagaraParameterTrack : public UMovieSceneNiagaraTrack
{
public:
	struct FNiagaraVariable                      Parameter;                                         // 0xA8(0x18)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneNiagaraParameterTrack");
		return Clss;
	}

};

// 0x8 (0xC8 - 0xC0)
// Class Niagara.MovieSceneNiagaraBoolParameterTrack
class UMovieSceneNiagaraBoolParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:
	uint8                                        Pad_23CD[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneNiagaraBoolParameterTrack");
		return Clss;
	}

};

// 0x8 (0xC8 - 0xC0)
// Class Niagara.MovieSceneNiagaraColorParameterTrack
class UMovieSceneNiagaraColorParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:
	uint8                                        Pad_23CE[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneNiagaraColorParameterTrack");
		return Clss;
	}

};

// 0x8 (0xC8 - 0xC0)
// Class Niagara.MovieSceneNiagaraFloatParameterTrack
class UMovieSceneNiagaraFloatParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:
	uint8                                        Pad_23CF[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneNiagaraFloatParameterTrack");
		return Clss;
	}

};

// 0x8 (0xC8 - 0xC0)
// Class Niagara.MovieSceneNiagaraIntegerParameterTrack
class UMovieSceneNiagaraIntegerParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:
	uint8                                        Pad_23D0[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneNiagaraIntegerParameterTrack");
		return Clss;
	}

};

// 0x10 (0xD0 - 0xC0)
// Class Niagara.MovieSceneNiagaraVectorParameterTrack
class UMovieSceneNiagaraVectorParameterTrack : public UMovieSceneNiagaraParameterTrack
{
public:
	uint8                                        Pad_23D1[0x8];                                     // Fixing Size After Last Property..
	int32                                        ChannelsUsed;                                      // 0xC8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_23D2[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("MovieSceneNiagaraVectorParameterTrack");
		return Clss;
	}

};

// 0x10 (0x298 - 0x288)
// Class Niagara.NiagaraActor
class ANiagaraActor : public AActor
{
public:
	class UNiagaraComponent*                     NiagaraComponent;                                  // 0x288(0x8)(Edit, BlueprintVisible, ExportObject, BlueprintReadOnly, ZeroConstructor, EditConst, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bDestroyOnSystemFinish : 1;                        // Mask: 0x1, PropSize: 0x10x290(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_23D3[0x7];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraActor");
		return Clss;
	}

	void SetDestroyOnSystemFinish(bool bShouldDestroyOnSystemFinish);
	void OnNiagaraSystemFinished(class UNiagaraComponent* FinishedComponent);
	bool GetDestroyOnSystemFinish();
};

// 0x10 (0x38 - 0x28)
// Class Niagara.NiagaraBakerOutput
class UNiagaraBakerOutput : public UObject
{
public:
	class FString                                OutputName;                                        // 0x28(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraBakerOutput");
		return Clss;
	}

};

// 0x68 (0xA0 - 0x38)
// Class Niagara.NiagaraBakerOutputSimCache
class UNiagaraBakerOutputSimCache : public UNiagaraBakerOutput
{
public:
	class FString                                SimCacheAssetPathFormat;                           // 0x38(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraSimCacheCreateParameters      CreateParameters;                                  // 0x48(0x58)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraBakerOutputSimCache");
		return Clss;
	}

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
	uint8                                        BitPad_1F4 : 3;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_23D4[0x3];                                     // Fixing Size After Last Property..
	struct FIntPoint                             FrameSize;                                         // 0x54(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FIntPoint                             AtlasTextureSize;                                  // 0x5C(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23D5[0x8];                                     // Fixing Size After Last Property..
	enum class ETextureAddress                   TextureAddressX;                                   // 0x6C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextureAddress                   TextureAddressY;                                   // 0x6D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23D6[0x2];                                     // Fixing Size After Last Property..
	class FString                                AtlasAssetPathFormat;                              // 0x70(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FramesAssetPathFormat;                             // 0x80(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FramesExportPathFormat;                            // 0x90(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraBakerOutputTexture2D");
		return Clss;
	}

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
	uint8                                        BitPad_1F5 : 5;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_23D7[0x7];                                     // Fixing Size After Last Property..
	class FString                                AtlasAssetPathFormat;                              // 0x58(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FramesAssetPathFormat;                             // 0x68(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                FramesExportPathFormat;                            // 0x78(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraBakerOutputVolumeTexture");
		return Clss;
	}

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
	uint8                                        BitPad_1F6 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_23D8[0x3];                                     // Fixing Size After Last Property..
	struct FIntPoint                             FramesPerDimension;                                // 0x38(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UNiagaraBakerOutput*>           Outputs;                                           // 0x40(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraBakerCameraSettings>   CameraSettings;                                    // 0x50(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        CurrentCameraIndex;                                // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  BakeQualityLevel;                                  // 0x64(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRenderComponentOnly : 1;                          // Mask: 0x1, PropSize: 0x10x68(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1F7 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_23D9[0x7];                                     // Fixing Size After Last Property..
	TArray<struct FNiagaraBakerTextureSettings>  OutputTextures;                                    // 0x70(0x10)(ZeroConstructor, Deprecated, NativeAccessSpecifierPublic)
	enum class ENiagaraBakerViewMode             CameraViewportMode;                                // 0x80(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23DA[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               CameraViewportLocation[0x7];                       // 0x88(0xA8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              CameraViewportRotation[0x7];                       // 0x130(0xA8)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        CameraOrbitDistance;                               // 0x1D8(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CameraFOV;                                         // 0x1DC(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CameraOrthoWidth;                                  // 0x1E0(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseCameraAspectRatio : 1;                         // Mask: 0x1, PropSize: 0x10x1E4(0x1)(Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1F8 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_23DB[0x3];                                     // Fixing Size After Last Property..
	float                                        CameraAspectRatio;                                 // 0x1E8(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23DC[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraBakerSettings");
		return Clss;
	}

};

// 0x2A0 (0x808 - 0x568)
// Class Niagara.NiagaraComponent
class UNiagaraComponent : public UFXSystemComponent
{
public:
	class UNiagaraSystem*                        Asset;                                             // 0x568(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ENiagaraTickBehavior              TickBehavior;                                      // 0x570(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_23F2[0x3];                                     // Fixing Size After Last Property..
	int32                                        RandomSeedOffset;                                  // 0x574(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FNiagaraUserRedirectionParameterStore OverrideParameters;                                // 0x578(0xD8)(NativeAccessSpecifierPrivate)
	uint8                                        bForceSolo : 1;                                    // Mask: 0x1, PropSize: 0x10x650(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bEnableGpuComputeDebug : 1;                        // Mask: 0x2, PropSize: 0x10x650(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bOverrideWarmupSettings : 1;                       // Mask: 0x4, PropSize: 0x10x650(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_1F9 : 5;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_23F3[0x3];                                     // Fixing Size After Last Property..
	int32                                        WarmupTickCount;                                   // 0x654(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        WarmupTickDelta;                                   // 0x658(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_23F4[0x34];                                    // Fixing Size After Last Property..
	uint8                                        bAutoDestroy : 1;                                  // Mask: 0x1, PropSize: 0x10x690(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bRenderingEnabled : 1;                             // Mask: 0x2, PropSize: 0x10x690(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        bAutoManageAttachment : 1;                         // Mask: 0x4, PropSize: 0x10x690(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAutoAttachWeldSimulatedBodies : 1;                // Mask: 0x8, PropSize: 0x10x690(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1FA : 4;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_23F5[0x3];                                     // Fixing Size After Last Property..
	float                                        MaxTimeBeforeForceUpdateTransform;                 // 0x694(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23F6[0x8];                                     // Fixing Size After Last Property..
	FMulticastInlineDelegateProperty_            OnSystemFinished;                                  // 0x6A0(0x10)(ZeroConstructor, InstancedReference, BlueprintAssignable, NativeAccessSpecifierPublic)
	TWeakObjectPtr<class USceneComponent>        AutoAttachParent;                                  // 0x6B0(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, DisableEditOnTemplate, EditConst, InstancedReference, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  AutoAttachSocketName;                              // 0x6B8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAttachmentRule                   AutoAttachLocationRule;                            // 0x6BC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAttachmentRule                   AutoAttachRotationRule;                            // 0x6BD(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EAttachmentRule                   AutoAttachScaleRule;                               // 0x6BE(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23F7[0x9];                                     // Fixing Size After Last Property..
	uint8                                        BitPad_1FB : 4;                                    // Fixing Bit-Field Size..
	uint8                                        bAllowScalability : 1;                             // Mask: 0x10, PropSize: 0x10x6C8(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        BitPad_1FC : 3;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_23F8[0x12F];                                   // Fixing Size After Last Property..
	class UNiagaraSimCache*                      SimCache;                                          // 0x7F8(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UNiagaraCullProxyComponent*            CullProxy;                                         // 0x800(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraComponent");
		return Clss;
	}

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
	void SetVariableActor(class FName InVariableName, class AActor* Actor);
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
	void SetNiagaraVariableActor(const class FString& InVariableName, class AActor* Actor);
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
	uint8                                        Pad_23F9[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraComponentPool");
		return Clss;
	}

};

// 0x88 (0xB0 - 0x28)
// Class Niagara.NiagaraRendererProperties
class UNiagaraRendererProperties : public UNiagaraMergeable
{
public:
	struct FNiagaraPlatformSet                   Platforms;                                         // 0x28(0x30)(Edit, NativeAccessSpecifierPublic)
	int32                                        SortOrderHint;                                     // 0x58(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraRendererMotionVectorSetting MotionVectorSetting;                               // 0x5C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      RendererEnabledBinding;                            // 0x60(0x28)(Edit, NativeAccessSpecifierPublic)
	bool                                         bIsEnabled;                                        // 0x88(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowInCullProxies;                               // 0x89(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23FA[0x2];                                     // Fixing Size After Last Property..
	struct FGuid                                 OuterEmitterVersion;                               // 0x8C(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23FB[0x14];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraRendererProperties");
		return Clss;
	}

};

// 0xF0 (0x1A0 - 0xB0)
// Class Niagara.NiagaraComponentRendererProperties
class UNiagaraComponentRendererProperties : public UNiagaraRendererProperties
{
public:
	TSubclassOf<class USceneComponent>           ComponentType;                                     // 0xB0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       ComponentCountLimit;                               // 0xB8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23FC[0x4];                                     // Fixing Size After Last Property..
	struct FNiagaraVariableAttributeBinding      EnabledBinding;                                    // 0xC0(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      RendererVisibilityTagBinding;                      // 0xE8(0x28)(Edit, NativeAccessSpecifierPublic)
	bool                                         bAssignComponentsOnParticleID;                     // 0x110(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bCreateComponentFirstParticleFrame;                // 0x111(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOnlyActivateNewlyAquiredComponents;               // 0x112(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_23FD[0x1];                                     // Fixing Size After Last Property..
	int32                                        RendererVisibility;                                // 0x114(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USceneComponent*                       TemplateComponent;                                 // 0x118(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraComponentPropertyBinding> PropertyBindings;                                  // 0x120(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_23FE[0x70];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraComponentRendererProperties");
		return Clss;
	}

};

// 0x18 (0x820 - 0x808)
// Class Niagara.NiagaraCullProxyComponent
class UNiagaraCullProxyComponent : public UNiagaraComponent
{
public:
	TArray<struct FNiagaraCulledComponentInfo>   Instances;                                         // 0x808(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_23FF[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraCullProxyComponent");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraDataChannelLibrary
class UNiagaraDataChannelLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataChannelLibrary");
		return Clss;
	}

	class UNiagaraDataChannelWriter* WriteToNiagaraDataChannel(class UObject* WorldContextObject, class UNiagaraDataChannelAsset* Channel, const struct FNiagaraDataChannelSearchParameters& SearchParams, int32 Count, bool bVisibleToGame, bool bVisibleToCPU, bool bVisibleToGPU);
	class UNiagaraDataChannelReader* ReadFromNiagaraDataChannel(class UObject* WorldContextObject, class UNiagaraDataChannelAsset* Channel, const struct FNiagaraDataChannelSearchParameters& SearchParams, bool bReadPreviousFrame);
	class UNiagaraDataChannelHandler* GetNiagaraDataChannel(class UObject* WorldContextObject, class UNiagaraDataChannelAsset* Channel);
};

// 0x20 (0x58 - 0x38)
// Class Niagara.NiagaraDataInterface2DArrayTexture
class UNiagaraDataInterface2DArrayTexture : public UNiagaraDataInterface
{
public:
	class UTexture*                              Texture;                                           // 0x38(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraUserParameterBinding          TextureUserParameter;                              // 0x40(0x18)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterface2DArrayTexture");
		return Clss;
	}

};

// 0x0 (0x38 - 0x38)
// Class Niagara.NiagaraDataInterfaceRWBase
class UNiagaraDataInterfaceRWBase : public UNiagaraDataInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceRWBase");
		return Clss;
	}

};

// 0x10 (0x48 - 0x38)
// Class Niagara.NiagaraDataInterfaceArray
class UNiagaraDataInterfaceArray : public UNiagaraDataInterfaceRWBase
{
public:
	uint8                                        Pad_2402[0x8];                                     // Fixing Size After Last Property..
	enum class ENiagaraGpuSyncMode               GpuSyncMode;                                       // 0x40(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxElements;                                       // 0x44(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceArray");
		return Clss;
	}

};

// 0x10 (0x58 - 0x48)
// Class Niagara.NiagaraDataInterfaceArrayFloat
class UNiagaraDataInterfaceArrayFloat : public UNiagaraDataInterfaceArray
{
public:
	TArray<float>                                FloatData;                                         // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceArrayFloat");
		return Clss;
	}

};

// 0x10 (0x58 - 0x48)
// Class Niagara.NiagaraDataInterfaceArrayFloat2
class UNiagaraDataInterfaceArrayFloat2 : public UNiagaraDataInterfaceArray
{
public:
	TArray<struct FVector2f>                     InternalFloatData;                                 // 0x48(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceArrayFloat2");
		return Clss;
	}

};

// 0x10 (0x58 - 0x48)
// Class Niagara.NiagaraDataInterfaceArrayFloat3
class UNiagaraDataInterfaceArrayFloat3 : public UNiagaraDataInterfaceArray
{
public:
	TArray<struct FVector3f>                     InternalFloatData;                                 // 0x48(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceArrayFloat3");
		return Clss;
	}

};

// 0x10 (0x58 - 0x48)
// Class Niagara.NiagaraDataInterfaceArrayPosition
class UNiagaraDataInterfaceArrayPosition : public UNiagaraDataInterfaceArray
{
public:
	TArray<struct FNiagaraPosition>              PositionData;                                      // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceArrayPosition");
		return Clss;
	}

};

// 0x10 (0x58 - 0x48)
// Class Niagara.NiagaraDataInterfaceArrayFloat4
class UNiagaraDataInterfaceArrayFloat4 : public UNiagaraDataInterfaceArray
{
public:
	TArray<struct FVector4f>                     InternalFloatData;                                 // 0x48(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceArrayFloat4");
		return Clss;
	}

};

// 0x10 (0x58 - 0x48)
// Class Niagara.NiagaraDataInterfaceArrayColor
class UNiagaraDataInterfaceArrayColor : public UNiagaraDataInterfaceArray
{
public:
	TArray<struct FLinearColor>                  ColorData;                                         // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceArrayColor");
		return Clss;
	}

};

// 0x10 (0x58 - 0x48)
// Class Niagara.NiagaraDataInterfaceArrayQuat
class UNiagaraDataInterfaceArrayQuat : public UNiagaraDataInterfaceArray
{
public:
	TArray<struct FQuat4f>                       InternalQuatData;                                  // 0x48(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceArrayQuat");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraDataInterfaceArrayFunctionLibrary
class UNiagaraDataInterfaceArrayFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceArrayFunctionLibrary");
		return Clss;
	}

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

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceArrayInt32");
		return Clss;
	}

};

// 0x10 (0x58 - 0x48)
// Class Niagara.NiagaraDataInterfaceArrayUInt8
class UNiagaraDataInterfaceArrayUInt8 : public UNiagaraDataInterfaceArray
{
public:
	TArray<uint8>                                InternalIntData;                                   // 0x48(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceArrayUInt8");
		return Clss;
	}

};

// 0x10 (0x58 - 0x48)
// Class Niagara.NiagaraDataInterfaceArrayBool
class UNiagaraDataInterfaceArrayBool : public UNiagaraDataInterfaceArray
{
public:
	TArray<bool>                                 BoolData;                                          // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceArrayBool");
		return Clss;
	}

};

// 0x10 (0x58 - 0x48)
// Class Niagara.NiagaraDataInterfaceArrayNiagaraID
class UNiagaraDataInterfaceArrayNiagaraID : public UNiagaraDataInterfaceArray
{
public:
	TArray<struct FNiagaraID>                    IntData;                                           // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceArrayNiagaraID");
		return Clss;
	}

};

// 0x8 (0x40 - 0x38)
// Class Niagara.NiagaraDataInterfaceAudioSubmix
class UNiagaraDataInterfaceAudioSubmix : public UNiagaraDataInterface
{
public:
	class USoundSubmix*                          Submix;                                            // 0x38(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceAudioSubmix");
		return Clss;
	}

};

// 0x10 (0x48 - 0x38)
// Class Niagara.NiagaraDataInterfaceAudioOscilloscope
class UNiagaraDataInterfaceAudioOscilloscope : public UNiagaraDataInterface
{
public:
	class USoundSubmix*                          Submix;                                            // 0x38(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Resolution;                                        // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        ScopeInMilliseconds;                               // 0x44(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceAudioOscilloscope");
		return Clss;
	}

};

// 0x3E8 (0x410 - 0x28)
// Class Niagara.NiagaraDataInterfaceAudioPlayerSettings
class UNiagaraDataInterfaceAudioPlayerSettings : public UObject
{
public:
	bool                                         bOverrideConcurrency;                              // 0x28(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2425[0x7];                                     // Fixing Size After Last Property..
	class USoundConcurrency*                     Concurrency;                                       // 0x30(0x8)(Edit, BlueprintVisible, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideAttenuationSettings;                      // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2426[0x7];                                     // Fixing Size After Last Property..
	struct FSoundAttenuationSettings             AttenuationSettings;                               // 0x40(0x3D0)(Edit, BlueprintVisible, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceAudioPlayerSettings");
		return Clss;
	}

};

// 0x50 (0x88 - 0x38)
// Class Niagara.NiagaraDataInterfaceAudioPlayer
class UNiagaraDataInterfaceAudioPlayer : public UNiagaraDataInterface
{
public:
	class USoundBase*                            SoundToPlay;                                       // 0x38(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundAttenuation*                     Attenuation;                                       // 0x40(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class USoundConcurrency*                     Concurrency;                                       // 0x48(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FName>                          ParameterNames;                                    // 0x50(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	struct FNiagaraUserParameterBinding          ConfigurationUserParameter;                        // 0x60(0x18)(Edit, NativeAccessSpecifierPublic)
	bool                                         bLimitPlaysPerTick;                                // 0x78(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2427[0x3];                                     // Fixing Size After Last Property..
	int32                                        MaxPlaysPerTick;                                   // 0x7C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bStopWhenComponentIsDestroyed;                     // 0x80(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowLoopingOneShotSounds;                        // 0x81(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2428[0x6];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceAudioPlayer");
		return Clss;
	}

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

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceAudioSpectrum");
		return Clss;
	}

};

// 0x8 (0x40 - 0x38)
// Class Niagara.NiagaraDataInterfaceCamera
class UNiagaraDataInterfaceCamera : public UNiagaraDataInterface
{
public:
	int32                                        PlayerControllerIndex;                             // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRequireCurrentFrameData;                          // 0x3C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2429[0x3];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceCamera");
		return Clss;
	}

};

// 0x8 (0x40 - 0x38)
// Class Niagara.NiagaraDataInterfaceCollisionQuery
class UNiagaraDataInterfaceCollisionQuery : public UNiagaraDataInterface
{
public:
	uint8                                        Pad_242A[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceCollisionQuery");
		return Clss;
	}

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
	uint8                                        Pad_242B[0x4];                                     // Fixing Size After Last Property..
	uint8                                        bUseLUT : 1;                                       // Mask: 0x1, PropSize: 0x10x5C(0x1)(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bExposeCurve : 1;                                  // Mask: 0x2, PropSize: 0x10x5C(0x1)(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1FD : 6;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_242C[0x3];                                     // Fixing Size After Last Property..
	class FName                                  ExposedName;                                       // 0x60(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_242D[0x4];                                     // Fixing Size After Last Property..
	class UTexture2D*                            ExposedTexture;                                    // 0x68(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceCurveBase");
		return Clss;
	}

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

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceColorCurve");
		return Clss;
	}

};

// 0x20 (0x58 - 0x38)
// Class Niagara.NiagaraDataInterfaceCubeTexture
class UNiagaraDataInterfaceCubeTexture : public UNiagaraDataInterface
{
public:
	class UTexture*                              Texture;                                           // 0x38(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraUserParameterBinding          TextureUserParameter;                              // 0x40(0x18)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceCubeTexture");
		return Clss;
	}

};

// 0x10 (0x48 - 0x38)
// Class Niagara.NiagaraDataInterfaceCurlNoise
class UNiagaraDataInterfaceCurlNoise : public UNiagaraDataInterface
{
public:
	uint32                                       Seed;                                              // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_242E[0xC];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceCurlNoise");
		return Clss;
	}

};

// 0x80 (0xF0 - 0x70)
// Class Niagara.NiagaraDataInterfaceCurve
class UNiagaraDataInterfaceCurve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                            Curve;                                             // 0x70(0x80)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceCurve");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraParticleCallbackHandler
class UNiagaraParticleCallbackHandler : public UInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraParticleCallbackHandler");
		return Clss;
	}

	void ReceiveParticleData(TArray<struct FBasicParticleData>& Data, class UNiagaraSystem* NiagaraSystem, struct FVector& SimulationPositionOffset);
};

// 0x28 (0x60 - 0x38)
// Class Niagara.NiagaraDataInterfaceExport
class UNiagaraDataInterfaceExport : public UNiagaraDataInterface
{
public:
	struct FNiagaraUserParameterBinding          CallbackHandlerParameter;                          // 0x38(0x18)(Edit, NativeAccessSpecifierPublic)
	enum class ENDIExport_GPUAllocationMode      GPUAllocationMode;                                 // 0x50(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_242F[0x3];                                     // Fixing Size After Last Property..
	int32                                        GPUAllocationFixedSize;                            // 0x54(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        GPUAllocationPerParticleSize;                      // 0x58(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2430[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceExport");
		return Clss;
	}

};

// 0x28 (0x60 - 0x38)
// Class Niagara.NiagaraDataInterfaceGrid2D
class UNiagaraDataInterfaceGrid2D : public UNiagaraDataInterfaceRWBase
{
public:
	bool                                         ClearBeforeNonIterationStage;                      // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2431[0x3];                                     // Fixing Size After Last Property..
	int32                                        NumCellsX;                                         // 0x3C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumCellsY;                                         // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumCellsMaxAxis;                                   // 0x44(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumAttributes;                                     // 0x48(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         SetGridFromMaxAxis;                                // 0x4C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2432[0x3];                                     // Fixing Size After Last Property..
	struct FVector2D                             WorldBBoxSize;                                     // 0x50(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceGrid2D");
		return Clss;
	}

};

// 0xC0 (0x120 - 0x60)
// Class Niagara.NiagaraDataInterfaceGrid2DCollection
class UNiagaraDataInterfaceGrid2DCollection : public UNiagaraDataInterfaceGrid2D
{
public:
	struct FNiagaraUserParameterBinding          RenderTargetUserParameter;                         // 0x60(0x18)(Edit, NativeAccessSpecifierPublic)
	enum class ENiagaraGpuBufferFormat           OverrideBufferFormat;                              // 0x78(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideFormat : 1;                               // Mask: 0x1, PropSize: 0x10x79(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_1FE : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_2435[0x56];                                    // Fixing Size After Last Property..
	TMap<uint64, class UTextureRenderTarget2DArray*> ManagedRenderTargets;                              // 0xD0(0x50)(Transient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceGrid2DCollection");
		return Clss;
	}

	void GetTextureSize(class UNiagaraComponent* Component, int32* SizeX, int32* SizeY);
	void GetRawTextureSize(class UNiagaraComponent* Component, int32* SizeX, int32* SizeY);
	bool FillTexture2D(class UNiagaraComponent* Component, class UTextureRenderTarget2D* Dest, int32 AttributeIndex);
	bool FillRawTexture2D(class UNiagaraComponent* Component, class UTextureRenderTarget2D* Dest, int32* TilesX, int32* TilesY);
};

// 0x20 (0x140 - 0x120)
// Class Niagara.NiagaraDataInterfaceGrid2DCollectionReader
class UNiagaraDataInterfaceGrid2DCollectionReader : public UNiagaraDataInterfaceGrid2DCollection
{
public:
	class FString                                EmitterName;                                       // 0x120(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DIName;                                            // 0x130(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceGrid2DCollectionReader");
		return Clss;
	}

};

// 0x38 (0x70 - 0x38)
// Class Niagara.NiagaraDataInterfaceGrid3D
class UNiagaraDataInterfaceGrid3D : public UNiagaraDataInterfaceRWBase
{
public:
	bool                                         ClearBeforeNonIterationStage;                      // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2436[0x3];                                     // Fixing Size After Last Property..
	struct FIntVector                            NumCells;                                          // 0x3C(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        CellSize;                                          // 0x48(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumCellsMaxAxis;                                   // 0x4C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ESetResolutionMethod              SetResolutionMethod;                               // 0x50(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2437[0x4];                                     // Fixing Size After Last Property..
	struct FVector                               WorldBBoxSize;                                     // 0x58(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceGrid3D");
		return Clss;
	}

};

// 0x78 (0xE8 - 0x70)
// Class Niagara.NiagaraDataInterfaceGrid3DCollection
class UNiagaraDataInterfaceGrid3DCollection : public UNiagaraDataInterfaceGrid3D
{
public:
	int32                                        NumAttributes;                                     // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_243C[0x4];                                     // Fixing Size After Last Property..
	struct FNiagaraUserParameterBinding          RenderTargetUserParameter;                         // 0x78(0x18)(Edit, NativeAccessSpecifierPublic)
	enum class ENiagaraGpuBufferFormat           OverrideBufferFormat;                              // 0x90(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideFormat : 1;                               // Mask: 0x1, PropSize: 0x10x91(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_243D[0x56];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceGrid3DCollection");
		return Clss;
	}

	void GetTextureSize(class UNiagaraComponent* Component, int32* SizeX, int32* SizeY, int32* SizeZ);
	void GetRawTextureSize(class UNiagaraComponent* Component, int32* SizeX, int32* SizeY, int32* SizeZ);
	bool FillVolumeTexture(class UNiagaraComponent* Component, class UVolumeTexture* Dest, int32 AttributeIndex);
	bool FillRawVolumeTexture(class UNiagaraComponent* Component, class UVolumeTexture* Dest, int32* TilesX, int32* TilesY, int32* TileZ);
};

// 0x20 (0x108 - 0xE8)
// Class Niagara.NiagaraDataInterfaceGrid3DCollectionReader
class UNiagaraDataInterfaceGrid3DCollectionReader : public UNiagaraDataInterfaceGrid3DCollection
{
public:
	class FString                                EmitterName;                                       // 0xE8(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                DIName;                                            // 0xF8(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceGrid3DCollectionReader");
		return Clss;
	}

};

// 0x70 (0xA8 - 0x38)
// Class Niagara.NiagaraDataInterfaceIntRenderTarget2D
class UNiagaraDataInterfaceIntRenderTarget2D : public UNiagaraDataInterfaceRWBase
{
public:
	struct FIntPoint                             Size;                                              // 0x38(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraUserParameterBinding          RenderTargetUserParameter;                         // 0x40(0x18)(Edit, NativeAccessSpecifierPublic)
	TMap<uint64, class UTextureRenderTarget2D*>  ManagedRenderTargets;                              // 0x58(0x50)(Transient, DuplicateTransient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceIntRenderTarget2D");
		return Clss;
	}

};

// 0x20 (0x58 - 0x38)
// Class Niagara.NiagaraDataInterfaceLandscape
class UNiagaraDataInterfaceLandscape : public UNiagaraDataInterface
{
public:
	class AActor*                                SourceLandscape;                                   // 0x38(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENDILandscape_SourceMode          SourceMode;                                        // 0x40(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_243E[0x7];                                     // Fixing Size After Last Property..
	TArray<class UPhysicalMaterial*>             PhysicalMaterials;                                 // 0x48(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceLandscape");
		return Clss;
	}

};

// 0x18 (0x50 - 0x38)
// Class Niagara.NiagaraDataInterfaceMeshRendererInfo
class UNiagaraDataInterfaceMeshRendererInfo : public UNiagaraDataInterface
{
public:
	class UNiagaraMeshRendererProperties*        MeshRenderer;                                      // 0x38(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_243F[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceMeshRendererInfo");
		return Clss;
	}

};

// 0x8 (0x78 - 0x70)
// Class Niagara.NiagaraDataInterfaceNeighborGrid3D
class UNiagaraDataInterfaceNeighborGrid3D : public UNiagaraDataInterfaceGrid3D
{
public:
	uint32                                       MaxNeighborsPerCell;                               // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2440[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceNeighborGrid3D");
		return Clss;
	}

};

// 0x0 (0x38 - 0x38)
// Class Niagara.NiagaraDataInterfaceOcclusion
class UNiagaraDataInterfaceOcclusion : public UNiagaraDataInterface
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceOcclusion");
		return Clss;
	}

};

// 0x10 (0x48 - 0x38)
// Class Niagara.NiagaraDataInterfaceParticleRead
class UNiagaraDataInterfaceParticleRead : public UNiagaraDataInterfaceRWBase
{
public:
	class FString                                EmitterName;                                       // 0x38(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceParticleRead");
		return Clss;
	}

};

// 0x30 (0x68 - 0x38)
// Class Niagara.NiagaraDataInterfacePlatformSet
class UNiagaraDataInterfacePlatformSet : public UNiagaraDataInterface
{
public:
	struct FNiagaraPlatformSet                   Platforms;                                         // 0x38(0x30)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfacePlatformSet");
		return Clss;
	}

};

// 0x10 (0x80 - 0x70)
// Class Niagara.NiagaraDataInterfaceRasterizationGrid3D
class UNiagaraDataInterfaceRasterizationGrid3D : public UNiagaraDataInterfaceGrid3D
{
public:
	int32                                        NumAttributes;                                     // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Precision;                                         // 0x74(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ResetValue;                                        // 0x78(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2441[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceRasterizationGrid3D");
		return Clss;
	}

};

// 0xC8 (0x100 - 0x38)
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
	uint8                                        BitPad_1FF : 6;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_2442[0x3];                                     // Fixing Size After Last Property..
	struct FNiagaraUserParameterBinding          RenderTargetUserParameter;                         // 0x48(0x18)(Edit, NativeAccessSpecifierPublic)
	uint8                                        Pad_2443[0x50];                                    // Fixing Size After Last Property..
	TMap<uint64, class UTextureRenderTarget2D*>  ManagedRenderTargets;                              // 0xB0(0x50)(Transient, DuplicateTransient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceRenderTarget2D");
		return Clss;
	}

};

// 0x78 (0xB0 - 0x38)
// Class Niagara.NiagaraDataInterfaceRenderTarget2DArray
class UNiagaraDataInterfaceRenderTarget2DArray : public UNiagaraDataInterfaceRWBase
{
public:
	struct FIntVector                            Size;                                              // 0x38(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextureRenderTargetFormat        OverrideRenderTargetFormat;                        // 0x44(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextureFilter                    OverrideRenderTargetFilter;                        // 0x45(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bInheritUserParameterSettings : 1;                 // Mask: 0x1, PropSize: 0x10x46(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideFormat : 1;                               // Mask: 0x2, PropSize: 0x10x46(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_200 : 6;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_2444[0x1];                                     // Fixing Size After Last Property..
	struct FNiagaraUserParameterBinding          RenderTargetUserParameter;                         // 0x48(0x18)(Edit, NativeAccessSpecifierPublic)
	TMap<uint64, class UTextureRenderTarget2DArray*> ManagedRenderTargets;                              // 0x60(0x50)(Transient, DuplicateTransient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceRenderTarget2DArray");
		return Clss;
	}

};

// 0x70 (0xA8 - 0x38)
// Class Niagara.NiagaraDataInterfaceRenderTargetCube
class UNiagaraDataInterfaceRenderTargetCube : public UNiagaraDataInterfaceRWBase
{
public:
	int32                                        Size;                                              // 0x38(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextureRenderTargetFormat        OverrideRenderTargetFormat;                        // 0x3C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextureFilter                    OverrideRenderTargetFilter;                        // 0x3D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bInheritUserParameterSettings : 1;                 // Mask: 0x1, PropSize: 0x10x3E(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideFormat : 1;                               // Mask: 0x2, PropSize: 0x10x3E(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_201 : 6;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_2445[0x1];                                     // Fixing Size After Last Property..
	struct FNiagaraUserParameterBinding          RenderTargetUserParameter;                         // 0x40(0x18)(Edit, NativeAccessSpecifierPublic)
	TMap<uint64, class UTextureRenderTargetCube*> ManagedRenderTargets;                              // 0x58(0x50)(Transient, DuplicateTransient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceRenderTargetCube");
		return Clss;
	}

};

// 0x80 (0xB8 - 0x38)
// Class Niagara.NiagaraDataInterfaceRenderTargetVolume
class UNiagaraDataInterfaceRenderTargetVolume : public UNiagaraDataInterfaceRWBase
{
public:
	uint8                                        Pad_2446[0x8];                                     // Fixing Size After Last Property..
	struct FIntVector                            Size;                                              // 0x40(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextureRenderTargetFormat        OverrideRenderTargetFormat;                        // 0x4C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ETextureFilter                    OverrideRenderTargetFilter;                        // 0x4D(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bInheritUserParameterSettings : 1;                 // Mask: 0x1, PropSize: 0x10x4E(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideFormat : 1;                               // Mask: 0x2, PropSize: 0x10x4E(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_202 : 6;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_2447[0x1];                                     // Fixing Size After Last Property..
	struct FNiagaraUserParameterBinding          RenderTargetUserParameter;                         // 0x50(0x18)(Edit, NativeAccessSpecifierPublic)
	TMap<uint64, class UTextureRenderTargetVolume*> ManagedRenderTargets;                              // 0x68(0x50)(Transient, DuplicateTransient, Protected, UObjectWrapper, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceRenderTargetVolume");
		return Clss;
	}

};

// 0x40 (0x78 - 0x38)
// Class Niagara.NiagaraDataInterfaceRigidMeshCollisionQuery
class UNiagaraDataInterfaceRigidMeshCollisionQuery : public UNiagaraDataInterface
{
public:
	TArray<class FName>                          ActorTags;                                         // 0x38(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          ComponentTags;                                     // 0x48(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<TSoftObjectPtr<class AActor>>         SourceActors;                                      // 0x58(0x10)(Edit, ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	bool                                         OnlyUseMoveable;                                   // 0x68(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UseComplexCollisions;                              // 0x69(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         GlobalSearchAllowed;                               // 0x6A(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         GlobalSearchForced;                                // 0x6B(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         GlobalSearchFallback_Unscripted;                   // 0x6C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2448[0x3];                                     // Fixing Size After Last Property..
	int32                                        MaxNumPrimitives;                                  // 0x70(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2449[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceRigidMeshCollisionQuery");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraDIRigidMeshCollisionFunctionLibrary
class UNiagaraDIRigidMeshCollisionFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDIRigidMeshCollisionFunctionLibrary");
		return Clss;
	}

	void SetSourceActors(class UNiagaraComponent* NiagaraSystem, class FName OverrideName, TArray<class AActor*>& SourceActors);
};

// 0xB8 (0xF0 - 0x38)
// Class Niagara.NiagaraDataInterfaceSkeletalMesh
class UNiagaraDataInterfaceSkeletalMesh : public UNiagaraDataInterface
{
public:
	enum class ENDISkeletalMesh_SourceMode       SourceMode;                                        // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_244C[0x7];                                     // Fixing Size After Last Property..
	TSoftObjectPtr<class AActor>                 SoftSourceActor;                                   // 0x40(0x28)(Edit, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	TArray<class FName>                          ComponentTags;                                     // 0x68(0x10)(Edit, ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class USkeletalMeshComponent*                SourceComponent;                                   // 0x78(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FNiagaraUserParameterBinding          MeshUserParameter;                                 // 0x80(0x18)(Edit, NativeAccessSpecifierPublic)
	enum class ENDISkeletalMesh_SkinningMode     SkinningMode;                                      // 0x98(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_244D[0x7];                                     // Fixing Size After Last Property..
	TArray<class FName>                          SamplingRegions;                                   // 0xA0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        WholeMeshLOD;                                      // 0xB0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_244E[0x4];                                     // Fixing Size After Last Property..
	TArray<class FName>                          FilteredBones;                                     // 0xB8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          FilteredSockets;                                   // 0xC8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	class FName                                  ExcludeBoneName;                                   // 0xD8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bExcludeBone : 1;                                  // Mask: 0x1, PropSize: 0x10xDC(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_203 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_244F[0x3];                                     // Fixing Size After Last Property..
	int32                                        UvSetIndex;                                        // 0xE0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRequireCurrentFrameData;                          // 0xE4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2450[0xB];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceSkeletalMesh");
		return Clss;
	}

	void OnSourceEndPlay(class AActor* InSource, enum class EEndPlayReason Reason);
};

// 0x78 (0xB0 - 0x38)
// Class Niagara.NiagaraDataInterfaceSpline
class UNiagaraDataInterfaceSpline : public UNiagaraDataInterface
{
public:
	class AActor*                                Source;                                            // 0x38(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraUserParameterBinding          SplineUserParameter;                               // 0x40(0x18)(Edit, NativeAccessSpecifierPublic)
	bool                                         bUseLUT;                                           // 0x58(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2451[0x3];                                     // Fixing Size After Last Property..
	int32                                        NumLUTSteps;                                       // 0x5C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2452[0x50];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceSpline");
		return Clss;
	}

};

// 0x8 (0x40 - 0x38)
// Class Niagara.NiagaraDataInterfaceSpriteRendererInfo
class UNiagaraDataInterfaceSpriteRendererInfo : public UNiagaraDataInterface
{
public:
	class UNiagaraSpriteRendererProperties*      SpriteRenderer;                                    // 0x38(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceSpriteRendererInfo");
		return Clss;
	}

};

// 0x20 (0x58 - 0x38)
// Class Niagara.NiagaraDataInterfaceTexture
class UNiagaraDataInterfaceTexture : public UNiagaraDataInterface
{
public:
	class UTexture*                              Texture;                                           // 0x38(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraUserParameterBinding          TextureUserParameter;                              // 0x40(0x18)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceTexture");
		return Clss;
	}

};

// 0x100 (0x170 - 0x70)
// Class Niagara.NiagaraDataInterfaceVector2DCurve
class UNiagaraDataInterfaceVector2DCurve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                            XCurve;                                            // 0x70(0x80)(Edit, NativeAccessSpecifierPublic)
	struct FRichCurve                            YCurve;                                            // 0xF0(0x80)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceVector2DCurve");
		return Clss;
	}

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

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceVector4Curve");
		return Clss;
	}

};

// 0x180 (0x1F0 - 0x70)
// Class Niagara.NiagaraDataInterfaceVectorCurve
class UNiagaraDataInterfaceVectorCurve : public UNiagaraDataInterfaceCurveBase
{
public:
	struct FRichCurve                            XCurve;                                            // 0x70(0x80)(Edit, NativeAccessSpecifierPublic)
	struct FRichCurve                            YCurve;                                            // 0xF0(0x80)(Edit, NativeAccessSpecifierPublic)
	struct FRichCurve                            ZCurve;                                            // 0x170(0x80)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceVectorCurve");
		return Clss;
	}

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
	uint8                                        Pad_2453[0x5];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceVectorField");
		return Clss;
	}

};

// 0x58 (0x90 - 0x38)
// Class Niagara.NiagaraDataInterfaceVolumeCache
class UNiagaraDataInterfaceVolumeCache : public UNiagaraDataInterface
{
public:
	class UVolumeCache*                          VolumeCache;                                       // 0x38(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2454[0x50];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceVolumeCache");
		return Clss;
	}

};

// 0x20 (0x58 - 0x38)
// Class Niagara.NiagaraDataInterfaceVolumeTexture
class UNiagaraDataInterfaceVolumeTexture : public UNiagaraDataInterface
{
public:
	class UTexture*                              Texture;                                           // 0x38(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraUserParameterBinding          TextureUserParameter;                              // 0x40(0x18)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDataInterfaceVolumeTexture");
		return Clss;
	}

};

// 0x258 (0x280 - 0x28)
// Class Niagara.NiagaraDebugHUDSettings
class UNiagaraDebugHUDSettings : public UObject
{
public:
	uint8                                        Pad_2455[0x20];                                    // Fixing Size After Last Property..
	struct FNiagaraDebugHUDSettingsData          Data;                                              // 0x48(0x238)(Edit, Config, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDebugHUDSettings");
		return Clss;
	}

};

// 0x1E8 (0x298 - 0xB0)
// Class Niagara.NiagaraDecalRendererProperties
class UNiagaraDecalRendererProperties : public UNiagaraRendererProperties
{
public:
	class UMaterialInterface*                    Material;                                          // 0xB0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraParameterBinding              MaterialParameterBinding;                          // 0xB8(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	enum class ENiagaraRendererSourceDataMode    SourceMode;                                        // 0xC0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2456[0x3];                                     // Fixing Size After Last Property..
	int32                                        RendererVisibility;                                // 0xC4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DecalScreenSizeFade;                               // 0xC8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2457[0x4];                                     // Fixing Size After Last Property..
	struct FNiagaraVariableAttributeBinding      PositionBinding;                                   // 0xD0(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      DecalOrientationBinding;                           // 0xF8(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      DecalSizeBinding;                                  // 0x120(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      DecalFadeBinding;                                  // 0x148(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      DecalSortOrderBinding;                             // 0x170(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      DecalColorBinding;                                 // 0x198(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      DecalVisibleBinding;                               // 0x1C0(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      RendererVisibilityTagBinding;                      // 0x1E8(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraRendererMaterialParameters    MaterialParameters;                                // 0x210(0x50)(Edit, NativeAccessSpecifierPublic)
	uint8                                        Pad_2458[0x38];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraDecalRendererProperties");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraEditorDataBase
class UNiagaraEditorDataBase : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraEditorDataBase");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraEditorParametersAdapterBase
class UNiagaraEditorParametersAdapterBase : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraEditorParametersAdapterBase");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraSignificanceHandler
class UNiagaraSignificanceHandler : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraSignificanceHandler");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraSignificanceHandlerDistance
class UNiagaraSignificanceHandlerDistance : public UNiagaraSignificanceHandler
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraSignificanceHandlerDistance");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraSignificanceHandlerAge
class UNiagaraSignificanceHandlerAge : public UNiagaraSignificanceHandler
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraSignificanceHandlerAge");
		return Clss;
	}

};

// 0x78 (0xA0 - 0x28)
// Class Niagara.NiagaraEffectType
class UNiagaraEffectType : public UObject
{
public:
	bool                                         bAllowCullingForLocalPlayers;                      // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2459[0x3];                                     // Fixing Size After Last Property..
	enum class ENiagaraScalabilityUpdateFrequency UpdateFrequency;                                   // 0x2C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraCullReaction              CullReaction;                                      // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_245A[0x4];                                     // Fixing Size After Last Property..
	class UNiagaraSignificanceHandler*           SignificanceHandler;                               // 0x38(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraSystemScalabilitySettings> DetailLevelScalabilitySettings;                    // 0x40(0x10)(ZeroConstructor, Deprecated, NativeAccessSpecifierPublic)
	struct FNiagaraSystemScalabilitySettingsArray SystemScalabilitySettings;                         // 0x50(0x10)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraEmitterScalabilitySettingsArray EmitterScalabilitySettings;                        // 0x60(0x10)(Edit, NativeAccessSpecifierPublic)
	uint8                                        Pad_245B[0x8];                                     // Fixing Size After Last Property..
	class UNiagaraBaselineController*            PerformanceBaselineController;                     // 0x78(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FNiagaraPerfBaselineStats             PerfBaselineStats;                                 // 0x80(0x10)(Config, NoDestructor, NativeAccessSpecifierPrivate)
	struct FGuid                                 PerfBaselineVersion;                               // 0x90(0x10)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraEffectType");
		return Clss;
	}

};

// 0x90 (0xB8 - 0x28)
// Class Niagara.NiagaraEmitter
class UNiagaraEmitter : public UObject
{
public:
	uint8                                        Pad_245C[0x8];                                     // Fixing Size After Last Property..
	struct FGuid                                 ExposedVersion;                                    // 0x30(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bVersioningEnabled;                                // 0x40(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_245D[0x7];                                     // Fixing Size After Last Property..
	TArray<struct FVersionedNiagaraEmitterData>  VersionData;                                       // 0x48(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_245E[0x8];                                     // Fixing Size After Last Property..
	class FString                                UniqueEmitterName;                                 // 0x60(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UNiagaraRendererProperties*>    RendererProperties;                                // 0x70(0x10)(ZeroConstructor, Deprecated, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<struct FNiagaraEventScriptProperties> EventHandlerScriptProps;                           // 0x80(0x10)(ZeroConstructor, Deprecated, NativeAccessSpecifierPrivate)
	TArray<class UNiagaraSimulationStageBase*>   SimulationStages;                                  // 0x90(0x10)(ZeroConstructor, Deprecated, UObjectWrapper, NativeAccessSpecifierPrivate)
	class UNiagaraScript*                        GPUComputeScript;                                  // 0xA0(0x8)(ZeroConstructor, Deprecated, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class FName>                          SharedEventGeneratorIds;                           // 0xA8(0x10)(ZeroConstructor, Deprecated, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraEmitter");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraEventReceiverEmitterAction
class UNiagaraEventReceiverEmitterAction : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraEventReceiverEmitterAction");
		return Clss;
	}

};

// 0x8 (0x30 - 0x28)
// Class Niagara.NiagaraEventReceiverEmitterAction_SpawnParticles
class UNiagaraEventReceiverEmitterAction_SpawnParticles : public UNiagaraEventReceiverEmitterAction
{
public:
	uint32                                       NumParticles;                                      // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_245F[0x4];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraEventReceiverEmitterAction_SpawnParticles");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraFunctionLibrary
class UNiagaraFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraFunctionLibrary");
		return Clss;
	}

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
	void SetActorNiagaraGPURayTracedCollisionGroup(class UObject* WorldContextObject, class AActor* Actor, int32 CollisionGroup);
	void ReleaseNiagaraGPURayTracedCollisionGroup(class UObject* WorldContextObject, int32 CollisionGroup);
	void OverrideSystemUserVariableStaticMeshComponent(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class UStaticMeshComponent* StaticMeshComponent);
	void OverrideSystemUserVariableStaticMesh(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class UStaticMesh* StaticMesh);
	void OverrideSystemUserVariableSkeletalMeshComponent(class UNiagaraComponent* NiagaraSystem, const class FString& OverrideName, class USkeletalMeshComponent* SkeletalMeshComponent);
	class UNiagaraParameterCollectionInstance* GetNiagaraParameterCollection(class UObject* WorldContextObject, class UNiagaraParameterCollection* Collection);
	int32 AcquireNiagaraGPURayTracedCollisionGroup(class UObject* WorldContextObject);
};

// 0x88 (0x320 - 0x298)
// Class Niagara.NiagaraLensEffectBase
class ANiagaraLensEffectBase : public ANiagaraActor
{
public:
	uint8                                        Pad_2467[0x8];                                     // Fixing Size After Last Property..
	struct FTransform                            DesiredRelativeTransform;                          // 0x2A0(0x60)(Edit, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        BaseAuthoredFOV;                                   // 0x300(0x4)(Edit, ZeroConstructor, DisableEditOnInstance, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bAllowMultipleInstances : 1;                       // Mask: 0x1, PropSize: 0x10x304(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bResetWhenRetriggered : 1;                         // Mask: 0x2, PropSize: 0x10x304(0x1)(Edit, DisableEditOnInstance, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_204 : 6;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_2468[0x3];                                     // Fixing Size After Last Property..
	TArray<TSubclassOf<class AActor>>            EmittersToTreatAsSame;                             // 0x308(0x10)(Edit, ZeroConstructor, DisableEditOnInstance, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	class APlayerCameraManager*                  OwningCameraManager;                               // 0x318(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraLensEffectBase");
		return Clss;
	}

};

// 0x170 (0x220 - 0xB0)
// Class Niagara.NiagaraLightRendererProperties
class UNiagaraLightRendererProperties : public UNiagaraRendererProperties
{
public:
	enum class ENiagaraRendererSourceDataMode    SourceMode;                                        // 0xB0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2469[0x3];                                     // Fixing Size After Last Property..
	uint8                                        bUseInverseSquaredFalloff : 1;                     // Mask: 0x1, PropSize: 0x10xB4(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAffectsTranslucency : 1;                          // Mask: 0x2, PropSize: 0x10xB4(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAlphaScalesBrightness : 1;                        // Mask: 0x4, PropSize: 0x10xB4(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideInverseExposureBlend : 1;                 // Mask: 0x8, PropSize: 0x10xB4(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_205 : 4;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_246A[0x3];                                     // Fixing Size After Last Property..
	float                                        RadiusScale;                                       // 0xB8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        DefaultExponent;                                   // 0xBC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector3f                             ColorAdd;                                          // 0xC0(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InverseExposureBlend;                              // 0xCC(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        RendererVisibility;                                // 0xD0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_246B[0x4];                                     // Fixing Size After Last Property..
	struct FNiagaraVariableAttributeBinding      LightRenderingEnabledBinding;                      // 0xD8(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      LightExponentBinding;                              // 0x100(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      PositionBinding;                                   // 0x128(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      ColorBinding;                                      // 0x150(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      RadiusBinding;                                     // 0x178(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      VolumetricScatteringBinding;                       // 0x1A0(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      RendererVisibilityTagBinding;                      // 0x1C8(0x28)(Edit, NativeAccessSpecifierPublic)
	uint8                                        Pad_246C[0x30];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraLightRendererProperties");
		return Clss;
	}

};

// 0x478 (0x528 - 0xB0)
// Class Niagara.NiagaraMeshRendererProperties
class UNiagaraMeshRendererProperties : public UNiagaraRendererProperties
{
public:
	TArray<struct FNiagaraMeshRendererMeshProperties> Meshes;                                            // 0xB0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class ENiagaraRendererSourceDataMode    SourceMode;                                        // 0xC0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraSortMode                  SortMode;                                          // 0xC1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraRendererSortPrecision     SortPrecision;                                     // 0xC2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraRendererGpuTranslucentLatency GpuTranslucentLatency;                             // 0xC3(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideMaterials : 1;                            // Mask: 0x1, PropSize: 0x10xC4(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseHeterogeneousVolumes : 1;                      // Mask: 0x2, PropSize: 0x10xC4(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSortOnlyWhenTranslucent : 1;                      // Mask: 0x4, PropSize: 0x10xC4(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSubImageBlend : 1;                                // Mask: 0x8, PropSize: 0x10xC4(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEnableFrustumCulling : 1;                         // Mask: 0x10, PropSize: 0x10xC4(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEnableCameraDistanceCulling : 1;                  // Mask: 0x20, PropSize: 0x10xC4(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEnableMeshFlipbook : 1;                           // Mask: 0x40, PropSize: 0x10xC4(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bLockedAxisEnable : 1;                             // Mask: 0x80, PropSize: 0x10xC4(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_246D[0x3];                                     // Fixing Size After Last Property..
	TArray<struct FNiagaraMeshMaterialOverride>  OverrideMaterials;                                 // 0xC8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraMeshMICOverride>       MICOverrideMaterials;                              // 0xD8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FVector2D                             SubImageSize;                                      // 0xE8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               LockedAxis;                                        // 0xF8(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               MeshBoundsScale;                                   // 0x110(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraMeshFacingMode            FacingMode;                                        // 0x128(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraMeshLockedAxisSpace       LockedAxisSpace;                                   // 0x129(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_246E[0x2];                                     // Fixing Size After Last Property..
	float                                        MinCameraDistance;                                 // 0x12C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxCameraDistance;                                 // 0x130(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       RendererVisibility;                                // 0x134(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      PositionBinding;                                   // 0x138(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      ColorBinding;                                      // 0x160(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      VelocityBinding;                                   // 0x188(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      MeshOrientationBinding;                            // 0x1B0(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      ScaleBinding;                                      // 0x1D8(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      SubImageIndexBinding;                              // 0x200(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      DynamicMaterialBinding;                            // 0x228(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      DynamicMaterial1Binding;                           // 0x250(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      DynamicMaterial2Binding;                           // 0x278(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      DynamicMaterial3Binding;                           // 0x2A0(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      MaterialRandomBinding;                             // 0x2C8(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      CustomSortingBinding;                              // 0x2F0(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      NormalizedAgeBinding;                              // 0x318(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      CameraOffsetBinding;                               // 0x340(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      RendererVisibilityTagBinding;                      // 0x368(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      MeshIndexBinding;                                  // 0x390(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraRendererMaterialParameters    MaterialParameters;                                // 0x3B8(0x50)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      PrevPositionBinding;                               // 0x408(0x28)(Transient, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      PrevScaleBinding;                                  // 0x430(0x28)(Transient, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      PrevMeshOrientationBinding;                        // 0x458(0x28)(Transient, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      PrevCameraOffsetBinding;                           // 0x480(0x28)(Transient, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      PrevVelocityBinding;                               // 0x4A8(0x28)(Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_246F[0x58];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraMeshRendererProperties");
		return Clss;
	}

};

// 0xC8 (0xF0 - 0x28)
// Class Niagara.NiagaraParameterCollectionInstance
class UNiagaraParameterCollectionInstance : public UObject
{
public:
	class UNiagaraParameterCollection*           Collection;                                        // 0x28(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraVariable>              OverridenParameters;                               // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FNiagaraParameterStore                ParameterStorage;                                  // 0x40(0x88)(NativeAccessSpecifierPrivate)
	uint8                                        Pad_2476[0x28];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraParameterCollectionInstance");
		return Clss;
	}

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
	class FName                                  Namespace;                                         // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_2477[0x4];                                     // Fixing Size After Last Property..
	TArray<struct FNiagaraVariable>              Parameters;                                        // 0x30(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	class UMaterialParameterCollection*          SourceMaterialCollection;                          // 0x40(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNiagaraParameterCollectionInstance*   DefaultInstance;                                   // 0x48(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FGuid                                 CompileId;                                         // 0x50(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraParameterCollection");
		return Clss;
	}

};

// 0x40 (0x68 - 0x28)
// Class Niagara.NiagaraBaselineController
class UNiagaraBaselineController : public UObject
{
public:
	float                                        TestDuration;                                      // 0x28(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2478[0x4];                                     // Fixing Size After Last Property..
	class UNiagaraEffectType*                    EffectType;                                        // 0x30(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class ANiagaraPerfBaselineActor*             Owner;                                             // 0x38(0x8)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSoftObjectPtr<class UNiagaraSystem>         System;                                            // 0x40(0x28)(Edit, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraBaselineController");
		return Clss;
	}

	bool OnTickTest();
	void OnOwnerTick(float DeltaTime);
	void OnEndTest(const struct FNiagaraPerfBaselineStats& Stats);
	void OnBeginTest();
	class UNiagaraSystem* GetSystem();
};

// 0x18 (0x80 - 0x68)
// Class Niagara.NiagaraBaselineController_Basic
class UNiagaraBaselineController_Basic : public UNiagaraBaselineController
{
public:
	int32                                        NumInstances;                                      // 0x68(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2479[0x4];                                     // Fixing Size After Last Property..
	TArray<class UNiagaraComponent*>             SpawnedComponents;                                 // 0x70(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraBaselineController_Basic");
		return Clss;
	}

};

// 0x10 (0x298 - 0x288)
// Class Niagara.NiagaraPerfBaselineActor
class ANiagaraPerfBaselineActor : public AActor
{
public:
	class UNiagaraBaselineController*            Controller;                                        // 0x288(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTextRenderComponent*                  Label;                                             // 0x290(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraPerfBaselineActor");
		return Clss;
	}

};

// 0x18 (0x40 - 0x28)
// Class Niagara.NiagaraPrecompileContainer
class UNiagaraPrecompileContainer : public UObject
{
public:
	TArray<class UNiagaraScript*>                Scripts;                                           // 0x28(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	class UNiagaraSystem*                        System;                                            // 0x38(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraPrecompileContainer");
		return Clss;
	}

};

// 0x0 (0x288 - 0x288)
// Class Niagara.NiagaraPreviewBase
class ANiagaraPreviewBase : public AActor
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraPreviewBase");
		return Clss;
	}

	void SetSystem(class UNiagaraSystem* InSystem);
	void SetLabelText(class FText& InXAxisText, class FText& InYAxisText);
};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraPreviewAxis
class UNiagaraPreviewAxis : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraPreviewAxis");
		return Clss;
	}

	int32 Num();
	void ApplyToPreview(class UNiagaraComponent* PreviewComponent, int32 PreviewIndex, bool bIsXAxis, class FString* OutLabelText);
};

// 0x8 (0x30 - 0x28)
// Class Niagara.NiagaraPreviewAxis_InterpParamBase
class UNiagaraPreviewAxis_InterpParamBase : public UNiagaraPreviewAxis
{
public:
	class FName                                  Param;                                             // 0x28(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        Count;                                             // 0x2C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraPreviewAxis_InterpParamBase");
		return Clss;
	}

};

// 0x8 (0x38 - 0x30)
// Class Niagara.NiagaraPreviewAxis_InterpParamInt32
class UNiagaraPreviewAxis_InterpParamInt32 : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	int32                                        Min;                                               // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        Max;                                               // 0x34(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraPreviewAxis_InterpParamInt32");
		return Clss;
	}

};

// 0x8 (0x38 - 0x30)
// Class Niagara.NiagaraPreviewAxis_InterpParamFloat
class UNiagaraPreviewAxis_InterpParamFloat : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	float                                        Min;                                               // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        Max;                                               // 0x34(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraPreviewAxis_InterpParamFloat");
		return Clss;
	}

};

// 0x20 (0x50 - 0x30)
// Class Niagara.NiagaraPreviewAxis_InterpParamVector2D
class UNiagaraPreviewAxis_InterpParamVector2D : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	struct FVector2D                             Min;                                               // 0x30(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector2D                             Max;                                               // 0x40(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraPreviewAxis_InterpParamVector2D");
		return Clss;
	}

};

// 0x30 (0x60 - 0x30)
// Class Niagara.NiagaraPreviewAxis_InterpParamVector
class UNiagaraPreviewAxis_InterpParamVector : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	struct FVector                               Min;                                               // 0x30(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector                               Max;                                               // 0x48(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraPreviewAxis_InterpParamVector");
		return Clss;
	}

};

// 0x40 (0x70 - 0x30)
// Class Niagara.NiagaraPreviewAxis_InterpParamVector4
class UNiagaraPreviewAxis_InterpParamVector4 : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	struct FVector4                              Min;                                               // 0x30(0x20)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FVector4                              Max;                                               // 0x50(0x20)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraPreviewAxis_InterpParamVector4");
		return Clss;
	}

};

// 0x20 (0x50 - 0x30)
// Class Niagara.NiagaraPreviewAxis_InterpParamLinearColor
class UNiagaraPreviewAxis_InterpParamLinearColor : public UNiagaraPreviewAxis_InterpParamBase
{
public:
	struct FLinearColor                          Min;                                               // 0x30(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FLinearColor                          Max;                                               // 0x40(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraPreviewAxis_InterpParamLinearColor");
		return Clss;
	}

};

// 0x50 (0x2D8 - 0x288)
// Class Niagara.NiagaraPreviewGrid
class ANiagaraPreviewGrid : public AActor
{
public:
	class UNiagaraSystem*                        System;                                            // 0x288(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraPreviewGridResetMode      ResetMode;                                         // 0x290(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_247B[0x7];                                     // Fixing Size After Last Property..
	class UNiagaraPreviewAxis*                   PreviewAxisX;                                      // 0x298(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UNiagaraPreviewAxis*                   PreviewAxisY;                                      // 0x2A0(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TSubclassOf<class ANiagaraPreviewBase>       PreviewClass;                                      // 0x2A8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpacingX;                                          // 0x2B0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SpacingY;                                          // 0x2B4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumX;                                              // 0x2B8(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        NumY;                                              // 0x2BC(0x4)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class UChildActorComponent*>          PreviewComponents;                                 // 0x2C0(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_247C[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraPreviewGrid");
		return Clss;
	}

	void SetPaused(bool bPaused);
	void GetPreviews(TArray<class UNiagaraComponent*>* OutPreviews);
	void DeactivatePreviews();
	void ActivatePreviews(bool bReset);
};

// 0x530 (0x5E0 - 0xB0)
// Class Niagara.NiagaraRibbonRendererProperties
class UNiagaraRibbonRendererProperties : public UNiagaraRendererProperties
{
public:
	class UMaterialInterface*                    Material;                                          // 0xB0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraUserParameterBinding          MaterialUserParamBinding;                          // 0xB8(0x18)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraRibbonUVSettings              UV0Settings;                                       // 0xD0(0x28)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FNiagaraRibbonUVSettings              UV1Settings;                                       // 0xF8(0x28)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	enum class ENiagaraRibbonFacingMode          FacingMode;                                        // 0x120(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_247D[0x3];                                     // Fixing Size After Last Property..
	int32                                        MaxNumRibbons;                                     // 0x124(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraRibbonDrawDirection       DrawDirection;                                     // 0x128(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraRibbonShapeMode           Shape;                                             // 0x129(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEnableAccurateGeometry : 1;                       // Mask: 0x1, PropSize: 0x10x12A(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseGPUInit : 1;                                   // Mask: 0x2, PropSize: 0x10x12A(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseConstantFactor : 1;                            // Mask: 0x4, PropSize: 0x10x12A(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bScreenSpaceTessellation : 1;                      // Mask: 0x8, PropSize: 0x10x12A(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_206 : 4;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_247E[0x1];                                     // Fixing Size After Last Property..
	int32                                        WidthSegmentationCount;                            // 0x12C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MultiPlaneCount;                                   // 0x130(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TubeSubdivisions;                                  // 0x134(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraRibbonShapeCustomVertex> CustomVertices;                                    // 0x138(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class ENiagaraRibbonTessellationMode    TessellationMode;                                  // 0x148(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_247F[0x3];                                     // Fixing Size After Last Property..
	float                                        CurveTension;                                      // 0x14C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TessellationFactor;                                // 0x150(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TessellationAngle;                                 // 0x154(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      PositionBinding;                                   // 0x158(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      ColorBinding;                                      // 0x180(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      VelocityBinding;                                   // 0x1A8(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      NormalizedAgeBinding;                              // 0x1D0(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      RibbonTwistBinding;                                // 0x1F8(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      RibbonWidthBinding;                                // 0x220(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      RibbonFacingBinding;                               // 0x248(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      RibbonIdBinding;                                   // 0x270(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      RibbonLinkOrderBinding;                            // 0x298(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      MaterialRandomBinding;                             // 0x2C0(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      DynamicMaterialBinding;                            // 0x2E8(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      DynamicMaterial1Binding;                           // 0x310(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      DynamicMaterial2Binding;                           // 0x338(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      DynamicMaterial3Binding;                           // 0x360(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      RibbonUVDistance;                                  // 0x388(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      U0OverrideBinding;                                 // 0x3B0(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      V0RangeOverrideBinding;                            // 0x3D8(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      U1OverrideBinding;                                 // 0x400(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      V1RangeOverrideBinding;                            // 0x428(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraRendererMaterialParameters    MaterialParameters;                                // 0x450(0x50)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      PrevPositionBinding;                               // 0x4A0(0x28)(Transient, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      PrevRibbonWidthBinding;                            // 0x4C8(0x28)(Transient, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      PrevRibbonFacingBinding;                           // 0x4F0(0x28)(Transient, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      PrevRibbonTwistBinding;                            // 0x518(0x28)(Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_2480[0xA0];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraRibbonRendererProperties");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraScratchPadContainer
class UNiagaraScratchPadContainer : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraScratchPadContainer");
		return Clss;
	}

};

// 0x398 (0x3C0 - 0x28)
// Class Niagara.NiagaraScript
class UNiagaraScript : public UNiagaraScriptBase
{
public:
	uint8                                        Pad_2481[0x8];                                     // Fixing Size After Last Property..
	enum class ENiagaraScriptUsage               Usage;                                             // 0x30(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2482[0x3];                                     // Fixing Size After Last Property..
	struct FGuid                                 UsageId;                                           // 0x34(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2483[0x4];                                     // Fixing Size After Last Property..
	struct FNiagaraParameterStore                RapidIterationParameters;                          // 0x48(0x88)(NativeAccessSpecifierPublic)
	struct FNiagaraScriptExecutionParameterStore ScriptExecutionParamStore;                         // 0xD0(0xA8)(NativeAccessSpecifierPrivate)
	TArray<struct FNiagaraBoundParameter>        ScriptExecutionBoundParameters;                    // 0x178(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FNiagaraVMExecutableDataId            CachedScriptVMId;                                  // 0x188(0x58)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2484[0x18];                                    // Fixing Size After Last Property..
	struct FNiagaraVMExecutableData              CachedScriptVM;                                    // 0x1F8(0x190)(NativeAccessSpecifierPrivate)
	TArray<class UNiagaraParameterCollection*>   CachedParameterCollectionReferences;               // 0x388(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<struct FNiagaraScriptResolvedDataInterfaceInfo> ResolvedDataInterfaces;                            // 0x398(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<struct FNiagaraResolvedUserDataInterfaceBinding> ResolvedUserDataInterfaceBindings;                 // 0x3A8(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2485[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraScript");
		return Clss;
	}

	void RaiseOnGPUCompilationComplete();
};

// 0x1C8 (0x1F0 - 0x28)
// Class Niagara.NiagaraSimCache
class UNiagaraSimCache : public UObject
{
public:
	struct FGuid                                 CacheGuid;                                         // 0x28(0x10)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TSoftObjectPtr<class UNiagaraSystem>         SoftNiagaraSystem;                                 // 0x38(0x28)(Edit, EditConst, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        StartSeconds;                                      // 0x60(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        DurationSeconds;                                   // 0x64(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FNiagaraSimCacheCreateParameters      CreateParameters;                                  // 0x68(0x58)(NativeAccessSpecifierPrivate)
	bool                                         bNeedsReadComponentMappingRecache;                 // 0xC0(0x1)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2490[0x7];                                     // Fixing Size After Last Property..
	struct FNiagaraSimCacheLayout                CacheLayout;                                       // 0xC8(0xC0)(NativeAccessSpecifierPrivate)
	TArray<struct FNiagaraSimCacheFrame>         CacheFrames;                                       // 0x188(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TMap<struct FNiagaraVariableBase, class UObject*> DataInterfaceStorage;                              // 0x198(0x50)(UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2491[0x8];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraSimCache");
		return Clss;
	}

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
	uint8                                        Pad_2495[0xB8];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("AsyncNiagaraCaptureSimCache");
		return Clss;
	}

	void OnCaptureComplete__DelegateSignature(bool bSuccess);
	class UAsyncNiagaraCaptureSimCache* CaptureNiagaraSimCacheUntilComplete(class UNiagaraSimCache* SimCache, const struct FNiagaraSimCacheCreateParameters& CreateParameters, class UNiagaraComponent* NiagaraComponent, class UNiagaraSimCache** OutSimCache, int32 CaptureRate, bool bAdvanceSimulation, float AdvanceDeltaTime);
	class UAsyncNiagaraCaptureSimCache* CaptureNiagaraSimCacheMultiFrame(class UNiagaraSimCache* SimCache, const struct FNiagaraSimCacheCreateParameters& CreateParameters, class UNiagaraComponent* NiagaraComponent, class UNiagaraSimCache** OutSimCache, int32 NumFrames, int32 CaptureRate, bool bAdvanceSimulation, float AdvanceDeltaTime);
};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraSimCacheFunctionLibrary
class UNiagaraSimCacheFunctionLibrary : public UBlueprintFunctionLibrary
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraSimCacheFunctionLibrary");
		return Clss;
	}

	class UNiagaraSimCache* CreateNiagaraSimCache(class UObject* WorldContextObject);
	bool CaptureNiagaraSimCacheImmediate(class UNiagaraSimCache* SimCache, const struct FNiagaraSimCacheCreateParameters& CreateParameters, class UNiagaraComponent* NiagaraComponent, class UNiagaraSimCache** OutSimCache, bool bAdvanceSimulation, float AdvanceDeltaTime);
};

// 0x10 (0x38 - 0x28)
// Class Niagara.NiagaraSimulationStageBase
class UNiagaraSimulationStageBase : public UNiagaraMergeable
{
public:
	class UNiagaraScript*                        Script;                                            // 0x28(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SimulationStageName;                               // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEnabled : 1;                                      // Mask: 0x1, PropSize: 0x10x34(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2498[0x3];                                     // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraSimulationStageBase");
		return Clss;
	}

};

// 0x140 (0x178 - 0x38)
// Class Niagara.NiagaraSimulationStageGeneric
class UNiagaraSimulationStageGeneric : public UNiagaraSimulationStageBase
{
public:
	struct FNiagaraVariableAttributeBinding      EnabledBinding;                                    // 0x38(0x28)(Edit, NativeAccessSpecifierPublic)
	enum class ENiagaraIterationSource           IterationSource;                                   // 0x60(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2499[0x3];                                     // Fixing Size After Last Property..
	int32                                        Iterations;                                        // 0x64(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      NumIterationsBinding;                              // 0x68(0x28)(Edit, NativeAccessSpecifierPublic)
	enum class ENiagaraSimStageExecuteBehavior   ExecuteBehavior;                                   // 0x90(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_249A[0x3];                                     // Fixing Size After Last Property..
	uint8                                        bDisablePartialParticleUpdate : 1;                 // Mask: 0x1, PropSize: 0x10x94(0x1)(Edit, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_207 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_249B[0x3];                                     // Fixing Size After Last Property..
	struct FNiagaraVariableDataInterfaceBinding  DataInterface;                                     // 0x98(0x18)(Edit, NativeAccessSpecifierPublic)
	uint8                                        bParticleIterationStateEnabled : 1;                // Mask: 0x1, PropSize: 0x10xB0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_208 : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_249C[0x7];                                     // Fixing Size After Last Property..
	struct FNiagaraVariableAttributeBinding      ParticleIterationStateBinding;                     // 0xB8(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FIntPoint                             ParticleIterationStateRange;                       // 0xE0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bGpuDispatchForceLinear : 1;                       // Mask: 0x1, PropSize: 0x10xE8(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideGpuDispatchNumThreads : 1;                // Mask: 0x2, PropSize: 0x10xE8(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_209 : 6;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_249D[0x3];                                     // Fixing Size After Last Property..
	struct FIntVector                            OverrideGpuDispatchNumThreads;                     // 0xEC(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraGpuDispatchType           DirectDispatchType;                                // 0xF8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraDirectDispatchElementType DirectDispatchElementType;                         // 0xF9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_249E[0x6];                                     // Fixing Size After Last Property..
	struct FNiagaraVariableAttributeBinding      ElementCountXBinding;                              // 0x100(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      ElementCountYBinding;                              // 0x128(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      ElementCountZBinding;                              // 0x150(0x28)(Edit, NativeAccessSpecifierPublic)

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraSimulationStageGeneric");
		return Clss;
	}

};

// 0x558 (0x608 - 0xB0)
// Class Niagara.NiagaraSpriteRendererProperties
class UNiagaraSpriteRendererProperties : public UNiagaraRendererProperties
{
public:
	class UMaterialInterface*                    Material;                                          // 0xB0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraUserParameterBinding          MaterialUserParamBinding;                          // 0xB8(0x18)(Edit, NativeAccessSpecifierPublic)
	enum class ENiagaraRendererSourceDataMode    SourceMode;                                        // 0xD0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraSpriteAlignment           Alignment;                                         // 0xD1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraSpriteFacingMode          FacingMode;                                        // 0xD2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraSortMode                  SortMode;                                          // 0xD3(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MacroUVRadius;                                     // 0xD4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             PivotInUVSpace;                                    // 0xD8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             SubImageSize;                                      // 0xE8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSubImageBlend : 1;                                // Mask: 0x1, PropSize: 0x10xF8(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRemoveHMDRollInVR : 1;                            // Mask: 0x2, PropSize: 0x10xF8(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSortOnlyWhenTranslucent : 1;                      // Mask: 0x4, PropSize: 0x10xF8(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEnableCameraDistanceCulling : 1;                  // Mask: 0x8, PropSize: 0x10xF8(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_20A : 4;                                    // Fixing Bit-Field Size..
	enum class ENiagaraRendererSortPrecision     SortPrecision;                                     // 0xF9(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraRendererGpuTranslucentLatency GpuTranslucentLatency;                             // 0xFA(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraRendererPixelCoverageMode PixelCoverageMode;                                 // 0xFB(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PixelCoverageBlend;                                // 0xFC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinFacingCameraBlendDistance;                      // 0x100(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxFacingCameraBlendDistance;                      // 0x104(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinCameraDistance;                                 // 0x108(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxCameraDistance;                                 // 0x10C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       RendererVisibility;                                // 0x110(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_249F[0x4];                                     // Fixing Size After Last Property..
	struct FNiagaraVariableAttributeBinding      PositionBinding;                                   // 0x118(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      ColorBinding;                                      // 0x140(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      VelocityBinding;                                   // 0x168(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      SpriteRotationBinding;                             // 0x190(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      SpriteSizeBinding;                                 // 0x1B8(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      SpriteFacingBinding;                               // 0x1E0(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      SpriteAlignmentBinding;                            // 0x208(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      SubImageIndexBinding;                              // 0x230(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      DynamicMaterialBinding;                            // 0x258(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      DynamicMaterial1Binding;                           // 0x280(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      DynamicMaterial2Binding;                           // 0x2A8(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      DynamicMaterial3Binding;                           // 0x2D0(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      CameraOffsetBinding;                               // 0x2F8(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      UVScaleBinding;                                    // 0x320(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      PivotOffsetBinding;                                // 0x348(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      MaterialRandomBinding;                             // 0x370(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      CustomSortingBinding;                              // 0x398(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      NormalizedAgeBinding;                              // 0x3C0(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      RendererVisibilityTagBinding;                      // 0x3E8(0x28)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraRendererMaterialParameters    MaterialParameters;                                // 0x410(0x50)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      PrevPositionBinding;                               // 0x460(0x28)(Transient, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      PrevVelocityBinding;                               // 0x488(0x28)(Transient, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      PrevSpriteRotationBinding;                         // 0x4B0(0x28)(Transient, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      PrevSpriteSizeBinding;                             // 0x4D8(0x28)(Transient, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      PrevSpriteFacingBinding;                           // 0x500(0x28)(Transient, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      PrevSpriteAlignmentBinding;                        // 0x528(0x28)(Transient, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      PrevCameraOffsetBinding;                           // 0x550(0x28)(Transient, NativeAccessSpecifierPublic)
	struct FNiagaraVariableAttributeBinding      PrevPivotOffsetBinding;                            // 0x578(0x28)(Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_24A0[0x68];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraSpriteRendererProperties");
		return Clss;
	}

};

// 0x480 (0x4F0 - 0x70)
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
	uint8                                        BitPad_20B : 4;                                    // Fixing Bit-Field Size..
	enum class ERendererStencilMask              CustomDepthStencilWriteMask;                       // 0x72(0x1)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24A1[0x1];                                     // Fixing Size After Last Property..
	int32                                        CustomDepthStencilValue;                           // 0x74(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        TranslucencySortPriority;                          // 0x78(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TranslucencySortDistanceOffset;                    // 0x7C(0x4)(Edit, BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDumpDebugSystemInfo;                              // 0x80(0x1)(Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDumpDebugEmitterInfo;                             // 0x81(0x1)(Edit, ZeroConstructor, Transient, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24A2[0x1];                                     // Fixing Size After Last Property..
	bool                                         bRequireCurrentFrameData;                          // 0x83(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bFixedBounds : 1;                                  // Mask: 0x1, PropSize: 0x10x84(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_20C : 7;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_24A3[0x3];                                     // Fixing Size After Last Property..
	class UNiagaraEffectType*                    EffectType;                                        // 0x88(0x8)(Edit, ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bOverrideScalabilitySettings;                      // 0x90(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_24A4[0x3];                                     // Fixing Size After Last Property..
	uint8                                        bOverrideAllowCullingForLocalPlayers : 1;          // Mask: 0x1, PropSize: 0x10x94(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bAllowCullingForLocalPlayersOverride : 1;          // Mask: 0x2, PropSize: 0x10x94(0x1)(Edit, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        BitPad_20D : 6;                                    // Fixing Bit-Field Size..
	uint8                                        Pad_24A5[0x3];                                     // Fixing Size After Last Property..
	struct FNiagaraSystemScalabilityOverrides    SystemScalabilityOverrides;                        // 0x98(0x10)(Edit, Protected, NativeAccessSpecifierProtected)
	TArray<struct FNiagaraEmitterHandle>         EmitterHandles;                                    // 0xA8(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TArray<class UNiagaraParameterCollectionInstance*> ParameterCollectionOverrides;                      // 0xB8(0x10)(Edit, ZeroConstructor, Protected, UObjectWrapper, NativeAccessSpecifierProtected)
	class UNiagaraScript*                        SystemSpawnScript;                                 // 0xC8(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class UNiagaraScript*                        SystemUpdateScript;                                // 0xD0(0x8)(ZeroConstructor, NoDestructor, Protected, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_24A6[0x10];                                    // Fixing Size After Last Property..
	struct FNiagaraSystemCompiledData            SystemCompiledData;                                // 0xE8(0x228)(Protected, NativeAccessSpecifierProtected)
	struct FNiagaraUserRedirectionParameterStore ExposedParameters;                                 // 0x310(0xD8)(Protected, NativeAccessSpecifierProtected)
	struct FBox                                  FixedBounds;                                       // 0x3E8(0x38)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, NativeAccessSpecifierProtected)
	bool                                         bAutoDeactivate;                                   // 0x420(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bDeterminism;                                      // 0x421(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_24A7[0x2];                                     // Fixing Size After Last Property..
	int32                                        RandomSeed;                                        // 0x424(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        WarmupTime;                                        // 0x428(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	int32                                        WarmupTickCount;                                   // 0x42C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	float                                        WarmupTickDelta;                                   // 0x430(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bFixedTickDelta;                                   // 0x434(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_24A8[0x3];                                     // Fixing Size After Last Property..
	float                                        FixedTickDeltaTime;                                // 0x438(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bNeedsGPUContextInitForDataInterfaces;             // 0x43C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_24A9[0xB3];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraSystem");
		return Clss;
	}

};

// 0x0 (0x28 - 0x28)
// Class Niagara.NiagaraValidationRule
class UNiagaraValidationRule : public UObject
{
public:

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("NiagaraValidationRule");
		return Clss;
	}

};

// 0x38 (0x60 - 0x28)
// Class Niagara.VolumeCache
class UVolumeCache : public UObject
{
public:
	class FString                                FilePath;                                          // 0x28(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EVolumeCacheType                  CacheType;                                         // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24AA[0x3];                                     // Fixing Size After Last Property..
	struct FIntVector                            Resolution;                                        // 0x3C(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameRangeStart;                                   // 0x48(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        FrameRangeEnd;                                     // 0x4C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_24AB[0x10];                                    // Fixing Size Of Struct..

	static class UClass* StaticClass()
	{
		static class UClass* Clss = UObject::FindClassFast("VolumeCache");
		return Clss;
	}

};

}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
