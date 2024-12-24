enum class ENCPoolMethod {
    None = 0,
    AutoRelease = 1,
    ManualRelease = 2,
    ManualRelease_OnComplete = 3,
    FreeInPool = 4,
    ENCPoolMethod_MAX = 5,
};

enum class ENDIActorComponentSourceMode {
    Default = 0,
    AttachParent = 1,
    LocalPlayer = 2,
    ENDIActorComponentSourceMode_MAX = 3,
};

namespace ENDICollisionQuery_AsyncGpuTraceProvider {
    enum Type {
        Default = 0,
        HWRT = 1,
        GSDF = 2,
        None = 3,
        ENDICollisionQuery_MAX = 4,
    };
}

enum class ENDIDataChannelSpawnMode {
    Override = 0,
    Accumulate = 1,
    None = 2,
    Max = 3,
};

enum class ENDIExport_GPUAllocationMode {
    FixedSize = 0,
    PerParticle = 1,
    ENDIExport_MAX = 2,
};

enum class ENDILandscape_SourceMode {
    Default = 0,
    Source = 1,
    AttachParent = 2,
    ENDILandscape_MAX = 3,
};

enum class ENDIObjectPropertyReaderSourceMode {
    Binding = 0,
    AttachParentActor = 1,
    BindingThenAttachParentActor = 2,
    ENDIObjectPropertyReaderSourceMode_MAX = 3,
};

enum class ENDISceneCapture2DOffsetMode {
    Disabled = 0,
    RelativeLocal = 1,
    RelativeWorld = 2,
    AbsoluteWorld = 3,
    ENDISceneCapture2DOffsetMode_MAX = 4,
};

enum class ENDISceneCapture2DSourceMode {
    UserParameterThenAttachParent = 0,
    UserParameterOnly = 1,
    AttachParentOnly = 2,
    Managed = 3,
    ENDISceneCapture2DSourceMode_MAX = 4,
};

namespace ENDISkelMesh_AdjacencyTriangleIndexFormat {
    enum Type {
        Full = 0,
        Half = 1,
        ENDISkelMesh_MAX = 2,
    };
}

namespace ENDISkelMesh_GpuMaxInfluences {
    enum Type {
        AllowMax4 = 0,
        AllowMax8 = 1,
        Unlimited = 2,
        ENDISkelMesh_MAX = 3,
    };
}

namespace ENDISkelMesh_GpuUniformSamplingFormat {
    enum Type {
        Full = 0,
        Limited_24_8 = 1,
        Limited_23_9 = 2,
        ENDISkelMesh_MAX = 3,
    };
}

enum class ENDISkeletalMesh_SkinningMode {
    Invalid = 255,
    None = 0,
    SkinOnTheFly = 1,
    PreSkin = 2,
    ENDISkeletalMesh_MAX = 256,
};

enum class ENDISkeletalMesh_SourceMode {
    Default = 0,
    Source = 1,
    AttachParent = 2,
    DefaultMeshOnly = 3,
    ENDISkeletalMesh_MAX = 4,
};

enum class ENDIStaticMesh_SourceMode {
    Default = 0,
    Source = 1,
    AttachParent = 2,
    DefaultMeshOnly = 3,
    MeshParameterBinding = 4,
    ENDIStaticMesh_MAX = 5,
};

enum class ENSMSubUVAnimation_Mode {
    InfiniteLoop = 0,
    Linear = 1,
    Random = 2,
    ENSMSubUVAnimation_MAX = 3,
};

enum class ENSM_NoiseMode {
    VectorField = 0,
    JacobNoise = 1,
    LUTJacob = 2,
    LUTJacobBicubic = 3,
    ENSM_MAX = 4,
};

enum class ENSM_ShapePrimitive {
    Box = 0,
    Cylinder = 1,
    Plane = 2,
    Ring = 3,
    Sphere = 4,
    ENSM_MAX = 5,
};

enum class ENSM_VelocityType {
    Linear = 0,
    FromPoint = 1,
    InCone = 2,
    ENSM_MAX = 3,
};

