#pragma once

// Dumped with Dumper-7!


namespace SDK
{
//---------------------------------------------------------------------------------------------------------------------
// ENUMS
//---------------------------------------------------------------------------------------------------------------------

enum class ENiagaraSimCacheAttributeCaptureMode : uint8
{
	All                            = 0,
	RenderingOnly                  = 1,
	ExplicitAttributes             = 2,
	ENiagaraSimCacheAttributeCaptureMode_MAX = 3,
};

enum class ENiagaraCollisionMode : uint8
{
	None                           = 0,
	SceneGeometry                  = 1,
	DepthBuffer                    = 2,
	DistanceField                  = 3,
	ENiagaraCollisionMode_MAX      = 4,
};

enum class ENiagaraBaseTypes : uint8
{
	Half                           = 0,
	Float                          = 1,
	Int32                          = 2,
	Bool                           = 3,
	Max                            = 4,
};

enum class ENiagaraGpuBufferFormat : uint8
{
	Float                          = 0,
	HalfFloat                      = 1,
	UnsignedNormalizedByte         = 2,
	Max                            = 3,
};

enum class ENiagaraGpuSyncMode : int32
{
	None                           = 0,
	SyncCpuToGpu                   = 1,
	SyncGpuToCpu                   = 2,
	SyncBoth                       = 3,
	ENiagaraGpuSyncMode_MAX        = 4,
};

enum class ENiagaraMipMapGeneration : uint8
{
	Disabled                       = 0,
	PostStage                      = 1,
	PostSimulate                   = 2,
	ENiagaraMipMapGeneration_MAX   = 3,
};

enum class ENiagaraDefaultMode : uint8
{
	Value                          = 0,
	Binding                        = 1,
	Custom                         = 2,
	FailIfPreviouslyNotSet         = 3,
	ENiagaraDefaultMode_MAX        = 4,
};

enum class ENiagaraDefaultRendererMotionVectorSetting : int32
{
	Precise                        = 0,
	Approximate                    = 1,
	ENiagaraDefaultRendererMotionVectorSetting_MAX = 2,
};

enum class ENiagaraRendererMotionVectorSetting : int32
{
	AutoDetect                     = 0,
	Precise                        = 1,
	Approximate                    = 2,
	Disable                        = 3,
	ENiagaraRendererMotionVectorSetting_MAX = 4,
};

enum class ENiagaraSimTarget : uint8
{
	CPUSim                         = 0,
	GPUComputeSim                  = 1,
	ENiagaraSimTarget_MAX          = 2,
};

enum class ENiagaraAgeUpdateMode : uint8
{
	TickDeltaTime                  = 0,
	DesiredAge                     = 1,
	DesiredAgeNoSeek               = 2,
	ENiagaraAgeUpdateMode_MAX      = 3,
};

enum class ENiagaraStatEvaluationType : uint8
{
	Average                        = 0,
	Maximum                        = 1,
	ENiagaraStatEvaluationType_MAX = 2,
};

enum class ENiagaraStatDisplayMode : uint8
{
	Percent                        = 0,
	Absolute                       = 1,
	ENiagaraStatDisplayMode_MAX    = 2,
};

enum class ENiagaraDataSetType : uint8
{
	ParticleData                   = 0,
	Shared                         = 1,
	Event                          = 2,
	ENiagaraDataSetType_MAX        = 3,
};

enum class ENiagaraInputNodeUsage : uint8
{
	Undefined                      = 0,
	Parameter                      = 1,
	Attribute                      = 2,
	SystemConstant                 = 3,
	TranslatorConstant             = 4,
	RapidIterationParameter        = 5,
	ENiagaraInputNodeUsage_MAX     = 6,
};

enum class ENiagaraScriptCompileStatus : uint8
{
	NCS_Unknown                    = 0,
	NCS_Dirty                      = 1,
	NCS_Error                      = 2,
	NCS_UpToDate                   = 3,
	NCS_BeingCreated               = 4,
	NCS_UpToDateWithWarnings       = 5,
	NCS_ComputeUpToDateWithWarnings = 6,
	NCS_MAX                        = 7,
};

enum class ENiagaraScriptUsage : uint8
{
	Function                       = 0,
	Module                         = 1,
	DynamicInput                   = 2,
	ParticleSpawnScript            = 3,
	ParticleSpawnScriptInterpolated = 4,
	ParticleUpdateScript           = 5,
	ParticleEventScript            = 6,
	ParticleSimulationStageScript  = 7,
	ParticleGPUComputeScript       = 8,
	EmitterSpawnScript             = 9,
	EmitterUpdateScript            = 10,
	SystemSpawnScript              = 11,
	SystemUpdateScript             = 12,
	ENiagaraScriptUsage_MAX        = 13,
};

enum class ENiagaraCompileUsageStaticSwitch : uint8
{
	Spawn                          = 0,
	Update                         = 1,
	Event                          = 2,
	SimulationStage                = 3,
	Default                        = 4,
	ENiagaraCompileUsageStaticSwitch_MAX = 5,
};

enum class ENiagaraScriptContextStaticSwitch : uint8
{
	System                         = 0,
	Emitter                        = 1,
	Particle                       = 2,
	ENiagaraScriptContextStaticSwitch_MAX = 3,
};

enum class ENiagaraScriptGroup : uint8
{
	Particle                       = 0,
	Emitter                        = 1,
	System                         = 2,
	Max                            = 3,
};

enum class ENiagaraBindingSource : uint8
{
	ImplicitFromSource             = 0,
	ExplicitParticles              = 1,
	ExplicitEmitter                = 2,
	ExplicitSystem                 = 3,
	ExplicitUser                   = 4,
	MaxBindingSource               = 5,
	ENiagaraBindingSource_MAX      = 6,
};

enum class ENiagaraRendererSourceDataMode : uint8
{
	Particles                      = 0,
	Emitter                        = 1,
	ENiagaraRendererSourceDataMode_MAX = 2,
};

enum class ENiagaraLegacyTrailWidthMode : uint8
{
	FromCentre                     = 0,
	FromFirst                      = 1,
	FromSecond                     = 2,
	ENiagaraLegacyTrailWidthMode_MAX = 3,
};

enum class ENiagaraSystemInstanceState : uint8
{
	None                           = 0,
	PendingSpawn                   = 1,
	PendingSpawnPaused             = 2,
	Spawning                       = 3,
	Running                        = 4,
	Paused                         = 5,
	Num                            = 6,
	ENiagaraSystemInstanceState_MAX = 7,
};

enum class ENiagaraFunctionDebugState : uint8
{
	NoDebug                        = 0,
	Basic                          = 1,
	ENiagaraFunctionDebugState_MAX = 2,
};

enum class ENiagaraGpuComputeTickStage : uint8
{
	PreInitViews                   = 0,
	PostInitViews                  = 1,
	PostOpaqueRender               = 2,
	Max                            = 3,
	First                          = 0,
	Last                           = 2,
};

enum class ENiagaraConditionalOperator : uint8
{
	Equals                         = 0,
	NotEqual                       = 1,
	LessThan                       = 2,
	LessThanOrEqual                = 3,
	GreaterThan                    = 4,
	GreaterThanOrEqual             = 5,
	Max                            = 6,
};

enum class ENCPoolMethod : uint8
{
	None                           = 0,
	AutoRelease                    = 1,
	ManualRelease                  = 2,
	ManualRelease_OnComplete       = 3,
	FreeInPool                     = 4,
	ENCPoolMethod_MAX              = 5,
};

enum class ENiagraDataChannel_IslandMode : uint8
{
	AlignedStatic                  = 0,
	Dynamic                        = 1,
	ENiagraDataChannel_MAX         = 2,
};

enum class ENiagaraDataChannelAllocationMode : uint8
{
	Static                         = 0,
	ENiagaraDataChannelAllocationMode_MAX = 1,
};

enum class ENDIDataChannelSpawnMode : uint8
{
	Override                       = 0,
	Accumulate                     = 1,
	None                           = 2,
	Max                            = 3,
};

enum class ENiagaraSortMode : uint8
{
	None                           = 0,
	ViewDepth                      = 1,
	ViewDistance                   = 2,
	CustomAscending                = 3,
	CustomDecending                = 4,
	ENiagaraSortMode_MAX           = 5,
};

enum class ENDISkelMesh_GpuMaxInfluences : uint8
{
	AllowMax4                      = 0,
	AllowMax8                      = 1,
	Unlimited                      = 2,
	ENDISkelMesh_MAX               = 3,
};

enum class ENDISkelMesh_GpuUniformSamplingFormat : uint8
{
	Full                           = 0,
	Limited_24_8                   = 1,
	Limited_23_9                   = 2,
	ENDISkelMesh_MAX               = 3,
};

enum class ENDISkelMesh_AdjacencyTriangleIndexFormat : uint8
{
	Full                           = 0,
	Half                           = 1,
	ENDISkelMesh_MAX               = 2,
};

enum class ENiagaraDefaultRendererPixelCoverageMode : uint8
{
	Enabled                        = 0,
	Disabled                       = 1,
	ENiagaraDefaultRendererPixelCoverageMode_MAX = 2,
};

enum class ENiagaraDefaultSortPrecision : uint8
{
	Low                            = 0,
	High                           = 1,
	ENiagaraDefaultSortPrecision_MAX = 2,
};

enum class ENiagaraDefaultGpuTranslucentLatency : uint8
{
	Immediate                      = 0,
	Latent                         = 1,
	ENiagaraDefaultGpuTranslucentLatency_MAX = 2,
};

enum class ENDICollisionQuery_AsyncGpuTraceProvider : uint8
{
	Default                        = 0,
	HWRT                           = 1,
	GSDF                           = 2,
	None                           = 3,
	ENDICollisionQuery_MAX         = 4,
};

enum class ENiagaraTickBehavior : uint8
{
	UsePrereqs                     = 0,
	UseComponentTickGroup          = 1,
	ForceTickFirst                 = 2,
	ForceTickLast                  = 3,
	ENiagaraTickBehavior_MAX       = 4,
};

enum class ENDIActorComponentSourceMode : uint8
{
	Default                        = 0,
	AttachParent                   = 1,
	LocalPlayer                    = 2,
	ENDIActorComponentSourceMode_MAX = 3,
};

enum class ENDISceneCapture2DSourceMode : uint8
{
	UserParameterThenAttachParent  = 0,
	UserParameterOnly              = 1,
	AttachParentOnly               = 2,
	Managed                        = 3,
	ENDISceneCapture2DSourceMode_MAX = 4,
};

enum class ENDISceneCapture2DOffsetMode : uint8
{
	Disabled                       = 0,
	RelativeLocal                  = 1,
	RelativeWorld                  = 2,
	AbsoluteWorld                  = 3,
	ENDISceneCapture2DOffsetMode_MAX = 4,
};

enum class ENDIStaticMesh_SourceMode : uint8
{
	Default                        = 0,
	Source                         = 1,
	AttachParent                   = 2,
	DefaultMeshOnly                = 3,
	ENDIStaticMesh_MAX             = 4,
};

enum class ENDIObjectPropertyReaderSourceMode : uint8
{
	Binding                        = 0,
	AttachParentActor              = 1,
	BindingThenAttachParentActor   = 2,
	ENDIObjectPropertyReaderSourceMode_MAX = 3,
};

enum class ENiagaraSystemSpawnSectionStartBehavior : int32
{
	Activate                       = 0,
	ENiagaraSystemSpawnSectionStartBehavior_MAX = 1,
};

enum class ENiagaraSystemSpawnSectionEvaluateBehavior : int32
{
	ActivateIfInactive             = 0,
	None                           = 1,
	ENiagaraSystemSpawnSectionEvaluateBehavior_MAX = 2,
};

enum class ENiagaraSystemSpawnSectionEndBehavior : int32
{
	SetSystemInactive              = 0,
	Deactivate                     = 1,
	None                           = 2,
	ENiagaraSystemSpawnSectionEndBehavior_MAX = 3,
};

enum class ENiagaraCompilationState : uint8
{
	CheckDDC                       = 0,
	Precompile                     = 1,
	StartCompileJob                = 2,
	AwaitResult                    = 3,
	OptimizeByteCode               = 4,
	ProcessResult                  = 5,
	PutToDDC                       = 6,
	Finished                       = 7,
	Aborted                        = 8,
	ENiagaraCompilationState_MAX   = 9,
};

enum class ENiagaraBakerViewMode : int32
{
	Perspective                    = 0,
	OrthoFront                     = 1,
	OrthoBack                      = 2,
	OrthoLeft                      = 3,
	OrthoRight                     = 4,
	OrthoTop                       = 5,
	OrthoBottom                    = 6,
	Num                            = 7,
	ENiagaraBakerViewMode_MAX      = 8,
};

enum class ENiagaraOcclusionQueryMode : uint8
{
	Default                        = 0,
	AlwaysEnabled                  = 1,
	AlwaysDisabled                 = 2,
	ENiagaraOcclusionQueryMode_MAX = 3,
};

enum class ENiagaraDataInterfaceEmitterBindingMode : int32
{
	Self                           = 0,
	Other                          = 1,
	ENiagaraDataInterfaceEmitterBindingMode_MAX = 2,
};

enum class ENDIExport_GPUAllocationMode : uint8
{
	FixedSize                      = 0,
	PerParticle                    = 1,
	ENDIExport_MAX                 = 2,
};

enum class ENDILandscape_SourceMode : uint8
{
	Default                        = 0,
	Source                         = 1,
	AttachParent                   = 2,
	ENDILandscape_MAX              = 3,
};

enum class ESetResolutionMethod : int32
{
	Independent                    = 0,
	MaxAxis                        = 1,
	CellSize                       = 2,
	ESetResolutionMethod_MAX       = 3,
};

enum class ENDISkeletalMesh_SourceMode : uint8
{
	Default                        = 0,
	Source                         = 1,
	AttachParent                   = 2,
	ENDISkeletalMesh_MAX           = 3,
};

enum class ENDISkeletalMesh_SkinningMode : uint8
{
	Invalid                        = 255,
	None                           = 0,
	SkinOnTheFly                   = 1,
	PreSkin                        = 2,
	ENDISkeletalMesh_MAX           = 256,
};

enum class ENiagaraDebugPlaybackMode : uint8
{
	Play                           = 0,
	Loop                           = 1,
	Paused                         = 2,
	Step                           = 3,
	ENiagaraDebugPlaybackMode_MAX  = 4,
};

enum class ENiagaraDebugHudHAlign : uint8
{
	Left                           = 0,
	Center                         = 1,
	Right                          = 2,
	ENiagaraDebugHudHAlign_MAX     = 3,
};

enum class ENiagaraDebugHudVAlign : uint8
{
	Top                            = 0,
	Center                         = 1,
	Bottom                         = 2,
	ENiagaraDebugHudVAlign_MAX     = 3,
};

enum class ENiagaraDebugHudFont : int32
{
	Small                          = 0,
	Normal                         = 1,
	ENiagaraDebugHudFont_MAX       = 2,
};

enum class ENiagaraDebugHudVerbosity : int32
{
	None                           = 0,
	Basic                          = 1,
	Verbose                        = 2,
	ENiagaraDebugHudVerbosity_MAX  = 3,
};

enum class ENiagaraDebugHUDOverviewMode : int32
{
	Overview                       = 0,
	Scalability                    = 1,
	Performance                    = 2,
	PerformanceGraph               = 3,
	GpuComputePerformance          = 4,
	ENiagaraDebugHUDOverviewMode_MAX = 5,
};

enum class ENiagaraDebugHUDPerfGraphMode : int32
{
	GameThread                     = 0,
	RenderThread                   = 1,
	GPU                            = 2,
	ENiagaraDebugHUDPerfGraphMode_MAX = 3,
};

enum class ENiagaraDebugHUDPerfSampleMode : int32
{
	FrameTotal                     = 0,
	PerInstanceAverage             = 1,
	ENiagaraDebugHUDPerfSampleMode_MAX = 2,
};

enum class ENiagaraDebugHUDDOverviewSort : int32
{
	Name                           = 0,
	NumberRegistered               = 1,
	NumberActive                   = 2,
	NumberScalability              = 3,
	MemoryUsage                    = 4,
	RecentlyVisibilty              = 5,
	ENiagaraDebugHUDDOverviewSort_MAX = 6,
};

enum class ENiagaraCullReaction : int32
{
	Deactivate                     = 0,
	DeactivateImmediate            = 1,
	DeactivateResume               = 2,
	DeactivateImmediateResume      = 3,
	PauseResume                    = 4,
	ENiagaraCullReaction_MAX       = 5,
};

enum class ENiagaraScalabilityUpdateFrequency : int32
{
	SpawnOnly                      = 0,
	Low                            = 1,
	Medium                         = 2,
	High                           = 3,
	Continuous                     = 4,
	ENiagaraScalabilityUpdateFrequency_MAX = 5,
};

enum class ENiagaraCullProxyMode : uint32
{
	None                           = 0,
	Instanced_Rendered             = 1,
	ENiagaraCullProxyMode_MAX      = 2,
};

enum class EScriptExecutionMode : uint8
{
	EveryParticle                  = 0,
	SpawnedParticles               = 1,
	SingleParticle                 = 2,
	EScriptExecutionMode_MAX       = 3,
};

enum class EParticleAllocationMode : uint8
{
	AutomaticEstimate              = 0,
	ManualEstimate                 = 1,
	FixedCount                     = 2,
	EParticleAllocationMode_MAX    = 3,
};

enum class ENiagaraEmitterCalculateBoundMode : uint8
{
	Dynamic                        = 0,
	Fixed                          = 1,
	Programmable                   = 2,
	ENiagaraEmitterCalculateBoundMode_MAX = 3,
};

enum class ENiagaraMeshFacingMode : uint8
{
	Default                        = 0,
	Velocity                       = 1,
	CameraPosition                 = 2,
	CameraPlane                    = 3,
	ENiagaraMeshFacingMode_MAX     = 4,
};

enum class ENiagaraMeshPivotOffsetSpace : uint8
{
	Mesh                           = 0,
	Simulation                     = 1,
	World                          = 2,
	Local                          = 3,
	ENiagaraMeshPivotOffsetSpace_MAX = 4,
};

enum class ENiagaraMeshLockedAxisSpace : uint8
{
	Simulation                     = 0,
	World                          = 1,
	Local                          = 2,
	ENiagaraMeshLockedAxisSpace_MAX = 3,
};

enum class ENiagaraPlatformSelectionState : uint8
{
	Default                        = 0,
	Enabled                        = 1,
	Disabled                       = 2,
	ENiagaraPlatformSelectionState_MAX = 3,
};

enum class ENiagaraPlatformSetState : uint8
{
	Disabled                       = 0,
	Enabled                        = 1,
	Active                         = 2,
	Unknown                        = 3,
	ENiagaraPlatformSetState_MAX   = 4,
};

enum class ENiagaraCVarConditionResponse : uint8
{
	None                           = 0,
	Enable                         = 1,
	Disable                        = 2,
	ENiagaraCVarConditionResponse_MAX = 3,
};

enum class ENiagaraDeviceProfileRedirectMode : uint8
{
	CVar                           = 0,
	DeviceProfile                  = 1,
	ENiagaraDeviceProfileRedirectMode_MAX = 2,
};

enum class ENiagaraPreviewGridResetMode : uint8
{
	Never                          = 0,
	Individual                     = 1,
	All                            = 2,
	ENiagaraPreviewGridResetMode_MAX = 3,
};

enum class ENiagaraRendererSortPrecision : uint8
{
	Default                        = 0,
	Low                            = 1,
	High                           = 2,
	ENiagaraRendererSortPrecision_MAX = 3,
};

enum class ENiagaraRendererGpuTranslucentLatency : uint8
{
	ProjectDefault                 = 0,
	Immediate                      = 1,
	Latent                         = 2,
	ENiagaraRendererGpuTranslucentLatency_MAX = 3,
};

enum class ENiagaraRibbonFacingMode : uint8
{
	Screen                         = 0,
	Custom                         = 1,
	CustomSideVector               = 2,
	ENiagaraRibbonFacingMode_MAX   = 3,
};

enum class ENiagaraRibbonAgeOffsetMode : uint8
{
	Scale                          = 0,
	Clip                           = 1,
	ENiagaraRibbonAgeOffsetMode_MAX = 2,
};

enum class ENiagaraRibbonDrawDirection : uint8
{
	FrontToBack                    = 0,
	BackToFront                    = 1,
	ENiagaraRibbonDrawDirection_MAX = 2,
};

enum class ENiagaraRibbonShapeMode : uint8
{
	Plane                          = 0,
	MultiPlane                     = 1,
	Tube                           = 2,
	Custom                         = 3,
	ENiagaraRibbonShapeMode_MAX    = 4,
};

enum class ENiagaraRibbonTessellationMode : uint8
{
	Automatic                      = 0,
	Custom                         = 1,
	Disabled                       = 2,
	ENiagaraRibbonTessellationMode_MAX = 3,
};

enum class ENiagaraRibbonUVEdgeMode : uint8
{
	SmoothTransition               = 0,
	Locked                         = 1,
	ENiagaraRibbonUVEdgeMode_MAX   = 2,
};

enum class ENiagaraRibbonUVDistributionMode : uint8
{
	ScaledUniformly                = 0,
	ScaledUsingRibbonSegmentLength = 1,
	TiledOverRibbonLength          = 2,
	TiledFromStartOverRibbonLength = 3,
	ENiagaraRibbonUVDistributionMode_MAX = 4,
};

enum class EUnusedAttributeBehaviour : uint8
{
	Copy                           = 0,
	Zero                           = 1,
	None                           = 2,
	MarkInvalid                    = 3,
	PassThrough                    = 4,
	EUnusedAttributeBehaviour_MAX  = 5,
};

enum class ENiagaraModuleDependencyType : uint8
{
	PreDependency                  = 0,
	PostDependency                 = 1,
	ENiagaraModuleDependencyType_MAX = 2,
};

enum class ENiagaraModuleDependencyScriptConstraint : uint8
{
	SameScript                     = 0,
	AllScripts                     = 1,
	ENiagaraModuleDependencyScriptConstraint_MAX = 2,
};

enum class ENiagaraScriptLibraryVisibility : uint8
{
	Invalid                        = 0,
	Unexposed                      = 1,
	Library                        = 2,
	Hidden                         = 3,
	ENiagaraScriptLibraryVisibility_MAX = 4,
};

enum class ENiagaraScriptTemplateSpecification : uint8
{
	None                           = 0,
	Template                       = 1,
	Behavior                       = 2,
	ENiagaraScriptTemplateSpecification_MAX = 3,
};

enum class ENiagaraEmitterDefaultSummaryState : uint8
{
	Default                        = 0,
	Summary                        = 1,
	ENiagaraEmitterDefaultSummaryState_MAX = 2,
};

enum class ENiagaraModuleDependencyUsage : uint8
{
	None                           = 0,
	Spawn                          = 1,
	Update                         = 2,
	Event                          = 3,
	SimulationStage                = 4,
	ENiagaraModuleDependencyUsage_MAX = 5,
};

enum class ENiagaraInlineDynamicInputFormatTokenUsage : uint8
{
	Input                          = 0,
	Decorator                      = 1,
	LineBreak                      = 2,
	ENiagaraInlineDynamicInputFormatTokenUsage_MAX = 3,
};

enum class ENiagaraSpriteAlignment : uint8
{
	Unaligned                      = 0,
	VelocityAligned                = 1,
	CustomAlignment                = 2,
	Automatic                      = 3,
	ENiagaraSpriteAlignment_MAX    = 4,
};

enum class ENiagaraSpriteFacingMode : uint8
{
	FaceCamera                     = 0,
	FaceCameraPlane                = 1,
	CustomFacingVector             = 2,
	FaceCameraPosition             = 3,
	FaceCameraDistanceBlend        = 4,
	Automatic                      = 5,
	ENiagaraSpriteFacingMode_MAX   = 6,
};

enum class ENiagaraRendererPixelCoverageMode : uint8
{
	Automatic                      = 0,
	Disabled                       = 1,
	Enabled                        = 2,
	Enabled_RGBA                   = 3,
	Enabled_RGB                    = 4,
	Enabled_A                      = 5,
	ENiagaraRendererPixelCoverageMode_MAX = 6,
};

enum class ENiagaraStructConversionType : uint8
{
	CopyOnly                       = 0,
	DoubleToFloat                  = 1,
	Vector2                        = 2,
	Vector3                        = 3,
	Vector4                        = 4,
	Quat                           = 5,
	ENiagaraStructConversionType_MAX = 6,
};

enum class ENiagaraNumericOutputTypeSelectionMode : uint8
{
	None                           = 0,
	Largest                        = 1,
	Smallest                       = 2,
	Scalar                         = 3,
	Custom                         = 4,
	ENiagaraNumericOutputTypeSelectionMode_MAX = 5,
};

enum class ENiagaraExecutionStateSource : uint8
{
	Scalability                    = 0,
	Internal                       = 1,
	Owner                          = 2,
	InternalCompletion             = 3,
	ENiagaraExecutionStateSource_MAX = 4,
};

enum class ENiagaraExecutionState : uint32
{
	Active                         = 0,
	Inactive                       = 1,
	InactiveClear                  = 2,
	Complete                       = 3,
	Disabled                       = 4,
	Num                            = 5,
	ENiagaraExecutionState_MAX     = 6,
};

enum class ENiagaraCoordinateSpace : uint8
{
	Simulation                     = 0,
	World                          = 1,
	Local                          = 2,
	ENiagaraCoordinateSpace_MAX    = 3,
};

enum class ENiagaraPythonUpdateScriptReference : uint8
{
	None                           = 0,
	ScriptAsset                    = 1,
	DirectTextEntry                = 2,
	ENiagaraPythonUpdateScriptReference_MAX = 3,
};

enum class ENiagaraOrientationAxis : uint8
{
	XAxis                          = 0,
	YAxis                          = 1,
	ZAxis                          = 2,
	ENiagaraOrientationAxis_MAX    = 3,
};

enum class ENiagaraInputWidgetType : uint8
{
	Default                        = 0,
	Slider                         = 1,
	Volume                         = 2,
	NumericDropdown                = 3,
	EnumStyle                      = 4,
	ENiagaraInputWidgetType_MAX    = 5,
};

enum class ENiagaraBoolDisplayMode : uint8
{
	DisplayAlways                  = 0,
	DisplayIfTrue                  = 1,
	DisplayIfFalse                 = 2,
	ENiagaraBoolDisplayMode_MAX    = 3,
};

enum class ENiagaraValidationSeverity : uint8
{
	Info                           = 0,
	Warning                        = 1,
	Error                          = 2,
	ENiagaraValidationSeverity_MAX = 3,
};

enum class ENiagaraVariantMode : int32
{
	None                           = 0,
	Object                         = 1,
	DataInterface                  = 2,
	Bytes                          = 3,
	ENiagaraVariantMode_MAX        = 4,
};

enum class EVolumeCacheType : uint8
{
	OpenVDB                        = 0,
	EVolumeCacheType_MAX           = 1,
};


//---------------------------------------------------------------------------------------------------------------------
// STRUCTS
//---------------------------------------------------------------------------------------------------------------------

// 0x1C (0x1C - 0x0)
// ScriptStruct Niagara.NiagaraSimCacheCaptureParameters
struct FNiagaraSimCacheCaptureParameters
{
public:
	uint8                                        bAppendToSimCache : 1;                             // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCaptureFixedNumberOfFrames : 1;                   // Mask: 0x2, PropSize: 0x10x0(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_156 : 6;                                    // Fixing Bit-Field Size 
	uint8                                        Pad_1F66[0x3];                                     // Fixing Size After Last Property 
	int32                                        NumFrames;                                         // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CaptureRate;                                       // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseTimeout : 1;                                   // Mask: 0x1, PropSize: 0x10xC(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_157 : 7;                                    // Fixing Bit-Field Size 
	uint8                                        Pad_1F67[0x3];                                     // Fixing Size After Last Property 
	int32                                        TimeoutFrameCount;                                 // 0x10(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCaptureAllFramesImmediatly : 1;                   // Mask: 0x1, PropSize: 0x10x14(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_158 : 7;                                    // Fixing Bit-Field Size 
	uint8                                        Pad_1F68[0x3];                                     // Fixing Size After Last Property 
	float                                        ImmediateCaptureDeltaTime;                         // 0x18(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct Niagara.NiagaraSimCacheCreateParameters
struct FNiagaraSimCacheCreateParameters
{
public:
	enum class ENiagaraSimCacheAttributeCaptureMode AttributeCaptureMode;                              // 0x0(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F6A[0x3];                                     // Fixing Size After Last Property 
	uint8                                        bAllowRebasing : 1;                                // Mask: 0x1, PropSize: 0x10x4(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAllowDataInterfaceCaching : 1;                    // Mask: 0x2, PropSize: 0x10x4(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAllowInterpolation : 1;                           // Mask: 0x4, PropSize: 0x10x4(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAllowVelocityExtrapolation : 1;                   // Mask: 0x8, PropSize: 0x10x4(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_159 : 4;                                    // Fixing Bit-Field Size 
	uint8                                        Pad_1F6B[0x3];                                     // Fixing Size After Last Property 
	TArray<class FName>                          RebaseIncludeAttributes;                           // 0x8(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          RebaseExcludeAttributes;                           // 0x18(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          InterpolationIncludeAttributes;                    // 0x28(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          InterpolationExcludeAttributes;                    // 0x38(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          ExplicitCaptureAttributes;                         // 0x48(0x10)(Edit, BlueprintVisible, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct Niagara.NDIRenderTargetVolumeSimCacheFrame
struct FNDIRenderTargetVolumeSimCacheFrame
{
public:
	struct FIntVector                            Size;                                              // 0x0(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EPixelFormat                      Format;                                            // 0xC(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F77[0x3];                                     // Fixing Size After Last Property 
	int32                                        UncompressedSize;                                  // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        CompressedSize;                                    // 0x14(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F79[0x30];                                    // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Niagara.NiagaraDataSetID
struct FNiagaraDataSetID
{
public:
	class FName                                  Name;                                              // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraDataSetType               Type;                                              // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F7A[0x3];                                     // Fixing Size Of Struct
};

// 0x4 (0x4 - 0x0)
// ScriptStruct Niagara.NiagaraTypeDefinitionHandle
struct FNiagaraTypeDefinitionHandle
{
public:
	int32                                        RegisteredTypeIndex;                               // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Niagara.NiagaraVariableBase
struct FNiagaraVariableBase
{
public:
	class FName                                  Name;                                              // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FNiagaraTypeDefinitionHandle          TypeDefHandle;                                     // 0x4(0x4)(Edit, NoDestructor, Protected, NativeAccessSpecifierProtected)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Niagara.NiagaraDataSetProperties
struct FNiagaraDataSetProperties
{
public:
	struct FNiagaraDataSetID                     ID;                                                // 0x0(0x8)(Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraVariableBase>          Variables;                                         // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Niagara.NiagaraScriptDataUsageInfo
struct FNiagaraScriptDataUsageInfo
{
public:
	bool                                         bReadsAttributeData;                               // 0x0(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct Niagara.NiagaraVariable
struct FNiagaraVariable : public FNiagaraVariableBase
{
public:
	TArray<uint8>                                VarData;                                           // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
};

// 0x90 (0x90 - 0x0)
// ScriptStruct Niagara.NiagaraFunctionSignature
struct FNiagaraFunctionSignature
{
public:
	class FName                                  Name;                                              // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F7E[0x4];                                     // Fixing Size After Last Property 
	TArray<struct FNiagaraVariable>              Inputs;                                            // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraVariable>              Outputs;                                           // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	class FName                                  OwnerName;                                         // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRequiresContext : 1;                              // Mask: 0x1, PropSize: 0x10x2C(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRequiresExecPin : 1;                              // Mask: 0x2, PropSize: 0x10x2C(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bMemberFunction : 1;                               // Mask: 0x4, PropSize: 0x10x2C(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bExperimental : 1;                                 // Mask: 0x8, PropSize: 0x10x2C(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSupportsCPU : 1;                                  // Mask: 0x10, PropSize: 0x10x2C(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSupportsGPU : 1;                                  // Mask: 0x20, PropSize: 0x10x2C(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bWriteFunction : 1;                                // Mask: 0x40, PropSize: 0x10x2C(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bReadFunction : 1;                                 // Mask: 0x80, PropSize: 0x10x2C(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bSoftDeprecatedFunction : 1;                       // Mask: 0x1, PropSize: 0x10x2D(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bIsCompileTagGenerator : 1;                        // Mask: 0x2, PropSize: 0x10x2D(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bHidden : 1;                                       // Mask: 0x4, PropSize: 0x10x2D(0x1)(Transient, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_15C : 5;                                    // Fixing Bit-Field Size 
	uint8                                        Pad_1F83[0x2];                                     // Fixing Size After Last Property 
	int32                                        ModuleUsageBitmask;                                // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       MiscUsageBitMask;                                  // 0x34(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F84[0x2];                                     // Fixing Size After Last Property 
	int32                                        ContextStageIndex;                                 // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int16                                        RequiredInputs;                                    // 0x3C(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int16                                        RequiredOutputs;                                   // 0x3E(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TMap<class FName, class FName>               FunctionSpecifiers;                                // 0x40(0x50)(NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Niagara.NiagaraScriptUObjectCompileInfo
struct FNiagaraScriptUObjectCompileInfo
{
public:
	struct FNiagaraVariableBase                  Variable;                                          // 0x0(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UObject*                               Object;                                            // 0x8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FSoftObjectPath                       ObjectPath;                                        // 0x10(0x18)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RegisteredParameterMapRead;                        // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F85[0x4];                                     // Fixing Size After Last Property 
	TArray<class FName>                          RegisteredParameterMapWrites;                      // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Niagara.NiagaraResolvedUObjectInfo
struct FNiagaraResolvedUObjectInfo
{
public:
	class FName                                  ReadVariableName;                                  // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraVariableBase                  ResolvedVariable;                                  // 0x4(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F86[0x4];                                     // Fixing Size After Last Property 
	class UObject*                               Object;                                            // 0x10(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct Niagara.NiagaraExternalUObjectInfo
struct FNiagaraExternalUObjectInfo
{
public:
	struct FNiagaraVariableBase                  Variable;                                          // 0x0(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ExternalName;                                      // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.NiagaraTypeDefinition
struct FNiagaraTypeDefinition
{
public:
	class UObject*                               ClassStructOrEnum;                                 // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       UnderlyingType;                                    // 0x8(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Flags;                                             // 0xA(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1F87[0x5];                                     // Fixing Size Of Struct
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Niagara.NiagaraScriptDataInterfaceInfo
struct FNiagaraScriptDataInterfaceInfo
{
public:
	class UNiagaraDataInterface*                 DataInterface;                                     // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Name;                                              // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  CompileName;                                       // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UserPtrIdx;                                        // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F88[0x4];                                     // Fixing Size After Last Property 
	struct FNiagaraTypeDefinition                Type;                                              // 0x18(0x10)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RegisteredParameterMapRead;                        // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RegisteredParameterMapWrite;                       // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                SourceEmitterName;                                 // 0x30(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Niagara.NiagaraResolvedUserDataInterfaceBinding
struct FNiagaraResolvedUserDataInterfaceBinding
{
public:
	uint8                                        Pad_1F89[0x8];                                     // Fixing Size Of Struct
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Niagara.NiagaraScriptResolvedDataInterfaceInfo
struct FNiagaraScriptResolvedDataInterfaceInfo
{
public:
	class FName                                  Name;                                              // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  CompileName;                                       // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                ResolvedSourceEmitterName;                         // 0x8(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraVariableBase                  ResolvedVariable;                                  // 0x18(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraVariableBase                  ParameterStoreVariable;                            // 0x20(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsInternal;                                       // 0x28(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F8A[0x7];                                     // Fixing Size After Last Property 
	class UNiagaraDataInterface*                 ResolvedDataInterface;                             // 0x30(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UserPtrIdx;                                        // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F8B[0x4];                                     // Fixing Size Of Struct
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Niagara.NiagaraScriptDataInterfaceCompileInfo
struct FNiagaraScriptDataInterfaceCompileInfo
{
public:
	class FName                                  Name;                                              // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        UserPtrIdx;                                        // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraTypeDefinition                Type;                                              // 0x8(0x10)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RegisteredParameterMapRead;                        // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RegisteredParameterMapWrite;                       // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsPlaceholder;                                    // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F8C[0x7];                                     // Fixing Size After Last Property 
	class FString                                SourceEmitterName;                                 // 0x28(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Niagara.NiagaraStatScope
struct FNiagaraStatScope
{
public:
	class FName                                  FullName;                                          // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  FriendlyName;                                      // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Niagara.VMFunctionSpecifier
struct FVMFunctionSpecifier
{
public:
	class FName                                  Key;                                               // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  Value;                                             // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Niagara.VMExternalFunctionBindingInfo
struct FVMExternalFunctionBindingInfo
{
public:
	class FName                                  Name;                                              // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  OwnerName;                                         // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<bool>                                 InputParamLocations;                               // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        NumOutputs;                                        // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F8D[0x4];                                     // Fixing Size After Last Property 
	TArray<struct FVMFunctionSpecifier>          FunctionSpecifiers;                                // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraVariableBase>          VariadicInputs;                                    // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraVariableBase>          VariadicOutputs;                                   // 0x40(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct Niagara.NiagaraSystemUpdateContext
struct FNiagaraSystemUpdateContext
{
public:
	TArray<class UNiagaraComponent*>             ComponentsToReset;                                 // 0x0(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<class UNiagaraComponent*>             ComponentsToReInit;                                // 0x10(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<class UNiagaraComponent*>             ComponentsToNotifySimDestroy;                      // 0x20(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<class UNiagaraSystem*>                SystemSimsToDestroy;                               // 0x30(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<class UNiagaraSystem*>                SystemSimsToRecache;                               // 0x40(0x10)(ZeroConstructor, Transient, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1F8E[0x28];                                    // Fixing Size Of Struct
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Niagara.NiagaraVariableInfo
struct FNiagaraVariableInfo
{
public:
	struct FNiagaraVariable                      Variable;                                          // 0x0(0x18)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  Definition;                                        // 0x18(0x18)(NativeAccessSpecifierPublic)
	class UNiagaraDataInterface*                 DataInterface;                                     // 0x30(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Niagara.NiagaraVariableAttributeBinding
struct FNiagaraVariableAttributeBinding
{
public:
	struct FNiagaraVariable                      RootVariable;                                      // 0x0(0x18)(Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	struct FNiagaraVariableBase                  ParamMapVariable;                                  // 0x18(0x8)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	class FName                                  DataSetName;                                       // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	enum class ENiagaraBindingSource             BindingSourceMode;                                 // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bBindingExistsOnSource : 1;                        // Mask: 0x1, PropSize: 0x10x25(0x1)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        bIsCachedParticleValue : 1;                        // Mask: 0x2, PropSize: 0x10x25(0x1)(NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1F93[0x2];                                     // Fixing Size Of Struct
};

// 0x1C (0x1C - 0x0)
// ScriptStruct Niagara.NiagaraMaterialAttributeBinding
struct FNiagaraMaterialAttributeBinding
{
public:
	class FName                                  MaterialParameterName;                             // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraVariableBase                  NiagaraVariable;                                   // 0x4(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraVariableBase                  ResolvedNiagaraVariable;                           // 0xC(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraVariableBase                  NiagaraChildVariable;                              // 0x14(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Niagara.NiagaraVariableDataInterfaceBinding
struct FNiagaraVariableDataInterfaceBinding
{
public:
	struct FNiagaraVariable                      BoundVariable;                                     // 0x0(0x18)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct Niagara.NiagaraScriptVariableBinding
struct FNiagaraScriptVariableBinding
{
public:
	class FName                                  Name;                                              // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Niagara.NiagaraUserParameterBinding
struct FNiagaraUserParameterBinding
{
public:
	struct FNiagaraVariable                      Parameter;                                         // 0x0(0x18)(Edit, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Niagara.NiagaraCompileDependency
struct FNiagaraCompileDependency
{
public:
	class FString                                LinkerErrorMessage;                                // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 NodeGUID;                                          // 0x10(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 PinGuid;                                           // 0x20(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FGuid>                         StackGuids;                                        // 0x30(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FNiagaraVariableBase                  DependentVariable;                                 // 0x40(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDependentVariableFromCustomIterationNamespace;    // 0x48(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F94[0x7];                                     // Fixing Size Of Struct
};

// 0xF8 (0xF8 - 0x0)
// ScriptStruct Niagara.NiagaraScriptAsyncCompileData
struct FNiagaraScriptAsyncCompileData
{
public:
	uint8                                        Pad_1F96[0x98];                                    // Fixing Size After Last Property 
	TArray<struct FNiagaraVariable>              RapidIterationParameters;                          // 0x98(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<class FName, class UNiagaraDataInterface*> NamedDataInterfaces;                               // 0xA8(0x50)(UObjectWrapper, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// ScriptStruct Niagara.NiagaraSystemAsyncCompileResults
struct FNiagaraSystemAsyncCompileResults
{
public:
	TArray<class UObject*>                       RootObjects;                                       // 0x0(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F98[0x58];                                    // Fixing Size After Last Property 
	TArray<struct FNiagaraVariable>              ExposedVariables;                                  // 0x68(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F99[0x10];                                    // Fixing Size Of Struct
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Niagara.NiagaraCompileHashVisitorDebugInfo
struct FNiagaraCompileHashVisitorDebugInfo
{
public:
	class FString                                Object;                                            // 0x0(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class FString>                        PropertyKeys;                                      // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        PropertyValues;                                    // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Niagara.NiagaraDataChannelSearchParameters
struct FNiagaraDataChannelSearchParameters
{
public:
	class USceneComponent*                       OwningComponent;                                   // 0x0(0x8)(Edit, BlueprintVisible, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               Location;                                          // 0x8(0x18)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Niagara.NiagaraStructConversionStep
struct FNiagaraStructConversionStep
{
public:
	int32                                        LWCBytes;                                          // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        LWCOffset;                                         // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SimulationBytes;                                   // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SimulationOffset;                                  // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraStructConversionType      ConversionType;                                    // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1F9E[0x3];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Niagara.NiagaraLwcStructConverter
struct FNiagaraLwcStructConverter
{
public:
	int32                                        LWCSize;                                           // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	int32                                        SWCSize;                                           // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FNiagaraStructConversionStep>  ConversionSteps;                                   // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct Niagara.NiagaraDataChannelGameDataLayout
struct FNiagaraDataChannelGameDataLayout
{
public:
	TMap<struct FNiagaraVariableBase, int32>     VariableIndices;                                   // 0x0(0x50)(NativeAccessSpecifierPublic)
	TArray<struct FNiagaraLwcStructConverter>    LwcConverters;                                     // 0x50(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x70 (0x70 - 0x0)
// ScriptStruct Niagara.NDCIsland
struct FNDCIsland
{
public:
	class UNiagaraDataChannelHandler_Islands*    Owner;                                             // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FBoxSphereBounds                      Bounds;                                            // 0x8(0x38)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPrivate)
	TArray<class UNiagaraComponent*>             NiagaraSystems;                                    // 0x40(0x10)(ExportObject, ZeroConstructor, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1FA3[0x20];                                    // Fixing Size Of Struct
};

// 0x4 (0x4 - 0x0)
// ScriptStruct Niagara.NDCIslandDebugDrawSettings
struct FNDCIslandDebugDrawSettings
{
public:
	uint8                                        bEnabled : 1;                                      // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bShowIslandBounds : 1;                             // Mask: 0x2, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FA4[0x3];                                     // Fixing Size Of Struct
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Niagara.NDIDataChannelFunctionInfo
struct FNDIDataChannelFunctionInfo
{
public:
	class FName                                  FunctionName;                                      // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FA5[0x4];                                     // Fixing Size After Last Property 
	TArray<struct FNiagaraVariableBase>          Inputs;                                            // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraVariableBase>          Outputs;                                           // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.NDIDataChannel_GPUScriptParameterAccessInfo
struct FNDIDataChannel_GPUScriptParameterAccessInfo
{
public:
	TArray<struct FNiagaraVariableBase>          SortedParameters;                                  // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct Niagara.NDIDataChannelCompiledData
struct FNDIDataChannelCompiledData
{
public:
	TArray<struct FNDIDataChannelFunctionInfo>   FunctionInfo;                                      // 0x0(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
	TMap<struct FNiagaraCompileHash, struct FNDIDataChannel_GPUScriptParameterAccessInfo> GPUScriptParameterInfos;                           // 0x10(0x50)(Protected, NativeAccessSpecifierProtected)
	uint32                                       TotalParams;                                       // 0x60(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bUsedByCPU;                                        // 0x64(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	bool                                         bUsedByGPU;                                        // 0x65(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, Protected, HasGetValueTypeHash, NativeAccessSpecifierProtected)
	uint8                                        Pad_1FA6[0x2];                                     // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Niagara.NiagaraTypeLayoutInfo
struct FNiagaraTypeLayoutInfo
{
public:
	uint16                                       NumFloatComponents;                                // 0x0(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint16                                       NumInt32Components;                                // 0x2(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint16                                       NumHalfComponents;                                 // 0x4(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1FA7[0x2];                                     // Fixing Size After Last Property 
	TArray<uint32>                               ComponentsOffsets;                                 // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Niagara.NiagaraVariableLayoutInfo
struct FNiagaraVariableLayoutInfo
{
public:
	uint16                                       FloatComponentStart;                               // 0x0(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint16                                       Int32ComponentStart;                               // 0x2(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint16                                       HalfComponentStart;                                // 0x4(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1FA8[0x2];                                     // Fixing Size After Last Property 
	struct FNiagaraTypeLayoutInfo                LayoutInfo;                                        // 0x8(0x18)(NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Niagara.NiagaraDataSetCompiledData
struct FNiagaraDataSetCompiledData
{
public:
	TArray<struct FNiagaraVariableBase>          Variables;                                         // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraVariableLayoutInfo>    VariableLayouts;                                   // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FNiagaraDataSetID                     ID;                                                // 0x20(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       TotalFloatComponents;                              // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       TotalInt32Components;                              // 0x2C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       TotalHalfComponents;                               // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRequiresPersistentIDs : 1;                        // Mask: 0x1, PropSize: 0x10x34(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_15D : 7;                                    // Fixing Bit-Field Size 
	uint8                                        Pad_1FA9[0x3];                                     // Fixing Size After Last Property 
	enum class ENiagaraSimTarget                 SimTarget;                                         // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FAA[0x7];                                     // Fixing Size Of Struct
};

// 0x40 (0xA8 - 0x68)
// ScriptStruct Niagara.NDIDataChannelWriteCompiledData
struct FNDIDataChannelWriteCompiledData : public FNDIDataChannelCompiledData
{
public:
	struct FNiagaraDataSetCompiledData           DataLayout;                                        // 0x68(0x40)(NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Niagara.NiagaraMessageStore
struct FNiagaraMessageStore
{
public:
	uint8                                        Pad_1FAB[0x1];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Niagara.NiagaraParameterBinding
struct FNiagaraParameterBinding
{
public:
	struct FNiagaraVariableBase                  ResolvedParameter;                                 // 0x0(0x8)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x18 - 0x8)
// ScriptStruct Niagara.NiagaraParameterBindingWithValue
struct FNiagaraParameterBindingWithValue : public FNiagaraParameterBinding
{
public:
	TArray<uint8>                                DefaultValue;                                      // 0x8(0x10)(ZeroConstructor, Protected, NativeAccessSpecifierProtected)
};

// 0xC (0xC - 0x0)
// ScriptStruct Niagara.NiagaraScalabilityState
struct FNiagaraScalabilityState
{
public:
	float                                        Significance;                                      // 0x0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        LastVisibleTime;                                   // 0x4(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FAC[0x2];                                     // Fixing Size After Last Property 
	uint8                                        bNewlyRegistered : 1;                              // Mask: 0x1, PropSize: 0x10xA(0x1)(Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bNewlyRegisteredDirty : 1;                         // Mask: 0x2, PropSize: 0x10xA(0x1)(Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCulled : 1;                                       // Mask: 0x4, PropSize: 0x10xA(0x1)(Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bPreviousCulled : 1;                               // Mask: 0x8, PropSize: 0x10xA(0x1)(Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCulledByDistance : 1;                             // Mask: 0x10, PropSize: 0x10xA(0x1)(Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCulledByInstanceCount : 1;                        // Mask: 0x20, PropSize: 0x10xA(0x1)(Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCulledByVisibility : 1;                           // Mask: 0x40, PropSize: 0x10xA(0x1)(Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCulledByGlobalBudget : 1;                         // Mask: 0x80, PropSize: 0x10xA(0x1)(Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FAD[0x1];                                     // Fixing Size Of Struct
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Niagara.NiagaraStackSection
struct FNiagaraStackSection
{
public:
	class FName                                  SectionIdentifier;                                 // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FAE[0x4];                                     // Fixing Size After Last Property 
	class FText                                  SectionDisplayName;                                // 0x8(0x18)(Edit, NativeAccessSpecifierPublic)
	TArray<class FText>                          Categories;                                        // 0x20(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	class FText                                  ToolTip;                                           // 0x30(0x18)(NativeAccessSpecifierPublic)
	bool                                         bEnabled;                                          // 0x48(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FAF[0x7];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Niagara.NiagaraDynamicMeshSection
struct FNiagaraDynamicMeshSection
{
public:
	int32                                        NumTriangles;                                      // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaterialIndex;                                     // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Niagara.NiagaraDynamicMeshMaterial
struct FNiagaraDynamicMeshMaterial
{
public:
	class UMaterialInterface*                    Material;                                          // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraUserParameterBinding          MaterialUserParamBinding;                          // 0x8(0x18)(Edit, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.NDIStaticMeshSectionFilter
struct FNDIStaticMeshSectionFilter
{
public:
	TArray<int32>                                AllowedMaterialSlots;                              // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Niagara.NiagaraUObjectPropertyReaderRemap
struct FNiagaraUObjectPropertyReaderRemap
{
public:
	class FName                                  GraphName;                                         // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  RemapName;                                         // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x0 (0x20 - 0x20)
// ScriptStruct Niagara.MovieSceneNiagaraSystemTrackTemplate
struct FMovieSceneNiagaraSystemTrackTemplate : public FMovieSceneEvalTemplate
{
public:
};

// 0x18 (0x28 - 0x10)
// ScriptStruct Niagara.MovieSceneNiagaraSystemTrackImplementation
struct FMovieSceneNiagaraSystemTrackImplementation : public FMovieSceneTrackImplementation
{
public:
	struct FFrameNumber                          SpawnSectionStartFrame;                            // 0x10(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	struct FFrameNumber                          SpawnSectionEndFrame;                              // 0x14(0x4)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ENiagaraSystemSpawnSectionStartBehavior SpawnSectionStartBehavior;                         // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ENiagaraSystemSpawnSectionEvaluateBehavior SpawnSectionEvaluateBehavior;                      // 0x1C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ENiagaraSystemSpawnSectionEndBehavior SpawnSectionEndBehavior;                           // 0x20(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	enum class ENiagaraAgeUpdateMode             AgeUpdateMode;                                     // 0x24(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bAllowScalability;                                 // 0x25(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1FB0[0x2];                                     // Fixing Size Of Struct
};

// 0x18 (0x38 - 0x20)
// ScriptStruct Niagara.MovieSceneNiagaraParameterSectionTemplate
struct FMovieSceneNiagaraParameterSectionTemplate : public FMovieSceneEvalTemplate
{
public:
	struct FNiagaraVariable                      Parameter;                                         // 0x20(0x18)(HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x100 (0x138 - 0x38)
// ScriptStruct Niagara.MovieSceneNiagaraBoolParameterSectionTemplate
struct FMovieSceneNiagaraBoolParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
public:
	struct FMovieSceneBoolChannel                BoolChannel;                                       // 0x38(0x100)(NativeAccessSpecifierPrivate)
};

// 0x440 (0x478 - 0x38)
// ScriptStruct Niagara.MovieSceneNiagaraColorParameterSectionTemplate
struct FMovieSceneNiagaraColorParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
public:
	struct FMovieSceneFloatChannel               RedChannel;                                        // 0x38(0x110)(NativeAccessSpecifierPrivate)
	struct FMovieSceneFloatChannel               GreenChannel;                                      // 0x148(0x110)(NativeAccessSpecifierPrivate)
	struct FMovieSceneFloatChannel               BlueChannel;                                       // 0x258(0x110)(NativeAccessSpecifierPrivate)
	struct FMovieSceneFloatChannel               AlphaChannel;                                      // 0x368(0x110)(NativeAccessSpecifierPrivate)
};

// 0x110 (0x148 - 0x38)
// ScriptStruct Niagara.MovieSceneNiagaraFloatParameterSectionTemplate
struct FMovieSceneNiagaraFloatParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
public:
	struct FMovieSceneFloatChannel               FloatChannel;                                      // 0x38(0x110)(NativeAccessSpecifierPrivate)
};

// 0x100 (0x138 - 0x38)
// ScriptStruct Niagara.MovieSceneNiagaraIntegerParameterSectionTemplate
struct FMovieSceneNiagaraIntegerParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
public:
	struct FMovieSceneIntegerChannel             IntegerChannel;                                    // 0x38(0x100)(NativeAccessSpecifierPrivate)
};

// 0x448 (0x480 - 0x38)
// ScriptStruct Niagara.MovieSceneNiagaraVectorParameterSectionTemplate
struct FMovieSceneNiagaraVectorParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate
{
public:
	struct FMovieSceneFloatChannel               VectorChannels[0x4];                               // 0x38(0x440)(NativeAccessSpecifierPrivate)
	int32                                        ChannelsUsed;                                      // 0x478(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1FB1[0x4];                                     // Fixing Size Of Struct
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct Niagara.EmitterCompiledScriptPair
struct FEmitterCompiledScriptPair
{
public:
	uint8                                        Pad_1FB2[0xA0];                                    // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Niagara.NiagaraBakerTextureSource
struct FNiagaraBakerTextureSource
{
public:
	class FString                                DisplayString;                                     // 0x0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SourceName;                                        // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FB3[0x4];                                     // Fixing Size Of Struct
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Niagara.NiagaraBakerCameraSettings
struct FNiagaraBakerCameraSettings
{
public:
	enum class ENiagaraBakerViewMode             ViewMode;                                          // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FB4[0x4];                                     // Fixing Size After Last Property 
	struct FVector                               ViewportLocation;                                  // 0x8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              ViewportRotation;                                  // 0x20(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	float                                        OrbitDistance;                                     // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        FOV;                                               // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        OrthoWidth;                                        // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseAspectRatio;                                   // 0x44(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FB5[0x3];                                     // Fixing Size After Last Property 
	float                                        AspectRatio;                                       // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FB6[0x4];                                     // Fixing Size Of Struct
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Niagara.NiagaraBakerTextureSettings
struct FNiagaraBakerTextureSettings
{
public:
	class FName                                  OutputName;                                        // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FB7[0x4];                                     // Fixing Size After Last Property 
	struct FNiagaraBakerTextureSource            SourceBinding;                                     // 0x8(0x18)(Edit, NativeAccessSpecifierPublic)
	uint8                                        bUseFrameSize : 1;                                 // Mask: 0x1, PropSize: 0x10x20(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_15E : 7;                                    // Fixing Bit-Field Size 
	uint8                                        Pad_1FB8[0x3];                                     // Fixing Size After Last Property 
	struct FIntPoint                             FrameSize;                                         // 0x24(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FIntPoint                             TextureSize;                                       // 0x2C(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FB9[0x4];                                     // Fixing Size After Last Property 
	class UTexture2D*                            GeneratedTexture;                                  // 0x38(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.NCPoolElement
struct FNCPoolElement
{
public:
	class UNiagaraComponent*                     Component;                                         // 0x0(0x8)(ExportObject, ZeroConstructor, Transient, InstancedReference, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FBA[0x8];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.NCPool
struct FNCPool
{
public:
	TArray<struct FNCPoolElement>                FreeElements;                                      // 0x0(0x10)(ZeroConstructor, Transient, ContainsInstancedReference, NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct Niagara.NiagaraComponentPropertyBinding
struct FNiagaraComponentPropertyBinding
{
public:
	struct FNiagaraVariableAttributeBinding      AttributeBinding;                                  // 0x0(0x28)(NativeAccessSpecifierPublic)
	class FName                                  PropertyName;                                      // 0x28(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FBB[0x4];                                     // Fixing Size After Last Property 
	struct FNiagaraTypeDefinition                PropertyType;                                      // 0x30(0x10)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  MetadataSetterName;                                // 0x40(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FBC[0x4];                                     // Fixing Size After Last Property 
	TMap<class FString, class FString>           PropertySetterParameterDefaults;                   // 0x48(0x50)(NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Niagara.NiagaraCulledComponentInfo
struct FNiagaraCulledComponentInfo
{
public:
	uint8                                        Pad_1FBD[0x8];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Niagara.NiagaraDataInterfaceEmitterBinding
struct FNiagaraDataInterfaceEmitterBinding
{
public:
	enum class ENiagaraDataInterfaceEmitterBindingMode BindingMode;                                       // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  EmitterName;                                       // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Niagara.BasicParticleData
struct FBasicParticleData
{
public:
	struct FVector                               Position;                                          // 0x0(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Size;                                              // 0x18(0x4)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FBE[0x4];                                     // Fixing Size After Last Property 
	struct FVector                               Velocity;                                          // 0x20(0x18)(BlueprintVisible, BlueprintReadOnly, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.MeshTriCoordinate
struct FMeshTriCoordinate
{
public:
	int32                                        Tri;                                               // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector3f                             BaryCoord;                                         // 0x4(0xC)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Niagara.NiagaraDataInterfaceSplineLUT
struct FNiagaraDataInterfaceSplineLUT
{
public:
	TArray<struct FVector>                       Positions;                                         // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVector>                       Scales;                                            // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FQuat>                         Rotations;                                         // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	float                                        SplineLength;                                      // 0x30(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SplineDistanceStep;                                // 0x34(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InvSplineDistanceStep;                             // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxIndex;                                          // 0x3C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Niagara.NiagaraOutlinerTimingData
struct FNiagaraOutlinerTimingData
{
public:
	float                                        GameThread;                                        // 0x0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        RenderThread;                                      // 0x4(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Niagara.NiagaraOutlinerEmitterInstanceData
struct FNiagaraOutlinerEmitterInstanceData
{
public:
	class FString                                EmitterName;                                       // 0x0(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraSimTarget                 SimTarget;                                         // 0x10(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FBF[0x3];                                     // Fixing Size After Last Property 
	enum class ENiagaraExecutionState            ExecState;                                         // 0x14(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumParticles;                                      // 0x18(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRequiresPersistentIDs : 1;                        // Mask: 0x1, PropSize: 0x10x1C(0x1)(Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FC0[0x3];                                     // Fixing Size Of Struct
};

// 0x68 (0x68 - 0x0)
// ScriptStruct Niagara.NiagaraOutlinerSystemInstanceData
struct FNiagaraOutlinerSystemInstanceData
{
public:
	class FString                                ComponentName;                                     // 0x0(0x10)(Edit, ZeroConstructor, EditConst, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector3f                             LWCTile;                                           // 0x10(0xC)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FC1[0x4];                                     // Fixing Size After Last Property 
	TArray<struct FNiagaraOutlinerEmitterInstanceData> Emitters;                                          // 0x20(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	enum class ENiagaraExecutionState            ActualExecutionState;                              // 0x30(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraExecutionState            RequestedExecutionState;                           // 0x34(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraScalabilityState              ScalabilityState;                                  // 0x38(0xC)(Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        bPendingKill : 1;                                  // Mask: 0x1, PropSize: 0x10x44(0x1)(Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUsingCullProxy : 1;                               // Mask: 0x2, PropSize: 0x10x44(0x1)(Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_15F : 6;                                    // Fixing Bit-Field Size 
	uint8                                        Pad_1FC3[0x3];                                     // Fixing Size After Last Property 
	enum class ENCPoolMethod                     PoolMethod;                                        // 0x48(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FC4[0x3];                                     // Fixing Size After Last Property 
	struct FNiagaraOutlinerTimingData            AverageTime;                                       // 0x4C(0x8)(Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FNiagaraOutlinerTimingData            MaxTime;                                           // 0x54(0x8)(Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	enum class ETickingGroup                     TickGroup;                                         // 0x5C(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraGpuComputeTickStage       GpuTickStage;                                      // 0x5D(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FC5[0x2];                                     // Fixing Size After Last Property 
	uint8                                        bIsSolo : 1;                                       // Mask: 0x1, PropSize: 0x10x60(0x1)(Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRequiresDistanceFieldData : 1;                    // Mask: 0x2, PropSize: 0x10x60(0x1)(Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRequiresDepthBuffer : 1;                          // Mask: 0x4, PropSize: 0x10x60(0x1)(Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRequiresEarlyViewData : 1;                        // Mask: 0x8, PropSize: 0x10x60(0x1)(Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRequiresViewUniformBuffer : 1;                    // Mask: 0x10, PropSize: 0x10x60(0x1)(Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRequiresRayTracingScene : 1;                      // Mask: 0x20, PropSize: 0x10x60(0x1)(Edit, EditConst, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FC6[0x7];                                     // Fixing Size Of Struct
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Niagara.NiagaraOutlinerSystemData
struct FNiagaraOutlinerSystemData
{
public:
	TArray<struct FNiagaraOutlinerSystemInstanceData> SystemInstances;                                   // 0x0(0x10)(Edit, ZeroConstructor, EditConst, NativeAccessSpecifierPublic)
	struct FNiagaraOutlinerTimingData            AveragePerFrameTime;                               // 0x10(0x8)(Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FNiagaraOutlinerTimingData            MaxPerFrameTime;                                   // 0x18(0x8)(Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FNiagaraOutlinerTimingData            AveragePerInstanceTime;                            // 0x20(0x8)(Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FNiagaraOutlinerTimingData            MaxPerInstanceTime;                                // 0x28(0x8)(Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x68 (0x68 - 0x0)
// ScriptStruct Niagara.NiagaraOutlinerWorldData
struct FNiagaraOutlinerWorldData
{
public:
	TMap<class FString, struct FNiagaraOutlinerSystemData> Systems;                                           // 0x0(0x50)(Edit, EditConst, NativeAccessSpecifierPublic)
	bool                                         bHasBegunPlay;                                     // 0x50(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        WorldType;                                         // 0x51(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        NetMode;                                           // 0x52(0x1)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FC7[0x1];                                     // Fixing Size After Last Property 
	struct FNiagaraOutlinerTimingData            AveragePerFrameTime;                               // 0x54(0x8)(Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	struct FNiagaraOutlinerTimingData            MaxPerFrameTime;                                   // 0x5C(0x8)(Edit, EditConst, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FC8[0x4];                                     // Fixing Size Of Struct
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Niagara.NiagaraOutlinerData
struct FNiagaraOutlinerData
{
public:
	TMap<class FString, struct FNiagaraOutlinerWorldData> WorldData;                                         // 0x0(0x50)(Edit, EditConst, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Niagara.NiagaraDebuggerRequestConnection
struct FNiagaraDebuggerRequestConnection
{
public:
	struct FGuid                                 SessionId;                                         // 0x0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 InstanceID;                                        // 0x10(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Niagara.NiagaraDebuggerAcceptConnection
struct FNiagaraDebuggerAcceptConnection
{
public:
	struct FGuid                                 SessionId;                                         // 0x0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 InstanceID;                                        // 0x10(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Niagara.NiagaraDebuggerConnectionClosed
struct FNiagaraDebuggerConnectionClosed
{
public:
	struct FGuid                                 SessionId;                                         // 0x0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 InstanceID;                                        // 0x10(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Niagara.NiagaraDebuggerExecuteConsoleCommand
struct FNiagaraDebuggerExecuteConsoleCommand
{
public:
	class FString                                Command;                                           // 0x0(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRequiresWorld;                                    // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FCC[0x7];                                     // Fixing Size Of Struct
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Niagara.NiagaraDebuggerOutlinerUpdate
struct FNiagaraDebuggerOutlinerUpdate
{
public:
	struct FNiagaraOutlinerData                  OutlinerData;                                      // 0x0(0x50)(Edit, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Niagara.NiagaraDebugHudTextOptions
struct FNiagaraDebugHudTextOptions
{
public:
	enum class ENiagaraDebugHudFont              Font;                                              // 0x0(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraDebugHudHAlign            HorizontalAlignment;                               // 0x4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraDebugHudVAlign            VerticalAlignment;                                 // 0x5(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FCF[0x2];                                     // Fixing Size After Last Property 
	struct FVector2D                             ScreenOffset;                                      // 0x8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Niagara.NiagaraDebugHUDVariable
struct FNiagaraDebugHUDVariable
{
public:
	bool                                         bEnabled;                                          // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FD0[0x7];                                     // Fixing Size After Last Property 
	class FString                                Name;                                              // 0x8(0x10)(Edit, ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x248 (0x248 - 0x0)
// ScriptStruct Niagara.NiagaraDebugHUDSettingsData
struct FNiagaraDebugHUDSettingsData
{
public:
	bool                                         bHudEnabled;                                       // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHudRenderingEnabled;                              // 0x1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bValidateSystemSimulationDataBuffers;              // 0x2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bValidateParticleDataBuffers;                      // 0x3(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bValidationLogErrors;                              // 0x4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FD1[0x3];                                     // Fixing Size After Last Property 
	int32                                        ValidationAttributeDisplayTruncate;                // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverviewEnabled;                                  // 0xC(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIncludeCascade;                                   // 0xD(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FD3[0x2];                                     // Fixing Size After Last Property 
	enum class ENiagaraDebugHUDOverviewMode      OverviewMode;                                      // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraDebugHUDDOverviewSort     OverviewSortMode;                                  // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraDebugHudFont              OverviewFont;                                      // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FD4[0x4];                                     // Fixing Size After Last Property 
	struct FVector2D                             OverviewLocation;                                  // 0x20(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowRegisteredComponents;                         // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverviewShowFilteredSystemOnly;                   // 0x31(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FD6[0x6];                                     // Fixing Size After Last Property 
	class FString                                ActorFilter;                                       // 0x38(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bComponentFilterEnabled;                           // 0x48(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FD8[0x7];                                     // Fixing Size After Last Property 
	class FString                                ComponentFilter;                                   // 0x50(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSystemFilterEnabled;                              // 0x60(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FD9[0x7];                                     // Fixing Size After Last Property 
	class FString                                SystemFilter;                                      // 0x68(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEmitterFilterEnabled;                             // 0x78(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FDA[0x7];                                     // Fixing Size After Last Property 
	class FString                                EmitterFilter;                                     // 0x80(0x10)(Edit, ZeroConstructor, Config, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bActorFilterEnabled;                               // 0x90(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FDC[0x3];                                     // Fixing Size After Last Property 
	enum class ENiagaraDebugHudVerbosity         SystemDebugVerbosity;                              // 0x94(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraDebugHudVerbosity         SystemEmitterVerbosity;                            // 0x98(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraDebugHudVerbosity         DataInterfaceVerbosity;                            // 0x9C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSystemShowBounds;                                 // 0xA0(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FDD[0x3];                                     // Fixing Size After Last Property 
	float                                        SystemBoundsSolidBoxAlpha;                         // 0xA4(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bSystemShowActiveOnlyInWorld;                      // 0xA8(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowSystemVariables;                              // 0xA9(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FDE[0x6];                                     // Fixing Size After Last Property 
	TArray<struct FNiagaraDebugHUDVariable>      SystemVariables;                                   // 0xB0(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	struct FNiagaraDebugHudTextOptions           SystemTextOptions;                                 // 0xC0(0x18)(Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bShowParticleVariables;                            // 0xD8(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableGpuParticleReadback;                        // 0xD9(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowParticleIndex;                                // 0xDA(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FE1[0x5];                                     // Fixing Size After Last Property 
	TArray<struct FNiagaraDebugHUDVariable>      ParticlesVariables;                                // 0xE0(0x10)(Edit, ZeroConstructor, Config, NativeAccessSpecifierPublic)
	struct FNiagaraDebugHudTextOptions           ParticleTextOptions;                               // 0xF0(0x18)(Edit, Config, NoDestructor, NativeAccessSpecifierPublic)
	bool                                         bShowParticlesVariablesWithSystem;                 // 0x108(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowParticleVariablesVertical;                    // 0x109(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseMaxParticlesToDisplay;                         // 0x10A(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseParticleDisplayClip;                           // 0x10B(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FE2[0x4];                                     // Fixing Size After Last Property 
	struct FVector2D                             ParticleDisplayClip;                               // 0x110(0x10)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseParticleDisplayCenterRadius;                   // 0x120(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FE4[0x3];                                     // Fixing Size After Last Property 
	float                                        ParticleDisplayCenterRadius;                       // 0x124(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxParticlesToDisplay;                             // 0x128(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PerfReportFrames;                                  // 0x12C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraDebugHUDPerfSampleMode    PerfSampleMode;                                    // 0x130(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraDebugHUDPerfGraphMode     PerfGraphMode;                                     // 0x134(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PerfHistoryFrames;                                 // 0x138(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PerfGraphTimeRange;                                // 0x13C(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             PerfGraphSize;                                     // 0x140(0x10)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          PerfGraphAxisColor;                                // 0x150(0x10)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bEnableSmoothing;                                  // 0x160(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FE7[0x3];                                     // Fixing Size After Last Property 
	int32                                        SmoothingWidth;                                    // 0x164(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          DefaultBackgroundColor;                            // 0x168(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          OverviewHeadingColor;                              // 0x178(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          OverviewDetailColor;                               // 0x188(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          OverviewDetailHighlightColor;                      // 0x198(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          InWorldErrorTextColor;                             // 0x1A8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          InWorldTextColor;                                  // 0x1B8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          MessageInfoTextColor;                              // 0x1C8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          MessageWarningTextColor;                           // 0x1D8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          MessageErrorTextColor;                             // 0x1E8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SystemColorTableOpacity;                           // 0x1F8(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       SystemColorSeed;                                   // 0x1FC(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SystemColorHSVMin;                                 // 0x200(0x18)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               SystemColorHSVMax;                                 // 0x218(0x18)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraDebugPlaybackMode         PlaybackMode;                                      // 0x230(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bPlaybackRateEnabled;                              // 0x231(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FE8[0x2];                                     // Fixing Size After Last Property 
	float                                        PlaybackRate;                                      // 0x234(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLoopTimeEnabled;                                  // 0x238(0x1)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FEA[0x3];                                     // Fixing Size After Last Property 
	float                                        LoopTime;                                          // 0x23C(0x4)(ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bShowGlobalBudgetInfo;                             // 0x240(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FEC[0x7];                                     // Fixing Size Of Struct
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Niagara.NiagaraRequestSimpleClientInfoMessage
struct FNiagaraRequestSimpleClientInfoMessage
{
public:
	uint8                                        Pad_1FED[0x1];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.NiagaraOutlinerCaptureSettings
struct FNiagaraOutlinerCaptureSettings
{
public:
	bool                                         bTriggerCapture;                                   // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FF0[0x3];                                     // Fixing Size After Last Property 
	uint32                                       CaptureDelayFrames;                                // 0x4(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bGatherPerfData;                                   // 0x8(0x1)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FF1[0x3];                                     // Fixing Size After Last Property 
	uint32                                       SimCacheCaptureFrames;                             // 0xC(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Niagara.NiagaraSimpleClientInfo
struct FNiagaraSimpleClientInfo
{
public:
	TArray<class FString>                        Systems;                                           // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        Actors;                                            // 0x10(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        Components;                                        // 0x20(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FString>                        Emitters;                                          // 0x30(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct Niagara.NiagaraSystemSimCacheCaptureRequest
struct FNiagaraSystemSimCacheCaptureRequest
{
public:
	class FName                                  ComponentName;                                     // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       CaptureDelayFrames;                                // 0x4(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       CaptureFrames;                                     // 0x8(0x4)(Edit, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Niagara.NiagaraSystemSimCacheCaptureReply
struct FNiagaraSystemSimCacheCaptureReply
{
public:
	class FName                                  ComponentName;                                     // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FF2[0x4];                                     // Fixing Size After Last Property 
	TArray<uint8>                                SimCacheData;                                      // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Niagara.NiagaraGraphViewSettings
struct FNiagaraGraphViewSettings
{
public:
	struct FVector2D                             Location;                                          // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	float                                        Zoom;                                              // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsValid;                                          // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_1FF3[0x3];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.NiagaraLinearRamp
struct FNiagaraLinearRamp
{
public:
	float                                        StartX;                                            // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        StartY;                                            // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EndX;                                              // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        EndY;                                              // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Niagara.NiagaraGlobalBudgetScaling
struct FNiagaraGlobalBudgetScaling
{
public:
	uint8                                        bCullByGlobalBudget : 1;                           // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bScaleMaxDistanceByGlobalBudgetUse : 1;            // Mask: 0x2, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bScaleMaxInstanceCountByGlobalBudgetUse : 1;       // Mask: 0x4, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bScaleSystemInstanceCountByGlobalBudgetUse : 1;    // Mask: 0x8, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_160 : 4;                                    // Fixing Bit-Field Size 
	uint8                                        Pad_1FF4[0x3];                                     // Fixing Size After Last Property 
	float                                        MaxGlobalBudgetUsage;                              // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraLinearRamp                    MaxDistanceScaleByGlobalBudgetUse;                 // 0x8(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FNiagaraLinearRamp                    MaxInstanceCountScaleByGlobalBudgetUse;            // 0x18(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FNiagaraLinearRamp                    MaxSystemInstanceCountScaleByGlobalBudgetUse;      // 0x28(0x10)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct Niagara.NiagaraSystemVisibilityCullingSettings
struct FNiagaraSystemVisibilityCullingSettings
{
public:
	uint8                                        bCullWhenNotRendered : 1;                          // Mask: 0x1, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCullByViewFrustum : 1;                            // Mask: 0x2, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bAllowPreCullingByViewFrustum : 1;                 // Mask: 0x4, PropSize: 0x10x0(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_161 : 5;                                    // Fixing Bit-Field Size 
	uint8                                        Pad_1FF5[0x3];                                     // Fixing Size After Last Property 
	float                                        MaxTimeOutsideViewFrustum;                         // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxTimeWithoutRender;                              // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct Niagara.NiagaraDeviceProfileStateEntry
struct FNiagaraDeviceProfileStateEntry
{
public:
	class FName                                  ProfileName;                                       // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       QualityLevelMask;                                  // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       SetQualityLevelMask;                               // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Niagara.NiagaraPlatformSetCVarCondition
struct FNiagaraPlatformSetCVarCondition
{
public:
	class FName                                  CVarName;                                          // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraCVarConditionResponse     PassResponse;                                      // 0x4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraCVarConditionResponse     FailResponse;                                      // 0x5(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         Value;                                             // 0x6(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FF6[0x1];                                     // Fixing Size After Last Property 
	int32                                        MinInt;                                            // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxInt;                                            // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MinFloat;                                          // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxFloat;                                          // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseMinInt : 1;                                    // Mask: 0x1, PropSize: 0x10x18(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseMaxInt : 1;                                    // Mask: 0x2, PropSize: 0x10x18(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseMinFloat : 1;                                  // Mask: 0x4, PropSize: 0x10x18(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUseMaxFloat : 1;                                  // Mask: 0x8, PropSize: 0x10x18(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FF7[0x17];                                    // Fixing Size Of Struct
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Niagara.NiagaraPlatformSet
struct FNiagaraPlatformSet
{
public:
	TArray<struct FNiagaraDeviceProfileStateEntry> DeviceProfileStates;                               // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraPlatformSetCVarCondition> CVarConditions;                                    // 0x10(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	int32                                        QualityLevelMask;                                  // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FF8[0xC];                                     // Fixing Size Of Struct
};

// 0x98 (0x98 - 0x0)
// ScriptStruct Niagara.NiagaraSystemScalabilitySettings
struct FNiagaraSystemScalabilitySettings
{
public:
	struct FNiagaraPlatformSet                   Platforms;                                         // 0x0(0x30)(Edit, NativeAccessSpecifierPublic)
	uint8                                        bCullByDistance : 1;                               // Mask: 0x1, PropSize: 0x10x30(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCullMaxInstanceCount : 1;                         // Mask: 0x2, PropSize: 0x10x30(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCullPerSystemMaxInstanceCount : 1;                // Mask: 0x4, PropSize: 0x10x30(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_162 : 5;                                    // Fixing Bit-Field Size 
	uint8                                        Pad_1FF9[0x3];                                     // Fixing Size After Last Property 
	float                                        MaxDistance;                                       // 0x34(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bCullByMaxTimeWithoutRender : 1;                   // Mask: 0x1, PropSize: 0x10x38(0x1)(Deprecated, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_163 : 7;                                    // Fixing Bit-Field Size 
	uint8                                        Pad_1FFC[0x3];                                     // Fixing Size After Last Property 
	int32                                        MaxInstances;                                      // 0x3C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxSystemInstances;                                // 0x40(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        MaxTimeWithoutRender;                              // 0x44(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraCullProxyMode             CullProxyMode;                                     // 0x48(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MaxSystemProxies;                                  // 0x4C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraSystemVisibilityCullingSettings VisibilityCulling;                                 // 0x50(0xC)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FNiagaraGlobalBudgetScaling           BudgetScaling;                                     // 0x5C(0x38)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FFD[0x4];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.NiagaraSystemScalabilitySettingsArray
struct FNiagaraSystemScalabilitySettingsArray
{
public:
	TArray<struct FNiagaraSystemScalabilitySettings> Settings;                                          // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0xA0 - 0x98)
// ScriptStruct Niagara.NiagaraSystemScalabilityOverride
struct FNiagaraSystemScalabilityOverride : public FNiagaraSystemScalabilitySettings
{
public:
	uint8                                        bOverrideDistanceSettings : 1;                     // Mask: 0x1, PropSize: 0x10x98(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideInstanceCountSettings : 1;                // Mask: 0x2, PropSize: 0x10x98(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverridePerSystemInstanceCountSettings : 1;       // Mask: 0x4, PropSize: 0x10x98(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideVisibilitySettings : 1;                   // Mask: 0x8, PropSize: 0x10x98(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideGlobalBudgetScalingSettings : 1;          // Mask: 0x10, PropSize: 0x10x98(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bOverrideCullProxySettings : 1;                    // Mask: 0x20, PropSize: 0x10x98(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_1FFE[0x7];                                     // Fixing Size Of Struct
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Niagara.NiagaraEmitterScalabilitySettings
struct FNiagaraEmitterScalabilitySettings
{
public:
	struct FNiagaraPlatformSet                   Platforms;                                         // 0x0(0x30)(Edit, NativeAccessSpecifierPublic)
	uint8                                        bScaleSpawnCount : 1;                              // Mask: 0x1, PropSize: 0x10x30(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_164 : 7;                                    // Fixing Bit-Field Size 
	uint8                                        Pad_2000[0x3];                                     // Fixing Size After Last Property 
	float                                        SpawnCountScale;                                   // 0x34(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.NiagaraEmitterScalabilitySettingsArray
struct FNiagaraEmitterScalabilitySettingsArray
{
public:
	TArray<struct FNiagaraEmitterScalabilitySettings> Settings;                                          // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x40 - 0x38)
// ScriptStruct Niagara.NiagaraEmitterScalabilityOverride
struct FNiagaraEmitterScalabilityOverride : public FNiagaraEmitterScalabilitySettings
{
public:
	uint8                                        bOverrideSpawnCountScale : 1;                      // Mask: 0x1, PropSize: 0x10x38(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2001[0x7];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.NiagaraEmitterScalabilityOverrides
struct FNiagaraEmitterScalabilityOverrides
{
public:
	TArray<struct FNiagaraEmitterScalabilityOverride> Overrides;                                         // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct Niagara.NiagaraEventReceiverProperties
struct FNiagaraEventReceiverProperties
{
public:
	class FName                                  Name;                                              // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SourceEventGenerator;                              // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SourceEmitter;                                     // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x48 (0x48 - 0x0)
// ScriptStruct Niagara.NiagaraEventGeneratorProperties
struct FNiagaraEventGeneratorProperties
{
public:
	int32                                        MaxEventsPerFrame;                                 // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  ID;                                                // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraDataSetCompiledData           DataSetCompiledData;                               // 0x8(0x40)(NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Niagara.NiagaraEmitterScriptProperties
struct FNiagaraEmitterScriptProperties
{
public:
	class UNiagaraScript*                        Script;                                            // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraEventReceiverProperties> EventReceivers;                                    // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraEventGeneratorProperties> EventGenerators;                                   // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x30 (0x58 - 0x28)
// ScriptStruct Niagara.NiagaraEventScriptProperties
struct FNiagaraEventScriptProperties : public FNiagaraEmitterScriptProperties
{
public:
	enum class EScriptExecutionMode              ExecutionMode;                                     // 0x28(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2002[0x3];                                     // Fixing Size After Last Property 
	uint32                                       SpawnNumber;                                       // 0x2C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       MaxEventsPerFrame;                                 // 0x30(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 SourceEmitterID;                                   // 0x34(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  SourceEventName;                                   // 0x44(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bRandomSpawnNumber;                                // 0x48(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2005[0x3];                                     // Fixing Size After Last Property 
	uint32                                       MinSpawnNumber;                                    // 0x4C(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         UpdateAttributeInitialValues;                      // 0x50(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2006[0x7];                                     // Fixing Size Of Struct
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Niagara.NiagaraDetailsLevelScaleOverrides
struct FNiagaraDetailsLevelScaleOverrides
{
public:
	float                                        Low;                                               // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Medium;                                            // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        High;                                              // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Epic;                                              // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Cine;                                              // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1C (0x1C - 0x0)
// ScriptStruct Niagara.NiagaraAssetVersion
struct FNiagaraAssetVersion
{
public:
	int32                                        MajorVersion;                                      // 0x0(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        MinorVersion;                                      // 0x4(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 VersionGuid;                                       // 0x8(0x10)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bIsVisibleInVersionSelector;                       // 0x18(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2008[0x3];                                     // Fixing Size Of Struct
};

// 0x20 (0x28 - 0x8)
// ScriptStruct Niagara.NiagaraVariableWithOffset
struct FNiagaraVariableWithOffset : public FNiagaraVariableBase
{
public:
	int32                                        Offset;                                            // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2009[0x4];                                     // Fixing Size After Last Property 
	struct FNiagaraLwcStructConverter            StructConverter;                                   // 0x10(0x18)(NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Niagara.NiagaraPositionSource
struct FNiagaraPositionSource
{
public:
	class FName                                  Name;                                              // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_200C[0x4];                                     // Fixing Size After Last Property 
	struct FVector                               Value;                                             // 0x8(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x88 (0x88 - 0x0)
// ScriptStruct Niagara.NiagaraParameterStore
struct FNiagaraParameterStore
{
public:
	uint8                                        Pad_200E[0x8];                                     // Fixing Size After Last Property 
	TWeakObjectPtr<class UObject>                Owner;                                             // 0x8(0x8)(ZeroConstructor, Transient, IsPlainOldData, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<struct FNiagaraVariableWithOffset>    SortedParameterOffsets;                            // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<uint8>                                ParameterData;                                     // 0x20(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	TArray<class UNiagaraDataInterface*>         DataInterfaces;                                    // 0x30(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<class UObject*>                       UObjects;                                          // 0x40(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<struct FNiagaraPositionSource>        OriginalPositionData;                              // 0x50(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2012[0x28];                                    // Fixing Size Of Struct
};

// 0x340 (0x340 - 0x0)
// ScriptStruct Niagara.VersionedNiagaraEmitterData
struct FVersionedNiagaraEmitterData
{
public:
	struct FNiagaraAssetVersion                  Version;                                           // 0x0(0x1C)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDeprecated;                                       // 0x1C(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2013[0x3];                                     // Fixing Size After Last Property 
	class FText                                  DeprecationMessage;                                // 0x20(0x18)(NativeAccessSpecifierPublic)
	bool                                         bLocalSpace;                                       // 0x38(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDeterminism;                                      // 0x39(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2016[0x2];                                     // Fixing Size After Last Property 
	int32                                        RandomSeed;                                        // 0x3C(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bInterpolatedSpawning : 1;                         // Mask: 0x1, PropSize: 0x10x40(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_165 : 7;                                    // Fixing Bit-Field Size 
	uint8                                        Pad_2019[0x3];                                     // Fixing Size After Last Property 
	enum class ENiagaraSimTarget                 SimTarget;                                         // 0x44(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraEmitterCalculateBoundMode CalculateBoundsMode;                               // 0x45(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_201A[0x2];                                     // Fixing Size After Last Property 
	struct FBox                                  FixedBounds;                                       // 0x48(0x38)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        bRequiresPersistentIDs : 1;                        // Mask: 0x1, PropSize: 0x10x80(0x1)(Edit, BlueprintVisible, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_166 : 7;                                    // Fixing Bit-Field Size 
	uint8                                        Pad_201B[0x7];                                     // Fixing Size After Last Property 
	TArray<struct FNiagaraEventScriptProperties> EventHandlerScriptProps;                           // 0x88(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FNiagaraPlatformSet                   Platforms;                                         // 0x98(0x30)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraEmitterScalabilityOverrides   ScalabilityOverrides;                              // 0xC8(0x10)(Edit, NativeAccessSpecifierPublic)
	int32                                        MaxGPUParticlesSpawnPerFrame;                      // 0xD8(0x4)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class EParticleAllocationMode           AllocationMode;                                    // 0xDC(0x1)(Edit, BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_201D[0x3];                                     // Fixing Size After Last Property 
	int32                                        PreAllocationCount;                                // 0xE0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AdvancedDisplay, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_201E[0x4];                                     // Fixing Size After Last Property 
	struct FNiagaraEmitterScriptProperties       UpdateScriptProps;                                 // 0xE8(0x28)(NativeAccessSpecifierPublic)
	struct FNiagaraEmitterScriptProperties       SpawnScriptProps;                                  // 0x110(0x28)(NativeAccessSpecifierPublic)
	struct FNiagaraParameterStore                RendererBindings;                                  // 0x138(0x88)(NativeAccessSpecifierPublic)
	TArray<struct FNiagaraExternalUObjectInfo>   RendererBindingsExternalObjects;                   // 0x1C0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TMap<struct FNiagaraVariableBase, struct FNiagaraVariableBase> ResolvedDIBindings;                                // 0x1D0(0x50)(NativeAccessSpecifierPublic)
	TArray<class UNiagaraRendererProperties*>    RendererProperties;                                // 0x220(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	TArray<class UNiagaraSimulationStageBase*>   SimulationStages;                                  // 0x230(0x10)(ZeroConstructor, UObjectWrapper, NativeAccessSpecifierPrivate)
	class UNiagaraScript*                        GPUComputeScript;                                  // 0x240(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<class FName>                          SharedEventGeneratorIds;                           // 0x248(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	struct FNiagaraEmitterScalabilitySettings    CurrentScalabilitySettings;                        // 0x258(0x38)(Transient, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2022[0xB0];                                    // Fixing Size Of Struct
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Niagara.VersionedNiagaraEmitter
struct FVersionedNiagaraEmitter
{
public:
	class UNiagaraEmitter*                       Emitter;                                           // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 Version;                                           // 0x8(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Niagara.NiagaraEmitterHandle
struct FNiagaraEmitterHandle
{
public:
	struct FGuid                                 ID;                                                // 0x0(0x10)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class FName                                  IdName;                                            // 0x10(0x4)(Edit, ZeroConstructor, EditConst, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsEnabled;                                        // 0x14(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2024[0x3];                                     // Fixing Size After Last Property 
	class FName                                  Name;                                              // 0x18(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2025[0x4];                                     // Fixing Size After Last Property 
	struct FVersionedNiagaraEmitter              VersionedInstance;                                 // 0x20(0x18)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Niagara.NiagaraCollisionEventPayload
struct FNiagaraCollisionEventPayload
{
public:
	struct FVector                               CollisionPos;                                      // 0x0(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               CollisionNormal;                                   // 0x18(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector                               CollisionVelocity;                                 // 0x30(0x18)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        ParticleIndex;                                     // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        PhysicalMaterialIndex;                             // 0x4C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.NiagaraMeshMICOverride
struct FNiagaraMeshMICOverride
{
public:
	class UMaterialInterface*                    OriginalMaterial;                                  // 0x0(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UMaterialInstanceConstant*             ReplacementMaterial;                               // 0x8(0x8)(ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Niagara.NiagaraMeshMaterialOverride
struct FNiagaraMeshMaterialOverride
{
public:
	class UMaterialInterface*                    ExplicitMat;                                       // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraUserParameterBinding          UserParamBinding;                                  // 0x8(0x18)(Edit, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct Niagara.NiagaraMeshRendererMeshProperties
struct FNiagaraMeshRendererMeshProperties
{
public:
	class UStaticMesh*                           Mesh;                                              // 0x0(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraParameterBinding              MeshParameterBinding;                              // 0x8(0x8)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               Scale;                                             // 0x10(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FRotator                              Rotation;                                          // 0x28(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FVector                               PivotOffset;                                       // 0x40(0x18)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraMeshPivotOffsetSpace      PivotOffsetSpace;                                  // 0x58(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_202E[0x7];                                     // Fixing Size Of Struct
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Niagara.ParameterDefinitionsSubscription
struct FParameterDefinitionsSubscription
{
public:
	uint8                                        Pad_202F[0x1];                                     // Fixing Size Of Struct
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.NiagaraParameters
struct FNiagaraParameters
{
public:
	TArray<struct FNiagaraVariable>              Parameters;                                        // 0x0(0x10)(Edit, EditFixedSize, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.NiagaraBoundParameter
struct FNiagaraBoundParameter
{
public:
	struct FNiagaraVariableBase                  Parameter;                                         // 0x0(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SrcOffset;                                         // 0x8(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DestOffset;                                        // 0xC(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.NiagaraPerfBaselineStats
struct FNiagaraPerfBaselineStats
{
public:
	float                                        PerInstanceAvg_GT;                                 // 0x0(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PerInstanceAvg_RT;                                 // 0x4(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PerInstanceMax_GT;                                 // 0x8(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        PerInstanceMax_RT;                                 // 0xC(0x4)(Edit, BlueprintVisible, ZeroConstructor, Config, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Niagara.NiagaraPlatformSetConflictEntry
struct FNiagaraPlatformSetConflictEntry
{
public:
	class FName                                  ProfileName;                                       // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        QualityLevelMask;                                  // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Niagara.NiagaraPlatformSetConflictInfo
struct FNiagaraPlatformSetConflictInfo
{
public:
	int32                                        SetAIndex;                                         // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SetBIndex;                                         // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraPlatformSetConflictEntry> Conflicts;                                         // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x78 (0x78 - 0x0)
// ScriptStruct Niagara.NiagaraPlatformSetRedirect
struct FNiagaraPlatformSetRedirect
{
public:
	TArray<class FName>                          ProfileNames;                                      // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	enum class ENiagaraDeviceProfileRedirectMode Mode;                                              // 0x10(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2035[0x3];                                     // Fixing Size After Last Property 
	class FName                                  RedirectProfileName;                               // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraPlatformSetCVarCondition      CVarConditionEnabled;                              // 0x18(0x30)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	struct FNiagaraPlatformSetCVarCondition      CVarConditionDisabled;                             // 0x48(0x30)(Edit, NoDestructor, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Niagara.NiagaraRendererMaterialScalarParameter
struct FNiagaraRendererMaterialScalarParameter
{
public:
	class FName                                  MaterialParameterName;                             // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        Value;                                             // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Niagara.NiagaraRendererMaterialVectorParameter
struct FNiagaraRendererMaterialVectorParameter
{
public:
	class FName                                  MaterialParameterName;                             // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FLinearColor                          Value;                                             // 0x4(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.NiagaraRendererMaterialTextureParameter
struct FNiagaraRendererMaterialTextureParameter
{
public:
	class FName                                  MaterialParameterName;                             // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2039[0x4];                                     // Fixing Size After Last Property 
	class UTexture*                              Texture;                                           // 0x8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Niagara.NiagaraRendererMaterialStaticBoolParameter
struct FNiagaraRendererMaterialStaticBoolParameter
{
public:
	class FName                                  MaterialParameterName;                             // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  StaticVariableName;                                // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x50 (0x50 - 0x0)
// ScriptStruct Niagara.NiagaraRendererMaterialParameters
struct FNiagaraRendererMaterialParameters
{
public:
	TArray<struct FNiagaraMaterialAttributeBinding> AttributeBindings;                                 // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraRendererMaterialScalarParameter> ScalarParameters;                                  // 0x10(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraRendererMaterialVectorParameter> VectorParameters;                                  // 0x20(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraRendererMaterialTextureParameter> TextureParameters;                                 // 0x30(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraRendererMaterialStaticBoolParameter> StaticBoolParameters;                              // 0x40(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Niagara.NiagaraRibbonShapeCustomVertex
struct FNiagaraRibbonShapeCustomVertex
{
public:
	struct FVector2f                             Position;                                          // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2f                             Normal;                                            // 0x8(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        TextureV;                                          // 0x10(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Niagara.NiagaraRibbonUVSettings
struct FNiagaraRibbonUVSettings
{
public:
	enum class ENiagaraRibbonUVDistributionMode  DistributionMode;                                  // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraRibbonUVEdgeMode          LeadingEdgeMode;                                   // 0x1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraRibbonUVEdgeMode          TrailingEdgeMode;                                  // 0x2(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEnablePerParticleUOverride : 1;                   // Mask: 0x1, PropSize: 0x10x3(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bEnablePerParticleVRangeOverride : 1;              // Mask: 0x2, PropSize: 0x10x3(0x1)(Edit, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_169 : 6;                                    // Fixing Bit-Field Size 
	float                                        TilingLength;                                      // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Offset;                                            // 0x8(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector2D                             Scale;                                             // 0x18(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xE0 (0xE0 - 0x0)
// ScriptStruct Niagara.NiagaraScalabilityManager
struct FNiagaraScalabilityManager
{
public:
	class UNiagaraEffectType*                    EffectType;                                        // 0x0(0x8)(ZeroConstructor, Transient, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<class UNiagaraComponent*>             ManagedComponents;                                 // 0x8(0x10)(ExportObject, ZeroConstructor, Transient, ContainsInstancedReference, UObjectWrapper, NativeAccessSpecifierPublic)
	uint8                                        Pad_2044[0xC8];                                    // Fixing Size Of Struct
};

// 0x60 (0x60 - 0x0)
// ScriptStruct Niagara.NiagaraModuleDependency
struct FNiagaraModuleDependency
{
public:
	class FName                                  ID;                                                // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraModuleDependencyType      Type;                                              // 0x4(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraModuleDependencyScriptConstraint ScriptConstraint;                                  // 0x5(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2048[0x2];                                     // Fixing Size After Last Property 
	class FString                                RequiredVersion;                                   // 0x8(0x10)(Edit, ZeroConstructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        OnlyEvaluateInScriptUsage;                         // 0x18(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, AssetRegistrySearchable, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2049[0x4];                                     // Fixing Size After Last Property 
	class FText                                  Description;                                       // 0x20(0x18)(Edit, AssetRegistrySearchable, NativeAccessSpecifierPublic)
	uint8                                        Pad_204A[0x28];                                    // Fixing Size Of Struct
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Niagara.NiagaraCompilerTag
struct FNiagaraCompilerTag
{
public:
	struct FNiagaraVariable                      Variable;                                          // 0x0(0x18)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FString                                StringValue;                                       // 0x18(0x10)(ZeroConstructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x58 (0x58 - 0x0)
// ScriptStruct Niagara.NiagaraVMExecutableDataId
struct FNiagaraVMExecutableDataId
{
public:
	struct FGuid                                 CompilerVersionID;                                 // 0x0(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraScriptUsage               ScriptUsageType;                                   // 0x10(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_204C[0x3];                                     // Fixing Size After Last Property 
	struct FGuid                                 ScriptUsageTypeID;                                 // 0x14(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bUsesRapidIterationParams : 1;                     // Mask: 0x1, PropSize: 0x10x24(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bDisableDebugSwitches : 1;                         // Mask: 0x2, PropSize: 0x10x24(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bInterpolatedSpawn : 1;                            // Mask: 0x4, PropSize: 0x10x24(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bRequiresPersistentIDs : 1;                        // Mask: 0x8, PropSize: 0x10x24(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        BitPad_16A : 4;                                    // Fixing Bit-Field Size 
	uint8                                        Pad_2050[0x3];                                     // Fixing Size After Last Property 
	struct FGuid                                 BaseScriptID;                                      // 0x28(0x10)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraCompileHash                   BaseScriptCompileHash;                             // 0x38(0x10)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FGuid                                 ScriptVersionID;                                   // 0x48(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Niagara.NiagaraVMExecutableByteCode
struct FNiagaraVMExecutableByteCode
{
public:
	TArray<uint8>                                Data;                                              // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPrivate)
	int32                                        UncompressedSize;                                  // 0x10(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_2051[0x4];                                     // Fixing Size Of Struct
};

// 0x1A0 (0x1A0 - 0x0)
// ScriptStruct Niagara.NiagaraVMExecutableData
struct FNiagaraVMExecutableData
{
public:
	struct FNiagaraVMExecutableByteCode          ByteCode;                                          // 0x0(0x18)(NativeAccessSpecifierPublic)
	struct FNiagaraVMExecutableByteCode          OptimizedByteCode;                                 // 0x18(0x18)(Transient, NativeAccessSpecifierPublic)
	uint8                                        Pad_2054[0x38];                                    // Fixing Size After Last Property 
	int32                                        NumTempRegisters;                                  // 0x68(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        NumUserPtrs;                                       // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraCompilerTag>           CompileTags;                                       // 0x70(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<uint8>                                ScriptLiterals;                                    // 0x80(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraVariableBase>          Attributes;                                        // 0x90(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FNiagaraScriptDataUsageInfo           DataUsage;                                         // 0xA0(0x1)(NoDestructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2056[0x7];                                     // Fixing Size After Last Property 
	TArray<struct FNiagaraScriptUObjectCompileInfo> UObjectInfos;                                      // 0xA8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraScriptDataInterfaceCompileInfo> DataInterfaceInfo;                                 // 0xB8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FVMExternalFunctionBindingInfo> CalledVMExternalFunctions;                         // 0xC8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        Pad_2057[0x10];                                    // Fixing Size After Last Property 
	TArray<struct FNiagaraDataSetID>             ReadDataSets;                                      // 0xE8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraDataSetProperties>     WriteDataSets;                                     // 0xF8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraStatScope>             StatScopes;                                        // 0x108(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FNiagaraShaderScriptParametersMetadata ShaderScriptParametersMetadata;                    // 0x118(0x58)(NativeAccessSpecifierPublic)
	enum class ENiagaraScriptCompileStatus       LastCompileStatus;                                 // 0x170(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_205A[0x7];                                     // Fixing Size After Last Property 
	TArray<struct FSimulationStageMetaData>      SimulationStageMetaData;                           // 0x178(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<uint8>                                ExperimentalContextData;                           // 0x188(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        bReadsSignificanceIndex : 1;                       // Mask: 0x1, PropSize: 0x10x198(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        bNeedsGPUContextInit : 1;                          // Mask: 0x2, PropSize: 0x10x198(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_205B[0x7];                                     // Fixing Size Of Struct
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Niagara.NiagaraInlineDynamicInputFormatToken
struct FNiagaraInlineDynamicInputFormatToken
{
public:
	uint8                                        Pad_205D[0x1];                                     // Fixing Size Of Struct
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Niagara.VersionedNiagaraScriptData
struct FVersionedNiagaraScriptData
{
public:
	uint8                                        Pad_205E[0x1];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Niagara.NiagaraScriptExecutionPaddingInfo
struct FNiagaraScriptExecutionPaddingInfo
{
public:
	uint16                                       SrcOffset;                                         // 0x0(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       DestOffset;                                        // 0x2(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       SrcSize;                                           // 0x4(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       DestSize;                                          // 0x6(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0xA8 - 0x88)
// ScriptStruct Niagara.NiagaraScriptExecutionParameterStore
struct FNiagaraScriptExecutionParameterStore : public FNiagaraParameterStore
{
public:
	int32                                        ParameterSize;                                     // 0x88(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint32                                       PaddedParameterSize;                               // 0x8C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraScriptExecutionPaddingInfo> PaddingInfo;                                       // 0x90(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint8                                        bInitialized : 1;                                  // Mask: 0x1, PropSize: 0x10xA0(0x1)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2062[0x7];                                     // Fixing Size Of Struct
};

// 0x10 (0x98 - 0x88)
// ScriptStruct Niagara.NiagaraScriptInstanceParameterStore
struct FNiagaraScriptInstanceParameterStore : public FNiagaraParameterStore
{
public:
	uint8                                        Pad_2068[0x10];                                    // Fixing Size Of Struct
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Niagara.NiagaraScriptHighlight
struct FNiagaraScriptHighlight
{
public:
	struct FLinearColor                          Color;                                             // 0x0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FText                                  DisplayName;                                       // 0x10(0x18)(Edit, NativeAccessSpecifierPublic)
};

// 0x60 (0x60 - 0x0)
// ScriptStruct Niagara.NiagaraSimCacheDataBuffers
struct FNiagaraSimCacheDataBuffers
{
public:
	uint32                                       NumInstances;                                      // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2069[0x4];                                     // Fixing Size After Last Property 
	TArray<uint8>                                FloatData;                                         // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<uint8>                                HalfData;                                          // 0x18(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<uint8>                                Int32Data;                                         // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<int32>                                IDToIndexTable;                                    // 0x38(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint32                                       IDAcquireTag;                                      // 0x48(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_206A[0x4];                                     // Fixing Size After Last Property 
	TArray<uint32>                               InterpMapping;                                     // 0x50(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xA0 (0xA0 - 0x0)
// ScriptStruct Niagara.NiagaraSimCacheEmitterFrame
struct FNiagaraSimCacheEmitterFrame
{
public:
	struct FBox                                  LocalBounds;                                       // 0x0(0x38)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        TotalSpawnedParticles;                             // 0x38(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_206C[0x4];                                     // Fixing Size After Last Property 
	struct FNiagaraSimCacheDataBuffers           ParticleDataBuffers;                               // 0x40(0x60)(NativeAccessSpecifierPublic)
};

// 0x98 (0x98 - 0x0)
// ScriptStruct Niagara.NiagaraSimCacheSystemFrame
struct FNiagaraSimCacheSystemFrame
{
public:
	struct FBox                                  LocalBounds;                                       // 0x0(0x38)(ZeroConstructor, IsPlainOldData, NoDestructor, NativeAccessSpecifierPublic)
	struct FNiagaraSimCacheDataBuffers           SystemDataBuffers;                                 // 0x38(0x60)(NativeAccessSpecifierPublic)
};

// 0x120 (0x120 - 0x0)
// ScriptStruct Niagara.NiagaraSimCacheFrame
struct FNiagaraSimCacheFrame
{
public:
	struct FTransform                            LocalToWorld;                                      // 0x0(0x60)(IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector3f                             LWCTile;                                           // 0x60(0xC)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        SimulationAge;                                     // 0x6C(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SimulationTickCount;                               // 0x70(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_206E[0x4];                                     // Fixing Size After Last Property 
	struct FNiagaraSimCacheSystemFrame           SystemData;                                        // 0x78(0x98)(NativeAccessSpecifierPublic)
	TArray<struct FNiagaraSimCacheEmitterFrame>  EmitterData;                                       // 0x110(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x14 (0x14 - 0x0)
// ScriptStruct Niagara.NiagaraSimCacheVariable
struct FNiagaraSimCacheVariable
{
public:
	struct FNiagaraVariableBase                  Variable;                                          // 0x0(0x8)(NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       FloatOffset;                                       // 0x8(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       FloatCount;                                        // 0xA(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       HalfOffset;                                        // 0xC(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       HalfCount;                                         // 0xE(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       Int32Offset;                                       // 0x10(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       Int32Count;                                        // 0x12(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xB0 (0xB0 - 0x0)
// ScriptStruct Niagara.NiagaraSimCacheDataBuffersLayout
struct FNiagaraSimCacheDataBuffersLayout
{
public:
	class FName                                  LayoutName;                                        // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	enum class ENiagaraSimTarget                 SimTarget;                                         // 0x4(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2070[0x3];                                     // Fixing Size After Last Property 
	TArray<struct FNiagaraSimCacheVariable>      Variables;                                         // 0x8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint16                                       FloatCount;                                        // 0x18(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       HalfCount;                                         // 0x1A(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       Int32Count;                                        // 0x1C(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bLocalSpace;                                       // 0x1E(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowInterpolation;                               // 0x1F(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAllowVelocityExtrapolation;                       // 0x20(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2072[0x7];                                     // Fixing Size After Last Property 
	TArray<class FName>                          RebaseVariableNames;                               // 0x28(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<class FName>                          InterpVariableNames;                               // 0x38(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	uint16                                       ComponentVelocity;                                 // 0x48(0x2)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2074[0x66];                                    // Fixing Size Of Struct
};

// 0xC0 (0xC0 - 0x0)
// ScriptStruct Niagara.NiagaraSimCacheLayout
struct FNiagaraSimCacheLayout
{
public:
	struct FNiagaraSimCacheDataBuffersLayout     SystemLayout;                                      // 0x0(0xB0)(NativeAccessSpecifierPublic)
	TArray<struct FNiagaraSimCacheDataBuffersLayout> EmitterLayouts;                                    // 0xB0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0xF8 (0xF8 - 0x0)
// ScriptStruct Niagara.NiagaraEmitterCompiledData
struct FNiagaraEmitterCompiledData
{
public:
	TArray<class FName>                          SpawnAttributes;                                   // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FNiagaraVariable                      EmitterSpawnIntervalVar;                           // 0x10(0x18)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraVariable                      EmitterInterpSpawnStartDTVar;                      // 0x28(0x18)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraVariable                      EmitterSpawnGroupVar;                              // 0x40(0x18)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraVariable                      EmitterAgeVar;                                     // 0x58(0x18)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraVariable                      EmitterRandomSeedVar;                              // 0x70(0x18)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraVariable                      EmitterInstanceSeedVar;                            // 0x88(0x18)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraVariable                      EmitterTotalSpawnedParticlesVar;                   // 0xA0(0x18)(HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FNiagaraDataSetCompiledData           DataSetCompiledData;                               // 0xB8(0x40)(NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Niagara.NiagaraParameterDataSetBinding
struct FNiagaraParameterDataSetBinding
{
public:
	int32                                        ParameterOffset;                                   // 0x0(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        DataSetComponentOffset;                            // 0x4(0x4)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Niagara.NiagaraParameterDataSetBindingCollection
struct FNiagaraParameterDataSetBindingCollection
{
public:
	TArray<struct FNiagaraParameterDataSetBinding> FloatOffsets;                                      // 0x0(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraParameterDataSetBinding> Int32Offsets;                                      // 0x10(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x228 (0x228 - 0x0)
// ScriptStruct Niagara.NiagaraSystemCompiledData
struct FNiagaraSystemCompiledData
{
public:
	struct FNiagaraParameterStore                InstanceParamStore;                                // 0x0(0x88)(NativeAccessSpecifierPublic)
	struct FNiagaraDataSetCompiledData           DataSetCompiledData;                               // 0x88(0x40)(NativeAccessSpecifierPublic)
	struct FNiagaraDataSetCompiledData           SpawnInstanceParamsDataSetCompiledData;            // 0xC8(0x40)(NativeAccessSpecifierPublic)
	struct FNiagaraDataSetCompiledData           UpdateInstanceParamsDataSetCompiledData;           // 0x108(0x40)(NativeAccessSpecifierPublic)
	struct FNiagaraParameterDataSetBindingCollection SpawnInstanceGlobalBinding;                        // 0x148(0x20)(NativeAccessSpecifierPublic)
	struct FNiagaraParameterDataSetBindingCollection SpawnInstanceSystemBinding;                        // 0x168(0x20)(NativeAccessSpecifierPublic)
	struct FNiagaraParameterDataSetBindingCollection SpawnInstanceOwnerBinding;                         // 0x188(0x20)(NativeAccessSpecifierPublic)
	TArray<struct FNiagaraParameterDataSetBindingCollection> SpawnInstanceEmitterBindings;                      // 0x1A8(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
	struct FNiagaraParameterDataSetBindingCollection UpdateInstanceGlobalBinding;                       // 0x1B8(0x20)(NativeAccessSpecifierPublic)
	struct FNiagaraParameterDataSetBindingCollection UpdateInstanceSystemBinding;                       // 0x1D8(0x20)(NativeAccessSpecifierPublic)
	struct FNiagaraParameterDataSetBindingCollection UpdateInstanceOwnerBinding;                        // 0x1F8(0x20)(NativeAccessSpecifierPublic)
	TArray<struct FNiagaraParameterDataSetBindingCollection> UpdateInstanceEmitterBindings;                     // 0x218(0x10)(ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.NiagaraSystemScalabilityOverrides
struct FNiagaraSystemScalabilityOverrides
{
public:
	TArray<struct FNiagaraSystemScalabilityOverride> Overrides;                                         // 0x0(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Niagara.NiagaraWildcard
struct FNiagaraWildcard
{
public:
	uint8                                        Pad_2081[0x1];                                     // Fixing Size Of Struct
};

// 0x4 (0x4 - 0x0)
// ScriptStruct Niagara.NiagaraFloat
struct FNiagaraFloat
{
public:
	float                                        Value;                                             // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct Niagara.NiagaraInt32
struct FNiagaraInt32
{
public:
	int32                                        Value;                                             // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct Niagara.NiagaraBool
struct FNiagaraBool
{
public:
	int32                                        Value;                                             // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x0 (0xC - 0xC)
// ScriptStruct Niagara.NiagaraPosition
struct FNiagaraPosition : public FVector3f
{
public:
};

// 0x2 (0x2 - 0x0)
// ScriptStruct Niagara.NiagaraHalf
struct FNiagaraHalf
{
public:
	uint16                                       Value;                                             // 0x0(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x4 (0x4 - 0x0)
// ScriptStruct Niagara.NiagaraHalfVector2
struct FNiagaraHalfVector2
{
public:
	uint16                                       X;                                                 // 0x0(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       Y;                                                 // 0x2(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x6 (0x6 - 0x0)
// ScriptStruct Niagara.NiagaraHalfVector3
struct FNiagaraHalfVector3
{
public:
	uint16                                       X;                                                 // 0x0(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       Y;                                                 // 0x2(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       Z;                                                 // 0x4(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Niagara.NiagaraHalfVector4
struct FNiagaraHalfVector4
{
public:
	uint16                                       X;                                                 // 0x0(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       Y;                                                 // 0x2(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       Z;                                                 // 0x4(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint16                                       W;                                                 // 0x6(0x2)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Niagara.NiagaraNumeric
struct FNiagaraNumeric
{
public:
	uint8                                        Pad_2086[0x1];                                     // Fixing Size Of Struct
};

// 0x1 (0x1 - 0x0)
// ScriptStruct Niagara.NiagaraParameterMap
struct FNiagaraParameterMap
{
public:
	uint8                                        Pad_2087[0x1];                                     // Fixing Size Of Struct
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Niagara.NiagaraDouble
struct FNiagaraDouble
{
public:
	double                                       Value;                                             // 0x0(0x8)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Niagara.NiagaraMatrix
struct FNiagaraMatrix
{
public:
	struct FVector4f                             Row0;                                              // 0x0(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4f                             Row1;                                              // 0x10(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4f                             Row2;                                              // 0x20(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	struct FVector4f                             Row3;                                              // 0x30(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x10 (0x10 - 0x0)
// ScriptStruct Niagara.NiagaraSpawnInfo
struct FNiagaraSpawnInfo
{
public:
	int32                                        Count;                                             // 0x0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        InterpStartDt;                                     // 0x4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	float                                        IntervalDt;                                        // 0x8(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        SpawnGroup;                                        // 0xC(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x8 (0x8 - 0x0)
// ScriptStruct Niagara.NiagaraID
struct FNiagaraID
{
public:
	int32                                        Index;                                             // 0x0(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        AcquireTag;                                        // 0x4(0x4)(BlueprintVisible, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0xC (0xC - 0x0)
// ScriptStruct Niagara.NiagaraRandInfo
struct FNiagaraRandInfo
{
public:
	int32                                        Seed1;                                             // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Seed2;                                             // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	int32                                        Seed3;                                             // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x18 (0x18 - 0x0)
// ScriptStruct Niagara.NiagaraInputConditionMetadata
struct FNiagaraInputConditionMetadata
{
public:
	class FName                                  InputName;                                         // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_208E[0x4];                                     // Fixing Size After Last Property 
	TArray<class FString>                        TargetValues;                                      // 0x8(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Niagara.NiagaraEnumParameterMetaData
struct FNiagaraEnumParameterMetaData
{
public:
	class FName                                  OverrideName;                                      // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2093[0x4];                                     // Fixing Size After Last Property 
	class UTexture2D*                            IconOverride;                                      // 0x8(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bUseColorOverride;                                 // 0x10(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2095[0x3];                                     // Fixing Size After Last Property 
	struct FLinearColor                          ColorOverride;                                     // 0x14(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_2097[0x4];                                     // Fixing Size Of Struct
};

// 0x38 (0x38 - 0x0)
// ScriptStruct Niagara.WidgetNamedInputValue
struct FWidgetNamedInputValue
{
public:
	float                                        Value;                                             // 0x0(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_209A[0x4];                                     // Fixing Size After Last Property 
	class FText                                  DisplayName;                                       // 0x8(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  ToolTip;                                           // 0x20(0x18)(Edit, NativeAccessSpecifierPublic)
};

// 0x30 (0x30 - 0x0)
// ScriptStruct Niagara.NiagaraWidgetNamedIntegerInputValue
struct FNiagaraWidgetNamedIntegerInputValue
{
public:
	class FText                                  DisplayName;                                       // 0x0(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  ToolTip;                                           // 0x18(0x18)(Edit, NativeAccessSpecifierPublic)
};

// 0x40 (0x40 - 0x0)
// ScriptStruct Niagara.NiagaraInputParameterCustomization
struct FNiagaraInputParameterCustomization
{
public:
	enum class ENiagaraInputWidgetType           WidgetType;                                        // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasMinValue;                                      // 0x1(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_209D[0x2];                                     // Fixing Size After Last Property 
	float                                        MinValue;                                          // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasMaxValue;                                      // 0x8(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_209E[0x3];                                     // Fixing Size After Last Property 
	float                                        MaxValue;                                          // 0xC(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bHasStepWidth;                                     // 0x10(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20A2[0x3];                                     // Fixing Size After Last Property 
	float                                        StepWidth;                                         // 0x14(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	TArray<struct FWidgetNamedInputValue>        InputDropdownValues;                               // 0x18(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	TArray<struct FNiagaraWidgetNamedIntegerInputValue> EnumStyleDropdownValues;                           // 0x28(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bBroadcastValueChangesOnCommitOnly;                // 0x38(0x1)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20A3[0x7];                                     // Fixing Size Of Struct
};

// 0x20 (0x20 - 0x0)
// ScriptStruct Niagara.NiagaraBoolParameterMetaData
struct FNiagaraBoolParameterMetaData
{
public:
	enum class ENiagaraBoolDisplayMode           DisplayMode;                                       // 0x0(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20A5[0x3];                                     // Fixing Size After Last Property 
	class FName                                  OverrideNameTrue;                                  // 0x4(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class FName                                  OverrideNameFalse;                                 // 0x8(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20A7[0x4];                                     // Fixing Size After Last Property 
	class UTexture2D*                            IconOverrideTrue;                                  // 0x10(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	class UTexture2D*                            IconOverrideFalse;                                 // 0x18(0x8)(Edit, ZeroConstructor, NoDestructor, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPublic)
};

// 0x180 (0x180 - 0x0)
// ScriptStruct Niagara.NiagaraVariableMetaData
struct FNiagaraVariableMetaData
{
public:
	class FText                                  Description;                                       // 0x0(0x18)(Edit, NativeAccessSpecifierPublic)
	class FText                                  CategoryName;                                      // 0x18(0x18)(Edit, NativeAccessSpecifierPublic)
	enum class EUnit                             DisplayUnit;                                       // 0x30(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bAdvancedDisplay;                                  // 0x31(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bDisplayInOverviewStack;                           // 0x32(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20AD[0x1];                                     // Fixing Size After Last Property 
	int32                                        InlineParameterSortPriority;                       // 0x34(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bOverrideColor;                                    // 0x38(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20B0[0x3];                                     // Fixing Size After Last Property 
	struct FLinearColor                          InlineParameterColorOverride;                      // 0x3C(0x10)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20B2[0x4];                                     // Fixing Size After Last Property 
	TArray<struct FNiagaraEnumParameterMetaData> InlineParameterEnumOverrides;                      // 0x50(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPublic)
	bool                                         bEnableBoolOverride;                               // 0x60(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20B4[0x7];                                     // Fixing Size After Last Property 
	struct FNiagaraBoolParameterMetaData         InlineParameterBoolOverride;                       // 0x68(0x20)(Edit, NoDestructor, NativeAccessSpecifierPublic)
	int32                                        EditorSortPriority;                                // 0x88(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	bool                                         bInlineEditConditionToggle;                        // 0x8C(0x1)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20BA[0x3];                                     // Fixing Size After Last Property 
	struct FNiagaraInputConditionMetadata        EditCondition;                                     // 0x90(0x18)(Edit, NativeAccessSpecifierPublic)
	struct FNiagaraInputConditionMetadata        VisibleCondition;                                  // 0xA8(0x18)(Edit, NativeAccessSpecifierPublic)
	TMap<class FName, class FString>             PropertyMetaData;                                  // 0xC0(0x50)(Edit, NativeAccessSpecifierPublic)
	class FName                                  ParentAttribute;                                   // 0x110(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPublic)
	uint8                                        Pad_20BB[0x4];                                     // Fixing Size After Last Property 
	TArray<class FName>                          AlternateAliases;                                  // 0x118(0x10)(Edit, ZeroConstructor, AdvancedDisplay, NativeAccessSpecifierPublic)
	struct FNiagaraInputParameterCustomization   WidgetCustomization;                               // 0x128(0x40)(Edit, NativeAccessSpecifierPublic)
	struct FGuid                                 VariableGuid;                                      // 0x168(0x10)(ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	bool                                         bIsStaticSwitch;                                   // 0x178(0x1)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_20BE[0x3];                                     // Fixing Size After Last Property 
	int32                                        StaticSwitchDefaultValue;                          // 0x17C(0x4)(ZeroConstructor, Deprecated, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
};

// 0x50 (0xD8 - 0x88)
// ScriptStruct Niagara.NiagaraUserRedirectionParameterStore
struct FNiagaraUserRedirectionParameterStore : public FNiagaraParameterStore
{
public:
	TMap<struct FNiagaraVariable, struct FNiagaraVariable> UserParameterRedirects;                            // 0x88(0x50)(NativeAccessSpecifierPrivate)
};

// 0x28 (0x28 - 0x0)
// ScriptStruct Niagara.NiagaraVariant
struct FNiagaraVariant
{
public:
	class UObject*                               Object;                                            // 0x0(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	class UNiagaraDataInterface*                 DataInterface;                                     // 0x8(0x8)(Edit, ExportObject, ZeroConstructor, InstancedReference, NoDestructor, PersistentInstance, UObjectWrapper, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	TArray<uint8>                                Bytes;                                             // 0x10(0x10)(Edit, ZeroConstructor, NativeAccessSpecifierPrivate)
	enum class ENiagaraVariantMode               CurrentMode;                                       // 0x20(0x4)(Edit, ZeroConstructor, IsPlainOldData, NoDestructor, HasGetValueTypeHash, NativeAccessSpecifierPrivate)
	uint8                                        Pad_20C4[0x4];                                     // Fixing Size Of Struct
};

// 0x8 (0x30 - 0x28)
// ScriptStruct Niagara.NiagaraWorldManagerTickFunction
struct FNiagaraWorldManagerTickFunction : public FTickFunction
{
public:
	uint8                                        Pad_20C6[0x8];                                     // Fixing Size Of Struct
};

}


