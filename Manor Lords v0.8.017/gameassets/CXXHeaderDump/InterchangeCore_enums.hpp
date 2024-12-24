enum class EInterchangeFactoryAssetType {
    None = 0,
    Textures = 1,
    Materials = 2,
    Meshes = 3,
    Animations = 4,
    Physics = 5,
    EInterchangeFactoryAssetType_MAX = 6,
};

enum class EInterchangeNodeContainerType {
    None = 0,
    TranslatedScene = 1,
    TranslatedAsset = 2,
    FactoryData = 3,
    EInterchangeNodeContainerType_MAX = 4,
};

enum class EInterchangeNodeUserInterfaceContext {
    None = 0,
    Preview = 1,
    EInterchangeNodeUserInterfaceContext_MAX = 2,
};

enum class EInterchangePipelineContext {
    None = 0,
    AssetImport = 1,
    AssetReimport = 2,
    SceneImport = 3,
    SceneReimport = 4,
    AssetCustomLODImport = 5,
    AssetCustomLODReimport = 6,
    AssetAlternateSkinningImport = 7,
    AssetAlternateSkinningReimport = 8,
    EInterchangePipelineContext_MAX = 9,
};

enum class EInterchangePipelineTask {
    PostTranslator = 0,
    PostFactory = 1,
    PostImport = 2,
    Export = 3,
    EInterchangePipelineTask_MAX = 4,
};

enum class EInterchangeResultType {
    Success = 0,
    Warning = 1,
    Error = 2,
    EInterchangeResultType_MAX = 3,
};

enum class EInterchangeTranslatorAssetType {
    None = 0,
    Textures = 1,
    Materials = 2,
    Meshes = 4,
    Animations = 8,
    EInterchangeTranslatorAssetType_MAX = 9,
};

enum class EInterchangeTranslatorType {
    Invalid = 0,
    Assets = 2,
    Actors = 4,
    Scenes = 6,
    EInterchangeTranslatorType_MAX = 7,
};

enum class EReimportStrategyFlags {
    ApplyNoProperties = 0,
    ApplyPipelineProperties = 1,
    ApplyEditorChangedProperties = 2,
    EReimportStrategyFlags_MAX = 3,
};