enum class ENiagaraAgeUpdateMode {
    TickDeltaTime = 0,
    DesiredAge = 1,
    DesiredAgeNoSeek = 2,
    ENiagaraAgeUpdateMode_MAX = 3,
};

enum class ENiagaraAssetLibraryAssetTypes {
    Emitters = 1,
    Systems = 2,
    Scripts = 4,
    ENiagaraAssetLibraryAssetTypes_MAX = 5,
};

enum class ENiagaraAssetTagDefinitionImportance {
    Primary = 0,
    Secondary = 1,
    ENiagaraAssetTagDefinitionImportance_MAX = 2,
};

enum class ENiagaraBakerViewMode {
    Perspective = 0,
    OrthoFront = 1,
    OrthoBack = 2,
    OrthoLeft = 3,
    OrthoRight = 4,
    OrthoTop = 5,
    OrthoBottom = 6,
    Num = 7,
    ENiagaraBakerViewMode_MAX = 8,
};

enum class ENiagaraBaseTypes {
    Half = 0,
    Float = 1,
    Int32 = 2,
    Bool = 3,
    Max = 4,
};

enum ENiagaraBindingSource {
    ImplicitFromSource = 0,
    ExplicitParticles = 1,
    ExplicitEmitter = 2,
    ExplicitSystem = 3,
    ExplicitUser = 4,
    MaxBindingSource = 5,
    ENiagaraBindingSource_MAX = 6,
};

enum class ENiagaraBoolDisplayMode {
    DisplayAlways = 0,
    DisplayIfTrue = 1,
    DisplayIfFalse = 2,
    ENiagaraBoolDisplayMode_MAX = 3,
};

enum class ENiagaraCVarConditionResponse {
    None = 0,
    Enable = 1,
    Disable = 2,
    ENiagaraCVarConditionResponse_MAX = 3,
};

enum class ENiagaraCollisionMode {
    None = 0,
    SceneGeometry = 1,
    DepthBuffer = 2,
    DistanceField = 3,
    ENiagaraCollisionMode_MAX = 4,
};

enum class ENiagaraCompilationState {
    CheckDDC = 0,
    Precompile = 1,
    StartCompileJob = 2,
    AwaitResult = 3,
    OptimizeByteCode = 4,
    ProcessResult = 5,
    PutToDDC = 6,
    Finished = 7,
    Aborted = 8,
    ENiagaraCompilationState_MAX = 9,
};

enum class ENiagaraCompileErrorSeverity {
    Ignore = 0,
    LogOnly = 1,
    Warning = 2,
    Error = 3,
    ENiagaraCompileErrorSeverity_MAX = 4,
};

enum class ENiagaraCompileUsageStaticSwitch {
    Spawn = 0,
    Update = 1,
    Event = 2,
    SimulationStage = 3,
    Default = 4,
    ENiagaraCompileUsageStaticSwitch_MAX = 5,
};

enum class ENiagaraConditionalOperator {
    Equals = 0,
    NotEqual = 1,
    LessThan = 2,
    LessThanOrEqual = 3,
    GreaterThan = 4,
    GreaterThanOrEqual = 5,
    Max = 6,
};

enum class ENiagaraCoordinateSpace {
    Simulation = 0,
    World = 1,
    Local = 2,
    ENiagaraCoordinateSpace_MAX = 3,
};

enum class ENiagaraCullProxyMode {
    None = 0,
    Instanced_Rendered = 1,
    ENiagaraCullProxyMode_MAX = 2,
};

enum class ENiagaraCullReaction {
    Deactivate = 0,
    DeactivateImmediate = 1,
    DeactivateResume = 2,
    DeactivateImmediateResume = 3,
    PauseResume = 4,
    ENiagaraCullReaction_MAX = 5,
};

enum class ENiagaraDataChannelAllocationMode {
    Static = 0,
    ENiagaraDataChannelAllocationMode_MAX = 1,
};

