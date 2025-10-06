enum class EZoneGraphLaneRoutingCountRule {
    Any = 0,
    One = 1,
    Many = 2,
    EZoneGraphLaneRoutingCountRule_MAX = 3,
};

enum class EZoneGraphTags {
    MaxTags = 32,
    MaxTagIndex = 31,
    EZoneGraphTags_MAX = 33,
};

enum class EZoneLaneDirection {
    None = 0,
    Forward = 1,
    Backward = 2,
    EZoneLaneDirection_MAX = 3,
};

enum class EZoneLaneLinkFlags {
    None = 0,
    All = 255,
    Left = 1,
    Right = 2,
    Splitting = 4,
    Merging = 8,
    OppositeDirection = 16,
    EZoneLaneLinkFlags_MAX = 256,
};

enum class EZoneLaneLinkType {
    None = 0,
    All = 255,
    Outgoing = 1,
    Incoming = 2,
    Adjacent = 4,
    EZoneLaneLinkType_MAX = 256,
};

enum class EZoneLaneTagMaskComparison {
    Any = 0,
    All = 1,
    Not = 2,
    EZoneLaneTagMaskComparison_MAX = 3,
};

enum class EZoneShapeLaneConnectionRestrictions {
    None = 0,
    NoLeftTurn = 1,
    NoRightTurn = 2,
    OneLanePerDestination = 4,
    MergeLanesToOneDestinationLane = 8,
    EZoneShapeLaneConnectionRestrictions_MAX = 9,
};

enum class EZoneShapePolygonRoutingType {
    Bezier = 0,
    Arcs = 1,
    EZoneShapePolygonRoutingType_MAX = 2,
};

enum class FZoneShapePointType {
    Sharp = 0,
    Bezier = 1,
    AutoBezier = 2,
    LaneProfile = 3,
    FZoneShapePointType_MAX = 4,
};

enum class FZoneShapeType {
    Spline = 0,
    Polygon = 1,
    FZoneShapeType_MAX = 2,
};

