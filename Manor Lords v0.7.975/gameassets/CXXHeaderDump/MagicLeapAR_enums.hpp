enum class ELuminARLineTraceChannel {
    None = 0,
    FeaturePoint = 1,
    InfinitePlane = 2,
    PlaneUsingExtent = 4,
    PlaneUsingBoundaryPolygon = 8,
    FeaturePointWithSurfaceNormal = 16,
    ELuminARLineTraceChannel_MAX = 17,
};

enum class ELuminARTrackingState {
    Tracking = 0,
    NotTracking = 1,
    StoppedTracking = 2,
    ELuminARTrackingState_MAX = 3,
};