enum class ENiagaraDataInterfaceEmitterBindingMode {
    Self = 0,
    Other = 1,
    ENiagaraDataInterfaceEmitterBindingMode_MAX = 2,
};

enum class ENiagaraDataSetType {
    ParticleData = 0,
    Shared = 1,
    Event = 2,
    ENiagaraDataSetType_MAX = 3,
};

enum class ENiagaraDebugHUDDOverviewSort {
    Name = 0,
    NumberRegistered = 1,
    NumberActive = 2,
    NumberScalability = 3,
    MemoryUsage = 4,
    RecentlyVisibilty = 5,
    ENiagaraDebugHUDDOverviewSort_MAX = 6,
};

enum class ENiagaraDebugHUDOverviewMode {
    Overview = 0,
    Scalability = 1,
    Performance = 2,
    PerformanceGraph = 3,
    GpuComputePerformance = 4,
    ENiagaraDebugHUDOverviewMode_MAX = 5,
};

enum class ENiagaraDebugHUDPerfGraphMode {
    GameThread = 0,
    RenderThread = 1,
    GPU = 2,
    ENiagaraDebugHUDPerfGraphMode_MAX = 3,
};

enum class ENiagaraDebugHUDPerfSampleMode {
    FrameTotal = 0,
    PerInstanceAverage = 1,
    ENiagaraDebugHUDPerfSampleMode_MAX = 2,
};

enum class ENiagaraDebugHUDPerfUnits {
    Microseconds = 0,
    Milliseconds = 1,
    ENiagaraDebugHUDPerfUnits_MAX = 2,
};

enum class ENiagaraDebugHudFont {
    Small = 0,
    Normal = 1,
    ENiagaraDebugHudFont_MAX = 2,
};

enum class ENiagaraDebugHudHAlign {
    Left = 0,
    Center = 1,
    Right = 2,
    ENiagaraDebugHudHAlign_MAX = 3,
};

enum class ENiagaraDebugHudVAlign {
    Top = 0,
    Center = 1,
    Bottom = 2,
    ENiagaraDebugHudVAlign_MAX = 3,
};

enum class ENiagaraDebugHudVerbosity {
    None = 0,
    Basic = 1,
    Verbose = 2,
    ENiagaraDebugHudVerbosity_MAX = 3,
};

enum class ENiagaraDebugPlaybackMode {
    Play = 0,
    Loop = 1,
    Paused = 2,
    Step = 3,
    ENiagaraDebugPlaybackMode_MAX = 4,
};

enum class ENiagaraDefaultGpuTranslucentLatency {
    Immediate = 0,
    Latent = 1,
    ENiagaraDefaultGpuTranslucentLatency_MAX = 2,
};

enum class ENiagaraDefaultMode {
    Value = 0,
    Binding = 1,
    Custom = 2,
    FailIfPreviouslyNotSet = 3,
    ENiagaraDefaultMode_MAX = 4,
};

enum class ENiagaraDefaultRendererMotionVectorSetting {
    Precise = 0,
    Approximate = 1,
    ENiagaraDefaultRendererMotionVectorSetting_MAX = 2,
};

enum class ENiagaraDefaultRendererPixelCoverageMode {
    Enabled = 0,
    Disabled = 1,
    ENiagaraDefaultRendererPixelCoverageMode_MAX = 2,
};

enum class ENiagaraDefaultSortPrecision {
    Low = 0,
    High = 1,
    ENiagaraDefaultSortPrecision_MAX = 2,
};

enum class ENiagaraDeviceProfileRedirectMode {
    CVar = 0,
    DeviceProfile = 1,
    ENiagaraDeviceProfileRedirectMode_MAX = 2,
};

enum class ENiagaraDistributionMode {
    Binding = 0,
    UniformConstant = 1,
    NonUniformConstant = 2,
    UniformRange = 3,
    NonUniformRange = 4,
    UniformCurve = 5,
    NonUniformCurve = 6,
    ENiagaraDistributionMode_MAX = 7,
};

