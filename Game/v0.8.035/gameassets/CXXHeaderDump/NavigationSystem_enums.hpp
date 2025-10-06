enum class EHeightFieldRenderMode {
    Solid = 0,
    Walkable = 1,
    EHeightFieldRenderMode_MAX = 2,
};

enum class ELinkGenerationDebugFlags {
    WalkableSurface = 1,
    WalkableBorders = 2,
    SelectedEdge = 4,
    SelectedEdgeTrajectory = 8,
    SelectedEdgeLandingSamples = 16,
    SelectedEdgeCollisions = 32,
    Links = 64,
    FilteredLinks = 128,
    ELinkGenerationDebugFlags_MAX = 129,
};

namespace ENavCostDisplay {
    enum Type {
        TotalCost = 0,
        HeuristicOnly = 1,
        RealCostOnly = 2,
        ENavCostDisplay_MAX = 3,
    };
}

enum class ENavLinkBuilderFlags {
    CreateCenterPointLink = 1,
    CreateExtremityLink = 2,
    ENavLinkBuilderFlags_MAX = 3,
};

enum class ENavSystemOverridePolicy {
    Override = 0,
    Append = 1,
    Skip = 2,
    ENavSystemOverridePolicy_MAX = 3,
};

enum class ENavigationLedgeSlopeFilterMode {
    Recast = 0,
    None = 1,
    UseStepHeightFromAgentMaxSlope = 2,
    ENavigationLedgeSlopeFilterMode_MAX = 3,
};

namespace ERecastPartitioning {
    enum Type {
        Monotone = 0,
        Watershed = 1,
        ChunkyMonotone = 2,
        ERecastPartitioning_MAX = 3,
    };
}

enum class ERuntimeGenerationType {
    Static = 0,
    DynamicModifiersOnly = 1,
    Dynamic = 2,
    LegacyGeneration = 3,
    ERuntimeGenerationType_MAX = 4,
};

enum class ESubdivisionLOD {
    Low = 0,
    Medium = 1,
    High = 2,
    Ultra = 3,
    ESubdivisionLOD_MAX = 4,
};