enum class ENiagaraEmitterCalculateBoundMode {
    Dynamic = 0,
    Fixed = 1,
    Programmable = 2,
    ENiagaraEmitterCalculateBoundMode_MAX = 3,
};

enum class ENiagaraEmitterDefaultSummaryState {
    Default = 0,
    Summary = 1,
    ENiagaraEmitterDefaultSummaryState_MAX = 2,
};

enum class ENiagaraEmitterInactiveResponse {
    Complete = 0,
    Kill = 1,
    ENiagaraEmitterInactiveResponse_MAX = 2,
};

enum class ENiagaraEmitterMode {
    Standard = 0,
    Stateless = 1,
    ENiagaraEmitterMode_MAX = 2,
};

enum class ENiagaraExecutionState {
    Active = 0,
    Inactive = 1,
    InactiveClear = 2,
    Complete = 3,
    Disabled = 4,
    Num = 5,
    ENiagaraExecutionState_MAX = 6,
};

enum class ENiagaraExecutionStateSource {
    Scalability = 0,
    Internal = 1,
    Owner = 2,
    InternalCompletion = 3,
    ENiagaraExecutionStateSource_MAX = 4,
};

enum class ENiagaraFunctionDebugState {
    NoDebug = 0,
    Basic = 1,
    ENiagaraFunctionDebugState_MAX = 2,
};

enum class ENiagaraGpuBufferFormat {
    Float = 0,
    HalfFloat = 1,
    UnsignedNormalizedByte = 2,
    Max = 3,
};

namespace ENiagaraGpuComputeTickStage {
    enum Type {
        PreInitViews = 0,
        PostInitViews = 1,
        PostOpaqueRender = 2,
        Max = 3,
        First = 0,
        Last = 2,
    };
}

enum class ENiagaraGpuSyncMode {
    None = 0,
    SyncCpuToGpu = 1,
    SyncGpuToCpu = 2,
    SyncBoth = 3,
    ENiagaraGpuSyncMode_MAX = 4,
};

enum class ENiagaraInlineDynamicInputFormatTokenUsage {
    Input = 0,
    Decorator = 1,
    LineBreak = 2,
    ENiagaraInlineDynamicInputFormatTokenUsage_MAX = 3,
};

enum class ENiagaraInputNodeUsage {
    Undefined = 0,
    Parameter = 1,
    Attribute = 2,
    SystemConstant = 3,
    TranslatorConstant = 4,
    RapidIterationParameter = 5,
    ENiagaraInputNodeUsage_MAX = 6,
};

enum class ENiagaraInputWidgetType {
    Default = 0,
    Slider = 1,
    Volume = 2,
    NumericDropdown = 3,
    EnumStyle = 4,
    SegmentedButtons = 5,
    ENiagaraInputWidgetType_MAX = 6,
};

enum class ENiagaraLegacyTrailWidthMode {
    FromCentre = 0,
    FromFirst = 1,
    FromSecond = 2,
    ENiagaraLegacyTrailWidthMode_MAX = 3,
};

enum class ENiagaraLoopBehavior {
    Infinite = 0,
    Multiple = 1,
    Once = 2,
    ENiagaraLoopBehavior_MAX = 3,
};

enum class ENiagaraMeshFacingMode {
    Default = 0,
    Velocity = 1,
    CameraPosition = 2,
    CameraPlane = 3,
    ENiagaraMeshFacingMode_MAX = 4,
};

enum class ENiagaraMeshLODMode {
    LODLevel = 0,
    LODBias = 1,
    ByComponentBounds = 2,
    PerParticle = 3,
    ENiagaraMeshLODMode_MAX = 4,
};

enum class ENiagaraMeshLockedAxisSpace {
    Simulation = 0,
    World = 1,
    Local = 2,
    ENiagaraMeshLockedAxisSpace_MAX = 3,
};

enum class ENiagaraMeshPivotOffsetSpace {
    Mesh = 0,
    Simulation = 1,
    World = 2,
    Local = 3,
    ENiagaraMeshPivotOffsetSpace_MAX = 4,
};

enum class ENiagaraMipMapGeneration {
    Disabled = 0,
    PostStage = 1,
    PostSimulate = 2,
    ENiagaraMipMapGeneration_MAX = 3,
};

enum class ENiagaraModuleDependencyScriptConstraint {
    SameScript = 0,
    AllScripts = 1,
    ENiagaraModuleDependencyScriptConstraint_MAX = 2,
};

enum class ENiagaraModuleDependencyType {
    PreDependency = 0,
    PostDependency = 1,
    ENiagaraModuleDependencyType_MAX = 2,
};

enum class ENiagaraModuleDependencyUsage {
    None = 0,
    Spawn = 1,
    Update = 2,
    Event = 3,
    SimulationStage = 4,
    ENiagaraModuleDependencyUsage_MAX = 5,
};

enum class ENiagaraNumericOutputTypeSelectionMode {
    None = 0,
    Largest = 1,
    Smallest = 2,
    Scalar = 3,
    Custom = 4,
    ENiagaraNumericOutputTypeSelectionMode_MAX = 5,
};

enum class ENiagaraOcclusionQueryMode {
    Default = 0,
    AlwaysEnabled = 1,
    AlwaysDisabled = 2,
    ENiagaraOcclusionQueryMode_MAX = 3,
};

enum class ENiagaraOrientationAxis {
    XAxis = 0,
    YAxis = 1,
    ZAxis = 2,
    ENiagaraOrientationAxis_MAX = 3,
};

enum class ENiagaraPlatformSelectionState {
    Default = 0,
    Enabled = 1,
    Disabled = 2,
    ENiagaraPlatformSelectionState_MAX = 3,
};

enum class ENiagaraPlatformSetState {
    Disabled = 0,
    Enabled = 1,
    Active = 2,
    Unknown = 3,
    ENiagaraPlatformSetState_MAX = 4,
};

enum class ENiagaraPreviewGridResetMode {
    Never = 0,
    Individual = 1,
    All = 2,
    ENiagaraPreviewGridResetMode_MAX = 3,
};

enum class ENiagaraPythonUpdateScriptReference {
    None = 0,
    ScriptAsset = 1,
    DirectTextEntry = 2,
    ENiagaraPythonUpdateScriptReference_MAX = 3,
};

enum class ENiagaraRendererGpuTranslucentLatency {
    ProjectDefault = 0,
    Immediate = 1,
    Latent = 2,
    ENiagaraRendererGpuTranslucentLatency_MAX = 3,
};

enum class ENiagaraRendererMotionVectorSetting {
    AutoDetect = 0,
    Precise = 1,
    Approximate = 2,
    Disable = 3,
    ENiagaraRendererMotionVectorSetting_MAX = 4,
};

enum class ENiagaraRendererPixelCoverageMode {
    Automatic = 0,
    Disabled = 1,
    Enabled = 2,
    Enabled_RGBA = 3,
    Enabled_RGB = 4,
    Enabled_A = 5,
    ENiagaraRendererPixelCoverageMode_MAX = 6,
};

enum class ENiagaraRendererSortPrecision {
    Default = 0,
    Low = 1,
    High = 2,
    ENiagaraRendererSortPrecision_MAX = 3,
};

enum class ENiagaraRendererSourceDataMode {
    Particles = 0,
    Emitter = 1,
    ENiagaraRendererSourceDataMode_MAX = 2,
};

enum class ENiagaraRibbonAgeOffsetMode {
    Scale = 0,
    Clip = 1,
    ENiagaraRibbonAgeOffsetMode_MAX = 2,
};

enum class ENiagaraRibbonDrawDirection {
    FrontToBack = 0,
    BackToFront = 1,
    ENiagaraRibbonDrawDirection_MAX = 2,
};

enum class ENiagaraRibbonFacingMode {
    Screen = 0,
    Custom = 1,
    CustomSideVector = 2,
    ENiagaraRibbonFacingMode_MAX = 3,
};

enum class ENiagaraRibbonShapeMode {
    Plane = 0,
    MultiPlane = 1,
    Tube = 2,
    Custom = 3,
    ENiagaraRibbonShapeMode_MAX = 4,
};

enum class ENiagaraRibbonTessellationMode {
    Automatic = 0,
    Custom = 1,
    Disabled = 2,
    ENiagaraRibbonTessellationMode_MAX = 3,
};

enum class ENiagaraRibbonUVDistributionMode {
    ScaledUniformly = 0,
    ScaledUsingRibbonSegmentLength = 1,
    TiledOverRibbonLength = 2,
    TiledFromStartOverRibbonLength = 3,
    ENiagaraRibbonUVDistributionMode_MAX = 4,
};

enum class ENiagaraRibbonUVEdgeMode {
    SmoothTransition = 0,
    Locked = 1,
    ENiagaraRibbonUVEdgeMode_MAX = 2,
};

enum class ENiagaraScalabilityUpdateFrequency {
    SpawnOnly = 0,
    Low = 1,
    Medium = 2,
    High = 3,
    Continuous = 4,
    ENiagaraScalabilityUpdateFrequency_MAX = 5,
};

enum class ENiagaraScriptCompileStatus {
    NCS_Unknown = 0,
    NCS_Dirty = 1,
    NCS_Error = 2,
    NCS_UpToDate = 3,
    NCS_BeingCreated = 4,
    NCS_UpToDateWithWarnings = 5,
    NCS_ComputeUpToDateWithWarnings = 6,
    NCS_MAX = 7,
};

enum class ENiagaraScriptContextStaticSwitch {
    System = 0,
    Emitter = 1,
    Particle = 2,
    ENiagaraScriptContextStaticSwitch_MAX = 3,
};

enum class ENiagaraScriptGroup {
    Particle = 0,
    Emitter = 1,
    System = 2,
    Max = 3,
};

enum class ENiagaraScriptLibraryVisibility {
    Invalid = 0,
    Unexposed = 1,
    Library = 2,
    Hidden = 3,
    ENiagaraScriptLibraryVisibility_MAX = 4,
};

enum class ENiagaraScriptTemplateSpecification {
    None = 0,
    Template = 1,
    Behavior = 2,
    ENiagaraScriptTemplateSpecification_MAX = 3,
};

enum class ENiagaraScriptUsage {
    Function = 0,
    Module = 1,
    DynamicInput = 2,
    ParticleSpawnScript = 3,
    ParticleSpawnScriptInterpolated = 4,
    ParticleUpdateScript = 5,
    ParticleEventScript = 6,
    ParticleSimulationStageScript = 7,
    ParticleGPUComputeScript = 8,
    EmitterSpawnScript = 9,
    EmitterUpdateScript = 10,
    SystemSpawnScript = 11,
    SystemUpdateScript = 12,
    ENiagaraScriptUsage_MAX = 13,
};

enum class ENiagaraSimCacheAttributeCaptureMode {
    All = 0,
    RenderingOnly = 1,
    ExplicitAttributes = 2,
    ENiagaraSimCacheAttributeCaptureMode_MAX = 3,
};

enum class ENiagaraSimTarget {
    CPUSim = 0,
    GPUComputeSim = 1,
    ENiagaraSimTarget_MAX = 2,
};

enum class ENiagaraSortMode {
    None = 0,
    ViewDepth = 1,
    ViewDistance = 2,
    CustomAscending = 3,
    CustomDecending = 4,
    ENiagaraSortMode_MAX = 5,
};

enum class ENiagaraSpriteAlignment {
    Unaligned = 0,
    VelocityAligned = 1,
    CustomAlignment = 2,
    Automatic = 3,
    ENiagaraSpriteAlignment_MAX = 4,
};

enum class ENiagaraSpriteFacingMode {
    FaceCamera = 0,
    FaceCameraPlane = 1,
    CustomFacingVector = 2,
    FaceCameraPosition = 3,
    FaceCameraDistanceBlend = 4,
    Automatic = 5,
    ENiagaraSpriteFacingMode_MAX = 6,
};

enum class ENiagaraStatDisplayMode {
    Percent = 0,
    Absolute = 1,
    ENiagaraStatDisplayMode_MAX = 2,
};

enum class ENiagaraStatEvaluationType {
    Average = 0,
    Maximum = 1,
    ENiagaraStatEvaluationType_MAX = 2,
};

enum class ENiagaraStatelessSpawnInfoType {
    Burst = 0,
    Rate = 1,
    ENiagaraStatelessSpawnInfoType_MAX = 2,
};

enum class ENiagaraStripScriptByteCodeOption {
    Default = 0,
    Strip_Original = 1,
    Strip_Experimental = 2,
    ENiagaraStripScriptByteCodeOption_MAX = 3,
};

enum class ENiagaraStructConversionType {
    CopyOnly = 0,
    DoubleToFloat = 1,
    Vector2 = 2,
    Vector3 = 3,
    Vector4 = 4,
    Quat = 5,
    ENiagaraStructConversionType_MAX = 6,
};

enum class ENiagaraSystemInactiveResponse {
    Complete = 0,
    Kill = 1,
    ENiagaraSystemInactiveResponse_MAX = 2,
};

enum class ENiagaraSystemInstanceState {
    None = 0,
    PendingSpawn = 1,
    PendingSpawnPaused = 2,
    Spawning = 3,
    Running = 4,
    Paused = 5,
    Num = 6,
    ENiagaraSystemInstanceState_MAX = 7,
};

enum class ENiagaraSystemSpawnSectionEndBehavior {
    SetSystemInactive = 0,
    Deactivate = 1,
    None = 2,
    ENiagaraSystemSpawnSectionEndBehavior_MAX = 3,
};

enum class ENiagaraSystemSpawnSectionEvaluateBehavior {
    ActivateIfInactive = 0,
    None = 1,
    ENiagaraSystemSpawnSectionEvaluateBehavior_MAX = 2,
};

enum class ENiagaraSystemSpawnSectionStartBehavior {
    Activate = 0,
    ENiagaraSystemSpawnSectionStartBehavior_MAX = 1,
};

enum class ENiagaraTickBehavior {
    UsePrereqs = 0,
    UseComponentTickGroup = 1,
    ForceTickFirst = 2,
    ForceTickLast = 3,
    ENiagaraTickBehavior_MAX = 4,
};

enum class ENiagaraValidationSeverity {
    Info = 0,
    Warning = 1,
    Error = 2,
    ENiagaraValidationSeverity_MAX = 3,
};

enum class ENiagaraVariantMode {
    None = 0,
    Object = 1,
    DataInterface = 2,
    Bytes = 3,
    ENiagaraVariantMode_MAX = 4,
};

enum class ENiagartaDataChannelReadResult {
    Success = 0,
    Failure = 1,
    ENiagartaDataChannelReadResult_MAX = 2,
};

enum class ENiagraDataChannel_IslandMode {
    AlignedStatic = 0,
    Dynamic = 1,
    ENiagraDataChannel_MAX = 2,
};

enum class EParticleAllocationMode {
    AutomaticEstimate = 0,
    ManualEstimate = 1,
    FixedCount = 2,
    EParticleAllocationMode_MAX = 3,
};

enum class EScriptExecutionMode {
    EveryParticle = 0,
    SpawnedParticles = 1,
    SingleParticle = 2,
    EScriptExecutionMode_MAX = 3,
};

enum class ESetResolutionMethod {
    Independent = 0,
    MaxAxis = 1,
    CellSize = 2,
    ESetResolutionMethod_MAX = 3,
};

enum class EUnusedAttributeBehaviour {
    Copy = 0,
    Zero = 1,
    None = 2,
    MarkInvalid = 3,
    PassThrough = 4,
    EUnusedAttributeBehaviour_MAX = 5,
};

enum class EVolumeCacheType {
    OpenVDB = 0,
    EVolumeCacheType_MAX = 1,
};

